// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->FP32_Adder_Combinatorial__DOT__Denorm1 
        = ((IData)(((0U == (0x7f800000U & vlSelf->alpha)) 
                    & (0U != (0x7fffffU & vlSelf->alpha))))
            ? (0x7fffffU & vlSelf->alpha) : (((0U != 
                                               (0xffU 
                                                & (vlSelf->alpha 
                                                   >> 0x17U))) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->alpha)));
    vlSelf->FP32_Adder_Combinatorial__DOT__Denorm2 
        = ((IData)(((0U == (0x7f800000U & vlSelf->bravo)) 
                    & (0U != (0x7fffffU & vlSelf->bravo))))
            ? (0x7fffffU & vlSelf->bravo) : (((0U != 
                                               (0xffU 
                                                & (vlSelf->bravo 
                                                   >> 0x17U))) 
                                              << 0x17U) 
                                             | (0x7fffffU 
                                                & vlSelf->bravo)));
    vlSelf->FP32_Adder_Combinatorial__DOT__M_LeftBig 
        = ((0x7fffffU & vlSelf->alpha) > (0x7fffffU 
                                          & vlSelf->bravo));
    vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig 
        = ((0xffU & (vlSelf->alpha >> 0x17U)) > (0xffU 
                                                 & (vlSelf->bravo 
                                                    >> 0x17U)));
    vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E 
        = (0xffU & ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                     ? (vlSelf->alpha >> 0x17U) : (vlSelf->bravo 
                                                   >> 0x17U)));
    vlSelf->FP32_Adder_Combinatorial__DOT__E_Equal 
        = (1U & (~ (((0xffU & (vlSelf->alpha >> 0x17U)) 
                     < (0xffU & (vlSelf->bravo >> 0x17U))) 
                    | (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig))));
    if (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig) 
         | ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_Equal) 
            & (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__M_LeftBig)))) {
        vlSelf->FP32_Adder_Combinatorial__DOT__large_E_Mantissa 
            = vlSelf->FP32_Adder_Combinatorial__DOT__Denorm1;
        vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa 
            = vlSelf->FP32_Adder_Combinatorial__DOT__Denorm2;
    } else {
        vlSelf->FP32_Adder_Combinatorial__DOT__large_E_Mantissa 
            = vlSelf->FP32_Adder_Combinatorial__DOT__Denorm2;
        vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa 
            = vlSelf->FP32_Adder_Combinatorial__DOT__Denorm1;
    }
    vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3 
        = ((0x17U >= (0xffU & (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                                 ? ((vlSelf->alpha 
                                     >> 0x17U) - (vlSelf->bravo 
                                                  >> 0x17U))
                                 : ((vlSelf->bravo 
                                     >> 0x17U) - (vlSelf->alpha 
                                                  >> 0x17U))) 
                               - ((0U == (0xffU & (vlSelf->alpha 
                                                   >> 0x17U))) 
                                  ^ (0U == (0xffU & 
                                            (vlSelf->bravo 
                                             >> 0x17U)))))))
            ? (0xffffffU & ((((0xffU == (0xffU & (vlSelf->alpha 
                                                  >> 0x17U))) 
                              | (0xffU == (0xffU & 
                                           (vlSelf->bravo 
                                            >> 0x17U))))
                              ? 0xffffffU : vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa) 
                            >> (0xffU & (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                                           ? ((vlSelf->alpha 
                                               >> 0x17U) 
                                              - (vlSelf->bravo 
                                                 >> 0x17U))
                                           : ((vlSelf->bravo 
                                               >> 0x17U) 
                                              - (vlSelf->alpha 
                                                 >> 0x17U))) 
                                         - ((0U == 
                                             (0xffU 
                                              & (vlSelf->alpha 
                                                 >> 0x17U))) 
                                            ^ (0U == 
                                               (0xffU 
                                                & (vlSelf->bravo 
                                                   >> 0x17U))))))))
            : 0U);
    vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
        = (0x1ffffffU & ((((vlSelf->alpha ^ vlSelf->bravo) 
                           >> 0x1fU) + (0xffffffU & 
                                        (((vlSelf->alpha 
                                           ^ vlSelf->bravo) 
                                          >> 0x1fU)
                                          ? (~ vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3)
                                          : vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3))) 
                         + vlSelf->FP32_Adder_Combinatorial__DOT__large_E_Mantissa));
    vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position 
        = ((0x800000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
            ? 0U : ((0x400000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                     ? 1U : ((0x200000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                              ? 2U : ((0x100000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                       ? 3U : ((0x80000U 
                                                & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                ? 4U
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                    ? 5U
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                     ? 6U
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                      ? 7U
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                       ? 8U
                                                       : 
                                                      ((0x4000U 
                                                        & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                        ? 9U
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                         ? 0xaU
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                          ? 0xbU
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                           ? 0xcU
                                                           : 
                                                          ((0x400U 
                                                            & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                            ? 0xdU
                                                            : 
                                                           ((0x200U 
                                                             & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                             ? 0xeU
                                                             : 
                                                            ((0x100U 
                                                              & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                              ? 0xfU
                                                              : 
                                                             ((0x80U 
                                                               & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                               ? 0x10U
                                                               : 
                                                              ((0x40U 
                                                                & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                                ? 0x11U
                                                                : 
                                                               ((0x20U 
                                                                 & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x10U 
                                                                  & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((8U 
                                                                   & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((4U 
                                                                    & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((2U 
                                                                     & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((1U 
                                                                      & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                                      ? 0x17U
                                                                      : 0U))))))))))))))))))))))));
    vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac 
        = ((0x17U >= (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))
            ? (0xffffffU & ((0x7fffffU & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa) 
                            << (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position)))
            : 0U);
    vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent 
        = (0xffU & ((((vlSelf->alpha >> 0x1fU) == (vlSelf->bravo 
                                                   >> 0x1fU)) 
                     & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                        >> 0x18U)) ? ((IData)(1U) + (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E))
                     : ((((vlSelf->alpha >> 0x1fU) 
                          == (vlSelf->bravo >> 0x1fU)) 
                         & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                            >> 0x17U)) ? (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E)
                         : ((0x800000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                             ? 0U : ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E) 
                                     - (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))))));
    vlSelf->delta = (((((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig) 
                        | ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_Equal) 
                           & (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__M_LeftBig)))
                        ? (vlSelf->alpha >> 0x1fU) : 
                       (vlSelf->bravo >> 0x1fU)) << 0x1fU) 
                     | (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent) 
                         << 0x17U) | (0x7fffffU & (
                                                   (((vlSelf->alpha 
                                                      >> 0x1fU) 
                                                     == 
                                                     (vlSelf->bravo 
                                                      >> 0x1fU)) 
                                                    & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                                       >> 0x18U))
                                                    ? 
                                                   (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                                    >> 1U)
                                                    : 
                                                   ((((vlSelf->alpha 
                                                       >> 0x1fU) 
                                                      == 
                                                      (vlSelf->bravo 
                                                       >> 0x1fU)) 
                                                     & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                                        >> 0x17U))
                                                     ? vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent))
                                                       ? 
                                                      (vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac 
                                                       >> 1U)
                                                       : 0U)
                                                      : vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac))))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
