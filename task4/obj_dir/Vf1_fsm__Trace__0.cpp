// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm__Syms.h"


void Vf1_fsm___024root__trace_chg_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_chg_top_0\n"); );
    // Init
    Vf1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm___024root*>(voidSelf);
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1_fsm___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1_fsm___024root__trace_chg_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((0U != vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state) 
                              & ((1U != vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state) 
                                 & (2U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)))));
        bufp->chgBit(oldp+1,(vlSelf->f1_fsm__DOT__mux1));
        bufp->chgBit(oldp+2,(vlSelf->f1_fsm__DOT__en));
        bufp->chgIData(oldp+3,(vlSelf->f1_fsm__DOT__current_state),32);
        bufp->chgIData(oldp+4,(vlSelf->f1_fsm__DOT__next_state),32);
        bufp->chgSData(oldp+5,(vlSelf->f1_fsm__DOT__ClockUnit__DOT__count),16);
        bufp->chgCData(oldp+6,(vlSelf->f1_fsm__DOT__DelayUnit__DOT__count),7);
        bufp->chgCData(oldp+7,(vlSelf->f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg),7);
        bufp->chgIData(oldp+8,(vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state),32);
    }
    bufp->chgBit(oldp+9,(vlSelf->clk));
    bufp->chgBit(oldp+10,(vlSelf->rst));
    bufp->chgCData(oldp+11,(vlSelf->out),8);
    bufp->chgBit(oldp+12,(vlSelf->cmd_seq));
    bufp->chgBit(oldp+13,(vlSelf->cmd_delay));
    bufp->chgIData(oldp+14,(((0U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                              ? ((IData)(vlSelf->cmd_delay)
                                  ? 1U : vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                              : ((1U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                                  ? ((0U == (IData)(vlSelf->f1_fsm__DOT__DelayUnit__DOT__count))
                                      ? 2U : vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                                  : ((2U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                                      ? ((IData)(vlSelf->cmd_delay)
                                          ? 3U : 0U)
                                      : ((3U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
                                          ? ((IData)(vlSelf->cmd_delay)
                                              ? vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state
                                              : 0U)
                                          : 0U))))),32);
}

void Vf1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_cleanup\n"); );
    // Init
    Vf1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm___024root*>(voidSelf);
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
