`include "jkflipflop.v"
module jk_ff_tb;
    wire q;
    wire qb;
    reg j;
    reg k;
    reg clk;
    jk_ff uut (
        .q(q),
        .qb(qb),
        .j(j),
        .k(k),
        .clk(clk)
    );
    initial begin
        $dumpfile("jk_ff.vcd");
        $dumpvars(0, jk_ff_tb);

        j = 0;
        k = 0;
        clk = 0;

        #300 $finish;   
    end
    always #30 clk = ~clk;
    always #10 j = ~j;
    always #50 k = ~k;

endmodule
