//`timescale 10ns/10ns
//`include "fp32_posedge_detector.sv"
//`include "fp32_uart_rx.sv"
//`include "fp32_multiplier.sv"
//`include "fp32_adder.sv"
//`include "fp32_mac.sv"
//`include "fp32_uart_tx.sv"

module top
    (
        input CLK_I,
        input RSTL_I,
        input UART_RX_I,
        output TX_DATA_O
    );
    localparam MAX_CLK_CNT = 434;


    // wire rx_valid_o_mac_valid_i;
    // wire rx_ready_i_mac_ready_o;
    // wire mac_valid_o_tx_valid_i;
    // wire mac_ready_i_tx_ready_o;
    wire rx_valid_o_tx_valid_i;
    reg [95:0] data;
    reg [31:0] result;

    fp32_uart_rx My_UART_Rx
    (
        .RSTL_I(RSTL_I),
        .CLK_I(CLK_I),
        .UART_RX_I(UART_RX_I),
        .RX_READY_I(1'b1),
        .RX_VALID_O(rx_valid_o_tx_valid_i),
        .RX_DATA_O(data)
    );

    fp32_uart_tx_96 My_UART_Tx_96
    (
        .RSTL_I(RSTL_I),
        .CLK_I(CLK_I),
        .TX_VALID_I(rx_valid_o_tx_valid_i),
        .TX_DATA_I(data),
        .TX_DATA_O(TX_DATA_O),
        .TX_READY_O()
    );

endmodule