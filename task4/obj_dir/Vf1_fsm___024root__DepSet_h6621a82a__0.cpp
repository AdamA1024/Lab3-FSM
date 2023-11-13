// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_INLINE_OPT void Vf1_fsm___024root___sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg;
    SData/*15:0*/ __Vdly__f1_fsm__DOT__ClockUnit__DOT__count;
    // Body
    __Vdly__f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg 
        = vlSelf->f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg;
    __Vdly__f1_fsm__DOT__ClockUnit__DOT__count = vlSelf->f1_fsm__DOT__ClockUnit__DOT__count;
    if (vlSelf->rst) {
        __Vdly__f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg = 1U;
        vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state = 0U;
        vlSelf->f1_fsm__DOT__mux1 = 0U;
        __Vdly__f1_fsm__DOT__ClockUnit__DOT__count = 0x20U;
        vlSelf->f1_fsm__DOT__current_state = 0U;
    } else {
        __Vdly__f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg 
            = ((0x7eU & ((IData)(vlSelf->f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg) 
                         << 1U)) | (1U & VL_REDXOR_8(
                                                     (0x44U 
                                                      & (IData)(vlSelf->f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg)))));
        vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state 
            = vlSelf->f1_fsm__DOT__DelayUnit__DOT__next_state;
        if (vlSelf->cmd_seq) {
            if ((0U == (IData)(vlSelf->f1_fsm__DOT__ClockUnit__DOT__count))) {
                vlSelf->f1_fsm__DOT__mux1 = 1U;
                __Vdly__f1_fsm__DOT__ClockUnit__DOT__count = 0x20U;
            } else {
                __Vdly__f1_fsm__DOT__ClockUnit__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->f1_fsm__DOT__ClockUnit__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->f1_fsm__DOT__mux1 = 0U;
            }
        }
        vlSelf->f1_fsm__DOT__current_state = vlSelf->f1_fsm__DOT__next_state;
    }
    vlSelf->f1_fsm__DOT__DelayUnit__DOT__count = (0x7fU 
                                                  & ((((IData)(vlSelf->rst) 
                                                       | (IData)(vlSelf->cmd_delay)) 
                                                      | (0U 
                                                         == (IData)(vlSelf->f1_fsm__DOT__DelayUnit__DOT__count)))
                                                      ? 
                                                     ((IData)(vlSelf->f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg) 
                                                      - (IData)(1U))
                                                      : 
                                                     ((IData)(vlSelf->f1_fsm__DOT__DelayUnit__DOT__count) 
                                                      - (IData)(1U))));
    vlSelf->f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg 
        = __Vdly__f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg;
    vlSelf->f1_fsm__DOT__ClockUnit__DOT__count = __Vdly__f1_fsm__DOT__ClockUnit__DOT__count;
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
            vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->f1_fsm__DOT__en)
                                                ? 1U
                                                : vlSelf->f1_fsm__DOT__current_state);
        } else if ((1U == vlSelf->f1_fsm__DOT__current_state)) {
            vlSelf->out = 1U;
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

void Vf1_fsm___024root___eval(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_fsm___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_fsm___024root___eval_debug_assertions(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
