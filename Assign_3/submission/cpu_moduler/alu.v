`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:48:26 10/18/2019 
// Design Name: 
// Module Name:    alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alu(input [31:0] in1,input [31:0] rv2,input [6:0] op_alu,input [31:0] imm,output reg alu_zero, output reg [31:0] out,input alu_src);
	reg [31:0] in2;
	
	always@(*)
		begin
			if(alu_src == 1) in2 <= $signed(imm);
			else in2 <= rv2;
		end
		
	always @(*) begin
		case(op_alu)
			0: if($signed(in1)-$signed(in2) == 0) alu_zero <= 1;//BEQ
			1: if($signed(in1)-$signed(in2) != 0) alu_zero <= 1;//BNE
			2: if($signed(in1)<$signed(in2)) alu_zero <= 1;//BLT
			3: if($signed(in1)>=$signed(in2)) alu_zero <= 1;//BGE
			4: if(in1<in2) alu_zero <= 1;//BLTU
			5: if(in1>=in2) alu_zero <= 1;//BGEU
			18: out <= in1+in2;
			19: out <= $signed(in1)<$signed(in2);
			20: out <= in1<in2;
			21: out <= in1^in2;
			22: out <= in1|in2;
			23: out <= in1&in2;
			24: out <= in1<<in2[3:0];
			25: out <= in1>>in2[3:0];
			26: out <= $signed(in1)>>>in2[3:0];
			27: out <= in1+in2;
			28: out <= in1-in2;
			29: out <= in1<<in2[3:0];
			30: out <= $signed(in1)<$signed(in2);
			31: out <= in1<in2;
			32: out <= in1^in2;
			33: out <= in1>>in2[3:0];
			34: out <= $signed(in1)>>>in2[3:0];
			35: out <= in1|in2;
			36: out <= in1&in2;		
			default: out <= 0;
		endcase
    end	
endmodule
