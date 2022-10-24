// `timescale 10ns/10ns
// `define DEBUG_RX

module fp32_uart_rx
    (
    input            RSTL_I,
    input            CLK_I,
    input            UART_RX_I,
    input            RX_READY_I,
    output reg       RX_VALID_O,
    output reg [95:0] RX_DATA_O // TYPE "AAAA BBBB CCCC"
    );

    localparam MAX_CLK_CNT = 434 - 1;

    localparam IDLE         = 0;
    localparam START        = 1;
    localparam DATA         = 2;
    localparam STOP         = 3;
    localparam MORE         = 4;

    localparam ZZIN_STOP         = 5;
    localparam ZZIN_MORE         = 6;
    localparam ZZIN_IDLE         = 7;

    reg [31:0] clk_cnt;
    reg [3:0] rx_state;

    // we should receive 4 * 3, total 12 Byte
    // we get 1 Byte per iteration THUS need 12 ITERATION
    // total_index = received_byte * 8 + idx
    reg [6:0] received_byte; // MAX 11
    reg [6:0] received_bit; // MAX 7
    wire [6:0] total_index; // MAX 11*8 + 7 == 95
    assign total_index = received_byte * 8 + received_bit;

    `ifdef DEBUG_RX
    reg DEBUG_CLK;    
    `endif

    // 문제
    // 1. RSTN 이후, 1회는 반드시 응답을 안함
    // 2. 응답 5회 이후, 1회는 반드시 응답을 안함.
    always @(posedge CLK_I or negedge RSTL_I) begin
    if (~RSTL_I) begin
        rx_state       = IDLE;
        RX_VALID_O      = 0;
        received_byte   = 0;
        received_bit = 0;
        `ifdef DEBUG_RX
        DEBUG_CLK = 0;    
        `endif
    end
    else begin
        case (rx_state)
        IDLE :
            begin
                clk_cnt         <= 0;
                received_bit    <= 0;
                RX_VALID_O      <= 0;
                if (UART_RX_I == 1'b0) begin // UART 가 0이면 즉시 START 로 이동
                    rx_state    <= START;
                end
                else begin
                    rx_state = IDLE;
                end
            end

        START :
            begin
                RX_VALID_O <= 0;
                if (clk_cnt == (MAX_CLK_CNT / 2)) begin
                    if (UART_RX_I == 1'b0) begin
                        clk_cnt     <= 0;  // START 진입 후 절반시점에, 여전히 UART 가 0이어야 DATA 로 진입
                        rx_state    <= DATA;
                        `ifdef DEBUG_RX
                        DEBUG_CLK   <= 1;
                        `endif
                    end
                    else begin
                        rx_state <= IDLE; // ROLLBACK
                    end
                end
                else begin
                    clk_cnt      <= clk_cnt + 1;
                    rx_state     <= START;
                end
            end
        DATA :
            begin
                RX_VALID_O = 0;
                if (clk_cnt == MAX_CLK_CNT) begin
                    `ifdef DEBUG_RX
                    DEBUG_CLK = ~DEBUG_CLK;
                    `endif
                    clk_cnt                 <= 0;
                    RX_DATA_O[total_index]  <= UART_RX_I;
                    // Check if we have received all bits
                    if (received_bit == 7) begin // bit FULL
                        received_bit <= 0;
                        if(received_byte == 11) begin
                            received_byte <= 0;
                            rx_state   <= ZZIN_STOP;
                        end
                        else begin
                            received_byte <= received_byte + 1;
                            rx_state   <= STOP;
                        end
                    end
                    else begin // 자릿수 올리기
                        received_bit    <= received_bit + 1;
                        rx_state   <= DATA;
                    end
                end
                else begin
                    clk_cnt     <= clk_cnt + 1;
                    rx_state    <= DATA;
                end
            end // case: DATA

        // Receive Stop bit.  Stop bit = 1
        STOP :
            begin
            RX_VALID_O <= 0;
            `ifdef DEBUG_RX
            DEBUG_CLK <= 0;
            `endif
            if (clk_cnt == MAX_CLK_CNT)
            begin
                clk_cnt          <= 0;
                rx_state         <= MORE;
            end
            else
            begin
                clk_cnt      <= clk_cnt + 1;
                rx_state     <= STOP;
            end
            end // case: STOP

        // Stay here 1 clock
        MORE :
            begin
                RX_VALID_O <= 0;
                if (clk_cnt == MAX_CLK_CNT)
                begin
                    clk_cnt          <= 0;
                    rx_state         <= IDLE;
                end
                else
                begin
                    clk_cnt      <= clk_cnt + 1;
                    rx_state     <= MORE;
                end
            end


        // Receive Stop bit.  Stop bit <= 1
        ZZIN_STOP :
            begin
            RX_VALID_O <= 0;
            `ifdef DEBUG_RX
            DEBUG_CLK <= 0;
            `endif
            if (clk_cnt == MAX_CLK_CNT)
            begin
                clk_cnt          <= 0;
                rx_state         <= ZZIN_MORE;
            end
            else
            begin
                clk_cnt      <= clk_cnt + 1;
                rx_state     <= ZZIN_STOP;
            end
            end // case: STOP

        // Stay here 1 clock
        ZZIN_MORE :
            begin
            RX_VALID_O <= 1;
                if (clk_cnt == MAX_CLK_CNT)
                begin
                    clk_cnt          <= 0;
                    rx_state         <= ZZIN_IDLE;
                end
                else
                begin
                    clk_cnt      <= clk_cnt + 1;
                    rx_state     <= ZZIN_MORE;
                end
            end

        ZZIN_IDLE :
            begin
                RX_VALID_O <= 1;
                clk_cnt     <= 0;
                received_bit     <= 0;
                if (UART_RX_I == 1'b0) begin // UART 가 0이면 즉시 START 로 이동
                    rx_state    <= START;
                end
                else begin
                    rx_state <= ZZIN_IDLE;
                end
            end


        default :
            begin
            rx_state <= IDLE;   
            end 
        endcase
    end 
end
endmodule
