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
    tracep->declBit(c+48,"clk_i", false,-1);
    tracep->declBit(c+49,"delta_serial", false,-1);
    tracep->declBus(c+50,"delta_output", false,-1, 31,0);
    tracep->pushNamePrefix("FP32_MAC_Combinatorial_Tx ");
    tracep->declBit(c+48,"clk_i", false,-1);
    tracep->declBit(c+49,"delta_serial", false,-1);
    tracep->declBus(c+50,"delta_output", false,-1, 31,0);
    tracep->declBus(c+53,"alpha", false,-1, 31,0);
    tracep->declBus(c+54,"bravo", false,-1, 31,0);
    tracep->declBus(c+55,"acc", false,-1, 31,0);
    tracep->declBus(c+1,"middle_delta", false,-1, 31,0);
    tracep->declBus(c+2,"delta", false,-1, 31,0);
    tracep->pushNamePrefix("My_Adder ");
    tracep->declBus(c+1,"alpha", false,-1, 31,0);
    tracep->declBus(c+55,"bravo", false,-1, 31,0);
    tracep->declBus(c+2,"delta", false,-1, 31,0);
    tracep->declBus(c+3,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+56,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+3,"EA", false,-1, 7,0);
    tracep->declBus(c+56,"EB", false,-1, 7,0);
    tracep->declBus(c+4,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+3,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+5,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+6,"Valid_Minus", false,-1, 7,0);
    tracep->declBus(c+7,"Right_Shift", false,-1, 7,0);
    tracep->declBit(c+57,"EA_minus_EB_Carry", false,-1);
    tracep->declBit(c+58,"EB_minus_EA_Carry", false,-1);
    tracep->declBus(c+59,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+60,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+8,"EA0", false,-1);
    tracep->declBit(c+61,"EB0", false,-1);
    tracep->declBit(c+9,"EA1", false,-1);
    tracep->declBit(c+62,"EB1", false,-1);
    tracep->declBit(c+10,"E_LeftBig", false,-1);
    tracep->declBit(c+62,"E_RightBig", false,-1);
    tracep->declBit(c+11,"E_Equal", false,-1);
    tracep->declBit(c+12,"SA", false,-1);
    tracep->declBit(c+62,"SB", false,-1);
    tracep->declBus(c+13,"MA", false,-1, 22,0);
    tracep->declBus(c+63,"MB", false,-1, 22,0);
    tracep->declBus(c+14,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+15,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+64,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+64,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+16,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+64,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+62,"M_RightBig", false,-1);
    tracep->declBit(c+17,"M_LeftBig", false,-1);
    tracep->declBit(c+18,"M_Equal", false,-1);
    tracep->declBit(c+18,"MA0", false,-1);
    tracep->declBit(c+61,"MB0", false,-1);
    tracep->declBus(c+19,"small_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+20,"large_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+21,"small_E_Mantissa2", false,-1, 23,0);
    tracep->declBus(c+22,"small_E_Mantissa3", false,-1, 23,0);
    tracep->declBus(c+23,"small_E_Mantissa4", false,-1, 23,0);
    tracep->declBus(c+24,"small_E_mantissa5", false,-1, 23,0);
    tracep->declBus(c+25,"added_Mantissa", false,-1, 24,0);
    tracep->declBus(c+26,"leading_1_position", false,-1, 7,0);
    tracep->declBit(c+27,"mantissa_24th", false,-1);
    tracep->declBit(c+28,"mantissa_23rd", false,-1);
    tracep->declBit(c+29,"mantissa_22nd", false,-1);
    tracep->declBus(c+25,"adder_output", false,-1, 24,0);
    tracep->declBus(c+30,"right_frac_tmp", false,-1, 24,0);
    tracep->declBus(c+31,"lefted_frac", false,-1, 24,0);
    tracep->declBus(c+32,"lefted_frac_righted", false,-1, 24,0);
    tracep->declBus(c+33,"frac", false,-1, 22,0);
    tracep->declBus(c+34,"righted_frac", false,-1, 22,0);
    tracep->declBus(c+35,"lefted_frac_truncated", false,-1, 22,0);
    tracep->declBus(c+36,"lefted_frac_righted_truncated", false,-1, 22,0);
    tracep->declBus(c+37,"left_shifting", false,-1, 7,0);
    tracep->declBit(c+65,"G", false,-1);
    tracep->declBit(c+66,"R", false,-1);
    tracep->declBit(c+67,"S", false,-1);
    tracep->declBus(c+38,"R_mask", false,-1, 23,0);
    tracep->declBit(c+39,"final_sign", false,-1);
    tracep->declBus(c+40,"final_exponent", false,-1, 7,0);
    tracep->declBus(c+41,"final_mantissa", false,-1, 22,0);
    tracep->declBus(c+42,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+43,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBit(c+44,"NAN", false,-1);
    tracep->declBit(c+45,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_23bit_1 ");
    tracep->declBus(c+25,"tmp", false,-1, 24,0);
    tracep->declBus(c+26,"ret", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("My_Multiplier ");
    tracep->declBus(c+53,"alpha", false,-1, 31,0);
    tracep->declBus(c+54,"bravo", false,-1, 31,0);
    tracep->declBus(c+1,"delta", false,-1, 31,0);
    tracep->declBus(c+68,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+68,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+68,"EA", false,-1, 7,0);
    tracep->declBus(c+68,"EB", false,-1, 7,0);
    tracep->declBus(c+68,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+56,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+56,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+56,"Right_Shift", false,-1, 7,0);
    tracep->declBus(c+69,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+70,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+62,"EA0", false,-1);
    tracep->declBit(c+62,"EB0", false,-1);
    tracep->declBit(c+62,"EA1", false,-1);
    tracep->declBit(c+62,"EB1", false,-1);
    tracep->declBit(c+62,"E_LeftBig", false,-1);
    tracep->declBit(c+62,"E_RightBig", false,-1);
    tracep->declBit(c+61,"E_Equal", false,-1);
    tracep->declBit(c+61,"SA", false,-1);
    tracep->declBit(c+62,"SB", false,-1);
    tracep->declBit(c+61,"final_sign", false,-1);
    tracep->declBus(c+63,"MA", false,-1, 22,0);
    tracep->declBus(c+71,"MB", false,-1, 22,0);
    tracep->declBus(c+72,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+64,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+73,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+74,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+72,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+73,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+61,"M_RightBig", false,-1);
    tracep->declBit(c+62,"M_LeftBig", false,-1);
    tracep->declBit(c+62,"M_Equal", false,-1);
    tracep->declBit(c+61,"MA0", false,-1);
    tracep->declBit(c+62,"MB0", false,-1);
    tracep->declQuad(c+75,"M_48_Original", false,-1, 47,0);
    tracep->declBus(c+77,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+56,"Until_46th", false,-1, 7,0);
    tracep->declBus(c+78,"Until_126", false,-1, 7,0);
    tracep->declBus(c+79,"Maximum_Exp_Cost", false,-1, 7,0);
    tracep->declBus(c+80,"E", false,-1, 8,0);
    tracep->declBus(c+81,"Exp", false,-1, 8,0);
    tracep->declBit(c+61,"Until_126_Carry", false,-1);
    tracep->declBit(c+62,"Maximum_Exp_Cost_Carry", false,-1);
    tracep->declQuad(c+75,"Man1", false,-1, 47,0);
    tracep->declQuad(c+82,"Man2", false,-1, 47,0);
    tracep->declQuad(c+75,"Man3", false,-1, 47,0);
    tracep->declQuad(c+75,"Man4", false,-1, 47,0);
    tracep->declQuad(c+75,"Man5_tmp", false,-1, 47,0);
    tracep->declQuad(c+84,"Man5_cei", false,-1, 47,0);
    tracep->declQuad(c+84,"Man5_ce", false,-1, 47,0);
    tracep->declQuad(c+84,"Man5", false,-1, 47,0);
    tracep->declQuad(c+84,"Man3_tmp", false,-1, 47,0);
    tracep->declBus(c+86,"Exp1", false,-1, 7,0);
    tracep->declBus(c+68,"Exp2", false,-1, 7,0);
    tracep->declBus(c+56,"Exp3", false,-1, 7,0);
    tracep->declBus(c+87,"Exp4", false,-1, 7,0);
    tracep->declBus(c+86,"Exp5", false,-1, 7,0);
    tracep->declQuad(c+75,"final_Man", false,-1, 47,0);
    tracep->declBus(c+86,"final_Exp", false,-1, 7,0);
    tracep->declBit(c+62,"final_Exp_Carry", false,-1);
    tracep->declBit(c+62,"Exp1_C", false,-1);
    tracep->declBit(c+62,"Exp2_C", false,-1);
    tracep->declBit(c+62,"Exp3_C", false,-1);
    tracep->declBit(c+62,"Exp4_C", false,-1);
    tracep->declBit(c+62,"Exp5_C", false,-1);
    tracep->declBus(c+46,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+47,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBit(c+61,"DEBUG_ELB", false,-1);
    tracep->declBit(c+62,"DEBUG_ERB", false,-1);
    tracep->declBit(c+62,"DEBUG_EEQ", false,-1);
    tracep->declQuad(c+88,"M_48_46th_Hidden", false,-1, 47,0);
    tracep->declQuad(c+90,"M_48_46th_Hidden_RSh23", false,-1, 47,0);
    tracep->declQuad(c+92,"M_48_46th_Hidden_RSh23_plus_1", false,-1, 47,0);
    tracep->declQuad(c+94,"M_48_46th_Hidden_RSh23_plus_1_RSh1", false,-1, 47,0);
    tracep->declBit(c+62,"G", false,-1);
    tracep->declBit(c+62,"R", false,-1);
    tracep->declBit(c+62,"S", false,-1);
    tracep->declBus(c+96,"final_Exp_plus1", false,-1, 8,0);
    tracep->declBus(c+71,"delta_mantissa", false,-1, 22,0);
    tracep->declBus(c+86,"delta_exp", false,-1, 7,0);
    tracep->declBit(c+62,"NAN", false,-1);
    tracep->declBit(c+62,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_48bit_1 ");
    tracep->declQuad(c+75,"tmp", false,-1, 47,0);
    tracep->declBus(c+77,"ret", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("My_UART_Tx ");
    tracep->declBus(c+97,"BAUD_RATE", false,-1, 31,0);
    tracep->declBus(c+98,"IDLE0_ST", false,-1, 31,0);
    tracep->declBus(c+99,"START0_ST", false,-1, 31,0);
    tracep->declBus(c+100,"D0_ST", false,-1, 31,0);
    tracep->declBus(c+101,"D1_ST", false,-1, 31,0);
    tracep->declBus(c+102,"D2_ST", false,-1, 31,0);
    tracep->declBus(c+103,"D3_ST", false,-1, 31,0);
    tracep->declBus(c+104,"D4_ST", false,-1, 31,0);
    tracep->declBus(c+105,"D5_ST", false,-1, 31,0);
    tracep->declBus(c+106,"D6_ST", false,-1, 31,0);
    tracep->declBus(c+107,"D7_ST", false,-1, 31,0);
    tracep->declBus(c+108,"STOP0_ST", false,-1, 31,0);
    tracep->declBus(c+109,"IDLE1_ST", false,-1, 31,0);
    tracep->declBus(c+110,"START1_ST", false,-1, 31,0);
    tracep->declBus(c+111,"D8_ST", false,-1, 31,0);
    tracep->declBus(c+112,"D9_ST", false,-1, 31,0);
    tracep->declBus(c+113,"D10_ST", false,-1, 31,0);
    tracep->declBus(c+114,"D11_ST", false,-1, 31,0);
    tracep->declBus(c+115,"D12_ST", false,-1, 31,0);
    tracep->declBus(c+116,"D13_ST", false,-1, 31,0);
    tracep->declBus(c+117,"D14_ST", false,-1, 31,0);
    tracep->declBus(c+118,"D15_ST", false,-1, 31,0);
    tracep->declBus(c+119,"STOP1_ST", false,-1, 31,0);
    tracep->declBus(c+120,"IDLE2_ST", false,-1, 31,0);
    tracep->declBus(c+121,"START2_ST", false,-1, 31,0);
    tracep->declBus(c+122,"D16_ST", false,-1, 31,0);
    tracep->declBus(c+123,"D17_ST", false,-1, 31,0);
    tracep->declBus(c+124,"D18_ST", false,-1, 31,0);
    tracep->declBus(c+125,"D19_ST", false,-1, 31,0);
    tracep->declBus(c+126,"D20_ST", false,-1, 31,0);
    tracep->declBus(c+127,"D21_ST", false,-1, 31,0);
    tracep->declBus(c+128,"D22_ST", false,-1, 31,0);
    tracep->declBus(c+129,"D23_ST", false,-1, 31,0);
    tracep->declBus(c+130,"STOP2_ST", false,-1, 31,0);
    tracep->declBus(c+131,"IDLE3_ST", false,-1, 31,0);
    tracep->declBus(c+132,"START3_ST", false,-1, 31,0);
    tracep->declBus(c+133,"D24_ST", false,-1, 31,0);
    tracep->declBus(c+134,"D25_ST", false,-1, 31,0);
    tracep->declBus(c+135,"D26_ST", false,-1, 31,0);
    tracep->declBus(c+136,"D27_ST", false,-1, 31,0);
    tracep->declBus(c+137,"D28_ST", false,-1, 31,0);
    tracep->declBus(c+138,"D29_ST", false,-1, 31,0);
    tracep->declBus(c+139,"D30_ST", false,-1, 31,0);
    tracep->declBus(c+140,"D31_ST", false,-1, 31,0);
    tracep->declBus(c+141,"STOP3_ST", false,-1, 31,0);
    tracep->declBit(c+48,"clk_i", false,-1);
    tracep->declBus(c+2,"full_precision_i", false,-1, 31,0);
    tracep->declBit(c+49,"uart_tx_o", false,-1);
    tracep->declBus(c+51,"tx_state", false,-1, 7,0);
    tracep->declBus(c+2,"tx_data", false,-1, 31,0);
    tracep->declBus(c+52,"clk_count", false,-1, 31,0);
    tracep->declBus(c+142,"repeat_cnt", false,-1, 7,0);
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
    bufp->fullIData(oldp+1,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta),32);
    bufp->fullIData(oldp+2,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__delta),32);
    bufp->fullCData(oldp+3,((0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                      >> 0x17U))),8);
    bufp->fullCData(oldp+4,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E),8);
    bufp->fullCData(oldp+5,((0xffU & (- (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                         >> 0x17U)))),8);
    bufp->fullCData(oldp+6,((0xffU & ((0U < (0xffU 
                                             & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                >> 0x17U)))
                                       ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                          >> 0x17U)
                                       : (- (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                             >> 0x17U))))),8);
    bufp->fullCData(oldp+7,((0xffU & (((0U < (0xffU 
                                              & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                 >> 0x17U)))
                                        ? (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                           >> 0x17U)
                                        : (- (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                              >> 0x17U))) 
                                      - (0U != (0xffU 
                                                & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                   >> 0x17U)))))),8);
    bufp->fullBit(oldp+8,((0U == (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+9,((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                              >> 0x17U)))));
    bufp->fullBit(oldp+10,((0U < (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+11,((0U >= (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+12,((vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                            >> 0x1fU)));
    bufp->fullIData(oldp+13,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta)),23);
    bufp->fullIData(oldp+14,((((0U != (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))),24);
    bufp->fullIData(oldp+15,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta)),24);
    bufp->fullIData(oldp+16,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1),24);
    bufp->fullBit(oldp+17,((0U < (0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))));
    bufp->fullBit(oldp+18,((0U == (0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))));
    bufp->fullIData(oldp+19,((((0U < (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                               >> 0x17U))) 
                               | ((0U >= (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                   >> 0x17U))) 
                                  & (0U < (0x7fffffU 
                                           & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))))
                               ? 0U : vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1)),24);
    bufp->fullIData(oldp+20,((((0U < (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                               >> 0x17U))) 
                               | ((0U >= (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                   >> 0x17U))) 
                                  & (0U < (0x7fffffU 
                                           & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))))
                               ? vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Denorm1
                               : 0U)),24);
    bufp->fullIData(oldp+21,(((0xffU == (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                  >> 0x17U)))
                               ? 0xffffffU : (((0U 
                                                < (0xffU 
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
    bufp->fullIData(oldp+22,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3),24);
    bufp->fullIData(oldp+23,((0xffffffU & ((vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                            >> 0x1fU)
                                            ? (~ vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3)
                                            : vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
    bufp->fullIData(oldp+24,((0xffffffU & ((vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                            >> 0x1fU) 
                                           + ((vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                               >> 0x1fU)
                                               ? (~ vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3)
                                               : vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__small_E_Mantissa3)))),24);
    bufp->fullIData(oldp+25,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa),25);
    bufp->fullCData(oldp+26,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position),8);
    bufp->fullBit(oldp+27,((1U & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x18U))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x17U))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x16U))));
    bufp->fullIData(oldp+30,((0x1ffffffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                            >> 1U))),25);
    bufp->fullIData(oldp+31,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
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
    bufp->fullIData(oldp+32,((0x1ffffffU & (((0x18U 
                                              >= (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
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
                                            >> 1U))),25);
    bufp->fullIData(oldp+33,((0x7fffffU & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa)),23);
    bufp->fullIData(oldp+34,((0x7fffffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                           >> 1U))),23);
    bufp->fullIData(oldp+35,(((0x18U >= (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                          < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                          ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                          : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position)))
                               ? (0x7fffffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__added_Mantissa 
                                               << (
                                                   ((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                                                    < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                                                    : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))))
                               : 0U)),23);
    bufp->fullIData(oldp+36,((0x7fffffU & (((0x18U 
                                             >= (((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
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
    bufp->fullCData(oldp+37,((((IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E) 
                               < (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))
                               ? (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__Larger_E)
                               : (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__leading_1_position))),8);
    bufp->fullIData(oldp+38,(((0x17U >= (0xffU & ((
                                                   ((0U 
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
                                                  - (IData)(1U))))
                               ? (0xffffffU & ((IData)(1U) 
                                               << (0xffU 
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
    bufp->fullBit(oldp+39,((((0U < (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                             >> 0x17U))) 
                             | ((0U >= (0xffU & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                                 >> 0x17U))) 
                                & (0U < (0x7fffffU 
                                         & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta)))) 
                            & (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                               >> 0x1fU))));
    bufp->fullCData(oldp+40,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent),8);
    bufp->fullIData(oldp+41,((0x7fffffU & ((((~ (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
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
                                                : (
                                                   ((IData)(
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
    bufp->fullCData(oldp+42,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+43,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullBit(oldp+44,((IData)(((0x7f800000U == 
                                     (0x7f800000U & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta))))));
    bufp->fullBit(oldp+45,(((~ (vlSelf->FP32_MAC_Combinatorial_Tx__DOT__middle_delta 
                                >> 0x1fU)) & (0xffU 
                                              == (IData)(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__final_exponent)))));
    bufp->fullCData(oldp+46,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+47,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullBit(oldp+48,(vlSelf->clk_i));
    bufp->fullBit(oldp+49,(vlSelf->delta_serial));
    bufp->fullIData(oldp+50,(vlSelf->delta_output),32);
    bufp->fullCData(oldp+51,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__tx_state),8);
    bufp->fullIData(oldp+52,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_UART_Tx__DOT__clk_count),32);
    bufp->fullIData(oldp+53,(0xbf000000U),32);
    bufp->fullIData(oldp+54,(0x3f400000U),32);
    bufp->fullIData(oldp+55,(0U),32);
    bufp->fullCData(oldp+56,(0U),8);
    bufp->fullBit(oldp+57,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__EA_minus_EB_Carry));
    bufp->fullBit(oldp+58,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__EB_minus_EA_Carry));
    bufp->fullSData(oldp+59,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__EA_plus_EB),9);
    bufp->fullSData(oldp+60,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__EA_plus_EB_minus_254),9);
    bufp->fullBit(oldp+61,(1U));
    bufp->fullBit(oldp+62,(0U));
    bufp->fullIData(oldp+63,(0U),23);
    bufp->fullIData(oldp+64,(0U),24);
    bufp->fullBit(oldp+65,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__G));
    bufp->fullBit(oldp+66,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__R));
    bufp->fullBit(oldp+67,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Adder__DOT__S));
    bufp->fullCData(oldp+68,(0x7eU),8);
    bufp->fullSData(oldp+69,(0xfcU),9);
    bufp->fullSData(oldp+70,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254),9);
    bufp->fullIData(oldp+71,(0x400000U),23);
    bufp->fullIData(oldp+72,(0x800000U),24);
    bufp->fullIData(oldp+73,(0xc00000U),24);
    bufp->fullIData(oldp+74,(0x400000U),24);
    bufp->fullQData(oldp+75,(0x600000000000ULL),48);
    bufp->fullCData(oldp+77,(0x2eU),8);
    bufp->fullCData(oldp+78,(0x84U),8);
    bufp->fullCData(oldp+79,(0x7cU),8);
    bufp->fullSData(oldp+80,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__E),9);
    bufp->fullSData(oldp+81,(vlSelf->FP32_MAC_Combinatorial_Tx__DOT__My_Multiplier__DOT__Exp),9);
    bufp->fullQData(oldp+82,(0x300000000000ULL),48);
    bufp->fullQData(oldp+84,(0ULL),48);
    bufp->fullCData(oldp+86,(0x7dU),8);
    bufp->fullCData(oldp+87,(1U),8);
    bufp->fullQData(oldp+88,(0x200000000000ULL),48);
    bufp->fullQData(oldp+90,(0x400000ULL),48);
    bufp->fullQData(oldp+92,(0x400001ULL),48);
    bufp->fullQData(oldp+94,(0x200000ULL),48);
    bufp->fullSData(oldp+96,(0x7eU),9);
    bufp->fullIData(oldp+97,(0x1c200U),32);
    bufp->fullIData(oldp+98,(0U),32);
    bufp->fullIData(oldp+99,(1U),32);
    bufp->fullIData(oldp+100,(2U),32);
    bufp->fullIData(oldp+101,(3U),32);
    bufp->fullIData(oldp+102,(4U),32);
    bufp->fullIData(oldp+103,(5U),32);
    bufp->fullIData(oldp+104,(6U),32);
    bufp->fullIData(oldp+105,(7U),32);
    bufp->fullIData(oldp+106,(8U),32);
    bufp->fullIData(oldp+107,(9U),32);
    bufp->fullIData(oldp+108,(0xaU),32);
    bufp->fullIData(oldp+109,(0xbU),32);
    bufp->fullIData(oldp+110,(0xcU),32);
    bufp->fullIData(oldp+111,(0xdU),32);
    bufp->fullIData(oldp+112,(0xeU),32);
    bufp->fullIData(oldp+113,(0xfU),32);
    bufp->fullIData(oldp+114,(0x10U),32);
    bufp->fullIData(oldp+115,(0x11U),32);
    bufp->fullIData(oldp+116,(0x12U),32);
    bufp->fullIData(oldp+117,(0x13U),32);
    bufp->fullIData(oldp+118,(0x14U),32);
    bufp->fullIData(oldp+119,(0x15U),32);
    bufp->fullIData(oldp+120,(0x16U),32);
    bufp->fullIData(oldp+121,(0x17U),32);
    bufp->fullIData(oldp+122,(0x18U),32);
    bufp->fullIData(oldp+123,(0x19U),32);
    bufp->fullIData(oldp+124,(0x1aU),32);
    bufp->fullIData(oldp+125,(0x1bU),32);
    bufp->fullIData(oldp+126,(0x1cU),32);
    bufp->fullIData(oldp+127,(0x1dU),32);
    bufp->fullIData(oldp+128,(0x1eU),32);
    bufp->fullIData(oldp+129,(0x1fU),32);
    bufp->fullIData(oldp+130,(0x20U),32);
    bufp->fullIData(oldp+131,(0x21U),32);
    bufp->fullIData(oldp+132,(0x22U),32);
    bufp->fullIData(oldp+133,(0x23U),32);
    bufp->fullIData(oldp+134,(0x24U),32);
    bufp->fullIData(oldp+135,(0x25U),32);
    bufp->fullIData(oldp+136,(0x26U),32);
    bufp->fullIData(oldp+137,(0x27U),32);
    bufp->fullIData(oldp+138,(0x28U),32);
    bufp->fullIData(oldp+139,(0x29U),32);
    bufp->fullIData(oldp+140,(0x2aU),32);
    bufp->fullIData(oldp+141,(0x2bU),32);
    bufp->fullCData(oldp+142,(5U),8);
}
