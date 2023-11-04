// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclktick.h for the primary calling header

#include "verilated.h"

#include "Vclktick___024root.h"

VL_ATTR_COLD void Vclktick___024root___settle__TOP__0(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->clktick__DOT__lightoutput__DOT__current_state) 
               | (1U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) 
              | (2U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) 
             | (3U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) 
            | (4U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) 
           | (5U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) 
          | (6U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) 
         | (7U == vlSelf->clktick__DOT__lightoutput__DOT__current_state))) {
        if ((0U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) {
            vlSelf->lightsequence = 0U;
            vlSelf->clktick__DOT__lightoutput__DOT__next_state 
                = ((IData)(vlSelf->tick) ? 1U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
        } else if ((1U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) {
            vlSelf->lightsequence = 1U;
            vlSelf->clktick__DOT__lightoutput__DOT__next_state 
                = ((IData)(vlSelf->tick) ? 2U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
        } else if ((2U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) {
            vlSelf->lightsequence = 3U;
            vlSelf->clktick__DOT__lightoutput__DOT__next_state 
                = ((IData)(vlSelf->tick) ? 3U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
        } else if ((3U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) {
            vlSelf->lightsequence = 7U;
            vlSelf->clktick__DOT__lightoutput__DOT__next_state 
                = ((IData)(vlSelf->tick) ? 4U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
        } else if ((4U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) {
            vlSelf->lightsequence = 0xfU;
            vlSelf->clktick__DOT__lightoutput__DOT__next_state 
                = ((IData)(vlSelf->tick) ? 5U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
        } else if ((5U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) {
            vlSelf->lightsequence = 0x1fU;
            vlSelf->clktick__DOT__lightoutput__DOT__next_state 
                = ((IData)(vlSelf->tick) ? 6U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
        } else if ((6U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) {
            vlSelf->lightsequence = 0x3fU;
            vlSelf->clktick__DOT__lightoutput__DOT__next_state 
                = ((IData)(vlSelf->tick) ? 7U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
        } else {
            vlSelf->lightsequence = 0x7fU;
            vlSelf->clktick__DOT__lightoutput__DOT__next_state 
                = ((IData)(vlSelf->tick) ? 8U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
        }
    } else if ((8U == vlSelf->clktick__DOT__lightoutput__DOT__current_state)) {
        vlSelf->lightsequence = 0xffU;
        vlSelf->clktick__DOT__lightoutput__DOT__next_state 
            = ((IData)(vlSelf->tick) ? 0U : vlSelf->clktick__DOT__lightoutput__DOT__current_state);
    } else {
        vlSelf->lightsequence = 0U;
        vlSelf->clktick__DOT__lightoutput__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vclktick___024root___eval_initial(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vclktick___024root___eval_settle(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_settle\n"); );
    // Body
    Vclktick___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vclktick___024root___final(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___final\n"); );
}

VL_ATTR_COLD void Vclktick___024root___ctor_var_reset(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->tick = VL_RAND_RESET_I(1);
    vlSelf->lightsequence = VL_RAND_RESET_I(8);
    vlSelf->clktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->clktick__DOT__lightoutput__DOT__current_state = 0;
    vlSelf->clktick__DOT__lightoutput__DOT__next_state = 0;
}
