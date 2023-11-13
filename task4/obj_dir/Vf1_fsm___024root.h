// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_fsm.h for the primary calling header

#ifndef VERILATED_VF1_FSM___024ROOT_H_
#define VERILATED_VF1_FSM___024ROOT_H_  // guard

#include "verilated.h"

class Vf1_fsm__Syms;

class Vf1_fsm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(out,7,0);
    VL_OUT8(cmd_seq,0,0);
    VL_OUT8(cmd_delay,0,0);
    VL_OUT8(initTimer,0,0);
    CData/*0:0*/ f1_fsm__DOT__mux1;
    CData/*0:0*/ f1_fsm__DOT__en;
    CData/*6:0*/ f1_fsm__DOT__DelayUnit__DOT__count;
    CData/*6:0*/ f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ f1_fsm__DOT__ClockUnit__DOT__count;
    IData/*31:0*/ f1_fsm__DOT__current_state;
    IData/*31:0*/ f1_fsm__DOT__next_state;
    IData/*31:0*/ f1_fsm__DOT__DelayUnit__DOT__current_state;
    IData/*31:0*/ f1_fsm__DOT__DelayUnit__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vf1_fsm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_fsm___024root(Vf1_fsm__Syms* symsp, const char* name);
    ~Vf1_fsm___024root();
    VL_UNCOPYABLE(Vf1_fsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
