`include "multiplexer.v"

module multiplexer_tb;

    reg [1:0] sel;
    reg d0, d1, d2, d3;
    wire out;

   
    multiplexer uut(sel, d0, d1, d2, d3, out);

    initial begin
        $dumpfile("multiplexer.vcd");
        $dumpvars(0, multiplexer_tb);

        d0 = 0; d1 = 1; d2 = 0; d3 = 1;

        
        sel = 2'b00; #10;
        sel = 2'b01; #10;
        sel = 2'b10; #10;
        sel = 2'b11; #10;

        $finish;
    end

endmodule
