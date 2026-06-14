module half_adder (
    input wire A,
    input wire B,
    output wire SUM,
    output wire CARRY
);
    assign SUM = A ^ B;      // Sum is A XOR B
    assign CARRY = A & B;    // Carry is A AND B

endmodule