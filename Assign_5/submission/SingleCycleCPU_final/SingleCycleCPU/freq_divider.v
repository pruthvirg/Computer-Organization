module freq_divider(
input clk,
output reg clk_out
);

integer i=0;
initial begin clk_out=0; end

always @(posedge clk)
begin
//i=i+1;
//if(i==3)
//begin
clk_out=~clk_out;
//i=1;
//end
end

endmodule
