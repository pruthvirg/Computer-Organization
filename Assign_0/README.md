# Assignment 0 - Serial multiplier

We are given a test bench that can be used to verify functionality of a multiplier. The test bench assumes that the multiplier takes two inputs a and b, and another single bit input reset. When reset=1, the multiplier is internally reset. When reset=0, the multiplier starts operating, and after some number of clock cycles (not specified), it raises a rdy signal. At this point, the output p is considered to be ready and valid, and can be displayed or used.

We need to complete the code for the serial multiplier so it functions correctly, and also use the hardware test bench provided in the lab to demonstrate how it works on the FPGA board

File assignment_0.v contains the code for the problem statement.
