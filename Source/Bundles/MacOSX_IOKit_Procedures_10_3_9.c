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

/* --------------------- Start User created functions -------------------------------- */


/* --------------------- End User created functions -------------------------------- */

	VPL_Parameter _NXSwapHostShortToLittle_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostShortToLittle_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostShortToLittle_F = {"NXSwapHostShortToLittle",NXSwapHostShortToLittle,&_NXSwapHostShortToLittle_1,&_NXSwapHostShortToLittle_R};

	VPL_Parameter _NXSwapHostIntToLittle_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostIntToLittle_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostIntToLittle_F = {"NXSwapHostIntToLittle",NXSwapHostIntToLittle,&_NXSwapHostIntToLittle_1,&_NXSwapHostIntToLittle_R};

	VPL_Parameter _NXSwapHostLongToLittle_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostLongToLittle_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostLongToLittle_F = {"NXSwapHostLongToLittle",NXSwapHostLongToLittle,&_NXSwapHostLongToLittle_1,&_NXSwapHostLongToLittle_R};

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

	VPL_Parameter _IOUSBCompletionAction_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _IOUSBCompletionAction_3 = { kIntType,4,NULL,0,0,&_IOUSBCompletionAction_4};
	VPL_Parameter _IOUSBCompletionAction_2 = { kPointerType,0,"void",1,0,&_IOUSBCompletionAction_3};
	VPL_Parameter _IOUSBCompletionAction_1 = { kPointerType,0,"void",1,0,&_IOUSBCompletionAction_2};
	VPL_ExtProcedure _IOUSBCompletionAction_F = {"IOUSBCompletionAction",NULL,&_IOUSBCompletionAction_1,NULL};

	VPL_Parameter _NXSwapHostFloatToLittle_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostFloatToLittle_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostFloatToLittle_F = {"NXSwapHostFloatToLittle",NXSwapHostFloatToLittle,&_NXSwapHostFloatToLittle_1,&_NXSwapHostFloatToLittle_R};

	VPL_Parameter _NXSwapHostDoubleToLittle_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostDoubleToLittle_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostDoubleToLittle_F = {"NXSwapHostDoubleToLittle",NXSwapHostDoubleToLittle,&_NXSwapHostDoubleToLittle_1,&_NXSwapHostDoubleToLittle_R};

	VPL_Parameter _NXSwapHostLongLongToLittle_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostLongLongToLittle_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostLongLongToLittle_F = {"NXSwapHostLongLongToLittle",NXSwapHostLongLongToLittle,&_NXSwapHostLongLongToLittle_1,&_NXSwapHostLongLongToLittle_R};

	VPL_Parameter _NXSwapLittleFloatToHost_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapLittleFloatToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapLittleFloatToHost_F = {"NXSwapLittleFloatToHost",NXSwapLittleFloatToHost,&_NXSwapLittleFloatToHost_1,&_NXSwapLittleFloatToHost_R};

	VPL_Parameter _NXSwapLittleDoubleToHost_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _NXSwapLittleDoubleToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapLittleDoubleToHost_F = {"NXSwapLittleDoubleToHost",NXSwapLittleDoubleToHost,&_NXSwapLittleDoubleToHost_1,&_NXSwapLittleDoubleToHost_R};

	VPL_Parameter _NXSwapLittleLongLongToHost_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapLittleLongLongToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapLittleLongLongToHost_F = {"NXSwapLittleLongLongToHost",NXSwapLittleLongLongToHost,&_NXSwapLittleLongLongToHost_1,&_NXSwapLittleLongLongToHost_R};

	VPL_Parameter _NXSwapLittleLongToHost_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapLittleLongToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapLittleLongToHost_F = {"NXSwapLittleLongToHost",NXSwapLittleLongToHost,&_NXSwapLittleLongToHost_1,&_NXSwapLittleLongToHost_R};

	VPL_Parameter _NXSwapLittleIntToHost_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapLittleIntToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapLittleIntToHost_F = {"NXSwapLittleIntToHost",NXSwapLittleIntToHost,&_NXSwapLittleIntToHost_1,&_NXSwapLittleIntToHost_R};

	VPL_Parameter _NXSwapLittleShortToHost_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _NXSwapLittleShortToHost_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapLittleShortToHost_F = {"NXSwapLittleShortToHost",NXSwapLittleShortToHost,&_NXSwapLittleShortToHost_1,&_NXSwapLittleShortToHost_R};

	VPL_Parameter _NXSwapHostFloatToBig_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostFloatToBig_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostFloatToBig_F = {"NXSwapHostFloatToBig",NXSwapHostFloatToBig,&_NXSwapHostFloatToBig_1,&_NXSwapHostFloatToBig_R};

	VPL_Parameter _NXSwapHostDoubleToBig_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostDoubleToBig_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostDoubleToBig_F = {"NXSwapHostDoubleToBig",NXSwapHostDoubleToBig,&_NXSwapHostDoubleToBig_1,&_NXSwapHostDoubleToBig_R};

	VPL_Parameter _NXSwapHostLongLongToBig_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostLongLongToBig_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostLongLongToBig_F = {"NXSwapHostLongLongToBig",NXSwapHostLongLongToBig,&_NXSwapHostLongLongToBig_1,&_NXSwapHostLongLongToBig_R};

	VPL_Parameter _NXSwapHostLongToBig_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostLongToBig_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostLongToBig_F = {"NXSwapHostLongToBig",NXSwapHostLongToBig,&_NXSwapHostLongToBig_1,&_NXSwapHostLongToBig_R};

	VPL_Parameter _NXSwapHostIntToBig_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostIntToBig_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostIntToBig_F = {"NXSwapHostIntToBig",NXSwapHostIntToBig,&_NXSwapHostIntToBig_1,&_NXSwapHostIntToBig_R};

	VPL_Parameter _NXSwapHostShortToBig_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _NXSwapHostShortToBig_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapHostShortToBig_F = {"NXSwapHostShortToBig",NXSwapHostShortToBig,&_NXSwapHostShortToBig_1,&_NXSwapHostShortToBig_R};

	VPL_Parameter _NXSwapBigFloatToHost_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapBigFloatToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapBigFloatToHost_F = {"NXSwapBigFloatToHost",NXSwapBigFloatToHost,&_NXSwapBigFloatToHost_1,&_NXSwapBigFloatToHost_R};

	VPL_Parameter _NXSwapBigDoubleToHost_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _NXSwapBigDoubleToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapBigDoubleToHost_F = {"NXSwapBigDoubleToHost",NXSwapBigDoubleToHost,&_NXSwapBigDoubleToHost_1,&_NXSwapBigDoubleToHost_R};

	VPL_Parameter _NXSwapBigLongLongToHost_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapBigLongLongToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapBigLongLongToHost_F = {"NXSwapBigLongLongToHost",NXSwapBigLongLongToHost,&_NXSwapBigLongLongToHost_1,&_NXSwapBigLongLongToHost_R};

	VPL_Parameter _NXSwapBigLongToHost_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapBigLongToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapBigLongToHost_F = {"NXSwapBigLongToHost",NXSwapBigLongToHost,&_NXSwapBigLongToHost_1,&_NXSwapBigLongToHost_R};

	VPL_Parameter _NXSwapBigIntToHost_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapBigIntToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapBigIntToHost_F = {"NXSwapBigIntToHost",NXSwapBigIntToHost,&_NXSwapBigIntToHost_1,&_NXSwapBigIntToHost_R};

	VPL_Parameter _NXSwapBigShortToHost_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _NXSwapBigShortToHost_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapBigShortToHost_F = {"NXSwapBigShortToHost",NXSwapBigShortToHost,&_NXSwapBigShortToHost_1,&_NXSwapBigShortToHost_R};

	VPL_Parameter _NXHostByteOrder_R = { kEnumType,4,"NXByteOrder",0,0,NULL};
	VPL_ExtProcedure _NXHostByteOrder_F = {"NXHostByteOrder",NXHostByteOrder,NULL,&_NXHostByteOrder_R};

	VPL_Parameter _NXSwapDouble_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapDouble_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapDouble_F = {"NXSwapDouble",NXSwapDouble,&_NXSwapDouble_1,&_NXSwapDouble_R};

	VPL_Parameter _NXSwapFloat_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapFloat_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapFloat_F = {"NXSwapFloat",NXSwapFloat,&_NXSwapFloat_1,&_NXSwapFloat_R};

	VPL_Parameter _NXConvertSwappedDoubleToHost_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _NXConvertSwappedDoubleToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXConvertSwappedDoubleToHost_F = {"NXConvertSwappedDoubleToHost",NXConvertSwappedDoubleToHost,&_NXConvertSwappedDoubleToHost_1,&_NXConvertSwappedDoubleToHost_R};

	VPL_Parameter _NXConvertHostDoubleToSwapped_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXConvertHostDoubleToSwapped_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _NXConvertHostDoubleToSwapped_F = {"NXConvertHostDoubleToSwapped",NXConvertHostDoubleToSwapped,&_NXConvertHostDoubleToSwapped_1,&_NXConvertHostDoubleToSwapped_R};

	VPL_Parameter _NXConvertSwappedFloatToHost_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _NXConvertSwappedFloatToHost_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXConvertSwappedFloatToHost_F = {"NXConvertSwappedFloatToHost",NXConvertSwappedFloatToHost,&_NXConvertSwappedFloatToHost_1,&_NXConvertSwappedFloatToHost_R};

	VPL_Parameter _NXConvertHostFloatToSwapped_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXConvertHostFloatToSwapped_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXConvertHostFloatToSwapped_F = {"NXConvertHostFloatToSwapped",NXConvertHostFloatToSwapped,&_NXConvertHostFloatToSwapped_1,&_NXConvertHostFloatToSwapped_R};

	VPL_Parameter _NXSwapLongLong_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapLongLong_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapLongLong_F = {"NXSwapLongLong",NXSwapLongLong,&_NXSwapLongLong_1,&_NXSwapLongLong_R};

	VPL_Parameter _NXSwapLong_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapLong_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapLong_F = {"NXSwapLong",NXSwapLong,&_NXSwapLong_1,&_NXSwapLong_R};

	VPL_Parameter _NXSwapInt_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NXSwapInt_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapInt_F = {"NXSwapInt",NXSwapInt,&_NXSwapInt_1,&_NXSwapInt_R};

	VPL_Parameter _NXSwapShort_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _NXSwapShort_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _NXSwapShort_F = {"NXSwapShort",NXSwapShort,&_NXSwapShort_1,&_NXSwapShort_R};

	VPL_Parameter __OSSwapInt64_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter __OSSwapInt64_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure __OSSwapInt64_F = {"_OSSwapInt64",_OSSwapInt64,&__OSSwapInt64_1,&__OSSwapInt64_R};

	VPL_Parameter __OSSwapInt32_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter __OSSwapInt32_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure __OSSwapInt32_F = {"_OSSwapInt32",_OSSwapInt32,&__OSSwapInt32_1,&__OSSwapInt32_R};

	VPL_Parameter __OSSwapInt16_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter __OSSwapInt16_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure __OSSwapInt16_F = {"_OSSwapInt16",_OSSwapInt16,&__OSSwapInt16_1,&__OSSwapInt16_R};

	VPL_Parameter _OSWriteSwapInt64_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _OSWriteSwapInt64_2 = { kUnsignedType,4,NULL,0,0,&_OSWriteSwapInt64_3};
	VPL_Parameter _OSWriteSwapInt64_1 = { kPointerType,0,"void",1,0,&_OSWriteSwapInt64_2};
	VPL_ExtProcedure _OSWriteSwapInt64_F = {"OSWriteSwapInt64",OSWriteSwapInt64,&_OSWriteSwapInt64_1,NULL};

	VPL_Parameter _OSWriteSwapInt32_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _OSWriteSwapInt32_2 = { kUnsignedType,4,NULL,0,0,&_OSWriteSwapInt32_3};
	VPL_Parameter _OSWriteSwapInt32_1 = { kPointerType,0,"void",1,0,&_OSWriteSwapInt32_2};
	VPL_ExtProcedure _OSWriteSwapInt32_F = {"OSWriteSwapInt32",OSWriteSwapInt32,&_OSWriteSwapInt32_1,NULL};

	VPL_Parameter _OSWriteSwapInt16_3 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _OSWriteSwapInt16_2 = { kUnsignedType,4,NULL,0,0,&_OSWriteSwapInt16_3};
	VPL_Parameter _OSWriteSwapInt16_1 = { kPointerType,0,"void",1,0,&_OSWriteSwapInt16_2};
	VPL_ExtProcedure _OSWriteSwapInt16_F = {"OSWriteSwapInt16",OSWriteSwapInt16,&_OSWriteSwapInt16_1,NULL};

	VPL_Parameter _OSReadSwapInt64_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _OSReadSwapInt64_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _OSReadSwapInt64_1 = { kPointerType,0,"void",1,0,&_OSReadSwapInt64_2};
	VPL_ExtProcedure _OSReadSwapInt64_F = {"OSReadSwapInt64",OSReadSwapInt64,&_OSReadSwapInt64_1,&_OSReadSwapInt64_R};

	VPL_Parameter _OSReadSwapInt32_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _OSReadSwapInt32_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _OSReadSwapInt32_1 = { kPointerType,0,"void",1,0,&_OSReadSwapInt32_2};
	VPL_ExtProcedure _OSReadSwapInt32_F = {"OSReadSwapInt32",OSReadSwapInt32,&_OSReadSwapInt32_1,&_OSReadSwapInt32_R};

	VPL_Parameter _OSReadSwapInt16_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _OSReadSwapInt16_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _OSReadSwapInt16_1 = { kPointerType,0,"void",1,0,&_OSReadSwapInt16_2};
	VPL_ExtProcedure _OSReadSwapInt16_F = {"OSReadSwapInt16",OSReadSwapInt16,&_OSReadSwapInt16_1,&_OSReadSwapInt16_R};

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


