module oneshot(
    input wire clk, in,
    output reg out);
    localparam [1:0] ZERO = 2'b00, ONE = 2'b01, SHOT = 2'b10;
    
    reg [1:0] ps = ZERO, ns = ZERO;
    
    always @ (posedge clk) begin
        if(!in) ps <= ZERO;
        else    ps <= ns;
    end
    
    always @ (ps, in) begin
        out = 1'b0;
        case (ps)
            ZERO:
                if(in) ns = SHOT;
                else ns = ZERO;
            SHOT:
                begin
                    out = 1'b1;
                    if(in) ns = ONE;
                    else ns = ZERO;
                end
            ONE:
                if(in) ns = ONE;
                else ns = ZERO;
            default:
                ns = ZERO;
        endcase
    end

endmodule