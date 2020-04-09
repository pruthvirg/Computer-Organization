module alu (
    input reset,//To reset all outputs.
    input [31:0] in1,
    input [31:0] in2,
	 input [4:0] shamt,
    input [5:0] op,
	 output reg [31:0] out,
    output reg [31:0] x31//For encoding errors/exceptions.
);

always @(in1 or in2 or op or reset) begin
if(reset)
out=0;
else
begin
case(op)    //Blocking statements below because of combinational ALU.
6'b000000: out = in1 + in2;    //1.ADDI-add
6'b000001: out = ($signed(in2)> $signed(in1))?32'h1:32'h0;   //2.SLTI- if in2>in1, else 0 signed no. immediate
6'b000010: out = (in2>in1)?32'h1:32'h0;   //3.SLTIU-  if in2>in1, else 0 unsigned no. immediate
6'b000011: out = in1 ^ in2;    //4.XORI-bitwise XOR immediate
6'b000100: out = in1 | in2;    //5.ORI-bitwise or immediate
6'b000101: out = in1 & in2;    //6.ANDI-bitwise and immediate
6'b000110: out = in1 << shamt;    //7.SLLI-logical left shift by shamt
6'b000111: out = in1 >> shamt;    //8.SRLI-logical right shift by shamt
6'b001000: out = $signed(in1) >>> $signed(shamt);    //9.SRAI-arithmetic shift right by shamt
6'b001001: out = in1 + in2;    //10.ADD-add
6'b001010: out = in1 - in2;    //11.SUB-subtract
6'b001011: out = $signed(in1) << $signed(in2[4:0]);    //12.SLL-shift logical left
6'b001100: out = ($signed(in2)> $signed(in1))?32'h1:32'h0;    //13.SLT- 1 if in2>in1, else 0 signed no.
6'b001101: out = (in2>in1)?32'h1:32'h0;    //14.SLTU- 1 if in2>in1, else 0 for unsigned no.
6'b001110: out = in1 ^ in2;    //15.XOR-bitwise xor
6'b001111: out = $signed(in1) >> $signed(in2[4:0]);    //16.SRL-shift right logical(*)
6'b010000: out = $signed(in1) >>> $signed(in2[4:0]);    //17.SRA-shift right arithmetic(*)
6'b010001: out = in1 | in2;    //18.OR-bitwise or
6'b010010: out = in1 & in2;    //19.AND-bitwise and
default: x31 <= 32'd02;    //Error code=2 if ALU opcode is not decodable.
endcase
end
end
endmodule