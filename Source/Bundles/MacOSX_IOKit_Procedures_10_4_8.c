/*
	
	MacOSX_Procedures.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

/* --------------------- Start User created functions -------------------------------- */

/* --------------------- End User created functions -------------------------------- */

	VPL_Parameter _IOBlitterPtr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOBlitterPtr_6 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOBlitterPtr_5 = { kPointerType,88,"IOBlitOperationStruct",1,0,&_IOBlitterPtr_6};
	VPL_Parameter _IOBlitterPtr_4 = { kUnsignedType,4,NULL,0,0,&_IOBlitterPtr_5};
	VPL_Parameter _IOBlitterPtr_3 = { kUnsignedType,4,NULL,0,0,&_IOBlitterPtr_4};
	VPL_Parameter _IOBlitterPtr_2 = { kUnsignedType,4,NULL,0,0,&_IOBlitterPtr_3};
	VPL_Parameter _IOBlitterPtr_1 = { kPointerType,0,"void",1,0,&_IOBlitterPtr_2};
	VPL_ExtProcedure _IOBlitterPtr_F = {"IOBlitterPtr",NULL,&_IOBlitterPtr_1,&_IOBlitterPtr_R};

	VPL_Parameter _IOBlitProcPtr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOBlitProcPtr_8 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IOBlitProcPtr_7 = { kPointerType,0,"void",1,0,&_IOBlitProcPtr_8};
	VPL_Parameter _IOBlitProcPtr_6 = { kPointerType,0,"void",1,0,&_IOBlitProcPtr_7};
	VPL_Parameter _IOBlitProcPtr_5 = { kPointerType,88,"IOBlitOperationStruct",1,0,&_IOBlitProcPtr_6};
	VPL_Parameter _IOBlitProcPtr_4 = { kUnsignedType,4,NULL,0,0,&_IOBlitProcPtr_5};
	VPL_Parameter _IOBlitProcPtr_3 = { kUnsignedType,4,NULL,0,0,&_IOBlitProcPtr_4};
	VPL_Parameter _IOBlitProcPtr_2 = { kUnsignedType,4,NULL,0,0,&_IOBlitProcPtr_3};
	VPL_Parameter _IOBlitProcPtr_1 = { kPointerType,0,"void",1,0,&_IOBlitProcPtr_2};
	VPL_ExtProcedure _IOBlitProcPtr_F = {"IOBlitProcPtr",NULL,&_IOBlitProcPtr_1,&_IOBlitProcPtr_R};

	VPL_Parameter _IOBlitAccumulatePtr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOBlitAccumulatePtr_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOBlitAccumulatePtr_6 = { kIntType,4,NULL,0,0,&_IOBlitAccumulatePtr_7};
	VPL_Parameter _IOBlitAccumulatePtr_5 = { kIntType,4,NULL,0,0,&_IOBlitAccumulatePtr_6};
	VPL_Parameter _IOBlitAccumulatePtr_4 = { kIntType,4,NULL,0,0,&_IOBlitAccumulatePtr_5};
	VPL_Parameter _IOBlitAccumulatePtr_3 = { kIntType,4,NULL,0,0,&_IOBlitAccumulatePtr_4};
	VPL_Parameter _IOBlitAccumulatePtr_2 = { kIntType,4,NULL,0,0,&_IOBlitAccumulatePtr_3};
	VPL_Parameter _IOBlitAccumulatePtr_1 = { kPointerType,0,"void",1,0,&_IOBlitAccumulatePtr_2};
	VPL_ExtProcedure _IOBlitAccumulatePtr_F = {"IOBlitAccumulatePtr",NULL,&_IOBlitAccumulatePtr_1,&_IOBlitAccumulatePtr_R};

	VPL_Parameter _IOUSBLowLatencyIsocCompletionAction_4 = { kPointerType,16,"IOUSBLowLatencyIsocFrame",1,0,NULL};
	VPL_Parameter _IOUSBLowLatencyIsocCompletionAction_3 = { kIntType,4,NULL,0,0,&_IOUSBLowLatencyIsocCompletionAction_4};
	VPL_Parameter _IOUSBLowLatencyIsocCompletionAction_2 = { kPointerType,0,"void",1,0,&_IOUSBLowLatencyIsocCompletionAction_3};
	VPL_Parameter _IOUSBLowLatencyIsocCompletionAction_1 = { kPointerType,0,"void",1,0,&_IOUSBLowLatencyIsocCompletionAction_2};
	VPL_ExtProcedure _IOUSBLowLatencyIsocCompletionAction_F = {"IOUSBLowLatencyIsocCompletionAction",NULL,&_IOUSBLowLatencyIsocCompletionAction_1,NULL};

	VPL_Parameter _IOUSBIsocCompletionAction_4 = { kPointerType,8,"IOUSBIsocFrame",1,0,NULL};
	VPL_Parameter _IOUSBIsocCompletionAction_3 = { kIntType,4,NULL,0,0,&_IOUSBIsocCompletionAction_4};
	VPL_Parameter _IOUSBIsocCompletionAction_2 = { kPointerType,0,"void",1,0,&_IOUSBIsocCompletionAction_3};
	VPL_Parameter _IOUSBIsocCompletionAction_1 = { kPointerType,0,"void",1,0,&_IOUSBIsocCompletionAction_2};
	VPL_ExtProcedure _IOUSBIsocCompletionAction_F = {"IOUSBIsocCompletionAction",NULL,&_IOUSBIsocCompletionAction_1,NULL};

	VPL_Parameter _IOUSBCompletionActionWithTimeStamp_5 = { kStructureType,8,"UnsignedWide",0,0,NULL};
	VPL_Parameter _IOUSBCompletionActionWithTimeStamp_4 = { kUnsignedType,4,NULL,0,0,&_IOUSBCompletionActionWithTimeStamp_5};
	VPL_Parameter _IOUSBCompletionActionWithTimeStamp_3 = { kIntType,4,NULL,0,0,&_IOUSBCompletionActionWithTimeStamp_4};
	VPL_Parameter _IOUSBCompletionActionWithTimeStamp_2 = { kPointerType,0,"void",1,0,&_IOUSBCompletionActionWithTimeStamp_3};
	VPL_Parameter _IOUSBCompletionActionWithTimeStamp_1 = { kPointerType,0,"void",1,0,&_IOUSBCompletionActionWithTimeStamp_2};
	VPL_ExtProcedure _IOUSBCompletionActionWithTimeStamp_F = {"IOUSBCompletionActionWithTimeStamp",NULL,&_IOUSBCompletionActionWithTimeStamp_1,NULL};

	VPL_Parameter _IOUSBCompletionAction_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOUSBCompletionAction_3 = { kIntType,4,NULL,0,0,&_IOUSBCompletionAction_4};
	VPL_Parameter _IOUSBCompletionAction_2 = { kPointerType,0,"void",1,0,&_IOUSBCompletionAction_3};
	VPL_Parameter _IOUSBCompletionAction_1 = { kPointerType,0,"void",1,0,&_IOUSBCompletionAction_2};
	VPL_ExtProcedure _IOUSBCompletionAction_F = {"IOUSBCompletionAction",NULL,&_IOUSBCompletionAction_1,NULL};

	VPL_Parameter _IOAsyncCallback_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOAsyncCallback_3 = { kPointerType,0,"void",2,0,&_IOAsyncCallback_4};
	VPL_Parameter _IOAsyncCallback_2 = { kIntType,4,NULL,0,0,&_IOAsyncCallback_3};
	VPL_Parameter _IOAsyncCallback_1 = { kPointerType,0,"void",1,0,&_IOAsyncCallback_2};
	VPL_ExtProcedure _IOAsyncCallback_F = {"IOAsyncCallback",NULL,&_IOAsyncCallback_1,NULL};

	VPL_Parameter _IOAsyncCallback2_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOAsyncCallback2_3 = { kPointerType,0,"void",1,0,&_IOAsyncCallback2_4};
	VPL_Parameter _IOAsyncCallback2_2 = { kIntType,4,NULL,0,0,&_IOAsyncCallback2_3};
	VPL_Parameter _IOAsyncCallback2_1 = { kPointerType,0,"void",1,0,&_IOAsyncCallback2_2};
	VPL_ExtProcedure _IOAsyncCallback2_F = {"IOAsyncCallback2",NULL,&_IOAsyncCallback2_1,NULL};

	VPL_Parameter _IOAsyncCallback1_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOAsyncCallback1_2 = { kIntType,4,NULL,0,0,&_IOAsyncCallback1_3};
	VPL_Parameter _IOAsyncCallback1_1 = { kPointerType,0,"void",1,0,&_IOAsyncCallback1_2};
	VPL_ExtProcedure _IOAsyncCallback1_F = {"IOAsyncCallback1",NULL,&_IOAsyncCallback1_1,NULL};

	VPL_Parameter _IOAsyncCallback0_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOAsyncCallback0_1 = { kPointerType,0,"void",1,0,&_IOAsyncCallback0_2};
	VPL_ExtProcedure _IOAsyncCallback0_F = {"IOAsyncCallback0",NULL,&_IOAsyncCallback0_1,NULL};

	VPL_Parameter _IOServiceInterestCallback_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOServiceInterestCallback_3 = { kUnsignedType,4,NULL,0,0,&_IOServiceInterestCallback_4};
	VPL_Parameter _IOServiceInterestCallback_2 = { kUnsignedType,4,NULL,0,0,&_IOServiceInterestCallback_3};
	VPL_Parameter _IOServiceInterestCallback_1 = { kPointerType,0,"void",1,0,&_IOServiceInterestCallback_2};
	VPL_ExtProcedure _IOServiceInterestCallback_F = {"IOServiceInterestCallback",NULL,&_IOServiceInterestCallback_1,NULL};

	VPL_Parameter _IOServiceMatchingCallback_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceMatchingCallback_1 = { kPointerType,0,"void",1,0,&_IOServiceMatchingCallback_2};
	VPL_ExtProcedure _IOServiceMatchingCallback_F = {"IOServiceMatchingCallback",NULL,&_IOServiceMatchingCallback_1,NULL};

	VPL_Parameter _mach_error_fn_t_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _mach_error_fn_t_F = {"mach_error_fn_t",NULL,NULL,&_mach_error_fn_t_R};

	VPL_Parameter _UniversalProcPtr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _UniversalProcPtr_F = {"UniversalProcPtr",NULL,NULL,&_UniversalProcPtr_R};

	VPL_ExtProcedure _Register68kProcPtr_F = {"Register68kProcPtr",NULL,NULL,NULL};

	VPL_Parameter _ProcPtr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ProcPtr_F = {"ProcPtr",NULL,NULL,&_ProcPtr_R};


	VPL_Parameter _IOFBMemoryCopy_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBMemoryCopy_8 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IOFBMemoryCopy_7 = { kUnsignedType,4,NULL,0,0,&_IOFBMemoryCopy_8};
	VPL_Parameter _IOFBMemoryCopy_6 = { kUnsignedType,4,NULL,0,0,&_IOFBMemoryCopy_7};
	VPL_Parameter _IOFBMemoryCopy_5 = { kUnsignedType,4,NULL,0,0,&_IOFBMemoryCopy_6};
	VPL_Parameter _IOFBMemoryCopy_4 = { kUnsignedType,4,NULL,0,0,&_IOFBMemoryCopy_5};
	VPL_Parameter _IOFBMemoryCopy_3 = { kUnsignedType,4,NULL,0,0,&_IOFBMemoryCopy_4};
	VPL_Parameter _IOFBMemoryCopy_2 = { kUnsignedType,4,NULL,0,0,&_IOFBMemoryCopy_3};
	VPL_Parameter _IOFBMemoryCopy_1 = { kPointerType,0,"void",1,0,&_IOFBMemoryCopy_2};
	VPL_ExtProcedure _IOFBMemoryCopy_F = {"IOFBMemoryCopy",IOFBMemoryCopy,&_IOFBMemoryCopy_1,&_IOFBMemoryCopy_R};

	VPL_Parameter _IOFBBeamPosition_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBBeamPosition_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IOFBBeamPosition_2 = { kUnsignedType,4,NULL,0,0,&_IOFBBeamPosition_3};
	VPL_Parameter _IOFBBeamPosition_1 = { kPointerType,0,"void",1,0,&_IOFBBeamPosition_2};
	VPL_ExtProcedure _IOFBBeamPosition_F = {"IOFBBeamPosition",IOFBBeamPosition,&_IOFBBeamPosition_1,&_IOFBBeamPosition_R};

	VPL_Parameter _IOFBSynchronize_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSynchronize_6 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSynchronize_5 = { kUnsignedType,4,NULL,0,0,&_IOFBSynchronize_6};
	VPL_Parameter _IOFBSynchronize_4 = { kUnsignedType,4,NULL,0,0,&_IOFBSynchronize_5};
	VPL_Parameter _IOFBSynchronize_3 = { kUnsignedType,4,NULL,0,0,&_IOFBSynchronize_4};
	VPL_Parameter _IOFBSynchronize_2 = { kUnsignedType,4,NULL,0,0,&_IOFBSynchronize_3};
	VPL_Parameter _IOFBSynchronize_1 = { kPointerType,0,"void",1,0,&_IOFBSynchronize_2};
	VPL_ExtProcedure _IOFBSynchronize_F = {"IOFBSynchronize",IOFBSynchronize,&_IOFBSynchronize_1,&_IOFBSynchronize_R};

	VPL_Parameter _IOFBBlitSurfaceSurfaceCopy_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBBlitSurfaceSurfaceCopy_7 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBBlitSurfaceSurfaceCopy_6 = { kUnsignedType,4,NULL,0,0,&_IOFBBlitSurfaceSurfaceCopy_7};
	VPL_Parameter _IOFBBlitSurfaceSurfaceCopy_5 = { kPointerType,24,"IOAccelDeviceRegion",1,0,&_IOFBBlitSurfaceSurfaceCopy_6};
	VPL_Parameter _IOFBBlitSurfaceSurfaceCopy_4 = { kPointerType,0,"void",1,0,&_IOFBBlitSurfaceSurfaceCopy_5};
	VPL_Parameter _IOFBBlitSurfaceSurfaceCopy_3 = { kPointerType,0,"void",1,0,&_IOFBBlitSurfaceSurfaceCopy_4};
	VPL_Parameter _IOFBBlitSurfaceSurfaceCopy_2 = { kUnsignedType,4,NULL,0,0,&_IOFBBlitSurfaceSurfaceCopy_3};
	VPL_Parameter _IOFBBlitSurfaceSurfaceCopy_1 = { kPointerType,0,"void",1,0,&_IOFBBlitSurfaceSurfaceCopy_2};
	VPL_ExtProcedure _IOFBBlitSurfaceSurfaceCopy_F = {"IOFBBlitSurfaceSurfaceCopy",IOFBBlitSurfaceSurfaceCopy,&_IOFBBlitSurfaceSurfaceCopy_1,&_IOFBBlitSurfaceSurfaceCopy_R};

	VPL_Parameter _IOFBBlitSurfaceCopy_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBBlitSurfaceCopy_6 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBBlitSurfaceCopy_5 = { kUnsignedType,4,NULL,0,0,&_IOFBBlitSurfaceCopy_6};
	VPL_Parameter _IOFBBlitSurfaceCopy_4 = { kPointerType,24,"IOAccelDeviceRegion",1,0,&_IOFBBlitSurfaceCopy_5};
	VPL_Parameter _IOFBBlitSurfaceCopy_3 = { kPointerType,0,"void",1,0,&_IOFBBlitSurfaceCopy_4};
	VPL_Parameter _IOFBBlitSurfaceCopy_2 = { kUnsignedType,4,NULL,0,0,&_IOFBBlitSurfaceCopy_3};
	VPL_Parameter _IOFBBlitSurfaceCopy_1 = { kPointerType,0,"void",1,0,&_IOFBBlitSurfaceCopy_2};
	VPL_ExtProcedure _IOFBBlitSurfaceCopy_F = {"IOFBBlitSurfaceCopy",IOFBBlitSurfaceCopy,&_IOFBBlitSurfaceCopy_1,&_IOFBBlitSurfaceCopy_R};

	VPL_Parameter _IOFBBlitVRAMCopy_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBBlitVRAMCopy_8 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBBlitVRAMCopy_7 = { kIntType,4,NULL,0,0,&_IOFBBlitVRAMCopy_8};
	VPL_Parameter _IOFBBlitVRAMCopy_6 = { kIntType,4,NULL,0,0,&_IOFBBlitVRAMCopy_7};
	VPL_Parameter _IOFBBlitVRAMCopy_5 = { kIntType,4,NULL,0,0,&_IOFBBlitVRAMCopy_6};
	VPL_Parameter _IOFBBlitVRAMCopy_4 = { kIntType,4,NULL,0,0,&_IOFBBlitVRAMCopy_5};
	VPL_Parameter _IOFBBlitVRAMCopy_3 = { kIntType,4,NULL,0,0,&_IOFBBlitVRAMCopy_4};
	VPL_Parameter _IOFBBlitVRAMCopy_2 = { kIntType,4,NULL,0,0,&_IOFBBlitVRAMCopy_3};
	VPL_Parameter _IOFBBlitVRAMCopy_1 = { kPointerType,0,"void",1,0,&_IOFBBlitVRAMCopy_2};
	VPL_ExtProcedure _IOFBBlitVRAMCopy_F = {"IOFBBlitVRAMCopy",IOFBBlitVRAMCopy,&_IOFBBlitVRAMCopy_1,&_IOFBBlitVRAMCopy_R};

	VPL_Parameter _IOPSBlitInvert_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitInvert_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitInvert_4 = { kIntType,4,NULL,0,0,&_IOPSBlitInvert_5};
	VPL_Parameter _IOPSBlitInvert_3 = { kIntType,4,NULL,0,0,&_IOPSBlitInvert_4};
	VPL_Parameter _IOPSBlitInvert_2 = { kIntType,4,NULL,0,0,&_IOPSBlitInvert_3};
	VPL_Parameter _IOPSBlitInvert_1 = { kPointerType,0,"void",1,0,&_IOPSBlitInvert_2};
	VPL_ExtProcedure _IOPSBlitInvert_F = {"IOPSBlitInvert",IOPSBlitInvert,&_IOPSBlitInvert_1,&_IOPSBlitInvert_R};

	VPL_Parameter _IOPSBlitCopy_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitCopy_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitCopy_6 = { kIntType,4,NULL,0,0,&_IOPSBlitCopy_7};
	VPL_Parameter _IOPSBlitCopy_5 = { kIntType,4,NULL,0,0,&_IOPSBlitCopy_6};
	VPL_Parameter _IOPSBlitCopy_4 = { kIntType,4,NULL,0,0,&_IOPSBlitCopy_5};
	VPL_Parameter _IOPSBlitCopy_3 = { kIntType,4,NULL,0,0,&_IOPSBlitCopy_4};
	VPL_Parameter _IOPSBlitCopy_2 = { kIntType,4,NULL,0,0,&_IOPSBlitCopy_3};
	VPL_Parameter _IOPSBlitCopy_1 = { kPointerType,0,"void",1,0,&_IOPSBlitCopy_2};
	VPL_ExtProcedure _IOPSBlitCopy_F = {"IOPSBlitCopy",IOPSBlitCopy,&_IOPSBlitCopy_1,&_IOPSBlitCopy_R};

	VPL_Parameter _IOPSBlitFill_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitFill_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitFill_5 = { kIntType,4,NULL,0,0,&_IOPSBlitFill_6};
	VPL_Parameter _IOPSBlitFill_4 = { kIntType,4,NULL,0,0,&_IOPSBlitFill_5};
	VPL_Parameter _IOPSBlitFill_3 = { kIntType,4,NULL,0,0,&_IOPSBlitFill_4};
	VPL_Parameter _IOPSBlitFill_2 = { kIntType,4,NULL,0,0,&_IOPSBlitFill_3};
	VPL_Parameter _IOPSBlitFill_1 = { kPointerType,0,"void",1,0,&_IOPSBlitFill_2};
	VPL_ExtProcedure _IOPSBlitFill_F = {"IOPSBlitFill",IOPSBlitFill,&_IOPSBlitFill_1,&_IOPSBlitFill_R};

	VPL_Parameter _IOPSBlitIdle_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitIdle_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _IOPSBlitIdle_F = {"IOPSBlitIdle",IOPSBlitIdle,&_IOPSBlitIdle_1,&_IOPSBlitIdle_R};

	VPL_Parameter _IOPSBlitDeallocate_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitDeallocate_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _IOPSBlitDeallocate_F = {"IOPSBlitDeallocate",IOPSBlitDeallocate,&_IOPSBlitDeallocate_1,&_IOPSBlitDeallocate_R};

	VPL_Parameter _IOPSBlitReset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSBlitReset_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _IOPSBlitReset_F = {"IOPSBlitReset",IOPSBlitReset,&_IOPSBlitReset_1,&_IOPSBlitReset_R};

	VPL_Parameter _IOPSAllocateBlitEngine_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPSAllocateBlitEngine_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _IOPSAllocateBlitEngine_2 = { kPointerType,0,"void",2,0,&_IOPSAllocateBlitEngine_3};
	VPL_Parameter _IOPSAllocateBlitEngine_1 = { kUnsignedType,4,NULL,0,0,&_IOPSAllocateBlitEngine_2};
	VPL_ExtProcedure _IOPSAllocateBlitEngine_F = {"IOPSAllocateBlitEngine",IOPSAllocateBlitEngine,&_IOPSAllocateBlitEngine_1,&_IOPSAllocateBlitEngine_R};

	VPL_Parameter _IOFBAcknowledgePM_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBAcknowledgePM_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOFBAcknowledgePM_F = {"IOFBAcknowledgePM",IOFBAcknowledgePM,&_IOFBAcknowledgePM_1,&_IOFBAcknowledgePM_R};

	VPL_Parameter _IOFBSetCursorPosition_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetCursorPosition_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetCursorPosition_2 = { kIntType,4,NULL,0,0,&_IOFBSetCursorPosition_3};
	VPL_Parameter _IOFBSetCursorPosition_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetCursorPosition_2};
	VPL_ExtProcedure _IOFBSetCursorPosition_F = {"IOFBSetCursorPosition",IOFBSetCursorPosition,&_IOFBSetCursorPosition_1,&_IOFBSetCursorPosition_R};

	VPL_Parameter _IOFBSetCursorVisible_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetCursorVisible_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetCursorVisible_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetCursorVisible_2};
	VPL_ExtProcedure _IOFBSetCursorVisible_F = {"IOFBSetCursorVisible",IOFBSetCursorVisible,&_IOFBSetCursorVisible_1,&_IOFBSetCursorVisible_R};

	VPL_Parameter _IOFBSetNewCursor_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetNewCursor_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetNewCursor_3 = { kIntType,4,NULL,0,0,&_IOFBSetNewCursor_4};
	VPL_Parameter _IOFBSetNewCursor_2 = { kPointerType,0,"void",1,0,&_IOFBSetNewCursor_3};
	VPL_Parameter _IOFBSetNewCursor_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetNewCursor_2};
	VPL_ExtProcedure _IOFBSetNewCursor_F = {"IOFBSetNewCursor",IOFBSetNewCursor,&_IOFBSetNewCursor_1,&_IOFBSetNewCursor_R};

	VPL_Parameter _IODisplayCommitParameters_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayCommitParameters_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayCommitParameters_1 = { kUnsignedType,4,NULL,0,0,&_IODisplayCommitParameters_2};
	VPL_ExtProcedure _IODisplayCommitParameters_F = {"IODisplayCommitParameters",IODisplayCommitParameters,&_IODisplayCommitParameters_1,&_IODisplayCommitParameters_R};

	VPL_Parameter _IODisplayGetIntegerRangeParameter_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_6 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_5 = { kPointerType,4,"long int",1,0,&_IODisplayGetIntegerRangeParameter_6};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_4 = { kPointerType,4,"long int",1,0,&_IODisplayGetIntegerRangeParameter_5};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_3 = { kPointerType,0,"__CFString",1,1,&_IODisplayGetIntegerRangeParameter_4};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_2 = { kUnsignedType,4,NULL,0,0,&_IODisplayGetIntegerRangeParameter_3};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_1 = { kUnsignedType,4,NULL,0,0,&_IODisplayGetIntegerRangeParameter_2};
	VPL_ExtProcedure _IODisplayGetIntegerRangeParameter_F = {"IODisplayGetIntegerRangeParameter",IODisplayGetIntegerRangeParameter,&_IODisplayGetIntegerRangeParameter_1,&_IODisplayGetIntegerRangeParameter_R};

	VPL_Parameter _IODisplayGetFloatParameter_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayGetFloatParameter_4 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _IODisplayGetFloatParameter_3 = { kPointerType,0,"__CFString",1,1,&_IODisplayGetFloatParameter_4};
	VPL_Parameter _IODisplayGetFloatParameter_2 = { kUnsignedType,4,NULL,0,0,&_IODisplayGetFloatParameter_3};
	VPL_Parameter _IODisplayGetFloatParameter_1 = { kUnsignedType,4,NULL,0,0,&_IODisplayGetFloatParameter_2};
	VPL_ExtProcedure _IODisplayGetFloatParameter_F = {"IODisplayGetFloatParameter",IODisplayGetFloatParameter,&_IODisplayGetFloatParameter_1,&_IODisplayGetFloatParameter_R};

	VPL_Parameter _IODisplayCopyFloatParameters_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayCopyFloatParameters_3 = { kPointerType,0,"__CFDictionary",2,0,NULL};
	VPL_Parameter _IODisplayCopyFloatParameters_2 = { kUnsignedType,4,NULL,0,0,&_IODisplayCopyFloatParameters_3};
	VPL_Parameter _IODisplayCopyFloatParameters_1 = { kUnsignedType,4,NULL,0,0,&_IODisplayCopyFloatParameters_2};
	VPL_ExtProcedure _IODisplayCopyFloatParameters_F = {"IODisplayCopyFloatParameters",IODisplayCopyFloatParameters,&_IODisplayCopyFloatParameters_1,&_IODisplayCopyFloatParameters_R};

	VPL_Parameter _IODisplayCopyParameters_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayCopyParameters_3 = { kPointerType,0,"__CFDictionary",2,0,NULL};
	VPL_Parameter _IODisplayCopyParameters_2 = { kUnsignedType,4,NULL,0,0,&_IODisplayCopyParameters_3};
	VPL_Parameter _IODisplayCopyParameters_1 = { kUnsignedType,4,NULL,0,0,&_IODisplayCopyParameters_2};
	VPL_ExtProcedure _IODisplayCopyParameters_F = {"IODisplayCopyParameters",IODisplayCopyParameters,&_IODisplayCopyParameters_1,&_IODisplayCopyParameters_R};

	VPL_Parameter _IODisplaySetIntegerParameter_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplaySetIntegerParameter_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplaySetIntegerParameter_3 = { kPointerType,0,"__CFString",1,1,&_IODisplaySetIntegerParameter_4};
	VPL_Parameter _IODisplaySetIntegerParameter_2 = { kUnsignedType,4,NULL,0,0,&_IODisplaySetIntegerParameter_3};
	VPL_Parameter _IODisplaySetIntegerParameter_1 = { kUnsignedType,4,NULL,0,0,&_IODisplaySetIntegerParameter_2};
	VPL_ExtProcedure _IODisplaySetIntegerParameter_F = {"IODisplaySetIntegerParameter",IODisplaySetIntegerParameter,&_IODisplaySetIntegerParameter_1,&_IODisplaySetIntegerParameter_R};

	VPL_Parameter _IODisplaySetFloatParameter_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplaySetFloatParameter_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplaySetFloatParameter_3 = { kPointerType,0,"__CFString",1,1,&_IODisplaySetFloatParameter_4};
	VPL_Parameter _IODisplaySetFloatParameter_2 = { kUnsignedType,4,NULL,0,0,&_IODisplaySetFloatParameter_3};
	VPL_Parameter _IODisplaySetFloatParameter_1 = { kUnsignedType,4,NULL,0,0,&_IODisplaySetFloatParameter_2};
	VPL_ExtProcedure _IODisplaySetFloatParameter_F = {"IODisplaySetFloatParameter",IODisplaySetFloatParameter,&_IODisplaySetFloatParameter_1,&_IODisplaySetFloatParameter_R};

	VPL_Parameter _IODisplaySetParameters_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplaySetParameters_3 = { kPointerType,0,"__CFDictionary",1,1,NULL};
	VPL_Parameter _IODisplaySetParameters_2 = { kUnsignedType,4,NULL,0,0,&_IODisplaySetParameters_3};
	VPL_Parameter _IODisplaySetParameters_1 = { kUnsignedType,4,NULL,0,0,&_IODisplaySetParameters_2};
	VPL_ExtProcedure _IODisplaySetParameters_F = {"IODisplaySetParameters",IODisplaySetParameters,&_IODisplaySetParameters_1,&_IODisplaySetParameters_R};

	VPL_Parameter _IODisplayMatchDictionaries_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayMatchDictionaries_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayMatchDictionaries_2 = { kPointerType,0,"__CFDictionary",1,1,&_IODisplayMatchDictionaries_3};
	VPL_Parameter _IODisplayMatchDictionaries_1 = { kPointerType,0,"__CFDictionary",1,1,&_IODisplayMatchDictionaries_2};
	VPL_ExtProcedure _IODisplayMatchDictionaries_F = {"IODisplayMatchDictionaries",IODisplayMatchDictionaries,&_IODisplayMatchDictionaries_1,&_IODisplayMatchDictionaries_R};

	VPL_Parameter _IODisplayCreateInfoDictionary_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IODisplayCreateInfoDictionary_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayCreateInfoDictionary_1 = { kUnsignedType,4,NULL,0,0,&_IODisplayCreateInfoDictionary_2};
	VPL_ExtProcedure _IODisplayCreateInfoDictionary_F = {"IODisplayCreateInfoDictionary",IODisplayCreateInfoDictionary,&_IODisplayCreateInfoDictionary_1,&_IODisplayCreateInfoDictionary_R};

	VPL_Parameter _IOFBGetPixelInfoDictionary_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOFBGetPixelInfoDictionary_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetPixelInfoDictionary_2 = { kIntType,4,NULL,0,0,&_IOFBGetPixelInfoDictionary_3};
	VPL_Parameter _IOFBGetPixelInfoDictionary_1 = { kPointerType,0,"__CFDictionary",1,1,&_IOFBGetPixelInfoDictionary_2};
	VPL_ExtProcedure _IOFBGetPixelInfoDictionary_F = {"IOFBGetPixelInfoDictionary",IOFBGetPixelInfoDictionary,&_IOFBGetPixelInfoDictionary_1,&_IOFBGetPixelInfoDictionary_R};

	VPL_Parameter _IOFBCreateDisplayModeDictionary_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOFBCreateDisplayModeDictionary_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBCreateDisplayModeDictionary_1 = { kUnsignedType,4,NULL,0,0,&_IOFBCreateDisplayModeDictionary_2};
	VPL_ExtProcedure _IOFBCreateDisplayModeDictionary_F = {"IOFBCreateDisplayModeDictionary",IOFBCreateDisplayModeDictionary,&_IOFBCreateDisplayModeDictionary_1,&_IOFBCreateDisplayModeDictionary_R};

	VPL_Parameter _IOFBSetAttributeForFramebuffer_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetAttributeForFramebuffer_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetAttributeForFramebuffer_3 = { kUnsignedType,4,NULL,0,0,&_IOFBSetAttributeForFramebuffer_4};
	VPL_Parameter _IOFBSetAttributeForFramebuffer_2 = { kUnsignedType,4,NULL,0,0,&_IOFBSetAttributeForFramebuffer_3};
	VPL_Parameter _IOFBSetAttributeForFramebuffer_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetAttributeForFramebuffer_2};
	VPL_ExtProcedure _IOFBSetAttributeForFramebuffer_F = {"IOFBSetAttributeForFramebuffer",IOFBSetAttributeForFramebuffer,&_IOFBSetAttributeForFramebuffer_1,&_IOFBSetAttributeForFramebuffer_R};

	VPL_Parameter _IOFBGetAttributeForFramebuffer_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetAttributeForFramebuffer_4 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _IOFBGetAttributeForFramebuffer_3 = { kUnsignedType,4,NULL,0,0,&_IOFBGetAttributeForFramebuffer_4};
	VPL_Parameter _IOFBGetAttributeForFramebuffer_2 = { kUnsignedType,4,NULL,0,0,&_IOFBGetAttributeForFramebuffer_3};
	VPL_Parameter _IOFBGetAttributeForFramebuffer_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetAttributeForFramebuffer_2};
	VPL_ExtProcedure _IOFBGetAttributeForFramebuffer_F = {"IOFBGetAttributeForFramebuffer",IOFBGetAttributeForFramebuffer,&_IOFBGetAttributeForFramebuffer_1,&_IOFBGetAttributeForFramebuffer_R};

	VPL_Parameter _IOFBGetConnectState_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetConnectState_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _IOFBGetConnectState_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetConnectState_2};
	VPL_ExtProcedure _IOFBGetConnectState_F = {"IOFBGetConnectState",IOFBGetConnectState,&_IOFBGetConnectState_1,&_IOFBGetConnectState_R};

	VPL_Parameter _IOFBAcknowledgeNotification_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBAcknowledgeNotification_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _IOFBAcknowledgeNotification_F = {"IOFBAcknowledgeNotification",IOFBAcknowledgeNotification,&_IOFBAcknowledgeNotification_1,&_IOFBAcknowledgeNotification_R};

	VPL_Parameter _IOFBDispatchMessageNotification_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBDispatchMessageNotification_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOFBDispatchMessageNotification_4 = { kPointerType,12,"IOFBMessageCallbacks",1,1,&_IOFBDispatchMessageNotification_5};
	VPL_Parameter _IOFBDispatchMessageNotification_3 = { kUnsignedType,4,NULL,0,0,&_IOFBDispatchMessageNotification_4};
	VPL_Parameter _IOFBDispatchMessageNotification_2 = { kPointerType,24,"mach_msg_header_t",1,0,&_IOFBDispatchMessageNotification_3};
	VPL_Parameter _IOFBDispatchMessageNotification_1 = { kUnsignedType,4,NULL,0,0,&_IOFBDispatchMessageNotification_2};
	VPL_ExtProcedure _IOFBDispatchMessageNotification_F = {"IOFBDispatchMessageNotification",IOFBDispatchMessageNotification,&_IOFBDispatchMessageNotification_1,&_IOFBDispatchMessageNotification_R};

	VPL_Parameter _IOFBGetNotificationMachPort_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetNotificationMachPort_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOFBGetNotificationMachPort_F = {"IOFBGetNotificationMachPort",IOFBGetNotificationMachPort,&_IOFBGetNotificationMachPort_1,&_IOFBGetNotificationMachPort_R};

	VPL_Parameter _IOFBGetDefaultDisplayMode_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetDefaultDisplayMode_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IOFBGetDefaultDisplayMode_2 = { kPointerType,4,"long int",1,0,&_IOFBGetDefaultDisplayMode_3};
	VPL_Parameter _IOFBGetDefaultDisplayMode_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetDefaultDisplayMode_2};
	VPL_ExtProcedure _IOFBGetDefaultDisplayMode_F = {"IOFBGetDefaultDisplayMode",IOFBGetDefaultDisplayMode,&_IOFBGetDefaultDisplayMode_1,&_IOFBGetDefaultDisplayMode_R};

	VPL_Parameter _IOFBSetStartupDisplayModeAndDepth_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetStartupDisplayModeAndDepth_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetStartupDisplayModeAndDepth_2 = { kIntType,4,NULL,0,0,&_IOFBSetStartupDisplayModeAndDepth_3};
	VPL_Parameter _IOFBSetStartupDisplayModeAndDepth_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetStartupDisplayModeAndDepth_2};
	VPL_ExtProcedure _IOFBSetStartupDisplayModeAndDepth_F = {"IOFBSetStartupDisplayModeAndDepth",IOFBSetStartupDisplayModeAndDepth,&_IOFBSetStartupDisplayModeAndDepth_1,&_IOFBSetStartupDisplayModeAndDepth_R};

	VPL_Parameter _IOFBSetDisplayModeAndDepth_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetDisplayModeAndDepth_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetDisplayModeAndDepth_2 = { kIntType,4,NULL,0,0,&_IOFBSetDisplayModeAndDepth_3};
	VPL_Parameter _IOFBSetDisplayModeAndDepth_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetDisplayModeAndDepth_2};
	VPL_ExtProcedure _IOFBSetDisplayModeAndDepth_F = {"IOFBSetDisplayModeAndDepth",IOFBSetDisplayModeAndDepth,&_IOFBSetDisplayModeAndDepth_1,&_IOFBSetDisplayModeAndDepth_R};

	VPL_Parameter _IOFBGetPixelInformation_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetPixelInformation_5 = { kPointerType,172,"IOPixelInformation",1,0,NULL};
	VPL_Parameter _IOFBGetPixelInformation_4 = { kIntType,4,NULL,0,0,&_IOFBGetPixelInformation_5};
	VPL_Parameter _IOFBGetPixelInformation_3 = { kIntType,4,NULL,0,0,&_IOFBGetPixelInformation_4};
	VPL_Parameter _IOFBGetPixelInformation_2 = { kIntType,4,NULL,0,0,&_IOFBGetPixelInformation_3};
	VPL_Parameter _IOFBGetPixelInformation_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetPixelInformation_2};
	VPL_ExtProcedure _IOFBGetPixelInformation_F = {"IOFBGetPixelInformation",IOFBGetPixelInformation,&_IOFBGetPixelInformation_1,&_IOFBGetPixelInformation_R};

	VPL_Parameter _IOFBGetPixelFormats_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetPixelFormats_4 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _IOFBGetPixelFormats_3 = { kIntType,4,NULL,0,0,&_IOFBGetPixelFormats_4};
	VPL_Parameter _IOFBGetPixelFormats_2 = { kIntType,4,NULL,0,0,&_IOFBGetPixelFormats_3};
	VPL_Parameter _IOFBGetPixelFormats_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetPixelFormats_2};
	VPL_ExtProcedure _IOFBGetPixelFormats_F = {"IOFBGetPixelFormats",IOFBGetPixelFormats,&_IOFBGetPixelFormats_1,&_IOFBGetPixelFormats_R};

	VPL_Parameter _IOFBGetDisplayModeInformation_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetDisplayModeInformation_3 = { kPointerType,36,"IODisplayModeInformation",1,0,NULL};
	VPL_Parameter _IOFBGetDisplayModeInformation_2 = { kIntType,4,NULL,0,0,&_IOFBGetDisplayModeInformation_3};
	VPL_Parameter _IOFBGetDisplayModeInformation_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetDisplayModeInformation_2};
	VPL_ExtProcedure _IOFBGetDisplayModeInformation_F = {"IOFBGetDisplayModeInformation",IOFBGetDisplayModeInformation,&_IOFBGetDisplayModeInformation_1,&_IOFBGetDisplayModeInformation_R};

	VPL_Parameter _IOFBGetDisplayModes_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetDisplayModes_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IOFBGetDisplayModes_2 = { kUnsignedType,4,NULL,0,0,&_IOFBGetDisplayModes_3};
	VPL_Parameter _IOFBGetDisplayModes_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetDisplayModes_2};
	VPL_ExtProcedure _IOFBGetDisplayModes_F = {"IOFBGetDisplayModes",IOFBGetDisplayModes,&_IOFBGetDisplayModes_1,&_IOFBGetDisplayModes_R};

	VPL_Parameter _IOFBGetDisplayModeCount_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetDisplayModeCount_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _IOFBGetDisplayModeCount_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetDisplayModeCount_2};
	VPL_ExtProcedure _IOFBGetDisplayModeCount_F = {"IOFBGetDisplayModeCount",IOFBGetDisplayModeCount,&_IOFBGetDisplayModeCount_1,&_IOFBGetDisplayModeCount_R};

	VPL_Parameter _IOFBSet555To444Table_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSet555To444Table_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _IOFBSet555To444Table_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSet555To444Table_2};
	VPL_ExtProcedure _IOFBSet555To444Table_F = {"IOFBSet555To444Table",IOFBSet555To444Table,&_IOFBSet555To444Table_1,&_IOFBSet555To444Table_R};

	VPL_Parameter _IOFBSet444To555Table_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSet444To555Table_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _IOFBSet444To555Table_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSet444To555Table_2};
	VPL_ExtProcedure _IOFBSet444To555Table_F = {"IOFBSet444To555Table",IOFBSet444To555Table,&_IOFBSet444To555Table_1,&_IOFBSet444To555Table_R};

	VPL_Parameter _IOFBSet256To888Table_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSet256To888Table_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _IOFBSet256To888Table_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSet256To888Table_2};
	VPL_ExtProcedure _IOFBSet256To888Table_F = {"IOFBSet256To888Table",IOFBSet256To888Table,&_IOFBSet256To888Table_1,&_IOFBSet256To888Table_R};

	VPL_Parameter _IOFBSet888To256Table_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSet888To256Table_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _IOFBSet888To256Table_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSet888To256Table_2};
	VPL_ExtProcedure _IOFBSet888To256Table_F = {"IOFBSet888To256Table",IOFBSet888To256Table,&_IOFBSet888To256Table_1,&_IOFBSet888To256Table_R};

	VPL_Parameter _IOFBSetGamma_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetGamma_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOFBSetGamma_4 = { kUnsignedType,4,NULL,0,0,&_IOFBSetGamma_5};
	VPL_Parameter _IOFBSetGamma_3 = { kUnsignedType,4,NULL,0,0,&_IOFBSetGamma_4};
	VPL_Parameter _IOFBSetGamma_2 = { kUnsignedType,4,NULL,0,0,&_IOFBSetGamma_3};
	VPL_Parameter _IOFBSetGamma_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetGamma_2};
	VPL_ExtProcedure _IOFBSetGamma_F = {"IOFBSetGamma",IOFBSetGamma,&_IOFBSetGamma_1,&_IOFBSetGamma_R};

	VPL_Parameter _IOFBSetCLUT_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetCLUT_5 = { kPointerType,8,"IOColorEntry",1,0,NULL};
	VPL_Parameter _IOFBSetCLUT_4 = { kUnsignedType,4,NULL,0,0,&_IOFBSetCLUT_5};
	VPL_Parameter _IOFBSetCLUT_3 = { kUnsignedType,4,NULL,0,0,&_IOFBSetCLUT_4};
	VPL_Parameter _IOFBSetCLUT_2 = { kUnsignedType,4,NULL,0,0,&_IOFBSetCLUT_3};
	VPL_Parameter _IOFBSetCLUT_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetCLUT_2};
	VPL_ExtProcedure _IOFBSetCLUT_F = {"IOFBSetCLUT",IOFBSetCLUT,&_IOFBSetCLUT_1,&_IOFBSetCLUT_R};

	VPL_Parameter _IOFBGetPixelFormat_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetPixelFormat_5 = { kPointerType,64,"char",2,0,NULL};
	VPL_Parameter _IOFBGetPixelFormat_4 = { kIntType,4,NULL,0,0,&_IOFBGetPixelFormat_5};
	VPL_Parameter _IOFBGetPixelFormat_3 = { kIntType,4,NULL,0,0,&_IOFBGetPixelFormat_4};
	VPL_Parameter _IOFBGetPixelFormat_2 = { kIntType,4,NULL,0,0,&_IOFBGetPixelFormat_3};
	VPL_Parameter _IOFBGetPixelFormat_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetPixelFormat_2};
	VPL_ExtProcedure _IOFBGetPixelFormat_F = {"IOFBGetPixelFormat",IOFBGetPixelFormat,&_IOFBGetPixelFormat_1,&_IOFBGetPixelFormat_R};

	VPL_Parameter _IOFBGetCurrentDisplayModeAndDepth_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetCurrentDisplayModeAndDepth_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IOFBGetCurrentDisplayModeAndDepth_2 = { kPointerType,4,"long int",1,0,&_IOFBGetCurrentDisplayModeAndDepth_3};
	VPL_Parameter _IOFBGetCurrentDisplayModeAndDepth_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetCurrentDisplayModeAndDepth_2};
	VPL_ExtProcedure _IOFBGetCurrentDisplayModeAndDepth_F = {"IOFBGetCurrentDisplayModeAndDepth",IOFBGetCurrentDisplayModeAndDepth,&_IOFBGetCurrentDisplayModeAndDepth_1,&_IOFBGetCurrentDisplayModeAndDepth_R};

	VPL_Parameter _IOFBSetBounds_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBSetBounds_2 = { kPointerType,8,"IOGBounds",1,0,NULL};
	VPL_Parameter _IOFBSetBounds_1 = { kUnsignedType,4,NULL,0,0,&_IOFBSetBounds_2};
	VPL_ExtProcedure _IOFBSetBounds_F = {"IOFBSetBounds",IOFBSetBounds,&_IOFBSetBounds_1,&_IOFBSetBounds_R};

	VPL_Parameter _IOFBGetFramebufferOffsetForAperture_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetFramebufferOffsetForAperture_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _IOFBGetFramebufferOffsetForAperture_2 = { kIntType,4,NULL,0,0,&_IOFBGetFramebufferOffsetForAperture_3};
	VPL_Parameter _IOFBGetFramebufferOffsetForAperture_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetFramebufferOffsetForAperture_2};
	VPL_ExtProcedure _IOFBGetFramebufferOffsetForAperture_F = {"IOFBGetFramebufferOffsetForAperture",IOFBGetFramebufferOffsetForAperture,&_IOFBGetFramebufferOffsetForAperture_1,&_IOFBGetFramebufferOffsetForAperture_R};

	VPL_Parameter _IOFBGetFramebufferInformationForAperture_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBGetFramebufferInformationForAperture_3 = { kPointerType,48,"IOFramebufferInformation",1,0,NULL};
	VPL_Parameter _IOFBGetFramebufferInformationForAperture_2 = { kIntType,4,NULL,0,0,&_IOFBGetFramebufferInformationForAperture_3};
	VPL_Parameter _IOFBGetFramebufferInformationForAperture_1 = { kUnsignedType,4,NULL,0,0,&_IOFBGetFramebufferInformationForAperture_2};
	VPL_ExtProcedure _IOFBGetFramebufferInformationForAperture_F = {"IOFBGetFramebufferInformationForAperture",IOFBGetFramebufferInformationForAperture,&_IOFBGetFramebufferInformationForAperture_1,&_IOFBGetFramebufferInformationForAperture_R};

	VPL_Parameter _IOFBCreateSharedCursor_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBCreateSharedCursor_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFBCreateSharedCursor_3 = { kUnsignedType,4,NULL,0,0,&_IOFBCreateSharedCursor_4};
	VPL_Parameter _IOFBCreateSharedCursor_2 = { kUnsignedType,4,NULL,0,0,&_IOFBCreateSharedCursor_3};
	VPL_Parameter _IOFBCreateSharedCursor_1 = { kUnsignedType,4,NULL,0,0,&_IOFBCreateSharedCursor_2};
	VPL_ExtProcedure _IOFBCreateSharedCursor_F = {"IOFBCreateSharedCursor",IOFBCreateSharedCursor,&_IOFBCreateSharedCursor_1,&_IOFBCreateSharedCursor_R};

	VPL_Parameter _IOFramebufferOpen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOFramebufferOpen_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOFramebufferOpen_3 = { kUnsignedType,4,NULL,0,0,&_IOFramebufferOpen_4};
	VPL_Parameter _IOFramebufferOpen_2 = { kUnsignedType,4,NULL,0,0,&_IOFramebufferOpen_3};
	VPL_Parameter _IOFramebufferOpen_1 = { kUnsignedType,4,NULL,0,0,&_IOFramebufferOpen_2};
	VPL_ExtProcedure _IOFramebufferOpen_F = {"IOFramebufferOpen",IOFramebufferOpen,&_IOFramebufferOpen_1,&_IOFramebufferOpen_R};

	VPL_Parameter _IOAccelFindAccelerator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOAccelFindAccelerator_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _IOAccelFindAccelerator_2 = { kPointerType,4,"unsigned int",1,0,&_IOAccelFindAccelerator_3};
	VPL_Parameter _IOAccelFindAccelerator_1 = { kUnsignedType,4,NULL,0,0,&_IOAccelFindAccelerator_2};
	VPL_ExtProcedure _IOAccelFindAccelerator_F = {"IOAccelFindAccelerator",IOAccelFindAccelerator,&_IOAccelFindAccelerator_1,&_IOAccelFindAccelerator_R};

	VPL_Parameter _ev_try_lock_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ev_try_lock_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _ev_try_lock_F = {"ev_try_lock",ev_try_lock,&_ev_try_lock_1,&_ev_try_lock_R};

	VPL_Parameter _ev_unlock_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _ev_unlock_F = {"ev_unlock",ev_unlock,&_ev_unlock_1,NULL};

	VPL_Parameter _ev_lock_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _ev_lock_F = {"ev_lock",ev_lock,&_ev_lock_1,NULL};

	VPL_Parameter _IOTrySpinLock_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOTrySpinLock_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _IOTrySpinLock_F = {"IOTrySpinLock",IOTrySpinLock,&_IOTrySpinLock_1,&_IOTrySpinLock_R};

	VPL_Parameter _IOSpinUnlock_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _IOSpinUnlock_F = {"IOSpinUnlock",IOSpinUnlock,&_IOSpinUnlock_1,NULL};

	VPL_Parameter _IOSpinLock_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _IOSpinLock_F = {"IOSpinLock",IOSpinLock,&_IOSpinLock_1,NULL};

	VPL_Parameter _IOPMCopyScheduledPowerEvents_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _IOPMCopyScheduledPowerEvents_F = {"IOPMCopyScheduledPowerEvents",IOPMCopyScheduledPowerEvents,NULL,&_IOPMCopyScheduledPowerEvents_R};

	VPL_Parameter _IOPMCancelScheduledPowerEvent_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMCancelScheduledPowerEvent_3 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _IOPMCancelScheduledPowerEvent_2 = { kPointerType,0,"__CFString",1,1,&_IOPMCancelScheduledPowerEvent_3};
	VPL_Parameter _IOPMCancelScheduledPowerEvent_1 = { kPointerType,0,"__CFDate",1,1,&_IOPMCancelScheduledPowerEvent_2};
	VPL_ExtProcedure _IOPMCancelScheduledPowerEvent_F = {"IOPMCancelScheduledPowerEvent",IOPMCancelScheduledPowerEvent,&_IOPMCancelScheduledPowerEvent_1,&_IOPMCancelScheduledPowerEvent_R};

	VPL_Parameter _IOPMSchedulePowerEvent_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMSchedulePowerEvent_3 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _IOPMSchedulePowerEvent_2 = { kPointerType,0,"__CFString",1,1,&_IOPMSchedulePowerEvent_3};
	VPL_Parameter _IOPMSchedulePowerEvent_1 = { kPointerType,0,"__CFDate",1,1,&_IOPMSchedulePowerEvent_2};
	VPL_ExtProcedure _IOPMSchedulePowerEvent_F = {"IOPMSchedulePowerEvent",IOPMSchedulePowerEvent,&_IOPMSchedulePowerEvent_1,&_IOPMSchedulePowerEvent_R};

	VPL_Parameter _IOPMCopyBatteryInfo_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMCopyBatteryInfo_2 = { kPointerType,0,"__CFArray",2,0,NULL};
	VPL_Parameter _IOPMCopyBatteryInfo_1 = { kUnsignedType,4,NULL,0,0,&_IOPMCopyBatteryInfo_2};
	VPL_ExtProcedure _IOPMCopyBatteryInfo_F = {"IOPMCopyBatteryInfo",IOPMCopyBatteryInfo,&_IOPMCopyBatteryInfo_1,&_IOPMCopyBatteryInfo_R};

	VPL_Parameter _IOPMSleepSystem_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMSleepSystem_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOPMSleepSystem_F = {"IOPMSleepSystem",IOPMSleepSystem,&_IOPMSleepSystem_1,&_IOPMSleepSystem_R};

	VPL_Parameter _IOPMSleepEnabled_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOPMSleepEnabled_F = {"IOPMSleepEnabled",IOPMSleepEnabled,NULL,&_IOPMSleepEnabled_R};

	VPL_Parameter _IOCancelPowerChange_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCancelPowerChange_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCancelPowerChange_1 = { kUnsignedType,4,NULL,0,0,&_IOCancelPowerChange_2};
	VPL_ExtProcedure _IOCancelPowerChange_F = {"IOCancelPowerChange",IOCancelPowerChange,&_IOCancelPowerChange_1,&_IOCancelPowerChange_R};

	VPL_Parameter _IOAllowPowerChange_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOAllowPowerChange_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOAllowPowerChange_1 = { kUnsignedType,4,NULL,0,0,&_IOAllowPowerChange_2};
	VPL_ExtProcedure _IOAllowPowerChange_F = {"IOAllowPowerChange",IOAllowPowerChange,&_IOAllowPowerChange_1,&_IOAllowPowerChange_R};

	VPL_Parameter _IODeregisterForSystemPower_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODeregisterForSystemPower_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _IODeregisterForSystemPower_F = {"IODeregisterForSystemPower",IODeregisterForSystemPower,&_IODeregisterForSystemPower_1,&_IODeregisterForSystemPower_R};

	VPL_Parameter _IODeregisterApp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODeregisterApp_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _IODeregisterApp_F = {"IODeregisterApp",IODeregisterApp,&_IODeregisterApp_1,&_IODeregisterApp_R};

	VPL_Parameter _IORegisterForSystemPower_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegisterForSystemPower_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegisterForSystemPower_3 = { kPointerType,0,"void",1,0,&_IORegisterForSystemPower_4};
	VPL_Parameter _IORegisterForSystemPower_2 = { kPointerType,0,"IONotificationPort",2,0,&_IORegisterForSystemPower_3};
	VPL_Parameter _IORegisterForSystemPower_1 = { kPointerType,0,"void",1,0,&_IORegisterForSystemPower_2};
	VPL_ExtProcedure _IORegisterForSystemPower_F = {"IORegisterForSystemPower",IORegisterForSystemPower,&_IORegisterForSystemPower_1,&_IORegisterForSystemPower_R};

	VPL_Parameter _IORegisterApp_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegisterApp_5 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegisterApp_4 = { kPointerType,0,"void",1,0,&_IORegisterApp_5};
	VPL_Parameter _IORegisterApp_3 = { kPointerType,0,"IONotificationPort",2,0,&_IORegisterApp_4};
	VPL_Parameter _IORegisterApp_2 = { kUnsignedType,4,NULL,0,0,&_IORegisterApp_3};
	VPL_Parameter _IORegisterApp_1 = { kPointerType,0,"void",1,0,&_IORegisterApp_2};
	VPL_ExtProcedure _IORegisterApp_F = {"IORegisterApp",IORegisterApp,&_IORegisterApp_1,&_IORegisterApp_R};

	VPL_Parameter _IOPMGetAggressiveness_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMGetAggressiveness_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _IOPMGetAggressiveness_2 = { kUnsignedType,4,NULL,0,0,&_IOPMGetAggressiveness_3};
	VPL_Parameter _IOPMGetAggressiveness_1 = { kUnsignedType,4,NULL,0,0,&_IOPMGetAggressiveness_2};
	VPL_ExtProcedure _IOPMGetAggressiveness_F = {"IOPMGetAggressiveness",IOPMGetAggressiveness,&_IOPMGetAggressiveness_1,&_IOPMGetAggressiveness_R};

	VPL_Parameter _IOPMSetAggressiveness_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMSetAggressiveness_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMSetAggressiveness_2 = { kUnsignedType,4,NULL,0,0,&_IOPMSetAggressiveness_3};
	VPL_Parameter _IOPMSetAggressiveness_1 = { kUnsignedType,4,NULL,0,0,&_IOPMSetAggressiveness_2};
	VPL_ExtProcedure _IOPMSetAggressiveness_F = {"IOPMSetAggressiveness",IOPMSetAggressiveness,&_IOPMSetAggressiveness_1,&_IOPMSetAggressiveness_R};

	VPL_Parameter _IOPMFindPowerManagement_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMFindPowerManagement_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOPMFindPowerManagement_F = {"IOPMFindPowerManagement",IOPMFindPowerManagement,&_IOPMFindPowerManagement_1,&_IOPMFindPowerManagement_R};

	VPL_Parameter _IODestroyPlugInInterface_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODestroyPlugInInterface_1 = { kPointerType,32,"IOCFPlugInInterfaceStruct",2,0,NULL};
	VPL_ExtProcedure _IODestroyPlugInInterface_F = {"IODestroyPlugInInterface",IODestroyPlugInInterface,&_IODestroyPlugInInterface_1,&_IODestroyPlugInInterface_R};

	VPL_Parameter _IOCreatePlugInInterfaceForService_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCreatePlugInInterfaceForService_5 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IOCreatePlugInInterfaceForService_4 = { kPointerType,32,"IOCFPlugInInterfaceStruct",3,0,&_IOCreatePlugInInterfaceForService_5};
	VPL_Parameter _IOCreatePlugInInterfaceForService_3 = { kPointerType,0,"__CFUUID",1,1,&_IOCreatePlugInInterfaceForService_4};
	VPL_Parameter _IOCreatePlugInInterfaceForService_2 = { kPointerType,0,"__CFUUID",1,1,&_IOCreatePlugInInterfaceForService_3};
	VPL_Parameter _IOCreatePlugInInterfaceForService_1 = { kUnsignedType,4,NULL,0,0,&_IOCreatePlugInInterfaceForService_2};
	VPL_ExtProcedure _IOCreatePlugInInterfaceForService_F = {"IOCreatePlugInInterfaceForService",IOCreatePlugInInterfaceForService,&_IOCreatePlugInInterfaceForService_1,&_IOCreatePlugInInterfaceForService_R};

	VPL_Parameter _IOCompatibiltyNumber_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCompatibiltyNumber_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOCompatibiltyNumber_1 = { kUnsignedType,4,NULL,0,0,&_IOCompatibiltyNumber_2};
	VPL_ExtProcedure _IOCompatibiltyNumber_F = {"IOCompatibiltyNumber",IOCompatibiltyNumber,&_IOCompatibiltyNumber_1,&_IOCompatibiltyNumber_R};

	VPL_Parameter _IOMapMemory_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOMapMemory_6 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOMapMemory_5 = { kPointerType,4,"unsigned int",1,0,&_IOMapMemory_6};
	VPL_Parameter _IOMapMemory_4 = { kPointerType,4,"unsigned int",1,0,&_IOMapMemory_5};
	VPL_Parameter _IOMapMemory_3 = { kUnsignedType,4,NULL,0,0,&_IOMapMemory_4};
	VPL_Parameter _IOMapMemory_2 = { kUnsignedType,4,NULL,0,0,&_IOMapMemory_3};
	VPL_Parameter _IOMapMemory_1 = { kUnsignedType,4,NULL,0,0,&_IOMapMemory_2};
	VPL_ExtProcedure _IOMapMemory_F = {"IOMapMemory",IOMapMemory,&_IOMapMemory_1,&_IOMapMemory_R};

	VPL_Parameter _IORegistryDisposeEnumerator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryDisposeEnumerator_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IORegistryDisposeEnumerator_F = {"IORegistryDisposeEnumerator",IORegistryDisposeEnumerator,&_IORegistryDisposeEnumerator_1,&_IORegistryDisposeEnumerator_R};

	VPL_Parameter _IOCatalogueReset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCatalogueReset_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCatalogueReset_1 = { kUnsignedType,4,NULL,0,0,&_IOCatalogueReset_2};
	VPL_ExtProcedure _IOCatalogueReset_F = {"IOCatalogueReset",IOCatalogueReset,&_IOCatalogueReset_1,&_IOCatalogueReset_R};

	VPL_Parameter _IOCatalogueModuleLoaded_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCatalogueModuleLoaded_2 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IOCatalogueModuleLoaded_1 = { kUnsignedType,4,NULL,0,0,&_IOCatalogueModuleLoaded_2};
	VPL_ExtProcedure _IOCatalogueModuleLoaded_F = {"IOCatalogueModuleLoaded",IOCatalogueModuleLoaded,&_IOCatalogueModuleLoaded_1,&_IOCatalogueModuleLoaded_R};

	VPL_Parameter _IOCatalogueGetData_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCatalogueGetData_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _IOCatalogueGetData_3 = { kPointerType,1,"char",2,0,&_IOCatalogueGetData_4};
	VPL_Parameter _IOCatalogueGetData_2 = { kIntType,4,NULL,0,0,&_IOCatalogueGetData_3};
	VPL_Parameter _IOCatalogueGetData_1 = { kUnsignedType,4,NULL,0,0,&_IOCatalogueGetData_2};
	VPL_ExtProcedure _IOCatalogueGetData_F = {"IOCatalogueGetData",IOCatalogueGetData,&_IOCatalogueGetData_1,&_IOCatalogueGetData_R};

	VPL_Parameter _IOCatalogueTerminate_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCatalogueTerminate_3 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IOCatalogueTerminate_2 = { kIntType,4,NULL,0,0,&_IOCatalogueTerminate_3};
	VPL_Parameter _IOCatalogueTerminate_1 = { kUnsignedType,4,NULL,0,0,&_IOCatalogueTerminate_2};
	VPL_ExtProcedure _IOCatalogueTerminate_F = {"IOCatalogueTerminate",IOCatalogueTerminate,&_IOCatalogueTerminate_1,&_IOCatalogueTerminate_R};

	VPL_Parameter _IOCatalogueSendData_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCatalogueSendData_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCatalogueSendData_3 = { kPointerType,1,"char",1,1,&_IOCatalogueSendData_4};
	VPL_Parameter _IOCatalogueSendData_2 = { kIntType,4,NULL,0,0,&_IOCatalogueSendData_3};
	VPL_Parameter _IOCatalogueSendData_1 = { kUnsignedType,4,NULL,0,0,&_IOCatalogueSendData_2};
	VPL_ExtProcedure _IOCatalogueSendData_F = {"IOCatalogueSendData",IOCatalogueSendData,&_IOCatalogueSendData_1,&_IOCatalogueSendData_R};

	VPL_Parameter _OSGetNotificationFromMessage_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _OSGetNotificationFromMessage_6 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _OSGetNotificationFromMessage_5 = { kPointerType,0,"void",2,0,&_OSGetNotificationFromMessage_6};
	VPL_Parameter _OSGetNotificationFromMessage_4 = { kPointerType,4,"unsigned long",1,0,&_OSGetNotificationFromMessage_5};
	VPL_Parameter _OSGetNotificationFromMessage_3 = { kPointerType,4,"unsigned long",1,0,&_OSGetNotificationFromMessage_4};
	VPL_Parameter _OSGetNotificationFromMessage_2 = { kUnsignedType,4,NULL,0,0,&_OSGetNotificationFromMessage_3};
	VPL_Parameter _OSGetNotificationFromMessage_1 = { kPointerType,24,"mach_msg_header_t",1,0,&_OSGetNotificationFromMessage_2};
	VPL_ExtProcedure _OSGetNotificationFromMessage_F = {"OSGetNotificationFromMessage",OSGetNotificationFromMessage,&_OSGetNotificationFromMessage_1,&_OSGetNotificationFromMessage_R};

	VPL_Parameter _IOServiceOFPathToBSDName_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceOFPathToBSDName_3 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IOServiceOFPathToBSDName_2 = { kPointerType,128,"char",1,1,&_IOServiceOFPathToBSDName_3};
	VPL_Parameter _IOServiceOFPathToBSDName_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceOFPathToBSDName_2};
	VPL_ExtProcedure _IOServiceOFPathToBSDName_F = {"IOServiceOFPathToBSDName",IOServiceOFPathToBSDName,&_IOServiceOFPathToBSDName_1,&_IOServiceOFPathToBSDName_R};

	VPL_Parameter _IOOpenFirmwarePathMatching_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOOpenFirmwarePathMatching_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _IOOpenFirmwarePathMatching_2 = { kUnsignedType,4,NULL,0,0,&_IOOpenFirmwarePathMatching_3};
	VPL_Parameter _IOOpenFirmwarePathMatching_1 = { kUnsignedType,4,NULL,0,0,&_IOOpenFirmwarePathMatching_2};
	VPL_ExtProcedure _IOOpenFirmwarePathMatching_F = {"IOOpenFirmwarePathMatching",IOOpenFirmwarePathMatching,&_IOOpenFirmwarePathMatching_1,&_IOOpenFirmwarePathMatching_R};

	VPL_Parameter _IOBSDNameMatching_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOBSDNameMatching_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _IOBSDNameMatching_2 = { kUnsignedType,4,NULL,0,0,&_IOBSDNameMatching_3};
	VPL_Parameter _IOBSDNameMatching_1 = { kUnsignedType,4,NULL,0,0,&_IOBSDNameMatching_2};
	VPL_ExtProcedure _IOBSDNameMatching_F = {"IOBSDNameMatching",IOBSDNameMatching,&_IOBSDNameMatching_1,&_IOBSDNameMatching_R};

	VPL_Parameter _IOServiceNameMatching_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOServiceNameMatching_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _IOServiceNameMatching_F = {"IOServiceNameMatching",IOServiceNameMatching,&_IOServiceNameMatching_1,&_IOServiceNameMatching_R};

	VPL_Parameter _IOServiceMatching_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOServiceMatching_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _IOServiceMatching_F = {"IOServiceMatching",IOServiceMatching,&_IOServiceMatching_1,&_IOServiceMatching_R};

	VPL_Parameter _IORegistryEntryInPlane_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryInPlane_2 = { kPointerType,128,"char",1,1,NULL};
	VPL_Parameter _IORegistryEntryInPlane_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryInPlane_2};
	VPL_ExtProcedure _IORegistryEntryInPlane_F = {"IORegistryEntryInPlane",IORegistryEntryInPlane,&_IORegistryEntryInPlane_1,&_IORegistryEntryInPlane_R};

	VPL_Parameter _IORegistryEntryGetParentEntry_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetParentEntry_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetParentEntry_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryGetParentEntry_3};
	VPL_Parameter _IORegistryEntryGetParentEntry_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetParentEntry_2};
	VPL_ExtProcedure _IORegistryEntryGetParentEntry_F = {"IORegistryEntryGetParentEntry",IORegistryEntryGetParentEntry,&_IORegistryEntryGetParentEntry_1,&_IORegistryEntryGetParentEntry_R};

	VPL_Parameter _IORegistryEntryGetParentIterator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetParentIterator_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetParentIterator_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryGetParentIterator_3};
	VPL_Parameter _IORegistryEntryGetParentIterator_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetParentIterator_2};
	VPL_ExtProcedure _IORegistryEntryGetParentIterator_F = {"IORegistryEntryGetParentIterator",IORegistryEntryGetParentIterator,&_IORegistryEntryGetParentIterator_1,&_IORegistryEntryGetParentIterator_R};

	VPL_Parameter _IORegistryEntryGetChildEntry_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetChildEntry_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetChildEntry_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryGetChildEntry_3};
	VPL_Parameter _IORegistryEntryGetChildEntry_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetChildEntry_2};
	VPL_ExtProcedure _IORegistryEntryGetChildEntry_F = {"IORegistryEntryGetChildEntry",IORegistryEntryGetChildEntry,&_IORegistryEntryGetChildEntry_1,&_IORegistryEntryGetChildEntry_R};

	VPL_Parameter _IORegistryEntryGetChildIterator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetChildIterator_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetChildIterator_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryGetChildIterator_3};
	VPL_Parameter _IORegistryEntryGetChildIterator_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetChildIterator_2};
	VPL_ExtProcedure _IORegistryEntryGetChildIterator_F = {"IORegistryEntryGetChildIterator",IORegistryEntryGetChildIterator,&_IORegistryEntryGetChildIterator_1,&_IORegistryEntryGetChildIterator_R};

	VPL_Parameter _IORegistryEntrySetCFProperty_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntrySetCFProperty_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _IORegistryEntrySetCFProperty_2 = { kPointerType,0,"__CFString",1,1,&_IORegistryEntrySetCFProperty_3};
	VPL_Parameter _IORegistryEntrySetCFProperty_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntrySetCFProperty_2};
	VPL_ExtProcedure _IORegistryEntrySetCFProperty_F = {"IORegistryEntrySetCFProperty",IORegistryEntrySetCFProperty,&_IORegistryEntrySetCFProperty_1,&_IORegistryEntrySetCFProperty_R};

	VPL_Parameter _IORegistryEntrySetCFProperties_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntrySetCFProperties_2 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _IORegistryEntrySetCFProperties_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntrySetCFProperties_2};
	VPL_ExtProcedure _IORegistryEntrySetCFProperties_F = {"IORegistryEntrySetCFProperties",IORegistryEntrySetCFProperties,&_IORegistryEntrySetCFProperties_1,&_IORegistryEntrySetCFProperties_R};

	VPL_Parameter _IORegistryEntryGetProperty_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetProperty_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetProperty_3 = { kPointerType,4096,"char",1,0,&_IORegistryEntryGetProperty_4};
	VPL_Parameter _IORegistryEntryGetProperty_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryGetProperty_3};
	VPL_Parameter _IORegistryEntryGetProperty_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetProperty_2};
	VPL_ExtProcedure _IORegistryEntryGetProperty_F = {"IORegistryEntryGetProperty",IORegistryEntryGetProperty,&_IORegistryEntryGetProperty_1,&_IORegistryEntryGetProperty_R};

	VPL_Parameter _IORegistryEntrySearchCFProperty_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IORegistryEntrySearchCFProperty_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntrySearchCFProperty_4 = { kPointerType,0,"__CFAllocator",1,1,&_IORegistryEntrySearchCFProperty_5};
	VPL_Parameter _IORegistryEntrySearchCFProperty_3 = { kPointerType,0,"__CFString",1,1,&_IORegistryEntrySearchCFProperty_4};
	VPL_Parameter _IORegistryEntrySearchCFProperty_2 = { kPointerType,128,"char",1,1,&_IORegistryEntrySearchCFProperty_3};
	VPL_Parameter _IORegistryEntrySearchCFProperty_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntrySearchCFProperty_2};
	VPL_ExtProcedure _IORegistryEntrySearchCFProperty_F = {"IORegistryEntrySearchCFProperty",IORegistryEntrySearchCFProperty,&_IORegistryEntrySearchCFProperty_1,&_IORegistryEntrySearchCFProperty_R};

	VPL_Parameter _IORegistryEntryCreateCFProperty_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IORegistryEntryCreateCFProperty_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryCreateCFProperty_3 = { kPointerType,0,"__CFAllocator",1,1,&_IORegistryEntryCreateCFProperty_4};
	VPL_Parameter _IORegistryEntryCreateCFProperty_2 = { kPointerType,0,"__CFString",1,1,&_IORegistryEntryCreateCFProperty_3};
	VPL_Parameter _IORegistryEntryCreateCFProperty_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryCreateCFProperty_2};
	VPL_ExtProcedure _IORegistryEntryCreateCFProperty_F = {"IORegistryEntryCreateCFProperty",IORegistryEntryCreateCFProperty,&_IORegistryEntryCreateCFProperty_1,&_IORegistryEntryCreateCFProperty_R};

	VPL_Parameter _IORegistryEntryCreateCFProperties_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryCreateCFProperties_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryCreateCFProperties_3 = { kPointerType,0,"__CFAllocator",1,1,&_IORegistryEntryCreateCFProperties_4};
	VPL_Parameter _IORegistryEntryCreateCFProperties_2 = { kPointerType,0,"__CFDictionary",2,0,&_IORegistryEntryCreateCFProperties_3};
	VPL_Parameter _IORegistryEntryCreateCFProperties_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryCreateCFProperties_2};
	VPL_ExtProcedure _IORegistryEntryCreateCFProperties_F = {"IORegistryEntryCreateCFProperties",IORegistryEntryCreateCFProperties,&_IORegistryEntryCreateCFProperties_1,&_IORegistryEntryCreateCFProperties_R};

	VPL_Parameter _IORegistryEntryGetPath_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetPath_3 = { kPointerType,512,"char",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetPath_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryGetPath_3};
	VPL_Parameter _IORegistryEntryGetPath_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetPath_2};
	VPL_ExtProcedure _IORegistryEntryGetPath_F = {"IORegistryEntryGetPath",IORegistryEntryGetPath,&_IORegistryEntryGetPath_1,&_IORegistryEntryGetPath_R};

	VPL_Parameter _IORegistryEntryGetLocationInPlane_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetLocationInPlane_3 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetLocationInPlane_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryGetLocationInPlane_3};
	VPL_Parameter _IORegistryEntryGetLocationInPlane_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetLocationInPlane_2};
	VPL_ExtProcedure _IORegistryEntryGetLocationInPlane_F = {"IORegistryEntryGetLocationInPlane",IORegistryEntryGetLocationInPlane,&_IORegistryEntryGetLocationInPlane_1,&_IORegistryEntryGetLocationInPlane_R};

	VPL_Parameter _IORegistryEntryGetNameInPlane_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetNameInPlane_3 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetNameInPlane_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryGetNameInPlane_3};
	VPL_Parameter _IORegistryEntryGetNameInPlane_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetNameInPlane_2};
	VPL_ExtProcedure _IORegistryEntryGetNameInPlane_F = {"IORegistryEntryGetNameInPlane",IORegistryEntryGetNameInPlane,&_IORegistryEntryGetNameInPlane_1,&_IORegistryEntryGetNameInPlane_R};

	VPL_Parameter _IORegistryEntryGetName_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetName_2 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetName_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetName_2};
	VPL_ExtProcedure _IORegistryEntryGetName_F = {"IORegistryEntryGetName",IORegistryEntryGetName,&_IORegistryEntryGetName_1,&_IORegistryEntryGetName_R};

	VPL_Parameter _IORegistryIteratorExitEntry_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryIteratorExitEntry_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IORegistryIteratorExitEntry_F = {"IORegistryIteratorExitEntry",IORegistryIteratorExitEntry,&_IORegistryIteratorExitEntry_1,&_IORegistryIteratorExitEntry_R};

	VPL_Parameter _IORegistryIteratorEnterEntry_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryIteratorEnterEntry_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IORegistryIteratorEnterEntry_F = {"IORegistryIteratorEnterEntry",IORegistryIteratorEnterEntry,&_IORegistryIteratorEnterEntry_1,&_IORegistryIteratorEnterEntry_R};

	VPL_Parameter _IORegistryEntryCreateIterator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryCreateIterator_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryCreateIterator_3 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryCreateIterator_4};
	VPL_Parameter _IORegistryEntryCreateIterator_2 = { kPointerType,128,"char",1,1,&_IORegistryEntryCreateIterator_3};
	VPL_Parameter _IORegistryEntryCreateIterator_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryCreateIterator_2};
	VPL_ExtProcedure _IORegistryEntryCreateIterator_F = {"IORegistryEntryCreateIterator",IORegistryEntryCreateIterator,&_IORegistryEntryCreateIterator_1,&_IORegistryEntryCreateIterator_R};

	VPL_Parameter _IORegistryCreateIterator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryCreateIterator_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryCreateIterator_3 = { kUnsignedType,4,NULL,0,0,&_IORegistryCreateIterator_4};
	VPL_Parameter _IORegistryCreateIterator_2 = { kPointerType,128,"char",1,1,&_IORegistryCreateIterator_3};
	VPL_Parameter _IORegistryCreateIterator_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryCreateIterator_2};
	VPL_ExtProcedure _IORegistryCreateIterator_F = {"IORegistryCreateIterator",IORegistryCreateIterator,&_IORegistryCreateIterator_1,&_IORegistryCreateIterator_R};

	VPL_Parameter _IORegistryEntryFromPath_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryFromPath_2 = { kPointerType,512,"char",1,1,NULL};
	VPL_Parameter _IORegistryEntryFromPath_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryFromPath_2};
	VPL_ExtProcedure _IORegistryEntryFromPath_F = {"IORegistryEntryFromPath",IORegistryEntryFromPath,&_IORegistryEntryFromPath_1,&_IORegistryEntryFromPath_R};

	VPL_Parameter _IORegistryGetRootEntry_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryGetRootEntry_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IORegistryGetRootEntry_F = {"IORegistryGetRootEntry",IORegistryGetRootEntry,&_IORegistryGetRootEntry_1,&_IORegistryGetRootEntry_R};

	VPL_Parameter _IOConnectAddClient_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectAddClient_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectAddClient_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectAddClient_2};
	VPL_ExtProcedure _IOConnectAddClient_F = {"IOConnectAddClient",IOConnectAddClient,&_IOConnectAddClient_1,&_IOConnectAddClient_R};

	VPL_Parameter _IOConnectTrap6_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectTrap6_8 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOConnectTrap6_7 = { kPointerType,0,"void",1,0,&_IOConnectTrap6_8};
	VPL_Parameter _IOConnectTrap6_6 = { kPointerType,0,"void",1,0,&_IOConnectTrap6_7};
	VPL_Parameter _IOConnectTrap6_5 = { kPointerType,0,"void",1,0,&_IOConnectTrap6_6};
	VPL_Parameter _IOConnectTrap6_4 = { kPointerType,0,"void",1,0,&_IOConnectTrap6_5};
	VPL_Parameter _IOConnectTrap6_3 = { kPointerType,0,"void",1,0,&_IOConnectTrap6_4};
	VPL_Parameter _IOConnectTrap6_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap6_3};
	VPL_Parameter _IOConnectTrap6_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap6_2};
	VPL_ExtProcedure _IOConnectTrap6_F = {"IOConnectTrap6",IOConnectTrap6,&_IOConnectTrap6_1,&_IOConnectTrap6_R};

	VPL_Parameter _IOConnectTrap5_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectTrap5_7 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOConnectTrap5_6 = { kPointerType,0,"void",1,0,&_IOConnectTrap5_7};
	VPL_Parameter _IOConnectTrap5_5 = { kPointerType,0,"void",1,0,&_IOConnectTrap5_6};
	VPL_Parameter _IOConnectTrap5_4 = { kPointerType,0,"void",1,0,&_IOConnectTrap5_5};
	VPL_Parameter _IOConnectTrap5_3 = { kPointerType,0,"void",1,0,&_IOConnectTrap5_4};
	VPL_Parameter _IOConnectTrap5_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap5_3};
	VPL_Parameter _IOConnectTrap5_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap5_2};
	VPL_ExtProcedure _IOConnectTrap5_F = {"IOConnectTrap5",IOConnectTrap5,&_IOConnectTrap5_1,&_IOConnectTrap5_R};

	VPL_Parameter _IOConnectTrap4_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectTrap4_6 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOConnectTrap4_5 = { kPointerType,0,"void",1,0,&_IOConnectTrap4_6};
	VPL_Parameter _IOConnectTrap4_4 = { kPointerType,0,"void",1,0,&_IOConnectTrap4_5};
	VPL_Parameter _IOConnectTrap4_3 = { kPointerType,0,"void",1,0,&_IOConnectTrap4_4};
	VPL_Parameter _IOConnectTrap4_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap4_3};
	VPL_Parameter _IOConnectTrap4_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap4_2};
	VPL_ExtProcedure _IOConnectTrap4_F = {"IOConnectTrap4",IOConnectTrap4,&_IOConnectTrap4_1,&_IOConnectTrap4_R};

	VPL_Parameter _IOConnectTrap3_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectTrap3_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOConnectTrap3_4 = { kPointerType,0,"void",1,0,&_IOConnectTrap3_5};
	VPL_Parameter _IOConnectTrap3_3 = { kPointerType,0,"void",1,0,&_IOConnectTrap3_4};
	VPL_Parameter _IOConnectTrap3_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap3_3};
	VPL_Parameter _IOConnectTrap3_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap3_2};
	VPL_ExtProcedure _IOConnectTrap3_F = {"IOConnectTrap3",IOConnectTrap3,&_IOConnectTrap3_1,&_IOConnectTrap3_R};

	VPL_Parameter _IOConnectTrap2_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectTrap2_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOConnectTrap2_3 = { kPointerType,0,"void",1,0,&_IOConnectTrap2_4};
	VPL_Parameter _IOConnectTrap2_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap2_3};
	VPL_Parameter _IOConnectTrap2_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap2_2};
	VPL_ExtProcedure _IOConnectTrap2_F = {"IOConnectTrap2",IOConnectTrap2,&_IOConnectTrap2_1,&_IOConnectTrap2_R};

	VPL_Parameter _IOConnectTrap1_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectTrap1_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOConnectTrap1_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap1_3};
	VPL_Parameter _IOConnectTrap1_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap1_2};
	VPL_ExtProcedure _IOConnectTrap1_F = {"IOConnectTrap1",IOConnectTrap1,&_IOConnectTrap1_1,&_IOConnectTrap1_R};

	VPL_Parameter _IOConnectTrap0_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectTrap0_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectTrap0_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectTrap0_2};
	VPL_ExtProcedure _IOConnectTrap0_F = {"IOConnectTrap0",IOConnectTrap0,&_IOConnectTrap0_1,&_IOConnectTrap0_R};

	VPL_Parameter _IOConnectMethodStructureIStructureO_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectMethodStructureIStructureO_6 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOConnectMethodStructureIStructureO_5 = { kPointerType,0,"void",1,0,&_IOConnectMethodStructureIStructureO_6};
	VPL_Parameter _IOConnectMethodStructureIStructureO_4 = { kPointerType,4,"unsigned long",1,0,&_IOConnectMethodStructureIStructureO_5};
	VPL_Parameter _IOConnectMethodStructureIStructureO_3 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodStructureIStructureO_4};
	VPL_Parameter _IOConnectMethodStructureIStructureO_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodStructureIStructureO_3};
	VPL_Parameter _IOConnectMethodStructureIStructureO_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodStructureIStructureO_2};
	VPL_ExtProcedure _IOConnectMethodStructureIStructureO_F = {"IOConnectMethodStructureIStructureO",IOConnectMethodStructureIStructureO,&_IOConnectMethodStructureIStructureO_1,&_IOConnectMethodStructureIStructureO_R};

	VPL_Parameter _IOConnectMethodScalarIStructureI_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectMethodScalarIStructureI_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectMethodScalarIStructureI_3 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIStructureI_4};
	VPL_Parameter _IOConnectMethodScalarIStructureI_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIStructureI_3};
	VPL_Parameter _IOConnectMethodScalarIStructureI_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIStructureI_2};
	VPL_ExtProcedure _IOConnectMethodScalarIStructureI_F = {"IOConnectMethodScalarIStructureI",IOConnectMethodScalarIStructureI,&_IOConnectMethodScalarIStructureI_1,&_IOConnectMethodScalarIStructureI_R};

	VPL_Parameter _IOConnectMethodScalarIStructureO_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectMethodScalarIStructureO_4 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _IOConnectMethodScalarIStructureO_3 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIStructureO_4};
	VPL_Parameter _IOConnectMethodScalarIStructureO_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIStructureO_3};
	VPL_Parameter _IOConnectMethodScalarIStructureO_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIStructureO_2};
	VPL_ExtProcedure _IOConnectMethodScalarIStructureO_F = {"IOConnectMethodScalarIStructureO",IOConnectMethodScalarIStructureO,&_IOConnectMethodScalarIStructureO_1,&_IOConnectMethodScalarIStructureO_R};

	VPL_Parameter _IOConnectMethodScalarIScalarO_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectMethodScalarIScalarO_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectMethodScalarIScalarO_3 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIScalarO_4};
	VPL_Parameter _IOConnectMethodScalarIScalarO_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIScalarO_3};
	VPL_Parameter _IOConnectMethodScalarIScalarO_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectMethodScalarIScalarO_2};
	VPL_ExtProcedure _IOConnectMethodScalarIScalarO_F = {"IOConnectMethodScalarIScalarO",IOConnectMethodScalarIScalarO,&_IOConnectMethodScalarIScalarO_1,&_IOConnectMethodScalarIScalarO_R};

	VPL_Parameter _IOConnectSetCFProperty_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectSetCFProperty_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _IOConnectSetCFProperty_2 = { kPointerType,0,"__CFString",1,1,&_IOConnectSetCFProperty_3};
	VPL_Parameter _IOConnectSetCFProperty_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectSetCFProperty_2};
	VPL_ExtProcedure _IOConnectSetCFProperty_F = {"IOConnectSetCFProperty",IOConnectSetCFProperty,&_IOConnectSetCFProperty_1,&_IOConnectSetCFProperty_R};

	VPL_Parameter _IOConnectSetCFProperties_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectSetCFProperties_2 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _IOConnectSetCFProperties_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectSetCFProperties_2};
	VPL_ExtProcedure _IOConnectSetCFProperties_F = {"IOConnectSetCFProperties",IOConnectSetCFProperties,&_IOConnectSetCFProperties_1,&_IOConnectSetCFProperties_R};

	VPL_Parameter _IOConnectUnmapMemory_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectUnmapMemory_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectUnmapMemory_3 = { kUnsignedType,4,NULL,0,0,&_IOConnectUnmapMemory_4};
	VPL_Parameter _IOConnectUnmapMemory_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectUnmapMemory_3};
	VPL_Parameter _IOConnectUnmapMemory_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectUnmapMemory_2};
	VPL_ExtProcedure _IOConnectUnmapMemory_F = {"IOConnectUnmapMemory",IOConnectUnmapMemory,&_IOConnectUnmapMemory_1,&_IOConnectUnmapMemory_R};

	VPL_Parameter _IOConnectMapMemory_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectMapMemory_6 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectMapMemory_5 = { kPointerType,4,"unsigned int",1,0,&_IOConnectMapMemory_6};
	VPL_Parameter _IOConnectMapMemory_4 = { kPointerType,4,"unsigned int",1,0,&_IOConnectMapMemory_5};
	VPL_Parameter _IOConnectMapMemory_3 = { kUnsignedType,4,NULL,0,0,&_IOConnectMapMemory_4};
	VPL_Parameter _IOConnectMapMemory_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectMapMemory_3};
	VPL_Parameter _IOConnectMapMemory_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectMapMemory_2};
	VPL_ExtProcedure _IOConnectMapMemory_F = {"IOConnectMapMemory",IOConnectMapMemory,&_IOConnectMapMemory_1,&_IOConnectMapMemory_R};

	VPL_Parameter _IOConnectSetNotificationPort_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectSetNotificationPort_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectSetNotificationPort_3 = { kUnsignedType,4,NULL,0,0,&_IOConnectSetNotificationPort_4};
	VPL_Parameter _IOConnectSetNotificationPort_2 = { kUnsignedType,4,NULL,0,0,&_IOConnectSetNotificationPort_3};
	VPL_Parameter _IOConnectSetNotificationPort_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectSetNotificationPort_2};
	VPL_ExtProcedure _IOConnectSetNotificationPort_F = {"IOConnectSetNotificationPort",IOConnectSetNotificationPort,&_IOConnectSetNotificationPort_1,&_IOConnectSetNotificationPort_R};

	VPL_Parameter _IOConnectGetService_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectGetService_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOConnectGetService_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectGetService_2};
	VPL_ExtProcedure _IOConnectGetService_F = {"IOConnectGetService",IOConnectGetService,&_IOConnectGetService_1,&_IOConnectGetService_R};

	VPL_Parameter _IOConnectRelease_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectRelease_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOConnectRelease_F = {"IOConnectRelease",IOConnectRelease,&_IOConnectRelease_1,&_IOConnectRelease_R};

	VPL_Parameter _IOConnectAddRef_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectAddRef_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOConnectAddRef_F = {"IOConnectAddRef",IOConnectAddRef,&_IOConnectAddRef_1,&_IOConnectAddRef_R};

	VPL_Parameter _IOServiceClose_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceClose_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOServiceClose_F = {"IOServiceClose",IOServiceClose,&_IOServiceClose_1,&_IOServiceClose_R};

	VPL_Parameter _IOServiceRequestProbe_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceRequestProbe_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceRequestProbe_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceRequestProbe_2};
	VPL_ExtProcedure _IOServiceRequestProbe_F = {"IOServiceRequestProbe",IOServiceRequestProbe,&_IOServiceRequestProbe_1,&_IOServiceRequestProbe_R};

	VPL_Parameter _IOServiceOpen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceOpen_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceOpen_3 = { kUnsignedType,4,NULL,0,0,&_IOServiceOpen_4};
	VPL_Parameter _IOServiceOpen_2 = { kUnsignedType,4,NULL,0,0,&_IOServiceOpen_3};
	VPL_Parameter _IOServiceOpen_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceOpen_2};
	VPL_ExtProcedure _IOServiceOpen_F = {"IOServiceOpen",IOServiceOpen,&_IOServiceOpen_1,&_IOServiceOpen_R};

	VPL_Parameter _IOKitWaitQuiet_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOKitWaitQuiet_2 = { kPointerType,8,"mach_timespec",1,0,NULL};
	VPL_Parameter _IOKitWaitQuiet_1 = { kUnsignedType,4,NULL,0,0,&_IOKitWaitQuiet_2};
	VPL_ExtProcedure _IOKitWaitQuiet_F = {"IOKitWaitQuiet",IOKitWaitQuiet,&_IOKitWaitQuiet_1,&_IOKitWaitQuiet_R};

	VPL_Parameter _IOKitGetBusyState_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOKitGetBusyState_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _IOKitGetBusyState_1 = { kUnsignedType,4,NULL,0,0,&_IOKitGetBusyState_2};
	VPL_ExtProcedure _IOKitGetBusyState_F = {"IOKitGetBusyState",IOKitGetBusyState,&_IOKitGetBusyState_1,&_IOKitGetBusyState_R};

	VPL_Parameter _IOServiceWaitQuiet_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceWaitQuiet_2 = { kPointerType,8,"mach_timespec",1,0,NULL};
	VPL_Parameter _IOServiceWaitQuiet_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceWaitQuiet_2};
	VPL_ExtProcedure _IOServiceWaitQuiet_F = {"IOServiceWaitQuiet",IOServiceWaitQuiet,&_IOServiceWaitQuiet_1,&_IOServiceWaitQuiet_R};

	VPL_Parameter _IOServiceGetBusyState_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceGetBusyState_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _IOServiceGetBusyState_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceGetBusyState_2};
	VPL_ExtProcedure _IOServiceGetBusyState_F = {"IOServiceGetBusyState",IOServiceGetBusyState,&_IOServiceGetBusyState_1,&_IOServiceGetBusyState_R};

	VPL_Parameter _IOServiceMatchPropertyTable_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceMatchPropertyTable_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _IOServiceMatchPropertyTable_2 = { kPointerType,0,"__CFDictionary",1,1,&_IOServiceMatchPropertyTable_3};
	VPL_Parameter _IOServiceMatchPropertyTable_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceMatchPropertyTable_2};
	VPL_ExtProcedure _IOServiceMatchPropertyTable_F = {"IOServiceMatchPropertyTable",IOServiceMatchPropertyTable,&_IOServiceMatchPropertyTable_1,&_IOServiceMatchPropertyTable_R};

	VPL_Parameter _IOServiceAddInterestNotification_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceAddInterestNotification_6 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceAddInterestNotification_5 = { kPointerType,0,"void",1,0,&_IOServiceAddInterestNotification_6};
	VPL_Parameter _IOServiceAddInterestNotification_4 = { kPointerType,0,"void",1,0,&_IOServiceAddInterestNotification_5};
	VPL_Parameter _IOServiceAddInterestNotification_3 = { kPointerType,128,"char",1,1,&_IOServiceAddInterestNotification_4};
	VPL_Parameter _IOServiceAddInterestNotification_2 = { kUnsignedType,4,NULL,0,0,&_IOServiceAddInterestNotification_3};
	VPL_Parameter _IOServiceAddInterestNotification_1 = { kPointerType,0,"IONotificationPort",1,0,&_IOServiceAddInterestNotification_2};
	VPL_ExtProcedure _IOServiceAddInterestNotification_F = {"IOServiceAddInterestNotification",IOServiceAddInterestNotification,&_IOServiceAddInterestNotification_1,&_IOServiceAddInterestNotification_R};

	VPL_Parameter _IOServiceAddMatchingNotification_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceAddMatchingNotification_6 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceAddMatchingNotification_5 = { kPointerType,0,"void",1,0,&_IOServiceAddMatchingNotification_6};
	VPL_Parameter _IOServiceAddMatchingNotification_4 = { kPointerType,0,"void",1,0,&_IOServiceAddMatchingNotification_5};
	VPL_Parameter _IOServiceAddMatchingNotification_3 = { kPointerType,0,"__CFDictionary",1,1,&_IOServiceAddMatchingNotification_4};
	VPL_Parameter _IOServiceAddMatchingNotification_2 = { kPointerType,128,"char",1,1,&_IOServiceAddMatchingNotification_3};
	VPL_Parameter _IOServiceAddMatchingNotification_1 = { kPointerType,0,"IONotificationPort",1,0,&_IOServiceAddMatchingNotification_2};
	VPL_ExtProcedure _IOServiceAddMatchingNotification_F = {"IOServiceAddMatchingNotification",IOServiceAddMatchingNotification,&_IOServiceAddMatchingNotification_1,&_IOServiceAddMatchingNotification_R};

	VPL_Parameter _IOServiceAddNotification_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceAddNotification_6 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceAddNotification_5 = { kIntType,4,NULL,0,0,&_IOServiceAddNotification_6};
	VPL_Parameter _IOServiceAddNotification_4 = { kUnsignedType,4,NULL,0,0,&_IOServiceAddNotification_5};
	VPL_Parameter _IOServiceAddNotification_3 = { kPointerType,0,"__CFDictionary",1,1,&_IOServiceAddNotification_4};
	VPL_Parameter _IOServiceAddNotification_2 = { kPointerType,128,"char",1,1,&_IOServiceAddNotification_3};
	VPL_Parameter _IOServiceAddNotification_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceAddNotification_2};
	VPL_ExtProcedure _IOServiceAddNotification_F = {"IOServiceAddNotification",IOServiceAddNotification,&_IOServiceAddNotification_1,&_IOServiceAddNotification_R};

	VPL_Parameter _IOServiceGetMatchingServices_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceGetMatchingServices_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceGetMatchingServices_2 = { kPointerType,0,"__CFDictionary",1,1,&_IOServiceGetMatchingServices_3};
	VPL_Parameter _IOServiceGetMatchingServices_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceGetMatchingServices_2};
	VPL_ExtProcedure _IOServiceGetMatchingServices_F = {"IOServiceGetMatchingServices",IOServiceGetMatchingServices,&_IOServiceGetMatchingServices_1,&_IOServiceGetMatchingServices_R};

	VPL_Parameter _IOServiceGetMatchingService_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceGetMatchingService_2 = { kPointerType,0,"__CFDictionary",1,1,NULL};
	VPL_Parameter _IOServiceGetMatchingService_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceGetMatchingService_2};
	VPL_ExtProcedure _IOServiceGetMatchingService_F = {"IOServiceGetMatchingService",IOServiceGetMatchingService,&_IOServiceGetMatchingService_1,&_IOServiceGetMatchingService_R};

	VPL_Parameter _IOIteratorIsValid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOIteratorIsValid_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOIteratorIsValid_F = {"IOIteratorIsValid",IOIteratorIsValid,&_IOIteratorIsValid_1,&_IOIteratorIsValid_R};

	VPL_Parameter _IOIteratorReset_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOIteratorReset_F = {"IOIteratorReset",IOIteratorReset,&_IOIteratorReset_1,NULL};

	VPL_Parameter _IOIteratorNext_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOIteratorNext_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOIteratorNext_F = {"IOIteratorNext",IOIteratorNext,&_IOIteratorNext_1,&_IOIteratorNext_R};

	VPL_Parameter _IOObjectGetRetainCount_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOObjectGetRetainCount_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOObjectGetRetainCount_F = {"IOObjectGetRetainCount",IOObjectGetRetainCount,&_IOObjectGetRetainCount_1,&_IOObjectGetRetainCount_R};

	VPL_Parameter _IOObjectIsEqualTo_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOObjectIsEqualTo_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOObjectIsEqualTo_1 = { kUnsignedType,4,NULL,0,0,&_IOObjectIsEqualTo_2};
	VPL_ExtProcedure _IOObjectIsEqualTo_F = {"IOObjectIsEqualTo",IOObjectIsEqualTo,&_IOObjectIsEqualTo_1,&_IOObjectIsEqualTo_R};

	VPL_Parameter _IOObjectConformsTo_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOObjectConformsTo_2 = { kPointerType,128,"char",1,1,NULL};
	VPL_Parameter _IOObjectConformsTo_1 = { kUnsignedType,4,NULL,0,0,&_IOObjectConformsTo_2};
	VPL_ExtProcedure _IOObjectConformsTo_F = {"IOObjectConformsTo",IOObjectConformsTo,&_IOObjectConformsTo_1,&_IOObjectConformsTo_R};

	VPL_Parameter _IOObjectCopyBundleIdentifierForClass_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _IOObjectCopyBundleIdentifierForClass_1 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_ExtProcedure _IOObjectCopyBundleIdentifierForClass_F = {"IOObjectCopyBundleIdentifierForClass",IOObjectCopyBundleIdentifierForClass,&_IOObjectCopyBundleIdentifierForClass_1,&_IOObjectCopyBundleIdentifierForClass_R};

	VPL_Parameter _IOObjectCopySuperclassForClass_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _IOObjectCopySuperclassForClass_1 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_ExtProcedure _IOObjectCopySuperclassForClass_F = {"IOObjectCopySuperclassForClass",IOObjectCopySuperclassForClass,&_IOObjectCopySuperclassForClass_1,&_IOObjectCopySuperclassForClass_R};

	VPL_Parameter _IOObjectCopyClass_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _IOObjectCopyClass_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOObjectCopyClass_F = {"IOObjectCopyClass",IOObjectCopyClass,&_IOObjectCopyClass_1,&_IOObjectCopyClass_R};

	VPL_Parameter _IOObjectGetClass_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOObjectGetClass_2 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IOObjectGetClass_1 = { kUnsignedType,4,NULL,0,0,&_IOObjectGetClass_2};
	VPL_ExtProcedure _IOObjectGetClass_F = {"IOObjectGetClass",IOObjectGetClass,&_IOObjectGetClass_1,&_IOObjectGetClass_R};

	VPL_Parameter _IOObjectRetain_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOObjectRetain_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOObjectRetain_F = {"IOObjectRetain",IOObjectRetain,&_IOObjectRetain_1,&_IOObjectRetain_R};

	VPL_Parameter _IOObjectRelease_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOObjectRelease_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOObjectRelease_F = {"IOObjectRelease",IOObjectRelease,&_IOObjectRelease_1,&_IOObjectRelease_R};

	VPL_Parameter _IOCreateReceivePort_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCreateReceivePort_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOCreateReceivePort_1 = { kIntType,4,NULL,0,0,&_IOCreateReceivePort_2};
	VPL_ExtProcedure _IOCreateReceivePort_F = {"IOCreateReceivePort",IOCreateReceivePort,&_IOCreateReceivePort_1,&_IOCreateReceivePort_R};

	VPL_Parameter _IODispatchCalloutFromMessage_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IODispatchCalloutFromMessage_2 = { kPointerType,24,"mach_msg_header_t",1,0,&_IODispatchCalloutFromMessage_3};
	VPL_Parameter _IODispatchCalloutFromMessage_1 = { kPointerType,0,"void",1,0,&_IODispatchCalloutFromMessage_2};
	VPL_ExtProcedure _IODispatchCalloutFromMessage_F = {"IODispatchCalloutFromMessage",IODispatchCalloutFromMessage,&_IODispatchCalloutFromMessage_1,NULL};

	VPL_Parameter _IONotificationPortGetMachPort_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IONotificationPortGetMachPort_1 = { kPointerType,0,"IONotificationPort",1,0,NULL};
	VPL_ExtProcedure _IONotificationPortGetMachPort_F = {"IONotificationPortGetMachPort",IONotificationPortGetMachPort,&_IONotificationPortGetMachPort_1,&_IONotificationPortGetMachPort_R};

	VPL_Parameter _IONotificationPortGetRunLoopSource_R = { kPointerType,0,"__CFRunLoopSource",1,0,NULL};
	VPL_Parameter _IONotificationPortGetRunLoopSource_1 = { kPointerType,0,"IONotificationPort",1,0,NULL};
	VPL_ExtProcedure _IONotificationPortGetRunLoopSource_F = {"IONotificationPortGetRunLoopSource",IONotificationPortGetRunLoopSource,&_IONotificationPortGetRunLoopSource_1,&_IONotificationPortGetRunLoopSource_R};

	VPL_Parameter _IONotificationPortDestroy_1 = { kPointerType,0,"IONotificationPort",1,0,NULL};
	VPL_ExtProcedure _IONotificationPortDestroy_F = {"IONotificationPortDestroy",IONotificationPortDestroy,&_IONotificationPortDestroy_1,NULL};

	VPL_Parameter _IONotificationPortCreate_R = { kPointerType,0,"IONotificationPort",1,0,NULL};
	VPL_Parameter _IONotificationPortCreate_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IONotificationPortCreate_F = {"IONotificationPortCreate",IONotificationPortCreate,&_IONotificationPortCreate_1,&_IONotificationPortCreate_R};

	VPL_Parameter _IOMasterPort_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOMasterPort_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOMasterPort_1 = { kUnsignedType,4,NULL,0,0,&_IOMasterPort_2};
	VPL_ExtProcedure _IOMasterPort_F = {"IOMasterPort",IOMasterPort,&_IOMasterPort_1,&_IOMasterPort_R};


