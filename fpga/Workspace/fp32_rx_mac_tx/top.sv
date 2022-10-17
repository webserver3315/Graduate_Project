//`timescale 10ns/10ns
//`include "fp32_posedge_detector.sv"
//`include "fp32_uart_rx.sv"
//`include "fp32_multiplier.sv"
//`include "fp32_adder.sv"
//`include "fp32_mac.sv"
//`include "fp32_uart_tx.sv"

module fp32_rx_mac_tx
    (
        input CLK_I,
        input RSTL_I,
        input UART_RX_I,
        output TX_DATA_O
    );
    
    wire rx_valid_o_mac_valid_i;
    wire rx_ready_i_mac_ready_o;
    wire mac_valid_o_tx_valid_i;
    wire mac_ready_i_tx_ready_o;
    reg [95:0] data;
    reg [31:0] result;

    fp32_uart_rx My_UART_Rx
    (
        .RSTL_I(RSTL_I),
        .CLK_I(CLK_I),
        .UART_RX_I(UART_RX_I),
        .RX_READY_I(rx_ready_i_mac_ready_o),
        .RX_VALID_O(rx_valid_o_mac_valid_i),
        .RX_DATA_O(data)
    );

    FP32_MAC_Combinatorial My_MAC
    (
        .RSTL_I(RSTL_I),
        .CLK_I(CLK_I),
        .alpha(data[31:0]),
        .bravo(data[63:32]),
        .acc(data[95:64]),
        .MAC_VALID_I(rx_valid_o_mac_valid_i),
        .MAC_READY_I(mac_ready_i_tx_ready_o),
        .delta(result),
        .MAC_READY_O(rx_ready_i_mac_ready_o),
        .MAC_VALID_O(mac_valid_o_tx_valid_i)
    );

    fp32_uart_tx My_UART_Tx
    (
        .RSTL_I(RSTL_I),
        .CLK_I(CLK_I),
        .TX_VALID_I(mac_valid_o_tx_valid_i),
        .TX_DATA_I(result),
        .TX_DATA_O(TX_DATA_O),
        .TX_READY_O(mac_ready_i_tx_ready_o)
    );

endmodule