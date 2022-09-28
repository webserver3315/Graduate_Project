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
        bufp->chgSData(oldp+3,((0x1ffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                          - (IData)(0xfeU)))),9);
        bufp->chgBit(oldp+4,(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig));
        bufp->chgQData(oldp+5,(vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original),48);
        bufp->chgCData(oldp+7,(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position),8);
        bufp->chgCData(oldp+8,((0xffU & ((IData)(0x2eU) 
                                         - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))),8);
        bufp->chgSData(oldp+9,((0x1ffU & ((IData)(0x7fU) 
                                          + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                             - (IData)(0xfeU))))),9);
        bufp->chgSData(oldp+10,((0x1ffU & ((IData)(0x182U) 
                                           - ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                              - (IData)(0xfeU))))),9);
        bufp->chgSData(oldp+11,(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2),9);
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
        bufp->chgQData(oldp+18,(((0x30U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2))
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
        bufp->chgQData(oldp+20,(((0x2fU >= (0x1ffU 
                                            & ((IData)(0x182U) 
                                               - ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                  - (IData)(0xfeU)))))
                                  ? (0xffffffffffffULL 
                                     & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                        >> (0x1ffU 
                                            & ((IData)(0x182U) 
                                               - ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                  - (IData)(0xfeU))))))
                                  : 0ULL)),48);
        bufp->chgSData(oldp+22,((0x1ffU & ((IData)(1U) 
                                           + VL_EXTENDS_II(9,9, 
                                                           (0x1ffU 
                                                            & ((IData)(0x7fU) 
                                                               + 
                                                               ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                                - (IData)(0xfeU)))))))),9);
        bufp->chgSData(oldp+23,((0x1ffU & (((IData)(0x7fU) 
                                            + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                               - (IData)(0xfeU))) 
                                           - VL_EXTENDS_II(9,8, 
                                                           (0xffU 
                                                            & ((IData)(0x2eU) 
                                                               - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))))),9);
        bufp->chgQData(oldp+24,(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man),48);
        bufp->chgSData(oldp+26,(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp),9);
        bufp->chgCData(oldp+27,(vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN),8);
        bufp->chgCData(oldp+28,(vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP),8);
        bufp->chgSData(oldp+29,((0x1ffU & ((IData)(0x7eU) 
                                           + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                              - (IData)(0xfeU))))),9);
        bufp->chgBit(oldp+30,((1U & (~ (1U & (((IData)(0x7eU) 
                                               + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                  - (IData)(0xfeU))) 
                                              >> 8U))))));
        bufp->chgBit(oldp+31,((1U & (((IData)(0x7eU) 
                                      + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                         - (IData)(0xfeU))) 
                                     >> 8U))));
        bufp->chgBit(oldp+32,((0U == (0x1ffU & ((IData)(0x7eU) 
                                                + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                   - (IData)(0xfeU)))))));
        bufp->chgQData(oldp+33,((0x3fffffffffffULL 
                                 & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man)),48);
        bufp->chgQData(oldp+35,((0x7fffffULL & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                >> 0x17U))),48);
        bufp->chgQData(oldp+37,((0xffffffffffffULL 
                                 & (1ULL + (0x7fffffULL 
                                            & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                               >> 0x17U))))),48);
        bufp->chgQData(oldp+39,((0x7fffffffffffULL 
                                 & ((1ULL + (0x7fffffULL 
                                             & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                >> 0x17U))) 
                                    >> 1U))),48);
        bufp->chgBit(oldp+41,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                >> 0x17U))))));
        bufp->chgBit(oldp+42,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                >> 0x16U))))));
        bufp->chgBit(oldp+43,((0U != (0x3fffffU & (IData)(
                                                          (0x3fffffffffffULL 
                                                           & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))));
        bufp->chgSData(oldp+44,((0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp)))),9);
        bufp->chgIData(oldp+45,((0x7fffffU & ((((IData)(
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
        bufp->chgCData(oldp+46,((0xffU & ((((IData)(
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
        bufp->chgBit(oldp+47,(((0xfeU < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp))
                                ? 1U : 0U)));
    }
    bufp->chgIData(oldp+48,(vlSelf->alpha),32);
    bufp->chgIData(oldp+49,(vlSelf->bravo),32);
    bufp->chgIData(oldp+50,(vlSelf->delta),32);
    bufp->chgCData(oldp+51,((0xffU & (vlSelf->alpha 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+52,((0xffU & (vlSelf->bravo 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+53,((0xffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig)
                                       ? (vlSelf->alpha 
                                          >> 0x17U)
                                       : (vlSelf->bravo 
                                          >> 0x17U)))),8);
    bufp->chgCData(oldp+54,((0xffU & ((vlSelf->alpha 
                                       >> 0x17U) - 
                                      (vlSelf->bravo 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+55,((0xffU & ((vlSelf->bravo 
                                       >> 0x17U) - 
                                      (vlSelf->alpha 
                                       >> 0x17U)))),8);
    bufp->chgCData(oldp+56,((0xffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig)
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
    bufp->chgBit(oldp+57,((0U == (0xffU & (vlSelf->alpha 
                                           >> 0x17U)))));
    bufp->chgBit(oldp+58,((0U == (0xffU & (vlSelf->bravo 
                                           >> 0x17U)))));
    bufp->chgBit(oldp+59,((0xffU == (0xffU & (vlSelf->alpha 
                                              >> 0x17U)))));
    bufp->chgBit(oldp+60,((0xffU == (0xffU & (vlSelf->bravo 
                                              >> 0x17U)))));
    bufp->chgBit(oldp+61,(((0xffU & (vlSelf->alpha 
                                     >> 0x17U)) < (0xffU 
                                                   & (vlSelf->bravo 
                                                      >> 0x17U)))));
    bufp->chgBit(oldp+62,((1U & (~ (((0xffU & (vlSelf->alpha 
                                               >> 0x17U)) 
                                     < (0xffU & (vlSelf->bravo 
                                                 >> 0x17U))) 
                                    | (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig))))));
    bufp->chgBit(oldp+63,((vlSelf->alpha >> 0x1fU)));
    bufp->chgBit(oldp+64,((vlSelf->bravo >> 0x1fU)));
    bufp->chgBit(oldp+65,(((vlSelf->alpha ^ vlSelf->bravo) 
                           >> 0x1fU)));
    bufp->chgIData(oldp+66,((0x7fffffU & vlSelf->alpha)),23);
    bufp->chgIData(oldp+67,((0x7fffffU & vlSelf->bravo)),23);
    bufp->chgIData(oldp+68,((((0U != (0xffU & (vlSelf->alpha 
                                               >> 0x17U))) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelf->alpha))),24);
    bufp->chgIData(oldp+69,((0x7fffffU & vlSelf->alpha)),24);
    bufp->chgIData(oldp+70,((((0U != (0xffU & (vlSelf->bravo 
                                               >> 0x17U))) 
                              << 0x17U) | (0x7fffffU 
                                           & vlSelf->bravo))),24);
    bufp->chgIData(oldp+71,((0x7fffffU & vlSelf->bravo)),24);
    bufp->chgIData(oldp+72,(((IData)(((0U == (0x7f800000U 
                                              & vlSelf->alpha)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->alpha))))
                              ? (0x7fffffU & vlSelf->alpha)
                              : (((0U != (0xffU & (vlSelf->alpha 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->alpha)))),24);
    bufp->chgIData(oldp+73,(((IData)(((0U == (0x7f800000U 
                                              & vlSelf->bravo)) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->bravo))))
                              ? (0x7fffffU & vlSelf->bravo)
                              : (((0U != (0xffU & (vlSelf->bravo 
                                                   >> 0x17U))) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->bravo)))),24);
    bufp->chgBit(oldp+74,(((0x7fffffU & vlSelf->alpha) 
                           < (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+75,(((0x7fffffU & vlSelf->alpha) 
                           > (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+76,(((0x7fffffU & vlSelf->alpha) 
                           == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+77,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->chgBit(oldp+78,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->chgBit(oldp+79,((((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA)) 
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
