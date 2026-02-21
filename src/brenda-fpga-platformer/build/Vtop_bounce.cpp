// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_bounce__pch.h"

//============================================================
// Constructors

Vtop_bounce::Vtop_bounce(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_bounce__Syms(contextp(), _vcname__, this)}
    , clk_pix{vlSymsp->TOP.clk_pix}
    , sim_rst{vlSymsp->TOP.sim_rst}
    , key_up{vlSymsp->TOP.key_up}
    , key_down{vlSymsp->TOP.key_down}
    , key_left{vlSymsp->TOP.key_left}
    , key_right{vlSymsp->TOP.key_right}
    , sdl_de{vlSymsp->TOP.sdl_de}
    , sdl_r{vlSymsp->TOP.sdl_r}
    , sdl_g{vlSymsp->TOP.sdl_g}
    , sdl_b{vlSymsp->TOP.sdl_b}
    , sdl_sx{vlSymsp->TOP.sdl_sx}
    , sdl_sy{vlSymsp->TOP.sdl_sy}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_bounce::Vtop_bounce(const char* _vcname__)
    : Vtop_bounce(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_bounce::~Vtop_bounce() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_bounce___024root___eval_debug_assertions(Vtop_bounce___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_bounce___024root___eval_static(Vtop_bounce___024root* vlSelf);
void Vtop_bounce___024root___eval_initial(Vtop_bounce___024root* vlSelf);
void Vtop_bounce___024root___eval_settle(Vtop_bounce___024root* vlSelf);
void Vtop_bounce___024root___eval(Vtop_bounce___024root* vlSelf);

void Vtop_bounce::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_bounce::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_bounce___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_bounce___024root___eval_static(&(vlSymsp->TOP));
        Vtop_bounce___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_bounce___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_bounce___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_bounce::eventsPending() { return false; }

uint64_t Vtop_bounce::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_bounce::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_bounce___024root___eval_final(Vtop_bounce___024root* vlSelf);

VL_ATTR_COLD void Vtop_bounce::final() {
    Vtop_bounce___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_bounce::hierName() const { return vlSymsp->name(); }
const char* Vtop_bounce::modelName() const { return "Vtop_bounce"; }
unsigned Vtop_bounce::threads() const { return 1; }
void Vtop_bounce::prepareClone() const { contextp()->prepareClone(); }
void Vtop_bounce::atClone() const {
    contextp()->threadPoolpOnClone();
}
