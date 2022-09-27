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
    vlSelf->delta = VL_RAND_RESET_I(32);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__EA = VL_RAND_RESET_I(8);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__EB = VL_RAND_RESET_I(8);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB = VL_RAND_RESET_I(9);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig = VL_RAND_RESET_I(1);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original = VL_RAND_RESET_Q(48);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position = VL_RAND_RESET_I(8);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2 = VL_RAND_RESET_I(9);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man = VL_RAND_RESET_Q(48);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp = VL_RAND_RESET_I(9);
    vlSelf->FP32_Multiplier_Combinatorial__DOT__delta_exp = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
