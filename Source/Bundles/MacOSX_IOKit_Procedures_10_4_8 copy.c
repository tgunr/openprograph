/*
	
	MacOSX_Procedures.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

#include <Carbon/Carbon.h>
#include <IOKit/IOKitLib.h>
#include <IOKit/IOCFPlugIn.h>
#include <IOKit/usb/IOUSBLib.h>
#include <IOKit/pwr_mgt/IOPMLib.h>
#include <IOKit/graphics/IOGraphicsLib.h>

/* --------------------- Start User created functions -------------------------------- */

	VPL_Parameter _IODisplayGetIntegerRangeParameter_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_6 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_5 = { kPointerType,4,"int",1,0,&_IODisplayGetIntegerRangeParameter_6};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_4 = { kPointerType,4,"int",1,0,&_IODisplayGetIntegerRangeParameter_5};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_3 = { kPointerType,0,"__CFString",1,0,&_IODisplayGetIntegerRangeParameter_4};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_2 = { kUnsignedType,4,NULL,0,0,&_IODisplayGetIntegerRangeParameter_3};
	VPL_Parameter _IODisplayGetIntegerRangeParameter_1 = { kUnsignedType,4,NULL,0,0,&_IODisplayGetIntegerRangeParameter_2};
	VPL_ExtProcedure _IODisplayGetIntegerRangeParameter_F = {"IODisplayGetIntegerRangeParameter",IODisplayGetIntegerRangeParameter,&_IODisplayGetIntegerRangeParameter_1,&_IODisplayGetIntegerRangeParameter_R};

	VPL_Parameter _IODisplaySetIntegerParameter_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplaySetIntegerParameter_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODisplaySetIntegerParameter_3 = { kPointerType,0,"__CFString",1,0,&_IODisplaySetIntegerParameter_4};
	VPL_Parameter _IODisplaySetIntegerParameter_2 = { kUnsignedType,4,NULL,0,0,&_IODisplaySetIntegerParameter_3};
	VPL_Parameter _IODisplaySetIntegerParameter_1 = { kUnsignedType,4,NULL,0,0,&_IODisplaySetIntegerParameter_2};
	VPL_ExtProcedure _IODisplaySetIntegerParameter_F = {"IODisplaySetIntegerParameter",IODisplaySetIntegerParameter,&_IODisplaySetIntegerParameter_1,&_IODisplaySetIntegerParameter_R};


	VPL_Parameter _IORegisterForSystemPower_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegisterForSystemPower_4 = { kPointerType,0,"io_object_t",1,0,NULL};
	VPL_Parameter _IORegisterForSystemPower_3 = { kPointerType,0,"void",1,0,&_IORegisterForSystemPower_4};
	VPL_Parameter _IORegisterForSystemPower_2 = { kPointerType,0,"IONotificationPort",1,0,&_IORegisterForSystemPower_3};
	VPL_Parameter _IORegisterForSystemPower_1 = { kPointerType,0,"void",1,0,&_IORegisterForSystemPower_2};
	VPL_ExtProcedure _IORegisterForSystemPower_F = {"IORegisterForSystemPower",IORegisterForSystemPower,&_IORegisterForSystemPower_1,&_IORegisterForSystemPower_R};

	VPL_Parameter _IOAllowPowerChange_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOAllowPowerChange_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOAllowPowerChange_1 = { kUnsignedType,4,NULL,0,0,&_IOAllowPowerChange_2};
	VPL_ExtProcedure _IOAllowPowerChange_F = {"IOAllowPowerChange",IOAllowPowerChange,&_IOAllowPowerChange_1,&_IOAllowPowerChange_R};

	VPL_Parameter _IOCancelPowerChange_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCancelPowerChange_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCancelPowerChange_1 = { kUnsignedType,4,NULL,0,0,&_IOCancelPowerChange_2};
	VPL_ExtProcedure _IOCancelPowerChange_F = {"IOCancelPowerChange",IOCancelPowerChange,&_IOCancelPowerChange_1,&_IOCancelPowerChange_R};

	VPL_Parameter _IOPMFindPowerManagement_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMFindPowerManagement_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOPMFindPowerManagement_F = {"IOPMFindPowerManagement",IOPMFindPowerManagement,&_IOPMFindPowerManagement_1,&_IOPMFindPowerManagement_R};

	VPL_Parameter _IOPMSleepSystem_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMSleepSystem_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOPMSleepSystem_F = {"IOPMSleepSystem",IOPMSleepSystem,&_IOPMSleepSystem_1,&_IOPMSleepSystem_R};

	VPL_Parameter _IOPMSleepEnabled_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _IOPMSleepEnabled_F = {"IOPMSleepEnabled",IOPMSleepEnabled,NULL,&_IOPMSleepEnabled_R};

	VPL_Parameter _IODeregisterForSystemPower_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODeregisterForSystemPower_1 = { kPointerType,0,"io_object_t",1,0,NULL};
	VPL_ExtProcedure _IODeregisterForSystemPower_F = {"IODeregisterForSystemPower",IODeregisterForSystemPower,&_IODeregisterForSystemPower_1,&_IODeregisterForSystemPower_R};

	VPL_Parameter _IOPMSchedulePowerEvent_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMSchedulePowerEvent_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _IOPMSchedulePowerEvent_2 = { kPointerType,0,"__CFString",1,0,&_IOPMSchedulePowerEvent_3};
	VPL_Parameter _IOPMSchedulePowerEvent_1 = { kPointerType,0,"__CFDate",1,0,&_IOPMSchedulePowerEvent_2};
	VPL_ExtProcedure _IOPMSchedulePowerEvent_F = {"IOPMSchedulePowerEvent",IOPMSchedulePowerEvent,&_IOPMSchedulePowerEvent_1,&_IOPMSchedulePowerEvent_R};

	VPL_Parameter _IOPMCancelScheduledPowerEvent_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOPMCancelScheduledPowerEvent_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _IOPMCancelScheduledPowerEvent_2 = { kPointerType,0,"__CFString",1,0,&_IOPMCancelScheduledPowerEvent_3};
	VPL_Parameter _IOPMCancelScheduledPowerEvent_1 = { kPointerType,0,"__CFDate",1,0,&_IOPMCancelScheduledPowerEvent_2};
	VPL_ExtProcedure _IOPMCancelScheduledPowerEvent_F = {"IOPMCancelScheduledPowerEvent",IOPMCancelScheduledPowerEvent,&_IOPMCancelScheduledPowerEvent_1,&_IOPMCancelScheduledPowerEvent_R};

	VPL_Parameter _IOPMCopyScheduledPowerEvents_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _IOPMCopyScheduledPowerEvents_F = {"IOPMCopyScheduledPowerEvents",IOPMCopyScheduledPowerEvents,NULL,&_IOPMCopyScheduledPowerEvents_R};

