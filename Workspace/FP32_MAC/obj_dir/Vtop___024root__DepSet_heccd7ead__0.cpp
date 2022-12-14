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
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig 
        = ((0xffU & (vlSelf->alpha >> 0x17U)) > (0xffU 
                                                 & (vlSelf->bravo 
                                                    >> 0x17U)));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2 
        = ((IData)(((0U == (0x7f800000U & vlSelf->acc)) 
                    & (0U != (0x7fffffU & vlSelf->acc))))
            ? (0x7fffffU & vlSelf->acc) : (((0U != 
                                             (0xffU 
                                              & (vlSelf->acc 
                                                 >> 0x17U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & vlSelf->acc)));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
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
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB 
        = (0x1ffU & ((0xffU & ((vlSelf->alpha >> 0x17U) 
                               + (0U == (0xffU & (vlSelf->alpha 
                                                  >> 0x17U))))) 
                     + (0xffU & ((vlSelf->bravo >> 0x17U) 
                                 + (0U == (0xffU & 
                                           (vlSelf->bravo 
                                            >> 0x17U)))))));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position 
        = ((1U & (IData)((vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                          >> 0x2fU))) ? 0x2fU : ((1U 
                                                  & (IData)(
                                                            (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                             >> 0x2eU)))
                                                  ? 0x2eU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                              >> 0x2dU)))
                                                   ? 0x2dU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                               >> 0x2cU)))
                                                    ? 0x2cU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                >> 0x2bU)))
                                                     ? 0x2bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                 >> 0x2aU)))
                                                      ? 0x2aU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                  >> 0x29U)))
                                                       ? 0x29U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                   >> 0x28U)))
                                                        ? 0x28U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                    >> 0x27U)))
                                                         ? 0x27U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                     >> 0x26U)))
                                                          ? 0x26U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                      >> 0x25U)))
                                                           ? 0x25U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                       >> 0x24U)))
                                                            ? 0x24U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                        >> 0x23U)))
                                                             ? 0x23U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                         >> 0x22U)))
                                                              ? 0x22U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                          >> 0x21U)))
                                                               ? 0x21U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                           >> 0x20U)))
                                                                ? 0x20U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                            >> 0x1fU)))
                                                                 ? 0x1fU
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                             >> 0x1eU)))
                                                                  ? 0x1eU
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                              >> 0x1dU)))
                                                                   ? 0x1dU
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                               >> 0x1cU)))
                                                                    ? 0x1cU
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x1bU)))
                                                                     ? 0x1bU
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x1aU)))
                                                                      ? 0x1aU
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x19U)))
                                                                       ? 0x19U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x18U)))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x17U)))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x16U)))
                                                                          ? 0x16U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x15U)))
                                                                           ? 0x15U
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x14U)))
                                                                            ? 0x14U
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x13U)))
                                                                             ? 0x13U
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x12U)))
                                                                              ? 0x12U
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x11U)))
                                                                               ? 0x11U
                                                                               : 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0x10U)))
                                                                                ? 0x10U
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xfU)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xeU)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xdU)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xcU)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xbU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 0xaU)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 9U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 8U)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 7U)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 6U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 5U)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 4U)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 3U)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 2U)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                                                >> 1U)))
                                                                                 ? 1U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB 
        = (0x80U < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB 
        = (0x80U > (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_EEQ 
        = (1U & (~ ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB) 
                    ^ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB))));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
        = ((0x2fU >= (0xffU & ((IData)(0x2eU) - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
            ? (0xffffffffffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                    << (0xffU & ((IData)(0x2eU) 
                                                 - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))
            : 0ULL);
    if (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB) {
        if ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) {
            vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp 
                = (0xffU & ((IData)(1U) + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU))));
            vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                = (0xffffffffffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                        >> 1U));
        } else if ((0x2eU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) {
            vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp 
                = (0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                            - (IData)(0x7fU)));
            vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                = (0xffffffffffffULL & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original);
        } else {
            vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp 
                = (0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                             > (0x1ffU & ((IData)(0x80U) 
                                          + (0xffU 
                                             & ((IData)(0x2eU) 
                                                - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))))
                             ? (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                 - (IData)(0x7fU)) 
                                - ((IData)(0x2eU) - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))
                             : (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                 == (0x1ffU & ((IData)(0x80U) 
                                               + (0xffU 
                                                  & ((IData)(0x2eU) 
                                                     - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))))
                                 ? 1U : 0U)));
            vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                = (0xffffffffffffULL & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                         < (0x1ffU 
                                            & ((IData)(0x80U) 
                                               + (0xffU 
                                                  & ((IData)(0x2eU) 
                                                     - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))))
                                         ? (((0xffU 
                                              & ((IData)(0x2eU) 
                                                 - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                             >= (0xffU 
                                                 & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                    - (IData)(0x80U))))
                                             ? (((0xffU 
                                                  & ((IData)(0x2eU) 
                                                     - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) 
                                                 >= 
                                                 (0xffU 
                                                  & ((IData)(0x30U) 
                                                     + 
                                                     ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x80U)))))
                                                 ? 0ULL
                                                 : 
                                                ((0x2fU 
                                                  >= 
                                                  (0xffU 
                                                   & (((IData)(0x2eU) 
                                                       - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                      - 
                                                      ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                       - (IData)(0x80U)))))
                                                  ? 
                                                 (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                                  >> 
                                                  (0xffU 
                                                   & (((IData)(0x2eU) 
                                                       - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                      - 
                                                      ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                       - (IData)(0x80U)))))
                                                  : 0ULL))
                                             : ((0x2fU 
                                                 >= 
                                                 (0x1ffU 
                                                  & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))))
                                                 ? 
                                                (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man5_tmp 
                                                 >> 
                                                 (0x1ffU 
                                                  & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))))
                                                 : 0ULL))
                                         : ((0x2fU 
                                             >= (0xffU 
                                                 & ((IData)(0x2eU) 
                                                    - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
                                             ? (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                << 
                                                (0xffU 
                                                 & ((IData)(0x2eU) 
                                                    - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
                                             : 0ULL)));
        }
    } else if (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp 
            = (0xffU & ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                         ? ((1U == (0xffU & ((IData)(0x80U) 
                                             + (0x1ffU 
                                                & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                             ? 1U : 0U) : 0U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
            = (0xffffffffffffULL & ((0x100U & ((IData)(0x80U) 
                                               + (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))
                                     ? vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original
                                     : ((0x2fU >= (0xffU 
                                                   & ((IData)(0x80U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                         ? (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                            >> (0xffU 
                                                & ((IData)(0x80U) 
                                                   + 
                                                   (0x1ffU 
                                                    & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                         : 0ULL)));
    } else if ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp 
            = (0xffU & ((IData)(1U) + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU))));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
            = (0xffffffffffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                    >> 1U));
    } else {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp 
            = (0xffU & ((0x2eU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                         ? ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                            - (IData)(0x7fU)) : 0U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
            = (0xffffffffffffULL & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original);
    }
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__OVFL 
        = ((((IData)((0x7f800000U == (0x7fffffffU & vlSelf->alpha))) 
             | (IData)((0x7f800000U == (0x7fffffffU 
                                        & vlSelf->bravo)))) 
            | (0xfeU < ((0x100U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ELB)
                                     ? ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                         ? (1U & (((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                    - (IData)(0x7fU))) 
                                                  >> 8U))
                                         : ((0x2eU 
                                             == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                             ? (1U 
                                                & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                    - (IData)(0x7fU)) 
                                                   >> 8U))
                                             : (1U 
                                                & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                    > 
                                                    (0x1ffU 
                                                     & ((IData)(0x80U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x2eU) 
                                                            - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))) 
                                                   & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                        - (IData)(0x7fU)) 
                                                       - 
                                                       (0xffU 
                                                        & ((IData)(0x2eU) 
                                                           - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                                      >> 8U)))))
                                     : ((~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__FINAL_ERB)) 
                                        & ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                            ? (1U & 
                                               (((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))) 
                                                >> 8U))
                                            : (IData)(
                                                      ((0x2eU 
                                                        == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                       & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                           - (IData)(0x7fU)) 
                                                          >> 8U)))))) 
                                   << 8U)) | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp))))
            ? 1U : 0U);
    vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
        = ((0x7fffffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
           | (0x80000000U & (vlSelf->alpha ^ vlSelf->bravo)));
    vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
        = ((0x80000000U & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
           | (((IData)(((0x7f800000U == (0x7f800000U 
                                         & vlSelf->alpha)) 
                        & (0U != (0x7fffffU & vlSelf->alpha)))) 
               | (IData)(((0x7f800000U == (0x7f800000U 
                                           & vlSelf->bravo)) 
                          & (0U != (0x7fffffU & vlSelf->bravo)))))
               ? 0x7fffffffU : ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__OVFL)
                                 ? 0x7f800000U : ((0x7f800000U 
                                                   & (((((IData)(
                                                                 (0xffffffULL 
                                                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                     >> 0x16U))) 
                                                         & (0U 
                                                            != 
                                                            (0x3fffffU 
                                                             & (IData)(
                                                                       (0x3fffffffffffULL 
                                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))) 
                                                        | ((IData)(
                                                                   (0x7fffffULL 
                                                                    & (0xc00000ULL 
                                                                       == 
                                                                       (0xc00000ULL 
                                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)))) 
                                                           & (0U 
                                                              == 
                                                              (0x3fffffU 
                                                               & (IData)(
                                                                         (0x3fffffffffffULL 
                                                                          & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (0x1ffffffULL 
                                                                    & ((1ULL 
                                                                        + 
                                                                        (0x7fffffULL 
                                                                         & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                            >> 0x17U))) 
                                                                       >> 0x17U))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp))
                                                         : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp))
                                                        : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((((IData)(
                                                                  (0xffffffULL 
                                                                   & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                      >> 0x16U))) 
                                                          & (0U 
                                                             != 
                                                             (0x3fffffU 
                                                              & (IData)(
                                                                        (0x3fffffffffffULL 
                                                                         & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))) 
                                                         | ((IData)(
                                                                    (0x7fffffULL 
                                                                     & (0xc00000ULL 
                                                                        == 
                                                                        (0xc00000ULL 
                                                                         & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)))) 
                                                            & (0U 
                                                               == 
                                                               (0x3fffffU 
                                                                & (IData)(
                                                                          (0x3fffffffffffULL 
                                                                           & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (0x1ffffffULL 
                                                                     & ((1ULL 
                                                                         + 
                                                                         (0x7fffffULL 
                                                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                             >> 0x17U))) 
                                                                        >> 0x17U))))
                                                          ? (IData)(
                                                                    (0x7fffffffffffULL 
                                                                     & ((1ULL 
                                                                         + 
                                                                         (0x7fffffULL 
                                                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                             >> 0x17U))) 
                                                                        >> 1U)))
                                                          : 
                                                         ((IData)(1U) 
                                                          + (IData)(
                                                                    (0x7fffffULL 
                                                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                        >> 0x17U)))))
                                                         : (IData)(
                                                                   (0x7fffffULL 
                                                                    & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                       >> 0x17U)))))))));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1 
        = ((IData)(((0U == (0x7f800000U & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)) 
                    & (0U != (0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))))
            ? (0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)
            : (((0U != (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                 >> 0x17U))) << 0x17U) 
               | (0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig 
        = ((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
           > (0x7fffffU & vlSelf->acc));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig 
        = ((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                     >> 0x17U)) > (0xffU & (vlSelf->acc 
                                            >> 0x17U)));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E 
        = (0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                     ? (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                        >> 0x17U) : (vlSelf->acc >> 0x17U)));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift 
        = (0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                      ? ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                          >> 0x17U) - (vlSelf->acc 
                                       >> 0x17U)) : 
                     ((vlSelf->acc >> 0x17U) - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                >> 0x17U))) 
                    - ((0U == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                        >> 0x17U))) 
                       ^ (0U == (0xffU & (vlSelf->acc 
                                          >> 0x17U))))));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal 
        = (1U & (~ (((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                               >> 0x17U)) < (0xffU 
                                             & (vlSelf->acc 
                                                >> 0x17U))) 
                    | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig))));
    if (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
         | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
            & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa 
            = vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1;
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa 
            = vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2;
    } else {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa 
            = vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2;
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa 
            = vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1;
    }
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
        = (((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                >> 0x17U))) | (0xffU 
                                               == (0xffU 
                                                   & (vlSelf->acc 
                                                      >> 0x17U))))
            ? 0xffffffU : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa);
    if ((0U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2);
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S = 0U;
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R = 0U;
    }
    if ((1U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 1U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2);
    } else if ((2U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 2U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 1U));
    } else if ((3U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 3U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 2U));
    } else if ((4U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 4U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 3U));
    } else if ((5U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 5U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 4U));
    } else if ((6U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 6U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 5U));
    } else if ((7U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 7U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 6U));
    } else if ((8U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 8U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 7U));
    } else if ((9U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 9U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 8U));
    } else if ((0xaU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xaU));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 9U));
    } else if ((0xbU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xbU));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xaU));
    } else if ((0xcU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xcU));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xbU));
    } else if ((0xdU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xdU));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xcU));
    } else if ((0xeU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xeU));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xdU));
    } else if ((0xfU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xfU));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xeU));
    } else if ((0x10U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x10U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0xfU));
    } else if ((0x11U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x11U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x10U));
    } else if ((0x12U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x12U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x11U));
    } else if ((0x13U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x13U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x12U));
    } else if ((0x14U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x14U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x13U));
    } else if ((0x15U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x15U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x14U));
    } else if ((0x16U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x16U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                     >> 0x15U));
    } else {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G 
            = (1U & ((0x17U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift)) 
                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                        >> 0x17U)));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R 
            = (1U & ((0x17U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                      ? (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                         >> 0x16U) : ((0x18U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift)) 
                                      & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                                         >> 0x17U))));
    }
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S 
        = ((1U != (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift)) 
           & ((2U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
               ? ((1U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2)
                   ? 1U : 0U) : ((3U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                  ? ((0U == (3U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                      ? 0U : 1U) : 
                                 ((4U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                   ? ((0U == (7U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                       ? 0U : 1U) : 
                                  ((5U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                    ? ((0U == (0xfU 
                                               & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                        ? 0U : 1U) : 
                                   ((6U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                     ? ((0U == (0x1fU 
                                                & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                         ? 0U : 1U)
                                     : ((7U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                         ? ((0U == 
                                             (0x3fU 
                                              & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                             ? 0U : 1U)
                                         : ((8U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                             ? ((0U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                 ? 0U
                                                 : 1U)
                                             : ((9U 
                                                 == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0xffU 
                                                   & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x1ffU 
                                                    & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                   ? 0U
                                                   : 1U)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x1fffU 
                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                       ? 0U
                                                       : 1U)
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x3fffU 
                                                         & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (0x7fffU 
                                                          & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                         ? 0U
                                                         : 1U)
                                                        : 
                                                       ((0x11U 
                                                         == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (0xffffU 
                                                           & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                          ? 0U
                                                          : 1U)
                                                         : 
                                                        ((0x12U 
                                                          == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (0x1ffffU 
                                                            & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                           ? 0U
                                                           : 1U)
                                                          : 
                                                         ((0x13U 
                                                           == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (0x3ffffU 
                                                             & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                            ? 0U
                                                            : 1U)
                                                           : 
                                                          ((0x14U 
                                                            == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (0x7ffffU 
                                                              & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                             ? 0U
                                                             : 1U)
                                                            : 
                                                           ((0x15U 
                                                             == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                             ? 
                                                            ((0U 
                                                              == 
                                                              (0xfffffU 
                                                               & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                              ? 0U
                                                              : 1U)
                                                             : 
                                                            ((0x16U 
                                                              == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                              ? 
                                                             ((0U 
                                                               == 
                                                               (0x1fffffU 
                                                                & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                               ? 0U
                                                               : 1U)
                                                              : 
                                                             ((0x17U 
                                                               == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (0x3fffffU 
                                                                 & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                                ? 0U
                                                                : 1U)
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift)) 
                                                               & ((0U 
                                                                   == 
                                                                   (0x7fffffU 
                                                                    & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2))
                                                                   ? 0U
                                                                   : 1U)))))))))))))))))))))))));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3 
        = ((0x17U >= (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift))
            ? (0xffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa2 
                            >> (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Right_Shift)))
            : 0U);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
        = (0x1ffffffU & ((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                         ^ vlSelf->acc) 
                                        >> 0x1fU) + 
                                       (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                          ^ vlSelf->acc) 
                                         >> 0x1fU) ? 
                                        (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                         : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3))) 
                         + vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position 
        = ((0x800000U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
            ? 0U : ((0x400000U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                     ? 1U : ((0x200000U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                              ? 2U : ((0x100000U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                       ? 3U : ((0x80000U 
                                                & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                ? 4U
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                    ? 5U
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                     ? 6U
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                      ? 7U
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                       ? 8U
                                                       : 
                                                      ((0x4000U 
                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                        ? 9U
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                         ? 0xaU
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                          ? 0xbU
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                           ? 0xcU
                                                           : 
                                                          ((0x400U 
                                                            & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                            ? 0xdU
                                                            : 
                                                           ((0x200U 
                                                             & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                             ? 0xeU
                                                             : 
                                                            ((0x100U 
                                                              & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                              ? 0xfU
                                                              : 
                                                             ((0x80U 
                                                               & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                               ? 0x10U
                                                               : 
                                                              ((0x40U 
                                                                & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                                ? 0x11U
                                                                : 
                                                               ((0x20U 
                                                                 & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x10U 
                                                                  & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((8U 
                                                                   & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((4U 
                                                                    & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((2U 
                                                                     & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                                     ? 0x16U
                                                                     : 0x17U)))))))))))))))))))))));
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
        = (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
             ^ vlSelf->acc) >> 0x1fU) ? (0xffffffU 
                                         & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
            : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa);
    vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent 
        = (0xffU & ((((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                       >> 0x1fU) == (vlSelf->acc >> 0x1fU)) 
                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                        >> 0x18U)) ? ((IData)(1U) + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E))
                     : ((0x800000U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output)
                         ? ((0U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E))
                             ? 1U : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E))
                         : (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                             == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                             ? 1U : (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                      > (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                      ? ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                         - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                      : 0U)))));
    if (((((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
            >> 0x1fU) == (vlSelf->acc >> 0x1fU)) & 
          (0U != (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent))) 
         & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
            >> 0x18U))) {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R 
            = (1U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output);
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa 
            = (0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                            >> 1U));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S 
            = ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R) 
               | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S));
    } else {
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R 
            = (1U & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa 
            = (0x7fffffU & ((0x800000U & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output)
                             ? vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output
                             : (((IData)((0U == (0x1800000U 
                                                 & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output))) 
                                 & (0U == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent)))
                                 ? ((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                     ? (0x1ffffffU 
                                        & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                           << (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                     : 0U) : (((IData)(
                                                       (0U 
                                                        == 
                                                        (0x1800000U 
                                                         & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output))) 
                                               & (0U 
                                                  != (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent)))
                                               ? ((0x18U 
                                                   >= 
                                                   (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                     < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                     ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                     : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position)))
                                                   ? 
                                                  (0x1ffffffU 
                                                   & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__adder_output 
                                                      << 
                                                      (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                                                        < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                                                        ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                                                        : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))))
                                                   : 0U)
                                               : 0U))));
        vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S 
            = vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S;
    }
    vlSelf->delta = ((0x7fffffffU & vlSelf->delta) 
                     | ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
                          | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
                             & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))
                          ? (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                             >> 0x1fU) : (vlSelf->acc 
                                          >> 0x1fU)) 
                        << 0x1fU));
    vlSelf->delta = ((0x80000000U & vlSelf->delta) 
                     | (((IData)(((0x7f800000U == (0x7f800000U 
                                                   & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)))) 
                         | (IData)(((0x7f800000U == 
                                     (0x7f800000U & vlSelf->acc)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->acc)))))
                         ? 0x7fffffffU : ((((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             >> 0x1fU) 
                                            == (vlSelf->acc 
                                                >> 0x1fU)) 
                                           & (0xffU 
                                              == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent)))
                                           ? 0x7f800000U
                                           : (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent) 
                                               << 0x17U) 
                                              | (0x7fffffU 
                                                 & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R) 
                                                      & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S)) 
                                                     | (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G) 
                                                         & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_R)) 
                                                        & (~ (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_S))))
                                                     ? 
                                                    (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                       ^ vlSelf->acc) 
                                                      >> 0x1fU)
                                                      ? 
                                                     (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa 
                                                      - (IData)(1U))
                                                      : 
                                                     ((IData)(1U) 
                                                      + vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa))
                                                     : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_mantissa))))));
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
