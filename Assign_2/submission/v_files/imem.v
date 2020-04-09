`timescale 1ns / 1ps
`include "params.v"

module imem(
    iaddr,
    idata,
	 clk
	);
	
	input [`REG_SIZE-1:0] iaddr;
	output [`REG_SIZE-1:0] idata;
	input clk;
		
	imem_core imem_inst (
	  .clka(clk), 
	  .wea(1'b0),
	  .addra(iaddr[9:0]), 
	  .dina(1'b0),
	  .douta(idata) 
	);
endmodule
