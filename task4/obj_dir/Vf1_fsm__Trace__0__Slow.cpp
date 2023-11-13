// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm__Syms.h"


VL_ATTR_COLD void Vf1_fsm___024root__trace_init_sub__TOP__0(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"out", false,-1, 7,0);
    tracep->declBit(c+13,"cmd_seq", false,-1);
    tracep->declBit(c+14,"cmd_delay", false,-1);
    tracep->pushNamePrefix("f1_fsm ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBus(c+12,"out", false,-1, 7,0);
    tracep->declBit(c+13,"cmd_seq", false,-1);
    tracep->declBit(c+14,"cmd_delay", false,-1);
    tracep->declBit(c+1,"mux0", false,-1);
    tracep->declBit(c+2,"mux1", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"current_state", false,-1, 31,0);
    tracep->declBus(c+5,"next_state", false,-1, 31,0);
    tracep->pushNamePrefix("ClockUnit ");
    tracep->declBus(c+16,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+13,"en", false,-1);
    tracep->declBit(c+2,"tick", false,-1);
    tracep->declBus(c+6,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DelayUnit ");
    tracep->declBus(c+17,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+14,"trigger", false,-1);
    tracep->declBit(c+1,"time_out", false,-1);
    tracep->declBus(c+7,"count", false,-1, 6,0);
    tracep->declBus(c+8,"n", false,-1, 6,0);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+15,"next_state", false,-1, 31,0);
    tracep->pushNamePrefix("RandomNgen ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+18,"en", false,-1);
    tracep->declBus(c+8,"data_out", false,-1, 6,0);
    tracep->declBus(c+8,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mux ");
    tracep->declBit(c+1,"d0", false,-1);
    tracep->declBit(c+2,"d1", false,-1);
    tracep->declBit(c+13,"s", false,-1);
    tracep->declBit(c+3,"enabledriver", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_init_top(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_init_top\n"); );
    // Body
    Vf1_fsm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_fsm___024root__trace_register(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_fsm___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_fsm___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_fsm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_full_top_0\n"); );
    // Init
    Vf1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm___024root*>(voidSelf);
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_fsm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(((0U != vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state) 
                           & ((1U != vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state) 
                              & (2U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)))));
    bufp->fullBit(oldp+2,(vlSelf->f1_fsm__DOT__mux1));
    bufp->fullBit(oldp+3,(vlSelf->f1_fsm__DOT__en));
    bufp->fullIData(oldp+4,(vlSelf->f1_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+5,(vlSelf->f1_fsm__DOT__next_state),32);
    bufp->fullSData(oldp+6,(vlSelf->f1_fsm__DOT__ClockUnit__DOT__count),16);
    bufp->fullCData(oldp+7,(vlSelf->f1_fsm__DOT__DelayUnit__DOT__count),7);
    bufp->fullCData(oldp+8,(vlSelf->f1_fsm__DOT__DelayUnit__DOT__RandomNgen__DOT__sreg),7);
    bufp->fullIData(oldp+9,(vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state),32);
    bufp->fullBit(oldp+10,(vlSelf->clk));
    bufp->fullBit(oldp+11,(vlSelf->rst));
    bufp->fullCData(oldp+12,(vlSelf->out),8);
    bufp->fullBit(oldp+13,(vlSelf->cmd_seq));
    bufp->fullBit(oldp+14,(vlSelf->cmd_delay));
    bufp->fullIData(oldp+15,(((0U == vlSelf->f1_fsm__DOT__DelayUnit__DOT__current_state)
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
    bufp->fullIData(oldp+16,(0x10U),32);
    bufp->fullIData(oldp+17,(7U),32);
    bufp->fullBit(oldp+18,(1U));
}
