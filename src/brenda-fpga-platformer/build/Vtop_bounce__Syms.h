// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_BOUNCE__SYMS_H_
#define VERILATED_VTOP_BOUNCE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_bounce.h"

// INCLUDE MODULE CLASSES
#include "Vtop_bounce___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop_bounce__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_bounce* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_bounce___024root          TOP;

    // CONSTRUCTORS
    Vtop_bounce__Syms(VerilatedContext* contextp, const char* namep, Vtop_bounce* modelp);
    ~Vtop_bounce__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
