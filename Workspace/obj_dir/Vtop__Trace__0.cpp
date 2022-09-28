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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA),8);
        bufp->chgCData(oldp+1,(vlSelf->FP32_Multiplier_Combinatorial__DOT__EB),8);
        bufp->chgSData(oldp+2,(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB),9);
        bufp->chgBit(oldp+3,(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig));
        bufp->chgQData(oldp+4,(vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original),48);
        bufp->chgCData(oldp+6,(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position),8);
        bufp->chgCData(oldp+7,((0xffU & ((IData)(0x2eU) 
                                         - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))),8);
        bufp->chgCData(oldp+8,((0xffU & ((IData)(0x80U) 
                                         + (0x1ffU 
                                            & (- (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)))))),8);
        bufp->chgCData(oldp+9,(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2),8);
        bufp->chgBit(oldp+10,((1U & (((IData)(0x80U) 
                                      + (- (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))) 
                                     >> 8U))));
        bufp->chgBit(oldp+11,((1U & ((((IData)(1U) 
                                       + (0xffU & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))) 
                                      - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)) 
                                     >> 8U))));
        bufp->chgQData(oldp+12,((0xffffffffffffULL 
                                 & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                    >> 1U))),48);
        bufp->chgQData(oldp+14,(vlSelf->FP32_Multiplier_Combinatorial__DOT__Man3),48);
        bufp->chgQData(oldp+16,(((0x2fU >= (0xffU & 
                                            ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                        << (0xffU & 
                                            ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))))
                                  : 0ULL)),48);
        bufp->chgQData(oldp+18,((((~ (1U & ((((IData)(1U) 
                                              + (0xffU 
                                                 & ((IData)(0x2eU) 
                                                    - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))) 
                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)) 
                                            >> 8U))) 
                                  & (0x30U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2)))
                                  ? 0ULL : ((0x2fU 
                                             >= (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2))
                                             ? (0xffffffffffffULL 
                                                & (((0x2fU 
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
                                                   >> (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2)))
                                             : 0ULL))),48);
        bufp->chgQData(oldp+20,(((0x2fU >= (0xffU & 
                                            ((IData)(0x80U) 
                                             + (0x1ffU 
                                                & (- (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                        >> (0xffU & 
                                            ((IData)(0x80U) 
                                             + (0x1ffU 
                                                & (- (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)))))))
                                  : 0ULL)),48);
        bufp->chgCData(oldp+22,((0xffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                          - (IData)(0x7fU)))),8);
        bufp->chgCData(oldp+23,((0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                             - (IData)(0x7fU))))),8);
        bufp->chgCData(oldp+24,((0xffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU)) 
                                          - ((IData)(0x2eU) 
                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))),8);
        bufp->chgQData(oldp+25,(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man),48);
        bufp->chgCData(oldp+27,(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp),8);
        bufp->chgBit(oldp+28,((1U & ((0x80U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))
                                      ? ((0x2fU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                          ? (1U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))) 
                                                   >> 8U))
                                          : ((0x2eU 
                                              == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                              ? (1U 
                                                 & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU)) 
                                                    >> 8U))
                                              : (1U 
                                                 & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                     > 
                                                     (0x1ffU 
                                                      & ((IData)(0x80U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x2eU) 
                                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))))) 
                                                    & ((((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU)) 
                                                        - 
                                                        (0xffU 
                                                         & ((IData)(0x2eU) 
                                                            - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))) 
                                                       >> 8U)))))
                                      : ((0x80U <= (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)) 
                                         & ((0x2fU 
                                             == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                             ? (1U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))) 
                                                   >> 8U))
                                             : (IData)(
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)) 
                                                        & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                            - (IData)(0x7fU)) 
                                                           >> 8U)))))))));
        bufp->chgBit(oldp+29,((1U & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                      - (IData)(0x7fU)) 
                                     >> 8U))));
        bufp->chgBit(oldp+30,((1U & (((IData)(1U) + 
                                      ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU))) 
                                     >> 8U))));
        bufp->chgBit(oldp+31,((1U & ((((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU)) 
                                      - (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))) 
                                     >> 8U))));
        bufp->chgCData(oldp+32,(vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN),8);
        bufp->chgCData(oldp+33,(vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP),8);
        bufp->chgBit(oldp+34,((0x80U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))));
        bufp->chgBit(oldp+35,((0x80U > (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))));
        bufp->chgBit(oldp+36,((1U & (~ ((0x80U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)) 
                                        ^ (0x80U > (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)))))));
        bufp->chgQData(oldp+37,((0x3fffffffffffULL 
                                 & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man)),48);
        bufp->chgQData(oldp+39,((0x7fffffULL & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                >> 0x17U))),48);
        bufp->chgQData(oldp+41,((0xffffffffffffULL 
                                 & (1ULL + (0x7fffffULL 
                                            & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                               >> 0x17U))))),48);
        bufp->chgQData(oldp+43,((0x7fffffffffffULL 
                                 & ((1ULL + (0x7fffffULL 
                                             & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                >> 0x17U))) 
                                    >> 1U))),48);
        bufp->chgBit(oldp+45,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                >> 0x17U))))));
        bufp->chgBit(oldp+46,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                >> 0x16U))))));
        bufp->chgBit(oldp+47,((0U != (0x3fffffU & (IData)(
                                                          (0x3fffffffffffULL 
                                                           & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))));
        bufp->chgSData(oldp+48,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp)))),9);
        bufp->chgIData(oldp+49,((0x7fffffU & ((((IData)(
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
                                               ? ((1U 
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
                                                             >> 0x17U)))))),23);
        bufp->chgCData(oldp+50,((0xffU & ((((IData)(
                                                    (0xffffffULL 
                                                     & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                        >> 0x16U))) 
                                            & (0U != 
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
                                           ? ((1U & (IData)(
                                                            (0x1ffffffULL 
                                                             & ((1ULL 
                                                                 + 
                                                                 (0x7fffffULL 
                                                                  & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                     >> 0x17U))) 
                                                                >> 0x17U))))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp))
                                               : (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp))
                                           : (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp)))),8);
        bufp->chgBit(oldp+51,(((0xfeU < ((0x100U & 
                                          (((0x80U 
                                             < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))
                                             ? ((0x2fU 
                                                 == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                                 ? 
                                                (1U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                      - (IData)(0x7fU))) 
                                                    >> 8U))
                                                 : 
                                                ((0x2eU 
                                                  == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                                  ? 
                                                 (1U 
                                                  & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                      - (IData)(0x7fU)) 
                                                     >> 8U))
                                                  : 
                                                 (1U 
                                                  & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                      > 
                                                      (0x1ffU 
                                                       & ((IData)(0x80U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x2eU) 
                                                              - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))))) 
                                                     & ((((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                          - (IData)(0x7fU)) 
                                                         - 
                                                         (0xffU 
                                                          & ((IData)(0x2eU) 
                                                             - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))) 
                                                        >> 8U)))))
                                             : ((0x80U 
                                                 <= (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)) 
                                                & ((0x2fU 
                                                    == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                                    ? 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU))) 
                                                       >> 8U))
                                                    : (IData)(
                                                              ((0x2eU 
                                                                == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)) 
                                                               & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                                   - (IData)(0x7fU)) 
                                                                  >> 8U)))))) 
                                           << 8U)) 
                                         | (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp)))
                                ? 1U : 0U)));
    }
    bufp->chgIData(oldp+52,(vlSelf->alpha),32);
    bufp->chgIData(oldp+53,(vlSelf->bravo),32);
    bufp->chgIData(oldp+54,(vlSelf->delta),32);
    bufp->chgCData(oldp+55,((0xffU & (vlSelf->alpha 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+56,((0xffU & (vlSelf->bravo 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+57,((0xffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig)
                                       ? (vlSelf->alpha 
                                          >> 0x17U)
                                       : (vlSelf->bravo 
                                          >> 0x17U)))),8);
    bufp->chgCData(oldp+58,((0xffU & ((vlSelf->alpha 
                                       >> 0x17U) - 
                                      (vlSelf->bravo 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+59,((0xffU & ((vlSelf->bravo 
                                       >> 0x17U) - 
                                      (vlSelf->alpha 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+60,((0xffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig)
                                        ? ((vlSelf->alpha 
                                            >> 0x17U) 
                                           - (vlSelf->bravo 
                                              >> 0x17U))
                                        : ((vlSelf->bravo 
                                            >> 0x17U) 
                                           - (vlSelf->alpha 
                                              >> 0x17U))) 
                                      - ((0U == (0xffU 
                                                 & (vlSelf->alpha 
                                                    >> 0x17U))) 
                                         ^ (0U == (0xffU 
                                                   & (vlSelf->bravo 
                                                      >> 0x17U))))))),8);
    bufp->chgBit(oldp+61,((0U == (0xffU & (vlSelf->alpha 
                                           >> 0x17U)))));
    bufp->chgBit(oldp+62,((0U == (0xffU & (vlSelf->bravo 
                                           >> 0x17U)))));
    bufp->chgBit(oldp+63,((0xffU == (0xffU & (vlSelf->alpha 
                                              >> 0x17U)))));
    bufp->chgBit(oldp+64,((0xffU == (0xffU & (vlSelf->bravo 
                                              >> 0x17U)))));
    bufp->chgBit(oldp+65,(((0xffU & (vlSelf->alpha 
                                     >> 0x17U)) < (0xffU 
                                                   & (vlSelf->bravo 
                                                      >> 0x17U)))));
    bufp->chgBit(oldp+66,((1U & (~ (((0xffU & (vlSelf->alpha 
                                               >> 0x17U)) 
                                     < (0xffU & (vlSelf->bravo 
                                                 >> 0x17U))) 
                                    | (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig))))));
    bufp->chgBit(oldp+67,((vlSelf->alpha >> 0x1fU)));
    bufp->chgBit(oldp+68,((vlSelf->bravo >> 0x1fU)));
    bufp->chgBit(oldp+69,(((vlSelf->alpha ^ vlSelf->bravo) 
                           >> 0x1fU)));
    bufp->chgIData(oldp+70,((0x7fffffU & vlSelf->alpha)),23);
    bufp->chgIData(oldp+71,((0x7fffffU & vlSelf->bravo)),23);
    bufp->chgIData(oldp+72,((((0U != (0xffU & (vlSelf->alpha 
                                               >> 0x17U))) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelf->alpha))),24);
    bufp->chgIData(oldp+73,((0x7fffffU & vlSelf->alpha)),24);
    bufp->chgIData(oldp+74,((((0U != (0xffU & (vlSelf->bravo 
                                               >> 0x17U))) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelf->bravo))),24);
    bufp->chgIData(oldp+75,((0x7fffffU & vlSelf->bravo)),24);
    bufp->chgIData(oldp+76,(((IData)(((0U == (0x7f800000U 
                                              & vlSelf->alpha)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->alpha))))
                              ? (0x7fffffU & vlSelf->alpha)
                              : (((0U != (0xffU & (vlSelf->alpha 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->alpha)))),24);
    bufp->chgIData(oldp+77,(((IData)(((0U == (0x7f800000U 
                                              & vlSelf->bravo)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->bravo))))
                              ? (0x7fffffU & vlSelf->bravo)
                              : (((0U != (0xffU & (vlSelf->bravo 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->bravo)))),24);
    bufp->chgBit(oldp+78,(((0x7fffffU & vlSelf->alpha) 
                           < (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+79,(((0x7fffffU & vlSelf->alpha) 
                           > (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+80,(((0x7fffffU & vlSelf->alpha) 
                           == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+81,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->chgBit(oldp+82,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+83,((((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA)) 
                            & (0U != (0x7fffffU & vlSelf->alpha))) 
                           | ((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EB)) 
                              & (0U != (0x7fffffU & vlSelf->bravo))))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
