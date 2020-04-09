`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:57:23 10/18/2019 
// Design Name: 
// Module Name:    pc_candidate_generation_module 
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
module pc_candidate_generation_module(
    input [31:0] pc,input [31:0] imm,input branch, input alu_zero, output reg [31:0] pc_candidate, input jump, input jalr,input [31:0] rv1
	 );
	
	always@(*)
		begin
			if(jalr) pc_candidate <= (rv1 + imm)<<2;
			else if ((alu_zero&&branch)||jump) pc_candidate <= pc + imm;
			else pc_candidate <= pc + 1;			
		end

endmodule
