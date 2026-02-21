// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_bounce.h for the primary calling header

#ifndef VERILATED_VTOP_BOUNCE___024ROOT_H_
#define VERILATED_VTOP_BOUNCE___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_bounce__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_bounce___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_pix,0,0);
    VL_IN8(sim_rst,0,0);
    VL_IN8(key_up,0,0);
    VL_IN8(key_down,0,0);
    VL_IN8(key_left,0,0);
    VL_IN8(key_right,0,0);
    VL_OUT8(sdl_de,0,0);
    VL_OUT8(sdl_r,7,0);
    VL_OUT8(sdl_g,7,0);
    VL_OUT8(sdl_b,7,0);
    CData/*0:0*/ top_bounce__DOT____Vlvbound_h3244019d__0;
    CData/*0:0*/ top_bounce__DOT____Vlvbound_h95e02281__0;
    CData/*0:0*/ top_bounce__DOT____Vlvbound_h95d94e30__0;
    CData/*2:0*/ top_bounce__DOT____Vlvbound_h1232215e__0;
    CData/*2:0*/ top_bounce__DOT____Vlvbound_h785c1e77__0;
    CData/*0:0*/ top_bounce__DOT__de;
    CData/*0:0*/ top_bounce__DOT__frame;
    CData/*1:0*/ top_bounce__DOT__jumps;
    CData/*0:0*/ top_bounce__DOT__at_checkpoint;
    CData/*5:0*/ top_bounce__DOT__coins;
    CData/*4:0*/ top_bounce__DOT__blink_ctr;
    CData/*6:0*/ top_bounce__DOT__world_col;
    CData/*3:0*/ top_bounce__DOT__floor_row;
    CData/*3:0*/ top_bounce__DOT__ceil_row;
    CData/*2:0*/ top_bounce__DOT__floor_tile;
    CData/*2:0*/ top_bounce__DOT__player_tile;
    CData/*0:0*/ top_bounce__DOT__square;
    CData/*6:0*/ top_bounce__DOT__render_col;
    CData/*2:0*/ top_bounce__DOT__render_tile;
    CData/*0:0*/ top_bounce__DOT__hud_pixel;
    CData/*0:0*/ top_bounce__DOT__win_pixel;
    CData/*0:0*/ top_bounce__DOT__win_gold;
    CData/*0:0*/ top_bounce__DOT__win_border;
    CData/*0:0*/ top_bounce__DOT__win_retry_pixel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_pix__0;
    VL_OUT16(sdl_sx,9,0);
    VL_OUT16(sdl_sy,9,0);
    SData/*9:0*/ top_bounce__DOT__sx;
    SData/*9:0*/ top_bounce__DOT__sy;
    SData/*15:0*/ top_bounce__DOT__cam_x;
    SData/*9:0*/ top_bounce__DOT__qx;
    SData/*9:0*/ top_bounce__DOT__qy;
    SData/*15:0*/ top_bounce__DOT__qs;
    SData/*15:0*/ top_bounce__DOT__qy16;
    IData/*31:0*/ top_bounce__DOT__cc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlUnpacked<CData/*2:0*/, 80>, 15> top_bounce__DOT__bmap;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 80>, 15> top_bounce__DOT__coin_taken;
    VlUnpacked<IData/*19:0*/, 10> top_bounce__DOT__digit_bmap;
    VlUnpacked<IData/*19:0*/, 14> top_bounce__DOT__char_bmap;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlNBACommitQueue<VlUnpacked<VlUnpacked<CData/*0:0*/, 80>, 15>, false, CData/*0:0*/, 2> __VdlyCommitQueuetop_bounce__DOT__coin_taken;

    // INTERNAL VARIABLES
    Vtop_bounce__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_bounce___024root(Vtop_bounce__Syms* symsp, const char* namep);
    ~Vtop_bounce___024root();
    VL_UNCOPYABLE(Vtop_bounce___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
