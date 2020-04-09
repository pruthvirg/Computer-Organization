# Assignment 1: ALU

`Logic used`:
* I have used the last 7 bits of the opcode to differntiate between each operation, incase many opcodes have same last 7 bits then I have used the 3 bit functional code to differntiate between them. I have assigned simple integers(0-39) for each different opcode. This part is done in the dummy-decoder.
* I have then used the decoded instruction to carry out operations in alu. Currently I have implemented only alu operations. A maximum of 6 bits was sufficient for the opcode coming from the dummy decoder as only 40 instructions are there in the instruction set.(2^6=64>40)
* ## Usage

Go to the file containing the .v files and run the following code :

```verilog
iverilog *.v
./a.out
```
