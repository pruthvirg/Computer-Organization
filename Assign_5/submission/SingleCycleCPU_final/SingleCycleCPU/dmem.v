module dmem(
    input clk,
    input [31:0] daddr,
    input [31:0] dwdata,
    input [3:0] we,
    output [31:0] drdata
//	 output [7:0] m0,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15
);
    reg [7:0] m[0:127];
	 integer i=0;
	 
    initial 
	 begin
	 for(i=0;i<128;i=i+1)
	 begin
	 if(i==0)
	 m[i]=8'h0;
	 else if(i==1)
	 m[i]=8'h02;
	 else if(i==2)
	 m[i]=8'h04;
	 else if(i==3)
	 m[i]=8'h02;
	 else if(i==4)
	 m[i]=8'h08;
	 else if(i==5)
	 m[i]=8'h02;
	 else if(i==6)
	 m[i]=8'hc;
	 else if(i==7)
	 m[i]=8'h02;
	 else if(i==8)
	 m[i]=8'h88;
	 else if(i==9)
	 m[i]=8'h99;
	 else if(i==10)
	 m[i]=8'haa;
	 else if(i==11)
	 m[i]=8'hbb;
	 else if(i==12)
	 m[i]=8'hcc;
	 else if(i==13)
	 m[i]=8'hdd;
	 else if(i==14)
	 m[i]=8'hee;
	 else if(i==15)
	 m[i]=8'hff;
	 else
		m[i]=8'b0;

	 end
//	 $readmemh("dmem_ini.mem",m);
	 end
    wire [31:0] add0,add1,add2,add3;
	 
	 assign add0 = (daddr & 32'hfffffffc) + 32'h00000000;
	 assign add1 = (daddr & 32'hfffffffc) + 32'h00000001;
	 assign add2 = (daddr & 32'hfffffffc) + 32'h00000002;
	 assign add3 = (daddr & 32'hfffffffc) + 32'h00000003;
	 
	 assign drdata = {m[add3],m[add2],m[add1],m[add0]};
/*	 
	 assign m0=m[0];
	 assign m1=m[1];
	 assign m2=m[2];
	 assign m3=m[3];
	 assign m4=m[4];
	 assign m5=m[5];
	 assign m6=m[6];
	 assign m7=m[7];
	 assign m8=m[8];
	 assign m9=m[9];
	 assign m10=m[10];
	 assign m11=m[11];
	 assign m12=m[12];
	 assign m13=m[13];
	 assign m14=m[14];
	 assign m15=m[15];
*/	 
    always @(posedge clk) begin
        if (we[0]==1)
            m[add0]= dwdata[7:0];
        if (we[1]==1)
            m[add1]= dwdata[15:8];
        if (we[2]==1)
            m[add2]= dwdata[23:16];
        if (we[3]==1)
            m[add3]= dwdata[31:24];
    end
	 
endmodule