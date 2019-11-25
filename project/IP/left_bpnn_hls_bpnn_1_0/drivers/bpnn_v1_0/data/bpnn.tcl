# ==============================================================
# File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
# Version: 2018.2
# Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
# 
# ==============================================================

proc generate {drv_handle} {
    xdefine_include_file $drv_handle "xparameters.h" "XBpnn" \
        "NUM_INSTANCES" \
        "DEVICE_ID" \
        "C_S_AXI_CTRLS_BASEADDR" \
        "C_S_AXI_CTRLS_HIGHADDR"

    xdefine_config_file $drv_handle "xbpnn_g.c" "XBpnn" \
        "DEVICE_ID" \
        "C_S_AXI_CTRLS_BASEADDR"

    xdefine_canonical_xpars $drv_handle "xparameters.h" "XBpnn" \
        "DEVICE_ID" \
        "C_S_AXI_CTRLS_BASEADDR" \
        "C_S_AXI_CTRLS_HIGHADDR"
}

