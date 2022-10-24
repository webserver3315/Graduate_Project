// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->alpha = VL_RAND_RESET_I(32);
    vlSelf->bravo = VL_RAND_RESET_I(32);
    vlSelf->acc = VL_RAND_RESET_I(32);
    vlSelf->delta = VL_RAND_RESET_I(32);
    vlSelf->FP32_MAC_Combinatorial__DOT__middle_output = VL_RAND_RESET_I(32);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254 = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original = VL_RAND_RESET_Q(48);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Exp = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp = VL_RAND_RESET_Q(48);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man = VL_RAND_RESET_Q(48);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_EEQ = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_minus_EB_Carry = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EB_minus_EA_Carry = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB_minus_254 = VL_RAND_RESET_I(9);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1 = VL_RAND_RESET_I(24);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2 = VL_RAND_RESET_I(24);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa = VL_RAND_RESET_I(24);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa = VL_RAND_RESET_I(24);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3 = VL_RAND_RESET_I(24);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa = VL_RAND_RESET_I(25);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position = VL_RAND_RESET_I(8);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
