`timescale 1ns / 1ps
`include "params.v"
module testbench();
    reg clk;
    reg [`REG_SIZE-1:0] reg_indata;
    reg [`REG_ADDR_SIZE-1:0] rs1;
    reg [`REG_ADDR_SIZE-1:0] rs2;
    reg [`REG_ADDR_SIZE-1:0] rd;
	 reg reg_we;
    
    reg [`REG_SIZE-1:0] daddr;
    reg [1:0] dmem_we;
    reg [`REG_SIZE-1:0] dmem_indata;
    wire [`REG_SIZE-1:0] dmem_outdata;
    wire [`REG_SIZE-1:0] rv1;
    wire [`REG_SIZE-1:0] rv2;
	 
    wire [`REG_SIZE-1:0] idata;
	 reg [`REG_SIZE-1:0] iaddr;
	 
	 integer i;
	 integer imem_total,imem_err,dmem_total,dmem_err,reg_total,reg_err;
	 
	 reg [`REG_SIZE-1:0] imem_out [0:`NUM_CHECK];
	 reg [`REG_SIZE-1:0] dmem_out [0:`NUM_CHECK];
	 reg [`REG_SIZE-1:0] reg1_out [0:`NUM_CHECK];
	 reg [`REG_SIZE-1:0] reg2_out [0:`NUM_CHECK];
	 
	 
	 reg [`REG_SIZE-1:0] imem_true;
	 reg [`REG_SIZE-1:0] dmem_true;
	 reg [`REG_SIZE-1:0] reg1_true;
	 reg [`REG_SIZE-1:0] reg2_true;
	 
	 imem imem_inst(.iaddr(iaddr),.idata(idata),.clk(clk));
	 dmem dmem_inst(.daddr(daddr),.clk(clk),.we(dmem_we),.indata(dmem_indata),.outdata(dmem_outdata));
	 regfile regfile_inst(.rs1(rs1),.rs2(rs2),.rd(rd),.we(reg_we),.clk(clk),.indata(reg_indata),.rv1(rv1),.rv2(rv2));
	 
	 
	always #10 clk = !clk;
	
	task set_imem;
		input integer i;
		begin
			iaddr = i;
			imem_true = imem_out[i];
		end
	endtask
		
	task imem_checker;
		input integer i;
		begin
			if(idata==imem_true) begin
				$display($time, "IMEM Passed i=%d idata=%d trueval=%d", i, idata, imem_true);
			end
			else begin
				$display($time, "IMEM Failed i=%d idata=%d trueval=%d", i, idata, imem_true);
				imem_err = imem_err+1;
			end
			imem_total=imem_total+1;
		end
	endtask
	
	task set_dmem_mem;
		input integer i;
		begin
			daddr = i+4;
			dmem_we = 3;
			dmem_indata = dmem_out[i];
		end
	endtask
	
	task set_dmem_addr;
		input integer i;
		begin
			daddr = i+4;
			dmem_we = 0;
			dmem_true = dmem_out[i];
		end
	endtask
	
	
	task dmem_checker;
		input integer i;
		begin
			if(dmem_outdata==dmem_true) begin
				$display($time, "DMEM Passed i=%d out_data=%d trueval=%d", i, dmem_outdata, dmem_true);
			end
			else begin
				$display($time, "IMEM Failed i=%d out_data=%d trueval=%d", i, dmem_outdata, dmem_true);
				dmem_err = dmem_err+1;
			end
			dmem_total=dmem_total+1;
		end
	endtask
	
	task set_reg_1;
		input integer i;
		begin
			rd = i;
			reg_we = 1;
			reg_indata = reg1_out[i];
		end
	endtask
	
	task set_reg_2;
		input integer i;
		begin
			rd = i+6;
			reg_we = 1;
			reg_indata = reg2_out[i];
		end
	endtask
	
	
	


	task set_reg_addr;
		input integer i;
		begin
			rs1 = i;
			rs2 = i+6;
			reg1_true = reg1_out[i];
			reg2_true = reg2_out[i];
		end
	endtask
	
	task reg_checker;
		input integer i;
		begin
			if(rv1 == reg1_true) begin
				$display($time, "REG1 Passed i=%d out_data=%d trueval=%d", i, rv1, reg1_true);
			end
			else begin
				$display($time, "REG1 Failed i=%d out_data=%d trueval=%d", i, rv1, reg1_true);
				reg_err = reg_err+1;
			end
			if(rv2 == reg2_true) begin
				$display($time, "REG2 Passed i=%d out_data=%d trueval=%d", i, rv2 , reg2_true);
			end
			else begin
				$display($time, "REG2 Failed i=%d out_data=%d trueval=%d", i, rv2 , reg2_true);
				reg_err = reg_err+1;
			end
			reg_total=reg_total+1;
		end
	endtask
	
	initial begin
		// Initialize the clock 
		clk = 1;
		imem_total=0;
		imem_err=0;
		dmem_total=0;
		dmem_err=0;
		reg_total=0;
		reg_err=0;
		$readmemh("imem_new.txt", imem_out);			
		$display("IMEM CHECK");
		for (i=0;i<`NUM_CHECK;i=i+1)
			begin
				set_imem(i);
				#40;
				imem_checker(i);
			end
		if(imem_err>0) begin
			$display("FAIL %d out of %d", imem_err, imem_total);
		end
		else begin
			$display("PASSED");
		end
			
		$display("DMEM WORD CHECK");
		$readmemh("imem_check.txt", dmem_out);

		for (i=0;i<`NUM_CHECK;i=i+1)
			begin
				set_dmem_mem(i);
				#40;
				set_dmem_addr(i);
				#40;
				dmem_checker(i);
				#40;
			end
		if(dmem_err>0) begin
			$display("FAIL %d out of %d", dmem_err, dmem_total);
		end
		else begin
			$display("PASSED");
		end
		
		$display("DMEM WORD CHECK");
		$readmemh("imem_check.txt", dmem_out);

		
		
		$display("REG CHECK");
		$readmemh("imem_check.txt", reg1_out);
		$readmemh("imem_check2.txt", reg2_out);
		
		for (i=0;i<`NUM_CHECK;i=i+1)
			begin
				set_reg_1(i);
				#20;
				set_reg_2(i);
				#20;
				set_reg_addr(i);
				#20;
				reg_checker(i);
				#20;
			end
		if(reg_err>0) begin
			$display("FAIL %d out of %d", reg_err, reg_total);
		end
		else begin
			$display("PASSED");
		end
		$finish;
	end
endmodule
