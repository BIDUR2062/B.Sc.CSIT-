`include "parity.v"
`timescale 1ns/1ps

module parity_tb;

    reg [3:0] data;
    wire parity;

    parity_generator uut (
        .data(data),
        .parity(parity)
    );

    initial begin
        $dumpfile("parity.vcd");
        $dumpvars(0, parity_tb);
    end

    initial begin
        data = 4'b0000; #10;
        data = 4'b0001; #10;
        data = 4'b0010; #10;
        data = 4'b0011; #10;
        data = 4'b0101; #10;
        data = 4'b0111; #10;
        data = 4'b1111; #10;

        $finish;
    end

    initial begin
        $monitor("Time=%0t Data=%b Parity=%b", $time, data, parity);
    end

endmodule
