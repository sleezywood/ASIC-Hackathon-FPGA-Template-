// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_bounce.h for the primary calling header

#include "Vtop_bounce__pch.h"

VL_ATTR_COLD void Vtop_bounce___024root___eval_static(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_static\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_pix__0 = vlSelfRef.clk_pix;
}

VL_ATTR_COLD void Vtop_bounce___024root___eval_initial__TOP(Vtop_bounce___024root* vlSelf);

VL_ATTR_COLD void Vtop_bounce___024root___eval_initial(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_initial\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_bounce___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop_bounce___024root___eval_initial__TOP(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_initial__TOP\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top_bounce__DOT__c;
    top_bounce__DOT__c = 0;
    // Body
    vlSelfRef.top_bounce__DOT__win_pixel = 0U;
    vlSelfRef.top_bounce__DOT__win_retry_pixel = 0U;
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[0U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[1U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[2U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[3U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[4U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[5U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[6U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[7U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[8U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[9U][(0x0000007fU 
                                                 & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[0x0aU][(0x0000007fU 
                                                    & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[0x0bU][(0x0000007fU 
                                                    & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[0x0cU][(0x0000007fU 
                                                    & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[0x0dU][(0x0000007fU 
                                                    & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[0x0eU][(0x0000007fU 
                                                    & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h785c1e77__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h1232215e__0 = 1U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__bmap[0x0eU][(0x0000007fU 
                                                    & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h1232215e__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    vlSelfRef.top_bounce__DOT__bmap[9U][2U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][3U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][4U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][5U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][6U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][7U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[7U][3U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[7U][4U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[7U][5U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[7U][6U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x0aU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x0bU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x0cU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x0dU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x0eU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x0fU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[4U][0x0bU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[4U][0x0cU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[4U][0x0dU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[4U][0x0eU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][8U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][9U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x11U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x12U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x13U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x14U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x15U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x16U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x17U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x18U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x1bU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x1cU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x1dU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x1eU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x1fU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x22U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x23U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x24U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x25U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x26U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x15U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x16U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x17U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x1cU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x1dU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x1eU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x23U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x24U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x25U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x18U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x1bU] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x22U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x26U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x19U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x1aU] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x20U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x21U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x27U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x28U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x29U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x2aU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x2bU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x2cU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x2dU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x2cU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x2dU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x2eU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x2fU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x30U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x31U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x30U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x31U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x32U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x33U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x34U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x35U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x34U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x35U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x36U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x37U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x38U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x39U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0aU][0x29U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[0x0aU][0x2aU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[0x0aU][0x2bU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x2dU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x2eU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x2fU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[4U][0x31U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[4U][0x32U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[4U][0x33U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[1U][0x35U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[1U][0x36U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[1U][0x37U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[0x0bU][0x2dU] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x31U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x35U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x2eU] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x2fU] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x30U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x32U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x33U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x34U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x3aU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x3bU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x3cU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x3dU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x3eU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x3fU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x40U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[5U][0x41U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x42U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x43U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x44U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x45U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[8U][0x46U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0bU][0x47U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0bU][0x48U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0bU][0x49U] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0bU][0x4aU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[0x0bU][0x4bU] = 1U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x3bU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x3cU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x3dU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x3eU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x3fU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[3U][0x40U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x43U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x44U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[6U][0x45U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x48U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x49U] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[9U][0x4aU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[4U][0x41U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x42U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[7U][0x46U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0aU][0x47U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x3aU] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x3bU] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x42U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x47U] = 2U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x4dU] = 4U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x4eU] = 4U;
    vlSelfRef.top_bounce__DOT__bmap[0x0dU][0x4fU] = 4U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x4cU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x4dU] = 3U;
    vlSelfRef.top_bounce__DOT__bmap[0x0cU][0x4eU] = 3U;
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[0U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[1U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[2U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[3U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[4U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[5U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[6U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[7U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[8U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[9U][(0x0000007fU 
                                                       & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[0x0aU][(0x0000007fU 
                                                          & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[0x0bU][(0x0000007fU 
                                                          & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[0x0cU][(0x0000007fU 
                                                          & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[0x0dU][(0x0000007fU 
                                                          & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    top_bounce__DOT__c = 0U;
    while (VL_GTS_III(32, 0x00000050U, top_bounce__DOT__c)) {
        vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0 = 0U;
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & top_bounce__DOT__c))))) {
            vlSelfRef.top_bounce__DOT__coin_taken[0x0eU][(0x0000007fU 
                                                          & top_bounce__DOT__c)] 
                = vlSelfRef.top_bounce__DOT____Vlvbound_h95d94e30__0;
        }
        top_bounce__DOT__c = ((IData)(1U) + top_bounce__DOT__c);
    }
    vlSelfRef.top_bounce__DOT__digit_bmap[0U] = 0x00069996U;
    vlSelfRef.top_bounce__DOT__digit_bmap[1U] = 0x00026227U;
    vlSelfRef.top_bounce__DOT__digit_bmap[2U] = 0x0006924fU;
    vlSelfRef.top_bounce__DOT__digit_bmap[3U] = 0x000e161eU;
    vlSelfRef.top_bounce__DOT__digit_bmap[4U] = 0x000159f1U;
    vlSelfRef.top_bounce__DOT__digit_bmap[5U] = 0x000f8e1eU;
    vlSelfRef.top_bounce__DOT__digit_bmap[6U] = 0x00068e96U;
    vlSelfRef.top_bounce__DOT__digit_bmap[7U] = 0x000f1244U;
    vlSelfRef.top_bounce__DOT__digit_bmap[8U] = 0x00069696U;
    vlSelfRef.top_bounce__DOT__digit_bmap[9U] = 0x00069716U;
    vlSelfRef.top_bounce__DOT__char_bmap[0U] = 0x00099622U;
    vlSelfRef.top_bounce__DOT__char_bmap[1U] = 0x00069996U;
    vlSelfRef.top_bounce__DOT__char_bmap[2U] = 0x00099996U;
    vlSelfRef.top_bounce__DOT__char_bmap[3U] = 0x00099fb9U;
    vlSelfRef.top_bounce__DOT__char_bmap[4U] = 0x0009db99U;
    vlSelfRef.top_bounce__DOT__char_bmap[5U] = 0x00068886U;
    vlSelfRef.top_bounce__DOT__char_bmap[6U] = 0x00062226U;
    vlSelfRef.top_bounce__DOT__char_bmap[7U] = 0x0007861eU;
    vlSelfRef.top_bounce__DOT__char_bmap[8U] = 0x00044404U;
    vlSelfRef.top_bounce__DOT__char_bmap[9U] = 0x000e9ecaU;
    vlSelfRef.top_bounce__DOT__char_bmap[0x0aU] = 0x000f8e8fU;
    vlSelfRef.top_bounce__DOT__char_bmap[0x0bU] = 0x000f2222U;
    vlSelfRef.top_bounce__DOT__char_bmap[0x0cU] = 0x000e9e88U;
    vlSelfRef.top_bounce__DOT__char_bmap[0x0dU] = 0U;
}

VL_ATTR_COLD void Vtop_bounce___024root___eval_final(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_final\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_bounce___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_bounce___024root___eval_phase__stl(Vtop_bounce___024root* vlSelf);

VL_ATTR_COLD void Vtop_bounce___024root___eval_settle(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_settle\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_bounce___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("top_bounce.sv", 7, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop_bounce___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop_bounce___024root___eval_triggers__stl(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_triggers__stl\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_bounce___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop_bounce___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_bounce___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_bounce___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_bounce___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop_bounce___024root___stl_sequent__TOP__0(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.top_bounce__DOT__qy16 = vlSelfRef.top_bounce__DOT__qy;
    vlSelfRef.top_bounce__DOT__de = ((0x027fU >= (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                                     & (0x01dfU >= (IData)(vlSelfRef.top_bounce__DOT__sy)));
    vlSelfRef.top_bounce__DOT__frame = ((0x01e0U == (IData)(vlSelfRef.top_bounce__DOT__sy)) 
                                        & (0U == (IData)(vlSelfRef.top_bounce__DOT__sx)));
    vlSelfRef.top_bounce__DOT__ceil_row = (0x0000000fU 
                                           & (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qy)) 
                                                - VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qs))) 
                                               - (IData)(0x00000020U)) 
                                              >> 5U));
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
    vlSelfRef.top_bounce__DOT__render_col = (0x0000007fU 
                                             & (((IData)(vlSelfRef.top_bounce__DOT__cam_x) 
                                                 + (IData)(vlSelfRef.top_bounce__DOT__sx)) 
                                                >> 5U));
    vlSelfRef.top_bounce__DOT__floor_row = (0x0000000fU 
                                            & (((IData)(0x00000020U) 
                                                + (
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qy)) 
                                                   + 
                                                   VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_bounce__DOT__qs)))) 
                                               >> 5U));
    vlSelfRef.top_bounce__DOT__world_col = (0x0000007fU 
                                            & (((IData)(vlSelfRef.top_bounce__DOT__cam_x) 
                                                + (IData)(vlSelfRef.top_bounce__DOT__qx)) 
                                               >> 5U));
    __Vtableidx1 = vlSelfRef.top_bounce__DOT__coins;
    top_bounce__DOT__win_tens = Vtop_bounce__ConstPool__TABLE_h4dda5b44_0
        [__Vtableidx1];
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
    if ((0x50U > (IData)(vlSelfRef.top_bounce__DOT__world_col))) {
        if ((0x4fU >= (IData)(vlSelfRef.top_bounce__DOT__world_col))) {
            vlSelfRef.top_bounce__DOT__floor_tile = 
                vlSelfRef.top_bounce__DOT__bmap[((0x0eU 
                                                  >= (IData)(vlSelfRef.top_bounce__DOT__floor_row))
                                                  ? (IData)(vlSelfRef.top_bounce__DOT__floor_row)
                                                  : 0U)]
                [vlSelfRef.top_bounce__DOT__world_col];
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
        } else {
            vlSelfRef.top_bounce__DOT__floor_tile = 0U;
            vlSelfRef.top_bounce__DOT__player_tile = 0U;
        }
    } else {
        vlSelfRef.top_bounce__DOT__floor_tile = 0U;
        vlSelfRef.top_bounce__DOT__player_tile = 0U;
    }
    top_bounce__DOT__win_ones = (0x0000000fU & ((IData)(vlSelfRef.top_bounce__DOT__coins) 
                                                - ((IData)(0x0000000aU) 
                                                   * (IData)(top_bounce__DOT__win_tens))));
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

VL_ATTR_COLD void Vtop_bounce___024root___eval_stl(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_stl\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop_bounce___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_bounce___024root___eval_phase__stl(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___eval_phase__stl\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_bounce___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop_bounce___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_bounce___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_bounce___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_bounce___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_bounce___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_pix)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_bounce___024root___ctor_var_reset(Vtop_bounce___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_bounce___024root___ctor_var_reset\n"); );
    Vtop_bounce__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_pix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12098658896731941934ull);
    vlSelf->sim_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3714503687086834723ull);
    vlSelf->key_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5256482719854428539ull);
    vlSelf->key_down = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9060644667191902389ull);
    vlSelf->key_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15456299642376306314ull);
    vlSelf->key_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8200264049637636769ull);
    vlSelf->sdl_sx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1189650543127302554ull);
    vlSelf->sdl_sy = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14305830827530400904ull);
    vlSelf->sdl_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8848505534622421384ull);
    vlSelf->sdl_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3846558581869724040ull);
    vlSelf->sdl_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6027855836595603051ull);
    vlSelf->sdl_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8827861841231814415ull);
    vlSelf->top_bounce__DOT____Vlvbound_h3244019d__0 = 0;
    vlSelf->top_bounce__DOT____Vlvbound_h95e02281__0 = 0;
    vlSelf->top_bounce__DOT____Vlvbound_h95d94e30__0 = 0;
    vlSelf->top_bounce__DOT____Vlvbound_h1232215e__0 = 0;
    vlSelf->top_bounce__DOT____Vlvbound_h785c1e77__0 = 0;
    vlSelf->top_bounce__DOT__sx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1986211041291629479ull);
    vlSelf->top_bounce__DOT__sy = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16754359855590462653ull);
    vlSelf->top_bounce__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9819595930695799302ull);
    vlSelf->top_bounce__DOT__frame = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15755814475241326122ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 80; ++__Vi1) {
            vlSelf->top_bounce__DOT__bmap[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12092794721734373977ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 80; ++__Vi1) {
            vlSelf->top_bounce__DOT__coin_taken[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5048280399808476503ull);
        }
    }
    vlSelf->top_bounce__DOT__cam_x = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2330300377622459384ull);
    vlSelf->top_bounce__DOT__qx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18259150357973059155ull);
    vlSelf->top_bounce__DOT__qy = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14580555098562423165ull);
    vlSelf->top_bounce__DOT__qs = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13212735333903210912ull);
    vlSelf->top_bounce__DOT__jumps = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17818735195560643386ull);
    vlSelf->top_bounce__DOT__at_checkpoint = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8728251293211151219ull);
    vlSelf->top_bounce__DOT__coins = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4474090639151823258ull);
    vlSelf->top_bounce__DOT__cc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17609033988121850335ull);
    vlSelf->top_bounce__DOT__blink_ctr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 846185839268276829ull);
    vlSelf->top_bounce__DOT__qy16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2772976350387229937ull);
    vlSelf->top_bounce__DOT__world_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5900194793008122492ull);
    vlSelf->top_bounce__DOT__floor_row = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7961855942124756280ull);
    vlSelf->top_bounce__DOT__ceil_row = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12545560009508042061ull);
    vlSelf->top_bounce__DOT__floor_tile = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18173663059857871465ull);
    vlSelf->top_bounce__DOT__player_tile = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15542374870593165823ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top_bounce__DOT__digit_bmap[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13894726652150182406ull);
    }
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->top_bounce__DOT__char_bmap[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 14361499258512508794ull);
    }
    vlSelf->top_bounce__DOT__square = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15170613976170353461ull);
    vlSelf->top_bounce__DOT__render_col = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10370862667816144874ull);
    vlSelf->top_bounce__DOT__render_tile = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9358324696636978884ull);
    vlSelf->top_bounce__DOT__hud_pixel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4538604347037428809ull);
    vlSelf->top_bounce__DOT__win_pixel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9112742926725588883ull);
    vlSelf->top_bounce__DOT__win_gold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3614442078658133759ull);
    vlSelf->top_bounce__DOT__win_border = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14148544156387305042ull);
    vlSelf->top_bounce__DOT__win_retry_pixel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16066444043692881140ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_pix__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