VPL_DictionaryNode VPX_MacOSX_IOKit_Procedures[] =	{
	{"IOBlitterPtr",&_IOBlitterPtr_F},
	{"IOBlitProcPtr",&_IOBlitProcPtr_F},
	{"IOBlitAccumulatePtr",&_IOBlitAccumulatePtr_F},
	{"IOUSBLowLatencyIsocCompletionAction",&_IOUSBLowLatencyIsocCompletionAction_F},
	{"IOUSBIsocCompletionAction",&_IOUSBIsocCompletionAction_F},
	{"IOUSBCompletionActionWithTimeStamp",&_IOUSBCompletionActionWithTimeStamp_F},
	{"IOUSBCompletionAction",&_IOUSBCompletionAction_F},
	{"IOAsyncCallback",&_IOAsyncCallback_F},
	{"IOAsyncCallback2",&_IOAsyncCallback2_F},
	{"IOAsyncCallback1",&_IOAsyncCallback1_F},
	{"IOAsyncCallback0",&_IOAsyncCallback0_F},
	{"IOServiceInterestCallback",&_IOServiceInterestCallback_F},
	{"IOServiceMatchingCallback",&_IOServiceMatchingCallback_F},
	{"mach_error_fn_t",&_mach_error_fn_t_F},
	{"UniversalProcPtr",&_UniversalProcPtr_F},
	{"Register68kProcPtr",&_Register68kProcPtr_F},
	{"ProcPtr",&_ProcPtr_F},
	{"IOFBMemoryCopy",&_IOFBMemoryCopy_F},
	{"IOFBBeamPosition",&_IOFBBeamPosition_F},
	{"IOFBSynchronize",&_IOFBSynchronize_F},
	{"IOFBBlitSurfaceSurfaceCopy",&_IOFBBlitSurfaceSurfaceCopy_F},
	{"IOFBBlitSurfaceCopy",&_IOFBBlitSurfaceCopy_F},
	{"IOFBBlitVRAMCopy",&_IOFBBlitVRAMCopy_F},
	{"IOPSBlitInvert",&_IOPSBlitInvert_F},
	{"IOPSBlitCopy",&_IOPSBlitCopy_F},
	{"IOPSBlitFill",&_IOPSBlitFill_F},
	{"IOPSBlitIdle",&_IOPSBlitIdle_F},
	{"IOPSBlitDeallocate",&_IOPSBlitDeallocate_F},
	{"IOPSBlitReset",&_IOPSBlitReset_F},
	{"IOPSAllocateBlitEngine",&_IOPSAllocateBlitEngine_F},
	{"IOFBAcknowledgePM",&_IOFBAcknowledgePM_F},
	{"IOFBSetCursorPosition",&_IOFBSetCursorPosition_F},
	{"IOFBSetCursorVisible",&_IOFBSetCursorVisible_F},
	{"IOFBSetNewCursor",&_IOFBSetNewCursor_F},
	{"IODisplayCommitParameters",&_IODisplayCommitParameters_F},
	{"IODisplayGetIntegerRangeParameter",&_IODisplayGetIntegerRangeParameter_F},
	{"IODisplayGetFloatParameter",&_IODisplayGetFloatParameter_F},
	{"IODisplayCopyFloatParameters",&_IODisplayCopyFloatParameters_F},
	{"IODisplayCopyParameters",&_IODisplayCopyParameters_F},
	{"IODisplaySetIntegerParameter",&_IODisplaySetIntegerParameter_F},
	{"IODisplaySetFloatParameter",&_IODisplaySetFloatParameter_F},
	{"IODisplaySetParameters",&_IODisplaySetParameters_F},
	{"IODisplayMatchDictionaries",&_IODisplayMatchDictionaries_F},
	{"IODisplayCreateInfoDictionary",&_IODisplayCreateInfoDictionary_F},
	{"IOFBGetPixelInfoDictionary",&_IOFBGetPixelInfoDictionary_F},
	{"IOFBCreateDisplayModeDictionary",&_IOFBCreateDisplayModeDictionary_F},
	{"IOFBSetAttributeForFramebuffer",&_IOFBSetAttributeForFramebuffer_F},
	{"IOFBGetAttributeForFramebuffer",&_IOFBGetAttributeForFramebuffer_F},
	{"IOFBGetConnectState",&_IOFBGetConnectState_F},
	{"IOFBAcknowledgeNotification",&_IOFBAcknowledgeNotification_F},
	{"IOFBDispatchMessageNotification",&_IOFBDispatchMessageNotification_F},
	{"IOFBGetNotificationMachPort",&_IOFBGetNotificationMachPort_F},
	{"IOFBGetDefaultDisplayMode",&_IOFBGetDefaultDisplayMode_F},
	{"IOFBSetStartupDisplayModeAndDepth",&_IOFBSetStartupDisplayModeAndDepth_F},
	{"IOFBSetDisplayModeAndDepth",&_IOFBSetDisplayModeAndDepth_F},
	{"IOFBGetPixelInformation",&_IOFBGetPixelInformation_F},
	{"IOFBGetPixelFormats",&_IOFBGetPixelFormats_F},
	{"IOFBGetDisplayModeInformation",&_IOFBGetDisplayModeInformation_F},
	{"IOFBGetDisplayModes",&_IOFBGetDisplayModes_F},
	{"IOFBGetDisplayModeCount",&_IOFBGetDisplayModeCount_F},
	{"IOFBSet555To444Table",&_IOFBSet555To444Table_F},
	{"IOFBSet444To555Table",&_IOFBSet444To555Table_F},
	{"IOFBSet256To888Table",&_IOFBSet256To888Table_F},
	{"IOFBSet888To256Table",&_IOFBSet888To256Table_F},
	{"IOFBSetGamma",&_IOFBSetGamma_F},
	{"IOFBSetCLUT",&_IOFBSetCLUT_F},
	{"IOFBGetPixelFormat",&_IOFBGetPixelFormat_F},
	{"IOFBGetCurrentDisplayModeAndDepth",&_IOFBGetCurrentDisplayModeAndDepth_F},
	{"IOFBSetBounds",&_IOFBSetBounds_F},
	{"IOFBGetFramebufferOffsetForAperture",&_IOFBGetFramebufferOffsetForAperture_F},
	{"IOFBGetFramebufferInformationForAperture",&_IOFBGetFramebufferInformationForAperture_F},
	{"IOFBCreateSharedCursor",&_IOFBCreateSharedCursor_F},
	{"IOFramebufferOpen",&_IOFramebufferOpen_F},
	{"IOAccelFindAccelerator",&_IOAccelFindAccelerator_F},
	{"ev_try_lock",&_ev_try_lock_F},
	{"ev_unlock",&_ev_unlock_F},
	{"ev_lock",&_ev_lock_F},
	{"IOTrySpinLock",&_IOTrySpinLock_F},
	{"IOSpinUnlock",&_IOSpinUnlock_F},
	{"IOSpinLock",&_IOSpinLock_F},
	{"IOPMCopyScheduledPowerEvents",&_IOPMCopyScheduledPowerEvents_F},
	{"IOPMCancelScheduledPowerEvent",&_IOPMCancelScheduledPowerEvent_F},
	{"IOPMSchedulePowerEvent",&_IOPMSchedulePowerEvent_F},
	{"IOPMCopyBatteryInfo",&_IOPMCopyBatteryInfo_F},
	{"IOPMSleepSystem",&_IOPMSleepSystem_F},
	{"IOPMSleepEnabled",&_IOPMSleepEnabled_F},
	{"IOCancelPowerChange",&_IOCancelPowerChange_F},
	{"IOAllowPowerChange",&_IOAllowPowerChange_F},
	{"IODeregisterForSystemPower",&_IODeregisterForSystemPower_F},
	{"IODeregisterApp",&_IODeregisterApp_F},
	{"IORegisterForSystemPower",&_IORegisterForSystemPower_F},
	{"IORegisterApp",&_IORegisterApp_F},
	{"IOPMGetAggressiveness",&_IOPMGetAggressiveness_F},
	{"IOPMSetAggressiveness",&_IOPMSetAggressiveness_F},
	{"IOPMFindPowerManagement",&_IOPMFindPowerManagement_F},
	{"IODestroyPlugInInterface",&_IODestroyPlugInInterface_F},
	{"IOCreatePlugInInterfaceForService",&_IOCreatePlugInInterfaceForService_F},
	{"IOCompatibiltyNumber",&_IOCompatibiltyNumber_F},
	{"IOMapMemory",&_IOMapMemory_F},
	{"IORegistryDisposeEnumerator",&_IORegistryDisposeEnumerator_F},
	{"IOCatalogueReset",&_IOCatalogueReset_F},
	{"IOCatalogueModuleLoaded",&_IOCatalogueModuleLoaded_F},
	{"IOCatalogueGetData",&_IOCatalogueGetData_F},
	{"IOCatalogueTerminate",&_IOCatalogueTerminate_F},
	{"IOCatalogueSendData",&_IOCatalogueSendData_F},
	{"OSGetNotificationFromMessage",&_OSGetNotificationFromMessage_F},
	{"IOServiceOFPathToBSDName",&_IOServiceOFPathToBSDName_F},
	{"IOOpenFirmwarePathMatching",&_IOOpenFirmwarePathMatching_F},
	{"IOBSDNameMatching",&_IOBSDNameMatching_F},
	{"IOServiceNameMatching",&_IOServiceNameMatching_F},
	{"IOServiceMatching",&_IOServiceMatching_F},
	{"IORegistryEntryInPlane",&_IORegistryEntryInPlane_F},
	{"IORegistryEntryGetParentEntry",&_IORegistryEntryGetParentEntry_F},
	{"IORegistryEntryGetParentIterator",&_IORegistryEntryGetParentIterator_F},
	{"IORegistryEntryGetChildEntry",&_IORegistryEntryGetChildEntry_F},
	{"IORegistryEntryGetChildIterator",&_IORegistryEntryGetChildIterator_F},
	{"IORegistryEntrySetCFProperty",&_IORegistryEntrySetCFProperty_F},
	{"IORegistryEntrySetCFProperties",&_IORegistryEntrySetCFProperties_F},
	{"IORegistryEntryGetProperty",&_IORegistryEntryGetProperty_F},
	{"IORegistryEntrySearchCFProperty",&_IORegistryEntrySearchCFProperty_F},
	{"IORegistryEntryCreateCFProperty",&_IORegistryEntryCreateCFProperty_F},
	{"IORegistryEntryCreateCFProperties",&_IORegistryEntryCreateCFProperties_F},
	{"IORegistryEntryGetPath",&_IORegistryEntryGetPath_F},
	{"IORegistryEntryGetLocationInPlane",&_IORegistryEntryGetLocationInPlane_F},
	{"IORegistryEntryGetNameInPlane",&_IORegistryEntryGetNameInPlane_F},
	{"IORegistryEntryGetName",&_IORegistryEntryGetName_F},
	{"IORegistryIteratorExitEntry",&_IORegistryIteratorExitEntry_F},
	{"IORegistryIteratorEnterEntry",&_IORegistryIteratorEnterEntry_F},
	{"IORegistryEntryCreateIterator",&_IORegistryEntryCreateIterator_F},
	{"IORegistryCreateIterator",&_IORegistryCreateIterator_F},
	{"IORegistryEntryFromPath",&_IORegistryEntryFromPath_F},
	{"IORegistryGetRootEntry",&_IORegistryGetRootEntry_F},
	{"IOConnectAddClient",&_IOConnectAddClient_F},
	{"IOConnectTrap6",&_IOConnectTrap6_F},
	{"IOConnectTrap5",&_IOConnectTrap5_F},
	{"IOConnectTrap4",&_IOConnectTrap4_F},
	{"IOConnectTrap3",&_IOConnectTrap3_F},
	{"IOConnectTrap2",&_IOConnectTrap2_F},
	{"IOConnectTrap1",&_IOConnectTrap1_F},
	{"IOConnectTrap0",&_IOConnectTrap0_F},
	{"IOConnectMethodStructureIStructureO",&_IOConnectMethodStructureIStructureO_F},
	{"IOConnectMethodScalarIStructureI",&_IOConnectMethodScalarIStructureI_F},
	{"IOConnectMethodScalarIStructureO",&_IOConnectMethodScalarIStructureO_F},
	{"IOConnectMethodScalarIScalarO",&_IOConnectMethodScalarIScalarO_F},
	{"IOConnectSetCFProperty",&_IOConnectSetCFProperty_F},
	{"IOConnectSetCFProperties",&_IOConnectSetCFProperties_F},
	{"IOConnectUnmapMemory",&_IOConnectUnmapMemory_F},
	{"IOConnectMapMemory",&_IOConnectMapMemory_F},
	{"IOConnectSetNotificationPort",&_IOConnectSetNotificationPort_F},
	{"IOConnectGetService",&_IOConnectGetService_F},
	{"IOConnectRelease",&_IOConnectRelease_F},
	{"IOConnectAddRef",&_IOConnectAddRef_F},
	{"IOServiceClose",&_IOServiceClose_F},
	{"IOServiceRequestProbe",&_IOServiceRequestProbe_F},
	{"IOServiceOpen",&_IOServiceOpen_F},
	{"IOKitWaitQuiet",&_IOKitWaitQuiet_F},
	{"IOKitGetBusyState",&_IOKitGetBusyState_F},
	{"IOServiceWaitQuiet",&_IOServiceWaitQuiet_F},
	{"IOServiceGetBusyState",&_IOServiceGetBusyState_F},
	{"IOServiceMatchPropertyTable",&_IOServiceMatchPropertyTable_F},
	{"IOServiceAddInterestNotification",&_IOServiceAddInterestNotification_F},
	{"IOServiceAddMatchingNotification",&_IOServiceAddMatchingNotification_F},
	{"IOServiceAddNotification",&_IOServiceAddNotification_F},
	{"IOServiceGetMatchingServices",&_IOServiceGetMatchingServices_F},
	{"IOServiceGetMatchingService",&_IOServiceGetMatchingService_F},
	{"IOIteratorIsValid",&_IOIteratorIsValid_F},
	{"IOIteratorReset",&_IOIteratorReset_F},
	{"IOIteratorNext",&_IOIteratorNext_F},
	{"IOObjectGetRetainCount",&_IOObjectGetRetainCount_F},
	{"IOObjectIsEqualTo",&_IOObjectIsEqualTo_F},
	{"IOObjectConformsTo",&_IOObjectConformsTo_F},
	{"IOObjectCopyBundleIdentifierForClass",&_IOObjectCopyBundleIdentifierForClass_F},
	{"IOObjectCopySuperclassForClass",&_IOObjectCopySuperclassForClass_F},
	{"IOObjectCopyClass",&_IOObjectCopyClass_F},
	{"IOObjectGetClass",&_IOObjectGetClass_F},
	{"IOObjectRetain",&_IOObjectRetain_F},
	{"IOObjectRelease",&_IOObjectRelease_F},
	{"IOCreateReceivePort",&_IOCreateReceivePort_F},
	{"IODispatchCalloutFromMessage",&_IODispatchCalloutFromMessage_F},
	{"IONotificationPortGetMachPort",&_IONotificationPortGetMachPort_F},
	{"IONotificationPortGetRunLoopSource",&_IONotificationPortGetRunLoopSource_F},
	{"IONotificationPortDestroy",&_IONotificationPortDestroy_F},
	{"IONotificationPortCreate",&_IONotificationPortCreate_F},
	{"IOMasterPort",&_IOMasterPort_F},
};

Nat4	VPX_MacOSX_IOKit_Procedures_Number = 184; // 515 - 4 + 12;

#pragma export on

Nat4	load_MacOSX_IOKit_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_IOKit_Procedures(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_MacOSX_IOKit_Procedures_Number,VPX_MacOSX_IOKit_Procedures);
		
		return result;
}

#pragma export off
