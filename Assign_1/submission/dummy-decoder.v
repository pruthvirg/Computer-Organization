`include "parameters.v"

module DummyDecoder (
    instr,
    op
);

    input [`width-1:0] instr;
    output reg [`OPWIDTH-1:0] op;

    always @(instr) begin
		case(instr[6:0])
			7'b0110111: op = 0;
			7'b0010111: op = 1;
			7'b1101111: op = 2;
			7'b1100111: op = 3;
			7'b1100011:
				case(instr[14:12])
					3'b000: op = 4;
					3'b001: op = 5;
					3'b100: op = 6;
					3'b101: op = 7;
					3'b110: op = 8;
					3'b111: op = 9;
					default: op = 41;						
				endcase
			7'b0000011:
				case(instr[14:12])
					3'b000: op = 10;
					3'b001: op = 11;
					3'b010: op = 12;
					3'b100: op = 13;
					3'b101: op = 14;
					default: op = 41;
				endcase
			7'b0100011:
				case(instr[14:12])
					3'b000: op = 15;
					3'b001: op = 16;
					3'b010: op = 17;	
					default: op = 41;
				endcase
			7'b0010011:
				case(instr[14:12])
					3'b000: op = 18;
					3'b010: op = 19;
					3'b011: op = 20;
					3'b100: op = 21;
					3'b110: op = 22;
					3'b111: op = 23;
					3'b001: op = 24;
					3'b101: 
						case(instr[30])
							1'b0: op = 25;
							1'b1: op = 26;				
							default: op = 41;
						endcase
					default: op = 41;
				endcase
			7'b0110011:
				case(instr[14:12])
					3'b000: 
						case(instr[30])
							1'b0: op = 27;
							1'b1: op = 28;	
							default: op = 41;
						endcase
					3'b001: op = 29;
					3'b010: op = 30;
					3'b011: op = 31;
					3'b100: op = 32;
					3'b101: 
						case(instr[30])
							1'b0: op = 33;
							1'b1: op = 34;	
							default: op = 41;
						endcase
					3'b110: op = 35;
					3'b111: op = 36;
					default: op = 41;
				endcase
			7'b0001111: op = 37;
			7'b1110011: 
				case(instr[20])
					1'b0: op = 38;
					1'b1: op = 39;
					default: op = 41;
				endcase
			default: op = 41;
		endcase
    end

endmodule
