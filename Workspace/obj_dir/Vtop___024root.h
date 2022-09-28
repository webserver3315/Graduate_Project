// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ FP32_Multiplier_Combinatorial__DOT__EA;
    CData/*7:0*/ FP32_Multiplier_Combinatorial__DOT__EB;
    CData/*0:0*/ FP32_Multiplier_Combinatorial__DOT__E_LeftBig;
    CData/*7:0*/ FP32_Multiplier_Combinatorial__DOT__leading_1_position;
    CData/*7:0*/ FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN;
    CData/*7:0*/ FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP;
    SData/*8:0*/ FP32_Multiplier_Combinatorial__DOT__EA_plus_EB;
    SData/*8:0*/ FP32_Multiplier_Combinatorial__DOT__Until_126_2;
    SData/*8:0*/ FP32_Multiplier_Combinatorial__DOT__final_Exp;
    VL_IN(alpha,31,0);
    VL_IN(bravo,31,0);
    VL_OUT(delta,31,0);
    QData/*47:0*/ FP32_Multiplier_Combinatorial__DOT__M_48_Original;
    QData/*47:0*/ FP32_Multiplier_Combinatorial__DOT__Man3;
    QData/*47:0*/ FP32_Multiplier_Combinatorial__DOT__final_Man;
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
