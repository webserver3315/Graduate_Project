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
    CData/*0:0*/ uart_tx__DOT__clk_div;
    VL_OUT8(uart_tx_o,0,0);
    VL_OUT8(led1_o,0,0);
    VL_OUT8(led2_o,0,0);
    CData/*3:0*/ uart_tx__DOT__state;
    CData/*3:0*/ uart_tx__DOT__next_state;
    CData/*0:0*/ uart_tx__DOT__queueing;
    CData/*0:0*/ __VinpClk__TOP__uart_tx__DOT__clk_div;
    CData/*0:0*/ __Vclklast__TOP__btn1_i;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__uart_tx__DOT__clk_div;
    CData/*0:0*/ __Vchglast__TOP__uart_tx__DOT__clk_div;
    IData/*31:0*/ uart_tx__DOT__clk_count;

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
