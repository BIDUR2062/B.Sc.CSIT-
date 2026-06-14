module fulladder(a,b,cin,s,c);
input a,b,cin;
output s,c;
assign s = a ^ b ^ cin;
assign c = a & b | b & cin | a & cin;
endmodule
