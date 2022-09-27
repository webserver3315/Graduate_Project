module Sint16_adder
    (
        input clk,
        input rstn,
        input [15:0] data_A,
        input [15:0] data_B,
        output [15:0] data_C,
        output Cout
    );

    reg [16:0] data_OUT;

    assign data_C = data_OUT[15:0];
    assign Cout = data_OUT[16];

    always @(posedge clk, negedge rstn) begin
        if(!rstn) begin
            data_OUT = 17'b0_0000_0000_0000_0000;
        end
        else begin
            data_OUT = (data_A + data_B);
        end
    end

endmodule
