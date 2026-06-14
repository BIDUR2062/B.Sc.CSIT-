`include "half_adder.v"
module half_adder_tb;
    reg A;
    reg B;
    wire SUM;
    wire CARRY;

    half_adder uut (
        .A(A),
        .B(B),
        .SUM(SUM),
        .CARRY(CARRY)
    );

    initial begin
    
        $dumpfile("half_adder.vcd");    
        $dumpvars(0, half_adder_tb);    

        A = 0; B = 0; #10;
        A = 0; B = 1; #10;
        A = 1; B = 0; #10;
        A = 1; B = 1; #10;

        $finish; 
    end
endmodule
