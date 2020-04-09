`timescale 1ns / 1ps

/*IMP ERRORS: No 2 drivers in diff always; not F/F or latch template: if IP/OP is used in always block without being in sensitivity list of it; no just always
use always@*. Don't increment pc in combin. rather sequential with pc_imm inside comb.*/
//In all of "ERROR CODE", you can make pc_imm to make pc go to a particular value.
module cpu(
    input clk,
    input reset,
    input [31:0] idata,   // data from instruction memory
    input [31:0] drdata,  // data read from data memory
    output reg [31:0] dwdata, // data to be written to data memory
    output reg [3:0] we,      // write enable signal for each byte of 32-b word
    output reg [31:0] daddr,  // address to data memory
    output reg [31:0] iaddr,  // address to instruction memory
	 // Additional outputs for debugging
    output reg [31:0] x31,    //For handling exceptions.
    output reg [31:0] pc,  //Program Counter.
	 output [31:0] x031,
//  output [31:0] x0031    //(Inputs can't be in .())-rv1, rv2//For detecting FAIL cases.
//	 input [31:0] x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x031,rv1,rv2//For checking RF values at every clock cycle.
	 input [31:0] x4,x5,
	 output [31:0] rdata,
	 output reg we_p,ce_p

);
/*    //Below I/O for ALU and RF.
     output reg [5:0] op,  //Opcode for ALU. 
     output reg [5:0] rs1, rd, rs2,
	  output reg [31:0] in1,
     output reg [31:0] in2,
	  output reg [11:0] imm,//For Load and Store instructions.
	  output reg [4:0] shamt,//For Shift instructions.
//   input [31:0] out,
//   input [31:0] rv1, rv2,
	  output reg [31:0] rf_indata
     wire reset;
     wire [31:0] iaddr;  // address to instruction memory
     wire [31:0] idata;   // data from instruction memory
     wire [31:0] daddr;  // address to data memory
     wire [31:0] drdata;  // data read from data memory
     wire [31:0] dwdata; // data to be written to data memory
     wire [31:0] we;      // write enable signal for each byte of 32-b word
	 // Additional outputs for debugging
     wire [31:0] x31;    //For handling exceptions.`
	  wire [31:0] x31_alu;    //For handling exceptions particularly for ALU. 
     wire [31:0] pc;    //Program Counter.
    //Below I/O for ALU and RF.
*/
	
	  reg [1:0] addr; reg [31:0] wdata;
     reg [5:0] rs1, rd, rs2;//RF start.
	  reg [31:0] rf_indata;
	  reg regwrite;
     wire [31:0] out, rv1, rv2;//RF end.
	  reg [5:0] op;//ALU start.
	  reg [4:0] shamt;
	  reg [11:0] imm;//immediate for store instr.
     reg [31:0] in1,in2;//ALU end.
     wire [31:0] x31_alu;//For handling exceptions particularly for ALU. 
//	  wire [31:0] x031;//For detecting FAILs.
     reg [31:0] pc_imm;//For PC absolute and relative jumps--EXTRAS.//reg flag;//FOR WRITING DATA TO DMEM IN NEXT CLOCK CYCLE.
	  reg [31:0] base_addr;//For peripheral base address.

initial
begin
base_addr=32'd512;
end

rf rf1(
	.clk(clk),
	.rs1(rs1),
	.rs2(rs2),
	.rv1(rv1),
	.rv2(rv2),
	.rd(rd),
	.rf_indata(rf_indata),
	.regwrite(regwrite),
	.reset(reset),
/*
	.x0(x0),
	.x1(x1),
	.x2(x2),
	.x3(x3),
	.x4(x4),
	.x5(x5),
	.x6(x6),
	.x7(x7),
	.x8(x8),
	.x9(x9),
	.x10(x10),
*/
	.x031(x031)
//	.x4(x4),
//	.x5(x5)
);

