// Project F: Racing the Beam - Bounce (Verilator SDL)
// (C)2023 Will Green, open source hardware released under the MIT License
// Learn more at https://projectf.io/posts/racing-the-beam/

`default_nettype none
`timescale 1ns / 1ps

module top_bounce #(parameter CORDW=10) (  // coordinate width
    input  wire logic clk_pix,             // pixel clock
    input  wire logic sim_rst,             // sim reset
    input  logic key_up,
    input  logic key_down,
    input  logic key_left,
    input  logic key_right,
    output      logic [CORDW-1:0] sdl_sx,  // horizontal SDL position
    output      logic [CORDW-1:0] sdl_sy,  // vertical SDL position
    output      logic sdl_de,              // data enable (low in blanking interval)
    output      logic [7:0] sdl_r,         // 8-bit red
    output      logic [7:0] sdl_g,         // 8-bit green
    output      logic [7:0] sdl_b          // 8-bit blue
    );

    // display sync signals and coordinates
    logic [CORDW-1:0] sx, sy;
    logic de;
    simple_480p display_inst (
        .clk_pix,
        .rst_pix(sim_rst),
        .sx,
        .sy,
        /* verilator lint_off PINCONNECTEMPTY */
        .hsync(),
        .vsync(),
        /* verilator lint_on PINCONNECTEMPTY */
        .de
    );

    // screen dimensions (must match display_inst)
    localparam H_RES = 640;  // horizontal screen resolution
    localparam V_RES = 480;  // vertical screen resolution

    logic frame;  // high for one clock tick at the start of vertical blanking
    always_comb frame = (sy == V_RES && sx == 0);

    // frame counter lets us to slow down the action
    localparam FRAME_NUM = 1;  // slow-mo: animate every N frames
    logic [$clog2(FRAME_NUM):0] cnt_frame;  // frame counter
    always_ff @(posedge clk_pix) begin
        if (frame) cnt_frame <= (cnt_frame == FRAME_NUM-1) ? 0 : cnt_frame + 1;
    end

    // square parameters
    localparam Q_SIZE = 20;   // size in pixels
    logic [CORDW-1:0] qx, qy;  // position (origin at top left)
    logic qdx, qdy;            // direction: 0 is right/down
    logic [CORDW-1:0] qs = 1;  // speed in pixels/frame

    // update square position once per frame
    always_ff @(posedge clk_pix) begin
        if (frame) begin

            // move right
            if (key_right && (qx + Q_SIZE + qs < H_RES))
                qx <= qx + qs;

            // move left
            else if (key_left && (qx >= qs))
                qx <= qx - qs;

            // move down
            if (key_down && (qy + Q_SIZE + qs < V_RES))
                qy <= qy + qs;

            // move up
            else if (key_up && (qy >= qs))
                qy <= qy - qs;

        end
    end




    // define a square with screen coordinates
    logic square;
    always_comb begin
        square = (sx >= qx) && (sx < qx + Q_SIZE) && (sy >= qy) && (sy < qy + Q_SIZE);
    end

    // paint colour: white inside square, blue outside
    logic [3:0] paint_r, paint_g, paint_b;
    always_comb begin
        paint_r = (square) ? 4'hF : 4'h1;
        paint_g = (square) ? 4'hF : 4'h3;
        paint_b = (square) ? 4'hF : 4'h7;
    end

    // display colour: paint colour but black in blanking interval
    logic [3:0] display_r, display_g, display_b;
    always_comb begin
        display_r = (de) ? paint_r : 4'h0;
        display_g = (de) ? paint_g : 4'h0;
        display_b = (de) ? paint_b : 4'h0;
    end

    // SDL output (8 bits per colour channel)
    always_ff @(posedge clk_pix) begin
        sdl_sx <= sx;
        sdl_sy <= sy;
        sdl_de <= de;
        sdl_r <= {2{display_r}};
        sdl_g <= {2{display_g}};
        sdl_b <= {2{display_b}};
    end
endmodule

module simple_480p (
    input  wire logic clk_pix,   // pixel clock
    input  wire logic rst_pix,   // reset in pixel clock domain
    output      logic [9:0] sx,  // horizontal screen position
    output      logic [9:0] sy,  // vertical screen position
    output      logic hsync,     // horizontal sync
    output      logic vsync,     // vertical sync
    output      logic de         // data enable (low in blanking interval)
    );

    // horizontal timings
    parameter HA_END = 639;           // end of active pixels
    parameter HS_STA = HA_END + 16;   // sync starts after front porch
    parameter HS_END = HS_STA + 96;   // sync ends
    parameter LINE   = 799;           // last pixel on line (after back porch)

    // vertical timings
    parameter VA_END = 479;           // end of active pixels
    parameter VS_STA = VA_END + 10;   // sync starts after front porch
    parameter VS_END = VS_STA + 2;    // sync ends
    parameter SCREEN = 524;           // last line on screen (after back porch)

    always_comb begin
        hsync = ~(sx >= HS_STA && sx < HS_END);  // invert: negative polarity
        vsync = ~(sy >= VS_STA && sy < VS_END);  // invert: negative polarity
        de = (sx <= HA_END && sy <= VA_END);
    end

    // calculate horizontal and vertical screen position
    always_ff @(posedge clk_pix) begin
        if (sx == LINE) begin  // last pixel on line?
            sx <= 0;
            sy <= (sy == SCREEN) ? 0 : sy + 1;  // last line on screen?
        end else begin
            sx <= sx + 1;
        end
        if (rst_pix) begin
            sx <= 0;
            sy <= 0;
        end
    end
endmodule