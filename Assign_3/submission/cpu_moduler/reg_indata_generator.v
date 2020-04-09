`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:20 10/18/2019 
// Design Name: 
// Module Name:    reg_indata_generator 
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
module reg_indata_generator( MemToReg,dmem_out,alu_out,imm,pc,jump,auipc,indata_parsed,load_type);
	  input MemToReg;
	  input auipc;
	  input jump;
	  input [31:0] dmem_out;
	  input [31:0] alu_out;
	  input [31:0] imm, pc;
	  input [6:0] load_type;
	  output reg [31:0] indata_parsed;
	  reg [31:0] indata;
	  
	 
	 always@(*)
		begin
			case(load_type)
				0: indata_parsed <= {{24{indata[31]}},indata[7:0]};
				1: indata_parsed <= {{24{indata[31]}},indata[15:8]};
				2: indata_parsed <= {{24{indata[31]}},indata[23:16]};
				3: indata_parsed <= {{24{indata[31]}},indata[31:24]};
				4: indata_parsed <= {{16{indata[31]}},indata[15:0]};
				6: indata_parsed <= {{16{indata[31]}},indata[31:16]};
				7: indata_parsed <= indata;
				8: indata_parsed <= {24'b0,indata[7:0]};
				9: indata_parsed <= {24'b0,indata[15:8]};
				10: indata_parsed <= {24'b0,indata[23:16]};
				11: indata_parsed <= {24'b0,indata[31:23]};
				12: indata_parsed <= {16'b0,indata[15:0]};
				13: indata_parsed <= {16'b0,indata[31:16]};
				default: indata_parsed <= indata;
			endcase
		end
	
	always@(*)
		begin
			if(auipc == 1) indata <= pc + $signed(imm);
			else if(jump == 1) indata <= pc + 1;
			else if(MemToReg == 1) indata <= dmem_out;			
			else indata <= alu_out;
		end
endmodule
