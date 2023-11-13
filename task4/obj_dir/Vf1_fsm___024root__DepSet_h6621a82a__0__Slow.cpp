// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_ATTR_COLD void Vf1_fsm___024root___initial__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->f1_fsm__DOT__DelayUnit__DOT__count = 0U;
}

VL_ATTR_COLD void Vf1_fsm___024root___settle__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->cmd_delay = ((~ ((((((((0U == vlSelf->f1_fsm__DOT__current_state) 
                                   | (1U == vlSelf->f1_fsm__DOT__current_state)) 
                                  | (2U == vlSelf->f1_fsm__DOT__current_state)) 
                                 | (3U == vlSelf->f1_fsm__DOT__current_state)) 
                                | (4U == vlSelf->f1_fsm__DOT__current_state)) 
                               | (5U == vlSelf->f1_fsm__DOT__current_state)) 
                              | (6U == vlSelf->f1_fsm__DOT__current_state)) 
                             | (7U == vlSelf->f1_fsm__DOT__current_state))) 
                         & (8U == vlSelf->f1_fsm__DOT__current_state));
    vlSelf->cmd_seq = (((((((((0U == vlSelf->f1_fsm__DOT__current_state) 
                              | (1U == vlSelf->f1_fsm__DOT__current_state)) 
                             | (2U == vlSelf->f1_fsm__DOT__current_state)) 
                            | (3U == vlSelf->f1_fsm__DOT__current_state)) 
                           | (4U == vlSelf->f1_fsm__DOT__current_state)) 
                          | (5U == vlSelf->f1_fsm__DOT__current_state)) 
                         | (6U == vlSelf->f1_fsm__DOT__current_state)) 
                        | (7U == vlSelf->f1_fsm__DOT__current_state)) 
                       | ((8U != vlSelf->f1_fsm__DOT__current_state) 
                          & (9U != vlSelf->f1_fsm__DOT__current_state)));
    vlSelf->f1_fsm__DOT__DelayUnit__DOT__next_state 
        = ((0U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
            ? ((IData)(vlSelf->cmd_delay) ? 1U : vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
            : ((1U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                ? ((0U == (IData)(vlSelf->f1_fsm__DOT__DelayUnit__DOT__count))
                    ? 2U : vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                : ((2U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                    ? ((IData)(vlSelf->cmd_delay) ? 3U
                        : 0U) : ((3U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                                  ? ((IData)(vlSelf->cmd_delay)
                                      ? vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state
                                      : 0U) : 0U))));
    vlSelf->f1_fsm__DOT__en = ((IData)(vlSelf->cmd_seq)
                                ? (IData)(vlSelf->f1_fsm__DOT__mux1)
                                : ((0U != vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state) 
                                   & ((1U != vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state) 
                                      & (2U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state))));
    if (((((((((0U == vlSelf->f1_fsm__DOT__current_state) 
               | (1U == vlSelf->f1_fsm__DOT__current_state)) 
              | (2U == vlSelf->f1_fsm__DOT__current_state)) 
             | (3U == vlSelf->f1_fsm__DOT__current_state)) 
            | (4U == vlSelf->f1_fsm__DOT__current_state)) 
           | (5U == vlSelf->f1_fsm__DOT__current_state)) 
          | (6U == vlSelf->f1_fsm__DOT__current_state)) 
         | (7U == vlSelf->f1_fsm__DOT__current_state))) {
        if ((0U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->out = 0U;
            vlSelf->initTimer = 1U;
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->trigger)
                                                ? 1U
                                                : vlSelf->f1_fsm__DOT__current_state);
        } else if ((1U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->out = 1U;
            vlSelf->initTimer = 0U;
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                                ? 2U
                                                : vlSelf->f1_fsm__DOT__current_state);
        } else if ((2U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->out = 3U;
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                                ? 3U
                                                : vlSelf->f1_fsm__DOT__current_state);
        } else if ((3U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->out = 7U;
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                                ? 4U
                                                : vlSelf->f1_fsm__DOT__current_state);
        } else if ((4U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->out = 0xfU;
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                                ? 5U
                                                : vlSelf->f1_fsm__DOT__current_state);
        } else if ((5U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->out = 0x1fU;
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                                ? 6U
                                                : vlSelf->f1_fsm__DOT__current_state);
        } else if ((6U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->out = 0x3fU;
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                                ? 7U
                                                : vlSelf->f1_fsm__DOT__current_state);
        } else {
            vlSelf->out = 0x7fU;
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                                ? 8U
                                                : vlSelf->f1_fsm__DOT__current_state);
        }
    } else if ((8U == vlSelf->f1_fsm__DOT__current_state)) {
        vlSelf->out = 0xffU;
        vlSelf->f1_fsm__DOT__next_state = 9U;
    } else if ((9U == vlSelf->f1_fsm__DOT__current_state)) {
        vlSelf->out = 0xffU;
        vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                            ? 0U : vlSelf->f1_fsm__DOT__current_state);
    } else {
        vlSelf->out = 0U;
        vlSelf->f1_fsm__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_initial(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vf1_fsm___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_fsm___024root___eval_settle(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_settle\n"); );
    // Body
    Vf1_fsm___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_fsm___024root___final(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___final\n"); );
}

VL_ATTR_COLD void Vf1_fsm___024root___ctor_var_reset(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->initTimer = VL_RAND_RESET_I(1);
    vlSelf->f1_fsm__DOT__mux1 = VL_RAND_RESET_I(1);
    vlSelf->f1_fsm__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->f1_fsm__DOT__current_state = 0;
    vlSelf->f1_fsm__DOT__next_state = 0;
    vlSelf->f1_fsm__DOT__DelayUnit__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state = 0;
    vlSelf->f1_fsm__DOT__DelayUnit__DOT__next_state = 0;
    vlSelf->f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->f1_fsm__DOT__ClockUnit__DOT__count = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
