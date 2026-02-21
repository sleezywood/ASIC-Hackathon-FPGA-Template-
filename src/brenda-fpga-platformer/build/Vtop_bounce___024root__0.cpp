// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_bounce.h for the primary calling header

#include "Vtop_bounce__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_bounce___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop_bounce___024root___eval_triggers__act(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_triggers__act\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk_pix) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_pix__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_pix__0 = vlSelfRef.clk_pix;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_bounce___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop_bounce___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*3:0*/, 64> Vtop_bounce__ConstPool__TABLE_h4dda5b44_0;

void Vtop_bounce___024root___nba_sequent__TOP__0(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___nba_sequent__TOP__0\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ top_bounce__DOT__hdx;
    top_bounce__DOT__hdx = 0;
    SData/*9:0*/ top_bounce__DOT__hdy;
    top_bounce__DOT__hdy = 0;
    CData/*2:0*/ top_bounce__DOT__hfc;
    top_bounce__DOT__hfc = 0;
    CData/*2:0*/ top_bounce__DOT__hfr;
    top_bounce__DOT__hfr = 0;
    CData/*3:0*/ top_bounce__DOT__win_tens;
    top_bounce__DOT__win_tens = 0;
    CData/*3:0*/ top_bounce__DOT__win_ones;
    top_bounce__DOT__win_ones = 0;
    SData/*9:0*/ top_bounce__DOT__wtx;
    top_bounce__DOT__wtx = 0;
    SData/*9:0*/ top_bounce__DOT__wty;
    top_bounce__DOT__wty = 0;
    CData/*2:0*/ top_bounce__DOT__wfc;
    top_bounce__DOT__wfc = 0;
    CData/*2:0*/ top_bounce__DOT__wfr;
    top_bounce__DOT__wfr = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*9:0*/ __Vdly__top_bounce__DOT__qx;
    __Vdly__top_bounce__DOT__qx = 0;
    SData/*9:0*/ __Vdly__top_bounce__DOT__qy;
    __Vdly__top_bounce__DOT__qy = 0;
    SData/*15:0*/ __Vdly__top_bounce__DOT__qs;
    __Vdly__top_bounce__DOT__qs = 0;
    CData/*1:0*/ __Vdly__top_bounce__DOT__jumps;
    __Vdly__top_bounce__DOT__jumps = 0;
    SData/*15:0*/ __Vdly__top_bounce__DOT__cam_x;
    __Vdly__top_bounce__DOT__cam_x = 0;
    CData/*5:0*/ __Vdly__top_bounce__DOT__coins;
    __Vdly__top_bounce__DOT__coins = 0;
    CData/*0:0*/ __Vdly__top_bounce__DOT__at_checkpoint;
    __Vdly__top_bounce__DOT__at_checkpoint = 0;
    CData/*4:0*/ __Vdly__top_bounce__DOT__blink_ctr;
    __Vdly__top_bounce__DOT__blink_ctr = 0;
    SData/*9:0*/ __Vdly__top_bounce__DOT__sy;
    __Vdly__top_bounce__DOT__sy = 0;
    SData/*9:0*/ __Vdly__top_bounce__DOT__sx;
    __Vdly__top_bounce__DOT__sx = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v0;
    __VdlyVal__top_bounce__DOT__coin_taken__v0 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v0;
    __VdlyDim0__top_bounce__DOT__coin_taken__v0 = 0;
    CData/*3:0*/ __VdlyDim1__top_bounce__DOT__coin_taken__v0;
    __VdlyDim1__top_bounce__DOT__coin_taken__v0 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v1;
    __VdlyVal__top_bounce__DOT__coin_taken__v1 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v1;
    __VdlyDim0__top_bounce__DOT__coin_taken__v1 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v2;
    __VdlyVal__top_bounce__DOT__coin_taken__v2 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v2;
    __VdlyDim0__top_bounce__DOT__coin_taken__v2 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v3;
    __VdlyVal__top_bounce__DOT__coin_taken__v3 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v3;
    __VdlyDim0__top_bounce__DOT__coin_taken__v3 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v4;
    __VdlyVal__top_bounce__DOT__coin_taken__v4 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v4;
    __VdlyDim0__top_bounce__DOT__coin_taken__v4 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v5;
    __VdlyVal__top_bounce__DOT__coin_taken__v5 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v5;
    __VdlyDim0__top_bounce__DOT__coin_taken__v5 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v6;
    __VdlyVal__top_bounce__DOT__coin_taken__v6 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v6;
    __VdlyDim0__top_bounce__DOT__coin_taken__v6 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v7;
    __VdlyVal__top_bounce__DOT__coin_taken__v7 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v7;
    __VdlyDim0__top_bounce__DOT__coin_taken__v7 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v8;
    __VdlyVal__top_bounce__DOT__coin_taken__v8 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v8;
    __VdlyDim0__top_bounce__DOT__coin_taken__v8 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v9;
    __VdlyVal__top_bounce__DOT__coin_taken__v9 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v9;
    __VdlyDim0__top_bounce__DOT__coin_taken__v9 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v10;
    __VdlyVal__top_bounce__DOT__coin_taken__v10 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v10;
    __VdlyDim0__top_bounce__DOT__coin_taken__v10 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v11;
    __VdlyVal__top_bounce__DOT__coin_taken__v11 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v11;
    __VdlyDim0__top_bounce__DOT__coin_taken__v11 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v12;
    __VdlyVal__top_bounce__DOT__coin_taken__v12 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v12;
    __VdlyDim0__top_bounce__DOT__coin_taken__v12 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v13;
    __VdlyVal__top_bounce__DOT__coin_taken__v13 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v13;
    __VdlyDim0__top_bounce__DOT__coin_taken__v13 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v14;
    __VdlyVal__top_bounce__DOT__coin_taken__v14 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v14;
    __VdlyDim0__top_bounce__DOT__coin_taken__v14 = 0;
    CData/*0:0*/ __VdlyVal__top_bounce__DOT__coin_taken__v15;
    __VdlyVal__top_bounce__DOT__coin_taken__v15 = 0;
    CData/*6:0*/ __VdlyDim0__top_bounce__DOT__coin_taken__v15;
    __VdlyDim0__top_bounce__DOT__coin_taken__v15 = 0;
    // Body
    __Vdly__top_bounce__DOT__blink_ctr = vlSelfRef.top_bounce__DOT__blink_ctr;
    __Vdly__top_bounce__DOT__sy = vlSelfRef.top_bounce__DOT__sy;
    __Vdly__top_bounce__DOT__sx = vlSelfRef.top_bounce__DOT__sx;
    __Vdly__top_bounce__DOT__jumps = vlSelfRef.top_bounce__DOT__jumps;
    __Vdly__top_bounce__DOT__qs = vlSelfRef.top_bounce__DOT__qs;
    __Vdly__top_bounce__DOT__qx = vlSelfRef.top_bounce__DOT__qx;
    __Vdly__top_bounce__DOT__cam_x = vlSelfRef.top_bounce__DOT__cam_x;
    __Vdly__top_bounce__DOT__qy = vlSelfRef.top_bounce__DOT__qy;
    __Vdly__top_bounce__DOT__at_checkpoint = vlSelfRef.top_bounce__DOT__at_checkpoint;
    __Vdly__top_bounce__DOT__coins = vlSelfRef.top_bounce__DOT__coins;
    if ((0x031fU == (IData)(vlSelfRef.top_bounce__DOT__sx))) {
        __Vdly__top_bounce__DOT__sy = ((0x020cU == (IData)(vlSelfRef.top_bounce__DOT__sy))
                                        ? 0U : (0x000003ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.top_bounce__DOT__sy))));
        __Vdly__top_bounce__DOT__sx = 0U;
    } else {
        __Vdly__top_bounce__DOT__sx = (0x000003ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.top_bounce__DOT__sx)));
    }
    if (vlSelfRef.sim_rst) {
        __Vdly__top_bounce__DOT__blink_ctr = 0U;
        __Vdly__top_bounce__DOT__sy = 0U;
        __Vdly__top_bounce__DOT__sx = 0U;
    } else if (vlSelfRef.top_bounce__DOT__frame) {
        __Vdly__top_bounce__DOT__blink_ctr = (0x0000001fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.top_bounce__DOT__blink_ctr)));
    }
    if (vlSelfRef.sim_rst) {
        __Vdly__top_bounce__DOT__qx = 0x0064U;
        __Vdly__top_bounce__DOT__qy = 0x0064U;
        __Vdly__top_bounce__DOT__qs = 1U;
        __Vdly__top_bounce__DOT__jumps = 2U;
        __Vdly__top_bounce__DOT__cam_x = 0U;
        __Vdly__top_bounce__DOT__coins = 0U;
        __Vdly__top_bounce__DOT__at_checkpoint = 0U;
    } else if (vlSelfRef.top_bounce__DOT__frame) {
        if (((IData)(vlSelfRef.top_bounce__DOT__at_checkpoint) 
             & (((IData)(vlSelfRef.key_up) | (IData)(vlSelfRef.key_right)) 
                | (IData)(vlSelfRef.key_left)))) {
            __Vdly__top_bounce__DOT__qx = 0x0064U;
            __Vdly__top_bounce__DOT__qy = 0x0064U;
            __Vdly__top_bounce__DOT__qs = 1U;
            __Vdly__top_bounce__DOT__jumps = 2U;
            __Vdly__top_bounce__DOT__cam_x = 0U;
            __Vdly__top_bounce__DOT__coins = 0U;
            __Vdly__top_bounce__DOT__at_checkpoint = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.top_bounce__DOT__at_checkpoint)))) {
            if ((((3U == (IData)(vlSelfRef.top_bounce__DOT__player_tile)) 
                  & (0x50U > (IData)(vlSelfRef.top_bounce__DOT__world_col))) 
                 & (~ ((0x4fU >= (IData)(vlSelfRef.top_bounce__DOT__world_col)) 
                       && vlSelfRef.top_bounce__DOT__coin_taken
                       [((0x0eU >= (0x0000000fU & ((IData)(vlSelfRef.top_bounce__DOT__qy) 
                                                   >> 5U)))
                          ? (0x0000000fU & ((IData)(vlSelfRef.top_bounce__DOT__qy) 
                                            >> 5U))
                          : 0U)][vlSelfRef.top_bounce__DOT__world_col])))) {
                vlSelfRef.top_bounce__DOT____Vlvbound_h95e02281__0 = 1U;
                __Vdly__top_bounce__DOT__coins = (0x0000003fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.top_bounce__DOT__coins)));
                if (((0x4fU >= (IData)(vlSelfRef.top_bounce__DOT__world_col)) 
                     && (0x0eU >= (0x0000000fU & ((IData)(vlSelfRef.top_bounce__DOT__qy) 
                                                  >> 5U))))) {
                    __VdlyVal__top_bounce__DOT__coin_taken__v0 
                        = vlSelfRef.top_bounce__DOT____Vlvbound_h95e02281__0;
                    __VdlyDim0__top_bounce__DOT__coin_taken__v0 
                        = vlSelfRef.top_bounce__DOT__world_col;
                    __VdlyDim1__top_bounce__DOT__coin_taken__v0 
                        = (0x0000000fU & ((IData)(vlSelfRef.top_bounce__DOT__qy) 
                                          >> 5U));
                    vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v0, (IData)(__VdlyDim1__top_bounce__DOT__coin_taken__v0), __VdlyDim0__top_bounce__DOT__coin_taken__v0);
                }
            }
            if ((4U == (IData)(vlSelfRef.top_bounce__DOT__floor_tile))) {
                __Vdly__top_bounce__DOT__at_checkpoint = 1U;
            }
            __Vdly__top_bounce__DOT__qs = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + VL_EXTENDS_II(16,16, (IData)(vlSelfRef.top_bounce__DOT__qs))));
            if ((2U == (IData)(vlSelfRef.top_bounce__DOT__floor_tile))) {
                vlSelfRef.top_bounce__DOT__cc = 0U;
                __Vdly__top_bounce__DOT__qx = 0x0064U;
                __Vdly__top_bounce__DOT__qy = 0x0064U;
                __Vdly__top_bounce__DOT__qs = 1U;
                __Vdly__top_bounce__DOT__jumps = 2U;
                __Vdly__top_bounce__DOT__cam_x = 0U;
                __Vdly__top_bounce__DOT__coins = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v1 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v1 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v1, 0U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v1));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v2 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v2 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v2, 1U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v2));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v3 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v3 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v3, 2U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v3));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v4 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v4 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v4, 3U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v4));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v5 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v5 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v5, 4U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v5));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v6 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v6 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v6, 5U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v6));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v7 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v7 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v7, 6U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v7));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v8 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v8 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v8, 7U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v8));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v9 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v9 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v9, 8U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v9));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v10 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v10 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v10, 9U, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v10));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v11 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v11 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v11, 0x0aU, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v11));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v12 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v12 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v12, 0x0bU, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v12));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v13 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v13 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v13, 0x0cU, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v13));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v14 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v14 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v14, 0x0dU, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v14));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
                vlSelfRef.top_bounce__DOT__cc = 0U;
                while (VL_GTS_III(32, 0x00000050U, vlSelfRef.top_bounce__DOT__cc)) {
                    vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0 = 0U;
                    if (VL_LIKELY(((0x4fU >= (0x0000007fU 
                                              & vlSelfRef.top_bounce__DOT__cc))))) {
                        __VdlyVal__top_bounce__DOT__coin_taken__v15 
                            = vlSelfRef.top_bounce__DOT____Vlvbound_h3244019d__0;
                        __VdlyDim0__top_bounce__DOT__coin_taken__v15 
                            = (0x0000007fU & vlSelfRef.top_bounce__DOT__cc);
                        vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.enqueue(__VdlyVal__top_bounce__DOT__coin_taken__v15, 0x0eU, (IData)(__VdlyDim0__top_bounce__DOT__coin_taken__v15));
                    }
                    vlSelfRef.top_bounce__DOT__cc = 
                        ((IData)(1U) + vlSelfRef.top_bounce__DOT__cc);
                }
            } else if ((1U == (IData)(vlSelfRef.top_bounce__DOT__floor_tile))) {
                __Vdly__top_bounce__DOT__qs = 0U;
                __Vdly__top_bounce__DOT__qy = (0x000003ffU 
                                               & (VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.top_bounce__DOT__floor_row), 5U) 
                                                  - (IData)(0x0020U)));
                __Vdly__top_bounce__DOT__jumps = 2U;
            } else if (((1U == ((0x50U > (IData)(vlSelfRef.top_bounce__DOT__world_col))
                                 ? ((0x4fU >= (IData)(vlSelfRef.top_bounce__DOT__world_col))
                                     ? vlSelfRef.top_bounce__DOT__bmap
                                    [((0x0eU >= (IData)(vlSelfRef.top_bounce__DOT__ceil_row))
                                       ? (IData)(vlSelfRef.top_bounce__DOT__ceil_row)
                                       : 0U)][vlSelfRef.top_bounce__DOT__world_col]
                                     : 0U) : 0U)) & 
                        VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qs))))) {
                __Vdly__top_bounce__DOT__qy = (0x000003ffU 
                                               & ((IData)(vlSelfRef.top_bounce__DOT__qy) 
                                                  - (IData)(1U)));
                __Vdly__top_bounce__DOT__qs = 0U;
            } else {
                __Vdly__top_bounce__DOT__qy = (0x000003ffU 
                                               & ((IData)(vlSelfRef.top_bounce__DOT__qy16) 
                                                  + (IData)(vlSelfRef.top_bounce__DOT__qs)));
            }
            if (((IData)(vlSelfRef.key_right) & (0x00000280U 
                                                 > 
                                                 ((IData)(0x00000025U) 
                                                  + (IData)(vlSelfRef.top_bounce__DOT__qx))))) {
                if (((0x0064U <= (IData)(vlSelfRef.top_bounce__DOT__qx)) 
                     & (0x0780U > (IData)(vlSelfRef.top_bounce__DOT__cam_x)))) {
                    __Vdly__top_bounce__DOT__cam_x 
                        = (0x0000ffffU & ((IData)(5U) 
                                          + (IData)(vlSelfRef.top_bounce__DOT__cam_x)));
                } else {
                    __Vdly__top_bounce__DOT__qx = (0x000003ffU 
                                                   & ((IData)(5U) 
                                                      + (IData)(vlSelfRef.top_bounce__DOT__qx)));
                }
            } else if (((IData)(vlSelfRef.key_left) 
                        & (5U <= (IData)(vlSelfRef.top_bounce__DOT__qx)))) {
                if (((0x0064U >= (IData)(vlSelfRef.top_bounce__DOT__qx)) 
                     & (0U < (IData)(vlSelfRef.top_bounce__DOT__cam_x)))) {
                    __Vdly__top_bounce__DOT__cam_x 
                        = (0x0000ffffU & ((IData)(vlSelfRef.top_bounce__DOT__cam_x) 
                                          - (IData)(5U)));
                } else {
                    __Vdly__top_bounce__DOT__qx = (0x000003ffU 
                                                   & ((IData)(vlSelfRef.top_bounce__DOT__qx) 
                                                      - (IData)(5U)));
                }
            }
            if ((((IData)(vlSelfRef.key_up) & (0U < (IData)(vlSelfRef.top_bounce__DOT__jumps))) 
                 & (1U != ((0x50U > (IData)(vlSelfRef.top_bounce__DOT__world_col))
                            ? ((0x4fU >= (IData)(vlSelfRef.top_bounce__DOT__world_col))
                                ? vlSelfRef.top_bounce__DOT__bmap
                               [((0x0eU >= (IData)(vlSelfRef.top_bounce__DOT__ceil_row))
                                  ? (IData)(vlSelfRef.top_bounce__DOT__ceil_row)
                                  : 0U)][vlSelfRef.top_bounce__DOT__world_col]
                                : 0U) : 0U)))) {
                __Vdly__top_bounce__DOT__qs = ((2U 
                                                == (IData)(vlSelfRef.top_bounce__DOT__jumps))
                                                ? 0x0000ffecU
                                                : 0x0000ffe7U);
                __Vdly__top_bounce__DOT__jumps = (3U 
                                                  & ((IData)(vlSelfRef.top_bounce__DOT__jumps) 
                                                     - (IData)(1U)));
            }
        }
    }
    vlSelfRef.sdl_de = vlSelfRef.top_bounce__DOT__de;
    vlSelfRef.sdl_sx = vlSelfRef.top_bounce__DOT__sx;
    vlSelfRef.sdl_sy = vlSelfRef.top_bounce__DOT__sy;
    vlSelfRef.sdl_r = (0x000000ffU & ((((IData)(vlSelfRef.top_bounce__DOT__de)
                                         ? ((IData)(vlSelfRef.top_bounce__DOT__at_checkpoint)
                                             ? ((IData)(vlSelfRef.top_bounce__DOT__win_retry_pixel)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.top_bounce__DOT__win_pixel)
                                                  ? 0x0fU
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__win_border)
                                                   ? 0x0fU
                                                   : 0U)))
                                             : ((IData)(vlSelfRef.top_bounce__DOT__hud_pixel)
                                                 ? 0x0fU
                                                 : 
                                                ((IData)(vlSelfRef.top_bounce__DOT__square)
                                                  ? 0x0fU
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                   ? 0x0fU
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.top_bounce__DOT__render_tile)) 
                                                    & (~ 
                                                       ((0x4fU 
                                                         >= (IData)(vlSelfRef.top_bounce__DOT__render_col)) 
                                                        && vlSelfRef.top_bounce__DOT__coin_taken
                                                        [
                                                        ((0x0eU 
                                                          >= 
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                              >> 5U)))
                                                          ? 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                             >> 5U))
                                                          : 0U)]
                                                        [vlSelfRef.top_bounce__DOT__render_col])))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                      ? 0x0fU
                                                      : 0U)))))))
                                         : 0U) << 4U) 
                                      | ((IData)(vlSelfRef.top_bounce__DOT__de)
                                          ? ((IData)(vlSelfRef.top_bounce__DOT__at_checkpoint)
                                              ? ((IData)(vlSelfRef.top_bounce__DOT__win_retry_pixel)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__win_pixel)
                                                   ? 0x0fU
                                                   : 
                                                  ((IData)(vlSelfRef.top_bounce__DOT__win_border)
                                                    ? 0x0fU
                                                    : 0U)))
                                              : ((IData)(vlSelfRef.top_bounce__DOT__hud_pixel)
                                                  ? 0x0fU
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__square)
                                                   ? 0x0fU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                    ? 0x0fU
                                                    : 
                                                   (((3U 
                                                      == (IData)(vlSelfRef.top_bounce__DOT__render_tile)) 
                                                     & (~ 
                                                        ((0x4fU 
                                                          >= (IData)(vlSelfRef.top_bounce__DOT__render_col)) 
                                                         && vlSelfRef.top_bounce__DOT__coin_taken
                                                         [
                                                         ((0x0eU 
                                                           >= 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                               >> 5U)))
                                                           ? 
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                              >> 5U))
                                                           : 0U)]
                                                         [vlSelfRef.top_bounce__DOT__render_col])))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                       ? 0x0fU
                                                       : 0U)))))))
                                          : 0U)));
    vlSelfRef.sdl_g = (0x000000ffU & ((((IData)(vlSelfRef.top_bounce__DOT__de)
                                         ? ((IData)(vlSelfRef.top_bounce__DOT__at_checkpoint)
                                             ? ((IData)(vlSelfRef.top_bounce__DOT__win_retry_pixel)
                                                 ? 0x0fU
                                                 : 
                                                ((IData)(vlSelfRef.top_bounce__DOT__win_pixel)
                                                  ? 0x0eU
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__win_border)
                                                   ? 0x0aU
                                                   : 
                                                  ((IData)(vlSelfRef.top_bounce__DOT__win_gold)
                                                    ? 1U
                                                    : 0U))))
                                             : ((IData)(vlSelfRef.top_bounce__DOT__hud_pixel)
                                                 ? 0x0fU
                                                 : 
                                                ((IData)(vlSelfRef.top_bounce__DOT__square)
                                                  ? 0x0fU
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                   ? 0U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.top_bounce__DOT__render_tile)) 
                                                    & (~ 
                                                       ((0x4fU 
                                                         >= (IData)(vlSelfRef.top_bounce__DOT__render_col)) 
                                                        && vlSelfRef.top_bounce__DOT__coin_taken
                                                        [
                                                        ((0x0eU 
                                                          >= 
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                              >> 5U)))
                                                          ? 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                             >> 5U))
                                                          : 0U)]
                                                        [vlSelfRef.top_bounce__DOT__render_col])))
                                                    ? 0x0fU
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                     ? 0x0fU
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                      ? 0x0cU
                                                      : 0U)))))))
                                         : 0U) << 4U) 
                                      | ((IData)(vlSelfRef.top_bounce__DOT__de)
                                          ? ((IData)(vlSelfRef.top_bounce__DOT__at_checkpoint)
                                              ? ((IData)(vlSelfRef.top_bounce__DOT__win_retry_pixel)
                                                  ? 0x0fU
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__win_pixel)
                                                   ? 0x0eU
                                                   : 
                                                  ((IData)(vlSelfRef.top_bounce__DOT__win_border)
                                                    ? 0x0aU
                                                    : 
                                                   ((IData)(vlSelfRef.top_bounce__DOT__win_gold)
                                                     ? 1U
                                                     : 0U))))
                                              : ((IData)(vlSelfRef.top_bounce__DOT__hud_pixel)
                                                  ? 0x0fU
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__square)
                                                   ? 0x0fU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                    ? 0U
                                                    : 
                                                   (((3U 
                                                      == (IData)(vlSelfRef.top_bounce__DOT__render_tile)) 
                                                     & (~ 
                                                        ((0x4fU 
                                                          >= (IData)(vlSelfRef.top_bounce__DOT__render_col)) 
                                                         && vlSelfRef.top_bounce__DOT__coin_taken
                                                         [
                                                         ((0x0eU 
                                                           >= 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                               >> 5U)))
                                                           ? 
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                              >> 5U))
                                                           : 0U)]
                                                         [vlSelfRef.top_bounce__DOT__render_col])))
                                                     ? 0x0fU
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                      ? 0x0fU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                       ? 0x0cU
                                                       : 0U)))))))
                                          : 0U)));
    vlSelfRef.sdl_b = (0x000000ffU & ((((IData)(vlSelfRef.top_bounce__DOT__de)
                                         ? ((IData)(vlSelfRef.top_bounce__DOT__at_checkpoint)
                                             ? ((IData)(vlSelfRef.top_bounce__DOT__win_retry_pixel)
                                                 ? 0x0fU
                                                 : 
                                                ((IData)(vlSelfRef.top_bounce__DOT__win_pixel)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__win_border)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.top_bounce__DOT__win_gold)
                                                    ? 3U
                                                    : 1U))))
                                             : ((IData)(vlSelfRef.top_bounce__DOT__hud_pixel)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.top_bounce__DOT__square)
                                                  ? 0x0fU
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                   ? 0U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSelfRef.top_bounce__DOT__render_tile)) 
                                                    & (~ 
                                                       ((0x4fU 
                                                         >= (IData)(vlSelfRef.top_bounce__DOT__render_col)) 
                                                        && vlSelfRef.top_bounce__DOT__coin_taken
                                                        [
                                                        ((0x0eU 
                                                          >= 
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                              >> 5U)))
                                                          ? 
                                                         (0x0000000fU 
                                                          & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                             >> 5U))
                                                          : 0U)]
                                                        [vlSelfRef.top_bounce__DOT__render_col])))
                                                    ? 0x0fU
                                                    : 0U)))))
                                         : 0U) << 4U) 
                                      | ((IData)(vlSelfRef.top_bounce__DOT__de)
                                          ? ((IData)(vlSelfRef.top_bounce__DOT__at_checkpoint)
                                              ? ((IData)(vlSelfRef.top_bounce__DOT__win_retry_pixel)
                                                  ? 0x0fU
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__win_pixel)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.top_bounce__DOT__win_border)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.top_bounce__DOT__win_gold)
                                                     ? 3U
                                                     : 1U))))
                                              : ((IData)(vlSelfRef.top_bounce__DOT__hud_pixel)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.top_bounce__DOT__square)
                                                   ? 0x0fU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top_bounce__DOT__render_tile))
                                                    ? 0U
                                                    : 
                                                   (((3U 
                                                      == (IData)(vlSelfRef.top_bounce__DOT__render_tile)) 
                                                     & (~ 
                                                        ((0x4fU 
                                                          >= (IData)(vlSelfRef.top_bounce__DOT__render_col)) 
                                                         && vlSelfRef.top_bounce__DOT__coin_taken
                                                         [
                                                         ((0x0eU 
                                                           >= 
                                                           (0x0000000fU 
                                                            & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                               >> 5U)))
                                                           ? 
                                                          (0x0000000fU 
                                                           & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                              >> 5U))
                                                           : 0U)]
                                                         [vlSelfRef.top_bounce__DOT__render_col])))
                                                     ? 0x0fU
                                                     : 0U)))))
                                          : 0U)));
    vlSelfRef.top_bounce__DOT__blink_ctr = __Vdly__top_bounce__DOT__blink_ctr;
    vlSelfRef.top_bounce__DOT__jumps = __Vdly__top_bounce__DOT__jumps;
    vlSelfRef.top_bounce__DOT__qs = __Vdly__top_bounce__DOT__qs;
    vlSelfRef.top_bounce__DOT__qx = __Vdly__top_bounce__DOT__qx;
    vlSelfRef.top_bounce__DOT__cam_x = __Vdly__top_bounce__DOT__cam_x;
    vlSelfRef.top_bounce__DOT__qy = __Vdly__top_bounce__DOT__qy;
    vlSelfRef.top_bounce__DOT__coins = __Vdly__top_bounce__DOT__coins;
    vlSelfRef.top_bounce__DOT__sx = __Vdly__top_bounce__DOT__sx;
    vlSelfRef.__VdlyCommitQueuetop_bounce__DOT__coin_taken.commit(vlSelfRef.top_bounce__DOT__coin_taken);
    vlSelfRef.top_bounce__DOT__at_checkpoint = __Vdly__top_bounce__DOT__at_checkpoint;
    vlSelfRef.top_bounce__DOT__sy = __Vdly__top_bounce__DOT__sy;
    vlSelfRef.top_bounce__DOT__world_col = (0x0000007fU 
                                            & (((IData)(vlSelfRef.top_bounce__DOT__cam_x) 
                                                + (IData)(vlSelfRef.top_bounce__DOT__qx)) 
                                               >> 5U));
    vlSelfRef.top_bounce__DOT__qy16 = vlSelfRef.top_bounce__DOT__qy;
    vlSelfRef.top_bounce__DOT__ceil_row = (0x0000000fU 
                                           & (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qy)) 
                                                - VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qs))) 
                                               - (IData)(0x00000020U)) 
                                              >> 5U));
    vlSelfRef.top_bounce__DOT__floor_row = (0x0000000fU 
                                            & (((IData)(0x00000020U) 
                                                + (
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qy)) 
                                                   + 
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qs)))) 
                                               >> 5U));
    __Vtableidx1 = vlSelfRef.top_bounce__DOT__coins;
    top_bounce__DOT__win_tens = Vtop_bounce__ConstPool__TABLE_h4dda5b44_0
        [__Vtableidx1];
    vlSelfRef.top_bounce__DOT__render_col = (0x0000007fU 
                                             & (((IData)(vlSelfRef.top_bounce__DOT__cam_x) 
                                                 + (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                                                >> 5U));
    vlSelfRef.top_bounce__DOT__de = ((0x027fU >= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                                     & (0x01dfU >= (IData)(vlSelfRef.top_bounce__DOT__sy)));
    vlSelfRef.top_bounce__DOT__frame = ((0x01e0U == (IData)(vlSelfRef.top_bounce__DOT__sy)) 
                                        & (0U == (IData)(vlSelfRef.top_bounce__DOT__sx)));
    vlSelfRef.top_bounce__DOT__win_border = 0U;
    vlSelfRef.top_bounce__DOT__win_gold = 0U;
    vlSelfRef.top_bounce__DOT__square = (((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                          >= (IData)(vlSelfRef.top_bounce__DOT__qx)) 
                                         & (((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                             < ((IData)(0x00000020U) 
                                                + (IData)(vlSelfRef.top_bounce__DOT__qx))) 
                                            & (((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                >= (IData)(vlSelfRef.top_bounce__DOT__qy)) 
                                               & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                  < 
                                                  ((IData)(0x00000020U) 
                                                   + (IData)(vlSelfRef.top_bounce__DOT__qy))))));
    if ((0x50U > (IData)(vlSelfRef.top_bounce__DOT__world_col))) {
        if ((0x4fU >= (IData)(vlSelfRef.top_bounce__DOT__world_col))) {
            vlSelfRef.top_bounce__DOT__player_tile 
                = vlSelfRef.top_bounce__DOT__bmap[(
                                                   (0x0eU 
                                                    >= 
                                                    (0x0000000fU 
                                                     & ((IData)(vlSelfRef.top_bounce__DOT__qy) 
                                                        >> 5U)))
                                                    ? 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.top_bounce__DOT__qy) 
                                                       >> 5U))
                                                    : 0U)]
                [vlSelfRef.top_bounce__DOT__world_col];
            vlSelfRef.top_bounce__DOT__floor_tile = 
                vlSelfRef.top_bounce__DOT__bmap[((0x0eU 
                                                  >= (IData)(vlSelfRef.top_bounce__DOT__floor_row))
                                                  ? (IData)(vlSelfRef.top_bounce__DOT__floor_row)
                                                  : 0U)]
                [vlSelfRef.top_bounce__DOT__world_col];
        } else {
            vlSelfRef.top_bounce__DOT__player_tile = 0U;
            vlSelfRef.top_bounce__DOT__floor_tile = 0U;
        }
    } else {
        vlSelfRef.top_bounce__DOT__player_tile = 0U;
        vlSelfRef.top_bounce__DOT__floor_tile = 0U;
    }
    top_bounce__DOT__win_ones = (0x0000000fU & ((IData)(vlSelfRef.top_bounce__DOT__coins) 
                                                - ((IData)(0x0000000aU) 
                                                   * (IData)(top_bounce__DOT__win_tens))));
    vlSelfRef.top_bounce__DOT__render_tile = ((0x50U 
                                               > (IData)(vlSelfRef.top_bounce__DOT__render_col))
                                               ? ((0x4fU 
                                                   >= (IData)(vlSelfRef.top_bounce__DOT__render_col))
                                                   ? 
                                                  vlSelfRef.top_bounce__DOT__bmap
                                                  [
                                                  ((0x0eU 
                                                    >= 
                                                    (0x0000000fU 
                                                     & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                        >> 5U)))
                                                    ? 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                       >> 5U))
                                                    : 0U)]
                                                  [vlSelfRef.top_bounce__DOT__render_col]
                                                   : 0U)
                                               : 0U);
    vlSelfRef.top_bounce__DOT__hud_pixel = 0U;
    top_bounce__DOT__hdx = 0U;
    top_bounce__DOT__hdy = 0U;
    top_bounce__DOT__hfc = 0U;
    top_bounce__DOT__hfr = 0U;
    if (((((0x021cU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
           & (0x0224U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
          & (0x000aU <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
         & (0x0014U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
        top_bounce__DOT__hdx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                               - (IData)(0x021cU)));
        top_bounce__DOT__hdy = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                               - (IData)(0x000aU)));
        top_bounce__DOT__hfc = (7U & ((IData)(top_bounce__DOT__hdx) 
                                      >> 1U));
        top_bounce__DOT__hfr = (7U & ((IData)(top_bounce__DOT__hdy) 
                                      >> 1U));
        vlSelfRef.top_bounce__DOT__hud_pixel = ((0x13U 
                                                 >= 
                                                 (0x0000001fU 
                                                  & ((IData)(0x13U) 
                                                     - 
                                                     (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__hfr), 2U) 
                                                      + (IData)(top_bounce__DOT__hfc))))) 
                                                && (1U 
                                                    & (((9U 
                                                         >= (IData)(top_bounce__DOT__win_tens))
                                                         ? 
                                                        vlSelfRef.top_bounce__DOT__digit_bmap
                                                        [top_bounce__DOT__win_tens]
                                                         : 0U) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & ((IData)(0x13U) 
                                                           - 
                                                           (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__hfr), 2U) 
                                                            + (IData)(top_bounce__DOT__hfc)))))));
    }
    if (((((0x0226U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
           & (0x022eU > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
          & (0x000aU <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
         & (0x0014U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
        top_bounce__DOT__hdx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                               - (IData)(0x0226U)));
        top_bounce__DOT__hdy = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                               - (IData)(0x000aU)));
        top_bounce__DOT__hfc = (7U & ((IData)(top_bounce__DOT__hdx) 
                                      >> 1U));
        top_bounce__DOT__hfr = (7U & ((IData)(top_bounce__DOT__hdy) 
                                      >> 1U));
        vlSelfRef.top_bounce__DOT__hud_pixel = ((0x13U 
                                                 >= 
                                                 (0x0000001fU 
                                                  & ((IData)(0x13U) 
                                                     - 
                                                     (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__hfr), 2U) 
                                                      + (IData)(top_bounce__DOT__hfc))))) 
                                                && (1U 
                                                    & (((9U 
                                                         >= (IData)(top_bounce__DOT__win_ones))
                                                         ? 
                                                        vlSelfRef.top_bounce__DOT__digit_bmap
                                                        [top_bounce__DOT__win_ones]
                                                         : 0U) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & ((IData)(0x13U) 
                                                           - 
                                                           (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__hfr), 2U) 
                                                            + (IData)(top_bounce__DOT__hfc)))))));
    }
    vlSelfRef.top_bounce__DOT__win_pixel = 0U;
    vlSelfRef.top_bounce__DOT__win_retry_pixel = 0U;
    top_bounce__DOT__wtx = 0U;
    top_bounce__DOT__wty = 0U;
    top_bounce__DOT__wfc = 0U;
    top_bounce__DOT__wfr = 0U;
    if (vlSelfRef.top_bounce__DOT__at_checkpoint) {
        if (((((((((0x0078U == (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                   | (0x0208U == (IData)(vlSelfRef.top_bounce__DOT__sx))) 
                  | (0x005aU == (IData)(vlSelfRef.top_bounce__DOT__sy))) 
                 | (0x0186U == (IData)(vlSelfRef.top_bounce__DOT__sy))) 
                & (0x0078U <= (IData)(vlSelfRef.top_bounce__DOT__sx))) 
               & (0x0208U >= (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x005aU <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0186U >= (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            vlSelfRef.top_bounce__DOT__win_border = 1U;
        }
        if (((((0x0078U < (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x0208U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x005aU < (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0186U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            vlSelfRef.top_bounce__DOT__win_gold = 1U;
        }
        if (((((0x008cU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00a0U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x0078U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0091U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x008cU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x0078U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(5U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(5U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [0U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00a5U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00b9U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x0078U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0091U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00a5U)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x0078U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(5U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(5U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [1U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00beU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00d2U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x0078U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0091U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00beU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x0078U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(5U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(5U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [2U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00f0U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x0104U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x0078U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0091U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00f0U)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x0078U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(5U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(5U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [3U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x0109U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x011dU > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x0078U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0091U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x0109U)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x0078U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(5U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(5U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [6U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x0122U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x0136U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x0078U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0091U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x0122U)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x0078U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(5U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(5U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [4U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x013bU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x014fU > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x0078U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x0091U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x013bU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x0078U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(5U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(5U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [0U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00a0U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00acU > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x00d2U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x00e1U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00a0U)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x00d2U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(3U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(3U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (((9U >= (IData)(top_bounce__DOT__win_tens))
                             ? vlSelfRef.top_bounce__DOT__digit_bmap
                            [top_bounce__DOT__win_tens]
                             : 0U) >> (0x0000001fU 
                                       & ((IData)(0x13U) 
                                          - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                             + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00afU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00bbU > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x00d2U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x00e1U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00afU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x00d2U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(3U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(3U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (((9U >= (IData)(top_bounce__DOT__win_ones))
                             ? vlSelfRef.top_bounce__DOT__digit_bmap
                            [top_bounce__DOT__win_ones]
                             : 0U) >> (0x0000001fU 
                                       & ((IData)(0x13U) 
                                          - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                             + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00beU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00caU > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x00d2U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x00e1U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00beU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x00d2U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(3U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(3U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [5U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00cdU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00d9U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x00d2U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x00e1U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00cdU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x00d2U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(3U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(3U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [1U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00dcU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00e8U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x00d2U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x00e1U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00dcU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x00d2U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(3U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(3U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [6U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00ebU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x00f7U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x00d2U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x00e1U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00ebU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x00d2U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(3U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(3U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [4U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if (((((0x00faU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
               & (0x0106U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
              & (0x00d2U <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
             & (0x00e1U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
            top_bounce__DOT__wtx = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                                   - (IData)(0x00faU)));
            top_bounce__DOT__wty = (0x000003ffU & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                                   - (IData)(0x00d2U)));
            top_bounce__DOT__wfc = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wtx), (IData)(3U)));
            top_bounce__DOT__wfr = (7U & VL_DIV_III(32, (IData)(top_bounce__DOT__wty), (IData)(3U)));
            if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc))))) 
                 && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                           [7U] >> (0x0000001fU & ((IData)(0x13U) 
                                                   - 
                                                   (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                    + (IData)(top_bounce__DOT__wfc)))))))) {
                vlSelfRef.top_bounce__DOT__win_pixel = 1U;
            }
        }
        if ((0x00000010U & (IData)(vlSelfRef.top_bounce__DOT__blink_ctr))) {
            if (((((0x00c8U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                   & (0x00d8U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
                  & (0x012cU <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
                 & (0x0140U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
                top_bounce__DOT__wtx = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                           - (IData)(0x00c8U)));
                top_bounce__DOT__wty = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                           - (IData)(0x012cU)));
                top_bounce__DOT__wfc = (7U & ((IData)(top_bounce__DOT__wtx) 
                                              >> 2U));
                top_bounce__DOT__wfr = (7U & ((IData)(top_bounce__DOT__wty) 
                                              >> 2U));
                if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                               - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                  + (IData)(top_bounce__DOT__wfc))))) 
                     && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                               [9U] >> (0x0000001fU 
                                        & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc)))))))) {
                    vlSelfRef.top_bounce__DOT__win_retry_pixel = 1U;
                }
            }
            if (((((0x00dcU <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                   & (0x00ecU > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
                  & (0x012cU <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
                 & (0x0140U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
                top_bounce__DOT__wtx = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                           - (IData)(0x00dcU)));
                top_bounce__DOT__wty = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                           - (IData)(0x012cU)));
                top_bounce__DOT__wfc = (7U & ((IData)(top_bounce__DOT__wtx) 
                                              >> 2U));
                top_bounce__DOT__wfr = (7U & ((IData)(top_bounce__DOT__wty) 
                                              >> 2U));
                if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                               - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                  + (IData)(top_bounce__DOT__wfc))))) 
                     && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                               [0x0aU] >> (0x0000001fU 
                                           & ((IData)(0x13U) 
                                              - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                 + (IData)(top_bounce__DOT__wfc)))))))) {
                    vlSelfRef.top_bounce__DOT__win_retry_pixel = 1U;
                }
            }
            if (((((0x00f0U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                   & (0x0100U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
                  & (0x012cU <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
                 & (0x0140U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
                top_bounce__DOT__wtx = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                           - (IData)(0x00f0U)));
                top_bounce__DOT__wty = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                           - (IData)(0x012cU)));
                top_bounce__DOT__wfc = (7U & ((IData)(top_bounce__DOT__wtx) 
                                              >> 2U));
                top_bounce__DOT__wfr = (7U & ((IData)(top_bounce__DOT__wty) 
                                              >> 2U));
                if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                               - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                  + (IData)(top_bounce__DOT__wfc))))) 
                     && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                               [0x0bU] >> (0x0000001fU 
                                           & ((IData)(0x13U) 
                                              - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                 + (IData)(top_bounce__DOT__wfc)))))))) {
                    vlSelfRef.top_bounce__DOT__win_retry_pixel = 1U;
                }
            }
            if (((((0x0104U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                   & (0x0114U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
                  & (0x012cU <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
                 & (0x0140U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
                top_bounce__DOT__wtx = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                           - (IData)(0x0104U)));
                top_bounce__DOT__wty = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                           - (IData)(0x012cU)));
                top_bounce__DOT__wfc = (7U & ((IData)(top_bounce__DOT__wtx) 
                                              >> 2U));
                top_bounce__DOT__wfr = (7U & ((IData)(top_bounce__DOT__wty) 
                                              >> 2U));
                if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                               - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                  + (IData)(top_bounce__DOT__wfc))))) 
                     && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                               [9U] >> (0x0000001fU 
                                        & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc)))))))) {
                    vlSelfRef.top_bounce__DOT__win_retry_pixel = 1U;
                }
            }
            if (((((0x0118U <= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                   & (0x0128U > (IData)(vlSelfRef.top_bounce__DOT__sx))) 
                  & (0x012cU <= (IData)(vlSelfRef.top_bounce__DOT__sy))) 
                 & (0x0140U > (IData)(vlSelfRef.top_bounce__DOT__sy)))) {
                top_bounce__DOT__wtx = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sx) 
                                           - (IData)(0x0118U)));
                top_bounce__DOT__wty = (0x000003ffU 
                                        & ((IData)(vlSelfRef.top_bounce__DOT__sy) 
                                           - (IData)(0x012cU)));
                top_bounce__DOT__wfc = (7U & ((IData)(top_bounce__DOT__wtx) 
                                              >> 2U));
                top_bounce__DOT__wfr = (7U & ((IData)(top_bounce__DOT__wty) 
                                              >> 2U));
                if (((0x13U >= (0x0000001fU & ((IData)(0x13U) 
                                               - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                                  + (IData)(top_bounce__DOT__wfc))))) 
                     && (1U & (vlSelfRef.top_bounce__DOT__char_bmap
                               [0U] >> (0x0000001fU 
                                        & ((IData)(0x13U) 
                                           - (VL_SHIFTL_III(5,32,32, (IData)(top_bounce__DOT__wfr), 2U) 
                                              + (IData)(top_bounce__DOT__wfc)))))))) {
                    vlSelfRef.top_bounce__DOT__win_retry_pixel = 1U;
                }
            }
        }
    }
}

void Vtop_bounce___024root___eval_nba(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_nba\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_bounce___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop_bounce___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_bounce___024root___eval_phase__act(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_phase__act\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_bounce___024root___eval_triggers__act(vlSelf);
    Vtop_bounce___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop_bounce___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_bounce___024root___eval_phase__nba(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_phase__nba\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_bounce___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_bounce___024root___eval_nba(vlSelf);
        Vtop_bounce___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_bounce___024root___eval(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_bounce___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("top_bounce.sv", 7, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_bounce___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("top_bounce.sv", 7, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop_bounce___024root___eval_phase__act(vlSelf));
    } while (Vtop_bounce___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop_bounce___024root___eval_debug_assertions(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_debug_assertions\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_pix & 0xfeU)))) {
        Verilated::overWidthError("clk_pix");
    }
    if (VL_UNLIKELY(((vlSelfRef.sim_rst & 0xfeU)))) {
        Verilated::overWidthError("sim_rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.key_up & 0xfeU)))) {
        Verilated::overWidthError("key_up");
    }
    if (VL_UNLIKELY(((vlSelfRef.key_down & 0xfeU)))) {
        Verilated::overWidthError("key_down");
    }
    if (VL_UNLIKELY(((vlSelfRef.key_left & 0xfeU)))) {
        Verilated::overWidthError("key_left");
    }
    if (VL_UNLIKELY(((vlSelfRef.key_right & 0xfeU)))) {
        Verilated::overWidthError("key_right");
    }
}
#endif  // VL_DEBUG
