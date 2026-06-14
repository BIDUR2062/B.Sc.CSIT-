module ALU_4bit(
    input [3:0] A,
    input [3:0] B,
    input [2:0] S,
    output reg [3:0] F,
    output reg Cout,
    output reg Zero
);

always @(*) 
begin
    case(S)

    3'b000: {Cout, F} = A + B;        
    3'b001: {Cout, F} = A - B;        

    3'b010: begin
                F = A & B;         
                Cout = 0;
            end

    3'b011: begin
                F = A | B;            
                Cout = 0;
            end

    3'b100: begin
                F = A ^ B;            
                Cout = 0;
            end

    3'b101: begin
                F = ~A;               
                Cout = 0;
            end

    3'b110: {Cout, F} = A + 1;       

    3'b111: {Cout, F} = A - 1;        
    default: begin
                F = 4'b0000;
                Cout = 0;
             end
    endcase
    if(F == 4'b0000)
        Zero = 1;
    else
        Zero = 0;
end
endmodule
