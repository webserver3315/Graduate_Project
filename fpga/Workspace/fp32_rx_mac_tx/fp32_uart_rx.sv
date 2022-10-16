module fp32_uart_rx
    (
    input            RSTL_I,
    input            CLK_I,
    input            UART_RX_I,
    input            RX_READY_I,
    output reg       RX_VALID_O,
    output reg [95:0] RX_DATA_O // TYPE "AAAA BBBB CCCC"
    );
    
    localparam IDLE         = 3'b000;
    localparam START = 3'b001;
    localparam DATA = 3'b010;
    localparam STOP  = 3'b011;
    localparam MORE      = 3'b100;
    localparam STOP_FIN = 3'b101;

    reg [31:0] clk_cnt;
    reg [2:0] rx_state;

    // we should receive 4 * 3, total 12 Byte
    // we get 1 Byte per iteration THUS need 12 ITERATION
    // total_index = received_byte * 8 + idx
    reg [6:0] received_byte; // MAX 11
    reg [6:0] received_bit; // MAX 7
    wire [6:0] total_index; // MAX 11*8 + 7 == 95
    assign total_index = received_byte * 8 + received_bit;

    // Purpose: Control RX state machine
    always @(posedge CLK_I or negedge RSTL_I) begin
    if (~RSTL_I) begin
        rx_state       = 3'b000;
        RX_VALID_O      = 1'b1;
        received_byte   = 0;
        received_bit = 0;
    end
    else begin
        case (rx_state)
        IDLE :
            begin
                clk_cnt     = 0;
                received_bit     = 0;
                if (UART_RX_I == 1'b0) begin // UART 가 0이면 즉시 START 로 이동
                    RX_VALID_O = 0;
                    rx_state    = START;
                end
                else begin
                    rx_state = IDLE;
                end
            end

        START :
            begin
                if (clk_cnt == (443 / 2)) begin
                    if (UART_RX_I == 1'b0) begin
                        clk_cnt  = 0;  // START 진입 후 절반시점에, 여전히 UART 가 0이어야 DATA 로 진입
                        rx_state = DATA;
                    end
                    else begin
                        rx_state = IDLE; // ROLLBACK
                    end
                end
                else begin
                    clk_cnt      = clk_cnt + 1;
                    rx_state     = START;
                end
            end
        DATA :
            begin
                if (clk_cnt < 443) begin
                    clk_cnt     = clk_cnt + 1;
                    rx_state    = DATA;
                end
                else begin
                    clk_cnt                 = 0;
                    RX_DATA_O[total_index]  = UART_RX_I;
                    // Check if we have received all bits
                    if (received_bit < 7) begin // bit FULL
                        received_bit    = received_bit + 1;
                        rx_state   = DATA;
                    end
                    else begin // 자릿수 올리기
                        received_bit = 0;
                        if(received_byte < 11) begin
                            received_byte = received_byte + 1;
                            rx_state   = STOP;
                        end
                        else begin
                            received_byte = 0;
                            rx_state   = STOP_FIN;
                        end
                    end
                end
            end // case: DATA

        // Receive Stop bit.  Stop bit = 1
        STOP :
            begin
            if (clk_cnt < 443)
            begin
                clk_cnt      = clk_cnt + 1;
                rx_state     = STOP;
            end
            else
            begin
                clk_cnt          = 0;
                rx_state         = MORE;
            end
            end // case: STOP

        STOP_FIN :
            begin
            if (clk_cnt < 443)
            begin
                clk_cnt      = clk_cnt + 1;
                rx_state     = STOP_FIN;
            end
            else
            begin
                clk_cnt          = 0;
                RX_VALID_O      = 1;
                rx_state         = MORE;
            end
            end // case: STOP
        // Stay here 1 clock
        MORE :
            begin
            rx_state    = IDLE;
            end
        default :
            begin
            rx_state = IDLE;   
            end 
        endcase
    end 
end
endmodule
