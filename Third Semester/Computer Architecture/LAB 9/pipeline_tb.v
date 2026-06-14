`timescale 1ns/1ps
`include "pipeline.v"

module pipeline_tb;
    reg clk;
    reg rst;
    reg [7:0] a, b, c, d;
    wire [15:0] result;
    pipeline uut (
        .clk(clk),
        .rst(rst),
        .a(a),
        .b(b),
        .c(c),
        .d(d),
        .result(result)
    );
    always #5 clk = ~clk;
    initial begin
        $dumpfile("pipeline.vcd");
        $dumpvars(0, pipeline_tb);
    end
    initial begin
       
        clk = 0;
        rst = 1;
        a = 0; b = 0; c = 0; d = 0;
        #12 rst = 0;

        // -------- Test Case 1 --------
        // (2+3)*(4+5) = 45
        #10;
        a = 2; b = 3; c = 4; d = 5;

        // Wait for pipeline to produce output
        #20;

        // -------- Test Case 2 --------
        // (5+5)*(1+1) = 20
        a = 5; b = 5; c = 1; d = 1;

        #20;

        // -------- Test Case 3 --------
        // (10+2)*(3+7) = 120
        a = 10; b = 2; c = 3; d = 7;

        #20;

        // -------- Test Case 4 --------
        // (8+8)*(2+2) = 64
        a = 8; b = 8; c = 2; d = 2;

        #30;

        $finish;
    end
    initial begin
        $monitor("Time=%0t | a=%d b=%d c=%d d=%d | result=%d",
                  $time, a, b, c, d, result);
    end

endmodule