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
    VL_IN8(DELAY,0,0);
    VL_IN8(ACT,0,0);
    VL_IN8(PRE,0,0);
    VL_OUT8(PEQ,0,0);
    VL_OUT8(PWL,0,0);
    VL_OUT8(NSA,0,0);
    CData/*1:0*/ maruta__DOT__state;
    CData/*1:0*/ maruta__DOT__next_state;
    CData/*0:0*/ __Vclklast__TOP__ACT;
    CData/*0:0*/ __Vclklast__TOP__PRE;
    CData/*0:0*/ __Vclklast__TOP__DELAY;

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
