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
    vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig 
        = ((0xffU & (vlSelf->alpha >> 0x17U)) > (0xffU 
                                                 & (vlSelf->bravo 
                                                    >> 0x17U)));
    vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
        = (0xffffffffffffULL & ((QData)((IData)(((IData)(
                                                         ((0U 
                                                           == 
                                                           (0x7f800000U 
                                                            & vlSelf->alpha)) 
                                                          & (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSelf->alpha))))
                                                  ? 
                                                 (0x7fffffU 
                                                  & vlSelf->alpha)
                                                  : 
                                                 (((0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelf->alpha 
                                                        >> 0x17U))) 
                                                   << 0x17U) 
                                                  | (0x7fffffU 
                                                     & vlSelf->alpha))))) 
                                * (QData)((IData)(((IData)(
                                                           ((0U 
                                                             == 
                                                             (0x7f800000U 
                                                              & vlSelf->bravo)) 
                                                            & (0U 
                                                               != 
                                                               (0x7fffffU 
                                                                & vlSelf->bravo))))
                                                    ? 
                                                   (0x7fffffU 
                                                    & vlSelf->bravo)
                                                    : 
                                                   (((0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->bravo 
                                                          >> 0x17U))) 
                                                     << 0x17U) 
                                                    | (0x7fffffU 
                                                       & vlSelf->bravo)))))));
    vlSelf->FP32_Multiplier_Combinatorial__DOT__EA 
        = (0xffU & ((vlSelf->alpha >> 0x17U) + (0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->alpha 
                                                    >> 0x17U)))));
    vlSelf->FP32_Multiplier_Combinatorial__DOT__EB 
        = (0xffU & ((vlSelf->bravo >> 0x17U) + (0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelf->bravo 
                                                    >> 0x17U)))));
    vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position 
        = ((1U & (IData)((vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                          >> 0x2fU))) ? 0x2fU : ((1U 
                                                  & (IData)(
                                                            (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                             >> 0x2eU)))
                                                  ? 0x2eU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                              >> 0x2dU)))
                                                   ? 0x2dU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                               >> 0x2cU)))
                                                    ? 0x2cU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                >> 0x2bU)))
                                                     ? 0x2bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                 >> 0x2aU)))
                                                      ? 0x2aU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                  >> 0x29U)))
                                                       ? 0x29U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                   >> 0x28U)))
                                                        ? 0x28U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                    >> 0x27U)))
                                                         ? 0x27U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                     >> 0x26U)))
                                                          ? 0x26U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                      >> 0x25U)))
                                                           ? 0x25U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                       >> 0x24U)))
                                                            ? 0x24U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                        >> 0x23U)))
                                                             ? 0x23U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                         >> 0x22U)))
                                                              ? 0x22U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                          >> 0x21U)))
                                                               ? 0x21U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                           >> 0x20U)))
                                                                ? 0x20U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                            >> 0x1fU)))
                                                                 ? 0x1fU
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                             >> 0x1eU)))
                                                                  ? 0x1eU
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                              >> 0x1dU)))
                                                                   ? 0x1dU
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                               >> 0x1cU)))
                                                                    ? 0x1cU
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x1bU)))
                                                                     ? 0x1bU
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x1aU)))
                                                                      ? 0x1aU
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x19U)))
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x18U)))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x17U)))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x16U)))
                                                                          ? 0x16U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x15U)))
                                                                           ? 0x15U
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x14U)))
                                                                            ? 0x14U
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x13U)))
                                                                             ? 0x13U
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x12U)))
                                                                              ? 0x12U
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x11U)))
                                                                               ? 0x11U
                                                                               : 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0x10U)))
                                                                                ? 0x10U
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0xfU)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0xeU)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0xdU)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0xcU)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0xbU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 0xaU)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 9U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 8U)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 7U)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 6U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 5U)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 4U)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 3U)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 2U)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                                                >> 1U)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original))
                                                                                 ? 0U
                                                                                 : 0xffU))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB 
        = (0x1ffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA) 
                     + (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EB)));
    vlSelf->FP32_Multiplier_Combinatorial__DOT__Man3 
        = (0xffffffffffffULL & ((0x100U & ((IData)(0x182U) 
                                           - ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                              - (IData)(0xfeU))))
                                 ? vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original
                                 : ((0x2fU >= (0x1ffU 
                                               & ((IData)(0x182U) 
                                                  - 
                                                  ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                   - (IData)(0xfeU)))))
                                     ? (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                        >> (0x1ffU 
                                            & ((IData)(0x182U) 
                                               - ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                  - (IData)(0xfeU)))))
                                     : 0ULL)));
    vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2 
        = (0x1ffU & ((IData)(0x182U) - (VL_EXTENDS_II(9,9, 
                                                      (0x1ffU 
                                                       & ((IData)(0x7fU) 
                                                          + 
                                                          ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                           - (IData)(0xfeU))))) 
                                        - VL_EXTENDS_II(9,8, 
                                                        (0xffU 
                                                         & ((IData)(0x2eU) 
                                                            - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))))));
    if ((0x100U & ((IData)(0x7eU) + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                     - (IData)(0xfeU))))) {
        if ((0x100U & ((IData)(0x7eU) + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                         - (IData)(0xfeU))))) {
            if ((0x2fU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))) {
                vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 5U;
                if ((1U == VL_EXTENDS_II(32,9, (0x1ffU 
                                                & ((IData)(0x182U) 
                                                   - 
                                                   ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                    - (IData)(0xfeU))))))) {
                    vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 6U;
                    vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                        = (0x1ffU & 1U);
                } else {
                    vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 7U;
                    vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                        = (0x1ffU & 0U);
                }
            } else {
                if ((0x2eU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))) {
                    vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 6U;
                    vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 8U;
                } else {
                    vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 7U;
                    vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 9U;
                }
                vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                    = (0x1ffU & 0U);
            }
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                = (0xffffffffffffULL & vlSelf->FP32_Multiplier_Combinatorial__DOT__Man3);
        } else if ((0x2fU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))) {
            vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 8U;
            vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 0xaU;
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                = (0x1ffU & ((IData)(1U) + VL_EXTENDS_II(9,9, 
                                                         (0x1ffU 
                                                          & ((IData)(0x7fU) 
                                                             + 
                                                             ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                              - (IData)(0xfeU)))))));
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                = (0xffffffffffffULL & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                        >> 1U));
        } else {
            if ((0x2eU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))) {
                vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 9U;
                vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 0xbU;
                vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                    = (0x1ffU & ((IData)(0x7fU) + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                   - (IData)(0xfeU))));
            } else {
                vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 0xaU;
                vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 0xcU;
                vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                    = (0x1ffU & 0U);
            }
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                = (0xffffffffffffULL & vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original);
        }
    } else if ((0x2fU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))) {
        vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 1U;
        vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 1U;
        vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
            = (0x1ffU & ((IData)(1U) + VL_EXTENDS_II(9,9, 
                                                     (0x1ffU 
                                                      & ((IData)(0x7fU) 
                                                         + 
                                                         ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                          - (IData)(0xfeU)))))));
        vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
            = (0xffffffffffffULL & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                    >> 1U));
    } else if ((0x2eU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))) {
        vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 2U;
        vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 2U;
        vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
            = (0x1ffU & ((IData)(0x7fU) + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                           - (IData)(0xfeU))));
        vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
            = (0xffffffffffffULL & vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original);
    } else {
        if ((0x182U > (0x1ffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                  - (IData)(0xfeU)) 
                                 - (0xffU & ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))))) {
            vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 3U;
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                = (0xffffffffffffULL & ((0x30U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2))
                                         ? 0ULL : (
                                                   (0x2fU 
                                                    >= (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2))
                                                    ? 
                                                   (((0x2fU 
                                                      >= 
                                                      (0xffU 
                                                       & ((IData)(0x2eU) 
                                                          - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))
                                                      ? 
                                                     (0xffffffffffffULL 
                                                      & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                         << 
                                                         (0xffU 
                                                          & ((IData)(0x2eU) 
                                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))))
                                                      : 0ULL) 
                                                    >> (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2))
                                                    : 0ULL)));
        } else {
            vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN = 4U;
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                = (0xffffffffffffULL & ((0x2fU >= (0xffU 
                                                   & ((IData)(0x2eU) 
                                                      - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))
                                         ? (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                            << (0xffU 
                                                & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))
                                         : 0ULL));
        }
        if ((0x182U < (0x1ffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                  - (IData)(0xfeU)) 
                                 - (0xffU & ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))))) {
            vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 3U;
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                = (0x1ffU & (((IData)(0x7fU) + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                - (IData)(0xfeU))) 
                             - VL_EXTENDS_II(9,8, (0xffU 
                                                   & ((IData)(0x2eU) 
                                                      - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))));
        } else if ((0x182U == (0x1ffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                          - (IData)(0xfeU)) 
                                         - (0xffU & 
                                            ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))))) {
            vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 4U;
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                = (0x1ffU & 1U);
        } else {
            vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP = 5U;
            vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp 
                = (0x1ffU & 0U);
        }
    }
    vlSelf->delta = ((0x7fffffffU & vlSelf->delta) 
                     | (0x80000000U & (vlSelf->alpha 
                                       ^ vlSelf->bravo)));
    vlSelf->delta = ((0x80000000U & vlSelf->delta) 
                     | ((((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA)) 
                          & (0U != (0x7fffffU & vlSelf->alpha))) 
                         | ((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EB)) 
                            & (0U != (0x7fffffU & vlSelf->bravo))))
                         ? 0x7fffffffU : (((0xfeU < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp))
                                            ? 1U : 0U)
                                           ? 0x7f800000U
                                           : ((0x7f800000U 
                                               & (((((IData)(
                                                             (0xffffffULL 
                                                              & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                 >> 0x16U))) 
                                                     & (0U 
                                                        != 
                                                        (0x3fffffU 
                                                         & (IData)(
                                                                   (0x3fffffffffffULL 
                                                                    & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))) 
                                                    | ((IData)(
                                                               (0x7fffffULL 
                                                                & (0xc00000ULL 
                                                                   == 
                                                                   (0xc00000ULL 
                                                                    & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man)))) 
                                                       & (0U 
                                                          == 
                                                          (0x3fffffU 
                                                           & (IData)(
                                                                     (0x3fffffffffffULL 
                                                                      & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (0x1ffffffULL 
                                                                & ((1ULL 
                                                                    + 
                                                                    (0x7fffffULL 
                                                                     & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                        >> 0x17U))) 
                                                                   >> 0x17U))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp))
                                                     : (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp))
                                                    : (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp)) 
                                                  << 0x17U)) 
                                              | (0x7fffffU 
                                                 & ((((IData)(
                                                              (0xffffffULL 
                                                               & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                  >> 0x16U))) 
                                                      & (0U 
                                                         != 
                                                         (0x3fffffU 
                                                          & (IData)(
                                                                    (0x3fffffffffffULL 
                                                                     & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))) 
                                                     | ((IData)(
                                                                (0x7fffffULL 
                                                                 & (0xc00000ULL 
                                                                    == 
                                                                    (0xc00000ULL 
                                                                     & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man)))) 
                                                        & (0U 
                                                           == 
                                                           (0x3fffffU 
                                                            & (IData)(
                                                                      (0x3fffffffffffULL 
                                                                       & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (0x1ffffffULL 
                                                                 & ((1ULL 
                                                                     + 
                                                                     (0x7fffffULL 
                                                                      & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                         >> 0x17U))) 
                                                                    >> 0x17U))))
                                                      ? (IData)(
                                                                (0x7fffffffffffULL 
                                                                 & ((1ULL 
                                                                     + 
                                                                     (0x7fffffULL 
                                                                      & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                         >> 0x17U))) 
                                                                    >> 1U)))
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(
                                                                (0x7fffffULL 
                                                                 & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                    >> 0x17U)))))
                                                     : (IData)(
                                                               (0x7fffffULL 
                                                                & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                   >> 0x17U)))))))));
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
