// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta),32);
        bufp->chgIData(oldp+1,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta),32);
        bufp->chgCData(oldp+2,((0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                         >> 0x17U))),8);
        bufp->chgCData(oldp+3,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E),8);
        bufp->chgCData(oldp+4,((0xffU & (- (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                            >> 0x17U)))),8);
        bufp->chgCData(oldp+5,((0xffU & ((0U < (0xffU 
                                                & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                   >> 0x17U)))
                                          ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                             >> 0x17U)
                                          : (- (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                >> 0x17U))))),8);
        bufp->chgCData(oldp+6,((0xffU & (((0U < (0xffU 
                                                 & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                    >> 0x17U)))
                                           ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                              >> 0x17U)
                                           : (- (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                 >> 0x17U))) 
                                         - (0U != (0xffU 
                                                   & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                      >> 0x17U)))))),8);
        bufp->chgBit(oldp+7,((0U == (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+8,((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+9,((0U < (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                             >> 0x17U)))));
        bufp->chgBit(oldp+10,((0U >= (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+11,((vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                               >> 0x1fU)));
        bufp->chgIData(oldp+12,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta)),23);
        bufp->chgIData(oldp+13,((((0U != (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))),24);
        bufp->chgIData(oldp+14,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta)),24);
        bufp->chgIData(oldp+15,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1),24);
        bufp->chgBit(oldp+16,((0U < (0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))));
        bufp->chgBit(oldp+17,((0U == (0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))));
        bufp->chgIData(oldp+18,((((0U < (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                  >> 0x17U))) 
                                  | ((0U >= (0xffU 
                                             & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                >> 0x17U))) 
                                     & (0U < (0x7fffffU 
                                              & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))))
                                  ? 0U : vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1)),24);
        bufp->chgIData(oldp+19,((((0U < (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                  >> 0x17U))) 
                                  | ((0U >= (0xffU 
                                             & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                >> 0x17U))) 
                                     & (0U < (0x7fffffU 
                                              & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))))
                                  ? vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1
                                  : 0U)),24);
        bufp->chgIData(oldp+20,(((0xffU == (0xffU & 
                                            (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                             >> 0x17U)))
                                  ? 0xffffffU : (((0U 
                                                   < 
                                                   (0xffU 
                                                    & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                       >> 0x17U))) 
                                                  | ((0U 
                                                      >= 
                                                      (0xffU 
                                                       & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                          >> 0x17U))) 
                                                     & (0U 
                                                        < 
                                                        (0x7fffffU 
                                                         & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))))
                                                  ? 0U
                                                  : vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1))),24);
        bufp->chgIData(oldp+21,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3),24);
        bufp->chgIData(oldp+22,((0xffffffU & ((vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                               >> 0x1fU)
                                               ? (~ vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3)
                                               : vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
        bufp->chgIData(oldp+23,((0xffffffU & ((vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                               >> 0x1fU) 
                                              + ((vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                  >> 0x1fU)
                                                  ? 
                                                 (~ vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3)
                                                  : vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3)))),24);
        bufp->chgIData(oldp+24,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa),25);
        bufp->chgCData(oldp+25,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position),8);
        bufp->chgBit(oldp+26,((1U & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x18U))));
        bufp->chgBit(oldp+27,((1U & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x17U))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                     >> 0x16U))));
        bufp->chgIData(oldp+29,((0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                               >> 1U))),25);
        bufp->chgIData(oldp+30,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                             < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                             ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                             : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position)))
                                  ? (0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                                   << 
                                                   (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                     < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                     ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                     : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))))
                                  : 0U)),25);
        bufp->chgIData(oldp+31,((0x1ffffffU & (((0x18U 
                                                 >= 
                                                 (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                   < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                   ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                   : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position)))
                                                 ? 
                                                (0x1ffffffU 
                                                 & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                                    << 
                                                    (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                      < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                      ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                      : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))))
                                                 : 0U) 
                                               >> 1U))),25);
        bufp->chgIData(oldp+32,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa)),23);
        bufp->chgIData(oldp+33,((0x7fffffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                              >> 1U))),23);
        bufp->chgIData(oldp+34,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                             < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                             ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                             : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position)))
                                  ? (0x7fffffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                                  << 
                                                  (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                    < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                    : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))))
                                  : 0U)),23);
        bufp->chgIData(oldp+35,((0x7fffffU & (((0x18U 
                                                >= 
                                                (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                  < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                  ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                  : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position)))
                                                ? (0x1ffffffU 
                                                   & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                                      << 
                                                      (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                        < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                        ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                        : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))))
                                                : 0U) 
                                              >> 1U))),23);
        bufp->chgCData(oldp+36,((((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                  < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                  ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                  : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))),8);
        bufp->chgIData(oldp+37,(((0x17U >= (0xffU & 
                                            ((((0U 
                                                < (0xffU 
                                                   & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                      >> 0x17U)))
                                                ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                   >> 0x17U)
                                                : (- 
                                                   (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                    >> 0x17U))) 
                                              - (0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                     >> 0x17U)))) 
                                             - (IData)(1U))))
                                  ? (0xffffffU & ((IData)(1U) 
                                                  << 
                                                  (0xffU 
                                                   & ((((0U 
                                                         < 
                                                         (0xffU 
                                                          & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                             >> 0x17U)))
                                                         ? 
                                                        (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                         >> 0x17U)
                                                         : 
                                                        (- 
                                                         (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                          >> 0x17U))) 
                                                       - 
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                            >> 0x17U)))) 
                                                      - (IData)(1U)))))
                                  : 0U)),24);
        bufp->chgBit(oldp+38,((((0U < (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                >> 0x17U))) 
                                | ((0U >= (0xffU & 
                                           (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                            >> 0x17U))) 
                                   & (0U < (0x7fffffU 
                                            & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta)))) 
                               & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                  >> 0x1fU))));
        bufp->chgCData(oldp+39,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent),8);
        bufp->chgIData(oldp+40,((0x7fffffU & ((((~ 
                                                 (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                  >> 0x1fU)) 
                                                & (0U 
                                                   != (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent))) 
                                               & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                                  >> 0x18U))
                                               ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                                  >> 1U)
                                               : ((0x800000U 
                                                   & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa)
                                                   ? vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1800000U 
                                                              & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa))) 
                                                    & (0U 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                       < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                       ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                       : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position)))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                                        << 
                                                        (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                          < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                          ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                          : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))))
                                                     : 0U)
                                                    : 
                                                   (((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800000U 
                                                               & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent)))
                                                     ? 
                                                    ((0x18U 
                                                      >= 
                                                      (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                        < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                        ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                        : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position)))
                                                      ? 
                                                     (0x1ffffffU 
                                                      & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                                         << 
                                                         (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                           < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                           ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                           : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))))
                                                      : 0U)
                                                     : 0U)))))),23);
        bufp->chgCData(oldp+41,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_MAN),8);
        bufp->chgCData(oldp+42,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_EXP),8);
        bufp->chgBit(oldp+43,((IData)(((0x7f800000U 
                                        == (0x7f800000U 
                                            & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))))));
        bufp->chgBit(oldp+44,(((~ (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                   >> 0x1fU)) & (0xffU 
                                                 == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent)))));
        bufp->chgCData(oldp+45,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN),8);
        bufp->chgCData(oldp+46,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP),8);
    }
    bufp->chgBit(oldp+47,(vlSelf->clk_i));
    bufp->chgBit(oldp+48,(vlSelf->delta_serial));
    bufp->chgIData(oldp+49,(vlSelf->delta_output),32);
    bufp->chgCData(oldp+50,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state),8);
    bufp->chgIData(oldp+51,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__clk_count),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
