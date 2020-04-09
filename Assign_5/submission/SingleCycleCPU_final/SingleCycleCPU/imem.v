module imem(
    input [31:0] iaddr,
    output [31:0] idata
);
    reg [31:0] m[0:31];
	 integer i=0;
    initial begin 
	 for(i=0;i<32;i=i+1)
	 begin
		if(i==0)
		m[i]=32'hfb3;
		else if(i==1)
		m[i]=32'h800010b7;
		else if(i==2)
		m[i]=32'h01000137;
		else if(i==3)
		m[i]=32'h20102023;
		else if(i==4)
		m[i]=32'h20202223;
		else if(i==5)
		m[i]=32'h20102223;
		else if(i==6)
		m[i]=32'h20802183;
		else if(i==7)
		m[i]=32'h20C02203;
		else
		m[i]=32'h0;
	 end
//	 $readmemh("imem1_ini.mem",m); 
end

    assign idata = m[iaddr[31:2]];
	 
endmodule