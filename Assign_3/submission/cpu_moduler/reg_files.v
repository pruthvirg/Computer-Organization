`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:43:40 10/18/2019 
// Design Name: 
// Module Name:    reg_files 
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
`define REG_SIZE 32
`define REG_ADDR_SIZE 5

module regfile(rs1,rs2,rd,we_reg,clk,rv1,rv2,indata,x31);
	 
    input [`REG_ADDR_SIZE-1:0] rs1;
    input [`REG_ADDR_SIZE-1:0] rs2;
    input [`REG_ADDR_SIZE-1:0] rd;
    input we_reg;
    input clk;
	 input [31:0] indata;
    output [`REG_SIZE-1:0] rv1;
    output [`REG_SIZE-1:0] rv2;
	 output [31:0] x31;
	 
	 reg [`REG_SIZE-1:0] regfile [0:`REG_SIZE-1];
	 
	 initial 
		begin
			regfile[0] <= 0;
			regfile[1] <= 4;
			regfile[2] <= 9;
			regfile[3] <= 0;
			regfile[4] <= 0;
			regfile[5] <= 0;
			regfile[31] <= 0;
			
		end
	
	assign x31 = regfile[31];
		
	always@(posedge(clk))
		begin
			if(we_reg==1) begin
				regfile[rd] <= indata;
			end
		end
	assign rv1 = regfile[rs1];
	assign rv2 = regfile[rs2];
endmodule