/* --------------------- End User created functions -------------------------------- */

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

	VPL_Parameter _CFPlugInInstanceDeallocateInstanceDataFunction_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFPlugInInstanceDeallocateInstanceDataFunction_F = {"CFPlugInInstanceDeallocateInstanceDataFunction",NULL,&_CFPlugInInstanceDeallocateInstanceDataFunction_1,NULL};

	VPL_Parameter _CFPlugInInstanceGetInterfaceFunction_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInInstanceGetInterfaceFunction_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _CFPlugInInstanceGetInterfaceFunction_2 = { kPointerType,0,"__CFString",1,0,&_CFPlugInInstanceGetInterfaceFunction_3};
	VPL_Parameter _CFPlugInInstanceGetInterfaceFunction_1 = { kPointerType,0,"__CFPlugInInstance",1,0,&_CFPlugInInstanceGetInterfaceFunction_2};
	VPL_ExtProcedure _CFPlugInInstanceGetInterfaceFunction_F = {"CFPlugInInstanceGetInterfaceFunction",NULL,&_CFPlugInInstanceGetInterfaceFunction_1,&_CFPlugInInstanceGetInterfaceFunction_R};

	VPL_Parameter _CFPlugInFactoryFunction_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFPlugInFactoryFunction_2 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFPlugInFactoryFunction_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFPlugInFactoryFunction_2};
	VPL_ExtProcedure _CFPlugInFactoryFunction_F = {"CFPlugInFactoryFunction",NULL,&_CFPlugInFactoryFunction_1,&_CFPlugInFactoryFunction_R};

	VPL_Parameter _CFPlugInUnloadFunction_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFPlugInUnloadFunction_F = {"CFPlugInUnloadFunction",NULL,&_CFPlugInUnloadFunction_1,NULL};

	VPL_Parameter _CFPlugInDynamicRegisterFunction_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFPlugInDynamicRegisterFunction_F = {"CFPlugInDynamicRegisterFunction",NULL,&_CFPlugInDynamicRegisterFunction_1,NULL};

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

	VPL_Parameter _CFRunLoopTimerCallBack_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFRunLoopTimerCallBack_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,&_CFRunLoopTimerCallBack_2};
	VPL_ExtProcedure _CFRunLoopTimerCallBack_F = {"CFRunLoopTimerCallBack",NULL,&_CFRunLoopTimerCallBack_1,NULL};

	VPL_Parameter _CFRunLoopObserverCallBack_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFRunLoopObserverCallBack_2 = { kEnumType,4,"63",0,0,&_CFRunLoopObserverCallBack_3};
	VPL_Parameter _CFRunLoopObserverCallBack_1 = { kPointerType,0,"__CFRunLoopObserver",1,0,&_CFRunLoopObserverCallBack_2};
	VPL_ExtProcedure _CFRunLoopObserverCallBack_F = {"CFRunLoopObserverCallBack",NULL,&_CFRunLoopObserverCallBack_1,NULL};

	VPL_Parameter _CFArrayApplierFunction_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayApplierFunction_1 = { kPointerType,0,"void",1,0,&_CFArrayApplierFunction_2};
	VPL_ExtProcedure _CFArrayApplierFunction_F = {"CFArrayApplierFunction",NULL,&_CFArrayApplierFunction_1,NULL};

	VPL_Parameter _CFArrayEqualCallBack_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFArrayEqualCallBack_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayEqualCallBack_1 = { kPointerType,0,"void",1,0,&_CFArrayEqualCallBack_2};
	VPL_ExtProcedure _CFArrayEqualCallBack_F = {"CFArrayEqualCallBack",NULL,&_CFArrayEqualCallBack_1,&_CFArrayEqualCallBack_R};

	VPL_Parameter _CFArrayCopyDescriptionCallBack_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFArrayCopyDescriptionCallBack_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFArrayCopyDescriptionCallBack_F = {"CFArrayCopyDescriptionCallBack",NULL,&_CFArrayCopyDescriptionCallBack_1,&_CFArrayCopyDescriptionCallBack_R};

	VPL_Parameter _CFArrayReleaseCallBack_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayReleaseCallBack_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFArrayReleaseCallBack_2};
	VPL_ExtProcedure _CFArrayReleaseCallBack_F = {"CFArrayReleaseCallBack",NULL,&_CFArrayReleaseCallBack_1,NULL};

	VPL_Parameter _CFArrayRetainCallBack_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayRetainCallBack_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayRetainCallBack_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFArrayRetainCallBack_2};
	VPL_ExtProcedure _CFArrayRetainCallBack_F = {"CFArrayRetainCallBack",NULL,&_CFArrayRetainCallBack_1,&_CFArrayRetainCallBack_R};

	VPL_Parameter _CFDictionaryApplierFunction_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryApplierFunction_2 = { kPointerType,0,"void",1,0,&_CFDictionaryApplierFunction_3};
	VPL_Parameter _CFDictionaryApplierFunction_1 = { kPointerType,0,"void",1,0,&_CFDictionaryApplierFunction_2};
	VPL_ExtProcedure _CFDictionaryApplierFunction_F = {"CFDictionaryApplierFunction",NULL,&_CFDictionaryApplierFunction_1,NULL};

	VPL_Parameter _CFDictionaryHashCallBack_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDictionaryHashCallBack_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFDictionaryHashCallBack_F = {"CFDictionaryHashCallBack",NULL,&_CFDictionaryHashCallBack_1,&_CFDictionaryHashCallBack_R};

	VPL_Parameter _CFDictionaryEqualCallBack_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFDictionaryEqualCallBack_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryEqualCallBack_1 = { kPointerType,0,"void",1,0,&_CFDictionaryEqualCallBack_2};
	VPL_ExtProcedure _CFDictionaryEqualCallBack_F = {"CFDictionaryEqualCallBack",NULL,&_CFDictionaryEqualCallBack_1,&_CFDictionaryEqualCallBack_R};

	VPL_Parameter _CFDictionaryCopyDescriptionCallBack_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFDictionaryCopyDescriptionCallBack_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFDictionaryCopyDescriptionCallBack_F = {"CFDictionaryCopyDescriptionCallBack",NULL,&_CFDictionaryCopyDescriptionCallBack_1,&_CFDictionaryCopyDescriptionCallBack_R};

	VPL_Parameter _CFDictionaryReleaseCallBack_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryReleaseCallBack_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDictionaryReleaseCallBack_2};
	VPL_ExtProcedure _CFDictionaryReleaseCallBack_F = {"CFDictionaryReleaseCallBack",NULL,&_CFDictionaryReleaseCallBack_1,NULL};

	VPL_Parameter _CFDictionaryRetainCallBack_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryRetainCallBack_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryRetainCallBack_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDictionaryRetainCallBack_2};
	VPL_ExtProcedure _CFDictionaryRetainCallBack_F = {"CFDictionaryRetainCallBack",NULL,&_CFDictionaryRetainCallBack_1,&_CFDictionaryRetainCallBack_R};

	VPL_Parameter _CFAllocatorPreferredSizeCallBack_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAllocatorPreferredSizeCallBack_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorPreferredSizeCallBack_2 = { kUnsignedType,4,NULL,0,0,&_CFAllocatorPreferredSizeCallBack_3};
	VPL_Parameter _CFAllocatorPreferredSizeCallBack_1 = { kIntType,4,NULL,0,0,&_CFAllocatorPreferredSizeCallBack_2};
	VPL_ExtProcedure _CFAllocatorPreferredSizeCallBack_F = {"CFAllocatorPreferredSizeCallBack",NULL,&_CFAllocatorPreferredSizeCallBack_1,&_CFAllocatorPreferredSizeCallBack_R};

	VPL_Parameter _CFAllocatorDeallocateCallBack_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorDeallocateCallBack_1 = { kPointerType,0,"void",1,0,&_CFAllocatorDeallocateCallBack_2};
	VPL_ExtProcedure _CFAllocatorDeallocateCallBack_F = {"CFAllocatorDeallocateCallBack",NULL,&_CFAllocatorDeallocateCallBack_1,NULL};

	VPL_Parameter _CFAllocatorReallocateCallBack_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorReallocateCallBack_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorReallocateCallBack_3 = { kUnsignedType,4,NULL,0,0,&_CFAllocatorReallocateCallBack_4};
	VPL_Parameter _CFAllocatorReallocateCallBack_2 = { kIntType,4,NULL,0,0,&_CFAllocatorReallocateCallBack_3};
	VPL_Parameter _CFAllocatorReallocateCallBack_1 = { kPointerType,0,"void",1,0,&_CFAllocatorReallocateCallBack_2};
	VPL_ExtProcedure _CFAllocatorReallocateCallBack_F = {"CFAllocatorReallocateCallBack",NULL,&_CFAllocatorReallocateCallBack_1,&_CFAllocatorReallocateCallBack_R};

	VPL_Parameter _CFAllocatorAllocateCallBack_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorAllocateCallBack_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorAllocateCallBack_2 = { kUnsignedType,4,NULL,0,0,&_CFAllocatorAllocateCallBack_3};
	VPL_Parameter _CFAllocatorAllocateCallBack_1 = { kIntType,4,NULL,0,0,&_CFAllocatorAllocateCallBack_2};
	VPL_ExtProcedure _CFAllocatorAllocateCallBack_F = {"CFAllocatorAllocateCallBack",NULL,&_CFAllocatorAllocateCallBack_1,&_CFAllocatorAllocateCallBack_R};

	VPL_Parameter _CFAllocatorCopyDescriptionCallBack_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFAllocatorCopyDescriptionCallBack_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFAllocatorCopyDescriptionCallBack_F = {"CFAllocatorCopyDescriptionCallBack",NULL,&_CFAllocatorCopyDescriptionCallBack_1,&_CFAllocatorCopyDescriptionCallBack_R};

	VPL_Parameter _CFAllocatorReleaseCallBack_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFAllocatorReleaseCallBack_F = {"CFAllocatorReleaseCallBack",NULL,&_CFAllocatorReleaseCallBack_1,NULL};

	VPL_Parameter _CFAllocatorRetainCallBack_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorRetainCallBack_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFAllocatorRetainCallBack_F = {"CFAllocatorRetainCallBack",NULL,&_CFAllocatorRetainCallBack_1,&_CFAllocatorRetainCallBack_R};

	VPL_Parameter _CFComparatorFunction_R = { kEnumType,4,"47",0,0,NULL};
	VPL_Parameter _CFComparatorFunction_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFComparatorFunction_2 = { kPointerType,0,"void",1,0,&_CFComparatorFunction_3};
	VPL_Parameter _CFComparatorFunction_1 = { kPointerType,0,"void",1,0,&_CFComparatorFunction_2};
	VPL_ExtProcedure _CFComparatorFunction_F = {"CFComparatorFunction",NULL,&_CFComparatorFunction_1,&_CFComparatorFunction_R};

	VPL_Parameter _IODestroyPlugInInterface_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IODestroyPlugInInterface_1 = { kPointerType,32,"IOCFPlugInInterfaceStruct",2,0,NULL};
	VPL_ExtProcedure _IODestroyPlugInInterface_F = {"IODestroyPlugInInterface",IODestroyPlugInInterface,&_IODestroyPlugInInterface_1,&_IODestroyPlugInInterface_R};

	VPL_Parameter _IOCreatePlugInInterfaceForService_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOCreatePlugInInterfaceForService_5 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _IOCreatePlugInInterfaceForService_4 = { kPointerType,32,"IOCFPlugInInterfaceStruct",3,0,&_IOCreatePlugInInterfaceForService_5};
	VPL_Parameter _IOCreatePlugInInterfaceForService_3 = { kPointerType,0,"__CFUUID",1,0,&_IOCreatePlugInInterfaceForService_4};
	VPL_Parameter _IOCreatePlugInInterfaceForService_2 = { kPointerType,0,"__CFUUID",1,0,&_IOCreatePlugInInterfaceForService_3};
	VPL_Parameter _IOCreatePlugInInterfaceForService_1 = { kUnsignedType,4,NULL,0,0,&_IOCreatePlugInInterfaceForService_2};
	VPL_ExtProcedure _IOCreatePlugInInterfaceForService_F = {"IOCreatePlugInInterfaceForService",IOCreatePlugInInterfaceForService,&_IOCreatePlugInInterfaceForService_1,&_IOCreatePlugInInterfaceForService_R};

	VPL_Parameter _CFPlugInInstanceCreateWithInstanceDataSize_R = { kPointerType,0,"__CFPlugInInstance",1,0,NULL};
	VPL_Parameter _CFPlugInInstanceCreateWithInstanceDataSize_5 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _CFPlugInInstanceCreateWithInstanceDataSize_4 = { kPointerType,0,"__CFString",1,0,&_CFPlugInInstanceCreateWithInstanceDataSize_5};
	VPL_Parameter _CFPlugInInstanceCreateWithInstanceDataSize_3 = { kPointerType,0,"void",1,0,&_CFPlugInInstanceCreateWithInstanceDataSize_4};
	VPL_Parameter _CFPlugInInstanceCreateWithInstanceDataSize_2 = { kIntType,4,NULL,0,0,&_CFPlugInInstanceCreateWithInstanceDataSize_3};
	VPL_Parameter _CFPlugInInstanceCreateWithInstanceDataSize_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFPlugInInstanceCreateWithInstanceDataSize_2};
	VPL_ExtProcedure _CFPlugInInstanceCreateWithInstanceDataSize_F = {"CFPlugInInstanceCreateWithInstanceDataSize",CFPlugInInstanceCreateWithInstanceDataSize,&_CFPlugInInstanceCreateWithInstanceDataSize_1,&_CFPlugInInstanceCreateWithInstanceDataSize_R};

	VPL_Parameter _CFPlugInInstanceGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFPlugInInstanceGetTypeID_F = {"CFPlugInInstanceGetTypeID",CFPlugInInstanceGetTypeID,NULL,&_CFPlugInInstanceGetTypeID_R};

	VPL_Parameter _CFPlugInInstanceGetInstanceData_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFPlugInInstanceGetInstanceData_1 = { kPointerType,0,"__CFPlugInInstance",1,0,NULL};
	VPL_ExtProcedure _CFPlugInInstanceGetInstanceData_F = {"CFPlugInInstanceGetInstanceData",CFPlugInInstanceGetInstanceData,&_CFPlugInInstanceGetInstanceData_1,&_CFPlugInInstanceGetInstanceData_R};

	VPL_Parameter _CFPlugInInstanceGetFactoryName_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFPlugInInstanceGetFactoryName_1 = { kPointerType,0,"__CFPlugInInstance",1,0,NULL};
	VPL_ExtProcedure _CFPlugInInstanceGetFactoryName_F = {"CFPlugInInstanceGetFactoryName",CFPlugInInstanceGetFactoryName,&_CFPlugInInstanceGetFactoryName_1,&_CFPlugInInstanceGetFactoryName_R};

	VPL_Parameter _CFPlugInInstanceGetInterfaceFunctionTable_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInInstanceGetInterfaceFunctionTable_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _CFPlugInInstanceGetInterfaceFunctionTable_2 = { kPointerType,0,"__CFString",1,0,&_CFPlugInInstanceGetInterfaceFunctionTable_3};
	VPL_Parameter _CFPlugInInstanceGetInterfaceFunctionTable_1 = { kPointerType,0,"__CFPlugInInstance",1,0,&_CFPlugInInstanceGetInterfaceFunctionTable_2};
	VPL_ExtProcedure _CFPlugInInstanceGetInterfaceFunctionTable_F = {"CFPlugInInstanceGetInterfaceFunctionTable",CFPlugInInstanceGetInterfaceFunctionTable,&_CFPlugInInstanceGetInterfaceFunctionTable_1,&_CFPlugInInstanceGetInterfaceFunctionTable_R};

	VPL_Parameter _CFPlugInRemoveInstanceForFactory_1 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_ExtProcedure _CFPlugInRemoveInstanceForFactory_F = {"CFPlugInRemoveInstanceForFactory",CFPlugInRemoveInstanceForFactory,&_CFPlugInRemoveInstanceForFactory_1,NULL};

	VPL_Parameter _CFPlugInAddInstanceForFactory_1 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_ExtProcedure _CFPlugInAddInstanceForFactory_F = {"CFPlugInAddInstanceForFactory",CFPlugInAddInstanceForFactory,&_CFPlugInAddInstanceForFactory_1,NULL};

	VPL_Parameter _CFPlugInUnregisterPlugInType_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInUnregisterPlugInType_2 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFPlugInUnregisterPlugInType_1 = { kPointerType,0,"__CFUUID",1,0,&_CFPlugInUnregisterPlugInType_2};
	VPL_ExtProcedure _CFPlugInUnregisterPlugInType_F = {"CFPlugInUnregisterPlugInType",CFPlugInUnregisterPlugInType,&_CFPlugInUnregisterPlugInType_1,&_CFPlugInUnregisterPlugInType_R};

	VPL_Parameter _CFPlugInRegisterPlugInType_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInRegisterPlugInType_2 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFPlugInRegisterPlugInType_1 = { kPointerType,0,"__CFUUID",1,0,&_CFPlugInRegisterPlugInType_2};
	VPL_ExtProcedure _CFPlugInRegisterPlugInType_F = {"CFPlugInRegisterPlugInType",CFPlugInRegisterPlugInType,&_CFPlugInRegisterPlugInType_1,&_CFPlugInRegisterPlugInType_R};

	VPL_Parameter _CFPlugInUnregisterFactory_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInUnregisterFactory_1 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_ExtProcedure _CFPlugInUnregisterFactory_F = {"CFPlugInUnregisterFactory",CFPlugInUnregisterFactory,&_CFPlugInUnregisterFactory_1,&_CFPlugInUnregisterFactory_R};

	VPL_Parameter _CFPlugInRegisterFactoryFunctionByName_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInRegisterFactoryFunctionByName_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFPlugInRegisterFactoryFunctionByName_2 = { kPointerType,0,"__CFBundle",1,0,&_CFPlugInRegisterFactoryFunctionByName_3};
	VPL_Parameter _CFPlugInRegisterFactoryFunctionByName_1 = { kPointerType,0,"__CFUUID",1,0,&_CFPlugInRegisterFactoryFunctionByName_2};
	VPL_ExtProcedure _CFPlugInRegisterFactoryFunctionByName_F = {"CFPlugInRegisterFactoryFunctionByName",CFPlugInRegisterFactoryFunctionByName,&_CFPlugInRegisterFactoryFunctionByName_1,&_CFPlugInRegisterFactoryFunctionByName_R};

	VPL_Parameter _CFPlugInRegisterFactoryFunction_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInRegisterFactoryFunction_2 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _CFPlugInRegisterFactoryFunction_1 = { kPointerType,0,"__CFUUID",1,0,&_CFPlugInRegisterFactoryFunction_2};
	VPL_ExtProcedure _CFPlugInRegisterFactoryFunction_F = {"CFPlugInRegisterFactoryFunction",CFPlugInRegisterFactoryFunction,&_CFPlugInRegisterFactoryFunction_1,&_CFPlugInRegisterFactoryFunction_R};

	VPL_Parameter _CFPlugInInstanceCreate_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFPlugInInstanceCreate_3 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFPlugInInstanceCreate_2 = { kPointerType,0,"__CFUUID",1,0,&_CFPlugInInstanceCreate_3};
	VPL_Parameter _CFPlugInInstanceCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFPlugInInstanceCreate_2};
	VPL_ExtProcedure _CFPlugInInstanceCreate_F = {"CFPlugInInstanceCreate",CFPlugInInstanceCreate,&_CFPlugInInstanceCreate_1,&_CFPlugInInstanceCreate_R};

	VPL_Parameter _CFPlugInFindFactoriesForPlugInTypeInPlugIn_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFPlugInFindFactoriesForPlugInTypeInPlugIn_2 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_Parameter _CFPlugInFindFactoriesForPlugInTypeInPlugIn_1 = { kPointerType,0,"__CFUUID",1,0,&_CFPlugInFindFactoriesForPlugInTypeInPlugIn_2};
	VPL_ExtProcedure _CFPlugInFindFactoriesForPlugInTypeInPlugIn_F = {"CFPlugInFindFactoriesForPlugInTypeInPlugIn",CFPlugInFindFactoriesForPlugInTypeInPlugIn,&_CFPlugInFindFactoriesForPlugInTypeInPlugIn_1,&_CFPlugInFindFactoriesForPlugInTypeInPlugIn_R};

	VPL_Parameter _CFPlugInFindFactoriesForPlugInType_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFPlugInFindFactoriesForPlugInType_1 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_ExtProcedure _CFPlugInFindFactoriesForPlugInType_F = {"CFPlugInFindFactoriesForPlugInType",CFPlugInFindFactoriesForPlugInType,&_CFPlugInFindFactoriesForPlugInType_1,&_CFPlugInFindFactoriesForPlugInType_R};

	VPL_Parameter _CFPlugInIsLoadOnDemand_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInIsLoadOnDemand_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFPlugInIsLoadOnDemand_F = {"CFPlugInIsLoadOnDemand",CFPlugInIsLoadOnDemand,&_CFPlugInIsLoadOnDemand_1,&_CFPlugInIsLoadOnDemand_R};

	VPL_Parameter _CFPlugInSetLoadOnDemand_2 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFPlugInSetLoadOnDemand_1 = { kPointerType,0,"__CFBundle",1,0,&_CFPlugInSetLoadOnDemand_2};
	VPL_ExtProcedure _CFPlugInSetLoadOnDemand_F = {"CFPlugInSetLoadOnDemand",CFPlugInSetLoadOnDemand,&_CFPlugInSetLoadOnDemand_1,NULL};

	VPL_Parameter _CFPlugInGetBundle_R = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_Parameter _CFPlugInGetBundle_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFPlugInGetBundle_F = {"CFPlugInGetBundle",CFPlugInGetBundle,&_CFPlugInGetBundle_1,&_CFPlugInGetBundle_R};

	VPL_Parameter _CFPlugInCreate_R = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_Parameter _CFPlugInCreate_2 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFPlugInCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFPlugInCreate_2};
	VPL_ExtProcedure _CFPlugInCreate_F = {"CFPlugInCreate",CFPlugInCreate,&_CFPlugInCreate_1,&_CFPlugInCreate_R};

	VPL_Parameter _CFPlugInGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFPlugInGetTypeID_F = {"CFPlugInGetTypeID",CFPlugInGetTypeID,NULL,&_CFPlugInGetTypeID_R};

	VPL_Parameter _CFUUIDCreateFromUUIDBytes_R = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFUUIDCreateFromUUIDBytes_2 = { kStructureType,16,"CFUUIDBytes",0,0,NULL};
	VPL_Parameter _CFUUIDCreateFromUUIDBytes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFUUIDCreateFromUUIDBytes_2};
	VPL_ExtProcedure _CFUUIDCreateFromUUIDBytes_F = {"CFUUIDCreateFromUUIDBytes",CFUUIDCreateFromUUIDBytes,&_CFUUIDCreateFromUUIDBytes_1,&_CFUUIDCreateFromUUIDBytes_R};

	VPL_Parameter _CFUUIDGetUUIDBytes_R = { kStructureType,16,"CFUUIDBytes",0,0,NULL};
	VPL_Parameter _CFUUIDGetUUIDBytes_1 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_ExtProcedure _CFUUIDGetUUIDBytes_F = {"CFUUIDGetUUIDBytes",CFUUIDGetUUIDBytes,&_CFUUIDGetUUIDBytes_1,&_CFUUIDGetUUIDBytes_R};

	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_R = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_17 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_16 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_17};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_15 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_16};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_14 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_15};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_13 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_14};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_12 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_13};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_11 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_12};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_10 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_11};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_9 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_10};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_8 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_9};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_7 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_8};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_6 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_7};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_5 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_6};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_4 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_5};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_3 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_4};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_2 = { kUnsignedType,1,NULL,0,0,&_CFUUIDGetConstantUUIDWithBytes_3};
	VPL_Parameter _CFUUIDGetConstantUUIDWithBytes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFUUIDGetConstantUUIDWithBytes_2};
	VPL_ExtProcedure _CFUUIDGetConstantUUIDWithBytes_F = {"CFUUIDGetConstantUUIDWithBytes",CFUUIDGetConstantUUIDWithBytes,&_CFUUIDGetConstantUUIDWithBytes_1,&_CFUUIDGetConstantUUIDWithBytes_R};

	VPL_Parameter _CFUUIDCreateString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFUUIDCreateString_2 = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFUUIDCreateString_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFUUIDCreateString_2};
	VPL_ExtProcedure _CFUUIDCreateString_F = {"CFUUIDCreateString",CFUUIDCreateString,&_CFUUIDCreateString_1,&_CFUUIDCreateString_R};

	VPL_Parameter _CFUUIDCreateFromString_R = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFUUIDCreateFromString_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFUUIDCreateFromString_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFUUIDCreateFromString_2};
	VPL_ExtProcedure _CFUUIDCreateFromString_F = {"CFUUIDCreateFromString",CFUUIDCreateFromString,&_CFUUIDCreateFromString_1,&_CFUUIDCreateFromString_R};

	VPL_Parameter _CFUUIDCreateWithBytes_R = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFUUIDCreateWithBytes_17 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFUUIDCreateWithBytes_16 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_17};
	VPL_Parameter _CFUUIDCreateWithBytes_15 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_16};
	VPL_Parameter _CFUUIDCreateWithBytes_14 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_15};
	VPL_Parameter _CFUUIDCreateWithBytes_13 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_14};
	VPL_Parameter _CFUUIDCreateWithBytes_12 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_13};
	VPL_Parameter _CFUUIDCreateWithBytes_11 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_12};
	VPL_Parameter _CFUUIDCreateWithBytes_10 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_11};
	VPL_Parameter _CFUUIDCreateWithBytes_9 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_10};
	VPL_Parameter _CFUUIDCreateWithBytes_8 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_9};
	VPL_Parameter _CFUUIDCreateWithBytes_7 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_8};
	VPL_Parameter _CFUUIDCreateWithBytes_6 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_7};
	VPL_Parameter _CFUUIDCreateWithBytes_5 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_6};
	VPL_Parameter _CFUUIDCreateWithBytes_4 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_5};
	VPL_Parameter _CFUUIDCreateWithBytes_3 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_4};
	VPL_Parameter _CFUUIDCreateWithBytes_2 = { kUnsignedType,1,NULL,0,0,&_CFUUIDCreateWithBytes_3};
	VPL_Parameter _CFUUIDCreateWithBytes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFUUIDCreateWithBytes_2};
	VPL_ExtProcedure _CFUUIDCreateWithBytes_F = {"CFUUIDCreateWithBytes",CFUUIDCreateWithBytes,&_CFUUIDCreateWithBytes_1,&_CFUUIDCreateWithBytes_R};

	VPL_Parameter _CFUUIDCreate_R = { kPointerType,0,"__CFUUID",1,0,NULL};
	VPL_Parameter _CFUUIDCreate_1 = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_ExtProcedure _CFUUIDCreate_F = {"CFUUIDCreate",CFUUIDCreate,&_CFUUIDCreate_1,&_CFUUIDCreate_R};

	VPL_Parameter _CFUUIDGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFUUIDGetTypeID_F = {"CFUUIDGetTypeID",CFUUIDGetTypeID,NULL,&_CFUUIDGetTypeID_R};

	VPL_Parameter _CFBundleCloseBundleResourceMap_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _CFBundleCloseBundleResourceMap_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleCloseBundleResourceMap_2};
	VPL_ExtProcedure _CFBundleCloseBundleResourceMap_F = {"CFBundleCloseBundleResourceMap",CFBundleCloseBundleResourceMap,&_CFBundleCloseBundleResourceMap_1,NULL};

	VPL_Parameter _CFBundleOpenBundleResourceFiles_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFBundleOpenBundleResourceFiles_3 = { kPointerType,2,"short",1,0,NULL};
	VPL_Parameter _CFBundleOpenBundleResourceFiles_2 = { kPointerType,2,"short",1,0,&_CFBundleOpenBundleResourceFiles_3};
	VPL_Parameter _CFBundleOpenBundleResourceFiles_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleOpenBundleResourceFiles_2};
	VPL_ExtProcedure _CFBundleOpenBundleResourceFiles_F = {"CFBundleOpenBundleResourceFiles",CFBundleOpenBundleResourceFiles,&_CFBundleOpenBundleResourceFiles_1,&_CFBundleOpenBundleResourceFiles_R};

	VPL_Parameter _CFBundleOpenBundleResourceMap_R = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _CFBundleOpenBundleResourceMap_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleOpenBundleResourceMap_F = {"CFBundleOpenBundleResourceMap",CFBundleOpenBundleResourceMap,&_CFBundleOpenBundleResourceMap_1,&_CFBundleOpenBundleResourceMap_R};

	VPL_Parameter _CFBundleGetPlugIn_R = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_Parameter _CFBundleGetPlugIn_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetPlugIn_F = {"CFBundleGetPlugIn",CFBundleGetPlugIn,&_CFBundleGetPlugIn_1,&_CFBundleGetPlugIn_R};

	VPL_Parameter _CFBundleCopyAuxiliaryExecutableURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyAuxiliaryExecutableURL_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyAuxiliaryExecutableURL_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleCopyAuxiliaryExecutableURL_2};
	VPL_ExtProcedure _CFBundleCopyAuxiliaryExecutableURL_F = {"CFBundleCopyAuxiliaryExecutableURL",CFBundleCopyAuxiliaryExecutableURL,&_CFBundleCopyAuxiliaryExecutableURL_1,&_CFBundleCopyAuxiliaryExecutableURL_R};

	VPL_Parameter _CFBundleGetDataPointersForNames_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _CFBundleGetDataPointersForNames_2 = { kPointerType,0,"__CFArray",1,0,&_CFBundleGetDataPointersForNames_3};
	VPL_Parameter _CFBundleGetDataPointersForNames_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleGetDataPointersForNames_2};
	VPL_ExtProcedure _CFBundleGetDataPointersForNames_F = {"CFBundleGetDataPointersForNames",CFBundleGetDataPointersForNames,&_CFBundleGetDataPointersForNames_1,NULL};

	VPL_Parameter _CFBundleGetDataPointerForName_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFBundleGetDataPointerForName_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleGetDataPointerForName_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleGetDataPointerForName_2};
	VPL_ExtProcedure _CFBundleGetDataPointerForName_F = {"CFBundleGetDataPointerForName",CFBundleGetDataPointerForName,&_CFBundleGetDataPointerForName_1,&_CFBundleGetDataPointerForName_R};

	VPL_Parameter _CFBundleGetFunctionPointersForNames_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _CFBundleGetFunctionPointersForNames_2 = { kPointerType,0,"__CFArray",1,0,&_CFBundleGetFunctionPointersForNames_3};
	VPL_Parameter _CFBundleGetFunctionPointersForNames_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleGetFunctionPointersForNames_2};
	VPL_ExtProcedure _CFBundleGetFunctionPointersForNames_F = {"CFBundleGetFunctionPointersForNames",CFBundleGetFunctionPointersForNames,&_CFBundleGetFunctionPointersForNames_1,NULL};

	VPL_Parameter _CFBundleGetFunctionPointerForName_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFBundleGetFunctionPointerForName_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleGetFunctionPointerForName_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleGetFunctionPointerForName_2};
	VPL_ExtProcedure _CFBundleGetFunctionPointerForName_F = {"CFBundleGetFunctionPointerForName",CFBundleGetFunctionPointerForName,&_CFBundleGetFunctionPointerForName_1,&_CFBundleGetFunctionPointerForName_R};

	VPL_Parameter _CFBundleUnloadExecutable_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleUnloadExecutable_F = {"CFBundleUnloadExecutable",CFBundleUnloadExecutable,&_CFBundleUnloadExecutable_1,NULL};

	VPL_Parameter _CFBundleLoadExecutable_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFBundleLoadExecutable_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleLoadExecutable_F = {"CFBundleLoadExecutable",CFBundleLoadExecutable,&_CFBundleLoadExecutable_1,&_CFBundleLoadExecutable_R};

	VPL_Parameter _CFBundleIsExecutableLoaded_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFBundleIsExecutableLoaded_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleIsExecutableLoaded_F = {"CFBundleIsExecutableLoaded",CFBundleIsExecutableLoaded,&_CFBundleIsExecutableLoaded_1,&_CFBundleIsExecutableLoaded_R};

	VPL_Parameter _CFBundleCopyExecutableURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyExecutableURL_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyExecutableURL_F = {"CFBundleCopyExecutableURL",CFBundleCopyExecutableURL,&_CFBundleCopyExecutableURL_1,&_CFBundleCopyExecutableURL_R};

	VPL_Parameter _CFBundleCopyLocalizationsForURL_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCopyLocalizationsForURL_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyLocalizationsForURL_F = {"CFBundleCopyLocalizationsForURL",CFBundleCopyLocalizationsForURL,&_CFBundleCopyLocalizationsForURL_1,&_CFBundleCopyLocalizationsForURL_R};

	VPL_Parameter _CFBundleCopyInfoDictionaryForURL_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFBundleCopyInfoDictionaryForURL_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyInfoDictionaryForURL_F = {"CFBundleCopyInfoDictionaryForURL",CFBundleCopyInfoDictionaryForURL,&_CFBundleCopyInfoDictionaryForURL_1,&_CFBundleCopyInfoDictionaryForURL_R};

	VPL_Parameter _CFBundleCopyResourceURLsOfTypeForLocalization_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLsOfTypeForLocalization_4 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLsOfTypeForLocalization_3 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLsOfTypeForLocalization_4};
	VPL_Parameter _CFBundleCopyResourceURLsOfTypeForLocalization_2 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLsOfTypeForLocalization_3};
	VPL_Parameter _CFBundleCopyResourceURLsOfTypeForLocalization_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleCopyResourceURLsOfTypeForLocalization_2};
	VPL_ExtProcedure _CFBundleCopyResourceURLsOfTypeForLocalization_F = {"CFBundleCopyResourceURLsOfTypeForLocalization",CFBundleCopyResourceURLsOfTypeForLocalization,&_CFBundleCopyResourceURLsOfTypeForLocalization_1,&_CFBundleCopyResourceURLsOfTypeForLocalization_R};

	VPL_Parameter _CFBundleCopyResourceURLForLocalization_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLForLocalization_5 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLForLocalization_4 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLForLocalization_5};
	VPL_Parameter _CFBundleCopyResourceURLForLocalization_3 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLForLocalization_4};
	VPL_Parameter _CFBundleCopyResourceURLForLocalization_2 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLForLocalization_3};
	VPL_Parameter _CFBundleCopyResourceURLForLocalization_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleCopyResourceURLForLocalization_2};
	VPL_ExtProcedure _CFBundleCopyResourceURLForLocalization_F = {"CFBundleCopyResourceURLForLocalization",CFBundleCopyResourceURLForLocalization,&_CFBundleCopyResourceURLForLocalization_1,&_CFBundleCopyResourceURLForLocalization_R};

	VPL_Parameter _CFBundleCopyLocalizationsForPreferences_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCopyLocalizationsForPreferences_2 = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCopyLocalizationsForPreferences_1 = { kPointerType,0,"__CFArray",1,0,&_CFBundleCopyLocalizationsForPreferences_2};
	VPL_ExtProcedure _CFBundleCopyLocalizationsForPreferences_F = {"CFBundleCopyLocalizationsForPreferences",CFBundleCopyLocalizationsForPreferences,&_CFBundleCopyLocalizationsForPreferences_1,&_CFBundleCopyLocalizationsForPreferences_R};

	VPL_Parameter _CFBundleCopyPreferredLocalizationsFromArray_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCopyPreferredLocalizationsFromArray_1 = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyPreferredLocalizationsFromArray_F = {"CFBundleCopyPreferredLocalizationsFromArray",CFBundleCopyPreferredLocalizationsFromArray,&_CFBundleCopyPreferredLocalizationsFromArray_1,&_CFBundleCopyPreferredLocalizationsFromArray_R};

	VPL_Parameter _CFBundleCopyBundleLocalizations_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCopyBundleLocalizations_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyBundleLocalizations_F = {"CFBundleCopyBundleLocalizations",CFBundleCopyBundleLocalizations,&_CFBundleCopyBundleLocalizations_1,&_CFBundleCopyBundleLocalizations_R};

	VPL_Parameter _CFBundleCopyResourceURLsOfTypeInDirectory_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLsOfTypeInDirectory_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLsOfTypeInDirectory_2 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLsOfTypeInDirectory_3};
	VPL_Parameter _CFBundleCopyResourceURLsOfTypeInDirectory_1 = { kPointerType,0,"__CFURL",1,0,&_CFBundleCopyResourceURLsOfTypeInDirectory_2};
	VPL_ExtProcedure _CFBundleCopyResourceURLsOfTypeInDirectory_F = {"CFBundleCopyResourceURLsOfTypeInDirectory",CFBundleCopyResourceURLsOfTypeInDirectory,&_CFBundleCopyResourceURLsOfTypeInDirectory_1,&_CFBundleCopyResourceURLsOfTypeInDirectory_R};

	VPL_Parameter _CFBundleCopyResourceURLInDirectory_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLInDirectory_4 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLInDirectory_3 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLInDirectory_4};
	VPL_Parameter _CFBundleCopyResourceURLInDirectory_2 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLInDirectory_3};
	VPL_Parameter _CFBundleCopyResourceURLInDirectory_1 = { kPointerType,0,"__CFURL",1,0,&_CFBundleCopyResourceURLInDirectory_2};
	VPL_ExtProcedure _CFBundleCopyResourceURLInDirectory_F = {"CFBundleCopyResourceURLInDirectory",CFBundleCopyResourceURLInDirectory,&_CFBundleCopyResourceURLInDirectory_1,&_CFBundleCopyResourceURLInDirectory_R};

	VPL_Parameter _CFBundleCopyLocalizedString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyLocalizedString_4 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyLocalizedString_3 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyLocalizedString_4};
	VPL_Parameter _CFBundleCopyLocalizedString_2 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyLocalizedString_3};
	VPL_Parameter _CFBundleCopyLocalizedString_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleCopyLocalizedString_2};
	VPL_ExtProcedure _CFBundleCopyLocalizedString_F = {"CFBundleCopyLocalizedString",CFBundleCopyLocalizedString,&_CFBundleCopyLocalizedString_1,&_CFBundleCopyLocalizedString_R};

	VPL_Parameter _CFBundleCopyResourceURLsOfType_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLsOfType_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURLsOfType_2 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURLsOfType_3};
	VPL_Parameter _CFBundleCopyResourceURLsOfType_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleCopyResourceURLsOfType_2};
	VPL_ExtProcedure _CFBundleCopyResourceURLsOfType_F = {"CFBundleCopyResourceURLsOfType",CFBundleCopyResourceURLsOfType,&_CFBundleCopyResourceURLsOfType_1,&_CFBundleCopyResourceURLsOfType_R};

	VPL_Parameter _CFBundleCopyResourceURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURL_4 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourceURL_3 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURL_4};
	VPL_Parameter _CFBundleCopyResourceURL_2 = { kPointerType,0,"__CFString",1,0,&_CFBundleCopyResourceURL_3};
	VPL_Parameter _CFBundleCopyResourceURL_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleCopyResourceURL_2};
	VPL_ExtProcedure _CFBundleCopyResourceURL_F = {"CFBundleCopyResourceURL",CFBundleCopyResourceURL,&_CFBundleCopyResourceURL_1,&_CFBundleCopyResourceURL_R};

	VPL_Parameter _CFBundleGetPackageInfoInDirectory_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFBundleGetPackageInfoInDirectory_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _CFBundleGetPackageInfoInDirectory_2 = { kPointerType,4,"unsigned long",1,0,&_CFBundleGetPackageInfoInDirectory_3};
	VPL_Parameter _CFBundleGetPackageInfoInDirectory_1 = { kPointerType,0,"__CFURL",1,0,&_CFBundleGetPackageInfoInDirectory_2};
	VPL_ExtProcedure _CFBundleGetPackageInfoInDirectory_F = {"CFBundleGetPackageInfoInDirectory",CFBundleGetPackageInfoInDirectory,&_CFBundleGetPackageInfoInDirectory_1,&_CFBundleGetPackageInfoInDirectory_R};

	VPL_Parameter _CFBundleCopyInfoDictionaryInDirectory_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFBundleCopyInfoDictionaryInDirectory_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyInfoDictionaryInDirectory_F = {"CFBundleCopyInfoDictionaryInDirectory",CFBundleCopyInfoDictionaryInDirectory,&_CFBundleCopyInfoDictionaryInDirectory_1,&_CFBundleCopyInfoDictionaryInDirectory_R};

	VPL_Parameter _CFBundleCopyBuiltInPlugInsURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyBuiltInPlugInsURL_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyBuiltInPlugInsURL_F = {"CFBundleCopyBuiltInPlugInsURL",CFBundleCopyBuiltInPlugInsURL,&_CFBundleCopyBuiltInPlugInsURL_1,&_CFBundleCopyBuiltInPlugInsURL_R};

	VPL_Parameter _CFBundleCopySharedSupportURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopySharedSupportURL_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopySharedSupportURL_F = {"CFBundleCopySharedSupportURL",CFBundleCopySharedSupportURL,&_CFBundleCopySharedSupportURL_1,&_CFBundleCopySharedSupportURL_R};

	VPL_Parameter _CFBundleCopySharedFrameworksURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopySharedFrameworksURL_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopySharedFrameworksURL_F = {"CFBundleCopySharedFrameworksURL",CFBundleCopySharedFrameworksURL,&_CFBundleCopySharedFrameworksURL_1,&_CFBundleCopySharedFrameworksURL_R};

	VPL_Parameter _CFBundleCopyPrivateFrameworksURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyPrivateFrameworksURL_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyPrivateFrameworksURL_F = {"CFBundleCopyPrivateFrameworksURL",CFBundleCopyPrivateFrameworksURL,&_CFBundleCopyPrivateFrameworksURL_1,&_CFBundleCopyPrivateFrameworksURL_R};

	VPL_Parameter _CFBundleCopyResourcesDirectoryURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyResourcesDirectoryURL_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyResourcesDirectoryURL_F = {"CFBundleCopyResourcesDirectoryURL",CFBundleCopyResourcesDirectoryURL,&_CFBundleCopyResourcesDirectoryURL_1,&_CFBundleCopyResourcesDirectoryURL_R};

	VPL_Parameter _CFBundleCopySupportFilesDirectoryURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopySupportFilesDirectoryURL_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopySupportFilesDirectoryURL_F = {"CFBundleCopySupportFilesDirectoryURL",CFBundleCopySupportFilesDirectoryURL,&_CFBundleCopySupportFilesDirectoryURL_1,&_CFBundleCopySupportFilesDirectoryURL_R};

	VPL_Parameter _CFBundleGetDevelopmentRegion_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleGetDevelopmentRegion_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetDevelopmentRegion_F = {"CFBundleGetDevelopmentRegion",CFBundleGetDevelopmentRegion,&_CFBundleGetDevelopmentRegion_1,&_CFBundleGetDevelopmentRegion_R};

	VPL_Parameter _CFBundleGetVersionNumber_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFBundleGetVersionNumber_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetVersionNumber_F = {"CFBundleGetVersionNumber",CFBundleGetVersionNumber,&_CFBundleGetVersionNumber_1,&_CFBundleGetVersionNumber_R};

	VPL_Parameter _CFBundleGetIdentifier_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleGetIdentifier_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetIdentifier_F = {"CFBundleGetIdentifier",CFBundleGetIdentifier,&_CFBundleGetIdentifier_1,&_CFBundleGetIdentifier_R};

	VPL_Parameter _CFBundleGetPackageInfo_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _CFBundleGetPackageInfo_2 = { kPointerType,4,"unsigned long",1,0,&_CFBundleGetPackageInfo_3};
	VPL_Parameter _CFBundleGetPackageInfo_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleGetPackageInfo_2};
	VPL_ExtProcedure _CFBundleGetPackageInfo_F = {"CFBundleGetPackageInfo",CFBundleGetPackageInfo,&_CFBundleGetPackageInfo_1,NULL};

	VPL_Parameter _CFBundleGetLocalInfoDictionary_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFBundleGetLocalInfoDictionary_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetLocalInfoDictionary_F = {"CFBundleGetLocalInfoDictionary",CFBundleGetLocalInfoDictionary,&_CFBundleGetLocalInfoDictionary_1,&_CFBundleGetLocalInfoDictionary_R};

	VPL_Parameter _CFBundleGetInfoDictionary_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFBundleGetInfoDictionary_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetInfoDictionary_F = {"CFBundleGetInfoDictionary",CFBundleGetInfoDictionary,&_CFBundleGetInfoDictionary_1,&_CFBundleGetInfoDictionary_R};

	VPL_Parameter _CFBundleGetValueForInfoDictionaryKey_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFBundleGetValueForInfoDictionaryKey_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleGetValueForInfoDictionaryKey_1 = { kPointerType,0,"__CFBundle",1,0,&_CFBundleGetValueForInfoDictionaryKey_2};
	VPL_ExtProcedure _CFBundleGetValueForInfoDictionaryKey_F = {"CFBundleGetValueForInfoDictionaryKey",CFBundleGetValueForInfoDictionaryKey,&_CFBundleGetValueForInfoDictionaryKey_1,&_CFBundleGetValueForInfoDictionaryKey_R};

	VPL_Parameter _CFBundleCopyBundleURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCopyBundleURL_1 = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleCopyBundleURL_F = {"CFBundleCopyBundleURL",CFBundleCopyBundleURL,&_CFBundleCopyBundleURL_1,&_CFBundleCopyBundleURL_R};

	VPL_Parameter _CFBundleCreateBundlesFromDirectory_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFBundleCreateBundlesFromDirectory_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFBundleCreateBundlesFromDirectory_2 = { kPointerType,0,"__CFURL",1,0,&_CFBundleCreateBundlesFromDirectory_3};
	VPL_Parameter _CFBundleCreateBundlesFromDirectory_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFBundleCreateBundlesFromDirectory_2};
	VPL_ExtProcedure _CFBundleCreateBundlesFromDirectory_F = {"CFBundleCreateBundlesFromDirectory",CFBundleCreateBundlesFromDirectory,&_CFBundleCreateBundlesFromDirectory_1,&_CFBundleCreateBundlesFromDirectory_R};

	VPL_Parameter _CFBundleCreate_R = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_Parameter _CFBundleCreate_2 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFBundleCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFBundleCreate_2};
	VPL_ExtProcedure _CFBundleCreate_F = {"CFBundleCreate",CFBundleCreate,&_CFBundleCreate_1,&_CFBundleCreate_R};

	VPL_Parameter _CFBundleGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFBundleGetTypeID_F = {"CFBundleGetTypeID",CFBundleGetTypeID,NULL,&_CFBundleGetTypeID_R};

	VPL_Parameter _CFBundleGetAllBundles_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetAllBundles_F = {"CFBundleGetAllBundles",CFBundleGetAllBundles,NULL,&_CFBundleGetAllBundles_R};

	VPL_Parameter _CFBundleGetBundleWithIdentifier_R = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_Parameter _CFBundleGetBundleWithIdentifier_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetBundleWithIdentifier_F = {"CFBundleGetBundleWithIdentifier",CFBundleGetBundleWithIdentifier,&_CFBundleGetBundleWithIdentifier_1,&_CFBundleGetBundleWithIdentifier_R};

	VPL_Parameter _CFBundleGetMainBundle_R = { kPointerType,0,"__CFBundle",1,0,NULL};
	VPL_ExtProcedure _CFBundleGetMainBundle_F = {"CFBundleGetMainBundle",CFBundleGetMainBundle,NULL,&_CFBundleGetMainBundle_R};

	VPL_Parameter _CFURLGetFSRef_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLGetFSRef_2 = { kPointerType,0,"FSRef",1,0,NULL};
	VPL_Parameter _CFURLGetFSRef_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLGetFSRef_2};
	VPL_ExtProcedure _CFURLGetFSRef_F = {"CFURLGetFSRef",CFURLGetFSRef,&_CFURLGetFSRef_1,&_CFURLGetFSRef_R};

	VPL_Parameter _CFURLCreateFromFSRef_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateFromFSRef_2 = { kPointerType,0,"FSRef",1,0,NULL};
	VPL_Parameter _CFURLCreateFromFSRef_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateFromFSRef_2};
	VPL_ExtProcedure _CFURLCreateFromFSRef_F = {"CFURLCreateFromFSRef",CFURLCreateFromFSRef,&_CFURLCreateFromFSRef_1,&_CFURLCreateFromFSRef_R};

	VPL_Parameter _CFURLCreateStringByAddingPercentEscapes_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCreateStringByAddingPercentEscapes_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFURLCreateStringByAddingPercentEscapes_4 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateStringByAddingPercentEscapes_5};
	VPL_Parameter _CFURLCreateStringByAddingPercentEscapes_3 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateStringByAddingPercentEscapes_4};
	VPL_Parameter _CFURLCreateStringByAddingPercentEscapes_2 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateStringByAddingPercentEscapes_3};
	VPL_Parameter _CFURLCreateStringByAddingPercentEscapes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateStringByAddingPercentEscapes_2};
	VPL_ExtProcedure _CFURLCreateStringByAddingPercentEscapes_F = {"CFURLCreateStringByAddingPercentEscapes",CFURLCreateStringByAddingPercentEscapes,&_CFURLCreateStringByAddingPercentEscapes_1,&_CFURLCreateStringByAddingPercentEscapes_R};

	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapesUsingEncoding_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapesUsingEncoding_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapesUsingEncoding_3 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateStringByReplacingPercentEscapesUsingEncoding_4};
	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapesUsingEncoding_2 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateStringByReplacingPercentEscapesUsingEncoding_3};
	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapesUsingEncoding_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateStringByReplacingPercentEscapesUsingEncoding_2};
	VPL_ExtProcedure _CFURLCreateStringByReplacingPercentEscapesUsingEncoding_F = {"CFURLCreateStringByReplacingPercentEscapesUsingEncoding",CFURLCreateStringByReplacingPercentEscapesUsingEncoding,&_CFURLCreateStringByReplacingPercentEscapesUsingEncoding_1,&_CFURLCreateStringByReplacingPercentEscapesUsingEncoding_R};

	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapes_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapes_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapes_2 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateStringByReplacingPercentEscapes_3};
	VPL_Parameter _CFURLCreateStringByReplacingPercentEscapes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateStringByReplacingPercentEscapes_2};
	VPL_ExtProcedure _CFURLCreateStringByReplacingPercentEscapes_F = {"CFURLCreateStringByReplacingPercentEscapes",CFURLCreateStringByReplacingPercentEscapes,&_CFURLCreateStringByReplacingPercentEscapes_1,&_CFURLCreateStringByReplacingPercentEscapes_R};

	VPL_Parameter _CFURLGetByteRangeForComponent_R = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFURLGetByteRangeForComponent_3 = { kPointerType,8,"CFRange",1,0,NULL};
	VPL_Parameter _CFURLGetByteRangeForComponent_2 = { kEnumType,4,"81",0,0,&_CFURLGetByteRangeForComponent_3};
	VPL_Parameter _CFURLGetByteRangeForComponent_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLGetByteRangeForComponent_2};
	VPL_ExtProcedure _CFURLGetByteRangeForComponent_F = {"CFURLGetByteRangeForComponent",CFURLGetByteRangeForComponent,&_CFURLGetByteRangeForComponent_1,&_CFURLGetByteRangeForComponent_R};

	VPL_Parameter _CFURLGetBytes_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFURLGetBytes_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFURLGetBytes_2 = { kPointerType,1,"unsigned char",1,0,&_CFURLGetBytes_3};
	VPL_Parameter _CFURLGetBytes_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLGetBytes_2};
	VPL_ExtProcedure _CFURLGetBytes_F = {"CFURLGetBytes",CFURLGetBytes,&_CFURLGetBytes_1,&_CFURLGetBytes_R};

	VPL_Parameter _CFURLCreateCopyDeletingPathExtension_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateCopyDeletingPathExtension_2 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateCopyDeletingPathExtension_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateCopyDeletingPathExtension_2};
	VPL_ExtProcedure _CFURLCreateCopyDeletingPathExtension_F = {"CFURLCreateCopyDeletingPathExtension",CFURLCreateCopyDeletingPathExtension,&_CFURLCreateCopyDeletingPathExtension_1,&_CFURLCreateCopyDeletingPathExtension_R};

	VPL_Parameter _CFURLCreateCopyAppendingPathExtension_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateCopyAppendingPathExtension_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCreateCopyAppendingPathExtension_2 = { kPointerType,0,"__CFURL",1,0,&_CFURLCreateCopyAppendingPathExtension_3};
	VPL_Parameter _CFURLCreateCopyAppendingPathExtension_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateCopyAppendingPathExtension_2};
	VPL_ExtProcedure _CFURLCreateCopyAppendingPathExtension_F = {"CFURLCreateCopyAppendingPathExtension",CFURLCreateCopyAppendingPathExtension,&_CFURLCreateCopyAppendingPathExtension_1,&_CFURLCreateCopyAppendingPathExtension_R};

	VPL_Parameter _CFURLCreateCopyDeletingLastPathComponent_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateCopyDeletingLastPathComponent_2 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateCopyDeletingLastPathComponent_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateCopyDeletingLastPathComponent_2};
	VPL_ExtProcedure _CFURLCreateCopyDeletingLastPathComponent_F = {"CFURLCreateCopyDeletingLastPathComponent",CFURLCreateCopyDeletingLastPathComponent,&_CFURLCreateCopyDeletingLastPathComponent_1,&_CFURLCreateCopyDeletingLastPathComponent_R};

	VPL_Parameter _CFURLCreateCopyAppendingPathComponent_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateCopyAppendingPathComponent_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLCreateCopyAppendingPathComponent_3 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateCopyAppendingPathComponent_4};
	VPL_Parameter _CFURLCreateCopyAppendingPathComponent_2 = { kPointerType,0,"__CFURL",1,0,&_CFURLCreateCopyAppendingPathComponent_3};
	VPL_Parameter _CFURLCreateCopyAppendingPathComponent_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateCopyAppendingPathComponent_2};
	VPL_ExtProcedure _CFURLCreateCopyAppendingPathComponent_F = {"CFURLCreateCopyAppendingPathComponent",CFURLCreateCopyAppendingPathComponent,&_CFURLCreateCopyAppendingPathComponent_1,&_CFURLCreateCopyAppendingPathComponent_R};

	VPL_Parameter _CFURLCopyPathExtension_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyPathExtension_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyPathExtension_F = {"CFURLCopyPathExtension",CFURLCopyPathExtension,&_CFURLCopyPathExtension_1,&_CFURLCopyPathExtension_R};

	VPL_Parameter _CFURLCopyLastPathComponent_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyLastPathComponent_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyLastPathComponent_F = {"CFURLCopyLastPathComponent",CFURLCopyLastPathComponent,&_CFURLCopyLastPathComponent_1,&_CFURLCopyLastPathComponent_R};

	VPL_Parameter _CFURLCopyFragment_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyFragment_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyFragment_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLCopyFragment_2};
	VPL_ExtProcedure _CFURLCopyFragment_F = {"CFURLCopyFragment",CFURLCopyFragment,&_CFURLCopyFragment_1,&_CFURLCopyFragment_R};

	VPL_Parameter _CFURLCopyQueryString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyQueryString_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyQueryString_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLCopyQueryString_2};
	VPL_ExtProcedure _CFURLCopyQueryString_F = {"CFURLCopyQueryString",CFURLCopyQueryString,&_CFURLCopyQueryString_1,&_CFURLCopyQueryString_R};

	VPL_Parameter _CFURLCopyParameterString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyParameterString_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyParameterString_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLCopyParameterString_2};
	VPL_ExtProcedure _CFURLCopyParameterString_F = {"CFURLCopyParameterString",CFURLCopyParameterString,&_CFURLCopyParameterString_1,&_CFURLCopyParameterString_R};

	VPL_Parameter _CFURLCopyPassword_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyPassword_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyPassword_F = {"CFURLCopyPassword",CFURLCopyPassword,&_CFURLCopyPassword_1,&_CFURLCopyPassword_R};

	VPL_Parameter _CFURLCopyUserName_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyUserName_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyUserName_F = {"CFURLCopyUserName",CFURLCopyUserName,&_CFURLCopyUserName_1,&_CFURLCopyUserName_R};

	VPL_Parameter _CFURLGetPortNumber_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFURLGetPortNumber_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLGetPortNumber_F = {"CFURLGetPortNumber",CFURLGetPortNumber,&_CFURLGetPortNumber_1,&_CFURLGetPortNumber_R};

	VPL_Parameter _CFURLCopyHostName_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyHostName_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyHostName_F = {"CFURLCopyHostName",CFURLCopyHostName,&_CFURLCopyHostName_1,&_CFURLCopyHostName_R};

	VPL_Parameter _CFURLCopyResourceSpecifier_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyResourceSpecifier_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyResourceSpecifier_F = {"CFURLCopyResourceSpecifier",CFURLCopyResourceSpecifier,&_CFURLCopyResourceSpecifier_1,&_CFURLCopyResourceSpecifier_R};

	VPL_Parameter _CFURLHasDirectoryPath_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLHasDirectoryPath_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLHasDirectoryPath_F = {"CFURLHasDirectoryPath",CFURLHasDirectoryPath,&_CFURLHasDirectoryPath_1,&_CFURLHasDirectoryPath_R};

	VPL_Parameter _CFURLCopyFileSystemPath_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyFileSystemPath_2 = { kEnumType,4,"80",0,0,NULL};
	VPL_Parameter _CFURLCopyFileSystemPath_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLCopyFileSystemPath_2};
	VPL_ExtProcedure _CFURLCopyFileSystemPath_F = {"CFURLCopyFileSystemPath",CFURLCopyFileSystemPath,&_CFURLCopyFileSystemPath_1,&_CFURLCopyFileSystemPath_R};

	VPL_Parameter _CFURLCopyStrictPath_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyStrictPath_2 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _CFURLCopyStrictPath_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLCopyStrictPath_2};
	VPL_ExtProcedure _CFURLCopyStrictPath_F = {"CFURLCopyStrictPath",CFURLCopyStrictPath,&_CFURLCopyStrictPath_1,&_CFURLCopyStrictPath_R};

	VPL_Parameter _CFURLCopyPath_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyPath_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyPath_F = {"CFURLCopyPath",CFURLCopyPath,&_CFURLCopyPath_1,&_CFURLCopyPath_R};

	VPL_Parameter _CFURLCopyNetLocation_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyNetLocation_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyNetLocation_F = {"CFURLCopyNetLocation",CFURLCopyNetLocation,&_CFURLCopyNetLocation_1,&_CFURLCopyNetLocation_R};

	VPL_Parameter _CFURLCopyScheme_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLCopyScheme_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyScheme_F = {"CFURLCopyScheme",CFURLCopyScheme,&_CFURLCopyScheme_1,&_CFURLCopyScheme_R};

	VPL_Parameter _CFURLCanBeDecomposed_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLCanBeDecomposed_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCanBeDecomposed_F = {"CFURLCanBeDecomposed",CFURLCanBeDecomposed,&_CFURLCanBeDecomposed_1,&_CFURLCanBeDecomposed_R};

	VPL_Parameter _CFURLGetBaseURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLGetBaseURL_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLGetBaseURL_F = {"CFURLGetBaseURL",CFURLGetBaseURL,&_CFURLGetBaseURL_1,&_CFURLGetBaseURL_R};

	VPL_Parameter _CFURLGetString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFURLGetString_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLGetString_F = {"CFURLGetString",CFURLGetString,&_CFURLGetString_1,&_CFURLGetString_R};

	VPL_Parameter _CFURLCopyAbsoluteURL_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCopyAbsoluteURL_1 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_ExtProcedure _CFURLCopyAbsoluteURL_F = {"CFURLCopyAbsoluteURL",CFURLCopyAbsoluteURL,&_CFURLCopyAbsoluteURL_1,&_CFURLCopyAbsoluteURL_R};

	VPL_Parameter _CFURLGetFileSystemRepresentation_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLGetFileSystemRepresentation_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFURLGetFileSystemRepresentation_3 = { kPointerType,1,"unsigned char",1,0,&_CFURLGetFileSystemRepresentation_4};
	VPL_Parameter _CFURLGetFileSystemRepresentation_2 = { kUnsignedType,1,NULL,0,0,&_CFURLGetFileSystemRepresentation_3};
	VPL_Parameter _CFURLGetFileSystemRepresentation_1 = { kPointerType,0,"__CFURL",1,0,&_CFURLGetFileSystemRepresentation_2};
	VPL_ExtProcedure _CFURLGetFileSystemRepresentation_F = {"CFURLGetFileSystemRepresentation",CFURLGetFileSystemRepresentation,&_CFURLGetFileSystemRepresentation_1,&_CFURLGetFileSystemRepresentation_R};

	VPL_Parameter _CFURLCreateFromFileSystemRepresentationRelativeToBase_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentationRelativeToBase_5 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentationRelativeToBase_4 = { kUnsignedType,1,NULL,0,0,&_CFURLCreateFromFileSystemRepresentationRelativeToBase_5};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentationRelativeToBase_3 = { kIntType,4,NULL,0,0,&_CFURLCreateFromFileSystemRepresentationRelativeToBase_4};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentationRelativeToBase_2 = { kPointerType,1,"unsigned char",1,0,&_CFURLCreateFromFileSystemRepresentationRelativeToBase_3};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentationRelativeToBase_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateFromFileSystemRepresentationRelativeToBase_2};
	VPL_ExtProcedure _CFURLCreateFromFileSystemRepresentationRelativeToBase_F = {"CFURLCreateFromFileSystemRepresentationRelativeToBase",CFURLCreateFromFileSystemRepresentationRelativeToBase,&_CFURLCreateFromFileSystemRepresentationRelativeToBase_1,&_CFURLCreateFromFileSystemRepresentationRelativeToBase_R};

	VPL_Parameter _CFURLCreateWithFileSystemPathRelativeToBase_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateWithFileSystemPathRelativeToBase_5 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateWithFileSystemPathRelativeToBase_4 = { kUnsignedType,1,NULL,0,0,&_CFURLCreateWithFileSystemPathRelativeToBase_5};
	VPL_Parameter _CFURLCreateWithFileSystemPathRelativeToBase_3 = { kEnumType,4,"80",0,0,&_CFURLCreateWithFileSystemPathRelativeToBase_4};
	VPL_Parameter _CFURLCreateWithFileSystemPathRelativeToBase_2 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateWithFileSystemPathRelativeToBase_3};
	VPL_Parameter _CFURLCreateWithFileSystemPathRelativeToBase_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateWithFileSystemPathRelativeToBase_2};
	VPL_ExtProcedure _CFURLCreateWithFileSystemPathRelativeToBase_F = {"CFURLCreateWithFileSystemPathRelativeToBase",CFURLCreateWithFileSystemPathRelativeToBase,&_CFURLCreateWithFileSystemPathRelativeToBase_1,&_CFURLCreateWithFileSystemPathRelativeToBase_R};

	VPL_Parameter _CFURLCreateFromFileSystemRepresentation_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentation_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentation_3 = { kIntType,4,NULL,0,0,&_CFURLCreateFromFileSystemRepresentation_4};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentation_2 = { kPointerType,1,"unsigned char",1,0,&_CFURLCreateFromFileSystemRepresentation_3};
	VPL_Parameter _CFURLCreateFromFileSystemRepresentation_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateFromFileSystemRepresentation_2};
	VPL_ExtProcedure _CFURLCreateFromFileSystemRepresentation_F = {"CFURLCreateFromFileSystemRepresentation",CFURLCreateFromFileSystemRepresentation,&_CFURLCreateFromFileSystemRepresentation_1,&_CFURLCreateFromFileSystemRepresentation_R};

	VPL_Parameter _CFURLCreateWithFileSystemPath_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateWithFileSystemPath_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLCreateWithFileSystemPath_3 = { kEnumType,4,"80",0,0,&_CFURLCreateWithFileSystemPath_4};
	VPL_Parameter _CFURLCreateWithFileSystemPath_2 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateWithFileSystemPath_3};
	VPL_Parameter _CFURLCreateWithFileSystemPath_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateWithFileSystemPath_2};
	VPL_ExtProcedure _CFURLCreateWithFileSystemPath_F = {"CFURLCreateWithFileSystemPath",CFURLCreateWithFileSystemPath,&_CFURLCreateWithFileSystemPath_1,&_CFURLCreateWithFileSystemPath_R};

	VPL_Parameter _CFURLCreateAbsoluteURLWithBytes_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateAbsoluteURLWithBytes_6 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLCreateAbsoluteURLWithBytes_5 = { kPointerType,0,"__CFURL",1,0,&_CFURLCreateAbsoluteURLWithBytes_6};
	VPL_Parameter _CFURLCreateAbsoluteURLWithBytes_4 = { kUnsignedType,4,NULL,0,0,&_CFURLCreateAbsoluteURLWithBytes_5};
	VPL_Parameter _CFURLCreateAbsoluteURLWithBytes_3 = { kIntType,4,NULL,0,0,&_CFURLCreateAbsoluteURLWithBytes_4};
	VPL_Parameter _CFURLCreateAbsoluteURLWithBytes_2 = { kPointerType,1,"unsigned char",1,0,&_CFURLCreateAbsoluteURLWithBytes_3};
	VPL_Parameter _CFURLCreateAbsoluteURLWithBytes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateAbsoluteURLWithBytes_2};
	VPL_ExtProcedure _CFURLCreateAbsoluteURLWithBytes_F = {"CFURLCreateAbsoluteURLWithBytes",CFURLCreateAbsoluteURLWithBytes,&_CFURLCreateAbsoluteURLWithBytes_1,&_CFURLCreateAbsoluteURLWithBytes_R};

	VPL_Parameter _CFURLCreateWithString_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateWithString_3 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateWithString_2 = { kPointerType,0,"__CFString",1,0,&_CFURLCreateWithString_3};
	VPL_Parameter _CFURLCreateWithString_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateWithString_2};
	VPL_ExtProcedure _CFURLCreateWithString_F = {"CFURLCreateWithString",CFURLCreateWithString,&_CFURLCreateWithString_1,&_CFURLCreateWithString_R};

	VPL_Parameter _CFURLCreateData_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFURLCreateData_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFURLCreateData_3 = { kUnsignedType,4,NULL,0,0,&_CFURLCreateData_4};
	VPL_Parameter _CFURLCreateData_2 = { kPointerType,0,"__CFURL",1,0,&_CFURLCreateData_3};
	VPL_Parameter _CFURLCreateData_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateData_2};
	VPL_ExtProcedure _CFURLCreateData_F = {"CFURLCreateData",CFURLCreateData,&_CFURLCreateData_1,&_CFURLCreateData_R};

	VPL_Parameter _CFURLCreateWithBytes_R = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateWithBytes_5 = { kPointerType,0,"__CFURL",1,0,NULL};
	VPL_Parameter _CFURLCreateWithBytes_4 = { kUnsignedType,4,NULL,0,0,&_CFURLCreateWithBytes_5};
	VPL_Parameter _CFURLCreateWithBytes_3 = { kIntType,4,NULL,0,0,&_CFURLCreateWithBytes_4};
	VPL_Parameter _CFURLCreateWithBytes_2 = { kPointerType,1,"unsigned char",1,0,&_CFURLCreateWithBytes_3};
	VPL_Parameter _CFURLCreateWithBytes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFURLCreateWithBytes_2};
	VPL_ExtProcedure _CFURLCreateWithBytes_F = {"CFURLCreateWithBytes",CFURLCreateWithBytes,&_CFURLCreateWithBytes_1,&_CFURLCreateWithBytes_R};

	VPL_Parameter _CFURLGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFURLGetTypeID_F = {"CFURLGetTypeID",CFURLGetTypeID,NULL,&_CFURLGetTypeID_R};

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
	VPL_Parameter _IOCatalogueSendData_3 = { kPointerType,1,"char",1,0,&_IOCatalogueSendData_4};
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
	VPL_Parameter _IOServiceOFPathToBSDName_2 = { kPointerType,128,"char",1,0,&_IOServiceOFPathToBSDName_3};
	VPL_Parameter _IOServiceOFPathToBSDName_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceOFPathToBSDName_2};
	VPL_ExtProcedure _IOServiceOFPathToBSDName_F = {"IOServiceOFPathToBSDName",IOServiceOFPathToBSDName,&_IOServiceOFPathToBSDName_1,&_IOServiceOFPathToBSDName_R};

	VPL_Parameter _IOOpenFirmwarePathMatching_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOOpenFirmwarePathMatching_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _IOOpenFirmwarePathMatching_2 = { kUnsignedType,4,NULL,0,0,&_IOOpenFirmwarePathMatching_3};
	VPL_Parameter _IOOpenFirmwarePathMatching_1 = { kUnsignedType,4,NULL,0,0,&_IOOpenFirmwarePathMatching_2};
	VPL_ExtProcedure _IOOpenFirmwarePathMatching_F = {"IOOpenFirmwarePathMatching",IOOpenFirmwarePathMatching,&_IOOpenFirmwarePathMatching_1,&_IOOpenFirmwarePathMatching_R};

	VPL_Parameter _IOBSDNameMatching_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOBSDNameMatching_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _IOBSDNameMatching_2 = { kUnsignedType,4,NULL,0,0,&_IOBSDNameMatching_3};
	VPL_Parameter _IOBSDNameMatching_1 = { kUnsignedType,4,NULL,0,0,&_IOBSDNameMatching_2};
	VPL_ExtProcedure _IOBSDNameMatching_F = {"IOBSDNameMatching",IOBSDNameMatching,&_IOBSDNameMatching_1,&_IOBSDNameMatching_R};

	VPL_Parameter _IOServiceNameMatching_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOServiceNameMatching_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _IOServiceNameMatching_F = {"IOServiceNameMatching",IOServiceNameMatching,&_IOServiceNameMatching_1,&_IOServiceNameMatching_R};

	VPL_Parameter _IOServiceMatching_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _IOServiceMatching_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _IOServiceMatching_F = {"IOServiceMatching",IOServiceMatching,&_IOServiceMatching_1,&_IOServiceMatching_R};

	VPL_Parameter _IORegistryEntryInPlane_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryInPlane_2 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IORegistryEntryInPlane_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryInPlane_2};
	VPL_ExtProcedure _IORegistryEntryInPlane_F = {"IORegistryEntryInPlane",IORegistryEntryInPlane,&_IORegistryEntryInPlane_1,&_IORegistryEntryInPlane_R};

	VPL_Parameter _IORegistryEntryGetParentEntry_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetParentEntry_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetParentEntry_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryGetParentEntry_3};
	VPL_Parameter _IORegistryEntryGetParentEntry_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetParentEntry_2};
	VPL_ExtProcedure _IORegistryEntryGetParentEntry_F = {"IORegistryEntryGetParentEntry",IORegistryEntryGetParentEntry,&_IORegistryEntryGetParentEntry_1,&_IORegistryEntryGetParentEntry_R};

	VPL_Parameter _IORegistryEntryGetParentIterator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetParentIterator_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetParentIterator_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryGetParentIterator_3};
	VPL_Parameter _IORegistryEntryGetParentIterator_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetParentIterator_2};
	VPL_ExtProcedure _IORegistryEntryGetParentIterator_F = {"IORegistryEntryGetParentIterator",IORegistryEntryGetParentIterator,&_IORegistryEntryGetParentIterator_1,&_IORegistryEntryGetParentIterator_R};

	VPL_Parameter _IORegistryEntryGetChildEntry_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetChildEntry_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetChildEntry_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryGetChildEntry_3};
	VPL_Parameter _IORegistryEntryGetChildEntry_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetChildEntry_2};
	VPL_ExtProcedure _IORegistryEntryGetChildEntry_F = {"IORegistryEntryGetChildEntry",IORegistryEntryGetChildEntry,&_IORegistryEntryGetChildEntry_1,&_IORegistryEntryGetChildEntry_R};

	VPL_Parameter _IORegistryEntryGetChildIterator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetChildIterator_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetChildIterator_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryGetChildIterator_3};
	VPL_Parameter _IORegistryEntryGetChildIterator_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetChildIterator_2};
	VPL_ExtProcedure _IORegistryEntryGetChildIterator_F = {"IORegistryEntryGetChildIterator",IORegistryEntryGetChildIterator,&_IORegistryEntryGetChildIterator_1,&_IORegistryEntryGetChildIterator_R};

	VPL_Parameter _IORegistryEntrySetCFProperty_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntrySetCFProperty_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IORegistryEntrySetCFProperty_2 = { kPointerType,0,"__CFString",1,0,&_IORegistryEntrySetCFProperty_3};
	VPL_Parameter _IORegistryEntrySetCFProperty_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntrySetCFProperty_2};
	VPL_ExtProcedure _IORegistryEntrySetCFProperty_F = {"IORegistryEntrySetCFProperty",IORegistryEntrySetCFProperty,&_IORegistryEntrySetCFProperty_1,&_IORegistryEntrySetCFProperty_R};

	VPL_Parameter _IORegistryEntrySetCFProperties_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntrySetCFProperties_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IORegistryEntrySetCFProperties_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntrySetCFProperties_2};
	VPL_ExtProcedure _IORegistryEntrySetCFProperties_F = {"IORegistryEntrySetCFProperties",IORegistryEntrySetCFProperties,&_IORegistryEntrySetCFProperties_1,&_IORegistryEntrySetCFProperties_R};

	VPL_Parameter _IORegistryEntryGetProperty_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetProperty_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetProperty_3 = { kPointerType,4096,"char",1,0,&_IORegistryEntryGetProperty_4};
	VPL_Parameter _IORegistryEntryGetProperty_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryGetProperty_3};
	VPL_Parameter _IORegistryEntryGetProperty_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetProperty_2};
	VPL_ExtProcedure _IORegistryEntryGetProperty_F = {"IORegistryEntryGetProperty",IORegistryEntryGetProperty,&_IORegistryEntryGetProperty_1,&_IORegistryEntryGetProperty_R};

	VPL_Parameter _IORegistryEntrySearchCFProperty_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IORegistryEntrySearchCFProperty_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntrySearchCFProperty_4 = { kPointerType,0,"__CFAllocator",1,0,&_IORegistryEntrySearchCFProperty_5};
	VPL_Parameter _IORegistryEntrySearchCFProperty_3 = { kPointerType,0,"__CFString",1,0,&_IORegistryEntrySearchCFProperty_4};
	VPL_Parameter _IORegistryEntrySearchCFProperty_2 = { kPointerType,128,"char",1,0,&_IORegistryEntrySearchCFProperty_3};
	VPL_Parameter _IORegistryEntrySearchCFProperty_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntrySearchCFProperty_2};
	VPL_ExtProcedure _IORegistryEntrySearchCFProperty_F = {"IORegistryEntrySearchCFProperty",IORegistryEntrySearchCFProperty,&_IORegistryEntrySearchCFProperty_1,&_IORegistryEntrySearchCFProperty_R};

	VPL_Parameter _IORegistryEntryCreateCFProperty_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IORegistryEntryCreateCFProperty_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryCreateCFProperty_3 = { kPointerType,0,"__CFAllocator",1,0,&_IORegistryEntryCreateCFProperty_4};
	VPL_Parameter _IORegistryEntryCreateCFProperty_2 = { kPointerType,0,"__CFString",1,0,&_IORegistryEntryCreateCFProperty_3};
	VPL_Parameter _IORegistryEntryCreateCFProperty_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryCreateCFProperty_2};
	VPL_ExtProcedure _IORegistryEntryCreateCFProperty_F = {"IORegistryEntryCreateCFProperty",IORegistryEntryCreateCFProperty,&_IORegistryEntryCreateCFProperty_1,&_IORegistryEntryCreateCFProperty_R};

	VPL_Parameter _IORegistryEntryCreateCFProperties_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryCreateCFProperties_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryCreateCFProperties_3 = { kPointerType,0,"__CFAllocator",1,0,&_IORegistryEntryCreateCFProperties_4};
	VPL_Parameter _IORegistryEntryCreateCFProperties_2 = { kPointerType,0,"__CFDictionary",2,0,&_IORegistryEntryCreateCFProperties_3};
	VPL_Parameter _IORegistryEntryCreateCFProperties_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryCreateCFProperties_2};
	VPL_ExtProcedure _IORegistryEntryCreateCFProperties_F = {"IORegistryEntryCreateCFProperties",IORegistryEntryCreateCFProperties,&_IORegistryEntryCreateCFProperties_1,&_IORegistryEntryCreateCFProperties_R};

	VPL_Parameter _IORegistryEntryGetPath_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetPath_3 = { kPointerType,512,"char",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetPath_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryGetPath_3};
	VPL_Parameter _IORegistryEntryGetPath_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetPath_2};
	VPL_ExtProcedure _IORegistryEntryGetPath_F = {"IORegistryEntryGetPath",IORegistryEntryGetPath,&_IORegistryEntryGetPath_1,&_IORegistryEntryGetPath_R};

	VPL_Parameter _IORegistryEntryGetLocationInPlane_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetLocationInPlane_3 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetLocationInPlane_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryGetLocationInPlane_3};
	VPL_Parameter _IORegistryEntryGetLocationInPlane_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryGetLocationInPlane_2};
	VPL_ExtProcedure _IORegistryEntryGetLocationInPlane_F = {"IORegistryEntryGetLocationInPlane",IORegistryEntryGetLocationInPlane,&_IORegistryEntryGetLocationInPlane_1,&_IORegistryEntryGetLocationInPlane_R};

	VPL_Parameter _IORegistryEntryGetNameInPlane_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryGetNameInPlane_3 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IORegistryEntryGetNameInPlane_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryGetNameInPlane_3};
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
	VPL_Parameter _IORegistryEntryCreateIterator_2 = { kPointerType,128,"char",1,0,&_IORegistryEntryCreateIterator_3};
	VPL_Parameter _IORegistryEntryCreateIterator_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryEntryCreateIterator_2};
	VPL_ExtProcedure _IORegistryEntryCreateIterator_F = {"IORegistryEntryCreateIterator",IORegistryEntryCreateIterator,&_IORegistryEntryCreateIterator_1,&_IORegistryEntryCreateIterator_R};

	VPL_Parameter _IORegistryCreateIterator_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryCreateIterator_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IORegistryCreateIterator_3 = { kUnsignedType,4,NULL,0,0,&_IORegistryCreateIterator_4};
	VPL_Parameter _IORegistryCreateIterator_2 = { kPointerType,128,"char",1,0,&_IORegistryCreateIterator_3};
	VPL_Parameter _IORegistryCreateIterator_1 = { kUnsignedType,4,NULL,0,0,&_IORegistryCreateIterator_2};
	VPL_ExtProcedure _IORegistryCreateIterator_F = {"IORegistryCreateIterator",IORegistryCreateIterator,&_IORegistryCreateIterator_1,&_IORegistryCreateIterator_R};

	VPL_Parameter _IORegistryEntryFromPath_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IORegistryEntryFromPath_2 = { kPointerType,512,"char",1,0,NULL};
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
	VPL_Parameter _IOConnectSetCFProperty_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _IOConnectSetCFProperty_2 = { kPointerType,0,"__CFString",1,0,&_IOConnectSetCFProperty_3};
	VPL_Parameter _IOConnectSetCFProperty_1 = { kUnsignedType,4,NULL,0,0,&_IOConnectSetCFProperty_2};
	VPL_ExtProcedure _IOConnectSetCFProperty_F = {"IOConnectSetCFProperty",IOConnectSetCFProperty,&_IOConnectSetCFProperty_1,&_IOConnectSetCFProperty_R};

	VPL_Parameter _IOConnectSetCFProperties_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOConnectSetCFProperties_2 = { kPointerType,0,"void",1,0,NULL};
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
	VPL_Parameter _IOServiceMatchPropertyTable_2 = { kPointerType,0,"__CFDictionary",1,0,&_IOServiceMatchPropertyTable_3};
	VPL_Parameter _IOServiceMatchPropertyTable_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceMatchPropertyTable_2};
	VPL_ExtProcedure _IOServiceMatchPropertyTable_F = {"IOServiceMatchPropertyTable",IOServiceMatchPropertyTable,&_IOServiceMatchPropertyTable_1,&_IOServiceMatchPropertyTable_R};

	VPL_Parameter _IOServiceAddInterestNotification_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceAddInterestNotification_6 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceAddInterestNotification_5 = { kPointerType,0,"void",1,0,&_IOServiceAddInterestNotification_6};
	VPL_Parameter _IOServiceAddInterestNotification_4 = { kPointerType,0,"void",1,0,&_IOServiceAddInterestNotification_5};
	VPL_Parameter _IOServiceAddInterestNotification_3 = { kPointerType,128,"char",1,0,&_IOServiceAddInterestNotification_4};
	VPL_Parameter _IOServiceAddInterestNotification_2 = { kUnsignedType,4,NULL,0,0,&_IOServiceAddInterestNotification_3};
	VPL_Parameter _IOServiceAddInterestNotification_1 = { kPointerType,0,"IONotificationPort",1,0,&_IOServiceAddInterestNotification_2};
	VPL_ExtProcedure _IOServiceAddInterestNotification_F = {"IOServiceAddInterestNotification",IOServiceAddInterestNotification,&_IOServiceAddInterestNotification_1,&_IOServiceAddInterestNotification_R};

	VPL_Parameter _IOServiceAddMatchingNotification_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceAddMatchingNotification_6 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceAddMatchingNotification_5 = { kPointerType,0,"void",1,0,&_IOServiceAddMatchingNotification_6};
	VPL_Parameter _IOServiceAddMatchingNotification_4 = { kPointerType,0,"void",1,0,&_IOServiceAddMatchingNotification_5};
	VPL_Parameter _IOServiceAddMatchingNotification_3 = { kPointerType,0,"__CFDictionary",1,0,&_IOServiceAddMatchingNotification_4};
	VPL_Parameter _IOServiceAddMatchingNotification_2 = { kPointerType,128,"char",1,0,&_IOServiceAddMatchingNotification_3};
	VPL_Parameter _IOServiceAddMatchingNotification_1 = { kPointerType,0,"IONotificationPort",1,0,&_IOServiceAddMatchingNotification_2};
	VPL_ExtProcedure _IOServiceAddMatchingNotification_F = {"IOServiceAddMatchingNotification",IOServiceAddMatchingNotification,&_IOServiceAddMatchingNotification_1,&_IOServiceAddMatchingNotification_R};

	VPL_Parameter _IOServiceAddNotification_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceAddNotification_6 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceAddNotification_5 = { kIntType,4,NULL,0,0,&_IOServiceAddNotification_6};
	VPL_Parameter _IOServiceAddNotification_4 = { kUnsignedType,4,NULL,0,0,&_IOServiceAddNotification_5};
	VPL_Parameter _IOServiceAddNotification_3 = { kPointerType,0,"__CFDictionary",1,0,&_IOServiceAddNotification_4};
	VPL_Parameter _IOServiceAddNotification_2 = { kPointerType,128,"char",1,0,&_IOServiceAddNotification_3};
	VPL_Parameter _IOServiceAddNotification_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceAddNotification_2};
	VPL_ExtProcedure _IOServiceAddNotification_F = {"IOServiceAddNotification",IOServiceAddNotification,&_IOServiceAddNotification_1,&_IOServiceAddNotification_R};

	VPL_Parameter _IOServiceGetMatchingServices_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceGetMatchingServices_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _IOServiceGetMatchingServices_2 = { kPointerType,0,"__CFDictionary",1,0,&_IOServiceGetMatchingServices_3};
	VPL_Parameter _IOServiceGetMatchingServices_1 = { kUnsignedType,4,NULL,0,0,&_IOServiceGetMatchingServices_2};
	VPL_ExtProcedure _IOServiceGetMatchingServices_F = {"IOServiceGetMatchingServices",IOServiceGetMatchingServices,&_IOServiceGetMatchingServices_1,&_IOServiceGetMatchingServices_R};

	VPL_Parameter _IOServiceGetMatchingService_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOServiceGetMatchingService_2 = { kPointerType,0,"__CFDictionary",1,0,NULL};
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
	VPL_Parameter _IOObjectConformsTo_2 = { kPointerType,128,"char",1,0,NULL};
	VPL_Parameter _IOObjectConformsTo_1 = { kUnsignedType,4,NULL,0,0,&_IOObjectConformsTo_2};
	VPL_ExtProcedure _IOObjectConformsTo_F = {"IOObjectConformsTo",IOObjectConformsTo,&_IOObjectConformsTo_1,&_IOObjectConformsTo_R};

	VPL_Parameter _IOObjectCopyBundleIdentifierForClass_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _IOObjectCopyBundleIdentifierForClass_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _IOObjectCopyBundleIdentifierForClass_F = {"IOObjectCopyBundleIdentifierForClass",IOObjectCopyBundleIdentifierForClass,&_IOObjectCopyBundleIdentifierForClass_1,&_IOObjectCopyBundleIdentifierForClass_R};

	VPL_Parameter _IOObjectCopySuperclassForClass_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _IOObjectCopySuperclassForClass_1 = { kPointerType,0,"__CFString",1,0,NULL};
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

	VPL_Parameter _CFRunLoopTimerGetContext_2 = { kPointerType,20,"CFRunLoopTimerContext",1,0,NULL};
	VPL_Parameter _CFRunLoopTimerGetContext_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,&_CFRunLoopTimerGetContext_2};
	VPL_ExtProcedure _CFRunLoopTimerGetContext_F = {"CFRunLoopTimerGetContext",CFRunLoopTimerGetContext,&_CFRunLoopTimerGetContext_1,NULL};

	VPL_Parameter _CFRunLoopTimerIsValid_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopTimerIsValid_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopTimerIsValid_F = {"CFRunLoopTimerIsValid",CFRunLoopTimerIsValid,&_CFRunLoopTimerIsValid_1,&_CFRunLoopTimerIsValid_R};

	VPL_Parameter _CFRunLoopTimerInvalidate_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopTimerInvalidate_F = {"CFRunLoopTimerInvalidate",CFRunLoopTimerInvalidate,&_CFRunLoopTimerInvalidate_1,NULL};

	VPL_Parameter _CFRunLoopTimerGetOrder_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopTimerGetOrder_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopTimerGetOrder_F = {"CFRunLoopTimerGetOrder",CFRunLoopTimerGetOrder,&_CFRunLoopTimerGetOrder_1,&_CFRunLoopTimerGetOrder_R};

	VPL_Parameter _CFRunLoopTimerDoesRepeat_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopTimerDoesRepeat_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopTimerDoesRepeat_F = {"CFRunLoopTimerDoesRepeat",CFRunLoopTimerDoesRepeat,&_CFRunLoopTimerDoesRepeat_1,&_CFRunLoopTimerDoesRepeat_R};

	VPL_Parameter _CFRunLoopTimerGetInterval_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopTimerGetInterval_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopTimerGetInterval_F = {"CFRunLoopTimerGetInterval",CFRunLoopTimerGetInterval,&_CFRunLoopTimerGetInterval_1,&_CFRunLoopTimerGetInterval_R};

	VPL_Parameter _CFRunLoopTimerSetNextFireDate_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopTimerSetNextFireDate_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,&_CFRunLoopTimerSetNextFireDate_2};
	VPL_ExtProcedure _CFRunLoopTimerSetNextFireDate_F = {"CFRunLoopTimerSetNextFireDate",CFRunLoopTimerSetNextFireDate,&_CFRunLoopTimerSetNextFireDate_1,NULL};

	VPL_Parameter _CFRunLoopTimerGetNextFireDate_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopTimerGetNextFireDate_1 = { kPointerType,0,"__CFRunLoopTimer",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopTimerGetNextFireDate_F = {"CFRunLoopTimerGetNextFireDate",CFRunLoopTimerGetNextFireDate,&_CFRunLoopTimerGetNextFireDate_1,&_CFRunLoopTimerGetNextFireDate_R};

	VPL_Parameter _CFRunLoopTimerCreate_R = { kPointerType,0,"__CFRunLoopTimer",1,0,NULL};
	VPL_Parameter _CFRunLoopTimerCreate_7 = { kPointerType,20,"CFRunLoopTimerContext",1,0,NULL};
	VPL_Parameter _CFRunLoopTimerCreate_6 = { kPointerType,0,"void",1,0,&_CFRunLoopTimerCreate_7};
	VPL_Parameter _CFRunLoopTimerCreate_5 = { kIntType,4,NULL,0,0,&_CFRunLoopTimerCreate_6};
	VPL_Parameter _CFRunLoopTimerCreate_4 = { kUnsignedType,4,NULL,0,0,&_CFRunLoopTimerCreate_5};
	VPL_Parameter _CFRunLoopTimerCreate_3 = { kFloatType,8,NULL,0,0,&_CFRunLoopTimerCreate_4};
	VPL_Parameter _CFRunLoopTimerCreate_2 = { kFloatType,8,NULL,0,0,&_CFRunLoopTimerCreate_3};
	VPL_Parameter _CFRunLoopTimerCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFRunLoopTimerCreate_2};
	VPL_ExtProcedure _CFRunLoopTimerCreate_F = {"CFRunLoopTimerCreate",CFRunLoopTimerCreate,&_CFRunLoopTimerCreate_1,&_CFRunLoopTimerCreate_R};

	VPL_Parameter _CFRunLoopTimerGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFRunLoopTimerGetTypeID_F = {"CFRunLoopTimerGetTypeID",CFRunLoopTimerGetTypeID,NULL,&_CFRunLoopTimerGetTypeID_R};

	VPL_Parameter _CFRunLoopObserverGetContext_2 = { kPointerType,20,"CFRunLoopObserverContext",1,0,NULL};
	VPL_Parameter _CFRunLoopObserverGetContext_1 = { kPointerType,0,"__CFRunLoopObserver",1,0,&_CFRunLoopObserverGetContext_2};
	VPL_ExtProcedure _CFRunLoopObserverGetContext_F = {"CFRunLoopObserverGetContext",CFRunLoopObserverGetContext,&_CFRunLoopObserverGetContext_1,NULL};

	VPL_Parameter _CFRunLoopObserverIsValid_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopObserverIsValid_1 = { kPointerType,0,"__CFRunLoopObserver",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopObserverIsValid_F = {"CFRunLoopObserverIsValid",CFRunLoopObserverIsValid,&_CFRunLoopObserverIsValid_1,&_CFRunLoopObserverIsValid_R};

	VPL_Parameter _CFRunLoopObserverInvalidate_1 = { kPointerType,0,"__CFRunLoopObserver",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopObserverInvalidate_F = {"CFRunLoopObserverInvalidate",CFRunLoopObserverInvalidate,&_CFRunLoopObserverInvalidate_1,NULL};

	VPL_Parameter _CFRunLoopObserverGetOrder_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopObserverGetOrder_1 = { kPointerType,0,"__CFRunLoopObserver",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopObserverGetOrder_F = {"CFRunLoopObserverGetOrder",CFRunLoopObserverGetOrder,&_CFRunLoopObserverGetOrder_1,&_CFRunLoopObserverGetOrder_R};

	VPL_Parameter _CFRunLoopObserverDoesRepeat_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopObserverDoesRepeat_1 = { kPointerType,0,"__CFRunLoopObserver",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopObserverDoesRepeat_F = {"CFRunLoopObserverDoesRepeat",CFRunLoopObserverDoesRepeat,&_CFRunLoopObserverDoesRepeat_1,&_CFRunLoopObserverDoesRepeat_R};

	VPL_Parameter _CFRunLoopObserverGetActivities_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopObserverGetActivities_1 = { kPointerType,0,"__CFRunLoopObserver",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopObserverGetActivities_F = {"CFRunLoopObserverGetActivities",CFRunLoopObserverGetActivities,&_CFRunLoopObserverGetActivities_1,&_CFRunLoopObserverGetActivities_R};

	VPL_Parameter _CFRunLoopObserverCreate_R = { kPointerType,0,"__CFRunLoopObserver",1,0,NULL};
	VPL_Parameter _CFRunLoopObserverCreate_6 = { kPointerType,20,"CFRunLoopObserverContext",1,0,NULL};
	VPL_Parameter _CFRunLoopObserverCreate_5 = { kPointerType,0,"void",1,0,&_CFRunLoopObserverCreate_6};
	VPL_Parameter _CFRunLoopObserverCreate_4 = { kIntType,4,NULL,0,0,&_CFRunLoopObserverCreate_5};
	VPL_Parameter _CFRunLoopObserverCreate_3 = { kUnsignedType,1,NULL,0,0,&_CFRunLoopObserverCreate_4};
	VPL_Parameter _CFRunLoopObserverCreate_2 = { kUnsignedType,4,NULL,0,0,&_CFRunLoopObserverCreate_3};
	VPL_Parameter _CFRunLoopObserverCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFRunLoopObserverCreate_2};
	VPL_ExtProcedure _CFRunLoopObserverCreate_F = {"CFRunLoopObserverCreate",CFRunLoopObserverCreate,&_CFRunLoopObserverCreate_1,&_CFRunLoopObserverCreate_R};

	VPL_Parameter _CFRunLoopObserverGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFRunLoopObserverGetTypeID_F = {"CFRunLoopObserverGetTypeID",CFRunLoopObserverGetTypeID,NULL,&_CFRunLoopObserverGetTypeID_R};

	VPL_Parameter _CFRunLoopSourceSignal_1 = { kPointerType,0,"__CFRunLoopSource",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopSourceSignal_F = {"CFRunLoopSourceSignal",CFRunLoopSourceSignal,&_CFRunLoopSourceSignal_1,NULL};

	VPL_Parameter _CFRunLoopSourceGetContext_2 = { kPointerType,40,"CFRunLoopSourceContext",1,0,NULL};
	VPL_Parameter _CFRunLoopSourceGetContext_1 = { kPointerType,0,"__CFRunLoopSource",1,0,&_CFRunLoopSourceGetContext_2};
	VPL_ExtProcedure _CFRunLoopSourceGetContext_F = {"CFRunLoopSourceGetContext",CFRunLoopSourceGetContext,&_CFRunLoopSourceGetContext_1,NULL};

	VPL_Parameter _CFRunLoopSourceIsValid_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopSourceIsValid_1 = { kPointerType,0,"__CFRunLoopSource",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopSourceIsValid_F = {"CFRunLoopSourceIsValid",CFRunLoopSourceIsValid,&_CFRunLoopSourceIsValid_1,&_CFRunLoopSourceIsValid_R};

	VPL_Parameter _CFRunLoopSourceInvalidate_1 = { kPointerType,0,"__CFRunLoopSource",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopSourceInvalidate_F = {"CFRunLoopSourceInvalidate",CFRunLoopSourceInvalidate,&_CFRunLoopSourceInvalidate_1,NULL};

	VPL_Parameter _CFRunLoopSourceGetOrder_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopSourceGetOrder_1 = { kPointerType,0,"__CFRunLoopSource",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopSourceGetOrder_F = {"CFRunLoopSourceGetOrder",CFRunLoopSourceGetOrder,&_CFRunLoopSourceGetOrder_1,&_CFRunLoopSourceGetOrder_R};

	VPL_Parameter _CFRunLoopSourceCreate_R = { kPointerType,0,"__CFRunLoopSource",1,0,NULL};
	VPL_Parameter _CFRunLoopSourceCreate_3 = { kPointerType,40,"CFRunLoopSourceContext",1,0,NULL};
	VPL_Parameter _CFRunLoopSourceCreate_2 = { kIntType,4,NULL,0,0,&_CFRunLoopSourceCreate_3};
	VPL_Parameter _CFRunLoopSourceCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFRunLoopSourceCreate_2};
	VPL_ExtProcedure _CFRunLoopSourceCreate_F = {"CFRunLoopSourceCreate",CFRunLoopSourceCreate,&_CFRunLoopSourceCreate_1,&_CFRunLoopSourceCreate_R};

	VPL_Parameter _CFRunLoopSourceGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFRunLoopSourceGetTypeID_F = {"CFRunLoopSourceGetTypeID",CFRunLoopSourceGetTypeID,NULL,&_CFRunLoopSourceGetTypeID_R};

	VPL_Parameter _CFRunLoopRemoveTimer_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopRemoveTimer_2 = { kPointerType,0,"__CFRunLoopTimer",1,0,&_CFRunLoopRemoveTimer_3};
	VPL_Parameter _CFRunLoopRemoveTimer_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopRemoveTimer_2};
	VPL_ExtProcedure _CFRunLoopRemoveTimer_F = {"CFRunLoopRemoveTimer",CFRunLoopRemoveTimer,&_CFRunLoopRemoveTimer_1,NULL};

	VPL_Parameter _CFRunLoopAddTimer_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopAddTimer_2 = { kPointerType,0,"__CFRunLoopTimer",1,0,&_CFRunLoopAddTimer_3};
	VPL_Parameter _CFRunLoopAddTimer_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopAddTimer_2};
	VPL_ExtProcedure _CFRunLoopAddTimer_F = {"CFRunLoopAddTimer",CFRunLoopAddTimer,&_CFRunLoopAddTimer_1,NULL};

	VPL_Parameter _CFRunLoopContainsTimer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopContainsTimer_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopContainsTimer_2 = { kPointerType,0,"__CFRunLoopTimer",1,0,&_CFRunLoopContainsTimer_3};
	VPL_Parameter _CFRunLoopContainsTimer_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopContainsTimer_2};
	VPL_ExtProcedure _CFRunLoopContainsTimer_F = {"CFRunLoopContainsTimer",CFRunLoopContainsTimer,&_CFRunLoopContainsTimer_1,&_CFRunLoopContainsTimer_R};

	VPL_Parameter _CFRunLoopRemoveObserver_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopRemoveObserver_2 = { kPointerType,0,"__CFRunLoopObserver",1,0,&_CFRunLoopRemoveObserver_3};
	VPL_Parameter _CFRunLoopRemoveObserver_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopRemoveObserver_2};
	VPL_ExtProcedure _CFRunLoopRemoveObserver_F = {"CFRunLoopRemoveObserver",CFRunLoopRemoveObserver,&_CFRunLoopRemoveObserver_1,NULL};

	VPL_Parameter _CFRunLoopAddObserver_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopAddObserver_2 = { kPointerType,0,"__CFRunLoopObserver",1,0,&_CFRunLoopAddObserver_3};
	VPL_Parameter _CFRunLoopAddObserver_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopAddObserver_2};
	VPL_ExtProcedure _CFRunLoopAddObserver_F = {"CFRunLoopAddObserver",CFRunLoopAddObserver,&_CFRunLoopAddObserver_1,NULL};

	VPL_Parameter _CFRunLoopContainsObserver_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopContainsObserver_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopContainsObserver_2 = { kPointerType,0,"__CFRunLoopObserver",1,0,&_CFRunLoopContainsObserver_3};
	VPL_Parameter _CFRunLoopContainsObserver_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopContainsObserver_2};
	VPL_ExtProcedure _CFRunLoopContainsObserver_F = {"CFRunLoopContainsObserver",CFRunLoopContainsObserver,&_CFRunLoopContainsObserver_1,&_CFRunLoopContainsObserver_R};

	VPL_Parameter _CFRunLoopRemoveSource_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopRemoveSource_2 = { kPointerType,0,"__CFRunLoopSource",1,0,&_CFRunLoopRemoveSource_3};
	VPL_Parameter _CFRunLoopRemoveSource_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopRemoveSource_2};
	VPL_ExtProcedure _CFRunLoopRemoveSource_F = {"CFRunLoopRemoveSource",CFRunLoopRemoveSource,&_CFRunLoopRemoveSource_1,NULL};

	VPL_Parameter _CFRunLoopAddSource_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopAddSource_2 = { kPointerType,0,"__CFRunLoopSource",1,0,&_CFRunLoopAddSource_3};
	VPL_Parameter _CFRunLoopAddSource_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopAddSource_2};
	VPL_ExtProcedure _CFRunLoopAddSource_F = {"CFRunLoopAddSource",CFRunLoopAddSource,&_CFRunLoopAddSource_1,NULL};

	VPL_Parameter _CFRunLoopContainsSource_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopContainsSource_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopContainsSource_2 = { kPointerType,0,"__CFRunLoopSource",1,0,&_CFRunLoopContainsSource_3};
	VPL_Parameter _CFRunLoopContainsSource_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopContainsSource_2};
	VPL_ExtProcedure _CFRunLoopContainsSource_F = {"CFRunLoopContainsSource",CFRunLoopContainsSource,&_CFRunLoopContainsSource_1,&_CFRunLoopContainsSource_R};

	VPL_Parameter _CFRunLoopStop_1 = { kPointerType,0,"__CFRunLoop",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopStop_F = {"CFRunLoopStop",CFRunLoopStop,&_CFRunLoopStop_1,NULL};

	VPL_Parameter _CFRunLoopWakeUp_1 = { kPointerType,0,"__CFRunLoop",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopWakeUp_F = {"CFRunLoopWakeUp",CFRunLoopWakeUp,&_CFRunLoopWakeUp_1,NULL};

	VPL_Parameter _CFRunLoopIsWaiting_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopIsWaiting_1 = { kPointerType,0,"__CFRunLoop",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopIsWaiting_F = {"CFRunLoopIsWaiting",CFRunLoopIsWaiting,&_CFRunLoopIsWaiting_1,&_CFRunLoopIsWaiting_R};

	VPL_Parameter _CFRunLoopRunInMode_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopRunInMode_3 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopRunInMode_2 = { kFloatType,8,NULL,0,0,&_CFRunLoopRunInMode_3};
	VPL_Parameter _CFRunLoopRunInMode_1 = { kPointerType,0,"__CFString",1,0,&_CFRunLoopRunInMode_2};
	VPL_ExtProcedure _CFRunLoopRunInMode_F = {"CFRunLoopRunInMode",CFRunLoopRunInMode,&_CFRunLoopRunInMode_1,&_CFRunLoopRunInMode_R};

	VPL_ExtProcedure _CFRunLoopRun_F = {"CFRunLoopRun",CFRunLoopRun,NULL,NULL};

	VPL_Parameter _CFRunLoopGetNextTimerFireDate_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFRunLoopGetNextTimerFireDate_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopGetNextTimerFireDate_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopGetNextTimerFireDate_2};
	VPL_ExtProcedure _CFRunLoopGetNextTimerFireDate_F = {"CFRunLoopGetNextTimerFireDate",CFRunLoopGetNextTimerFireDate,&_CFRunLoopGetNextTimerFireDate_1,&_CFRunLoopGetNextTimerFireDate_R};

	VPL_Parameter _CFRunLoopAddCommonMode_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopAddCommonMode_1 = { kPointerType,0,"__CFRunLoop",1,0,&_CFRunLoopAddCommonMode_2};
	VPL_ExtProcedure _CFRunLoopAddCommonMode_F = {"CFRunLoopAddCommonMode",CFRunLoopAddCommonMode,&_CFRunLoopAddCommonMode_1,NULL};

	VPL_Parameter _CFRunLoopCopyAllModes_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFRunLoopCopyAllModes_1 = { kPointerType,0,"__CFRunLoop",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopCopyAllModes_F = {"CFRunLoopCopyAllModes",CFRunLoopCopyAllModes,&_CFRunLoopCopyAllModes_1,&_CFRunLoopCopyAllModes_R};

	VPL_Parameter _CFRunLoopCopyCurrentMode_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFRunLoopCopyCurrentMode_1 = { kPointerType,0,"__CFRunLoop",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopCopyCurrentMode_F = {"CFRunLoopCopyCurrentMode",CFRunLoopCopyCurrentMode,&_CFRunLoopCopyCurrentMode_1,&_CFRunLoopCopyCurrentMode_R};

	VPL_Parameter _CFRunLoopGetCurrent_R = { kPointerType,0,"__CFRunLoop",1,0,NULL};
	VPL_ExtProcedure _CFRunLoopGetCurrent_F = {"CFRunLoopGetCurrent",CFRunLoopGetCurrent,NULL,&_CFRunLoopGetCurrent_R};

	VPL_Parameter _CFRunLoopGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFRunLoopGetTypeID_F = {"CFRunLoopGetTypeID",CFRunLoopGetTypeID,NULL,&_CFRunLoopGetTypeID_R};

	VPL_Parameter ___CFStringMakeConstantString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter ___CFStringMakeConstantString_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure ___CFStringMakeConstantString_F = {"__CFStringMakeConstantString",__CFStringMakeConstantString,&___CFStringMakeConstantString_1,&___CFStringMakeConstantString_R};

	VPL_Parameter _CFShowStr_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFShowStr_F = {"CFShowStr",CFShowStr,&_CFShowStr_1,NULL};

	VPL_Parameter _CFShow_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFShow_F = {"CFShow",CFShow,&_CFShow_1,NULL};

	VPL_Parameter _CFStringGetMostCompatibleMacStringEncoding_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetMostCompatibleMacStringEncoding_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringGetMostCompatibleMacStringEncoding_F = {"CFStringGetMostCompatibleMacStringEncoding",CFStringGetMostCompatibleMacStringEncoding,&_CFStringGetMostCompatibleMacStringEncoding_1,&_CFStringGetMostCompatibleMacStringEncoding_R};

	VPL_Parameter _CFStringConvertEncodingToIANACharSetName_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringConvertEncodingToIANACharSetName_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringConvertEncodingToIANACharSetName_F = {"CFStringConvertEncodingToIANACharSetName",CFStringConvertEncodingToIANACharSetName,&_CFStringConvertEncodingToIANACharSetName_1,&_CFStringConvertEncodingToIANACharSetName_R};

	VPL_Parameter _CFStringConvertIANACharSetNameToEncoding_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringConvertIANACharSetNameToEncoding_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringConvertIANACharSetNameToEncoding_F = {"CFStringConvertIANACharSetNameToEncoding",CFStringConvertIANACharSetNameToEncoding,&_CFStringConvertIANACharSetNameToEncoding_1,&_CFStringConvertIANACharSetNameToEncoding_R};

	VPL_Parameter _CFStringConvertWindowsCodepageToEncoding_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringConvertWindowsCodepageToEncoding_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringConvertWindowsCodepageToEncoding_F = {"CFStringConvertWindowsCodepageToEncoding",CFStringConvertWindowsCodepageToEncoding,&_CFStringConvertWindowsCodepageToEncoding_1,&_CFStringConvertWindowsCodepageToEncoding_R};

	VPL_Parameter _CFStringConvertEncodingToWindowsCodepage_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringConvertEncodingToWindowsCodepage_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringConvertEncodingToWindowsCodepage_F = {"CFStringConvertEncodingToWindowsCodepage",CFStringConvertEncodingToWindowsCodepage,&_CFStringConvertEncodingToWindowsCodepage_1,&_CFStringConvertEncodingToWindowsCodepage_R};

	VPL_Parameter _CFStringConvertNSStringEncodingToEncoding_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringConvertNSStringEncodingToEncoding_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringConvertNSStringEncodingToEncoding_F = {"CFStringConvertNSStringEncodingToEncoding",CFStringConvertNSStringEncodingToEncoding,&_CFStringConvertNSStringEncodingToEncoding_1,&_CFStringConvertNSStringEncodingToEncoding_R};

	VPL_Parameter _CFStringConvertEncodingToNSStringEncoding_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringConvertEncodingToNSStringEncoding_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringConvertEncodingToNSStringEncoding_F = {"CFStringConvertEncodingToNSStringEncoding",CFStringConvertEncodingToNSStringEncoding,&_CFStringConvertEncodingToNSStringEncoding_1,&_CFStringConvertEncodingToNSStringEncoding_R};

	VPL_Parameter _CFStringGetNameOfEncoding_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringGetNameOfEncoding_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringGetNameOfEncoding_F = {"CFStringGetNameOfEncoding",CFStringGetNameOfEncoding,&_CFStringGetNameOfEncoding_1,&_CFStringGetNameOfEncoding_R};

	VPL_Parameter _CFStringGetListOfAvailableEncodings_R = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _CFStringGetListOfAvailableEncodings_F = {"CFStringGetListOfAvailableEncodings",CFStringGetListOfAvailableEncodings,NULL,&_CFStringGetListOfAvailableEncodings_R};

	VPL_Parameter _CFStringIsEncodingAvailable_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringIsEncodingAvailable_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringIsEncodingAvailable_F = {"CFStringIsEncodingAvailable",CFStringIsEncodingAvailable,&_CFStringIsEncodingAvailable_1,&_CFStringIsEncodingAvailable_R};

	VPL_Parameter _CFStringTransform_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringTransform_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringTransform_3 = { kPointerType,0,"__CFString",1,0,&_CFStringTransform_4};
	VPL_Parameter _CFStringTransform_2 = { kPointerType,8,"CFRange",1,0,&_CFStringTransform_3};
	VPL_Parameter _CFStringTransform_1 = { kPointerType,0,"__CFString",1,0,&_CFStringTransform_2};
	VPL_ExtProcedure _CFStringTransform_F = {"CFStringTransform",CFStringTransform,&_CFStringTransform_1,&_CFStringTransform_R};

	VPL_Parameter _CFStringNormalize_2 = { kEnumType,4,"60",0,0,NULL};
	VPL_Parameter _CFStringNormalize_1 = { kPointerType,0,"__CFString",1,0,&_CFStringNormalize_2};
	VPL_ExtProcedure _CFStringNormalize_F = {"CFStringNormalize",CFStringNormalize,&_CFStringNormalize_1,NULL};

	VPL_Parameter _CFStringCapitalize_2 = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_Parameter _CFStringCapitalize_1 = { kPointerType,0,"__CFString",1,0,&_CFStringCapitalize_2};
	VPL_ExtProcedure _CFStringCapitalize_F = {"CFStringCapitalize",CFStringCapitalize,&_CFStringCapitalize_1,NULL};

	VPL_Parameter _CFStringUppercase_2 = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_Parameter _CFStringUppercase_1 = { kPointerType,0,"__CFString",1,0,&_CFStringUppercase_2};
	VPL_ExtProcedure _CFStringUppercase_F = {"CFStringUppercase",CFStringUppercase,&_CFStringUppercase_1,NULL};

	VPL_Parameter _CFStringLowercase_2 = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_Parameter _CFStringLowercase_1 = { kPointerType,0,"__CFString",1,0,&_CFStringLowercase_2};
	VPL_ExtProcedure _CFStringLowercase_F = {"CFStringLowercase",CFStringLowercase,&_CFStringLowercase_1,NULL};

	VPL_Parameter _CFStringTrimWhitespace_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringTrimWhitespace_F = {"CFStringTrimWhitespace",CFStringTrimWhitespace,&_CFStringTrimWhitespace_1,NULL};

	VPL_Parameter _CFStringTrim_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringTrim_1 = { kPointerType,0,"__CFString",1,0,&_CFStringTrim_2};
	VPL_ExtProcedure _CFStringTrim_F = {"CFStringTrim",CFStringTrim,&_CFStringTrim_1,NULL};

	VPL_Parameter _CFStringPad_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringPad_3 = { kIntType,4,NULL,0,0,&_CFStringPad_4};
	VPL_Parameter _CFStringPad_2 = { kPointerType,0,"__CFString",1,0,&_CFStringPad_3};
	VPL_Parameter _CFStringPad_1 = { kPointerType,0,"__CFString",1,0,&_CFStringPad_2};
	VPL_ExtProcedure _CFStringPad_F = {"CFStringPad",CFStringPad,&_CFStringPad_1,NULL};

	VPL_Parameter _CFStringSetExternalCharactersNoCopy_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringSetExternalCharactersNoCopy_3 = { kIntType,4,NULL,0,0,&_CFStringSetExternalCharactersNoCopy_4};
	VPL_Parameter _CFStringSetExternalCharactersNoCopy_2 = { kPointerType,2,"unsigned short",1,0,&_CFStringSetExternalCharactersNoCopy_3};
	VPL_Parameter _CFStringSetExternalCharactersNoCopy_1 = { kPointerType,0,"__CFString",1,0,&_CFStringSetExternalCharactersNoCopy_2};
	VPL_ExtProcedure _CFStringSetExternalCharactersNoCopy_F = {"CFStringSetExternalCharactersNoCopy",CFStringSetExternalCharactersNoCopy,&_CFStringSetExternalCharactersNoCopy_1,NULL};

	VPL_Parameter _CFStringFindAndReplace_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringFindAndReplace_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringFindAndReplace_4 = { kStructureType,8,"CFRange",0,0,&_CFStringFindAndReplace_5};
	VPL_Parameter _CFStringFindAndReplace_3 = { kPointerType,0,"__CFString",1,0,&_CFStringFindAndReplace_4};
	VPL_Parameter _CFStringFindAndReplace_2 = { kPointerType,0,"__CFString",1,0,&_CFStringFindAndReplace_3};
	VPL_Parameter _CFStringFindAndReplace_1 = { kPointerType,0,"__CFString",1,0,&_CFStringFindAndReplace_2};
	VPL_ExtProcedure _CFStringFindAndReplace_F = {"CFStringFindAndReplace",CFStringFindAndReplace,&_CFStringFindAndReplace_1,&_CFStringFindAndReplace_R};

	VPL_Parameter _CFStringReplaceAll_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringReplaceAll_1 = { kPointerType,0,"__CFString",1,0,&_CFStringReplaceAll_2};
	VPL_ExtProcedure _CFStringReplaceAll_F = {"CFStringReplaceAll",CFStringReplaceAll,&_CFStringReplaceAll_1,NULL};

	VPL_Parameter _CFStringReplace_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringReplace_2 = { kStructureType,8,"CFRange",0,0,&_CFStringReplace_3};
	VPL_Parameter _CFStringReplace_1 = { kPointerType,0,"__CFString",1,0,&_CFStringReplace_2};
	VPL_ExtProcedure _CFStringReplace_F = {"CFStringReplace",CFStringReplace,&_CFStringReplace_1,NULL};

	VPL_Parameter _CFStringDelete_2 = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFStringDelete_1 = { kPointerType,0,"__CFString",1,0,&_CFStringDelete_2};
	VPL_ExtProcedure _CFStringDelete_F = {"CFStringDelete",CFStringDelete,&_CFStringDelete_1,NULL};

	VPL_Parameter _CFStringInsert_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringInsert_2 = { kIntType,4,NULL,0,0,&_CFStringInsert_3};
	VPL_Parameter _CFStringInsert_1 = { kPointerType,0,"__CFString",1,0,&_CFStringInsert_2};
	VPL_ExtProcedure _CFStringInsert_F = {"CFStringInsert",CFStringInsert,&_CFStringInsert_1,NULL};

	VPL_Parameter _CFStringAppendFormatAndArguments_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _CFStringAppendFormatAndArguments_3 = { kPointerType,0,"__CFString",1,0,&_CFStringAppendFormatAndArguments_4};
	VPL_Parameter _CFStringAppendFormatAndArguments_2 = { kPointerType,0,"__CFDictionary",1,0,&_CFStringAppendFormatAndArguments_3};
	VPL_Parameter _CFStringAppendFormatAndArguments_1 = { kPointerType,0,"__CFString",1,0,&_CFStringAppendFormatAndArguments_2};
	VPL_ExtProcedure _CFStringAppendFormatAndArguments_F = {"CFStringAppendFormatAndArguments",CFStringAppendFormatAndArguments,&_CFStringAppendFormatAndArguments_1,NULL};

	VPL_Parameter _CFStringAppendFormat_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringAppendFormat_2 = { kPointerType,0,"__CFDictionary",1,0,&_CFStringAppendFormat_3};
	VPL_Parameter _CFStringAppendFormat_1 = { kPointerType,0,"__CFString",1,0,&_CFStringAppendFormat_2};
	VPL_ExtProcedure _CFStringAppendFormat_F = {"CFStringAppendFormat",CFStringAppendFormat,&_CFStringAppendFormat_1,NULL};

	VPL_Parameter _CFStringAppendCString_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringAppendCString_2 = { kPointerType,1,"char",1,0,&_CFStringAppendCString_3};
	VPL_Parameter _CFStringAppendCString_1 = { kPointerType,0,"__CFString",1,0,&_CFStringAppendCString_2};
	VPL_ExtProcedure _CFStringAppendCString_F = {"CFStringAppendCString",CFStringAppendCString,&_CFStringAppendCString_1,NULL};

	VPL_Parameter _CFStringAppendPascalString_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringAppendPascalString_2 = { kPointerType,1,"unsigned char",1,0,&_CFStringAppendPascalString_3};
	VPL_Parameter _CFStringAppendPascalString_1 = { kPointerType,0,"__CFString",1,0,&_CFStringAppendPascalString_2};
	VPL_ExtProcedure _CFStringAppendPascalString_F = {"CFStringAppendPascalString",CFStringAppendPascalString,&_CFStringAppendPascalString_1,NULL};

	VPL_Parameter _CFStringAppendCharacters_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringAppendCharacters_2 = { kPointerType,2,"unsigned short",1,0,&_CFStringAppendCharacters_3};
	VPL_Parameter _CFStringAppendCharacters_1 = { kPointerType,0,"__CFString",1,0,&_CFStringAppendCharacters_2};
	VPL_ExtProcedure _CFStringAppendCharacters_F = {"CFStringAppendCharacters",CFStringAppendCharacters,&_CFStringAppendCharacters_1,NULL};

	VPL_Parameter _CFStringAppend_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringAppend_1 = { kPointerType,0,"__CFString",1,0,&_CFStringAppend_2};
	VPL_ExtProcedure _CFStringAppend_F = {"CFStringAppend",CFStringAppend,&_CFStringAppend_1,NULL};

	VPL_Parameter _CFStringGetDoubleValue_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetDoubleValue_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringGetDoubleValue_F = {"CFStringGetDoubleValue",CFStringGetDoubleValue,&_CFStringGetDoubleValue_1,&_CFStringGetDoubleValue_R};

	VPL_Parameter _CFStringGetIntValue_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetIntValue_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringGetIntValue_F = {"CFStringGetIntValue",CFStringGetIntValue,&_CFStringGetIntValue_1,&_CFStringGetIntValue_R};

	VPL_Parameter _CFStringCreateArrayBySeparatingStrings_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFStringCreateArrayBySeparatingStrings_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateArrayBySeparatingStrings_2 = { kPointerType,0,"__CFString",1,0,&_CFStringCreateArrayBySeparatingStrings_3};
	VPL_Parameter _CFStringCreateArrayBySeparatingStrings_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateArrayBySeparatingStrings_2};
	VPL_ExtProcedure _CFStringCreateArrayBySeparatingStrings_F = {"CFStringCreateArrayBySeparatingStrings",CFStringCreateArrayBySeparatingStrings,&_CFStringCreateArrayBySeparatingStrings_1,&_CFStringCreateArrayBySeparatingStrings_R};

	VPL_Parameter _CFStringCreateByCombiningStrings_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateByCombiningStrings_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateByCombiningStrings_2 = { kPointerType,0,"__CFArray",1,0,&_CFStringCreateByCombiningStrings_3};
	VPL_Parameter _CFStringCreateByCombiningStrings_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateByCombiningStrings_2};
	VPL_ExtProcedure _CFStringCreateByCombiningStrings_F = {"CFStringCreateByCombiningStrings",CFStringCreateByCombiningStrings,&_CFStringCreateByCombiningStrings_1,&_CFStringCreateByCombiningStrings_R};

	VPL_Parameter _CFStringGetLineBounds_5 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _CFStringGetLineBounds_4 = { kPointerType,4,"long int",1,0,&_CFStringGetLineBounds_5};
	VPL_Parameter _CFStringGetLineBounds_3 = { kPointerType,4,"long int",1,0,&_CFStringGetLineBounds_4};
	VPL_Parameter _CFStringGetLineBounds_2 = { kStructureType,8,"CFRange",0,0,&_CFStringGetLineBounds_3};
	VPL_Parameter _CFStringGetLineBounds_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetLineBounds_2};
	VPL_ExtProcedure _CFStringGetLineBounds_F = {"CFStringGetLineBounds",CFStringGetLineBounds,&_CFStringGetLineBounds_1,NULL};

	VPL_Parameter _CFStringFindCharacterFromSet_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringFindCharacterFromSet_5 = { kPointerType,8,"CFRange",1,0,NULL};
	VPL_Parameter _CFStringFindCharacterFromSet_4 = { kUnsignedType,4,NULL,0,0,&_CFStringFindCharacterFromSet_5};
	VPL_Parameter _CFStringFindCharacterFromSet_3 = { kStructureType,8,"CFRange",0,0,&_CFStringFindCharacterFromSet_4};
	VPL_Parameter _CFStringFindCharacterFromSet_2 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFStringFindCharacterFromSet_3};
	VPL_Parameter _CFStringFindCharacterFromSet_1 = { kPointerType,0,"__CFString",1,0,&_CFStringFindCharacterFromSet_2};
	VPL_ExtProcedure _CFStringFindCharacterFromSet_F = {"CFStringFindCharacterFromSet",CFStringFindCharacterFromSet,&_CFStringFindCharacterFromSet_1,&_CFStringFindCharacterFromSet_R};

	VPL_Parameter _CFStringGetRangeOfComposedCharactersAtIndex_R = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFStringGetRangeOfComposedCharactersAtIndex_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetRangeOfComposedCharactersAtIndex_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetRangeOfComposedCharactersAtIndex_2};
	VPL_ExtProcedure _CFStringGetRangeOfComposedCharactersAtIndex_F = {"CFStringGetRangeOfComposedCharactersAtIndex",CFStringGetRangeOfComposedCharactersAtIndex,&_CFStringGetRangeOfComposedCharactersAtIndex_1,&_CFStringGetRangeOfComposedCharactersAtIndex_R};

	VPL_Parameter _CFStringHasSuffix_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringHasSuffix_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringHasSuffix_1 = { kPointerType,0,"__CFString",1,0,&_CFStringHasSuffix_2};
	VPL_ExtProcedure _CFStringHasSuffix_F = {"CFStringHasSuffix",CFStringHasSuffix,&_CFStringHasSuffix_1,&_CFStringHasSuffix_R};

	VPL_Parameter _CFStringHasPrefix_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringHasPrefix_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringHasPrefix_1 = { kPointerType,0,"__CFString",1,0,&_CFStringHasPrefix_2};
	VPL_ExtProcedure _CFStringHasPrefix_F = {"CFStringHasPrefix",CFStringHasPrefix,&_CFStringHasPrefix_1,&_CFStringHasPrefix_R};

	VPL_Parameter _CFStringFind_R = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFStringFind_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringFind_2 = { kPointerType,0,"__CFString",1,0,&_CFStringFind_3};
	VPL_Parameter _CFStringFind_1 = { kPointerType,0,"__CFString",1,0,&_CFStringFind_2};
	VPL_ExtProcedure _CFStringFind_F = {"CFStringFind",CFStringFind,&_CFStringFind_1,&_CFStringFind_R};

	VPL_Parameter _CFStringCreateArrayWithFindResults_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFStringCreateArrayWithFindResults_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringCreateArrayWithFindResults_4 = { kStructureType,8,"CFRange",0,0,&_CFStringCreateArrayWithFindResults_5};
	VPL_Parameter _CFStringCreateArrayWithFindResults_3 = { kPointerType,0,"__CFString",1,0,&_CFStringCreateArrayWithFindResults_4};
	VPL_Parameter _CFStringCreateArrayWithFindResults_2 = { kPointerType,0,"__CFString",1,0,&_CFStringCreateArrayWithFindResults_3};
	VPL_Parameter _CFStringCreateArrayWithFindResults_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateArrayWithFindResults_2};
	VPL_ExtProcedure _CFStringCreateArrayWithFindResults_F = {"CFStringCreateArrayWithFindResults",CFStringCreateArrayWithFindResults,&_CFStringCreateArrayWithFindResults_1,&_CFStringCreateArrayWithFindResults_R};

	VPL_Parameter _CFStringFindWithOptions_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringFindWithOptions_5 = { kPointerType,8,"CFRange",1,0,NULL};
	VPL_Parameter _CFStringFindWithOptions_4 = { kUnsignedType,4,NULL,0,0,&_CFStringFindWithOptions_5};
	VPL_Parameter _CFStringFindWithOptions_3 = { kStructureType,8,"CFRange",0,0,&_CFStringFindWithOptions_4};
	VPL_Parameter _CFStringFindWithOptions_2 = { kPointerType,0,"__CFString",1,0,&_CFStringFindWithOptions_3};
	VPL_Parameter _CFStringFindWithOptions_1 = { kPointerType,0,"__CFString",1,0,&_CFStringFindWithOptions_2};
	VPL_ExtProcedure _CFStringFindWithOptions_F = {"CFStringFindWithOptions",CFStringFindWithOptions,&_CFStringFindWithOptions_1,&_CFStringFindWithOptions_R};

	VPL_Parameter _CFStringCompare_R = { kEnumType,4,"47",0,0,NULL};
	VPL_Parameter _CFStringCompare_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringCompare_2 = { kPointerType,0,"__CFString",1,0,&_CFStringCompare_3};
	VPL_Parameter _CFStringCompare_1 = { kPointerType,0,"__CFString",1,0,&_CFStringCompare_2};
	VPL_ExtProcedure _CFStringCompare_F = {"CFStringCompare",CFStringCompare,&_CFStringCompare_1,&_CFStringCompare_R};

	VPL_Parameter _CFStringCompareWithOptions_R = { kEnumType,4,"47",0,0,NULL};
	VPL_Parameter _CFStringCompareWithOptions_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringCompareWithOptions_3 = { kStructureType,8,"CFRange",0,0,&_CFStringCompareWithOptions_4};
	VPL_Parameter _CFStringCompareWithOptions_2 = { kPointerType,0,"__CFString",1,0,&_CFStringCompareWithOptions_3};
	VPL_Parameter _CFStringCompareWithOptions_1 = { kPointerType,0,"__CFString",1,0,&_CFStringCompareWithOptions_2};
	VPL_ExtProcedure _CFStringCompareWithOptions_F = {"CFStringCompareWithOptions",CFStringCompareWithOptions,&_CFStringCompareWithOptions_1,&_CFStringCompareWithOptions_R};

	VPL_Parameter _CFStringCreateWithFileSystemRepresentation_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithFileSystemRepresentation_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _CFStringCreateWithFileSystemRepresentation_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithFileSystemRepresentation_2};
	VPL_ExtProcedure _CFStringCreateWithFileSystemRepresentation_F = {"CFStringCreateWithFileSystemRepresentation",CFStringCreateWithFileSystemRepresentation,&_CFStringCreateWithFileSystemRepresentation_1,&_CFStringCreateWithFileSystemRepresentation_R};

	VPL_Parameter _CFStringGetMaximumSizeOfFileSystemRepresentation_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetMaximumSizeOfFileSystemRepresentation_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringGetMaximumSizeOfFileSystemRepresentation_F = {"CFStringGetMaximumSizeOfFileSystemRepresentation",CFStringGetMaximumSizeOfFileSystemRepresentation,&_CFStringGetMaximumSizeOfFileSystemRepresentation_1,&_CFStringGetMaximumSizeOfFileSystemRepresentation_R};

	VPL_Parameter _CFStringGetFileSystemRepresentation_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetFileSystemRepresentation_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetFileSystemRepresentation_2 = { kPointerType,1,"char",1,0,&_CFStringGetFileSystemRepresentation_3};
	VPL_Parameter _CFStringGetFileSystemRepresentation_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetFileSystemRepresentation_2};
	VPL_ExtProcedure _CFStringGetFileSystemRepresentation_F = {"CFStringGetFileSystemRepresentation",CFStringGetFileSystemRepresentation,&_CFStringGetFileSystemRepresentation_1,&_CFStringGetFileSystemRepresentation_R};

	VPL_Parameter _CFStringGetMaximumSizeForEncoding_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetMaximumSizeForEncoding_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetMaximumSizeForEncoding_1 = { kIntType,4,NULL,0,0,&_CFStringGetMaximumSizeForEncoding_2};
	VPL_ExtProcedure _CFStringGetMaximumSizeForEncoding_F = {"CFStringGetMaximumSizeForEncoding",CFStringGetMaximumSizeForEncoding,&_CFStringGetMaximumSizeForEncoding_1,&_CFStringGetMaximumSizeForEncoding_R};

	VPL_Parameter _CFStringGetSystemEncoding_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringGetSystemEncoding_F = {"CFStringGetSystemEncoding",CFStringGetSystemEncoding,NULL,&_CFStringGetSystemEncoding_R};

	VPL_Parameter _CFStringGetFastestEncoding_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetFastestEncoding_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringGetFastestEncoding_F = {"CFStringGetFastestEncoding",CFStringGetFastestEncoding,&_CFStringGetFastestEncoding_1,&_CFStringGetFastestEncoding_R};

	VPL_Parameter _CFStringGetSmallestEncoding_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetSmallestEncoding_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringGetSmallestEncoding_F = {"CFStringGetSmallestEncoding",CFStringGetSmallestEncoding,&_CFStringGetSmallestEncoding_1,&_CFStringGetSmallestEncoding_R};

	VPL_Parameter _CFStringCreateExternalRepresentation_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFStringCreateExternalRepresentation_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringCreateExternalRepresentation_3 = { kUnsignedType,4,NULL,0,0,&_CFStringCreateExternalRepresentation_4};
	VPL_Parameter _CFStringCreateExternalRepresentation_2 = { kPointerType,0,"__CFString",1,0,&_CFStringCreateExternalRepresentation_3};
	VPL_Parameter _CFStringCreateExternalRepresentation_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateExternalRepresentation_2};
	VPL_ExtProcedure _CFStringCreateExternalRepresentation_F = {"CFStringCreateExternalRepresentation",CFStringCreateExternalRepresentation,&_CFStringCreateExternalRepresentation_1,&_CFStringCreateExternalRepresentation_R};

	VPL_Parameter _CFStringCreateFromExternalRepresentation_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateFromExternalRepresentation_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringCreateFromExternalRepresentation_2 = { kPointerType,0,"__CFData",1,0,&_CFStringCreateFromExternalRepresentation_3};
	VPL_Parameter _CFStringCreateFromExternalRepresentation_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateFromExternalRepresentation_2};
	VPL_ExtProcedure _CFStringCreateFromExternalRepresentation_F = {"CFStringCreateFromExternalRepresentation",CFStringCreateFromExternalRepresentation,&_CFStringCreateFromExternalRepresentation_1,&_CFStringCreateFromExternalRepresentation_R};

	VPL_Parameter _CFStringCreateWithBytes_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithBytes_5 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringCreateWithBytes_4 = { kUnsignedType,4,NULL,0,0,&_CFStringCreateWithBytes_5};
	VPL_Parameter _CFStringCreateWithBytes_3 = { kIntType,4,NULL,0,0,&_CFStringCreateWithBytes_4};
	VPL_Parameter _CFStringCreateWithBytes_2 = { kPointerType,1,"unsigned char",1,0,&_CFStringCreateWithBytes_3};
	VPL_Parameter _CFStringCreateWithBytes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithBytes_2};
	VPL_ExtProcedure _CFStringCreateWithBytes_F = {"CFStringCreateWithBytes",CFStringCreateWithBytes,&_CFStringCreateWithBytes_1,&_CFStringCreateWithBytes_R};

	VPL_Parameter _CFStringGetBytes_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetBytes_8 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _CFStringGetBytes_7 = { kIntType,4,NULL,0,0,&_CFStringGetBytes_8};
	VPL_Parameter _CFStringGetBytes_6 = { kPointerType,1,"unsigned char",1,0,&_CFStringGetBytes_7};
	VPL_Parameter _CFStringGetBytes_5 = { kUnsignedType,1,NULL,0,0,&_CFStringGetBytes_6};
	VPL_Parameter _CFStringGetBytes_4 = { kUnsignedType,1,NULL,0,0,&_CFStringGetBytes_5};
	VPL_Parameter _CFStringGetBytes_3 = { kUnsignedType,4,NULL,0,0,&_CFStringGetBytes_4};
	VPL_Parameter _CFStringGetBytes_2 = { kStructureType,8,"CFRange",0,0,&_CFStringGetBytes_3};
	VPL_Parameter _CFStringGetBytes_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetBytes_2};
	VPL_ExtProcedure _CFStringGetBytes_F = {"CFStringGetBytes",CFStringGetBytes,&_CFStringGetBytes_1,&_CFStringGetBytes_R};

	VPL_Parameter _CFStringGetCharactersPtr_R = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_Parameter _CFStringGetCharactersPtr_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringGetCharactersPtr_F = {"CFStringGetCharactersPtr",CFStringGetCharactersPtr,&_CFStringGetCharactersPtr_1,&_CFStringGetCharactersPtr_R};

	VPL_Parameter _CFStringGetCStringPtr_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _CFStringGetCStringPtr_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetCStringPtr_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetCStringPtr_2};
	VPL_ExtProcedure _CFStringGetCStringPtr_F = {"CFStringGetCStringPtr",CFStringGetCStringPtr,&_CFStringGetCStringPtr_1,&_CFStringGetCStringPtr_R};

	VPL_Parameter _CFStringGetPascalStringPtr_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _CFStringGetPascalStringPtr_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetPascalStringPtr_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetPascalStringPtr_2};
	VPL_ExtProcedure _CFStringGetPascalStringPtr_F = {"CFStringGetPascalStringPtr",CFStringGetPascalStringPtr,&_CFStringGetPascalStringPtr_1,&_CFStringGetPascalStringPtr_R};

	VPL_Parameter _CFStringGetCString_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetCString_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetCString_3 = { kIntType,4,NULL,0,0,&_CFStringGetCString_4};
	VPL_Parameter _CFStringGetCString_2 = { kPointerType,1,"char",1,0,&_CFStringGetCString_3};
	VPL_Parameter _CFStringGetCString_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetCString_2};
	VPL_ExtProcedure _CFStringGetCString_F = {"CFStringGetCString",CFStringGetCString,&_CFStringGetCString_1,&_CFStringGetCString_R};

	VPL_Parameter _CFStringGetPascalString_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetPascalString_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetPascalString_3 = { kIntType,4,NULL,0,0,&_CFStringGetPascalString_4};
	VPL_Parameter _CFStringGetPascalString_2 = { kPointerType,1,"unsigned char",1,0,&_CFStringGetPascalString_3};
	VPL_Parameter _CFStringGetPascalString_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetPascalString_2};
	VPL_ExtProcedure _CFStringGetPascalString_F = {"CFStringGetPascalString",CFStringGetPascalString,&_CFStringGetPascalString_1,&_CFStringGetPascalString_R};

	VPL_Parameter _CFStringGetCharacters_3 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_Parameter _CFStringGetCharacters_2 = { kStructureType,8,"CFRange",0,0,&_CFStringGetCharacters_3};
	VPL_Parameter _CFStringGetCharacters_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetCharacters_2};
	VPL_ExtProcedure _CFStringGetCharacters_F = {"CFStringGetCharacters",CFStringGetCharacters,&_CFStringGetCharacters_1,NULL};

	VPL_Parameter _CFStringGetCharacterAtIndex_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetCharacterAtIndex_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetCharacterAtIndex_1 = { kPointerType,0,"__CFString",1,0,&_CFStringGetCharacterAtIndex_2};
	VPL_ExtProcedure _CFStringGetCharacterAtIndex_F = {"CFStringGetCharacterAtIndex",CFStringGetCharacterAtIndex,&_CFStringGetCharacterAtIndex_1,&_CFStringGetCharacterAtIndex_R};

	VPL_Parameter _CFStringGetLength_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringGetLength_1 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_ExtProcedure _CFStringGetLength_F = {"CFStringGetLength",CFStringGetLength,&_CFStringGetLength_1,&_CFStringGetLength_R};

	VPL_Parameter _CFStringCreateMutableWithExternalCharactersNoCopy_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateMutableWithExternalCharactersNoCopy_5 = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_Parameter _CFStringCreateMutableWithExternalCharactersNoCopy_4 = { kIntType,4,NULL,0,0,&_CFStringCreateMutableWithExternalCharactersNoCopy_5};
	VPL_Parameter _CFStringCreateMutableWithExternalCharactersNoCopy_3 = { kIntType,4,NULL,0,0,&_CFStringCreateMutableWithExternalCharactersNoCopy_4};
	VPL_Parameter _CFStringCreateMutableWithExternalCharactersNoCopy_2 = { kPointerType,2,"unsigned short",1,0,&_CFStringCreateMutableWithExternalCharactersNoCopy_3};
	VPL_Parameter _CFStringCreateMutableWithExternalCharactersNoCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateMutableWithExternalCharactersNoCopy_2};
	VPL_ExtProcedure _CFStringCreateMutableWithExternalCharactersNoCopy_F = {"CFStringCreateMutableWithExternalCharactersNoCopy",CFStringCreateMutableWithExternalCharactersNoCopy,&_CFStringCreateMutableWithExternalCharactersNoCopy_1,&_CFStringCreateMutableWithExternalCharactersNoCopy_R};

	VPL_Parameter _CFStringCreateMutableCopy_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateMutableCopy_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateMutableCopy_2 = { kIntType,4,NULL,0,0,&_CFStringCreateMutableCopy_3};
	VPL_Parameter _CFStringCreateMutableCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateMutableCopy_2};
	VPL_ExtProcedure _CFStringCreateMutableCopy_F = {"CFStringCreateMutableCopy",CFStringCreateMutableCopy,&_CFStringCreateMutableCopy_1,&_CFStringCreateMutableCopy_R};

	VPL_Parameter _CFStringCreateMutable_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateMutable_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringCreateMutable_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateMutable_2};
	VPL_ExtProcedure _CFStringCreateMutable_F = {"CFStringCreateMutable",CFStringCreateMutable,&_CFStringCreateMutable_1,&_CFStringCreateMutable_R};

	VPL_Parameter _CFStringCreateWithFormatAndArguments_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithFormatAndArguments_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _CFStringCreateWithFormatAndArguments_3 = { kPointerType,0,"__CFString",1,0,&_CFStringCreateWithFormatAndArguments_4};
	VPL_Parameter _CFStringCreateWithFormatAndArguments_2 = { kPointerType,0,"__CFDictionary",1,0,&_CFStringCreateWithFormatAndArguments_3};
	VPL_Parameter _CFStringCreateWithFormatAndArguments_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithFormatAndArguments_2};
	VPL_ExtProcedure _CFStringCreateWithFormatAndArguments_F = {"CFStringCreateWithFormatAndArguments",CFStringCreateWithFormatAndArguments,&_CFStringCreateWithFormatAndArguments_1,&_CFStringCreateWithFormatAndArguments_R};

	VPL_Parameter _CFStringCreateWithFormat_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithFormat_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithFormat_2 = { kPointerType,0,"__CFDictionary",1,0,&_CFStringCreateWithFormat_3};
	VPL_Parameter _CFStringCreateWithFormat_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithFormat_2};
	VPL_ExtProcedure _CFStringCreateWithFormat_F = {"CFStringCreateWithFormat",CFStringCreateWithFormat,&_CFStringCreateWithFormat_1,&_CFStringCreateWithFormat_R};

	VPL_Parameter _CFStringCreateCopy_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateCopy_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateCopy_2};
	VPL_ExtProcedure _CFStringCreateCopy_F = {"CFStringCreateCopy",CFStringCreateCopy,&_CFStringCreateCopy_1,&_CFStringCreateCopy_R};

	VPL_Parameter _CFStringCreateWithSubstring_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithSubstring_3 = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFStringCreateWithSubstring_2 = { kPointerType,0,"__CFString",1,0,&_CFStringCreateWithSubstring_3};
	VPL_Parameter _CFStringCreateWithSubstring_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithSubstring_2};
	VPL_ExtProcedure _CFStringCreateWithSubstring_F = {"CFStringCreateWithSubstring",CFStringCreateWithSubstring,&_CFStringCreateWithSubstring_1,&_CFStringCreateWithSubstring_R};

	VPL_Parameter _CFStringCreateWithCharactersNoCopy_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithCharactersNoCopy_4 = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_Parameter _CFStringCreateWithCharactersNoCopy_3 = { kIntType,4,NULL,0,0,&_CFStringCreateWithCharactersNoCopy_4};
	VPL_Parameter _CFStringCreateWithCharactersNoCopy_2 = { kPointerType,2,"unsigned short",1,0,&_CFStringCreateWithCharactersNoCopy_3};
	VPL_Parameter _CFStringCreateWithCharactersNoCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithCharactersNoCopy_2};
	VPL_ExtProcedure _CFStringCreateWithCharactersNoCopy_F = {"CFStringCreateWithCharactersNoCopy",CFStringCreateWithCharactersNoCopy,&_CFStringCreateWithCharactersNoCopy_1,&_CFStringCreateWithCharactersNoCopy_R};

	VPL_Parameter _CFStringCreateWithCStringNoCopy_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithCStringNoCopy_4 = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_Parameter _CFStringCreateWithCStringNoCopy_3 = { kUnsignedType,4,NULL,0,0,&_CFStringCreateWithCStringNoCopy_4};
	VPL_Parameter _CFStringCreateWithCStringNoCopy_2 = { kPointerType,1,"char",1,0,&_CFStringCreateWithCStringNoCopy_3};
	VPL_Parameter _CFStringCreateWithCStringNoCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithCStringNoCopy_2};
	VPL_ExtProcedure _CFStringCreateWithCStringNoCopy_F = {"CFStringCreateWithCStringNoCopy",CFStringCreateWithCStringNoCopy,&_CFStringCreateWithCStringNoCopy_1,&_CFStringCreateWithCStringNoCopy_R};

	VPL_Parameter _CFStringCreateWithPascalStringNoCopy_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithPascalStringNoCopy_4 = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_Parameter _CFStringCreateWithPascalStringNoCopy_3 = { kUnsignedType,4,NULL,0,0,&_CFStringCreateWithPascalStringNoCopy_4};
	VPL_Parameter _CFStringCreateWithPascalStringNoCopy_2 = { kPointerType,1,"unsigned char",1,0,&_CFStringCreateWithPascalStringNoCopy_3};
	VPL_Parameter _CFStringCreateWithPascalStringNoCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithPascalStringNoCopy_2};
	VPL_ExtProcedure _CFStringCreateWithPascalStringNoCopy_F = {"CFStringCreateWithPascalStringNoCopy",CFStringCreateWithPascalStringNoCopy,&_CFStringCreateWithPascalStringNoCopy_1,&_CFStringCreateWithPascalStringNoCopy_R};

	VPL_Parameter _CFStringCreateWithCharacters_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithCharacters_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringCreateWithCharacters_2 = { kPointerType,2,"unsigned short",1,0,&_CFStringCreateWithCharacters_3};
	VPL_Parameter _CFStringCreateWithCharacters_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithCharacters_2};
	VPL_ExtProcedure _CFStringCreateWithCharacters_F = {"CFStringCreateWithCharacters",CFStringCreateWithCharacters,&_CFStringCreateWithCharacters_1,&_CFStringCreateWithCharacters_R};

	VPL_Parameter _CFStringCreateWithCString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithCString_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringCreateWithCString_2 = { kPointerType,1,"char",1,0,&_CFStringCreateWithCString_3};
	VPL_Parameter _CFStringCreateWithCString_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithCString_2};
	VPL_ExtProcedure _CFStringCreateWithCString_F = {"CFStringCreateWithCString",CFStringCreateWithCString,&_CFStringCreateWithCString_1,&_CFStringCreateWithCString_R};

	VPL_Parameter _CFStringCreateWithPascalString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFStringCreateWithPascalString_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFStringCreateWithPascalString_2 = { kPointerType,1,"unsigned char",1,0,&_CFStringCreateWithPascalString_3};
	VPL_Parameter _CFStringCreateWithPascalString_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFStringCreateWithPascalString_2};
	VPL_ExtProcedure _CFStringCreateWithPascalString_F = {"CFStringCreateWithPascalString",CFStringCreateWithPascalString,&_CFStringCreateWithPascalString_1,&_CFStringCreateWithPascalString_R};

	VPL_Parameter _CFStringGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFStringGetTypeID_F = {"CFStringGetTypeID",CFStringGetTypeID,NULL,&_CFStringGetTypeID_R};

	VPL_Parameter _CFLocaleCopyDisplayNameForPropertyValue_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCopyDisplayNameForPropertyValue_3 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCopyDisplayNameForPropertyValue_2 = { kPointerType,0,"__CFString",1,0,&_CFLocaleCopyDisplayNameForPropertyValue_3};
	VPL_Parameter _CFLocaleCopyDisplayNameForPropertyValue_1 = { kPointerType,0,"__CFLocale",1,0,&_CFLocaleCopyDisplayNameForPropertyValue_2};
	VPL_ExtProcedure _CFLocaleCopyDisplayNameForPropertyValue_F = {"CFLocaleCopyDisplayNameForPropertyValue",CFLocaleCopyDisplayNameForPropertyValue,&_CFLocaleCopyDisplayNameForPropertyValue_1,&_CFLocaleCopyDisplayNameForPropertyValue_R};

	VPL_Parameter _CFLocaleGetValue_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFLocaleGetValue_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleGetValue_1 = { kPointerType,0,"__CFLocale",1,0,&_CFLocaleGetValue_2};
	VPL_ExtProcedure _CFLocaleGetValue_F = {"CFLocaleGetValue",CFLocaleGetValue,&_CFLocaleGetValue_1,&_CFLocaleGetValue_R};

	VPL_Parameter _CFLocaleGetIdentifier_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleGetIdentifier_1 = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_ExtProcedure _CFLocaleGetIdentifier_F = {"CFLocaleGetIdentifier",CFLocaleGetIdentifier,&_CFLocaleGetIdentifier_1,&_CFLocaleGetIdentifier_R};

	VPL_Parameter _CFLocaleCreateCopy_R = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_Parameter _CFLocaleCreateCopy_2 = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_Parameter _CFLocaleCreateCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFLocaleCreateCopy_2};
	VPL_ExtProcedure _CFLocaleCreateCopy_F = {"CFLocaleCreateCopy",CFLocaleCreateCopy,&_CFLocaleCreateCopy_1,&_CFLocaleCreateCopy_R};

	VPL_Parameter _CFLocaleCreate_R = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_Parameter _CFLocaleCreate_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFLocaleCreate_2};
	VPL_ExtProcedure _CFLocaleCreate_F = {"CFLocaleCreate",CFLocaleCreate,&_CFLocaleCreate_1,&_CFLocaleCreate_R};

	VPL_Parameter _CFLocaleCreateLocaleIdentifierFromComponents_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCreateLocaleIdentifierFromComponents_2 = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFLocaleCreateLocaleIdentifierFromComponents_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFLocaleCreateLocaleIdentifierFromComponents_2};
	VPL_ExtProcedure _CFLocaleCreateLocaleIdentifierFromComponents_F = {"CFLocaleCreateLocaleIdentifierFromComponents",CFLocaleCreateLocaleIdentifierFromComponents,&_CFLocaleCreateLocaleIdentifierFromComponents_1,&_CFLocaleCreateLocaleIdentifierFromComponents_R};

	VPL_Parameter _CFLocaleCreateComponentsFromLocaleIdentifier_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFLocaleCreateComponentsFromLocaleIdentifier_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCreateComponentsFromLocaleIdentifier_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFLocaleCreateComponentsFromLocaleIdentifier_2};
	VPL_ExtProcedure _CFLocaleCreateComponentsFromLocaleIdentifier_F = {"CFLocaleCreateComponentsFromLocaleIdentifier",CFLocaleCreateComponentsFromLocaleIdentifier,&_CFLocaleCreateComponentsFromLocaleIdentifier_1,&_CFLocaleCreateComponentsFromLocaleIdentifier_R};

	VPL_Parameter _CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_2 = { kIntType,2,NULL,0,0,&_CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_3};
	VPL_Parameter _CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_2};
	VPL_ExtProcedure _CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_F = {"CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes",CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes,&_CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_1,&_CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_R};

	VPL_Parameter _CFLocaleCreateCanonicalLocaleIdentifierFromString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCreateCanonicalLocaleIdentifierFromString_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCreateCanonicalLocaleIdentifierFromString_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFLocaleCreateCanonicalLocaleIdentifierFromString_2};
	VPL_ExtProcedure _CFLocaleCreateCanonicalLocaleIdentifierFromString_F = {"CFLocaleCreateCanonicalLocaleIdentifierFromString",CFLocaleCreateCanonicalLocaleIdentifierFromString,&_CFLocaleCreateCanonicalLocaleIdentifierFromString_1,&_CFLocaleCreateCanonicalLocaleIdentifierFromString_R};

	VPL_Parameter _CFLocaleCreateCanonicalLanguageIdentifierFromString_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCreateCanonicalLanguageIdentifierFromString_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFLocaleCreateCanonicalLanguageIdentifierFromString_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFLocaleCreateCanonicalLanguageIdentifierFromString_2};
	VPL_ExtProcedure _CFLocaleCreateCanonicalLanguageIdentifierFromString_F = {"CFLocaleCreateCanonicalLanguageIdentifierFromString",CFLocaleCreateCanonicalLanguageIdentifierFromString,&_CFLocaleCreateCanonicalLanguageIdentifierFromString_1,&_CFLocaleCreateCanonicalLanguageIdentifierFromString_R};

	VPL_Parameter _CFLocaleCopyISOCurrencyCodes_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _CFLocaleCopyISOCurrencyCodes_F = {"CFLocaleCopyISOCurrencyCodes",CFLocaleCopyISOCurrencyCodes,NULL,&_CFLocaleCopyISOCurrencyCodes_R};

	VPL_Parameter _CFLocaleCopyISOCountryCodes_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _CFLocaleCopyISOCountryCodes_F = {"CFLocaleCopyISOCountryCodes",CFLocaleCopyISOCountryCodes,NULL,&_CFLocaleCopyISOCountryCodes_R};

	VPL_Parameter _CFLocaleCopyISOLanguageCodes_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _CFLocaleCopyISOLanguageCodes_F = {"CFLocaleCopyISOLanguageCodes",CFLocaleCopyISOLanguageCodes,NULL,&_CFLocaleCopyISOLanguageCodes_R};

	VPL_Parameter _CFLocaleCopyAvailableLocaleIdentifiers_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _CFLocaleCopyAvailableLocaleIdentifiers_F = {"CFLocaleCopyAvailableLocaleIdentifiers",CFLocaleCopyAvailableLocaleIdentifiers,NULL,&_CFLocaleCopyAvailableLocaleIdentifiers_R};

	VPL_Parameter _CFLocaleCopyCurrent_R = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_ExtProcedure _CFLocaleCopyCurrent_F = {"CFLocaleCopyCurrent",CFLocaleCopyCurrent,NULL,&_CFLocaleCopyCurrent_R};

	VPL_Parameter _CFLocaleGetSystem_R = { kPointerType,0,"__CFLocale",1,0,NULL};
	VPL_ExtProcedure _CFLocaleGetSystem_F = {"CFLocaleGetSystem",CFLocaleGetSystem,NULL,&_CFLocaleGetSystem_R};

	VPL_Parameter _CFLocaleGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFLocaleGetTypeID_F = {"CFLocaleGetTypeID",CFLocaleGetTypeID,NULL,&_CFLocaleGetTypeID_R};

	VPL_Parameter _CFCharacterSetInvert_1 = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_ExtProcedure _CFCharacterSetInvert_F = {"CFCharacterSetInvert",CFCharacterSetInvert,&_CFCharacterSetInvert_1,NULL};

	VPL_Parameter _CFCharacterSetIntersect_2 = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetIntersect_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetIntersect_2};
	VPL_ExtProcedure _CFCharacterSetIntersect_F = {"CFCharacterSetIntersect",CFCharacterSetIntersect,&_CFCharacterSetIntersect_1,NULL};

	VPL_Parameter _CFCharacterSetUnion_2 = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetUnion_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetUnion_2};
	VPL_ExtProcedure _CFCharacterSetUnion_F = {"CFCharacterSetUnion",CFCharacterSetUnion,&_CFCharacterSetUnion_1,NULL};

	VPL_Parameter _CFCharacterSetRemoveCharactersInString_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFCharacterSetRemoveCharactersInString_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetRemoveCharactersInString_2};
	VPL_ExtProcedure _CFCharacterSetRemoveCharactersInString_F = {"CFCharacterSetRemoveCharactersInString",CFCharacterSetRemoveCharactersInString,&_CFCharacterSetRemoveCharactersInString_1,NULL};

	VPL_Parameter _CFCharacterSetAddCharactersInString_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFCharacterSetAddCharactersInString_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetAddCharactersInString_2};
	VPL_ExtProcedure _CFCharacterSetAddCharactersInString_F = {"CFCharacterSetAddCharactersInString",CFCharacterSetAddCharactersInString,&_CFCharacterSetAddCharactersInString_1,NULL};

	VPL_Parameter _CFCharacterSetRemoveCharactersInRange_2 = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFCharacterSetRemoveCharactersInRange_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetRemoveCharactersInRange_2};
	VPL_ExtProcedure _CFCharacterSetRemoveCharactersInRange_F = {"CFCharacterSetRemoveCharactersInRange",CFCharacterSetRemoveCharactersInRange,&_CFCharacterSetRemoveCharactersInRange_1,NULL};

	VPL_Parameter _CFCharacterSetAddCharactersInRange_2 = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFCharacterSetAddCharactersInRange_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetAddCharactersInRange_2};
	VPL_ExtProcedure _CFCharacterSetAddCharactersInRange_F = {"CFCharacterSetAddCharactersInRange",CFCharacterSetAddCharactersInRange,&_CFCharacterSetAddCharactersInRange_1,NULL};

	VPL_Parameter _CFCharacterSetCreateBitmapRepresentation_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateBitmapRepresentation_2 = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateBitmapRepresentation_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFCharacterSetCreateBitmapRepresentation_2};
	VPL_ExtProcedure _CFCharacterSetCreateBitmapRepresentation_F = {"CFCharacterSetCreateBitmapRepresentation",CFCharacterSetCreateBitmapRepresentation,&_CFCharacterSetCreateBitmapRepresentation_1,&_CFCharacterSetCreateBitmapRepresentation_R};

	VPL_Parameter _CFCharacterSetIsLongCharacterMember_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFCharacterSetIsLongCharacterMember_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFCharacterSetIsLongCharacterMember_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetIsLongCharacterMember_2};
	VPL_ExtProcedure _CFCharacterSetIsLongCharacterMember_F = {"CFCharacterSetIsLongCharacterMember",CFCharacterSetIsLongCharacterMember,&_CFCharacterSetIsLongCharacterMember_1,&_CFCharacterSetIsLongCharacterMember_R};

	VPL_Parameter _CFCharacterSetIsCharacterMember_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFCharacterSetIsCharacterMember_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _CFCharacterSetIsCharacterMember_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetIsCharacterMember_2};
	VPL_ExtProcedure _CFCharacterSetIsCharacterMember_F = {"CFCharacterSetIsCharacterMember",CFCharacterSetIsCharacterMember,&_CFCharacterSetIsCharacterMember_1,&_CFCharacterSetIsCharacterMember_R};

	VPL_Parameter _CFCharacterSetCreateMutableCopy_R = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateMutableCopy_2 = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateMutableCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFCharacterSetCreateMutableCopy_2};
	VPL_ExtProcedure _CFCharacterSetCreateMutableCopy_F = {"CFCharacterSetCreateMutableCopy",CFCharacterSetCreateMutableCopy,&_CFCharacterSetCreateMutableCopy_1,&_CFCharacterSetCreateMutableCopy_R};

	VPL_Parameter _CFCharacterSetCreateCopy_R = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateCopy_2 = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFCharacterSetCreateCopy_2};
	VPL_ExtProcedure _CFCharacterSetCreateCopy_F = {"CFCharacterSetCreateCopy",CFCharacterSetCreateCopy,&_CFCharacterSetCreateCopy_1,&_CFCharacterSetCreateCopy_R};

	VPL_Parameter _CFCharacterSetCreateMutable_R = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateMutable_1 = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_ExtProcedure _CFCharacterSetCreateMutable_F = {"CFCharacterSetCreateMutable",CFCharacterSetCreateMutable,&_CFCharacterSetCreateMutable_1,&_CFCharacterSetCreateMutable_R};

	VPL_Parameter _CFCharacterSetHasMemberInPlane_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFCharacterSetHasMemberInPlane_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFCharacterSetHasMemberInPlane_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetHasMemberInPlane_2};
	VPL_ExtProcedure _CFCharacterSetHasMemberInPlane_F = {"CFCharacterSetHasMemberInPlane",CFCharacterSetHasMemberInPlane,&_CFCharacterSetHasMemberInPlane_1,&_CFCharacterSetHasMemberInPlane_R};

	VPL_Parameter _CFCharacterSetIsSupersetOfSet_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFCharacterSetIsSupersetOfSet_2 = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetIsSupersetOfSet_1 = { kPointerType,0,"__CFCharacterSet",1,0,&_CFCharacterSetIsSupersetOfSet_2};
	VPL_ExtProcedure _CFCharacterSetIsSupersetOfSet_F = {"CFCharacterSetIsSupersetOfSet",CFCharacterSetIsSupersetOfSet,&_CFCharacterSetIsSupersetOfSet_1,&_CFCharacterSetIsSupersetOfSet_R};

	VPL_Parameter _CFCharacterSetCreateInvertedSet_R = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateInvertedSet_2 = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateInvertedSet_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFCharacterSetCreateInvertedSet_2};
	VPL_ExtProcedure _CFCharacterSetCreateInvertedSet_F = {"CFCharacterSetCreateInvertedSet",CFCharacterSetCreateInvertedSet,&_CFCharacterSetCreateInvertedSet_1,&_CFCharacterSetCreateInvertedSet_R};

	VPL_Parameter _CFCharacterSetCreateWithBitmapRepresentation_R = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateWithBitmapRepresentation_2 = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateWithBitmapRepresentation_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFCharacterSetCreateWithBitmapRepresentation_2};
	VPL_ExtProcedure _CFCharacterSetCreateWithBitmapRepresentation_F = {"CFCharacterSetCreateWithBitmapRepresentation",CFCharacterSetCreateWithBitmapRepresentation,&_CFCharacterSetCreateWithBitmapRepresentation_1,&_CFCharacterSetCreateWithBitmapRepresentation_R};

	VPL_Parameter _CFCharacterSetCreateWithCharactersInString_R = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateWithCharactersInString_2 = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateWithCharactersInString_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFCharacterSetCreateWithCharactersInString_2};
	VPL_ExtProcedure _CFCharacterSetCreateWithCharactersInString_F = {"CFCharacterSetCreateWithCharactersInString",CFCharacterSetCreateWithCharactersInString,&_CFCharacterSetCreateWithCharactersInString_1,&_CFCharacterSetCreateWithCharactersInString_R};

	VPL_Parameter _CFCharacterSetCreateWithCharactersInRange_R = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetCreateWithCharactersInRange_2 = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFCharacterSetCreateWithCharactersInRange_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFCharacterSetCreateWithCharactersInRange_2};
	VPL_ExtProcedure _CFCharacterSetCreateWithCharactersInRange_F = {"CFCharacterSetCreateWithCharactersInRange",CFCharacterSetCreateWithCharactersInRange,&_CFCharacterSetCreateWithCharactersInRange_1,&_CFCharacterSetCreateWithCharactersInRange_R};

	VPL_Parameter _CFCharacterSetGetPredefined_R = { kPointerType,0,"__CFCharacterSet",1,0,NULL};
	VPL_Parameter _CFCharacterSetGetPredefined_1 = { kEnumType,4,"57",0,0,NULL};
	VPL_ExtProcedure _CFCharacterSetGetPredefined_F = {"CFCharacterSetGetPredefined",CFCharacterSetGetPredefined,&_CFCharacterSetGetPredefined_1,&_CFCharacterSetGetPredefined_R};

	VPL_Parameter _CFCharacterSetGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFCharacterSetGetTypeID_F = {"CFCharacterSetGetTypeID",CFCharacterSetGetTypeID,NULL,&_CFCharacterSetGetTypeID_R};

	VPL_Parameter _CFDataDeleteBytes_2 = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFDataDeleteBytes_1 = { kPointerType,0,"__CFData",1,0,&_CFDataDeleteBytes_2};
	VPL_ExtProcedure _CFDataDeleteBytes_F = {"CFDataDeleteBytes",CFDataDeleteBytes,&_CFDataDeleteBytes_1,NULL};

	VPL_Parameter _CFDataReplaceBytes_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDataReplaceBytes_3 = { kPointerType,1,"unsigned char",1,0,&_CFDataReplaceBytes_4};
	VPL_Parameter _CFDataReplaceBytes_2 = { kStructureType,8,"CFRange",0,0,&_CFDataReplaceBytes_3};
	VPL_Parameter _CFDataReplaceBytes_1 = { kPointerType,0,"__CFData",1,0,&_CFDataReplaceBytes_2};
	VPL_ExtProcedure _CFDataReplaceBytes_F = {"CFDataReplaceBytes",CFDataReplaceBytes,&_CFDataReplaceBytes_1,NULL};

	VPL_Parameter _CFDataAppendBytes_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDataAppendBytes_2 = { kPointerType,1,"unsigned char",1,0,&_CFDataAppendBytes_3};
	VPL_Parameter _CFDataAppendBytes_1 = { kPointerType,0,"__CFData",1,0,&_CFDataAppendBytes_2};
	VPL_ExtProcedure _CFDataAppendBytes_F = {"CFDataAppendBytes",CFDataAppendBytes,&_CFDataAppendBytes_1,NULL};

	VPL_Parameter _CFDataIncreaseLength_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDataIncreaseLength_1 = { kPointerType,0,"__CFData",1,0,&_CFDataIncreaseLength_2};
	VPL_ExtProcedure _CFDataIncreaseLength_F = {"CFDataIncreaseLength",CFDataIncreaseLength,&_CFDataIncreaseLength_1,NULL};

	VPL_Parameter _CFDataSetLength_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDataSetLength_1 = { kPointerType,0,"__CFData",1,0,&_CFDataSetLength_2};
	VPL_ExtProcedure _CFDataSetLength_F = {"CFDataSetLength",CFDataSetLength,&_CFDataSetLength_1,NULL};

	VPL_Parameter _CFDataGetBytes_3 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _CFDataGetBytes_2 = { kStructureType,8,"CFRange",0,0,&_CFDataGetBytes_3};
	VPL_Parameter _CFDataGetBytes_1 = { kPointerType,0,"__CFData",1,0,&_CFDataGetBytes_2};
	VPL_ExtProcedure _CFDataGetBytes_F = {"CFDataGetBytes",CFDataGetBytes,&_CFDataGetBytes_1,NULL};

	VPL_Parameter _CFDataGetMutableBytePtr_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _CFDataGetMutableBytePtr_1 = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_ExtProcedure _CFDataGetMutableBytePtr_F = {"CFDataGetMutableBytePtr",CFDataGetMutableBytePtr,&_CFDataGetMutableBytePtr_1,&_CFDataGetMutableBytePtr_R};

	VPL_Parameter _CFDataGetBytePtr_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _CFDataGetBytePtr_1 = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_ExtProcedure _CFDataGetBytePtr_F = {"CFDataGetBytePtr",CFDataGetBytePtr,&_CFDataGetBytePtr_1,&_CFDataGetBytePtr_R};

	VPL_Parameter _CFDataGetLength_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDataGetLength_1 = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_ExtProcedure _CFDataGetLength_F = {"CFDataGetLength",CFDataGetLength,&_CFDataGetLength_1,&_CFDataGetLength_R};

	VPL_Parameter _CFDataCreateMutableCopy_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFDataCreateMutableCopy_3 = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFDataCreateMutableCopy_2 = { kIntType,4,NULL,0,0,&_CFDataCreateMutableCopy_3};
	VPL_Parameter _CFDataCreateMutableCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDataCreateMutableCopy_2};
	VPL_ExtProcedure _CFDataCreateMutableCopy_F = {"CFDataCreateMutableCopy",CFDataCreateMutableCopy,&_CFDataCreateMutableCopy_1,&_CFDataCreateMutableCopy_R};

	VPL_Parameter _CFDataCreateMutable_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFDataCreateMutable_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDataCreateMutable_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDataCreateMutable_2};
	VPL_ExtProcedure _CFDataCreateMutable_F = {"CFDataCreateMutable",CFDataCreateMutable,&_CFDataCreateMutable_1,&_CFDataCreateMutable_R};

	VPL_Parameter _CFDataCreateCopy_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFDataCreateCopy_2 = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFDataCreateCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDataCreateCopy_2};
	VPL_ExtProcedure _CFDataCreateCopy_F = {"CFDataCreateCopy",CFDataCreateCopy,&_CFDataCreateCopy_1,&_CFDataCreateCopy_R};

	VPL_Parameter _CFDataCreateWithBytesNoCopy_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFDataCreateWithBytesNoCopy_4 = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_Parameter _CFDataCreateWithBytesNoCopy_3 = { kIntType,4,NULL,0,0,&_CFDataCreateWithBytesNoCopy_4};
	VPL_Parameter _CFDataCreateWithBytesNoCopy_2 = { kPointerType,1,"unsigned char",1,0,&_CFDataCreateWithBytesNoCopy_3};
	VPL_Parameter _CFDataCreateWithBytesNoCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDataCreateWithBytesNoCopy_2};
	VPL_ExtProcedure _CFDataCreateWithBytesNoCopy_F = {"CFDataCreateWithBytesNoCopy",CFDataCreateWithBytesNoCopy,&_CFDataCreateWithBytesNoCopy_1,&_CFDataCreateWithBytesNoCopy_R};

	VPL_Parameter _CFDataCreate_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _CFDataCreate_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDataCreate_2 = { kPointerType,1,"unsigned char",1,0,&_CFDataCreate_3};
	VPL_Parameter _CFDataCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDataCreate_2};
	VPL_ExtProcedure _CFDataCreate_F = {"CFDataCreate",CFDataCreate,&_CFDataCreate_1,&_CFDataCreate_R};

	VPL_Parameter _CFDataGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFDataGetTypeID_F = {"CFDataGetTypeID",CFDataGetTypeID,NULL,&_CFDataGetTypeID_R};

	VPL_Parameter _CFAbsoluteTimeGetWeekOfYear_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetWeekOfYear_2 = { kPointerType,0,"__CFTimeZone",1,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetWeekOfYear_1 = { kFloatType,8,NULL,0,0,&_CFAbsoluteTimeGetWeekOfYear_2};
	VPL_ExtProcedure _CFAbsoluteTimeGetWeekOfYear_F = {"CFAbsoluteTimeGetWeekOfYear",CFAbsoluteTimeGetWeekOfYear,&_CFAbsoluteTimeGetWeekOfYear_1,&_CFAbsoluteTimeGetWeekOfYear_R};

	VPL_Parameter _CFAbsoluteTimeGetDayOfYear_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetDayOfYear_2 = { kPointerType,0,"__CFTimeZone",1,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetDayOfYear_1 = { kFloatType,8,NULL,0,0,&_CFAbsoluteTimeGetDayOfYear_2};
	VPL_ExtProcedure _CFAbsoluteTimeGetDayOfYear_F = {"CFAbsoluteTimeGetDayOfYear",CFAbsoluteTimeGetDayOfYear,&_CFAbsoluteTimeGetDayOfYear_1,&_CFAbsoluteTimeGetDayOfYear_R};

	VPL_Parameter _CFAbsoluteTimeGetDayOfWeek_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetDayOfWeek_2 = { kPointerType,0,"__CFTimeZone",1,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetDayOfWeek_1 = { kFloatType,8,NULL,0,0,&_CFAbsoluteTimeGetDayOfWeek_2};
	VPL_ExtProcedure _CFAbsoluteTimeGetDayOfWeek_F = {"CFAbsoluteTimeGetDayOfWeek",CFAbsoluteTimeGetDayOfWeek,&_CFAbsoluteTimeGetDayOfWeek_1,&_CFAbsoluteTimeGetDayOfWeek_R};

	VPL_Parameter _CFAbsoluteTimeGetDifferenceAsGregorianUnits_R = { kStructureType,28,"CFGregorianUnits",0,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetDifferenceAsGregorianUnits_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetDifferenceAsGregorianUnits_3 = { kPointerType,0,"__CFTimeZone",1,0,&_CFAbsoluteTimeGetDifferenceAsGregorianUnits_4};
	VPL_Parameter _CFAbsoluteTimeGetDifferenceAsGregorianUnits_2 = { kFloatType,8,NULL,0,0,&_CFAbsoluteTimeGetDifferenceAsGregorianUnits_3};
	VPL_Parameter _CFAbsoluteTimeGetDifferenceAsGregorianUnits_1 = { kFloatType,8,NULL,0,0,&_CFAbsoluteTimeGetDifferenceAsGregorianUnits_2};
	VPL_ExtProcedure _CFAbsoluteTimeGetDifferenceAsGregorianUnits_F = {"CFAbsoluteTimeGetDifferenceAsGregorianUnits",CFAbsoluteTimeGetDifferenceAsGregorianUnits,&_CFAbsoluteTimeGetDifferenceAsGregorianUnits_1,&_CFAbsoluteTimeGetDifferenceAsGregorianUnits_R};

	VPL_Parameter _CFAbsoluteTimeAddGregorianUnits_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFAbsoluteTimeAddGregorianUnits_3 = { kStructureType,28,"CFGregorianUnits",0,0,NULL};
	VPL_Parameter _CFAbsoluteTimeAddGregorianUnits_2 = { kPointerType,0,"__CFTimeZone",1,0,&_CFAbsoluteTimeAddGregorianUnits_3};
	VPL_Parameter _CFAbsoluteTimeAddGregorianUnits_1 = { kFloatType,8,NULL,0,0,&_CFAbsoluteTimeAddGregorianUnits_2};
	VPL_ExtProcedure _CFAbsoluteTimeAddGregorianUnits_F = {"CFAbsoluteTimeAddGregorianUnits",CFAbsoluteTimeAddGregorianUnits,&_CFAbsoluteTimeAddGregorianUnits_1,&_CFAbsoluteTimeAddGregorianUnits_R};

	VPL_Parameter _CFAbsoluteTimeGetGregorianDate_R = { kStructureType,28,"CFGregorianDate",0,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetGregorianDate_2 = { kPointerType,0,"__CFTimeZone",1,0,NULL};
	VPL_Parameter _CFAbsoluteTimeGetGregorianDate_1 = { kFloatType,8,NULL,0,0,&_CFAbsoluteTimeGetGregorianDate_2};
	VPL_ExtProcedure _CFAbsoluteTimeGetGregorianDate_F = {"CFAbsoluteTimeGetGregorianDate",CFAbsoluteTimeGetGregorianDate,&_CFAbsoluteTimeGetGregorianDate_1,&_CFAbsoluteTimeGetGregorianDate_R};

	VPL_Parameter _CFGregorianDateGetAbsoluteTime_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFGregorianDateGetAbsoluteTime_2 = { kPointerType,0,"__CFTimeZone",1,0,NULL};
	VPL_Parameter _CFGregorianDateGetAbsoluteTime_1 = { kStructureType,28,"CFGregorianDate",0,0,&_CFGregorianDateGetAbsoluteTime_2};
	VPL_ExtProcedure _CFGregorianDateGetAbsoluteTime_F = {"CFGregorianDateGetAbsoluteTime",CFGregorianDateGetAbsoluteTime,&_CFGregorianDateGetAbsoluteTime_1,&_CFGregorianDateGetAbsoluteTime_R};

	VPL_Parameter _CFGregorianDateIsValid_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFGregorianDateIsValid_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFGregorianDateIsValid_1 = { kStructureType,28,"CFGregorianDate",0,0,&_CFGregorianDateIsValid_2};
	VPL_ExtProcedure _CFGregorianDateIsValid_F = {"CFGregorianDateIsValid",CFGregorianDateIsValid,&_CFGregorianDateIsValid_1,&_CFGregorianDateIsValid_R};

	VPL_Parameter _CFDateCompare_R = { kEnumType,4,"47",0,0,NULL};
	VPL_Parameter _CFDateCompare_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDateCompare_2 = { kPointerType,0,"__CFDate",1,0,&_CFDateCompare_3};
	VPL_Parameter _CFDateCompare_1 = { kPointerType,0,"__CFDate",1,0,&_CFDateCompare_2};
	VPL_ExtProcedure _CFDateCompare_F = {"CFDateCompare",CFDateCompare,&_CFDateCompare_1,&_CFDateCompare_R};

	VPL_Parameter _CFDateGetTimeIntervalSinceDate_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFDateGetTimeIntervalSinceDate_2 = { kPointerType,0,"__CFDate",1,0,NULL};
	VPL_Parameter _CFDateGetTimeIntervalSinceDate_1 = { kPointerType,0,"__CFDate",1,0,&_CFDateGetTimeIntervalSinceDate_2};
	VPL_ExtProcedure _CFDateGetTimeIntervalSinceDate_F = {"CFDateGetTimeIntervalSinceDate",CFDateGetTimeIntervalSinceDate,&_CFDateGetTimeIntervalSinceDate_1,&_CFDateGetTimeIntervalSinceDate_R};

	VPL_Parameter _CFDateGetAbsoluteTime_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFDateGetAbsoluteTime_1 = { kPointerType,0,"__CFDate",1,0,NULL};
	VPL_ExtProcedure _CFDateGetAbsoluteTime_F = {"CFDateGetAbsoluteTime",CFDateGetAbsoluteTime,&_CFDateGetAbsoluteTime_1,&_CFDateGetAbsoluteTime_R};

	VPL_Parameter _CFDateCreate_R = { kPointerType,0,"__CFDate",1,0,NULL};
	VPL_Parameter _CFDateCreate_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _CFDateCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDateCreate_2};
	VPL_ExtProcedure _CFDateCreate_F = {"CFDateCreate",CFDateCreate,&_CFDateCreate_1,&_CFDateCreate_R};

	VPL_Parameter _CFDateGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFDateGetTypeID_F = {"CFDateGetTypeID",CFDateGetTypeID,NULL,&_CFDateGetTypeID_R};

	VPL_Parameter _CFAbsoluteTimeGetCurrent_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _CFAbsoluteTimeGetCurrent_F = {"CFAbsoluteTimeGetCurrent",CFAbsoluteTimeGetCurrent,NULL,&_CFAbsoluteTimeGetCurrent_R};

	VPL_Parameter _CFArrayAppendArray_3 = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter _CFArrayAppendArray_2 = { kPointerType,0,"__CFArray",1,0,&_CFArrayAppendArray_3};
	VPL_Parameter _CFArrayAppendArray_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayAppendArray_2};
	VPL_ExtProcedure _CFArrayAppendArray_F = {"CFArrayAppendArray",CFArrayAppendArray,&_CFArrayAppendArray_1,NULL};

	VPL_Parameter _CFArraySortValues_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArraySortValues_3 = { kPointerType,4,"int",1,0,&_CFArraySortValues_4};
	VPL_Parameter _CFArraySortValues_2 = { kStructureType,8,"CFRange",0,0,&_CFArraySortValues_3};
	VPL_Parameter _CFArraySortValues_1 = { kPointerType,0,"__CFArray",1,0,&_CFArraySortValues_2};
	VPL_ExtProcedure _CFArraySortValues_F = {"CFArraySortValues",CFArraySortValues,&_CFArraySortValues_1,NULL};

	VPL_Parameter _CFArrayExchangeValuesAtIndices_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayExchangeValuesAtIndices_2 = { kIntType,4,NULL,0,0,&_CFArrayExchangeValuesAtIndices_3};
	VPL_Parameter _CFArrayExchangeValuesAtIndices_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayExchangeValuesAtIndices_2};
	VPL_ExtProcedure _CFArrayExchangeValuesAtIndices_F = {"CFArrayExchangeValuesAtIndices",CFArrayExchangeValuesAtIndices,&_CFArrayExchangeValuesAtIndices_1,NULL};

	VPL_Parameter _CFArrayReplaceValues_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayReplaceValues_3 = { kPointerType,0,"void",2,0,&_CFArrayReplaceValues_4};
	VPL_Parameter _CFArrayReplaceValues_2 = { kStructureType,8,"CFRange",0,0,&_CFArrayReplaceValues_3};
	VPL_Parameter _CFArrayReplaceValues_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayReplaceValues_2};
	VPL_ExtProcedure _CFArrayReplaceValues_F = {"CFArrayReplaceValues",CFArrayReplaceValues,&_CFArrayReplaceValues_1,NULL};

	VPL_Parameter _CFArrayRemoveAllValues_1 = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _CFArrayRemoveAllValues_F = {"CFArrayRemoveAllValues",CFArrayRemoveAllValues,&_CFArrayRemoveAllValues_1,NULL};

	VPL_Parameter _CFArrayRemoveValueAtIndex_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayRemoveValueAtIndex_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayRemoveValueAtIndex_2};
	VPL_ExtProcedure _CFArrayRemoveValueAtIndex_F = {"CFArrayRemoveValueAtIndex",CFArrayRemoveValueAtIndex,&_CFArrayRemoveValueAtIndex_1,NULL};

	VPL_Parameter _CFArraySetValueAtIndex_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArraySetValueAtIndex_2 = { kIntType,4,NULL,0,0,&_CFArraySetValueAtIndex_3};
	VPL_Parameter _CFArraySetValueAtIndex_1 = { kPointerType,0,"__CFArray",1,0,&_CFArraySetValueAtIndex_2};
	VPL_ExtProcedure _CFArraySetValueAtIndex_F = {"CFArraySetValueAtIndex",CFArraySetValueAtIndex,&_CFArraySetValueAtIndex_1,NULL};

	VPL_Parameter _CFArrayInsertValueAtIndex_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayInsertValueAtIndex_2 = { kIntType,4,NULL,0,0,&_CFArrayInsertValueAtIndex_3};
	VPL_Parameter _CFArrayInsertValueAtIndex_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayInsertValueAtIndex_2};
	VPL_ExtProcedure _CFArrayInsertValueAtIndex_F = {"CFArrayInsertValueAtIndex",CFArrayInsertValueAtIndex,&_CFArrayInsertValueAtIndex_1,NULL};

	VPL_Parameter _CFArrayAppendValue_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayAppendValue_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayAppendValue_2};
	VPL_ExtProcedure _CFArrayAppendValue_F = {"CFArrayAppendValue",CFArrayAppendValue,&_CFArrayAppendValue_1,NULL};

	VPL_Parameter _CFArrayBSearchValues_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayBSearchValues_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayBSearchValues_4 = { kPointerType,4,"int",1,0,&_CFArrayBSearchValues_5};
	VPL_Parameter _CFArrayBSearchValues_3 = { kPointerType,0,"void",1,0,&_CFArrayBSearchValues_4};
	VPL_Parameter _CFArrayBSearchValues_2 = { kStructureType,8,"CFRange",0,0,&_CFArrayBSearchValues_3};
	VPL_Parameter _CFArrayBSearchValues_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayBSearchValues_2};
	VPL_ExtProcedure _CFArrayBSearchValues_F = {"CFArrayBSearchValues",CFArrayBSearchValues,&_CFArrayBSearchValues_1,&_CFArrayBSearchValues_R};

	VPL_Parameter _CFArrayGetLastIndexOfValue_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayGetLastIndexOfValue_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayGetLastIndexOfValue_2 = { kStructureType,8,"CFRange",0,0,&_CFArrayGetLastIndexOfValue_3};
	VPL_Parameter _CFArrayGetLastIndexOfValue_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayGetLastIndexOfValue_2};
	VPL_ExtProcedure _CFArrayGetLastIndexOfValue_F = {"CFArrayGetLastIndexOfValue",CFArrayGetLastIndexOfValue,&_CFArrayGetLastIndexOfValue_1,&_CFArrayGetLastIndexOfValue_R};

	VPL_Parameter _CFArrayGetFirstIndexOfValue_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayGetFirstIndexOfValue_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayGetFirstIndexOfValue_2 = { kStructureType,8,"CFRange",0,0,&_CFArrayGetFirstIndexOfValue_3};
	VPL_Parameter _CFArrayGetFirstIndexOfValue_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayGetFirstIndexOfValue_2};
	VPL_ExtProcedure _CFArrayGetFirstIndexOfValue_F = {"CFArrayGetFirstIndexOfValue",CFArrayGetFirstIndexOfValue,&_CFArrayGetFirstIndexOfValue_1,&_CFArrayGetFirstIndexOfValue_R};

	VPL_Parameter _CFArrayApplyFunction_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayApplyFunction_3 = { kPointerType,0,"void",1,0,&_CFArrayApplyFunction_4};
	VPL_Parameter _CFArrayApplyFunction_2 = { kStructureType,8,"CFRange",0,0,&_CFArrayApplyFunction_3};
	VPL_Parameter _CFArrayApplyFunction_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayApplyFunction_2};
	VPL_ExtProcedure _CFArrayApplyFunction_F = {"CFArrayApplyFunction",CFArrayApplyFunction,&_CFArrayApplyFunction_1,NULL};

	VPL_Parameter _CFArrayGetValues_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _CFArrayGetValues_2 = { kStructureType,8,"CFRange",0,0,&_CFArrayGetValues_3};
	VPL_Parameter _CFArrayGetValues_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayGetValues_2};
	VPL_ExtProcedure _CFArrayGetValues_F = {"CFArrayGetValues",CFArrayGetValues,&_CFArrayGetValues_1,NULL};

	VPL_Parameter _CFArrayGetValueAtIndex_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayGetValueAtIndex_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayGetValueAtIndex_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayGetValueAtIndex_2};
	VPL_ExtProcedure _CFArrayGetValueAtIndex_F = {"CFArrayGetValueAtIndex",CFArrayGetValueAtIndex,&_CFArrayGetValueAtIndex_1,&_CFArrayGetValueAtIndex_R};

	VPL_Parameter _CFArrayContainsValue_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFArrayContainsValue_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayContainsValue_2 = { kStructureType,8,"CFRange",0,0,&_CFArrayContainsValue_3};
	VPL_Parameter _CFArrayContainsValue_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayContainsValue_2};
	VPL_ExtProcedure _CFArrayContainsValue_F = {"CFArrayContainsValue",CFArrayContainsValue,&_CFArrayContainsValue_1,&_CFArrayContainsValue_R};

	VPL_Parameter _CFArrayGetCountOfValue_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayGetCountOfValue_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFArrayGetCountOfValue_2 = { kStructureType,8,"CFRange",0,0,&_CFArrayGetCountOfValue_3};
	VPL_Parameter _CFArrayGetCountOfValue_1 = { kPointerType,0,"__CFArray",1,0,&_CFArrayGetCountOfValue_2};
	VPL_ExtProcedure _CFArrayGetCountOfValue_F = {"CFArrayGetCountOfValue",CFArrayGetCountOfValue,&_CFArrayGetCountOfValue_1,&_CFArrayGetCountOfValue_R};

	VPL_Parameter _CFArrayGetCount_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFArrayGetCount_1 = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_ExtProcedure _CFArrayGetCount_F = {"CFArrayGetCount",CFArrayGetCount,&_CFArrayGetCount_1,&_CFArrayGetCount_R};

	VPL_Parameter _CFArrayCreateMutableCopy_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFArrayCreateMutableCopy_3 = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFArrayCreateMutableCopy_2 = { kIntType,4,NULL,0,0,&_CFArrayCreateMutableCopy_3};
	VPL_Parameter _CFArrayCreateMutableCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFArrayCreateMutableCopy_2};
	VPL_ExtProcedure _CFArrayCreateMutableCopy_F = {"CFArrayCreateMutableCopy",CFArrayCreateMutableCopy,&_CFArrayCreateMutableCopy_1,&_CFArrayCreateMutableCopy_R};

	VPL_Parameter _CFArrayCreateMutable_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFArrayCreateMutable_3 = { kPointerType,20,"CFArrayCallBacks",1,0,NULL};
	VPL_Parameter _CFArrayCreateMutable_2 = { kIntType,4,NULL,0,0,&_CFArrayCreateMutable_3};
	VPL_Parameter _CFArrayCreateMutable_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFArrayCreateMutable_2};
	VPL_ExtProcedure _CFArrayCreateMutable_F = {"CFArrayCreateMutable",CFArrayCreateMutable,&_CFArrayCreateMutable_1,&_CFArrayCreateMutable_R};

	VPL_Parameter _CFArrayCreateCopy_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFArrayCreateCopy_2 = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFArrayCreateCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFArrayCreateCopy_2};
	VPL_ExtProcedure _CFArrayCreateCopy_F = {"CFArrayCreateCopy",CFArrayCreateCopy,&_CFArrayCreateCopy_1,&_CFArrayCreateCopy_R};

	VPL_Parameter _CFArrayCreate_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _CFArrayCreate_4 = { kPointerType,20,"CFArrayCallBacks",1,0,NULL};
	VPL_Parameter _CFArrayCreate_3 = { kIntType,4,NULL,0,0,&_CFArrayCreate_4};
	VPL_Parameter _CFArrayCreate_2 = { kPointerType,0,"void",2,0,&_CFArrayCreate_3};
	VPL_Parameter _CFArrayCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFArrayCreate_2};
	VPL_ExtProcedure _CFArrayCreate_F = {"CFArrayCreate",CFArrayCreate,&_CFArrayCreate_1,&_CFArrayCreate_R};

	VPL_Parameter _CFArrayGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFArrayGetTypeID_F = {"CFArrayGetTypeID",CFArrayGetTypeID,NULL,&_CFArrayGetTypeID_R};

	VPL_Parameter _CFDictionaryRemoveAllValues_1 = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_ExtProcedure _CFDictionaryRemoveAllValues_F = {"CFDictionaryRemoveAllValues",CFDictionaryRemoveAllValues,&_CFDictionaryRemoveAllValues_1,NULL};

	VPL_Parameter _CFDictionaryRemoveValue_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryRemoveValue_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryRemoveValue_2};
	VPL_ExtProcedure _CFDictionaryRemoveValue_F = {"CFDictionaryRemoveValue",CFDictionaryRemoveValue,&_CFDictionaryRemoveValue_1,NULL};

	VPL_Parameter _CFDictionaryReplaceValue_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryReplaceValue_2 = { kPointerType,0,"void",1,0,&_CFDictionaryReplaceValue_3};
	VPL_Parameter _CFDictionaryReplaceValue_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryReplaceValue_2};
	VPL_ExtProcedure _CFDictionaryReplaceValue_F = {"CFDictionaryReplaceValue",CFDictionaryReplaceValue,&_CFDictionaryReplaceValue_1,NULL};

	VPL_Parameter _CFDictionarySetValue_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionarySetValue_2 = { kPointerType,0,"void",1,0,&_CFDictionarySetValue_3};
	VPL_Parameter _CFDictionarySetValue_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionarySetValue_2};
	VPL_ExtProcedure _CFDictionarySetValue_F = {"CFDictionarySetValue",CFDictionarySetValue,&_CFDictionarySetValue_1,NULL};

	VPL_Parameter _CFDictionaryAddValue_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryAddValue_2 = { kPointerType,0,"void",1,0,&_CFDictionaryAddValue_3};
	VPL_Parameter _CFDictionaryAddValue_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryAddValue_2};
	VPL_ExtProcedure _CFDictionaryAddValue_F = {"CFDictionaryAddValue",CFDictionaryAddValue,&_CFDictionaryAddValue_1,NULL};

	VPL_Parameter _CFDictionaryApplyFunction_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryApplyFunction_2 = { kPointerType,0,"void",1,0,&_CFDictionaryApplyFunction_3};
	VPL_Parameter _CFDictionaryApplyFunction_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryApplyFunction_2};
	VPL_ExtProcedure _CFDictionaryApplyFunction_F = {"CFDictionaryApplyFunction",CFDictionaryApplyFunction,&_CFDictionaryApplyFunction_1,NULL};

	VPL_Parameter _CFDictionaryGetKeysAndValues_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _CFDictionaryGetKeysAndValues_2 = { kPointerType,0,"void",2,0,&_CFDictionaryGetKeysAndValues_3};
	VPL_Parameter _CFDictionaryGetKeysAndValues_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryGetKeysAndValues_2};
	VPL_ExtProcedure _CFDictionaryGetKeysAndValues_F = {"CFDictionaryGetKeysAndValues",CFDictionaryGetKeysAndValues,&_CFDictionaryGetKeysAndValues_1,NULL};

	VPL_Parameter _CFDictionaryGetValueIfPresent_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFDictionaryGetValueIfPresent_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _CFDictionaryGetValueIfPresent_2 = { kPointerType,0,"void",1,0,&_CFDictionaryGetValueIfPresent_3};
	VPL_Parameter _CFDictionaryGetValueIfPresent_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryGetValueIfPresent_2};
	VPL_ExtProcedure _CFDictionaryGetValueIfPresent_F = {"CFDictionaryGetValueIfPresent",CFDictionaryGetValueIfPresent,&_CFDictionaryGetValueIfPresent_1,&_CFDictionaryGetValueIfPresent_R};

	VPL_Parameter _CFDictionaryGetValue_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryGetValue_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryGetValue_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryGetValue_2};
	VPL_ExtProcedure _CFDictionaryGetValue_F = {"CFDictionaryGetValue",CFDictionaryGetValue,&_CFDictionaryGetValue_1,&_CFDictionaryGetValue_R};

	VPL_Parameter _CFDictionaryContainsValue_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFDictionaryContainsValue_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryContainsValue_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryContainsValue_2};
	VPL_ExtProcedure _CFDictionaryContainsValue_F = {"CFDictionaryContainsValue",CFDictionaryContainsValue,&_CFDictionaryContainsValue_1,&_CFDictionaryContainsValue_R};

	VPL_Parameter _CFDictionaryContainsKey_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFDictionaryContainsKey_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryContainsKey_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryContainsKey_2};
	VPL_ExtProcedure _CFDictionaryContainsKey_F = {"CFDictionaryContainsKey",CFDictionaryContainsKey,&_CFDictionaryContainsKey_1,&_CFDictionaryContainsKey_R};

	VPL_Parameter _CFDictionaryGetCountOfValue_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDictionaryGetCountOfValue_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryGetCountOfValue_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryGetCountOfValue_2};
	VPL_ExtProcedure _CFDictionaryGetCountOfValue_F = {"CFDictionaryGetCountOfValue",CFDictionaryGetCountOfValue,&_CFDictionaryGetCountOfValue_1,&_CFDictionaryGetCountOfValue_R};

	VPL_Parameter _CFDictionaryGetCountOfKey_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDictionaryGetCountOfKey_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFDictionaryGetCountOfKey_1 = { kPointerType,0,"__CFDictionary",1,0,&_CFDictionaryGetCountOfKey_2};
	VPL_ExtProcedure _CFDictionaryGetCountOfKey_F = {"CFDictionaryGetCountOfKey",CFDictionaryGetCountOfKey,&_CFDictionaryGetCountOfKey_1,&_CFDictionaryGetCountOfKey_R};

	VPL_Parameter _CFDictionaryGetCount_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFDictionaryGetCount_1 = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_ExtProcedure _CFDictionaryGetCount_F = {"CFDictionaryGetCount",CFDictionaryGetCount,&_CFDictionaryGetCount_1,&_CFDictionaryGetCount_R};

	VPL_Parameter _CFDictionaryCreateMutableCopy_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFDictionaryCreateMutableCopy_3 = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFDictionaryCreateMutableCopy_2 = { kIntType,4,NULL,0,0,&_CFDictionaryCreateMutableCopy_3};
	VPL_Parameter _CFDictionaryCreateMutableCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDictionaryCreateMutableCopy_2};
	VPL_ExtProcedure _CFDictionaryCreateMutableCopy_F = {"CFDictionaryCreateMutableCopy",CFDictionaryCreateMutableCopy,&_CFDictionaryCreateMutableCopy_1,&_CFDictionaryCreateMutableCopy_R};

	VPL_Parameter _CFDictionaryCreateMutable_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFDictionaryCreateMutable_4 = { kPointerType,20,"CFDictionaryValueCallBacks",1,0,NULL};
	VPL_Parameter _CFDictionaryCreateMutable_3 = { kPointerType,24,"CFDictionaryKeyCallBacks",1,0,&_CFDictionaryCreateMutable_4};
	VPL_Parameter _CFDictionaryCreateMutable_2 = { kIntType,4,NULL,0,0,&_CFDictionaryCreateMutable_3};
	VPL_Parameter _CFDictionaryCreateMutable_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDictionaryCreateMutable_2};
	VPL_ExtProcedure _CFDictionaryCreateMutable_F = {"CFDictionaryCreateMutable",CFDictionaryCreateMutable,&_CFDictionaryCreateMutable_1,&_CFDictionaryCreateMutable_R};

	VPL_Parameter _CFDictionaryCreateCopy_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFDictionaryCreateCopy_2 = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFDictionaryCreateCopy_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDictionaryCreateCopy_2};
	VPL_ExtProcedure _CFDictionaryCreateCopy_F = {"CFDictionaryCreateCopy",CFDictionaryCreateCopy,&_CFDictionaryCreateCopy_1,&_CFDictionaryCreateCopy_R};

	VPL_Parameter _CFDictionaryCreate_R = { kPointerType,0,"__CFDictionary",1,0,NULL};
	VPL_Parameter _CFDictionaryCreate_6 = { kPointerType,20,"CFDictionaryValueCallBacks",1,0,NULL};
	VPL_Parameter _CFDictionaryCreate_5 = { kPointerType,24,"CFDictionaryKeyCallBacks",1,0,&_CFDictionaryCreate_6};
	VPL_Parameter _CFDictionaryCreate_4 = { kIntType,4,NULL,0,0,&_CFDictionaryCreate_5};
	VPL_Parameter _CFDictionaryCreate_3 = { kPointerType,0,"void",2,0,&_CFDictionaryCreate_4};
	VPL_Parameter _CFDictionaryCreate_2 = { kPointerType,0,"void",2,0,&_CFDictionaryCreate_3};
	VPL_Parameter _CFDictionaryCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFDictionaryCreate_2};
	VPL_ExtProcedure _CFDictionaryCreate_F = {"CFDictionaryCreate",CFDictionaryCreate,&_CFDictionaryCreate_1,&_CFDictionaryCreate_R};

	VPL_Parameter _CFDictionaryGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFDictionaryGetTypeID_F = {"CFDictionaryGetTypeID",CFDictionaryGetTypeID,NULL,&_CFDictionaryGetTypeID_R};

	VPL_Parameter _CFGetAllocator_R = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_Parameter _CFGetAllocator_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFGetAllocator_F = {"CFGetAllocator",CFGetAllocator,&_CFGetAllocator_1,&_CFGetAllocator_R};

	VPL_Parameter _CFCopyDescription_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFCopyDescription_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFCopyDescription_F = {"CFCopyDescription",CFCopyDescription,&_CFCopyDescription_1,&_CFCopyDescription_R};

	VPL_Parameter _CFHash_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFHash_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFHash_F = {"CFHash",CFHash,&_CFHash_1,&_CFHash_R};

	VPL_Parameter _CFEqual_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _CFEqual_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFEqual_1 = { kPointerType,0,"void",1,0,&_CFEqual_2};
	VPL_ExtProcedure _CFEqual_F = {"CFEqual",CFEqual,&_CFEqual_1,&_CFEqual_R};

	VPL_Parameter _CFMakeCollectable_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFMakeCollectable_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFMakeCollectable_F = {"CFMakeCollectable",CFMakeCollectable,&_CFMakeCollectable_1,&_CFMakeCollectable_R};

	VPL_Parameter _CFGetRetainCount_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFGetRetainCount_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFGetRetainCount_F = {"CFGetRetainCount",CFGetRetainCount,&_CFGetRetainCount_1,&_CFGetRetainCount_R};

	VPL_Parameter _CFRelease_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFRelease_F = {"CFRelease",CFRelease,&_CFRelease_1,NULL};

	VPL_Parameter _CFRetain_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFRetain_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFRetain_F = {"CFRetain",CFRetain,&_CFRetain_1,&_CFRetain_R};

	VPL_Parameter _CFCopyTypeIDDescription_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _CFCopyTypeIDDescription_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFCopyTypeIDDescription_F = {"CFCopyTypeIDDescription",CFCopyTypeIDDescription,&_CFCopyTypeIDDescription_1,&_CFCopyTypeIDDescription_R};

	VPL_Parameter _CFGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFGetTypeID_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _CFGetTypeID_F = {"CFGetTypeID",CFGetTypeID,&_CFGetTypeID_1,&_CFGetTypeID_R};

	VPL_Parameter _CFAllocatorGetContext_2 = { kPointerType,36,"CFAllocatorContext",1,0,NULL};
	VPL_Parameter _CFAllocatorGetContext_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFAllocatorGetContext_2};
	VPL_ExtProcedure _CFAllocatorGetContext_F = {"CFAllocatorGetContext",CFAllocatorGetContext,&_CFAllocatorGetContext_1,NULL};

	VPL_Parameter _CFAllocatorGetPreferredSizeForSize_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAllocatorGetPreferredSizeForSize_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAllocatorGetPreferredSizeForSize_2 = { kIntType,4,NULL,0,0,&_CFAllocatorGetPreferredSizeForSize_3};
	VPL_Parameter _CFAllocatorGetPreferredSizeForSize_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFAllocatorGetPreferredSizeForSize_2};
	VPL_ExtProcedure _CFAllocatorGetPreferredSizeForSize_F = {"CFAllocatorGetPreferredSizeForSize",CFAllocatorGetPreferredSizeForSize,&_CFAllocatorGetPreferredSizeForSize_1,&_CFAllocatorGetPreferredSizeForSize_R};

	VPL_Parameter _CFAllocatorDeallocate_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorDeallocate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFAllocatorDeallocate_2};
	VPL_ExtProcedure _CFAllocatorDeallocate_F = {"CFAllocatorDeallocate",CFAllocatorDeallocate,&_CFAllocatorDeallocate_1,NULL};

	VPL_Parameter _CFAllocatorReallocate_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorReallocate_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAllocatorReallocate_3 = { kIntType,4,NULL,0,0,&_CFAllocatorReallocate_4};
	VPL_Parameter _CFAllocatorReallocate_2 = { kPointerType,0,"void",1,0,&_CFAllocatorReallocate_3};
	VPL_Parameter _CFAllocatorReallocate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFAllocatorReallocate_2};
	VPL_ExtProcedure _CFAllocatorReallocate_F = {"CFAllocatorReallocate",CFAllocatorReallocate,&_CFAllocatorReallocate_1,&_CFAllocatorReallocate_R};

	VPL_Parameter _CFAllocatorAllocate_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _CFAllocatorAllocate_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _CFAllocatorAllocate_2 = { kIntType,4,NULL,0,0,&_CFAllocatorAllocate_3};
	VPL_Parameter _CFAllocatorAllocate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFAllocatorAllocate_2};
	VPL_ExtProcedure _CFAllocatorAllocate_F = {"CFAllocatorAllocate",CFAllocatorAllocate,&_CFAllocatorAllocate_1,&_CFAllocatorAllocate_R};

	VPL_Parameter _CFAllocatorCreate_R = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_Parameter _CFAllocatorCreate_2 = { kPointerType,36,"CFAllocatorContext",1,0,NULL};
	VPL_Parameter _CFAllocatorCreate_1 = { kPointerType,0,"__CFAllocator",1,0,&_CFAllocatorCreate_2};
	VPL_ExtProcedure _CFAllocatorCreate_F = {"CFAllocatorCreate",CFAllocatorCreate,&_CFAllocatorCreate_1,&_CFAllocatorCreate_R};

	VPL_Parameter _CFAllocatorGetDefault_R = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_ExtProcedure _CFAllocatorGetDefault_F = {"CFAllocatorGetDefault",CFAllocatorGetDefault,NULL,&_CFAllocatorGetDefault_R};

	VPL_Parameter _CFAllocatorSetDefault_1 = { kPointerType,0,"__CFAllocator",1,0,NULL};
	VPL_ExtProcedure _CFAllocatorSetDefault_F = {"CFAllocatorSetDefault",CFAllocatorSetDefault,&_CFAllocatorSetDefault_1,NULL};

	VPL_Parameter _CFAllocatorGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFAllocatorGetTypeID_F = {"CFAllocatorGetTypeID",CFAllocatorGetTypeID,NULL,&_CFAllocatorGetTypeID_R};

	VPL_Parameter _CFNullGetTypeID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _CFNullGetTypeID_F = {"CFNullGetTypeID",CFNullGetTypeID,NULL,&_CFNullGetTypeID_R};

	VPL_Parameter ___CFRangeMake_R = { kStructureType,8,"CFRange",0,0,NULL};
	VPL_Parameter ___CFRangeMake_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___CFRangeMake_1 = { kIntType,4,NULL,0,0,&___CFRangeMake_2};
	VPL_ExtProcedure ___CFRangeMake_F = {"__CFRangeMake",__CFRangeMake,&___CFRangeMake_1,&___CFRangeMake_R};

	VPL_Parameter _vprintf_stderr_func_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vprintf_stderr_func_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vprintf_stderr_func_1 = { kPointerType,1,"char",1,0,&_vprintf_stderr_func_2};
	VPL_ExtProcedure _vprintf_stderr_func_F = {"vprintf_stderr_func",NULL,&_vprintf_stderr_func_1,&_vprintf_stderr_func_R};

	VPL_Parameter _map_fd_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _map_fd_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _map_fd_4 = { kIntType,4,NULL,0,0,&_map_fd_5};
	VPL_Parameter _map_fd_3 = { kPointerType,4,"unsigned int",1,0,&_map_fd_4};
	VPL_Parameter _map_fd_2 = { kUnsignedType,4,NULL,0,0,&_map_fd_3};
	VPL_Parameter _map_fd_1 = { kIntType,4,NULL,0,0,&_map_fd_2};
	VPL_ExtProcedure _map_fd_F = {"map_fd",map_fd,&_map_fd_1,&_map_fd_R};

	VPL_Parameter _pid_for_task_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pid_for_task_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _pid_for_task_1 = { kUnsignedType,4,NULL,0,0,&_pid_for_task_2};
	VPL_ExtProcedure _pid_for_task_F = {"pid_for_task",pid_for_task,&_pid_for_task_1,&_pid_for_task_R};

	VPL_Parameter _task_name_for_pid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _task_name_for_pid_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _task_name_for_pid_2 = { kIntType,4,NULL,0,0,&_task_name_for_pid_3};
	VPL_Parameter _task_name_for_pid_1 = { kUnsignedType,4,NULL,0,0,&_task_name_for_pid_2};
	VPL_ExtProcedure _task_name_for_pid_F = {"task_name_for_pid",task_name_for_pid,&_task_name_for_pid_1,&_task_name_for_pid_R};

	VPL_Parameter _task_for_pid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _task_for_pid_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _task_for_pid_2 = { kIntType,4,NULL,0,0,&_task_for_pid_3};
	VPL_Parameter _task_for_pid_1 = { kUnsignedType,4,NULL,0,0,&_task_for_pid_2};
	VPL_ExtProcedure _task_for_pid_F = {"task_for_pid",task_for_pid,&_task_for_pid_1,&_task_for_pid_R};

	VPL_Parameter _task_self_trap_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _task_self_trap_F = {"task_self_trap",task_self_trap,NULL,&_task_self_trap_R};

	VPL_Parameter _thread_switch_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _thread_switch_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _thread_switch_2 = { kIntType,4,NULL,0,0,&_thread_switch_3};
	VPL_Parameter _thread_switch_1 = { kUnsignedType,4,NULL,0,0,&_thread_switch_2};
	VPL_ExtProcedure _thread_switch_F = {"thread_switch",thread_switch,&_thread_switch_1,&_thread_switch_R};

	VPL_Parameter _swtch_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _swtch_F = {"swtch",swtch,NULL,&_swtch_R};

	VPL_Parameter _swtch_pri_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _swtch_pri_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _swtch_pri_F = {"swtch_pri",swtch_pri,&_swtch_pri_1,&_swtch_pri_R};

