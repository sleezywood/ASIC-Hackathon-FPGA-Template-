// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_bounce.h for the primary calling header

#include "Vtop_bounce__pch.h"

void Vtop_bounce___024root___ctor_var_reset(Vtop_bounce___024root* vlSelf);

Vtop_bounce___024root::Vtop_bounce___024root(Vtop_bounce__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop_bounce___024root___ctor_var_reset(this);
}

void Vtop_bounce___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_bounce___024root::~Vtop_bounce___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
