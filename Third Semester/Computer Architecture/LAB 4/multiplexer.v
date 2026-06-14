module multiplexer(sel, d0, d1, d2, d3, out);
    input [1:0] sel;
    input d0, d1, d2, d3;
    output out;

    wire s0, s1;
    wire n0, n1;
    wire w0, w1, w2, w3;

    assign s0 = sel[0];
    assign s1 = sel[1];

    not(n0, s0);
    not(n1, s1);

    and(w0, d0, n1, n0); 
    and(w1, d1, n1, s0);
    and(w2, d2, s1, n0); 
    and(w3, d3, s1, s0); 

    or(out, w0, w1, w2, w3);

endmodule
