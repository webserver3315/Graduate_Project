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
    tracep->declBus(c+23,"alpha", false,-1, 31,0);
    tracep->declBus(c+24,"bravo", false,-1, 31,0);
    tracep->declBus(c+25,"delta", false,-1, 31,0);
    tracep->pushNamePrefix("FP32_Adder_Combinatorial ");
    tracep->declBus(c+23,"alpha", false,-1, 31,0);
    tracep->declBus(c+24,"bravo", false,-1, 31,0);
    tracep->declBus(c+25,"delta", false,-1, 31,0);
    tracep->declBus(c+26,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+27,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+26,"EA", false,-1, 7,0);
    tracep->declBus(c+27,"EB", false,-1, 7,0);
    tracep->declBus(c+1,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+28,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+29,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+30,"Valid_Minus", false,-1, 7,0);
    tracep->declBus(c+31,"Right_Shift", false,-1, 7,0);
    tracep->declBit(c+54,"EA_minus_EB_Carry", false,-1);
    tracep->declBit(c+55,"EB_minus_EA_Carry", false,-1);
    tracep->declBus(c+56,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+57,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+32,"EA0", false,-1);
    tracep->declBit(c+33,"EB0", false,-1);
    tracep->declBit(c+34,"EA1", false,-1);
    tracep->declBit(c+35,"EB1", false,-1);
    tracep->declBit(c+2,"E_LeftBig", false,-1);
    tracep->declBit(c+36,"E_RightBig", false,-1);
    tracep->declBit(c+3,"E_Equal", false,-1);
    tracep->declBit(c+37,"SA", false,-1);
    tracep->declBit(c+38,"SB", false,-1);
    tracep->declBus(c+39,"MA", false,-1, 22,0);
    tracep->declBus(c+40,"MB", false,-1, 22,0);
    tracep->declBus(c+41,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+42,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+43,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+44,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+4,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+5,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+45,"M_RightBig", false,-1);
    tracep->declBit(c+6,"M_LeftBig", false,-1);
    tracep->declBit(c+46,"M_Equal", false,-1);
    tracep->declBit(c+47,"MA0", false,-1);
    tracep->declBit(c+48,"MB0", false,-1);
    tracep->declBus(c+7,"small_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+8,"large_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+49,"small_E_Mantissa2", false,-1, 23,0);
    tracep->declBus(c+9,"small_E_Mantissa3", false,-1, 23,0);
    tracep->declBus(c+50,"small_E_Mantissa4", false,-1, 23,0);
    tracep->declBus(c+10,"added_Mantissa", false,-1, 24,0);
    tracep->declBus(c+11,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+10,"adder_output", false,-1, 24,0);
    tracep->declBus(c+12,"right_frac_tmp", false,-1, 24,0);
    tracep->declBit(c+13,"mantissa_24th", false,-1);
    tracep->declBit(c+14,"mantissa_23rd", false,-1);
    tracep->declBit(c+15,"mantissa_22nd", false,-1);
    tracep->declBus(c+16,"frac", false,-1, 22,0);
    tracep->declBus(c+17,"righted_frac", false,-1, 22,0);
    tracep->declBus(c+18,"lefted_frac", false,-1, 23,0);
    tracep->declBus(c+19,"lefted_frac_righted", false,-1, 23,0);
    tracep->declBus(c+20,"lefted_frac_truncated", false,-1, 22,0);
    tracep->declBus(c+21,"lefted_frac_righted_truncated", false,-1, 22,0);
    tracep->declBit(c+58,"G", false,-1);
    tracep->declBit(c+59,"R", false,-1);
    tracep->declBit(c+60,"S", false,-1);
    tracep->declBus(c+51,"R_mask", false,-1, 23,0);
    tracep->declBit(c+52,"final_sign", false,-1);
    tracep->declBus(c+22,"final_exponent", false,-1, 7,0);
    tracep->declBus(c+53,"final_mantissa", false,-1, 22,0);
    tracep->pushNamePrefix("leading_1_detector_23bit_1 ");
    tracep->declBus(c+10,"tmp", false,-1, 24,0);
    tracep->declBus(c+11,"ret", false,-1, 7,0);
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
    bufp->fullCData(oldp+1,(vlSelf->FP32_Adder_Combinatorial__DOT__Larger_E),8);
    bufp->fullBit(oldp+2,(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig));
    bufp->fullBit(oldp+3,(vlSelf->FP32_Adder_Combinatorial__DOT__E_Equal));
    bufp->fullIData(oldp+4,(vlSelf->FP32_Adder_Combinatorial__DOT__Denorm1),24);
    bufp->fullIData(oldp+5,(vlSelf->FP32_Adder_Combinatorial__DOT__Denorm2),24);
    bufp->fullBit(oldp+6,(vlSelf->FP32_Adder_Combinatorial__DOT__M_LeftBig));
    bufp->fullIData(oldp+7,(vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa),24);
    bufp->fullIData(oldp+8,(vlSelf->FP32_Adder_Combinatorial__DOT__large_E_Mantissa),24);
    bufp->fullIData(oldp+9,(vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3),24);
    bufp->fullIData(oldp+10,(vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa),25);
    bufp->fullCData(oldp+11,(vlSelf->FP32_Adder_Combinatorial__DOT__leading_1_position),8);
    bufp->fullIData(oldp+12,((0x1ffffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                            >> 1U))),25);
    bufp->fullBit(oldp+13,((1U & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                  >> 0x18U))));
    bufp->fullBit(oldp+14,((1U & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                  >> 0x17U))));
    bufp->fullBit(oldp+15,((1U & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                  >> 0x16U))));
    bufp->fullIData(oldp+16,((0x7fffffU & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)),23);
    bufp->fullIData(oldp+17,((0x7fffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                           >> 1U))),23);
    bufp->fullIData(oldp+18,(vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac),24);
    bufp->fullIData(oldp+19,((0xffffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac 
                                           >> 1U))),24);
    bufp->fullIData(oldp+20,((0x7fffffU & vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac)),23);
    bufp->fullIData(oldp+21,((0x7fffffU & (vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac 
                                           >> 1U))),23);
    bufp->fullCData(oldp+22,(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent),8);
    bufp->fullIData(oldp+23,(vlSelf->alpha),32);
    bufp->fullIData(oldp+24,(vlSelf->bravo),32);
    bufp->fullIData(oldp+25,(vlSelf->delta),32);
    bufp->fullCData(oldp+26,((0xffU & (vlSelf->alpha 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+27,((0xffU & (vlSelf->bravo 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+28,((0xffU & ((vlSelf->alpha 
                                        >> 0x17U) - 
                                       (vlSelf->bravo 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+29,((0xffU & ((vlSelf->bravo 
                                        >> 0x17U) - 
                                       (vlSelf->alpha 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+30,((0xffU & ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                                        ? ((vlSelf->alpha 
                                            >> 0x17U) 
                                           - (vlSelf->bravo 
                                              >> 0x17U))
                                        : ((vlSelf->bravo 
                                            >> 0x17U) 
                                           - (vlSelf->alpha 
                                              >> 0x17U))))),8);
    bufp->fullCData(oldp+31,((0xffU & (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
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
    bufp->fullBit(oldp+32,((0U == (0xffU & (vlSelf->alpha 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+33,((0U == (0xffU & (vlSelf->bravo 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+34,((0xffU == (0xffU & (vlSelf->alpha 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+35,((0xffU == (0xffU & (vlSelf->bravo 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+36,(((0xffU & (vlSelf->alpha 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->bravo 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+37,((vlSelf->alpha >> 0x1fU)));
    bufp->fullBit(oldp+38,((vlSelf->bravo >> 0x1fU)));
    bufp->fullIData(oldp+39,((0x7fffffU & vlSelf->alpha)),23);
    bufp->fullIData(oldp+40,((0x7fffffU & vlSelf->bravo)),23);
    bufp->fullIData(oldp+41,((((0U != (0xffU & (vlSelf->alpha 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->alpha))),24);
    bufp->fullIData(oldp+42,((0x7fffffU & vlSelf->alpha)),24);
    bufp->fullIData(oldp+43,((((0U != (0xffU & (vlSelf->bravo 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->bravo))),24);
    bufp->fullIData(oldp+44,((0x7fffffU & vlSelf->bravo)),24);
    bufp->fullBit(oldp+45,(((0x7fffffU & vlSelf->alpha) 
                            < (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+46,(((0x7fffffU & vlSelf->alpha) 
                            == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+47,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->fullBit(oldp+48,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->fullIData(oldp+49,((((0xffU == (0xffU & (vlSelf->alpha 
                                                   >> 0x17U))) 
                               | (0xffU == (0xffU & 
                                            (vlSelf->bravo 
                                             >> 0x17U))))
                               ? 0xffffffU : vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa)),24);
    bufp->fullIData(oldp+50,((0xffffffU & (((vlSelf->alpha 
                                             ^ vlSelf->bravo) 
                                            >> 0x1fU)
                                            ? (~ vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3)
                                            : vlSelf->FP32_Adder_Combinatorial__DOT__small_E_Mantissa3))),24);
    bufp->fullIData(oldp+51,(((0x17U >= (0xffU & ((
                                                   ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                                                     ? 
                                                    ((vlSelf->alpha 
                                                      >> 0x17U) 
                                                     - 
                                                     (vlSelf->bravo 
                                                      >> 0x17U))
                                                     : 
                                                    ((vlSelf->bravo 
                                                      >> 0x17U) 
                                                     - 
                                                     (vlSelf->alpha 
                                                      >> 0x17U))) 
                                                   - 
                                                   ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->alpha 
                                                         >> 0x17U))) 
                                                    ^ 
                                                    (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->bravo 
                                                         >> 0x17U))))) 
                                                  - (IData)(1U))))
                               ? (0xffffffU & ((IData)(1U) 
                                               << (0xffU 
                                                   & ((((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig)
                                                         ? 
                                                        ((vlSelf->alpha 
                                                          >> 0x17U) 
                                                         - 
                                                         (vlSelf->bravo 
                                                          >> 0x17U))
                                                         : 
                                                        ((vlSelf->bravo 
                                                          >> 0x17U) 
                                                         - 
                                                         (vlSelf->alpha 
                                                          >> 0x17U))) 
                                                       - 
                                                       ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->alpha 
                                                             >> 0x17U))) 
                                                        ^ 
                                                        (0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->bravo 
                                                             >> 0x17U))))) 
                                                      - (IData)(1U)))))
                               : 0U)),24);
    bufp->fullBit(oldp+52,((1U & (((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_LeftBig) 
                                   | ((IData)(vlSelf->FP32_Adder_Combinatorial__DOT__E_Equal) 
                                      & (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__M_LeftBig)))
                                   ? (vlSelf->alpha 
                                      >> 0x1fU) : (vlSelf->bravo 
                                                   >> 0x1fU)))));
    bufp->fullIData(oldp+53,((0x7fffffU & ((((vlSelf->alpha 
                                              >> 0x1fU) 
                                             == (vlSelf->bravo 
                                                 >> 0x1fU)) 
                                            & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                               >> 0x18U))
                                            ? (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                               >> 1U)
                                            : ((((vlSelf->alpha 
                                                  >> 0x1fU) 
                                                 == 
                                                 (vlSelf->bravo 
                                                  >> 0x1fU)) 
                                                & (vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa 
                                                   >> 0x17U))
                                                ? vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa
                                                : (
                                                   (0x800000U 
                                                    & vlSelf->FP32_Adder_Combinatorial__DOT__added_Mantissa)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->FP32_Adder_Combinatorial__DOT__final_exponent))
                                                     ? 
                                                    (vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac 
                                                     >> 1U)
                                                     : 0U)
                                                    : vlSelf->FP32_Adder_Combinatorial__DOT__lefted_frac))))),23);
    bufp->fullBit(oldp+54,(vlSelf->FP32_Adder_Combinatorial__DOT__EA_minus_EB_Carry));
    bufp->fullBit(oldp+55,(vlSelf->FP32_Adder_Combinatorial__DOT__EB_minus_EA_Carry));
    bufp->fullSData(oldp+56,(vlSelf->FP32_Adder_Combinatorial__DOT__EA_plus_EB),9);
    bufp->fullSData(oldp+57,(vlSelf->FP32_Adder_Combinatorial__DOT__EA_plus_EB_minus_254),9);
    bufp->fullBit(oldp+58,(vlSelf->FP32_Adder_Combinatorial__DOT__G));
    bufp->fullBit(oldp+59,(vlSelf->FP32_Adder_Combinatorial__DOT__R));
    bufp->fullBit(oldp+60,(vlSelf->FP32_Adder_Combinatorial__DOT__S));
}
