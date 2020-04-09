`timescale 1ns / 1ps
`include "params.v"

module regfile(rs1,rs2,rd,we,clk,indata,rv1,rv2);
	 
    input [`REG_ADDR_SIZE-1:0] rs1;
    input [`REG_ADDR_SIZE-1:0] rs2;
    input [`REG_ADDR_SIZE-1:0] rd;
    input we;
    input clk;
    input [`REG_SIZE-1:0] indata;
    output [`REG_SIZE-1:0] rv1;
    output [`REG_SIZE-1:0] rv2;
	 
	 reg [`REG_SIZE-1:0] regfile [0:`REG_SIZE-1];
	 reg [`REG_SIZE-1:0] rv1;
	 reg [`REG_SIZE-1:0] rv2;

		
	always@(posedge(clk))
		begin
			if(we==1) begin
				regfile[rd] = indata;
			end
			rv1 <= regfile[rs1];
			rv2 <= regfile[rs2];
		end
endmodule
