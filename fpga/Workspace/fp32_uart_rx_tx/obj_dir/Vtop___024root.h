// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK_I,0,0);
    VL_IN8(RSTL_I,0,0);
    VL_IN8(UART_RX_I,0,0);
    VL_OUT8(TX_DATA_O,0,0);
    CData/*0:0*/ fp32_uart_rx_tx__DOT__RX_VALID_O;
    CData/*2:0*/ fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__rx_state;
    CData/*7:0*/ fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_byte;
    CData/*7:0*/ fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__received_bit;
    CData/*7:0*/ fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__total_index;
    CData/*0:0*/ fp32_uart_rx_tx__DOT__My_UART_Rx__DOT____Vlvbound_h93dc11f2__0;
    CData/*7:0*/ fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_state;
    CData/*0:0*/ __Vclklast__TOP__CLK_I;
    CData/*0:0*/ __Vclklast__TOP__RSTL_I;
    VlWide<3>/*95:0*/ fp32_uart_rx_tx__DOT__data;
    IData/*31:0*/ fp32_uart_rx_tx__DOT__My_UART_Rx__DOT__clk_cnt;
    IData/*31:0*/ fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__tx_data;
    IData/*31:0*/ fp32_uart_rx_tx__DOT__My_UART_Tx__DOT__clk_cnt;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
