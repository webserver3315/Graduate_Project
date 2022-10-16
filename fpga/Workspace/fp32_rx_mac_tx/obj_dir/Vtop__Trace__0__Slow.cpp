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
    tracep->declBit(c+169,"CLK_I", false,-1);
    tracep->declBit(c+170,"RSTL_I", false,-1);
    tracep->declBit(c+171,"UART_RX_I", false,-1);
    tracep->declBit(c+172,"TX_DATA_O", false,-1);
    tracep->pushNamePrefix("fp32_rx_mac_tx ");
    tracep->declBit(c+169,"CLK_I", false,-1);
    tracep->declBit(c+170,"RSTL_I", false,-1);
    tracep->declBit(c+171,"UART_RX_I", false,-1);
    tracep->declBit(c+172,"TX_DATA_O", false,-1);
    tracep->declBit(c+1,"rx_valid_o_mac_valid_i", false,-1);
    tracep->declBit(c+174,"rx_ready_i_mac_ready_o", false,-1);
    tracep->declBit(c+2,"mac_valid_o_tx_valid_i", false,-1);
    tracep->declBit(c+175,"mac_ready_i_tx_ready_o", false,-1);
    tracep->declArray(c+3,"data", false,-1, 95,0);
    tracep->declBus(c+173,"result", false,-1, 31,0);
    tracep->pushNamePrefix("My_MAC ");
    tracep->declBit(c+170,"RSTL_I", false,-1);
    tracep->declBit(c+169,"CLK_I", false,-1);
    tracep->declBus(c+6,"alpha", false,-1, 31,0);
    tracep->declBus(c+7,"bravo", false,-1, 31,0);
    tracep->declBus(c+8,"acc", false,-1, 31,0);
    tracep->declBit(c+1,"MAC_VALID_I", false,-1);
    tracep->declBit(c+175,"MAC_READY_I", false,-1);
    tracep->declBus(c+173,"delta", false,-1, 31,0);
    tracep->declBit(c+174,"MAC_READY_O", false,-1);
    tracep->declBit(c+2,"MAC_VALID_O", false,-1);
    tracep->declBus(c+176,"IDLE", false,-1, 31,0);
    tracep->declBus(c+177,"CALC", false,-1, 31,0);
    tracep->declBus(c+21,"alpha_internal", false,-1, 31,0);
    tracep->declBus(c+22,"bravo_internal", false,-1, 31,0);
    tracep->declBus(c+23,"acc_internal", false,-1, 31,0);
    tracep->declBus(c+24,"middle_output", false,-1, 31,0);
    tracep->declBus(c+25,"delta_internal", false,-1, 31,0);
    tracep->declBus(c+9,"mac_state", false,-1, 3,0);
    tracep->declBus(c+10,"clk_cnt", false,-1, 31,0);
    tracep->pushNamePrefix("My_Adder ");
    tracep->declBus(c+24,"alpha", false,-1, 31,0);
    tracep->declBus(c+23,"bravo", false,-1, 31,0);
    tracep->declBus(c+25,"delta", false,-1, 31,0);
    tracep->declBus(c+26,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+27,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+26,"EA", false,-1, 7,0);
    tracep->declBus(c+27,"EB", false,-1, 7,0);
    tracep->declBus(c+28,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+29,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+30,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+31,"Valid_Minus", false,-1, 7,0);
    tracep->declBus(c+32,"Right_Shift", false,-1, 7,0);
    tracep->declBit(c+178,"EA_minus_EB_Carry", false,-1);
    tracep->declBit(c+179,"EB_minus_EA_Carry", false,-1);
    tracep->declBus(c+180,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+181,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+33,"EA0", false,-1);
    tracep->declBit(c+34,"EB0", false,-1);
    tracep->declBit(c+35,"EA1", false,-1);
    tracep->declBit(c+36,"EB1", false,-1);
    tracep->declBit(c+37,"E_LeftBig", false,-1);
    tracep->declBit(c+38,"E_RightBig", false,-1);
    tracep->declBit(c+39,"E_Equal", false,-1);
    tracep->declBit(c+40,"SA", false,-1);
    tracep->declBit(c+41,"SB", false,-1);
    tracep->declBus(c+42,"MA", false,-1, 22,0);
    tracep->declBus(c+43,"MB", false,-1, 22,0);
    tracep->declBus(c+44,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+45,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+46,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+47,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+48,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+49,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+50,"M_RightBig", false,-1);
    tracep->declBit(c+51,"M_LeftBig", false,-1);
    tracep->declBit(c+52,"M_Equal", false,-1);
    tracep->declBit(c+53,"MA0", false,-1);
    tracep->declBit(c+54,"MB0", false,-1);
    tracep->declBus(c+55,"small_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+56,"large_E_Mantissa", false,-1, 23,0);
    tracep->declBus(c+57,"small_E_Mantissa2", false,-1, 23,0);
    tracep->declBus(c+58,"small_E_Mantissa3", false,-1, 23,0);
    tracep->declBus(c+59,"small_E_Mantissa4", false,-1, 23,0);
    tracep->declBus(c+60,"small_E_mantissa5", false,-1, 23,0);
    tracep->declBus(c+61,"added_Mantissa", false,-1, 24,0);
    tracep->declBus(c+62,"leading_1_position", false,-1, 7,0);
    tracep->declBit(c+63,"mantissa_24th", false,-1);
    tracep->declBit(c+64,"mantissa_23rd", false,-1);
    tracep->declBit(c+65,"mantissa_22nd", false,-1);
    tracep->declBus(c+61,"adder_output", false,-1, 24,0);
    tracep->declBus(c+66,"right_frac_tmp", false,-1, 24,0);
    tracep->declBus(c+67,"lefted_frac", false,-1, 24,0);
    tracep->declBus(c+68,"lefted_frac_righted", false,-1, 24,0);
    tracep->declBus(c+69,"frac", false,-1, 22,0);
    tracep->declBus(c+70,"righted_frac", false,-1, 22,0);
    tracep->declBus(c+71,"lefted_frac_truncated", false,-1, 22,0);
    tracep->declBus(c+72,"lefted_frac_righted_truncated", false,-1, 22,0);
    tracep->declBus(c+73,"left_shifting", false,-1, 7,0);
    tracep->declBit(c+182,"G", false,-1);
    tracep->declBit(c+183,"R", false,-1);
    tracep->declBit(c+184,"S", false,-1);
    tracep->declBus(c+74,"R_mask", false,-1, 23,0);
    tracep->declBit(c+75,"final_sign", false,-1);
    tracep->declBus(c+76,"final_exponent", false,-1, 7,0);
    tracep->declBus(c+77,"final_mantissa", false,-1, 22,0);
    tracep->declBus(c+78,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+79,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBit(c+80,"NAN", false,-1);
    tracep->declBit(c+81,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_23bit_1 ");
    tracep->declBus(c+61,"tmp", false,-1, 24,0);
    tracep->declBus(c+62,"ret", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("My_Multiplier ");
    tracep->declBus(c+21,"alpha", false,-1, 31,0);
    tracep->declBus(c+22,"bravo", false,-1, 31,0);
    tracep->declBus(c+24,"delta", false,-1, 31,0);
    tracep->declBus(c+82,"EA_Original", false,-1, 7,0);
    tracep->declBus(c+83,"EB_Original", false,-1, 7,0);
    tracep->declBus(c+84,"EA", false,-1, 7,0);
    tracep->declBus(c+85,"EB", false,-1, 7,0);
    tracep->declBus(c+86,"Larger_E", false,-1, 7,0);
    tracep->declBus(c+87,"EA_minus_EB", false,-1, 7,0);
    tracep->declBus(c+88,"EB_minus_EA", false,-1, 7,0);
    tracep->declBus(c+89,"Right_Shift", false,-1, 7,0);
    tracep->declBus(c+90,"EA_plus_EB", false,-1, 8,0);
    tracep->declBus(c+185,"EA_plus_EB_minus_254", false,-1, 8,0);
    tracep->declBit(c+91,"EA0", false,-1);
    tracep->declBit(c+92,"EB0", false,-1);
    tracep->declBit(c+93,"EA1", false,-1);
    tracep->declBit(c+94,"EB1", false,-1);
    tracep->declBit(c+95,"E_LeftBig", false,-1);
    tracep->declBit(c+96,"E_RightBig", false,-1);
    tracep->declBit(c+97,"E_Equal", false,-1);
    tracep->declBit(c+98,"SA", false,-1);
    tracep->declBit(c+99,"SB", false,-1);
    tracep->declBit(c+100,"final_sign", false,-1);
    tracep->declBus(c+101,"MA", false,-1, 22,0);
    tracep->declBus(c+102,"MB", false,-1, 22,0);
    tracep->declBus(c+103,"isDenorm1", false,-1, 23,0);
    tracep->declBus(c+104,"isDenorm2", false,-1, 23,0);
    tracep->declBus(c+105,"isDenorm3", false,-1, 23,0);
    tracep->declBus(c+106,"isDenorm4", false,-1, 23,0);
    tracep->declBus(c+107,"Denorm1", false,-1, 23,0);
    tracep->declBus(c+108,"Denorm2", false,-1, 23,0);
    tracep->declBit(c+109,"M_RightBig", false,-1);
    tracep->declBit(c+110,"M_LeftBig", false,-1);
    tracep->declBit(c+111,"M_Equal", false,-1);
    tracep->declBit(c+112,"MA0", false,-1);
    tracep->declBit(c+113,"MB0", false,-1);
    tracep->declQuad(c+114,"M_48_Original", false,-1, 47,0);
    tracep->declBus(c+116,"leading_1_position", false,-1, 7,0);
    tracep->declBus(c+117,"Until_46th", false,-1, 7,0);
    tracep->declBus(c+118,"Until_126", false,-1, 7,0);
    tracep->declBus(c+119,"Maximum_Exp_Cost", false,-1, 7,0);
    tracep->declBus(c+186,"E", false,-1, 8,0);
    tracep->declBus(c+187,"Exp", false,-1, 8,0);
    tracep->declBit(c+120,"Until_126_Carry", false,-1);
    tracep->declBit(c+121,"Maximum_Exp_Cost_Carry", false,-1);
    tracep->declQuad(c+114,"Man1", false,-1, 47,0);
    tracep->declQuad(c+122,"Man2", false,-1, 47,0);
    tracep->declQuad(c+124,"Man3", false,-1, 47,0);
    tracep->declQuad(c+126,"Man4", false,-1, 47,0);
    tracep->declQuad(c+128,"Man5_tmp", false,-1, 47,0);
    tracep->declQuad(c+130,"Man5_cei", false,-1, 47,0);
    tracep->declQuad(c+132,"Man5_ce", false,-1, 47,0);
    tracep->declQuad(c+134,"Man5", false,-1, 47,0);
    tracep->declQuad(c+136,"Man3_tmp", false,-1, 47,0);
    tracep->declBus(c+138,"Exp1", false,-1, 7,0);
    tracep->declBus(c+139,"Exp2", false,-1, 7,0);
    tracep->declBus(c+188,"Exp3", false,-1, 7,0);
    tracep->declBus(c+189,"Exp4", false,-1, 7,0);
    tracep->declBus(c+140,"Exp5", false,-1, 7,0);
    tracep->declQuad(c+141,"final_Man", false,-1, 47,0);
    tracep->declBus(c+143,"final_Exp", false,-1, 7,0);
    tracep->declBit(c+144,"final_Exp_Carry", false,-1);
    tracep->declBit(c+145,"Exp1_C", false,-1);
    tracep->declBit(c+146,"Exp2_C", false,-1);
    tracep->declBit(c+190,"Exp3_C", false,-1);
    tracep->declBit(c+190,"Exp4_C", false,-1);
    tracep->declBit(c+147,"Exp5_C", false,-1);
    tracep->declBus(c+148,"DEBUG_FINAL_MAN", false,-1, 7,0);
    tracep->declBus(c+149,"DEBUG_FINAL_EXP", false,-1, 7,0);
    tracep->declBit(c+150,"FINAL_ELB", false,-1);
    tracep->declBit(c+151,"FINAL_ERB", false,-1);
    tracep->declBit(c+152,"FINAL_EEQ", false,-1);
    tracep->declQuad(c+153,"M_48_46th_Hidden", false,-1, 47,0);
    tracep->declQuad(c+155,"M_48_46th_Hidden_RSh23", false,-1, 47,0);
    tracep->declQuad(c+157,"M_48_46th_Hidden_RSh23_plus_1", false,-1, 47,0);
    tracep->declQuad(c+159,"M_48_46th_Hidden_RSh23_plus_1_RSh1", false,-1, 47,0);
    tracep->declBit(c+161,"G", false,-1);
    tracep->declBit(c+162,"R", false,-1);
    tracep->declBit(c+163,"S", false,-1);
    tracep->declBus(c+164,"final_Exp_plus1", false,-1, 8,0);
    tracep->declBus(c+165,"delta_mantissa", false,-1, 22,0);
    tracep->declBus(c+166,"delta_exp", false,-1, 7,0);
    tracep->declBit(c+167,"NAN", false,-1);
    tracep->declBit(c+168,"OVFL", false,-1);
    tracep->pushNamePrefix("leading_1_detector_48bit_1 ");
    tracep->declQuad(c+114,"tmp", false,-1, 47,0);
    tracep->declBus(c+116,"ret", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("My_UART_Rx ");
    tracep->declBit(c+170,"RSTL_I", false,-1);
    tracep->declBit(c+169,"CLK_I", false,-1);
    tracep->declBit(c+171,"UART_RX_I", false,-1);
    tracep->declBit(c+174,"RX_READY_I", false,-1);
    tracep->declBit(c+1,"RX_VALID_O", false,-1);
    tracep->declArray(c+3,"RX_DATA_O", false,-1, 95,0);
    tracep->declBus(c+191,"IDLE", false,-1, 2,0);
    tracep->declBus(c+192,"START", false,-1, 2,0);
    tracep->declBus(c+193,"DATA", false,-1, 2,0);
    tracep->declBus(c+194,"STOP", false,-1, 2,0);
    tracep->declBus(c+195,"MORE", false,-1, 2,0);
    tracep->declBus(c+196,"STOP_FIN", false,-1, 2,0);
    tracep->declBus(c+11,"clk_cnt", false,-1, 31,0);
    tracep->declBus(c+12,"rx_state", false,-1, 2,0);
    tracep->declBus(c+13,"received_byte", false,-1, 6,0);
    tracep->declBus(c+14,"received_bit", false,-1, 6,0);
    tracep->declBus(c+15,"total_index", false,-1, 6,0);
    tracep->declBit(c+16,"DEBUG_CLK", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("My_UART_Tx ");
    tracep->declBit(c+170,"RSTL_I", false,-1);
    tracep->declBit(c+169,"CLK_I", false,-1);
    tracep->declBit(c+2,"TX_VALID_I", false,-1);
    tracep->declBus(c+173,"TX_DATA_I", false,-1, 31,0);
    tracep->declBit(c+172,"TX_DATA_O", false,-1);
    tracep->declBit(c+175,"TX_READY_O", false,-1);
    tracep->declBus(c+197,"BAUD_RATE", false,-1, 31,0);
    tracep->declBus(c+176,"IDLE0_ST", false,-1, 31,0);
    tracep->declBus(c+177,"START0_ST", false,-1, 31,0);
    tracep->declBus(c+198,"D0_ST", false,-1, 31,0);
    tracep->declBus(c+199,"D1_ST", false,-1, 31,0);
    tracep->declBus(c+200,"D2_ST", false,-1, 31,0);
    tracep->declBus(c+201,"D3_ST", false,-1, 31,0);
    tracep->declBus(c+202,"D4_ST", false,-1, 31,0);
    tracep->declBus(c+203,"D5_ST", false,-1, 31,0);
    tracep->declBus(c+204,"D6_ST", false,-1, 31,0);
    tracep->declBus(c+205,"D7_ST", false,-1, 31,0);
    tracep->declBus(c+206,"STOP0_ST", false,-1, 31,0);
    tracep->declBus(c+207,"IDLE1_ST", false,-1, 31,0);
    tracep->declBus(c+208,"START1_ST", false,-1, 31,0);
    tracep->declBus(c+209,"D8_ST", false,-1, 31,0);
    tracep->declBus(c+210,"D9_ST", false,-1, 31,0);
    tracep->declBus(c+211,"D10_ST", false,-1, 31,0);
    tracep->declBus(c+212,"D11_ST", false,-1, 31,0);
    tracep->declBus(c+213,"D12_ST", false,-1, 31,0);
    tracep->declBus(c+214,"D13_ST", false,-1, 31,0);
    tracep->declBus(c+215,"D14_ST", false,-1, 31,0);
    tracep->declBus(c+216,"D15_ST", false,-1, 31,0);
    tracep->declBus(c+217,"STOP1_ST", false,-1, 31,0);
    tracep->declBus(c+218,"IDLE2_ST", false,-1, 31,0);
    tracep->declBus(c+219,"START2_ST", false,-1, 31,0);
    tracep->declBus(c+220,"D16_ST", false,-1, 31,0);
    tracep->declBus(c+221,"D17_ST", false,-1, 31,0);
    tracep->declBus(c+222,"D18_ST", false,-1, 31,0);
    tracep->declBus(c+223,"D19_ST", false,-1, 31,0);
    tracep->declBus(c+224,"D20_ST", false,-1, 31,0);
    tracep->declBus(c+225,"D21_ST", false,-1, 31,0);
    tracep->declBus(c+226,"D22_ST", false,-1, 31,0);
    tracep->declBus(c+227,"D23_ST", false,-1, 31,0);
    tracep->declBus(c+228,"STOP2_ST", false,-1, 31,0);
    tracep->declBus(c+229,"IDLE3_ST", false,-1, 31,0);
    tracep->declBus(c+230,"START3_ST", false,-1, 31,0);
    tracep->declBus(c+231,"D24_ST", false,-1, 31,0);
    tracep->declBus(c+232,"D25_ST", false,-1, 31,0);
    tracep->declBus(c+233,"D26_ST", false,-1, 31,0);
    tracep->declBus(c+234,"D27_ST", false,-1, 31,0);
    tracep->declBus(c+235,"D28_ST", false,-1, 31,0);
    tracep->declBus(c+236,"D29_ST", false,-1, 31,0);
    tracep->declBus(c+237,"D30_ST", false,-1, 31,0);
    tracep->declBus(c+238,"D31_ST", false,-1, 31,0);
    tracep->declBus(c+239,"STOP3_ST", false,-1, 31,0);
    tracep->declBus(c+17,"tx_state", false,-1, 7,0);
    tracep->declBus(c+18,"tx_data", false,-1, 31,0);
    tracep->declBus(c+19,"clk_cnt", false,-1, 31,0);
    tracep->declBit(c+20,"tx_valid_before", false,-1);
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
    bufp->fullBit(oldp+1,(vlSelf->fp32_rx_mac_tx__DOT__rx_valid_o_mac_valid_i));
    bufp->fullBit(oldp+2,(vlSelf->fp32_rx_mac_tx__DOT__mac_valid_o_tx_valid_i));
    bufp->fullWData(oldp+3,(vlSelf->fp32_rx_mac_tx__DOT__data),96);
    bufp->fullIData(oldp+6,(vlSelf->fp32_rx_mac_tx__DOT__data[0U]),32);
    bufp->fullIData(oldp+7,(vlSelf->fp32_rx_mac_tx__DOT__data[1U]),32);
    bufp->fullIData(oldp+8,(vlSelf->fp32_rx_mac_tx__DOT__data[2U]),32);
    bufp->fullCData(oldp+9,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__mac_state),4);
    bufp->fullIData(oldp+10,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__clk_cnt),32);
    bufp->fullIData(oldp+11,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__clk_cnt),32);
    bufp->fullCData(oldp+12,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__rx_state),3);
    bufp->fullCData(oldp+13,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_byte),7);
    bufp->fullCData(oldp+14,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__received_bit),7);
    bufp->fullCData(oldp+15,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__total_index),7);
    bufp->fullBit(oldp+16,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Rx__DOT__DEBUG_CLK));
    bufp->fullCData(oldp+17,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_state),8);
    bufp->fullIData(oldp+18,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_data),32);
    bufp->fullIData(oldp+19,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__clk_cnt),32);
    bufp->fullBit(oldp+20,(vlSelf->fp32_rx_mac_tx__DOT__My_UART_Tx__DOT__tx_valid_before));
    bufp->fullIData(oldp+21,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal),32);
    bufp->fullIData(oldp+22,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal),32);
    bufp->fullIData(oldp+23,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal),32);
    bufp->fullIData(oldp+24,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output),32);
    bufp->fullIData(oldp+25,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__delta_internal),32);
    bufp->fullCData(oldp+26,((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+27,((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+28,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E),8);
    bufp->fullCData(oldp+29,((0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                        >> 0x17U) - 
                                       (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+30,((0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                        >> 0x17U) - 
                                       (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+31,((0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                        ? ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                            >> 0x17U) 
                                           - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                              >> 0x17U))
                                        : ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                            >> 0x17U) 
                                           - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                              >> 0x17U))))),8);
    bufp->fullCData(oldp+32,((0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                         ? ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                             >> 0x17U) 
                                            - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                               >> 0x17U))
                                         : ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                             >> 0x17U) 
                                            - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                               >> 0x17U))) 
                                       - ((0U == (0xffU 
                                                  & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                     >> 0x17U))) 
                                          ^ (0U == 
                                             (0xffU 
                                              & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                 >> 0x17U))))))),8);
    bufp->fullBit(oldp+33,((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+34,((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+35,((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+36,((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+37,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig));
    bufp->fullBit(oldp+38,(((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+39,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_Equal));
    bufp->fullBit(oldp+40,((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                            >> 0x1fU)));
    bufp->fullBit(oldp+41,((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                            >> 0x1fU)));
    bufp->fullIData(oldp+42,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)),23);
    bufp->fullIData(oldp+43,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)),23);
    bufp->fullIData(oldp+44,((((0U != (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output))),24);
    bufp->fullIData(oldp+45,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)),24);
    bufp->fullIData(oldp+46,((((0U != (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                >> 0x17U))) 
                               << 0x17U) | (0x7fffffU 
                                            & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))),24);
    bufp->fullIData(oldp+47,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)),24);
    bufp->fullIData(oldp+48,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm1),24);
    bufp->fullIData(oldp+49,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Denorm2),24);
    bufp->fullBit(oldp+50,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output) 
                            < (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))));
    bufp->fullBit(oldp+51,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__M_LeftBig));
    bufp->fullBit(oldp+52,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output) 
                            == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))));
    bufp->fullBit(oldp+53,((0U == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output))));
    bufp->fullBit(oldp+54,((0U == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal))));
    bufp->fullIData(oldp+55,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa),24);
    bufp->fullIData(oldp+56,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__large_E_Mantissa),24);
    bufp->fullIData(oldp+57,((((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                   >> 0x17U))) 
                               | (0xffU == (0xffU & 
                                            (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                             >> 0x17U))))
                               ? 0xffffffU : vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa)),24);
    bufp->fullIData(oldp+58,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3),24);
    bufp->fullIData(oldp+59,((0xffffffU & (((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                             ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal) 
                                            >> 0x1fU)
                                            ? (~ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3)
                                            : vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3))),24);
    bufp->fullIData(oldp+60,((0xffffffU & (((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                             ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal) 
                                            >> 0x1fU) 
                                           + (((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal) 
                                               >> 0x1fU)
                                               ? (~ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3)
                                               : vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__small_E_Mantissa3)))),24);
    bufp->fullIData(oldp+61,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa),25);
    bufp->fullCData(oldp+62,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position),8);
    bufp->fullBit(oldp+63,((1U & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x18U))));
    bufp->fullBit(oldp+64,((1U & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x17U))));
    bufp->fullBit(oldp+65,((1U & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                  >> 0x16U))));
    bufp->fullIData(oldp+66,((0x1ffffffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                            >> 1U))),25);
    bufp->fullIData(oldp+67,(((0x18U >= (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                          < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                          ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                          : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                               ? (0x1ffffffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                << 
                                                (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                  < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                  ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                  : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                               : 0U)),25);
    bufp->fullIData(oldp+68,((0x1ffffffU & (((0x18U 
                                              >= (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                   < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                   ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                   : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                              ? (0x1ffffffU 
                                                 & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                    << 
                                                    (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                      < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                      ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                      : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                              : 0U) 
                                            >> 1U))),25);
    bufp->fullIData(oldp+69,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)),23);
    bufp->fullIData(oldp+70,((0x7fffffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                           >> 1U))),23);
    bufp->fullIData(oldp+71,(((0x18U >= (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                          < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                          ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                          : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                               ? (0x7fffffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                               << (
                                                   ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                    < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                    ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                    : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                               : 0U)),23);
    bufp->fullIData(oldp+72,((0x7fffffU & (((0x18U 
                                             >= (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                  < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                  ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                  : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                             ? (0x1ffffffU 
                                                & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                   << 
                                                   (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                     < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                     ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                     : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                             : 0U) 
                                           >> 1U))),23);
    bufp->fullCData(oldp+73,((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                               < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                               ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                               : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))),8);
    bufp->fullIData(oldp+74,(((0x17U >= (0xffU & ((
                                                   ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                                     ? 
                                                    ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                      >> 0x17U) 
                                                     - 
                                                     (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                      >> 0x17U))
                                                     : 
                                                    ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                      >> 0x17U) 
                                                     - 
                                                     (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                      >> 0x17U))) 
                                                   - 
                                                   ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                         >> 0x17U))) 
                                                    ^ 
                                                    (0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                         >> 0x17U))))) 
                                                  - (IData)(1U))))
                               ? (0xffffffU & ((IData)(1U) 
                                               << (0xffU 
                                                   & ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig)
                                                         ? 
                                                        ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                          >> 0x17U) 
                                                         - 
                                                         (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                          >> 0x17U))
                                                         : 
                                                        ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                          >> 0x17U) 
                                                         - 
                                                         (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                          >> 0x17U))) 
                                                       - 
                                                       ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                                             >> 0x17U))) 
                                                        ^ 
                                                        (0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                             >> 0x17U))))) 
                                                      - (IData)(1U)))))
                               : 0U)),24);
    bufp->fullBit(oldp+75,((1U & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_LeftBig) 
                                   | ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__E_Equal) 
                                      & (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__M_LeftBig)))
                                   ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                      >> 0x1fU) : (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                   >> 0x1fU)))));
    bufp->fullCData(oldp+76,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent),8);
    bufp->fullIData(oldp+77,((0x7fffffU & (((((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                                               >> 0x1fU) 
                                              == (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                                  >> 0x1fU)) 
                                             & (0U 
                                                != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent))) 
                                            & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                               >> 0x18U))
                                            ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                               >> 1U)
                                            : ((0x800000U 
                                                & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa)
                                                ? vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x1800000U 
                                                              & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa))) 
                                                    & (0U 
                                                       == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))
                                                    ? 
                                                   ((0x18U 
                                                     >= 
                                                     (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                       < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                       ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                       : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                                     ? 
                                                    (0x1ffffffU 
                                                     & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                        << 
                                                        (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                          < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                          ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                          : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                                     : 0U)
                                                    : 
                                                   (((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800000U 
                                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))
                                                     ? 
                                                    ((0x18U 
                                                      >= 
                                                      (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                        < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                        ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                        : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position)))
                                                      ? 
                                                     (0x1ffffffU 
                                                      & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__added_Mantissa 
                                                         << 
                                                         (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E) 
                                                           < (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))
                                                           ? (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__Larger_E)
                                                           : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__leading_1_position))))
                                                      : 0U)
                                                     : 0U)))))),23);
    bufp->fullCData(oldp+78,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+79,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullBit(oldp+80,(((IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output)))) 
                            | (IData)(((0x7f800000U 
                                        == (0x7f800000U 
                                            & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)) 
                                       & (0U != (0x7fffffU 
                                                 & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal)))))));
    bufp->fullBit(oldp+81,((((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__middle_output 
                              >> 0x1fU) == (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__acc_internal 
                                            >> 0x1fU)) 
                            & (0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__final_exponent)))));
    bufp->fullCData(oldp+82,((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+83,((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+84,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA),8);
    bufp->fullCData(oldp+85,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EB),8);
    bufp->fullCData(oldp+86,((0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig)
                                        ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                           >> 0x17U)
                                        : (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                           >> 0x17U)))),8);
    bufp->fullCData(oldp+87,((0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                        >> 0x17U) - 
                                       (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+88,((0xffU & ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                        >> 0x17U) - 
                                       (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                        >> 0x17U)))),8);
    bufp->fullCData(oldp+89,((0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig)
                                         ? ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                             >> 0x17U) 
                                            - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                               >> 0x17U))
                                         : ((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                             >> 0x17U) 
                                            - (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                               >> 0x17U))) 
                                       - ((0U == (0xffU 
                                                  & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                     >> 0x17U))) 
                                          ^ (0U == 
                                             (0xffU 
                                              & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                 >> 0x17U))))))),8);
    bufp->fullSData(oldp+90,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB),9);
    bufp->fullBit(oldp+91,((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+92,((0U == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+93,((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+94,((0xffU == (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                               >> 0x17U)))));
    bufp->fullBit(oldp+95,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig));
    bufp->fullBit(oldp+96,(((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                      >> 0x17U)) < 
                            (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+97,((1U & (~ (((0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                >> 0x17U)) 
                                      < (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                  >> 0x17U))) 
                                     | (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E_LeftBig))))));
    bufp->fullBit(oldp+98,((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                            >> 0x1fU)));
    bufp->fullBit(oldp+99,((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                            >> 0x1fU)));
    bufp->fullBit(oldp+100,(((vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                              ^ vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal) 
                             >> 0x1fU)));
    bufp->fullIData(oldp+101,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)),23);
    bufp->fullIData(oldp+102,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)),23);
    bufp->fullIData(oldp+103,((((0U != (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))),24);
    bufp->fullIData(oldp+104,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)),24);
    bufp->fullIData(oldp+105,((((0U != (0xffU & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                                 >> 0x17U))) 
                                << 0x17U) | (0x7fffffU 
                                             & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))),24);
    bufp->fullIData(oldp+106,((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)),24);
    bufp->fullIData(oldp+107,(((IData)(((0U == (0x7f800000U 
                                                & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))))
                                ? (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)
                                : (((0U != (0xffU & 
                                            (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal 
                                             >> 0x17U))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal)))),24);
    bufp->fullIData(oldp+108,(((IData)(((0U == (0x7f800000U 
                                                & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))))
                                ? (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)
                                : (((0U != (0xffU & 
                                            (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal 
                                             >> 0x17U))) 
                                    << 0x17U) | (0x7fffffU 
                                                 & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal)))),24);
    bufp->fullBit(oldp+109,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal) 
                             < (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))));
    bufp->fullBit(oldp+110,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal) 
                             > (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))));
    bufp->fullBit(oldp+111,(((0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal) 
                             == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))));
    bufp->fullBit(oldp+112,((0U == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))));
    bufp->fullBit(oldp+113,((0U == (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))));
    bufp->fullQData(oldp+114,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original),48);
    bufp->fullCData(oldp+116,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position),8);
    bufp->fullCData(oldp+117,((0xffU & ((IData)(0x2eU) 
                                        - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))),8);
    bufp->fullCData(oldp+118,((0xffU & ((IData)(0x80U) 
                                        + (0x1ffU & 
                                           (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB)))))),8);
    bufp->fullCData(oldp+119,((0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                        - (IData)(0x80U)))),8);
    bufp->fullBit(oldp+120,((1U & (((IData)(0x80U) 
                                    + (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB))) 
                                   >> 8U))));
    bufp->fullBit(oldp+121,((1U & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                    - (IData)(0x80U)) 
                                   >> 8U))));
    bufp->fullQData(oldp+122,((0xffffffffffffULL & 
                               (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                >> 1U))),48);
    bufp->fullQData(oldp+124,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man3),48);
    bufp->fullQData(oldp+126,(((0x2fU >= (0xffU & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))
                                ? (0xffffffffffffULL 
                                   & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                      << (0xffU & ((IData)(0x2eU) 
                                                   - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))))
                                : 0ULL)),48);
    bufp->fullQData(oldp+128,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp),48);
    bufp->fullQData(oldp+130,((((0xffU & ((IData)(0x2eU) 
                                          - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) 
                                >= (0xffU & ((IData)(0x30U) 
                                             + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                - (IData)(0x80U)))))
                                ? 0ULL : ((0x2fU >= 
                                           (0xffU & 
                                            (((IData)(0x2eU) 
                                              - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                             - ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                - (IData)(0x80U)))))
                                           ? (0xffffffffffffULL 
                                              & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                                 >> 
                                                 (0xffU 
                                                  & (((IData)(0x2eU) 
                                                      - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                     - 
                                                     ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                      - (IData)(0x80U))))))
                                           : 0ULL))),48);
    bufp->fullQData(oldp+132,(((0x2fU >= (0x1ffU & 
                                          ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU))))
                                ? (0xffffffffffffULL 
                                   & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                      >> (0x1ffU & 
                                          ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU)))))
                                : 0ULL)),48);
    bufp->fullQData(oldp+134,((0xffffffffffffULL & 
                               (((0xffU & ((IData)(0x2eU) 
                                           - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) 
                                 >= (0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                              - (IData)(0x80U))))
                                 ? (((0xffU & ((IData)(0x2eU) 
                                               - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))) 
                                     >= (0xffU & ((IData)(0x30U) 
                                                  + 
                                                  ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x80U)))))
                                     ? 0ULL : ((0x2fU 
                                                >= 
                                                (0xffU 
                                                 & (((IData)(0x2eU) 
                                                     - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                    - 
                                                    ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x80U)))))
                                                ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                                   >> 
                                                   (0xffU 
                                                    & (((IData)(0x2eU) 
                                                        - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                       - 
                                                       ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                        - (IData)(0x80U)))))
                                                : 0ULL))
                                 : ((0x2fU >= (0x1ffU 
                                               & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                  - (IData)(0x7fU))))
                                     ? (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Man5_tmp 
                                        >> (0x1ffU 
                                            & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                               - (IData)(0x7fU))))
                                     : 0ULL)))),48);
    bufp->fullQData(oldp+136,(((0x2fU >= (0xffU & ((IData)(0x80U) 
                                                   + 
                                                   (0x1ffU 
                                                    & (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB))))))
                                ? (0xffffffffffffULL 
                                   & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__M_48_Original 
                                      >> (0xffU & ((IData)(0x80U) 
                                                   + 
                                                   (0x1ffU 
                                                    & (- (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB)))))))
                                : 0ULL)),48);
    bufp->fullCData(oldp+138,((0xffU & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                        - (IData)(0x7fU)))),8);
    bufp->fullCData(oldp+139,((0xffU & ((IData)(1U) 
                                        + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                           - (IData)(0x7fU))))),8);
    bufp->fullCData(oldp+140,((0xffU & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                         - (IData)(0x7fU)) 
                                        - ((IData)(0x2eU) 
                                           - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))))),8);
    bufp->fullQData(oldp+141,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man),48);
    bufp->fullCData(oldp+143,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp),8);
    bufp->fullBit(oldp+144,((1U & ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB)
                                    ? ((0x2fU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                        ? (1U & (((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU))) 
                                                 >> 8U))
                                        : ((0x2eU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                            ? (1U & 
                                               (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                 - (IData)(0x7fU)) 
                                                >> 8U))
                                            : (1U & 
                                               (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                 > 
                                                 (0x1ffU 
                                                  & ((IData)(0x80U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x2eU) 
                                                         - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))))) 
                                                & ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                     - (IData)(0x7fU)) 
                                                    - 
                                                    (0xffU 
                                                     & ((IData)(0x2eU) 
                                                        - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                                   >> 8U)))))
                                    : ((~ (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB)) 
                                       & ((0x2fU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                           ? (1U & 
                                              (((IData)(1U) 
                                                + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU))) 
                                               >> 8U))
                                           : (IData)(
                                                     ((0x2eU 
                                                       == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                      & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                          - (IData)(0x7fU)) 
                                                         >> 8U)))))))));
    bufp->fullBit(oldp+145,((1U & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                    - (IData)(0x7fU)) 
                                   >> 8U))));
    bufp->fullBit(oldp+146,((1U & (((IData)(1U) + ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                   - (IData)(0x7fU))) 
                                   >> 8U))));
    bufp->fullBit(oldp+147,((1U & ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                     - (IData)(0x7fU)) 
                                    - (0xffU & ((IData)(0x2eU) 
                                                - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                   >> 8U))));
    bufp->fullCData(oldp+148,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_MAN),8);
    bufp->fullCData(oldp+149,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__DEBUG_FINAL_EXP),8);
    bufp->fullBit(oldp+150,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB));
    bufp->fullBit(oldp+151,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB));
    bufp->fullBit(oldp+152,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_EEQ));
    bufp->fullQData(oldp+153,((0x3fffffffffffULL & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man)),48);
    bufp->fullQData(oldp+155,((0x7fffffULL & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                              >> 0x17U))),48);
    bufp->fullQData(oldp+157,((0xffffffffffffULL & 
                               (1ULL + (0x7fffffULL 
                                        & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                           >> 0x17U))))),48);
    bufp->fullQData(oldp+159,((0x7fffffffffffULL & 
                               ((1ULL + (0x7fffffULL 
                                         & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                            >> 0x17U))) 
                                >> 1U))),48);
    bufp->fullBit(oldp+161,((1U & (IData)((0x7fffffULL 
                                           & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                              >> 0x17U))))));
    bufp->fullBit(oldp+162,((1U & (IData)((0xffffffULL 
                                           & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                              >> 0x16U))))));
    bufp->fullBit(oldp+163,((0U != (0x3fffffU & (IData)(
                                                        (0x3fffffffffffULL 
                                                         & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))));
    bufp->fullSData(oldp+164,((0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp)))),9);
    bufp->fullIData(oldp+165,((0x7fffffU & ((((IData)(
                                                      (0xffffffULL 
                                                       & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                          >> 0x16U))) 
                                              & (0U 
                                                 != 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (0x3fffffffffffULL 
                                                             & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))) 
                                             | ((IData)(
                                                        (0x7fffffULL 
                                                         & (0xc00000ULL 
                                                            == 
                                                            (0xc00000ULL 
                                                             & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man)))) 
                                                & (0U 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (0x3fffffffffffULL 
                                                               & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (0x1ffffffULL 
                                                            & ((1ULL 
                                                                + 
                                                                (0x7fffffULL 
                                                                 & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                    >> 0x17U))) 
                                                               >> 0x17U))))
                                                 ? (IData)(
                                                           (0x7fffffffffffULL 
                                                            & ((1ULL 
                                                                + 
                                                                (0x7fffffULL 
                                                                 & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                    >> 0x17U))) 
                                                               >> 1U)))
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(
                                                           (0x7fffffULL 
                                                            & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                               >> 0x17U)))))
                                             : (IData)(
                                                       (0x7fffffULL 
                                                        & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                           >> 0x17U)))))),23);
    bufp->fullCData(oldp+166,((0xffU & ((((IData)((0xffffffULL 
                                                   & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                      >> 0x16U))) 
                                          & (0U != 
                                             (0x3fffffU 
                                              & (IData)(
                                                        (0x3fffffffffffULL 
                                                         & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))) 
                                         | ((IData)(
                                                    (0x7fffffULL 
                                                     & (0xc00000ULL 
                                                        == 
                                                        (0xc00000ULL 
                                                         & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man)))) 
                                            & (0U == 
                                               (0x3fffffU 
                                                & (IData)(
                                                          (0x3fffffffffffULL 
                                                           & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man))))))
                                         ? ((1U & (IData)(
                                                          (0x1ffffffULL 
                                                           & ((1ULL 
                                                               + 
                                                               (0x7fffffULL 
                                                                & (vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Man 
                                                                   >> 0x17U))) 
                                                              >> 0x17U))))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp))
                                             : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp))
                                         : (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp)))),8);
    bufp->fullBit(oldp+167,((((0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA)) 
                              & (0U != (0x7fffffU & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__alpha_internal))) 
                             | ((0xffU == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EB)) 
                                & (0U != (0x7fffffU 
                                          & vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__bravo_internal))))));
    bufp->fullBit(oldp+168,(((0xfeU < ((0x100U & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ELB)
                                                    ? 
                                                   ((0x2fU 
                                                     == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                                     ? 
                                                    (1U 
                                                     & (((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                          - (IData)(0x7fU))) 
                                                        >> 8U))
                                                     : 
                                                    ((0x2eU 
                                                      == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                                      ? 
                                                     (1U 
                                                      & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                          - (IData)(0x7fU)) 
                                                         >> 8U))
                                                      : 
                                                     (1U 
                                                      & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                          > 
                                                          (0x1ffU 
                                                           & ((IData)(0x80U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x2eU) 
                                                                  - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))))) 
                                                         & ((((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                              - (IData)(0x7fU)) 
                                                             - 
                                                             (0xffU 
                                                              & ((IData)(0x2eU) 
                                                                 - (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)))) 
                                                            >> 8U)))))
                                                    : 
                                                   ((~ (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__FINAL_ERB)) 
                                                    & ((0x2fU 
                                                        == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position))
                                                        ? 
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            + 
                                                            ((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                             - (IData)(0x7fU))) 
                                                           >> 8U))
                                                        : (IData)(
                                                                  ((0x2eU 
                                                                    == (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__leading_1_position)) 
                                                                   & (((IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB) 
                                                                       - (IData)(0x7fU)) 
                                                                      >> 8U)))))) 
                                                  << 8U)) 
                                       | (IData)(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__final_Exp)))
                              ? 1U : 0U)));
    bufp->fullBit(oldp+169,(vlSelf->CLK_I));
    bufp->fullBit(oldp+170,(vlSelf->RSTL_I));
    bufp->fullBit(oldp+171,(vlSelf->UART_RX_I));
    bufp->fullBit(oldp+172,(vlSelf->TX_DATA_O));
    bufp->fullIData(oldp+173,(vlSelf->fp32_rx_mac_tx__DOT__result),32);
    bufp->fullBit(oldp+174,(1U));
    bufp->fullBit(oldp+175,(vlSelf->fp32_rx_mac_tx__DOT__mac_ready_i_tx_ready_o));
    bufp->fullIData(oldp+176,(0U),32);
    bufp->fullIData(oldp+177,(1U),32);
    bufp->fullBit(oldp+178,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__EA_minus_EB_Carry));
    bufp->fullBit(oldp+179,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__EB_minus_EA_Carry));
    bufp->fullSData(oldp+180,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__EA_plus_EB),9);
    bufp->fullSData(oldp+181,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__EA_plus_EB_minus_254),9);
    bufp->fullBit(oldp+182,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__G));
    bufp->fullBit(oldp+183,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__R));
    bufp->fullBit(oldp+184,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Adder__DOT__S));
    bufp->fullSData(oldp+185,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__EA_plus_EB_minus_254),9);
    bufp->fullSData(oldp+186,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__E),9);
    bufp->fullSData(oldp+187,(vlSelf->fp32_rx_mac_tx__DOT__My_MAC__DOT__My_Multiplier__DOT__Exp),9);
    bufp->fullCData(oldp+188,(0U),8);
    bufp->fullCData(oldp+189,(1U),8);
    bufp->fullBit(oldp+190,(0U));
    bufp->fullCData(oldp+191,(0U),3);
    bufp->fullCData(oldp+192,(1U),3);
    bufp->fullCData(oldp+193,(2U),3);
    bufp->fullCData(oldp+194,(3U),3);
    bufp->fullCData(oldp+195,(4U),3);
    bufp->fullCData(oldp+196,(5U),3);
    bufp->fullIData(oldp+197,(0x1c200U),32);
    bufp->fullIData(oldp+198,(2U),32);
    bufp->fullIData(oldp+199,(3U),32);
    bufp->fullIData(oldp+200,(4U),32);
    bufp->fullIData(oldp+201,(5U),32);
    bufp->fullIData(oldp+202,(6U),32);
    bufp->fullIData(oldp+203,(7U),32);
    bufp->fullIData(oldp+204,(8U),32);
    bufp->fullIData(oldp+205,(9U),32);
    bufp->fullIData(oldp+206,(0xaU),32);
    bufp->fullIData(oldp+207,(0xbU),32);
    bufp->fullIData(oldp+208,(0xcU),32);
    bufp->fullIData(oldp+209,(0xdU),32);
    bufp->fullIData(oldp+210,(0xeU),32);
    bufp->fullIData(oldp+211,(0xfU),32);
    bufp->fullIData(oldp+212,(0x10U),32);
    bufp->fullIData(oldp+213,(0x11U),32);
    bufp->fullIData(oldp+214,(0x12U),32);
    bufp->fullIData(oldp+215,(0x13U),32);
    bufp->fullIData(oldp+216,(0x14U),32);
    bufp->fullIData(oldp+217,(0x15U),32);
    bufp->fullIData(oldp+218,(0x16U),32);
    bufp->fullIData(oldp+219,(0x17U),32);
    bufp->fullIData(oldp+220,(0x18U),32);
    bufp->fullIData(oldp+221,(0x19U),32);
    bufp->fullIData(oldp+222,(0x1aU),32);
    bufp->fullIData(oldp+223,(0x1bU),32);
    bufp->fullIData(oldp+224,(0x1cU),32);
    bufp->fullIData(oldp+225,(0x1dU),32);
    bufp->fullIData(oldp+226,(0x1eU),32);
    bufp->fullIData(oldp+227,(0x1fU),32);
    bufp->fullIData(oldp+228,(0x20U),32);
    bufp->fullIData(oldp+229,(0x21U),32);
    bufp->fullIData(oldp+230,(0x22U),32);
    bufp->fullIData(oldp+231,(0x23U),32);
    bufp->fullIData(oldp+232,(0x24U),32);
    bufp->fullIData(oldp+233,(0x25U),32);
    bufp->fullIData(oldp+234,(0x26U),32);
    bufp->fullIData(oldp+235,(0x27U),32);
    bufp->fullIData(oldp+236,(0x28U),32);
    bufp->fullIData(oldp+237,(0x29U),32);
    bufp->fullIData(oldp+238,(0x2aU),32);
    bufp->fullIData(oldp+239,(0x2bU),32);
}
