module rf(
input clk,//Clock for synchronous writes.
input reset,//To reset all outputs.
input regwrite,//To decide whether to write to rf or not, default is read.
input [5:0] rs1, rs2, rd,//Two read and 1 write register.
input [31:0] rf_indata,//Indata to be written into rd1.
output [31:0] rv1, rv2,//Outdata from values of rs1, rs2 addr in rf.
output [31:0] x031,
output [31:0] x4,x5
//output [31:0] x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x031
);
reg [31:0] rf[0:31];//Register file (decrease width based on constraints!).
//Initializing all values in RF=0.
integer i=0;
initial
begin
for(i=0;i<32;i=i+1)
rf[i]=32'b0;
end 

assign rv1=rf[rs1];//Reading from RF.
assign rv2=rf[rs2];

assign x4=rf[4];
assign x5=rf[5];
/*
assign x0=rf[0];
assign x1=rf[1];
assign x2=rf[2];
assign x3=rf[3];
assign x4=rf[4];
assign x5=rf[5];
assign x6=rf[6];
assign x7=rf[7];
assign x8=rf[8];
assign x9=rf[9];
assign x10=rf[10];
*/
assign x031=rf[31];

always @(posedge clk or posedge reset)
begin
if(reset)
begin
for(i=0;i<32;i=i+1)
rf[i]=32'b0;
end
else
begin
	if(regwrite)
	begin
		if(rd==5'b0)
		begin
		end
		else
			rf[rd]=rf_indata;//Writing to RF.
	end
end
end
endmodule