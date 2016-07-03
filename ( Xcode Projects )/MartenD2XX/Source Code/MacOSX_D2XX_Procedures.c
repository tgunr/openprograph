/*
	
	MacOSX_D2XX_Procedures.c
	Copyright 2007 PolyMicro Systems, All Rights Reserved.
	
*/

/* --------------------- Start User created functions -------------------------------- */


/* --------------------- End User created functions -------------------------------- */

	VPL_Parameter _PFT_EVENT_HANDLER_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _PFT_EVENT_HANDLER_1 = { kUnsignedType,4,NULL,0,0,&_PFT_EVENT_HANDLER_2};
	VPL_ExtProcedure _PFT_EVENT_HANDLER_F = {"PFT_EVENT_HANDLER",NULL,&_PFT_EVENT_HANDLER_1,NULL};


	VPL_Parameter _FTID_GetErrorCodeString_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetErrorCodeString_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetErrorCodeString_3 = { kPointerType,1,"char",1,0,&_FTID_GetErrorCodeString_4};
	VPL_Parameter _FTID_GetErrorCodeString_2 = { kUnsignedType,4,NULL,0,0,&_FTID_GetErrorCodeString_3};
	VPL_Parameter _FTID_GetErrorCodeString_1 = { kPointerType,1,"char",1,0,&_FTID_GetErrorCodeString_2};
	VPL_ExtProcedure _FTID_GetErrorCodeString_F = {"FTID_GetErrorCodeString",FTID_GetErrorCodeString,&_FTID_GetErrorCodeString_1,&_FTID_GetErrorCodeString_R};

	VPL_Parameter _FTID_GetDllVersion_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetDllVersion_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetDllVersion_1 = { kPointerType,1,"char",1,0,&_FTID_GetDllVersion_2};
	VPL_ExtProcedure _FTID_GetDllVersion_F = {"FTID_GetDllVersion",FTID_GetDllVersion,&_FTID_GetDllVersion_1,&_FTID_GetDllVersion_R};

	VPL_Parameter _FTID_GetChipIDFromHandle_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetChipIDFromHandle_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FTID_GetChipIDFromHandle_1 = { kPointerType,4,"unsigned long",1,0,&_FTID_GetChipIDFromHandle_2};
	VPL_ExtProcedure _FTID_GetChipIDFromHandle_F = {"FTID_GetChipIDFromHandle",FTID_GetChipIDFromHandle,&_FTID_GetChipIDFromHandle_1,&_FTID_GetChipIDFromHandle_R};

	VPL_Parameter _FTID_GetDeviceChipID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetDeviceChipID_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FTID_GetDeviceChipID_1 = { kUnsignedType,4,NULL,0,0,&_FTID_GetDeviceChipID_2};
	VPL_ExtProcedure _FTID_GetDeviceChipID_F = {"FTID_GetDeviceChipID",FTID_GetDeviceChipID,&_FTID_GetDeviceChipID_1,&_FTID_GetDeviceChipID_R};

	VPL_Parameter _FTID_GetDeviceDescription_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetDeviceDescription_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetDeviceDescription_2 = { kPointerType,1,"char",1,0,&_FTID_GetDeviceDescription_3};
	VPL_Parameter _FTID_GetDeviceDescription_1 = { kUnsignedType,4,NULL,0,0,&_FTID_GetDeviceDescription_2};
	VPL_ExtProcedure _FTID_GetDeviceDescription_F = {"FTID_GetDeviceDescription",FTID_GetDeviceDescription,&_FTID_GetDeviceDescription_1,&_FTID_GetDeviceDescription_R};

	VPL_Parameter _FTID_GetDeviceSerialNumber_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetDeviceSerialNumber_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetDeviceSerialNumber_2 = { kPointerType,1,"char",1,0,&_FTID_GetDeviceSerialNumber_3};
	VPL_Parameter _FTID_GetDeviceSerialNumber_1 = { kUnsignedType,4,NULL,0,0,&_FTID_GetDeviceSerialNumber_2};
	VPL_ExtProcedure _FTID_GetDeviceSerialNumber_F = {"FTID_GetDeviceSerialNumber",FTID_GetDeviceSerialNumber,&_FTID_GetDeviceSerialNumber_1,&_FTID_GetDeviceSerialNumber_R};

	VPL_Parameter _FTID_GetNumDevices_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FTID_GetNumDevices_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FTID_GetNumDevices_F = {"FTID_GetNumDevices",FTID_GetNumDevices,&_FTID_GetNumDevices_1,&_FTID_GetNumDevices_R};

	VPL_Parameter _FT_GetDeviceInfoDetail_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetDeviceInfoDetail_8 = { kPointerType,4,"unsigned long",2,0,NULL};
	VPL_Parameter _FT_GetDeviceInfoDetail_7 = { kPointerType,0,"void",1,0,&_FT_GetDeviceInfoDetail_8};
	VPL_Parameter _FT_GetDeviceInfoDetail_6 = { kPointerType,0,"void",1,0,&_FT_GetDeviceInfoDetail_7};
	VPL_Parameter _FT_GetDeviceInfoDetail_5 = { kPointerType,4,"unsigned long",1,0,&_FT_GetDeviceInfoDetail_6};
	VPL_Parameter _FT_GetDeviceInfoDetail_4 = { kPointerType,4,"unsigned long",1,0,&_FT_GetDeviceInfoDetail_5};
	VPL_Parameter _FT_GetDeviceInfoDetail_3 = { kPointerType,4,"unsigned long",1,0,&_FT_GetDeviceInfoDetail_4};
	VPL_Parameter _FT_GetDeviceInfoDetail_2 = { kPointerType,4,"unsigned long",1,0,&_FT_GetDeviceInfoDetail_3};
	VPL_Parameter _FT_GetDeviceInfoDetail_1 = { kUnsignedType,4,NULL,0,0,&_FT_GetDeviceInfoDetail_2};
	VPL_ExtProcedure _FT_GetDeviceInfoDetail_F = {"FT_GetDeviceInfoDetail",FT_GetDeviceInfoDetail,&_FT_GetDeviceInfoDetail_1,&_FT_GetDeviceInfoDetail_R};

	VPL_Parameter _FT_GetDeviceInfoList_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetDeviceInfoList_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_GetDeviceInfoList_1 = { kPointerType,100,"_ft_device_list_info_node",1,0,&_FT_GetDeviceInfoList_2};
	VPL_ExtProcedure _FT_GetDeviceInfoList_F = {"FT_GetDeviceInfoList",FT_GetDeviceInfoList,&_FT_GetDeviceInfoList_1,&_FT_GetDeviceInfoList_R};

	VPL_Parameter _FT_CreateDeviceInfoList_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_CreateDeviceInfoList_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_CreateDeviceInfoList_F = {"FT_CreateDeviceInfoList",FT_CreateDeviceInfoList,&_FT_CreateDeviceInfoList_1,&_FT_CreateDeviceInfoList_R};

	VPL_Parameter _FT_W32_WaitCommEvent_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_WaitCommEvent_3 = { kPointerType,20,"_OVERLAPPED",1,0,NULL};
	VPL_Parameter _FT_W32_WaitCommEvent_2 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_WaitCommEvent_3};
	VPL_Parameter _FT_W32_WaitCommEvent_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_WaitCommEvent_2};
	VPL_ExtProcedure _FT_W32_WaitCommEvent_F = {"FT_W32_WaitCommEvent",FT_W32_WaitCommEvent,&_FT_W32_WaitCommEvent_1,&_FT_W32_WaitCommEvent_R};

	VPL_Parameter _FT_W32_SetupComm_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_SetupComm_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_SetupComm_2 = { kUnsignedType,4,NULL,0,0,&_FT_W32_SetupComm_3};
	VPL_Parameter _FT_W32_SetupComm_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_SetupComm_2};
	VPL_ExtProcedure _FT_W32_SetupComm_F = {"FT_W32_SetupComm",FT_W32_SetupComm,&_FT_W32_SetupComm_1,&_FT_W32_SetupComm_R};

	VPL_Parameter _FT_W32_SetCommTimeouts_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_SetCommTimeouts_2 = { kPointerType,20,"_FTTIMEOUTS",1,0,NULL};
	VPL_Parameter _FT_W32_SetCommTimeouts_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_SetCommTimeouts_2};
	VPL_ExtProcedure _FT_W32_SetCommTimeouts_F = {"FT_W32_SetCommTimeouts",FT_W32_SetCommTimeouts,&_FT_W32_SetCommTimeouts_1,&_FT_W32_SetCommTimeouts_R};

	VPL_Parameter _FT_W32_SetCommState_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_SetCommState_2 = { kPointerType,28,"_FTDCB",1,0,NULL};
	VPL_Parameter _FT_W32_SetCommState_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_SetCommState_2};
	VPL_ExtProcedure _FT_W32_SetCommState_F = {"FT_W32_SetCommState",FT_W32_SetCommState,&_FT_W32_SetCommState_1,&_FT_W32_SetCommState_R};

	VPL_Parameter _FT_W32_SetCommMask_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_SetCommMask_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_SetCommMask_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_SetCommMask_2};
	VPL_ExtProcedure _FT_W32_SetCommMask_F = {"FT_W32_SetCommMask",FT_W32_SetCommMask,&_FT_W32_SetCommMask_1,&_FT_W32_SetCommMask_R};

	VPL_Parameter _FT_W32_SetCommBreak_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_SetCommBreak_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_W32_SetCommBreak_F = {"FT_W32_SetCommBreak",FT_W32_SetCommBreak,&_FT_W32_SetCommBreak_1,&_FT_W32_SetCommBreak_R};

	VPL_Parameter _FT_W32_PurgeComm_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_PurgeComm_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_PurgeComm_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_PurgeComm_2};
	VPL_ExtProcedure _FT_W32_PurgeComm_F = {"FT_W32_PurgeComm",FT_W32_PurgeComm,&_FT_W32_PurgeComm_1,&_FT_W32_PurgeComm_R};

	VPL_Parameter _FT_W32_GetCommTimeouts_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_GetCommTimeouts_2 = { kPointerType,20,"_FTTIMEOUTS",1,0,NULL};
	VPL_Parameter _FT_W32_GetCommTimeouts_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_GetCommTimeouts_2};
	VPL_ExtProcedure _FT_W32_GetCommTimeouts_F = {"FT_W32_GetCommTimeouts",FT_W32_GetCommTimeouts,&_FT_W32_GetCommTimeouts_1,&_FT_W32_GetCommTimeouts_R};

	VPL_Parameter _FT_W32_GetCommState_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_GetCommState_2 = { kPointerType,28,"_FTDCB",1,0,NULL};
	VPL_Parameter _FT_W32_GetCommState_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_GetCommState_2};
	VPL_ExtProcedure _FT_W32_GetCommState_F = {"FT_W32_GetCommState",FT_W32_GetCommState,&_FT_W32_GetCommState_1,&_FT_W32_GetCommState_R};

	VPL_Parameter _FT_W32_GetCommModemStatus_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_GetCommModemStatus_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_W32_GetCommModemStatus_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_GetCommModemStatus_2};
	VPL_ExtProcedure _FT_W32_GetCommModemStatus_F = {"FT_W32_GetCommModemStatus",FT_W32_GetCommModemStatus,&_FT_W32_GetCommModemStatus_1,&_FT_W32_GetCommModemStatus_R};

	VPL_Parameter _FT_W32_EscapeCommFunction_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_EscapeCommFunction_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_EscapeCommFunction_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_EscapeCommFunction_2};
	VPL_ExtProcedure _FT_W32_EscapeCommFunction_F = {"FT_W32_EscapeCommFunction",FT_W32_EscapeCommFunction,&_FT_W32_EscapeCommFunction_1,&_FT_W32_EscapeCommFunction_R};

	VPL_Parameter _FT_W32_ClearCommError_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_ClearCommError_3 = { kPointerType,12,"_FTCOMSTAT",1,0,NULL};
	VPL_Parameter _FT_W32_ClearCommError_2 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_ClearCommError_3};
	VPL_Parameter _FT_W32_ClearCommError_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_ClearCommError_2};
	VPL_ExtProcedure _FT_W32_ClearCommError_F = {"FT_W32_ClearCommError",FT_W32_ClearCommError,&_FT_W32_ClearCommError_1,&_FT_W32_ClearCommError_R};

	VPL_Parameter _FT_W32_ClearCommBreak_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_ClearCommBreak_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_W32_ClearCommBreak_F = {"FT_W32_ClearCommBreak",FT_W32_ClearCommBreak,&_FT_W32_ClearCommBreak_1,&_FT_W32_ClearCommBreak_R};

	VPL_Parameter _FT_W32_CancelIo_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_CancelIo_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_W32_CancelIo_F = {"FT_W32_CancelIo",FT_W32_CancelIo,&_FT_W32_CancelIo_1,&_FT_W32_CancelIo_R};

	VPL_Parameter _FT_W32_GetOverlappedResult_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_GetOverlappedResult_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_GetOverlappedResult_3 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_GetOverlappedResult_4};
	VPL_Parameter _FT_W32_GetOverlappedResult_2 = { kPointerType,20,"_OVERLAPPED",1,0,&_FT_W32_GetOverlappedResult_3};
	VPL_Parameter _FT_W32_GetOverlappedResult_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_GetOverlappedResult_2};
	VPL_ExtProcedure _FT_W32_GetOverlappedResult_F = {"FT_W32_GetOverlappedResult",FT_W32_GetOverlappedResult,&_FT_W32_GetOverlappedResult_1,&_FT_W32_GetOverlappedResult_R};

	VPL_Parameter _FT_W32_GetLastError_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_GetLastError_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_W32_GetLastError_F = {"FT_W32_GetLastError",FT_W32_GetLastError,&_FT_W32_GetLastError_1,&_FT_W32_GetLastError_R};

	VPL_Parameter _FT_W32_WriteFile_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_WriteFile_5 = { kPointerType,20,"_OVERLAPPED",1,0,NULL};
	VPL_Parameter _FT_W32_WriteFile_4 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_WriteFile_5};
	VPL_Parameter _FT_W32_WriteFile_3 = { kUnsignedType,4,NULL,0,0,&_FT_W32_WriteFile_4};
	VPL_Parameter _FT_W32_WriteFile_2 = { kPointerType,0,"void",1,0,&_FT_W32_WriteFile_3};
	VPL_Parameter _FT_W32_WriteFile_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_WriteFile_2};
	VPL_ExtProcedure _FT_W32_WriteFile_F = {"FT_W32_WriteFile",FT_W32_WriteFile,&_FT_W32_WriteFile_1,&_FT_W32_WriteFile_R};

	VPL_Parameter _FT_W32_ReadFile_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_ReadFile_5 = { kPointerType,20,"_OVERLAPPED",1,0,NULL};
	VPL_Parameter _FT_W32_ReadFile_4 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_ReadFile_5};
	VPL_Parameter _FT_W32_ReadFile_3 = { kUnsignedType,4,NULL,0,0,&_FT_W32_ReadFile_4};
	VPL_Parameter _FT_W32_ReadFile_2 = { kPointerType,0,"void",1,0,&_FT_W32_ReadFile_3};
	VPL_Parameter _FT_W32_ReadFile_1 = { kPointerType,4,"unsigned long",1,0,&_FT_W32_ReadFile_2};
	VPL_ExtProcedure _FT_W32_ReadFile_F = {"FT_W32_ReadFile",FT_W32_ReadFile,&_FT_W32_ReadFile_1,&_FT_W32_ReadFile_R};

	VPL_Parameter _FT_W32_CloseHandle_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_W32_CloseHandle_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_W32_CloseHandle_F = {"FT_W32_CloseHandle",FT_W32_CloseHandle,&_FT_W32_CloseHandle_1,&_FT_W32_CloseHandle_R};

	VPL_Parameter _FT_W32_CreateFile_R = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_W32_CreateFile_7 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _FT_W32_CreateFile_6 = { kUnsignedType,4,NULL,0,0,&_FT_W32_CreateFile_7};
	VPL_Parameter _FT_W32_CreateFile_5 = { kUnsignedType,4,NULL,0,0,&_FT_W32_CreateFile_6};
	VPL_Parameter _FT_W32_CreateFile_4 = { kPointerType,12,"_SECURITY_ATTRIBUTES",1,0,&_FT_W32_CreateFile_5};
	VPL_Parameter _FT_W32_CreateFile_3 = { kUnsignedType,4,NULL,0,0,&_FT_W32_CreateFile_4};
	VPL_Parameter _FT_W32_CreateFile_2 = { kUnsignedType,4,NULL,0,0,&_FT_W32_CreateFile_3};
	VPL_Parameter _FT_W32_CreateFile_1 = { kPointerType,1,"char",1,1,&_FT_W32_CreateFile_2};
	VPL_ExtProcedure _FT_W32_CreateFile_F = {"FT_W32_CreateFile",FT_W32_CreateFile,&_FT_W32_CreateFile_1,&_FT_W32_CreateFile_R};

	VPL_Parameter _FT_ResetPort_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_ResetPort_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_ResetPort_F = {"FT_ResetPort",FT_ResetPort,&_FT_ResetPort_1,&_FT_ResetPort_R};

	VPL_Parameter _FT_SetResetPipeRetryCount_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetResetPipeRetryCount_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetResetPipeRetryCount_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetResetPipeRetryCount_2};
	VPL_ExtProcedure _FT_SetResetPipeRetryCount_F = {"FT_SetResetPipeRetryCount",FT_SetResetPipeRetryCount,&_FT_SetResetPipeRetryCount_1,&_FT_SetResetPipeRetryCount_R};

	VPL_Parameter _FT_RestartInTask_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_RestartInTask_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_RestartInTask_F = {"FT_RestartInTask",FT_RestartInTask,&_FT_RestartInTask_1,&_FT_RestartInTask_R};

	VPL_Parameter _FT_StopInTask_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_StopInTask_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_StopInTask_F = {"FT_StopInTask",FT_StopInTask,&_FT_StopInTask_1,&_FT_StopInTask_R};

	VPL_Parameter _FT_GetDeviceInfo_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetDeviceInfo_6 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _FT_GetDeviceInfo_5 = { kPointerType,1,"char",1,0,&_FT_GetDeviceInfo_6};
	VPL_Parameter _FT_GetDeviceInfo_4 = { kPointerType,1,"char",1,0,&_FT_GetDeviceInfo_5};
	VPL_Parameter _FT_GetDeviceInfo_3 = { kPointerType,4,"unsigned long",1,0,&_FT_GetDeviceInfo_4};
	VPL_Parameter _FT_GetDeviceInfo_2 = { kPointerType,4,"unsigned long",1,0,&_FT_GetDeviceInfo_3};
	VPL_Parameter _FT_GetDeviceInfo_1 = { kPointerType,4,"unsigned long",1,0,&_FT_GetDeviceInfo_2};
	VPL_ExtProcedure _FT_GetDeviceInfo_F = {"FT_GetDeviceInfo",FT_GetDeviceInfo,&_FT_GetDeviceInfo_1,&_FT_GetDeviceInfo_R};

	VPL_Parameter _FT_SetUSBParameters_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetUSBParameters_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetUSBParameters_2 = { kUnsignedType,4,NULL,0,0,&_FT_SetUSBParameters_3};
	VPL_Parameter _FT_SetUSBParameters_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetUSBParameters_2};
	VPL_ExtProcedure _FT_SetUSBParameters_F = {"FT_SetUSBParameters",FT_SetUSBParameters,&_FT_SetUSBParameters_1,&_FT_SetUSBParameters_R};

	VPL_Parameter _FT_GetBitMode_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetBitMode_2 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _FT_GetBitMode_1 = { kPointerType,4,"unsigned long",1,0,&_FT_GetBitMode_2};
	VPL_ExtProcedure _FT_GetBitMode_F = {"FT_GetBitMode",FT_GetBitMode,&_FT_GetBitMode_1,&_FT_GetBitMode_R};

	VPL_Parameter _FT_SetBitMode_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetBitMode_3 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _FT_SetBitMode_2 = { kUnsignedType,1,NULL,0,0,&_FT_SetBitMode_3};
	VPL_Parameter _FT_SetBitMode_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetBitMode_2};
	VPL_ExtProcedure _FT_SetBitMode_F = {"FT_SetBitMode",FT_SetBitMode,&_FT_SetBitMode_1,&_FT_SetBitMode_R};

	VPL_Parameter _FT_GetLatencyTimer_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetLatencyTimer_2 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _FT_GetLatencyTimer_1 = { kPointerType,4,"unsigned long",1,0,&_FT_GetLatencyTimer_2};
	VPL_ExtProcedure _FT_GetLatencyTimer_F = {"FT_GetLatencyTimer",FT_GetLatencyTimer,&_FT_GetLatencyTimer_1,&_FT_GetLatencyTimer_R};

	VPL_Parameter _FT_SetLatencyTimer_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetLatencyTimer_2 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _FT_SetLatencyTimer_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetLatencyTimer_2};
	VPL_ExtProcedure _FT_SetLatencyTimer_F = {"FT_SetLatencyTimer",FT_SetLatencyTimer,&_FT_SetLatencyTimer_1,&_FT_SetLatencyTimer_R};

	VPL_Parameter _FT_EE_UARead_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EE_UARead_4 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_EE_UARead_3 = { kUnsignedType,4,NULL,0,0,&_FT_EE_UARead_4};
	VPL_Parameter _FT_EE_UARead_2 = { kPointerType,1,"unsigned char",1,0,&_FT_EE_UARead_3};
	VPL_Parameter _FT_EE_UARead_1 = { kPointerType,4,"unsigned long",1,0,&_FT_EE_UARead_2};
	VPL_ExtProcedure _FT_EE_UARead_F = {"FT_EE_UARead",FT_EE_UARead,&_FT_EE_UARead_1,&_FT_EE_UARead_R};

	VPL_Parameter _FT_EE_UAWrite_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EE_UAWrite_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EE_UAWrite_2 = { kPointerType,1,"unsigned char",1,0,&_FT_EE_UAWrite_3};
	VPL_Parameter _FT_EE_UAWrite_1 = { kPointerType,4,"unsigned long",1,0,&_FT_EE_UAWrite_2};
	VPL_ExtProcedure _FT_EE_UAWrite_F = {"FT_EE_UAWrite",FT_EE_UAWrite,&_FT_EE_UAWrite_1,&_FT_EE_UAWrite_R};

	VPL_Parameter _FT_EE_UASize_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EE_UASize_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_EE_UASize_1 = { kPointerType,4,"unsigned long",1,0,&_FT_EE_UASize_2};
	VPL_ExtProcedure _FT_EE_UASize_F = {"FT_EE_UASize",FT_EE_UASize,&_FT_EE_UASize_1,&_FT_EE_UASize_R};

	VPL_Parameter _FT_EE_ReadEx_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EE_ReadEx_6 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _FT_EE_ReadEx_5 = { kPointerType,1,"char",1,0,&_FT_EE_ReadEx_6};
	VPL_Parameter _FT_EE_ReadEx_4 = { kPointerType,1,"char",1,0,&_FT_EE_ReadEx_5};
	VPL_Parameter _FT_EE_ReadEx_3 = { kPointerType,1,"char",1,0,&_FT_EE_ReadEx_4};
	VPL_Parameter _FT_EE_ReadEx_2 = { kPointerType,88,"ft_program_data",1,0,&_FT_EE_ReadEx_3};
	VPL_Parameter _FT_EE_ReadEx_1 = { kPointerType,4,"unsigned long",1,0,&_FT_EE_ReadEx_2};
	VPL_ExtProcedure _FT_EE_ReadEx_F = {"FT_EE_ReadEx",FT_EE_ReadEx,&_FT_EE_ReadEx_1,&_FT_EE_ReadEx_R};

	VPL_Parameter _FT_EE_Read_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EE_Read_2 = { kPointerType,88,"ft_program_data",1,0,NULL};
	VPL_Parameter _FT_EE_Read_1 = { kPointerType,4,"unsigned long",1,0,&_FT_EE_Read_2};
	VPL_ExtProcedure _FT_EE_Read_F = {"FT_EE_Read",FT_EE_Read,&_FT_EE_Read_1,&_FT_EE_Read_R};

	VPL_Parameter _FT_EE_ProgramEx_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EE_ProgramEx_6 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _FT_EE_ProgramEx_5 = { kPointerType,1,"char",1,0,&_FT_EE_ProgramEx_6};
	VPL_Parameter _FT_EE_ProgramEx_4 = { kPointerType,1,"char",1,0,&_FT_EE_ProgramEx_5};
	VPL_Parameter _FT_EE_ProgramEx_3 = { kPointerType,1,"char",1,0,&_FT_EE_ProgramEx_4};
	VPL_Parameter _FT_EE_ProgramEx_2 = { kPointerType,88,"ft_program_data",1,0,&_FT_EE_ProgramEx_3};
	VPL_Parameter _FT_EE_ProgramEx_1 = { kPointerType,4,"unsigned long",1,0,&_FT_EE_ProgramEx_2};
	VPL_ExtProcedure _FT_EE_ProgramEx_F = {"FT_EE_ProgramEx",FT_EE_ProgramEx,&_FT_EE_ProgramEx_1,&_FT_EE_ProgramEx_R};

	VPL_Parameter _FT_EE_Program_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EE_Program_2 = { kPointerType,88,"ft_program_data",1,0,NULL};
	VPL_Parameter _FT_EE_Program_1 = { kPointerType,4,"unsigned long",1,0,&_FT_EE_Program_2};
	VPL_ExtProcedure _FT_EE_Program_F = {"FT_EE_Program",FT_EE_Program,&_FT_EE_Program_1,&_FT_EE_Program_R};

	VPL_Parameter _FT_EraseEE_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_EraseEE_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_EraseEE_F = {"FT_EraseEE",FT_EraseEE,&_FT_EraseEE_1,&_FT_EraseEE_R};

	VPL_Parameter _FT_WriteEE_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_WriteEE_3 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _FT_WriteEE_2 = { kUnsignedType,4,NULL,0,0,&_FT_WriteEE_3};
	VPL_Parameter _FT_WriteEE_1 = { kPointerType,4,"unsigned long",1,0,&_FT_WriteEE_2};
	VPL_ExtProcedure _FT_WriteEE_F = {"FT_WriteEE",FT_WriteEE,&_FT_WriteEE_1,&_FT_WriteEE_R};

	VPL_Parameter _FT_ReadEE_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_ReadEE_3 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_Parameter _FT_ReadEE_2 = { kUnsignedType,4,NULL,0,0,&_FT_ReadEE_3};
	VPL_Parameter _FT_ReadEE_1 = { kPointerType,4,"unsigned long",1,0,&_FT_ReadEE_2};
	VPL_ExtProcedure _FT_ReadEE_F = {"FT_ReadEE",FT_ReadEE,&_FT_ReadEE_1,&_FT_ReadEE_R};

	VPL_Parameter _FT_GetEventStatus_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetEventStatus_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_GetEventStatus_1 = { kPointerType,4,"unsigned long",1,0,&_FT_GetEventStatus_2};
	VPL_ExtProcedure _FT_GetEventStatus_F = {"FT_GetEventStatus",FT_GetEventStatus,&_FT_GetEventStatus_1,&_FT_GetEventStatus_R};

	VPL_Parameter _FT_WaitOnMask_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_WaitOnMask_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_WaitOnMask_1 = { kPointerType,4,"unsigned long",1,0,&_FT_WaitOnMask_2};
	VPL_ExtProcedure _FT_WaitOnMask_F = {"FT_WaitOnMask",FT_WaitOnMask,&_FT_WaitOnMask_1,&_FT_WaitOnMask_R};

	VPL_Parameter _FT_SetWaitMask_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetWaitMask_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetWaitMask_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetWaitMask_2};
	VPL_ExtProcedure _FT_SetWaitMask_F = {"FT_SetWaitMask",FT_SetWaitMask,&_FT_SetWaitMask_1,&_FT_SetWaitMask_R};

	VPL_Parameter _FT_SetBreakOff_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetBreakOff_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_SetBreakOff_F = {"FT_SetBreakOff",FT_SetBreakOff,&_FT_SetBreakOff_1,&_FT_SetBreakOff_R};

	VPL_Parameter _FT_SetBreakOn_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetBreakOn_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_SetBreakOn_F = {"FT_SetBreakOn",FT_SetBreakOn,&_FT_SetBreakOn_1,&_FT_SetBreakOn_R};

	VPL_Parameter _FT_GetStatus_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetStatus_4 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_GetStatus_3 = { kPointerType,4,"unsigned long",1,0,&_FT_GetStatus_4};
	VPL_Parameter _FT_GetStatus_2 = { kPointerType,4,"unsigned long",1,0,&_FT_GetStatus_3};
	VPL_Parameter _FT_GetStatus_1 = { kPointerType,4,"unsigned long",1,0,&_FT_GetStatus_2};
	VPL_ExtProcedure _FT_GetStatus_F = {"FT_GetStatus",FT_GetStatus,&_FT_GetStatus_1,&_FT_GetStatus_R};

	VPL_Parameter _FT_SetEventNotification_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetEventNotification_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _FT_SetEventNotification_2 = { kUnsignedType,4,NULL,0,0,&_FT_SetEventNotification_3};
	VPL_Parameter _FT_SetEventNotification_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetEventNotification_2};
	VPL_ExtProcedure _FT_SetEventNotification_F = {"FT_SetEventNotification",FT_SetEventNotification,&_FT_SetEventNotification_1,&_FT_SetEventNotification_R};

	VPL_Parameter _FT_GetQueueStatus_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetQueueStatus_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_GetQueueStatus_1 = { kPointerType,4,"unsigned long",1,0,&_FT_GetQueueStatus_2};
	VPL_ExtProcedure _FT_GetQueueStatus_F = {"FT_GetQueueStatus",FT_GetQueueStatus,&_FT_GetQueueStatus_1,&_FT_GetQueueStatus_R};

	VPL_Parameter _FT_SetTimeouts_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetTimeouts_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetTimeouts_2 = { kUnsignedType,4,NULL,0,0,&_FT_SetTimeouts_3};
	VPL_Parameter _FT_SetTimeouts_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetTimeouts_2};
	VPL_ExtProcedure _FT_SetTimeouts_F = {"FT_SetTimeouts",FT_SetTimeouts,&_FT_SetTimeouts_1,&_FT_SetTimeouts_R};

	VPL_Parameter _FT_Purge_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_Purge_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_Purge_1 = { kPointerType,4,"unsigned long",1,0,&_FT_Purge_2};
	VPL_ExtProcedure _FT_Purge_F = {"FT_Purge",FT_Purge,&_FT_Purge_1,&_FT_Purge_R};

	VPL_Parameter _FT_SetChars_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetChars_5 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _FT_SetChars_4 = { kUnsignedType,1,NULL,0,0,&_FT_SetChars_5};
	VPL_Parameter _FT_SetChars_3 = { kUnsignedType,1,NULL,0,0,&_FT_SetChars_4};
	VPL_Parameter _FT_SetChars_2 = { kUnsignedType,1,NULL,0,0,&_FT_SetChars_3};
	VPL_Parameter _FT_SetChars_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetChars_2};
	VPL_ExtProcedure _FT_SetChars_F = {"FT_SetChars",FT_SetChars,&_FT_SetChars_1,&_FT_SetChars_R};

	VPL_Parameter _FT_GetModemStatus_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetModemStatus_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_GetModemStatus_1 = { kPointerType,4,"unsigned long",1,0,&_FT_GetModemStatus_2};
	VPL_ExtProcedure _FT_GetModemStatus_F = {"FT_GetModemStatus",FT_GetModemStatus,&_FT_GetModemStatus_1,&_FT_GetModemStatus_R};

	VPL_Parameter _FT_ClrRts_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_ClrRts_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_ClrRts_F = {"FT_ClrRts",FT_ClrRts,&_FT_ClrRts_1,&_FT_ClrRts_R};

	VPL_Parameter _FT_SetRts_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetRts_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_SetRts_F = {"FT_SetRts",FT_SetRts,&_FT_SetRts_1,&_FT_SetRts_R};

	VPL_Parameter _FT_ClrDtr_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_ClrDtr_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_ClrDtr_F = {"FT_ClrDtr",FT_ClrDtr,&_FT_ClrDtr_1,&_FT_ClrDtr_R};

	VPL_Parameter _FT_SetDtr_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetDtr_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_SetDtr_F = {"FT_SetDtr",FT_SetDtr,&_FT_SetDtr_1,&_FT_SetDtr_R};

	VPL_Parameter _FT_ResetDevice_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_ResetDevice_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_ResetDevice_F = {"FT_ResetDevice",FT_ResetDevice,&_FT_ResetDevice_1,&_FT_ResetDevice_R};

	VPL_Parameter _FT_SetFlowControl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetFlowControl_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _FT_SetFlowControl_3 = { kUnsignedType,1,NULL,0,0,&_FT_SetFlowControl_4};
	VPL_Parameter _FT_SetFlowControl_2 = { kUnsignedType,2,NULL,0,0,&_FT_SetFlowControl_3};
	VPL_Parameter _FT_SetFlowControl_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetFlowControl_2};
	VPL_ExtProcedure _FT_SetFlowControl_F = {"FT_SetFlowControl",FT_SetFlowControl,&_FT_SetFlowControl_1,&_FT_SetFlowControl_R};

	VPL_Parameter _FT_SetDataCharacteristics_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetDataCharacteristics_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _FT_SetDataCharacteristics_3 = { kUnsignedType,1,NULL,0,0,&_FT_SetDataCharacteristics_4};
	VPL_Parameter _FT_SetDataCharacteristics_2 = { kUnsignedType,1,NULL,0,0,&_FT_SetDataCharacteristics_3};
	VPL_Parameter _FT_SetDataCharacteristics_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetDataCharacteristics_2};
	VPL_ExtProcedure _FT_SetDataCharacteristics_F = {"FT_SetDataCharacteristics",FT_SetDataCharacteristics,&_FT_SetDataCharacteristics_1,&_FT_SetDataCharacteristics_R};

	VPL_Parameter _FT_SetDivisor_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetDivisor_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _FT_SetDivisor_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetDivisor_2};
	VPL_ExtProcedure _FT_SetDivisor_F = {"FT_SetDivisor",FT_SetDivisor,&_FT_SetDivisor_1,&_FT_SetDivisor_R};

	VPL_Parameter _FT_SetBaudRate_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetBaudRate_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetBaudRate_1 = { kPointerType,4,"unsigned long",1,0,&_FT_SetBaudRate_2};
	VPL_ExtProcedure _FT_SetBaudRate_F = {"FT_SetBaudRate",FT_SetBaudRate,&_FT_SetBaudRate_1,&_FT_SetBaudRate_R};

	VPL_Parameter _FT_IoCtl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_IoCtl_8 = { kPointerType,20,"_OVERLAPPED",1,0,NULL};
	VPL_Parameter _FT_IoCtl_7 = { kPointerType,4,"unsigned long",1,0,&_FT_IoCtl_8};
	VPL_Parameter _FT_IoCtl_6 = { kUnsignedType,4,NULL,0,0,&_FT_IoCtl_7};
	VPL_Parameter _FT_IoCtl_5 = { kPointerType,0,"void",1,0,&_FT_IoCtl_6};
	VPL_Parameter _FT_IoCtl_4 = { kUnsignedType,4,NULL,0,0,&_FT_IoCtl_5};
	VPL_Parameter _FT_IoCtl_3 = { kPointerType,0,"void",1,0,&_FT_IoCtl_4};
	VPL_Parameter _FT_IoCtl_2 = { kUnsignedType,4,NULL,0,0,&_FT_IoCtl_3};
	VPL_Parameter _FT_IoCtl_1 = { kPointerType,4,"unsigned long",1,0,&_FT_IoCtl_2};
	VPL_ExtProcedure _FT_IoCtl_F = {"FT_IoCtl",FT_IoCtl,&_FT_IoCtl_1,&_FT_IoCtl_R};

	VPL_Parameter _FT_Write_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_Write_4 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_Write_3 = { kUnsignedType,4,NULL,0,0,&_FT_Write_4};
	VPL_Parameter _FT_Write_2 = { kPointerType,0,"void",1,0,&_FT_Write_3};
	VPL_Parameter _FT_Write_1 = { kPointerType,4,"unsigned long",1,0,&_FT_Write_2};
	VPL_ExtProcedure _FT_Write_F = {"FT_Write",FT_Write,&_FT_Write_1,&_FT_Write_R};

	VPL_Parameter _FT_Read_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_Read_4 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_Read_3 = { kUnsignedType,4,NULL,0,0,&_FT_Read_4};
	VPL_Parameter _FT_Read_2 = { kPointerType,0,"void",1,0,&_FT_Read_3};
	VPL_Parameter _FT_Read_1 = { kPointerType,4,"unsigned long",1,0,&_FT_Read_2};
	VPL_ExtProcedure _FT_Read_F = {"FT_Read",FT_Read,&_FT_Read_1,&_FT_Read_R};

	VPL_Parameter _FT_Close_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_Close_1 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_ExtProcedure _FT_Close_F = {"FT_Close",FT_Close,&_FT_Close_1,&_FT_Close_R};

	VPL_Parameter _FT_GetVIDPID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_GetVIDPID_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _FT_GetVIDPID_1 = { kPointerType,4,"unsigned long",1,0,&_FT_GetVIDPID_2};
	VPL_ExtProcedure _FT_GetVIDPID_F = {"FT_GetVIDPID",FT_GetVIDPID,&_FT_GetVIDPID_1,&_FT_GetVIDPID_R};

	VPL_Parameter _FT_SetVIDPID_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetVIDPID_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_SetVIDPID_1 = { kUnsignedType,4,NULL,0,0,&_FT_SetVIDPID_2};
	VPL_ExtProcedure _FT_SetVIDPID_F = {"FT_SetVIDPID",FT_SetVIDPID,&_FT_SetVIDPID_1,&_FT_SetVIDPID_R};

	VPL_Parameter _FT_ListDevices_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_ListDevices_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_ListDevices_2 = { kPointerType,0,"void",1,0,&_FT_ListDevices_3};
	VPL_Parameter _FT_ListDevices_1 = { kPointerType,0,"void",1,0,&_FT_ListDevices_2};
	VPL_ExtProcedure _FT_ListDevices_F = {"FT_ListDevices",FT_ListDevices,&_FT_ListDevices_1,&_FT_ListDevices_R};

	VPL_Parameter _FT_OpenEx_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_OpenEx_3 = { kPointerType,4,"unsigned long",2,0,NULL};
	VPL_Parameter _FT_OpenEx_2 = { kUnsignedType,4,NULL,0,0,&_FT_OpenEx_3};
	VPL_Parameter _FT_OpenEx_1 = { kPointerType,0,"void",1,0,&_FT_OpenEx_2};
	VPL_ExtProcedure _FT_OpenEx_F = {"FT_OpenEx",FT_OpenEx,&_FT_OpenEx_1,&_FT_OpenEx_R};

	VPL_Parameter _FT_Open_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _FT_Open_2 = { kPointerType,4,"unsigned long",2,0,NULL};
	VPL_Parameter _FT_Open_1 = { kIntType,4,NULL,0,0,&_FT_Open_2};
	VPL_ExtProcedure _FT_Open_F = {"FT_Open",FT_Open,&_FT_Open_1,&_FT_Open_R};


