// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hf3797ad0_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = (((IData)(vlSelf->PRE) << 3U) | 
                    (((IData)(vlSelf->maruta__DOT__state) 
                      << 1U) | (IData)(vlSelf->ACT)));
    vlSelf->maruta__DOT__next_state = Vtop__ConstPool__TABLE_hf3797ad0_0
        [__Vtableidx2];
}

extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_h25d20802_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_h5039b3e4_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vtableidx1;
    // Body
    vlSelf->maruta__DOT__state = vlSelf->maruta__DOT__next_state;
    __Vtableidx1 = vlSelf->maruta__DOT__state;
    vlSelf->PEQ = Vtop__ConstPool__TABLE_h25d20802_0
        [__Vtableidx1];
    vlSelf->PWL = Vtop__ConstPool__TABLE_h5039b3e4_0
        [__Vtableidx1];
    vlSelf->NSA = vlSelf->PWL;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->ACT) & (~ (IData)(vlSelf->__Vclklast__TOP__ACT))) 
         | ((IData)(vlSelf->PRE) & (~ (IData)(vlSelf->__Vclklast__TOP__PRE))))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->DELAY) & (~ (IData)(vlSelf->__Vclklast__TOP__DELAY)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__ACT = vlSelf->ACT;
    vlSelf->__Vclklast__TOP__PRE = vlSelf->PRE;
    vlSelf->__Vclklast__TOP__DELAY = vlSelf->DELAY;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->DELAY & 0xfeU))) {
        Verilated::overWidthError("DELAY");}
    if (VL_UNLIKELY((vlSelf->ACT & 0xfeU))) {
        Verilated::overWidthError("ACT");}
    if (VL_UNLIKELY((vlSelf->PRE & 0xfeU))) {
        Verilated::overWidthError("PRE");}
}
#endif  // VL_DEBUG
