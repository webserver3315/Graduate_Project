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
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ELB;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_ERB;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_EEQ;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_minus_EB_Carry;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EB_minus_EA_Carry;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R;
    CData/*0:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__DEBUG_FINAL_MAN;
    CData/*7:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__DEBUG_FINAL_EXP;
    SData/*8:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB;
    SData/*8:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254;
    SData/*8:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E;
    SData/*8:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Exp;
    SData/*8:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB;
    SData/*8:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB_minus_254;
    VL_IN(alpha,31,0);
    VL_IN(bravo,31,0);
    VL_IN(acc,31,0);
    VL_OUT(delta,31,0);
    IData/*31:0*/ FP32_MAC_Combinatorial__DOT__middle_output;
    IData/*23:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1;
    IData/*23:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2;
    IData/*23:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa;
    IData/*23:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa;
    IData/*23:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3;
    IData/*24:0*/ FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa;
    QData/*47:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original;
    QData/*47:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man3;
    QData/*47:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp;
    QData/*47:0*/ FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man;
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
