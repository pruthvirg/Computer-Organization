`include "parameters.v"

module ALU32 (
    in1, in2, op, out
);
    input [`width-1:0] in1, in2;
    input [`OPWIDTH-1:0] op;
    output reg [`width-1:0] out;
    always @(in1 or in2 or op) begin
		case(op)
			18: out <= in1+in2;
			27: out <= in1+in2;
			28: out <= in1-in2;
			21: out <= in1^in2;
			22: out <= in1|in2;
			23: out <= in1&in2;
			35: out <= in1|in2;
			36: out <= in1&in2;
			31: out <= in1<in2;
			32: out <= in1^in2;
			33: out <= in1>>in2[3:0];
			24: out <= in1<<in2[3:0];
			25: out <= in1>>in2[3:0];
			29: out <= in1<<in2[3:0];
			19: out <= $signed(in1)<$signed(in2);
			26: out <= $signed(in1)>>>in2[3:0];
			30: out <= $signed(in1)<$signed(in2);
			34: out <= $signed(in1)>>>in2[3:0];
			default: out <= 0;
		endcase
    end

endmodule
