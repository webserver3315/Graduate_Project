// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->fp32_uart_rx_tx__DOT__RX_VALID_O));
        bufp->chgWData(oldp+1,(vlSelf->fp32_uart_rx_tx__DOT__data),96);
        bufp->chgIData(oldp+4,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt),32);
        bufp->chgCData(oldp+5,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state),3);
        bufp->chgCData(oldp+6,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_byte),8);
        bufp->chgCData(oldp+7,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_bit),8);
        bufp->chgCData(oldp+8,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__total_index),8);
        bufp->chgIData(oldp+9,(vlSelf->fp32_uart_rx_tx__DOT__data[0U]),32);
        bufp->chgCData(oldp+10,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state),8);
        bufp->chgIData(oldp+11,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data),32);
        bufp->chgIData(oldp+12,(vlSelf->fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt),32);
    }
    bufp->chgBit(oldp+13,(vlSelf->CLK_I));
    bufp->chgBit(oldp+14,(vlSelf->RSTL_I));
    bufp->chgBit(oldp+15,(vlSelf->UART_RX_I));
    bufp->chgBit(oldp+16,(vlSelf->TX_DATA_O));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