VPL_DictionaryNode VPX_D2XX_Procedures[] =	{
	{"PFT_EVENT_HANDLER",&_PFT_EVENT_HANDLER_F},
	{"FTID_GetErrorCodeString",&_FTID_GetErrorCodeString_F},
	{"FTID_GetDllVersion",&_FTID_GetDllVersion_F},
	{"FTID_GetChipIDFromHandle",&_FTID_GetChipIDFromHandle_F},
	{"FTID_GetDeviceChipID",&_FTID_GetDeviceChipID_F},
	{"FTID_GetDeviceDescription",&_FTID_GetDeviceDescription_F},
	{"FTID_GetDeviceSerialNumber",&_FTID_GetDeviceSerialNumber_F},
	{"FTID_GetNumDevices",&_FTID_GetNumDevices_F},
	{"FT_GetDeviceInfoDetail",&_FT_GetDeviceInfoDetail_F},
	{"FT_GetDeviceInfoList",&_FT_GetDeviceInfoList_F},
	{"FT_CreateDeviceInfoList",&_FT_CreateDeviceInfoList_F},
	{"FT_W32_WaitCommEvent",&_FT_W32_WaitCommEvent_F},
	{"FT_W32_SetupComm",&_FT_W32_SetupComm_F},
	{"FT_W32_SetCommTimeouts",&_FT_W32_SetCommTimeouts_F},
	{"FT_W32_SetCommState",&_FT_W32_SetCommState_F},
	{"FT_W32_SetCommMask",&_FT_W32_SetCommMask_F},
	{"FT_W32_SetCommBreak",&_FT_W32_SetCommBreak_F},
	{"FT_W32_PurgeComm",&_FT_W32_PurgeComm_F},
	{"FT_W32_GetCommTimeouts",&_FT_W32_GetCommTimeouts_F},
	{"FT_W32_GetCommState",&_FT_W32_GetCommState_F},
	{"FT_W32_GetCommModemStatus",&_FT_W32_GetCommModemStatus_F},
	{"FT_W32_EscapeCommFunction",&_FT_W32_EscapeCommFunction_F},
	{"FT_W32_ClearCommError",&_FT_W32_ClearCommError_F},
	{"FT_W32_ClearCommBreak",&_FT_W32_ClearCommBreak_F},
	{"FT_W32_CancelIo",&_FT_W32_CancelIo_F},
	{"FT_W32_GetOverlappedResult",&_FT_W32_GetOverlappedResult_F},
	{"FT_W32_GetLastError",&_FT_W32_GetLastError_F},
	{"FT_W32_WriteFile",&_FT_W32_WriteFile_F},
	{"FT_W32_ReadFile",&_FT_W32_ReadFile_F},
	{"FT_W32_CloseHandle",&_FT_W32_CloseHandle_F},
	{"FT_W32_CreateFile",&_FT_W32_CreateFile_F},
	{"FT_ResetPort",&_FT_ResetPort_F},
	{"FT_SetResetPipeRetryCount",&_FT_SetResetPipeRetryCount_F},
	{"FT_RestartInTask",&_FT_RestartInTask_F},
	{"FT_StopInTask",&_FT_StopInTask_F},
	{"FT_GetDeviceInfo",&_FT_GetDeviceInfo_F},
	{"FT_SetUSBParameters",&_FT_SetUSBParameters_F},
	{"FT_GetBitMode",&_FT_GetBitMode_F},
	{"FT_SetBitMode",&_FT_SetBitMode_F},
	{"FT_GetLatencyTimer",&_FT_GetLatencyTimer_F},
	{"FT_SetLatencyTimer",&_FT_SetLatencyTimer_F},
	{"FT_EE_UARead",&_FT_EE_UARead_F},
	{"FT_EE_UAWrite",&_FT_EE_UAWrite_F},
	{"FT_EE_UASize",&_FT_EE_UASize_F},
	{"FT_EE_ReadEx",&_FT_EE_ReadEx_F},
	{"FT_EE_Read",&_FT_EE_Read_F},
	{"FT_EE_ProgramEx",&_FT_EE_ProgramEx_F},
	{"FT_EE_Program",&_FT_EE_Program_F},
	{"FT_EraseEE",&_FT_EraseEE_F},
	{"FT_WriteEE",&_FT_WriteEE_F},
	{"FT_ReadEE",&_FT_ReadEE_F},
	{"FT_GetEventStatus",&_FT_GetEventStatus_F},
	{"FT_WaitOnMask",&_FT_WaitOnMask_F},
	{"FT_SetWaitMask",&_FT_SetWaitMask_F},
	{"FT_SetBreakOff",&_FT_SetBreakOff_F},
	{"FT_SetBreakOn",&_FT_SetBreakOn_F},
	{"FT_GetStatus",&_FT_GetStatus_F},
	{"FT_SetEventNotification",&_FT_SetEventNotification_F},
	{"FT_GetQueueStatus",&_FT_GetQueueStatus_F},
	{"FT_SetTimeouts",&_FT_SetTimeouts_F},
	{"FT_Purge",&_FT_Purge_F},
	{"FT_SetChars",&_FT_SetChars_F},
	{"FT_GetModemStatus",&_FT_GetModemStatus_F},
	{"FT_ClrRts",&_FT_ClrRts_F},
	{"FT_SetRts",&_FT_SetRts_F},
	{"FT_ClrDtr",&_FT_ClrDtr_F},
	{"FT_SetDtr",&_FT_SetDtr_F},
	{"FT_ResetDevice",&_FT_ResetDevice_F},
	{"FT_SetFlowControl",&_FT_SetFlowControl_F},
	{"FT_SetDataCharacteristics",&_FT_SetDataCharacteristics_F},
	{"FT_SetDivisor",&_FT_SetDivisor_F},
	{"FT_SetBaudRate",&_FT_SetBaudRate_F},
	{"FT_IoCtl",&_FT_IoCtl_F},
	{"FT_Write",&_FT_Write_F},
	{"FT_Read",&_FT_Read_F},
	{"FT_Close",&_FT_Close_F},
	{"FT_GetVIDPID",&_FT_GetVIDPID_F},
	{"FT_SetVIDPID",&_FT_SetVIDPID_F},
	{"FT_ListDevices",&_FT_ListDevices_F},
	{"FT_OpenEx",&_FT_OpenEx_F},
	{"FT_Open",&_FT_Open_F},
};

Nat4	VPX_D2XX_Procedures_Number = 81;

#pragma export on

Nat4	load_D2XX_Procedures(V_Environment environment,char *bundleID);
Nat4	load_D2XX_Procedures(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_D2XX_Procedures_Number,VPX_D2XX_Procedures);
		
		return result;
}

#pragma export off