/*	VPL_Parameter _htonl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _htonl_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _htonl_F = {"htonl",htonl,&_htonl_1,&_htonl_R};

	VPL_Parameter _ntohl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ntohl_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ntohl_F = {"ntohl",ntohl,&_ntohl_1,&_ntohl_R};

	VPL_Parameter _htons_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _htons_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _htons_F = {"htons",htons,&_htons_1,&_htons_R};

	VPL_Parameter _ntohs_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _ntohs_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _ntohs_F = {"ntohs",ntohs,&_ntohs_1,&_ntohs_R};
*/
	VPL_Parameter _mach_thread_self_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _mach_thread_self_F = {"mach_thread_self",mach_thread_self,NULL,&_mach_thread_self_R};

	VPL_Parameter _mach_host_self_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _mach_host_self_F = {"mach_host_self",mach_host_self,NULL,&_mach_host_self_R};

	VPL_Parameter _mach_task_self_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _mach_task_self_F = {"mach_task_self",mach_task_self,NULL,&_mach_task_self_R};

	VPL_Parameter _mach_msg_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mach_msg_7 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mach_msg_6 = { kUnsignedType,4,NULL,0,0,&_mach_msg_7};
	VPL_Parameter _mach_msg_5 = { kUnsignedType,4,NULL,0,0,&_mach_msg_6};
	VPL_Parameter _mach_msg_4 = { kUnsignedType,4,NULL,0,0,&_mach_msg_5};
	VPL_Parameter _mach_msg_3 = { kUnsignedType,4,NULL,0,0,&_mach_msg_4};
	VPL_Parameter _mach_msg_2 = { kIntType,4,NULL,0,0,&_mach_msg_3};
	VPL_Parameter _mach_msg_1 = { kPointerType,24,"mach_msg_header_t",1,0,&_mach_msg_2};
	VPL_ExtProcedure _mach_msg_F = {"mach_msg",mach_msg,&_mach_msg_1,&_mach_msg_R};

	VPL_Parameter _mach_msg_overwrite_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mach_msg_overwrite_9 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mach_msg_overwrite_8 = { kPointerType,24,"mach_msg_header_t",1,0,&_mach_msg_overwrite_9};
	VPL_Parameter _mach_msg_overwrite_7 = { kUnsignedType,4,NULL,0,0,&_mach_msg_overwrite_8};
	VPL_Parameter _mach_msg_overwrite_6 = { kUnsignedType,4,NULL,0,0,&_mach_msg_overwrite_7};
	VPL_Parameter _mach_msg_overwrite_5 = { kUnsignedType,4,NULL,0,0,&_mach_msg_overwrite_6};
	VPL_Parameter _mach_msg_overwrite_4 = { kUnsignedType,4,NULL,0,0,&_mach_msg_overwrite_5};
	VPL_Parameter _mach_msg_overwrite_3 = { kUnsignedType,4,NULL,0,0,&_mach_msg_overwrite_4};
	VPL_Parameter _mach_msg_overwrite_2 = { kIntType,4,NULL,0,0,&_mach_msg_overwrite_3};
	VPL_Parameter _mach_msg_overwrite_1 = { kPointerType,24,"mach_msg_header_t",1,0,&_mach_msg_overwrite_2};
	VPL_ExtProcedure _mach_msg_overwrite_F = {"mach_msg_overwrite",mach_msg_overwrite,&_mach_msg_overwrite_1,&_mach_msg_overwrite_R};



