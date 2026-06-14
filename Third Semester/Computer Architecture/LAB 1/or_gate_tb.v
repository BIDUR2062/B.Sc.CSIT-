`include "or_gate.v"   // If your file name is orgate.v, change this

module orgate_tb;
    reg a, b;
    wire y;

    // Instantiate module with correct name
    orgate uut(a, b, y);

    initial begin
        $dumpfile("orgate.vcd");
        $dumpvars(0, orgate_tb);

        a = 0; b = 0;
        #10;

        a = 0; b = 1;
        #10;

        a = 1; b = 0;
        #10;

        a = 1; b = 1;
        #10;

        $finish;
    end
endmodule  
