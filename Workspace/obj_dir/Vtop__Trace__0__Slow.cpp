// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+49,"alpha", false,-1, 31,0);
    tracep->declBus(c+50,"bravo", false,-1, 31,0);
    tracep->declBus(c+51,"delta", false,-1, 31,0);
    tracep->pushNamePrefix("FP32_Multiplier_Combinatorial ");
    tracep->declBus(c+49,"alpha", false,-1, 31,0);
    tracep->declBus(c+50,"bravo", false,-1, 31,0);
    tracep->declBus(c+51,"delta", false,-1, 31,0);
    tracep->declBus(c+52,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+53,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+1,"EA", false,-1, 7,0);
    tracep->declBus(c+2,"EB", false,-1, 7,0);
    tracep->declBus(c+54,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+55,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+56,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+57,"Right_Shift", false,-1, 7,0);
    tracep->declBus(c+3,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+4,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+58,"EA0", false,-1);
    tracep->declBit(c+59,"EB0", false,-1);
    tracep->declBit(c+60,"EA1", false,-1);
    tracep->declBit(c+61,"EB1", false,-1);
    tracep->declBit(c+5,"E_LeftBig", false,-1);
    tracep->declBit(c+62,"E_RightBig", false,-1);
    tracep->declBit(c+63,"E_Equal", false,-1);
    tracep->declBit(c+64,"SA", false,-1);
    tracep->declBit(c+65,"SB", false,-1);
    tracep->declBit(c+66,"final_sign", false,-1);
    tracep->declBus(c+67,"MA", false,-1, 22,0);
    tracep->declBus(c+68,"MB", false,-1, 22,0);
    tracep->declBus(c+69,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+70,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+71,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+72,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+73,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+74,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+75,"M_RightBig", false,-1);
    tracep->declBit(c+76,"M_LeftBig", false,-1);
    tracep->declBit(c+77,"M_Equal", false,-1);
    tracep->declBit(c+78,"MA0", false,-1);
    tracep->declBit(c+79,"MB0", false,-1);
    tracep->declQuad(c+6,"M_48_Original", false,-1, 47,0);
    tracep->declBus(c+8,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+9,"Until_46th", false,-1, 7,0);
    tracep->declBus(c+4,"E", false,-1, 8,0);
    tracep->declBus(c+10,"Exp", false,-1, 8,0);
    tracep->declBus(c+11,"Until_126", false,-1, 8,0);
    tracep->declBus(c+12,"Until_126_2", false,-1, 8,0);
    tracep->declQuad(c+6,"Man1", false,-1, 47,0);
    tracep->declQuad(c+13,"Man2", false,-1, 47,0);
    tracep->declQuad(c+15,"Man3", false,-1, 47,0);
    tracep->declQuad(c+17,"Man4", false,-1, 47,0);
    tracep->declQuad(c+17,"Man5_tmp", false,-1, 47,0);
    tracep->declQuad(c+19,"Man5", false,-1, 47,0);
    tracep->declQuad(c+21,"Man3_tmp", false,-1, 47,0);
    tracep->declBus(c+10,"Exp1", false,-1, 8,0);
    tracep->declBus(c+23,"Exp2", false,-1, 8,0);
    tracep->declBus(c+81,"Exp3", false,-1, 8,0);
    tracep->declBus(c+82,"Exp4", false,-1, 8,0);
    tracep->declBus(c+24,"Exp5", false,-1, 8,0);
    tracep->declQuad(c+25,"final_Man", false,-1, 47,0);
    tracep->declBus(c+27,"final_Exp", false,-1, 8,0);
    tracep->declBus(c+28,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+29,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBus(c+30,"DEBUG_E_plus_126", false,-1, 8,0);
    tracep->declBit(c+31,"DEBUG_ELB", false,-1);
    tracep->declBit(c+32,"DEBUG_ERB", false,-1);
    tracep->declBit(c+33,"DEBUG_EEQ", false,-1);
    tracep->declQuad(c+34,"M_48_46th_Hidden", false,-1, 47,0);
    tracep->declQuad(c+36,"M_48_46th_Hidden_RSh23", false,-1, 47,0);
    tracep->declQuad(c+38,"M_48_46th_Hidden_RSh23_plus_1", false,-1, 47,0);
    tracep->declQuad(c+40,"M_48_46th_Hidden_RSh23_plus_1_RSh1", false,-1, 47,0);
    tracep->declBit(c+42,"G", false,-1);
    tracep->declBit(c+43,"R", false,-1);
    tracep->declBit(c+44,"S", false,-1);
    tracep->declBus(c+45,"final_Exp_plus1", false,-1, 8,0);
    tracep->declBus(c+46,"delta_mantissa", false,-1, 22,0);
    tracep->declBus(c+47,"delta_exp", false,-1, 7,0);
    tracep->declBit(c+80,"NAN", false,-1);
    tracep->declBit(c+48,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_48bit_1 ");
    tracep->declQuad(c+6,"tmp", false,-1, 47,0);
    tracep->declBus(c+8,"ret", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA),8);
    bufp->fullCData(oldp+2,(vlSelf->FP32_Multiplier_Combinatorial__DOT__EB),8);
    bufp->fullSData(oldp+3,(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB),9);
    bufp->fullSData(oldp+4,((0x1ffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                       - (IData)(0xfeU)))),9);
    bufp->fullBit(oldp+5,(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig));
    bufp->fullQData(oldp+6,(vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original),48);
    bufp->fullCData(oldp+8,(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position),8);
    bufp->fullCData(oldp+9,((0xffU & ((IData)(0x2eU) 
                                      - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))),8);
    bufp->fullSData(oldp+10,((0x1ffU & ((IData)(0x7fU) 
                                        + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                           - (IData)(0xfeU))))),9);
    bufp->fullSData(oldp+11,((0x1ffU & ((IData)(0x182U) 
                                        - ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                           - (IData)(0xfeU))))),9);
    bufp->fullSData(oldp+12,(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2),9);
    bufp->fullQData(oldp+13,((0xffffffffffffULL & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                                   >> 1U))),48);
    bufp->fullQData(oldp+15,(vlSelf->FP32_Multiplier_Combinatorial__DOT__Man3),48);
    bufp->fullQData(oldp+17,(((0x2fU >= (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                     << (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))))
                               : 0ULL)),48);
    bufp->fullQData(oldp+19,(((0x30U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2))
                               ? 0ULL : ((0x2fU >= (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2))
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
    bufp->fullQData(oldp+21,(((0x2fU >= (0x1ffU & ((IData)(0x182U) 
                                                   - 
                                                   ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                    - (IData)(0xfeU)))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                     >> (0x1ffU & ((IData)(0x182U) 
                                                   - 
                                                   ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                    - (IData)(0xfeU))))))
                               : 0ULL)),48);
    bufp->fullSData(oldp+23,((0x1ffU & ((IData)(1U) 
                                        + VL_EXTENDS_II(9,9, 
                                                        (0x1ffU 
                                                         & ((IData)(0x7fU) 
                                                            + 
                                                            ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                             - (IData)(0xfeU)))))))),9);
    bufp->fullSData(oldp+24,((0x1ffU & (((IData)(0x7fU) 
                                         + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                            - (IData)(0xfeU))) 
                                        - VL_EXTENDS_II(9,8, 
                                                        (0xffU 
                                                         & ((IData)(0x2eU) 
                                                            - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))))),9);
    bufp->fullQData(oldp+25,(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man),48);
    bufp->fullSData(oldp+27,(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp),9);
    bufp->fullCData(oldp+28,(vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+29,(vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullSData(oldp+30,((0x1ffU & ((IData)(0x7eU) 
                                        + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                           - (IData)(0xfeU))))),9);
    bufp->fullBit(oldp+31,((1U & (~ (1U & (((IData)(0x7eU) 
                                            + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                               - (IData)(0xfeU))) 
                                           >> 8U))))));
    bufp->fullBit(oldp+32,((1U & (((IData)(0x7eU) + 
                                   ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                    - (IData)(0xfeU))) 
                                  >> 8U))));
    bufp->fullBit(oldp+33,((0U == (0x1ffU & ((IData)(0x7eU) 
                                             + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                - (IData)(0xfeU)))))));
    bufp->fullQData(oldp+34,((0x3fffffffffffULL & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man)),48);
    bufp->fullQData(oldp+36,((0x7fffffULL & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                             >> 0x17U))),48);
    bufp->fullQData(oldp+38,((0xffffffffffffULL & (1ULL 
                                                   + 
                                                   (0x7fffffULL 
                                                    & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                       >> 0x17U))))),48);
    bufp->fullQData(oldp+40,((0x7fffffffffffULL & (
                                                   (1ULL 
                                                    + 
                                                    (0x7fffffULL 
                                                     & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                        >> 0x17U))) 
                                                   >> 1U))),48);
    bufp->fullBit(oldp+42,((1U & (IData)((0x7fffffULL 
                                          & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+43,((1U & (IData)((0xffffffULL 
                                          & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+44,((0U != (0x3fffffU & (IData)(
                                                       (0x3fffffffffffULL 
                                                        & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))));
    bufp->fullSData(oldp+45,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp)))),9);
    bufp->fullIData(oldp+46,((0x7fffffU & ((((IData)(
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
                                                : ((IData)(1U) 
                                                   + (IData)(
                                                             (0x7fffffULL 
                                                              & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                                 >> 0x17U)))))
                                            : (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                          >> 0x17U)))))),23);
    bufp->fullCData(oldp+47,((0xffU & ((((IData)((0xffffffULL 
                                                  & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                     >> 0x16U))) 
                                         & (0U != (0x3fffffU 
                                                   & (IData)(
                                                             (0x3fffffffffffULL 
                                                              & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))) 
                                        | ((IData)(
                                                   (0x7fffffULL 
                                                    & (0xc00000ULL 
                                                       == 
                                                       (0xc00000ULL 
                                                        & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man)))) 
                                           & (0U == 
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
    bufp->fullBit(oldp+48,(((0xfeU < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp))
                             ? 1U : 0U)));
    bufp->fullIData(oldp+49,(vlSelf->alpha),32);
    bufp->fullIData(oldp+50,(vlSelf->bravo),32);
    bufp->fullIData(oldp+51,(vlSelf->delta),32);
    bufp->fullCData(oldp+52,((0xffU & (vlSelf->alpha 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+53,((0xffU & (vlSelf->bravo 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+54,((0xffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig)
                                        ? (vlSelf->alpha 
                                           >> 0x17U)
                                        : (vlSelf->bravo 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+55,((0xffU & ((vlSelf->alpha 
                                        >> 0x17U) - 
                                       (vlSelf->bravo 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+56,((0xffU & ((vlSelf->bravo 
                                        >> 0x17U) - 
                                       (vlSelf->alpha 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+57,((0xffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig)
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
                                          ^ (0U == 
                                             (0xffU 
                                              & (vlSelf->bravo 
                                                 >> 0x17U))))))),8);
    bufp->fullBit(oldp+58,((0U == (0xffU & (vlSelf->alpha 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+59,((0U == (0xffU & (vlSelf->bravo 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+60,((0xffU == (0xffU & (vlSelf->alpha 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+61,((0xffU == (0xffU & (vlSelf->bravo 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+62,(((0xffU & (vlSelf->alpha 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->bravo 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+63,((1U & (~ (((0xffU & (vlSelf->alpha 
                                                >> 0x17U)) 
                                      < (0xffU & (vlSelf->bravo 
                                                  >> 0x17U))) 
                                     | (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig))))));
    bufp->fullBit(oldp+64,((vlSelf->alpha >> 0x1fU)));
    bufp->fullBit(oldp+65,((vlSelf->bravo >> 0x1fU)));
    bufp->fullBit(oldp+66,(((vlSelf->alpha ^ vlSelf->bravo) 
                            >> 0x1fU)));
    bufp->fullIData(oldp+67,((0x7fffffU & vlSelf->alpha)),23);
    bufp->fullIData(oldp+68,((0x7fffffU & vlSelf->bravo)),23);
    bufp->fullIData(oldp+69,((((0U != (0xffU & (vlSelf->alpha 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->alpha))),24);
    bufp->fullIData(oldp+70,((0x7fffffU & vlSelf->alpha)),24);
    bufp->fullIData(oldp+71,((((0U != (0xffU & (vlSelf->bravo 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->bravo))),24);
    bufp->fullIData(oldp+72,((0x7fffffU & vlSelf->bravo)),24);
    bufp->fullIData(oldp+73,(((IData)(((0U == (0x7f800000U 
                                               & vlSelf->alpha)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->alpha))))
                               ? (0x7fffffU & vlSelf->alpha)
                               : (((0U != (0xffU & 
                                           (vlSelf->alpha 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->alpha)))),24);
    bufp->fullIData(oldp+74,(((IData)(((0U == (0x7f800000U 
                                               & vlSelf->bravo)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->bravo))))
                               ? (0x7fffffU & vlSelf->bravo)
                               : (((0U != (0xffU & 
                                           (vlSelf->bravo 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->bravo)))),24);
    bufp->fullBit(oldp+75,(((0x7fffffU & vlSelf->alpha) 
                            < (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+76,(((0x7fffffU & vlSelf->alpha) 
                            > (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+77,(((0x7fffffU & vlSelf->alpha) 
                            == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+78,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->fullBit(oldp+79,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+80,((((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA)) 
                             & (0U != (0x7fffffU & vlSelf->alpha))) 
                            | ((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EB)) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->bravo))))));
    bufp->fullSData(oldp+81,(0U),9);
    bufp->fullSData(oldp+82,(1U),9);
}