VPL_DictionaryNode VPX_MacOSX_IOKit_Procedures[] =	{
	{"IOUSBLowLatencyIsocCompletionAction",&_IOUSBLowLatencyIsocCompletionAction_F},
	{"IOUSBIsocCompletionAction",&_IOUSBIsocCompletionAction_F},
	{"IOUSBCompletionActionWithTimeStamp",&_IOUSBCompletionActionWithTimeStamp_F},
	{"IOUSBCompletionAction",&_IOUSBCompletionAction_F},
	{"CFPlugInInstanceDeallocateInstanceDataFunction",&_CFPlugInInstanceDeallocateInstanceDataFunction_F},
	{"CFPlugInInstanceGetInterfaceFunction",&_CFPlugInInstanceGetInterfaceFunction_F},
	{"CFPlugInFactoryFunction",&_CFPlugInFactoryFunction_F},
	{"CFPlugInUnloadFunction",&_CFPlugInUnloadFunction_F},
	{"CFPlugInDynamicRegisterFunction",&_CFPlugInDynamicRegisterFunction_F},
	{"IOAsyncCallback",&_IOAsyncCallback_F},
	{"IOAsyncCallback2",&_IOAsyncCallback2_F},
	{"IOAsyncCallback1",&_IOAsyncCallback1_F},
	{"IOAsyncCallback0",&_IOAsyncCallback0_F},
	{"IOServiceInterestCallback",&_IOServiceInterestCallback_F},
	{"IOServiceMatchingCallback",&_IOServiceMatchingCallback_F},
	{"mach_error_fn_t",&_mach_error_fn_t_F},
	{"CFRunLoopTimerCallBack",&_CFRunLoopTimerCallBack_F},
	{"CFRunLoopObserverCallBack",&_CFRunLoopObserverCallBack_F},
	{"CFArrayApplierFunction",&_CFArrayApplierFunction_F},
	{"CFArrayEqualCallBack",&_CFArrayEqualCallBack_F},
	{"CFArrayCopyDescriptionCallBack",&_CFArrayCopyDescriptionCallBack_F},
	{"CFArrayReleaseCallBack",&_CFArrayReleaseCallBack_F},
	{"CFArrayRetainCallBack",&_CFArrayRetainCallBack_F},
	{"CFDictionaryApplierFunction",&_CFDictionaryApplierFunction_F},
	{"CFDictionaryHashCallBack",&_CFDictionaryHashCallBack_F},
	{"CFDictionaryEqualCallBack",&_CFDictionaryEqualCallBack_F},
	{"CFDictionaryCopyDescriptionCallBack",&_CFDictionaryCopyDescriptionCallBack_F},
	{"CFDictionaryReleaseCallBack",&_CFDictionaryReleaseCallBack_F},
	{"CFDictionaryRetainCallBack",&_CFDictionaryRetainCallBack_F},
	{"CFAllocatorPreferredSizeCallBack",&_CFAllocatorPreferredSizeCallBack_F},
	{"CFAllocatorDeallocateCallBack",&_CFAllocatorDeallocateCallBack_F},
	{"CFAllocatorReallocateCallBack",&_CFAllocatorReallocateCallBack_F},
	{"CFAllocatorAllocateCallBack",&_CFAllocatorAllocateCallBack_F},
	{"CFAllocatorCopyDescriptionCallBack",&_CFAllocatorCopyDescriptionCallBack_F},
	{"CFAllocatorReleaseCallBack",&_CFAllocatorReleaseCallBack_F},
	{"CFAllocatorRetainCallBack",&_CFAllocatorRetainCallBack_F},
	{"CFComparatorFunction",&_CFComparatorFunction_F},
	{"IODestroyPlugInInterface",&_IODestroyPlugInInterface_F},
	{"IOCreatePlugInInterfaceForService",&_IOCreatePlugInInterfaceForService_F},
	{"CFPlugInInstanceCreateWithInstanceDataSize",&_CFPlugInInstanceCreateWithInstanceDataSize_F},
	{"CFPlugInInstanceGetTypeID",&_CFPlugInInstanceGetTypeID_F},
	{"CFPlugInInstanceGetInstanceData",&_CFPlugInInstanceGetInstanceData_F},
	{"CFPlugInInstanceGetFactoryName",&_CFPlugInInstanceGetFactoryName_F},
	{"CFPlugInInstanceGetInterfaceFunctionTable",&_CFPlugInInstanceGetInterfaceFunctionTable_F},
	{"CFPlugInRemoveInstanceForFactory",&_CFPlugInRemoveInstanceForFactory_F},
	{"CFPlugInAddInstanceForFactory",&_CFPlugInAddInstanceForFactory_F},
	{"CFPlugInUnregisterPlugInType",&_CFPlugInUnregisterPlugInType_F},
	{"CFPlugInRegisterPlugInType",&_CFPlugInRegisterPlugInType_F},
	{"CFPlugInUnregisterFactory",&_CFPlugInUnregisterFactory_F},
	{"CFPlugInRegisterFactoryFunctionByName",&_CFPlugInRegisterFactoryFunctionByName_F},
	{"CFPlugInRegisterFactoryFunction",&_CFPlugInRegisterFactoryFunction_F},
	{"CFPlugInInstanceCreate",&_CFPlugInInstanceCreate_F},
	{"CFPlugInFindFactoriesForPlugInTypeInPlugIn",&_CFPlugInFindFactoriesForPlugInTypeInPlugIn_F},
	{"CFPlugInFindFactoriesForPlugInType",&_CFPlugInFindFactoriesForPlugInType_F},
	{"CFPlugInIsLoadOnDemand",&_CFPlugInIsLoadOnDemand_F},
	{"CFPlugInSetLoadOnDemand",&_CFPlugInSetLoadOnDemand_F},
	{"CFPlugInGetBundle",&_CFPlugInGetBundle_F},
	{"CFPlugInCreate",&_CFPlugInCreate_F},
	{"CFPlugInGetTypeID",&_CFPlugInGetTypeID_F},
	{"CFUUIDCreateFromUUIDBytes",&_CFUUIDCreateFromUUIDBytes_F},
	{"CFUUIDGetUUIDBytes",&_CFUUIDGetUUIDBytes_F},
	{"CFUUIDGetConstantUUIDWithBytes",&_CFUUIDGetConstantUUIDWithBytes_F},
	{"CFUUIDCreateString",&_CFUUIDCreateString_F},
	{"CFUUIDCreateFromString",&_CFUUIDCreateFromString_F},
	{"CFUUIDCreateWithBytes",&_CFUUIDCreateWithBytes_F},
	{"CFUUIDCreate",&_CFUUIDCreate_F},
	{"CFUUIDGetTypeID",&_CFUUIDGetTypeID_F},
	{"CFBundleCloseBundleResourceMap",&_CFBundleCloseBundleResourceMap_F},
	{"CFBundleOpenBundleResourceFiles",&_CFBundleOpenBundleResourceFiles_F},
	{"CFBundleOpenBundleResourceMap",&_CFBundleOpenBundleResourceMap_F},
	{"CFBundleGetPlugIn",&_CFBundleGetPlugIn_F},
	{"CFBundleCopyAuxiliaryExecutableURL",&_CFBundleCopyAuxiliaryExecutableURL_F},
	{"CFBundleGetDataPointersForNames",&_CFBundleGetDataPointersForNames_F},
	{"CFBundleGetDataPointerForName",&_CFBundleGetDataPointerForName_F},
	{"CFBundleGetFunctionPointersForNames",&_CFBundleGetFunctionPointersForNames_F},
	{"CFBundleGetFunctionPointerForName",&_CFBundleGetFunctionPointerForName_F},
	{"CFBundleUnloadExecutable",&_CFBundleUnloadExecutable_F},
	{"CFBundleLoadExecutable",&_CFBundleLoadExecutable_F},
	{"CFBundleIsExecutableLoaded",&_CFBundleIsExecutableLoaded_F},
	{"CFBundleCopyExecutableURL",&_CFBundleCopyExecutableURL_F},
	{"CFBundleCopyLocalizationsForURL",&_CFBundleCopyLocalizationsForURL_F},
	{"CFBundleCopyInfoDictionaryForURL",&_CFBundleCopyInfoDictionaryForURL_F},
	{"CFBundleCopyResourceURLsOfTypeForLocalization",&_CFBundleCopyResourceURLsOfTypeForLocalization_F},
	{"CFBundleCopyResourceURLForLocalization",&_CFBundleCopyResourceURLForLocalization_F},
	{"CFBundleCopyLocalizationsForPreferences",&_CFBundleCopyLocalizationsForPreferences_F},
	{"CFBundleCopyPreferredLocalizationsFromArray",&_CFBundleCopyPreferredLocalizationsFromArray_F},
	{"CFBundleCopyBundleLocalizations",&_CFBundleCopyBundleLocalizations_F},
	{"CFBundleCopyResourceURLsOfTypeInDirectory",&_CFBundleCopyResourceURLsOfTypeInDirectory_F},
	{"CFBundleCopyResourceURLInDirectory",&_CFBundleCopyResourceURLInDirectory_F},
	{"CFBundleCopyLocalizedString",&_CFBundleCopyLocalizedString_F},
	{"CFBundleCopyResourceURLsOfType",&_CFBundleCopyResourceURLsOfType_F},
	{"CFBundleCopyResourceURL",&_CFBundleCopyResourceURL_F},
	{"CFBundleGetPackageInfoInDirectory",&_CFBundleGetPackageInfoInDirectory_F},
	{"CFBundleCopyInfoDictionaryInDirectory",&_CFBundleCopyInfoDictionaryInDirectory_F},
	{"CFBundleCopyBuiltInPlugInsURL",&_CFBundleCopyBuiltInPlugInsURL_F},
	{"CFBundleCopySharedSupportURL",&_CFBundleCopySharedSupportURL_F},
	{"CFBundleCopySharedFrameworksURL",&_CFBundleCopySharedFrameworksURL_F},
	{"CFBundleCopyPrivateFrameworksURL",&_CFBundleCopyPrivateFrameworksURL_F},
	{"CFBundleCopyResourcesDirectoryURL",&_CFBundleCopyResourcesDirectoryURL_F},
	{"CFBundleCopySupportFilesDirectoryURL",&_CFBundleCopySupportFilesDirectoryURL_F},
	{"CFBundleGetDevelopmentRegion",&_CFBundleGetDevelopmentRegion_F},
	{"CFBundleGetVersionNumber",&_CFBundleGetVersionNumber_F},
	{"CFBundleGetIdentifier",&_CFBundleGetIdentifier_F},
	{"CFBundleGetPackageInfo",&_CFBundleGetPackageInfo_F},
	{"CFBundleGetLocalInfoDictionary",&_CFBundleGetLocalInfoDictionary_F},
	{"CFBundleGetInfoDictionary",&_CFBundleGetInfoDictionary_F},
	{"CFBundleGetValueForInfoDictionaryKey",&_CFBundleGetValueForInfoDictionaryKey_F},
	{"CFBundleCopyBundleURL",&_CFBundleCopyBundleURL_F},
	{"CFBundleCreateBundlesFromDirectory",&_CFBundleCreateBundlesFromDirectory_F},
	{"CFBundleCreate",&_CFBundleCreate_F},
	{"CFBundleGetTypeID",&_CFBundleGetTypeID_F},
	{"CFBundleGetAllBundles",&_CFBundleGetAllBundles_F},
	{"CFBundleGetBundleWithIdentifier",&_CFBundleGetBundleWithIdentifier_F},
	{"CFBundleGetMainBundle",&_CFBundleGetMainBundle_F},
	{"CFURLGetFSRef",&_CFURLGetFSRef_F},
	{"CFURLCreateFromFSRef",&_CFURLCreateFromFSRef_F},
	{"CFURLCreateStringByAddingPercentEscapes",&_CFURLCreateStringByAddingPercentEscapes_F},
	{"CFURLCreateStringByReplacingPercentEscapesUsingEncoding",&_CFURLCreateStringByReplacingPercentEscapesUsingEncoding_F},
	{"CFURLCreateStringByReplacingPercentEscapes",&_CFURLCreateStringByReplacingPercentEscapes_F},
	{"CFURLGetByteRangeForComponent",&_CFURLGetByteRangeForComponent_F},
	{"CFURLGetBytes",&_CFURLGetBytes_F},
	{"CFURLCreateCopyDeletingPathExtension",&_CFURLCreateCopyDeletingPathExtension_F},
	{"CFURLCreateCopyAppendingPathExtension",&_CFURLCreateCopyAppendingPathExtension_F},
	{"CFURLCreateCopyDeletingLastPathComponent",&_CFURLCreateCopyDeletingLastPathComponent_F},
	{"CFURLCreateCopyAppendingPathComponent",&_CFURLCreateCopyAppendingPathComponent_F},
	{"CFURLCopyPathExtension",&_CFURLCopyPathExtension_F},
	{"CFURLCopyLastPathComponent",&_CFURLCopyLastPathComponent_F},
	{"CFURLCopyFragment",&_CFURLCopyFragment_F},
	{"CFURLCopyQueryString",&_CFURLCopyQueryString_F},
	{"CFURLCopyParameterString",&_CFURLCopyParameterString_F},
	{"CFURLCopyPassword",&_CFURLCopyPassword_F},
	{"CFURLCopyUserName",&_CFURLCopyUserName_F},
	{"CFURLGetPortNumber",&_CFURLGetPortNumber_F},
	{"CFURLCopyHostName",&_CFURLCopyHostName_F},
	{"CFURLCopyResourceSpecifier",&_CFURLCopyResourceSpecifier_F},
	{"CFURLHasDirectoryPath",&_CFURLHasDirectoryPath_F},
	{"CFURLCopyFileSystemPath",&_CFURLCopyFileSystemPath_F},
	{"CFURLCopyStrictPath",&_CFURLCopyStrictPath_F},
	{"CFURLCopyPath",&_CFURLCopyPath_F},
	{"CFURLCopyNetLocation",&_CFURLCopyNetLocation_F},
	{"CFURLCopyScheme",&_CFURLCopyScheme_F},
	{"CFURLCanBeDecomposed",&_CFURLCanBeDecomposed_F},
	{"CFURLGetBaseURL",&_CFURLGetBaseURL_F},
	{"CFURLGetString",&_CFURLGetString_F},
	{"CFURLCopyAbsoluteURL",&_CFURLCopyAbsoluteURL_F},
	{"CFURLGetFileSystemRepresentation",&_CFURLGetFileSystemRepresentation_F},
	{"CFURLCreateFromFileSystemRepresentationRelativeToBase",&_CFURLCreateFromFileSystemRepresentationRelativeToBase_F},
	{"CFURLCreateWithFileSystemPathRelativeToBase",&_CFURLCreateWithFileSystemPathRelativeToBase_F},
	{"CFURLCreateFromFileSystemRepresentation",&_CFURLCreateFromFileSystemRepresentation_F},
	{"CFURLCreateWithFileSystemPath",&_CFURLCreateWithFileSystemPath_F},
	{"CFURLCreateAbsoluteURLWithBytes",&_CFURLCreateAbsoluteURLWithBytes_F},
	{"CFURLCreateWithString",&_CFURLCreateWithString_F},
	{"CFURLCreateData",&_CFURLCreateData_F},
	{"CFURLCreateWithBytes",&_CFURLCreateWithBytes_F},
	{"CFURLGetTypeID",&_CFURLGetTypeID_F},
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
	{"CFRunLoopTimerGetContext",&_CFRunLoopTimerGetContext_F},
	{"CFRunLoopTimerIsValid",&_CFRunLoopTimerIsValid_F},
	{"CFRunLoopTimerInvalidate",&_CFRunLoopTimerInvalidate_F},
	{"CFRunLoopTimerGetOrder",&_CFRunLoopTimerGetOrder_F},
	{"CFRunLoopTimerDoesRepeat",&_CFRunLoopTimerDoesRepeat_F},
	{"CFRunLoopTimerGetInterval",&_CFRunLoopTimerGetInterval_F},
	{"CFRunLoopTimerSetNextFireDate",&_CFRunLoopTimerSetNextFireDate_F},
	{"CFRunLoopTimerGetNextFireDate",&_CFRunLoopTimerGetNextFireDate_F},
	{"CFRunLoopTimerCreate",&_CFRunLoopTimerCreate_F},
	{"CFRunLoopTimerGetTypeID",&_CFRunLoopTimerGetTypeID_F},
	{"CFRunLoopObserverGetContext",&_CFRunLoopObserverGetContext_F},
	{"CFRunLoopObserverIsValid",&_CFRunLoopObserverIsValid_F},
	{"CFRunLoopObserverInvalidate",&_CFRunLoopObserverInvalidate_F},
	{"CFRunLoopObserverGetOrder",&_CFRunLoopObserverGetOrder_F},
	{"CFRunLoopObserverDoesRepeat",&_CFRunLoopObserverDoesRepeat_F},
	{"CFRunLoopObserverGetActivities",&_CFRunLoopObserverGetActivities_F},
	{"CFRunLoopObserverCreate",&_CFRunLoopObserverCreate_F},
	{"CFRunLoopObserverGetTypeID",&_CFRunLoopObserverGetTypeID_F},
	{"CFRunLoopSourceSignal",&_CFRunLoopSourceSignal_F},
	{"CFRunLoopSourceGetContext",&_CFRunLoopSourceGetContext_F},
	{"CFRunLoopSourceIsValid",&_CFRunLoopSourceIsValid_F},
	{"CFRunLoopSourceInvalidate",&_CFRunLoopSourceInvalidate_F},
	{"CFRunLoopSourceGetOrder",&_CFRunLoopSourceGetOrder_F},
	{"CFRunLoopSourceCreate",&_CFRunLoopSourceCreate_F},
	{"CFRunLoopSourceGetTypeID",&_CFRunLoopSourceGetTypeID_F},
	{"CFRunLoopRemoveTimer",&_CFRunLoopRemoveTimer_F},
	{"CFRunLoopAddTimer",&_CFRunLoopAddTimer_F},
	{"CFRunLoopContainsTimer",&_CFRunLoopContainsTimer_F},
	{"CFRunLoopRemoveObserver",&_CFRunLoopRemoveObserver_F},
	{"CFRunLoopAddObserver",&_CFRunLoopAddObserver_F},
	{"CFRunLoopContainsObserver",&_CFRunLoopContainsObserver_F},
	{"CFRunLoopRemoveSource",&_CFRunLoopRemoveSource_F},
	{"CFRunLoopAddSource",&_CFRunLoopAddSource_F},
	{"CFRunLoopContainsSource",&_CFRunLoopContainsSource_F},
	{"CFRunLoopStop",&_CFRunLoopStop_F},
	{"CFRunLoopWakeUp",&_CFRunLoopWakeUp_F},
	{"CFRunLoopIsWaiting",&_CFRunLoopIsWaiting_F},
	{"CFRunLoopRunInMode",&_CFRunLoopRunInMode_F},
	{"CFRunLoopRun",&_CFRunLoopRun_F},
	{"CFRunLoopGetNextTimerFireDate",&_CFRunLoopGetNextTimerFireDate_F},
	{"CFRunLoopAddCommonMode",&_CFRunLoopAddCommonMode_F},
	{"CFRunLoopCopyAllModes",&_CFRunLoopCopyAllModes_F},
	{"CFRunLoopCopyCurrentMode",&_CFRunLoopCopyCurrentMode_F},
	{"CFRunLoopGetCurrent",&_CFRunLoopGetCurrent_F},
	{"CFRunLoopGetTypeID",&_CFRunLoopGetTypeID_F},
	{"__CFStringMakeConstantString",&___CFStringMakeConstantString_F},
	{"CFShowStr",&_CFShowStr_F},
	{"CFShow",&_CFShow_F},
	{"CFStringGetMostCompatibleMacStringEncoding",&_CFStringGetMostCompatibleMacStringEncoding_F},
	{"CFStringConvertEncodingToIANACharSetName",&_CFStringConvertEncodingToIANACharSetName_F},
	{"CFStringConvertIANACharSetNameToEncoding",&_CFStringConvertIANACharSetNameToEncoding_F},
	{"CFStringConvertWindowsCodepageToEncoding",&_CFStringConvertWindowsCodepageToEncoding_F},
	{"CFStringConvertEncodingToWindowsCodepage",&_CFStringConvertEncodingToWindowsCodepage_F},
	{"CFStringConvertNSStringEncodingToEncoding",&_CFStringConvertNSStringEncodingToEncoding_F},
	{"CFStringConvertEncodingToNSStringEncoding",&_CFStringConvertEncodingToNSStringEncoding_F},
	{"CFStringGetNameOfEncoding",&_CFStringGetNameOfEncoding_F},
	{"CFStringGetListOfAvailableEncodings",&_CFStringGetListOfAvailableEncodings_F},
	{"CFStringIsEncodingAvailable",&_CFStringIsEncodingAvailable_F},
	{"CFStringTransform",&_CFStringTransform_F},
	{"CFStringNormalize",&_CFStringNormalize_F},
	{"CFStringCapitalize",&_CFStringCapitalize_F},
	{"CFStringUppercase",&_CFStringUppercase_F},
	{"CFStringLowercase",&_CFStringLowercase_F},
	{"CFStringTrimWhitespace",&_CFStringTrimWhitespace_F},
	{"CFStringTrim",&_CFStringTrim_F},
	{"CFStringPad",&_CFStringPad_F},
	{"CFStringSetExternalCharactersNoCopy",&_CFStringSetExternalCharactersNoCopy_F},
	{"CFStringFindAndReplace",&_CFStringFindAndReplace_F},
	{"CFStringReplaceAll",&_CFStringReplaceAll_F},
	{"CFStringReplace",&_CFStringReplace_F},
	{"CFStringDelete",&_CFStringDelete_F},
	{"CFStringInsert",&_CFStringInsert_F},
	{"CFStringAppendFormatAndArguments",&_CFStringAppendFormatAndArguments_F},
	{"CFStringAppendFormat",&_CFStringAppendFormat_F},
	{"CFStringAppendCString",&_CFStringAppendCString_F},
	{"CFStringAppendPascalString",&_CFStringAppendPascalString_F},
	{"CFStringAppendCharacters",&_CFStringAppendCharacters_F},
	{"CFStringAppend",&_CFStringAppend_F},
	{"CFStringGetDoubleValue",&_CFStringGetDoubleValue_F},
	{"CFStringGetIntValue",&_CFStringGetIntValue_F},
	{"CFStringCreateArrayBySeparatingStrings",&_CFStringCreateArrayBySeparatingStrings_F},
	{"CFStringCreateByCombiningStrings",&_CFStringCreateByCombiningStrings_F},
	{"CFStringGetLineBounds",&_CFStringGetLineBounds_F},
	{"CFStringFindCharacterFromSet",&_CFStringFindCharacterFromSet_F},
	{"CFStringGetRangeOfComposedCharactersAtIndex",&_CFStringGetRangeOfComposedCharactersAtIndex_F},
	{"CFStringHasSuffix",&_CFStringHasSuffix_F},
	{"CFStringHasPrefix",&_CFStringHasPrefix_F},
	{"CFStringFind",&_CFStringFind_F},
	{"CFStringCreateArrayWithFindResults",&_CFStringCreateArrayWithFindResults_F},
	{"CFStringFindWithOptions",&_CFStringFindWithOptions_F},
	{"CFStringCompare",&_CFStringCompare_F},
	{"CFStringCompareWithOptions",&_CFStringCompareWithOptions_F},
	{"CFStringCreateWithFileSystemRepresentation",&_CFStringCreateWithFileSystemRepresentation_F},
	{"CFStringGetMaximumSizeOfFileSystemRepresentation",&_CFStringGetMaximumSizeOfFileSystemRepresentation_F},
	{"CFStringGetFileSystemRepresentation",&_CFStringGetFileSystemRepresentation_F},
	{"CFStringGetMaximumSizeForEncoding",&_CFStringGetMaximumSizeForEncoding_F},
	{"CFStringGetSystemEncoding",&_CFStringGetSystemEncoding_F},
	{"CFStringGetFastestEncoding",&_CFStringGetFastestEncoding_F},
	{"CFStringGetSmallestEncoding",&_CFStringGetSmallestEncoding_F},
	{"CFStringCreateExternalRepresentation",&_CFStringCreateExternalRepresentation_F},
	{"CFStringCreateFromExternalRepresentation",&_CFStringCreateFromExternalRepresentation_F},
	{"CFStringCreateWithBytes",&_CFStringCreateWithBytes_F},
	{"CFStringGetBytes",&_CFStringGetBytes_F},
	{"CFStringGetCharactersPtr",&_CFStringGetCharactersPtr_F},
	{"CFStringGetCStringPtr",&_CFStringGetCStringPtr_F},
	{"CFStringGetPascalStringPtr",&_CFStringGetPascalStringPtr_F},
	{"CFStringGetCString",&_CFStringGetCString_F},
	{"CFStringGetPascalString",&_CFStringGetPascalString_F},
	{"CFStringGetCharacters",&_CFStringGetCharacters_F},
	{"CFStringGetCharacterAtIndex",&_CFStringGetCharacterAtIndex_F},
	{"CFStringGetLength",&_CFStringGetLength_F},
	{"CFStringCreateMutableWithExternalCharactersNoCopy",&_CFStringCreateMutableWithExternalCharactersNoCopy_F},
	{"CFStringCreateMutableCopy",&_CFStringCreateMutableCopy_F},
	{"CFStringCreateMutable",&_CFStringCreateMutable_F},
	{"CFStringCreateWithFormatAndArguments",&_CFStringCreateWithFormatAndArguments_F},
	{"CFStringCreateWithFormat",&_CFStringCreateWithFormat_F},
	{"CFStringCreateCopy",&_CFStringCreateCopy_F},
	{"CFStringCreateWithSubstring",&_CFStringCreateWithSubstring_F},
	{"CFStringCreateWithCharactersNoCopy",&_CFStringCreateWithCharactersNoCopy_F},
	{"CFStringCreateWithCStringNoCopy",&_CFStringCreateWithCStringNoCopy_F},
	{"CFStringCreateWithPascalStringNoCopy",&_CFStringCreateWithPascalStringNoCopy_F},
	{"CFStringCreateWithCharacters",&_CFStringCreateWithCharacters_F},
	{"CFStringCreateWithCString",&_CFStringCreateWithCString_F},
	{"CFStringCreateWithPascalString",&_CFStringCreateWithPascalString_F},
	{"CFStringGetTypeID",&_CFStringGetTypeID_F},
	{"CFLocaleCopyDisplayNameForPropertyValue",&_CFLocaleCopyDisplayNameForPropertyValue_F},
	{"CFLocaleGetValue",&_CFLocaleGetValue_F},
	{"CFLocaleGetIdentifier",&_CFLocaleGetIdentifier_F},
	{"CFLocaleCreateCopy",&_CFLocaleCreateCopy_F},
	{"CFLocaleCreate",&_CFLocaleCreate_F},
	{"CFLocaleCreateLocaleIdentifierFromComponents",&_CFLocaleCreateLocaleIdentifierFromComponents_F},
	{"CFLocaleCreateComponentsFromLocaleIdentifier",&_CFLocaleCreateComponentsFromLocaleIdentifier_F},
	{"CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes",&_CFLocaleCreateCanonicalLocaleIdentifierFromScriptManagerCodes_F},
	{"CFLocaleCreateCanonicalLocaleIdentifierFromString",&_CFLocaleCreateCanonicalLocaleIdentifierFromString_F},
	{"CFLocaleCreateCanonicalLanguageIdentifierFromString",&_CFLocaleCreateCanonicalLanguageIdentifierFromString_F},
	{"CFLocaleCopyISOCurrencyCodes",&_CFLocaleCopyISOCurrencyCodes_F},
	{"CFLocaleCopyISOCountryCodes",&_CFLocaleCopyISOCountryCodes_F},
	{"CFLocaleCopyISOLanguageCodes",&_CFLocaleCopyISOLanguageCodes_F},
	{"CFLocaleCopyAvailableLocaleIdentifiers",&_CFLocaleCopyAvailableLocaleIdentifiers_F},
	{"CFLocaleCopyCurrent",&_CFLocaleCopyCurrent_F},
	{"CFLocaleGetSystem",&_CFLocaleGetSystem_F},
	{"CFLocaleGetTypeID",&_CFLocaleGetTypeID_F},
	{"CFCharacterSetInvert",&_CFCharacterSetInvert_F},
	{"CFCharacterSetIntersect",&_CFCharacterSetIntersect_F},
	{"CFCharacterSetUnion",&_CFCharacterSetUnion_F},
	{"CFCharacterSetRemoveCharactersInString",&_CFCharacterSetRemoveCharactersInString_F},
	{"CFCharacterSetAddCharactersInString",&_CFCharacterSetAddCharactersInString_F},
	{"CFCharacterSetRemoveCharactersInRange",&_CFCharacterSetRemoveCharactersInRange_F},
	{"CFCharacterSetAddCharactersInRange",&_CFCharacterSetAddCharactersInRange_F},
	{"CFCharacterSetCreateBitmapRepresentation",&_CFCharacterSetCreateBitmapRepresentation_F},
	{"CFCharacterSetIsLongCharacterMember",&_CFCharacterSetIsLongCharacterMember_F},
	{"CFCharacterSetIsCharacterMember",&_CFCharacterSetIsCharacterMember_F},
	{"CFCharacterSetCreateMutableCopy",&_CFCharacterSetCreateMutableCopy_F},
	{"CFCharacterSetCreateCopy",&_CFCharacterSetCreateCopy_F},
	{"CFCharacterSetCreateMutable",&_CFCharacterSetCreateMutable_F},
	{"CFCharacterSetHasMemberInPlane",&_CFCharacterSetHasMemberInPlane_F},
	{"CFCharacterSetIsSupersetOfSet",&_CFCharacterSetIsSupersetOfSet_F},
	{"CFCharacterSetCreateInvertedSet",&_CFCharacterSetCreateInvertedSet_F},
	{"CFCharacterSetCreateWithBitmapRepresentation",&_CFCharacterSetCreateWithBitmapRepresentation_F},
	{"CFCharacterSetCreateWithCharactersInString",&_CFCharacterSetCreateWithCharactersInString_F},
	{"CFCharacterSetCreateWithCharactersInRange",&_CFCharacterSetCreateWithCharactersInRange_F},
	{"CFCharacterSetGetPredefined",&_CFCharacterSetGetPredefined_F},
	{"CFCharacterSetGetTypeID",&_CFCharacterSetGetTypeID_F},
	{"CFDataDeleteBytes",&_CFDataDeleteBytes_F},
	{"CFDataReplaceBytes",&_CFDataReplaceBytes_F},
	{"CFDataAppendBytes",&_CFDataAppendBytes_F},
	{"CFDataIncreaseLength",&_CFDataIncreaseLength_F},
	{"CFDataSetLength",&_CFDataSetLength_F},
	{"CFDataGetBytes",&_CFDataGetBytes_F},
	{"CFDataGetMutableBytePtr",&_CFDataGetMutableBytePtr_F},
	{"CFDataGetBytePtr",&_CFDataGetBytePtr_F},
	{"CFDataGetLength",&_CFDataGetLength_F},
	{"CFDataCreateMutableCopy",&_CFDataCreateMutableCopy_F},
	{"CFDataCreateMutable",&_CFDataCreateMutable_F},
	{"CFDataCreateCopy",&_CFDataCreateCopy_F},
	{"CFDataCreateWithBytesNoCopy",&_CFDataCreateWithBytesNoCopy_F},
	{"CFDataCreate",&_CFDataCreate_F},
	{"CFDataGetTypeID",&_CFDataGetTypeID_F},
	{"CFAbsoluteTimeGetWeekOfYear",&_CFAbsoluteTimeGetWeekOfYear_F},
	{"CFAbsoluteTimeGetDayOfYear",&_CFAbsoluteTimeGetDayOfYear_F},
	{"CFAbsoluteTimeGetDayOfWeek",&_CFAbsoluteTimeGetDayOfWeek_F},
	{"CFAbsoluteTimeGetDifferenceAsGregorianUnits",&_CFAbsoluteTimeGetDifferenceAsGregorianUnits_F},
	{"CFAbsoluteTimeAddGregorianUnits",&_CFAbsoluteTimeAddGregorianUnits_F},
	{"CFAbsoluteTimeGetGregorianDate",&_CFAbsoluteTimeGetGregorianDate_F},
	{"CFGregorianDateGetAbsoluteTime",&_CFGregorianDateGetAbsoluteTime_F},
	{"CFGregorianDateIsValid",&_CFGregorianDateIsValid_F},
	{"CFDateCompare",&_CFDateCompare_F},
	{"CFDateGetTimeIntervalSinceDate",&_CFDateGetTimeIntervalSinceDate_F},
	{"CFDateGetAbsoluteTime",&_CFDateGetAbsoluteTime_F},
	{"CFDateCreate",&_CFDateCreate_F},
	{"CFDateGetTypeID",&_CFDateGetTypeID_F},
	{"CFAbsoluteTimeGetCurrent",&_CFAbsoluteTimeGetCurrent_F},
	{"CFArrayAppendArray",&_CFArrayAppendArray_F},
	{"CFArraySortValues",&_CFArraySortValues_F},
	{"CFArrayExchangeValuesAtIndices",&_CFArrayExchangeValuesAtIndices_F},
	{"CFArrayReplaceValues",&_CFArrayReplaceValues_F},
	{"CFArrayRemoveAllValues",&_CFArrayRemoveAllValues_F},
	{"CFArrayRemoveValueAtIndex",&_CFArrayRemoveValueAtIndex_F},
	{"CFArraySetValueAtIndex",&_CFArraySetValueAtIndex_F},
	{"CFArrayInsertValueAtIndex",&_CFArrayInsertValueAtIndex_F},
	{"CFArrayAppendValue",&_CFArrayAppendValue_F},
	{"CFArrayBSearchValues",&_CFArrayBSearchValues_F},
	{"CFArrayGetLastIndexOfValue",&_CFArrayGetLastIndexOfValue_F},
	{"CFArrayGetFirstIndexOfValue",&_CFArrayGetFirstIndexOfValue_F},
	{"CFArrayApplyFunction",&_CFArrayApplyFunction_F},
	{"CFArrayGetValues",&_CFArrayGetValues_F},
	{"CFArrayGetValueAtIndex",&_CFArrayGetValueAtIndex_F},
	{"CFArrayContainsValue",&_CFArrayContainsValue_F},
	{"CFArrayGetCountOfValue",&_CFArrayGetCountOfValue_F},
	{"CFArrayGetCount",&_CFArrayGetCount_F},
	{"CFArrayCreateMutableCopy",&_CFArrayCreateMutableCopy_F},
	{"CFArrayCreateMutable",&_CFArrayCreateMutable_F},
	{"CFArrayCreateCopy",&_CFArrayCreateCopy_F},
	{"CFArrayCreate",&_CFArrayCreate_F},
	{"CFArrayGetTypeID",&_CFArrayGetTypeID_F},
	{"CFDictionaryRemoveAllValues",&_CFDictionaryRemoveAllValues_F},
	{"CFDictionaryRemoveValue",&_CFDictionaryRemoveValue_F},
	{"CFDictionaryReplaceValue",&_CFDictionaryReplaceValue_F},
	{"CFDictionarySetValue",&_CFDictionarySetValue_F},
	{"CFDictionaryAddValue",&_CFDictionaryAddValue_F},
	{"CFDictionaryApplyFunction",&_CFDictionaryApplyFunction_F},
	{"CFDictionaryGetKeysAndValues",&_CFDictionaryGetKeysAndValues_F},
	{"CFDictionaryGetValueIfPresent",&_CFDictionaryGetValueIfPresent_F},
	{"CFDictionaryGetValue",&_CFDictionaryGetValue_F},
	{"CFDictionaryContainsValue",&_CFDictionaryContainsValue_F},
	{"CFDictionaryContainsKey",&_CFDictionaryContainsKey_F},
	{"CFDictionaryGetCountOfValue",&_CFDictionaryGetCountOfValue_F},
	{"CFDictionaryGetCountOfKey",&_CFDictionaryGetCountOfKey_F},
	{"CFDictionaryGetCount",&_CFDictionaryGetCount_F},
	{"CFDictionaryCreateMutableCopy",&_CFDictionaryCreateMutableCopy_F},
	{"CFDictionaryCreateMutable",&_CFDictionaryCreateMutable_F},
	{"CFDictionaryCreateCopy",&_CFDictionaryCreateCopy_F},
	{"CFDictionaryCreate",&_CFDictionaryCreate_F},
	{"CFDictionaryGetTypeID",&_CFDictionaryGetTypeID_F},
	{"CFGetAllocator",&_CFGetAllocator_F},
	{"CFCopyDescription",&_CFCopyDescription_F},
	{"CFHash",&_CFHash_F},
	{"CFEqual",&_CFEqual_F},
	{"CFMakeCollectable",&_CFMakeCollectable_F},
	{"CFGetRetainCount",&_CFGetRetainCount_F},
	{"CFRelease",&_CFRelease_F},
	{"CFRetain",&_CFRetain_F},
	{"CFCopyTypeIDDescription",&_CFCopyTypeIDDescription_F},
	{"CFGetTypeID",&_CFGetTypeID_F},
	{"CFAllocatorGetContext",&_CFAllocatorGetContext_F},
	{"CFAllocatorGetPreferredSizeForSize",&_CFAllocatorGetPreferredSizeForSize_F},
	{"CFAllocatorDeallocate",&_CFAllocatorDeallocate_F},
	{"CFAllocatorReallocate",&_CFAllocatorReallocate_F},
	{"CFAllocatorAllocate",&_CFAllocatorAllocate_F},
	{"CFAllocatorCreate",&_CFAllocatorCreate_F},
	{"CFAllocatorGetDefault",&_CFAllocatorGetDefault_F},
	{"CFAllocatorSetDefault",&_CFAllocatorSetDefault_F},
	{"CFAllocatorGetTypeID",&_CFAllocatorGetTypeID_F},
	{"CFNullGetTypeID",&_CFNullGetTypeID_F},
	{"__CFRangeMake",&___CFRangeMake_F},
	{"vprintf_stderr_func",&_vprintf_stderr_func_F},
	{"map_fd",&_map_fd_F},
	{"pid_for_task",&_pid_for_task_F},
	{"task_name_for_pid",&_task_name_for_pid_F},
	{"task_for_pid",&_task_for_pid_F},
	{"task_self_trap",&_task_self_trap_F},
	{"thread_switch",&_thread_switch_F},
	{"swtch",&_swtch_F},
	{"swtch_pri",&_swtch_pri_F},
//	{"htonl",&_htonl_F},
//	{"ntohl",&_ntohl_F},
//	{"htons",&_htons_F},
//	{"ntohs",&_ntohs_F},
	{"mach_thread_self",&_mach_thread_self_F},
	{"mach_host_self",&_mach_host_self_F},
	{"mach_task_self",&_mach_task_self_F},
	{"mach_msg",&_mach_msg_F},
	{"mach_msg_overwrite",&_mach_msg_overwrite_F},
	{"IODisplayGetIntegerRangeParameter",&_IODisplayGetIntegerRangeParameter_F},
	{"IODisplaySetIntegerParameter",&_IODisplaySetIntegerParameter_F},
	{"IORegisterForSystemPower",&_IORegisterForSystemPower_F},
	{"IOAllowPowerChange",&_IOAllowPowerChange_F},
	{"IOCancelPowerChange",&_IOCancelPowerChange_F},
	{"IOPMFindPowerManagement",&_IOPMFindPowerManagement_F},
	{"IOPMSleepSystem",&_IOPMSleepSystem_F},
	{"IOPMSleepEnabled",&_IOPMSleepEnabled_F},
	{"IODeregisterForSystemPower",&_IODeregisterForSystemPower_F},
	{"IOPMSchedulePowerEvent",&_IOPMSchedulePowerEvent_F},
	{"IOPMCancelScheduledPowerEvent",&_IOPMCancelScheduledPowerEvent_F},
	{"IOPMCopyScheduledPowerEvents",&_IOPMCopyScheduledPowerEvents_F},
};

Nat4	VPX_MacOSX_IOKit_Procedures_Number = 515 - 4 + 12;

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
