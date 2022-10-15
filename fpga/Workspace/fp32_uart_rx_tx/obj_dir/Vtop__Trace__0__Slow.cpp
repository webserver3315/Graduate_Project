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
    tracep->declBit(c+12,"CLK_I", false,-1);
    tracep->declBit(c+13,"RSTL_I", false,-1);
    tracep->declBit(c+14,"UART_RX_I", false,-1);
    tracep->declBit(c+15,"TX_DATA_O", false,-1);
    tracep->pushNamePrefix("fp32_uart_rx_tx ");
    tracep->declBit(c+12,"CLK_I", false,-1);
    tracep->declBit(c+13,"RSTL_I", false,-1);
    tracep->declBit(c+14,"UART_RX_I", false,-1);
    tracep->declBit(c+15,"TX_DATA_O", false,-1);
    tracep->declBit(c+1,"RX_VALID_O", false,-1);
    tracep->declArray(c+2,"data", false,-1, 95,0);
    tracep->pushNamePrefix("My_UART_Rx ");
    tracep->declBit(c+13,"RSTL_I", false,-1);
    tracep->declBit(c+12,"CLK_I", false,-1);
    tracep->declBit(c+14,"UART_RX_I", false,-1);
    tracep->declBit(c+16,"Mac_READY_I", false,-1);
    tracep->declBit(c+1,"RX_VALID_O", false,-1);
    tracep->declArray(c+2,"RX_DATA_O", false,-1, 95,0);
    tracep->declBus(c+17,"IDLE", false,-1, 2,0);
    tracep->declBus(c+18,"START", false,-1, 2,0);
    tracep->declBus(c+19,"DATA", false,-1, 2,0);
    tracep->declBus(c+20,"STOP", false,-1, 2,0);
    tracep->declBus(c+21,"MORE", false,-1, 2,0);
    tracep->declBus(c+5,"clk_cnt", false,-1, 31,0);
    tracep->declBus(c+6,"bit_idx", false,-1, 7,0);
    tracep->declBus(c+7,"rx_state", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("My_UART_Tx ");
    tracep->declBus(c+22,"BAUD_RATE", false,-1, 31,0);
    tracep->declBus(c+23,"IDLE0_ST", false,-1, 31,0);
    tracep->declBus(c+24,"START0_ST", false,-1, 31,0);
    tracep->declBus(c+25,"D0_ST", false,-1, 31,0);
    tracep->declBus(c+26,"D1_ST", false,-1, 31,0);
    tracep->declBus(c+27,"D2_ST", false,-1, 31,0);
    tracep->declBus(c+28,"D3_ST", false,-1, 31,0);
    tracep->declBus(c+29,"D4_ST", false,-1, 31,0);
    tracep->declBus(c+30,"D5_ST", false,-1, 31,0);
    tracep->declBus(c+31,"D6_ST", false,-1, 31,0);
    tracep->declBus(c+32,"D7_ST", false,-1, 31,0);
    tracep->declBus(c+33,"STOP0_ST", false,-1, 31,0);
    tracep->declBus(c+34,"IDLE1_ST", false,-1, 31,0);
    tracep->declBus(c+35,"START1_ST", false,-1, 31,0);
    tracep->declBus(c+36,"D8_ST", false,-1, 31,0);
    tracep->declBus(c+37,"D9_ST", false,-1, 31,0);
    tracep->declBus(c+38,"D10_ST", false,-1, 31,0);
    tracep->declBus(c+39,"D11_ST", false,-1, 31,0);
    tracep->declBus(c+40,"D12_ST", false,-1, 31,0);
    tracep->declBus(c+41,"D13_ST", false,-1, 31,0);
    tracep->declBus(c+42,"D14_ST", false,-1, 31,0);
    tracep->declBus(c+43,"D15_ST", false,-1, 31,0);
    tracep->declBus(c+44,"STOP1_ST", false,-1, 31,0);
    tracep->declBus(c+45,"IDLE2_ST", false,-1, 31,0);
    tracep->declBus(c+46,"START2_ST", false,-1, 31,0);
    tracep->declBus(c+47,"D16_ST", false,-1, 31,0);
    tracep->declBus(c+48,"D17_ST", false,-1, 31,0);
    tracep->declBus(c+49,"D18_ST", false,-1, 31,0);
    tracep->declBus(c+50,"D19_ST", false,-1, 31,0);
    tracep->declBus(c+51,"D20_ST", false,-1, 31,0);
    tracep->declBus(c+52,"D21_ST", false,-1, 31,0);
    tracep->declBus(c+53,"D22_ST", false,-1, 31,0);
    tracep->declBus(c+54,"D23_ST", false,-1, 31,0);
    tracep->declBus(c+55,"STOP2_ST", false,-1, 31,0);
    tracep->declBus(c+56,"IDLE3_ST", false,-1, 31,0);
    tracep->declBus(c+57,"START3_ST", false,-1, 31,0);
    tracep->declBus(c+58,"D24_ST", false,-1, 31,0);
    tracep->declBus(c+59,"D25_ST", false,-1, 31,0);
    tracep->declBus(c+60,"D26_ST", false,-1, 31,0);
    tracep->declBus(c+61,"D27_ST", false,-1, 31,0);
    tracep->declBus(c+62,"D28_ST", false,-1, 31,0);
    tracep->declBus(c+63,"D29_ST", false,-1, 31,0);
    tracep->declBus(c+64,"D30_ST", false,-1, 31,0);
    tracep->declBus(c+65,"D31_ST", false,-1, 31,0);
    tracep->declBus(c+66,"STOP3_ST", false,-1, 31,0);
    tracep->declBit(c+13,"RSTL_I", false,-1);
    tracep->declBit(c+12,"CLK_I", false,-1);
    tracep->declBit(c+1,"TX_VALID_I", false,-1);
    tracep->declBus(c+8,"TX_DATA_I", false,-1, 31,0);
    tracep->declBit(c+15,"TX_DATA_O", false,-1);
    tracep->declBus(c+9,"tx_state", false,-1, 7,0);
    tracep->declBus(c+10,"tx_data", false,-1, 31,0);
    tracep->declBus(c+11,"clk_cnt", false,-1, 31,0);
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
    bufp->fullCData(oldp+6,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__bit_idx),8);
    bufp->fullCData(oldp+7,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state),3);
    bufp->fullIData(oldp+8,(vlSelf->fp32_uart_rx_tx__DOT__data[0U]),32);
    bufp->fullCData(oldp+9,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state),8);
    bufp->fullIData(oldp+10,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data),32);
    bufp->fullIData(oldp+11,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt),32);
    bufp->fullBit(oldp+12,(vlSelf->CLK_I));
    bufp->fullBit(oldp+13,(vlSelf->RSTL_I));
    bufp->fullBit(oldp+14,(vlSelf->UART_RX_I));
    bufp->fullBit(oldp+15,(vlSelf->TX_DATA_O));
    bufp->fullBit(oldp+16,(1U));
    bufp->fullCData(oldp+17,(0U),3);
    bufp->fullCData(oldp+18,(1U),3);
    bufp->fullCData(oldp+19,(2U),3);
    bufp->fullCData(oldp+20,(3U),3);
    bufp->fullCData(oldp+21,(4U),3);
    bufp->fullIData(oldp+22,(0x1c200U),32);
    bufp->fullIData(oldp+23,(0U),32);
    bufp->fullIData(oldp+24,(1U),32);
    bufp->fullIData(oldp+25,(2U),32);
    bufp->fullIData(oldp+26,(3U),32);
    bufp->fullIData(oldp+27,(4U),32);
    bufp->fullIData(oldp+28,(5U),32);
    bufp->fullIData(oldp+29,(6U),32);
    bufp->fullIData(oldp+30,(7U),32);
    bufp->fullIData(oldp+31,(8U),32);
    bufp->fullIData(oldp+32,(9U),32);
    bufp->fullIData(oldp+33,(0xaU),32);
    bufp->fullIData(oldp+34,(0xbU),32);
    bufp->fullIData(oldp+35,(0xcU),32);
    bufp->fullIData(oldp+36,(0xdU),32);
    bufp->fullIData(oldp+37,(0xeU),32);
    bufp->fullIData(oldp+38,(0xfU),32);
    bufp->fullIData(oldp+39,(0x10U),32);
    bufp->fullIData(oldp+40,(0x11U),32);
    bufp->fullIData(oldp+41,(0x12U),32);
    bufp->fullIData(oldp+42,(0x13U),32);
    bufp->fullIData(oldp+43,(0x14U),32);
    bufp->fullIData(oldp+44,(0x15U),32);
    bufp->fullIData(oldp+45,(0x16U),32);
    bufp->fullIData(oldp+46,(0x17U),32);
    bufp->fullIData(oldp+47,(0x18U),32);
    bufp->fullIData(oldp+48,(0x19U),32);
    bufp->fullIData(oldp+49,(0x1aU),32);
    bufp->fullIData(oldp+50,(0x1bU),32);
    bufp->fullIData(oldp+51,(0x1cU),32);
    bufp->fullIData(oldp+52,(0x1dU),32);
    bufp->fullIData(oldp+53,(0x1eU),32);
    bufp->fullIData(oldp+54,(0x1fU),32);
    bufp->fullIData(oldp+55,(0x20U),32);
    bufp->fullIData(oldp+56,(0x21U),32);
    bufp->fullIData(oldp+57,(0x22U),32);
    bufp->fullIData(oldp+58,(0x23U),32);
    bufp->fullIData(oldp+59,(0x24U),32);
    bufp->fullIData(oldp+60,(0x25U),32);
    bufp->fullIData(oldp+61,(0x26U),32);
    bufp->fullIData(oldp+62,(0x27U),32);
    bufp->fullIData(oldp+63,(0x28U),32);
    bufp->fullIData(oldp+64,(0x29U),32);
    bufp->fullIData(oldp+65,(0x2aU),32);
    bufp->fullIData(oldp+66,(0x2bU),32);
}
