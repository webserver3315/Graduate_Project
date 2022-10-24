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
    vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift 
        = (0xffU & (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                      ? ((vlSelf->alpha >> 0x17U) - 
                         (vlSelf->bravo >> 0x17U)) : 
                     ((vlSelf->bravo >> 0x17U) - (vlSelf->alpha 
                                                  >> 0x17U))) 
                    - ((0U == (0xffU & (vlSelf->alpha 
                                        >> 0x17U))) 
                       ^ (0U == (0xffU & (vlSelf->bravo 
                                          >> 0x17U))))));
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
    vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
        = (((0xffU == (0xffU & (vlSelf->alpha >> 0x17U))) 
            | (0xffU == (0xffU & (vlSelf->bravo >> 0x17U))))
            ? 0xffffffU : vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa);
    if ((0U == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))) {
        vlSelf->FP32_Adder_Combinatorial__DOT__S = 0U;
        vlSelf->FP32_Adder_Combinatorial__DOT__R = 0U;
    }
    vlSelf->FP32_Adder_Combinatorial__DOT__S = ((1U 
                                                 != (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift)) 
                                                & ((2U 
                                                    == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                       ? 0U
                                                       : 1U)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                         ? 0U
                                                         : 1U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (0x3fU 
                                                           & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                          ? 0U
                                                          : 1U)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                           ? 0U
                                                           : 1U)
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (0xffU 
                                                             & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                            ? 0U
                                                            : 1U)
                                                           : 
                                                          ((0xaU 
                                                            == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (0x1ffU 
                                                              & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                             ? 0U
                                                             : 1U)
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                             ? 
                                                            ((0U 
                                                              == 
                                                              (0x3ffU 
                                                               & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                              ? 0U
                                                              : 1U)
                                                             : 
                                                            ((0xcU 
                                                              == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                              ? 
                                                             ((0U 
                                                               == 
                                                               (0x7ffU 
                                                                & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                               ? 0U
                                                               : 1U)
                                                              : 
                                                             ((0xdU 
                                                               == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (0xfffU 
                                                                 & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                ? 0U
                                                                : 1U)
                                                               : 
                                                              ((0xeU 
                                                                == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                ? 
                                                               ((0U 
                                                                 == 
                                                                 (0x1fffU 
                                                                  & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                 ? 0U
                                                                 : 1U)
                                                                : 
                                                               ((0xfU 
                                                                 == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                 ? 
                                                                ((0U 
                                                                  == 
                                                                  (0x3fffU 
                                                                   & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                  ? 0U
                                                                  : 1U)
                                                                 : 
                                                                ((0x10U 
                                                                  == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                  ? 
                                                                 ((0U 
                                                                   == 
                                                                   (0x7fffU 
                                                                    & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                   ? 0U
                                                                   : 1U)
                                                                  : 
                                                                 ((0x11U 
                                                                   == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                   ? 
                                                                  ((0U 
                                                                    == 
                                                                    (0xffffU 
                                                                     & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                    ? 0U
                                                                    : 1U)
                                                                   : 
                                                                  ((0x12U 
                                                                    == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                    ? 
                                                                   ((0U 
                                                                     == 
                                                                     (0x1ffffU 
                                                                      & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                     ? 0U
                                                                     : 1U)
                                                                    : 
                                                                   ((0x13U 
                                                                     == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                     ? 
                                                                    ((0U 
                                                                      == 
                                                                      (0x3ffffU 
                                                                       & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                      ? 0U
                                                                      : 1U)
                                                                     : 
                                                                    ((0x14U 
                                                                      == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                      ? 
                                                                     ((0U 
                                                                       == 
                                                                       (0x7ffffU 
                                                                        & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                       ? 0U
                                                                       : 1U)
                                                                      : 
                                                                     ((0x15U 
                                                                       == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                       ? 
                                                                      ((0U 
                                                                        == 
                                                                        (0xfffffU 
                                                                         & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                        ? 0U
                                                                        : 1U)
                                                                       : 
                                                                      ((0x16U 
                                                                        == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                        ? 
                                                                       ((0U 
                                                                         == 
                                                                         (0x1fffffU 
                                                                          & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                         ? 0U
                                                                         : 1U)
                                                                        : 
                                                                       ((0x17U 
                                                                         == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                         ? 
                                                                        ((0U 
                                                                          == 
                                                                          (0x3fffffU 
                                                                           & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                          ? 0U
                                                                          : 1U)
                                                                         : 
                                                                        ((0x18U 
                                                                          == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift)) 
                                                                         & ((0U 
                                                                             == 
                                                                             (0x7fffffU 
                                                                              & vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2))
                                                                             ? 0U
                                                                             : 1U)))))))))))))))))))))))));
    vlSelf->FP32_Adder_Combinatorial__DOT__R = (1U 
                                                & ((1U 
                                                    == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                    ? vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                     ? 
                                                    (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                     >> 1U)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                      ? 
                                                     (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                      >> 2U)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                       ? 
                                                      (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                       >> 3U)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                        ? 
                                                       (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                        >> 4U)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                         ? 
                                                        (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                         >> 5U)
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                          ? 
                                                         (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                          >> 6U)
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                           ? 
                                                          (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                           >> 7U)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                            ? 
                                                           (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                            >> 8U)
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                             ? 
                                                            (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                             >> 9U)
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                              ? 
                                                             (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                              >> 0xaU)
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                               ? 
                                                              (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                               >> 0xbU)
                                                               : 
                                                              ((0xdU 
                                                                == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                ? 
                                                               (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                >> 0xcU)
                                                                : 
                                                               ((0xeU 
                                                                 == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                 ? 
                                                                (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                 >> 0xdU)
                                                                 : 
                                                                ((0xfU 
                                                                  == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                  ? 
                                                                 (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                  >> 0xeU)
                                                                  : 
                                                                 ((0x10U 
                                                                   == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                   ? 
                                                                  (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                   >> 0xfU)
                                                                   : 
                                                                  ((0x11U 
                                                                    == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                    ? 
                                                                   (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                    >> 0x10U)
                                                                    : 
                                                                   ((0x12U 
                                                                     == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                     ? 
                                                                    (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                     >> 0x11U)
                                                                     : 
                                                                    ((0x13U 
                                                                      == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                      ? 
                                                                     (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                      >> 0x12U)
                                                                      : 
                                                                     ((0x14U 
                                                                       == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                       ? 
                                                                      (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                       >> 0x13U)
                                                                       : 
                                                                      ((0x15U 
                                                                        == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                        ? 
                                                                       (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                        >> 0x14U)
                                                                        : 
                                                                       ((0x16U 
                                                                         == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                         ? 
                                                                        (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                         >> 0x15U)
                                                                         : 
                                                                        ((0x17U 
                                                                          == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
                                                                          ? 
                                                                         (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                          >> 0x16U)
                                                                          : 
                                                                         ((0x18U 
                                                                           == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift)) 
                                                                          & (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                                                                             >> 0x17U))))))))))))))))))))))))));
    vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3 
        = ((0x17U >= (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift))
            ? (0xffffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa2 
                            >> (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Right_Shift)))
            : 0U);
    vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
        = (0x1ffffffU & ((0xffffffU & (((vlSelf->alpha 
                                         ^ vlSelf->bravo) 
                                        >> 0x1fU) + 
                                       (((vlSelf->alpha 
                                          ^ vlSelf->bravo) 
                                         >> 0x1fU) ? 
                                        (~ vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3)
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
                                                                     : 0x17U)))))))))))))))))))))));
    if ((((vlSelf->alpha >> 0x1fU) == (vlSelf->bravo 
                                       >> 0x1fU)) & 
         (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
          >> 0x18U))) {
        vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_EXP = 1U;
        vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E)));
    } else if ((0x800000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)) {
        vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_EXP = 2U;
        vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent 
            = (0xffU & ((0U == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E))
                         ? 1U : (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E)));
    } else if (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E) 
                == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))) {
        vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_EXP = 3U;
        vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent 
            = (0xffU & 1U);
    } else if (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E) 
                > (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))) {
        vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_EXP = 4U;
        vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent 
            = (0xffU & ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E) 
                        - (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position)));
    } else {
        vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_EXP = 5U;
        vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent 
            = (0xffU & 0U);
    }
    if (((((vlSelf->alpha >> 0x1fU) == (vlSelf->bravo 
                                        >> 0x1fU)) 
          & (0U != (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent))) 
         & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
            >> 0x18U))) {
        vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_MAN = 1U;
        vlSelf->FP32_Adder_Combinatorial__DOT__final_R 
            = (1U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa);
        vlSelf->FP32_Adder_Combinatorial__DOT__final_mantissa 
            = (0x7fffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                            >> 1U));
        vlSelf->FP32_Adder_Combinatorial__DOT__final_S 
            = ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__R) 
               | (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__S));
    } else {
        if ((0x800000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)) {
            vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_MAN = 2U;
            vlSelf->FP32_Adder_Combinatorial__DOT__final_mantissa 
                = (0x7fffffU & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa);
        } else if (((IData)((0U == (0x1800000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa))) 
                    & (0U == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent)))) {
            vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_MAN = 3U;
            vlSelf->FP32_Adder_Combinatorial__DOT__final_mantissa 
                = (0x7fffffU & ((0x18U >= (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E) 
                                            < (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))
                                            ? (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E)
                                            : (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position)))
                                 ? (0x1ffffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                                  << 
                                                  (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E) 
                                                    < (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E)
                                                    : (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))))
                                 : 0U));
        } else if (((IData)((0U == (0x1800000U & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa))) 
                    & (0U != (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent)))) {
            vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_MAN = 4U;
            vlSelf->FP32_Adder_Combinatorial__DOT__final_mantissa 
                = (0x7fffffU & ((0x18U >= (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E) 
                                            < (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))
                                            ? (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E)
                                            : (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position)))
                                 ? (0x1ffffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                                  << 
                                                  (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E) 
                                                    < (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E)
                                                    : (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position))))
                                 : 0U));
        } else {
            vlSelf->FP32_Adder_Combinatorial__DOT__DEBUG_FINAL_MAN = 5U;
            vlSelf->FP32_Adder_Combinatorial__DOT__final_mantissa 
                = (0x7fffffU & 0U);
        }
        vlSelf->FP32_Adder_Combinatorial__DOT__final_R 
            = (1U & (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__R));
        vlSelf->FP32_Adder_Combinatorial__DOT__final_S 
            = vlSelf->FP32_Adder_Combinatorial__DOT__S;
    }
    vlSelf->delta = ((0x7fffffffU & vlSelf->delta) 
                     | ((((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig) 
                          | ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_Equal) 
                             & (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__M_LeftBig)))
                          ? (vlSelf->alpha >> 0x1fU)
                          : (vlSelf->bravo >> 0x1fU)) 
                        << 0x1fU));
    vlSelf->delta = ((0x80000000U & vlSelf->delta) 
                     | (((IData)(((0x7f800000U == (0x7f800000U 
                                                   & vlSelf->alpha)) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->alpha)))) 
                         | (IData)(((0x7f800000U == 
                                     (0x7f800000U & vlSelf->bravo)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->bravo)))))
                         ? 0x7fffffffU : ((((vlSelf->alpha 
                                             >> 0x1fU) 
                                            == (vlSelf->bravo 
                                                >> 0x1fU)) 
                                           & (0xffU 
                                              == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent)))
                                           ? 0x7f800000U
                                           : (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent) 
                                               << 0x17U) 
                                              | (0x7fffffU 
                                                 & ((((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_R) 
                                                      & (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_S)) 
                                                     | ((vlSelf->FP32_Adder_Combinatorial__DOT__final_mantissa 
                                                         & (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_R)) 
                                                        & (~ (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_S))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + vlSelf->FP32_Adder_Combinatorial__DOT__final_mantissa)
                                                     : vlSelf->FP32_Adder_Combinatorial__DOT__final_mantissa))))));
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