VPL_DictionaryNode VPX_MacOSX_IOKit_Procedures[] =	{
	{"NXSwapHostShortToLittle",&_NXSwapHostShortToLittle_F},
	{"NXSwapHostIntToLittle",&_NXSwapHostIntToLittle_F},
	{"NXSwapHostLongToLittle",&_NXSwapHostLongToLittle_F},
	{"IOUSBLowLatencyIsocCompletionAction",&_IOUSBLowLatencyIsocCompletionAction_F},
	{"IOUSBIsocCompletionAction",&_IOUSBIsocCompletionAction_F},
	{"IOUSBCompletionAction",&_IOUSBCompletionAction_F},
	{"NXSwapHostFloatToLittle",&_NXSwapHostFloatToLittle_F},
	{"NXSwapHostDoubleToLittle",&_NXSwapHostDoubleToLittle_F},
	{"NXSwapHostLongLongToLittle",&_NXSwapHostLongLongToLittle_F},
	{"NXSwapLittleFloatToHost",&_NXSwapLittleFloatToHost_F},
	{"NXSwapLittleDoubleToHost",&_NXSwapLittleDoubleToHost_F},
	{"NXSwapLittleLongLongToHost",&_NXSwapLittleLongLongToHost_F},
	{"NXSwapLittleLongToHost",&_NXSwapLittleLongToHost_F},
	{"NXSwapLittleIntToHost",&_NXSwapLittleIntToHost_F},
	{"NXSwapLittleShortToHost",&_NXSwapLittleShortToHost_F},
	{"NXSwapHostFloatToBig",&_NXSwapHostFloatToBig_F},
	{"NXSwapHostDoubleToBig",&_NXSwapHostDoubleToBig_F},
	{"NXSwapHostLongLongToBig",&_NXSwapHostLongLongToBig_F},
	{"NXSwapHostLongToBig",&_NXSwapHostLongToBig_F},
	{"NXSwapHostIntToBig",&_NXSwapHostIntToBig_F},
	{"NXSwapHostShortToBig",&_NXSwapHostShortToBig_F},
	{"NXSwapBigFloatToHost",&_NXSwapBigFloatToHost_F},
	{"NXSwapBigDoubleToHost",&_NXSwapBigDoubleToHost_F},
	{"NXSwapBigLongLongToHost",&_NXSwapBigLongLongToHost_F},
	{"NXSwapBigLongToHost",&_NXSwapBigLongToHost_F},
	{"NXSwapBigIntToHost",&_NXSwapBigIntToHost_F},
	{"NXSwapBigShortToHost",&_NXSwapBigShortToHost_F},
	{"NXHostByteOrder",&_NXHostByteOrder_F},
	{"NXSwapDouble",&_NXSwapDouble_F},
	{"NXSwapFloat",&_NXSwapFloat_F},
	{"NXConvertSwappedDoubleToHost",&_NXConvertSwappedDoubleToHost_F},
	{"NXConvertHostDoubleToSwapped",&_NXConvertHostDoubleToSwapped_F},
	{"NXConvertSwappedFloatToHost",&_NXConvertSwappedFloatToHost_F},
	{"NXConvertHostFloatToSwapped",&_NXConvertHostFloatToSwapped_F},
	{"NXSwapLongLong",&_NXSwapLongLong_F},
	{"NXSwapLong",&_NXSwapLong_F},
	{"NXSwapInt",&_NXSwapInt_F},
	{"NXSwapShort",&_NXSwapShort_F},
	{"_OSSwapInt64",&__OSSwapInt64_F},
	{"_OSSwapInt32",&__OSSwapInt32_F},
	{"_OSSwapInt16",&__OSSwapInt16_F},
	{"OSWriteSwapInt64",&_OSWriteSwapInt64_F},
	{"OSWriteSwapInt32",&_OSWriteSwapInt32_F},
	{"OSWriteSwapInt16",&_OSWriteSwapInt16_F},
	{"OSReadSwapInt64",&_OSReadSwapInt64_F},
	{"OSReadSwapInt32",&_OSReadSwapInt32_F},
	{"OSReadSwapInt16",&_OSReadSwapInt16_F},
	{"IODestroyPlugInInterface",&_IODestroyPlugInInterface_F},
	{"IOCreatePlugInInterfaceForService",&_IOCreatePlugInInterfaceForService_F},
};

Nat4	VPX_MacOSX_IOKit_Procedures_Number = 49;

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
