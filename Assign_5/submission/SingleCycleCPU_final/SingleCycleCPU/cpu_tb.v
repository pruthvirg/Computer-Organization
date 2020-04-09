module cpu_tb();
    reg clk, reset;
    wire [31:0] iaddr, idata;
    wire [31:0] daddr, drdata, dwdata;
    wire [3:0] we;
    wire [31:0] x31, pc;
	 wire [31:0] rv1,rv2;
//	 wire [31:0] x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x031;
//	 wire [7:0] m0,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15;
    wire [31:0] x4,x5;
    wire [31:0] rdata;
	 wire we_p, ce_p;
	 
	 cpu dut (
        .clk(clk),
        .reset(reset),
        .iaddr(iaddr),
        .idata(idata),
        .daddr(daddr),
        .drdata(drdata),
        .dwdata(dwdata),
        .we(we),
        .x31(x31),
        .pc(pc),
		  .x4(x4),
		  .x5(x5),
		  .we_p(we_p),
		  .ce_p(ce_p),
		  .rdata(rdata)
//		  .rv1(rv1),
//		  .rv2(rv2),
//		  .x0(x0),
//		  .x1(x1),
//	     .x2(x2),
//	     .x3(x3),
//	     .x4(x4),
//	     .x5(x5),
//	     .x6(x6),
//	     .x7(x7),
//		  .x8(x8),
//		  .x9(x9),
//		  .x10(x10),
//	     .x031(x031)
    );
	 
	 dmem dmem(
		.clk(clk),
		.daddr(daddr),
		.dwdata(dwdata),
		.drdata(drdata),
		.we(we)
//		.m0(m0),
//		.m1(m1),
//		.m2(m2),
//   	.m3(m3),
//   	.m4(m4),
//  	.m5(m5),
//   	.m6(m6),
//   	.m7(m7),
//   	.m8(m8),
//   	.m9(m9),
//   	.m10(m10),
//   	.m11(m11),
//   	.m12(m12),
//   	.m13(m13),
//   	.m14(m14),
//   	.m15(m15)   	
   	);
	 
	 imem imem(
		.iaddr(iaddr), 
		.idata(idata)
	);
	
    always #5 clk = ~clk;
    initial begin
        clk = 0;
        reset = 1;
        #100
        reset = 0;
    end

endmodule