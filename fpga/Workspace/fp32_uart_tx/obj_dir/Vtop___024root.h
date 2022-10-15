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
    VL_IN8(clk_i,0,0);
    VL_IN8(btn1_i,0,0);
    VL_OUT8(uart_tx_o,0,0);
    VL_OUT8(led1_o,0,0);
    VL_OUT8(led2_o,0,0);
    CData/*3:0*/ fp32_uart_tx__DOT__tx_state;
    CData/*7:0*/ fp32_uart_tx__DOT__tx_data;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    IData/*31:0*/ fp32_uart_tx__DOT__clk_count;
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
