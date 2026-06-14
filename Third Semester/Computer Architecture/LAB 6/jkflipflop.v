module jk_ff(
    output reg q,
    output qb,
    input j,
    input k,
    input clk
);
assign qb = ~q;
always @(posedge clk) begin
    case ({j,k})
        2'b00: q <= q;     // Hold
        2'b01: q <= 1'b0;  // Reset
        2'b10: q <= 1'b1;  // Set
        2'b11: q <= ~q;    // Toggle
    endcase
end

endmodule
