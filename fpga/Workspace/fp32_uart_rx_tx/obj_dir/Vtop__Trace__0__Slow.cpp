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
    tracep->declBit(c+14,"CLK_I", false,-1);
    tracep->declBit(c+15,"RSTL_I", false,-1);
    tracep->declBit(c+16,"UART_RX_I", false,-1);
    tracep->declBit(c+17,"TX_DATA_O", false,-1);
    tracep->pushNamePrefix("fp32_uart_rx_tx ");
    tracep->declBit(c+14,"CLK_I", false,-1);
    tracep->declBit(c+15,"RSTL_I", false,-1);
    tracep->declBit(c+16,"UART_RX_I", false,-1);
    tracep->declBit(c+17,"TX_DATA_O", false,-1);
    tracep->declBit(c+1,"RX_VALID_O", false,-1);
    tracep->declArray(c+2,"data", false,-1, 95,0);
    tracep->pushNamePrefix("My_UART_Rx ");
    tracep->declBit(c+15,"RSTL_I", false,-1);
    tracep->declBit(c+14,"CLK_I", false,-1);
    tracep->declBit(c+16,"UART_RX_I", false,-1);
    tracep->declBit(c+18,"Mac_READY_I", false,-1);
    tracep->declBit(c+1,"RX_VALID_O", false,-1);
    tracep->declArray(c+2,"RX_DATA_O", false,-1, 95,0);
    tracep->declBus(c+19,"IDLE", false,-1, 2,0);
    tracep->declBus(c+20,"START", false,-1, 2,0);
    tracep->declBus(c+21,"DATA", false,-1, 2,0);
    tracep->declBus(c+22,"STOP", false,-1, 2,0);
    tracep->declBus(c+23,"MORE", false,-1, 2,0);
    tracep->declBus(c+5,"clk_cnt", false,-1, 31,0);
    tracep->declBus(c+6,"rx_state", false,-1, 2,0);
    tracep->declBus(c+7,"received_byte", false,-1, 7,0);
    tracep->declBus(c+8,"received_bit", false,-1, 7,0);
    tracep->declBus(c+9,"total_index", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("My_UART_Tx ");
    tracep->declBus(c+24,"BAUD_RATE", false,-1, 31,0);
    tracep->declBus(c+25,"IDLE0_ST", false,-1, 31,0);
    tracep->declBus(c+26,"START0_ST", false,-1, 31,0);
    tracep->declBus(c+27,"D0_ST", false,-1, 31,0);
    tracep->declBus(c+28,"D1_ST", false,-1, 31,0);
    tracep->declBus(c+29,"D2_ST", false,-1, 31,0);
    tracep->declBus(c+30,"D3_ST", false,-1, 31,0);
    tracep->declBus(c+31,"D4_ST", false,-1, 31,0);
    tracep->declBus(c+32,"D5_ST", false,-1, 31,0);
    tracep->declBus(c+33,"D6_ST", false,-1, 31,0);
    tracep->declBus(c+34,"D7_ST", false,-1, 31,0);
    tracep->declBus(c+35,"STOP0_ST", false,-1, 31,0);
    tracep->declBus(c+36,"IDLE1_ST", false,-1, 31,0);
    tracep->declBus(c+37,"START1_ST", false,-1, 31,0);
    tracep->declBus(c+38,"D8_ST", false,-1, 31,0);
    tracep->declBus(c+39,"D9_ST", false,-1, 31,0);
    tracep->declBus(c+40,"D10_ST", false,-1, 31,0);
    tracep->declBus(c+41,"D11_ST", false,-1, 31,0);
    tracep->declBus(c+42,"D12_ST", false,-1, 31,0);
    tracep->declBus(c+43,"D13_ST", false,-1, 31,0);
    tracep->declBus(c+44,"D14_ST", false,-1, 31,0);
    tracep->declBus(c+45,"D15_ST", false,-1, 31,0);
    tracep->declBus(c+46,"STOP1_ST", false,-1, 31,0);
    tracep->declBus(c+47,"IDLE2_ST", false,-1, 31,0);
    tracep->declBus(c+48,"START2_ST", false,-1, 31,0);
    tracep->declBus(c+49,"D16_ST", false,-1, 31,0);
    tracep->declBus(c+50,"D17_ST", false,-1, 31,0);
    tracep->declBus(c+51,"D18_ST", false,-1, 31,0);
    tracep->declBus(c+52,"D19_ST", false,-1, 31,0);
    tracep->declBus(c+53,"D20_ST", false,-1, 31,0);
    tracep->declBus(c+54,"D21_ST", false,-1, 31,0);
    tracep->declBus(c+55,"D22_ST", false,-1, 31,0);
    tracep->declBus(c+56,"D23_ST", false,-1, 31,0);
    tracep->declBus(c+57,"STOP2_ST", false,-1, 31,0);
    tracep->declBus(c+58,"IDLE3_ST", false,-1, 31,0);
    tracep->declBus(c+59,"START3_ST", false,-1, 31,0);
    tracep->declBus(c+60,"D24_ST", false,-1, 31,0);
    tracep->declBus(c+61,"D25_ST", false,-1, 31,0);
    tracep->declBus(c+62,"D26_ST", false,-1, 31,0);
    tracep->declBus(c+63,"D27_ST", false,-1, 31,0);
    tracep->declBus(c+64,"D28_ST", false,-1, 31,0);
    tracep->declBus(c+65,"D29_ST", false,-1, 31,0);
    tracep->declBus(c+66,"D30_ST", false,-1, 31,0);
    tracep->declBus(c+67,"D31_ST", false,-1, 31,0);
    tracep->declBus(c+68,"STOP3_ST", false,-1, 31,0);
    tracep->declBit(c+15,"RSTL_I", false,-1);
    tracep->declBit(c+14,"CLK_I", false,-1);
    tracep->declBit(c+1,"TX_VALID_I", false,-1);
    tracep->declBus(c+10,"TX_DATA_I", false,-1, 31,0);
    tracep->declBit(c+17,"TX_DATA_O", false,-1);
    tracep->declBus(c+11,"tx_state", false,-1, 7,0);
    tracep->declBus(c+12,"tx_data", false,-1, 31,0);
    tracep->declBus(c+13,"clk_cnt", false,-1, 31,0);
    tracep->popNamePrefix(2);
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
    bufp->fullBit(oldp+1,(vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O));
    bufp->fullWData(oldp+2,(vlSelf->fp32_uart_rx_tx__DOT__data),96);
    bufp->fullIData(oldp+5,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt),32);
    bufp->fullCData(oldp+6,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state),3);
    bufp->fullCData(oldp+7,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_byte),8);
    bufp->fullCData(oldp+8,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_bit),8);
    bufp->fullCData(oldp+9,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__total_index),8);
    bufp->fullIData(oldp+10,(vlSelf->fp32_uart_rx_tx__DOT__data[0U]),32);
    bufp->fullCData(oldp+11,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state),8);
    bufp->fullIData(oldp+12,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data),32);
    bufp->fullIData(oldp+13,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt),32);
    bufp->fullBit(oldp+14,(vlSelf->CLK_I));
    bufp->fullBit(oldp+15,(vlSelf->RSTL_I));
    bufp->fullBit(oldp+16,(vlSelf->UART_RX_I));
    bufp->fullBit(oldp+17,(vlSelf->TX_DATA_O));
    bufp->fullBit(oldp+18,(1U));
    bufp->fullCData(oldp+19,(0U),3);
    bufp->fullCData(oldp+20,(1U),3);
    bufp->fullCData(oldp+21,(2U),3);
    bufp->fullCData(oldp+22,(3U),3);
    bufp->fullCData(oldp+23,(4U),3);
    bufp->fullIData(oldp+24,(0x1c200U),32);
    bufp->fullIData(oldp+25,(0U),32);
    bufp->fullIData(oldp+26,(1U),32);
    bufp->fullIData(oldp+27,(2U),32);
    bufp->fullIData(oldp+28,(3U),32);
    bufp->fullIData(oldp+29,(4U),32);
    bufp->fullIData(oldp+30,(5U),32);
    bufp->fullIData(oldp+31,(6U),32);
    bufp->fullIData(oldp+32,(7U),32);
    bufp->fullIData(oldp+33,(8U),32);
    bufp->fullIData(oldp+34,(9U),32);
    bufp->fullIData(oldp+35,(0xaU),32);
    bufp->fullIData(oldp+36,(0xbU),32);
    bufp->fullIData(oldp+37,(0xcU),32);
    bufp->fullIData(oldp+38,(0xdU),32);
    bufp->fullIData(oldp+39,(0xeU),32);
    bufp->fullIData(oldp+40,(0xfU),32);
    bufp->fullIData(oldp+41,(0x10U),32);
    bufp->fullIData(oldp+42,(0x11U),32);
    bufp->fullIData(oldp+43,(0x12U),32);
    bufp->fullIData(oldp+44,(0x13U),32);
    bufp->fullIData(oldp+45,(0x14U),32);
    bufp->fullIData(oldp+46,(0x15U),32);
    bufp->fullIData(oldp+47,(0x16U),32);
    bufp->fullIData(oldp+48,(0x17U),32);
    bufp->fullIData(oldp+49,(0x18U),32);
    bufp->fullIData(oldp+50,(0x19U),32);
    bufp->fullIData(oldp+51,(0x1aU),32);
    bufp->fullIData(oldp+52,(0x1bU),32);
    bufp->fullIData(oldp+53,(0x1cU),32);
    bufp->fullIData(oldp+54,(0x1dU),32);
    bufp->fullIData(oldp+55,(0x1eU),32);
    bufp->fullIData(oldp+56,(0x1fU),32);
    bufp->fullIData(oldp+57,(0x20U),32);
    bufp->fullIData(oldp+58,(0x21U),32);
    bufp->fullIData(oldp+59,(0x22U),32);
    bufp->fullIData(oldp+60,(0x23U),32);
    bufp->fullIData(oldp+61,(0x24U),32);
    bufp->fullIData(oldp+62,(0x25U),32);
    bufp->fullIData(oldp+63,(0x26U),32);
    bufp->fullIData(oldp+64,(0x27U),32);
    bufp->fullIData(oldp+65,(0x28U),32);
    bufp->fullIData(oldp+66,(0x29U),32);
    bufp->fullIData(oldp+67,(0x2aU),32);
    bufp->fullIData(oldp+68,(0x2bU),32);
}
