/*
	
	MacOSX_D2XX_Structures.c
	Copyright 2007 PolyMicro Systems, All Rights Reserved.
	
*/

#ifndef offsetof
#define offsetof(type, member)  __builtin_offsetof (type, member)
#endif

	VPL_ExtField _VPXStruct__ft_device_list_info_node_1 = { "ftHandle",offsetof(struct _ft_device_list_info_node,ftHandle),sizeof(void *),kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _VPXStruct__ft_device_list_info_node_2 = { "Description",offsetof(struct _ft_device_list_info_node,Description),sizeof(char[64]),kPointerType,"char",0,1,NULL,&_VPXStruct__ft_device_list_info_node_1};
	VPL_ExtField _VPXStruct__ft_device_list_info_node_3 = { "SerialNumber",offsetof(struct _ft_device_list_info_node,SerialNumber),sizeof(char[16]),kPointerType,"char",0,1,NULL,&_VPXStruct__ft_device_list_info_node_2};
	VPL_ExtField _VPXStruct__ft_device_list_info_node_4 = { "LocId",offsetof(struct _ft_device_list_info_node,LocId),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__ft_device_list_info_node_3};
	VPL_ExtField _VPXStruct__ft_device_list_info_node_5 = { "ID",offsetof(struct _ft_device_list_info_node,ID),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__ft_device_list_info_node_4};
	VPL_ExtField _VPXStruct__ft_device_list_info_node_6 = { "Type",offsetof(struct _ft_device_list_info_node,Type),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__ft_device_list_info_node_5};
	VPL_ExtField _VPXStruct__ft_device_list_info_node_7 = { "Flags",offsetof(struct _ft_device_list_info_node,Flags),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__ft_device_list_info_node_6};
	VPL_ExtStructure _VPXStruct__ft_device_list_info_node_S = {"_ft_device_list_info_node",&_VPXStruct__ft_device_list_info_node_7,sizeof(struct _ft_device_list_info_node)};

	VPL_ExtField _VPXStruct__FTTIMEOUTS_1 = { "WriteTotalTimeoutConstant",offsetof(struct _FTTIMEOUTS,WriteTotalTimeoutConstant),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct__FTTIMEOUTS_2 = { "WriteTotalTimeoutMultiplier",offsetof(struct _FTTIMEOUTS,WriteTotalTimeoutMultiplier),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTTIMEOUTS_1};
	VPL_ExtField _VPXStruct__FTTIMEOUTS_3 = { "ReadTotalTimeoutConstant",offsetof(struct _FTTIMEOUTS,ReadTotalTimeoutConstant),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTTIMEOUTS_2};
	VPL_ExtField _VPXStruct__FTTIMEOUTS_4 = { "ReadTotalTimeoutMultiplier",offsetof(struct _FTTIMEOUTS,ReadTotalTimeoutMultiplier),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTTIMEOUTS_3};
	VPL_ExtField _VPXStruct__FTTIMEOUTS_5 = { "ReadIntervalTimeout",offsetof(struct _FTTIMEOUTS,ReadIntervalTimeout),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTTIMEOUTS_4};
	VPL_ExtStructure _VPXStruct__FTTIMEOUTS_S = {"_FTTIMEOUTS",&_VPXStruct__FTTIMEOUTS_5,sizeof(struct _FTTIMEOUTS)};

	VPL_ExtField _VPXStruct__FTDCB_1 = { "wReserved1",offsetof(struct _FTDCB,wReserved1),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct__FTDCB_2 = { "EvtChar",offsetof(struct _FTDCB,EvtChar),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct__FTDCB_1};
	VPL_ExtField _VPXStruct__FTDCB_3 = { "EofChar",offsetof(struct _FTDCB,EofChar),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct__FTDCB_2};
	VPL_ExtField _VPXStruct__FTDCB_4 = { "ErrorChar",offsetof(struct _FTDCB,ErrorChar),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct__FTDCB_3};
	VPL_ExtField _VPXStruct__FTDCB_5 = { "XoffChar",offsetof(struct _FTDCB,XoffChar),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct__FTDCB_4};
	VPL_ExtField _VPXStruct__FTDCB_6 = { "XonChar",offsetof(struct _FTDCB,XonChar),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct__FTDCB_5};
	VPL_ExtField _VPXStruct__FTDCB_7 = { "StopBits",offsetof(struct _FTDCB,StopBits),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct__FTDCB_6};
	VPL_ExtField _VPXStruct__FTDCB_8 = { "Parity",offsetof(struct _FTDCB,Parity),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct__FTDCB_7};
	VPL_ExtField _VPXStruct__FTDCB_9 = { "ByteSize",offsetof(struct _FTDCB,ByteSize),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct__FTDCB_8};
	VPL_ExtField _VPXStruct__FTDCB_10 = { "XoffLim",offsetof(struct _FTDCB,XoffLim),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct__FTDCB_9};
	VPL_ExtField _VPXStruct__FTDCB_11 = { "XonLim",offsetof(struct _FTDCB,XonLim),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct__FTDCB_10};
	VPL_ExtField _VPXStruct__FTDCB_12 = { "wReserved",offsetof(struct _FTDCB,wReserved),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct__FTDCB_11};
	VPL_ExtField _VPXStruct__FTDCB_13 = { "_x_unmapped_bits",(offsetof(struct _FTDCB,BaudRate)+sizeof(unsigned long)),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTDCB_12};
	VPL_ExtField _VPXStruct__FTDCB_14 = { "BaudRate",offsetof(struct _FTDCB,BaudRate),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTDCB_13};
	VPL_ExtField _VPXStruct__FTDCB_15 = { "DCBlength",offsetof(struct _FTDCB,DCBlength),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTDCB_14};
	VPL_ExtStructure _VPXStruct__FTDCB_S = {"_FTDCB",&_VPXStruct__FTDCB_15,sizeof(struct _FTDCB)};

	VPL_ExtField _VPXStruct__FTCOMSTAT_1 = { "cbOutQue",offsetof(struct _FTCOMSTAT,cbOutQue),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct__FTCOMSTAT_2 = { "cbInQue",offsetof(struct _FTCOMSTAT,cbInQue),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTCOMSTAT_1};
	VPL_ExtField _VPXStruct__FTCOMSTAT_3 = { "_x_unmapped_bits",0,sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__FTCOMSTAT_2};
	VPL_ExtStructure _VPXStruct__FTCOMSTAT_S = {"_FTCOMSTAT",&_VPXStruct__FTCOMSTAT_3,sizeof(struct _FTCOMSTAT)};

	VPL_ExtField _VPXStruct_ft_program_data_1 = { "RIsVCP",offsetof(struct ft_program_data,RIsVCP),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VPXStruct_ft_program_data_2 = { "Cbus4",offsetof(struct ft_program_data,Cbus4),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_1};
	VPL_ExtField _VPXStruct_ft_program_data_3 = { "Cbus3",offsetof(struct ft_program_data,Cbus3),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_2};
	VPL_ExtField _VPXStruct_ft_program_data_4 = { "Cbus2",offsetof(struct ft_program_data,Cbus2),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_3};
	VPL_ExtField _VPXStruct_ft_program_data_5 = { "Cbus1",offsetof(struct ft_program_data,Cbus1),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_4};
	VPL_ExtField _VPXStruct_ft_program_data_6 = { "Cbus0",offsetof(struct ft_program_data,Cbus0),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_5};
	VPL_ExtField _VPXStruct_ft_program_data_7 = { "InvertRI",offsetof(struct ft_program_data,InvertRI),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_6};
	VPL_ExtField _VPXStruct_ft_program_data_8 = { "InvertDCD",offsetof(struct ft_program_data,InvertDCD),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_7};
	VPL_ExtField _VPXStruct_ft_program_data_9 = { "InvertDSR",offsetof(struct ft_program_data,InvertDSR),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_8};
	VPL_ExtField _VPXStruct_ft_program_data_10 = { "InvertDTR",offsetof(struct ft_program_data,InvertDTR),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_9};
	VPL_ExtField _VPXStruct_ft_program_data_11 = { "InvertCTS",offsetof(struct ft_program_data,InvertCTS),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_10};
	VPL_ExtField _VPXStruct_ft_program_data_12 = { "InvertRTS",offsetof(struct ft_program_data,InvertRTS),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_11};
	VPL_ExtField _VPXStruct_ft_program_data_13 = { "InvertRXD",offsetof(struct ft_program_data,InvertRXD),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_12};
	VPL_ExtField _VPXStruct_ft_program_data_14 = { "InvertTXD",offsetof(struct ft_program_data,InvertTXD),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_13};
	VPL_ExtField _VPXStruct_ft_program_data_15 = { "SerNumEnableR",offsetof(struct ft_program_data,SerNumEnableR),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_14};
	VPL_ExtField _VPXStruct_ft_program_data_16 = { "PullDownEnableR",offsetof(struct ft_program_data,PullDownEnableR),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_15};
	VPL_ExtField _VPXStruct_ft_program_data_17 = { "EndpointSize",offsetof(struct ft_program_data,EndpointSize),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_16};
	VPL_ExtField _VPXStruct_ft_program_data_18 = { "HighDriveIOs",offsetof(struct ft_program_data,HighDriveIOs),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_17};
	VPL_ExtField _VPXStruct_ft_program_data_19 = { "UseExtOsc",offsetof(struct ft_program_data,UseExtOsc),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_18};
	VPL_ExtField _VPXStruct_ft_program_data_20 = { "BIsVCP",offsetof(struct ft_program_data,BIsVCP),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_19};
	VPL_ExtField _VPXStruct_ft_program_data_21 = { "IFBIsFastSer",offsetof(struct ft_program_data,IFBIsFastSer),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_20};
	VPL_ExtField _VPXStruct_ft_program_data_22 = { "IFBIsFifoTar",offsetof(struct ft_program_data,IFBIsFifoTar),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_21};
	VPL_ExtField _VPXStruct_ft_program_data_23 = { "IFBIsFifo",offsetof(struct ft_program_data,IFBIsFifo),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_22};
	VPL_ExtField _VPXStruct_ft_program_data_24 = { "AIsVCP",offsetof(struct ft_program_data,AIsVCP),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_23};
	VPL_ExtField _VPXStruct_ft_program_data_25 = { "IFAIsFastSer",offsetof(struct ft_program_data,IFAIsFastSer),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_24};
	VPL_ExtField _VPXStruct_ft_program_data_26 = { "IFAIsFifoTar",offsetof(struct ft_program_data,IFAIsFifoTar),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_25};
	VPL_ExtField _VPXStruct_ft_program_data_27 = { "IFAIsFifo",offsetof(struct ft_program_data,IFAIsFifo),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_26};
	VPL_ExtField _VPXStruct_ft_program_data_28 = { "BIsHighCurrent",offsetof(struct ft_program_data,BIsHighCurrent),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_27};
	VPL_ExtField _VPXStruct_ft_program_data_29 = { "AIsHighCurrent",offsetof(struct ft_program_data,AIsHighCurrent),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_28};
	VPL_ExtField _VPXStruct_ft_program_data_30 = { "USBVersion5",offsetof(struct ft_program_data,USBVersion5),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ft_program_data_29};
	VPL_ExtField _VPXStruct_ft_program_data_31 = { "USBVersionEnable5",offsetof(struct ft_program_data,USBVersionEnable5),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_30};
	VPL_ExtField _VPXStruct_ft_program_data_32 = { "SerNumEnable5",offsetof(struct ft_program_data,SerNumEnable5),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_31};
	VPL_ExtField _VPXStruct_ft_program_data_33 = { "PullDownEnable5",offsetof(struct ft_program_data,PullDownEnable5),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_32};
	VPL_ExtField _VPXStruct_ft_program_data_34 = { "IsoOutB",offsetof(struct ft_program_data,IsoOutB),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_33};
	VPL_ExtField _VPXStruct_ft_program_data_35 = { "IsoOutA",offsetof(struct ft_program_data,IsoOutA),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_34};
	VPL_ExtField _VPXStruct_ft_program_data_36 = { "IsoInB",offsetof(struct ft_program_data,IsoInB),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_35};
	VPL_ExtField _VPXStruct_ft_program_data_37 = { "IsoInA",offsetof(struct ft_program_data,IsoInA),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_36};
	VPL_ExtField _VPXStruct_ft_program_data_38 = { "Rev5",offsetof(struct ft_program_data,Rev5),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_37};
	VPL_ExtField _VPXStruct_ft_program_data_39 = { "USBVersion",offsetof(struct ft_program_data,USBVersion),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ft_program_data_38};
	VPL_ExtField _VPXStruct_ft_program_data_40 = { "USBVersionEnable",offsetof(struct ft_program_data,USBVersionEnable),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_39};
	VPL_ExtField _VPXStruct_ft_program_data_41 = { "SerNumEnable",offsetof(struct ft_program_data,SerNumEnable),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_40};
	VPL_ExtField _VPXStruct_ft_program_data_42 = { "PullDownEnable",offsetof(struct ft_program_data,PullDownEnable),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_41};
	VPL_ExtField _VPXStruct_ft_program_data_43 = { "IsoOut",offsetof(struct ft_program_data,IsoOut),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_42};
	VPL_ExtField _VPXStruct_ft_program_data_44 = { "IsoIn",offsetof(struct ft_program_data,IsoIn),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_43};
	VPL_ExtField _VPXStruct_ft_program_data_45 = { "Rev4",offsetof(struct ft_program_data,Rev4),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_ft_program_data_44};
	VPL_ExtField _VPXStruct_ft_program_data_46 = { "RemoteWakeup",offsetof(struct ft_program_data,RemoteWakeup),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ft_program_data_45};
	VPL_ExtField _VPXStruct_ft_program_data_47 = { "SelfPowered",offsetof(struct ft_program_data,SelfPowered),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ft_program_data_46};
	VPL_ExtField _VPXStruct_ft_program_data_48 = { "PnP",offsetof(struct ft_program_data,PnP),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ft_program_data_47};
	VPL_ExtField _VPXStruct_ft_program_data_49 = { "MaxPower",offsetof(struct ft_program_data,MaxPower),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ft_program_data_48};
	VPL_ExtField _VPXStruct_ft_program_data_50 = { "SerialNumber",offsetof(struct ft_program_data,SerialNumber),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_ft_program_data_49};
	VPL_ExtField _VPXStruct_ft_program_data_51 = { "Description",offsetof(struct ft_program_data,Description),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_ft_program_data_50};
	VPL_ExtField _VPXStruct_ft_program_data_52 = { "ManufacturerId",offsetof(struct ft_program_data,ManufacturerId),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_ft_program_data_51};
	VPL_ExtField _VPXStruct_ft_program_data_53 = { "Manufacturer",offsetof(struct ft_program_data,Manufacturer),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_ft_program_data_52};
	VPL_ExtField _VPXStruct_ft_program_data_54 = { "ProductId",offsetof(struct ft_program_data,ProductId),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ft_program_data_53};
	VPL_ExtField _VPXStruct_ft_program_data_55 = { "VendorId",offsetof(struct ft_program_data,VendorId),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ft_program_data_54};
	VPL_ExtField _VPXStruct_ft_program_data_56 = { "Version",offsetof(struct ft_program_data,Version),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_ft_program_data_55};
	VPL_ExtField _VPXStruct_ft_program_data_57 = { "Signature2",offsetof(struct ft_program_data,Signature2),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_ft_program_data_56};
	VPL_ExtField _VPXStruct_ft_program_data_58 = { "Signature1",offsetof(struct ft_program_data,Signature1),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_ft_program_data_57};
	VPL_ExtStructure _VPXStruct_ft_program_data_S = {"ft_program_data",&_VPXStruct_ft_program_data_58,sizeof(struct ft_program_data)};

	VPL_ExtField _VPXStruct__EVENT_HANDLE_1 = { "iVar",offsetof(struct _EVENT_HANDLE,iVar),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct__EVENT_HANDLE_2 = { "eMutex",offsetof(struct _EVENT_HANDLE,eMutex),sizeof(struct _opaque_pthread_mutex_t),kStructureType,"NULL",0,0,"_opaque_pthread_mutex_t",&_VPXStruct__EVENT_HANDLE_1};
	VPL_ExtField _VPXStruct__EVENT_HANDLE_3 = { "eCondVar",offsetof(struct _EVENT_HANDLE,eCondVar),sizeof(struct _opaque_pthread_cond_t),kStructureType,"NULL",0,0,"_opaque_pthread_cond_t",&_VPXStruct__EVENT_HANDLE_2};
	VPL_ExtStructure _VPXStruct__EVENT_HANDLE_S = {"_EVENT_HANDLE",&_VPXStruct__EVENT_HANDLE_3,sizeof(struct _EVENT_HANDLE)};

	VPL_ExtStructure _VPXStruct_timeval_S = {"timeval",NULL,0};

	VPL_ExtField _VPXStruct__SECURITY_ATTRIBUTES_1 = { "bInheritHandle",offsetof(struct _SECURITY_ATTRIBUTES,bInheritHandle),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct__SECURITY_ATTRIBUTES_2 = { "lpSecurityDescriptor",offsetof(struct _SECURITY_ATTRIBUTES,lpSecurityDescriptor),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct__SECURITY_ATTRIBUTES_1};
	VPL_ExtField _VPXStruct__SECURITY_ATTRIBUTES_3 = { "nLength",offsetof(struct _SECURITY_ATTRIBUTES,nLength),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__SECURITY_ATTRIBUTES_2};
	VPL_ExtStructure _VPXStruct__SECURITY_ATTRIBUTES_S = {"_SECURITY_ATTRIBUTES",&_VPXStruct__SECURITY_ATTRIBUTES_3,sizeof(struct _SECURITY_ATTRIBUTES)};

	VPL_ExtField _VPXStruct__OVERLAPPED_1 = { "hEvent",offsetof(struct _OVERLAPPED,hEvent),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct__OVERLAPPED_2 = { "OffsetHigh",offsetof(struct _OVERLAPPED,OffsetHigh),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__OVERLAPPED_1};
	VPL_ExtField _VPXStruct__OVERLAPPED_3 = { "Offset",offsetof(struct _OVERLAPPED,Offset),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__OVERLAPPED_2};
	VPL_ExtField _VPXStruct__OVERLAPPED_4 = { "InternalHigh",offsetof(struct _OVERLAPPED,InternalHigh),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__OVERLAPPED_3};
	VPL_ExtField _VPXStruct__OVERLAPPED_5 = { "Internal",offsetof(struct _OVERLAPPED,Internal),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct__OVERLAPPED_4};
	VPL_ExtStructure _VPXStruct__OVERLAPPED_S = {"_OVERLAPPED",&_VPXStruct__OVERLAPPED_5,sizeof(struct _OVERLAPPED)};

	VPL_ExtField _VPXStruct__opaque_pthread_mutex_t_1 = { "__opaque",offsetof(struct _opaque_pthread_mutex_t,__opaque),sizeof(char[40]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_mutex_t_2 = { "__sig",offsetof(struct _opaque_pthread_mutex_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_mutex_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_mutex_t_S = {"_opaque_pthread_mutex_t",&_VPXStruct__opaque_pthread_mutex_t_2,sizeof(struct _opaque_pthread_mutex_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_cond_t_1 = { "__opaque",offsetof(struct _opaque_pthread_cond_t,__opaque),sizeof(char[24]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_cond_t_2 = { "__sig",offsetof(struct _opaque_pthread_cond_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_cond_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_cond_t_S = {"_opaque_pthread_cond_t",&_VPXStruct__opaque_pthread_cond_t_2,sizeof(struct _opaque_pthread_cond_t)};


VPL_DictionaryNode VPX_D2XX_Structures[] =	{
	{"_ft_device_list_info_node",&_VPXStruct__ft_device_list_info_node_S},
	{"_FTTIMEOUTS",&_VPXStruct__FTTIMEOUTS_S},
	{"_FTDCB",&_VPXStruct__FTDCB_S},
	{"_FTCOMSTAT",&_VPXStruct__FTCOMSTAT_S},
	{"ft_program_data",&_VPXStruct_ft_program_data_S},
	{"_EVENT_HANDLE",&_VPXStruct__EVENT_HANDLE_S},
	{"timeval",&_VPXStruct_timeval_S},
	{"_SECURITY_ATTRIBUTES",&_VPXStruct__SECURITY_ATTRIBUTES_S},
	{"_OVERLAPPED",&_VPXStruct__OVERLAPPED_S},
	{"_opaque_pthread_mutex_t",&_VPXStruct__opaque_pthread_mutex_t_S},
	{"_opaque_pthread_cond_t",&_VPXStruct__opaque_pthread_cond_t_S},
};

Nat4	VPX_D2XX_Structures_Number = 11;

#pragma export on

Nat4	load_D2XX_Structures(V_Environment environment,char *bundleID);
Nat4	load_D2XX_Structures(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_D2XX_Structures_Number,VPX_D2XX_Structures);
		
		return result;
}

#pragma export off
