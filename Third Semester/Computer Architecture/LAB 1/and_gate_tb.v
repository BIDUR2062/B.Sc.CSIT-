`include "and_gate.v"
module and_gate_tb;
    reg a;
    reg b;
    wire y;

    and_gate uut (
        .a(a),
        .b(b),
        .y(y)
    );
    initial begin
        // Create VCD file
        $dumpfile("and_gate.vcd");
        $dumpvars(0, and_gate_tb);

        // Test case 1
        a = 0; b = 0; #10;
       
        // Test case 2
        a = 0; b = 1; #10;
      
        // Test case 3
        a = 1; b = 0; #10;
       
        // Test case 4
        a = 1; b = 1; #10;
        
        $finish;
    end
endmodule
