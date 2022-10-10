// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"DELAY", false,-1);
    tracep->declBit(c+2,"ACT", false,-1);
    tracep->declBit(c+3,"PRE", false,-1);
    tracep->declBit(c+4,"PEQ", false,-1);
    tracep->declBit(c+5,"PWL", false,-1);
    tracep->declBit(c+6,"NSA", false,-1);
    tracep->pushNamePrefix("maruta ");
    tracep->declBit(c+1,"DELAY", false,-1);
    tracep->declBit(c+2,"ACT", false,-1);
    tracep->declBit(c+3,"PRE", false,-1);
    tracep->declBit(c+4,"PEQ", false,-1);
    tracep->declBit(c+5,"PWL", false,-1);
    tracep->declBit(c+6,"NSA", false,-1);
    tracep->declBus(c+9,"IDLE", false,-1, 1,0);
    tracep->declBus(c+10,"ACTIVE", false,-1, 1,0);
    tracep->declBus(c+11,"HIGHING", false,-1, 1,0);
    tracep->declBus(c+12,"PRECHARGING", false,-1, 1,0);
    tracep->declBus(c+7,"state", false,-1, 1,0);
    tracep->declBus(c+8,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->DELAY));
    bufp->fullBit(oldp+2,(vlSelf->ACT));
    bufp->fullBit(oldp+3,(vlSelf->PRE));
    bufp->fullBit(oldp+4,(vlSelf->PEQ));
    bufp->fullBit(oldp+5,(vlSelf->PWL));
    bufp->fullBit(oldp+6,(vlSelf->NSA));
    bufp->fullCData(oldp+7,(vlSelf->maruta__DOT__state),2);
    bufp->fullCData(oldp+8,(vlSelf->maruta__DOT__next_state),2);
    bufp->fullCData(oldp+9,(0U),2);
    bufp->fullCData(oldp+10,(1U),2);
    bufp->fullCData(oldp+11,(2U),2);
    bufp->fullCData(oldp+12,(3U),2);
}
