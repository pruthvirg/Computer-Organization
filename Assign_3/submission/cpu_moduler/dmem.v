`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:43:07 10/18/2019 
// Design Name: 
// Module Name:    dmem 
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
module dmem(
    input clk,
    input [31:0] daddr,
    input [31:0] dwdata,
    input [3:0] we,
    output [31:0] drdata,
	 output reg [31:0] d0
);
    reg [7:0] m[0:127];
	 reg [3:0] we_signals;
    initial $readmemh("dmem_ini_moduler.mem",m);
	 

	 always@(*)
		begin
		d0 <= {m[0],m[1],m[2],m[3]};
		end
		

    wire [31:0] add0,add1,add2,add3;
	 
	 assign add0 = (daddr & 32'hfffffffc) + 32'h00000000;
	 assign add1 = (daddr & 32'hfffffffc) + 32'h00000001;
	 assign add2 = (daddr & 32'hfffffffc) + 32'h00000002;
	 assign add3 = (daddr & 32'hfffffffc) + 32'h00000003;
	 
	 assign drdata = {m[add3],m[add2],m[add1],m[add0]};
	 
	 always@(*)
		begin
			case(we)
				0: we_signals <= 4'b0000;
				1: we_signals <= 4'b0001;
				2: we_signals <= 4'b0010;
				3: we_signals <= 4'b0100;
				4: we_signals <= 4'b1000;
				5: we_signals <= 4'b0011;
				7: we_signals <= 4'b1100;
				8: we_signals <= 4'b1111;
				default: we_signals <= 4'b0000;
			
			endcase
		end
	 
    always @(posedge clk) begin
        if (we_signals[0]==1)
            m[add0]= dwdata[7:0];
        if (we_signals[1]==1)
            m[add1]= dwdata[15:8];
        if (we_signals[2]==1)
            m[add2]= dwdata[23:16];
        if (we_signals[3]==1)
            m[add3]= dwdata[31:24];
    end
	 
endmodule
