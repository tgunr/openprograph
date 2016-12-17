/*
	
	MacOSX_CGIC.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/

#include "cgic.h"

#pragma mark --------------- Constants ---------------

	VPL_ExtConstant _cgiEnvironmentWrongVersion_C = {"cgiEnvironmentWrongVersion",3,NULL};
	VPL_ExtConstant _cgiEnvironmentSuccess_C = {"cgiEnvironmentSuccess",2,NULL};
	VPL_ExtConstant _cgiEnvironmentMemory_C = {"cgiEnvironmentMemory",1,NULL};
	VPL_ExtConstant _cgiEnvironmentIO_C = {"cgiEnvironmentIO",0,NULL};
	VPL_ExtConstant _cgiFormEOF_C = {"cgiFormEOF",13,NULL};
	VPL_ExtConstant _cgiFormIO_C = {"cgiFormIO",12,NULL};
	VPL_ExtConstant _cgiFormOpenFailed_C = {"cgiFormOpenFailed",11,NULL};
	VPL_ExtConstant _cgiFormNotAFile_C = {"cgiFormNotAFile",10,NULL};
	VPL_ExtConstant _cgiFormNoContentType_C = {"cgiFormNoContentType",9,NULL};
	VPL_ExtConstant _cgiFormNoFileName_C = {"cgiFormNoFileName",8,NULL};
	VPL_ExtConstant _cgiFormMemory_C = {"cgiFormMemory",7,NULL};
	VPL_ExtConstant _cgiFormNoSuchChoice_C = {"cgiFormNoSuchChoice",6,NULL};
	VPL_ExtConstant _cgiFormConstrained_C = {"cgiFormConstrained",5,NULL};
	VPL_ExtConstant _cgiFormNotFound_C = {"cgiFormNotFound",4,NULL};
	VPL_ExtConstant _cgiFormEmpty_C = {"cgiFormEmpty",3,NULL};
	VPL_ExtConstant _cgiFormBadType_C = {"cgiFormBadType",2,NULL};
	VPL_ExtConstant _cgiFormTruncated_C = {"cgiFormTruncated",1,NULL};
	VPL_ExtConstant _cgiFormSuccess_C = {"cgiFormSuccess",0,NULL};

#pragma mark --------------- Structures ---------------

	VPL_ExtStructure _cgiFileStruct_S = {"cgiFileStruct",NULL};

	VPL_ExtField ___sFILE_20 = { "_offset",80,8,kIntType,"NULL",0,0,"long long int",NULL};
	VPL_ExtField ___sFILE_19 = { "_blksize",76,4,kIntType,"NULL",0,0,"int",&___sFILE_20};
	VPL_ExtField ___sFILE_18 = { "_lb",68,8,kStructureType,"NULL",0,0,"__sbuf",&___sFILE_19};
	VPL_ExtField ___sFILE_17 = { "_nbuf",67,1,kPointerType,"unsigned char",0,1,NULL,&___sFILE_18};
	VPL_ExtField ___sFILE_16 = { "_ubuf",64,3,kPointerType,"unsigned char",0,1,NULL,&___sFILE_17};
	VPL_ExtField ___sFILE_15 = { "_ur",60,4,kIntType,"unsigned char",0,1,"int",&___sFILE_16};
	VPL_ExtField ___sFILE_14 = { "_extra",56,4,kPointerType,"__sFILEX",1,0,"T*",&___sFILE_15};
	VPL_ExtField ___sFILE_13 = { "_ub",48,8,kStructureType,"__sFILEX",1,0,"__sbuf",&___sFILE_14};
	VPL_ExtField ___sFILE_12 = { "_write",44,4,kPointerType,"int",1,4,"T*",&___sFILE_13};
	VPL_ExtField ___sFILE_11 = { "_seek",40,4,kPointerType,"long long int",1,8,"T*",&___sFILE_12};
	VPL_ExtField ___sFILE_10 = { "_read",36,4,kPointerType,"int",1,4,"T*",&___sFILE_11};
	VPL_ExtField ___sFILE_9 = { "_close",32,4,kPointerType,"int",1,4,"T*",&___sFILE_10};
	VPL_ExtField ___sFILE_8 = { "_cookie",28,4,kPointerType,"void",1,0,"T*",&___sFILE_9};
	VPL_ExtField ___sFILE_7 = { "_lbfsize",24,4,kIntType,"void",1,0,"int",&___sFILE_8};
	VPL_ExtField ___sFILE_6 = { "_bf",16,8,kStructureType,"void",1,0,"__sbuf",&___sFILE_7};
	VPL_ExtField ___sFILE_5 = { "_file",14,2,kIntType,"void",1,0,"short",&___sFILE_6};
	VPL_ExtField ___sFILE_4 = { "_flags",12,2,kIntType,"void",1,0,"short",&___sFILE_5};
	VPL_ExtField ___sFILE_3 = { "_w",8,4,kIntType,"void",1,0,"int",&___sFILE_4};
	VPL_ExtField ___sFILE_2 = { "_r",4,4,kIntType,"void",1,0,"int",&___sFILE_3};
	VPL_ExtField ___sFILE_1 = { "_p",0,4,kPointerType,"unsigned char",1,1,"T*",&___sFILE_2};
	VPL_ExtStructure ___sFILE_S = {"__sFILE",&___sFILE_1};

	VPL_ExtStructure ___sFILEX_S = {"__sFILEX",NULL};

	VPL_ExtField ___sbuf_2 = { "_size",4,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField ___sbuf_1 = { "_base",0,4,kPointerType,"unsigned char",1,1,"T*",&___sbuf_2};
	VPL_ExtStructure ___sbuf_S = {"__sbuf",&___sbuf_1};

	VPL_ExtField _2_2 = { "opaque",4,4,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _2_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&_2_2};
	VPL_ExtStructure _2_S = {"2",&_2_1};

	VPL_ExtField __opaque_pthread_rwlock_t_2 = { "opaque",4,124,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_rwlock_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_rwlock_t_2};
	VPL_ExtStructure __opaque_pthread_rwlock_t_S = {"_opaque_pthread_rwlock_t",&__opaque_pthread_rwlock_t_1};

	VPL_ExtField __opaque_pthread_rwlockattr_t_2 = { "opaque",4,12,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_rwlockattr_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_rwlockattr_t_2};
	VPL_ExtStructure __opaque_pthread_rwlockattr_t_S = {"_opaque_pthread_rwlockattr_t",&__opaque_pthread_rwlockattr_t_1};

	VPL_ExtField __opaque_pthread_cond_t_2 = { "opaque",4,24,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_cond_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_cond_t_2};
	VPL_ExtStructure __opaque_pthread_cond_t_S = {"_opaque_pthread_cond_t",&__opaque_pthread_cond_t_1};

	VPL_ExtField __opaque_pthread_condattr_t_2 = { "opaque",4,4,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_condattr_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_condattr_t_2};
	VPL_ExtStructure __opaque_pthread_condattr_t_S = {"_opaque_pthread_condattr_t",&__opaque_pthread_condattr_t_1};

	VPL_ExtField __opaque_pthread_mutex_t_2 = { "opaque",4,40,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_mutex_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_mutex_t_2};
	VPL_ExtStructure __opaque_pthread_mutex_t_S = {"_opaque_pthread_mutex_t",&__opaque_pthread_mutex_t_1};

	VPL_ExtField __opaque_pthread_mutexattr_t_2 = { "opaque",4,8,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_mutexattr_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_mutexattr_t_2};
	VPL_ExtStructure __opaque_pthread_mutexattr_t_S = {"_opaque_pthread_mutexattr_t",&__opaque_pthread_mutexattr_t_1};

	VPL_ExtField __opaque_pthread_attr_t_2 = { "opaque",4,36,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_attr_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_attr_t_2};
	VPL_ExtStructure __opaque_pthread_attr_t_S = {"_opaque_pthread_attr_t",&__opaque_pthread_attr_t_1};

	VPL_ExtField __opaque_pthread_t_3 = { "opaque",8,596,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_t_2 = { "cleanup_stack",4,4,kPointerType,"_pthread_handler_rec",1,12,"T*",&__opaque_pthread_t_3};
	VPL_ExtField __opaque_pthread_t_1 = { "sig",0,4,kIntType,"_pthread_handler_rec",1,12,"long int",&__opaque_pthread_t_2};
	VPL_ExtStructure __opaque_pthread_t_S = {"_opaque_pthread_t",&__opaque_pthread_t_1};

	VPL_ExtField __pthread_handler_rec_3 = { "next",8,4,kPointerType,"_pthread_handler_rec",1,12,"T*",NULL};
	VPL_ExtField __pthread_handler_rec_2 = { "arg",4,4,kPointerType,"void",1,0,"T*",&__pthread_handler_rec_3};
	VPL_ExtField __pthread_handler_rec_1 = { "routine",0,4,kPointerType,"void",1,0,"T*",&__pthread_handler_rec_2};
	VPL_ExtStructure __pthread_handler_rec_S = {"_pthread_handler_rec",&__pthread_handler_rec_1};

	VPL_ExtField _fd_set_1 = { "fds_bits",0,128,kPointerType,"int",0,4,NULL,NULL};
	VPL_ExtStructure _fd_set_S = {"fd_set",&_fd_set_1};

#pragma mark --------------- Procedures ---------------

	VPL_Parameter _cgiValueEscapeData_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiValueEscapeData_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiValueEscapeData_1 = { kPointerType,1,"char",1,0,&_cgiValueEscapeData_2};
	VPL_ExtProcedure _cgiValueEscapeData_F = {"cgiValueEscapeData",cgiValueEscapeData,&_cgiValueEscapeData_1,&_cgiValueEscapeData_R};

	VPL_Parameter _cgiValueEscape_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiValueEscape_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _cgiValueEscape_F = {"cgiValueEscape",cgiValueEscape,&_cgiValueEscape_1,&_cgiValueEscape_R};

	VPL_Parameter _cgiHtmlEscapeData_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiHtmlEscapeData_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiHtmlEscapeData_1 = { kPointerType,1,"char",1,0,&_cgiHtmlEscapeData_2};
	VPL_ExtProcedure _cgiHtmlEscapeData_F = {"cgiHtmlEscapeData",cgiHtmlEscapeData,&_cgiHtmlEscapeData_1,&_cgiHtmlEscapeData_R};

	VPL_Parameter _cgiHtmlEscape_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiHtmlEscape_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _cgiHtmlEscape_F = {"cgiHtmlEscape",cgiHtmlEscape,&_cgiHtmlEscape_1,&_cgiHtmlEscape_R};

	VPL_Parameter _cgiFormEntries_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormEntries_1 = { kPointerType,1,"char",3,0,NULL};
	VPL_ExtProcedure _cgiFormEntries_F = {"cgiFormEntries",cgiFormEntries,&_cgiFormEntries_1,&_cgiFormEntries_R};

	VPL_Parameter _cgiReadEnvironment_R = { kEnumType,4,"4",0,0,NULL};
	VPL_Parameter _cgiReadEnvironment_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _cgiReadEnvironment_F = {"cgiReadEnvironment",cgiReadEnvironment,&_cgiReadEnvironment_1,&_cgiReadEnvironment_R};

	VPL_Parameter _cgiWriteEnvironment_R = { kEnumType,4,"4",0,0,NULL};
	VPL_Parameter _cgiWriteEnvironment_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _cgiWriteEnvironment_F = {"cgiWriteEnvironment",cgiWriteEnvironment,&_cgiWriteEnvironment_1,&_cgiWriteEnvironment_R};

	VPL_Parameter _cgiHeaderContentType_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _cgiHeaderContentType_F = {"cgiHeaderContentType",cgiHeaderContentType,&_cgiHeaderContentType_1,NULL};

	VPL_Parameter _cgiHeaderStatus_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _cgiHeaderStatus_1 = { kIntType,4,NULL,0,0,&_cgiHeaderStatus_2};
	VPL_ExtProcedure _cgiHeaderStatus_F = {"cgiHeaderStatus",cgiHeaderStatus,&_cgiHeaderStatus_1,NULL};

	VPL_Parameter _cgiHeaderLocation_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _cgiHeaderLocation_F = {"cgiHeaderLocation",cgiHeaderLocation,&_cgiHeaderLocation_1,NULL};

	VPL_Parameter _cgiHeaderCookieSetInteger_5 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _cgiHeaderCookieSetInteger_4 = { kPointerType,1,"char",1,0,&_cgiHeaderCookieSetInteger_5};
	VPL_Parameter _cgiHeaderCookieSetInteger_3 = { kIntType,4,NULL,0,0,&_cgiHeaderCookieSetInteger_4};
	VPL_Parameter _cgiHeaderCookieSetInteger_2 = { kIntType,4,NULL,0,0,&_cgiHeaderCookieSetInteger_3};
	VPL_Parameter _cgiHeaderCookieSetInteger_1 = { kPointerType,1,"char",1,0,&_cgiHeaderCookieSetInteger_2};
	VPL_ExtProcedure _cgiHeaderCookieSetInteger_F = {"cgiHeaderCookieSetInteger",cgiHeaderCookieSetInteger,&_cgiHeaderCookieSetInteger_1,NULL};

	VPL_Parameter _cgiHeaderCookieSetString_5 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _cgiHeaderCookieSetString_4 = { kPointerType,1,"char",1,0,&_cgiHeaderCookieSetString_5};
	VPL_Parameter _cgiHeaderCookieSetString_3 = { kIntType,4,NULL,0,0,&_cgiHeaderCookieSetString_4};
	VPL_Parameter _cgiHeaderCookieSetString_2 = { kPointerType,1,"char",1,0,&_cgiHeaderCookieSetString_3};
	VPL_Parameter _cgiHeaderCookieSetString_1 = { kPointerType,1,"char",1,0,&_cgiHeaderCookieSetString_2};
	VPL_ExtProcedure _cgiHeaderCookieSetString_F = {"cgiHeaderCookieSetString",cgiHeaderCookieSetString,&_cgiHeaderCookieSetString_1,NULL};

	VPL_Parameter _cgiCookies_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiCookies_1 = { kPointerType,1,"char",3,0,NULL};
	VPL_ExtProcedure _cgiCookies_F = {"cgiCookies",cgiCookies,&_cgiCookies_1,&_cgiCookies_R};

	VPL_Parameter _cgiCookieInteger_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiCookieInteger_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiCookieInteger_2 = { kPointerType,4,"int",1,0,&_cgiCookieInteger_3};
	VPL_Parameter _cgiCookieInteger_1 = { kPointerType,1,"char",1,0,&_cgiCookieInteger_2};
	VPL_ExtProcedure _cgiCookieInteger_F = {"cgiCookieInteger",cgiCookieInteger,&_cgiCookieInteger_1,&_cgiCookieInteger_R};

	VPL_Parameter _cgiCookieString_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiCookieString_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiCookieString_2 = { kPointerType,1,"char",1,0,&_cgiCookieString_3};
	VPL_Parameter _cgiCookieString_1 = { kPointerType,1,"char",1,0,&_cgiCookieString_2};
	VPL_ExtProcedure _cgiCookieString_F = {"cgiCookieString",cgiCookieString,&_cgiCookieString_1,&_cgiCookieString_R};

	VPL_Parameter _cgiFormFileClose_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormFileClose_1 = { kPointerType,0,"cgiFileStruct",1,0,NULL};
	VPL_ExtProcedure _cgiFormFileClose_F = {"cgiFormFileClose",cgiFormFileClose,&_cgiFormFileClose_1,&_cgiFormFileClose_R};

	VPL_Parameter _cgiFormFileRead_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormFileRead_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _cgiFormFileRead_3 = { kIntType,4,NULL,0,0,&_cgiFormFileRead_4};
	VPL_Parameter _cgiFormFileRead_2 = { kPointerType,1,"char",1,0,&_cgiFormFileRead_3};
	VPL_Parameter _cgiFormFileRead_1 = { kPointerType,0,"cgiFileStruct",1,0,&_cgiFormFileRead_2};
	VPL_ExtProcedure _cgiFormFileRead_F = {"cgiFormFileRead",cgiFormFileRead,&_cgiFormFileRead_1,&_cgiFormFileRead_R};

	VPL_Parameter _cgiFormFileOpen_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormFileOpen_2 = { kPointerType,0,"cgiFileStruct",2,0,NULL};
	VPL_Parameter _cgiFormFileOpen_1 = { kPointerType,1,"char",1,0,&_cgiFormFileOpen_2};
	VPL_ExtProcedure _cgiFormFileOpen_F = {"cgiFormFileOpen",cgiFormFileOpen,&_cgiFormFileOpen_1,&_cgiFormFileOpen_R};

	VPL_Parameter _cgiFormFileSize_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormFileSize_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _cgiFormFileSize_1 = { kPointerType,1,"char",1,0,&_cgiFormFileSize_2};
	VPL_ExtProcedure _cgiFormFileSize_F = {"cgiFormFileSize",cgiFormFileSize,&_cgiFormFileSize_1,&_cgiFormFileSize_R};

	VPL_Parameter _cgiFormFileContentType_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormFileContentType_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiFormFileContentType_2 = { kPointerType,1,"char",1,0,&_cgiFormFileContentType_3};
	VPL_Parameter _cgiFormFileContentType_1 = { kPointerType,1,"char",1,0,&_cgiFormFileContentType_2};
	VPL_ExtProcedure _cgiFormFileContentType_F = {"cgiFormFileContentType",cgiFormFileContentType,&_cgiFormFileContentType_1,&_cgiFormFileContentType_R};

	VPL_Parameter _cgiFormFileName_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormFileName_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiFormFileName_2 = { kPointerType,1,"char",1,0,&_cgiFormFileName_3};
	VPL_Parameter _cgiFormFileName_1 = { kPointerType,1,"char",1,0,&_cgiFormFileName_2};
	VPL_ExtProcedure _cgiFormFileName_F = {"cgiFormFileName",cgiFormFileName,&_cgiFormFileName_1,&_cgiFormFileName_R};

	VPL_Parameter _cgiFormRadio_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormRadio_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiFormRadio_4 = { kPointerType,4,"int",1,0,&_cgiFormRadio_5};
	VPL_Parameter _cgiFormRadio_3 = { kIntType,4,NULL,0,0,&_cgiFormRadio_4};
	VPL_Parameter _cgiFormRadio_2 = { kPointerType,1,"char",2,0,&_cgiFormRadio_3};
	VPL_Parameter _cgiFormRadio_1 = { kPointerType,1,"char",1,0,&_cgiFormRadio_2};
	VPL_ExtProcedure _cgiFormRadio_F = {"cgiFormRadio",cgiFormRadio,&_cgiFormRadio_1,&_cgiFormRadio_R};

	VPL_Parameter _cgiFormCheckboxMultiple_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormCheckboxMultiple_5 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _cgiFormCheckboxMultiple_4 = { kPointerType,4,"int",1,0,&_cgiFormCheckboxMultiple_5};
	VPL_Parameter _cgiFormCheckboxMultiple_3 = { kIntType,4,NULL,0,0,&_cgiFormCheckboxMultiple_4};
	VPL_Parameter _cgiFormCheckboxMultiple_2 = { kPointerType,1,"char",2,0,&_cgiFormCheckboxMultiple_3};
	VPL_Parameter _cgiFormCheckboxMultiple_1 = { kPointerType,1,"char",1,0,&_cgiFormCheckboxMultiple_2};
	VPL_ExtProcedure _cgiFormCheckboxMultiple_F = {"cgiFormCheckboxMultiple",cgiFormCheckboxMultiple,&_cgiFormCheckboxMultiple_1,&_cgiFormCheckboxMultiple_R};

	VPL_Parameter _cgiFormCheckboxSingle_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormCheckboxSingle_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _cgiFormCheckboxSingle_F = {"cgiFormCheckboxSingle",cgiFormCheckboxSingle,&_cgiFormCheckboxSingle_1,&_cgiFormCheckboxSingle_R};

	VPL_Parameter _cgiFormSelectMultiple_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormSelectMultiple_5 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _cgiFormSelectMultiple_4 = { kPointerType,4,"int",1,0,&_cgiFormSelectMultiple_5};
	VPL_Parameter _cgiFormSelectMultiple_3 = { kIntType,4,NULL,0,0,&_cgiFormSelectMultiple_4};
	VPL_Parameter _cgiFormSelectMultiple_2 = { kPointerType,1,"char",2,0,&_cgiFormSelectMultiple_3};
	VPL_Parameter _cgiFormSelectMultiple_1 = { kPointerType,1,"char",1,0,&_cgiFormSelectMultiple_2};
	VPL_ExtProcedure _cgiFormSelectMultiple_F = {"cgiFormSelectMultiple",cgiFormSelectMultiple,&_cgiFormSelectMultiple_1,&_cgiFormSelectMultiple_R};

	VPL_Parameter _cgiFormSelectSingle_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormSelectSingle_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiFormSelectSingle_4 = { kPointerType,4,"int",1,0,&_cgiFormSelectSingle_5};
	VPL_Parameter _cgiFormSelectSingle_3 = { kIntType,4,NULL,0,0,&_cgiFormSelectSingle_4};
	VPL_Parameter _cgiFormSelectSingle_2 = { kPointerType,1,"char",2,0,&_cgiFormSelectSingle_3};
	VPL_Parameter _cgiFormSelectSingle_1 = { kPointerType,1,"char",1,0,&_cgiFormSelectSingle_2};
	VPL_ExtProcedure _cgiFormSelectSingle_F = {"cgiFormSelectSingle",cgiFormSelectSingle,&_cgiFormSelectSingle_1,&_cgiFormSelectSingle_R};

	VPL_Parameter _cgiFormDoubleBounded_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormDoubleBounded_5 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _cgiFormDoubleBounded_4 = { kFloatType,8,NULL,0,0,&_cgiFormDoubleBounded_5};
	VPL_Parameter _cgiFormDoubleBounded_3 = { kFloatType,8,NULL,0,0,&_cgiFormDoubleBounded_4};
	VPL_Parameter _cgiFormDoubleBounded_2 = { kPointerType,8,"double",1,0,&_cgiFormDoubleBounded_3};
	VPL_Parameter _cgiFormDoubleBounded_1 = { kPointerType,1,"char",1,0,&_cgiFormDoubleBounded_2};
	VPL_ExtProcedure _cgiFormDoubleBounded_F = {"cgiFormDoubleBounded",cgiFormDoubleBounded,&_cgiFormDoubleBounded_1,&_cgiFormDoubleBounded_R};

	VPL_Parameter _cgiFormDouble_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormDouble_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _cgiFormDouble_2 = { kPointerType,8,"double",1,0,&_cgiFormDouble_3};
	VPL_Parameter _cgiFormDouble_1 = { kPointerType,1,"char",1,0,&_cgiFormDouble_2};
	VPL_ExtProcedure _cgiFormDouble_F = {"cgiFormDouble",cgiFormDouble,&_cgiFormDouble_1,&_cgiFormDouble_R};

	VPL_Parameter _cgiFormIntegerBounded_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormIntegerBounded_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiFormIntegerBounded_4 = { kIntType,4,NULL,0,0,&_cgiFormIntegerBounded_5};
	VPL_Parameter _cgiFormIntegerBounded_3 = { kIntType,4,NULL,0,0,&_cgiFormIntegerBounded_4};
	VPL_Parameter _cgiFormIntegerBounded_2 = { kPointerType,4,"int",1,0,&_cgiFormIntegerBounded_3};
	VPL_Parameter _cgiFormIntegerBounded_1 = { kPointerType,1,"char",1,0,&_cgiFormIntegerBounded_2};
	VPL_ExtProcedure _cgiFormIntegerBounded_F = {"cgiFormIntegerBounded",cgiFormIntegerBounded,&_cgiFormIntegerBounded_1,&_cgiFormIntegerBounded_R};

	VPL_Parameter _cgiFormInteger_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormInteger_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiFormInteger_2 = { kPointerType,4,"int",1,0,&_cgiFormInteger_3};
	VPL_Parameter _cgiFormInteger_1 = { kPointerType,1,"char",1,0,&_cgiFormInteger_2};
	VPL_ExtProcedure _cgiFormInteger_F = {"cgiFormInteger",cgiFormInteger,&_cgiFormInteger_1,&_cgiFormInteger_R};

	VPL_Parameter _cgiStringArrayFree_1 = { kPointerType,1,"char",2,0,NULL};
	VPL_ExtProcedure _cgiStringArrayFree_F = {"cgiStringArrayFree",cgiStringArrayFree,&_cgiStringArrayFree_1,NULL};

	VPL_Parameter _cgiFormStringMultiple_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormStringMultiple_2 = { kPointerType,1,"char",3,0,NULL};
	VPL_Parameter _cgiFormStringMultiple_1 = { kPointerType,1,"char",1,0,&_cgiFormStringMultiple_2};
	VPL_ExtProcedure _cgiFormStringMultiple_F = {"cgiFormStringMultiple",cgiFormStringMultiple,&_cgiFormStringMultiple_1,&_cgiFormStringMultiple_R};

	VPL_Parameter _cgiFormStringSpaceNeeded_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormStringSpaceNeeded_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _cgiFormStringSpaceNeeded_1 = { kPointerType,1,"char",1,0,&_cgiFormStringSpaceNeeded_2};
	VPL_ExtProcedure _cgiFormStringSpaceNeeded_F = {"cgiFormStringSpaceNeeded",cgiFormStringSpaceNeeded,&_cgiFormStringSpaceNeeded_1,&_cgiFormStringSpaceNeeded_R};

	VPL_Parameter _cgiFormStringNoNewlines_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormStringNoNewlines_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiFormStringNoNewlines_2 = { kPointerType,1,"char",1,0,&_cgiFormStringNoNewlines_3};
	VPL_Parameter _cgiFormStringNoNewlines_1 = { kPointerType,1,"char",1,0,&_cgiFormStringNoNewlines_2};
	VPL_ExtProcedure _cgiFormStringNoNewlines_F = {"cgiFormStringNoNewlines",cgiFormStringNoNewlines,&_cgiFormStringNoNewlines_1,&_cgiFormStringNoNewlines_R};

	VPL_Parameter _cgiFormString_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _cgiFormString_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgiFormString_2 = { kPointerType,1,"char",1,0,&_cgiFormString_3};
	VPL_Parameter _cgiFormString_1 = { kPointerType,1,"char",1,0,&_cgiFormString_2};
	VPL_ExtProcedure _cgiFormString_F = {"cgiFormString",cgiFormString,&_cgiFormString_1,&_cgiFormString_R};


#pragma mark --------------- Primitives ---------------

Int4 VPLP_cgiFormSelectSingle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_cgiFormSelectSingle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_StringPtr	theSelectName = NULL;
	vpl_StringPtr	tempCString = NULL;
	V_List			theList = NULL;
	Nat4			listLength = 0;
	Nat4			counter = 0;
	V_Object		block = NULL;
	vpl_StringPtr	*theBlock = NULL;
	int				theChoice = 0;

	Int1		*primName = "cgi-form-select-single";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectType( kString,0, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectType( kList,1, primitive, environment );
	if( result != kNOERROR ) return result;
#endif

	VPLPrimGetInputObjectString( &theSelectName, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	theList = (V_List) VPLPrimGetInputObject(1,primitive,environment);
	listLength = theList->listLength;
	
	theBlock = (vpl_StringPtr *) X_malloc(listLength*sizeof(vpl_StringPtr));
	for( counter=0; counter<listLength; counter++){
		block = theList->objectList[counter];
		if( block == NULL || block->type != kString) {
			record_error("cgi-form-select-single: List element type not string!",primName,kWRONGINPUTTYPE,environment);
			return kERROR;
		} else tempCString = ((V_String) block)->string;
		*(theBlock+counter) = tempCString;
	}

	if( cgiFormSuccess == cgiFormSelectSingle(theSelectName, theBlock, listLength, &theChoice, 0) ){
		tempCString = theBlock[theChoice];
		VPLPrimSetOutputObjectStringCopy(environment,primInArity,0,primitive,tempCString);
	} else {
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
	}
	X_free(theBlock);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

VPL_DictionaryNode VPX_CGIC_Constants[] =	{
	{"cgiEnvironmentWrongVersion", &_cgiEnvironmentWrongVersion_C},
	{"cgiEnvironmentSuccess", &_cgiEnvironmentSuccess_C},
	{"cgiEnvironmentMemory", &_cgiEnvironmentMemory_C},
	{"cgiEnvironmentIO", &_cgiEnvironmentIO_C},
	{"cgiFormEOF", &_cgiFormEOF_C},
	{"cgiFormIO", &_cgiFormIO_C},
	{"cgiFormOpenFailed", &_cgiFormOpenFailed_C},
	{"cgiFormNotAFile", &_cgiFormNotAFile_C},
	{"cgiFormNoContentType", &_cgiFormNoContentType_C},
	{"cgiFormNoFileName", &_cgiFormNoFileName_C},
	{"cgiFormMemory", &_cgiFormMemory_C},
	{"cgiFormNoSuchChoice", &_cgiFormNoSuchChoice_C},
	{"cgiFormConstrained", &_cgiFormConstrained_C},
	{"cgiFormNotFound", &_cgiFormNotFound_C},
	{"cgiFormEmpty", &_cgiFormEmpty_C},
	{"cgiFormBadType", &_cgiFormBadType_C},
	{"cgiFormTruncated", &_cgiFormTruncated_C},
	{"cgiFormSuccess", &_cgiFormSuccess_C},
};

VPL_DictionaryNode VPX_CGIC_Structures[] =	{
	{"cgiFileStruct",&_cgiFileStruct_S},
	{"__sFILE",&___sFILE_S},
	{"__sFILEX",&___sFILEX_S},
	{"__sbuf",&___sbuf_S},
	{"2",&_2_S},
	{"_opaque_pthread_rwlock_t",&__opaque_pthread_rwlock_t_S},
	{"_opaque_pthread_rwlockattr_t",&__opaque_pthread_rwlockattr_t_S},
	{"_opaque_pthread_cond_t",&__opaque_pthread_cond_t_S},
	{"_opaque_pthread_condattr_t",&__opaque_pthread_condattr_t_S},
	{"_opaque_pthread_mutex_t",&__opaque_pthread_mutex_t_S},
	{"_opaque_pthread_mutexattr_t",&__opaque_pthread_mutexattr_t_S},
	{"_opaque_pthread_attr_t",&__opaque_pthread_attr_t_S},
	{"_opaque_pthread_t",&__opaque_pthread_t_S},
	{"_pthread_handler_rec",&__pthread_handler_rec_S},
	{"fd_set",&_fd_set_S},
};

VPL_DictionaryNode VPX_CGIC_Procedures[] =	{
	{"cgiValueEscapeData",&_cgiValueEscapeData_F},
	{"cgiValueEscape",&_cgiValueEscape_F},
	{"cgiHtmlEscapeData",&_cgiHtmlEscapeData_F},
	{"cgiHtmlEscape",&_cgiHtmlEscape_F},
	{"cgiFormEntries",&_cgiFormEntries_F},
	{"cgiReadEnvironment",&_cgiReadEnvironment_F},
	{"cgiWriteEnvironment",&_cgiWriteEnvironment_F},
	{"cgiHeaderContentType",&_cgiHeaderContentType_F},
	{"cgiHeaderStatus",&_cgiHeaderStatus_F},
	{"cgiHeaderLocation",&_cgiHeaderLocation_F},
	{"cgiHeaderCookieSetInteger",&_cgiHeaderCookieSetInteger_F},
	{"cgiHeaderCookieSetString",&_cgiHeaderCookieSetString_F},
	{"cgiCookies",&_cgiCookies_F},
	{"cgiCookieInteger",&_cgiCookieInteger_F},
	{"cgiCookieString",&_cgiCookieString_F},
	{"cgiFormFileClose",&_cgiFormFileClose_F},
	{"cgiFormFileRead",&_cgiFormFileRead_F},
	{"cgiFormFileOpen",&_cgiFormFileOpen_F},
	{"cgiFormFileSize",&_cgiFormFileSize_F},
	{"cgiFormFileContentType",&_cgiFormFileContentType_F},
	{"cgiFormFileName",&_cgiFormFileName_F},
	{"cgiFormRadio",&_cgiFormRadio_F},
	{"cgiFormCheckboxMultiple",&_cgiFormCheckboxMultiple_F},
	{"cgiFormCheckboxSingle",&_cgiFormCheckboxSingle_F},
	{"cgiFormSelectMultiple",&_cgiFormSelectMultiple_F},
	{"cgiFormSelectSingle",&_cgiFormSelectSingle_F},
	{"cgiFormDoubleBounded",&_cgiFormDoubleBounded_F},
	{"cgiFormDouble",&_cgiFormDouble_F},
	{"cgiFormIntegerBounded",&_cgiFormIntegerBounded_F},
	{"cgiFormInteger",&_cgiFormInteger_F},
	{"cgiStringArrayFree",&_cgiStringArrayFree_F},
	{"cgiFormStringMultiple",&_cgiFormStringMultiple_F},
	{"cgiFormStringSpaceNeeded",&_cgiFormStringSpaceNeeded_F},
	{"cgiFormStringNoNewlines",&_cgiFormStringNoNewlines_F},
	{"cgiFormString",&_cgiFormString_F},
	{"cgiFormSubmitClicked",&_cgiFormCheckboxSingle_F},
};

Nat4	VPX_CGIC_Constants_Number = 18;
Nat4	VPX_CGIC_Structures_Number = 15;
Nat4	VPX_CGIC_Procedures_Number = 36;

#pragma export on

Nat4	load_MacOSX_CGIC_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_CGIC_Constants(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_CGIC_Constants_Number,VPX_CGIC_Constants);
		
		return result;
}

Nat4	load_MacOSX_CGIC_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_CGIC_Structures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_CGIC_Structures_Number,VPX_CGIC_Structures);
		
		return result;
}

Nat4	load_MacOSX_CGIC_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_CGIC_Procedures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_CGIC_Procedures_Number,VPX_CGIC_Procedures);
		
		return result;
}

Nat4	load_MacOSX_CGIC_Primitives(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_CGIC_Primitives(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"cgi-form-select-single",dictionary,2,1,VPLP_cgiFormSelectSingle)) == NULL) return kERROR;

        return kNOERROR;

}
#pragma export off
