/*
	
	MacOSX_Structures.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	

	VPL_ExtField _VPXStruct_IOFBMessageCallbacks_1 = { "ConnectionChange",offsetof(struct IOFBMessageCallbacks,ConnectionChange),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOFBMessageCallbacks_2 = { "DidPowerOn",offsetof(struct IOFBMessageCallbacks,DidPowerOn),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOFBMessageCallbacks_1};
	VPL_ExtField _VPXStruct_IOFBMessageCallbacks_3 = { "WillPowerOff",offsetof(struct IOFBMessageCallbacks,WillPowerOff),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOFBMessageCallbacks_2};
	VPL_ExtStructure _VPXStruct_IOFBMessageCallbacks_S = {"IOFBMessageCallbacks",&_VPXStruct_IOFBMessageCallbacks_3,sizeof(struct IOFBMessageCallbacks)};

	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_1 = { "__gaInterfaceReserved",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,__gaInterfaceReserved),sizeof(void *[24]),kPointerType,"void",1,0,NULL,NULL};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_2 = { "WaitComplete",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,WaitComplete),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_1};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_3 = { "GetBlitter",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,GetBlitter),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_2};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_4 = { "SetDestination",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,SetDestination),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_3};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_5 = { "SwapSurface",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,SwapSurface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_4};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_6 = { "UnlockSurface",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,UnlockSurface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_5};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_7 = { "LockSurface",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,LockSurface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_6};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_8 = { "FreeSurface",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,FreeSurface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_7};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_9 = { "AllocateSurface",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,AllocateSurface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_8};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_10 = { "GetBeamPosition",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,GetBeamPosition),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_9};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_11 = { "Synchronize",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,Synchronize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_10};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_12 = { "WaitForCompletion",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,WaitForCompletion),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_11};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_13 = { "Flush",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,Flush),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_12};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_14 = { "GetBlitProc",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,GetBlitProc),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_13};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_15 = { "CopyCapabilities",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,CopyCapabilities),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_14};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_16 = { "Reset",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,Reset),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_15};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_17 = { "Stop",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,Stop),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_16};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_18 = { "Start",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,Start),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_17};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_19 = { "Probe",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,Probe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_18};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_20 = { "revision",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,revision),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_19};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_21 = { "version",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,version),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_20};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_22 = { "Release",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_21};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_23 = { "AddRef",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_22};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_24 = { "QueryInterface",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_23};
	VPL_ExtField _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_25 = { "_reserved",offsetof(struct IOGraphicsAcceleratorInterfaceStruct,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_24};
	VPL_ExtStructure _VPXStruct_IOGraphicsAcceleratorInterfaceStruct_S = {"IOGraphicsAcceleratorInterfaceStruct",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_25,sizeof(struct IOGraphicsAcceleratorInterfaceStruct)};

	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_1 = { "more",offsetof(struct IOBlitSurfaceStruct,more),sizeof(unsigned long[14]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_2 = { "interfaceRef",offsetof(struct IOBlitSurfaceStruct,interfaceRef),sizeof(void *),kPointerType,"_IOBlitMemory",1,0,"T*",&_VPXStruct_IOBlitSurfaceStruct_1};
	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_3 = { "accessFlags",offsetof(struct IOBlitSurfaceStruct,accessFlags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitSurfaceStruct_2};
	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_4 = { "palette",offsetof(struct IOBlitSurfaceStruct,palette),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOBlitSurfaceStruct_3};
	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_5 = { "byteOffset",offsetof(struct IOBlitSurfaceStruct,byteOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitSurfaceStruct_4};
	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_6 = { "rowBytes",offsetof(struct IOBlitSurfaceStruct,rowBytes),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitSurfaceStruct_5};
	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_7 = { "size",offsetof(struct IOBlitSurfaceStruct,size),sizeof(struct IOBlitRectangleStruct),kStructureType,"NULL",0,0,"IOBlitRectangleStruct",&_VPXStruct_IOBlitSurfaceStruct_6};
	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_8 = { "pixelFormat",offsetof(struct IOBlitSurfaceStruct,pixelFormat),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitSurfaceStruct_7};
	VPL_ExtField _VPXStruct_IOBlitSurfaceStruct_9 = { "memory",offsetof(struct IOBlitSurfaceStruct,memory),sizeof(128),kStructureType,"NULL",0,0,"128",&_VPXStruct_IOBlitSurfaceStruct_8};
	VPL_ExtStructure _VPXStruct_IOBlitSurfaceStruct_S = {"IOBlitSurfaceStruct",&_VPXStruct_IOBlitSurfaceStruct_9,sizeof(struct IOBlitSurfaceStruct)};

	VPL_ExtStructure _VPXStruct__IOBlitMemory_S = {"_IOBlitMemory",NULL,0};

	VPL_ExtField _VPXStruct_IOBlitCursorStruct_1 = { "rect",offsetof(struct IOBlitCursorStruct,rect),sizeof(struct IOBlitRectangleStruct),kStructureType,"NULL",0,0,"IOBlitRectangleStruct",NULL};
	VPL_ExtField _VPXStruct_IOBlitCursorStruct_2 = { "operation",offsetof(struct IOBlitCursorStruct,operation),sizeof(struct IOBlitOperationStruct),kStructureType,"NULL",0,0,"IOBlitOperationStruct",&_VPXStruct_IOBlitCursorStruct_1};
	VPL_ExtStructure _VPXStruct_IOBlitCursorStruct_S = {"IOBlitCursorStruct",&_VPXStruct_IOBlitCursorStruct_2,sizeof(struct IOBlitCursorStruct)};

	VPL_ExtField _VPXStruct_IOBlitScanlinesStruct_1 = { "x",offsetof(struct IOBlitScanlinesStruct,x),sizeof(long int[2]),kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IOBlitScanlinesStruct_2 = { "height",offsetof(struct IOBlitScanlinesStruct,height),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitScanlinesStruct_1};
	VPL_ExtField _VPXStruct_IOBlitScanlinesStruct_3 = { "y",offsetof(struct IOBlitScanlinesStruct,y),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitScanlinesStruct_2};
	VPL_ExtField _VPXStruct_IOBlitScanlinesStruct_4 = { "count",offsetof(struct IOBlitScanlinesStruct,count),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitScanlinesStruct_3};
	VPL_ExtField _VPXStruct_IOBlitScanlinesStruct_5 = { "operation",offsetof(struct IOBlitScanlinesStruct,operation),sizeof(struct IOBlitOperationStruct),kStructureType,"NULL",0,0,"IOBlitOperationStruct",&_VPXStruct_IOBlitScanlinesStruct_4};
	VPL_ExtStructure _VPXStruct_IOBlitScanlinesStruct_S = {"IOBlitScanlinesStruct",&_VPXStruct_IOBlitScanlinesStruct_5,sizeof(struct IOBlitScanlinesStruct)};

	VPL_ExtField _VPXStruct_IOBlitVerticesStruct_1 = { "vertices",offsetof(struct IOBlitVerticesStruct,vertices),sizeof(struct IOBlitVertexStruct[2]),kPointerType,"IOBlitVertexStruct",0,8,NULL,NULL};
	VPL_ExtField _VPXStruct_IOBlitVerticesStruct_2 = { "count",offsetof(struct IOBlitVerticesStruct,count),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitVerticesStruct_1};
	VPL_ExtField _VPXStruct_IOBlitVerticesStruct_3 = { "operation",offsetof(struct IOBlitVerticesStruct,operation),sizeof(struct IOBlitOperationStruct),kStructureType,"NULL",0,0,"IOBlitOperationStruct",&_VPXStruct_IOBlitVerticesStruct_2};
	VPL_ExtStructure _VPXStruct_IOBlitVerticesStruct_S = {"IOBlitVerticesStruct",&_VPXStruct_IOBlitVerticesStruct_3,sizeof(struct IOBlitVerticesStruct)};

	VPL_ExtField _VPXStruct_IOBlitVertexStruct_1 = { "y",offsetof(struct IOBlitVertexStruct,y),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_IOBlitVertexStruct_2 = { "x",offsetof(struct IOBlitVertexStruct,x),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitVertexStruct_1};
	VPL_ExtStructure _VPXStruct_IOBlitVertexStruct_S = {"IOBlitVertexStruct",&_VPXStruct_IOBlitVertexStruct_2,sizeof(struct IOBlitVertexStruct)};

	VPL_ExtField _VPXStruct_IOBlitCopyRegionStruct_1 = { "region",offsetof(struct IOBlitCopyRegionStruct,region),sizeof(void *),kPointerType,"IOAccelDeviceRegion",1,24,"T*",NULL};
	VPL_ExtField _VPXStruct_IOBlitCopyRegionStruct_2 = { "deltaY",offsetof(struct IOBlitCopyRegionStruct,deltaY),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitCopyRegionStruct_1};
	VPL_ExtField _VPXStruct_IOBlitCopyRegionStruct_3 = { "deltaX",offsetof(struct IOBlitCopyRegionStruct,deltaX),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitCopyRegionStruct_2};
	VPL_ExtField _VPXStruct_IOBlitCopyRegionStruct_4 = { "operation",offsetof(struct IOBlitCopyRegionStruct,operation),sizeof(struct IOBlitOperationStruct),kStructureType,"NULL",0,0,"IOBlitOperationStruct",&_VPXStruct_IOBlitCopyRegionStruct_3};
	VPL_ExtStructure _VPXStruct_IOBlitCopyRegionStruct_S = {"IOBlitCopyRegionStruct",&_VPXStruct_IOBlitCopyRegionStruct_4,sizeof(struct IOBlitCopyRegionStruct)};

	VPL_ExtField _VPXStruct_IOBlitCopyRectanglesStruct_1 = { "rects",offsetof(struct IOBlitCopyRectanglesStruct,rects),sizeof(struct IOBlitCopyRectangleStruct[1]),kPointerType,"IOBlitCopyRectangleStruct",0,24,NULL,NULL};
	VPL_ExtField _VPXStruct_IOBlitCopyRectanglesStruct_2 = { "count",offsetof(struct IOBlitCopyRectanglesStruct,count),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitCopyRectanglesStruct_1};
	VPL_ExtField _VPXStruct_IOBlitCopyRectanglesStruct_3 = { "operation",offsetof(struct IOBlitCopyRectanglesStruct,operation),sizeof(struct IOBlitOperationStruct),kStructureType,"NULL",0,0,"IOBlitOperationStruct",&_VPXStruct_IOBlitCopyRectanglesStruct_2};
	VPL_ExtStructure _VPXStruct_IOBlitCopyRectanglesStruct_S = {"IOBlitCopyRectanglesStruct",&_VPXStruct_IOBlitCopyRectanglesStruct_3,sizeof(struct IOBlitCopyRectanglesStruct)};

	VPL_ExtField _VPXStruct_IOBlitCopyRectangleStruct_1 = { "height",offsetof(struct IOBlitCopyRectangleStruct,height),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_IOBlitCopyRectangleStruct_2 = { "width",offsetof(struct IOBlitCopyRectangleStruct,width),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitCopyRectangleStruct_1};
	VPL_ExtField _VPXStruct_IOBlitCopyRectangleStruct_3 = { "y",offsetof(struct IOBlitCopyRectangleStruct,y),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitCopyRectangleStruct_2};
	VPL_ExtField _VPXStruct_IOBlitCopyRectangleStruct_4 = { "x",offsetof(struct IOBlitCopyRectangleStruct,x),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitCopyRectangleStruct_3};
	VPL_ExtField _VPXStruct_IOBlitCopyRectangleStruct_5 = { "sourceY",offsetof(struct IOBlitCopyRectangleStruct,sourceY),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitCopyRectangleStruct_4};
	VPL_ExtField _VPXStruct_IOBlitCopyRectangleStruct_6 = { "sourceX",offsetof(struct IOBlitCopyRectangleStruct,sourceX),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitCopyRectangleStruct_5};
	VPL_ExtStructure _VPXStruct_IOBlitCopyRectangleStruct_S = {"IOBlitCopyRectangleStruct",&_VPXStruct_IOBlitCopyRectangleStruct_6,sizeof(struct IOBlitCopyRectangleStruct)};

	VPL_ExtField _VPXStruct_IOBlitRectanglesStruct_1 = { "rects",offsetof(struct IOBlitRectanglesStruct,rects),sizeof(struct IOBlitRectangleStruct[1]),kPointerType,"IOBlitRectangleStruct",0,16,NULL,NULL};
	VPL_ExtField _VPXStruct_IOBlitRectanglesStruct_2 = { "count",offsetof(struct IOBlitRectanglesStruct,count),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitRectanglesStruct_1};
	VPL_ExtField _VPXStruct_IOBlitRectanglesStruct_3 = { "operation",offsetof(struct IOBlitRectanglesStruct,operation),sizeof(struct IOBlitOperationStruct),kStructureType,"NULL",0,0,"IOBlitOperationStruct",&_VPXStruct_IOBlitRectanglesStruct_2};
	VPL_ExtStructure _VPXStruct_IOBlitRectanglesStruct_S = {"IOBlitRectanglesStruct",&_VPXStruct_IOBlitRectanglesStruct_3,sizeof(struct IOBlitRectanglesStruct)};

	VPL_ExtField _VPXStruct_IOBlitRectangleStruct_1 = { "height",offsetof(struct IOBlitRectangleStruct,height),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_IOBlitRectangleStruct_2 = { "width",offsetof(struct IOBlitRectangleStruct,width),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitRectangleStruct_1};
	VPL_ExtField _VPXStruct_IOBlitRectangleStruct_3 = { "y",offsetof(struct IOBlitRectangleStruct,y),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitRectangleStruct_2};
	VPL_ExtField _VPXStruct_IOBlitRectangleStruct_4 = { "x",offsetof(struct IOBlitRectangleStruct,x),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitRectangleStruct_3};
	VPL_ExtStructure _VPXStruct_IOBlitRectangleStruct_S = {"IOBlitRectangleStruct",&_VPXStruct_IOBlitRectangleStruct_4,sizeof(struct IOBlitRectangleStruct)};

	VPL_ExtField _VPXStruct_IOBlitOperationStruct_1 = { "specific",offsetof(struct IOBlitOperationStruct,specific),sizeof(unsigned long[16]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IOBlitOperationStruct_2 = { "destKeyColor",offsetof(struct IOBlitOperationStruct,destKeyColor),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitOperationStruct_1};
	VPL_ExtField _VPXStruct_IOBlitOperationStruct_3 = { "sourceKeyColor",offsetof(struct IOBlitOperationStruct,sourceKeyColor),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitOperationStruct_2};
	VPL_ExtField _VPXStruct_IOBlitOperationStruct_4 = { "offsetY",offsetof(struct IOBlitOperationStruct,offsetY),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitOperationStruct_3};
	VPL_ExtField _VPXStruct_IOBlitOperationStruct_5 = { "offsetX",offsetof(struct IOBlitOperationStruct,offsetX),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOBlitOperationStruct_4};
	VPL_ExtField _VPXStruct_IOBlitOperationStruct_6 = { "color1",offsetof(struct IOBlitOperationStruct,color1),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitOperationStruct_5};
	VPL_ExtField _VPXStruct_IOBlitOperationStruct_7 = { "color0",offsetof(struct IOBlitOperationStruct,color0),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOBlitOperationStruct_6};
	VPL_ExtStructure _VPXStruct_IOBlitOperationStruct_S = {"IOBlitOperationStruct",&_VPXStruct_IOBlitOperationStruct_7,sizeof(struct IOBlitOperationStruct)};

	VPL_ExtField _VPXStruct_IOAccelDeviceRegion_1 = { "rect",offsetof( IOAccelDeviceRegion,rect),sizeof(IOAccelBounds[1]),kPointerType,"IOAccelBounds",0,8,NULL,NULL};
	VPL_ExtField _VPXStruct_IOAccelDeviceRegion_2 = { "bounds",offsetof( IOAccelDeviceRegion,bounds),sizeof( IOAccelBounds),kStructureType,"NULL",0,0,"IOAccelBounds",&_VPXStruct_IOAccelDeviceRegion_1};
	VPL_ExtField _VPXStruct_IOAccelDeviceRegion_3 = { "num_rects",offsetof( IOAccelDeviceRegion,num_rects),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOAccelDeviceRegion_2};
	VPL_ExtStructure _VPXStruct_IOAccelDeviceRegion_S = {"IOAccelDeviceRegion",&_VPXStruct_IOAccelDeviceRegion_3,sizeof( IOAccelDeviceRegion)};

	VPL_ExtField _VPXStruct_IOAccelSurfaceScaling_1 = { "reserved",offsetof( IOAccelSurfaceScaling,reserved),sizeof(unsigned long[8]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IOAccelSurfaceScaling_2 = { "source",offsetof( IOAccelSurfaceScaling,source),sizeof( IOAccelSize),kStructureType,"NULL",0,0,"IOAccelSize",&_VPXStruct_IOAccelSurfaceScaling_1};
	VPL_ExtField _VPXStruct_IOAccelSurfaceScaling_3 = { "buffer",offsetof( IOAccelSurfaceScaling,buffer),sizeof( IOAccelBounds),kStructureType,"NULL",0,0,"IOAccelBounds",&_VPXStruct_IOAccelSurfaceScaling_2};
	VPL_ExtStructure _VPXStruct_IOAccelSurfaceScaling_S = {"IOAccelSurfaceScaling",&_VPXStruct_IOAccelSurfaceScaling_3,sizeof( IOAccelSurfaceScaling)};

	VPL_ExtField _VPXStruct_IOAccelSurfaceReadData_1 = { "client_row_bytes",offsetof( IOAccelSurfaceReadData,client_row_bytes),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOAccelSurfaceReadData_2 = { "client_addr",offsetof( IOAccelSurfaceReadData,client_addr),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOAccelSurfaceReadData_1};
	VPL_ExtField _VPXStruct_IOAccelSurfaceReadData_3 = { "h",offsetof( IOAccelSurfaceReadData,h),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOAccelSurfaceReadData_2};
	VPL_ExtField _VPXStruct_IOAccelSurfaceReadData_4 = { "w",offsetof( IOAccelSurfaceReadData,w),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOAccelSurfaceReadData_3};
	VPL_ExtField _VPXStruct_IOAccelSurfaceReadData_5 = { "y",offsetof( IOAccelSurfaceReadData,y),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOAccelSurfaceReadData_4};
	VPL_ExtField _VPXStruct_IOAccelSurfaceReadData_6 = { "x",offsetof( IOAccelSurfaceReadData,x),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IOAccelSurfaceReadData_5};
	VPL_ExtStructure _VPXStruct_IOAccelSurfaceReadData_S = {"IOAccelSurfaceReadData",&_VPXStruct_IOAccelSurfaceReadData_6,sizeof( IOAccelSurfaceReadData)};

	VPL_ExtField _VPXStruct_IOAccelSurfaceInformation_1 = { "typeDependent",offsetof( IOAccelSurfaceInformation,typeDependent),sizeof(unsigned long[4]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IOAccelSurfaceInformation_2 = { "colorTemperature",offsetof( IOAccelSurfaceInformation,colorTemperature),sizeof(long int[4]),kPointerType,"long int",0,4,NULL,&_VPXStruct_IOAccelSurfaceInformation_1};
	VPL_ExtField _VPXStruct_IOAccelSurfaceInformation_3 = { "flags",offsetof( IOAccelSurfaceInformation,flags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOAccelSurfaceInformation_2};
	VPL_ExtField _VPXStruct_IOAccelSurfaceInformation_4 = { "pixelFormat",offsetof( IOAccelSurfaceInformation,pixelFormat),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOAccelSurfaceInformation_3};
	VPL_ExtField _VPXStruct_IOAccelSurfaceInformation_5 = { "height",offsetof( IOAccelSurfaceInformation,height),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOAccelSurfaceInformation_4};
	VPL_ExtField _VPXStruct_IOAccelSurfaceInformation_6 = { "width",offsetof( IOAccelSurfaceInformation,width),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOAccelSurfaceInformation_5};
	VPL_ExtField _VPXStruct_IOAccelSurfaceInformation_7 = { "rowBytes",offsetof( IOAccelSurfaceInformation,rowBytes),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOAccelSurfaceInformation_6};
	VPL_ExtField _VPXStruct_IOAccelSurfaceInformation_8 = { "address",offsetof( IOAccelSurfaceInformation,address),sizeof(unsigned int[4]),kPointerType,"unsigned int",0,4,NULL,&_VPXStruct_IOAccelSurfaceInformation_7};
	VPL_ExtStructure _VPXStruct_IOAccelSurfaceInformation_S = {"IOAccelSurfaceInformation",&_VPXStruct_IOAccelSurfaceInformation_8,sizeof( IOAccelSurfaceInformation)};

	VPL_ExtField _VPXStruct_IOAccelSize_1 = { "h",offsetof( IOAccelSize,h),sizeof(short),kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VPXStruct_IOAccelSize_2 = { "w",offsetof( IOAccelSize,w),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOAccelSize_1};
	VPL_ExtStructure _VPXStruct_IOAccelSize_S = {"IOAccelSize",&_VPXStruct_IOAccelSize_2,sizeof( IOAccelSize)};

	VPL_ExtField _VPXStruct_IOAccelBounds_1 = { "h",offsetof( IOAccelBounds,h),sizeof(short),kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VPXStruct_IOAccelBounds_2 = { "w",offsetof( IOAccelBounds,w),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOAccelBounds_1};
	VPL_ExtField _VPXStruct_IOAccelBounds_3 = { "y",offsetof( IOAccelBounds,y),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOAccelBounds_2};
	VPL_ExtField _VPXStruct_IOAccelBounds_4 = { "x",offsetof( IOAccelBounds,x),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOAccelBounds_3};
	VPL_ExtStructure _VPXStruct_IOAccelBounds_S = {"IOAccelBounds",&_VPXStruct_IOAccelBounds_4,sizeof( IOAccelBounds)};

	VPL_ExtField _VPXStruct_StdFBShmem_t_1 = { "cursor",offsetof(struct StdFBShmem_t,cursor),sizeof(106),kStructureType,"NULL",0,0,"106",NULL};
	VPL_ExtField _VPXStruct_StdFBShmem_t_2 = { "hotSpot",offsetof(struct StdFBShmem_t,hotSpot),sizeof(IOGPoint[4]),kPointerType,"IOGPoint",0,4,NULL,&_VPXStruct_StdFBShmem_t_1};
	VPL_ExtField _VPXStruct_StdFBShmem_t_3 = { "cursorSize",offsetof(struct StdFBShmem_t,cursorSize),sizeof(IOGSize[4]),kPointerType,"IOGSize",0,4,NULL,&_VPXStruct_StdFBShmem_t_2};
	VPL_ExtField _VPXStruct_StdFBShmem_t_4 = { "reservedB",offsetof(struct StdFBShmem_t,reservedB),sizeof(unsigned char[1]),kPointerType,"unsigned char",0,1,NULL,&_VPXStruct_StdFBShmem_t_3};
	VPL_ExtField _VPXStruct_StdFBShmem_t_5 = { "hardwareCursorShields",offsetof(struct StdFBShmem_t,hardwareCursorShields),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_StdFBShmem_t_4};
	VPL_ExtField _VPXStruct_StdFBShmem_t_6 = { "hardwareCursorActive",offsetof(struct StdFBShmem_t,hardwareCursorActive),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_StdFBShmem_t_5};
	VPL_ExtField _VPXStruct_StdFBShmem_t_7 = { "hardwareCursorCapable",offsetof(struct StdFBShmem_t,hardwareCursorCapable),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_StdFBShmem_t_6};
	VPL_ExtField _VPXStruct_StdFBShmem_t_8 = { "hardwareCursorFlags",offsetof(struct StdFBShmem_t,hardwareCursorFlags),sizeof(unsigned char[4]),kPointerType,"unsigned char",0,1,NULL,&_VPXStruct_StdFBShmem_t_7};
	VPL_ExtField _VPXStruct_StdFBShmem_t_9 = { "reservedC",offsetof(struct StdFBShmem_t,reservedC),sizeof(unsigned int[27]),kPointerType,"unsigned int",0,4,NULL,&_VPXStruct_StdFBShmem_t_8};
	VPL_ExtField _VPXStruct_StdFBShmem_t_10 = { "vblCount",offsetof(struct StdFBShmem_t,vblCount),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_StdFBShmem_t_9};
	VPL_ExtField _VPXStruct_StdFBShmem_t_11 = { "vblDelta",offsetof(struct StdFBShmem_t,vblDelta),sizeof(struct UnsignedWide),kStructureType,"NULL",0,0,"UnsignedWide",&_VPXStruct_StdFBShmem_t_10};
	VPL_ExtField _VPXStruct_StdFBShmem_t_12 = { "vblTime",offsetof(struct StdFBShmem_t,vblTime),sizeof(struct UnsignedWide),kStructureType,"NULL",0,0,"UnsignedWide",&_VPXStruct_StdFBShmem_t_11};
	VPL_ExtField _VPXStruct_StdFBShmem_t_13 = { "structSize",offsetof(struct StdFBShmem_t,structSize),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_StdFBShmem_t_12};
	VPL_ExtField _VPXStruct_StdFBShmem_t_14 = { "version",offsetof(struct StdFBShmem_t,version),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_StdFBShmem_t_13};
	VPL_ExtField _VPXStruct_StdFBShmem_t_15 = { "screenBounds",offsetof(struct StdFBShmem_t,screenBounds),sizeof(struct IOGBounds),kStructureType,"NULL",0,0,"IOGBounds",&_VPXStruct_StdFBShmem_t_14};
	VPL_ExtField _VPXStruct_StdFBShmem_t_16 = { "oldCursorRect",offsetof(struct StdFBShmem_t,oldCursorRect),sizeof(struct IOGBounds),kStructureType,"NULL",0,0,"IOGBounds",&_VPXStruct_StdFBShmem_t_15};
	VPL_ExtField _VPXStruct_StdFBShmem_t_17 = { "cursorRect",offsetof(struct StdFBShmem_t,cursorRect),sizeof(struct IOGBounds),kStructureType,"NULL",0,0,"IOGBounds",&_VPXStruct_StdFBShmem_t_16};
	VPL_ExtField _VPXStruct_StdFBShmem_t_18 = { "cursorLoc",offsetof(struct StdFBShmem_t,cursorLoc),sizeof(struct IOGPoint),kStructureType,"NULL",0,0,"IOGPoint",&_VPXStruct_StdFBShmem_t_17};
	VPL_ExtField _VPXStruct_StdFBShmem_t_19 = { "shieldRect",offsetof(struct StdFBShmem_t,shieldRect),sizeof(struct IOGBounds),kStructureType,"NULL",0,0,"IOGBounds",&_VPXStruct_StdFBShmem_t_18};
	VPL_ExtField _VPXStruct_StdFBShmem_t_20 = { "saveRect",offsetof(struct StdFBShmem_t,saveRect),sizeof(struct IOGBounds),kStructureType,"NULL",0,0,"IOGBounds",&_VPXStruct_StdFBShmem_t_19};
	VPL_ExtField _VPXStruct_StdFBShmem_t_21 = { "shielded",offsetof(struct StdFBShmem_t,shielded),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_StdFBShmem_t_20};
	VPL_ExtField _VPXStruct_StdFBShmem_t_22 = { "shieldFlag",offsetof(struct StdFBShmem_t,shieldFlag),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_StdFBShmem_t_21};
	VPL_ExtField _VPXStruct_StdFBShmem_t_23 = { "cursorObscured",offsetof(struct StdFBShmem_t,cursorObscured),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_StdFBShmem_t_22};
	VPL_ExtField _VPXStruct_StdFBShmem_t_24 = { "cursorShow",offsetof(struct StdFBShmem_t,cursorShow),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_StdFBShmem_t_23};
	VPL_ExtField _VPXStruct_StdFBShmem_t_25 = { "frame",offsetof(struct StdFBShmem_t,frame),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_StdFBShmem_t_24};
	VPL_ExtField _VPXStruct_StdFBShmem_t_26 = { "cursorSema",offsetof(struct StdFBShmem_t,cursorSema),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_StdFBShmem_t_25};
	VPL_ExtStructure _VPXStruct_StdFBShmem_t_S = {"StdFBShmem_t",&_VPXStruct_StdFBShmem_t_26,sizeof(struct StdFBShmem_t)};

	VPL_ExtField _VPXStruct_bm38Cursor_1 = { "save",offsetof(struct bm38Cursor,save),sizeof(unsigned int[256]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_bm38Cursor_2 = { "image",offsetof(struct bm38Cursor,image),sizeof(unsigned int[1024]),kPointerType,"unsigned int",1,4,NULL,&_VPXStruct_bm38Cursor_1};
	VPL_ExtStructure _VPXStruct_bm38Cursor_S = {"bm38Cursor",&_VPXStruct_bm38Cursor_2,sizeof(struct bm38Cursor)};

	VPL_ExtField _VPXStruct_bm34Cursor_1 = { "save",offsetof(struct bm34Cursor,save),sizeof(unsigned short[256]),kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _VPXStruct_bm34Cursor_2 = { "image",offsetof(struct bm34Cursor,image),sizeof(unsigned short[1024]),kPointerType,"unsigned short",1,2,NULL,&_VPXStruct_bm34Cursor_1};
	VPL_ExtStructure _VPXStruct_bm34Cursor_S = {"bm34Cursor",&_VPXStruct_bm34Cursor_2,sizeof(struct bm34Cursor)};

	VPL_ExtField _VPXStruct_bm18Cursor_1 = { "save",offsetof(struct bm18Cursor,save),sizeof(unsigned char[256]),kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct_bm18Cursor_2 = { "mask",offsetof(struct bm18Cursor,mask),sizeof(unsigned char[1024]),kPointerType,"unsigned char",1,1,NULL,&_VPXStruct_bm18Cursor_1};
	VPL_ExtField _VPXStruct_bm18Cursor_3 = { "image",offsetof(struct bm18Cursor,image),sizeof(unsigned char[1024]),kPointerType,"unsigned char",1,1,NULL,&_VPXStruct_bm18Cursor_2};
	VPL_ExtStructure _VPXStruct_bm18Cursor_S = {"bm18Cursor",&_VPXStruct_bm18Cursor_3,sizeof(struct bm18Cursor)};

	VPL_ExtField _VPXStruct_bm12Cursor_1 = { "save",offsetof(struct bm12Cursor,save),sizeof(unsigned int[16]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_bm12Cursor_2 = { "mask",offsetof(struct bm12Cursor,mask),sizeof(unsigned int[64]),kPointerType,"unsigned int",1,4,NULL,&_VPXStruct_bm12Cursor_1};
	VPL_ExtField _VPXStruct_bm12Cursor_3 = { "image",offsetof(struct bm12Cursor,image),sizeof(unsigned int[64]),kPointerType,"unsigned int",1,4,NULL,&_VPXStruct_bm12Cursor_2};
	VPL_ExtStructure _VPXStruct_bm12Cursor_S = {"bm12Cursor",&_VPXStruct_bm12Cursor_3,sizeof(struct bm12Cursor)};

	VPL_ExtField _VPXStruct_NXEventSystemDeviceList_1 = { "dev",offsetof( NXEventSystemDeviceList,dev),sizeof(NXEventSystemDevice[16]),kPointerType,"NXEventSystemDevice",0,16,NULL,NULL};
	VPL_ExtStructure _VPXStruct_NXEventSystemDeviceList_S = {"NXEventSystemDeviceList",&_VPXStruct_NXEventSystemDeviceList_1,sizeof( NXEventSystemDeviceList)};

	VPL_ExtField _VPXStruct_NXEventSystemDevice_1 = { "id",offsetof( NXEventSystemDevice,id),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_NXEventSystemDevice_2 = { "dev_type",offsetof( NXEventSystemDevice,dev_type),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_NXEventSystemDevice_1};
	VPL_ExtField _VPXStruct_NXEventSystemDevice_3 = { "interface_addr",offsetof( NXEventSystemDevice,interface_addr),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_NXEventSystemDevice_2};
	VPL_ExtField _VPXStruct_NXEventSystemDevice_4 = { "interface",offsetof( NXEventSystemDevice,interface),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_NXEventSystemDevice_3};
	VPL_ExtStructure _VPXStruct_NXEventSystemDevice_S = {"NXEventSystemDevice",&_VPXStruct_NXEventSystemDevice_4,sizeof( NXEventSystemDevice)};

	VPL_ExtField _VPXStruct_evsioMouseScaling_1 = { "scaleFactors",offsetof(struct evsioMouseScaling,scaleFactors),sizeof(short[20]),kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _VPXStruct_evsioMouseScaling_2 = { "scaleThresholds",offsetof(struct evsioMouseScaling,scaleThresholds),sizeof(short[20]),kPointerType,"short",0,2,NULL,&_VPXStruct_evsioMouseScaling_1};
	VPL_ExtField _VPXStruct_evsioMouseScaling_3 = { "numScaleLevels",offsetof(struct evsioMouseScaling,numScaleLevels),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_evsioMouseScaling_2};
	VPL_ExtStructure _VPXStruct_evsioMouseScaling_S = {"evsioMouseScaling",&_VPXStruct_evsioMouseScaling_3,sizeof(struct evsioMouseScaling)};

	VPL_ExtField _VPXStruct_evsioKeymapping_1 = { "mapping",offsetof(struct evsioKeymapping,mapping),sizeof(void *),kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_evsioKeymapping_2 = { "size",offsetof(struct evsioKeymapping,size),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_evsioKeymapping_1};
	VPL_ExtStructure _VPXStruct_evsioKeymapping_S = {"evsioKeymapping",&_VPXStruct_evsioKeymapping_2,sizeof(struct evsioKeymapping)};

	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_1 = { "specialEncodings",offsetof(struct IOHardwareCursorDescriptor,specialEncodings),sizeof(unsigned long[16]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_2 = { "supportedSpecialEncodings",offsetof(struct IOHardwareCursorDescriptor,supportedSpecialEncodings),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOHardwareCursorDescriptor_1};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_3 = { "flags",offsetof(struct IOHardwareCursorDescriptor,flags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOHardwareCursorDescriptor_2};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_4 = { "colorEncodings",offsetof(struct IOHardwareCursorDescriptor,colorEncodings),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOHardwareCursorDescriptor_3};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_5 = { "numColors",offsetof(struct IOHardwareCursorDescriptor,numColors),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOHardwareCursorDescriptor_4};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_6 = { "maskBitDepth",offsetof(struct IOHardwareCursorDescriptor,maskBitDepth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOHardwareCursorDescriptor_5};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_7 = { "bitDepth",offsetof(struct IOHardwareCursorDescriptor,bitDepth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOHardwareCursorDescriptor_6};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_8 = { "width",offsetof(struct IOHardwareCursorDescriptor,width),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOHardwareCursorDescriptor_7};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_9 = { "height",offsetof(struct IOHardwareCursorDescriptor,height),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOHardwareCursorDescriptor_8};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_10 = { "minorVersion",offsetof(struct IOHardwareCursorDescriptor,minorVersion),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOHardwareCursorDescriptor_9};
	VPL_ExtField _VPXStruct_IOHardwareCursorDescriptor_11 = { "majorVersion",offsetof(struct IOHardwareCursorDescriptor,majorVersion),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOHardwareCursorDescriptor_10};
	VPL_ExtStructure _VPXStruct_IOHardwareCursorDescriptor_S = {"IOHardwareCursorDescriptor",&_VPXStruct_IOHardwareCursorDescriptor_11,sizeof(struct IOHardwareCursorDescriptor)};

	VPL_ExtField _VPXStruct_IOGBounds_1 = { "maxy",offsetof(struct IOGBounds,maxy),sizeof(short),kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VPXStruct_IOGBounds_2 = { "miny",offsetof(struct IOGBounds,miny),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOGBounds_1};
	VPL_ExtField _VPXStruct_IOGBounds_3 = { "maxx",offsetof(struct IOGBounds,maxx),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOGBounds_2};
	VPL_ExtField _VPXStruct_IOGBounds_4 = { "minx",offsetof(struct IOGBounds,minx),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOGBounds_3};
	VPL_ExtStructure _VPXStruct_IOGBounds_S = {"IOGBounds",&_VPXStruct_IOGBounds_4,sizeof(struct IOGBounds)};

	VPL_ExtField _VPXStruct_IOGSize_1 = { "height",offsetof(struct IOGSize,height),sizeof(short),kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VPXStruct_IOGSize_2 = { "width",offsetof(struct IOGSize,width),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOGSize_1};
	VPL_ExtStructure _VPXStruct_IOGSize_S = {"IOGSize",&_VPXStruct_IOGSize_2,sizeof(struct IOGSize)};

	VPL_ExtField _VPXStruct_IOGPoint_1 = { "y",offsetof(struct IOGPoint,y),sizeof(short),kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VPXStruct_IOGPoint_2 = { "x",offsetof(struct IOGPoint,x),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOGPoint_1};
	VPL_ExtStructure _VPXStruct_IOGPoint_S = {"IOGPoint",&_VPXStruct_IOGPoint_2,sizeof(struct IOGPoint)};

	VPL_ExtField _VPXStruct_IODisplayScalerInformation_1 = { "__reservedC",offsetof(struct IODisplayScalerInformation,__reservedC),sizeof(unsigned long[5]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IODisplayScalerInformation_2 = { "maxVerticalPixels",offsetof(struct IODisplayScalerInformation,maxVerticalPixels),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayScalerInformation_1};
	VPL_ExtField _VPXStruct_IODisplayScalerInformation_3 = { "maxHorizontalPixels",offsetof(struct IODisplayScalerInformation,maxHorizontalPixels),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayScalerInformation_2};
	VPL_ExtField _VPXStruct_IODisplayScalerInformation_4 = { "scalerFeatures",offsetof(struct IODisplayScalerInformation,scalerFeatures),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayScalerInformation_3};
	VPL_ExtField _VPXStruct_IODisplayScalerInformation_5 = { "__reservedB",offsetof(struct IODisplayScalerInformation,__reservedB),sizeof(unsigned long[2]),kPointerType,"unsigned long",0,4,NULL,&_VPXStruct_IODisplayScalerInformation_4};
	VPL_ExtField _VPXStruct_IODisplayScalerInformation_6 = { "version",offsetof(struct IODisplayScalerInformation,version),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayScalerInformation_5};
	VPL_ExtField _VPXStruct_IODisplayScalerInformation_7 = { "__reservedA",offsetof(struct IODisplayScalerInformation,__reservedA),sizeof(unsigned long[1]),kPointerType,"unsigned long",0,4,NULL,&_VPXStruct_IODisplayScalerInformation_6};
	VPL_ExtStructure _VPXStruct_IODisplayScalerInformation_S = {"IODisplayScalerInformation",&_VPXStruct_IODisplayScalerInformation_7,sizeof(struct IODisplayScalerInformation)};

	VPL_ExtField _VPXStruct_IODisplayTimingRange_1 = { "__reservedF",offsetof(struct IODisplayTimingRange,__reservedF),sizeof(unsigned long[3]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_2 = { "maxLink1PixelClock",offsetof(struct IODisplayTimingRange,maxLink1PixelClock),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_1};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_3 = { "minLink1PixelClock",offsetof(struct IODisplayTimingRange,minLink1PixelClock),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_2};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_4 = { "maxLink0PixelClock",offsetof(struct IODisplayTimingRange,maxLink0PixelClock),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_3};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_5 = { "minLink0PixelClock",offsetof(struct IODisplayTimingRange,minLink0PixelClock),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_4};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_6 = { "maxNumLinks",offsetof(struct IODisplayTimingRange,maxNumLinks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_5};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_7 = { "maxVerticalBorderBottom",offsetof(struct IODisplayTimingRange,maxVerticalBorderBottom),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_6};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_8 = { "minVerticalBorderBottom",offsetof(struct IODisplayTimingRange,minVerticalBorderBottom),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_7};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_9 = { "maxVerticalBorderTop",offsetof(struct IODisplayTimingRange,maxVerticalBorderTop),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_8};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_10 = { "minVerticalBorderTop",offsetof(struct IODisplayTimingRange,minVerticalBorderTop),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_9};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_11 = { "maxHorizontalBorderRight",offsetof(struct IODisplayTimingRange,maxHorizontalBorderRight),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_10};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_12 = { "minHorizontalBorderRight",offsetof(struct IODisplayTimingRange,minHorizontalBorderRight),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_11};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_13 = { "maxHorizontalBorderLeft",offsetof(struct IODisplayTimingRange,maxHorizontalBorderLeft),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_12};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_14 = { "minHorizontalBorderLeft",offsetof(struct IODisplayTimingRange,minHorizontalBorderLeft),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_13};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_15 = { "maxVerticalPulseWidthClocks",offsetof(struct IODisplayTimingRange,maxVerticalPulseWidthClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_14};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_16 = { "minVerticalPulseWidthClocks",offsetof(struct IODisplayTimingRange,minVerticalPulseWidthClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_15};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_17 = { "maxVerticalSyncOffsetClocks",offsetof(struct IODisplayTimingRange,maxVerticalSyncOffsetClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_16};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_18 = { "minVerticalSyncOffsetClocks",offsetof(struct IODisplayTimingRange,minVerticalSyncOffsetClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_17};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_19 = { "maxVerticalBlankingClocks",offsetof(struct IODisplayTimingRange,maxVerticalBlankingClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_18};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_20 = { "minVerticalBlankingClocks",offsetof(struct IODisplayTimingRange,minVerticalBlankingClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_19};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_21 = { "maxVerticalActiveClocks",offsetof(struct IODisplayTimingRange,maxVerticalActiveClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_20};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_22 = { "minVerticalActiveClocks",offsetof(struct IODisplayTimingRange,minVerticalActiveClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_21};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_23 = { "maxHorizontalPulseWidthClocks",offsetof(struct IODisplayTimingRange,maxHorizontalPulseWidthClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_22};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_24 = { "minHorizontalPulseWidthClocks",offsetof(struct IODisplayTimingRange,minHorizontalPulseWidthClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_23};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_25 = { "maxHorizontalSyncOffsetClocks",offsetof(struct IODisplayTimingRange,maxHorizontalSyncOffsetClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_24};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_26 = { "minHorizontalSyncOffsetClocks",offsetof(struct IODisplayTimingRange,minHorizontalSyncOffsetClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_25};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_27 = { "maxHorizontalBlankingClocks",offsetof(struct IODisplayTimingRange,maxHorizontalBlankingClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_26};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_28 = { "minHorizontalBlankingClocks",offsetof(struct IODisplayTimingRange,minHorizontalBlankingClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_27};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_29 = { "maxHorizontalActiveClocks",offsetof(struct IODisplayTimingRange,maxHorizontalActiveClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_28};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_30 = { "minHorizontalActiveClocks",offsetof(struct IODisplayTimingRange,minHorizontalActiveClocks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_29};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_31 = { "__reservedE",offsetof(struct IODisplayTimingRange,__reservedE),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IODisplayTimingRange_30};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_32 = { "charSizeVerticalTotal",offsetof(struct IODisplayTimingRange,charSizeVerticalTotal),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_31};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_33 = { "charSizeHorizontalTotal",offsetof(struct IODisplayTimingRange,charSizeHorizontalTotal),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_32};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_34 = { "charSizeVerticalBorderBottom",offsetof(struct IODisplayTimingRange,charSizeVerticalBorderBottom),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_33};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_35 = { "charSizeVerticalBorderTop",offsetof(struct IODisplayTimingRange,charSizeVerticalBorderTop),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_34};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_36 = { "charSizeHorizontalBorderRight",offsetof(struct IODisplayTimingRange,charSizeHorizontalBorderRight),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_35};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_37 = { "charSizeHorizontalBorderLeft",offsetof(struct IODisplayTimingRange,charSizeHorizontalBorderLeft),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_36};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_38 = { "charSizeVerticalSyncPulse",offsetof(struct IODisplayTimingRange,charSizeVerticalSyncPulse),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_37};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_39 = { "charSizeVerticalSyncOffset",offsetof(struct IODisplayTimingRange,charSizeVerticalSyncOffset),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_38};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_40 = { "charSizeVerticalBlanking",offsetof(struct IODisplayTimingRange,charSizeVerticalBlanking),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_39};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_41 = { "charSizeVerticalActive",offsetof(struct IODisplayTimingRange,charSizeVerticalActive),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_40};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_42 = { "charSizeHorizontalSyncPulse",offsetof(struct IODisplayTimingRange,charSizeHorizontalSyncPulse),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_41};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_43 = { "charSizeHorizontalSyncOffset",offsetof(struct IODisplayTimingRange,charSizeHorizontalSyncOffset),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_42};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_44 = { "charSizeHorizontalBlanking",offsetof(struct IODisplayTimingRange,charSizeHorizontalBlanking),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_43};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_45 = { "charSizeHorizontalActive",offsetof(struct IODisplayTimingRange,charSizeHorizontalActive),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IODisplayTimingRange_44};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_46 = { "__reservedD",offsetof(struct IODisplayTimingRange,__reservedD),sizeof(unsigned long[2]),kPointerType,"unsigned long",0,4,NULL,&_VPXStruct_IODisplayTimingRange_45};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_47 = { "maxVerticalTotal",offsetof(struct IODisplayTimingRange,maxVerticalTotal),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_46};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_48 = { "maxHorizontalTotal",offsetof(struct IODisplayTimingRange,maxHorizontalTotal),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_47};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_49 = { "maxLineRate",offsetof(struct IODisplayTimingRange,maxLineRate),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_48};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_50 = { "minLineRate",offsetof(struct IODisplayTimingRange,minLineRate),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_49};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_51 = { "maxFrameRate",offsetof(struct IODisplayTimingRange,maxFrameRate),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_50};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_52 = { "minFrameRate",offsetof(struct IODisplayTimingRange,minFrameRate),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_51};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_53 = { "supportedSignalConfigs",offsetof(struct IODisplayTimingRange,supportedSignalConfigs),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_52};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_54 = { "supportedSignalLevels",offsetof(struct IODisplayTimingRange,supportedSignalLevels),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_53};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_55 = { "supportedSyncFlags",offsetof(struct IODisplayTimingRange,supportedSyncFlags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_54};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_56 = { "maxPixelError",offsetof(struct IODisplayTimingRange,maxPixelError),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_55};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_57 = { "maxPixelClock",offsetof(struct IODisplayTimingRange,maxPixelClock),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IODisplayTimingRange_56};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_58 = { "minPixelClock",offsetof(struct IODisplayTimingRange,minPixelClock),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IODisplayTimingRange_57};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_59 = { "__reservedB",offsetof(struct IODisplayTimingRange,__reservedB),sizeof(unsigned long[5]),kPointerType,"unsigned long",0,4,NULL,&_VPXStruct_IODisplayTimingRange_58};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_60 = { "version",offsetof(struct IODisplayTimingRange,version),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayTimingRange_59};
	VPL_ExtField _VPXStruct_IODisplayTimingRange_61 = { "__reservedA",offsetof(struct IODisplayTimingRange,__reservedA),sizeof(unsigned long[2]),kPointerType,"unsigned long",0,4,NULL,&_VPXStruct_IODisplayTimingRange_60};
	VPL_ExtStructure _VPXStruct_IODisplayTimingRange_S = {"IODisplayTimingRange",&_VPXStruct_IODisplayTimingRange_61,sizeof(struct IODisplayTimingRange)};

	VPL_ExtField _VPXStruct_IOFBDisplayModeDescription_1 = { "timingInfo",offsetof(struct IOFBDisplayModeDescription,timingInfo),sizeof(struct IOTimingInformation),kStructureType,"NULL",0,0,"IOTimingInformation",NULL};
	VPL_ExtField _VPXStruct_IOFBDisplayModeDescription_2 = { "info",offsetof(struct IOFBDisplayModeDescription,info),sizeof(struct IODisplayModeInformation),kStructureType,"NULL",0,0,"IODisplayModeInformation",&_VPXStruct_IOFBDisplayModeDescription_1};
	VPL_ExtStructure _VPXStruct_IOFBDisplayModeDescription_S = {"IOFBDisplayModeDescription",&_VPXStruct_IOFBDisplayModeDescription_2,sizeof(struct IOFBDisplayModeDescription)};

	VPL_ExtField _VPXStruct_IOTimingInformation_1 = { "detailedInfo",offsetof(struct IOTimingInformation,detailedInfo),sizeof(76),kStructureType,"NULL",0,0,"76",NULL};
	VPL_ExtField _VPXStruct_IOTimingInformation_2 = { "flags",offsetof(struct IOTimingInformation,flags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOTimingInformation_1};
	VPL_ExtField _VPXStruct_IOTimingInformation_3 = { "appleTimingID",offsetof(struct IOTimingInformation,appleTimingID),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOTimingInformation_2};
	VPL_ExtStructure _VPXStruct_IOTimingInformation_S = {"IOTimingInformation",&_VPXStruct_IOTimingInformation_3,sizeof(struct IOTimingInformation)};

	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_1 = { "__reservedB",offsetof(struct IODetailedTimingInformationV2,__reservedB),sizeof(unsigned long[7]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_2 = { "numLinks",offsetof(struct IODetailedTimingInformationV2,numLinks),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_1};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_3 = { "verticalSyncLevel",offsetof(struct IODetailedTimingInformationV2,verticalSyncLevel),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_2};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_4 = { "verticalSyncConfig",offsetof(struct IODetailedTimingInformationV2,verticalSyncConfig),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_3};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_5 = { "horizontalSyncLevel",offsetof(struct IODetailedTimingInformationV2,horizontalSyncLevel),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_4};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_6 = { "horizontalSyncConfig",offsetof(struct IODetailedTimingInformationV2,horizontalSyncConfig),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_5};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_7 = { "verticalBorderBottom",offsetof(struct IODetailedTimingInformationV2,verticalBorderBottom),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_6};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_8 = { "verticalBorderTop",offsetof(struct IODetailedTimingInformationV2,verticalBorderTop),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_7};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_9 = { "horizontalBorderRight",offsetof(struct IODetailedTimingInformationV2,horizontalBorderRight),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_8};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_10 = { "horizontalBorderLeft",offsetof(struct IODetailedTimingInformationV2,horizontalBorderLeft),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_9};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_11 = { "verticalSyncPulseWidth",offsetof(struct IODetailedTimingInformationV2,verticalSyncPulseWidth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_10};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_12 = { "verticalSyncOffset",offsetof(struct IODetailedTimingInformationV2,verticalSyncOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_11};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_13 = { "verticalBlanking",offsetof(struct IODetailedTimingInformationV2,verticalBlanking),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_12};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_14 = { "verticalActive",offsetof(struct IODetailedTimingInformationV2,verticalActive),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_13};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_15 = { "horizontalSyncPulseWidth",offsetof(struct IODetailedTimingInformationV2,horizontalSyncPulseWidth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_14};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_16 = { "horizontalSyncOffset",offsetof(struct IODetailedTimingInformationV2,horizontalSyncOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_15};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_17 = { "horizontalBlanking",offsetof(struct IODetailedTimingInformationV2,horizontalBlanking),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_16};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_18 = { "horizontalActive",offsetof(struct IODetailedTimingInformationV2,horizontalActive),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_17};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_19 = { "maxPixelClock",offsetof(struct IODetailedTimingInformationV2,maxPixelClock),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IODetailedTimingInformationV2_18};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_20 = { "minPixelClock",offsetof(struct IODetailedTimingInformationV2,minPixelClock),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IODetailedTimingInformationV2_19};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_21 = { "pixelClock",offsetof(struct IODetailedTimingInformationV2,pixelClock),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IODetailedTimingInformationV2_20};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_22 = { "signalLevels",offsetof(struct IODetailedTimingInformationV2,signalLevels),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_21};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_23 = { "signalConfig",offsetof(struct IODetailedTimingInformationV2,signalConfig),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_22};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_24 = { "verticalScaled",offsetof(struct IODetailedTimingInformationV2,verticalScaled),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_23};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_25 = { "horizontalScaled",offsetof(struct IODetailedTimingInformationV2,horizontalScaled),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_24};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_26 = { "scalerFlags",offsetof(struct IODetailedTimingInformationV2,scalerFlags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_25};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_27 = { "verticalScaledInset",offsetof(struct IODetailedTimingInformationV2,verticalScaledInset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_26};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_28 = { "horizontalScaledInset",offsetof(struct IODetailedTimingInformationV2,horizontalScaledInset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV2_27};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV2_29 = { "__reservedA",offsetof(struct IODetailedTimingInformationV2,__reservedA),sizeof(unsigned long[3]),kPointerType,"unsigned long",0,4,NULL,&_VPXStruct_IODetailedTimingInformationV2_28};
	VPL_ExtStructure _VPXStruct_IODetailedTimingInformationV2_S = {"IODetailedTimingInformationV2",&_VPXStruct_IODetailedTimingInformationV2_29,sizeof(struct IODetailedTimingInformationV2)};

	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_1 = { "verticalSyncWidth",offsetof(struct IODetailedTimingInformationV1,verticalSyncWidth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_2 = { "verticalSyncOffset",offsetof(struct IODetailedTimingInformationV1,verticalSyncOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_1};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_3 = { "verticalBorder",offsetof(struct IODetailedTimingInformationV1,verticalBorder),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_2};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_4 = { "verticalBlanking",offsetof(struct IODetailedTimingInformationV1,verticalBlanking),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_3};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_5 = { "verticalActive",offsetof(struct IODetailedTimingInformationV1,verticalActive),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_4};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_6 = { "horizontalSyncWidth",offsetof(struct IODetailedTimingInformationV1,horizontalSyncWidth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_5};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_7 = { "horizontalSyncOffset",offsetof(struct IODetailedTimingInformationV1,horizontalSyncOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_6};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_8 = { "horizontalBorder",offsetof(struct IODetailedTimingInformationV1,horizontalBorder),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_7};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_9 = { "horizontalBlanking",offsetof(struct IODetailedTimingInformationV1,horizontalBlanking),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_8};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_10 = { "horizontalActive",offsetof(struct IODetailedTimingInformationV1,horizontalActive),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_9};
	VPL_ExtField _VPXStruct_IODetailedTimingInformationV1_11 = { "pixelClock",offsetof(struct IODetailedTimingInformationV1,pixelClock),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODetailedTimingInformationV1_10};
	VPL_ExtStructure _VPXStruct_IODetailedTimingInformationV1_S = {"IODetailedTimingInformationV1",&_VPXStruct_IODetailedTimingInformationV1_11,sizeof(struct IODetailedTimingInformationV1)};

	VPL_ExtField _VPXStruct_IOColorEntry_1 = { "blue",offsetof(struct IOColorEntry,blue),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOColorEntry_2 = { "green",offsetof(struct IOColorEntry,green),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOColorEntry_1};
	VPL_ExtField _VPXStruct_IOColorEntry_3 = { "red",offsetof(struct IOColorEntry,red),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOColorEntry_2};
	VPL_ExtField _VPXStruct_IOColorEntry_4 = { "index",offsetof(struct IOColorEntry,index),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOColorEntry_3};
	VPL_ExtStructure _VPXStruct_IOColorEntry_S = {"IOColorEntry",&_VPXStruct_IOColorEntry_4,sizeof(struct IOColorEntry)};

	VPL_ExtField _VPXStruct_IOFramebufferInformation_1 = { "reserved",offsetof(struct IOFramebufferInformation,reserved),sizeof(unsigned long[4]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IOFramebufferInformation_2 = { "flags",offsetof(struct IOFramebufferInformation,flags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOFramebufferInformation_1};
	VPL_ExtField _VPXStruct_IOFramebufferInformation_3 = { "pixelType",offsetof(struct IOFramebufferInformation,pixelType),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOFramebufferInformation_2};
	VPL_ExtField _VPXStruct_IOFramebufferInformation_4 = { "bitsPerPixel",offsetof(struct IOFramebufferInformation,bitsPerPixel),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOFramebufferInformation_3};
	VPL_ExtField _VPXStruct_IOFramebufferInformation_5 = { "bytesPerPlane",offsetof(struct IOFramebufferInformation,bytesPerPlane),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOFramebufferInformation_4};
	VPL_ExtField _VPXStruct_IOFramebufferInformation_6 = { "bytesPerRow",offsetof(struct IOFramebufferInformation,bytesPerRow),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOFramebufferInformation_5};
	VPL_ExtField _VPXStruct_IOFramebufferInformation_7 = { "activeHeight",offsetof(struct IOFramebufferInformation,activeHeight),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOFramebufferInformation_6};
	VPL_ExtField _VPXStruct_IOFramebufferInformation_8 = { "activeWidth",offsetof(struct IOFramebufferInformation,activeWidth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOFramebufferInformation_7};
	VPL_ExtField _VPXStruct_IOFramebufferInformation_9 = { "baseAddress",offsetof(struct IOFramebufferInformation,baseAddress),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOFramebufferInformation_8};
	VPL_ExtStructure _VPXStruct_IOFramebufferInformation_S = {"IOFramebufferInformation",&_VPXStruct_IOFramebufferInformation_9,sizeof(struct IOFramebufferInformation)};

	VPL_ExtField _VPXStruct_IODisplayModeInformation_1 = { "reserved",offsetof(struct IODisplayModeInformation,reserved),sizeof(unsigned long[4]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IODisplayModeInformation_2 = { "flags",offsetof(struct IODisplayModeInformation,flags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayModeInformation_1};
	VPL_ExtField _VPXStruct_IODisplayModeInformation_3 = { "maxDepthIndex",offsetof(struct IODisplayModeInformation,maxDepthIndex),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_IODisplayModeInformation_2};
	VPL_ExtField _VPXStruct_IODisplayModeInformation_4 = { "refreshRate",offsetof(struct IODisplayModeInformation,refreshRate),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayModeInformation_3};
	VPL_ExtField _VPXStruct_IODisplayModeInformation_5 = { "nominalHeight",offsetof(struct IODisplayModeInformation,nominalHeight),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayModeInformation_4};
	VPL_ExtField _VPXStruct_IODisplayModeInformation_6 = { "nominalWidth",offsetof(struct IODisplayModeInformation,nominalWidth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IODisplayModeInformation_5};
	VPL_ExtStructure _VPXStruct_IODisplayModeInformation_S = {"IODisplayModeInformation",&_VPXStruct_IODisplayModeInformation_6,sizeof(struct IODisplayModeInformation)};

	VPL_ExtField _VPXStruct_IOPixelInformation_1 = { "reserved",offsetof(struct IOPixelInformation,reserved),sizeof(unsigned long[2]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_IOPixelInformation_2 = { "activeHeight",offsetof(struct IOPixelInformation,activeHeight),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_1};
	VPL_ExtField _VPXStruct_IOPixelInformation_3 = { "activeWidth",offsetof(struct IOPixelInformation,activeWidth),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_2};
	VPL_ExtField _VPXStruct_IOPixelInformation_4 = { "flags",offsetof(struct IOPixelInformation,flags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_3};
	VPL_ExtField _VPXStruct_IOPixelInformation_5 = { "pixelFormat",offsetof(struct IOPixelInformation,pixelFormat),sizeof(char[64]),kPointerType,"char",0,1,NULL,&_VPXStruct_IOPixelInformation_4};
	VPL_ExtField _VPXStruct_IOPixelInformation_6 = { "componentMasks",offsetof(struct IOPixelInformation,componentMasks),sizeof(unsigned long[16]),kPointerType,"unsigned long",0,4,NULL,&_VPXStruct_IOPixelInformation_5};
	VPL_ExtField _VPXStruct_IOPixelInformation_7 = { "bitsPerComponent",offsetof(struct IOPixelInformation,bitsPerComponent),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_6};
	VPL_ExtField _VPXStruct_IOPixelInformation_8 = { "componentCount",offsetof(struct IOPixelInformation,componentCount),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_7};
	VPL_ExtField _VPXStruct_IOPixelInformation_9 = { "pixelType",offsetof(struct IOPixelInformation,pixelType),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_8};
	VPL_ExtField _VPXStruct_IOPixelInformation_10 = { "bitsPerPixel",offsetof(struct IOPixelInformation,bitsPerPixel),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_9};
	VPL_ExtField _VPXStruct_IOPixelInformation_11 = { "bytesPerPlane",offsetof(struct IOPixelInformation,bytesPerPlane),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_10};
	VPL_ExtField _VPXStruct_IOPixelInformation_12 = { "bytesPerRow",offsetof(struct IOPixelInformation,bytesPerRow),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOPixelInformation_11};
	VPL_ExtStructure _VPXStruct_IOPixelInformation_S = {"IOPixelInformation",&_VPXStruct_IOPixelInformation_12,sizeof(struct IOPixelInformation)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_1 = { "FindNextAltInterface",offsetof(struct IOUSBInterfaceStruct245,FindNextAltInterface),sizeof(void *),kPointerType,"IOUSBDescriptorHeader",2,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_2 = { "FindNextAssociatedDescriptor",offsetof(struct IOUSBInterfaceStruct245,FindNextAssociatedDescriptor),sizeof(void *),kPointerType,"IOUSBDescriptorHeader",2,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_3 = { "GetIOUSBLibVersion",offsetof(struct IOUSBInterfaceStruct245,GetIOUSBLibVersion),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_4 = { "GetFrameListTime",offsetof(struct IOUSBInterfaceStruct245,GetFrameListTime),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_5 = { "GetBusMicroFrameNumber",offsetof(struct IOUSBInterfaceStruct245,GetBusMicroFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_6 = { "LowLatencyDestroyBuffer",offsetof(struct IOUSBInterfaceStruct245,LowLatencyDestroyBuffer),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_7 = { "LowLatencyCreateBuffer",offsetof(struct IOUSBInterfaceStruct245,LowLatencyCreateBuffer),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_8 = { "LowLatencyWriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct245,LowLatencyWriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_9 = { "LowLatencyReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct245,LowLatencyReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_10 = { "GetEndpointProperties",offsetof(struct IOUSBInterfaceStruct245,GetEndpointProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_11 = { "GetBandwidthAvailable",offsetof(struct IOUSBInterfaceStruct245,GetBandwidthAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_10};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_12 = { "SetPipePolicy",offsetof(struct IOUSBInterfaceStruct245,SetPipePolicy),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_11};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_13 = { "ClearPipeStallBothEnds",offsetof(struct IOUSBInterfaceStruct245,ClearPipeStallBothEnds),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_12};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_14 = { "USBInterfaceOpenSeize",offsetof(struct IOUSBInterfaceStruct245,USBInterfaceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_13};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_15 = { "USBInterfaceGetStringIndex",offsetof(struct IOUSBInterfaceStruct245,USBInterfaceGetStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_14};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_16 = { "WritePipeAsyncTO",offsetof(struct IOUSBInterfaceStruct245,WritePipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_15};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_17 = { "ReadPipeAsyncTO",offsetof(struct IOUSBInterfaceStruct245,ReadPipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_16};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_18 = { "WritePipeTO",offsetof(struct IOUSBInterfaceStruct245,WritePipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_17};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_19 = { "ReadPipeTO",offsetof(struct IOUSBInterfaceStruct245,ReadPipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_18};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_20 = { "ControlRequestAsyncTO",offsetof(struct IOUSBInterfaceStruct245,ControlRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_19};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_21 = { "ControlRequestTO",offsetof(struct IOUSBInterfaceStruct245,ControlRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_20};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_22 = { "WriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct245,WriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_21};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_23 = { "ReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct245,ReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_22};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_24 = { "WritePipeAsync",offsetof(struct IOUSBInterfaceStruct245,WritePipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_23};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_25 = { "ReadPipeAsync",offsetof(struct IOUSBInterfaceStruct245,ReadPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_24};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_26 = { "WritePipe",offsetof(struct IOUSBInterfaceStruct245,WritePipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_25};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_27 = { "ReadPipe",offsetof(struct IOUSBInterfaceStruct245,ReadPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_26};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_28 = { "ClearPipeStall",offsetof(struct IOUSBInterfaceStruct245,ClearPipeStall),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_27};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_29 = { "ResetPipe",offsetof(struct IOUSBInterfaceStruct245,ResetPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_28};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_30 = { "AbortPipe",offsetof(struct IOUSBInterfaceStruct245,AbortPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_29};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_31 = { "GetPipeStatus",offsetof(struct IOUSBInterfaceStruct245,GetPipeStatus),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_30};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_32 = { "GetPipeProperties",offsetof(struct IOUSBInterfaceStruct245,GetPipeProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_31};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_33 = { "ControlRequestAsync",offsetof(struct IOUSBInterfaceStruct245,ControlRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_32};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_34 = { "ControlRequest",offsetof(struct IOUSBInterfaceStruct245,ControlRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_33};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_35 = { "GetBusFrameNumber",offsetof(struct IOUSBInterfaceStruct245,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_34};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_36 = { "SetAlternateInterface",offsetof(struct IOUSBInterfaceStruct245,SetAlternateInterface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_35};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_37 = { "GetDevice",offsetof(struct IOUSBInterfaceStruct245,GetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_36};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_38 = { "GetLocationID",offsetof(struct IOUSBInterfaceStruct245,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_37};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_39 = { "GetNumEndpoints",offsetof(struct IOUSBInterfaceStruct245,GetNumEndpoints),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_38};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_40 = { "GetAlternateSetting",offsetof(struct IOUSBInterfaceStruct245,GetAlternateSetting),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_39};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_41 = { "GetInterfaceNumber",offsetof(struct IOUSBInterfaceStruct245,GetInterfaceNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_40};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_42 = { "GetConfigurationValue",offsetof(struct IOUSBInterfaceStruct245,GetConfigurationValue),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_41};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_43 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBInterfaceStruct245,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_42};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_44 = { "GetDeviceProduct",offsetof(struct IOUSBInterfaceStruct245,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_43};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_45 = { "GetDeviceVendor",offsetof(struct IOUSBInterfaceStruct245,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_44};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_46 = { "GetInterfaceProtocol",offsetof(struct IOUSBInterfaceStruct245,GetInterfaceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_45};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_47 = { "GetInterfaceSubClass",offsetof(struct IOUSBInterfaceStruct245,GetInterfaceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_46};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_48 = { "GetInterfaceClass",offsetof(struct IOUSBInterfaceStruct245,GetInterfaceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_47};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_49 = { "USBInterfaceClose",offsetof(struct IOUSBInterfaceStruct245,USBInterfaceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_48};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_50 = { "USBInterfaceOpen",offsetof(struct IOUSBInterfaceStruct245,USBInterfaceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_49};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_51 = { "GetInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct245,GetInterfaceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_50};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_52 = { "CreateInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct245,CreateInterfaceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_51};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_53 = { "GetInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct245,GetInterfaceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBInterfaceStruct245_52};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_54 = { "CreateInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct245,CreateInterfaceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_53};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_55 = { "Release",offsetof(struct IOUSBInterfaceStruct245,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_54};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_56 = { "AddRef",offsetof(struct IOUSBInterfaceStruct245,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_55};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_57 = { "QueryInterface",offsetof(struct IOUSBInterfaceStruct245,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct245_56};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct245_58 = { "_reserved",offsetof(struct IOUSBInterfaceStruct245,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBInterfaceStruct245_57};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceStruct245_S = {"IOUSBInterfaceStruct245",&_VPXStruct_IOUSBInterfaceStruct245_58,sizeof(struct IOUSBInterfaceStruct245)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_1 = { "FindNextAltInterface",offsetof(struct IOUSBInterfaceStruct220,FindNextAltInterface),sizeof(void *),kPointerType,"IOUSBDescriptorHeader",2,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_2 = { "FindNextAssociatedDescriptor",offsetof(struct IOUSBInterfaceStruct220,FindNextAssociatedDescriptor),sizeof(void *),kPointerType,"IOUSBDescriptorHeader",2,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_3 = { "GetIOUSBLibVersion",offsetof(struct IOUSBInterfaceStruct220,GetIOUSBLibVersion),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_4 = { "GetFrameListTime",offsetof(struct IOUSBInterfaceStruct220,GetFrameListTime),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_5 = { "GetBusMicroFrameNumber",offsetof(struct IOUSBInterfaceStruct220,GetBusMicroFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_6 = { "LowLatencyDestroyBuffer",offsetof(struct IOUSBInterfaceStruct220,LowLatencyDestroyBuffer),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_7 = { "LowLatencyCreateBuffer",offsetof(struct IOUSBInterfaceStruct220,LowLatencyCreateBuffer),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_8 = { "LowLatencyWriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct220,LowLatencyWriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_9 = { "LowLatencyReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct220,LowLatencyReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_10 = { "GetEndpointProperties",offsetof(struct IOUSBInterfaceStruct220,GetEndpointProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_11 = { "GetBandwidthAvailable",offsetof(struct IOUSBInterfaceStruct220,GetBandwidthAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_10};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_12 = { "SetPipePolicy",offsetof(struct IOUSBInterfaceStruct220,SetPipePolicy),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_11};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_13 = { "ClearPipeStallBothEnds",offsetof(struct IOUSBInterfaceStruct220,ClearPipeStallBothEnds),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_12};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_14 = { "USBInterfaceOpenSeize",offsetof(struct IOUSBInterfaceStruct220,USBInterfaceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_13};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_15 = { "USBInterfaceGetStringIndex",offsetof(struct IOUSBInterfaceStruct220,USBInterfaceGetStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_14};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_16 = { "WritePipeAsyncTO",offsetof(struct IOUSBInterfaceStruct220,WritePipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_15};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_17 = { "ReadPipeAsyncTO",offsetof(struct IOUSBInterfaceStruct220,ReadPipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_16};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_18 = { "WritePipeTO",offsetof(struct IOUSBInterfaceStruct220,WritePipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_17};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_19 = { "ReadPipeTO",offsetof(struct IOUSBInterfaceStruct220,ReadPipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_18};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_20 = { "ControlRequestAsyncTO",offsetof(struct IOUSBInterfaceStruct220,ControlRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_19};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_21 = { "ControlRequestTO",offsetof(struct IOUSBInterfaceStruct220,ControlRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_20};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_22 = { "WriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct220,WriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_21};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_23 = { "ReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct220,ReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_22};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_24 = { "WritePipeAsync",offsetof(struct IOUSBInterfaceStruct220,WritePipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_23};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_25 = { "ReadPipeAsync",offsetof(struct IOUSBInterfaceStruct220,ReadPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_24};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_26 = { "WritePipe",offsetof(struct IOUSBInterfaceStruct220,WritePipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_25};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_27 = { "ReadPipe",offsetof(struct IOUSBInterfaceStruct220,ReadPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_26};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_28 = { "ClearPipeStall",offsetof(struct IOUSBInterfaceStruct220,ClearPipeStall),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_27};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_29 = { "ResetPipe",offsetof(struct IOUSBInterfaceStruct220,ResetPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_28};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_30 = { "AbortPipe",offsetof(struct IOUSBInterfaceStruct220,AbortPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_29};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_31 = { "GetPipeStatus",offsetof(struct IOUSBInterfaceStruct220,GetPipeStatus),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_30};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_32 = { "GetPipeProperties",offsetof(struct IOUSBInterfaceStruct220,GetPipeProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_31};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_33 = { "ControlRequestAsync",offsetof(struct IOUSBInterfaceStruct220,ControlRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_32};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_34 = { "ControlRequest",offsetof(struct IOUSBInterfaceStruct220,ControlRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_33};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_35 = { "GetBusFrameNumber",offsetof(struct IOUSBInterfaceStruct220,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_34};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_36 = { "SetAlternateInterface",offsetof(struct IOUSBInterfaceStruct220,SetAlternateInterface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_35};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_37 = { "GetDevice",offsetof(struct IOUSBInterfaceStruct220,GetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_36};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_38 = { "GetLocationID",offsetof(struct IOUSBInterfaceStruct220,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_37};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_39 = { "GetNumEndpoints",offsetof(struct IOUSBInterfaceStruct220,GetNumEndpoints),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_38};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_40 = { "GetAlternateSetting",offsetof(struct IOUSBInterfaceStruct220,GetAlternateSetting),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_39};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_41 = { "GetInterfaceNumber",offsetof(struct IOUSBInterfaceStruct220,GetInterfaceNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_40};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_42 = { "GetConfigurationValue",offsetof(struct IOUSBInterfaceStruct220,GetConfigurationValue),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_41};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_43 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBInterfaceStruct220,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_42};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_44 = { "GetDeviceProduct",offsetof(struct IOUSBInterfaceStruct220,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_43};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_45 = { "GetDeviceVendor",offsetof(struct IOUSBInterfaceStruct220,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_44};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_46 = { "GetInterfaceProtocol",offsetof(struct IOUSBInterfaceStruct220,GetInterfaceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_45};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_47 = { "GetInterfaceSubClass",offsetof(struct IOUSBInterfaceStruct220,GetInterfaceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_46};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_48 = { "GetInterfaceClass",offsetof(struct IOUSBInterfaceStruct220,GetInterfaceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_47};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_49 = { "USBInterfaceClose",offsetof(struct IOUSBInterfaceStruct220,USBInterfaceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_48};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_50 = { "USBInterfaceOpen",offsetof(struct IOUSBInterfaceStruct220,USBInterfaceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_49};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_51 = { "GetInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct220,GetInterfaceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_50};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_52 = { "CreateInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct220,CreateInterfaceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_51};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_53 = { "GetInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct220,GetInterfaceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBInterfaceStruct220_52};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_54 = { "CreateInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct220,CreateInterfaceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_53};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_55 = { "Release",offsetof(struct IOUSBInterfaceStruct220,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_54};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_56 = { "AddRef",offsetof(struct IOUSBInterfaceStruct220,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_55};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_57 = { "QueryInterface",offsetof(struct IOUSBInterfaceStruct220,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct220_56};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct220_58 = { "_reserved",offsetof(struct IOUSBInterfaceStruct220,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBInterfaceStruct220_57};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceStruct220_S = {"IOUSBInterfaceStruct220",&_VPXStruct_IOUSBInterfaceStruct220_58,sizeof(struct IOUSBInterfaceStruct220)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_1 = { "GetIOUSBLibVersion",offsetof(struct IOUSBInterfaceStruct197,GetIOUSBLibVersion),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_2 = { "GetFrameListTime",offsetof(struct IOUSBInterfaceStruct197,GetFrameListTime),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_3 = { "GetBusMicroFrameNumber",offsetof(struct IOUSBInterfaceStruct197,GetBusMicroFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_4 = { "LowLatencyDestroyBuffer",offsetof(struct IOUSBInterfaceStruct197,LowLatencyDestroyBuffer),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_5 = { "LowLatencyCreateBuffer",offsetof(struct IOUSBInterfaceStruct197,LowLatencyCreateBuffer),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_6 = { "LowLatencyWriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct197,LowLatencyWriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_7 = { "LowLatencyReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct197,LowLatencyReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_8 = { "GetEndpointProperties",offsetof(struct IOUSBInterfaceStruct197,GetEndpointProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_9 = { "GetBandwidthAvailable",offsetof(struct IOUSBInterfaceStruct197,GetBandwidthAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_10 = { "SetPipePolicy",offsetof(struct IOUSBInterfaceStruct197,SetPipePolicy),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_11 = { "ClearPipeStallBothEnds",offsetof(struct IOUSBInterfaceStruct197,ClearPipeStallBothEnds),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_10};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_12 = { "USBInterfaceOpenSeize",offsetof(struct IOUSBInterfaceStruct197,USBInterfaceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_11};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_13 = { "USBInterfaceGetStringIndex",offsetof(struct IOUSBInterfaceStruct197,USBInterfaceGetStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_12};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_14 = { "WritePipeAsyncTO",offsetof(struct IOUSBInterfaceStruct197,WritePipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_13};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_15 = { "ReadPipeAsyncTO",offsetof(struct IOUSBInterfaceStruct197,ReadPipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_14};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_16 = { "WritePipeTO",offsetof(struct IOUSBInterfaceStruct197,WritePipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_15};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_17 = { "ReadPipeTO",offsetof(struct IOUSBInterfaceStruct197,ReadPipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_16};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_18 = { "ControlRequestAsyncTO",offsetof(struct IOUSBInterfaceStruct197,ControlRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_17};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_19 = { "ControlRequestTO",offsetof(struct IOUSBInterfaceStruct197,ControlRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_18};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_20 = { "WriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct197,WriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_19};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_21 = { "ReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct197,ReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_20};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_22 = { "WritePipeAsync",offsetof(struct IOUSBInterfaceStruct197,WritePipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_21};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_23 = { "ReadPipeAsync",offsetof(struct IOUSBInterfaceStruct197,ReadPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_22};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_24 = { "WritePipe",offsetof(struct IOUSBInterfaceStruct197,WritePipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_23};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_25 = { "ReadPipe",offsetof(struct IOUSBInterfaceStruct197,ReadPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_24};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_26 = { "ClearPipeStall",offsetof(struct IOUSBInterfaceStruct197,ClearPipeStall),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_25};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_27 = { "ResetPipe",offsetof(struct IOUSBInterfaceStruct197,ResetPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_26};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_28 = { "AbortPipe",offsetof(struct IOUSBInterfaceStruct197,AbortPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_27};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_29 = { "GetPipeStatus",offsetof(struct IOUSBInterfaceStruct197,GetPipeStatus),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_28};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_30 = { "GetPipeProperties",offsetof(struct IOUSBInterfaceStruct197,GetPipeProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_29};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_31 = { "ControlRequestAsync",offsetof(struct IOUSBInterfaceStruct197,ControlRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_30};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_32 = { "ControlRequest",offsetof(struct IOUSBInterfaceStruct197,ControlRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_31};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_33 = { "GetBusFrameNumber",offsetof(struct IOUSBInterfaceStruct197,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_32};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_34 = { "SetAlternateInterface",offsetof(struct IOUSBInterfaceStruct197,SetAlternateInterface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_33};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_35 = { "GetDevice",offsetof(struct IOUSBInterfaceStruct197,GetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_34};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_36 = { "GetLocationID",offsetof(struct IOUSBInterfaceStruct197,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_35};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_37 = { "GetNumEndpoints",offsetof(struct IOUSBInterfaceStruct197,GetNumEndpoints),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_36};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_38 = { "GetAlternateSetting",offsetof(struct IOUSBInterfaceStruct197,GetAlternateSetting),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_37};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_39 = { "GetInterfaceNumber",offsetof(struct IOUSBInterfaceStruct197,GetInterfaceNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_38};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_40 = { "GetConfigurationValue",offsetof(struct IOUSBInterfaceStruct197,GetConfigurationValue),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_39};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_41 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBInterfaceStruct197,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_40};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_42 = { "GetDeviceProduct",offsetof(struct IOUSBInterfaceStruct197,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_41};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_43 = { "GetDeviceVendor",offsetof(struct IOUSBInterfaceStruct197,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_42};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_44 = { "GetInterfaceProtocol",offsetof(struct IOUSBInterfaceStruct197,GetInterfaceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_43};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_45 = { "GetInterfaceSubClass",offsetof(struct IOUSBInterfaceStruct197,GetInterfaceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_44};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_46 = { "GetInterfaceClass",offsetof(struct IOUSBInterfaceStruct197,GetInterfaceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_45};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_47 = { "USBInterfaceClose",offsetof(struct IOUSBInterfaceStruct197,USBInterfaceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_46};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_48 = { "USBInterfaceOpen",offsetof(struct IOUSBInterfaceStruct197,USBInterfaceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_47};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_49 = { "GetInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct197,GetInterfaceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_48};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_50 = { "CreateInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct197,CreateInterfaceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_49};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_51 = { "GetInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct197,GetInterfaceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBInterfaceStruct197_50};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_52 = { "CreateInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct197,CreateInterfaceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_51};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_53 = { "Release",offsetof(struct IOUSBInterfaceStruct197,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_52};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_54 = { "AddRef",offsetof(struct IOUSBInterfaceStruct197,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_53};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_55 = { "QueryInterface",offsetof(struct IOUSBInterfaceStruct197,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct197_54};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct197_56 = { "_reserved",offsetof(struct IOUSBInterfaceStruct197,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBInterfaceStruct197_55};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceStruct197_S = {"IOUSBInterfaceStruct197",&_VPXStruct_IOUSBInterfaceStruct197_56,sizeof(struct IOUSBInterfaceStruct197)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_1 = { "LowLatencyDestroyBuffer",offsetof(struct IOUSBInterfaceStruct192,LowLatencyDestroyBuffer),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_2 = { "LowLatencyCreateBuffer",offsetof(struct IOUSBInterfaceStruct192,LowLatencyCreateBuffer),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_3 = { "LowLatencyWriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct192,LowLatencyWriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_4 = { "LowLatencyReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct192,LowLatencyReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_5 = { "GetEndpointProperties",offsetof(struct IOUSBInterfaceStruct192,GetEndpointProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_6 = { "GetBandwidthAvailable",offsetof(struct IOUSBInterfaceStruct192,GetBandwidthAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_7 = { "SetPipePolicy",offsetof(struct IOUSBInterfaceStruct192,SetPipePolicy),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_8 = { "ClearPipeStallBothEnds",offsetof(struct IOUSBInterfaceStruct192,ClearPipeStallBothEnds),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_9 = { "USBInterfaceOpenSeize",offsetof(struct IOUSBInterfaceStruct192,USBInterfaceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_10 = { "USBInterfaceGetStringIndex",offsetof(struct IOUSBInterfaceStruct192,USBInterfaceGetStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_11 = { "WritePipeAsyncTO",offsetof(struct IOUSBInterfaceStruct192,WritePipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_10};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_12 = { "ReadPipeAsyncTO",offsetof(struct IOUSBInterfaceStruct192,ReadPipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_11};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_13 = { "WritePipeTO",offsetof(struct IOUSBInterfaceStruct192,WritePipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_12};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_14 = { "ReadPipeTO",offsetof(struct IOUSBInterfaceStruct192,ReadPipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_13};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_15 = { "ControlRequestAsyncTO",offsetof(struct IOUSBInterfaceStruct192,ControlRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_14};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_16 = { "ControlRequestTO",offsetof(struct IOUSBInterfaceStruct192,ControlRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_15};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_17 = { "WriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct192,WriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_16};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_18 = { "ReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct192,ReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_17};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_19 = { "WritePipeAsync",offsetof(struct IOUSBInterfaceStruct192,WritePipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_18};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_20 = { "ReadPipeAsync",offsetof(struct IOUSBInterfaceStruct192,ReadPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_19};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_21 = { "WritePipe",offsetof(struct IOUSBInterfaceStruct192,WritePipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_20};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_22 = { "ReadPipe",offsetof(struct IOUSBInterfaceStruct192,ReadPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_21};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_23 = { "ClearPipeStall",offsetof(struct IOUSBInterfaceStruct192,ClearPipeStall),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_22};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_24 = { "ResetPipe",offsetof(struct IOUSBInterfaceStruct192,ResetPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_23};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_25 = { "AbortPipe",offsetof(struct IOUSBInterfaceStruct192,AbortPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_24};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_26 = { "GetPipeStatus",offsetof(struct IOUSBInterfaceStruct192,GetPipeStatus),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_25};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_27 = { "GetPipeProperties",offsetof(struct IOUSBInterfaceStruct192,GetPipeProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_26};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_28 = { "ControlRequestAsync",offsetof(struct IOUSBInterfaceStruct192,ControlRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_27};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_29 = { "ControlRequest",offsetof(struct IOUSBInterfaceStruct192,ControlRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_28};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_30 = { "GetBusFrameNumber",offsetof(struct IOUSBInterfaceStruct192,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_29};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_31 = { "SetAlternateInterface",offsetof(struct IOUSBInterfaceStruct192,SetAlternateInterface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_30};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_32 = { "GetDevice",offsetof(struct IOUSBInterfaceStruct192,GetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_31};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_33 = { "GetLocationID",offsetof(struct IOUSBInterfaceStruct192,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_32};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_34 = { "GetNumEndpoints",offsetof(struct IOUSBInterfaceStruct192,GetNumEndpoints),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_33};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_35 = { "GetAlternateSetting",offsetof(struct IOUSBInterfaceStruct192,GetAlternateSetting),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_34};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_36 = { "GetInterfaceNumber",offsetof(struct IOUSBInterfaceStruct192,GetInterfaceNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_35};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_37 = { "GetConfigurationValue",offsetof(struct IOUSBInterfaceStruct192,GetConfigurationValue),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_36};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_38 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBInterfaceStruct192,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_37};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_39 = { "GetDeviceProduct",offsetof(struct IOUSBInterfaceStruct192,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_38};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_40 = { "GetDeviceVendor",offsetof(struct IOUSBInterfaceStruct192,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_39};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_41 = { "GetInterfaceProtocol",offsetof(struct IOUSBInterfaceStruct192,GetInterfaceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_40};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_42 = { "GetInterfaceSubClass",offsetof(struct IOUSBInterfaceStruct192,GetInterfaceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_41};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_43 = { "GetInterfaceClass",offsetof(struct IOUSBInterfaceStruct192,GetInterfaceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_42};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_44 = { "USBInterfaceClose",offsetof(struct IOUSBInterfaceStruct192,USBInterfaceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_43};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_45 = { "USBInterfaceOpen",offsetof(struct IOUSBInterfaceStruct192,USBInterfaceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_44};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_46 = { "GetInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct192,GetInterfaceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_45};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_47 = { "CreateInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct192,CreateInterfaceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_46};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_48 = { "GetInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct192,GetInterfaceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBInterfaceStruct192_47};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_49 = { "CreateInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct192,CreateInterfaceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_48};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_50 = { "Release",offsetof(struct IOUSBInterfaceStruct192,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_49};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_51 = { "AddRef",offsetof(struct IOUSBInterfaceStruct192,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_50};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_52 = { "QueryInterface",offsetof(struct IOUSBInterfaceStruct192,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct192_51};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct192_53 = { "_reserved",offsetof(struct IOUSBInterfaceStruct192,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBInterfaceStruct192_52};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceStruct192_S = {"IOUSBInterfaceStruct192",&_VPXStruct_IOUSBInterfaceStruct192_53,sizeof(struct IOUSBInterfaceStruct192)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_1 = { "GetEndpointProperties",offsetof(struct IOUSBInterfaceStruct190,GetEndpointProperties),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_2 = { "GetBandwidthAvailable",offsetof(struct IOUSBInterfaceStruct190,GetBandwidthAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_3 = { "SetPipePolicy",offsetof(struct IOUSBInterfaceStruct190,SetPipePolicy),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_4 = { "ClearPipeStallBothEnds",offsetof(struct IOUSBInterfaceStruct190,ClearPipeStallBothEnds),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_5 = { "USBInterfaceOpenSeize",offsetof(struct IOUSBInterfaceStruct190,USBInterfaceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_6 = { "USBInterfaceGetStringIndex",offsetof(struct IOUSBInterfaceStruct190,USBInterfaceGetStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_7 = { "WritePipeAsyncTO",offsetof(struct IOUSBInterfaceStruct190,WritePipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_8 = { "ReadPipeAsyncTO",offsetof(struct IOUSBInterfaceStruct190,ReadPipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_9 = { "WritePipeTO",offsetof(struct IOUSBInterfaceStruct190,WritePipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_10 = { "ReadPipeTO",offsetof(struct IOUSBInterfaceStruct190,ReadPipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_11 = { "ControlRequestAsyncTO",offsetof(struct IOUSBInterfaceStruct190,ControlRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_10};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_12 = { "ControlRequestTO",offsetof(struct IOUSBInterfaceStruct190,ControlRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_11};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_13 = { "WriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct190,WriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_12};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_14 = { "ReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct190,ReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_13};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_15 = { "WritePipeAsync",offsetof(struct IOUSBInterfaceStruct190,WritePipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_14};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_16 = { "ReadPipeAsync",offsetof(struct IOUSBInterfaceStruct190,ReadPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_15};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_17 = { "WritePipe",offsetof(struct IOUSBInterfaceStruct190,WritePipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_16};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_18 = { "ReadPipe",offsetof(struct IOUSBInterfaceStruct190,ReadPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_17};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_19 = { "ClearPipeStall",offsetof(struct IOUSBInterfaceStruct190,ClearPipeStall),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_18};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_20 = { "ResetPipe",offsetof(struct IOUSBInterfaceStruct190,ResetPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_19};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_21 = { "AbortPipe",offsetof(struct IOUSBInterfaceStruct190,AbortPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_20};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_22 = { "GetPipeStatus",offsetof(struct IOUSBInterfaceStruct190,GetPipeStatus),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_21};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_23 = { "GetPipeProperties",offsetof(struct IOUSBInterfaceStruct190,GetPipeProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_22};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_24 = { "ControlRequestAsync",offsetof(struct IOUSBInterfaceStruct190,ControlRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_23};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_25 = { "ControlRequest",offsetof(struct IOUSBInterfaceStruct190,ControlRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_24};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_26 = { "GetBusFrameNumber",offsetof(struct IOUSBInterfaceStruct190,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_25};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_27 = { "SetAlternateInterface",offsetof(struct IOUSBInterfaceStruct190,SetAlternateInterface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_26};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_28 = { "GetDevice",offsetof(struct IOUSBInterfaceStruct190,GetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_27};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_29 = { "GetLocationID",offsetof(struct IOUSBInterfaceStruct190,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_28};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_30 = { "GetNumEndpoints",offsetof(struct IOUSBInterfaceStruct190,GetNumEndpoints),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_29};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_31 = { "GetAlternateSetting",offsetof(struct IOUSBInterfaceStruct190,GetAlternateSetting),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_30};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_32 = { "GetInterfaceNumber",offsetof(struct IOUSBInterfaceStruct190,GetInterfaceNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_31};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_33 = { "GetConfigurationValue",offsetof(struct IOUSBInterfaceStruct190,GetConfigurationValue),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_32};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_34 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBInterfaceStruct190,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_33};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_35 = { "GetDeviceProduct",offsetof(struct IOUSBInterfaceStruct190,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_34};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_36 = { "GetDeviceVendor",offsetof(struct IOUSBInterfaceStruct190,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_35};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_37 = { "GetInterfaceProtocol",offsetof(struct IOUSBInterfaceStruct190,GetInterfaceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_36};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_38 = { "GetInterfaceSubClass",offsetof(struct IOUSBInterfaceStruct190,GetInterfaceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_37};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_39 = { "GetInterfaceClass",offsetof(struct IOUSBInterfaceStruct190,GetInterfaceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_38};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_40 = { "USBInterfaceClose",offsetof(struct IOUSBInterfaceStruct190,USBInterfaceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_39};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_41 = { "USBInterfaceOpen",offsetof(struct IOUSBInterfaceStruct190,USBInterfaceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_40};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_42 = { "GetInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct190,GetInterfaceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_41};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_43 = { "CreateInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct190,CreateInterfaceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_42};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_44 = { "GetInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct190,GetInterfaceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBInterfaceStruct190_43};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_45 = { "CreateInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct190,CreateInterfaceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_44};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_46 = { "Release",offsetof(struct IOUSBInterfaceStruct190,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_45};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_47 = { "AddRef",offsetof(struct IOUSBInterfaceStruct190,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_46};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_48 = { "QueryInterface",offsetof(struct IOUSBInterfaceStruct190,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct190_47};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct190_49 = { "_reserved",offsetof(struct IOUSBInterfaceStruct190,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBInterfaceStruct190_48};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceStruct190_S = {"IOUSBInterfaceStruct190",&_VPXStruct_IOUSBInterfaceStruct190_49,sizeof(struct IOUSBInterfaceStruct190)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_1 = { "USBInterfaceOpenSeize",offsetof(struct IOUSBInterfaceStruct183,USBInterfaceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_2 = { "USBInterfaceGetStringIndex",offsetof(struct IOUSBInterfaceStruct183,USBInterfaceGetStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_3 = { "WritePipeAsyncTO",offsetof(struct IOUSBInterfaceStruct183,WritePipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_4 = { "ReadPipeAsyncTO",offsetof(struct IOUSBInterfaceStruct183,ReadPipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_5 = { "WritePipeTO",offsetof(struct IOUSBInterfaceStruct183,WritePipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_6 = { "ReadPipeTO",offsetof(struct IOUSBInterfaceStruct183,ReadPipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_7 = { "ControlRequestAsyncTO",offsetof(struct IOUSBInterfaceStruct183,ControlRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_8 = { "ControlRequestTO",offsetof(struct IOUSBInterfaceStruct183,ControlRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_9 = { "WriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct183,WriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_10 = { "ReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct183,ReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_11 = { "WritePipeAsync",offsetof(struct IOUSBInterfaceStruct183,WritePipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_10};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_12 = { "ReadPipeAsync",offsetof(struct IOUSBInterfaceStruct183,ReadPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_11};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_13 = { "WritePipe",offsetof(struct IOUSBInterfaceStruct183,WritePipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_12};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_14 = { "ReadPipe",offsetof(struct IOUSBInterfaceStruct183,ReadPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_13};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_15 = { "ClearPipeStall",offsetof(struct IOUSBInterfaceStruct183,ClearPipeStall),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_14};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_16 = { "ResetPipe",offsetof(struct IOUSBInterfaceStruct183,ResetPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_15};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_17 = { "AbortPipe",offsetof(struct IOUSBInterfaceStruct183,AbortPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_16};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_18 = { "GetPipeStatus",offsetof(struct IOUSBInterfaceStruct183,GetPipeStatus),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_17};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_19 = { "GetPipeProperties",offsetof(struct IOUSBInterfaceStruct183,GetPipeProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_18};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_20 = { "ControlRequestAsync",offsetof(struct IOUSBInterfaceStruct183,ControlRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_19};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_21 = { "ControlRequest",offsetof(struct IOUSBInterfaceStruct183,ControlRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_20};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_22 = { "GetBusFrameNumber",offsetof(struct IOUSBInterfaceStruct183,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_21};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_23 = { "SetAlternateInterface",offsetof(struct IOUSBInterfaceStruct183,SetAlternateInterface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_22};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_24 = { "GetDevice",offsetof(struct IOUSBInterfaceStruct183,GetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_23};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_25 = { "GetLocationID",offsetof(struct IOUSBInterfaceStruct183,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_24};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_26 = { "GetNumEndpoints",offsetof(struct IOUSBInterfaceStruct183,GetNumEndpoints),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_25};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_27 = { "GetAlternateSetting",offsetof(struct IOUSBInterfaceStruct183,GetAlternateSetting),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_26};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_28 = { "GetInterfaceNumber",offsetof(struct IOUSBInterfaceStruct183,GetInterfaceNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_27};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_29 = { "GetConfigurationValue",offsetof(struct IOUSBInterfaceStruct183,GetConfigurationValue),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_28};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_30 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBInterfaceStruct183,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_29};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_31 = { "GetDeviceProduct",offsetof(struct IOUSBInterfaceStruct183,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_30};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_32 = { "GetDeviceVendor",offsetof(struct IOUSBInterfaceStruct183,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_31};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_33 = { "GetInterfaceProtocol",offsetof(struct IOUSBInterfaceStruct183,GetInterfaceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_32};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_34 = { "GetInterfaceSubClass",offsetof(struct IOUSBInterfaceStruct183,GetInterfaceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_33};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_35 = { "GetInterfaceClass",offsetof(struct IOUSBInterfaceStruct183,GetInterfaceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_34};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_36 = { "USBInterfaceClose",offsetof(struct IOUSBInterfaceStruct183,USBInterfaceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_35};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_37 = { "USBInterfaceOpen",offsetof(struct IOUSBInterfaceStruct183,USBInterfaceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_36};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_38 = { "GetInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct183,GetInterfaceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_37};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_39 = { "CreateInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct183,CreateInterfaceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_38};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_40 = { "GetInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct183,GetInterfaceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBInterfaceStruct183_39};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_41 = { "CreateInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct183,CreateInterfaceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_40};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_42 = { "Release",offsetof(struct IOUSBInterfaceStruct183,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_41};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_43 = { "AddRef",offsetof(struct IOUSBInterfaceStruct183,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_42};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_44 = { "QueryInterface",offsetof(struct IOUSBInterfaceStruct183,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct183_43};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct183_45 = { "_reserved",offsetof(struct IOUSBInterfaceStruct183,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBInterfaceStruct183_44};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceStruct183_S = {"IOUSBInterfaceStruct183",&_VPXStruct_IOUSBInterfaceStruct183_45,sizeof(struct IOUSBInterfaceStruct183)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_1 = { "USBInterfaceGetStringIndex",offsetof(struct IOUSBInterfaceStruct182,USBInterfaceGetStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_2 = { "WritePipeAsyncTO",offsetof(struct IOUSBInterfaceStruct182,WritePipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_3 = { "ReadPipeAsyncTO",offsetof(struct IOUSBInterfaceStruct182,ReadPipeAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_4 = { "WritePipeTO",offsetof(struct IOUSBInterfaceStruct182,WritePipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_5 = { "ReadPipeTO",offsetof(struct IOUSBInterfaceStruct182,ReadPipeTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_6 = { "ControlRequestAsyncTO",offsetof(struct IOUSBInterfaceStruct182,ControlRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_7 = { "ControlRequestTO",offsetof(struct IOUSBInterfaceStruct182,ControlRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_8 = { "WriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct182,WriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_9 = { "ReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct182,ReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_10 = { "WritePipeAsync",offsetof(struct IOUSBInterfaceStruct182,WritePipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_11 = { "ReadPipeAsync",offsetof(struct IOUSBInterfaceStruct182,ReadPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_10};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_12 = { "WritePipe",offsetof(struct IOUSBInterfaceStruct182,WritePipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_11};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_13 = { "ReadPipe",offsetof(struct IOUSBInterfaceStruct182,ReadPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_12};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_14 = { "ClearPipeStall",offsetof(struct IOUSBInterfaceStruct182,ClearPipeStall),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_13};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_15 = { "ResetPipe",offsetof(struct IOUSBInterfaceStruct182,ResetPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_14};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_16 = { "AbortPipe",offsetof(struct IOUSBInterfaceStruct182,AbortPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_15};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_17 = { "GetPipeStatus",offsetof(struct IOUSBInterfaceStruct182,GetPipeStatus),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_16};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_18 = { "GetPipeProperties",offsetof(struct IOUSBInterfaceStruct182,GetPipeProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_17};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_19 = { "ControlRequestAsync",offsetof(struct IOUSBInterfaceStruct182,ControlRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_18};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_20 = { "ControlRequest",offsetof(struct IOUSBInterfaceStruct182,ControlRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_19};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_21 = { "GetBusFrameNumber",offsetof(struct IOUSBInterfaceStruct182,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_20};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_22 = { "SetAlternateInterface",offsetof(struct IOUSBInterfaceStruct182,SetAlternateInterface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_21};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_23 = { "GetDevice",offsetof(struct IOUSBInterfaceStruct182,GetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_22};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_24 = { "GetLocationID",offsetof(struct IOUSBInterfaceStruct182,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_23};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_25 = { "GetNumEndpoints",offsetof(struct IOUSBInterfaceStruct182,GetNumEndpoints),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_24};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_26 = { "GetAlternateSetting",offsetof(struct IOUSBInterfaceStruct182,GetAlternateSetting),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_25};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_27 = { "GetInterfaceNumber",offsetof(struct IOUSBInterfaceStruct182,GetInterfaceNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_26};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_28 = { "GetConfigurationValue",offsetof(struct IOUSBInterfaceStruct182,GetConfigurationValue),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_27};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_29 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBInterfaceStruct182,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_28};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_30 = { "GetDeviceProduct",offsetof(struct IOUSBInterfaceStruct182,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_29};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_31 = { "GetDeviceVendor",offsetof(struct IOUSBInterfaceStruct182,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_30};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_32 = { "GetInterfaceProtocol",offsetof(struct IOUSBInterfaceStruct182,GetInterfaceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_31};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_33 = { "GetInterfaceSubClass",offsetof(struct IOUSBInterfaceStruct182,GetInterfaceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_32};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_34 = { "GetInterfaceClass",offsetof(struct IOUSBInterfaceStruct182,GetInterfaceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_33};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_35 = { "USBInterfaceClose",offsetof(struct IOUSBInterfaceStruct182,USBInterfaceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_34};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_36 = { "USBInterfaceOpen",offsetof(struct IOUSBInterfaceStruct182,USBInterfaceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_35};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_37 = { "GetInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct182,GetInterfaceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_36};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_38 = { "CreateInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct182,CreateInterfaceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_37};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_39 = { "GetInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct182,GetInterfaceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBInterfaceStruct182_38};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_40 = { "CreateInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct182,CreateInterfaceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_39};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_41 = { "Release",offsetof(struct IOUSBInterfaceStruct182,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_40};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_42 = { "AddRef",offsetof(struct IOUSBInterfaceStruct182,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_41};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_43 = { "QueryInterface",offsetof(struct IOUSBInterfaceStruct182,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct182_42};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct182_44 = { "_reserved",offsetof(struct IOUSBInterfaceStruct182,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBInterfaceStruct182_43};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceStruct182_S = {"IOUSBInterfaceStruct182",&_VPXStruct_IOUSBInterfaceStruct182_44,sizeof(struct IOUSBInterfaceStruct182)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_1 = { "WriteIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct,WriteIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_2 = { "ReadIsochPipeAsync",offsetof(struct IOUSBInterfaceStruct,ReadIsochPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_3 = { "WritePipeAsync",offsetof(struct IOUSBInterfaceStruct,WritePipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_4 = { "ReadPipeAsync",offsetof(struct IOUSBInterfaceStruct,ReadPipeAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_5 = { "WritePipe",offsetof(struct IOUSBInterfaceStruct,WritePipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_6 = { "ReadPipe",offsetof(struct IOUSBInterfaceStruct,ReadPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_7 = { "ClearPipeStall",offsetof(struct IOUSBInterfaceStruct,ClearPipeStall),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_8 = { "ResetPipe",offsetof(struct IOUSBInterfaceStruct,ResetPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_9 = { "AbortPipe",offsetof(struct IOUSBInterfaceStruct,AbortPipe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_8};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_10 = { "GetPipeStatus",offsetof(struct IOUSBInterfaceStruct,GetPipeStatus),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_9};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_11 = { "GetPipeProperties",offsetof(struct IOUSBInterfaceStruct,GetPipeProperties),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_10};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_12 = { "ControlRequestAsync",offsetof(struct IOUSBInterfaceStruct,ControlRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_11};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_13 = { "ControlRequest",offsetof(struct IOUSBInterfaceStruct,ControlRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_12};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_14 = { "GetBusFrameNumber",offsetof(struct IOUSBInterfaceStruct,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_13};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_15 = { "SetAlternateInterface",offsetof(struct IOUSBInterfaceStruct,SetAlternateInterface),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_14};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_16 = { "GetDevice",offsetof(struct IOUSBInterfaceStruct,GetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_15};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_17 = { "GetLocationID",offsetof(struct IOUSBInterfaceStruct,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_16};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_18 = { "GetNumEndpoints",offsetof(struct IOUSBInterfaceStruct,GetNumEndpoints),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_17};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_19 = { "GetAlternateSetting",offsetof(struct IOUSBInterfaceStruct,GetAlternateSetting),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_18};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_20 = { "GetInterfaceNumber",offsetof(struct IOUSBInterfaceStruct,GetInterfaceNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_19};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_21 = { "GetConfigurationValue",offsetof(struct IOUSBInterfaceStruct,GetConfigurationValue),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_20};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_22 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBInterfaceStruct,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_21};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_23 = { "GetDeviceProduct",offsetof(struct IOUSBInterfaceStruct,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_22};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_24 = { "GetDeviceVendor",offsetof(struct IOUSBInterfaceStruct,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_23};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_25 = { "GetInterfaceProtocol",offsetof(struct IOUSBInterfaceStruct,GetInterfaceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_24};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_26 = { "GetInterfaceSubClass",offsetof(struct IOUSBInterfaceStruct,GetInterfaceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_25};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_27 = { "GetInterfaceClass",offsetof(struct IOUSBInterfaceStruct,GetInterfaceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_26};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_28 = { "USBInterfaceClose",offsetof(struct IOUSBInterfaceStruct,USBInterfaceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_27};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_29 = { "USBInterfaceOpen",offsetof(struct IOUSBInterfaceStruct,USBInterfaceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_28};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_30 = { "GetInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct,GetInterfaceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_29};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_31 = { "CreateInterfaceAsyncPort",offsetof(struct IOUSBInterfaceStruct,CreateInterfaceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_30};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_32 = { "GetInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct,GetInterfaceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBInterfaceStruct_31};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_33 = { "CreateInterfaceAsyncEventSource",offsetof(struct IOUSBInterfaceStruct,CreateInterfaceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_32};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_34 = { "Release",offsetof(struct IOUSBInterfaceStruct,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_33};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_35 = { "AddRef",offsetof(struct IOUSBInterfaceStruct,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_34};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_36 = { "QueryInterface",offsetof(struct IOUSBInterfaceStruct,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBInterfaceStruct_35};
	VPL_ExtField _VPXStruct_IOUSBInterfaceStruct_37 = { "_reserved",offsetof(struct IOUSBInterfaceStruct,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBInterfaceStruct_36};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceStruct_S = {"IOUSBInterfaceStruct",&_VPXStruct_IOUSBInterfaceStruct_37,sizeof(struct IOUSBInterfaceStruct)};

	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_1 = { "GetIOUSBLibVersion",offsetof(struct IOUSBDeviceStruct245,GetIOUSBLibVersion),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_2 = { "GetBusMicroFrameNumber",offsetof(struct IOUSBDeviceStruct245,GetBusMicroFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_1};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_3 = { "USBDeviceReEnumerate",offsetof(struct IOUSBDeviceStruct245,USBDeviceReEnumerate),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_2};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_4 = { "USBGetSerialNumberStringIndex",offsetof(struct IOUSBDeviceStruct245,USBGetSerialNumberStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_5 = { "USBGetProductStringIndex",offsetof(struct IOUSBDeviceStruct245,USBGetProductStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_6 = { "USBGetManufacturerStringIndex",offsetof(struct IOUSBDeviceStruct245,USBGetManufacturerStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_7 = { "USBDeviceAbortPipeZero",offsetof(struct IOUSBDeviceStruct245,USBDeviceAbortPipeZero),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_8 = { "USBDeviceSuspend",offsetof(struct IOUSBDeviceStruct245,USBDeviceSuspend),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_9 = { "DeviceRequestAsyncTO",offsetof(struct IOUSBDeviceStruct245,DeviceRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_8};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_10 = { "DeviceRequestTO",offsetof(struct IOUSBDeviceStruct245,DeviceRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_9};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_11 = { "USBDeviceOpenSeize",offsetof(struct IOUSBDeviceStruct245,USBDeviceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_10};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_12 = { "CreateInterfaceIterator",offsetof(struct IOUSBDeviceStruct245,CreateInterfaceIterator),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_11};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_13 = { "DeviceRequestAsync",offsetof(struct IOUSBDeviceStruct245,DeviceRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_12};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_14 = { "DeviceRequest",offsetof(struct IOUSBDeviceStruct245,DeviceRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_13};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_15 = { "ResetDevice",offsetof(struct IOUSBDeviceStruct245,ResetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_14};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_16 = { "GetBusFrameNumber",offsetof(struct IOUSBDeviceStruct245,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_15};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_17 = { "SetConfiguration",offsetof(struct IOUSBDeviceStruct245,SetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_16};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_18 = { "GetConfiguration",offsetof(struct IOUSBDeviceStruct245,GetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_17};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_19 = { "GetConfigurationDescriptorPtr",offsetof(struct IOUSBDeviceStruct245,GetConfigurationDescriptorPtr),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_18};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_20 = { "GetLocationID",offsetof(struct IOUSBDeviceStruct245,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_19};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_21 = { "GetNumberOfConfigurations",offsetof(struct IOUSBDeviceStruct245,GetNumberOfConfigurations),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_20};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_22 = { "GetDeviceSpeed",offsetof(struct IOUSBDeviceStruct245,GetDeviceSpeed),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_21};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_23 = { "GetDeviceBusPowerAvailable",offsetof(struct IOUSBDeviceStruct245,GetDeviceBusPowerAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_22};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_24 = { "GetDeviceAddress",offsetof(struct IOUSBDeviceStruct245,GetDeviceAddress),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_23};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_25 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBDeviceStruct245,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_24};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_26 = { "GetDeviceProduct",offsetof(struct IOUSBDeviceStruct245,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_25};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_27 = { "GetDeviceVendor",offsetof(struct IOUSBDeviceStruct245,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_26};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_28 = { "GetDeviceProtocol",offsetof(struct IOUSBDeviceStruct245,GetDeviceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_27};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_29 = { "GetDeviceSubClass",offsetof(struct IOUSBDeviceStruct245,GetDeviceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_28};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_30 = { "GetDeviceClass",offsetof(struct IOUSBDeviceStruct245,GetDeviceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_29};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_31 = { "USBDeviceClose",offsetof(struct IOUSBDeviceStruct245,USBDeviceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_30};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_32 = { "USBDeviceOpen",offsetof(struct IOUSBDeviceStruct245,USBDeviceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_31};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_33 = { "GetDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct245,GetDeviceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_32};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_34 = { "CreateDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct245,CreateDeviceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_33};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_35 = { "GetDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct245,GetDeviceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBDeviceStruct245_34};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_36 = { "CreateDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct245,CreateDeviceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_35};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_37 = { "Release",offsetof(struct IOUSBDeviceStruct245,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_36};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_38 = { "AddRef",offsetof(struct IOUSBDeviceStruct245,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_37};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_39 = { "QueryInterface",offsetof(struct IOUSBDeviceStruct245,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct245_38};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct245_40 = { "_reserved",offsetof(struct IOUSBDeviceStruct245,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDeviceStruct245_39};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceStruct245_S = {"IOUSBDeviceStruct245",&_VPXStruct_IOUSBDeviceStruct245_40,sizeof(struct IOUSBDeviceStruct245)};

	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_1 = { "GetIOUSBLibVersion",offsetof(struct IOUSBDeviceStruct197,GetIOUSBLibVersion),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_2 = { "GetBusMicroFrameNumber",offsetof(struct IOUSBDeviceStruct197,GetBusMicroFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_1};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_3 = { "USBDeviceReEnumerate",offsetof(struct IOUSBDeviceStruct197,USBDeviceReEnumerate),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_2};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_4 = { "USBGetSerialNumberStringIndex",offsetof(struct IOUSBDeviceStruct197,USBGetSerialNumberStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_5 = { "USBGetProductStringIndex",offsetof(struct IOUSBDeviceStruct197,USBGetProductStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_6 = { "USBGetManufacturerStringIndex",offsetof(struct IOUSBDeviceStruct197,USBGetManufacturerStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_7 = { "USBDeviceAbortPipeZero",offsetof(struct IOUSBDeviceStruct197,USBDeviceAbortPipeZero),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_8 = { "USBDeviceSuspend",offsetof(struct IOUSBDeviceStruct197,USBDeviceSuspend),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_9 = { "DeviceRequestAsyncTO",offsetof(struct IOUSBDeviceStruct197,DeviceRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_8};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_10 = { "DeviceRequestTO",offsetof(struct IOUSBDeviceStruct197,DeviceRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_9};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_11 = { "USBDeviceOpenSeize",offsetof(struct IOUSBDeviceStruct197,USBDeviceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_10};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_12 = { "CreateInterfaceIterator",offsetof(struct IOUSBDeviceStruct197,CreateInterfaceIterator),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_11};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_13 = { "DeviceRequestAsync",offsetof(struct IOUSBDeviceStruct197,DeviceRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_12};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_14 = { "DeviceRequest",offsetof(struct IOUSBDeviceStruct197,DeviceRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_13};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_15 = { "ResetDevice",offsetof(struct IOUSBDeviceStruct197,ResetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_14};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_16 = { "GetBusFrameNumber",offsetof(struct IOUSBDeviceStruct197,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_15};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_17 = { "SetConfiguration",offsetof(struct IOUSBDeviceStruct197,SetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_16};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_18 = { "GetConfiguration",offsetof(struct IOUSBDeviceStruct197,GetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_17};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_19 = { "GetConfigurationDescriptorPtr",offsetof(struct IOUSBDeviceStruct197,GetConfigurationDescriptorPtr),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_18};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_20 = { "GetLocationID",offsetof(struct IOUSBDeviceStruct197,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_19};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_21 = { "GetNumberOfConfigurations",offsetof(struct IOUSBDeviceStruct197,GetNumberOfConfigurations),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_20};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_22 = { "GetDeviceSpeed",offsetof(struct IOUSBDeviceStruct197,GetDeviceSpeed),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_21};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_23 = { "GetDeviceBusPowerAvailable",offsetof(struct IOUSBDeviceStruct197,GetDeviceBusPowerAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_22};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_24 = { "GetDeviceAddress",offsetof(struct IOUSBDeviceStruct197,GetDeviceAddress),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_23};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_25 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBDeviceStruct197,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_24};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_26 = { "GetDeviceProduct",offsetof(struct IOUSBDeviceStruct197,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_25};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_27 = { "GetDeviceVendor",offsetof(struct IOUSBDeviceStruct197,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_26};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_28 = { "GetDeviceProtocol",offsetof(struct IOUSBDeviceStruct197,GetDeviceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_27};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_29 = { "GetDeviceSubClass",offsetof(struct IOUSBDeviceStruct197,GetDeviceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_28};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_30 = { "GetDeviceClass",offsetof(struct IOUSBDeviceStruct197,GetDeviceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_29};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_31 = { "USBDeviceClose",offsetof(struct IOUSBDeviceStruct197,USBDeviceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_30};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_32 = { "USBDeviceOpen",offsetof(struct IOUSBDeviceStruct197,USBDeviceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_31};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_33 = { "GetDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct197,GetDeviceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_32};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_34 = { "CreateDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct197,CreateDeviceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_33};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_35 = { "GetDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct197,GetDeviceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBDeviceStruct197_34};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_36 = { "CreateDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct197,CreateDeviceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_35};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_37 = { "Release",offsetof(struct IOUSBDeviceStruct197,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_36};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_38 = { "AddRef",offsetof(struct IOUSBDeviceStruct197,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_37};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_39 = { "QueryInterface",offsetof(struct IOUSBDeviceStruct197,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct197_38};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct197_40 = { "_reserved",offsetof(struct IOUSBDeviceStruct197,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDeviceStruct197_39};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceStruct197_S = {"IOUSBDeviceStruct197",&_VPXStruct_IOUSBDeviceStruct197_40,sizeof(struct IOUSBDeviceStruct197)};

	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_1 = { "USBDeviceReEnumerate",offsetof(struct IOUSBDeviceStruct187,USBDeviceReEnumerate),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_2 = { "USBGetSerialNumberStringIndex",offsetof(struct IOUSBDeviceStruct187,USBGetSerialNumberStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_1};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_3 = { "USBGetProductStringIndex",offsetof(struct IOUSBDeviceStruct187,USBGetProductStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_2};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_4 = { "USBGetManufacturerStringIndex",offsetof(struct IOUSBDeviceStruct187,USBGetManufacturerStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_5 = { "USBDeviceAbortPipeZero",offsetof(struct IOUSBDeviceStruct187,USBDeviceAbortPipeZero),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_6 = { "USBDeviceSuspend",offsetof(struct IOUSBDeviceStruct187,USBDeviceSuspend),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_7 = { "DeviceRequestAsyncTO",offsetof(struct IOUSBDeviceStruct187,DeviceRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_8 = { "DeviceRequestTO",offsetof(struct IOUSBDeviceStruct187,DeviceRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_9 = { "USBDeviceOpenSeize",offsetof(struct IOUSBDeviceStruct187,USBDeviceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_8};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_10 = { "CreateInterfaceIterator",offsetof(struct IOUSBDeviceStruct187,CreateInterfaceIterator),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_9};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_11 = { "DeviceRequestAsync",offsetof(struct IOUSBDeviceStruct187,DeviceRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_10};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_12 = { "DeviceRequest",offsetof(struct IOUSBDeviceStruct187,DeviceRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_11};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_13 = { "ResetDevice",offsetof(struct IOUSBDeviceStruct187,ResetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_12};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_14 = { "GetBusFrameNumber",offsetof(struct IOUSBDeviceStruct187,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_13};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_15 = { "SetConfiguration",offsetof(struct IOUSBDeviceStruct187,SetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_14};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_16 = { "GetConfiguration",offsetof(struct IOUSBDeviceStruct187,GetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_15};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_17 = { "GetConfigurationDescriptorPtr",offsetof(struct IOUSBDeviceStruct187,GetConfigurationDescriptorPtr),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_16};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_18 = { "GetLocationID",offsetof(struct IOUSBDeviceStruct187,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_17};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_19 = { "GetNumberOfConfigurations",offsetof(struct IOUSBDeviceStruct187,GetNumberOfConfigurations),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_18};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_20 = { "GetDeviceSpeed",offsetof(struct IOUSBDeviceStruct187,GetDeviceSpeed),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_19};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_21 = { "GetDeviceBusPowerAvailable",offsetof(struct IOUSBDeviceStruct187,GetDeviceBusPowerAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_20};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_22 = { "GetDeviceAddress",offsetof(struct IOUSBDeviceStruct187,GetDeviceAddress),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_21};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_23 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBDeviceStruct187,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_22};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_24 = { "GetDeviceProduct",offsetof(struct IOUSBDeviceStruct187,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_23};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_25 = { "GetDeviceVendor",offsetof(struct IOUSBDeviceStruct187,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_24};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_26 = { "GetDeviceProtocol",offsetof(struct IOUSBDeviceStruct187,GetDeviceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_25};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_27 = { "GetDeviceSubClass",offsetof(struct IOUSBDeviceStruct187,GetDeviceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_26};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_28 = { "GetDeviceClass",offsetof(struct IOUSBDeviceStruct187,GetDeviceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_27};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_29 = { "USBDeviceClose",offsetof(struct IOUSBDeviceStruct187,USBDeviceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_28};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_30 = { "USBDeviceOpen",offsetof(struct IOUSBDeviceStruct187,USBDeviceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_29};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_31 = { "GetDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct187,GetDeviceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_30};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_32 = { "CreateDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct187,CreateDeviceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_31};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_33 = { "GetDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct187,GetDeviceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBDeviceStruct187_32};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_34 = { "CreateDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct187,CreateDeviceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_33};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_35 = { "Release",offsetof(struct IOUSBDeviceStruct187,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_34};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_36 = { "AddRef",offsetof(struct IOUSBDeviceStruct187,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_35};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_37 = { "QueryInterface",offsetof(struct IOUSBDeviceStruct187,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct187_36};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct187_38 = { "_reserved",offsetof(struct IOUSBDeviceStruct187,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDeviceStruct187_37};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceStruct187_S = {"IOUSBDeviceStruct187",&_VPXStruct_IOUSBDeviceStruct187_38,sizeof(struct IOUSBDeviceStruct187)};

	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_1 = { "USBGetSerialNumberStringIndex",offsetof(struct IOUSBDeviceStruct182,USBGetSerialNumberStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_2 = { "USBGetProductStringIndex",offsetof(struct IOUSBDeviceStruct182,USBGetProductStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_1};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_3 = { "USBGetManufacturerStringIndex",offsetof(struct IOUSBDeviceStruct182,USBGetManufacturerStringIndex),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_2};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_4 = { "USBDeviceAbortPipeZero",offsetof(struct IOUSBDeviceStruct182,USBDeviceAbortPipeZero),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_5 = { "USBDeviceSuspend",offsetof(struct IOUSBDeviceStruct182,USBDeviceSuspend),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_6 = { "DeviceRequestAsyncTO",offsetof(struct IOUSBDeviceStruct182,DeviceRequestAsyncTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_7 = { "DeviceRequestTO",offsetof(struct IOUSBDeviceStruct182,DeviceRequestTO),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_8 = { "USBDeviceOpenSeize",offsetof(struct IOUSBDeviceStruct182,USBDeviceOpenSeize),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_9 = { "CreateInterfaceIterator",offsetof(struct IOUSBDeviceStruct182,CreateInterfaceIterator),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_8};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_10 = { "DeviceRequestAsync",offsetof(struct IOUSBDeviceStruct182,DeviceRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_9};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_11 = { "DeviceRequest",offsetof(struct IOUSBDeviceStruct182,DeviceRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_10};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_12 = { "ResetDevice",offsetof(struct IOUSBDeviceStruct182,ResetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_11};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_13 = { "GetBusFrameNumber",offsetof(struct IOUSBDeviceStruct182,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_12};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_14 = { "SetConfiguration",offsetof(struct IOUSBDeviceStruct182,SetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_13};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_15 = { "GetConfiguration",offsetof(struct IOUSBDeviceStruct182,GetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_14};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_16 = { "GetConfigurationDescriptorPtr",offsetof(struct IOUSBDeviceStruct182,GetConfigurationDescriptorPtr),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_15};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_17 = { "GetLocationID",offsetof(struct IOUSBDeviceStruct182,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_16};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_18 = { "GetNumberOfConfigurations",offsetof(struct IOUSBDeviceStruct182,GetNumberOfConfigurations),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_17};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_19 = { "GetDeviceSpeed",offsetof(struct IOUSBDeviceStruct182,GetDeviceSpeed),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_18};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_20 = { "GetDeviceBusPowerAvailable",offsetof(struct IOUSBDeviceStruct182,GetDeviceBusPowerAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_19};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_21 = { "GetDeviceAddress",offsetof(struct IOUSBDeviceStruct182,GetDeviceAddress),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_20};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_22 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBDeviceStruct182,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_21};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_23 = { "GetDeviceProduct",offsetof(struct IOUSBDeviceStruct182,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_22};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_24 = { "GetDeviceVendor",offsetof(struct IOUSBDeviceStruct182,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_23};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_25 = { "GetDeviceProtocol",offsetof(struct IOUSBDeviceStruct182,GetDeviceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_24};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_26 = { "GetDeviceSubClass",offsetof(struct IOUSBDeviceStruct182,GetDeviceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_25};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_27 = { "GetDeviceClass",offsetof(struct IOUSBDeviceStruct182,GetDeviceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_26};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_28 = { "USBDeviceClose",offsetof(struct IOUSBDeviceStruct182,USBDeviceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_27};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_29 = { "USBDeviceOpen",offsetof(struct IOUSBDeviceStruct182,USBDeviceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_28};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_30 = { "GetDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct182,GetDeviceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_29};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_31 = { "CreateDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct182,CreateDeviceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_30};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_32 = { "GetDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct182,GetDeviceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBDeviceStruct182_31};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_33 = { "CreateDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct182,CreateDeviceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_32};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_34 = { "Release",offsetof(struct IOUSBDeviceStruct182,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_33};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_35 = { "AddRef",offsetof(struct IOUSBDeviceStruct182,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_34};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_36 = { "QueryInterface",offsetof(struct IOUSBDeviceStruct182,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct182_35};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct182_37 = { "_reserved",offsetof(struct IOUSBDeviceStruct182,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDeviceStruct182_36};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceStruct182_S = {"IOUSBDeviceStruct182",&_VPXStruct_IOUSBDeviceStruct182_37,sizeof(struct IOUSBDeviceStruct182)};

	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_1 = { "CreateInterfaceIterator",offsetof(struct IOUSBDeviceStruct,CreateInterfaceIterator),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_2 = { "DeviceRequestAsync",offsetof(struct IOUSBDeviceStruct,DeviceRequestAsync),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_1};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_3 = { "DeviceRequest",offsetof(struct IOUSBDeviceStruct,DeviceRequest),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_2};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_4 = { "ResetDevice",offsetof(struct IOUSBDeviceStruct,ResetDevice),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_5 = { "GetBusFrameNumber",offsetof(struct IOUSBDeviceStruct,GetBusFrameNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_6 = { "SetConfiguration",offsetof(struct IOUSBDeviceStruct,SetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_7 = { "GetConfiguration",offsetof(struct IOUSBDeviceStruct,GetConfiguration),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_8 = { "GetConfigurationDescriptorPtr",offsetof(struct IOUSBDeviceStruct,GetConfigurationDescriptorPtr),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_9 = { "GetLocationID",offsetof(struct IOUSBDeviceStruct,GetLocationID),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_8};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_10 = { "GetNumberOfConfigurations",offsetof(struct IOUSBDeviceStruct,GetNumberOfConfigurations),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_9};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_11 = { "GetDeviceSpeed",offsetof(struct IOUSBDeviceStruct,GetDeviceSpeed),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_10};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_12 = { "GetDeviceBusPowerAvailable",offsetof(struct IOUSBDeviceStruct,GetDeviceBusPowerAvailable),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_11};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_13 = { "GetDeviceAddress",offsetof(struct IOUSBDeviceStruct,GetDeviceAddress),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_12};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_14 = { "GetDeviceReleaseNumber",offsetof(struct IOUSBDeviceStruct,GetDeviceReleaseNumber),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_13};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_15 = { "GetDeviceProduct",offsetof(struct IOUSBDeviceStruct,GetDeviceProduct),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_14};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_16 = { "GetDeviceVendor",offsetof(struct IOUSBDeviceStruct,GetDeviceVendor),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_15};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_17 = { "GetDeviceProtocol",offsetof(struct IOUSBDeviceStruct,GetDeviceProtocol),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_16};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_18 = { "GetDeviceSubClass",offsetof(struct IOUSBDeviceStruct,GetDeviceSubClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_17};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_19 = { "GetDeviceClass",offsetof(struct IOUSBDeviceStruct,GetDeviceClass),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_18};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_20 = { "USBDeviceClose",offsetof(struct IOUSBDeviceStruct,USBDeviceClose),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_19};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_21 = { "USBDeviceOpen",offsetof(struct IOUSBDeviceStruct,USBDeviceOpen),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_20};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_22 = { "GetDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct,GetDeviceAsyncPort),sizeof(void *),kPointerType,"unsigned int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_21};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_23 = { "CreateDeviceAsyncPort",offsetof(struct IOUSBDeviceStruct,CreateDeviceAsyncPort),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_22};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_24 = { "GetDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct,GetDeviceAsyncEventSource),sizeof(void *),kPointerType,"__CFRunLoopSource",2,0,"T*",&_VPXStruct_IOUSBDeviceStruct_23};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_25 = { "CreateDeviceAsyncEventSource",offsetof(struct IOUSBDeviceStruct,CreateDeviceAsyncEventSource),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_24};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_26 = { "Release",offsetof(struct IOUSBDeviceStruct,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_25};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_27 = { "AddRef",offsetof(struct IOUSBDeviceStruct,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_26};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_28 = { "QueryInterface",offsetof(struct IOUSBDeviceStruct,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOUSBDeviceStruct_27};
	VPL_ExtField _VPXStruct_IOUSBDeviceStruct_29 = { "_reserved",offsetof(struct IOUSBDeviceStruct,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDeviceStruct_28};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceStruct_S = {"IOUSBDeviceStruct",&_VPXStruct_IOUSBDeviceStruct_29,sizeof(struct IOUSBDeviceStruct)};

	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_1 = { "nextBuffer",offsetof(struct LowLatencyUserBufferInfoV2,nextBuffer),sizeof(void *),kPointerType,"LowLatencyUserBufferInfoV2",1,28,"T*",NULL};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_2 = { "mappedUHCIAddress",offsetof(struct LowLatencyUserBufferInfoV2,mappedUHCIAddress),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_LowLatencyUserBufferInfoV2_1};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_3 = { "isPrepared",offsetof(struct LowLatencyUserBufferInfoV2,isPrepared),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_LowLatencyUserBufferInfoV2_2};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_4 = { "bufferType",offsetof(struct LowLatencyUserBufferInfoV2,bufferType),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfoV2_3};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_5 = { "bufferSize",offsetof(struct LowLatencyUserBufferInfoV2,bufferSize),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfoV2_4};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_6 = { "bufferAddress",offsetof(struct LowLatencyUserBufferInfoV2,bufferAddress),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_LowLatencyUserBufferInfoV2_5};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfoV2_7 = { "cookie",offsetof(struct LowLatencyUserBufferInfoV2,cookie),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfoV2_6};
	VPL_ExtStructure _VPXStruct_LowLatencyUserBufferInfoV2_S = {"LowLatencyUserBufferInfoV2",&_VPXStruct_LowLatencyUserBufferInfoV2_7,sizeof(struct LowLatencyUserBufferInfoV2)};

	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_1 = { "nextBuffer",offsetof(struct LowLatencyUserBufferInfo,nextBuffer),sizeof(void *),kPointerType,"LowLatencyUserBufferInfo",1,24,"T*",NULL};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_2 = { "isPrepared",offsetof(struct LowLatencyUserBufferInfo,isPrepared),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_LowLatencyUserBufferInfo_1};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_3 = { "bufferType",offsetof(struct LowLatencyUserBufferInfo,bufferType),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfo_2};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_4 = { "bufferSize",offsetof(struct LowLatencyUserBufferInfo,bufferSize),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfo_3};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_5 = { "bufferAddress",offsetof(struct LowLatencyUserBufferInfo,bufferAddress),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_LowLatencyUserBufferInfo_4};
	VPL_ExtField _VPXStruct_LowLatencyUserBufferInfo_6 = { "cookie",offsetof(struct LowLatencyUserBufferInfo,cookie),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_LowLatencyUserBufferInfo_5};
	VPL_ExtStructure _VPXStruct_LowLatencyUserBufferInfo_S = {"LowLatencyUserBufferInfo",&_VPXStruct_LowLatencyUserBufferInfo_6,sizeof(struct LowLatencyUserBufferInfo)};

	VPL_ExtField _VPXStruct_IOUSBFindInterfaceRequest_1 = { "bAlternateSetting",offsetof( IOUSBFindInterfaceRequest,bAlternateSetting),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBFindInterfaceRequest_2 = { "bInterfaceProtocol",offsetof( IOUSBFindInterfaceRequest,bInterfaceProtocol),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBFindInterfaceRequest_1};
	VPL_ExtField _VPXStruct_IOUSBFindInterfaceRequest_3 = { "bInterfaceSubClass",offsetof( IOUSBFindInterfaceRequest,bInterfaceSubClass),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBFindInterfaceRequest_2};
	VPL_ExtField _VPXStruct_IOUSBFindInterfaceRequest_4 = { "bInterfaceClass",offsetof( IOUSBFindInterfaceRequest,bInterfaceClass),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBFindInterfaceRequest_3};
	VPL_ExtStructure _VPXStruct_IOUSBFindInterfaceRequest_S = {"IOUSBFindInterfaceRequest",&_VPXStruct_IOUSBFindInterfaceRequest_4,sizeof( IOUSBFindInterfaceRequest)};

	VPL_ExtField _VPXStruct_IOUSBGetFrameStruct_1 = { "timeStamp",offsetof( IOUSBGetFrameStruct,timeStamp),sizeof(struct UnsignedWide),kStructureType,"NULL",0,0,"UnsignedWide",NULL};
	VPL_ExtField _VPXStruct_IOUSBGetFrameStruct_2 = { "frame",offsetof( IOUSBGetFrameStruct,frame),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IOUSBGetFrameStruct_1};
	VPL_ExtStructure _VPXStruct_IOUSBGetFrameStruct_S = {"IOUSBGetFrameStruct",&_VPXStruct_IOUSBGetFrameStruct_2,sizeof( IOUSBGetFrameStruct)};

	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_1 = { "fFrameListBufferOffset",offsetof(struct IOUSBLowLatencyIsocStruct,fFrameListBufferOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_2 = { "fFrameListBufferCookie",offsetof(struct IOUSBLowLatencyIsocStruct,fFrameListBufferCookie),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_1};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_3 = { "fDataBufferOffset",offsetof(struct IOUSBLowLatencyIsocStruct,fDataBufferOffset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_2};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_4 = { "fDataBufferCookie",offsetof(struct IOUSBLowLatencyIsocStruct,fDataBufferCookie),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_3};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_5 = { "fUpdateFrequency",offsetof(struct IOUSBLowLatencyIsocStruct,fUpdateFrequency),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_4};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_6 = { "fNumFrames",offsetof(struct IOUSBLowLatencyIsocStruct,fNumFrames),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_5};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_7 = { "fStartFrame",offsetof(struct IOUSBLowLatencyIsocStruct,fStartFrame),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IOUSBLowLatencyIsocStruct_6};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_8 = { "fBufSize",offsetof(struct IOUSBLowLatencyIsocStruct,fBufSize),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_7};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocStruct_9 = { "fPipe",offsetof(struct IOUSBLowLatencyIsocStruct,fPipe),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBLowLatencyIsocStruct_8};
	VPL_ExtStructure _VPXStruct_IOUSBLowLatencyIsocStruct_S = {"IOUSBLowLatencyIsocStruct",&_VPXStruct_IOUSBLowLatencyIsocStruct_9,sizeof(struct IOUSBLowLatencyIsocStruct)};

	VPL_ExtField _VPXStruct_IOUSBIsocStruct_1 = { "fFrameCounts",offsetof( IOUSBIsocStruct,fFrameCounts),sizeof(void *),kPointerType,"IOUSBIsocFrame",1,8,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_2 = { "fNumFrames",offsetof( IOUSBIsocStruct,fNumFrames),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBIsocStruct_1};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_3 = { "fStartFrame",offsetof( IOUSBIsocStruct,fStartFrame),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_IOUSBIsocStruct_2};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_4 = { "fBufSize",offsetof( IOUSBIsocStruct,fBufSize),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBIsocStruct_3};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_5 = { "fBuffer",offsetof( IOUSBIsocStruct,fBuffer),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBIsocStruct_4};
	VPL_ExtField _VPXStruct_IOUSBIsocStruct_6 = { "fPipe",offsetof( IOUSBIsocStruct,fPipe),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBIsocStruct_5};
	VPL_ExtStructure _VPXStruct_IOUSBIsocStruct_S = {"IOUSBIsocStruct",&_VPXStruct_IOUSBIsocStruct_6,sizeof( IOUSBIsocStruct)};

	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_1 = { "completionTimeout",offsetof( IOUSBDevReqOOLTO,completionTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_2 = { "noDataTimeout",offsetof( IOUSBDevReqOOLTO,noDataTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevReqOOLTO_1};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_3 = { "pipeRef",offsetof( IOUSBDevReqOOLTO,pipeRef),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOLTO_2};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_4 = { "wLenDone",offsetof( IOUSBDevReqOOLTO,wLenDone),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevReqOOLTO_3};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_5 = { "pData",offsetof( IOUSBDevReqOOLTO,pData),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDevReqOOLTO_4};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_6 = { "wLength",offsetof( IOUSBDevReqOOLTO,wLength),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOLTO_5};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_7 = { "wIndex",offsetof( IOUSBDevReqOOLTO,wIndex),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOLTO_6};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_8 = { "wValue",offsetof( IOUSBDevReqOOLTO,wValue),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOLTO_7};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_9 = { "bRequest",offsetof( IOUSBDevReqOOLTO,bRequest),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOLTO_8};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOLTO_10 = { "bmRequestType",offsetof( IOUSBDevReqOOLTO,bmRequestType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOLTO_9};
	VPL_ExtStructure _VPXStruct_IOUSBDevReqOOLTO_S = {"IOUSBDevReqOOLTO",&_VPXStruct_IOUSBDevReqOOLTO_10,sizeof( IOUSBDevReqOOLTO)};

	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_1 = { "pipeRef",offsetof( IOUSBDevReqOOL,pipeRef),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_2 = { "wLenDone",offsetof( IOUSBDevReqOOL,wLenDone),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevReqOOL_1};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_3 = { "pData",offsetof( IOUSBDevReqOOL,pData),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDevReqOOL_2};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_4 = { "wLength",offsetof( IOUSBDevReqOOL,wLength),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOL_3};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_5 = { "wIndex",offsetof( IOUSBDevReqOOL,wIndex),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOL_4};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_6 = { "wValue",offsetof( IOUSBDevReqOOL,wValue),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevReqOOL_5};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_7 = { "bRequest",offsetof( IOUSBDevReqOOL,bRequest),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOL_6};
	VPL_ExtField _VPXStruct_IOUSBDevReqOOL_8 = { "bmRequestType",offsetof( IOUSBDevReqOOL,bmRequestType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevReqOOL_7};
	VPL_ExtStructure _VPXStruct_IOUSBDevReqOOL_S = {"IOUSBDevReqOOL",&_VPXStruct_IOUSBDevReqOOL_8,sizeof( IOUSBDevReqOOL)};

	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_1 = { "completionTimeout",offsetof( IOUSBBulkPipeReq,completionTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_2 = { "noDataTimeout",offsetof( IOUSBBulkPipeReq,noDataTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBBulkPipeReq_1};
	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_3 = { "size",offsetof( IOUSBBulkPipeReq,size),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBBulkPipeReq_2};
	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_4 = { "buf",offsetof( IOUSBBulkPipeReq,buf),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBBulkPipeReq_3};
	VPL_ExtField _VPXStruct_IOUSBBulkPipeReq_5 = { "pipeRef",offsetof( IOUSBBulkPipeReq,pipeRef),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBBulkPipeReq_4};
	VPL_ExtStructure _VPXStruct_IOUSBBulkPipeReq_S = {"IOUSBBulkPipeReq",&_VPXStruct_IOUSBBulkPipeReq_5,sizeof( IOUSBBulkPipeReq)};

	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_1 = { "completionTimeout",offsetof( IOUSBDevRequestTO,completionTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_2 = { "noDataTimeout",offsetof( IOUSBDevRequestTO,noDataTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevRequestTO_1};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_3 = { "wLenDone",offsetof( IOUSBDevRequestTO,wLenDone),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_IOUSBDevRequestTO_2};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_4 = { "pData",offsetof( IOUSBDevRequestTO,pData),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDevRequestTO_3};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_5 = { "wLength",offsetof( IOUSBDevRequestTO,wLength),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevRequestTO_4};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_6 = { "wIndex",offsetof( IOUSBDevRequestTO,wIndex),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevRequestTO_5};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_7 = { "wValue",offsetof( IOUSBDevRequestTO,wValue),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevRequestTO_6};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_8 = { "bRequest",offsetof( IOUSBDevRequestTO,bRequest),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevRequestTO_7};
	VPL_ExtField _VPXStruct_IOUSBDevRequestTO_9 = { "bmRequestType",offsetof( IOUSBDevRequestTO,bmRequestType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevRequestTO_8};
	VPL_ExtStructure _VPXStruct_IOUSBDevRequestTO_S = {"IOUSBDevRequestTO",&_VPXStruct_IOUSBDevRequestTO_9,sizeof( IOUSBDevRequestTO)};

	VPL_ExtField _VPXStruct_IOUSBDevRequest_1 = { "wLenDone",offsetof( IOUSBDevRequest,wLenDone),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_2 = { "pData",offsetof( IOUSBDevRequest,pData),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBDevRequest_1};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_3 = { "wLength",offsetof( IOUSBDevRequest,wLength),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevRequest_2};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_4 = { "wIndex",offsetof( IOUSBDevRequest,wIndex),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevRequest_3};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_5 = { "wValue",offsetof( IOUSBDevRequest,wValue),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDevRequest_4};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_6 = { "bRequest",offsetof( IOUSBDevRequest,bRequest),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevRequest_5};
	VPL_ExtField _VPXStruct_IOUSBDevRequest_7 = { "bmRequestType",offsetof( IOUSBDevRequest,bmRequestType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDevRequest_6};
	VPL_ExtStructure _VPXStruct_IOUSBDevRequest_S = {"IOUSBDevRequest",&_VPXStruct_IOUSBDevRequest_7,sizeof( IOUSBDevRequest)};

	VPL_ExtField _VPXStruct_IOUSBFindEndpointRequest_1 = { "interval",offsetof( IOUSBFindEndpointRequest,interval),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBFindEndpointRequest_2 = { "maxPacketSize",offsetof( IOUSBFindEndpointRequest,maxPacketSize),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBFindEndpointRequest_1};
	VPL_ExtField _VPXStruct_IOUSBFindEndpointRequest_3 = { "direction",offsetof( IOUSBFindEndpointRequest,direction),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBFindEndpointRequest_2};
	VPL_ExtField _VPXStruct_IOUSBFindEndpointRequest_4 = { "type",offsetof( IOUSBFindEndpointRequest,type),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBFindEndpointRequest_3};
	VPL_ExtStructure _VPXStruct_IOUSBFindEndpointRequest_S = {"IOUSBFindEndpointRequest",&_VPXStruct_IOUSBFindEndpointRequest_4,sizeof( IOUSBFindEndpointRequest)};

	VPL_ExtField _VPXStruct_IOUSBMatch_1 = { "usbProduct",offsetof(struct IOUSBMatch,usbProduct),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBMatch_2 = { "usbVendor",offsetof(struct IOUSBMatch,usbVendor),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMatch_1};
	VPL_ExtField _VPXStruct_IOUSBMatch_3 = { "usbProtocol",offsetof(struct IOUSBMatch,usbProtocol),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMatch_2};
	VPL_ExtField _VPXStruct_IOUSBMatch_4 = { "usbSubClass",offsetof(struct IOUSBMatch,usbSubClass),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMatch_3};
	VPL_ExtField _VPXStruct_IOUSBMatch_5 = { "usbClass",offsetof(struct IOUSBMatch,usbClass),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMatch_4};
	VPL_ExtStructure _VPXStruct_IOUSBMatch_S = {"IOUSBMatch",&_VPXStruct_IOUSBMatch_5,sizeof(struct IOUSBMatch)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_1 = { "iFunction",offsetof(struct IOUSBInterfaceAssociationDescriptor,iFunction),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_2 = { "bFunctionProtocol",offsetof(struct IOUSBInterfaceAssociationDescriptor,bFunctionProtocol),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_3 = { "bFunctionSubClass",offsetof(struct IOUSBInterfaceAssociationDescriptor,bFunctionSubClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_4 = { "bFunctionClass",offsetof(struct IOUSBInterfaceAssociationDescriptor,bFunctionClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_5 = { "bInterfaceCount",offsetof(struct IOUSBInterfaceAssociationDescriptor,bInterfaceCount),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_6 = { "bFirstInterface",offsetof(struct IOUSBInterfaceAssociationDescriptor,bFirstInterface),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_7 = { "bDescriptorType",offsetof(struct IOUSBInterfaceAssociationDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceAssociationDescriptor_8 = { "bLength",offsetof(struct IOUSBInterfaceAssociationDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_7};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceAssociationDescriptor_S = {"IOUSBInterfaceAssociationDescriptor",&_VPXStruct_IOUSBInterfaceAssociationDescriptor_8,sizeof(struct IOUSBInterfaceAssociationDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_1 = { "wTransferSize",offsetof(struct IOUSBDFUDescriptor,wTransferSize),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_2 = { "wDetachTimeout",offsetof(struct IOUSBDFUDescriptor,wDetachTimeout),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDFUDescriptor_1};
	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_3 = { "bmAttributes",offsetof(struct IOUSBDFUDescriptor,bmAttributes),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDFUDescriptor_2};
	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_4 = { "bDescriptorType",offsetof(struct IOUSBDFUDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDFUDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBDFUDescriptor_5 = { "bLength",offsetof(struct IOUSBDFUDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDFUDescriptor_4};
	VPL_ExtStructure _VPXStruct_IOUSBDFUDescriptor_S = {"IOUSBDFUDescriptor",&_VPXStruct_IOUSBDFUDescriptor_5,sizeof(struct IOUSBDFUDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_1 = { "bReserved",offsetof(struct IOUSBDeviceQualifierDescriptor,bReserved),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_2 = { "bNumConfigurations",offsetof(struct IOUSBDeviceQualifierDescriptor,bNumConfigurations),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_1};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_3 = { "bMaxPacketSize0",offsetof(struct IOUSBDeviceQualifierDescriptor,bMaxPacketSize0),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_2};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_4 = { "bDeviceProtocol",offsetof(struct IOUSBDeviceQualifierDescriptor,bDeviceProtocol),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_5 = { "bDeviceSubClass",offsetof(struct IOUSBDeviceQualifierDescriptor,bDeviceSubClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_6 = { "bDeviceClass",offsetof(struct IOUSBDeviceQualifierDescriptor,bDeviceClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_7 = { "bcdUSB",offsetof(struct IOUSBDeviceQualifierDescriptor,bcdUSB),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceQualifierDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_8 = { "bDescriptorType",offsetof(struct IOUSBDeviceQualifierDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceQualifierDescriptor_9 = { "bLength",offsetof(struct IOUSBDeviceQualifierDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceQualifierDescriptor_8};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceQualifierDescriptor_S = {"IOUSBDeviceQualifierDescriptor",&_VPXStruct_IOUSBDeviceQualifierDescriptor_9,sizeof(struct IOUSBDeviceQualifierDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBHIDReportDesc_1 = { "hidDescriptorLengthHi",offsetof(struct IOUSBHIDReportDesc,hidDescriptorLengthHi),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBHIDReportDesc_2 = { "hidDescriptorLengthLo",offsetof(struct IOUSBHIDReportDesc,hidDescriptorLengthLo),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDReportDesc_1};
	VPL_ExtField _VPXStruct_IOUSBHIDReportDesc_3 = { "hidDescriptorType",offsetof(struct IOUSBHIDReportDesc,hidDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDReportDesc_2};
	VPL_ExtStructure _VPXStruct_IOUSBHIDReportDesc_S = {"IOUSBHIDReportDesc",&_VPXStruct_IOUSBHIDReportDesc_3,sizeof(struct IOUSBHIDReportDesc)};

	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_1 = { "hidDescriptorLengthHi",offsetof(struct IOUSBHIDDescriptor,hidDescriptorLengthHi),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_2 = { "hidDescriptorLengthLo",offsetof(struct IOUSBHIDDescriptor,hidDescriptorLengthLo),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_1};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_3 = { "hidDescriptorType",offsetof(struct IOUSBHIDDescriptor,hidDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_2};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_4 = { "hidNumDescriptors",offsetof(struct IOUSBHIDDescriptor,hidNumDescriptors),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_5 = { "hidCountryCode",offsetof(struct IOUSBHIDDescriptor,hidCountryCode),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_6 = { "descVersNum",offsetof(struct IOUSBHIDDescriptor,descVersNum),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBHIDDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_7 = { "descType",offsetof(struct IOUSBHIDDescriptor,descType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBHIDDescriptor_8 = { "descLen",offsetof(struct IOUSBHIDDescriptor,descLen),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBHIDDescriptor_7};
	VPL_ExtStructure _VPXStruct_IOUSBHIDDescriptor_S = {"IOUSBHIDDescriptor",&_VPXStruct_IOUSBHIDDescriptor_8,sizeof(struct IOUSBHIDDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_1 = { "bInterval",offsetof(struct IOUSBEndpointDescriptor,bInterval),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_2 = { "wMaxPacketSize",offsetof(struct IOUSBEndpointDescriptor,wMaxPacketSize),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBEndpointDescriptor_1};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_3 = { "bmAttributes",offsetof(struct IOUSBEndpointDescriptor,bmAttributes),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBEndpointDescriptor_2};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_4 = { "bEndpointAddress",offsetof(struct IOUSBEndpointDescriptor,bEndpointAddress),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBEndpointDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_5 = { "bDescriptorType",offsetof(struct IOUSBEndpointDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBEndpointDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBEndpointDescriptor_6 = { "bLength",offsetof(struct IOUSBEndpointDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBEndpointDescriptor_5};
	VPL_ExtStructure _VPXStruct_IOUSBEndpointDescriptor_S = {"IOUSBEndpointDescriptor",&_VPXStruct_IOUSBEndpointDescriptor_6,sizeof(struct IOUSBEndpointDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_1 = { "iInterface",offsetof(struct IOUSBInterfaceDescriptor,iInterface),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_2 = { "bInterfaceProtocol",offsetof(struct IOUSBInterfaceDescriptor,bInterfaceProtocol),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_1};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_3 = { "bInterfaceSubClass",offsetof(struct IOUSBInterfaceDescriptor,bInterfaceSubClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_2};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_4 = { "bInterfaceClass",offsetof(struct IOUSBInterfaceDescriptor,bInterfaceClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_5 = { "bNumEndpoints",offsetof(struct IOUSBInterfaceDescriptor,bNumEndpoints),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_6 = { "bAlternateSetting",offsetof(struct IOUSBInterfaceDescriptor,bAlternateSetting),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_7 = { "bInterfaceNumber",offsetof(struct IOUSBInterfaceDescriptor,bInterfaceNumber),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_8 = { "bDescriptorType",offsetof(struct IOUSBInterfaceDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBInterfaceDescriptor_9 = { "bLength",offsetof(struct IOUSBInterfaceDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBInterfaceDescriptor_8};
	VPL_ExtStructure _VPXStruct_IOUSBInterfaceDescriptor_S = {"IOUSBInterfaceDescriptor",&_VPXStruct_IOUSBInterfaceDescriptor_9,sizeof(struct IOUSBInterfaceDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBConfigurationDescHeader_1 = { "wTotalLength",offsetof(struct IOUSBConfigurationDescHeader,wTotalLength),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescHeader_2 = { "bDescriptorType",offsetof(struct IOUSBConfigurationDescHeader,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescHeader_1};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescHeader_3 = { "bLength",offsetof(struct IOUSBConfigurationDescHeader,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescHeader_2};
	VPL_ExtStructure _VPXStruct_IOUSBConfigurationDescHeader_S = {"IOUSBConfigurationDescHeader",&_VPXStruct_IOUSBConfigurationDescHeader_3,sizeof(struct IOUSBConfigurationDescHeader)};

	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_1 = { "MaxPower",offsetof(struct IOUSBConfigurationDescriptor,MaxPower),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_2 = { "bmAttributes",offsetof(struct IOUSBConfigurationDescriptor,bmAttributes),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_1};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_3 = { "iConfiguration",offsetof(struct IOUSBConfigurationDescriptor,iConfiguration),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_2};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_4 = { "bConfigurationValue",offsetof(struct IOUSBConfigurationDescriptor,bConfigurationValue),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_5 = { "bNumInterfaces",offsetof(struct IOUSBConfigurationDescriptor,bNumInterfaces),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_6 = { "wTotalLength",offsetof(struct IOUSBConfigurationDescriptor,wTotalLength),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBConfigurationDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_7 = { "bDescriptorType",offsetof(struct IOUSBConfigurationDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBConfigurationDescriptor_8 = { "bLength",offsetof(struct IOUSBConfigurationDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBConfigurationDescriptor_7};
	VPL_ExtStructure _VPXStruct_IOUSBConfigurationDescriptor_S = {"IOUSBConfigurationDescriptor",&_VPXStruct_IOUSBConfigurationDescriptor_8,sizeof(struct IOUSBConfigurationDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBDescriptorHeader_1 = { "bDescriptorType",offsetof(struct IOUSBDescriptorHeader,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBDescriptorHeader_2 = { "bLength",offsetof(struct IOUSBDescriptorHeader,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDescriptorHeader_1};
	VPL_ExtStructure _VPXStruct_IOUSBDescriptorHeader_S = {"IOUSBDescriptorHeader",&_VPXStruct_IOUSBDescriptorHeader_2,sizeof(struct IOUSBDescriptorHeader)};

	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_1 = { "bNumConfigurations",offsetof(struct IOUSBDeviceDescriptor,bNumConfigurations),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_2 = { "iSerialNumber",offsetof(struct IOUSBDeviceDescriptor,iSerialNumber),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_1};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_3 = { "iProduct",offsetof(struct IOUSBDeviceDescriptor,iProduct),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_2};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_4 = { "iManufacturer",offsetof(struct IOUSBDeviceDescriptor,iManufacturer),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_3};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_5 = { "bcdDevice",offsetof(struct IOUSBDeviceDescriptor,bcdDevice),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceDescriptor_4};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_6 = { "idProduct",offsetof(struct IOUSBDeviceDescriptor,idProduct),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceDescriptor_5};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_7 = { "idVendor",offsetof(struct IOUSBDeviceDescriptor,idVendor),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceDescriptor_6};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_8 = { "bMaxPacketSize0",offsetof(struct IOUSBDeviceDescriptor,bMaxPacketSize0),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_7};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_9 = { "bDeviceProtocol",offsetof(struct IOUSBDeviceDescriptor,bDeviceProtocol),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_8};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_10 = { "bDeviceSubClass",offsetof(struct IOUSBDeviceDescriptor,bDeviceSubClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_9};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_11 = { "bDeviceClass",offsetof(struct IOUSBDeviceDescriptor,bDeviceClass),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_10};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_12 = { "bcdUSB",offsetof(struct IOUSBDeviceDescriptor,bcdUSB),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBDeviceDescriptor_11};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_13 = { "bDescriptorType",offsetof(struct IOUSBDeviceDescriptor,bDescriptorType),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_12};
	VPL_ExtField _VPXStruct_IOUSBDeviceDescriptor_14 = { "bLength",offsetof(struct IOUSBDeviceDescriptor,bLength),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_IOUSBDeviceDescriptor_13};
	VPL_ExtStructure _VPXStruct_IOUSBDeviceDescriptor_S = {"IOUSBDeviceDescriptor",&_VPXStruct_IOUSBDeviceDescriptor_14,sizeof(struct IOUSBDeviceDescriptor)};

	VPL_ExtField _VPXStruct_IOUSBHIDData_1 = { "mouse",offsetof(union IOUSBHIDData,mouse),sizeof(struct IOUSBMouseData),kStructureType,"NULL",0,0,"IOUSBMouseData",NULL};
	VPL_ExtField _VPXStruct_IOUSBHIDData_2 = { "kbd",offsetof(union IOUSBHIDData,kbd),sizeof(struct IOUSBKeyboardData),kStructureType,"NULL",0,0,"IOUSBKeyboardData",&_VPXStruct_IOUSBHIDData_1};
	VPL_ExtStructure _VPXStruct_IOUSBHIDData_S = {"IOUSBHIDData",&_VPXStruct_IOUSBHIDData_2,sizeof(union IOUSBHIDData)};

	VPL_ExtField _VPXStruct_IOUSBKeyboardData_1 = { "usbkeycode",offsetof(struct IOUSBKeyboardData,usbkeycode),sizeof(unsigned short[32]),kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _VPXStruct_IOUSBKeyboardData_2 = { "keycount",offsetof(struct IOUSBKeyboardData,keycount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBKeyboardData_1};
	VPL_ExtStructure _VPXStruct_IOUSBKeyboardData_S = {"IOUSBKeyboardData",&_VPXStruct_IOUSBKeyboardData_2,sizeof(struct IOUSBKeyboardData)};

	VPL_ExtField _VPXStruct_IOUSBMouseData_1 = { "YDelta",offsetof(struct IOUSBMouseData,YDelta),sizeof(short),kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VPXStruct_IOUSBMouseData_2 = { "XDelta",offsetof(struct IOUSBMouseData,XDelta),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_IOUSBMouseData_1};
	VPL_ExtField _VPXStruct_IOUSBMouseData_3 = { "buttons",offsetof(struct IOUSBMouseData,buttons),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBMouseData_2};
	VPL_ExtStructure _VPXStruct_IOUSBMouseData_S = {"IOUSBMouseData",&_VPXStruct_IOUSBMouseData_3,sizeof(struct IOUSBMouseData)};

	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocCompletion_1 = { "parameter",offsetof(struct IOUSBLowLatencyIsocCompletion,parameter),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocCompletion_2 = { "action",offsetof(struct IOUSBLowLatencyIsocCompletion,action),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBLowLatencyIsocCompletion_1};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocCompletion_3 = { "target",offsetof(struct IOUSBLowLatencyIsocCompletion,target),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBLowLatencyIsocCompletion_2};
	VPL_ExtStructure _VPXStruct_IOUSBLowLatencyIsocCompletion_S = {"IOUSBLowLatencyIsocCompletion",&_VPXStruct_IOUSBLowLatencyIsocCompletion_3,sizeof(struct IOUSBLowLatencyIsocCompletion)};

	VPL_ExtField _VPXStruct_IOUSBIsocCompletion_1 = { "parameter",offsetof(struct IOUSBIsocCompletion,parameter),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBIsocCompletion_2 = { "action",offsetof(struct IOUSBIsocCompletion,action),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBIsocCompletion_1};
	VPL_ExtField _VPXStruct_IOUSBIsocCompletion_3 = { "target",offsetof(struct IOUSBIsocCompletion,target),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBIsocCompletion_2};
	VPL_ExtStructure _VPXStruct_IOUSBIsocCompletion_S = {"IOUSBIsocCompletion",&_VPXStruct_IOUSBIsocCompletion_3,sizeof(struct IOUSBIsocCompletion)};

	VPL_ExtField _VPXStruct_IOUSBCompletionWithTimeStamp_1 = { "parameter",offsetof(struct IOUSBCompletionWithTimeStamp,parameter),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBCompletionWithTimeStamp_2 = { "action",offsetof(struct IOUSBCompletionWithTimeStamp,action),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBCompletionWithTimeStamp_1};
	VPL_ExtField _VPXStruct_IOUSBCompletionWithTimeStamp_3 = { "target",offsetof(struct IOUSBCompletionWithTimeStamp,target),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBCompletionWithTimeStamp_2};
	VPL_ExtStructure _VPXStruct_IOUSBCompletionWithTimeStamp_S = {"IOUSBCompletionWithTimeStamp",&_VPXStruct_IOUSBCompletionWithTimeStamp_3,sizeof(struct IOUSBCompletionWithTimeStamp)};

	VPL_ExtField _VPXStruct_IOUSBCompletion_1 = { "parameter",offsetof(struct IOUSBCompletion,parameter),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_IOUSBCompletion_2 = { "action",offsetof(struct IOUSBCompletion,action),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBCompletion_1};
	VPL_ExtField _VPXStruct_IOUSBCompletion_3 = { "target",offsetof(struct IOUSBCompletion,target),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOUSBCompletion_2};
	VPL_ExtStructure _VPXStruct_IOUSBCompletion_S = {"IOUSBCompletion",&_VPXStruct_IOUSBCompletion_3,sizeof(struct IOUSBCompletion)};

	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocFrame_1 = { "frTimeStamp",offsetof(struct IOUSBLowLatencyIsocFrame,frTimeStamp),sizeof(struct UnsignedWide),kStructureType,"NULL",0,0,"UnsignedWide",NULL};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocFrame_2 = { "frActCount",offsetof(struct IOUSBLowLatencyIsocFrame,frActCount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBLowLatencyIsocFrame_1};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocFrame_3 = { "frReqCount",offsetof(struct IOUSBLowLatencyIsocFrame,frReqCount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBLowLatencyIsocFrame_2};
	VPL_ExtField _VPXStruct_IOUSBLowLatencyIsocFrame_4 = { "frStatus",offsetof(struct IOUSBLowLatencyIsocFrame,frStatus),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_IOUSBLowLatencyIsocFrame_3};
	VPL_ExtStructure _VPXStruct_IOUSBLowLatencyIsocFrame_S = {"IOUSBLowLatencyIsocFrame",&_VPXStruct_IOUSBLowLatencyIsocFrame_4,sizeof(struct IOUSBLowLatencyIsocFrame)};

	VPL_ExtField _VPXStruct_IOUSBIsocFrame_1 = { "frActCount",offsetof(struct IOUSBIsocFrame,frActCount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_IOUSBIsocFrame_2 = { "frReqCount",offsetof(struct IOUSBIsocFrame,frReqCount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOUSBIsocFrame_1};
	VPL_ExtField _VPXStruct_IOUSBIsocFrame_3 = { "frStatus",offsetof(struct IOUSBIsocFrame,frStatus),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_IOUSBIsocFrame_2};
	VPL_ExtStructure _VPXStruct_IOUSBIsocFrame_S = {"IOUSBIsocFrame",&_VPXStruct_IOUSBIsocFrame_3,sizeof(struct IOUSBIsocFrame)};

	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_1 = { "Stop",offsetof(struct IOCFPlugInInterfaceStruct,Stop),sizeof(void *),kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_2 = { "Start",offsetof(struct IOCFPlugInInterfaceStruct,Start),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOCFPlugInInterfaceStruct_1};
	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_3 = { "Probe",offsetof(struct IOCFPlugInInterfaceStruct,Probe),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_IOCFPlugInInterfaceStruct_2};
	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_4 = { "revision",offsetof(struct IOCFPlugInInterfaceStruct,revision),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOCFPlugInInterfaceStruct_3};
	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_5 = { "version",offsetof(struct IOCFPlugInInterfaceStruct,version),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_IOCFPlugInInterfaceStruct_4};
	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_6 = { "Release",offsetof(struct IOCFPlugInInterfaceStruct,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOCFPlugInInterfaceStruct_5};
	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_7 = { "AddRef",offsetof(struct IOCFPlugInInterfaceStruct,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IOCFPlugInInterfaceStruct_6};
	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_8 = { "QueryInterface",offsetof(struct IOCFPlugInInterfaceStruct,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IOCFPlugInInterfaceStruct_7};
	VPL_ExtField _VPXStruct_IOCFPlugInInterfaceStruct_9 = { "_reserved",offsetof(struct IOCFPlugInInterfaceStruct,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IOCFPlugInInterfaceStruct_8};
	VPL_ExtStructure _VPXStruct_IOCFPlugInInterfaceStruct_S = {"IOCFPlugInInterfaceStruct",&_VPXStruct_IOCFPlugInInterfaceStruct_9,sizeof(struct IOCFPlugInInterfaceStruct)};

	VPL_ExtField _VPXStruct_IUnknownVTbl_1 = { "Release",offsetof(struct IUnknownVTbl,Release),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct_IUnknownVTbl_2 = { "AddRef",offsetof(struct IUnknownVTbl,AddRef),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",&_VPXStruct_IUnknownVTbl_1};
	VPL_ExtField _VPXStruct_IUnknownVTbl_3 = { "QueryInterface",offsetof(struct IUnknownVTbl,QueryInterface),sizeof(void *),kPointerType,"long int",1,4,"T*",&_VPXStruct_IUnknownVTbl_2};
	VPL_ExtField _VPXStruct_IUnknownVTbl_4 = { "_reserved",offsetof(struct IUnknownVTbl,_reserved),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_IUnknownVTbl_3};
	VPL_ExtStructure _VPXStruct_IUnknownVTbl_S = {"IUnknownVTbl",&_VPXStruct_IUnknownVTbl_4,sizeof(struct IUnknownVTbl)};

	VPL_ExtStructure _VPXStruct_IOObject_S = {"IOObject",NULL,0};

	VPL_ExtStructure _VPXStruct_IONotificationPort_S = {"IONotificationPort",NULL,0};

	VPL_ExtField _VPXStruct_IOAsyncCompletionContent_1 = { "args",offsetof(struct IOAsyncCompletionContent,args),sizeof(void *[1]),kPointerType,"void",1,0,NULL,NULL};
	VPL_ExtField _VPXStruct_IOAsyncCompletionContent_2 = { "result",offsetof(struct IOAsyncCompletionContent,result),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_IOAsyncCompletionContent_1};
	VPL_ExtStructure _VPXStruct_IOAsyncCompletionContent_S = {"IOAsyncCompletionContent",&_VPXStruct_IOAsyncCompletionContent_2,sizeof(struct IOAsyncCompletionContent)};

	VPL_ExtField _VPXStruct_IOServiceInterestContent_1 = { "messageArgument",offsetof(struct IOServiceInterestContent,messageArgument),sizeof(void *[1]),kPointerType,"void",1,0,NULL,NULL};
	VPL_ExtField _VPXStruct_IOServiceInterestContent_2 = { "messageType",offsetof(struct IOServiceInterestContent,messageType),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_IOServiceInterestContent_1};
	VPL_ExtStructure _VPXStruct_IOServiceInterestContent_S = {"IOServiceInterestContent",&_VPXStruct_IOServiceInterestContent_2,sizeof(struct IOServiceInterestContent)};

	VPL_ExtField _VPXStruct_OSNotificationHeader_1 = { "content",offsetof(struct OSNotificationHeader,content),sizeof(unsigned char[1]),kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct_OSNotificationHeader_2 = { "reference",offsetof(struct OSNotificationHeader,reference),sizeof(unsigned int[8]),kPointerType,"unsigned int",0,4,NULL,&_VPXStruct_OSNotificationHeader_1};
	VPL_ExtField _VPXStruct_OSNotificationHeader_3 = { "type",offsetof(struct OSNotificationHeader,type),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_OSNotificationHeader_2};
	VPL_ExtField _VPXStruct_OSNotificationHeader_4 = { "size",offsetof(struct OSNotificationHeader,size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_OSNotificationHeader_3};
	VPL_ExtStructure _VPXStruct_OSNotificationHeader_S = {"OSNotificationHeader",&_VPXStruct_OSNotificationHeader_4,sizeof(struct OSNotificationHeader)};

	VPL_ExtField _VPXStruct_IONamedValue_1 = { "name",offsetof( IONamedValue,name),sizeof(void *),kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_IONamedValue_2 = { "value",offsetof( IONamedValue,value),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_IONamedValue_1};
	VPL_ExtStructure _VPXStruct_IONamedValue_S = {"IONamedValue",&_VPXStruct_IONamedValue_2,sizeof( IONamedValue)};

	VPL_ExtField _VPXStruct_IOVirtualRange_1 = { "length",offsetof( IOVirtualRange,length),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_IOVirtualRange_2 = { "address",offsetof( IOVirtualRange,address),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_IOVirtualRange_1};
	VPL_ExtStructure _VPXStruct_IOVirtualRange_S = {"IOVirtualRange",&_VPXStruct_IOVirtualRange_2,sizeof( IOVirtualRange)};

	VPL_ExtField _VPXStruct_mach_msg_header_t_1 = { "msgh_id",offsetof( mach_msg_header_t,msgh_id),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_mach_msg_header_t_2 = { "msgh_reserved",offsetof( mach_msg_header_t,msgh_reserved),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_1};
	VPL_ExtField _VPXStruct_mach_msg_header_t_3 = { "msgh_local_port",offsetof( mach_msg_header_t,msgh_local_port),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_2};
	VPL_ExtField _VPXStruct_mach_msg_header_t_4 = { "msgh_remote_port",offsetof( mach_msg_header_t,msgh_remote_port),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_3};
	VPL_ExtField _VPXStruct_mach_msg_header_t_5 = { "msgh_size",offsetof( mach_msg_header_t,msgh_size),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_4};
	VPL_ExtField _VPXStruct_mach_msg_header_t_6 = { "msgh_bits",offsetof( mach_msg_header_t,msgh_bits),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_msg_header_t_5};
	VPL_ExtStructure _VPXStruct_mach_msg_header_t_S = {"mach_msg_header_t",&_VPXStruct_mach_msg_header_t_6,sizeof( mach_msg_header_t)};

	VPL_ExtField _VPXStruct_VersRec_1 = { "reserved",offsetof(struct VersRec,reserved),sizeof(unsigned char[256]),kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct_VersRec_2 = { "shortVersion",offsetof(struct VersRec,shortVersion),sizeof(unsigned char[256]),kPointerType,"unsigned char",0,1,NULL,&_VPXStruct_VersRec_1};
	VPL_ExtField _VPXStruct_VersRec_3 = { "countryCode",offsetof(struct VersRec,countryCode),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_VersRec_2};
	VPL_ExtField _VPXStruct_VersRec_4 = { "numericVersion",offsetof(struct VersRec,numericVersion),sizeof(struct NumVersion),kStructureType,"NULL",0,0,"NumVersion",&_VPXStruct_VersRec_3};
	VPL_ExtStructure _VPXStruct_VersRec_S = {"VersRec",&_VPXStruct_VersRec_4,sizeof(struct VersRec)};

	VPL_ExtField _VPXStruct_NumVersionVariant_1 = { "whole",offsetof(union NumVersionVariant,whole),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_NumVersionVariant_2 = { "parts",offsetof(union NumVersionVariant,parts),sizeof(struct NumVersion),kStructureType,"NULL",0,0,"NumVersion",&_VPXStruct_NumVersionVariant_1};
	VPL_ExtStructure _VPXStruct_NumVersionVariant_S = {"NumVersionVariant",&_VPXStruct_NumVersionVariant_2,sizeof(union NumVersionVariant)};

	VPL_ExtField _VPXStruct_NumVersion_1 = { "nonRelRev",offsetof(struct NumVersion,nonRelRev),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_NumVersion_2 = { "stage",offsetof(struct NumVersion,stage),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_NumVersion_1};
	VPL_ExtField _VPXStruct_NumVersion_3 = { "minorAndBugRev",offsetof(struct NumVersion,minorAndBugRev),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_NumVersion_2};
	VPL_ExtField _VPXStruct_NumVersion_4 = { "majorRev",offsetof(struct NumVersion,majorRev),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_NumVersion_3};
	VPL_ExtStructure _VPXStruct_NumVersion_S = {"NumVersion",&_VPXStruct_NumVersion_4,sizeof(struct NumVersion)};

	VPL_ExtField _VPXStruct_ProcessSerialNumber_1 = { "lowLongOfPSN",offsetof(struct ProcessSerialNumber,lowLongOfPSN),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_ProcessSerialNumber_2 = { "highLongOfPSN",offsetof(struct ProcessSerialNumber,highLongOfPSN),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_ProcessSerialNumber_1};
	VPL_ExtStructure _VPXStruct_ProcessSerialNumber_S = {"ProcessSerialNumber",&_VPXStruct_ProcessSerialNumber_2,sizeof(struct ProcessSerialNumber)};

	VPL_ExtField _VPXStruct_Float32Point_1 = { "y",offsetof(struct Float32Point,y),sizeof(float),kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField _VPXStruct_Float32Point_2 = { "x",offsetof(struct Float32Point,x),sizeof(float),kFloatType,"NULL",0,0,"float",&_VPXStruct_Float32Point_1};
	VPL_ExtStructure _VPXStruct_Float32Point_S = {"Float32Point",&_VPXStruct_Float32Point_2,sizeof(struct Float32Point)};

	VPL_ExtField _VPXStruct_Float96_1 = { "man",offsetof(struct Float96,man),sizeof(unsigned short[4]),kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _VPXStruct_Float96_2 = { "exp",offsetof(struct Float96,exp),sizeof(short[2]),kPointerType,"short",0,2,NULL,&_VPXStruct_Float96_1};
	VPL_ExtStructure _VPXStruct_Float96_S = {"Float96",&_VPXStruct_Float96_2,sizeof(struct Float96)};

	VPL_ExtField _VPXStruct_Float80_1 = { "man",offsetof(struct Float80,man),sizeof(unsigned short[4]),kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _VPXStruct_Float80_2 = { "exp",offsetof(struct Float80,exp),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_Float80_1};
	VPL_ExtStructure _VPXStruct_Float80_S = {"Float80",&_VPXStruct_Float80_2,sizeof(struct Float80)};

	VPL_ExtField _VPXStruct_UnsignedWide_1 = { "lo",offsetof(struct UnsignedWide,lo),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_UnsignedWide_2 = { "hi",offsetof(struct UnsignedWide,hi),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_UnsignedWide_1};
	VPL_ExtStructure _VPXStruct_UnsignedWide_S = {"UnsignedWide",&_VPXStruct_UnsignedWide_2,sizeof(struct UnsignedWide)};

	VPL_ExtField _VPXStruct_wide_1 = { "lo",offsetof(struct wide,lo),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_wide_2 = { "hi",offsetof(struct wide,hi),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_wide_1};
	VPL_ExtStructure _VPXStruct_wide_S = {"wide",&_VPXStruct_wide_2,sizeof(struct wide)};

	VPL_ExtField _VPXStruct_CFRange_1 = { "length",offsetof( CFRange,length),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_CFRange_2 = { "location",offsetof( CFRange,location),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_CFRange_1};
	VPL_ExtStructure _VPXStruct_CFRange_S = {"CFRange",&_VPXStruct_CFRange_2,sizeof( CFRange)};

	VPL_ExtField _VPXStruct_CFUUIDBytes_1 = { "byte15",offsetof( CFUUIDBytes,byte15),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_CFUUIDBytes_2 = { "byte14",offsetof( CFUUIDBytes,byte14),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_1};
	VPL_ExtField _VPXStruct_CFUUIDBytes_3 = { "byte13",offsetof( CFUUIDBytes,byte13),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_2};
	VPL_ExtField _VPXStruct_CFUUIDBytes_4 = { "byte12",offsetof( CFUUIDBytes,byte12),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_3};
	VPL_ExtField _VPXStruct_CFUUIDBytes_5 = { "byte11",offsetof( CFUUIDBytes,byte11),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_4};
	VPL_ExtField _VPXStruct_CFUUIDBytes_6 = { "byte10",offsetof( CFUUIDBytes,byte10),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_5};
	VPL_ExtField _VPXStruct_CFUUIDBytes_7 = { "byte9",offsetof( CFUUIDBytes,byte9),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_6};
	VPL_ExtField _VPXStruct_CFUUIDBytes_8 = { "byte8",offsetof( CFUUIDBytes,byte8),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_7};
	VPL_ExtField _VPXStruct_CFUUIDBytes_9 = { "byte7",offsetof( CFUUIDBytes,byte7),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_8};
	VPL_ExtField _VPXStruct_CFUUIDBytes_10 = { "byte6",offsetof( CFUUIDBytes,byte6),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_9};
	VPL_ExtField _VPXStruct_CFUUIDBytes_11 = { "byte5",offsetof( CFUUIDBytes,byte5),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_10};
	VPL_ExtField _VPXStruct_CFUUIDBytes_12 = { "byte4",offsetof( CFUUIDBytes,byte4),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_11};
	VPL_ExtField _VPXStruct_CFUUIDBytes_13 = { "byte3",offsetof( CFUUIDBytes,byte3),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_12};
	VPL_ExtField _VPXStruct_CFUUIDBytes_14 = { "byte2",offsetof( CFUUIDBytes,byte2),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_13};
	VPL_ExtField _VPXStruct_CFUUIDBytes_15 = { "byte1",offsetof( CFUUIDBytes,byte1),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_14};
	VPL_ExtField _VPXStruct_CFUUIDBytes_16 = { "byte0",offsetof( CFUUIDBytes,byte0),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_CFUUIDBytes_15};
	VPL_ExtStructure _VPXStruct_CFUUIDBytes_S = {"CFUUIDBytes",&_VPXStruct_CFUUIDBytes_16,sizeof( CFUUIDBytes)};

	VPL_ExtStructure _VPXStruct___CFUUID_S = {"__CFUUID",NULL,0};

	VPL_ExtStructure _VPXStruct___CFPlugInInstance_S = {"__CFPlugInInstance",NULL,0};

	VPL_ExtStructure _VPXStruct___CFBundle_S = {"__CFBundle",NULL,0};

	VPL_ExtStructure _VPXStruct___CFURL_S = {"__CFURL",NULL,0};

	VPL_ExtStructure _VPXStruct___CFNull_S = {"__CFNull",NULL,0};

	VPL_ExtStructure _VPXStruct___CFString_S = {"__CFString",NULL,0};

	VPL_ExtStructure _VPXStruct___CFDate_S = {"__CFDate",NULL,0};

	VPL_ExtStructure _VPXStruct___CFArray_S = {"__CFArray",NULL,0};

	VPL_ExtStructure _VPXStruct___CFAllocator_S = {"__CFAllocator",NULL,0};

	VPL_ExtStructure _VPXStruct___CFDictionary_S = {"__CFDictionary",NULL,0};

	VPL_ExtStructure _VPXStruct___CFRunLoopTimer_S = {"__CFRunLoopTimer",NULL,0};

	VPL_ExtStructure _VPXStruct___CFRunLoopObserver_S = {"__CFRunLoopObserver",NULL,0};

	VPL_ExtStructure _VPXStruct___CFRunLoopSource_S = {"__CFRunLoopSource",NULL,0};

	VPL_ExtStructure _VPXStruct___CFRunLoop_S = {"__CFRunLoop",NULL,0};

	VPL_ExtField _VPXStruct_mach_timespec_1 = { "tv_nsec",offsetof(struct mach_timespec,tv_nsec),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_mach_timespec_2 = { "tv_sec",offsetof(struct mach_timespec,tv_sec),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_timespec_1};
	VPL_ExtStructure _VPXStruct_mach_timespec_S = {"mach_timespec",&_VPXStruct_mach_timespec_2,sizeof(struct mach_timespec)};



VPL_DictionaryNode VPX_MacOSX_IOKit_Structures[] =	{
	{"IOFBMessageCallbacks",&_VPXStruct_IOFBMessageCallbacks_S},
	{"IOGraphicsAcceleratorInterfaceStruct",&_VPXStruct_IOGraphicsAcceleratorInterfaceStruct_S},
	{"IOBlitSurfaceStruct",&_VPXStruct_IOBlitSurfaceStruct_S},
	{"_IOBlitMemory",&_VPXStruct__IOBlitMemory_S},
	{"IOBlitCursorStruct",&_VPXStruct_IOBlitCursorStruct_S},
	{"IOBlitScanlinesStruct",&_VPXStruct_IOBlitScanlinesStruct_S},
	{"IOBlitVerticesStruct",&_VPXStruct_IOBlitVerticesStruct_S},
	{"IOBlitVertexStruct",&_VPXStruct_IOBlitVertexStruct_S},
	{"IOBlitCopyRegionStruct",&_VPXStruct_IOBlitCopyRegionStruct_S},
	{"IOBlitCopyRectanglesStruct",&_VPXStruct_IOBlitCopyRectanglesStruct_S},
	{"IOBlitCopyRectangleStruct",&_VPXStruct_IOBlitCopyRectangleStruct_S},
	{"IOBlitRectanglesStruct",&_VPXStruct_IOBlitRectanglesStruct_S},
	{"IOBlitRectangleStruct",&_VPXStruct_IOBlitRectangleStruct_S},
	{"IOBlitOperationStruct",&_VPXStruct_IOBlitOperationStruct_S},
	{"IOAccelDeviceRegion",&_VPXStruct_IOAccelDeviceRegion_S},
	{"IOAccelSurfaceScaling",&_VPXStruct_IOAccelSurfaceScaling_S},
	{"IOAccelSurfaceReadData",&_VPXStruct_IOAccelSurfaceReadData_S},
	{"IOAccelSurfaceInformation",&_VPXStruct_IOAccelSurfaceInformation_S},
	{"IOAccelSize",&_VPXStruct_IOAccelSize_S},
	{"IOAccelBounds",&_VPXStruct_IOAccelBounds_S},
	{"StdFBShmem_t",&_VPXStruct_StdFBShmem_t_S},
	{"bm38Cursor",&_VPXStruct_bm38Cursor_S},
	{"bm34Cursor",&_VPXStruct_bm34Cursor_S},
	{"bm18Cursor",&_VPXStruct_bm18Cursor_S},
	{"bm12Cursor",&_VPXStruct_bm12Cursor_S},
	{"NXEventSystemDeviceList",&_VPXStruct_NXEventSystemDeviceList_S},
	{"NXEventSystemDevice",&_VPXStruct_NXEventSystemDevice_S},
	{"evsioMouseScaling",&_VPXStruct_evsioMouseScaling_S},
	{"evsioKeymapping",&_VPXStruct_evsioKeymapping_S},
	{"IOHardwareCursorDescriptor",&_VPXStruct_IOHardwareCursorDescriptor_S},
	{"IOGBounds",&_VPXStruct_IOGBounds_S},
	{"IOGSize",&_VPXStruct_IOGSize_S},
	{"IOGPoint",&_VPXStruct_IOGPoint_S},
	{"IODisplayScalerInformation",&_VPXStruct_IODisplayScalerInformation_S},
	{"IODisplayTimingRange",&_VPXStruct_IODisplayTimingRange_S},
	{"IOFBDisplayModeDescription",&_VPXStruct_IOFBDisplayModeDescription_S},
	{"IOTimingInformation",&_VPXStruct_IOTimingInformation_S},
	{"IODetailedTimingInformationV2",&_VPXStruct_IODetailedTimingInformationV2_S},
	{"IODetailedTimingInformationV1",&_VPXStruct_IODetailedTimingInformationV1_S},
	{"IOColorEntry",&_VPXStruct_IOColorEntry_S},
	{"IOFramebufferInformation",&_VPXStruct_IOFramebufferInformation_S},
	{"IODisplayModeInformation",&_VPXStruct_IODisplayModeInformation_S},
	{"IOPixelInformation",&_VPXStruct_IOPixelInformation_S},
	{"IOUSBInterfaceStruct245",&_VPXStruct_IOUSBInterfaceStruct245_S},
	{"IOUSBInterfaceStruct220",&_VPXStruct_IOUSBInterfaceStruct220_S},
	{"IOUSBInterfaceStruct197",&_VPXStruct_IOUSBInterfaceStruct197_S},
	{"IOUSBInterfaceStruct192",&_VPXStruct_IOUSBInterfaceStruct192_S},
	{"IOUSBInterfaceStruct190",&_VPXStruct_IOUSBInterfaceStruct190_S},
	{"IOUSBInterfaceStruct183",&_VPXStruct_IOUSBInterfaceStruct183_S},
	{"IOUSBInterfaceStruct182",&_VPXStruct_IOUSBInterfaceStruct182_S},
	{"IOUSBInterfaceStruct",&_VPXStruct_IOUSBInterfaceStruct_S},
	{"IOUSBDeviceStruct245",&_VPXStruct_IOUSBDeviceStruct245_S},
	{"IOUSBDeviceStruct197",&_VPXStruct_IOUSBDeviceStruct197_S},
	{"IOUSBDeviceStruct187",&_VPXStruct_IOUSBDeviceStruct187_S},
	{"IOUSBDeviceStruct182",&_VPXStruct_IOUSBDeviceStruct182_S},
	{"IOUSBDeviceStruct",&_VPXStruct_IOUSBDeviceStruct_S},
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
	{"IOUSBHIDData",&_VPXStruct_IOUSBHIDData_S},
	{"IOUSBKeyboardData",&_VPXStruct_IOUSBKeyboardData_S},
	{"IOUSBMouseData",&_VPXStruct_IOUSBMouseData_S},
	{"IOUSBLowLatencyIsocCompletion",&_VPXStruct_IOUSBLowLatencyIsocCompletion_S},
	{"IOUSBIsocCompletion",&_VPXStruct_IOUSBIsocCompletion_S},
	{"IOUSBCompletionWithTimeStamp",&_VPXStruct_IOUSBCompletionWithTimeStamp_S},
	{"IOUSBCompletion",&_VPXStruct_IOUSBCompletion_S},
	{"IOUSBLowLatencyIsocFrame",&_VPXStruct_IOUSBLowLatencyIsocFrame_S},
	{"IOUSBIsocFrame",&_VPXStruct_IOUSBIsocFrame_S},
	{"IOCFPlugInInterfaceStruct",&_VPXStruct_IOCFPlugInInterfaceStruct_S},
	{"IUnknownVTbl",&_VPXStruct_IUnknownVTbl_S},
	{"IOObject",&_VPXStruct_IOObject_S},
	{"IONotificationPort",&_VPXStruct_IONotificationPort_S},
	{"IOAsyncCompletionContent",&_VPXStruct_IOAsyncCompletionContent_S},
	{"IOServiceInterestContent",&_VPXStruct_IOServiceInterestContent_S},
	{"OSNotificationHeader",&_VPXStruct_OSNotificationHeader_S},
	{"IONamedValue",&_VPXStruct_IONamedValue_S},
	{"IOVirtualRange",&_VPXStruct_IOVirtualRange_S},
	{"mach_msg_header_t",&_VPXStruct_mach_msg_header_t_S},
	{"VersRec",&_VPXStruct_VersRec_S},
	{"NumVersionVariant",&_VPXStruct_NumVersionVariant_S},
	{"NumVersion",&_VPXStruct_NumVersion_S},
	{"ProcessSerialNumber",&_VPXStruct_ProcessSerialNumber_S},
	{"Float32Point",&_VPXStruct_Float32Point_S},
	{"Float96",&_VPXStruct_Float96_S},
	{"Float80",&_VPXStruct_Float80_S},
	{"UnsignedWide",&_VPXStruct_UnsignedWide_S},
	{"wide",&_VPXStruct_wide_S},
	{"CFRange",&_VPXStruct_CFRange_S},
	{"CFUUIDBytes",&_VPXStruct_CFUUIDBytes_S},
	{"__CFUUID",&_VPXStruct___CFUUID_S},
	{"__CFPlugInInstance",&_VPXStruct___CFPlugInInstance_S},
	{"__CFBundle",&_VPXStruct___CFBundle_S},
	{"__CFURL",&_VPXStruct___CFURL_S},
	{"__CFNull",&_VPXStruct___CFNull_S},
	{"__CFString",&_VPXStruct___CFString_S},
	{"__CFDate",&_VPXStruct___CFDate_S},
	{"__CFArray",&_VPXStruct___CFArray_S},
	{"__CFAllocator",&_VPXStruct___CFAllocator_S},
	{"__CFDictionary",&_VPXStruct___CFDictionary_S},
	{"__CFRunLoopTimer",&_VPXStruct___CFRunLoopTimer_S},
	{"__CFRunLoopObserver",&_VPXStruct___CFRunLoopObserver_S},
	{"__CFRunLoopSource",&_VPXStruct___CFRunLoopSource_S},
	{"__CFRunLoop",&_VPXStruct___CFRunLoop_S},
	{"mach_timespec",&_VPXStruct_mach_timespec_S},
};

Nat4	VPX_MacOSX_IOKit_Structures_Number = 125;

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
