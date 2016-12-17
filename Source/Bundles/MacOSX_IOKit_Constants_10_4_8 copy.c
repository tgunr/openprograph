/*
	
	MacOSX_Constants.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

	VPL_ExtConstant _kUSBAddExtraResetTimeMask_C = {"kUSBAddExtraResetTimeMask",2147483648,NULL};
	VPL_ExtConstant _kUSBAddExtraResetTimeBit_C = {"kUSBAddExtraResetTimeBit",31,NULL};
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
	VPL_ExtConstant _addPacketShift_C = {"addPacketShift",11,NULL};
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
	VPL_ExtConstant _kUSBMaxHSIsocFrameCount_C = {"kUSBMaxHSIsocFrameCount",7168,NULL};
	VPL_ExtConstant _kUSBMaxHSIsocEndpointReqCount_C = {"kUSBMaxHSIsocEndpointReqCount",3072,NULL};
	VPL_ExtConstant _kUSBMaxFSIsocEndpointReqCount_C = {"kUSBMaxFSIsocEndpointReqCount",1023,NULL};
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
	VPL_ExtConstant _kUSBEndpointbmAttributesUsageTypeShift_C = {"kUSBEndpointbmAttributesUsageTypeShift",4,NULL};
	VPL_ExtConstant _kUSBEndpointbmAttributesUsageTypeMask_C = {"kUSBEndpointbmAttributesUsageTypeMask",48,NULL};
	VPL_ExtConstant _kUSBEndpointbmAttributesSynchronizationTypeShift_C = {"kUSBEndpointbmAttributesSynchronizationTypeShift",2,NULL};
	VPL_ExtConstant _kUSBEndpointbmAttributesSynchronizationTypeMask_C = {"kUSBEndpointbmAttributesSynchronizationTypeMask",12,NULL};
	VPL_ExtConstant _kUSBEndpointbmAttributesTransferTypeMask_C = {"kUSBEndpointbmAttributesTransferTypeMask",3,NULL};
	VPL_ExtConstant _kUSBEndpointDirectionIn_C = {"kUSBEndpointDirectionIn",128,NULL};
	VPL_ExtConstant _kUSBEndpointDirectionOut_C = {"kUSBEndpointDirectionOut",0,NULL};
	VPL_ExtConstant _kUSBbEndpointDirectionMask_C = {"kUSBbEndpointDirectionMask",128,NULL};
	VPL_ExtConstant _kUSBbEndpointDirectionBit_C = {"kUSBbEndpointDirectionBit",7,NULL};
	VPL_ExtConstant _kUSBbEndpointAddressMask_C = {"kUSBbEndpointAddressMask",15,NULL};
	VPL_ExtConstant _kUSBDFUManifestationTolerantBit_C = {"kUSBDFUManifestationTolerantBit",2,NULL};
	VPL_ExtConstant _kUSBDFUCanUploadBit_C = {"kUSBDFUCanUploadBit",1,NULL};
	VPL_ExtConstant _kUSBDFUCanDownloadBit_C = {"kUSBDFUCanDownloadBit",0,NULL};
	VPL_ExtConstant _kUSBDFUAttributesMask_C = {"kUSBDFUAttributesMask",7,NULL};
	VPL_ExtConstant _KUSBInterfaceAssociationDescriptorProtocol_C = {"KUSBInterfaceAssociationDescriptorProtocol",1,NULL};
	VPL_ExtConstant _kUSBBluetoothProgrammingInterfaceProtocol_C = {"kUSBBluetoothProgrammingInterfaceProtocol",1,NULL};
	VPL_ExtConstant _kUSB2ComplianceDeviceProtocol_C = {"kUSB2ComplianceDeviceProtocol",1,NULL};
	VPL_ExtConstant _kUSBVendorSpecificProtocol_C = {"kUSBVendorSpecificProtocol",255,NULL};
	VPL_ExtConstant _kHIDMouseInterfaceProtocol_C = {"kHIDMouseInterfaceProtocol",2,NULL};
	VPL_ExtConstant _kHIDKeyboardInterfaceProtocol_C = {"kHIDKeyboardInterfaceProtocol",1,NULL};
	VPL_ExtConstant _kHIDNoInterfaceProtocol_C = {"kHIDNoInterfaceProtocol",0,NULL};
	VPL_ExtConstant _kUSBVideoInterfaceCollectionSubClass_C = {"kUSBVideoInterfaceCollectionSubClass",3,NULL};
	VPL_ExtConstant _kUSBVideoStreamingSubClass_C = {"kUSBVideoStreamingSubClass",2,NULL};
	VPL_ExtConstant _kUSBVideoControlSubClass_C = {"kUSBVideoControlSubClass",1,NULL};
	VPL_ExtConstant _kUSBCommonClassSubClass_C = {"kUSBCommonClassSubClass",2,NULL};
	VPL_ExtConstant _kUSBRFControllerSubClass_C = {"kUSBRFControllerSubClass",1,NULL};
	VPL_ExtConstant _kUSBReprogrammableDiagnosticSubClass_C = {"kUSBReprogrammableDiagnosticSubClass",1,NULL};
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
	VPL_ExtConstant _kUSBTestMeasurementSubClass_C = {"kUSBTestMeasurementSubClass",3,NULL};
	VPL_ExtConstant _kUSBIrDABridgeSubClass_C = {"kUSBIrDABridgeSubClass",2,NULL};
	VPL_ExtConstant _kUSBDFUSubClass_C = {"kUSBDFUSubClass",1,NULL};
	VPL_ExtConstant _kUSBMIDIStreamingSubClass_C = {"kUSBMIDIStreamingSubClass",3,NULL};
	VPL_ExtConstant _kUSBAudioStreamingSubClass_C = {"kUSBAudioStreamingSubClass",2,NULL};
	VPL_ExtConstant _kUSBAudioControlSubClass_C = {"kUSBAudioControlSubClass",1,NULL};
	VPL_ExtConstant _kUSBHubSubClass_C = {"kUSBHubSubClass",0,NULL};
	VPL_ExtConstant _kUSBCompositeSubClass_C = {"kUSBCompositeSubClass",0,NULL};
	VPL_ExtConstant _kUSBDisplayClass_C = {"kUSBDisplayClass",4,NULL};
	VPL_ExtConstant _kUSBVendorSpecificInterfaceClass_C = {"kUSBVendorSpecificInterfaceClass",255,NULL};
	VPL_ExtConstant _kUSBApplicationSpecificInterfaceClass_C = {"kUSBApplicationSpecificInterfaceClass",254,NULL};
	VPL_ExtConstant _kUSBWirelessControllerInterfaceClass_C = {"kUSBWirelessControllerInterfaceClass",224,NULL};
	VPL_ExtConstant _kUSBDiagnosticDeviceInterfaceClass_C = {"kUSBDiagnosticDeviceInterfaceClass",220,NULL};
	VPL_ExtConstant _kUSBVideoInterfaceClass_C = {"kUSBVideoInterfaceClass",14,NULL};
	VPL_ExtConstant _kUSBContentSecurityInterfaceClass_C = {"kUSBContentSecurityInterfaceClass",12,NULL};
	VPL_ExtConstant _kUSBChipSmartCardInterfaceClass_C = {"kUSBChipSmartCardInterfaceClass",11,NULL};
	VPL_ExtConstant _kUSBMassStorageInterfaceClass_C = {"kUSBMassStorageInterfaceClass",8,NULL};
	VPL_ExtConstant _kUSBMassStorageClass_C = {"kUSBMassStorageClass",8,NULL};
	VPL_ExtConstant _kUSBPrintingInterfaceClass_C = {"kUSBPrintingInterfaceClass",7,NULL};
	VPL_ExtConstant _kUSBPrintingClass_C = {"kUSBPrintingClass",7,NULL};
	VPL_ExtConstant _kUSBImageInterfaceClass_C = {"kUSBImageInterfaceClass",6,NULL};
	VPL_ExtConstant _kUSBPhysicalInterfaceClass_C = {"kUSBPhysicalInterfaceClass",5,NULL};
	VPL_ExtConstant _kUSBHIDInterfaceClass_C = {"kUSBHIDInterfaceClass",3,NULL};
	VPL_ExtConstant _kUSBHIDClass_C = {"kUSBHIDClass",3,NULL};
	VPL_ExtConstant _kUSBCommunicationDataInterfaceClass_C = {"kUSBCommunicationDataInterfaceClass",10,NULL};
	VPL_ExtConstant _kUSBCommunicationControlInterfaceClass_C = {"kUSBCommunicationControlInterfaceClass",2,NULL};
	VPL_ExtConstant _kUSBAudioInterfaceClass_C = {"kUSBAudioInterfaceClass",1,NULL};
	VPL_ExtConstant _kUSBAudioClass_C = {"kUSBAudioClass",1,NULL};
	VPL_ExtConstant _kUSBVendorSpecificClass_C = {"kUSBVendorSpecificClass",255,NULL};
	VPL_ExtConstant _kUSBApplicationSpecificClass_C = {"kUSBApplicationSpecificClass",254,NULL};
	VPL_ExtConstant _kUSBMiscellaneousClass_C = {"kUSBMiscellaneousClass",239,NULL};
	VPL_ExtConstant _kUSBWirelessControllerClass_C = {"kUSBWirelessControllerClass",224,NULL};
	VPL_ExtConstant _kUSBDiagnosticClass_C = {"kUSBDiagnosticClass",220,NULL};
	VPL_ExtConstant _kUSBDataClass_C = {"kUSBDataClass",10,NULL};
	VPL_ExtConstant _kUSBHubClass_C = {"kUSBHubClass",9,NULL};
	VPL_ExtConstant _kUSBCommunicationClass_C = {"kUSBCommunicationClass",2,NULL};
	VPL_ExtConstant _kUSBCommClass_C = {"kUSBCommClass",2,NULL};
	VPL_ExtConstant _kUSBCompositeClass_C = {"kUSBCompositeClass",0,NULL};
	VPL_ExtConstant _kUSBScrollLockKey_C = {"kUSBScrollLockKey",71,NULL};
	VPL_ExtConstant _kUSBNumLockKey_C = {"kUSBNumLockKey",83,NULL};
	VPL_ExtConstant _kUSBCapsLockKey_C = {"kUSBCapsLockKey",57,NULL};
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
	VPL_ExtConstant _kCFURLComponentFragment_C = {"kCFURLComponentFragment",12,NULL};
	VPL_ExtConstant _kCFURLComponentQuery_C = {"kCFURLComponentQuery",11,NULL};
	VPL_ExtConstant _kCFURLComponentParameterString_C = {"kCFURLComponentParameterString",10,NULL};
	VPL_ExtConstant _kCFURLComponentPort_C = {"kCFURLComponentPort",9,NULL};
	VPL_ExtConstant _kCFURLComponentHost_C = {"kCFURLComponentHost",8,NULL};
	VPL_ExtConstant _kCFURLComponentUserInfo_C = {"kCFURLComponentUserInfo",7,NULL};
	VPL_ExtConstant _kCFURLComponentPassword_C = {"kCFURLComponentPassword",6,NULL};
	VPL_ExtConstant _kCFURLComponentUser_C = {"kCFURLComponentUser",5,NULL};
	VPL_ExtConstant _kCFURLComponentResourceSpecifier_C = {"kCFURLComponentResourceSpecifier",4,NULL};
	VPL_ExtConstant _kCFURLComponentPath_C = {"kCFURLComponentPath",3,NULL};
	VPL_ExtConstant _kCFURLComponentNetLocation_C = {"kCFURLComponentNetLocation",2,NULL};
	VPL_ExtConstant _kCFURLComponentScheme_C = {"kCFURLComponentScheme",1,NULL};
	VPL_ExtConstant _kCFURLWindowsPathStyle_C = {"kCFURLWindowsPathStyle",2,NULL};
	VPL_ExtConstant _kCFURLHFSPathStyle_C = {"kCFURLHFSPathStyle",1,NULL};
	VPL_ExtConstant _kCFURLPOSIXPathStyle_C = {"kCFURLPOSIXPathStyle",0,NULL};
	VPL_ExtConstant _kIORegistryIterateParents_C = {"kIORegistryIterateParents",2,NULL};
	VPL_ExtConstant _kIORegistryIterateRecursively_C = {"kIORegistryIterateRecursively",1,NULL};
	VPL_ExtConstant _kOSAsyncRefSize_C = {"kOSAsyncRefSize",32,NULL};
	VPL_ExtConstant _kOSAsyncRefCount_C = {"kOSAsyncRefCount",8,NULL};
	VPL_ExtConstant _kIOInterestCalloutCount_C = {"kIOInterestCalloutCount",4,NULL};
	VPL_ExtConstant _kIOInterestCalloutServiceIndex_C = {"kIOInterestCalloutServiceIndex",3,NULL};
	VPL_ExtConstant _kIOInterestCalloutRefconIndex_C = {"kIOInterestCalloutRefconIndex",2,NULL};
	VPL_ExtConstant _kIOInterestCalloutFuncIndex_C = {"kIOInterestCalloutFuncIndex",1,NULL};
	VPL_ExtConstant _kIOMatchingCalloutCount_C = {"kIOMatchingCalloutCount",3,NULL};
	VPL_ExtConstant _kIOMatchingCalloutRefconIndex_C = {"kIOMatchingCalloutRefconIndex",2,NULL};
	VPL_ExtConstant _kIOMatchingCalloutFuncIndex_C = {"kIOMatchingCalloutFuncIndex",1,NULL};
	VPL_ExtConstant _kIOAsyncCalloutCount_C = {"kIOAsyncCalloutCount",3,NULL};
	VPL_ExtConstant _kIOAsyncCalloutRefconIndex_C = {"kIOAsyncCalloutRefconIndex",2,NULL};
	VPL_ExtConstant _kIOAsyncCalloutFuncIndex_C = {"kIOAsyncCalloutFuncIndex",1,NULL};
	VPL_ExtConstant _kIOAsyncReservedCount_C = {"kIOAsyncReservedCount",1,NULL};
	VPL_ExtConstant _kIOAsyncReservedIndex_C = {"kIOAsyncReservedIndex",0,NULL};
	VPL_ExtConstant _kMaxAsyncArgs_C = {"kMaxAsyncArgs",16,NULL};
	VPL_ExtConstant _kOSAsyncCompleteMessageID_C = {"kOSAsyncCompleteMessageID",57,NULL};
	VPL_ExtConstant _kOSNotificationMessageID_C = {"kOSNotificationMessageID",53,NULL};
	VPL_ExtConstant _kLastIOKitNotificationType_C = {"kLastIOKitNotificationType",199,NULL};
	VPL_ExtConstant _kIOServiceMessageNotificationType_C = {"kIOServiceMessageNotificationType",160,NULL};
	VPL_ExtConstant _kIOAsyncCompletionNotificationType_C = {"kIOAsyncCompletionNotificationType",150,NULL};
	VPL_ExtConstant _kIOServiceTerminatedNotificationType_C = {"kIOServiceTerminatedNotificationType",102,NULL};
	VPL_ExtConstant _kIOServiceMatchedNotificationType_C = {"kIOServiceMatchedNotificationType",101,NULL};
	VPL_ExtConstant _kIOServicePublishNotificationType_C = {"kIOServicePublishNotificationType",100,NULL};
	VPL_ExtConstant _kFirstIOKitNotificationType_C = {"kFirstIOKitNotificationType",100,NULL};
	VPL_ExtConstant _IO_CopyBack_C = {"IO_CopyBack",2,NULL};
	VPL_ExtConstant _IO_WriteThrough_C = {"IO_WriteThrough",1,NULL};
	VPL_ExtConstant _IO_CacheOff_C = {"IO_CacheOff",0,NULL};
	VPL_ExtConstant _kTickScale_C = {"kTickScale",10000000,NULL};
	VPL_ExtConstant _kSecondScale_C = {"kSecondScale",1000000000,NULL};
	VPL_ExtConstant _kMillisecondScale_C = {"kMillisecondScale",1000000,NULL};
	VPL_ExtConstant _kMicrosecondScale_C = {"kMicrosecondScale",1000,NULL};
	VPL_ExtConstant _kNanosecondScale_C = {"kNanosecondScale",1,NULL};
	VPL_ExtConstant _kIOMapUnique_C = {"kIOMapUnique",67108864,NULL};
	VPL_ExtConstant _kIOMapReference_C = {"kIOMapReference",33554432,NULL};
	VPL_ExtConstant _kIOMapStatic_C = {"kIOMapStatic",16777216,NULL};
	VPL_ExtConstant _kIOMapReadOnly_C = {"kIOMapReadOnly",4096,NULL};
	VPL_ExtConstant _kIOMapUserOptionsMask_C = {"kIOMapUserOptionsMask",4095,NULL};
	VPL_ExtConstant _kIOMapWriteCombineCache_C = {"kIOMapWriteCombineCache",1024,NULL};
	VPL_ExtConstant _kIOMapCopybackCache_C = {"kIOMapCopybackCache",768,NULL};
	VPL_ExtConstant _kIOMapWriteThruCache_C = {"kIOMapWriteThruCache",512,NULL};
	VPL_ExtConstant _kIOMapInhibitCache_C = {"kIOMapInhibitCache",256,NULL};
	VPL_ExtConstant _kIOMapDefaultCache_C = {"kIOMapDefaultCache",0,NULL};
	VPL_ExtConstant _kIOMapCacheShift_C = {"kIOMapCacheShift",8,NULL};
	VPL_ExtConstant _kIOMapCacheMask_C = {"kIOMapCacheMask",1792,NULL};
	VPL_ExtConstant _kIOMapAnywhere_C = {"kIOMapAnywhere",1,NULL};
	VPL_ExtConstant _kIOWriteCombineCache_C = {"kIOWriteCombineCache",4,NULL};
	VPL_ExtConstant _kIOCopybackCache_C = {"kIOCopybackCache",3,NULL};
	VPL_ExtConstant _kIOWriteThruCache_C = {"kIOWriteThruCache",2,NULL};
	VPL_ExtConstant _kIOInhibitCache_C = {"kIOInhibitCache",1,NULL};
	VPL_ExtConstant _kIODefaultCache_C = {"kIODefaultCache",0,NULL};
	VPL_ExtConstant _kIODefaultMemoryType_C = {"kIODefaultMemoryType",0,NULL};
	VPL_ExtConstant _kCFRunLoopAllActivities_C = {"kCFRunLoopAllActivities",268435455,NULL};
	VPL_ExtConstant _kCFRunLoopExit_C = {"kCFRunLoopExit",128,NULL};
	VPL_ExtConstant _kCFRunLoopAfterWaiting_C = {"kCFRunLoopAfterWaiting",64,NULL};
	VPL_ExtConstant _kCFRunLoopBeforeWaiting_C = {"kCFRunLoopBeforeWaiting",32,NULL};
	VPL_ExtConstant _kCFRunLoopBeforeSources_C = {"kCFRunLoopBeforeSources",4,NULL};
	VPL_ExtConstant _kCFRunLoopBeforeTimers_C = {"kCFRunLoopBeforeTimers",2,NULL};
	VPL_ExtConstant _kCFRunLoopEntry_C = {"kCFRunLoopEntry",1,NULL};
	VPL_ExtConstant _kCFRunLoopRunHandledSource_C = {"kCFRunLoopRunHandledSource",4,NULL};
	VPL_ExtConstant _kCFRunLoopRunTimedOut_C = {"kCFRunLoopRunTimedOut",3,NULL};
	VPL_ExtConstant _kCFRunLoopRunStopped_C = {"kCFRunLoopRunStopped",2,NULL};
	VPL_ExtConstant _kCFRunLoopRunFinished_C = {"kCFRunLoopRunFinished",1,NULL};
	VPL_ExtConstant _kCFStringNormalizationFormKC_C = {"kCFStringNormalizationFormKC",3,NULL};
	VPL_ExtConstant _kCFStringNormalizationFormC_C = {"kCFStringNormalizationFormC",2,NULL};
	VPL_ExtConstant _kCFStringNormalizationFormKD_C = {"kCFStringNormalizationFormKD",1,NULL};
	VPL_ExtConstant _kCFStringNormalizationFormD_C = {"kCFStringNormalizationFormD",0,NULL};
	VPL_ExtConstant _kCFCompareNumerically_C = {"kCFCompareNumerically",64,NULL};
	VPL_ExtConstant _kCFCompareLocalized_C = {"kCFCompareLocalized",32,NULL};
	VPL_ExtConstant _kCFCompareNonliteral_C = {"kCFCompareNonliteral",16,NULL};
	VPL_ExtConstant _kCFCompareAnchored_C = {"kCFCompareAnchored",8,NULL};
	VPL_ExtConstant _kCFCompareBackwards_C = {"kCFCompareBackwards",4,NULL};
	VPL_ExtConstant _kCFCompareCaseInsensitive_C = {"kCFCompareCaseInsensitive",1,NULL};
	VPL_ExtConstant _kCFStringEncodingNonLossyASCII_C = {"kCFStringEncodingNonLossyASCII",3071,NULL};
	VPL_ExtConstant _kCFStringEncodingUTF8_C = {"kCFStringEncodingUTF8",134217984,NULL};
	VPL_ExtConstant _kCFStringEncodingUnicode_C = {"kCFStringEncodingUnicode",256,NULL};
	VPL_ExtConstant _kCFStringEncodingASCII_C = {"kCFStringEncodingASCII",1536,NULL};
	VPL_ExtConstant _kCFStringEncodingNextStepLatin_C = {"kCFStringEncodingNextStepLatin",2817,NULL};
	VPL_ExtConstant _kCFStringEncodingISOLatin1_C = {"kCFStringEncodingISOLatin1",513,NULL};
	VPL_ExtConstant _kCFStringEncodingWindowsLatin1_C = {"kCFStringEncodingWindowsLatin1",1280,NULL};
	VPL_ExtConstant _kCFStringEncodingMacRoman_C = {"kCFStringEncodingMacRoman",0,NULL};
	VPL_ExtConstant _kCFCharacterSetSymbol_C = {"kCFCharacterSetSymbol",14,NULL};
	VPL_ExtConstant _kCFCharacterSetCapitalizedLetter_C = {"kCFCharacterSetCapitalizedLetter",13,NULL};
	VPL_ExtConstant _kCFCharacterSetIllegal_C = {"kCFCharacterSetIllegal",12,NULL};
	VPL_ExtConstant _kCFCharacterSetPunctuation_C = {"kCFCharacterSetPunctuation",11,NULL};
	VPL_ExtConstant _kCFCharacterSetAlphaNumeric_C = {"kCFCharacterSetAlphaNumeric",10,NULL};
	VPL_ExtConstant _kCFCharacterSetDecomposable_C = {"kCFCharacterSetDecomposable",9,NULL};
	VPL_ExtConstant _kCFCharacterSetNonBase_C = {"kCFCharacterSetNonBase",8,NULL};
	VPL_ExtConstant _kCFCharacterSetUppercaseLetter_C = {"kCFCharacterSetUppercaseLetter",7,NULL};
	VPL_ExtConstant _kCFCharacterSetLowercaseLetter_C = {"kCFCharacterSetLowercaseLetter",6,NULL};
	VPL_ExtConstant _kCFCharacterSetLetter_C = {"kCFCharacterSetLetter",5,NULL};
	VPL_ExtConstant _kCFCharacterSetDecimalDigit_C = {"kCFCharacterSetDecimalDigit",4,NULL};
	VPL_ExtConstant _kCFCharacterSetWhitespaceAndNewline_C = {"kCFCharacterSetWhitespaceAndNewline",3,NULL};
	VPL_ExtConstant _kCFCharacterSetWhitespace_C = {"kCFCharacterSetWhitespace",2,NULL};
	VPL_ExtConstant _kCFCharacterSetControl_C = {"kCFCharacterSetControl",1,NULL};
	VPL_ExtConstant _kCFGregorianAllUnits_C = {"kCFGregorianAllUnits",16777215,NULL};
	VPL_ExtConstant _kCFGregorianUnitsSeconds_C = {"kCFGregorianUnitsSeconds",32,NULL};
	VPL_ExtConstant _kCFGregorianUnitsMinutes_C = {"kCFGregorianUnitsMinutes",16,NULL};
	VPL_ExtConstant _kCFGregorianUnitsHours_C = {"kCFGregorianUnitsHours",8,NULL};
	VPL_ExtConstant _kCFGregorianUnitsDays_C = {"kCFGregorianUnitsDays",4,NULL};
	VPL_ExtConstant _kCFGregorianUnitsMonths_C = {"kCFGregorianUnitsMonths",2,NULL};
	VPL_ExtConstant _kCFGregorianUnitsYears_C = {"kCFGregorianUnitsYears",1,NULL};
	VPL_ExtConstant _kCFNotFound_C = {"kCFNotFound",4294967295,NULL};
	VPL_ExtConstant _kCFCompareGreaterThan_C = {"kCFCompareGreaterThan",1,NULL};
	VPL_ExtConstant _kCFCompareEqualTo_C = {"kCFCompareEqualTo",0,NULL};
	VPL_ExtConstant _kCFCompareLessThan_C = {"kCFCompareLessThan",4294967295,NULL};
	VPL_ExtConstant _OSBigEndian_C = {"OSBigEndian",2,NULL};
	VPL_ExtConstant _OSLittleEndian_C = {"OSLittleEndian",1,NULL};
	VPL_ExtConstant _OSUnknownByteOrder_C = {"OSUnknownByteOrder",0,NULL};
	VPL_ExtConstant _TASK_GRAPHICS_SERVER_C = {"TASK_GRAPHICS_SERVER",4,NULL};
	VPL_ExtConstant _TASK_CONTROL_APPLICATION_C = {"TASK_CONTROL_APPLICATION",3,NULL};
	VPL_ExtConstant _TASK_BACKGROUND_APPLICATION_C = {"TASK_BACKGROUND_APPLICATION",2,NULL};
	VPL_ExtConstant _TASK_FOREGROUND_APPLICATION_C = {"TASK_FOREGROUND_APPLICATION",1,NULL};
	VPL_ExtConstant _TASK_UNSPECIFIED_C = {"TASK_UNSPECIFIED",0,NULL};
	VPL_ExtConstant _TASK_RENICED_C = {"TASK_RENICED",4294967295,NULL};


VPL_DictionaryNode VPX_MacOSX_IOKit_Constants[] =	{
	{"kUSBAddExtraResetTimeMask", &_kUSBAddExtraResetTimeMask_C},
	{"kUSBAddExtraResetTimeBit", &_kUSBAddExtraResetTimeBit_C},
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
	{"addPacketShift", &_addPacketShift_C},
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
	{"kUSBMaxHSIsocFrameCount", &_kUSBMaxHSIsocFrameCount_C},
	{"kUSBMaxHSIsocEndpointReqCount", &_kUSBMaxHSIsocEndpointReqCount_C},
	{"kUSBMaxFSIsocEndpointReqCount", &_kUSBMaxFSIsocEndpointReqCount_C},
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
	{"kUSBEndpointbmAttributesUsageTypeShift", &_kUSBEndpointbmAttributesUsageTypeShift_C},
	{"kUSBEndpointbmAttributesUsageTypeMask", &_kUSBEndpointbmAttributesUsageTypeMask_C},
	{"kUSBEndpointbmAttributesSynchronizationTypeShift", &_kUSBEndpointbmAttributesSynchronizationTypeShift_C},
	{"kUSBEndpointbmAttributesSynchronizationTypeMask", &_kUSBEndpointbmAttributesSynchronizationTypeMask_C},
	{"kUSBEndpointbmAttributesTransferTypeMask", &_kUSBEndpointbmAttributesTransferTypeMask_C},
	{"kUSBEndpointDirectionIn", &_kUSBEndpointDirectionIn_C},
	{"kUSBEndpointDirectionOut", &_kUSBEndpointDirectionOut_C},
	{"kUSBbEndpointDirectionMask", &_kUSBbEndpointDirectionMask_C},
	{"kUSBbEndpointDirectionBit", &_kUSBbEndpointDirectionBit_C},
	{"kUSBbEndpointAddressMask", &_kUSBbEndpointAddressMask_C},
	{"kUSBDFUManifestationTolerantBit", &_kUSBDFUManifestationTolerantBit_C},
	{"kUSBDFUCanUploadBit", &_kUSBDFUCanUploadBit_C},
	{"kUSBDFUCanDownloadBit", &_kUSBDFUCanDownloadBit_C},
	{"kUSBDFUAttributesMask", &_kUSBDFUAttributesMask_C},
	{"KUSBInterfaceAssociationDescriptorProtocol", &_KUSBInterfaceAssociationDescriptorProtocol_C},
	{"kUSBBluetoothProgrammingInterfaceProtocol", &_kUSBBluetoothProgrammingInterfaceProtocol_C},
	{"kUSB2ComplianceDeviceProtocol", &_kUSB2ComplianceDeviceProtocol_C},
	{"kUSBVendorSpecificProtocol", &_kUSBVendorSpecificProtocol_C},
	{"kHIDMouseInterfaceProtocol", &_kHIDMouseInterfaceProtocol_C},
	{"kHIDKeyboardInterfaceProtocol", &_kHIDKeyboardInterfaceProtocol_C},
	{"kHIDNoInterfaceProtocol", &_kHIDNoInterfaceProtocol_C},
	{"kUSBVideoInterfaceCollectionSubClass", &_kUSBVideoInterfaceCollectionSubClass_C},
	{"kUSBVideoStreamingSubClass", &_kUSBVideoStreamingSubClass_C},
	{"kUSBVideoControlSubClass", &_kUSBVideoControlSubClass_C},
	{"kUSBCommonClassSubClass", &_kUSBCommonClassSubClass_C},
	{"kUSBRFControllerSubClass", &_kUSBRFControllerSubClass_C},
	{"kUSBReprogrammableDiagnosticSubClass", &_kUSBReprogrammableDiagnosticSubClass_C},
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
	{"kUSBTestMeasurementSubClass", &_kUSBTestMeasurementSubClass_C},
	{"kUSBIrDABridgeSubClass", &_kUSBIrDABridgeSubClass_C},
	{"kUSBDFUSubClass", &_kUSBDFUSubClass_C},
	{"kUSBMIDIStreamingSubClass", &_kUSBMIDIStreamingSubClass_C},
	{"kUSBAudioStreamingSubClass", &_kUSBAudioStreamingSubClass_C},
	{"kUSBAudioControlSubClass", &_kUSBAudioControlSubClass_C},
	{"kUSBHubSubClass", &_kUSBHubSubClass_C},
	{"kUSBCompositeSubClass", &_kUSBCompositeSubClass_C},
	{"kUSBDisplayClass", &_kUSBDisplayClass_C},
	{"kUSBVendorSpecificInterfaceClass", &_kUSBVendorSpecificInterfaceClass_C},
	{"kUSBApplicationSpecificInterfaceClass", &_kUSBApplicationSpecificInterfaceClass_C},
	{"kUSBWirelessControllerInterfaceClass", &_kUSBWirelessControllerInterfaceClass_C},
	{"kUSBDiagnosticDeviceInterfaceClass", &_kUSBDiagnosticDeviceInterfaceClass_C},
	{"kUSBVideoInterfaceClass", &_kUSBVideoInterfaceClass_C},
	{"kUSBContentSecurityInterfaceClass", &_kUSBContentSecurityInterfaceClass_C},
	{"kUSBChipSmartCardInterfaceClass", &_kUSBChipSmartCardInterfaceClass_C},
	{"kUSBMassStorageInterfaceClass", &_kUSBMassStorageInterfaceClass_C},
	{"kUSBMassStorageClass", &_kUSBMassStorageClass_C},
	{"kUSBPrintingInterfaceClass", &_kUSBPrintingInterfaceClass_C},
	{"kUSBPrintingClass", &_kUSBPrintingClass_C},
	{"kUSBImageInterfaceClass", &_kUSBImageInterfaceClass_C},
	{"kUSBPhysicalInterfaceClass", &_kUSBPhysicalInterfaceClass_C},
	{"kUSBHIDInterfaceClass", &_kUSBHIDInterfaceClass_C},
	{"kUSBHIDClass", &_kUSBHIDClass_C},
	{"kUSBCommunicationDataInterfaceClass", &_kUSBCommunicationDataInterfaceClass_C},
	{"kUSBCommunicationControlInterfaceClass", &_kUSBCommunicationControlInterfaceClass_C},
	{"kUSBAudioInterfaceClass", &_kUSBAudioInterfaceClass_C},
	{"kUSBAudioClass", &_kUSBAudioClass_C},
	{"kUSBVendorSpecificClass", &_kUSBVendorSpecificClass_C},
	{"kUSBApplicationSpecificClass", &_kUSBApplicationSpecificClass_C},
	{"kUSBMiscellaneousClass", &_kUSBMiscellaneousClass_C},
	{"kUSBWirelessControllerClass", &_kUSBWirelessControllerClass_C},
	{"kUSBDiagnosticClass", &_kUSBDiagnosticClass_C},
	{"kUSBDataClass", &_kUSBDataClass_C},
	{"kUSBHubClass", &_kUSBHubClass_C},
	{"kUSBCommunicationClass", &_kUSBCommunicationClass_C},
	{"kUSBCommClass", &_kUSBCommClass_C},
	{"kUSBCompositeClass", &_kUSBCompositeClass_C},
	{"kUSBScrollLockKey", &_kUSBScrollLockKey_C},
	{"kUSBNumLockKey", &_kUSBNumLockKey_C},
	{"kUSBCapsLockKey", &_kUSBCapsLockKey_C},
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
	{"kCFURLComponentFragment", &_kCFURLComponentFragment_C},
	{"kCFURLComponentQuery", &_kCFURLComponentQuery_C},
	{"kCFURLComponentParameterString", &_kCFURLComponentParameterString_C},
	{"kCFURLComponentPort", &_kCFURLComponentPort_C},
	{"kCFURLComponentHost", &_kCFURLComponentHost_C},
	{"kCFURLComponentUserInfo", &_kCFURLComponentUserInfo_C},
	{"kCFURLComponentPassword", &_kCFURLComponentPassword_C},
	{"kCFURLComponentUser", &_kCFURLComponentUser_C},
	{"kCFURLComponentResourceSpecifier", &_kCFURLComponentResourceSpecifier_C},
	{"kCFURLComponentPath", &_kCFURLComponentPath_C},
	{"kCFURLComponentNetLocation", &_kCFURLComponentNetLocation_C},
	{"kCFURLComponentScheme", &_kCFURLComponentScheme_C},
	{"kCFURLWindowsPathStyle", &_kCFURLWindowsPathStyle_C},
	{"kCFURLHFSPathStyle", &_kCFURLHFSPathStyle_C},
	{"kCFURLPOSIXPathStyle", &_kCFURLPOSIXPathStyle_C},
	{"kIORegistryIterateParents", &_kIORegistryIterateParents_C},
	{"kIORegistryIterateRecursively", &_kIORegistryIterateRecursively_C},
	{"kOSAsyncRefSize", &_kOSAsyncRefSize_C},
	{"kOSAsyncRefCount", &_kOSAsyncRefCount_C},
	{"kIOInterestCalloutCount", &_kIOInterestCalloutCount_C},
	{"kIOInterestCalloutServiceIndex", &_kIOInterestCalloutServiceIndex_C},
	{"kIOInterestCalloutRefconIndex", &_kIOInterestCalloutRefconIndex_C},
	{"kIOInterestCalloutFuncIndex", &_kIOInterestCalloutFuncIndex_C},
	{"kIOMatchingCalloutCount", &_kIOMatchingCalloutCount_C},
	{"kIOMatchingCalloutRefconIndex", &_kIOMatchingCalloutRefconIndex_C},
	{"kIOMatchingCalloutFuncIndex", &_kIOMatchingCalloutFuncIndex_C},
	{"kIOAsyncCalloutCount", &_kIOAsyncCalloutCount_C},
	{"kIOAsyncCalloutRefconIndex", &_kIOAsyncCalloutRefconIndex_C},
	{"kIOAsyncCalloutFuncIndex", &_kIOAsyncCalloutFuncIndex_C},
	{"kIOAsyncReservedCount", &_kIOAsyncReservedCount_C},
	{"kIOAsyncReservedIndex", &_kIOAsyncReservedIndex_C},
	{"kMaxAsyncArgs", &_kMaxAsyncArgs_C},
	{"kOSAsyncCompleteMessageID", &_kOSAsyncCompleteMessageID_C},
	{"kOSNotificationMessageID", &_kOSNotificationMessageID_C},
	{"kLastIOKitNotificationType", &_kLastIOKitNotificationType_C},
	{"kIOServiceMessageNotificationType", &_kIOServiceMessageNotificationType_C},
	{"kIOAsyncCompletionNotificationType", &_kIOAsyncCompletionNotificationType_C},
	{"kIOServiceTerminatedNotificationType", &_kIOServiceTerminatedNotificationType_C},
	{"kIOServiceMatchedNotificationType", &_kIOServiceMatchedNotificationType_C},
	{"kIOServicePublishNotificationType", &_kIOServicePublishNotificationType_C},
	{"kFirstIOKitNotificationType", &_kFirstIOKitNotificationType_C},
	{"IO_CopyBack", &_IO_CopyBack_C},
	{"IO_WriteThrough", &_IO_WriteThrough_C},
	{"IO_CacheOff", &_IO_CacheOff_C},
	{"kTickScale", &_kTickScale_C},
	{"kSecondScale", &_kSecondScale_C},
	{"kMillisecondScale", &_kMillisecondScale_C},
	{"kMicrosecondScale", &_kMicrosecondScale_C},
	{"kNanosecondScale", &_kNanosecondScale_C},
	{"kIOMapUnique", &_kIOMapUnique_C},
	{"kIOMapReference", &_kIOMapReference_C},
	{"kIOMapStatic", &_kIOMapStatic_C},
	{"kIOMapReadOnly", &_kIOMapReadOnly_C},
	{"kIOMapUserOptionsMask", &_kIOMapUserOptionsMask_C},
	{"kIOMapWriteCombineCache", &_kIOMapWriteCombineCache_C},
	{"kIOMapCopybackCache", &_kIOMapCopybackCache_C},
	{"kIOMapWriteThruCache", &_kIOMapWriteThruCache_C},
	{"kIOMapInhibitCache", &_kIOMapInhibitCache_C},
	{"kIOMapDefaultCache", &_kIOMapDefaultCache_C},
	{"kIOMapCacheShift", &_kIOMapCacheShift_C},
	{"kIOMapCacheMask", &_kIOMapCacheMask_C},
	{"kIOMapAnywhere", &_kIOMapAnywhere_C},
	{"kIOWriteCombineCache", &_kIOWriteCombineCache_C},
	{"kIOCopybackCache", &_kIOCopybackCache_C},
	{"kIOWriteThruCache", &_kIOWriteThruCache_C},
	{"kIOInhibitCache", &_kIOInhibitCache_C},
	{"kIODefaultCache", &_kIODefaultCache_C},
	{"kIODefaultMemoryType", &_kIODefaultMemoryType_C},
	{"kCFRunLoopAllActivities", &_kCFRunLoopAllActivities_C},
	{"kCFRunLoopExit", &_kCFRunLoopExit_C},
	{"kCFRunLoopAfterWaiting", &_kCFRunLoopAfterWaiting_C},
	{"kCFRunLoopBeforeWaiting", &_kCFRunLoopBeforeWaiting_C},
	{"kCFRunLoopBeforeSources", &_kCFRunLoopBeforeSources_C},
	{"kCFRunLoopBeforeTimers", &_kCFRunLoopBeforeTimers_C},
	{"kCFRunLoopEntry", &_kCFRunLoopEntry_C},
	{"kCFRunLoopRunHandledSource", &_kCFRunLoopRunHandledSource_C},
	{"kCFRunLoopRunTimedOut", &_kCFRunLoopRunTimedOut_C},
	{"kCFRunLoopRunStopped", &_kCFRunLoopRunStopped_C},
	{"kCFRunLoopRunFinished", &_kCFRunLoopRunFinished_C},
	{"kCFStringNormalizationFormKC", &_kCFStringNormalizationFormKC_C},
	{"kCFStringNormalizationFormC", &_kCFStringNormalizationFormC_C},
	{"kCFStringNormalizationFormKD", &_kCFStringNormalizationFormKD_C},
	{"kCFStringNormalizationFormD", &_kCFStringNormalizationFormD_C},
	{"kCFCompareNumerically", &_kCFCompareNumerically_C},
	{"kCFCompareLocalized", &_kCFCompareLocalized_C},
	{"kCFCompareNonliteral", &_kCFCompareNonliteral_C},
	{"kCFCompareAnchored", &_kCFCompareAnchored_C},
	{"kCFCompareBackwards", &_kCFCompareBackwards_C},
	{"kCFCompareCaseInsensitive", &_kCFCompareCaseInsensitive_C},
	{"kCFStringEncodingNonLossyASCII", &_kCFStringEncodingNonLossyASCII_C},
	{"kCFStringEncodingUTF8", &_kCFStringEncodingUTF8_C},
	{"kCFStringEncodingUnicode", &_kCFStringEncodingUnicode_C},
	{"kCFStringEncodingASCII", &_kCFStringEncodingASCII_C},
	{"kCFStringEncodingNextStepLatin", &_kCFStringEncodingNextStepLatin_C},
	{"kCFStringEncodingISOLatin1", &_kCFStringEncodingISOLatin1_C},
	{"kCFStringEncodingWindowsLatin1", &_kCFStringEncodingWindowsLatin1_C},
	{"kCFStringEncodingMacRoman", &_kCFStringEncodingMacRoman_C},
	{"kCFCharacterSetSymbol", &_kCFCharacterSetSymbol_C},
	{"kCFCharacterSetCapitalizedLetter", &_kCFCharacterSetCapitalizedLetter_C},
	{"kCFCharacterSetIllegal", &_kCFCharacterSetIllegal_C},
	{"kCFCharacterSetPunctuation", &_kCFCharacterSetPunctuation_C},
	{"kCFCharacterSetAlphaNumeric", &_kCFCharacterSetAlphaNumeric_C},
	{"kCFCharacterSetDecomposable", &_kCFCharacterSetDecomposable_C},
	{"kCFCharacterSetNonBase", &_kCFCharacterSetNonBase_C},
	{"kCFCharacterSetUppercaseLetter", &_kCFCharacterSetUppercaseLetter_C},
	{"kCFCharacterSetLowercaseLetter", &_kCFCharacterSetLowercaseLetter_C},
	{"kCFCharacterSetLetter", &_kCFCharacterSetLetter_C},
	{"kCFCharacterSetDecimalDigit", &_kCFCharacterSetDecimalDigit_C},
	{"kCFCharacterSetWhitespaceAndNewline", &_kCFCharacterSetWhitespaceAndNewline_C},
	{"kCFCharacterSetWhitespace", &_kCFCharacterSetWhitespace_C},
	{"kCFCharacterSetControl", &_kCFCharacterSetControl_C},
	{"kCFGregorianAllUnits", &_kCFGregorianAllUnits_C},
	{"kCFGregorianUnitsSeconds", &_kCFGregorianUnitsSeconds_C},
	{"kCFGregorianUnitsMinutes", &_kCFGregorianUnitsMinutes_C},
	{"kCFGregorianUnitsHours", &_kCFGregorianUnitsHours_C},
	{"kCFGregorianUnitsDays", &_kCFGregorianUnitsDays_C},
	{"kCFGregorianUnitsMonths", &_kCFGregorianUnitsMonths_C},
	{"kCFGregorianUnitsYears", &_kCFGregorianUnitsYears_C},
	{"kCFNotFound", &_kCFNotFound_C},
	{"kCFCompareGreaterThan", &_kCFCompareGreaterThan_C},
	{"kCFCompareEqualTo", &_kCFCompareEqualTo_C},
	{"kCFCompareLessThan", &_kCFCompareLessThan_C},
	{"OSBigEndian", &_OSBigEndian_C},
	{"OSLittleEndian", &_OSLittleEndian_C},
	{"OSUnknownByteOrder", &_OSUnknownByteOrder_C},
	{"TASK_GRAPHICS_SERVER", &_TASK_GRAPHICS_SERVER_C},
	{"TASK_CONTROL_APPLICATION", &_TASK_CONTROL_APPLICATION_C},
	{"TASK_BACKGROUND_APPLICATION", &_TASK_BACKGROUND_APPLICATION_C},
	{"TASK_FOREGROUND_APPLICATION", &_TASK_FOREGROUND_APPLICATION_C},
	{"TASK_UNSPECIFIED", &_TASK_UNSPECIFIED_C},
	{"TASK_RENICED", &_TASK_RENICED_C},
};

Nat4	VPX_MacOSX_IOKit_Constants_Number = 345;

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
