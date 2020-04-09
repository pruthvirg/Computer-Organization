///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2019 Xilinx, Inc.
// All Rights Reserved
///////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor     : Xilinx
// \   \   \/     Version    : 14.7
//  \   \         Application: Xilinx CORE Generator
//  /   /         Filename   : vio0.v
// /___/   /\     Timestamp  : Wed Nov 13 09:59:55 IST 2019
// \   \  /  \
//  \___\/\___\
//
// Design Name: Verilog Synthesis Wrapper
///////////////////////////////////////////////////////////////////////////////
// This wrapper is used to integrate with Project Navigator and PlanAhead

`timescale 1ns/1ps

module vio0(
    CONTROL,
    CLK,
    ASYNC_OUT,
    SYNC_IN) /* synthesis syn_black_box syn_noprune=1 */;


inout [35 : 0] CONTROL;
input CLK;
output [0 : 0] ASYNC_OUT;
input [127 : 0] SYNC_IN;

endmodule