alu alu1(
	.reset(reset),
	.in1(rv1),
	.in2(in2),
	.shamt(shamt),
	.op(op),
	.out(out),
	.x31(x31_alu)//For encoding errors/exceptions.
);

peripheral peripheral1(
.clk(clk),
.ce(ce_p),
.we(we_p),
.addr(addr),  //Only 2-bit address needed to decode 4 registers
.wdata(wdata),
.rdata(rdata)
);

initial
begin
	pc_imm=32'h0;
	imm=11'h0;
end

//assign x0031=x031;

always@*
begin
if(reset)//Stuffs start from scratch/first when reset=1;
begin
pc_imm=0;rf_indata=0;
shamt=0;in1=0;in2=0;
imm=0;rs1=0;rs2=0;
rd=0;op=0;
x31=0;we=0;dwdata=0;//Initializing every required thing to 0.
end
else
begin//Decoding instruction and generating appropriate control signals.
case(idata & 32'h7F)
32'b0110111://LUI (Load Upper Immediate).
begin
	we=0;
	rd=idata [11:7];
	rf_indata={idata[31:12],12'h000};
	regwrite=1'b1;
	pc_imm=4;
end
32'b0010111://AUIPC (Add Upper Immediate to PC).
begin
	we=0;
	rd=idata [11:7];
	rf_indata={idata[31:12],12'h000}+pc;
	pc_imm=4;
	regwrite=1;
end
32'b1101111://JAL (Jump And Link).
begin
	we=0;
	rd=idata [11:7];
	rf_indata=pc+4;//Not pc+4 as given in imem_ini files.
	pc_imm={{11{idata[31]}},idata[31],idata[19:12],idata[20],idata[30:21],1'b0};
	regwrite=1;
end
32'b1100111://JALR (Jump And Link Register).
begin
	we=0;
case(idata[14:12])
3'b0:
begin
	rs1=idata[19:15];
	rd=idata [11:7];
	rf_indata=pc+4;
	pc_imm={{20{idata[31]}},idata[31:20]}+rv1;//Either both combined left shift or only for imm./////
	pc_imm[0]=0;//According to definition of JALR.
	pc_imm=pc_imm-pc;
end
default:
begin
x31=32'd3;pc_imm=4;//Error Code:3.
end
endcase
end
32'b1100011://Branch Statements.
begin
we=0;
rs1=idata[19:15];rs2=idata[24:20];pc_imm=4;regwrite=0;
case(idata[14:12])
3'b000://BEQ(Branch if EQUAL).
begin
if(rv1==rv2)
begin  
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],1'b0};//Branching Out.
end
end
3'b001://BNE(Branch if Not Equal).
begin
if(rv1!=rv2)
begin
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],1'b0};//Branching Out.
end
end
3'b100://BLT(Branch if Less Than)
begin
if($signed(rv1)<$signed(rv2))
begin
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],1'b0};//Branching Out.
end
end
3'b101://BGE(Branch if Greater than or Equal to).
begin
if($signed(rv1)>=$signed(rv2))
begin
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],1'b0};//Branching Out.
end
end
3'b110://BLTU(Branch if Less Than Unsigned).
begin
if(rv1<rv2)
begin
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],1'b0};//Branching Out.
end
end
3'b111://BGEU(Branch if Greater than or Equal to Unsigned).
begin
if(rv1>=rv2)
begin
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],1'b0};//Branching Out.
end
end
default:
begin
    x31=32'd4;pc_imm=4;//Error Code:4.
