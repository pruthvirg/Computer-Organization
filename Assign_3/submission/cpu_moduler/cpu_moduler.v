`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:45:45 10/18/2019
// Design Name:   controlUnit
// Module Name:   /home/pruthvirg/Desktop/sem_fire/comp_org/wd_assign_3/cpu_moduler/cpu_moduler.v
// Project Name:  cpu_moduler
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_moduler;

	// Inputs
	reg [31:0] Instruction;

	// Outputs
	wire [6:0] ALUOp;
	wire RegDst;
	wire RegWrite;
	wire ALUSrc;
	wire MemRead;
	wire MemWrite;
	wire MemToReg;
	wire Branch;
	wire Jump;
	wire [31:0] imm;
	wire auipc;

	// Instantiate the Unit Under Test (UUT)
	controlUnit uut (
		.ALUOp(ALUOp), 
		.RegDst(RegDst), 
		.RegWrite(RegWrite), 
		.ALUSrc(ALUSrc), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.MemToReg(MemToReg), 
		.Branch(Branch), 
		.Jump(Jump), 
		.Instruction(Instruction), 
		.imm(imm), 
		.auipc(auipc)
	);

	initial begin
		// Initialize Inputs
		Instruction = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

