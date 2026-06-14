`include "decoder.v"

module decoder_tb; 
    reg a, b, c;
    wire d0,d1,d2,d3,d4,d5,d6,d7;

    decoder uut(a, b, c, d0, d1, d2, d3, d4, d5, d6, d7);

    initial begin
        $dumpfile("decoder.vcd");
        $dumpvars(0, decoder_tb);

        a=0; b=0; c=0;
        #10
         a=0; b=0; c=1;
        #10
         a=0; b=1; c=0;
        #10 
        a=0; b=1; c=1;
        #10
         a=1; b=0; c=0;
        #10 
        a=1; b=0; c=1;
        #10
         a=1; b=1; c=0;
        #10
         a=1; b=1; c=1;
        #10;

        $finish;
    end
endmodule
