// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// CTRLS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x18 : Data signal of Thu_V
//        bit 19~0 - Thu_V[19:0] (Read/Write)
//        others   - reserved
// 0x1c : reserved
// 0x20 : Data signal of Ind_V
//        bit 19~0 - Ind_V[19:0] (Read/Write)
//        others   - reserved
// 0x24 : reserved
// 0x28 : Data signal of Mid_V
//        bit 19~0 - Mid_V[19:0] (Read/Write)
//        others   - reserved
// 0x2c : reserved
// 0x30 : Data signal of Rin_V
//        bit 19~0 - Rin_V[19:0] (Read/Write)
//        others   - reserved
// 0x34 : reserved
// 0x38 : Data signal of Lit_V
//        bit 19~0 - Lit_V[19:0] (Read/Write)
//        others   - reserved
// 0x3c : reserved
// 0x40 : Data signal of ACC_X_V
//        bit 19~0 - ACC_X_V[19:0] (Read/Write)
//        others   - reserved
// 0x44 : reserved
// 0x48 : Data signal of ACC_Y_V
//        bit 19~0 - ACC_Y_V[19:0] (Read/Write)
//        others   - reserved
// 0x4c : reserved
// 0x50 : Data signal of ACC_Z_V
//        bit 19~0 - ACC_Z_V[19:0] (Read/Write)
//        others   - reserved
// 0x54 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBPNN_CTRLS_ADDR_AP_CTRL      0x00
#define XBPNN_CTRLS_ADDR_GIE          0x04
#define XBPNN_CTRLS_ADDR_IER          0x08
#define XBPNN_CTRLS_ADDR_ISR          0x0c
#define XBPNN_CTRLS_ADDR_AP_RETURN    0x10
#define XBPNN_CTRLS_BITS_AP_RETURN    32
#define XBPNN_CTRLS_ADDR_THU_V_DATA   0x18
#define XBPNN_CTRLS_BITS_THU_V_DATA   20
#define XBPNN_CTRLS_ADDR_IND_V_DATA   0x20
#define XBPNN_CTRLS_BITS_IND_V_DATA   20
#define XBPNN_CTRLS_ADDR_MID_V_DATA   0x28
#define XBPNN_CTRLS_BITS_MID_V_DATA   20
#define XBPNN_CTRLS_ADDR_RIN_V_DATA   0x30
#define XBPNN_CTRLS_BITS_RIN_V_DATA   20
#define XBPNN_CTRLS_ADDR_LIT_V_DATA   0x38
#define XBPNN_CTRLS_BITS_LIT_V_DATA   20
#define XBPNN_CTRLS_ADDR_ACC_X_V_DATA 0x40
#define XBPNN_CTRLS_BITS_ACC_X_V_DATA 20
#define XBPNN_CTRLS_ADDR_ACC_Y_V_DATA 0x48
#define XBPNN_CTRLS_BITS_ACC_Y_V_DATA 20
#define XBPNN_CTRLS_ADDR_ACC_Z_V_DATA 0x50
#define XBPNN_CTRLS_BITS_ACC_Z_V_DATA 20

