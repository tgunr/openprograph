/*
	
	MacOSX_Structures.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

	VPL_ExtField _IOUSBInterfaceStruct197_56 = { "GetIOUSBLibVersion",220,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBInterfaceStruct197_55 = { "GetFrameListTime",216,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_56};
	VPL_ExtField _IOUSBInterfaceStruct197_54 = { "GetBusMicroFrameNumber",212,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_55};
	VPL_ExtField _IOUSBInterfaceStruct197_53 = { "LowLatencyDestroyBuffer",208,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_54};
	VPL_ExtField _IOUSBInterfaceStruct197_52 = { "LowLatencyCreateBuffer",204,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_53};
	VPL_ExtField _IOUSBInterfaceStruct197_51 = { "LowLatencyWriteIsochPipeAsync",200,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_52};
	VPL_ExtField _IOUSBInterfaceStruct197_50 = { "LowLatencyReadIsochPipeAsync",196,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_51};
	VPL_ExtField _IOUSBInterfaceStruct197_49 = { "GetEndpointProperties",192,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_50};
	VPL_ExtField _IOUSBInterfaceStruct197_48 = { "GetBandwidthAvailable",188,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_49};
	VPL_ExtField _IOUSBInterfaceStruct197_47 = { "SetPipePolicy",184,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_48};
	VPL_ExtField _IOUSBInterfaceStruct197_46 = { "ClearPipeStallBothEnds",180,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_47};
	VPL_ExtField _IOUSBInterfaceStruct197_45 = { "USBInterfaceOpenSeize",176,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_46};
	VPL_ExtField _IOUSBInterfaceStruct197_44 = { "USBInterfaceGetStringIndex",172,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_45};
	VPL_ExtField _IOUSBInterfaceStruct197_43 = { "WritePipeAsyncTO",168,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_44};
	VPL_ExtField _IOUSBInterfaceStruct197_42 = { "ReadPipeAsyncTO",164,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_43};
	VPL_ExtField _IOUSBInterfaceStruct197_41 = { "WritePipeTO",160,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_42};
	VPL_ExtField _IOUSBInterfaceStruct197_40 = { "ReadPipeTO",156,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_41};
	VPL_ExtField _IOUSBInterfaceStruct197_39 = { "ControlRequestAsyncTO",152,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_40};
	VPL_ExtField _IOUSBInterfaceStruct197_38 = { "ControlRequestTO",148,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_39};
	VPL_ExtField _IOUSBInterfaceStruct197_37 = { "WriteIsochPipeAsync",144,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_38};
	VPL_ExtField _IOUSBInterfaceStruct197_36 = { "ReadIsochPipeAsync",140,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_37};
	VPL_ExtField _IOUSBInterfaceStruct197_35 = { "WritePipeAsync",136,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_36};
	VPL_ExtField _IOUSBInterfaceStruct197_34 = { "ReadPipeAsync",132,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_35};
	VPL_ExtField _IOUSBInterfaceStruct197_33 = { "WritePipe",128,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_34};
	VPL_ExtField _IOUSBInterfaceStruct197_32 = { "ReadPipe",124,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_33};
	VPL_ExtField _IOUSBInterfaceStruct197_31 = { "ClearPipeStall",120,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_32};
	VPL_ExtField _IOUSBInterfaceStruct197_30 = { "ResetPipe",116,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_31};
	VPL_ExtField _IOUSBInterfaceStruct197_29 = { "AbortPipe",112,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_30};
	VPL_ExtField _IOUSBInterfaceStruct197_28 = { "GetPipeStatus",108,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_29};
	VPL_ExtField _IOUSBInterfaceStruct197_27 = { "GetPipeProperties",104,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_28};
	VPL_ExtField _IOUSBInterfaceStruct197_26 = { "ControlRequestAsync",100,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_27};
	VPL_ExtField _IOUSBInterfaceStruct197_25 = { "ControlRequest",96,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_26};
	VPL_ExtField _IOUSBInterfaceStruct197_24 = { "GetBusFrameNumber",92,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_25};
	VPL_ExtField _IOUSBInterfaceStruct197_23 = { "SetAlternateInterface",88,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_24};
	VPL_ExtField _IOUSBInterfaceStruct197_22 = { "GetDevice",84,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_23};
	VPL_ExtField _IOUSBInterfaceStruct197_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_22};
	VPL_ExtField _IOUSBInterfaceStruct197_20 = { "GetNumEndpoints",76,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_21};
	VPL_ExtField _IOUSBInterfaceStruct197_19 = { "GetAlternateSetting",72,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_20};
	VPL_ExtField _IOUSBInterfaceStruct197_18 = { "GetInterfaceNumber",68,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_19};
	VPL_ExtField _IOUSBInterfaceStruct197_17 = { "GetConfigurationValue",64,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_18};
	VPL_ExtField _IOUSBInterfaceStruct197_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_17};
	VPL_ExtField _IOUSBInterfaceStruct197_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_16};
	VPL_ExtField _IOUSBInterfaceStruct197_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_15};
	VPL_ExtField _IOUSBInterfaceStruct197_13 = { "GetInterfaceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_14};
	VPL_ExtField _IOUSBInterfaceStruct197_12 = { "GetInterfaceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_13};
	VPL_ExtField _IOUSBInterfaceStruct197_11 = { "GetInterfaceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_12};
	VPL_ExtField _IOUSBInterfaceStruct197_10 = { "USBInterfaceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_11};
	VPL_ExtField _IOUSBInterfaceStruct197_9 = { "USBInterfaceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_10};
	VPL_ExtField _IOUSBInterfaceStruct197_8 = { "GetInterfaceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBInterfaceStruct197_9};
	VPL_ExtField _IOUSBInterfaceStruct197_7 = { "CreateInterfaceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_8};
	VPL_ExtField _IOUSBInterfaceStruct197_6 = { "GetInterfaceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBInterfaceStruct197_7};
	VPL_ExtField _IOUSBInterfaceStruct197_5 = { "CreateInterfaceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct197_6};
	VPL_ExtField _IOUSBInterfaceStruct197_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct197_5};
	VPL_ExtField _IOUSBInterfaceStruct197_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct197_4};
	VPL_ExtField _IOUSBInterfaceStruct197_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBInterfaceStruct197_3};
	VPL_ExtField _IOUSBInterfaceStruct197_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBInterfaceStruct197_2};
	VPL_ExtStructure _IOUSBInterfaceStruct197_S = {"IOUSBInterfaceStruct197",&_IOUSBInterfaceStruct197_1};

	VPL_ExtField _IOUSBInterfaceStruct192_53 = { "LowLatencyDestroyBuffer",208,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBInterfaceStruct192_52 = { "LowLatencyCreateBuffer",204,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_53};
	VPL_ExtField _IOUSBInterfaceStruct192_51 = { "LowLatencyWriteIsochPipeAsync",200,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_52};
	VPL_ExtField _IOUSBInterfaceStruct192_50 = { "LowLatencyReadIsochPipeAsync",196,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_51};
	VPL_ExtField _IOUSBInterfaceStruct192_49 = { "GetEndpointProperties",192,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_50};
	VPL_ExtField _IOUSBInterfaceStruct192_48 = { "GetBandwidthAvailable",188,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_49};
	VPL_ExtField _IOUSBInterfaceStruct192_47 = { "SetPipePolicy",184,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_48};
	VPL_ExtField _IOUSBInterfaceStruct192_46 = { "ClearPipeStallBothEnds",180,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_47};
	VPL_ExtField _IOUSBInterfaceStruct192_45 = { "USBInterfaceOpenSeize",176,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_46};
	VPL_ExtField _IOUSBInterfaceStruct192_44 = { "USBInterfaceGetStringIndex",172,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_45};
	VPL_ExtField _IOUSBInterfaceStruct192_43 = { "WritePipeAsyncTO",168,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_44};
	VPL_ExtField _IOUSBInterfaceStruct192_42 = { "ReadPipeAsyncTO",164,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_43};
	VPL_ExtField _IOUSBInterfaceStruct192_41 = { "WritePipeTO",160,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_42};
	VPL_ExtField _IOUSBInterfaceStruct192_40 = { "ReadPipeTO",156,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_41};
	VPL_ExtField _IOUSBInterfaceStruct192_39 = { "ControlRequestAsyncTO",152,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_40};
	VPL_ExtField _IOUSBInterfaceStruct192_38 = { "ControlRequestTO",148,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_39};
	VPL_ExtField _IOUSBInterfaceStruct192_37 = { "WriteIsochPipeAsync",144,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_38};
	VPL_ExtField _IOUSBInterfaceStruct192_36 = { "ReadIsochPipeAsync",140,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_37};
	VPL_ExtField _IOUSBInterfaceStruct192_35 = { "WritePipeAsync",136,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_36};
	VPL_ExtField _IOUSBInterfaceStruct192_34 = { "ReadPipeAsync",132,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_35};
	VPL_ExtField _IOUSBInterfaceStruct192_33 = { "WritePipe",128,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_34};
	VPL_ExtField _IOUSBInterfaceStruct192_32 = { "ReadPipe",124,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_33};
	VPL_ExtField _IOUSBInterfaceStruct192_31 = { "ClearPipeStall",120,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_32};
	VPL_ExtField _IOUSBInterfaceStruct192_30 = { "ResetPipe",116,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_31};
	VPL_ExtField _IOUSBInterfaceStruct192_29 = { "AbortPipe",112,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_30};
	VPL_ExtField _IOUSBInterfaceStruct192_28 = { "GetPipeStatus",108,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_29};
	VPL_ExtField _IOUSBInterfaceStruct192_27 = { "GetPipeProperties",104,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_28};
	VPL_ExtField _IOUSBInterfaceStruct192_26 = { "ControlRequestAsync",100,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_27};
	VPL_ExtField _IOUSBInterfaceStruct192_25 = { "ControlRequest",96,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_26};
	VPL_ExtField _IOUSBInterfaceStruct192_24 = { "GetBusFrameNumber",92,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_25};
	VPL_ExtField _IOUSBInterfaceStruct192_23 = { "SetAlternateInterface",88,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_24};
	VPL_ExtField _IOUSBInterfaceStruct192_22 = { "GetDevice",84,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_23};
	VPL_ExtField _IOUSBInterfaceStruct192_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_22};
	VPL_ExtField _IOUSBInterfaceStruct192_20 = { "GetNumEndpoints",76,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_21};
	VPL_ExtField _IOUSBInterfaceStruct192_19 = { "GetAlternateSetting",72,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_20};
	VPL_ExtField _IOUSBInterfaceStruct192_18 = { "GetInterfaceNumber",68,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_19};
	VPL_ExtField _IOUSBInterfaceStruct192_17 = { "GetConfigurationValue",64,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_18};
	VPL_ExtField _IOUSBInterfaceStruct192_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_17};
	VPL_ExtField _IOUSBInterfaceStruct192_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_16};
	VPL_ExtField _IOUSBInterfaceStruct192_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_15};
	VPL_ExtField _IOUSBInterfaceStruct192_13 = { "GetInterfaceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_14};
	VPL_ExtField _IOUSBInterfaceStruct192_12 = { "GetInterfaceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_13};
	VPL_ExtField _IOUSBInterfaceStruct192_11 = { "GetInterfaceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_12};
	VPL_ExtField _IOUSBInterfaceStruct192_10 = { "USBInterfaceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_11};
	VPL_ExtField _IOUSBInterfaceStruct192_9 = { "USBInterfaceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_10};
	VPL_ExtField _IOUSBInterfaceStruct192_8 = { "GetInterfaceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBInterfaceStruct192_9};
	VPL_ExtField _IOUSBInterfaceStruct192_7 = { "CreateInterfaceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_8};
	VPL_ExtField _IOUSBInterfaceStruct192_6 = { "GetInterfaceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBInterfaceStruct192_7};
	VPL_ExtField _IOUSBInterfaceStruct192_5 = { "CreateInterfaceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct192_6};
	VPL_ExtField _IOUSBInterfaceStruct192_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct192_5};
	VPL_ExtField _IOUSBInterfaceStruct192_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct192_4};
	VPL_ExtField _IOUSBInterfaceStruct192_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBInterfaceStruct192_3};
	VPL_ExtField _IOUSBInterfaceStruct192_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBInterfaceStruct192_2};
	VPL_ExtStructure _IOUSBInterfaceStruct192_S = {"IOUSBInterfaceStruct192",&_IOUSBInterfaceStruct192_1};

	VPL_ExtField _IOUSBInterfaceStruct190_49 = { "GetEndpointProperties",192,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBInterfaceStruct190_48 = { "GetBandwidthAvailable",188,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_49};
	VPL_ExtField _IOUSBInterfaceStruct190_47 = { "SetPipePolicy",184,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_48};
	VPL_ExtField _IOUSBInterfaceStruct190_46 = { "ClearPipeStallBothEnds",180,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_47};
	VPL_ExtField _IOUSBInterfaceStruct190_45 = { "USBInterfaceOpenSeize",176,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_46};
	VPL_ExtField _IOUSBInterfaceStruct190_44 = { "USBInterfaceGetStringIndex",172,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_45};
	VPL_ExtField _IOUSBInterfaceStruct190_43 = { "WritePipeAsyncTO",168,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_44};
	VPL_ExtField _IOUSBInterfaceStruct190_42 = { "ReadPipeAsyncTO",164,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_43};
	VPL_ExtField _IOUSBInterfaceStruct190_41 = { "WritePipeTO",160,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_42};
	VPL_ExtField _IOUSBInterfaceStruct190_40 = { "ReadPipeTO",156,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_41};
	VPL_ExtField _IOUSBInterfaceStruct190_39 = { "ControlRequestAsyncTO",152,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_40};
	VPL_ExtField _IOUSBInterfaceStruct190_38 = { "ControlRequestTO",148,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_39};
	VPL_ExtField _IOUSBInterfaceStruct190_37 = { "WriteIsochPipeAsync",144,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_38};
	VPL_ExtField _IOUSBInterfaceStruct190_36 = { "ReadIsochPipeAsync",140,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_37};
	VPL_ExtField _IOUSBInterfaceStruct190_35 = { "WritePipeAsync",136,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_36};
	VPL_ExtField _IOUSBInterfaceStruct190_34 = { "ReadPipeAsync",132,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_35};
	VPL_ExtField _IOUSBInterfaceStruct190_33 = { "WritePipe",128,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_34};
	VPL_ExtField _IOUSBInterfaceStruct190_32 = { "ReadPipe",124,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_33};
	VPL_ExtField _IOUSBInterfaceStruct190_31 = { "ClearPipeStall",120,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_32};
	VPL_ExtField _IOUSBInterfaceStruct190_30 = { "ResetPipe",116,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_31};
	VPL_ExtField _IOUSBInterfaceStruct190_29 = { "AbortPipe",112,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_30};
	VPL_ExtField _IOUSBInterfaceStruct190_28 = { "GetPipeStatus",108,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_29};
	VPL_ExtField _IOUSBInterfaceStruct190_27 = { "GetPipeProperties",104,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_28};
	VPL_ExtField _IOUSBInterfaceStruct190_26 = { "ControlRequestAsync",100,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_27};
	VPL_ExtField _IOUSBInterfaceStruct190_25 = { "ControlRequest",96,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_26};
	VPL_ExtField _IOUSBInterfaceStruct190_24 = { "GetBusFrameNumber",92,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_25};
	VPL_ExtField _IOUSBInterfaceStruct190_23 = { "SetAlternateInterface",88,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_24};
	VPL_ExtField _IOUSBInterfaceStruct190_22 = { "GetDevice",84,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_23};
	VPL_ExtField _IOUSBInterfaceStruct190_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_22};
	VPL_ExtField _IOUSBInterfaceStruct190_20 = { "GetNumEndpoints",76,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_21};
	VPL_ExtField _IOUSBInterfaceStruct190_19 = { "GetAlternateSetting",72,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_20};
	VPL_ExtField _IOUSBInterfaceStruct190_18 = { "GetInterfaceNumber",68,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_19};
	VPL_ExtField _IOUSBInterfaceStruct190_17 = { "GetConfigurationValue",64,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_18};
	VPL_ExtField _IOUSBInterfaceStruct190_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_17};
	VPL_ExtField _IOUSBInterfaceStruct190_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_16};
	VPL_ExtField _IOUSBInterfaceStruct190_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_15};
	VPL_ExtField _IOUSBInterfaceStruct190_13 = { "GetInterfaceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_14};
	VPL_ExtField _IOUSBInterfaceStruct190_12 = { "GetInterfaceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_13};
	VPL_ExtField _IOUSBInterfaceStruct190_11 = { "GetInterfaceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_12};
	VPL_ExtField _IOUSBInterfaceStruct190_10 = { "USBInterfaceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_11};
	VPL_ExtField _IOUSBInterfaceStruct190_9 = { "USBInterfaceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_10};
	VPL_ExtField _IOUSBInterfaceStruct190_8 = { "GetInterfaceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBInterfaceStruct190_9};
	VPL_ExtField _IOUSBInterfaceStruct190_7 = { "CreateInterfaceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_8};
	VPL_ExtField _IOUSBInterfaceStruct190_6 = { "GetInterfaceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBInterfaceStruct190_7};
	VPL_ExtField _IOUSBInterfaceStruct190_5 = { "CreateInterfaceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct190_6};
	VPL_ExtField _IOUSBInterfaceStruct190_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct190_5};
	VPL_ExtField _IOUSBInterfaceStruct190_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct190_4};
	VPL_ExtField _IOUSBInterfaceStruct190_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBInterfaceStruct190_3};
	VPL_ExtField _IOUSBInterfaceStruct190_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBInterfaceStruct190_2};
	VPL_ExtStructure _IOUSBInterfaceStruct190_S = {"IOUSBInterfaceStruct190",&_IOUSBInterfaceStruct190_1};

	VPL_ExtField _IOUSBInterfaceStruct183_45 = { "USBInterfaceOpenSeize",176,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBInterfaceStruct183_44 = { "USBInterfaceGetStringIndex",172,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_45};
	VPL_ExtField _IOUSBInterfaceStruct183_43 = { "WritePipeAsyncTO",168,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_44};
	VPL_ExtField _IOUSBInterfaceStruct183_42 = { "ReadPipeAsyncTO",164,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_43};
	VPL_ExtField _IOUSBInterfaceStruct183_41 = { "WritePipeTO",160,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_42};
	VPL_ExtField _IOUSBInterfaceStruct183_40 = { "ReadPipeTO",156,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_41};
	VPL_ExtField _IOUSBInterfaceStruct183_39 = { "ControlRequestAsyncTO",152,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_40};
	VPL_ExtField _IOUSBInterfaceStruct183_38 = { "ControlRequestTO",148,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_39};
	VPL_ExtField _IOUSBInterfaceStruct183_37 = { "WriteIsochPipeAsync",144,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_38};
	VPL_ExtField _IOUSBInterfaceStruct183_36 = { "ReadIsochPipeAsync",140,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_37};
	VPL_ExtField _IOUSBInterfaceStruct183_35 = { "WritePipeAsync",136,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_36};
	VPL_ExtField _IOUSBInterfaceStruct183_34 = { "ReadPipeAsync",132,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_35};
	VPL_ExtField _IOUSBInterfaceStruct183_33 = { "WritePipe",128,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_34};
	VPL_ExtField _IOUSBInterfaceStruct183_32 = { "ReadPipe",124,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_33};
	VPL_ExtField _IOUSBInterfaceStruct183_31 = { "ClearPipeStall",120,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_32};
	VPL_ExtField _IOUSBInterfaceStruct183_30 = { "ResetPipe",116,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_31};
	VPL_ExtField _IOUSBInterfaceStruct183_29 = { "AbortPipe",112,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_30};
	VPL_ExtField _IOUSBInterfaceStruct183_28 = { "GetPipeStatus",108,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_29};
	VPL_ExtField _IOUSBInterfaceStruct183_27 = { "GetPipeProperties",104,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_28};
	VPL_ExtField _IOUSBInterfaceStruct183_26 = { "ControlRequestAsync",100,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_27};
	VPL_ExtField _IOUSBInterfaceStruct183_25 = { "ControlRequest",96,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_26};
	VPL_ExtField _IOUSBInterfaceStruct183_24 = { "GetBusFrameNumber",92,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_25};
	VPL_ExtField _IOUSBInterfaceStruct183_23 = { "SetAlternateInterface",88,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_24};
	VPL_ExtField _IOUSBInterfaceStruct183_22 = { "GetDevice",84,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_23};
	VPL_ExtField _IOUSBInterfaceStruct183_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_22};
	VPL_ExtField _IOUSBInterfaceStruct183_20 = { "GetNumEndpoints",76,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_21};
	VPL_ExtField _IOUSBInterfaceStruct183_19 = { "GetAlternateSetting",72,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_20};
	VPL_ExtField _IOUSBInterfaceStruct183_18 = { "GetInterfaceNumber",68,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_19};
	VPL_ExtField _IOUSBInterfaceStruct183_17 = { "GetConfigurationValue",64,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_18};
	VPL_ExtField _IOUSBInterfaceStruct183_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_17};
	VPL_ExtField _IOUSBInterfaceStruct183_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_16};
	VPL_ExtField _IOUSBInterfaceStruct183_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_15};
	VPL_ExtField _IOUSBInterfaceStruct183_13 = { "GetInterfaceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_14};
	VPL_ExtField _IOUSBInterfaceStruct183_12 = { "GetInterfaceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_13};
	VPL_ExtField _IOUSBInterfaceStruct183_11 = { "GetInterfaceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_12};
	VPL_ExtField _IOUSBInterfaceStruct183_10 = { "USBInterfaceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_11};
	VPL_ExtField _IOUSBInterfaceStruct183_9 = { "USBInterfaceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_10};
	VPL_ExtField _IOUSBInterfaceStruct183_8 = { "GetInterfaceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBInterfaceStruct183_9};
	VPL_ExtField _IOUSBInterfaceStruct183_7 = { "CreateInterfaceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_8};
	VPL_ExtField _IOUSBInterfaceStruct183_6 = { "GetInterfaceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBInterfaceStruct183_7};
	VPL_ExtField _IOUSBInterfaceStruct183_5 = { "CreateInterfaceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct183_6};
	VPL_ExtField _IOUSBInterfaceStruct183_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct183_5};
	VPL_ExtField _IOUSBInterfaceStruct183_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct183_4};
	VPL_ExtField _IOUSBInterfaceStruct183_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBInterfaceStruct183_3};
	VPL_ExtField _IOUSBInterfaceStruct183_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBInterfaceStruct183_2};
	VPL_ExtStructure _IOUSBInterfaceStruct183_S = {"IOUSBInterfaceStruct183",&_IOUSBInterfaceStruct183_1};

	VPL_ExtField _IOUSBInterfaceStruct182_44 = { "USBInterfaceGetStringIndex",172,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBInterfaceStruct182_43 = { "WritePipeAsyncTO",168,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_44};
	VPL_ExtField _IOUSBInterfaceStruct182_42 = { "ReadPipeAsyncTO",164,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_43};
	VPL_ExtField _IOUSBInterfaceStruct182_41 = { "WritePipeTO",160,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_42};
	VPL_ExtField _IOUSBInterfaceStruct182_40 = { "ReadPipeTO",156,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_41};
	VPL_ExtField _IOUSBInterfaceStruct182_39 = { "ControlRequestAsyncTO",152,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_40};
	VPL_ExtField _IOUSBInterfaceStruct182_38 = { "ControlRequestTO",148,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_39};
	VPL_ExtField _IOUSBInterfaceStruct182_37 = { "WriteIsochPipeAsync",144,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_38};
	VPL_ExtField _IOUSBInterfaceStruct182_36 = { "ReadIsochPipeAsync",140,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_37};
	VPL_ExtField _IOUSBInterfaceStruct182_35 = { "WritePipeAsync",136,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_36};
	VPL_ExtField _IOUSBInterfaceStruct182_34 = { "ReadPipeAsync",132,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_35};
	VPL_ExtField _IOUSBInterfaceStruct182_33 = { "WritePipe",128,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_34};
	VPL_ExtField _IOUSBInterfaceStruct182_32 = { "ReadPipe",124,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_33};
	VPL_ExtField _IOUSBInterfaceStruct182_31 = { "ClearPipeStall",120,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_32};
	VPL_ExtField _IOUSBInterfaceStruct182_30 = { "ResetPipe",116,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_31};
	VPL_ExtField _IOUSBInterfaceStruct182_29 = { "AbortPipe",112,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_30};
	VPL_ExtField _IOUSBInterfaceStruct182_28 = { "GetPipeStatus",108,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_29};
	VPL_ExtField _IOUSBInterfaceStruct182_27 = { "GetPipeProperties",104,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_28};
	VPL_ExtField _IOUSBInterfaceStruct182_26 = { "ControlRequestAsync",100,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_27};
	VPL_ExtField _IOUSBInterfaceStruct182_25 = { "ControlRequest",96,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_26};
	VPL_ExtField _IOUSBInterfaceStruct182_24 = { "GetBusFrameNumber",92,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_25};
	VPL_ExtField _IOUSBInterfaceStruct182_23 = { "SetAlternateInterface",88,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_24};
	VPL_ExtField _IOUSBInterfaceStruct182_22 = { "GetDevice",84,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_23};
	VPL_ExtField _IOUSBInterfaceStruct182_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_22};
	VPL_ExtField _IOUSBInterfaceStruct182_20 = { "GetNumEndpoints",76,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_21};
	VPL_ExtField _IOUSBInterfaceStruct182_19 = { "GetAlternateSetting",72,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_20};
	VPL_ExtField _IOUSBInterfaceStruct182_18 = { "GetInterfaceNumber",68,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_19};
	VPL_ExtField _IOUSBInterfaceStruct182_17 = { "GetConfigurationValue",64,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_18};
	VPL_ExtField _IOUSBInterfaceStruct182_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_17};
	VPL_ExtField _IOUSBInterfaceStruct182_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_16};
	VPL_ExtField _IOUSBInterfaceStruct182_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_15};
	VPL_ExtField _IOUSBInterfaceStruct182_13 = { "GetInterfaceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_14};
	VPL_ExtField _IOUSBInterfaceStruct182_12 = { "GetInterfaceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_13};
	VPL_ExtField _IOUSBInterfaceStruct182_11 = { "GetInterfaceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_12};
	VPL_ExtField _IOUSBInterfaceStruct182_10 = { "USBInterfaceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_11};
	VPL_ExtField _IOUSBInterfaceStruct182_9 = { "USBInterfaceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_10};
	VPL_ExtField _IOUSBInterfaceStruct182_8 = { "GetInterfaceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBInterfaceStruct182_9};
	VPL_ExtField _IOUSBInterfaceStruct182_7 = { "CreateInterfaceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_8};
	VPL_ExtField _IOUSBInterfaceStruct182_6 = { "GetInterfaceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBInterfaceStruct182_7};
	VPL_ExtField _IOUSBInterfaceStruct182_5 = { "CreateInterfaceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct182_6};
	VPL_ExtField _IOUSBInterfaceStruct182_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct182_5};
	VPL_ExtField _IOUSBInterfaceStruct182_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct182_4};
	VPL_ExtField _IOUSBInterfaceStruct182_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBInterfaceStruct182_3};
	VPL_ExtField _IOUSBInterfaceStruct182_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBInterfaceStruct182_2};
	VPL_ExtStructure _IOUSBInterfaceStruct182_S = {"IOUSBInterfaceStruct182",&_IOUSBInterfaceStruct182_1};

	VPL_ExtField _IOUSBInterfaceStruct_37 = { "WriteIsochPipeAsync",144,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBInterfaceStruct_36 = { "ReadIsochPipeAsync",140,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_37};
	VPL_ExtField _IOUSBInterfaceStruct_35 = { "WritePipeAsync",136,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_36};
	VPL_ExtField _IOUSBInterfaceStruct_34 = { "ReadPipeAsync",132,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_35};
	VPL_ExtField _IOUSBInterfaceStruct_33 = { "WritePipe",128,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_34};
	VPL_ExtField _IOUSBInterfaceStruct_32 = { "ReadPipe",124,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_33};
	VPL_ExtField _IOUSBInterfaceStruct_31 = { "ClearPipeStall",120,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_32};
	VPL_ExtField _IOUSBInterfaceStruct_30 = { "ResetPipe",116,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_31};
	VPL_ExtField _IOUSBInterfaceStruct_29 = { "AbortPipe",112,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_30};
	VPL_ExtField _IOUSBInterfaceStruct_28 = { "GetPipeStatus",108,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_29};
	VPL_ExtField _IOUSBInterfaceStruct_27 = { "GetPipeProperties",104,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_28};
	VPL_ExtField _IOUSBInterfaceStruct_26 = { "ControlRequestAsync",100,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_27};
	VPL_ExtField _IOUSBInterfaceStruct_25 = { "ControlRequest",96,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_26};
	VPL_ExtField _IOUSBInterfaceStruct_24 = { "GetBusFrameNumber",92,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_25};
	VPL_ExtField _IOUSBInterfaceStruct_23 = { "SetAlternateInterface",88,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_24};
	VPL_ExtField _IOUSBInterfaceStruct_22 = { "GetDevice",84,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_23};
	VPL_ExtField _IOUSBInterfaceStruct_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_22};
	VPL_ExtField _IOUSBInterfaceStruct_20 = { "GetNumEndpoints",76,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_21};
	VPL_ExtField _IOUSBInterfaceStruct_19 = { "GetAlternateSetting",72,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_20};
	VPL_ExtField _IOUSBInterfaceStruct_18 = { "GetInterfaceNumber",68,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_19};
	VPL_ExtField _IOUSBInterfaceStruct_17 = { "GetConfigurationValue",64,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_18};
	VPL_ExtField _IOUSBInterfaceStruct_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_17};
	VPL_ExtField _IOUSBInterfaceStruct_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_16};
	VPL_ExtField _IOUSBInterfaceStruct_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_15};
	VPL_ExtField _IOUSBInterfaceStruct_13 = { "GetInterfaceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_14};
	VPL_ExtField _IOUSBInterfaceStruct_12 = { "GetInterfaceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_13};
	VPL_ExtField _IOUSBInterfaceStruct_11 = { "GetInterfaceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_12};
	VPL_ExtField _IOUSBInterfaceStruct_10 = { "USBInterfaceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_11};
	VPL_ExtField _IOUSBInterfaceStruct_9 = { "USBInterfaceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_10};
	VPL_ExtField _IOUSBInterfaceStruct_8 = { "GetInterfaceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBInterfaceStruct_9};
	VPL_ExtField _IOUSBInterfaceStruct_7 = { "CreateInterfaceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_8};
	VPL_ExtField _IOUSBInterfaceStruct_6 = { "GetInterfaceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBInterfaceStruct_7};
	VPL_ExtField _IOUSBInterfaceStruct_5 = { "CreateInterfaceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBInterfaceStruct_6};
	VPL_ExtField _IOUSBInterfaceStruct_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct_5};
	VPL_ExtField _IOUSBInterfaceStruct_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBInterfaceStruct_4};
	VPL_ExtField _IOUSBInterfaceStruct_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBInterfaceStruct_3};
	VPL_ExtField _IOUSBInterfaceStruct_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBInterfaceStruct_2};
	VPL_ExtStructure _IOUSBInterfaceStruct_S = {"IOUSBInterfaceStruct",&_IOUSBInterfaceStruct_1};

	VPL_ExtField _IOUSBDeviceStruct197_40 = { "GetIOUSBLibVersion",156,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBDeviceStruct197_39 = { "GetBusMicroFrameNumber",152,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_40};
	VPL_ExtField _IOUSBDeviceStruct197_38 = { "USBDeviceReEnumerate",148,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_39};
	VPL_ExtField _IOUSBDeviceStruct197_37 = { "USBGetSerialNumberStringIndex",144,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_38};
	VPL_ExtField _IOUSBDeviceStruct197_36 = { "USBGetProductStringIndex",140,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_37};
	VPL_ExtField _IOUSBDeviceStruct197_35 = { "USBGetManufacturerStringIndex",136,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_36};
	VPL_ExtField _IOUSBDeviceStruct197_34 = { "USBDeviceAbortPipeZero",132,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_35};
	VPL_ExtField _IOUSBDeviceStruct197_33 = { "USBDeviceSuspend",128,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_34};
	VPL_ExtField _IOUSBDeviceStruct197_32 = { "DeviceRequestAsyncTO",124,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_33};
	VPL_ExtField _IOUSBDeviceStruct197_31 = { "DeviceRequestTO",120,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_32};
	VPL_ExtField _IOUSBDeviceStruct197_30 = { "USBDeviceOpenSeize",116,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_31};
	VPL_ExtField _IOUSBDeviceStruct197_29 = { "CreateInterfaceIterator",112,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_30};
	VPL_ExtField _IOUSBDeviceStruct197_28 = { "DeviceRequestAsync",108,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_29};
	VPL_ExtField _IOUSBDeviceStruct197_27 = { "DeviceRequest",104,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_28};
	VPL_ExtField _IOUSBDeviceStruct197_26 = { "ResetDevice",100,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_27};
	VPL_ExtField _IOUSBDeviceStruct197_25 = { "GetBusFrameNumber",96,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_26};
	VPL_ExtField _IOUSBDeviceStruct197_24 = { "SetConfiguration",92,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_25};
	VPL_ExtField _IOUSBDeviceStruct197_23 = { "GetConfiguration",88,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_24};
	VPL_ExtField _IOUSBDeviceStruct197_22 = { "GetConfigurationDescriptorPtr",84,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_23};
	VPL_ExtField _IOUSBDeviceStruct197_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_22};
	VPL_ExtField _IOUSBDeviceStruct197_20 = { "GetNumberOfConfigurations",76,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_21};
	VPL_ExtField _IOUSBDeviceStruct197_19 = { "GetDeviceSpeed",72,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_20};
	VPL_ExtField _IOUSBDeviceStruct197_18 = { "GetDeviceBusPowerAvailable",68,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_19};
	VPL_ExtField _IOUSBDeviceStruct197_17 = { "GetDeviceAddress",64,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_18};
	VPL_ExtField _IOUSBDeviceStruct197_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_17};
	VPL_ExtField _IOUSBDeviceStruct197_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_16};
	VPL_ExtField _IOUSBDeviceStruct197_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_15};
	VPL_ExtField _IOUSBDeviceStruct197_13 = { "GetDeviceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_14};
	VPL_ExtField _IOUSBDeviceStruct197_12 = { "GetDeviceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_13};
	VPL_ExtField _IOUSBDeviceStruct197_11 = { "GetDeviceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_12};
	VPL_ExtField _IOUSBDeviceStruct197_10 = { "USBDeviceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_11};
	VPL_ExtField _IOUSBDeviceStruct197_9 = { "USBDeviceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_10};
	VPL_ExtField _IOUSBDeviceStruct197_8 = { "GetDeviceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBDeviceStruct197_9};
	VPL_ExtField _IOUSBDeviceStruct197_7 = { "CreateDeviceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_8};
	VPL_ExtField _IOUSBDeviceStruct197_6 = { "GetDeviceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBDeviceStruct197_7};
	VPL_ExtField _IOUSBDeviceStruct197_5 = { "CreateDeviceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct197_6};
	VPL_ExtField _IOUSBDeviceStruct197_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBDeviceStruct197_5};
	VPL_ExtField _IOUSBDeviceStruct197_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBDeviceStruct197_4};
	VPL_ExtField _IOUSBDeviceStruct197_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBDeviceStruct197_3};
	VPL_ExtField _IOUSBDeviceStruct197_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBDeviceStruct197_2};
	VPL_ExtStructure _IOUSBDeviceStruct197_S = {"IOUSBDeviceStruct197",&_IOUSBDeviceStruct197_1};

	VPL_ExtField _IOUSBDeviceStruct187_38 = { "USBDeviceReEnumerate",148,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBDeviceStruct187_37 = { "USBGetSerialNumberStringIndex",144,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_38};
	VPL_ExtField _IOUSBDeviceStruct187_36 = { "USBGetProductStringIndex",140,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_37};
	VPL_ExtField _IOUSBDeviceStruct187_35 = { "USBGetManufacturerStringIndex",136,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_36};
	VPL_ExtField _IOUSBDeviceStruct187_34 = { "USBDeviceAbortPipeZero",132,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_35};
	VPL_ExtField _IOUSBDeviceStruct187_33 = { "USBDeviceSuspend",128,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_34};
	VPL_ExtField _IOUSBDeviceStruct187_32 = { "DeviceRequestAsyncTO",124,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_33};
	VPL_ExtField _IOUSBDeviceStruct187_31 = { "DeviceRequestTO",120,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_32};
	VPL_ExtField _IOUSBDeviceStruct187_30 = { "USBDeviceOpenSeize",116,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_31};
	VPL_ExtField _IOUSBDeviceStruct187_29 = { "CreateInterfaceIterator",112,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_30};
	VPL_ExtField _IOUSBDeviceStruct187_28 = { "DeviceRequestAsync",108,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_29};
	VPL_ExtField _IOUSBDeviceStruct187_27 = { "DeviceRequest",104,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_28};
	VPL_ExtField _IOUSBDeviceStruct187_26 = { "ResetDevice",100,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_27};
	VPL_ExtField _IOUSBDeviceStruct187_25 = { "GetBusFrameNumber",96,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_26};
	VPL_ExtField _IOUSBDeviceStruct187_24 = { "SetConfiguration",92,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_25};
	VPL_ExtField _IOUSBDeviceStruct187_23 = { "GetConfiguration",88,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_24};
	VPL_ExtField _IOUSBDeviceStruct187_22 = { "GetConfigurationDescriptorPtr",84,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_23};
	VPL_ExtField _IOUSBDeviceStruct187_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_22};
	VPL_ExtField _IOUSBDeviceStruct187_20 = { "GetNumberOfConfigurations",76,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_21};
	VPL_ExtField _IOUSBDeviceStruct187_19 = { "GetDeviceSpeed",72,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_20};
	VPL_ExtField _IOUSBDeviceStruct187_18 = { "GetDeviceBusPowerAvailable",68,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_19};
	VPL_ExtField _IOUSBDeviceStruct187_17 = { "GetDeviceAddress",64,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_18};
	VPL_ExtField _IOUSBDeviceStruct187_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_17};
	VPL_ExtField _IOUSBDeviceStruct187_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_16};
	VPL_ExtField _IOUSBDeviceStruct187_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_15};
	VPL_ExtField _IOUSBDeviceStruct187_13 = { "GetDeviceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_14};
	VPL_ExtField _IOUSBDeviceStruct187_12 = { "GetDeviceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_13};
	VPL_ExtField _IOUSBDeviceStruct187_11 = { "GetDeviceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_12};
	VPL_ExtField _IOUSBDeviceStruct187_10 = { "USBDeviceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_11};
	VPL_ExtField _IOUSBDeviceStruct187_9 = { "USBDeviceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_10};
	VPL_ExtField _IOUSBDeviceStruct187_8 = { "GetDeviceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBDeviceStruct187_9};
	VPL_ExtField _IOUSBDeviceStruct187_7 = { "CreateDeviceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_8};
	VPL_ExtField _IOUSBDeviceStruct187_6 = { "GetDeviceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBDeviceStruct187_7};
	VPL_ExtField _IOUSBDeviceStruct187_5 = { "CreateDeviceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct187_6};
	VPL_ExtField _IOUSBDeviceStruct187_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBDeviceStruct187_5};
	VPL_ExtField _IOUSBDeviceStruct187_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBDeviceStruct187_4};
	VPL_ExtField _IOUSBDeviceStruct187_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBDeviceStruct187_3};
	VPL_ExtField _IOUSBDeviceStruct187_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBDeviceStruct187_2};
	VPL_ExtStructure _IOUSBDeviceStruct187_S = {"IOUSBDeviceStruct187",&_IOUSBDeviceStruct187_1};

	VPL_ExtField _IOUSBDeviceStruct182_37 = { "USBGetSerialNumberStringIndex",144,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBDeviceStruct182_36 = { "USBGetProductStringIndex",140,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_37};
	VPL_ExtField _IOUSBDeviceStruct182_35 = { "USBGetManufacturerStringIndex",136,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_36};
	VPL_ExtField _IOUSBDeviceStruct182_34 = { "USBDeviceAbortPipeZero",132,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_35};
	VPL_ExtField _IOUSBDeviceStruct182_33 = { "USBDeviceSuspend",128,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_34};
	VPL_ExtField _IOUSBDeviceStruct182_32 = { "DeviceRequestAsyncTO",124,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_33};
	VPL_ExtField _IOUSBDeviceStruct182_31 = { "DeviceRequestTO",120,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_32};
	VPL_ExtField _IOUSBDeviceStruct182_30 = { "USBDeviceOpenSeize",116,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_31};
	VPL_ExtField _IOUSBDeviceStruct182_29 = { "CreateInterfaceIterator",112,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_30};
	VPL_ExtField _IOUSBDeviceStruct182_28 = { "DeviceRequestAsync",108,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_29};
	VPL_ExtField _IOUSBDeviceStruct182_27 = { "DeviceRequest",104,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_28};
	VPL_ExtField _IOUSBDeviceStruct182_26 = { "ResetDevice",100,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_27};
	VPL_ExtField _IOUSBDeviceStruct182_25 = { "GetBusFrameNumber",96,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_26};
	VPL_ExtField _IOUSBDeviceStruct182_24 = { "SetConfiguration",92,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_25};
	VPL_ExtField _IOUSBDeviceStruct182_23 = { "GetConfiguration",88,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_24};
	VPL_ExtField _IOUSBDeviceStruct182_22 = { "GetConfigurationDescriptorPtr",84,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_23};
	VPL_ExtField _IOUSBDeviceStruct182_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_22};
	VPL_ExtField _IOUSBDeviceStruct182_20 = { "GetNumberOfConfigurations",76,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_21};
	VPL_ExtField _IOUSBDeviceStruct182_19 = { "GetDeviceSpeed",72,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_20};
	VPL_ExtField _IOUSBDeviceStruct182_18 = { "GetDeviceBusPowerAvailable",68,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_19};
	VPL_ExtField _IOUSBDeviceStruct182_17 = { "GetDeviceAddress",64,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_18};
	VPL_ExtField _IOUSBDeviceStruct182_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_17};
	VPL_ExtField _IOUSBDeviceStruct182_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_16};
	VPL_ExtField _IOUSBDeviceStruct182_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_15};
	VPL_ExtField _IOUSBDeviceStruct182_13 = { "GetDeviceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_14};
	VPL_ExtField _IOUSBDeviceStruct182_12 = { "GetDeviceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_13};
	VPL_ExtField _IOUSBDeviceStruct182_11 = { "GetDeviceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_12};
	VPL_ExtField _IOUSBDeviceStruct182_10 = { "USBDeviceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_11};
	VPL_ExtField _IOUSBDeviceStruct182_9 = { "USBDeviceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_10};
	VPL_ExtField _IOUSBDeviceStruct182_8 = { "GetDeviceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBDeviceStruct182_9};
	VPL_ExtField _IOUSBDeviceStruct182_7 = { "CreateDeviceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_8};
	VPL_ExtField _IOUSBDeviceStruct182_6 = { "GetDeviceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBDeviceStruct182_7};
	VPL_ExtField _IOUSBDeviceStruct182_5 = { "CreateDeviceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct182_6};
	VPL_ExtField _IOUSBDeviceStruct182_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBDeviceStruct182_5};
	VPL_ExtField _IOUSBDeviceStruct182_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBDeviceStruct182_4};
	VPL_ExtField _IOUSBDeviceStruct182_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBDeviceStruct182_3};
	VPL_ExtField _IOUSBDeviceStruct182_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBDeviceStruct182_2};
	VPL_ExtStructure _IOUSBDeviceStruct182_S = {"IOUSBDeviceStruct182",&_IOUSBDeviceStruct182_1};

	VPL_ExtField _IOUSBDeviceStruct_29 = { "CreateInterfaceIterator",112,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOUSBDeviceStruct_28 = { "DeviceRequestAsync",108,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_29};
	VPL_ExtField _IOUSBDeviceStruct_27 = { "DeviceRequest",104,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_28};
	VPL_ExtField _IOUSBDeviceStruct_26 = { "ResetDevice",100,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_27};
	VPL_ExtField _IOUSBDeviceStruct_25 = { "GetBusFrameNumber",96,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_26};
	VPL_ExtField _IOUSBDeviceStruct_24 = { "SetConfiguration",92,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_25};
	VPL_ExtField _IOUSBDeviceStruct_23 = { "GetConfiguration",88,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_24};
	VPL_ExtField _IOUSBDeviceStruct_22 = { "GetConfigurationDescriptorPtr",84,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_23};
	VPL_ExtField _IOUSBDeviceStruct_21 = { "GetLocationID",80,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_22};
	VPL_ExtField _IOUSBDeviceStruct_20 = { "GetNumberOfConfigurations",76,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_21};
	VPL_ExtField _IOUSBDeviceStruct_19 = { "GetDeviceSpeed",72,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_20};
	VPL_ExtField _IOUSBDeviceStruct_18 = { "GetDeviceBusPowerAvailable",68,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_19};
	VPL_ExtField _IOUSBDeviceStruct_17 = { "GetDeviceAddress",64,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_18};
	VPL_ExtField _IOUSBDeviceStruct_16 = { "GetDeviceReleaseNumber",60,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_17};
	VPL_ExtField _IOUSBDeviceStruct_15 = { "GetDeviceProduct",56,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_16};
	VPL_ExtField _IOUSBDeviceStruct_14 = { "GetDeviceVendor",52,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_15};
	VPL_ExtField _IOUSBDeviceStruct_13 = { "GetDeviceProtocol",48,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_14};
	VPL_ExtField _IOUSBDeviceStruct_12 = { "GetDeviceSubClass",44,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_13};
	VPL_ExtField _IOUSBDeviceStruct_11 = { "GetDeviceClass",40,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_12};
	VPL_ExtField _IOUSBDeviceStruct_10 = { "USBDeviceClose",36,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_11};
	VPL_ExtField _IOUSBDeviceStruct_9 = { "USBDeviceOpen",32,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_10};
	VPL_ExtField _IOUSBDeviceStruct_8 = { "GetDeviceAsyncPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_IOUSBDeviceStruct_9};
	VPL_ExtField _IOUSBDeviceStruct_7 = { "CreateDeviceAsyncPort",24,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_8};
	VPL_ExtField _IOUSBDeviceStruct_6 = { "GetDeviceAsyncEventSource",20,4,kPointerType,"__CFRunLoopSource",2,0,"T*",&_IOUSBDeviceStruct_7};
	VPL_ExtField _IOUSBDeviceStruct_5 = { "CreateDeviceAsyncEventSource",16,4,kPointerType,"int",1,4,"T*",&_IOUSBDeviceStruct_6};
	VPL_ExtField _IOUSBDeviceStruct_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBDeviceStruct_5};
	VPL_ExtField _IOUSBDeviceStruct_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOUSBDeviceStruct_4};
	VPL_ExtField _IOUSBDeviceStruct_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOUSBDeviceStruct_3};
	VPL_ExtField _IOUSBDeviceStruct_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOUSBDeviceStruct_2};
	VPL_ExtStructure _IOUSBDeviceStruct_S = {"IOUSBDeviceStruct",&_IOUSBDeviceStruct_1};

	VPL_ExtField _LowLatencyUserBufferInfo_6 = { "nextBuffer",20,4,kPointerType,"LowLatencyUserBufferInfo",1,24,"T*",NULL};
	VPL_ExtField _LowLatencyUserBufferInfo_5 = { "isPrepared",16,1,kUnsignedType,"LowLatencyUserBufferInfo",1,24,"unsigned char",&_LowLatencyUserBufferInfo_6};
	VPL_ExtField _LowLatencyUserBufferInfo_4 = { "bufferType",12,4,kUnsignedType,"LowLatencyUserBufferInfo",1,24,"unsigned long",&_LowLatencyUserBufferInfo_5};
	VPL_ExtField _LowLatencyUserBufferInfo_3 = { "bufferSize",8,4,kUnsignedType,"LowLatencyUserBufferInfo",1,24,"unsigned long",&_LowLatencyUserBufferInfo_4};
	VPL_ExtField _LowLatencyUserBufferInfo_2 = { "bufferAddress",4,4,kPointerType,"void",1,0,"T*",&_LowLatencyUserBufferInfo_3};
	VPL_ExtField _LowLatencyUserBufferInfo_1 = { "cookie",0,4,kUnsignedType,"void",1,0,"unsigned long",&_LowLatencyUserBufferInfo_2};
	VPL_ExtStructure _LowLatencyUserBufferInfo_S = {"LowLatencyUserBufferInfo",&_LowLatencyUserBufferInfo_1};

	VPL_ExtField _IOUSBFindInterfaceRequest_4 = { "bAlternateSetting",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _IOUSBFindInterfaceRequest_3 = { "bInterfaceProtocol",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBFindInterfaceRequest_4};
	VPL_ExtField _IOUSBFindInterfaceRequest_2 = { "bInterfaceSubClass",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBFindInterfaceRequest_3};
	VPL_ExtField _IOUSBFindInterfaceRequest_1 = { "bInterfaceClass",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBFindInterfaceRequest_2};
	VPL_ExtStructure _IOUSBFindInterfaceRequest_S = {"IOUSBFindInterfaceRequest",&_IOUSBFindInterfaceRequest_1};

	VPL_ExtField _IOUSBGetFrameStruct_2 = { "timeStamp",8,8,kStructureType,"NULL",0,0,"UnsignedWide",NULL};
	VPL_ExtField _IOUSBGetFrameStruct_1 = { "frame",0,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_IOUSBGetFrameStruct_2};
	VPL_ExtStructure _IOUSBGetFrameStruct_S = {"IOUSBGetFrameStruct",&_IOUSBGetFrameStruct_1};

	VPL_ExtField _IOUSBLowLatencyIsocStruct_9 = { "fFrameListBufferOffset",36,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _IOUSBLowLatencyIsocStruct_8 = { "fFrameListBufferCookie",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBLowLatencyIsocStruct_9};
	VPL_ExtField _IOUSBLowLatencyIsocStruct_7 = { "fDataBufferOffset",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBLowLatencyIsocStruct_8};
	VPL_ExtField _IOUSBLowLatencyIsocStruct_6 = { "fDataBufferCookie",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBLowLatencyIsocStruct_7};
	VPL_ExtField _IOUSBLowLatencyIsocStruct_5 = { "fUpdateFrequency",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBLowLatencyIsocStruct_6};
	VPL_ExtField _IOUSBLowLatencyIsocStruct_4 = { "fNumFrames",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBLowLatencyIsocStruct_5};
	VPL_ExtField _IOUSBLowLatencyIsocStruct_3 = { "fStartFrame",8,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_IOUSBLowLatencyIsocStruct_4};
	VPL_ExtField _IOUSBLowLatencyIsocStruct_2 = { "fBufSize",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBLowLatencyIsocStruct_3};
	VPL_ExtField _IOUSBLowLatencyIsocStruct_1 = { "fPipe",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBLowLatencyIsocStruct_2};
	VPL_ExtStructure _IOUSBLowLatencyIsocStruct_S = {"IOUSBLowLatencyIsocStruct",&_IOUSBLowLatencyIsocStruct_1};

	VPL_ExtField _IOUSBIsocStruct_6 = { "fFrameCounts",24,4,kPointerType,"IOUSBIsocFrame",1,8,"T*",NULL};
	VPL_ExtField _IOUSBIsocStruct_5 = { "fNumFrames",20,4,kUnsignedType,"IOUSBIsocFrame",1,8,"unsigned long",&_IOUSBIsocStruct_6};
	VPL_ExtField _IOUSBIsocStruct_4 = { "fStartFrame",12,8,kUnsignedType,"IOUSBIsocFrame",1,8,"unsigned long long",&_IOUSBIsocStruct_5};
	VPL_ExtField _IOUSBIsocStruct_3 = { "fBufSize",8,4,kUnsignedType,"IOUSBIsocFrame",1,8,"unsigned long",&_IOUSBIsocStruct_4};
	VPL_ExtField _IOUSBIsocStruct_2 = { "fBuffer",4,4,kPointerType,"void",1,0,"T*",&_IOUSBIsocStruct_3};
	VPL_ExtField _IOUSBIsocStruct_1 = { "fPipe",0,4,kUnsignedType,"void",1,0,"unsigned long",&_IOUSBIsocStruct_2};
	VPL_ExtStructure _IOUSBIsocStruct_S = {"IOUSBIsocStruct",&_IOUSBIsocStruct_1};

	VPL_ExtField _IOUSBDevReqOOLTO_10 = { "completionTimeout",24,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _IOUSBDevReqOOLTO_9 = { "noDataTimeout",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBDevReqOOLTO_10};
	VPL_ExtField _IOUSBDevReqOOLTO_8 = { "pipeRef",16,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDevReqOOLTO_9};
	VPL_ExtField _IOUSBDevReqOOLTO_7 = { "wLenDone",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBDevReqOOLTO_8};
	VPL_ExtField _IOUSBDevReqOOLTO_6 = { "pData",8,4,kPointerType,"void",1,0,"T*",&_IOUSBDevReqOOLTO_7};
	VPL_ExtField _IOUSBDevReqOOLTO_5 = { "wLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevReqOOLTO_6};
	VPL_ExtField _IOUSBDevReqOOLTO_4 = { "wIndex",4,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevReqOOLTO_5};
	VPL_ExtField _IOUSBDevReqOOLTO_3 = { "wValue",2,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevReqOOLTO_4};
	VPL_ExtField _IOUSBDevReqOOLTO_2 = { "bRequest",1,1,kUnsignedType,"void",1,0,"unsigned char",&_IOUSBDevReqOOLTO_3};
	VPL_ExtField _IOUSBDevReqOOLTO_1 = { "bmRequestType",0,1,kUnsignedType,"void",1,0,"unsigned char",&_IOUSBDevReqOOLTO_2};
	VPL_ExtStructure _IOUSBDevReqOOLTO_S = {"IOUSBDevReqOOLTO",&_IOUSBDevReqOOLTO_1};

	VPL_ExtField _IOUSBDevReqOOL_8 = { "pipeRef",16,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBDevReqOOL_7 = { "wLenDone",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBDevReqOOL_8};
	VPL_ExtField _IOUSBDevReqOOL_6 = { "pData",8,4,kPointerType,"void",1,0,"T*",&_IOUSBDevReqOOL_7};
	VPL_ExtField _IOUSBDevReqOOL_5 = { "wLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevReqOOL_6};
	VPL_ExtField _IOUSBDevReqOOL_4 = { "wIndex",4,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevReqOOL_5};
	VPL_ExtField _IOUSBDevReqOOL_3 = { "wValue",2,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevReqOOL_4};
	VPL_ExtField _IOUSBDevReqOOL_2 = { "bRequest",1,1,kUnsignedType,"void",1,0,"unsigned char",&_IOUSBDevReqOOL_3};
	VPL_ExtField _IOUSBDevReqOOL_1 = { "bmRequestType",0,1,kUnsignedType,"void",1,0,"unsigned char",&_IOUSBDevReqOOL_2};
	VPL_ExtStructure _IOUSBDevReqOOL_S = {"IOUSBDevReqOOL",&_IOUSBDevReqOOL_1};

	VPL_ExtField _IOUSBBulkPipeReq_5 = { "completionTimeout",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _IOUSBBulkPipeReq_4 = { "noDataTimeout",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBBulkPipeReq_5};
	VPL_ExtField _IOUSBBulkPipeReq_3 = { "size",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBBulkPipeReq_4};
	VPL_ExtField _IOUSBBulkPipeReq_2 = { "buf",4,4,kPointerType,"void",1,0,"T*",&_IOUSBBulkPipeReq_3};
	VPL_ExtField _IOUSBBulkPipeReq_1 = { "pipeRef",0,4,kUnsignedType,"void",1,0,"unsigned long",&_IOUSBBulkPipeReq_2};
	VPL_ExtStructure _IOUSBBulkPipeReq_S = {"IOUSBBulkPipeReq",&_IOUSBBulkPipeReq_1};

	VPL_ExtField _IOUSBDevRequestTO_9 = { "completionTimeout",20,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _IOUSBDevRequestTO_8 = { "noDataTimeout",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBDevRequestTO_9};
	VPL_ExtField _IOUSBDevRequestTO_7 = { "wLenDone",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_IOUSBDevRequestTO_8};
	VPL_ExtField _IOUSBDevRequestTO_6 = { "pData",8,4,kPointerType,"void",1,0,"T*",&_IOUSBDevRequestTO_7};
	VPL_ExtField _IOUSBDevRequestTO_5 = { "wLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevRequestTO_6};
	VPL_ExtField _IOUSBDevRequestTO_4 = { "wIndex",4,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevRequestTO_5};
	VPL_ExtField _IOUSBDevRequestTO_3 = { "wValue",2,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevRequestTO_4};
	VPL_ExtField _IOUSBDevRequestTO_2 = { "bRequest",1,1,kUnsignedType,"void",1,0,"unsigned char",&_IOUSBDevRequestTO_3};
	VPL_ExtField _IOUSBDevRequestTO_1 = { "bmRequestType",0,1,kUnsignedType,"void",1,0,"unsigned char",&_IOUSBDevRequestTO_2};
	VPL_ExtStructure _IOUSBDevRequestTO_S = {"IOUSBDevRequestTO",&_IOUSBDevRequestTO_1};

	VPL_ExtField _IOUSBDevRequest_7 = { "wLenDone",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _IOUSBDevRequest_6 = { "pData",8,4,kPointerType,"void",1,0,"T*",&_IOUSBDevRequest_7};
	VPL_ExtField _IOUSBDevRequest_5 = { "wLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevRequest_6};
	VPL_ExtField _IOUSBDevRequest_4 = { "wIndex",4,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevRequest_5};
	VPL_ExtField _IOUSBDevRequest_3 = { "wValue",2,2,kUnsignedType,"void",1,0,"unsigned short",&_IOUSBDevRequest_4};
	VPL_ExtField _IOUSBDevRequest_2 = { "bRequest",1,1,kUnsignedType,"void",1,0,"unsigned char",&_IOUSBDevRequest_3};
	VPL_ExtField _IOUSBDevRequest_1 = { "bmRequestType",0,1,kUnsignedType,"void",1,0,"unsigned char",&_IOUSBDevRequest_2};
	VPL_ExtStructure _IOUSBDevRequest_S = {"IOUSBDevRequest",&_IOUSBDevRequest_1};

	VPL_ExtField _IOUSBFindEndpointRequest_4 = { "interval",4,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBFindEndpointRequest_3 = { "maxPacketSize",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBFindEndpointRequest_4};
	VPL_ExtField _IOUSBFindEndpointRequest_2 = { "direction",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBFindEndpointRequest_3};
	VPL_ExtField _IOUSBFindEndpointRequest_1 = { "type",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBFindEndpointRequest_2};
	VPL_ExtStructure _IOUSBFindEndpointRequest_S = {"IOUSBFindEndpointRequest",&_IOUSBFindEndpointRequest_1};

	VPL_ExtField _IOUSBMatch_5 = { "usbProduct",8,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _IOUSBMatch_4 = { "usbVendor",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBMatch_5};
	VPL_ExtField _IOUSBMatch_3 = { "usbProtocol",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBMatch_4};
	VPL_ExtField _IOUSBMatch_2 = { "usbSubClass",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBMatch_3};
	VPL_ExtField _IOUSBMatch_1 = { "usbClass",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBMatch_2};
	VPL_ExtStructure _IOUSBMatch_S = {"IOUSBMatch",&_IOUSBMatch_1};

	VPL_ExtField _IOUSBInterfaceAssociationDescriptor_8 = { "iFunction",7,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBInterfaceAssociationDescriptor_7 = { "bFunctionProtocol",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceAssociationDescriptor_8};
	VPL_ExtField _IOUSBInterfaceAssociationDescriptor_6 = { "bFunctionSubClass",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceAssociationDescriptor_7};
	VPL_ExtField _IOUSBInterfaceAssociationDescriptor_5 = { "bFunctionClass",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceAssociationDescriptor_6};
	VPL_ExtField _IOUSBInterfaceAssociationDescriptor_4 = { "bInterfaceCount",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceAssociationDescriptor_5};
	VPL_ExtField _IOUSBInterfaceAssociationDescriptor_3 = { "bFirstInterface",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceAssociationDescriptor_4};
	VPL_ExtField _IOUSBInterfaceAssociationDescriptor_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceAssociationDescriptor_3};
	VPL_ExtField _IOUSBInterfaceAssociationDescriptor_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceAssociationDescriptor_2};
	VPL_ExtStructure _IOUSBInterfaceAssociationDescriptor_S = {"IOUSBInterfaceAssociationDescriptor",&_IOUSBInterfaceAssociationDescriptor_1};

	VPL_ExtField _IOUSBDFUDescriptor_5 = { "wTransferSize",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _IOUSBDFUDescriptor_4 = { "wDetachTimeout",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBDFUDescriptor_5};
	VPL_ExtField _IOUSBDFUDescriptor_3 = { "bmAttributes",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDFUDescriptor_4};
	VPL_ExtField _IOUSBDFUDescriptor_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDFUDescriptor_3};
	VPL_ExtField _IOUSBDFUDescriptor_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDFUDescriptor_2};
	VPL_ExtStructure _IOUSBDFUDescriptor_S = {"IOUSBDFUDescriptor",&_IOUSBDFUDescriptor_1};

	VPL_ExtField _IOUSBDeviceQualifierDescriptor_9 = { "bReserved",9,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBDeviceQualifierDescriptor_8 = { "bNumConfigurations",8,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceQualifierDescriptor_9};
	VPL_ExtField _IOUSBDeviceQualifierDescriptor_7 = { "bMaxPacketSize0",7,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceQualifierDescriptor_8};
	VPL_ExtField _IOUSBDeviceQualifierDescriptor_6 = { "bDeviceProtocol",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceQualifierDescriptor_7};
	VPL_ExtField _IOUSBDeviceQualifierDescriptor_5 = { "bDeviceSubClass",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceQualifierDescriptor_6};
	VPL_ExtField _IOUSBDeviceQualifierDescriptor_4 = { "bDeviceClass",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceQualifierDescriptor_5};
	VPL_ExtField _IOUSBDeviceQualifierDescriptor_3 = { "bcdUSB",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBDeviceQualifierDescriptor_4};
	VPL_ExtField _IOUSBDeviceQualifierDescriptor_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceQualifierDescriptor_3};
	VPL_ExtField _IOUSBDeviceQualifierDescriptor_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceQualifierDescriptor_2};
	VPL_ExtStructure _IOUSBDeviceQualifierDescriptor_S = {"IOUSBDeviceQualifierDescriptor",&_IOUSBDeviceQualifierDescriptor_1};

	VPL_ExtField _IOUSBHIDReportDesc_3 = { "hidDescriptorLengthHi",2,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBHIDReportDesc_2 = { "hidDescriptorLengthLo",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBHIDReportDesc_3};
	VPL_ExtField _IOUSBHIDReportDesc_1 = { "hidDescriptorType",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBHIDReportDesc_2};
	VPL_ExtStructure _IOUSBHIDReportDesc_S = {"IOUSBHIDReportDesc",&_IOUSBHIDReportDesc_1};

	VPL_ExtField _IOUSBHIDDescriptor_8 = { "hidDescriptorLengthHi",8,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBHIDDescriptor_7 = { "hidDescriptorLengthLo",7,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBHIDDescriptor_8};
	VPL_ExtField _IOUSBHIDDescriptor_6 = { "hidDescriptorType",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBHIDDescriptor_7};
	VPL_ExtField _IOUSBHIDDescriptor_5 = { "hidNumDescriptors",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBHIDDescriptor_6};
	VPL_ExtField _IOUSBHIDDescriptor_4 = { "hidCountryCode",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBHIDDescriptor_5};
	VPL_ExtField _IOUSBHIDDescriptor_3 = { "descVersNum",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBHIDDescriptor_4};
	VPL_ExtField _IOUSBHIDDescriptor_2 = { "descType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBHIDDescriptor_3};
	VPL_ExtField _IOUSBHIDDescriptor_1 = { "descLen",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBHIDDescriptor_2};
	VPL_ExtStructure _IOUSBHIDDescriptor_S = {"IOUSBHIDDescriptor",&_IOUSBHIDDescriptor_1};

	VPL_ExtField _IOUSBEndpointDescriptor_6 = { "bInterval",6,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBEndpointDescriptor_5 = { "wMaxPacketSize",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBEndpointDescriptor_6};
	VPL_ExtField _IOUSBEndpointDescriptor_4 = { "bmAttributes",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBEndpointDescriptor_5};
	VPL_ExtField _IOUSBEndpointDescriptor_3 = { "bEndpointAddress",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBEndpointDescriptor_4};
	VPL_ExtField _IOUSBEndpointDescriptor_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBEndpointDescriptor_3};
	VPL_ExtField _IOUSBEndpointDescriptor_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBEndpointDescriptor_2};
	VPL_ExtStructure _IOUSBEndpointDescriptor_S = {"IOUSBEndpointDescriptor",&_IOUSBEndpointDescriptor_1};

	VPL_ExtField _IOUSBInterfaceDescriptor_9 = { "iInterface",8,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBInterfaceDescriptor_8 = { "bInterfaceProtocol",7,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceDescriptor_9};
	VPL_ExtField _IOUSBInterfaceDescriptor_7 = { "bInterfaceSubClass",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceDescriptor_8};
	VPL_ExtField _IOUSBInterfaceDescriptor_6 = { "bInterfaceClass",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceDescriptor_7};
	VPL_ExtField _IOUSBInterfaceDescriptor_5 = { "bNumEndpoints",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceDescriptor_6};
	VPL_ExtField _IOUSBInterfaceDescriptor_4 = { "bAlternateSetting",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceDescriptor_5};
	VPL_ExtField _IOUSBInterfaceDescriptor_3 = { "bInterfaceNumber",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceDescriptor_4};
	VPL_ExtField _IOUSBInterfaceDescriptor_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceDescriptor_3};
	VPL_ExtField _IOUSBInterfaceDescriptor_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBInterfaceDescriptor_2};
	VPL_ExtStructure _IOUSBInterfaceDescriptor_S = {"IOUSBInterfaceDescriptor",&_IOUSBInterfaceDescriptor_1};

	VPL_ExtField _IOUSBConfigurationDescHeader_3 = { "wTotalLength",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _IOUSBConfigurationDescHeader_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBConfigurationDescHeader_3};
	VPL_ExtField _IOUSBConfigurationDescHeader_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBConfigurationDescHeader_2};
	VPL_ExtStructure _IOUSBConfigurationDescHeader_S = {"IOUSBConfigurationDescHeader",&_IOUSBConfigurationDescHeader_1};

	VPL_ExtField _IOUSBConfigurationDescriptor_8 = { "MaxPower",8,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBConfigurationDescriptor_7 = { "bmAttributes",7,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBConfigurationDescriptor_8};
	VPL_ExtField _IOUSBConfigurationDescriptor_6 = { "iConfiguration",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBConfigurationDescriptor_7};
	VPL_ExtField _IOUSBConfigurationDescriptor_5 = { "bConfigurationValue",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBConfigurationDescriptor_6};
	VPL_ExtField _IOUSBConfigurationDescriptor_4 = { "bNumInterfaces",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBConfigurationDescriptor_5};
	VPL_ExtField _IOUSBConfigurationDescriptor_3 = { "wTotalLength",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBConfigurationDescriptor_4};
	VPL_ExtField _IOUSBConfigurationDescriptor_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBConfigurationDescriptor_3};
	VPL_ExtField _IOUSBConfigurationDescriptor_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBConfigurationDescriptor_2};
	VPL_ExtStructure _IOUSBConfigurationDescriptor_S = {"IOUSBConfigurationDescriptor",&_IOUSBConfigurationDescriptor_1};

	VPL_ExtField _IOUSBDescriptorHeader_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBDescriptorHeader_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDescriptorHeader_2};
	VPL_ExtStructure _IOUSBDescriptorHeader_S = {"IOUSBDescriptorHeader",&_IOUSBDescriptorHeader_1};

	VPL_ExtField _IOUSBDeviceDescriptor_14 = { "bNumConfigurations",17,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _IOUSBDeviceDescriptor_13 = { "iSerialNumber",16,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_14};
	VPL_ExtField _IOUSBDeviceDescriptor_12 = { "iProduct",15,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_13};
	VPL_ExtField _IOUSBDeviceDescriptor_11 = { "iManufacturer",14,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_12};
	VPL_ExtField _IOUSBDeviceDescriptor_10 = { "bcdDevice",12,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBDeviceDescriptor_11};
	VPL_ExtField _IOUSBDeviceDescriptor_9 = { "idProduct",10,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBDeviceDescriptor_10};
	VPL_ExtField _IOUSBDeviceDescriptor_8 = { "idVendor",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBDeviceDescriptor_9};
	VPL_ExtField _IOUSBDeviceDescriptor_7 = { "bMaxPacketSize0",7,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_8};
	VPL_ExtField _IOUSBDeviceDescriptor_6 = { "bDeviceProtocol",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_7};
	VPL_ExtField _IOUSBDeviceDescriptor_5 = { "bDeviceSubClass",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_6};
	VPL_ExtField _IOUSBDeviceDescriptor_4 = { "bDeviceClass",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_5};
	VPL_ExtField _IOUSBDeviceDescriptor_3 = { "bcdUSB",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBDeviceDescriptor_4};
	VPL_ExtField _IOUSBDeviceDescriptor_2 = { "bDescriptorType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_3};
	VPL_ExtField _IOUSBDeviceDescriptor_1 = { "bLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_IOUSBDeviceDescriptor_2};
	VPL_ExtStructure _IOUSBDeviceDescriptor_S = {"IOUSBDeviceDescriptor",&_IOUSBDeviceDescriptor_1};

	VPL_ExtField _IOUSBKeyboardData_2 = { "usbkeycode",2,64,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _IOUSBKeyboardData_1 = { "keycount",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_IOUSBKeyboardData_2};
	VPL_ExtStructure _IOUSBKeyboardData_S = {"IOUSBKeyboardData",&_IOUSBKeyboardData_1};

	VPL_ExtField _IOUSBMouseData_3 = { "YDelta",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _IOUSBMouseData_2 = { "XDelta",2,2,kIntType,"NULL",0,0,"short",&_IOUSBMouseData_3};
	VPL_ExtField _IOUSBMouseData_1 = { "buttons",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBMouseData_2};
	VPL_ExtStructure _IOUSBMouseData_S = {"IOUSBMouseData",&_IOUSBMouseData_1};

	VPL_ExtField _IOUSBLowLatencyIsocCompletion_3 = { "parameter",8,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _IOUSBLowLatencyIsocCompletion_2 = { "action",4,4,kPointerType,"void",1,0,"T*",&_IOUSBLowLatencyIsocCompletion_3};
	VPL_ExtField _IOUSBLowLatencyIsocCompletion_1 = { "target",0,4,kPointerType,"void",1,0,"T*",&_IOUSBLowLatencyIsocCompletion_2};
	VPL_ExtStructure _IOUSBLowLatencyIsocCompletion_S = {"IOUSBLowLatencyIsocCompletion",&_IOUSBLowLatencyIsocCompletion_1};

	VPL_ExtField _IOUSBIsocCompletion_3 = { "parameter",8,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _IOUSBIsocCompletion_2 = { "action",4,4,kPointerType,"void",1,0,"T*",&_IOUSBIsocCompletion_3};
	VPL_ExtField _IOUSBIsocCompletion_1 = { "target",0,4,kPointerType,"void",1,0,"T*",&_IOUSBIsocCompletion_2};
	VPL_ExtStructure _IOUSBIsocCompletion_S = {"IOUSBIsocCompletion",&_IOUSBIsocCompletion_1};

	VPL_ExtField _IOUSBCompletion_3 = { "parameter",8,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _IOUSBCompletion_2 = { "action",4,4,kPointerType,"void",1,0,"T*",&_IOUSBCompletion_3};
	VPL_ExtField _IOUSBCompletion_1 = { "target",0,4,kPointerType,"void",1,0,"T*",&_IOUSBCompletion_2};
	VPL_ExtStructure _IOUSBCompletion_S = {"IOUSBCompletion",&_IOUSBCompletion_1};

	VPL_ExtField _IOUSBLowLatencyIsocFrame_4 = { "frTimeStamp",8,8,kStructureType,"NULL",0,0,"UnsignedWide",NULL};
	VPL_ExtField _IOUSBLowLatencyIsocFrame_3 = { "frActCount",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBLowLatencyIsocFrame_4};
	VPL_ExtField _IOUSBLowLatencyIsocFrame_2 = { "frReqCount",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBLowLatencyIsocFrame_3};
	VPL_ExtField _IOUSBLowLatencyIsocFrame_1 = { "frStatus",0,4,kIntType,"NULL",0,0,"int",&_IOUSBLowLatencyIsocFrame_2};
	VPL_ExtStructure _IOUSBLowLatencyIsocFrame_S = {"IOUSBLowLatencyIsocFrame",&_IOUSBLowLatencyIsocFrame_1};

	VPL_ExtField _IOUSBIsocFrame_3 = { "frActCount",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _IOUSBIsocFrame_2 = { "frReqCount",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_IOUSBIsocFrame_3};
	VPL_ExtField _IOUSBIsocFrame_1 = { "frStatus",0,4,kIntType,"NULL",0,0,"int",&_IOUSBIsocFrame_2};
	VPL_ExtStructure _IOUSBIsocFrame_S = {"IOUSBIsocFrame",&_IOUSBIsocFrame_1};

	VPL_ExtField _IOCFPlugInInterfaceStruct_9 = { "Stop",28,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _IOCFPlugInInterfaceStruct_8 = { "Start",24,4,kPointerType,"int",1,4,"T*",&_IOCFPlugInInterfaceStruct_9};
	VPL_ExtField _IOCFPlugInInterfaceStruct_7 = { "Probe",20,4,kPointerType,"int",1,4,"T*",&_IOCFPlugInInterfaceStruct_8};
	VPL_ExtField _IOCFPlugInInterfaceStruct_6 = { "revision",18,2,kUnsignedType,"int",1,4,"unsigned short",&_IOCFPlugInInterfaceStruct_7};
	VPL_ExtField _IOCFPlugInInterfaceStruct_5 = { "version",16,2,kUnsignedType,"int",1,4,"unsigned short",&_IOCFPlugInInterfaceStruct_6};
	VPL_ExtField _IOCFPlugInInterfaceStruct_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_IOCFPlugInInterfaceStruct_5};
	VPL_ExtField _IOCFPlugInInterfaceStruct_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IOCFPlugInInterfaceStruct_4};
	VPL_ExtField _IOCFPlugInInterfaceStruct_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IOCFPlugInInterfaceStruct_3};
	VPL_ExtField _IOCFPlugInInterfaceStruct_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IOCFPlugInInterfaceStruct_2};
	VPL_ExtStructure _IOCFPlugInInterfaceStruct_S = {"IOCFPlugInInterfaceStruct",&_IOCFPlugInInterfaceStruct_1};

	VPL_ExtField _IUnknownVTbl_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _IUnknownVTbl_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_IUnknownVTbl_4};
	VPL_ExtField _IUnknownVTbl_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_IUnknownVTbl_3};
	VPL_ExtField _IUnknownVTbl_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_IUnknownVTbl_2};
	VPL_ExtStructure _IUnknownVTbl_S = {"IUnknownVTbl",&_IUnknownVTbl_1};

VPL_DictionaryNode VPX_MacOSX_IOKit_Structures[] =	{
	{"IOUSBInterfaceStruct197",&_IOUSBInterfaceStruct197_S},
	{"IOUSBInterfaceStruct192",&_IOUSBInterfaceStruct192_S},
	{"IOUSBInterfaceStruct190",&_IOUSBInterfaceStruct190_S},
	{"IOUSBInterfaceStruct183",&_IOUSBInterfaceStruct183_S},
	{"IOUSBInterfaceStruct182",&_IOUSBInterfaceStruct182_S},
	{"IOUSBInterfaceStruct",&_IOUSBInterfaceStruct_S},
	{"IOUSBDeviceStruct197",&_IOUSBDeviceStruct197_S},
	{"IOUSBDeviceStruct187",&_IOUSBDeviceStruct187_S},
	{"IOUSBDeviceStruct182",&_IOUSBDeviceStruct182_S},
	{"IOUSBDeviceStruct",&_IOUSBDeviceStruct_S},
	{"LowLatencyUserBufferInfo",&_LowLatencyUserBufferInfo_S},
	{"IOUSBFindInterfaceRequest",&_IOUSBFindInterfaceRequest_S},
	{"IOUSBGetFrameStruct",&_IOUSBGetFrameStruct_S},
	{"IOUSBLowLatencyIsocStruct",&_IOUSBLowLatencyIsocStruct_S},
	{"IOUSBIsocStruct",&_IOUSBIsocStruct_S},
	{"IOUSBDevReqOOLTO",&_IOUSBDevReqOOLTO_S},
	{"IOUSBDevReqOOL",&_IOUSBDevReqOOL_S},
	{"IOUSBBulkPipeReq",&_IOUSBBulkPipeReq_S},
	{"IOUSBDevRequestTO",&_IOUSBDevRequestTO_S},
	{"IOUSBDevRequest",&_IOUSBDevRequest_S},
	{"IOUSBFindEndpointRequest",&_IOUSBFindEndpointRequest_S},
	{"IOUSBMatch",&_IOUSBMatch_S},
	{"IOUSBInterfaceAssociationDescriptor",&_IOUSBInterfaceAssociationDescriptor_S},
	{"IOUSBDFUDescriptor",&_IOUSBDFUDescriptor_S},
	{"IOUSBDeviceQualifierDescriptor",&_IOUSBDeviceQualifierDescriptor_S},
	{"IOUSBHIDReportDesc",&_IOUSBHIDReportDesc_S},
	{"IOUSBHIDDescriptor",&_IOUSBHIDDescriptor_S},
	{"IOUSBEndpointDescriptor",&_IOUSBEndpointDescriptor_S},
	{"IOUSBInterfaceDescriptor",&_IOUSBInterfaceDescriptor_S},
	{"IOUSBConfigurationDescHeader",&_IOUSBConfigurationDescHeader_S},
	{"IOUSBConfigurationDescriptor",&_IOUSBConfigurationDescriptor_S},
	{"IOUSBDescriptorHeader",&_IOUSBDescriptorHeader_S},
	{"IOUSBDeviceDescriptor",&_IOUSBDeviceDescriptor_S},
	{"IOUSBKeyboardData",&_IOUSBKeyboardData_S},
	{"IOUSBMouseData",&_IOUSBMouseData_S},
	{"IOUSBLowLatencyIsocCompletion",&_IOUSBLowLatencyIsocCompletion_S},
	{"IOUSBIsocCompletion",&_IOUSBIsocCompletion_S},
	{"IOUSBCompletion",&_IOUSBCompletion_S},
	{"IOUSBLowLatencyIsocFrame",&_IOUSBLowLatencyIsocFrame_S},
	{"IOUSBIsocFrame",&_IOUSBIsocFrame_S},
	{"IOCFPlugInInterfaceStruct",&_IOCFPlugInInterfaceStruct_S},
	{"IUnknownVTbl",&_IUnknownVTbl_S},
};

Nat4	VPX_MacOSX_IOKit_Structures_Number = 42;

#pragma export on

Nat4	load_MacOSX_IOKit_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_IOKit_Structures(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_MacOSX_IOKit_Structures_Number,VPX_MacOSX_IOKit_Structures);
		
		return result;
}

#pragma export off
