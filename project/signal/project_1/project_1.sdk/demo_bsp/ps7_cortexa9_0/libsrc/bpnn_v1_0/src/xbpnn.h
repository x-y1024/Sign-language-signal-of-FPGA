// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XBPNN_H
#define XBPNN_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xbpnn_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Ctrls_BaseAddress;
} XBpnn_Config;
#endif

typedef struct {
    u32 Ctrls_BaseAddress;
    u32 IsReady;
} XBpnn;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XBpnn_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XBpnn_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XBpnn_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XBpnn_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XBpnn_Initialize(XBpnn *InstancePtr, u16 DeviceId);
XBpnn_Config* XBpnn_LookupConfig(u16 DeviceId);
int XBpnn_CfgInitialize(XBpnn *InstancePtr, XBpnn_Config *ConfigPtr);
#else
int XBpnn_Initialize(XBpnn *InstancePtr, const char* InstanceName);
int XBpnn_Release(XBpnn *InstancePtr);
#endif

void XBpnn_Start(XBpnn *InstancePtr);
u32 XBpnn_IsDone(XBpnn *InstancePtr);
u32 XBpnn_IsIdle(XBpnn *InstancePtr);
u32 XBpnn_IsReady(XBpnn *InstancePtr);
void XBpnn_EnableAutoRestart(XBpnn *InstancePtr);
void XBpnn_DisableAutoRestart(XBpnn *InstancePtr);
u32 XBpnn_Get_return(XBpnn *InstancePtr);

void XBpnn_Set_Thu(XBpnn *InstancePtr, u32 Data);
u32 XBpnn_Get_Thu(XBpnn *InstancePtr);
void XBpnn_Set_Ind(XBpnn *InstancePtr, u32 Data);
u32 XBpnn_Get_Ind(XBpnn *InstancePtr);
void XBpnn_Set_Mid(XBpnn *InstancePtr, u32 Data);
u32 XBpnn_Get_Mid(XBpnn *InstancePtr);
void XBpnn_Set_Rin(XBpnn *InstancePtr, u32 Data);
u32 XBpnn_Get_Rin(XBpnn *InstancePtr);
void XBpnn_Set_Lit(XBpnn *InstancePtr, u32 Data);
u32 XBpnn_Get_Lit(XBpnn *InstancePtr);
void XBpnn_Set_ACC_X(XBpnn *InstancePtr, u32 Data);
u32 XBpnn_Get_ACC_X(XBpnn *InstancePtr);
void XBpnn_Set_ACC_Y(XBpnn *InstancePtr, u32 Data);
u32 XBpnn_Get_ACC_Y(XBpnn *InstancePtr);
void XBpnn_Set_ACC_Z(XBpnn *InstancePtr, u32 Data);
u32 XBpnn_Get_ACC_Z(XBpnn *InstancePtr);

void XBpnn_InterruptGlobalEnable(XBpnn *InstancePtr);
void XBpnn_InterruptGlobalDisable(XBpnn *InstancePtr);
void XBpnn_InterruptEnable(XBpnn *InstancePtr, u32 Mask);
void XBpnn_InterruptDisable(XBpnn *InstancePtr, u32 Mask);
void XBpnn_InterruptClear(XBpnn *InstancePtr, u32 Mask);
u32 XBpnn_InterruptGetEnabled(XBpnn *InstancePtr);
u32 XBpnn_InterruptGetStatus(XBpnn *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
