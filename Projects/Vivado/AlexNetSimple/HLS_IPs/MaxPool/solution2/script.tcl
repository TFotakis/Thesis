############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project MaxPool
set_top MaxPool_Core
add_files MaxPool/src/maxpool_core.c
open_solution "solution2"
set_part {xczu9eg-ffvb1156-2-e}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
source "./MaxPool/solution2/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog
