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
    tracep->declBus(c+53,"alpha", false,-1, 31,0);
    tracep->declBus(c+54,"bravo", false,-1, 31,0);
    tracep->declBus(c+55,"delta", false,-1, 31,0);
    tracep->pushNamePrefix("FP32_Multiplier_Combinatorial ");
    tracep->declBus(c+53,"alpha", false,-1, 31,0);
    tracep->declBus(c+54,"bravo", false,-1, 31,0);
    tracep->declBus(c+55,"delta", false,-1, 31,0);
    tracep->declBus(c+56,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+57,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+1,"EA", false,-1, 7,0);
    tracep->declBus(c+2,"EB", false,-1, 7,0);
    tracep->declBus(c+58,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+59,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+60,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+61,"Right_Shift", false,-1, 7,0);
    tracep->declBus(c+3,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+85,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+62,"EA0", false,-1);
    tracep->declBit(c+63,"EB0", false,-1);
    tracep->declBit(c+64,"EA1", false,-1);
    tracep->declBit(c+65,"EB1", false,-1);
    tracep->declBit(c+4,"E_LeftBig", false,-1);
    tracep->declBit(c+66,"E_RightBig", false,-1);
    tracep->declBit(c+67,"E_Equal", false,-1);
    tracep->declBit(c+68,"SA", false,-1);
    tracep->declBit(c+69,"SB", false,-1);
    tracep->declBit(c+70,"final_sign", false,-1);
    tracep->declBus(c+71,"MA", false,-1, 22,0);
    tracep->declBus(c+72,"MB", false,-1, 22,0);
    tracep->declBus(c+73,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+74,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+75,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+76,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+77,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+78,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+79,"M_RightBig", false,-1);
    tracep->declBit(c+80,"M_LeftBig", false,-1);
    tracep->declBit(c+81,"M_Equal", false,-1);
    tracep->declBit(c+82,"MA0", false,-1);
    tracep->declBit(c+83,"MB0", false,-1);
    tracep->declQuad(c+5,"M_48_Original", false,-1, 47,0);
    tracep->declBus(c+7,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+8,"Until_46th", false,-1, 7,0);
    tracep->declBus(c+9,"Until_126", false,-1, 7,0);
    tracep->declBus(c+10,"Until_126_2", false,-1, 7,0);
    tracep->declBus(c+86,"E", false,-1, 8,0);
    tracep->declBus(c+87,"Exp", false,-1, 8,0);
    tracep->declBit(c+11,"Until_126_Carry", false,-1);
    tracep->declBit(c+12,"Until_126_2_Carry", false,-1);
    tracep->declQuad(c+5,"Man1", false,-1, 47,0);
    tracep->declQuad(c+13,"Man2", false,-1, 47,0);
    tracep->declQuad(c+15,"Man3", false,-1, 47,0);
    tracep->declQuad(c+17,"Man4", false,-1, 47,0);
    tracep->declQuad(c+17,"Man5_tmp", false,-1, 47,0);
    tracep->declQuad(c+19,"Man5", false,-1, 47,0);
    tracep->declQuad(c+21,"Man3_tmp", false,-1, 47,0);
    tracep->declBus(c+23,"Exp1", false,-1, 7,0);
    tracep->declBus(c+24,"Exp2", false,-1, 7,0);
    tracep->declBus(c+88,"Exp3", false,-1, 7,0);
    tracep->declBus(c+89,"Exp4", false,-1, 7,0);
    tracep->declBus(c+25,"Exp5", false,-1, 7,0);
    tracep->declQuad(c+26,"final_Man", false,-1, 47,0);
    tracep->declBus(c+28,"final_Exp", false,-1, 7,0);
    tracep->declBit(c+29,"final_Exp_Carry", false,-1);
    tracep->declBit(c+30,"Exp1_C", false,-1);
    tracep->declBit(c+31,"Exp2_C", false,-1);
    tracep->declBit(c+90,"Exp3_C", false,-1);
    tracep->declBit(c+90,"Exp4_C", false,-1);
    tracep->declBit(c+32,"Exp5_C", false,-1);
    tracep->declBus(c+33,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+34,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBit(c+35,"DEBUG_ELB", false,-1);
    tracep->declBit(c+36,"DEBUG_ERB", false,-1);
    tracep->declBit(c+37,"DEBUG_EEQ", false,-1);
    tracep->declQuad(c+38,"M_48_46th_Hidden", false,-1, 47,0);
    tracep->declQuad(c+40,"M_48_46th_Hidden_RSh23", false,-1, 47,0);
    tracep->declQuad(c+42,"M_48_46th_Hidden_RSh23_plus_1", false,-1, 47,0);
    tracep->declQuad(c+44,"M_48_46th_Hidden_RSh23_plus_1_RSh1", false,-1, 47,0);
    tracep->declBit(c+46,"G", false,-1);
    tracep->declBit(c+47,"R", false,-1);
    tracep->declBit(c+48,"S", false,-1);
    tracep->declBus(c+49,"final_Exp_plus1", false,-1, 8,0);
    tracep->declBus(c+50,"delta_mantissa", false,-1, 22,0);
    tracep->declBus(c+51,"delta_exp", false,-1, 7,0);
    tracep->declBit(c+84,"NAN", false,-1);
    tracep->declBit(c+52,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_48bit_1 ");
    tracep->declQuad(c+5,"tmp", false,-1, 47,0);
    tracep->declBus(c+7,"ret", false,-1, 7,0);
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
    bufp->fullBit(oldp+4,(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig));
    bufp->fullQData(oldp+5,(vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original),48);
    bufp->fullCData(oldp+7,(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position),8);
    bufp->fullCData(oldp+8,((0xffU & ((IData)(0x2eU) 
                                      - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))),8);
    bufp->fullCData(oldp+9,((0xffU & ((IData)(0x80U) 
                                      + (0x1ffU & (- (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)))))),8);
    bufp->fullCData(oldp+10,(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2),8);
    bufp->fullBit(oldp+11,((1U & (((IData)(0x80U) + 
                                   (- (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))) 
                                  >> 8U))));
    bufp->fullBit(oldp+12,((1U & ((((IData)(1U) + (0xffU 
                                                   & ((IData)(0x2eU) 
                                                      - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))) 
                                   - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)) 
                                  >> 8U))));
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
    bufp->fullQData(oldp+19,((((~ (1U & ((((IData)(1U) 
                                           + (0xffU 
                                              & ((IData)(0x2eU) 
                                                 - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))) 
                                          - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)) 
                                         >> 8U))) & 
                               (0x30U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__Until_126_2)))
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
    bufp->fullQData(oldp+21,(((0x2fU >= (0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x1ffU 
                                                   & (- (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_Multiplier_Combinatorial__DOT__M_48_Original 
                                     >> (0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x1ffU 
                                                   & (- (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)))))))
                               : 0ULL)),48);
    bufp->fullCData(oldp+23,((0xffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU)))),8);
    bufp->fullCData(oldp+24,((0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                          - (IData)(0x7fU))))),8);
    bufp->fullCData(oldp+25,((0xffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                        - (IData)(0x7fU)) 
                                       - ((IData)(0x2eU) 
                                          - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))))),8);
    bufp->fullQData(oldp+26,(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man),48);
    bufp->fullCData(oldp+28,(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp),8);
    bufp->fullBit(oldp+29,((1U & ((0x80U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))
                                   ? ((0x2fU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                       ? (1U & (((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))) 
                                                >> 8U))
                                       : ((0x2eU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                           ? (1U & 
                                              (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                - (IData)(0x7fU)) 
                                               >> 8U))
                                           : (1U & 
                                              (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                > (0x1ffU 
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
                                      & ((0x2fU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position))
                                          ? (1U & (
                                                   ((IData)(1U) 
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
    bufp->fullBit(oldp+30,((1U & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                   - (IData)(0x7fU)) 
                                  >> 8U))));
    bufp->fullBit(oldp+31,((1U & (((IData)(1U) + ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))) 
                                  >> 8U))));
    bufp->fullBit(oldp+32,((1U & ((((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB) 
                                    - (IData)(0x7fU)) 
                                   - (0xffU & ((IData)(0x2eU) 
                                               - (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__leading_1_position)))) 
                                  >> 8U))));
    bufp->fullCData(oldp+33,(vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+34,(vlSelf->FP32_Multiplier_Combinatorial__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullBit(oldp+35,((0x80U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))));
    bufp->fullBit(oldp+36,((0x80U > (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))));
    bufp->fullBit(oldp+37,((1U & (~ ((0x80U < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)) 
                                     ^ (0x80U > (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB)))))));
    bufp->fullQData(oldp+38,((0x3fffffffffffULL & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man)),48);
    bufp->fullQData(oldp+40,((0x7fffffULL & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                             >> 0x17U))),48);
    bufp->fullQData(oldp+42,((0xffffffffffffULL & (1ULL 
                                                   + 
                                                   (0x7fffffULL 
                                                    & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                       >> 0x17U))))),48);
    bufp->fullQData(oldp+44,((0x7fffffffffffULL & (
                                                   (1ULL 
                                                    + 
                                                    (0x7fffffULL 
                                                     & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                                        >> 0x17U))) 
                                                   >> 1U))),48);
    bufp->fullBit(oldp+46,((1U & (IData)((0x7fffffULL 
                                          & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+47,((1U & (IData)((0xffffffULL 
                                          & (vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+48,((0U != (0x3fffffU & (IData)(
                                                       (0x3fffffffffffULL 
                                                        & vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Man))))));
    bufp->fullSData(oldp+49,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__final_Exp)))),9);
    bufp->fullIData(oldp+50,((0x7fffffU & ((((IData)(
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
    bufp->fullCData(oldp+51,((0xffU & ((((IData)((0xffffffULL 
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
    bufp->fullBit(oldp+52,(((0xfeU < ((0x100U & (((0x80U 
                                                   < (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB))
                                                   ? 
                                                  ((0x2fU 
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
                                                   : 
                                                  ((0x80U 
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
    bufp->fullIData(oldp+53,(vlSelf->alpha),32);
    bufp->fullIData(oldp+54,(vlSelf->bravo),32);
    bufp->fullIData(oldp+55,(vlSelf->delta),32);
    bufp->fullCData(oldp+56,((0xffU & (vlSelf->alpha 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+57,((0xffU & (vlSelf->bravo 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+58,((0xffU & ((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig)
                                        ? (vlSelf->alpha 
                                           >> 0x17U)
                                        : (vlSelf->bravo 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+59,((0xffU & ((vlSelf->alpha 
                                        >> 0x17U) - 
                                       (vlSelf->bravo 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+60,((0xffU & ((vlSelf->bravo 
                                        >> 0x17U) - 
                                       (vlSelf->alpha 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+61,((0xffU & (((IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig)
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
    bufp->fullBit(oldp+62,((0U == (0xffU & (vlSelf->alpha 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+63,((0U == (0xffU & (vlSelf->bravo 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+64,((0xffU == (0xffU & (vlSelf->alpha 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+65,((0xffU == (0xffU & (vlSelf->bravo 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+66,(((0xffU & (vlSelf->alpha 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->bravo 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+67,((1U & (~ (((0xffU & (vlSelf->alpha 
                                                >> 0x17U)) 
                                      < (0xffU & (vlSelf->bravo 
                                                  >> 0x17U))) 
                                     | (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__E_LeftBig))))));
    bufp->fullBit(oldp+68,((vlSelf->alpha >> 0x1fU)));
    bufp->fullBit(oldp+69,((vlSelf->bravo >> 0x1fU)));
    bufp->fullBit(oldp+70,(((vlSelf->alpha ^ vlSelf->bravo) 
                            >> 0x1fU)));
    bufp->fullIData(oldp+71,((0x7fffffU & vlSelf->alpha)),23);
    bufp->fullIData(oldp+72,((0x7fffffU & vlSelf->bravo)),23);
    bufp->fullIData(oldp+73,((((0U != (0xffU & (vlSelf->alpha 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->alpha))),24);
    bufp->fullIData(oldp+74,((0x7fffffU & vlSelf->alpha)),24);
    bufp->fullIData(oldp+75,((((0U != (0xffU & (vlSelf->bravo 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->bravo))),24);
    bufp->fullIData(oldp+76,((0x7fffffU & vlSelf->bravo)),24);
    bufp->fullIData(oldp+77,(((IData)(((0U == (0x7f800000U 
                                               & vlSelf->alpha)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->alpha))))
                               ? (0x7fffffU & vlSelf->alpha)
                               : (((0U != (0xffU & 
                                           (vlSelf->alpha 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->alpha)))),24);
    bufp->fullIData(oldp+78,(((IData)(((0U == (0x7f800000U 
                                               & vlSelf->bravo)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->bravo))))
                               ? (0x7fffffU & vlSelf->bravo)
                               : (((0U != (0xffU & 
                                           (vlSelf->bravo 
                                            >> 0x17U))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelf->bravo)))),24);
    bufp->fullBit(oldp+79,(((0x7fffffU & vlSelf->alpha) 
                            < (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+80,(((0x7fffffU & vlSelf->alpha) 
                            > (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+81,(((0x7fffffU & vlSelf->alpha) 
                            == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+82,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->fullBit(oldp+83,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+84,((((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA)) 
                             & (0U != (0x7fffffU & vlSelf->alpha))) 
                            | ((0xffU == (IData)(vlSelf->FP32_Multiplier_Combinatorial__DOT__EB)) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->bravo))))));
    bufp->fullSData(oldp+85,(vlSelf->FP32_Multiplier_Combinatorial__DOT__EA_plus_EB_minus_254),9);
    bufp->fullSData(oldp+86,(vlSelf->FP32_Multiplier_Combinatorial__DOT__E),9);
    bufp->fullSData(oldp+87,(vlSelf->FP32_Multiplier_Combinatorial__DOT__Exp),9);
    bufp->fullCData(oldp+88,(0U),8);
    bufp->fullCData(oldp+89,(1U),8);
    bufp->fullBit(oldp+90,(0U));
}
