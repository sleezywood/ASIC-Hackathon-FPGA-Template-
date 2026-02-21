`default_nettype none
`timescale 1ns / 1ps

/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */

module top_bounce #(parameter CORDW=10) (
    input  wire logic clk_pix,
    input  wire logic sim_rst,
    input  logic key_up,
    input  logic key_down,
    input  logic key_left,
    input  logic key_right,
    output      logic [CORDW-1:0] sdl_sx,
    output      logic [CORDW-1:0] sdl_sy,
    output      logic sdl_de,
    output      logic [7:0] sdl_r,
    output      logic [7:0] sdl_g,
    output      logic [7:0] sdl_b
);

    logic [CORDW-1:0] sx, sy;
    logic de;
    simple_480p display_inst (
        .clk_pix,
        .rst_pix(sim_rst),
        .sx, .sy,
        /* verilator lint_off PINCONNECTEMPTY */
        .hsync(), .vsync(),
        /* verilator lint_on PINCONNECTEMPTY */
        .de
    );

    localparam H_RES   = 640;
    localparam V_RES   = 480;
    localparam Q_SIZE  = 32;
    localparam gravity = 1;
    localparam TILE    = 32;

    logic frame;
    always_comb frame = (sy == V_RES && sx == 0);

    // =========================================================================
    // MAP — 80 cols x 15 rows
    // 0=empty  1=solid  2=hazard  3=coin  4=checkpoint
    // =========================================================================
    localparam MAP_COLS = 80;
    localparam MAP_ROWS = 15;

    logic [2:0] bmap [0:MAP_ROWS-1][0:MAP_COLS-1];
    logic coin_taken [0:MAP_ROWS-1][0:MAP_COLS-1];

    integer r, c;
    initial begin
        for (r = 0; r < MAP_ROWS; r++)
            for (c = 0; c < MAP_COLS; c++)
                bmap[r][c] = 0;

        for (c = 0; c < MAP_COLS; c++) bmap[14][c] = 1;

        // Section 1
        for (c = 2;  c <= 7;  c++) bmap[9][c] = 1;
        for (c = 3;  c <= 6;  c++) bmap[7][c] = 3;
        for (c = 10; c <= 15; c++) bmap[6][c] = 1;
        for (c = 11; c <= 14; c++) bmap[4][c] = 3;
        bmap[13][8]=2; bmap[13][9]=2;
        bmap[13][17]=2; bmap[13][18]=2; bmap[13][19]=2;

        // Section 2
        for (c = 20; c <= 24; c++) bmap[8][c] = 1;
        for (c = 27; c <= 31; c++) bmap[8][c] = 1;
        for (c = 34; c <= 38; c++) bmap[8][c] = 1;
        bmap[6][21]=3; bmap[6][22]=3; bmap[6][23]=3;
        bmap[6][28]=3; bmap[6][29]=3; bmap[6][30]=3;
        bmap[6][35]=3; bmap[6][36]=3; bmap[6][37]=3;
        bmap[7][24]=2; bmap[7][27]=2; bmap[7][34]=2; bmap[7][38]=2;
        bmap[13][25]=2; bmap[13][26]=2;
        bmap[13][32]=2; bmap[13][33]=2; bmap[13][39]=2;

        // Section 3
        for (c = 40; c <= 45; c++) bmap[12][c] = 1;
        for (c = 44; c <= 49; c++) bmap[9][c]  = 1;
        for (c = 48; c <= 53; c++) bmap[6][c]  = 1;
        for (c = 52; c <= 57; c++) bmap[3][c]  = 1;
        bmap[10][41]=3; bmap[10][42]=3; bmap[10][43]=3;
        bmap[7][45]=3;  bmap[7][46]=3;  bmap[7][47]=3;
        bmap[4][49]=3;  bmap[4][50]=3;  bmap[4][51]=3;
        bmap[1][53]=3;  bmap[1][54]=3;  bmap[1][55]=3;
        bmap[11][45]=2; bmap[8][49]=2;  bmap[5][53]=2;
        bmap[13][46]=2; bmap[13][47]=2; bmap[13][48]=2;
        bmap[13][50]=2; bmap[13][51]=2; bmap[13][52]=2;

        // Section 4
        for (c = 58; c <= 65; c++) bmap[5][c]  = 1;
        for (c = 66; c <= 70; c++) bmap[8][c]  = 1;
        for (c = 71; c <= 75; c++) bmap[11][c] = 1;
        bmap[3][59]=3; bmap[3][60]=3; bmap[3][61]=3;
        bmap[3][62]=3; bmap[3][63]=3; bmap[3][64]=3;
        bmap[6][67]=3; bmap[6][68]=3; bmap[6][69]=3;
        bmap[9][72]=3; bmap[9][73]=3; bmap[9][74]=3;
        bmap[4][65]=2; bmap[7][66]=2; bmap[7][70]=2; bmap[10][71]=2;
        bmap[13][58]=2; bmap[13][59]=2;
        bmap[13][66]=2; bmap[13][71]=2;
        bmap[13][77]=4; bmap[13][78]=4; bmap[13][79]=4;
        bmap[12][76]=3; bmap[12][77]=3; bmap[12][78]=3;
    
        for (r = 0; r < MAP_ROWS; r++)
            for (c = 0; c < MAP_COLS; c++)
                coin_taken[r][c] = 0;
    end

    // =========================================================================
    // Camera
    // =========================================================================
    localparam CAM_LOCK_X = 100;
    localparam CAM_MAX    = (MAP_COLS - 20) * TILE;

    logic [15:0] cam_x;
    logic [15:0] world_qx;
    assign world_qx = cam_x + qx;

    // =========================================================================
    // Player state
    // =========================================================================
    logic [CORDW-1:0]   qx, qy;
    logic signed [15:0] qs;
    logic [1:0]         jumps;
    logic               at_checkpoint;
    logic [5:0]         coins;
    logic [6:0]         last_coin_col;
    integer rr;
    integer cc;
    logic key_up_d;
    logic jump_pressed;

    // Blink counter for win screen
    logic [4:0]         blink_ctr;      // counts frames for blink effect

    logic signed [15:0] qx16, qy16;
    assign qx16 = {6'b0, qx};
    assign qy16 = {6'b0, qy};

    logic [6:0] world_col;
    assign world_col = world_qx[15:5];

    logic [3:0] floor_row, ceil_row;
    assign floor_row = (qy16 + qs + Q_SIZE) >> 5;
    assign ceil_row  = (qy16 - qs - Q_SIZE) >> 5;

    logic [2:0] floor_tile, ceil_tile, player_tile;
    assign floor_tile  = (world_col < MAP_COLS) ? bmap[floor_row][world_col] : 3'd0;
    assign ceil_tile   = (world_col < MAP_COLS) ? bmap[ceil_row][world_col]  : 3'd0;
    assign player_tile = (world_col < MAP_COLS) ? bmap[qy[9:5]][world_col]   : 3'd0;

    logic floor_solid, floor_hazard, floor_end, ceil_solid;
    // ── Horizontal hazard collision ───────────────────────────────────────────
    // Check the tile at the player's left and right edges, at their centre row
    logic [3:0] mid_row;
    assign mid_row = (qy16 + Q_SIZE/2) >> 5;

    logic [6:0] right_col, left_col;
    assign right_col = (world_qx + Q_SIZE) >> 5;   // tile at right edge
    assign left_col  = (world_qx > 0) ? (world_qx - 1) >> 5 : 7'd0;  // tile at left edge

    logic [2:0] right_tile, left_tile;
    assign right_tile = (right_col < MAP_COLS) ? bmap[mid_row][right_col] : 3'd0;
    assign left_tile  = (left_col  < MAP_COLS) ? bmap[mid_row][left_col]  : 3'd0;

    logic horiz_hazard;
    assign horiz_hazard = (right_tile == 3'd2) || (left_tile == 3'd2);

    assign floor_solid  = (floor_tile == 3'd1);
    assign floor_hazard = (floor_tile == 3'd2) || horiz_hazard;;
    assign floor_end    = (floor_tile == 3'd4);
    assign ceil_solid   = (ceil_tile  == 3'd1);
    // =========================================================================
    // 4x5 Bitmap font — digits 0-9 + letters Y O U W N C I S !
    // Each glyph = 20 bits, 5 rows of 4 cols, MSB = top-left
    // =========================================================================
    logic [19:0] digit_bmap [0:9];
    initial begin
        digit_bmap[0] = 20'b0110_1001_1001_1001_0110;
        digit_bmap[1] = 20'b0010_0110_0010_0010_0111;
        digit_bmap[2] = 20'b0110_1001_0010_0100_1111;
        digit_bmap[3] = 20'b1110_0001_0110_0001_1110;
        digit_bmap[4] = 20'b0001_0101_1001_1111_0001;
        digit_bmap[5] = 20'b1111_1000_1110_0001_1110;
        digit_bmap[6] = 20'b0110_1000_1110_1001_0110;
        digit_bmap[7] = 20'b1111_0001_0010_0100_0100;
        digit_bmap[8] = 20'b0110_1001_0110_1001_0110;
        digit_bmap[9] = 20'b0110_1001_0111_0001_0110;
    end

    // Extra glyphs: Y O U W N C I S ! R E T Y P (for "YOU WIN!" and "RETRY")
    // Index: 0=Y 1=O 2=U 3=W 4=N 5=C 6=I 7=S 8=! 9=R 10=E 11=T 12=P
    //        13=space
    logic [19:0] char_bmap [0:13];
    initial begin
        char_bmap[0]  = 20'b1001_1001_0110_0010_0010; // Y
        char_bmap[1]  = 20'b0110_1001_1001_1001_0110; // O
        char_bmap[2]  = 20'b1001_1001_1001_1001_0110; // U
        char_bmap[3]  = 20'b1001_1001_1111_1011_1001; // W
        char_bmap[4]  = 20'b1001_1101_1011_1001_1001; // N
        char_bmap[5]  = 20'b0110_1000_1000_1000_0110; // C
        char_bmap[6]  = 20'b0110_0010_0010_0010_0110; // I
        char_bmap[7]  = 20'b0111_1000_0110_0001_1110; // S
        char_bmap[8]  = 20'b0100_0100_0100_0000_0100; // !
        char_bmap[9]  = 20'b1110_1001_1110_1100_1010; // R
        char_bmap[10] = 20'b1111_1000_1110_1000_1111; // E
        char_bmap[11] = 20'b1111_0010_0010_0010_0010; // T
        char_bmap[12] = 20'b1110_1001_1110_1000_1000; // P
        char_bmap[13] = 20'b0000_0000_0000_0000_0000; // space
    end

    // =========================================================================
    // Physics
    // =========================================================================
    always_ff @(posedge clk_pix) begin
        if (sim_rst) begin
            qx            <= CAM_LOCK_X;
            qy            <= 10'd100;
            qs            <= 1;
            jumps         <= 2;
            cam_x         <= 0;
            coins         <= 0;
            at_checkpoint <= 0;
            last_coin_col <= 7'd127;
            blink_ctr     <= 0;
        end

        else if (frame) begin
            // Blink counter always ticks
            blink_ctr <= blink_ctr + 1;
            key_up_d <= key_up;
            jump_pressed <= key_up && !key_up_d;

            // Retry: press any key on win screen to restart
            if (at_checkpoint && (key_up || key_right || key_left)) begin
                qx            <= CAM_LOCK_X;
                qy            <= 10'd100;
                qs            <= 1;
                jumps         <= 2;
                cam_x         <= 0;
                coins         <= 0;
                at_checkpoint <= 0;
                last_coin_col <= 7'd127;
            end

            else if (!at_checkpoint) begin
                // Coin pickup
                if (player_tile == 3'd3 && 
                world_col < MAP_COLS &&
                !coin_taken[qy[9:5]][world_col]) begin
                    coin_taken[qy[9:5]][world_col] <= 1'b1;
                    coins         <= coins + 1;
                    last_coin_col <= world_col;
                end

                // Checkpoint
                if (floor_end)
                    at_checkpoint <= 1;

                // Vertical physics
                qs <= qs + gravity;

                if (floor_hazard) begin
                    qx            <= CAM_LOCK_X;
                    qy            <= 10'd100;
                    qs            <= 1;
                    jumps         <= 2;
                    cam_x         <= 0;
                    coins         <= 0;
                    last_coin_col <= 7'd127;
                    for (rr = 0; rr < MAP_ROWS; rr = rr + 1) begin
                        for (cc = 0; cc < MAP_COLS; cc = cc + 1) begin
                            coin_taken[rr][cc] = 1'b0;
                        end
                    end
                end
                else if (floor_solid) begin
                    qs    <= 0;
                    qy    <= ({6'b0, floor_row} << 5) - Q_SIZE;
                    jumps <= 2;
                end
                else if (ceil_solid && qs < 0) begin
                    qs <= 0;
                    qy <= qy - 1;
                end
                else begin
                    qy <= qy16 + qs;
                end

                // Horizontal + camera
                if (key_right && (qx + Q_SIZE + 5 < H_RES)) begin
                    if (qx >= CAM_LOCK_X && cam_x < CAM_MAX)
                        cam_x <= cam_x + 5;
                    else
                        qx <= qx + 5;
                end else if (key_left && (qx >= 5)) begin
                    if (qx <= CAM_LOCK_X && cam_x > 0)
                        cam_x <= cam_x - 5;
                    else
                        qx <= qx - 5;
                end

                // Jump
                if (jump_pressed && jumps > 0 && !ceil_solid) begin
                    if (jumps == 2)
                        qs <= -14;   // first jump
                    else
                        qs <= -10;   // second jump (weaker than first)
                    jumps <= jumps - 1;
            end
            end
        end
    end

    // =========================================================================
    // Rendering
    // =========================================================================
    logic square;
    always_comb begin
        square = (sx >= qx) && (sx < qx + Q_SIZE)
              && (sy >= qy) && (sy < qy + Q_SIZE);
    end

    logic [15:0] world_sx;
    assign world_sx = cam_x + sx;
    logic [6:0] render_col;
    assign render_col = world_sx[15:5];
    logic [2:0] render_tile;
    assign render_tile = (render_col < MAP_COLS) ? bmap[sy[9:5]][render_col] : 3'd0;

    // ── HUD coin counter (top-right, always visible) ─────────────────────────
    localparam HUD_X  = 540;
    localparam HUD_Y  = 10;
    localparam DSCALE = 2;

    logic [3:0] hud_tens, hud_ones;
    assign hud_tens = (coins >= 50) ? 4'd5 :
                      (coins >= 40) ? 4'd4 :
                      (coins >= 30) ? 4'd3 :
                      (coins >= 20) ? 4'd2 :
                      (coins >= 10) ? 4'd1 : 4'd0;
    assign hud_ones = coins - hud_tens * 10;

    logic [19:0] hud_tens_bm, hud_ones_bm;
    assign hud_tens_bm = digit_bmap[hud_tens];
    assign hud_ones_bm = digit_bmap[hud_ones];

    logic hud_pixel;
    logic [9:0] hdx, hdy;
    logic [2:0] hfc, hfr;
    always_comb begin
        hud_pixel = 0; hdx = 0; hdy = 0; hfc = 0; hfr = 0;
        // tens
        if (sx >= HUD_X && sx < HUD_X + 4*DSCALE &&
            sy >= HUD_Y && sy < HUD_Y + 5*DSCALE) begin
            hdx = sx - HUD_X; hdy = sy - HUD_Y;
            hfc = hdx / DSCALE; hfr = hdy / DSCALE;
            hud_pixel = hud_tens_bm[19 - (hfr*4 + hfc)];
        end
        // ones
        if (sx >= HUD_X+5*DSCALE && sx < HUD_X+9*DSCALE &&
            sy >= HUD_Y && sy < HUD_Y + 5*DSCALE) begin
            hdx = sx-(HUD_X+5*DSCALE); hdy = sy-HUD_Y;
            hfc = hdx/DSCALE; hfr = hdy/DSCALE;
            hud_pixel = hud_ones_bm[19-(hfr*4+hfc)];
        end
    end

    // =========================================================================
    // WIN SCREEN rendering
    // Layout (all centred on 640x480):
    //   Dark overlay
    //   Gold border box  (160,100) → (480,380)
    //   "YOU WIN!"  — large, row 1  (scale 5)
    //   "XX COINS"  — medium, row 2 (scale 3)
    //   "[ RETRY ]" — blinking,row3 (scale 3)
    // =========================================================================

    // Scale helpers
    // Large text: 5px per font pixel  → each char = 4*5=20px wide, 5*5=25px tall
    // Medium text: 3px per font pixel → each char = 12px wide, 15px tall

    localparam WIN_BOX_X1 = 120;
    localparam WIN_BOX_Y1 = 90;
    localparam WIN_BOX_X2 = 520;
    localparam WIN_BOX_Y2 = 390;

    // "YOU WIN!" — 8 chars, scale 5, starts at (WIN_BOX_X1+40, WIN_BOX_Y1+30)
    // chars: Y O U sp W I N !
    // index:  0 1 2 13  3  6  4  8
    localparam YW_X  = WIN_BOX_X1 + 20;
    localparam YW_Y  = WIN_BOX_Y1 + 30;
    localparam YW_SC = 5;
    localparam YW_CW = 4*YW_SC + YW_SC; // char width + gap

    // coin count line — "XX COINS" scale 3, below YOU WIN
    localparam CC_X  = WIN_BOX_X1 + 40;
    localparam CC_Y  = WIN_BOX_Y1 + 120;
    localparam CC_SC = 3;
    localparam CC_CW = 4*CC_SC + CC_SC;

    // RETRY line — scale 3, below coins
    localparam RT_X  = WIN_BOX_X1 + 80;
    localparam RT_Y  = WIN_BOX_Y1 + 210;
    localparam RT_SC = 4;
    localparam RT_CW = 4*RT_SC + RT_SC;

    // coin digits for win screen
    logic [3:0] win_tens, win_ones;
    assign win_tens = (coins >= 50) ? 4'd5 :
                      (coins >= 40) ? 4'd4 :
                      (coins >= 30) ? 4'd3 :
                      (coins >= 20) ? 4'd2 :
                      (coins >= 10) ? 4'd1 : 4'd0;
    assign win_ones = coins - win_tens * 10;

    // Helper function: is pixel (sx,sy) inside glyph at (gx,gy) with scale sc?
    // We inline this for each character in always_comb below.

    logic win_pixel, win_gold, win_border, win_bg;
    logic win_retry_pixel;
    logic blink_on;
    assign blink_on = blink_ctr[4];  // toggles every 16 frames

    // Pixel position relative to each text block
    logic [9:0] tx, ty;
    logic [2:0] fc, fr;
    logic [19:0] cur_glyph;

    // Task-like macro: given block origin (bx,by), scale (sc), char index in
    // sequence (ci), glyph bmap (gb) → returns 1 if current pixel is lit
    // We'll do each character manually for "YOU WIN!" and "RETRY"

    always_comb begin
        win_bg          = 0;
        win_border      = 0;
        win_gold        = 0;
        win_pixel       = 0;
        win_retry_pixel = 0;

        if (at_checkpoint) begin
            // Dark background overlay for the whole screen
            win_bg = 1;

            // Gold border box
            if ((sx == WIN_BOX_X1 || sx == WIN_BOX_X2 ||
                 sy == WIN_BOX_Y1 || sy == WIN_BOX_Y2) &&
                sx >= WIN_BOX_X1 && sx <= WIN_BOX_X2 &&
                sy >= WIN_BOX_Y1 && sy <= WIN_BOX_Y2)
                win_border = 1;

            // Inner box slightly lighter
            if (sx > WIN_BOX_X1 && sx < WIN_BOX_X2 &&
                sy > WIN_BOX_Y1 && sy < WIN_BOX_Y2)
                win_gold = 1;
        end
    end

    // Separate comb block for text pixels (avoids variable reuse issues)
    logic [9:0] wtx, wty;
    logic [2:0] wfc, wfr;

    // "YOU WIN!" characters at YW_Y, scale YW_SC
    // Y=char_bmap[0], O=char_bmap[1], U=char_bmap[2], sp=char_bmap[13]
    // W=char_bmap[3], I=char_bmap[6], N=char_bmap[4], !=char_bmap[8]
    localparam [2:0] YW0=0, YW1=1, YW2=2, YW3=13, YW4=3, YW5=6, YW6=4, YW7=8;

    // "RETRY" characters, scale RT_SC
    // R=char_bmap[9], E=char_bmap[10], T=char_bmap[11], R, Y=char_bmap[0]
    localparam [3:0] RT0=9, RT1=10, RT2=11, RT3=9, RT4=0;

    always_comb begin
        win_pixel       = 0;
        win_retry_pixel = 0;
        wtx = 0; wty = 0; wfc = 0; wfr = 0;

        if (at_checkpoint) begin
            // ── "YOU WIN!" ────────────────────────────────────────────────
            // Each char occupies 4*YW_SC wide, gap of YW_SC between chars
            // Char 0: Y
            if (sx>=YW_X+0*YW_CW && sx<YW_X+0*YW_CW+4*YW_SC &&
                sy>=YW_Y && sy<YW_Y+5*YW_SC) begin
                wtx=sx-(YW_X+0*YW_CW); wty=sy-YW_Y;
                wfc=wtx/YW_SC; wfr=wty/YW_SC;
                if (char_bmap[YW0][19-(wfr*4+wfc)]) win_pixel=1;
            end
            // Char 1: O
            if (sx>=YW_X+1*YW_CW && sx<YW_X+1*YW_CW+4*YW_SC &&
                sy>=YW_Y && sy<YW_Y+5*YW_SC) begin
                wtx=sx-(YW_X+1*YW_CW); wty=sy-YW_Y;
                wfc=wtx/YW_SC; wfr=wty/YW_SC;
                if (char_bmap[YW1][19-(wfr*4+wfc)]) win_pixel=1;
            end
            // Char 2: U
            if (sx>=YW_X+2*YW_CW && sx<YW_X+2*YW_CW+4*YW_SC &&
                sy>=YW_Y && sy<YW_Y+5*YW_SC) begin
                wtx=sx-(YW_X+2*YW_CW); wty=sy-YW_Y;
                wfc=wtx/YW_SC; wfr=wty/YW_SC;
                if (char_bmap[YW2][19-(wfr*4+wfc)]) win_pixel=1;
            end
            // Char 3: space — skip
            // Char 4: W
            if (sx>=YW_X+4*YW_CW && sx<YW_X+4*YW_CW+4*YW_SC &&
                sy>=YW_Y && sy<YW_Y+5*YW_SC) begin
                wtx=sx-(YW_X+4*YW_CW); wty=sy-YW_Y;
                wfc=wtx/YW_SC; wfr=wty/YW_SC;
                if (char_bmap[YW4][19-(wfr*4+wfc)]) win_pixel=1;
            end
            // Char 5: I
            if (sx>=YW_X+5*YW_CW && sx<YW_X+5*YW_CW+4*YW_SC &&
                sy>=YW_Y && sy<YW_Y+5*YW_SC) begin
                wtx=sx-(YW_X+5*YW_CW); wty=sy-YW_Y;
                wfc=wtx/YW_SC; wfr=wty/YW_SC;
                if (char_bmap[YW5][19-(wfr*4+wfc)]) win_pixel=1;
            end
            // Char 6: N
            if (sx>=YW_X+6*YW_CW && sx<YW_X+6*YW_CW+4*YW_SC &&
                sy>=YW_Y && sy<YW_Y+5*YW_SC) begin
                wtx=sx-(YW_X+6*YW_CW); wty=sy-YW_Y;
                wfc=wtx/YW_SC; wfr=wty/YW_SC;
                if (char_bmap[YW6][19-(wfr*4+wfc)]) win_pixel=1;
            end
            // Char 7: !
            if (sx>=YW_X+7*YW_CW && sx<YW_X+7*YW_CW+4*YW_SC &&
                sy>=YW_Y && sy<YW_Y+5*YW_SC) begin
                wtx=sx-(YW_X+7*YW_CW); wty=sy-YW_Y;
                wfc=wtx/YW_SC; wfr=wty/YW_SC;
                if (char_bmap[YW7][19-(wfr*4+wfc)]) win_pixel=1;
            end

            // ── coin count digits (medium, scale CC_SC) ───────────────────
            // tens digit
            if (sx>=CC_X && sx<CC_X+4*CC_SC &&
                sy>=CC_Y && sy<CC_Y+5*CC_SC) begin
                wtx=sx-CC_X; wty=sy-CC_Y;
                wfc=wtx/CC_SC; wfr=wty/CC_SC;
                if (digit_bmap[win_tens][19-(wfr*4+wfc)]) win_pixel=1;
            end
            // ones digit
            if (sx>=CC_X+5*CC_SC && sx<CC_X+9*CC_SC &&
                sy>=CC_Y && sy<CC_Y+5*CC_SC) begin
                wtx=sx-(CC_X+5*CC_SC); wty=sy-CC_Y;
                wfc=wtx/CC_SC; wfr=wty/CC_SC;
                if (digit_bmap[win_ones][19-(wfr*4+wfc)]) win_pixel=1;
            end
            // " COINS" — C O I N S after the digits
            // C at offset 10*CC_SC
            if (sx>=CC_X+10*CC_SC && sx<CC_X+10*CC_SC+4*CC_SC &&
                sy>=CC_Y && sy<CC_Y+5*CC_SC) begin
                wtx=sx-(CC_X+10*CC_SC); wty=sy-CC_Y;
                wfc=wtx/CC_SC; wfr=wty/CC_SC;
                if (char_bmap[5][19-(wfr*4+wfc)]) win_pixel=1;  // C
            end
            if (sx>=CC_X+15*CC_SC && sx<CC_X+15*CC_SC+4*CC_SC &&
                sy>=CC_Y && sy<CC_Y+5*CC_SC) begin
                wtx=sx-(CC_X+15*CC_SC); wty=sy-CC_Y;
                wfc=wtx/CC_SC; wfr=wty/CC_SC;
                if (char_bmap[1][19-(wfr*4+wfc)]) win_pixel=1;  // O
            end
            if (sx>=CC_X+20*CC_SC && sx<CC_X+20*CC_SC+4*CC_SC &&
                sy>=CC_Y && sy<CC_Y+5*CC_SC) begin
                wtx=sx-(CC_X+20*CC_SC); wty=sy-CC_Y;
                wfc=wtx/CC_SC; wfr=wty/CC_SC;
                if (char_bmap[6][19-(wfr*4+wfc)]) win_pixel=1;  // I
            end
            if (sx>=CC_X+25*CC_SC && sx<CC_X+25*CC_SC+4*CC_SC &&
                sy>=CC_Y && sy<CC_Y+5*CC_SC) begin
                wtx=sx-(CC_X+25*CC_SC); wty=sy-CC_Y;
                wfc=wtx/CC_SC; wfr=wty/CC_SC;
                if (char_bmap[4][19-(wfr*4+wfc)]) win_pixel=1;  // N
            end
            if (sx>=CC_X+30*CC_SC && sx<CC_X+30*CC_SC+4*CC_SC &&
                sy>=CC_Y && sy<CC_Y+5*CC_SC) begin
                wtx=sx-(CC_X+30*CC_SC); wty=sy-CC_Y;
                wfc=wtx/CC_SC; wfr=wty/CC_SC;
                if (char_bmap[7][19-(wfr*4+wfc)]) win_pixel=1;  // S
            end

            // ── RETRY button — blinking, scale RT_SC ─────────────────────
            // Draw button box
            // R E T R Y
            if (blink_on) begin
                if (sx>=RT_X && sx<RT_X+4*RT_SC &&
                    sy>=RT_Y && sy<RT_Y+5*RT_SC) begin
                    wtx=sx-RT_X; wty=sy-RT_Y;
                    wfc=wtx/RT_SC; wfr=wty/RT_SC;
                    if (char_bmap[9][19-(wfr*4+wfc)]) win_retry_pixel=1;  // R
                end
                if (sx>=RT_X+5*RT_SC && sx<RT_X+9*RT_SC &&
                    sy>=RT_Y && sy<RT_Y+5*RT_SC) begin
                    wtx=sx-(RT_X+5*RT_SC); wty=sy-RT_Y;
                    wfc=wtx/RT_SC; wfr=wty/RT_SC;
                    if (char_bmap[10][19-(wfr*4+wfc)]) win_retry_pixel=1; // E
                end
                if (sx>=RT_X+10*RT_SC && sx<RT_X+14*RT_SC &&
                    sy>=RT_Y && sy<RT_Y+5*RT_SC) begin
                    wtx=sx-(RT_X+10*RT_SC); wty=sy-RT_Y;
                    wfc=wtx/RT_SC; wfr=wty/RT_SC;
                    if (char_bmap[11][19-(wfr*4+wfc)]) win_retry_pixel=1; // T
                end
                if (sx>=RT_X+15*RT_SC && sx<RT_X+19*RT_SC &&
                    sy>=RT_Y && sy<RT_Y+5*RT_SC) begin
                    wtx=sx-(RT_X+15*RT_SC); wty=sy-RT_Y;
                    wfc=wtx/RT_SC; wfr=wty/RT_SC;
                    if (char_bmap[9][19-(wfr*4+wfc)]) win_retry_pixel=1;  // R
                end
                if (sx>=RT_X+20*RT_SC && sx<RT_X+24*RT_SC &&
                    sy>=RT_Y && sy<RT_Y+5*RT_SC) begin
                    wtx=sx-(RT_X+20*RT_SC); wty=sy-RT_Y;
                    wfc=wtx/RT_SC; wfr=wty/RT_SC;
                    if (char_bmap[0][19-(wfr*4+wfc)]) win_retry_pixel=1;  // Y
                end
            end
        end
    end

    // =========================================================================
    // Colour selection
    // =========================================================================
    logic [3:0] paint_r, paint_g, paint_b;
    always_comb begin
        if (at_checkpoint) begin
            // Win screen layers
            if (win_retry_pixel) begin
                // Blinking RETRY — bright cyan
                paint_r = 4'h0; paint_g = 4'hF; paint_b = 4'hF;
            end else if (win_pixel) begin
                // Text — bright gold/yellow
                paint_r = 4'hF; paint_g = 4'hE; paint_b = 4'h0;
            end else if (win_border) begin
                // Box border — bright gold
                paint_r = 4'hF; paint_g = 4'hA; paint_b = 4'h0;
            end else if (win_gold) begin
                // Box interior — dark navy
                paint_r = 4'h0; paint_g = 4'h1; paint_b = 4'h3;
            end else begin
                // Screen outside box — very dark
                paint_r = 4'h0; paint_g = 4'h0; paint_b = 4'h1;
            end
        end else begin
            // Normal gameplay
            if (hud_pixel) begin
                paint_r = 4'hF; paint_g = 4'hF; paint_b = 4'h0;  // yellow HUD
            end else if (square) begin
                paint_r = 4'hF; paint_g = 4'hF; paint_b = 4'hF;  // white player
            end else if (render_tile == 3'd2) begin
                paint_r = 4'hF; paint_g = 4'h0; paint_b = 4'h0;  // red hazard
            end else if (render_tile == 3'd3 &&
            !coin_taken[sy[9:5]][render_col]) begin
                paint_r = 4'h0; paint_g = 4'hF; paint_b = 4'hF;  // cyan coin
            end else if (render_tile == 3'd4) begin
                paint_r = 4'h0; paint_g = 4'hF; paint_b = 4'h0;  // green checkpoint
            end else if (render_tile == 3'd1) begin
                paint_r = 4'hF; paint_g = 4'hC; paint_b = 4'h0;  // yellow platform
            end else begin
                paint_r = 4'h0; paint_g = 4'h0; paint_b = 4'h0;  // black bg
            end
        end
    end

    logic [3:0] display_r, display_g, display_b;
    always_comb begin
        display_r = de ? paint_r : 4'h0;
        display_g = de ? paint_g : 4'h0;
        display_b = de ? paint_b : 4'h0;
    end

    always_ff @(posedge clk_pix) begin
        sdl_sx <= sx;
        sdl_sy <= sy;
        sdl_de <= de;
        sdl_r  <= {2{display_r}};
        sdl_g  <= {2{display_g}};
        sdl_b  <= {2{display_b}};
    end

endmodule

// =============================================================================
module simple_480p (
    input  wire logic clk_pix,
    input  wire logic rst_pix,
    output      logic [9:0] sx,
    output      logic [9:0] sy,
    output      logic hsync,
    output      logic vsync,
    output      logic de
);
    parameter HA_END = 639;
    parameter HS_STA = HA_END + 16;
    parameter HS_END = HS_STA + 96;
    parameter LINE   = 799;
    parameter VA_END = 479;
    parameter VS_STA = VA_END + 10;
    parameter VS_END = VS_STA + 2;
    parameter SCREEN = 524;

    always_comb begin
        hsync = ~(sx >= HS_STA && sx < HS_END);
        vsync = ~(sy >= VS_STA && sy < VS_END);
        de    = (sx <= HA_END && sy <= VA_END);
    end

    always_ff @(posedge clk_pix) begin
        if (sx == LINE) begin
            sx <= 0;
            sy <= (sy == SCREEN) ? 0 : sy + 1;
        end else begin
            sx <= sx + 1;
        end
        if (rst_pix) begin
            sx <= 0;
            sy <= 0;
        end
    end
endmodule

/* verilator lint_on WIDTHEXPAND */
/* verilator lint_on WIDTHTRUNC */