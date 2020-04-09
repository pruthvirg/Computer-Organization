`timescale 1ns / 1ps

module top (
input clk
);

wire [35:0] ILA_CONTROL, VIO_CONTROL;  //Control wires used by ICON to control VIO and ILA
wire reset;
wire [31:0] iaddr, idata;
wire [31:0] daddr, drdata, dwdata;
wire [3:0] we;
wire [31:0] x31, x031, pc;// rv1, rv2;
wire manclk;//Manual Clock.
wire clk_out;//Frequency divided clk output.
wire x4,x5;//Error prone RF registers.

imem imem1(
	.iaddr(iaddr),
	.idata(idata)
);

freq_divider freq_divider1(
	.clk(clk),
   .clk_out(clk_out)
);

cpu cpu1(
	.clk(clk_out),
	.reset(reset),
	.x31(x31),
	.x031(x031),
//	.x0031(x031),
	.pc(pc),
   .iaddr(iaddr),
   .idata(idata),
   .daddr(daddr),
   .drdata(drdata),
   .dwdata(dwdata),
   .we(we)
/*   .rv1(rv1),
	.rv2(rv2),*/
);

dmem dmem1(
		.clk(clk_out),
		.daddr(daddr),
		.dwdata(dwdata),
		.drdata(drdata),
		.we(we)
);

//Calls for ICON, VIO and ILA blocks!
vio0 instanceC (
    .CONTROL(VIO_CONTROL), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .ASYNC_OUT(reset), // OUT BUS 
	 .SYNC_IN({drdata,x031,pc,idata}) // IN BUS [127:0]
);

ila0 instanceD (
    .CONTROL(ILA_CONTROL), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .TRIG0(iaddr),//[31:0]
	 .TRIG1(idata),//[31:0]
	 .TRIG2(x031),//[31:0]
	 .TRIG3(drdata),//[31:0]
	 .TRIG4(dwdata)//[31:0]
);

icon0 instanceB (
    .CONTROL0(ILA_CONTROL), // INOUT BUS [35:0]
    .CONTROL1(VIO_CONTROL) // INOUT BUS [35:0]
);

endmodule