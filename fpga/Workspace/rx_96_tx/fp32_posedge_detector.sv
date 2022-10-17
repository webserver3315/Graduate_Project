module posedge_detector // https://www.chipverify.com/verilog/verilog-positive-edge-detector
    (
        input clk,
        input sig,
        output pulse
    );

    reg delayed_sig_inv;
    reg delayed_sig;
    // always @(negedge clk) begin
    always @(posedge clk) begin
        // delayed_sig_inv <= ~sig;
        // delayed_sig <= ~delayed_sig_inv;
        delayed_sig <= sig;
    end

    assign pulse = sig & (~delayed_sig);
endmodule