end
endcase
end
32'b0000011:
begin
rs1=idata[19:15];rd=idata[11:7];imm={{20{idata[31]}},idata[31:20]};
daddr=rv1+imm;we=0;pc_imm=4;
case(idata[14:12])
3'b000://LB (Load Byte).	//Check this once!//////////////////////////////
begin
	if(daddr==base_addr+8)
	begin
	addr=2'b10;
	ce_p=1;we_p=0;
	end
	else if(daddr==base_addr+12)
	begin
	addr=2'b11;
	ce_p=1;we_p=0;
	end
	else
	begin
		rf_indata=(drdata & (32'hFF<< (8*(imm%4))))>>(8*(imm%4));
		rf_indata={{5'd24{rf_indata[7]}},rf_indata[7:0]};
		regwrite=1;
	end
end
3'b001://LH (Load HalfWord).
begin
	if(daddr==base_addr+8)
	begin
	addr=2'b10;
	ce_p=1;we_p=0;
	end
	else if(daddr==base_addr+12)
	begin
	addr=2'b11;
	ce_p=1;we_p=0;
	end
	else
	begin
		rf_indata=(drdata & (32'hFFFF << (8*(imm%4))))>>(8*(imm%4));
		rf_indata={{16{rf_indata[15]}},rf_indata[15:0]};
		regwrite=1;
	end
end
3'b010://LW (Load Word).
begin
	if(daddr==base_addr+8)
	begin
	addr=2'b10;
	ce_p=1;we_p=0;
	end
	else if(daddr==base_addr+12)
	begin
	addr=2'b11;
	ce_p=1;we_p=0;
	end
	else
	begin
		rf_indata=drdata;
		regwrite=1;
	end
end
3'b100://LBU (Load Byte Unsigned).
begin
	if(daddr==base_addr+8)
	begin
	addr=2'b10;
	ce_p=1;we_p=0;
	end
	else if(daddr==base_addr+12)
	begin
	addr=2'b11;
	ce_p=1;we_p=0;
	end
	else
	begin
		rf_indata=(drdata & (32'hFF<< (8*(imm%4))))>>(8*(imm%4));
		regwrite=1;
	end
end
3'b101://LHU (Load HalfWord Unsigned).
begin
	if(daddr==base_addr+8)
	begin
	addr=2'b10;
	ce_p=1;we_p=0;
	end
	else if(daddr==base_addr+12)
	begin
	addr=2'b11;
	ce_p=1;we_p=0;
	end
	else
	begin
		rf_indata=(drdata & (32'hFFFF << (8*(imm%4))))>>(8*(imm%4));
		regwrite=1;
	end
end
default:x31=32'd05;//Error Code:5.
endcase
end
32'b0100011:
begin
rs1=idata[19:15];rs2=idata[24:20];imm={{20{idata[31]}},idata[31:25],idata[11:7]};daddr=imm+rv1;pc_imm=4;
case(idata[14:12])
3'b000://SB (Store Byte).
begin
   if(daddr==base_addr)
	begin
		addr=2'b00;
		ce_p=1;we_p=1;
	end
	else if(daddr==base_addr+4)
	begin
		addr=2'b01;
		wdata={24'h0,rv2[7:0]}<<8*(imm%4);//Need to keep imm 0 as of now in such instr.
		ce_p=1;we_p=1;
	end
	else
	begin
		dwdata={24'h0,rv2[7:0]}<<8*(imm%4);///////WRITING DATA TO DMEM IN SAME CYCLE./////////
		we[3:0]= 4'b1 << (imm%4);
	end
end
3'b001://SH (Store HalfWord).
begin
if(imm%4==0 || imm%4==2)//Misaligned cases where %4==1 or 3 is excluded.
begin
   if(daddr==base_addr)
	begin
		addr=2'b00;
		ce_p=1;we_p=1;
	end
	else if(daddr==base_addr+4)
	begin
		addr=2'b01;
		wdata={16'h0,rv2[15:0]}<<8*(imm%4);//Need to keep imm 0 as of now in such instr.
		ce_p=1;we_p=1;
	end
	else
	begin
		dwdata={16'h0,rv2[15:0]}<<8*(imm%4);///////WRITING DATA TO DMEM IN SAME CYCLE./////////
		we[3:0]=(imm%4==0)?4'b0011:4'b1100;
	end
end
else
	x31=32'd6;//Error Code:6.
end
3'b010://SW (Store Word).
begin
   if(daddr==base_addr)
	begin
		addr=2'b00;
		ce_p=1;we_p=1;
	end
	else if(daddr==base_addr+4)
	begin
		addr=2'b01;
		ce_p=1;we_p=1;
		wdata=rv2;//Need to keep imm 0 as of now in such instr.
	end
	else
	begin
		dwdata=rv2;///////WRITING DATA TO DMEM IN SAME CYCLE./////////
		we[3:0]=4'b1111;
	end
end
default:
begin
	x31=32'd7;//Error Code:7.
end
endcase
end
32'b0010011://ALU Operations.
begin
	we=0;rs1=idata[19:15];rd=idata[11:7];in1=rv1;pc_imm=4;
case(idata & 32'h7000)
32'h0000://ADDI (Add Immediate).
begin
	op=6'b000000;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
	regwrite=1;
end
32'h2000://SLTI (Shift if Less Than Immediate).
begin
	op=6'b000001;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
	regwrite=1;
end
32'h3000://SLTIU (Shift if Less Than Immediate Unsigned).
begin
	op=6'b000010;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
	regwrite=1;
end
32'h4000://XORI (XOR Immediate).
begin
	op=6'b000011;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
	regwrite=1;
end
32'h6000://ORI (OR Immediate).
begin
	op=6'b000100;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
	regwrite=1;
end
32'h7000://ANDI (AND Immediate).
begin
	op=6'b000101;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
	regwrite=1;
end
32'h1000://SLLI (Logical Left Shift by Shamt).  
begin
	op=6'b000110;
	shamt=idata[24:20];
	rf_indata=out;
	regwrite=1;
end
32'h5000://SRLI (Logical Right Shift by Shamt) & SRAI (Arithmetic Shift Right).
begin	
	op=(idata[30]>idata[31])?6'b001000:6'b000111;
	shamt=idata[24:20];
	rf_indata=out;
	regwrite=1;
end
endcase
end
32'h33:
begin
we=0;rs1=idata[19:15];rd=idata[11:7];in1=rv1;pc_imm=4;
case(idata & 32'h7000)//Errors by checking first 11 bits of idata is not done!!!.
32'h0://ADD or SUB.
begin
	op=(idata[30]>idata[31])?6'b001010:6'b001001;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
	regwrite=1;
end
32'h1000://SLL
begin	
	op=6'b001011;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
	regwrite=1;
end
32'h2000: //SLT
begin
	op=6'b001100;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
	regwrite=1;
end
32'h3000://SLTU
begin
	op=6'b001101;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
	regwrite=1;
end
32'h4000://XOR
begin
	op=6'b001110;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
	regwrite=1;
end
32'h5000://SRL or SRA
begin
	op=(idata[30]>idata[31])?6'b010000:6'b001111;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
	regwrite=1;
end
32'h6000://OR
begin
	op=6'b010001;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
	regwrite=1;
end
32'h7000://AND
begin
	op=6'b010010;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
	regwrite=1;
end
default:
begin
	x31=32'd8;//Error Code:8.
end
endcase
end
default:
begin
	x31=32'd8;//Error Code:8[Wrong OpCode].
end
endcase    //x31_alu=x31_alu_cpu;--------check later for exceptions.
end
end

always @(posedge clk or posedge reset)
begin//Incrementing PC.
if(reset)
pc=0;
else
begin
pc=(pc+pc_imm);//%(33'h100000000);//d4294967296);
if(pc>33'h100000000)
pc=pc-33'h100000000;
iaddr=pc;
end
/*case(PCSrc)
2'b10:
	pc=pc_imm+32'h0;//Absolute jump.
2'b01:
	pc=pc+pc_imm;//Relative jump.
default :
	pc=pc+4;//Regular.
endcase
PCSrc=2'b00;*/
end
endmodule