`include "alu.v"
`timescale 1ns/1ps
module ALU_4bit_tb;
reg [3:0] A, B;
reg [2:0] S;
wire [3:0] F;
wire Cout, Zero;
ALU_4bit uut(
    .A(A),
    .B(B),
    .S(S),
    .F(F),
    .Cout(Cout),
    .Zero(Zero)
);
initial begin
    // VCD file generation
    $dumpfile("alu.vcd");     
    $dumpvars(0, ALU_4bit_tb);
    $display("A B S | F Cout Zero");
    A = 4'b0101; 
    B = 4'b0011;

    S=3'b000; #10; 
    S=3'b001; #10; 
    S=3'b010; #10; 
    S=3'b011; #10; 
    S=3'b100; #10; 
    S=3'b101; #10; 
    S=3'b110; #10; 
    S=3'b111; #10;
    $finish;
end
initial begin
    $monitor("%b %b %b | %b %b %b",A,B,S,F,Cout,Zero);
end
endmodule
