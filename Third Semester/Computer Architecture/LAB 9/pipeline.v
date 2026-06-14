module pipeline(
    input clk,
    input rst,
    input [7:0] a, b, c, d,
    output reg [15:0] result
);
reg [8:0] sum1, sum2;   
reg [15:0] mult;        

always @(posedge clk or posedge rst) begin
    if (rst) begin
        sum1 <= 0;
        sum2 <= 0;
        mult <= 0;
        result <= 0;
    end
    else begin
        sum1 <= a + b;
        sum2 <= c + d;
        mult <= sum1 * sum2;
        result <= mult;
    end
end

endmodule