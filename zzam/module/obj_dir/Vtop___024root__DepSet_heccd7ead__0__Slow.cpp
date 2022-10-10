// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_h25d20802_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_h5039b3e4_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = vlSelf->maruta__DOT__state;
    vlSelf->PEQ = Vtop__ConstPool__TABLE_h25d20802_0
        [__Vtableidx1];
    vlSelf->PWL = Vtop__ConstPool__TABLE_h5039b3e4_0
        [__Vtableidx1];
    vlSelf->NSA = vlSelf->PWL;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__ACT = vlSelf->ACT;
    vlSelf->__Vclklast__TOP__PRE = vlSelf->PRE;
    vlSelf->__Vclklast__TOP__DELAY = vlSelf->DELAY;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
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
    vlSelf->DELAY = VL_RAND_RESET_I(1);
    vlSelf->ACT = VL_RAND_RESET_I(1);
    vlSelf->PRE = VL_RAND_RESET_I(1);
    vlSelf->PEQ = VL_RAND_RESET_I(1);
    vlSelf->PWL = VL_RAND_RESET_I(1);
    vlSelf->NSA = VL_RAND_RESET_I(1);
    vlSelf->maruta__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->maruta__DOT__next_state = VL_RAND_RESET_I(2);
}
