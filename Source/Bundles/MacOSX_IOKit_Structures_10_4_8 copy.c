/*
	
	MacOSX_Structures.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	

	VPL_ExtField _VPXStruct_NumVersion_4 = { "nonRelRev",offsetof(NumVersion,nonRelRev),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_NumVersion_3 = { "stage",offsetof(NumVersion,stage),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_NumVersion_4};
	VPL_ExtField _VPXStruct_NumVersion_2 = { "minorAndBugRev",offsetof(NumVersion,minorAndBugRev),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_NumVersion_3};
	VPL_ExtField _VPXStruct_NumVersion_1 = { "majorRev",offsetof(NumVersion,majorRev),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_NumVersion_2};
	VPL_ExtStructure _VPXStruct_NumVersion_S = {"NumVersion",&_VPXStruct_NumVersion_1,sizeof(NumVersion)};

	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_7 = { "nextBuffer",offsetof(LowLatencyUserBufferInfoV2,nextBuffer),sizeof(void *),kPointerType,"LowLatencyUserBufferInfoV2",1,28,"T*",NULL};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_6 = { "mappedUHCIAddress",offsetof(LowLatencyUserBufferInfoV2,mappedUHCIAddress),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_LowLatencyUserBufferInfoV2_7};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_5 = { "isPrepared",offsetof(LowLatencyUserBufferInfoV2,isPrepared),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_LowLatencyUserBufferInfoV2_6};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_4 = { "bufferType",offsetof(LowLatencyUserBufferInfoV2,bufferType),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfoV2_5};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_3 = { "bufferSize",offsetof(LowLatencyUserBufferInfoV2,bufferSize),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfoV2_4};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_2 = { "bufferAddress",offsetof(LowLatencyUserBufferInfoV2,bufferAddress),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_LowLatencyUserBufferInfoV2_3};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_1 = { "cookie",offsetof(LowLatencyUserBufferInfoV2,cookie),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfoV2_2};
	VPL_ExtStructure _VPXStruct_LowLatencyUserBufferInfoV2_S = {"LowLatencyUserBufferInfoV2",&_VPXStruct_LowLatencyUserBufferInfoV2_1,sizeof(LowLatencyUserBufferInfoV2)};

	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_6 = { "nextBuffer",offsetof(LowLatencyUserBufferInfo,nextBuffer),sizeof(void *),kPointerType,"LowLatencyUserBufferInfo",1,24,"T*",NULL};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_5 = { "isPrepared",offsetof(LowLatencyUserBufferInfo,isPrepared),sizeof(unsigned char),kUnsignedType,"LowLatencyUserBufferInfo",1,24,"unsigned char",&_VPXStruct_LowLatencyUserBufferInfo_6};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_4 = { "bufferType",offsetof(LowLatencyUserBufferInfo,bufferType),sizeof(unsigned long),kUnsignedType,"LowLatencyUserBufferInfo",1,24,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfo_5};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_3 = { "bufferSize",offsetof(LowLatencyUserBufferInfo,bufferSize),sizeof(unsigned long),kUnsignedType,"LowLatencyUserBufferInfo",1,24,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfo_4};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_2 = { "bufferAddress",offsetof(LowLatencyUserBufferInfo,bufferAddress),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_LowLatencyUserBufferInfo_3};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_1 = { "cookie",offsetof(LowLatencyUserBufferInfo,cookie),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfo_2};
	VPL_ExtStructure _VPXStruct_LowLatencyUserBufferInfo_S = {"LowLatencyUserBufferInfo",&_VPXStruct_LowLatencyUserBufferInfo_1,sizeof(LowLatencyUserBufferInfo)};

	VPL_ExtField _VPXStruct_IOUSBFindInterfaceRequest_4 = { "bAlternateSetting",offsetof(IOUSBFindInterfaceRequest,bAlternateSetting),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBFindInterfaceRequest_3 = { "bInterfaceProtocol",offsetof(IOUSBFindInterfaceRequest,bInterfaceProtocol),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBFindInterfaceRequest_4};
	VPL_ExtField _VPXStruct_IOUSBFindInterfaceRequest_2 = { "bInterfaceSubClass",offsetof(IOUSBFindInterfaceRequest,bInterfaceSubClass),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBFindInterfaceRequest_3};
	VPL_ExtField _VPXStruct_IOUSBFindInterfaceRequest_1 = { "bInterfaceClass",offsetof(IOUSBFindInterfaceRequest,bInterfaceClass),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBFindInterfaceRequest_2};
	VPL_ExtStructure _VPXStruct_IOUSBFindInterfaceRequest_S = {"IOUSBFindInterfaceRequest",&_VPXStruct_IOUSBFindInterfaceRequest_1,sizeof(IOUSBFindInterfaceRequest)};

	VPL_ExtField _VPXStruct_IOUSBGetFrameStruct_2 = { "timeStamp",offsetof(IOUSBGetFrameStruct,timeStamp),sizeof(UnsignedWide),kStructureType,"NULL",0,0,"UnsignedWide",NULL};
	VPL_ExtField _VPXStruct_IOUSBGetFrameStruct_1 = { "frame",offsetof(IOUSBGetFrameStruct,frame),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IOUSBGetFrameStruct_2};
	VPL_ExtStructure _VPXStruct_IOUSBGetFrameStruct_S = {"IOUSBGetFrameStruct",&_VPXStruct_IOUSBGetFrameStruct_1,sizeof(IOUSBGetFrameStruct)};

	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_9 = { "fFrameListBufferOffset",offsetof(IOUSBLowLatencyIsocStruct,fFrameListBufferOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_8 = { "fFrameListBufferCookie",offsetof(IOUSBLowLatencyIsocStruct,fFrameListBufferCookie),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_9};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_7 = { "fDataBufferOffset",offsetof(IOUSBLowLatencyIsocStruct,fDataBufferOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_8};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_6 = { "fDataBufferCookie",offsetof(IOUSBLowLatencyIsocStruct,fDataBufferCookie),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_7};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_5 = { "fUpdateFrequency",offsetof(IOUSBLowLatencyIsocStruct,fUpdateFrequency),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_6};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_4 = { "fNumFrames",offsetof(IOUSBLowLatencyIsocStruct,fNumFrames),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_5};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_3 = { "fStartFrame",offsetof(IOUSBLowLatencyIsocStruct,fStartFrame),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IOUSBLowLatencyIsocStruct_4};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_2 = { "fBufSize",offsetof(IOUSBLowLatencyIsocStruct,fBufSize),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_3};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_1 = { "fPipe",offsetof(IOUSBLowLatencyIsocStruct,fPipe),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_2};
	VPL_ExtStructure _VPXStruct_IOUSBLowLatencyIsocStruct_S = {"IOUSBLowLatencyIsocStruct",&_VPXStruct_IOUSBLowLatencyIsocStruct_1,sizeof(IOUSBLowLatencyIsocStruct)};

	VPL_ExtField _VPXStruct_IOUSBIsocStruct_6 = { "fFrameCounts",offsetof(IOUSBIsocStruct,fFrameCounts),sizeof(void *),kPointerType,"IOUSBIsocFrame",1,8,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_5 = { "fNumFrames",offsetof(IOUSBIsocStruct,fNumFrames),sizeof(unsigned long),kUnsignedType,"IOUSBIsocFrame",1,8,"unsigned long",&_VPXStruct_IOUSBIsocStruct_6};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_4 = { "fStartFrame",offsetof(IOUSBIsocStruct,fStartFrame),sizeof(unsigned long long),kUnsignedType,"IOUSBIsocFrame",1,8,"unsigned long long",&_VPXStruct_IOUSBIsocStruct_5};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_3 = { "fBufSize",offsetof(IOUSBIsocStruct,fBufSize),sizeof(unsigned long),kUnsignedType,"IOUSBIsocFrame",1,8,"unsigned long",&_VPXStruct_IOUSBIsocStruct_4};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_2 = { "fBuffer",offsetof(IOUSBIsocStruct,fBuffer),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBIsocStruct_3};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_1 = { "fPipe",offsetof(IOUSBIsocStruct,fPipe),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_IOUSBIsocStruct_2};
	VPL_ExtStructure _VPXStruct_IOUSBIsocStruct_S = {"IOUSBIsocStruct",&_VPXStruct_IOUSBIsocStruct_1,sizeof(IOUSBIsocStruct)};

	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_10 = { "completionTimeout",offsetof(IOUSBDevReqOOLTO,completionTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_9 = { "noDataTimeout",offsetof(IOUSBDevReqOOLTO,noDataTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevReqOOLTO_10};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_8 = { "pipeRef",offsetof(IOUSBDevReqOOLTO,pipeRef),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOLTO_9};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_7 = { "wLenDone",offsetof(IOUSBDevReqOOLTO,wLenDone),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevReqOOLTO_8};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_6 = { "pData",offsetof(IOUSBDevReqOOLTO,pData),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDevReqOOLTO_7};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_5 = { "wLength",offsetof(IOUSBDevReqOOLTO,wLength),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOLTO_6};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_4 = { "wIndex",offsetof(IOUSBDevReqOOLTO,wIndex),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOLTO_5};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_3 = { "wValue",offsetof(IOUSBDevReqOOLTO,wValue),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOLTO_4};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_2 = { "bRequest",offsetof(IOUSBDevReqOOLTO,bRequest),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOLTO_3};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_1 = { "bmRequestType",offsetof(IOUSBDevReqOOLTO,bmRequestType),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOLTO_2};
	VPL_ExtStructure _VPXStruct_IOUSBDevReqOOLTO_S = {"IOUSBDevReqOOLTO",&_VPXStruct_IOUSBDevReqOOLTO_1,sizeof(IOUSBDevReqOOLTO)};

	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_8 = { "pipeRef",offsetof(IOUSBDevReqOOL,pipeRef),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_7 = { "wLenDone",offsetof(IOUSBDevReqOOL,wLenDone),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevReqOOL_8};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_6 = { "pData",offsetof(IOUSBDevReqOOL,pData),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDevReqOOL_7};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_5 = { "wLength",offsetof(IOUSBDevReqOOL,wLength),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOL_6};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_4 = { "wIndex",offsetof(IOUSBDevReqOOL,wIndex),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOL_5};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_3 = { "wValue",offsetof(IOUSBDevReqOOL,wValue),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOL_4};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_2 = { "bRequest",offsetof(IOUSBDevReqOOL,bRequest),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOL_3};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_1 = { "bmRequestType",offsetof(IOUSBDevReqOOL,bmRequestType),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOL_2};
	VPL_ExtStructure _VPXStruct_IOUSBDevReqOOL_S = {"IOUSBDevReqOOL",&_VPXStruct_IOUSBDevReqOOL_1,sizeof(IOUSBDevReqOOL)};

	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_5 = { "completionTimeout",offsetof(IOUSBBulkPipeReq,completionTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_4 = { "noDataTimeout",offsetof(IOUSBBulkPipeReq,noDataTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBBulkPipeReq_5};
	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_3 = { "size",offsetof(IOUSBBulkPipeReq,size),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBBulkPipeReq_4};
	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_2 = { "buf",offsetof(IOUSBBulkPipeReq,buf),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBBulkPipeReq_3};
	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_1 = { "pipeRef",offsetof(IOUSBBulkPipeReq,pipeRef),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_IOUSBBulkPipeReq_2};
	VPL_ExtStructure _VPXStruct_IOUSBBulkPipeReq_S = {"IOUSBBulkPipeReq",&_VPXStruct_IOUSBBulkPipeReq_1,sizeof(IOUSBBulkPipeReq)};

	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_9 = { "completionTimeout",offsetof(IOUSBDevRequestTO,completionTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_8 = { "noDataTimeout",offsetof(IOUSBDevRequestTO,noDataTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevRequestTO_9};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_7 = { "wLenDone",offsetof(IOUSBDevRequestTO,wLenDone),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevRequestTO_8};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_6 = { "pData",offsetof(IOUSBDevRequestTO,pData),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDevRequestTO_7};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_5 = { "wLength",offsetof(IOUSBDevRequestTO,wLength),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevRequestTO_6};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_4 = { "wIndex",offsetof(IOUSBDevRequestTO,wIndex),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevRequestTO_5};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_3 = { "wValue",offsetof(IOUSBDevRequestTO,wValue),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevRequestTO_4};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_2 = { "bRequest",offsetof(IOUSBDevRequestTO,bRequest),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_IOUSBDevRequestTO_3};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_1 = { "bmRequestType",offsetof(IOUSBDevRequestTO,bmRequestType),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_IOUSBDevRequestTO_2};
	VPL_ExtStructure _VPXStruct_IOUSBDevRequestTO_S = {"IOUSBDevRequestTO",&_VPXStruct_IOUSBDevRequestTO_1,sizeof(IOUSBDevRequestTO)};

	VPL_ExtField _VPXStruct_IOUSBDevRequest_7 = { "wLenDone",offsetof(IOUSBDevRequest,wLenDone),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_6 = { "pData",offsetof(IOUSBDevRequest,pData),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDevRequest_7};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_5 = { "wLength",offsetof(IOUSBDevRequest,wLength),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevRequest_6};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_4 = { "wIndex",offsetof(IOUSBDevRequest,wIndex),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevRequest_5};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_3 = { "wValue",offsetof(IOUSBDevRequest,wValue),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_IOUSBDevRequest_4};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_2 = { "bRequest",offsetof(IOUSBDevRequest,bRequest),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_IOUSBDevRequest_3};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_1 = { "bmRequestType",offsetof(IOUSBDevRequest,bmRequestType),sizeof(unsigned char),kUnsignedType,"void",1,0,"unsigned char",&_VPXStruct_IOUSBDevRequest_2};
	VPL_ExtStructure _VPXStruct_IOUSBDevRequest_S = {"IOUSBDevRequest",&_VPXStruct_IOUSBDevRequest_1,sizeof(IOUSBDevRequest)};

	VPL_ExtField _VPXStruct_IOUSBFindEndpointRequest_4 = { "interval",offsetof(IOUSBFindEndpointRequest,interval),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBFindEndpointRequest_3 = { "maxPacketSize",offsetof(IOUSBFindEndpointRequest,maxPacketSize),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBFindEndpointRequest_4};
	VPL_ExtField _VPXStruct_IOUSBFindEndpointRequest_2 = { "direction",offsetof(IOUSBFindEndpointRequest,direction),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBFindEndpointRequest_3};
	VPL_ExtField _VPXStruct_IOUSBFindEndpointRequest_1 = { "type",offsetof(IOUSBFindEndpointRequest,type),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBFindEndpointRequest_2};
	VPL_ExtStructure _VPXStruct_IOUSBFindEndpointRequest_S = {"IOUSBFindEndpointRequest",&_VPXStruct_IOUSBFindEndpointRequest_1,sizeof(IOUSBFindEndpointRequest)};

	VPL_ExtField _VPXStruct_IOUSBMatch_5 = { "usbProduct",offsetof(IOUSBMatch,usbProduct),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBMatch_4 = { "usbVendor",offsetof(IOUSBMatch,usbVendor),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMatch_5};
	VPL_ExtField _VPXStruct_IOUSBMatch_3 = { "usbProtocol",offsetof(IOUSBMatch,usbProtocol),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMatch_4};
	VPL_ExtField _VPXStruct_IOUSBMatch_2 = { "usbSubClass",offsetof(IOUSBMatch,usbSubClass),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMatch_3};
	VPL_ExtField _VPXStruct_IOUSBMatch_1 = { "usbClass",offsetof(IOUSBMatch,usbClass),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMatch_2};
	VPL_ExtStructure _VPXStruct_IOUSBMatch_S = {"IOUSBMatch",&_VPXStruct_IOUSBMatch_1,sizeof(IOUSBMatch)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_8 = { "iFunction",offsetof(IOUSBInterfaceAssociationDescriptor,iFunction),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_7 = { "bFunctionProtocol",offsetof(IOUSBInterfaceAssociationDescriptor,bFunctionProtocol),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_6 = { "bFunctionSubClass",offsetof(IOUSBInterfaceAssociationDescriptor,bFunctionSubClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_5 = { "bFunctionClass",offsetof(IOUSBInterfaceAssociationDescriptor,bFunctionClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_4 = { "bInterfaceCount",offsetof(IOUSBInterfaceAssociationDescriptor,bInterfaceCount),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_3 = { "bFirstInterface",offsetof(IOUSBInterfaceAssociationDescriptor,bFirstInterface),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_2 = { "bDescriptorType",offsetof(IOUSBInterfaceAssociationDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_1 = { "bLength",offsetof(IOUSBInterfaceAssociationDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_2};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceAssociationDescriptor_S = {"IOUSBInterfaceAssociationDescriptor",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_1,sizeof(IOUSBInterfaceAssociationDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_5 = { "wTransferSize",offsetof(IOUSBDFUDescriptor,wTransferSize),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_4 = { "wDetachTimeout",offsetof(IOUSBDFUDescriptor,wDetachTimeout),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDFUDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_3 = { "bmAttributes",offsetof(IOUSBDFUDescriptor,bmAttributes),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDFUDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_2 = { "bDescriptorType",offsetof(IOUSBDFUDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDFUDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_1 = { "bLength",offsetof(IOUSBDFUDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDFUDescriptor_2};
	VPL_ExtStructure _VPXStruct_IOUSBDFUDescriptor_S = {"IOUSBDFUDescriptor",&_VPXStruct_IOUSBDFUDescriptor_1,sizeof(IOUSBDFUDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_9 = { "bReserved",offsetof(IOUSBDeviceQualifierDescriptor,bReserved),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_8 = { "bNumConfigurations",offsetof(IOUSBDeviceQualifierDescriptor,bNumConfigurations),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_9};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_7 = { "bMaxPacketSize0",offsetof(IOUSBDeviceQualifierDescriptor,bMaxPacketSize0),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_8};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_6 = { "bDeviceProtocol",offsetof(IOUSBDeviceQualifierDescriptor,bDeviceProtocol),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_5 = { "bDeviceSubClass",offsetof(IOUSBDeviceQualifierDescriptor,bDeviceSubClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_4 = { "bDeviceClass",offsetof(IOUSBDeviceQualifierDescriptor,bDeviceClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_3 = { "bcdUSB",offsetof(IOUSBDeviceQualifierDescriptor,bcdUSB),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceQualifierDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_2 = { "bDescriptorType",offsetof(IOUSBDeviceQualifierDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_1 = { "bLength",offsetof(IOUSBDeviceQualifierDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_2};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceQualifierDescriptor_S = {"IOUSBDeviceQualifierDescriptor",&_VPXStruct_IOUSBDeviceQualifierDescriptor_1,sizeof(IOUSBDeviceQualifierDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBHIDReportDesc_3 = { "hidDescriptorLengthHi",offsetof(IOUSBHIDReportDesc,hidDescriptorLengthHi),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBHIDReportDesc_2 = { "hidDescriptorLengthLo",offsetof(IOUSBHIDReportDesc,hidDescriptorLengthLo),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDReportDesc_3};
	VPL_ExtField _VPXStruct_IOUSBHIDReportDesc_1 = { "hidDescriptorType",offsetof(IOUSBHIDReportDesc,hidDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDReportDesc_2};
	VPL_ExtStructure _VPXStruct_IOUSBHIDReportDesc_S = {"IOUSBHIDReportDesc",&_VPXStruct_IOUSBHIDReportDesc_1,sizeof(IOUSBHIDReportDesc)};

	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_8 = { "hidDescriptorLengthHi",offsetof(IOUSBHIDDescriptor,hidDescriptorLengthHi),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_7 = { "hidDescriptorLengthLo",offsetof(IOUSBHIDDescriptor,hidDescriptorLengthLo),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_8};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_6 = { "hidDescriptorType",offsetof(IOUSBHIDDescriptor,hidDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_5 = { "hidNumDescriptors",offsetof(IOUSBHIDDescriptor,hidNumDescriptors),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_4 = { "hidCountryCode",offsetof(IOUSBHIDDescriptor,hidCountryCode),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_3 = { "descVersNum",offsetof(IOUSBHIDDescriptor,descVersNum),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBHIDDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_2 = { "descType",offsetof(IOUSBHIDDescriptor,descType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_1 = { "descLen",offsetof(IOUSBHIDDescriptor,descLen),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_2};
	VPL_ExtStructure _VPXStruct_IOUSBHIDDescriptor_S = {"IOUSBHIDDescriptor",&_VPXStruct_IOUSBHIDDescriptor_1,sizeof(IOUSBHIDDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_6 = { "bInterval",offsetof(IOUSBEndpointDescriptor,bInterval),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_5 = { "wMaxPacketSize",offsetof(IOUSBEndpointDescriptor,wMaxPacketSize),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBEndpointDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_4 = { "bmAttributes",offsetof(IOUSBEndpointDescriptor,bmAttributes),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBEndpointDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_3 = { "bEndpointAddress",offsetof(IOUSBEndpointDescriptor,bEndpointAddress),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBEndpointDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_2 = { "bDescriptorType",offsetof(IOUSBEndpointDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBEndpointDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_1 = { "bLength",offsetof(IOUSBEndpointDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBEndpointDescriptor_2};
	VPL_ExtStructure _VPXStruct_IOUSBEndpointDescriptor_S = {"IOUSBEndpointDescriptor",&_VPXStruct_IOUSBEndpointDescriptor_1,sizeof(IOUSBEndpointDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_9 = { "iInterface",offsetof(IOUSBInterfaceDescriptor,iInterface),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_8 = { "bInterfaceProtocol",offsetof(IOUSBInterfaceDescriptor,bInterfaceProtocol),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_7 = { "bInterfaceSubClass",offsetof(IOUSBInterfaceDescriptor,bInterfaceSubClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_6 = { "bInterfaceClass",offsetof(IOUSBInterfaceDescriptor,bInterfaceClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_5 = { "bNumEndpoints",offsetof(IOUSBInterfaceDescriptor,bNumEndpoints),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_4 = { "bAlternateSetting",offsetof(IOUSBInterfaceDescriptor,bAlternateSetting),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_3 = { "bInterfaceNumber",offsetof(IOUSBInterfaceDescriptor,bInterfaceNumber),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_2 = { "bDescriptorType",offsetof(IOUSBInterfaceDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_1 = { "bLength",offsetof(IOUSBInterfaceDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_2};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceDescriptor_S = {"IOUSBInterfaceDescriptor",&_VPXStruct_IOUSBInterfaceDescriptor_1,sizeof(IOUSBInterfaceDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBConfigurationDescHeader_3 = { "wTotalLength",offsetof(IOUSBConfigurationDescHeader,wTotalLength),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescHeader_2 = { "bDescriptorType",offsetof(IOUSBConfigurationDescHeader,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescHeader_3};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescHeader_1 = { "bLength",offsetof(IOUSBConfigurationDescHeader,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescHeader_2};
	VPL_ExtStructure _VPXStruct_IOUSBConfigurationDescHeader_S = {"IOUSBConfigurationDescHeader",&_VPXStruct_IOUSBConfigurationDescHeader_1,sizeof(IOUSBConfigurationDescHeader)};

	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_8 = { "MaxPower",offsetof(IOUSBConfigurationDescriptor,MaxPower),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_7 = { "bmAttributes",offsetof(IOUSBConfigurationDescriptor,bmAttributes),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_8};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_6 = { "iConfiguration",offsetof(IOUSBConfigurationDescriptor,iConfiguration),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_5 = { "bConfigurationValue",offsetof(IOUSBConfigurationDescriptor,bConfigurationValue),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_4 = { "bNumInterfaces",offsetof(IOUSBConfigurationDescriptor,bNumInterfaces),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_3 = { "wTotalLength",offsetof(IOUSBConfigurationDescriptor,wTotalLength),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBConfigurationDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_2 = { "bDescriptorType",offsetof(IOUSBConfigurationDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_1 = { "bLength",offsetof(IOUSBConfigurationDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_2};
	VPL_ExtStructure _VPXStruct_IOUSBConfigurationDescriptor_S = {"IOUSBConfigurationDescriptor",&_VPXStruct_IOUSBConfigurationDescriptor_1,sizeof(IOUSBConfigurationDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBDescriptorHeader_2 = { "bDescriptorType",offsetof(IOUSBDescriptorHeader,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBDescriptorHeader_1 = { "bLength",offsetof(IOUSBDescriptorHeader,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDescriptorHeader_2};
	VPL_ExtStructure _VPXStruct_IOUSBDescriptorHeader_S = {"IOUSBDescriptorHeader",&_VPXStruct_IOUSBDescriptorHeader_1,sizeof(IOUSBDescriptorHeader)};

	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_14 = { "bNumConfigurations",offsetof(IOUSBDeviceDescriptor,bNumConfigurations),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_13 = { "iSerialNumber",offsetof(IOUSBDeviceDescriptor,iSerialNumber),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_14};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_12 = { "iProduct",offsetof(IOUSBDeviceDescriptor,iProduct),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_13};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_11 = { "iManufacturer",offsetof(IOUSBDeviceDescriptor,iManufacturer),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_12};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_10 = { "bcdDevice",offsetof(IOUSBDeviceDescriptor,bcdDevice),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceDescriptor_11};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_9 = { "idProduct",offsetof(IOUSBDeviceDescriptor,idProduct),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceDescriptor_10};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_8 = { "idVendor",offsetof(IOUSBDeviceDescriptor,idVendor),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceDescriptor_9};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_7 = { "bMaxPacketSize0",offsetof(IOUSBDeviceDescriptor,bMaxPacketSize0),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_8};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_6 = { "bDeviceProtocol",offsetof(IOUSBDeviceDescriptor,bDeviceProtocol),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_5 = { "bDeviceSubClass",offsetof(IOUSBDeviceDescriptor,bDeviceSubClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_4 = { "bDeviceClass",offsetof(IOUSBDeviceDescriptor,bDeviceClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_3 = { "bcdUSB",offsetof(IOUSBDeviceDescriptor,bcdUSB),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_2 = { "bDescriptorType",offsetof(IOUSBDeviceDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_1 = { "bLength",offsetof(IOUSBDeviceDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_2};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceDescriptor_S = {"IOUSBDeviceDescriptor",&_VPXStruct_IOUSBDeviceDescriptor_1,sizeof(IOUSBDeviceDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBKeyboardData_2 = { "usbkeycode",offsetof(IOUSBKeyboardData,usbkeycode),sizeof(unsigned short[32]),kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _VPXStruct_IOUSBKeyboardData_1 = { "keycount",offsetof(IOUSBKeyboardData,keycount),sizeof(unsigned short),kUnsignedType,"unsigned short",0,2,"unsigned short",&_VPXStruct_IOUSBKeyboardData_2};
	VPL_ExtStructure _VPXStruct_IOUSBKeyboardData_S = {"IOUSBKeyboardData",&_VPXStruct_IOUSBKeyboardData_1,sizeof(IOUSBKeyboardData)};

	VPL_ExtField _VPXStruct_IOUSBMouseData_3 = { "YDelta",offsetof(IOUSBMouseData,YDelta),sizeof(short),kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VPXStruct_IOUSBMouseData_2 = { "XDelta",offsetof(IOUSBMouseData,XDelta),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOUSBMouseData_3};
	VPL_ExtField _VPXStruct_IOUSBMouseData_1 = { "buttons",offsetof(IOUSBMouseData,buttons),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMouseData_2};
	VPL_ExtStructure _VPXStruct_IOUSBMouseData_S = {"IOUSBMouseData",&_VPXStruct_IOUSBMouseData_1,sizeof(IOUSBMouseData)};

	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocCompletion_3 = { "parameter",offsetof(IOUSBLowLatencyIsocCompletion,parameter),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocCompletion_2 = { "action",offsetof(IOUSBLowLatencyIsocCompletion,action),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBLowLatencyIsocCompletion_3};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocCompletion_1 = { "target",offsetof(IOUSBLowLatencyIsocCompletion,target),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBLowLatencyIsocCompletion_2};
	VPL_ExtStructure _VPXStruct_IOUSBLowLatencyIsocCompletion_S = {"IOUSBLowLatencyIsocCompletion",&_VPXStruct_IOUSBLowLatencyIsocCompletion_1,sizeof(IOUSBLowLatencyIsocCompletion)};

	VPL_ExtField _VPXStruct_IOUSBIsocCompletion_3 = { "parameter",offsetof(IOUSBIsocCompletion,parameter),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBIsocCompletion_2 = { "action",offsetof(IOUSBIsocCompletion,action),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBIsocCompletion_3};
	VPL_ExtField _VPXStruct_IOUSBIsocCompletion_1 = { "target",offsetof(IOUSBIsocCompletion,target),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBIsocCompletion_2};
	VPL_ExtStructure _VPXStruct_IOUSBIsocCompletion_S = {"IOUSBIsocCompletion",&_VPXStruct_IOUSBIsocCompletion_1,sizeof(IOUSBIsocCompletion)};

	VPL_ExtField _VPXStruct_IOUSBCompletionWithTimeStamp_3 = { "parameter",offsetof(IOUSBCompletionWithTimeStamp,parameter),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBCompletionWithTimeStamp_2 = { "action",offsetof(IOUSBCompletionWithTimeStamp,action),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBCompletionWithTimeStamp_3};
	VPL_ExtField _VPXStruct_IOUSBCompletionWithTimeStamp_1 = { "target",offsetof(IOUSBCompletionWithTimeStamp,target),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBCompletionWithTimeStamp_2};
	VPL_ExtStructure _VPXStruct_IOUSBCompletionWithTimeStamp_S = {"IOUSBCompletionWithTimeStamp",&_VPXStruct_IOUSBCompletionWithTimeStamp_1,sizeof(IOUSBCompletionWithTimeStamp)};

	VPL_ExtField _VPXStruct_IOUSBCompletion_3 = { "parameter",offsetof(IOUSBCompletion,parameter),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBCompletion_2 = { "action",offsetof(IOUSBCompletion,action),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBCompletion_3};
	VPL_ExtField _VPXStruct_IOUSBCompletion_1 = { "target",offsetof(IOUSBCompletion,target),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBCompletion_2};
	VPL_ExtStructure _VPXStruct_IOUSBCompletion_S = {"IOUSBCompletion",&_VPXStruct_IOUSBCompletion_1,sizeof(IOUSBCompletion)};

	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocFrame_4 = { "frTimeStamp",offsetof(IOUSBLowLatencyIsocFrame,frTimeStamp),sizeof(UnsignedWide),kStructureType,"NULL",0,0,"UnsignedWide",NULL};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocFrame_3 = { "frActCount",offsetof(IOUSBLowLatencyIsocFrame,frActCount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBLowLatencyIsocFrame_4};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocFrame_2 = { "frReqCount",offsetof(IOUSBLowLatencyIsocFrame,frReqCount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBLowLatencyIsocFrame_3};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocFrame_1 = { "frStatus",offsetof(IOUSBLowLatencyIsocFrame,frStatus),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_IOUSBLowLatencyIsocFrame_2};
	VPL_ExtStructure _VPXStruct_IOUSBLowLatencyIsocFrame_S = {"IOUSBLowLatencyIsocFrame",&_VPXStruct_IOUSBLowLatencyIsocFrame_1,sizeof(IOUSBLowLatencyIsocFrame)};

	VPL_ExtField _VPXStruct_IOUSBIsocFrame_3 = { "frActCount",offsetof(IOUSBIsocFrame,frActCount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBIsocFrame_2 = { "frReqCount",offsetof(IOUSBIsocFrame,frReqCount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBIsocFrame_3};
	VPL_ExtField _VPXStruct_IOUSBIsocFrame_1 = { "frStatus",offsetof(IOUSBIsocFrame,frStatus),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_IOUSBIsocFrame_2};
	VPL_ExtStructure _VPXStruct_IOUSBIsocFrame_S = {"IOUSBIsocFrame",&_VPXStruct_IOUSBIsocFrame_1,sizeof(IOUSBIsocFrame)};

	VPL_ExtField _VPXStruct_IUnknownVTbl_4 = { "Release",offsetof(IUnknownVTbl,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IUnknownVTbl_3 = { "AddRef",offsetof(IUnknownVTbl,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IUnknownVTbl_4};
	VPL_ExtField _VPXStruct_IUnknownVTbl_2 = { "QueryInterface",offsetof(IUnknownVTbl,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IUnknownVTbl_3};
	VPL_ExtField _VPXStruct_IUnknownVTbl_1 = { "_reserved",offsetof(IUnknownVTbl,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IUnknownVTbl_2};
	VPL_ExtStructure _VPXStruct_IUnknownVTbl_S = {"IUnknownVTbl",&_VPXStruct_IUnknownVTbl_1,sizeof(IUnknownVTbl)};

	VPL_ExtStructure _VPXStruct___CFPlugInInstance_S = {"__CFPlugInInstance",NULL,0};

	VPL_ExtField _VPXStruct_CFUUIDBytes_16 = { "byte15",offsetof(CFUUIDBytes,byte15),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_CFUUIDBytes_15 = { "byte14",offsetof(CFUUIDBytes,byte14),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_16};
	VPL_ExtField _VPXStruct_CFUUIDBytes_14 = { "byte13",offsetof(CFUUIDBytes,byte13),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_15};
	VPL_ExtField _VPXStruct_CFUUIDBytes_13 = { "byte12",offsetof(CFUUIDBytes,byte12),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_14};
	VPL_ExtField _VPXStruct_CFUUIDBytes_12 = { "byte11",offsetof(CFUUIDBytes,byte11),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_13};
	VPL_ExtField _VPXStruct_CFUUIDBytes_11 = { "byte10",offsetof(CFUUIDBytes,byte10),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_12};
	VPL_ExtField _VPXStruct_CFUUIDBytes_10 = { "byte9",offsetof(CFUUIDBytes,byte9),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_11};
	VPL_ExtField _VPXStruct_CFUUIDBytes_9 = { "byte8",offsetof(CFUUIDBytes,byte8),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_10};
	VPL_ExtField _VPXStruct_CFUUIDBytes_8 = { "byte7",offsetof(CFUUIDBytes,byte7),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_9};
	VPL_ExtField _VPXStruct_CFUUIDBytes_7 = { "byte6",offsetof(CFUUIDBytes,byte6),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_8};
	VPL_ExtField _VPXStruct_CFUUIDBytes_6 = { "byte5",offsetof(CFUUIDBytes,byte5),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_7};
	VPL_ExtField _VPXStruct_CFUUIDBytes_5 = { "byte4",offsetof(CFUUIDBytes,byte4),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_6};
	VPL_ExtField _VPXStruct_CFUUIDBytes_4 = { "byte3",offsetof(CFUUIDBytes,byte3),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_5};
	VPL_ExtField _VPXStruct_CFUUIDBytes_3 = { "byte2",offsetof(CFUUIDBytes,byte2),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_4};
	VPL_ExtField _VPXStruct_CFUUIDBytes_2 = { "byte1",offsetof(CFUUIDBytes,byte1),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_3};
	VPL_ExtField _VPXStruct_CFUUIDBytes_1 = { "byte0",offsetof(CFUUIDBytes,byte0),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_2};
	VPL_ExtStructure _VPXStruct_CFUUIDBytes_S = {"CFUUIDBytes",&_VPXStruct_CFUUIDBytes_1,sizeof(CFUUIDBytes)};

	VPL_ExtStructure _VPXStruct___CFUUID_S = {"__CFUUID",NULL,0};

	VPL_ExtStructure _VPXStruct___CFBundle_S = {"__CFBundle",NULL,0};

	VPL_ExtStructure _VPXStruct_FSRef_S = {"FSRef",NULL,0};

	VPL_ExtStructure _VPXStruct___CFURL_S = {"__CFURL",NULL,0};

	VPL_ExtStructure _VPXStruct_IOObject_S = {"IOObject",NULL,0};

	VPL_ExtStructure _VPXStruct_IONotificationPort_S = {"IONotificationPort",NULL,0};

	VPL_ExtField _VPXStruct_IOAsyncCompletionContent_2 = { "args",offsetof(IOAsyncCompletionContent,args),sizeof(void *),kPointerType,"void",2,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOAsyncCompletionContent_1 = { "result",offsetof(IOAsyncCompletionContent,result),sizeof(int),kIntType,"void",2,0,"int",&_VPXStruct_IOAsyncCompletionContent_2};
	VPL_ExtStructure _VPXStruct_IOAsyncCompletionContent_S = {"IOAsyncCompletionContent",&_VPXStruct_IOAsyncCompletionContent_1,sizeof(IOAsyncCompletionContent)};

	VPL_ExtField _VPXStruct_IOServiceInterestContent_2 = { "messageArgument",offsetof(IOServiceInterestContent,messageArgument),sizeof(void *[1]),kPointerType,"void",1,0,NULL,NULL};
	VPL_ExtField _VPXStruct_IOServiceInterestContent_1 = { "messageType",offsetof(IOServiceInterestContent,messageType),sizeof(unsigned int),kUnsignedType,"void",1,0,"unsigned int",&_VPXStruct_IOServiceInterestContent_2};
	VPL_ExtStructure _VPXStruct_IOServiceInterestContent_S = {"IOServiceInterestContent",&_VPXStruct_IOServiceInterestContent_1,sizeof(IOServiceInterestContent)};

	VPL_ExtField _VPXStruct_OSNotificationHeader_4 = { "content",offsetof(OSNotificationHeader,content),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_OSNotificationHeader_3 = { "reference",offsetof(OSNotificationHeader,reference),sizeof(unsigned int[8]),kPointerType,"unsigned int",0,4,NULL,&_VPXStruct_OSNotificationHeader_4};
	VPL_ExtField _VPXStruct_OSNotificationHeader_2 = { "type",offsetof(OSNotificationHeader,type),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_OSNotificationHeader_3};
	VPL_ExtField _VPXStruct_OSNotificationHeader_1 = { "size",offsetof(OSNotificationHeader,size),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_OSNotificationHeader_2};
	VPL_ExtStructure _VPXStruct_OSNotificationHeader_S = {"OSNotificationHeader",&_VPXStruct_OSNotificationHeader_1,sizeof(OSNotificationHeader)};

	VPL_ExtField _VPXStruct_IONamedValue_2 = { "name",offsetof(IONamedValue,name),sizeof(void *),kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_IONamedValue_1 = { "value",offsetof(IONamedValue,value),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_IONamedValue_2};
	VPL_ExtStructure _VPXStruct_IONamedValue_S = {"IONamedValue",&_VPXStruct_IONamedValue_1,sizeof(IONamedValue)};

	VPL_ExtField _VPXStruct_IOVirtualRange_2 = { "length",offsetof(IOVirtualRange,length),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOVirtualRange_1 = { "address",offsetof(IOVirtualRange,address),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_IOVirtualRange_2};
	VPL_ExtStructure _VPXStruct_IOVirtualRange_S = {"IOVirtualRange",&_VPXStruct_IOVirtualRange_1,sizeof(IOVirtualRange)};

	VPL_ExtField _VPXStruct_wide_2 = { "hi",offsetof(wide,hi),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_wide_1 = { "lo",offsetof(wide,lo),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_wide_2};
	VPL_ExtStructure _VPXStruct_wide_S = {"wide",&_VPXStruct_wide_1,sizeof(wide)};

	VPL_ExtField _VPXStruct_UnsignedWide_2 = { "hi",offsetof(UnsignedWide,hi),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_UnsignedWide_1 = { "lo",offsetof(UnsignedWide,lo),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_UnsignedWide_2};
	VPL_ExtStructure _VPXStruct_UnsignedWide_S = {"UnsignedWide",&_VPXStruct_UnsignedWide_1,sizeof(UnsignedWide)};

	VPL_ExtField _VPXStruct_CFRunLoopTimerContext_5 = { "copyDescription",offsetof(CFRunLoopTimerContext,copyDescription),sizeof(void *),kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _VPXStruct_CFRunLoopTimerContext_4 = { "release",offsetof(CFRunLoopTimerContext,release),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopTimerContext_5};
	VPL_ExtField _VPXStruct_CFRunLoopTimerContext_3 = { "retain",offsetof(CFRunLoopTimerContext,retain),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFRunLoopTimerContext_4};
	VPL_ExtField _VPXStruct_CFRunLoopTimerContext_2 = { "info",offsetof(CFRunLoopTimerContext,info),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopTimerContext_3};
	VPL_ExtField _VPXStruct_CFRunLoopTimerContext_1 = { "version",offsetof(CFRunLoopTimerContext,version),sizeof(long int),kIntType,"void",1,0,"long int",&_VPXStruct_CFRunLoopTimerContext_2};
	VPL_ExtStructure _VPXStruct_CFRunLoopTimerContext_S = {"CFRunLoopTimerContext",&_VPXStruct_CFRunLoopTimerContext_1,sizeof(CFRunLoopTimerContext)};

	VPL_ExtField _VPXStruct_CFRunLoopObserverContext_5 = { "copyDescription",offsetof(CFRunLoopObserverContext,copyDescription),sizeof(void *),kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _VPXStruct_CFRunLoopObserverContext_4 = { "release",offsetof(CFRunLoopObserverContext,release),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopObserverContext_5};
	VPL_ExtField _VPXStruct_CFRunLoopObserverContext_3 = { "retain",offsetof(CFRunLoopObserverContext,retain),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFRunLoopObserverContext_4};
	VPL_ExtField _VPXStruct_CFRunLoopObserverContext_2 = { "info",offsetof(CFRunLoopObserverContext,info),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopObserverContext_3};
	VPL_ExtField _VPXStruct_CFRunLoopObserverContext_1 = { "version",offsetof(CFRunLoopObserverContext,version),sizeof(long int),kIntType,"void",1,0,"long int",&_VPXStruct_CFRunLoopObserverContext_2};
	VPL_ExtStructure _VPXStruct_CFRunLoopObserverContext_S = {"CFRunLoopObserverContext",&_VPXStruct_CFRunLoopObserverContext_1,sizeof(CFRunLoopObserverContext)};

	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_9 = { "perform",offsetof(CFRunLoopSourceContext1,perform),sizeof(void *),kPointerType,"void",2,0,"T*",NULL};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_8 = { "getPort",offsetof(CFRunLoopSourceContext1,getPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_CFRunLoopSourceContext1_9};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_7 = { "hash",offsetof(CFRunLoopSourceContext1,hash),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_CFRunLoopSourceContext1_8};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_6 = { "equal",offsetof(CFRunLoopSourceContext1,equal),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",&_VPXStruct_CFRunLoopSourceContext1_7};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_5 = { "copyDescription",offsetof(CFRunLoopSourceContext1,copyDescription),sizeof(void *),kPointerType,"__CFString",2,0,"T*",&_VPXStruct_CFRunLoopSourceContext1_6};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_4 = { "release",offsetof(CFRunLoopSourceContext1,release),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopSourceContext1_5};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_3 = { "retain",offsetof(CFRunLoopSourceContext1,retain),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFRunLoopSourceContext1_4};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_2 = { "info",offsetof(CFRunLoopSourceContext1,info),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopSourceContext1_3};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext1_1 = { "version",offsetof(CFRunLoopSourceContext1,version),sizeof(long int),kIntType,"void",1,0,"long int",&_VPXStruct_CFRunLoopSourceContext1_2};
	VPL_ExtStructure _VPXStruct_CFRunLoopSourceContext1_S = {"CFRunLoopSourceContext1",&_VPXStruct_CFRunLoopSourceContext1_1,sizeof(CFRunLoopSourceContext1)};

	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_10 = { "perform",offsetof(CFRunLoopSourceContext,perform),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_9 = { "cancel",offsetof(CFRunLoopSourceContext,cancel),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopSourceContext_10};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_8 = { "schedule",offsetof(CFRunLoopSourceContext,schedule),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopSourceContext_9};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_7 = { "hash",offsetof(CFRunLoopSourceContext,hash),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_CFRunLoopSourceContext_8};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_6 = { "equal",offsetof(CFRunLoopSourceContext,equal),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",&_VPXStruct_CFRunLoopSourceContext_7};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_5 = { "copyDescription",offsetof(CFRunLoopSourceContext,copyDescription),sizeof(void *),kPointerType,"__CFString",2,0,"T*",&_VPXStruct_CFRunLoopSourceContext_6};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_4 = { "release",offsetof(CFRunLoopSourceContext,release),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopSourceContext_5};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_3 = { "retain",offsetof(CFRunLoopSourceContext,retain),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFRunLoopSourceContext_4};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_2 = { "info",offsetof(CFRunLoopSourceContext,info),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFRunLoopSourceContext_3};
	VPL_ExtField _VPXStruct_CFRunLoopSourceContext_1 = { "version",offsetof(CFRunLoopSourceContext,version),sizeof(long int),kIntType,"void",1,0,"long int",&_VPXStruct_CFRunLoopSourceContext_2};
	VPL_ExtStructure _VPXStruct_CFRunLoopSourceContext_S = {"CFRunLoopSourceContext",&_VPXStruct_CFRunLoopSourceContext_1,sizeof(CFRunLoopSourceContext)};

	VPL_ExtStructure _VPXStruct___CFRunLoopTimer_S = {"__CFRunLoopTimer",NULL,0};

	VPL_ExtStructure _VPXStruct___CFRunLoopObserver_S = {"__CFRunLoopObserver",NULL,0};

	VPL_ExtStructure _VPXStruct___CFRunLoopSource_S = {"__CFRunLoopSource",NULL,0};

	VPL_ExtStructure _VPXStruct___CFRunLoop_S = {"__CFRunLoop",NULL,0};

	VPL_ExtField _VPXStruct_CFStringInlineBuffer_6 = { "bufferedRangeEnd",offsetof(CFStringInlineBuffer,bufferedRangeEnd),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_CFStringInlineBuffer_5 = { "bufferedRangeStart",offsetof(CFStringInlineBuffer,bufferedRangeStart),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFStringInlineBuffer_6};
	VPL_ExtField _VPXStruct_CFStringInlineBuffer_4 = { "rangeToBuffer",offsetof(CFStringInlineBuffer,rangeToBuffer),sizeof(CFRange),kStructureType,"NULL",0,0,"CFRange",&_VPXStruct_CFStringInlineBuffer_5};
	VPL_ExtField _VPXStruct_CFStringInlineBuffer_3 = { "directBuffer",offsetof(CFStringInlineBuffer,directBuffer),sizeof(void *),kPointerType,"unsigned short",1,2,"T*",&_VPXStruct_CFStringInlineBuffer_4};
	VPL_ExtField _VPXStruct_CFStringInlineBuffer_2 = { "theString",offsetof(CFStringInlineBuffer,theString),sizeof(void *),kPointerType,"__CFString",1,0,"T*",&_VPXStruct_CFStringInlineBuffer_3};
	VPL_ExtField _VPXStruct_CFStringInlineBuffer_1 = { "buffer",offsetof(CFStringInlineBuffer,buffer),sizeof(unsigned short[64]),kPointerType,"unsigned short",0,2,NULL,&_VPXStruct_CFStringInlineBuffer_2};
	VPL_ExtStructure _VPXStruct_CFStringInlineBuffer_S = {"CFStringInlineBuffer",&_VPXStruct_CFStringInlineBuffer_1,sizeof(CFStringInlineBuffer)};

	VPL_ExtStructure _VPXStruct___CFLocale_S = {"__CFLocale",NULL,0};

	VPL_ExtStructure _VPXStruct___CFCharacterSet_S = {"__CFCharacterSet",NULL,0};

	VPL_ExtStructure _VPXStruct___CFData_S = {"__CFData",NULL,0};

	VPL_ExtField _VPXStruct_CFGregorianUnits_6 = { "seconds",offsetof(CFGregorianUnits,seconds),sizeof(double),kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _VPXStruct_CFGregorianUnits_5 = { "minutes",offsetof(CFGregorianUnits,minutes),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFGregorianUnits_6};
	VPL_ExtField _VPXStruct_CFGregorianUnits_4 = { "hours",offsetof(CFGregorianUnits,hours),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFGregorianUnits_5};
	VPL_ExtField _VPXStruct_CFGregorianUnits_3 = { "days",offsetof(CFGregorianUnits,days),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFGregorianUnits_4};
	VPL_ExtField _VPXStruct_CFGregorianUnits_2 = { "months",offsetof(CFGregorianUnits,months),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFGregorianUnits_3};
	VPL_ExtField _VPXStruct_CFGregorianUnits_1 = { "years",offsetof(CFGregorianUnits,years),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFGregorianUnits_2};
	VPL_ExtStructure _VPXStruct_CFGregorianUnits_S = {"CFGregorianUnits",&_VPXStruct_CFGregorianUnits_1,sizeof(CFGregorianUnits)};

	VPL_ExtField _VPXStruct_CFGregorianDate_6 = { "second",offsetof(CFGregorianDate,second),sizeof(double),kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _VPXStruct_CFGregorianDate_5 = { "minute",offsetof(CFGregorianDate,minute),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_CFGregorianDate_6};
	VPL_ExtField _VPXStruct_CFGregorianDate_4 = { "hour",offsetof(CFGregorianDate,hour),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_CFGregorianDate_5};
	VPL_ExtField _VPXStruct_CFGregorianDate_3 = { "day",offsetof(CFGregorianDate,day),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_CFGregorianDate_4};
	VPL_ExtField _VPXStruct_CFGregorianDate_2 = { "month",offsetof(CFGregorianDate,month),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_CFGregorianDate_3};
	VPL_ExtField _VPXStruct_CFGregorianDate_1 = { "year",offsetof(CFGregorianDate,year),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFGregorianDate_2};
	VPL_ExtStructure _VPXStruct_CFGregorianDate_S = {"CFGregorianDate",&_VPXStruct_CFGregorianDate_1,sizeof(CFGregorianDate)};

	VPL_ExtStructure _VPXStruct___CFTimeZone_S = {"__CFTimeZone",NULL,0};

	VPL_ExtStructure _VPXStruct___CFDate_S = {"__CFDate",NULL,0};

	VPL_ExtStructure _VPXStruct___CFArray_S = {"__CFArray",NULL,0};

	VPL_ExtField _VPXStruct_CFArrayCallBacks_5 = { "equal",offsetof(CFArrayCallBacks,equal),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_CFArrayCallBacks_4 = { "copyDescription",offsetof(CFArrayCallBacks,copyDescription),sizeof(void *),kPointerType,"__CFString",2,0,"T*",&_VPXStruct_CFArrayCallBacks_5};
	VPL_ExtField _VPXStruct_CFArrayCallBacks_3 = { "release",offsetof(CFArrayCallBacks,release),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFArrayCallBacks_4};
	VPL_ExtField _VPXStruct_CFArrayCallBacks_2 = { "retain",offsetof(CFArrayCallBacks,retain),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFArrayCallBacks_3};
	VPL_ExtField _VPXStruct_CFArrayCallBacks_1 = { "version",offsetof(CFArrayCallBacks,version),sizeof(long int),kIntType,"void",2,0,"long int",&_VPXStruct_CFArrayCallBacks_2};
	VPL_ExtStructure _VPXStruct_CFArrayCallBacks_S = {"CFArrayCallBacks",&_VPXStruct_CFArrayCallBacks_1,sizeof(CFArrayCallBacks)};

	VPL_ExtStructure _VPXStruct___CFDictionary_S = {"__CFDictionary",NULL,0};

	VPL_ExtField _VPXStruct_CFDictionaryValueCallBacks_5 = { "equal",offsetof(CFDictionaryValueCallBacks,equal),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_CFDictionaryValueCallBacks_4 = { "copyDescription",offsetof(CFDictionaryValueCallBacks,copyDescription),sizeof(void *),kPointerType,"__CFString",2,0,"T*",&_VPXStruct_CFDictionaryValueCallBacks_5};
	VPL_ExtField _VPXStruct_CFDictionaryValueCallBacks_3 = { "release",offsetof(CFDictionaryValueCallBacks,release),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFDictionaryValueCallBacks_4};
	VPL_ExtField _VPXStruct_CFDictionaryValueCallBacks_2 = { "retain",offsetof(CFDictionaryValueCallBacks,retain),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFDictionaryValueCallBacks_3};
	VPL_ExtField _VPXStruct_CFDictionaryValueCallBacks_1 = { "version",offsetof(CFDictionaryValueCallBacks,version),sizeof(long int),kIntType,"void",2,0,"long int",&_VPXStruct_CFDictionaryValueCallBacks_2};
	VPL_ExtStructure _VPXStruct_CFDictionaryValueCallBacks_S = {"CFDictionaryValueCallBacks",&_VPXStruct_CFDictionaryValueCallBacks_1,sizeof(CFDictionaryValueCallBacks)};

	VPL_ExtField _VPXStruct_CFDictionaryKeyCallBacks_6 = { "hash",offsetof(CFDictionaryKeyCallBacks,hash),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_CFDictionaryKeyCallBacks_5 = { "equal",offsetof(CFDictionaryKeyCallBacks,equal),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",&_VPXStruct_CFDictionaryKeyCallBacks_6};
	VPL_ExtField _VPXStruct_CFDictionaryKeyCallBacks_4 = { "copyDescription",offsetof(CFDictionaryKeyCallBacks,copyDescription),sizeof(void *),kPointerType,"__CFString",2,0,"T*",&_VPXStruct_CFDictionaryKeyCallBacks_5};
	VPL_ExtField _VPXStruct_CFDictionaryKeyCallBacks_3 = { "release",offsetof(CFDictionaryKeyCallBacks,release),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFDictionaryKeyCallBacks_4};
	VPL_ExtField _VPXStruct_CFDictionaryKeyCallBacks_2 = { "retain",offsetof(CFDictionaryKeyCallBacks,retain),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFDictionaryKeyCallBacks_3};
	VPL_ExtField _VPXStruct_CFDictionaryKeyCallBacks_1 = { "version",offsetof(CFDictionaryKeyCallBacks,version),sizeof(long int),kIntType,"void",2,0,"long int",&_VPXStruct_CFDictionaryKeyCallBacks_2};
	VPL_ExtStructure _VPXStruct_CFDictionaryKeyCallBacks_S = {"CFDictionaryKeyCallBacks",&_VPXStruct_CFDictionaryKeyCallBacks_1,sizeof(CFDictionaryKeyCallBacks)};

	VPL_ExtField _VPXStruct_CFAllocatorContext_9 = { "preferredSize",offsetof(CFAllocatorContext,preferredSize),sizeof(void *),kPointerType,"long int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_CFAllocatorContext_8 = { "deallocate",offsetof(CFAllocatorContext,deallocate),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFAllocatorContext_9};
	VPL_ExtField _VPXStruct_CFAllocatorContext_7 = { "reallocate",offsetof(CFAllocatorContext,reallocate),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFAllocatorContext_8};
	VPL_ExtField _VPXStruct_CFAllocatorContext_6 = { "allocate",offsetof(CFAllocatorContext,allocate),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFAllocatorContext_7};
	VPL_ExtField _VPXStruct_CFAllocatorContext_5 = { "copyDescription",offsetof(CFAllocatorContext,copyDescription),sizeof(void *),kPointerType,"__CFString",2,0,"T*",&_VPXStruct_CFAllocatorContext_6};
	VPL_ExtField _VPXStruct_CFAllocatorContext_4 = { "release",offsetof(CFAllocatorContext,release),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFAllocatorContext_5};
	VPL_ExtField _VPXStruct_CFAllocatorContext_3 = { "retain",offsetof(CFAllocatorContext,retain),sizeof(void *),kPointerType,"void",2,0,"T*",&_VPXStruct_CFAllocatorContext_4};
	VPL_ExtField _VPXStruct_CFAllocatorContext_2 = { "info",offsetof(CFAllocatorContext,info),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_CFAllocatorContext_3};
	VPL_ExtField _VPXStruct_CFAllocatorContext_1 = { "version",offsetof(CFAllocatorContext,version),sizeof(long int),kIntType,"void",1,0,"long int",&_VPXStruct_CFAllocatorContext_2};
	VPL_ExtStructure _VPXStruct_CFAllocatorContext_S = {"CFAllocatorContext",&_VPXStruct_CFAllocatorContext_1,sizeof(CFAllocatorContext)};

	VPL_ExtStructure _VPXStruct___CFAllocator_S = {"__CFAllocator",NULL,0};

	VPL_ExtStructure _VPXStruct___CFNull_S = {"__CFNull",NULL,0};

	VPL_ExtField _VPXStruct_CFRange_2 = { "length",offsetof(CFRange,length),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_CFRange_1 = { "location",offsetof(CFRange,location),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFRange_2};
	VPL_ExtStructure _VPXStruct_CFRange_S = {"CFRange",&_VPXStruct_CFRange_1,sizeof(CFRange)};

	VPL_ExtStructure _VPXStruct___CFString_S = {"__CFString",NULL,0};

	VPL_ExtField _VPXStruct_mach_msg_empty_rcv_t_2 = { "trailer",offsetof(mach_msg_empty_rcv_t,trailer),sizeof(mach_msg_trailer_t),kStructureType,"NULL",0,0,"mach_msg_trailer_t",NULL};
	VPL_ExtField _VPXStruct_mach_msg_empty_rcv_t_1 = { "header",offsetof(mach_msg_empty_rcv_t,header),sizeof(mach_msg_header_t),kStructureType,"NULL",0,0,"mach_msg_header_t",&_VPXStruct_mach_msg_empty_rcv_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_empty_rcv_t_S = {"mach_msg_empty_rcv_t",&_VPXStruct_mach_msg_empty_rcv_t_1,sizeof(mach_msg_empty_rcv_t)};

	VPL_ExtField _VPXStruct_mach_msg_empty_send_t_1 = { "header",offsetof(mach_msg_empty_send_t,header),sizeof(mach_msg_header_t),kStructureType,"NULL",0,0,"mach_msg_header_t",NULL};
	VPL_ExtStructure _VPXStruct_mach_msg_empty_send_t_S = {"mach_msg_empty_send_t",&_VPXStruct_mach_msg_empty_send_t_1,sizeof(mach_msg_empty_send_t)};

	VPL_ExtField _VPXStruct_mach_msg_audit_trailer_t_5 = { "msgh_audit",offsetof(mach_msg_audit_trailer_t,msgh_audit),sizeof(audit_token_t),kStructureType,"NULL",0,0,"audit_token_t",NULL};
	VPL_ExtField _VPXStruct_mach_msg_audit_trailer_t_4 = { "msgh_sender",offsetof(mach_msg_audit_trailer_t,msgh_sender),sizeof(security_token_t),kStructureType,"NULL",0,0,"security_token_t",&_VPXStruct_mach_msg_audit_trailer_t_5};
	VPL_ExtField _VPXStruct_mach_msg_audit_trailer_t_3 = { "msgh_seqno",offsetof(mach_msg_audit_trailer_t,msgh_seqno),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_audit_trailer_t_4};
	VPL_ExtField _VPXStruct_mach_msg_audit_trailer_t_2 = { "msgh_trailer_size",offsetof(mach_msg_audit_trailer_t,msgh_trailer_size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_audit_trailer_t_3};
	VPL_ExtField _VPXStruct_mach_msg_audit_trailer_t_1 = { "msgh_trailer_type",offsetof(mach_msg_audit_trailer_t,msgh_trailer_type),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_audit_trailer_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_audit_trailer_t_S = {"mach_msg_audit_trailer_t",&_VPXStruct_mach_msg_audit_trailer_t_1,sizeof(mach_msg_audit_trailer_t)};

	VPL_ExtField _VPXStruct_audit_token_t_1 = { "val",offsetof(audit_token_t,val),sizeof(unsigned int[8]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtStructure _VPXStruct_audit_token_t_S = {"audit_token_t",&_VPXStruct_audit_token_t_1,sizeof(audit_token_t)};

	VPL_ExtField _VPXStruct_mach_msg_security_trailer_t_4 = { "msgh_sender",offsetof(mach_msg_security_trailer_t,msgh_sender),sizeof(security_token_t),kStructureType,"NULL",0,0,"security_token_t",NULL};
	VPL_ExtField _VPXStruct_mach_msg_security_trailer_t_3 = { "msgh_seqno",offsetof(mach_msg_security_trailer_t,msgh_seqno),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_security_trailer_t_4};
	VPL_ExtField _VPXStruct_mach_msg_security_trailer_t_2 = { "msgh_trailer_size",offsetof(mach_msg_security_trailer_t,msgh_trailer_size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_security_trailer_t_3};
	VPL_ExtField _VPXStruct_mach_msg_security_trailer_t_1 = { "msgh_trailer_type",offsetof(mach_msg_security_trailer_t,msgh_trailer_type),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_security_trailer_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_security_trailer_t_S = {"mach_msg_security_trailer_t",&_VPXStruct_mach_msg_security_trailer_t_1,sizeof(mach_msg_security_trailer_t)};

	VPL_ExtField _VPXStruct_security_token_t_1 = { "val",offsetof(security_token_t,val),sizeof(unsigned int[2]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtStructure _VPXStruct_security_token_t_S = {"security_token_t",&_VPXStruct_security_token_t_1,sizeof(security_token_t)};

	VPL_ExtField _VPXStruct_mach_msg_seqno_trailer_t_3 = { "msgh_seqno",offsetof(mach_msg_seqno_trailer_t,msgh_seqno),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_seqno_trailer_t_2 = { "msgh_trailer_size",offsetof(mach_msg_seqno_trailer_t,msgh_trailer_size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_seqno_trailer_t_3};
	VPL_ExtField _VPXStruct_mach_msg_seqno_trailer_t_1 = { "msgh_trailer_type",offsetof(mach_msg_seqno_trailer_t,msgh_trailer_type),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_seqno_trailer_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_seqno_trailer_t_S = {"mach_msg_seqno_trailer_t",&_VPXStruct_mach_msg_seqno_trailer_t_1,sizeof(mach_msg_seqno_trailer_t)};

	VPL_ExtField _VPXStruct_mach_msg_trailer_t_2 = { "msgh_trailer_size",offsetof(mach_msg_trailer_t,msgh_trailer_size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_trailer_t_1 = { "msgh_trailer_type",offsetof(mach_msg_trailer_t,msgh_trailer_type),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_trailer_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_trailer_t_S = {"mach_msg_trailer_t",&_VPXStruct_mach_msg_trailer_t_1,sizeof(mach_msg_trailer_t)};

	VPL_ExtField _VPXStruct_mach_msg_base_t_2 = { "body",offsetof(mach_msg_base_t,body),sizeof(mach_msg_body_t),kStructureType,"NULL",0,0,"mach_msg_body_t",NULL};
	VPL_ExtField _VPXStruct_mach_msg_base_t_1 = { "header",offsetof(mach_msg_base_t,header),sizeof(mach_msg_header_t),kStructureType,"NULL",0,0,"mach_msg_header_t",&_VPXStruct_mach_msg_base_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_base_t_S = {"mach_msg_base_t",&_VPXStruct_mach_msg_base_t_1,sizeof(mach_msg_base_t)};

	VPL_ExtField _VPXStruct_mach_msg_header_t_6 = { "msgh_id",offsetof(mach_msg_header_t,msgh_id),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_header_t_5 = { "msgh_reserved",offsetof(mach_msg_header_t,msgh_reserved),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_6};
	VPL_ExtField _VPXStruct_mach_msg_header_t_4 = { "msgh_local_port",offsetof(mach_msg_header_t,msgh_local_port),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_5};
	VPL_ExtField _VPXStruct_mach_msg_header_t_3 = { "msgh_remote_port",offsetof(mach_msg_header_t,msgh_remote_port),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_4};
	VPL_ExtField _VPXStruct_mach_msg_header_t_2 = { "msgh_size",offsetof(mach_msg_header_t,msgh_size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_3};
	VPL_ExtField _VPXStruct_mach_msg_header_t_1 = { "msgh_bits",offsetof(mach_msg_header_t,msgh_bits),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_header_t_S = {"mach_msg_header_t",&_VPXStruct_mach_msg_header_t_1,sizeof(mach_msg_header_t)};

	VPL_ExtField _VPXStruct_mach_msg_body_t_1 = { "msgh_descriptor_count",offsetof(mach_msg_body_t,msgh_descriptor_count),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtStructure _VPXStruct_mach_msg_body_t_S = {"mach_msg_body_t",&_VPXStruct_mach_msg_body_t_1,sizeof(mach_msg_body_t)};

	VPL_ExtField _VPXStruct_mach_msg_ool_ports_descriptor_t_2 = { "count",offsetof(mach_msg_ool_ports_descriptor_t,count),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_ool_ports_descriptor_t_1 = { "address",offsetof(mach_msg_ool_ports_descriptor_t,address),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_mach_msg_ool_ports_descriptor_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_ool_ports_descriptor_t_S = {"mach_msg_ool_ports_descriptor_t",&_VPXStruct_mach_msg_ool_ports_descriptor_t_1,sizeof(mach_msg_ool_ports_descriptor_t)};

	VPL_ExtField _VPXStruct_mach_msg_ool_ports_descriptor64_t_6 = { "count",offsetof(mach_msg_ool_ports_descriptor64_t,count),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_ool_ports_descriptor64_t_1 = { "address",offsetof(mach_msg_ool_ports_descriptor64_t,address),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_mach_msg_ool_ports_descriptor64_t_6};
	VPL_ExtStructure _VPXStruct_mach_msg_ool_ports_descriptor64_t_S = {"mach_msg_ool_ports_descriptor64_t",&_VPXStruct_mach_msg_ool_ports_descriptor64_t_1,sizeof(mach_msg_ool_ports_descriptor64_t)};

	VPL_ExtField _VPXStruct_mach_msg_ool_ports_descriptor32_t_2 = { "count",offsetof(mach_msg_ool_ports_descriptor32_t,count),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_ool_ports_descriptor32_t_1 = { "address",offsetof(mach_msg_ool_ports_descriptor32_t,address),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_ool_ports_descriptor32_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_ool_ports_descriptor32_t_S = {"mach_msg_ool_ports_descriptor32_t",&_VPXStruct_mach_msg_ool_ports_descriptor32_t_1,sizeof(mach_msg_ool_ports_descriptor32_t)};

	VPL_ExtField _VPXStruct_mach_msg_ool_descriptor_t_2 = { "size",offsetof(mach_msg_ool_descriptor_t,size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_ool_descriptor_t_1 = { "address",offsetof(mach_msg_ool_descriptor_t,address),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_mach_msg_ool_descriptor_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_ool_descriptor_t_S = {"mach_msg_ool_descriptor_t",&_VPXStruct_mach_msg_ool_descriptor_t_1,sizeof(mach_msg_ool_descriptor_t)};

	VPL_ExtField _VPXStruct_mach_msg_ool_descriptor64_t_1 = { "address",offsetof(mach_msg_ool_descriptor64_t,address),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",NULL};
	VPL_ExtStructure _VPXStruct_mach_msg_ool_descriptor64_t_S = {"mach_msg_ool_descriptor64_t",&_VPXStruct_mach_msg_ool_descriptor64_t_1,sizeof(mach_msg_ool_descriptor64_t)};

	VPL_ExtField _VPXStruct_mach_msg_ool_descriptor32_t_2 = { "size",offsetof(mach_msg_ool_descriptor32_t,size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_ool_descriptor32_t_1 = { "address",offsetof(mach_msg_ool_descriptor32_t,address),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_ool_descriptor32_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_ool_descriptor32_t_S = {"mach_msg_ool_descriptor32_t",&_VPXStruct_mach_msg_ool_descriptor32_t_1,sizeof(mach_msg_ool_descriptor32_t)};

	VPL_ExtField _VPXStruct_mach_msg_port_descriptor_t_2 = { "pad1",offsetof(mach_msg_port_descriptor_t,pad1),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_port_descriptor_t_1 = { "name",offsetof(mach_msg_port_descriptor_t,name),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_port_descriptor_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_port_descriptor_t_S = {"mach_msg_port_descriptor_t",&_VPXStruct_mach_msg_port_descriptor_t_1,sizeof(mach_msg_port_descriptor_t)};

	VPL_ExtField _VPXStruct_mach_msg_type_descriptor_t_2 = { "pad2",offsetof(mach_msg_type_descriptor_t,pad2),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_type_descriptor_t_1 = { "pad1",offsetof(mach_msg_type_descriptor_t,pad1),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_type_descriptor_t_2};
	VPL_ExtStructure _VPXStruct_mach_msg_type_descriptor_t_S = {"mach_msg_type_descriptor_t",&_VPXStruct_mach_msg_type_descriptor_t_1,sizeof(mach_msg_type_descriptor_t)};

VPL_DictionaryNode VPX_MacOSX_IOKit_Structures[] =	{
	{"NumVersion",&_VPXStruct_NumVersion_S},
	{"LowLatencyUserBufferInfoV2",&_VPXStruct_LowLatencyUserBufferInfoV2_S},
	{"LowLatencyUserBufferInfo",&_VPXStruct_LowLatencyUserBufferInfo_S},
	{"IOUSBFindInterfaceRequest",&_VPXStruct_IOUSBFindInterfaceRequest_S},
	{"IOUSBGetFrameStruct",&_VPXStruct_IOUSBGetFrameStruct_S},
	{"IOUSBLowLatencyIsocStruct",&_VPXStruct_IOUSBLowLatencyIsocStruct_S},
	{"IOUSBIsocStruct",&_VPXStruct_IOUSBIsocStruct_S},
	{"IOUSBDevReqOOLTO",&_VPXStruct_IOUSBDevReqOOLTO_S},
	{"IOUSBDevReqOOL",&_VPXStruct_IOUSBDevReqOOL_S},
	{"IOUSBBulkPipeReq",&_VPXStruct_IOUSBBulkPipeReq_S},
	{"IOUSBDevRequestTO",&_VPXStruct_IOUSBDevRequestTO_S},
	{"IOUSBDevRequest",&_VPXStruct_IOUSBDevRequest_S},
	{"IOUSBFindEndpointRequest",&_VPXStruct_IOUSBFindEndpointRequest_S},
	{"IOUSBMatch",&_VPXStruct_IOUSBMatch_S},
	{"IOUSBInterfaceAssociationDescriptor",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_S},
	{"IOUSBDFUDescriptor",&_VPXStruct_IOUSBDFUDescriptor_S},
	{"IOUSBDeviceQualifierDescriptor",&_VPXStruct_IOUSBDeviceQualifierDescriptor_S},
	{"IOUSBHIDReportDesc",&_VPXStruct_IOUSBHIDReportDesc_S},
	{"IOUSBHIDDescriptor",&_VPXStruct_IOUSBHIDDescriptor_S},
	{"IOUSBEndpointDescriptor",&_VPXStruct_IOUSBEndpointDescriptor_S},
	{"IOUSBInterfaceDescriptor",&_VPXStruct_IOUSBInterfaceDescriptor_S},
	{"IOUSBConfigurationDescHeader",&_VPXStruct_IOUSBConfigurationDescHeader_S},
	{"IOUSBConfigurationDescriptor",&_VPXStruct_IOUSBConfigurationDescriptor_S},
	{"IOUSBDescriptorHeader",&_VPXStruct_IOUSBDescriptorHeader_S},
	{"IOUSBDeviceDescriptor",&_VPXStruct_IOUSBDeviceDescriptor_S},
	{"IOUSBKeyboardData",&_VPXStruct_IOUSBKeyboardData_S},
	{"IOUSBMouseData",&_VPXStruct_IOUSBMouseData_S},
	{"IOUSBLowLatencyIsocCompletion",&_VPXStruct_IOUSBLowLatencyIsocCompletion_S},
	{"IOUSBIsocCompletion",&_VPXStruct_IOUSBIsocCompletion_S},
	{"IOUSBCompletionWithTimeStamp",&_VPXStruct_IOUSBCompletionWithTimeStamp_S},
	{"IOUSBCompletion",&_VPXStruct_IOUSBCompletion_S},
	{"IOUSBLowLatencyIsocFrame",&_VPXStruct_IOUSBLowLatencyIsocFrame_S},
	{"IOUSBIsocFrame",&_VPXStruct_IOUSBIsocFrame_S},
	{"IUnknownVTbl",&_VPXStruct_IUnknownVTbl_S},
	{"__CFPlugInInstance",&_VPXStruct___CFPlugInInstance_S},
	{"CFUUIDBytes",&_VPXStruct_CFUUIDBytes_S},
	{"__CFUUID",&_VPXStruct___CFUUID_S},
	{"__CFBundle",&_VPXStruct___CFBundle_S},
	{"FSRef",&_VPXStruct_FSRef_S},
	{"__CFURL",&_VPXStruct___CFURL_S},
	{"IOObject",&_VPXStruct_IOObject_S},
	{"IONotificationPort",&_VPXStruct_IONotificationPort_S},
	{"IOAsyncCompletionContent",&_VPXStruct_IOAsyncCompletionContent_S},
	{"IOServiceInterestContent",&_VPXStruct_IOServiceInterestContent_S},
	{"OSNotificationHeader",&_VPXStruct_OSNotificationHeader_S},
	{"IONamedValue",&_VPXStruct_IONamedValue_S},
	{"IOVirtualRange",&_VPXStruct_IOVirtualRange_S},
	{"wide",&_VPXStruct_wide_S},
	{"UnsignedWide",&_VPXStruct_UnsignedWide_S},
	{"CFRunLoopTimerContext",&_VPXStruct_CFRunLoopTimerContext_S},
	{"CFRunLoopObserverContext",&_VPXStruct_CFRunLoopObserverContext_S},
	{"CFRunLoopSourceContext1",&_VPXStruct_CFRunLoopSourceContext1_S},
	{"CFRunLoopSourceContext",&_VPXStruct_CFRunLoopSourceContext_S},
	{"__CFRunLoopTimer",&_VPXStruct___CFRunLoopTimer_S},
	{"__CFRunLoopObserver",&_VPXStruct___CFRunLoopObserver_S},
	{"__CFRunLoopSource",&_VPXStruct___CFRunLoopSource_S},
	{"__CFRunLoop",&_VPXStruct___CFRunLoop_S},
	{"CFStringInlineBuffer",&_VPXStruct_CFStringInlineBuffer_S},
	{"__CFLocale",&_VPXStruct___CFLocale_S},
	{"__CFCharacterSet",&_VPXStruct___CFCharacterSet_S},
	{"__CFData",&_VPXStruct___CFData_S},
	{"CFGregorianUnits",&_VPXStruct_CFGregorianUnits_S},
	{"CFGregorianDate",&_VPXStruct_CFGregorianDate_S},
	{"__CFTimeZone",&_VPXStruct___CFTimeZone_S},
	{"__CFDate",&_VPXStruct___CFDate_S},
	{"__CFArray",&_VPXStruct___CFArray_S},
	{"CFArrayCallBacks",&_VPXStruct_CFArrayCallBacks_S},
	{"__CFDictionary",&_VPXStruct___CFDictionary_S},
	{"CFDictionaryValueCallBacks",&_VPXStruct_CFDictionaryValueCallBacks_S},
	{"CFDictionaryKeyCallBacks",&_VPXStruct_CFDictionaryKeyCallBacks_S},
	{"CFAllocatorContext",&_VPXStruct_CFAllocatorContext_S},
	{"__CFAllocator",&_VPXStruct___CFAllocator_S},
	{"__CFNull",&_VPXStruct___CFNull_S},
	{"CFRange",&_VPXStruct_CFRange_S},
	{"__CFString",&_VPXStruct___CFString_S},
	{"mach_msg_empty_rcv_t",&_VPXStruct_mach_msg_empty_rcv_t_S},
	{"mach_msg_empty_send_t",&_VPXStruct_mach_msg_empty_send_t_S},
	{"mach_msg_audit_trailer_t",&_VPXStruct_mach_msg_audit_trailer_t_S},
	{"audit_token_t",&_VPXStruct_audit_token_t_S},
	{"mach_msg_security_trailer_t",&_VPXStruct_mach_msg_security_trailer_t_S},
	{"security_token_t",&_VPXStruct_security_token_t_S},
	{"mach_msg_seqno_trailer_t",&_VPXStruct_mach_msg_seqno_trailer_t_S},
	{"mach_msg_trailer_t",&_VPXStruct_mach_msg_trailer_t_S},
	{"mach_msg_base_t",&_VPXStruct_mach_msg_base_t_S},
	{"mach_msg_header_t",&_VPXStruct_mach_msg_header_t_S},
	{"mach_msg_body_t",&_VPXStruct_mach_msg_body_t_S},
	{"mach_msg_ool_ports_descriptor_t",&_VPXStruct_mach_msg_ool_ports_descriptor_t_S},
	{"mach_msg_ool_ports_descriptor64_t",&_VPXStruct_mach_msg_ool_ports_descriptor64_t_S},
	{"mach_msg_ool_ports_descriptor32_t",&_VPXStruct_mach_msg_ool_ports_descriptor32_t_S},
	{"mach_msg_ool_descriptor_t",&_VPXStruct_mach_msg_ool_descriptor_t_S},
	{"mach_msg_ool_descriptor64_t",&_VPXStruct_mach_msg_ool_descriptor64_t_S},
	{"mach_msg_ool_descriptor32_t",&_VPXStruct_mach_msg_ool_descriptor32_t_S},
	{"mach_msg_port_descriptor_t",&_VPXStruct_mach_msg_port_descriptor_t_S},
	{"mach_msg_type_descriptor_t",&_VPXStruct_mach_msg_type_descriptor_t_S},
};

Nat4	VPX_MacOSX_IOKit_Structures_Number = 94;

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
