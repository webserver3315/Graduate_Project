//////////////////////////////////////////////////////////////////////
// Author:      Russell Merrick
//////////////////////////////////////////////////////////////////////
// Description: This file contains the UART Receiver.  This receiver is 
//              able to receive 8 bits of serial data, one start bit, one 
//              stop bit, and no parity bit.  When receive is complete 
//              RX_VALID_O will be driven high for one clock cycle.
// 
// Parameters:  Set Parameter MAX_CLK_CNT as follows:
//              MAX_CLK_CNT = (Frequency of CLK_I)/(Frequency of UART)
//              Example: 25 MHz Clock, 115200 baud UART
//              (25000000)/(115200) = 217
//////////////////////////////////////////////////////////////////////////////

module fp32_uart_rx
  (
   input            RSTL_I,
   input            CLK_I,
   input            RX_READY_I,
   input            UART_RX_I,
   output reg       RX_VALID_O,        //RX Data Valid for one cycle
   output reg [95:0] RX_DATA_O
   );
   
  localparam IDLE         = 3'b000;
  localparam RX_START_BIT = 3'b001;
  localparam RX_DATA_BITS = 3'b010;
  localparam RX_STOP_BIT  = 3'b011;
  localparam CLEANUP      = 3'b100;
  
    localparam MAX_CLK_CNT = 5208;

  reg [31:0] r_Clock_Count;
  reg [2:0] r_Bit_Index; //8 bits total
  reg [2:0] r_SM_Main;
  
  
  // Purpose: Control RX state machine
  always @(posedge CLK_I or negedge RSTL_I)
  begin
    if (~RSTL_I)
    begin
      r_SM_Main <= 3'b000;
      RX_VALID_O   <= 1'b0;
    end
    else
    begin
      case (r_SM_Main)
      IDLE :
        begin
          RX_VALID_O       <= 1'b0;
          r_Clock_Count <= 0;
          r_Bit_Index   <= 0;
          
          if (UART_RX_I == 1'b0)          // Start bit detected
            r_SM_Main <= RX_START_BIT;
          else
            r_SM_Main <= IDLE;
        end
      
      // Check middle of start bit to make sure it's still low
      RX_START_BIT :
        begin
          if (r_Clock_Count == (MAX_CLK_CNT-1)/2)
          begin
            if (UART_RX_I == 1'b0)
            begin
              r_Clock_Count <= 0;  // reset counter, found the middle
              r_SM_Main     <= RX_DATA_BITS;
            end
            else
              r_SM_Main <= IDLE;
          end
          else
          begin
            r_Clock_Count <= r_Clock_Count + 1;
            r_SM_Main     <= RX_START_BIT;
          end
        end // case: RX_START_BIT
      
      
      // Wait MAX_CLK_CNT-1 clock cycles to sample serial data
      RX_DATA_BITS :
        begin
          if (r_Clock_Count < MAX_CLK_CNT-1)
          begin
            r_Clock_Count <= r_Clock_Count + 1;
            r_SM_Main     <= RX_DATA_BITS;
          end
          else
          begin
            r_Clock_Count          <= 0;
            RX_DATA_O[r_Bit_Index] <= UART_RX_I;
            
            // Check if we have received all bits
            if (r_Bit_Index < 7)
            begin
              r_Bit_Index <= r_Bit_Index + 1;
              r_SM_Main   <= RX_DATA_BITS;
            end
            else
            begin
              r_Bit_Index <= 0;
              r_SM_Main   <= RX_STOP_BIT;
            end
          end
        end // case: RX_DATA_BITS
      
      
      // Receive Stop bit.  Stop bit = 1
      RX_STOP_BIT :
        begin
          // Wait MAX_CLK_CNT-1 clock cycles for Stop bit to finish
          if (r_Clock_Count < MAX_CLK_CNT-1)
          begin
            r_Clock_Count <= r_Clock_Count + 1;
            r_SM_Main     <= RX_STOP_BIT;
          end
          else
          begin
            // RX_VALID_O       <= 1'b1;
            r_Clock_Count <= 0;
            r_SM_Main     <= CLEANUP;
          end
        end // case: RX_STOP_BIT
      
      
      // Stay here 1 clock
      CLEANUP :
        begin
          RX_VALID_O       <= 1'b1;
          r_SM_Main <= IDLE;
        //   RX_VALID_O   <= 1'b0;
        end
      
      
      default :
        r_SM_Main <= IDLE;
      
    endcase
    end // else: !if(~RSTL_I)
  end // always @ (posedge CLK_I or negedge RSTL_I)
  
endmodule // UART_RX