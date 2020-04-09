`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:47:05 10/18/2019
// Design Name:   controlUnit
// Module Name:   /home/pruthvirg/Desktop/sem_fire/comp_org/wd_assign_3/cpu_moduler/cpu_tb.v
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

module cpu_tb;
	reg clk;
	reg reset;

	// Inputs
	wire [31:0] Instruction;

	// Outputs
	wire [6:0] ALUop;
	wire [4:0] RegDst;
	wire RegWrite;
	wire ALUSrc;
	wire MemWrite;
	wire MemToReg;
	wire Branch;
	wire Jump;
	wire [31:0] imm;
	wire auipc;
	wire [31:0] rv1,rv2;
	wire alu_zero;
	wire [31:0] alu_out;
	wire [3:0] we;
	wire [31:0] dmem_out;
	wire [4:0] rs1, rs2;
	wire [31:0] indata;
	wire [31:0] pc;
	wire [31:0] pc_candidate;
	wire [4:0] load_type;
	wire [31:0] x31;
	wire [31:0] d0;
	wire jalr;
	
	
	

	// Instantiate the Unit Under Test (UUT)
	controlUnit uut (
		.ALUop(ALUop), 
		.RegDst(RegDst), 
		.RegWrite(RegWrite), 
		.ALUSrc(ALUSrc), 
		.MemWrite(MemWrite), 
		.MemToReg(MemToReg), 
		.Branch(Branch), 
		.Jump(Jump), 
		.Instruction(Instruction), 
		.imm(imm), 
		.auipc(auipc),
		.load_type(load_type),
		.rs1(rs1),
		.rs2(rs2),
		.we(we)
	);
	
	// instantiate alu block
	alu alu_instance(.in1(rv1),.rv2(rv2),.op_alu(ALUop), .imm(imm), .alu_zero(alu_zero), .out(alu_out),.alu_src(ALUSrc));
	
	//instantiate imem
	imem imem_instance( .iaddr(pc), .idata(Instruction));
	
	//instantiate dmem
	
	dmem dmem_instance( .clk(clk), .daddr(alu_out), .dwdata(rv2), .we(we), .drdata(dmem_out),.d0(d0));
	
	//instantiate regfiles
	
	regfile regfile_instance(.rs1(rs1),.rs2(rs2),.rd(RegDst),.we_reg(RegWrite),.clk(clk),.rv1(rv1),.rv2(rv2), .indata(indata) ,.x31(x31));
	
	//instantiate reg_indata_generator module
	
	reg_indata_generator reg_indata_generator_instance( .MemToReg(MemToReg),.dmem_out(dmem_out),.alu_out(alu_out),.imm(imm),.pc(pc),.indata_parsed(indata), .jump(Jump));
	
	//instantiate pc_candidate_generation module
	
	pc_candidate_generation_module pc_candidate_generation_module_instance( .pc(pc),.imm(imm),.branch(Branch),.alu_zero(alu_zero), .pc_candidate(pc_candidate) ,.jump(Jump),.jalr(jalr)
	 );
	//instantiate pc module
	
	pc_module pc_module_instance(.Out(pc), .In(pc_candidate), .Clock(clk), .Reset(reset));
	
	
	
	always #5 clk = !clk;
	
	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		
		clk = 0;
		reset = 0;
		// Add stimulus here

	end
      
endmodule

