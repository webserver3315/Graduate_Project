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
    tracep->declBit(c+4,"clk_i", false,-1);
    tracep->declBit(c+5,"btn1_i", false,-1);
    tracep->declBit(c+6,"uart_tx_o", false,-1);
    tracep->declBit(c+7,"led1_o", false,-1);
    tracep->declBit(c+8,"led2_o", false,-1);
    tracep->pushNamePrefix("fp32_uart_tx ");
    tracep->declBus(c+9,"BAUD_RATE", false,-1, 31,0);
    tracep->declBus(c+10,"IDLE_ST", false,-1, 31,0);
    tracep->declBus(c+11,"START_ST", false,-1, 31,0);
    tracep->declBus(c+12,"D0_ST", false,-1, 31,0);
    tracep->declBus(c+13,"D1_ST", false,-1, 31,0);
    tracep->declBus(c+14,"D2_ST", false,-1, 31,0);
    tracep->declBus(c+15,"D3_ST", false,-1, 31,0);
    tracep->declBus(c+16,"D4_ST", false,-1, 31,0);
    tracep->declBus(c+17,"D5_ST", false,-1, 31,0);
    tracep->declBus(c+18,"D6_ST", false,-1, 31,0);
    tracep->declBus(c+19,"D7_ST", false,-1, 31,0);
    tracep->declBus(c+20,"STOP_ST", false,-1, 31,0);
    tracep->declBit(c+4,"clk_i", false,-1);
    tracep->declBit(c+5,"btn1_i", false,-1);
    tracep->declBit(c+6,"uart_tx_o", false,-1);
    tracep->declBit(c+7,"led1_o", false,-1);
    tracep->declBit(c+8,"led2_o", false,-1);
    tracep->declBus(c+1,"tx_state", false,-1, 3,0);
    tracep->declBus(c+2,"tx_data", false,-1, 7,0);
    tracep->declBus(c+3,"clk_count", false,-1, 31,0);
    tracep->declBus(c+21,"repeat_cnt", false,-1, 7,0);
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
    bufp->fullCData(oldp+1,(vlSelf->fp32_uart_tx__DOT__tx_state),4);
    bufp->fullCData(oldp+2,(vlSelf->fp32_uart_tx__DOT__tx_data),8);
    bufp->fullIData(oldp+3,(vlSelf->fp32_uart_tx__DOT__clk_count),32);
    bufp->fullBit(oldp+4,(vlSelf->clk_i));
    bufp->fullBit(oldp+5,(vlSelf->btn1_i));
    bufp->fullBit(oldp+6,(vlSelf->uart_tx_o));
    bufp->fullBit(oldp+7,(vlSelf->led1_o));
    bufp->fullBit(oldp+8,(vlSelf->led2_o));
    bufp->fullIData(oldp+9,(0x1c200U),32);
    bufp->fullIData(oldp+10,(0U),32);
    bufp->fullIData(oldp+11,(1U),32);
    bufp->fullIData(oldp+12,(2U),32);
    bufp->fullIData(oldp+13,(3U),32);
    bufp->fullIData(oldp+14,(4U),32);
    bufp->fullIData(oldp+15,(5U),32);
    bufp->fullIData(oldp+16,(6U),32);
    bufp->fullIData(oldp+17,(7U),32);
    bufp->fullIData(oldp+18,(8U),32);
    bufp->fullIData(oldp+19,(9U),32);
    bufp->fullIData(oldp+20,(0xaU),32);
    bufp->fullCData(oldp+21,(5U),8);
}
