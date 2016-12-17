/*
	
	MacOSX_Constants.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

	VPL_ExtConstant _kUSBGangOverCurrentNotificationType_C = {"kUSBGangOverCurrentNotificationType",3,NULL};
	VPL_ExtConstant _kUSBIndividualOverCurrentNotificationType_C = {"kUSBIndividualOverCurrentNotificationType",2,NULL};
	VPL_ExtConstant _kUSBNotEnoughPowerNotificationType_C = {"kUSBNotEnoughPowerNotificationType",1,NULL};
	VPL_ExtConstant _kUSBNoUserNotificationType_C = {"kUSBNoUserNotificationType",0,NULL};
	VPL_ExtConstant _kUSBLowLatencyFrameListBuffer_C = {"kUSBLowLatencyFrameListBuffer",2,NULL};
	VPL_ExtConstant _kUSBLowLatencyReadBuffer_C = {"kUSBLowLatencyReadBuffer",1,NULL};
	VPL_ExtConstant _kUSBLowLatencyWriteBuffer_C = {"kUSBLowLatencyWriteBuffer",0,NULL};
	VPL_ExtConstant _kUSBLowLatencyIsochTransferKey_C = {"kUSBLowLatencyIsochTransferKey",1819044212,NULL};
	VPL_ExtConstant _kUSBHighSpeedMicrosecondsInFrame_C = {"kUSBHighSpeedMicrosecondsInFrame",125,NULL};
	VPL_ExtConstant _kUSBFullSpeedMicrosecondsInFrame_C = {"kUSBFullSpeedMicrosecondsInFrame",1000,NULL};
	VPL_ExtConstant _kUSBDeviceSpeedHigh_C = {"kUSBDeviceSpeedHigh",2,NULL};
	VPL_ExtConstant _kUSBDeviceSpeedFull_C = {"kUSBDeviceSpeedFull",1,NULL};
	VPL_ExtConstant _kUSBDeviceSpeedLow_C = {"kUSBDeviceSpeedLow",0,NULL};
	VPL_ExtConstant _kIOUSBVendorIDAppleComputer_C = {"kIOUSBVendorIDAppleComputer",1452,NULL};
	VPL_ExtConstant _kIOUSBFindInterfaceDontCare_C = {"kIOUSBFindInterfaceDontCare",65535,NULL};
	VPL_ExtConstant _kUSBDefaultControlCompletionTimeoutMS_C = {"kUSBDefaultControlCompletionTimeoutMS",0,NULL};
	VPL_ExtConstant _kUSBDefaultControlNoDataTimeoutMS_C = {"kUSBDefaultControlNoDataTimeoutMS",5000,NULL};
	VPL_ExtConstant _kIOUSBAnyProduct_C = {"kIOUSBAnyProduct",65535,NULL};
	VPL_ExtConstant _kIOUSBAnyVendor_C = {"kIOUSBAnyVendor",65535,NULL};
	VPL_ExtConstant _kIOUSBAnyProtocol_C = {"kIOUSBAnyProtocol",65535,NULL};
	VPL_ExtConstant _kIOUSBAnySubClass_C = {"kIOUSBAnySubClass",65535,NULL};
	VPL_ExtConstant _kIOUSBAnyClass_C = {"kIOUSBAnyClass",65535,NULL};
	VPL_ExtConstant _kSyncFrame_C = {"kSyncFrame",3202,NULL};
	VPL_ExtConstant _kSetInterface_C = {"kSetInterface",2817,NULL};
	VPL_ExtConstant _kSetEndpointFeature_C = {"kSetEndpointFeature",770,NULL};
	VPL_ExtConstant _kSetInterfaceFeature_C = {"kSetInterfaceFeature",769,NULL};
	VPL_ExtConstant _kSetDeviceFeature_C = {"kSetDeviceFeature",768,NULL};
	VPL_ExtConstant _kSetDescriptor_C = {"kSetDescriptor",1792,NULL};
	VPL_ExtConstant _kSetConfiguration_C = {"kSetConfiguration",2304,NULL};
	VPL_ExtConstant _kSetAddress_C = {"kSetAddress",1280,NULL};
	VPL_ExtConstant _kGetEndpointStatus_C = {"kGetEndpointStatus",130,NULL};
	VPL_ExtConstant _kGetInterfaceStatus_C = {"kGetInterfaceStatus",129,NULL};
	VPL_ExtConstant _kGetDeviceStatus_C = {"kGetDeviceStatus",128,NULL};
	VPL_ExtConstant _kGetInterface_C = {"kGetInterface",2689,NULL};
	VPL_ExtConstant _kGetDescriptor_C = {"kGetDescriptor",1664,NULL};
	VPL_ExtConstant _kGetConfiguration_C = {"kGetConfiguration",2176,NULL};
	VPL_ExtConstant _kClearEndpointFeature_C = {"kClearEndpointFeature",258,NULL};
	VPL_ExtConstant _kClearInterfaceFeature_C = {"kClearInterfaceFeature",257,NULL};
	VPL_ExtConstant _kClearDeviceFeature_C = {"kClearDeviceFeature",256,NULL};
	VPL_ExtConstant _kUSBMaxIsocFrameReqCount_C = {"kUSBMaxIsocFrameReqCount",1023,NULL};
	VPL_ExtConstant _kUSBRqRecipientMask_C = {"kUSBRqRecipientMask",31,NULL};
	VPL_ExtConstant _kUSBRqTypeMask_C = {"kUSBRqTypeMask",3,NULL};
	VPL_ExtConstant _kUSBRqTypeShift_C = {"kUSBRqTypeShift",5,NULL};
	VPL_ExtConstant _kUSBRqDirnMask_C = {"kUSBRqDirnMask",1,NULL};
	VPL_ExtConstant _kUSBRqDirnShift_C = {"kUSBRqDirnShift",7,NULL};
	VPL_ExtConstant _kUSBNoPipeIdx_C = {"kUSBNoPipeIdx",4294967295,NULL};
	VPL_ExtConstant _kUSBDeviceMask_C = {"kUSBDeviceMask",127,NULL};
	VPL_ExtConstant _kUSBEndPtShift_C = {"kUSBEndPtShift",7,NULL};
	VPL_ExtConstant _kUSBInterfaceIDMask_C = {"kUSBInterfaceIDMask",255,NULL};
	VPL_ExtConstant _kUSBMaxInterfaces_C = {"kUSBMaxInterfaces",256,NULL};
	VPL_ExtConstant _kUSBInterfaceIDShift_C = {"kUSBInterfaceIDShift",8,NULL};
	VPL_ExtConstant _kUSBMaxPipes_C = {"kUSBMaxPipes",32,NULL};
	VPL_ExtConstant _kUSBPipeIDMask_C = {"kUSBPipeIDMask",15,NULL};
	VPL_ExtConstant _kUSBDeviceIDMask_C = {"kUSBDeviceIDMask",127,NULL};
	VPL_ExtConstant _kUSBMaxDevice_C = {"kUSBMaxDevice",127,NULL};
	VPL_ExtConstant _kUSBMaxDevices_C = {"kUSBMaxDevices",128,NULL};
	VPL_ExtConstant _kUSBDeviceIDShift_C = {"kUSBDeviceIDShift",7,NULL};
	VPL_ExtConstant _kUSBDFUManifestationTolerantBit_C = {"kUSBDFUManifestationTolerantBit",2,NULL};
	VPL_ExtConstant _kUSBDFUCanUploadBit_C = {"kUSBDFUCanUploadBit",1,NULL};
	VPL_ExtConstant _kUSBDFUCanDownloadBit_C = {"kUSBDFUCanDownloadBit",0,NULL};
	VPL_ExtConstant _kUSBDFUAttributesMask_C = {"kUSBDFUAttributesMask",7,NULL};
	VPL_ExtConstant _kUSBATMNetworkingSubClass_C = {"kUSBATMNetworkingSubClass",7,NULL};
	VPL_ExtConstant _kUSBCommEthernetNetworkingSubClass_C = {"kUSBCommEthernetNetworkingSubClass",6,NULL};
	VPL_ExtConstant _kUSBCommCAPISubClass_C = {"kUSBCommCAPISubClass",5,NULL};
	VPL_ExtConstant _kUSBCommMultiChannelSubClass_C = {"kUSBCommMultiChannelSubClass",4,NULL};
	VPL_ExtConstant _kUSBCommTelephoneSubClass_C = {"kUSBCommTelephoneSubClass",3,NULL};
	VPL_ExtConstant _kUSBCommAbstractSubClass_C = {"kUSBCommAbstractSubClass",2,NULL};
	VPL_ExtConstant _kUSBCommDirectLineSubClass_C = {"kUSBCommDirectLineSubClass",1,NULL};
	VPL_ExtConstant _kUSBHIDBootInterfaceSubClass_C = {"kUSBHIDBootInterfaceSubClass",1,NULL};
	VPL_ExtConstant _kUSBMassStorageSCSISubClass_C = {"kUSBMassStorageSCSISubClass",6,NULL};
	VPL_ExtConstant _kUSBMassStorageSFF8070iSubClass_C = {"kUSBMassStorageSFF8070iSubClass",5,NULL};
	VPL_ExtConstant _kUSBMassStorageUFISubClass_C = {"kUSBMassStorageUFISubClass",4,NULL};
	VPL_ExtConstant _kUSBMassStorageQIC157SubClass_C = {"kUSBMassStorageQIC157SubClass",3,NULL};
	VPL_ExtConstant _kUSBMassStorageATAPISubClass_C = {"kUSBMassStorageATAPISubClass",2,NULL};
	VPL_ExtConstant _kUSBMassStorageRBCSubClass_C = {"kUSBMassStorageRBCSubClass",1,NULL};
	VPL_ExtConstant _kUSBIrDABridgeSubClass_C = {"kUSBIrDABridgeSubClass",2,NULL};
	VPL_ExtConstant _kUSBDFUSubClass_C = {"kUSBDFUSubClass",1,NULL};
	VPL_ExtConstant _kUSBHubSubClass_C = {"kUSBHubSubClass",0,NULL};
	VPL_ExtConstant _kUSBCompositeSubClass_C = {"kUSBCompositeSubClass",0,NULL};
	VPL_ExtConstant _kUSBVendorSpecificClass_C = {"kUSBVendorSpecificClass",255,NULL};
	VPL_ExtConstant _kUSBApplicationSpecificClass_C = {"kUSBApplicationSpecificClass",254,NULL};
	VPL_ExtConstant _kUSBDataClass_C = {"kUSBDataClass",10,NULL};
	VPL_ExtConstant _kUSBHubClass_C = {"kUSBHubClass",9,NULL};
	VPL_ExtConstant _kUSBMassStorageClass_C = {"kUSBMassStorageClass",8,NULL};
	VPL_ExtConstant _kUSBPrintingClass_C = {"kUSBPrintingClass",7,NULL};
	VPL_ExtConstant _kUSBDisplayClass_C = {"kUSBDisplayClass",4,NULL};
	VPL_ExtConstant _kUSBHIDClass_C = {"kUSBHIDClass",3,NULL};
	VPL_ExtConstant _kUSBCommClass_C = {"kUSBCommClass",2,NULL};
	VPL_ExtConstant _kUSBAudioClass_C = {"kUSBAudioClass",1,NULL};
	VPL_ExtConstant _kUSBCompositeClass_C = {"kUSBCompositeClass",0,NULL};
	VPL_ExtConstant _kUSBScrollLockKey_C = {"kUSBScrollLockKey",71,NULL};
	VPL_ExtConstant _kUSBNumLockKey_C = {"kUSBNumLockKey",83,NULL};
	VPL_ExtConstant _kUSBCapsLockKey_C = {"kUSBCapsLockKey",57,NULL};
	VPL_ExtConstant _kUSBVendorSpecificProtocol_C = {"kUSBVendorSpecificProtocol",255,NULL};
	VPL_ExtConstant _kHIDMouseInterfaceProtocol_C = {"kHIDMouseInterfaceProtocol",2,NULL};
	VPL_ExtConstant _kHIDKeyboardInterfaceProtocol_C = {"kHIDKeyboardInterfaceProtocol",1,NULL};
	VPL_ExtConstant _kHIDNoInterfaceProtocol_C = {"kHIDNoInterfaceProtocol",0,NULL};
	VPL_ExtConstant _kHIDReportProtocolValue_C = {"kHIDReportProtocolValue",1,NULL};
	VPL_ExtConstant _kHIDBootProtocolValue_C = {"kHIDBootProtocolValue",0,NULL};
	VPL_ExtConstant _kHIDRtFeatureReport_C = {"kHIDRtFeatureReport",3,NULL};
	VPL_ExtConstant _kHIDRtOutputReport_C = {"kHIDRtOutputReport",2,NULL};
	VPL_ExtConstant _kHIDRtInputReport_C = {"kHIDRtInputReport",1,NULL};
	VPL_ExtConstant _kHIDRqSetProtocol_C = {"kHIDRqSetProtocol",11,NULL};
	VPL_ExtConstant _kHIDRqSetIdle_C = {"kHIDRqSetIdle",10,NULL};
	VPL_ExtConstant _kHIDRqSetReport_C = {"kHIDRqSetReport",9,NULL};
	VPL_ExtConstant _kHIDRqGetProtocol_C = {"kHIDRqGetProtocol",3,NULL};
	VPL_ExtConstant _kHIDRqGetIdle_C = {"kHIDRqGetIdle",2,NULL};
	VPL_ExtConstant _kHIDRqGetReport_C = {"kHIDRqGetReport",1,NULL};
	VPL_ExtConstant _kUSBRel20_C = {"kUSBRel20",512,NULL};
	VPL_ExtConstant _kUSBRel11_C = {"kUSBRel11",272,NULL};
	VPL_ExtConstant _kUSBRel10_C = {"kUSBRel10",256,NULL};
	VPL_ExtConstant _kUSBAtrRemoteWakeup_C = {"kUSBAtrRemoteWakeup",32,NULL};
	VPL_ExtConstant _kUSBAtrSelfPowered_C = {"kUSBAtrSelfPowered",64,NULL};
	VPL_ExtConstant _kUSBAtrBusPowered_C = {"kUSBAtrBusPowered",128,NULL};
	VPL_ExtConstant _kUSB100mA_C = {"kUSB100mA",50,NULL};
	VPL_ExtConstant _kUSB500mAAvailable_C = {"kUSB500mAAvailable",250,NULL};
	VPL_ExtConstant _kUSB100mAAvailable_C = {"kUSB100mAAvailable",50,NULL};
	VPL_ExtConstant _kUSBFeatureDeviceRemoteWakeup_C = {"kUSBFeatureDeviceRemoteWakeup",1,NULL};
	VPL_ExtConstant _kUSBFeatureEndpointStall_C = {"kUSBFeatureEndpointStall",0,NULL};
	VPL_ExtConstant _kUSBHUBDesc_C = {"kUSBHUBDesc",41,NULL};
	VPL_ExtConstant _kUSBPhysicalDesc_C = {"kUSBPhysicalDesc",35,NULL};
	VPL_ExtConstant _kUSBReportDesc_C = {"kUSBReportDesc",34,NULL};
	VPL_ExtConstant _kUSBHIDDesc_C = {"kUSBHIDDesc",33,NULL};
	VPL_ExtConstant _kUSBInterfaceAssociationDesc_C = {"kUSBInterfaceAssociationDesc",11,NULL};
	VPL_ExtConstant _kUSDebugDesc_C = {"kUSDebugDesc",10,NULL};
	VPL_ExtConstant _kUSBOnTheGoDesc_C = {"kUSBOnTheGoDesc",9,NULL};
	VPL_ExtConstant _kUSBInterfacePowerDesc_C = {"kUSBInterfacePowerDesc",8,NULL};
	VPL_ExtConstant _kUSBOtherSpeedConfDesc_C = {"kUSBOtherSpeedConfDesc",7,NULL};
	VPL_ExtConstant _kUSBDeviceQualifierDesc_C = {"kUSBDeviceQualifierDesc",6,NULL};
	VPL_ExtConstant _kUSBEndpointDesc_C = {"kUSBEndpointDesc",5,NULL};
	VPL_ExtConstant _kUSBInterfaceDesc_C = {"kUSBInterfaceDesc",4,NULL};
	VPL_ExtConstant _kUSBStringDesc_C = {"kUSBStringDesc",3,NULL};
	VPL_ExtConstant _kUSBConfDesc_C = {"kUSBConfDesc",2,NULL};
	VPL_ExtConstant _kUSBDeviceDesc_C = {"kUSBDeviceDesc",1,NULL};
	VPL_ExtConstant _kUSBAnyDesc_C = {"kUSBAnyDesc",0,NULL};
	VPL_ExtConstant _kUSBRqSyncFrame_C = {"kUSBRqSyncFrame",12,NULL};
	VPL_ExtConstant _kUSBRqSetInterface_C = {"kUSBRqSetInterface",11,NULL};
	VPL_ExtConstant _kUSBRqGetInterface_C = {"kUSBRqGetInterface",10,NULL};
	VPL_ExtConstant _kUSBRqSetConfig_C = {"kUSBRqSetConfig",9,NULL};
	VPL_ExtConstant _kUSBRqGetConfig_C = {"kUSBRqGetConfig",8,NULL};
	VPL_ExtConstant _kUSBRqSetDescriptor_C = {"kUSBRqSetDescriptor",7,NULL};
	VPL_ExtConstant _kUSBRqGetDescriptor_C = {"kUSBRqGetDescriptor",6,NULL};
	VPL_ExtConstant _kUSBRqSetAddress_C = {"kUSBRqSetAddress",5,NULL};
	VPL_ExtConstant _kUSBRqReserved2_C = {"kUSBRqReserved2",4,NULL};
	VPL_ExtConstant _kUSBRqSetFeature_C = {"kUSBRqSetFeature",3,NULL};
	VPL_ExtConstant _kUSBRqGetState_C = {"kUSBRqGetState",2,NULL};
	VPL_ExtConstant _kUSBRqClearFeature_C = {"kUSBRqClearFeature",1,NULL};
	VPL_ExtConstant _kUSBRqGetStatus_C = {"kUSBRqGetStatus",0,NULL};
	VPL_ExtConstant _kUSBOther_C = {"kUSBOther",3,NULL};
	VPL_ExtConstant _kUSBEndpoint_C = {"kUSBEndpoint",2,NULL};
	VPL_ExtConstant _kUSBInterface_C = {"kUSBInterface",1,NULL};
	VPL_ExtConstant _kUSBDevice_C = {"kUSBDevice",0,NULL};
	VPL_ExtConstant _kUSBVendor_C = {"kUSBVendor",2,NULL};
	VPL_ExtConstant _kUSBClass_C = {"kUSBClass",1,NULL};
	VPL_ExtConstant _kUSBStandard_C = {"kUSBStandard",0,NULL};
	VPL_ExtConstant _kUSBAnyDirn_C = {"kUSBAnyDirn",3,NULL};
	VPL_ExtConstant _kUSBNone_C = {"kUSBNone",2,NULL};
	VPL_ExtConstant _kUSBIn_C = {"kUSBIn",1,NULL};
	VPL_ExtConstant _kUSBOut_C = {"kUSBOut",0,NULL};
	VPL_ExtConstant _kUSBAnyType_C = {"kUSBAnyType",255,NULL};
	VPL_ExtConstant _kUSBInterrupt_C = {"kUSBInterrupt",3,NULL};
	VPL_ExtConstant _kUSBBulk_C = {"kUSBBulk",2,NULL};
	VPL_ExtConstant _kUSBIsoc_C = {"kUSBIsoc",1,NULL};
	VPL_ExtConstant _kUSBControl_C = {"kUSBControl",0,NULL};
	VPL_ExtConstant _NX_BigEndian_C = {"NX_BigEndian",2,NULL};
	VPL_ExtConstant _NX_LittleEndian_C = {"NX_LittleEndian",1,NULL};
	VPL_ExtConstant _NX_UnknownByteOrder_C = {"NX_UnknownByteOrder",0,NULL};

VPL_DictionaryNode VPX_MacOSX_IOKit_Constants[] =	{
	{"kUSBGangOverCurrentNotificationType", &_kUSBGangOverCurrentNotificationType_C},
	{"kUSBIndividualOverCurrentNotificationType", &_kUSBIndividualOverCurrentNotificationType_C},
	{"kUSBNotEnoughPowerNotificationType", &_kUSBNotEnoughPowerNotificationType_C},
	{"kUSBNoUserNotificationType", &_kUSBNoUserNotificationType_C},
	{"kUSBLowLatencyFrameListBuffer", &_kUSBLowLatencyFrameListBuffer_C},
	{"kUSBLowLatencyReadBuffer", &_kUSBLowLatencyReadBuffer_C},
	{"kUSBLowLatencyWriteBuffer", &_kUSBLowLatencyWriteBuffer_C},
	{"kUSBLowLatencyIsochTransferKey", &_kUSBLowLatencyIsochTransferKey_C},
	{"kUSBHighSpeedMicrosecondsInFrame", &_kUSBHighSpeedMicrosecondsInFrame_C},
	{"kUSBFullSpeedMicrosecondsInFrame", &_kUSBFullSpeedMicrosecondsInFrame_C},
	{"kUSBDeviceSpeedHigh", &_kUSBDeviceSpeedHigh_C},
	{"kUSBDeviceSpeedFull", &_kUSBDeviceSpeedFull_C},
	{"kUSBDeviceSpeedLow", &_kUSBDeviceSpeedLow_C},
	{"kIOUSBVendorIDAppleComputer", &_kIOUSBVendorIDAppleComputer_C},
	{"kIOUSBFindInterfaceDontCare", &_kIOUSBFindInterfaceDontCare_C},
	{"kUSBDefaultControlCompletionTimeoutMS", &_kUSBDefaultControlCompletionTimeoutMS_C},
	{"kUSBDefaultControlNoDataTimeoutMS", &_kUSBDefaultControlNoDataTimeoutMS_C},
	{"kIOUSBAnyProduct", &_kIOUSBAnyProduct_C},
	{"kIOUSBAnyVendor", &_kIOUSBAnyVendor_C},
	{"kIOUSBAnyProtocol", &_kIOUSBAnyProtocol_C},
	{"kIOUSBAnySubClass", &_kIOUSBAnySubClass_C},
	{"kIOUSBAnyClass", &_kIOUSBAnyClass_C},
	{"kSyncFrame", &_kSyncFrame_C},
	{"kSetInterface", &_kSetInterface_C},
	{"kSetEndpointFeature", &_kSetEndpointFeature_C},
	{"kSetInterfaceFeature", &_kSetInterfaceFeature_C},
	{"kSetDeviceFeature", &_kSetDeviceFeature_C},
	{"kSetDescriptor", &_kSetDescriptor_C},
	{"kSetConfiguration", &_kSetConfiguration_C},
	{"kSetAddress", &_kSetAddress_C},
	{"kGetEndpointStatus", &_kGetEndpointStatus_C},
	{"kGetInterfaceStatus", &_kGetInterfaceStatus_C},
	{"kGetDeviceStatus", &_kGetDeviceStatus_C},
	{"kGetInterface", &_kGetInterface_C},
	{"kGetDescriptor", &_kGetDescriptor_C},
	{"kGetConfiguration", &_kGetConfiguration_C},
	{"kClearEndpointFeature", &_kClearEndpointFeature_C},
	{"kClearInterfaceFeature", &_kClearInterfaceFeature_C},
	{"kClearDeviceFeature", &_kClearDeviceFeature_C},
	{"kUSBMaxIsocFrameReqCount", &_kUSBMaxIsocFrameReqCount_C},
	{"kUSBRqRecipientMask", &_kUSBRqRecipientMask_C},
	{"kUSBRqTypeMask", &_kUSBRqTypeMask_C},
	{"kUSBRqTypeShift", &_kUSBRqTypeShift_C},
	{"kUSBRqDirnMask", &_kUSBRqDirnMask_C},
	{"kUSBRqDirnShift", &_kUSBRqDirnShift_C},
	{"kUSBNoPipeIdx", &_kUSBNoPipeIdx_C},
	{"kUSBDeviceMask", &_kUSBDeviceMask_C},
	{"kUSBEndPtShift", &_kUSBEndPtShift_C},
	{"kUSBInterfaceIDMask", &_kUSBInterfaceIDMask_C},
	{"kUSBMaxInterfaces", &_kUSBMaxInterfaces_C},
	{"kUSBInterfaceIDShift", &_kUSBInterfaceIDShift_C},
	{"kUSBMaxPipes", &_kUSBMaxPipes_C},
	{"kUSBPipeIDMask", &_kUSBPipeIDMask_C},
	{"kUSBDeviceIDMask", &_kUSBDeviceIDMask_C},
	{"kUSBMaxDevice", &_kUSBMaxDevice_C},
	{"kUSBMaxDevices", &_kUSBMaxDevices_C},
	{"kUSBDeviceIDShift", &_kUSBDeviceIDShift_C},
	{"kUSBDFUManifestationTolerantBit", &_kUSBDFUManifestationTolerantBit_C},
	{"kUSBDFUCanUploadBit", &_kUSBDFUCanUploadBit_C},
	{"kUSBDFUCanDownloadBit", &_kUSBDFUCanDownloadBit_C},
	{"kUSBDFUAttributesMask", &_kUSBDFUAttributesMask_C},
	{"kUSBATMNetworkingSubClass", &_kUSBATMNetworkingSubClass_C},
	{"kUSBCommEthernetNetworkingSubClass", &_kUSBCommEthernetNetworkingSubClass_C},
	{"kUSBCommCAPISubClass", &_kUSBCommCAPISubClass_C},
	{"kUSBCommMultiChannelSubClass", &_kUSBCommMultiChannelSubClass_C},
	{"kUSBCommTelephoneSubClass", &_kUSBCommTelephoneSubClass_C},
	{"kUSBCommAbstractSubClass", &_kUSBCommAbstractSubClass_C},
	{"kUSBCommDirectLineSubClass", &_kUSBCommDirectLineSubClass_C},
	{"kUSBHIDBootInterfaceSubClass", &_kUSBHIDBootInterfaceSubClass_C},
	{"kUSBMassStorageSCSISubClass", &_kUSBMassStorageSCSISubClass_C},
	{"kUSBMassStorageSFF8070iSubClass", &_kUSBMassStorageSFF8070iSubClass_C},
	{"kUSBMassStorageUFISubClass", &_kUSBMassStorageUFISubClass_C},
	{"kUSBMassStorageQIC157SubClass", &_kUSBMassStorageQIC157SubClass_C},
	{"kUSBMassStorageATAPISubClass", &_kUSBMassStorageATAPISubClass_C},
	{"kUSBMassStorageRBCSubClass", &_kUSBMassStorageRBCSubClass_C},
	{"kUSBIrDABridgeSubClass", &_kUSBIrDABridgeSubClass_C},
	{"kUSBDFUSubClass", &_kUSBDFUSubClass_C},
	{"kUSBHubSubClass", &_kUSBHubSubClass_C},
	{"kUSBCompositeSubClass", &_kUSBCompositeSubClass_C},
	{"kUSBVendorSpecificClass", &_kUSBVendorSpecificClass_C},
	{"kUSBApplicationSpecificClass", &_kUSBApplicationSpecificClass_C},
	{"kUSBDataClass", &_kUSBDataClass_C},
	{"kUSBHubClass", &_kUSBHubClass_C},
	{"kUSBMassStorageClass", &_kUSBMassStorageClass_C},
	{"kUSBPrintingClass", &_kUSBPrintingClass_C},
	{"kUSBDisplayClass", &_kUSBDisplayClass_C},
	{"kUSBHIDClass", &_kUSBHIDClass_C},
	{"kUSBCommClass", &_kUSBCommClass_C},
	{"kUSBAudioClass", &_kUSBAudioClass_C},
	{"kUSBCompositeClass", &_kUSBCompositeClass_C},
	{"kUSBScrollLockKey", &_kUSBScrollLockKey_C},
	{"kUSBNumLockKey", &_kUSBNumLockKey_C},
	{"kUSBCapsLockKey", &_kUSBCapsLockKey_C},
	{"kUSBVendorSpecificProtocol", &_kUSBVendorSpecificProtocol_C},
	{"kHIDMouseInterfaceProtocol", &_kHIDMouseInterfaceProtocol_C},
	{"kHIDKeyboardInterfaceProtocol", &_kHIDKeyboardInterfaceProtocol_C},
	{"kHIDNoInterfaceProtocol", &_kHIDNoInterfaceProtocol_C},
	{"kHIDReportProtocolValue", &_kHIDReportProtocolValue_C},
	{"kHIDBootProtocolValue", &_kHIDBootProtocolValue_C},
	{"kHIDRtFeatureReport", &_kHIDRtFeatureReport_C},
	{"kHIDRtOutputReport", &_kHIDRtOutputReport_C},
	{"kHIDRtInputReport", &_kHIDRtInputReport_C},
	{"kHIDRqSetProtocol", &_kHIDRqSetProtocol_C},
	{"kHIDRqSetIdle", &_kHIDRqSetIdle_C},
	{"kHIDRqSetReport", &_kHIDRqSetReport_C},
	{"kHIDRqGetProtocol", &_kHIDRqGetProtocol_C},
	{"kHIDRqGetIdle", &_kHIDRqGetIdle_C},
	{"kHIDRqGetReport", &_kHIDRqGetReport_C},
	{"kUSBRel20", &_kUSBRel20_C},
	{"kUSBRel11", &_kUSBRel11_C},
	{"kUSBRel10", &_kUSBRel10_C},
	{"kUSBAtrRemoteWakeup", &_kUSBAtrRemoteWakeup_C},
	{"kUSBAtrSelfPowered", &_kUSBAtrSelfPowered_C},
	{"kUSBAtrBusPowered", &_kUSBAtrBusPowered_C},
	{"kUSB100mA", &_kUSB100mA_C},
	{"kUSB500mAAvailable", &_kUSB500mAAvailable_C},
	{"kUSB100mAAvailable", &_kUSB100mAAvailable_C},
	{"kUSBFeatureDeviceRemoteWakeup", &_kUSBFeatureDeviceRemoteWakeup_C},
	{"kUSBFeatureEndpointStall", &_kUSBFeatureEndpointStall_C},
	{"kUSBHUBDesc", &_kUSBHUBDesc_C},
	{"kUSBPhysicalDesc", &_kUSBPhysicalDesc_C},
	{"kUSBReportDesc", &_kUSBReportDesc_C},
	{"kUSBHIDDesc", &_kUSBHIDDesc_C},
	{"kUSBInterfaceAssociationDesc", &_kUSBInterfaceAssociationDesc_C},
	{"kUSDebugDesc", &_kUSDebugDesc_C},
	{"kUSBOnTheGoDesc", &_kUSBOnTheGoDesc_C},
	{"kUSBInterfacePowerDesc", &_kUSBInterfacePowerDesc_C},
	{"kUSBOtherSpeedConfDesc", &_kUSBOtherSpeedConfDesc_C},
	{"kUSBDeviceQualifierDesc", &_kUSBDeviceQualifierDesc_C},
	{"kUSBEndpointDesc", &_kUSBEndpointDesc_C},
	{"kUSBInterfaceDesc", &_kUSBInterfaceDesc_C},
	{"kUSBStringDesc", &_kUSBStringDesc_C},
	{"kUSBConfDesc", &_kUSBConfDesc_C},
	{"kUSBDeviceDesc", &_kUSBDeviceDesc_C},
	{"kUSBAnyDesc", &_kUSBAnyDesc_C},
	{"kUSBRqSyncFrame", &_kUSBRqSyncFrame_C},
	{"kUSBRqSetInterface", &_kUSBRqSetInterface_C},
	{"kUSBRqGetInterface", &_kUSBRqGetInterface_C},
	{"kUSBRqSetConfig", &_kUSBRqSetConfig_C},
	{"kUSBRqGetConfig", &_kUSBRqGetConfig_C},
	{"kUSBRqSetDescriptor", &_kUSBRqSetDescriptor_C},
	{"kUSBRqGetDescriptor", &_kUSBRqGetDescriptor_C},
	{"kUSBRqSetAddress", &_kUSBRqSetAddress_C},
	{"kUSBRqReserved2", &_kUSBRqReserved2_C},
	{"kUSBRqSetFeature", &_kUSBRqSetFeature_C},
	{"kUSBRqGetState", &_kUSBRqGetState_C},
	{"kUSBRqClearFeature", &_kUSBRqClearFeature_C},
	{"kUSBRqGetStatus", &_kUSBRqGetStatus_C},
	{"kUSBOther", &_kUSBOther_C},
	{"kUSBEndpoint", &_kUSBEndpoint_C},
	{"kUSBInterface", &_kUSBInterface_C},
	{"kUSBDevice", &_kUSBDevice_C},
	{"kUSBVendor", &_kUSBVendor_C},
	{"kUSBClass", &_kUSBClass_C},
	{"kUSBStandard", &_kUSBStandard_C},
	{"kUSBAnyDirn", &_kUSBAnyDirn_C},
	{"kUSBNone", &_kUSBNone_C},
	{"kUSBIn", &_kUSBIn_C},
	{"kUSBOut", &_kUSBOut_C},
	{"kUSBAnyType", &_kUSBAnyType_C},
	{"kUSBInterrupt", &_kUSBInterrupt_C},
	{"kUSBBulk", &_kUSBBulk_C},
	{"kUSBIsoc", &_kUSBIsoc_C},
	{"kUSBControl", &_kUSBControl_C},
	{"NX_BigEndian", &_NX_BigEndian_C},
	{"NX_LittleEndian", &_NX_LittleEndian_C},
	{"NX_UnknownByteOrder", &_NX_UnknownByteOrder_C},
};

Nat4	VPX_MacOSX_IOKit_Constants_Number = 167;

#pragma export on

Nat4	load_MacOSX_IOKit_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_IOKit_Constants(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_MacOSX_IOKit_Constants_Number,VPX_MacOSX_IOKit_Constants);
		
		return result;
}

#pragma export off
