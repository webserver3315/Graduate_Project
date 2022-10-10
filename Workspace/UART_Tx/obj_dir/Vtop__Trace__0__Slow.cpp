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
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"btn1_i", false,-1);
    tracep->declBit(c+3,"uart_tx_o", false,-1);
    tracep->declBit(c+4,"led1_o", false,-1);
    tracep->declBit(c+5,"led2_o", false,-1);
    tracep->pushNamePrefix("uart_tx ");
    tracep->declBus(c+10,"BAUD_RATE", false,-1, 31,0);
    tracep->declBus(c+11,"IDLE_ST", false,-1, 3,0);
    tracep->declBus(c+12,"START_ST", false,-1, 3,0);
    tracep->declBus(c+13,"D0_ST", false,-1, 3,0);
    tracep->declBus(c+14,"D1_ST", false,-1, 3,0);
    tracep->declBus(c+15,"D2_ST", false,-1, 3,0);
    tracep->declBus(c+16,"D3_ST", false,-1, 3,0);
    tracep->declBus(c+17,"D4_ST", false,-1, 3,0);
    tracep->declBus(c+18,"D5_ST", false,-1, 3,0);
    tracep->declBus(c+19,"D6_ST", false,-1, 3,0);
    tracep->declBus(c+20,"D7_ST", false,-1, 3,0);
    tracep->declBus(c+21,"PARITY_ST", false,-1, 3,0);
    tracep->declBus(c+22,"STOP_ST", false,-1, 3,0);
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"btn1_i", false,-1);
    tracep->declBit(c+3,"uart_tx_o", false,-1);
    tracep->declBit(c+4,"led1_o", false,-1);
    tracep->declBit(c+5,"led2_o", false,-1);
    tracep->declBus(c+6,"state", false,-1, 3,0);
    tracep->declBus(c+23,"next_state", false,-1, 3,0);
    tracep->declBus(c+24,"tx_data", false,-1, 7,0);
    tracep->declBus(c+7,"clk_count", false,-1, 31,0);
    tracep->declBit(c+8,"clk_div", false,-1);
    tracep->declBit(c+25,"even_parity", false,-1);
    tracep->declBit(c+9,"queueing", false,-1);
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
    bufp->fullBit(oldp+1,(vlSelf->clk_i));
    bufp->fullBit(oldp+2,(vlSelf->btn1_i));
    bufp->fullBit(oldp+3,(vlSelf->uart_tx_o));
    bufp->fullBit(oldp+4,(vlSelf->led1_o));
    bufp->fullBit(oldp+5,(vlSelf->led2_o));
    bufp->fullCData(oldp+6,(vlSelf->uart_tx__DOT__state),4);
    bufp->fullIData(oldp+7,(vlSelf->uart_tx__DOT__clk_count),32);
    bufp->fullBit(oldp+8,(vlSelf->uart_tx__DOT__clk_div));
    bufp->fullBit(oldp+9,(vlSelf->uart_tx__DOT__queueing));
    bufp->fullIData(oldp+10,(0x1c200U),32);
    bufp->fullCData(oldp+11,(0U),4);
    bufp->fullCData(oldp+12,(1U),4);
    bufp->fullCData(oldp+13,(2U),4);
    bufp->fullCData(oldp+14,(3U),4);
    bufp->fullCData(oldp+15,(4U),4);
    bufp->fullCData(oldp+16,(5U),4);
    bufp->fullCData(oldp+17,(6U),4);
    bufp->fullCData(oldp+18,(7U),4);
    bufp->fullCData(oldp+19,(8U),4);
    bufp->fullCData(oldp+20,(9U),4);
    bufp->fullCData(oldp+21,(0xaU),4);
    bufp->fullCData(oldp+22,(0xbU),4);
    bufp->fullCData(oldp+23,(vlSelf->uart_tx__DOT__next_state),4);
    bufp->fullCData(oldp+24,(0x52U),8);
    bufp->fullBit(oldp+25,(1U));
}
