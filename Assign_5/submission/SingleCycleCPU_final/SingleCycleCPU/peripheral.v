`timescale 1ns / 1ps

module peripheral(
  input clk, reset,
  input ce,
  input we,
  input [1:0] addr,  //Only 2-bit address needed to decode 4 registers
  input [31:0] wdata,
  output reg [31:0] rdata
);

reg [31:0] acc;  //Accumulator.
reg [31:0] count;  //Counter.
integer i=1;

initial begin
acc=32'b0;count=32'b0;
end

always @*
if (reset==1)
begin
acc<=0;
rdata<=0;
count<=0;
end
else
begin
if(ce==1)
begin
if(we==1)
begin
if(addr==2'b00)
begin
acc<=0;count<=0;
end
if(addr==2'b01)
acc<=acc+wdata;
end
else
begin
if(addr==2'b10)
rdata<=acc;
if(addr==2'b11)
rdata<=count;
end
end
end

endmodule