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
    tracep->declBus(c+88,"alpha", false,-1, 31,0);
    tracep->declBus(c+89,"bravo", false,-1, 31,0);
    tracep->declBus(c+90,"acc", false,-1, 31,0);
    tracep->declBus(c+91,"delta", false,-1, 31,0);
    tracep->pushNamePrefix("FP32_MAC_Combinatorial ");
    tracep->declBus(c+88,"alpha", false,-1, 31,0);
    tracep->declBus(c+89,"bravo", false,-1, 31,0);
    tracep->declBus(c+90,"acc", false,-1, 31,0);
    tracep->declBus(c+91,"delta", false,-1, 31,0);
    tracep->declBus(c+1,"middle_output", false,-1, 31,0);
    tracep->pushNamePrefix("My_Adder ");
    tracep->declBus(c+1,"alpha", false,-1, 31,0);
    tracep->declBus(c+90,"bravo", false,-1, 31,0);
    tracep->declBus(c+91,"delta", false,-1, 31,0);
    tracep->declBus(c+2,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+92,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+2,"EA", false,-1, 7,0);
    tracep->declBus(c+92,"EB", false,-1, 7,0);
    tracep->declBus(c+3,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+93,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+94,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+95,"Valid_Minus", false,-1, 7,0);
    tracep->declBus(c+96,"Right_Shift", false,-1, 7,0);
    tracep->declBit(c+140,"EA_minus_EB_Carry", false,-1);
    tracep->declBit(c+141,"EB_minus_EA_Carry", false,-1);
    tracep->declBus(c+142,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+143,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+4,"EA0", false,-1);
    tracep->declBit(c+97,"EB0", false,-1);
    tracep->declBit(c+5,"EA1", false,-1);
    tracep->declBit(c+98,"EB1", false,-1);
    tracep->declBit(c+6,"E_LeftBig", false,-1);
    tracep->declBit(c+99,"E_RightBig", false,-1);
    tracep->declBit(c+7,"E_Equal", false,-1);
    tracep->declBit(c+8,"SA", false,-1);
    tracep->declBit(c+100,"SB", false,-1);
    tracep->declBus(c+9,"MA", false,-1, 22,0);
    tracep->declBus(c+101,"MB", false,-1, 22,0);
    tracep->declBus(c+10,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+11,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+102,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+103,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+12,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+13,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+104,"M_RightBig", false,-1);
    tracep->declBit(c+14,"M_LeftBig", false,-1);
    tracep->declBit(c+105,"M_Equal", false,-1);
    tracep->declBit(c+15,"MA0", false,-1);
    tracep->declBit(c+106,"MB0", false,-1);
    tracep->declBus(c+16,"small_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+17,"large_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+107,"small_E_Mantissa2", false,-1, 23,0);
    tracep->declBus(c+18,"small_E_Mantissa3", false,-1, 23,0);
    tracep->declBus(c+108,"small_E_Mantissa4", false,-1, 23,0);
    tracep->declBus(c+19,"added_Mantissa", false,-1, 24,0);
    tracep->declBus(c+20,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+19,"adder_output", false,-1, 24,0);
    tracep->declBus(c+21,"right_frac_tmp", false,-1, 24,0);
    tracep->declBit(c+22,"mantissa_24th", false,-1);
    tracep->declBit(c+23,"mantissa_23rd", false,-1);
    tracep->declBit(c+24,"mantissa_22nd", false,-1);
    tracep->declBus(c+25,"lefted_frac", false,-1, 24,0);
    tracep->declBus(c+26,"lefted_frac_righted", false,-1, 24,0);
    tracep->declBus(c+27,"frac", false,-1, 22,0);
    tracep->declBus(c+28,"righted_frac", false,-1, 22,0);
    tracep->declBus(c+29,"lefted_frac_truncated", false,-1, 22,0);
    tracep->declBus(c+30,"lefted_frac_righted_truncated", false,-1, 22,0);
    tracep->declBus(c+31,"left_shifting", false,-1, 7,0);
    tracep->declBit(c+144,"G", false,-1);
    tracep->declBit(c+145,"R", false,-1);
    tracep->declBit(c+146,"S", false,-1);
    tracep->declBus(c+109,"R_mask", false,-1, 23,0);
    tracep->declBit(c+110,"final_sign", false,-1);
    tracep->declBus(c+32,"final_exponent", false,-1, 7,0);
    tracep->declBus(c+33,"final_mantissa", false,-1, 22,0);
    tracep->declBus(c+34,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+35,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->pushNamePrefix("leading_1_detector_23bit_1 ");
    tracep->declBus(c+19,"tmp", false,-1, 24,0);
    tracep->declBus(c+20,"ret", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("My_Multiplier ");
    tracep->declBus(c+88,"alpha", false,-1, 31,0);
    tracep->declBus(c+89,"bravo", false,-1, 31,0);
    tracep->declBus(c+1,"delta", false,-1, 31,0);
    tracep->declBus(c+111,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+112,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+36,"EA", false,-1, 7,0);
    tracep->declBus(c+37,"EB", false,-1, 7,0);
    tracep->declBus(c+113,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+114,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+115,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+116,"Right_Shift", false,-1, 7,0);
    tracep->declBus(c+38,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+147,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+117,"EA0", false,-1);
    tracep->declBit(c+118,"EB0", false,-1);
    tracep->declBit(c+119,"EA1", false,-1);
    tracep->declBit(c+120,"EB1", false,-1);
    tracep->declBit(c+39,"E_LeftBig", false,-1);
    tracep->declBit(c+121,"E_RightBig", false,-1);
    tracep->declBit(c+122,"E_Equal", false,-1);
    tracep->declBit(c+123,"SA", false,-1);
    tracep->declBit(c+124,"SB", false,-1);
    tracep->declBit(c+125,"final_sign", false,-1);
    tracep->declBus(c+126,"MA", false,-1, 22,0);
    tracep->declBus(c+127,"MB", false,-1, 22,0);
    tracep->declBus(c+128,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+129,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+130,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+131,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+132,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+133,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+134,"M_RightBig", false,-1);
    tracep->declBit(c+135,"M_LeftBig", false,-1);
    tracep->declBit(c+136,"M_Equal", false,-1);
    tracep->declBit(c+137,"MA0", false,-1);
    tracep->declBit(c+138,"MB0", false,-1);
    tracep->declQuad(c+40,"M_48_Original", false,-1, 47,0);
    tracep->declBus(c+42,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+43,"Until_46th", false,-1, 7,0);
    tracep->declBus(c+44,"Until_126", false,-1, 7,0);
    tracep->declBus(c+45,"Until_126_2", false,-1, 7,0);
    tracep->declBus(c+148,"E", false,-1, 8,0);
    tracep->declBus(c+149,"Exp", false,-1, 8,0);
    tracep->declBit(c+46,"Until_126_Carry", false,-1);
    tracep->declBit(c+47,"Until_126_2_Carry", false,-1);
    tracep->declQuad(c+40,"Man1", false,-1, 47,0);
    tracep->declQuad(c+48,"Man2", false,-1, 47,0);
    tracep->declQuad(c+50,"Man3", false,-1, 47,0);
    tracep->declQuad(c+52,"Man4", false,-1, 47,0);
    tracep->declQuad(c+52,"Man5_tmp", false,-1, 47,0);
    tracep->declQuad(c+54,"Man5", false,-1, 47,0);
    tracep->declQuad(c+56,"Man3_tmp", false,-1, 47,0);
    tracep->declBus(c+58,"Exp1", false,-1, 7,0);
    tracep->declBus(c+59,"Exp2", false,-1, 7,0);
    tracep->declBus(c+150,"Exp3", false,-1, 7,0);
    tracep->declBus(c+151,"Exp4", false,-1, 7,0);
    tracep->declBus(c+60,"Exp5", false,-1, 7,0);
    tracep->declQuad(c+61,"final_Man", false,-1, 47,0);
    tracep->declBus(c+63,"final_Exp", false,-1, 7,0);
    tracep->declBit(c+64,"final_Exp_Carry", false,-1);
    tracep->declBit(c+65,"Exp1_C", false,-1);
    tracep->declBit(c+66,"Exp2_C", false,-1);
    tracep->declBit(c+152,"Exp3_C", false,-1);
    tracep->declBit(c+152,"Exp4_C", false,-1);
    tracep->declBit(c+67,"Exp5_C", false,-1);
    tracep->declBus(c+68,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+69,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBit(c+70,"DEBUG_ELB", false,-1);
    tracep->declBit(c+71,"DEBUG_ERB", false,-1);
    tracep->declBit(c+72,"DEBUG_EEQ", false,-1);
    tracep->declQuad(c+73,"M_48_46th_Hidden", false,-1, 47,0);
    tracep->declQuad(c+75,"M_48_46th_Hidden_RSh23", false,-1, 47,0);
    tracep->declQuad(c+77,"M_48_46th_Hidden_RSh23_plus_1", false,-1, 47,0);
    tracep->declQuad(c+79,"M_48_46th_Hidden_RSh23_plus_1_RSh1", false,-1, 47,0);
    tracep->declBit(c+81,"G", false,-1);
    tracep->declBit(c+82,"R", false,-1);
    tracep->declBit(c+83,"S", false,-1);
    tracep->declBus(c+84,"final_Exp_plus1", false,-1, 8,0);
    tracep->declBus(c+85,"delta_mantissa", false,-1, 22,0);
    tracep->declBus(c+86,"delta_exp", false,-1, 7,0);
    tracep->declBit(c+139,"NAN", false,-1);
    tracep->declBit(c+87,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_48bit_1 ");
    tracep->declQuad(c+40,"tmp", false,-1, 47,0);
    tracep->declBus(c+42,"ret", false,-1, 7,0);
    tracep->popNamePrefix(3);
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
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
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
    bufp->fullIData(oldp+1,(vlSelf->FP32_MAC_Combinatorial__DOT__middle_output),32);
    bufp->fullCData(oldp+2,((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                      >> 0x17U))),8);
    bufp->fullCData(oldp+3,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E),8);
    bufp->fullBit(oldp+4,((0U == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+5,((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              >> 0x17U)))));
    bufp->fullBit(oldp+6,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig));
    bufp->fullBit(oldp+7,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal));
    bufp->fullBit(oldp+8,((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                           >> 0x1fU)));
    bufp->fullIData(oldp+9,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),23);
    bufp->fullIData(oldp+10,((((0U != (0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))),24);
    bufp->fullIData(oldp+11,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output)),24);
    bufp->fullIData(oldp+12,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm1),24);
    bufp->fullIData(oldp+13,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Denorm2),24);
    bufp->fullBit(oldp+14,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig));
    bufp->fullBit(oldp+15,((0U == (0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output))));
    bufp->fullIData(oldp+16,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa),24);
    bufp->fullIData(oldp+17,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__large_E_Mantissa),24);
    bufp->fullIData(oldp+18,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3),24);
    bufp->fullIData(oldp+19,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa),25);
    bufp->fullCData(oldp+20,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position),8);
    bufp->fullIData(oldp+21,((0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                            >> 1U))),25);
    bufp->fullBit(oldp+22,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x18U))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x17U))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x16U))));
    bufp->fullIData(oldp+25,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__lefted_frac),25);
    bufp->fullIData(oldp+26,((0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__lefted_frac 
                                            >> 1U))),25);
    bufp->fullIData(oldp+27,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)),23);
    bufp->fullIData(oldp+28,((0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                           >> 1U))),23);
    bufp->fullIData(oldp+29,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__lefted_frac)),23);
    bufp->fullIData(oldp+30,((0x7fffffU & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__lefted_frac 
                                           >> 1U))),23);
    bufp->fullCData(oldp+31,((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E) 
                               < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))
                               ? (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__Larger_E)
                               : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__leading_1_position))),8);
    bufp->fullCData(oldp+32,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent),8);
    bufp->fullIData(oldp+33,((0x7fffffU & ((0x1000000U 
                                            & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                            ? (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa 
                                               >> 1U)
                                            : ((0x800000U 
                                                & vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa)
                                                ? vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__added_Mantissa
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent))
                                                    ? vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__lefted_frac
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__final_exponent))
                                                     ? 
                                                    (vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__lefted_frac 
                                                     >> 1U)
                                                     : 0U)))))),23);
    bufp->fullCData(oldp+34,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+35,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullCData(oldp+36,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA),8);
    bufp->fullCData(oldp+37,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB),8);
    bufp->fullSData(oldp+38,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB),9);
    bufp->fullBit(oldp+39,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig));
    bufp->fullQData(oldp+40,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original),48);
    bufp->fullCData(oldp+42,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position),8);
    bufp->fullCData(oldp+43,((0xffU & ((IData)(0x2eU) 
                                       - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))),8);
    bufp->fullCData(oldp+44,((0xffU & ((IData)(0x80U) 
                                       + (0x1ffU & 
                                          (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))),8);
    bufp->fullCData(oldp+45,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Until_126_2),8);
    bufp->fullBit(oldp+46,((1U & (((IData)(0x80U) + 
                                   (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))) 
                                  >> 8U))));
    bufp->fullBit(oldp+47,((1U & ((((IData)(1U) + (0xffU 
                                                   & ((IData)(0x2eU) 
                                                      - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                   - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)) 
                                  >> 8U))));
    bufp->fullQData(oldp+48,((0xffffffffffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                   >> 1U))),48);
    bufp->fullQData(oldp+50,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Man3),48);
    bufp->fullQData(oldp+52,(((0x2fU >= (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                     << (0xffU & ((IData)(0x2eU) 
                                                  - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))
                               : 0ULL)),48);
    bufp->fullQData(oldp+54,((((~ (1U & ((((IData)(1U) 
                                           + (0xffU 
                                              & ((IData)(0x2eU) 
                                                 - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                          - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)) 
                                         >> 8U))) & 
                               (0x30U < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Until_126_2)))
                               ? 0ULL : ((0x2fU >= (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Until_126_2))
                                          ? (0xffffffffffffULL 
                                             & (((0x2fU 
                                                  >= 
                                                  (0xffU 
                                                   & ((IData)(0x2eU) 
                                                      - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))
                                                  ? 
                                                 (0xffffffffffffULL 
                                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                                     << 
                                                     (0xffU 
                                                      & ((IData)(0x2eU) 
                                                         - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))))
                                                  : 0ULL) 
                                                >> (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Until_126_2)))
                                          : 0ULL))),48);
    bufp->fullQData(oldp+56,(((0x2fU >= (0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x1ffU 
                                                   & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                               ? (0xffffffffffffULL 
                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__M_48_Original 
                                     >> (0xffU & ((IData)(0x80U) 
                                                  + 
                                                  (0x1ffU 
                                                   & (- (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))))
                               : 0ULL)),48);
    bufp->fullCData(oldp+58,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                       - (IData)(0x7fU)))),8);
    bufp->fullCData(oldp+59,((0xffU & ((IData)(1U) 
                                       + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                          - (IData)(0x7fU))))),8);
    bufp->fullCData(oldp+60,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                        - (IData)(0x7fU)) 
                                       - ((IData)(0x2eU) 
                                          - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))))),8);
    bufp->fullQData(oldp+61,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man),48);
    bufp->fullCData(oldp+63,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp),8);
    bufp->fullBit(oldp+64,((1U & ((0x80U < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))
                                   ? ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                       ? (1U & (((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))) 
                                                >> 8U))
                                       : ((0x2eU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                           ? (1U & 
                                              (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                - (IData)(0x7fU)) 
                                               >> 8U))
                                           : (1U & 
                                              (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                > (0x1ffU 
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
                                   : ((0x80U <= (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)) 
                                      & ((0x2fU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                          ? (1U & (
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU))) 
                                                   >> 8U))
                                          : (IData)(
                                                    ((0x2eU 
                                                      == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                     & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU)) 
                                                        >> 8U)))))))));
    bufp->fullBit(oldp+65,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                   - (IData)(0x7fU)) 
                                  >> 8U))));
    bufp->fullBit(oldp+66,((1U & (((IData)(1U) + ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))) 
                                  >> 8U))));
    bufp->fullBit(oldp+67,((1U & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                    - (IData)(0x7fU)) 
                                   - (0xffU & ((IData)(0x2eU) 
                                               - (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                  >> 8U))));
    bufp->fullCData(oldp+68,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+69,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullBit(oldp+70,((0x80U < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))));
    bufp->fullBit(oldp+71,((0x80U > (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))));
    bufp->fullBit(oldp+72,((1U & (~ ((0x80U < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)) 
                                     ^ (0x80U > (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)))))));
    bufp->fullQData(oldp+73,((0x3fffffffffffULL & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)),48);
    bufp->fullQData(oldp+75,((0x7fffffULL & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x17U))),48);
    bufp->fullQData(oldp+77,((0xffffffffffffULL & (1ULL 
                                                   + 
                                                   (0x7fffffULL 
                                                    & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                       >> 0x17U))))),48);
    bufp->fullQData(oldp+79,((0x7fffffffffffULL & (
                                                   (1ULL 
                                                    + 
                                                    (0x7fffffULL 
                                                     & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                        >> 0x17U))) 
                                                   >> 1U))),48);
    bufp->fullBit(oldp+81,((1U & (IData)((0x7fffffULL 
                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+82,((1U & (IData)((0xffffffULL 
                                          & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+83,((0U != (0x3fffffU & (IData)(
                                                       (0x3fffffffffffULL 
                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))));
    bufp->fullSData(oldp+84,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))),9);
    bufp->fullIData(oldp+85,((0x7fffffU & ((((IData)(
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
                                            ? ((1U 
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
                                                : ((IData)(1U) 
                                                   + (IData)(
                                                             (0x7fffffULL 
                                                              & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                 >> 0x17U)))))
                                            : (IData)(
                                                      (0x7fffffULL 
                                                       & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                          >> 0x17U)))))),23);
    bufp->fullCData(oldp+86,((0xffU & ((((IData)((0xffffffULL 
                                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                     >> 0x16U))) 
                                         & (0U != (0x3fffffU 
                                                   & (IData)(
                                                             (0x3fffffffffffULL 
                                                              & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))) 
                                        | ((IData)(
                                                   (0x7fffffULL 
                                                    & (0xc00000ULL 
                                                       == 
                                                       (0xc00000ULL 
                                                        & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man)))) 
                                           & (0U == 
                                              (0x3fffffU 
                                               & (IData)(
                                                         (0x3fffffffffffULL 
                                                          & vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man))))))
                                        ? ((1U & (IData)(
                                                         (0x1ffffffULL 
                                                          & ((1ULL 
                                                              + 
                                                              (0x7fffffULL 
                                                               & (vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Man 
                                                                  >> 0x17U))) 
                                                             >> 0x17U))))
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp))
                                            : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp))
                                        : (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))),8);
    bufp->fullBit(oldp+87,(((0xfeU < ((0x100U & (((0x80U 
                                                   < (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB))
                                                   ? 
                                                  ((0x2fU 
                                                    == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                                    ? 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU))) 
                                                       >> 8U))
                                                    : 
                                                   ((0x2eU 
                                                     == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                                     ? 
                                                    (1U 
                                                     & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                         - (IData)(0x7fU)) 
                                                        >> 8U))
                                                     : 
                                                    (1U 
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
                                                   : 
                                                  ((0x80U 
                                                    <= (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB)) 
                                                   & ((0x2fU 
                                                       == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__leading_1_position))
                                                       ? 
                                                      (1U 
                                                       & (((IData)(1U) 
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
                                                 << 8U)) 
                                      | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__final_Exp)))
                             ? 1U : 0U)));
    bufp->fullIData(oldp+88,(vlSelf->alpha),32);
    bufp->fullIData(oldp+89,(vlSelf->bravo),32);
    bufp->fullIData(oldp+90,(vlSelf->acc),32);
    bufp->fullIData(oldp+91,(vlSelf->delta),32);
    bufp->fullCData(oldp+92,((0xffU & (vlSelf->acc 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+93,((0xffU & ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                        >> 0x17U) - 
                                       (vlSelf->acc 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+94,((0xffU & ((vlSelf->acc 
                                        >> 0x17U) - 
                                       (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+95,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                        ? ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                            >> 0x17U) 
                                           - (vlSelf->acc 
                                              >> 0x17U))
                                        : ((vlSelf->acc 
                                            >> 0x17U) 
                                           - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              >> 0x17U))))),8);
    bufp->fullCData(oldp+96,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                         ? ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                             >> 0x17U) 
                                            - (vlSelf->acc 
                                               >> 0x17U))
                                         : ((vlSelf->acc 
                                             >> 0x17U) 
                                            - (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                               >> 0x17U))) 
                                       - ((0U == (0xffU 
                                                  & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                     >> 0x17U))) 
                                          ^ (0U == 
                                             (0xffU 
                                              & (vlSelf->acc 
                                                 >> 0x17U))))))),8);
    bufp->fullBit(oldp+97,((0U == (0xffU & (vlSelf->acc 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+98,((0xffU == (0xffU & (vlSelf->acc 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+99,(((0xffU & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->acc >> 0x17U)))));
    bufp->fullBit(oldp+100,((vlSelf->acc >> 0x1fU)));
    bufp->fullIData(oldp+101,((0x7fffffU & vlSelf->acc)),23);
    bufp->fullIData(oldp+102,((((0U != (0xffU & (vlSelf->acc 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->acc))),24);
    bufp->fullIData(oldp+103,((0x7fffffU & vlSelf->acc)),24);
    bufp->fullBit(oldp+104,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                             < (0x7fffffU & vlSelf->acc))));
    bufp->fullBit(oldp+105,(((0x7fffffU & vlSelf->FP32_MAC_Combinatorial__DOT__middle_output) 
                             == (0x7fffffU & vlSelf->acc))));
    bufp->fullBit(oldp+106,((0U == (0x7fffffU & vlSelf->acc))));
    bufp->fullIData(oldp+107,((((0xffU == (0xffU & 
                                           (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                            >> 0x17U))) 
                                | (0xffU == (0xffU 
                                             & (vlSelf->acc 
                                                >> 0x17U))))
                                ? 0xffffffU : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa)),24);
    bufp->fullIData(oldp+108,((0xffffffU & (((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                              ^ vlSelf->acc) 
                                             >> 0x1fU)
                                             ? (~ vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3)
                                             : vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
    bufp->fullIData(oldp+109,(((0x17U >= (0xffU & (
                                                   (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                                      ? 
                                                     ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                       >> 0x17U) 
                                                      - 
                                                      (vlSelf->acc 
                                                       >> 0x17U))
                                                      : 
                                                     ((vlSelf->acc 
                                                       >> 0x17U) 
                                                      - 
                                                      (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                       >> 0x17U))) 
                                                    - 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                          >> 0x17U))) 
                                                     ^ 
                                                     (0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelf->acc 
                                                          >> 0x17U))))) 
                                                   - (IData)(1U))))
                                ? (0xffffffU & ((IData)(1U) 
                                                << 
                                                (0xffU 
                                                 & ((((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig)
                                                       ? 
                                                      ((vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                        >> 0x17U) 
                                                       - 
                                                       (vlSelf->acc 
                                                        >> 0x17U))
                                                       : 
                                                      ((vlSelf->acc 
                                                        >> 0x17U) 
                                                       - 
                                                       (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                        >> 0x17U))) 
                                                     - 
                                                     ((0U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                                           >> 0x17U))) 
                                                      ^ 
                                                      (0U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSelf->acc 
                                                           >> 0x17U))))) 
                                                    - (IData)(1U)))))
                                : 0U)),24);
    bufp->fullBit(oldp+110,((1U & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_LeftBig) 
                                    | ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__E_Equal) 
                                       & (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__M_LeftBig)))
                                    ? (vlSelf->FP32_MAC_Combinatorial__DOT__middle_output 
                                       >> 0x1fU) : 
                                   (vlSelf->acc >> 0x1fU)))));
    bufp->fullCData(oldp+111,((0xffU & (vlSelf->alpha 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+112,((0xffU & (vlSelf->bravo 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+113,((0xffU & ((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
                                         ? (vlSelf->alpha 
                                            >> 0x17U)
                                         : (vlSelf->bravo 
                                            >> 0x17U)))),8);
    bufp->fullCData(oldp+114,((0xffU & ((vlSelf->alpha 
                                         >> 0x17U) 
                                        - (vlSelf->bravo 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+115,((0xffU & ((vlSelf->bravo 
                                         >> 0x17U) 
                                        - (vlSelf->alpha 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+116,((0xffU & (((IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig)
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
    bufp->fullBit(oldp+117,((0U == (0xffU & (vlSelf->alpha 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+118,((0U == (0xffU & (vlSelf->bravo 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+119,((0xffU == (0xffU & (vlSelf->alpha 
                                                >> 0x17U)))));
    bufp->fullBit(oldp+120,((0xffU == (0xffU & (vlSelf->bravo 
                                                >> 0x17U)))));
    bufp->fullBit(oldp+121,(((0xffU & (vlSelf->alpha 
                                       >> 0x17U)) < 
                             (0xffU & (vlSelf->bravo 
                                       >> 0x17U)))));
    bufp->fullBit(oldp+122,((1U & (~ (((0xffU & (vlSelf->alpha 
                                                 >> 0x17U)) 
                                       < (0xffU & (vlSelf->bravo 
                                                   >> 0x17U))) 
                                      | (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E_LeftBig))))));
    bufp->fullBit(oldp+123,((vlSelf->alpha >> 0x1fU)));
    bufp->fullBit(oldp+124,((vlSelf->bravo >> 0x1fU)));
    bufp->fullBit(oldp+125,(((vlSelf->alpha ^ vlSelf->bravo) 
                             >> 0x1fU)));
    bufp->fullIData(oldp+126,((0x7fffffU & vlSelf->alpha)),23);
    bufp->fullIData(oldp+127,((0x7fffffU & vlSelf->bravo)),23);
    bufp->fullIData(oldp+128,((((0U != (0xffU & (vlSelf->alpha 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->alpha))),24);
    bufp->fullIData(oldp+129,((0x7fffffU & vlSelf->alpha)),24);
    bufp->fullIData(oldp+130,((((0U != (0xffU & (vlSelf->bravo 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->bravo))),24);
    bufp->fullIData(oldp+131,((0x7fffffU & vlSelf->bravo)),24);
    bufp->fullIData(oldp+132,(((IData)(((0U == (0x7f800000U 
                                                & vlSelf->alpha)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->alpha))))
                                ? (0x7fffffU & vlSelf->alpha)
                                : (((0U != (0xffU & 
                                            (vlSelf->alpha 
                                             >> 0x17U))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & vlSelf->alpha)))),24);
    bufp->fullIData(oldp+133,(((IData)(((0U == (0x7f800000U 
                                                & vlSelf->bravo)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->bravo))))
                                ? (0x7fffffU & vlSelf->bravo)
                                : (((0U != (0xffU & 
                                            (vlSelf->bravo 
                                             >> 0x17U))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & vlSelf->bravo)))),24);
    bufp->fullBit(oldp+134,(((0x7fffffU & vlSelf->alpha) 
                             < (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+135,(((0x7fffffU & vlSelf->alpha) 
                             > (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+136,(((0x7fffffU & vlSelf->alpha) 
                             == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+137,((0U == (0x7fffffU & vlSelf->alpha))));
    bufp->fullBit(oldp+138,((0U == (0x7fffffU & vlSelf->bravo))));
    bufp->fullBit(oldp+139,((((0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA)) 
                              & (0U != (0x7fffffU & vlSelf->alpha))) 
                             | ((0xffU == (IData)(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EB)) 
                                & (0U != (0x7fffffU 
                                          & vlSelf->bravo))))));
    bufp->fullBit(oldp+140,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_minus_EB_Carry));
    bufp->fullBit(oldp+141,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EB_minus_EA_Carry));
    bufp->fullSData(oldp+142,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB),9);
    bufp->fullSData(oldp+143,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__EA_plus_EB_minus_254),9);
    bufp->fullBit(oldp+144,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__G));
    bufp->fullBit(oldp+145,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__R));
    bufp->fullBit(oldp+146,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Adder__DOT__S));
    bufp->fullSData(oldp+147,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254),9);
    bufp->fullSData(oldp+148,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__E),9);
    bufp->fullSData(oldp+149,(vlSelf->FP32_MAC_Combinatorial__DOT__My_Multiplier__DOT__Exp),9);
    bufp->fullCData(oldp+150,(0U),8);
    bufp->fullCData(oldp+151,(1U),8);
    bufp->fullBit(oldp+152,(0U));
}
