/*
	
	MacOSX_Structures.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/

	VPL_ExtField _ICD_DisposePropertyPB_2 = { "property",6,4,kPointerType,"OpaqueICAProperty",1,0,"T*",NULL};
	VPL_ExtField _ICD_DisposePropertyPB_1 = { "header",0,6,kStructureType,"OpaqueICAProperty",1,0,"ICDHeader",&_ICD_DisposePropertyPB_2};
	VPL_ExtStructure _ICD_DisposePropertyPB_S = {"ICD_DisposePropertyPB",&_ICD_DisposePropertyPB_1};

	VPL_ExtField _ICD_NewPropertyPB_4 = { "property",26,4,kPointerType,"OpaqueICAProperty",1,0,"T*",NULL};
	VPL_ExtField _ICD_NewPropertyPB_3 = { "propertyInfo",10,16,kStructureType,"OpaqueICAProperty",1,0,"ICAPropertyInfo",&_ICD_NewPropertyPB_4};
	VPL_ExtField _ICD_NewPropertyPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICD_NewPropertyPB_3};
	VPL_ExtField _ICD_NewPropertyPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICDHeader",&_ICD_NewPropertyPB_2};
	VPL_ExtStructure _ICD_NewPropertyPB_S = {"ICD_NewPropertyPB",&_ICD_NewPropertyPB_1};

	VPL_ExtField _ICD_DisposeObjectPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",NULL};
	VPL_ExtField _ICD_DisposeObjectPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICDHeader",&_ICD_DisposeObjectPB_2};
	VPL_ExtStructure _ICD_DisposeObjectPB_S = {"ICD_DisposeObjectPB",&_ICD_DisposeObjectPB_1};

	VPL_ExtField _ICD_NewObjectPB_4 = { "object",18,4,kPointerType,"OpaqueICAObject",1,0,"T*",NULL};
	VPL_ExtField _ICD_NewObjectPB_3 = { "objectInfo",10,8,kStructureType,"OpaqueICAObject",1,0,"ICAObjectInfo",&_ICD_NewObjectPB_4};
	VPL_ExtField _ICD_NewObjectPB_2 = { "parentObject",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICD_NewObjectPB_3};
	VPL_ExtField _ICD_NewObjectPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICDHeader",&_ICD_NewObjectPB_2};
	VPL_ExtStructure _ICD_NewObjectPB_S = {"ICD_NewObjectPB",&_ICD_NewObjectPB_1};

	VPL_ExtField _ICDHeader_2 = { "refcon",2,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICDHeader_1 = { "err",0,2,kIntType,"NULL",0,0,"short",&_ICDHeader_2};
	VPL_ExtStructure _ICDHeader_S = {"ICDHeader",&_ICDHeader_1};

	VPL_ExtField _ICACopyObjectPropertyDictionaryPB_3 = { "theDict",10,4,kPointerType,"__CFDictionary",2,0,"T*",NULL};
	VPL_ExtField _ICACopyObjectPropertyDictionaryPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICACopyObjectPropertyDictionaryPB_3};
	VPL_ExtField _ICACopyObjectPropertyDictionaryPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICACopyObjectPropertyDictionaryPB_2};
	VPL_ExtStructure _ICACopyObjectPropertyDictionaryPB_S = {"ICACopyObjectPropertyDictionaryPB",&_ICACopyObjectPropertyDictionaryPB_1};

	VPL_ExtField _ICADownloadFilePB_8 = { "fileFSRef",30,4,kPointerType,"FSRef",1,80,"T*",NULL};
	VPL_ExtField _ICADownloadFilePB_7 = { "rotationAngle",26,4,kIntType,"FSRef",1,80,"long int",&_ICADownloadFilePB_8};
	VPL_ExtField _ICADownloadFilePB_6 = { "fileCreator",22,4,kUnsignedType,"FSRef",1,80,"unsigned long",&_ICADownloadFilePB_7};
	VPL_ExtField _ICADownloadFilePB_5 = { "fileType",18,4,kUnsignedType,"FSRef",1,80,"unsigned long",&_ICADownloadFilePB_6};
	VPL_ExtField _ICADownloadFilePB_4 = { "flags",14,4,kUnsignedType,"FSRef",1,80,"unsigned long",&_ICADownloadFilePB_5};
	VPL_ExtField _ICADownloadFilePB_3 = { "dirFSRef",10,4,kPointerType,"FSRef",1,80,"T*",&_ICADownloadFilePB_4};
	VPL_ExtField _ICADownloadFilePB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICADownloadFilePB_3};
	VPL_ExtField _ICADownloadFilePB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICADownloadFilePB_2};
	VPL_ExtStructure _ICADownloadFilePB_S = {"ICADownloadFilePB",&_ICADownloadFilePB_1};

	VPL_ExtField _ICARegisterEventNotificationPB_4 = { "notifyProc",14,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _ICARegisterEventNotificationPB_3 = { "notifyType",10,4,kUnsignedType,"void",1,0,"unsigned long",&_ICARegisterEventNotificationPB_4};
	VPL_ExtField _ICARegisterEventNotificationPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICARegisterEventNotificationPB_3};
	VPL_ExtField _ICARegisterEventNotificationPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICARegisterEventNotificationPB_2};
	VPL_ExtStructure _ICARegisterEventNotificationPB_S = {"ICARegisterEventNotificationPB",&_ICARegisterEventNotificationPB_1};

	VPL_ExtField _ICAObjectSendMessagePB_4 = { "result",30,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAObjectSendMessagePB_3 = { "message",10,20,kStructureType,"NULL",0,0,"ICAMessage",&_ICAObjectSendMessagePB_4};
	VPL_ExtField _ICAObjectSendMessagePB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAObjectSendMessagePB_3};
	VPL_ExtField _ICAObjectSendMessagePB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAObjectSendMessagePB_2};
	VPL_ExtStructure _ICAObjectSendMessagePB_S = {"ICAObjectSendMessagePB",&_ICAObjectSendMessagePB_1};

	VPL_ExtField _ICAGetDeviceListPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",NULL};
	VPL_ExtField _ICAGetDeviceListPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetDeviceListPB_2};
	VPL_ExtStructure _ICAGetDeviceListPB_S = {"ICAGetDeviceListPB",&_ICAGetDeviceListPB_1};

	VPL_ExtField _ICASetPropertyRefConPB_3 = { "propertyRefCon",10,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICASetPropertyRefConPB_2 = { "property",6,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICASetPropertyRefConPB_3};
	VPL_ExtField _ICASetPropertyRefConPB_1 = { "header",0,6,kStructureType,"OpaqueICAProperty",1,0,"ICAHeader",&_ICASetPropertyRefConPB_2};
	VPL_ExtStructure _ICASetPropertyRefConPB_S = {"ICASetPropertyRefConPB",&_ICASetPropertyRefConPB_1};

	VPL_ExtField _ICAGetPropertyRefConPB_3 = { "propertyRefCon",10,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAGetPropertyRefConPB_2 = { "property",6,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICAGetPropertyRefConPB_3};
	VPL_ExtField _ICAGetPropertyRefConPB_1 = { "header",0,6,kStructureType,"OpaqueICAProperty",1,0,"ICAHeader",&_ICAGetPropertyRefConPB_2};
	VPL_ExtStructure _ICAGetPropertyRefConPB_S = {"ICAGetPropertyRefConPB",&_ICAGetPropertyRefConPB_1};

	VPL_ExtField _ICAGetRootOfPropertyPB_4 = { "rootInfo",14,8,kStructureType,"NULL",0,0,"ICAObjectInfo",NULL};
	VPL_ExtField _ICAGetRootOfPropertyPB_3 = { "rootObject",10,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetRootOfPropertyPB_4};
	VPL_ExtField _ICAGetRootOfPropertyPB_2 = { "property",6,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICAGetRootOfPropertyPB_3};
	VPL_ExtField _ICAGetRootOfPropertyPB_1 = { "header",0,6,kStructureType,"OpaqueICAProperty",1,0,"ICAHeader",&_ICAGetRootOfPropertyPB_2};
	VPL_ExtStructure _ICAGetRootOfPropertyPB_S = {"ICAGetRootOfPropertyPB",&_ICAGetRootOfPropertyPB_1};

	VPL_ExtField _ICAGetParentOfPropertyPB_4 = { "parentInfo",14,8,kStructureType,"NULL",0,0,"ICAObjectInfo",NULL};
	VPL_ExtField _ICAGetParentOfPropertyPB_3 = { "parentObject",10,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetParentOfPropertyPB_4};
	VPL_ExtField _ICAGetParentOfPropertyPB_2 = { "property",6,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICAGetParentOfPropertyPB_3};
	VPL_ExtField _ICAGetParentOfPropertyPB_1 = { "header",0,6,kStructureType,"OpaqueICAProperty",1,0,"ICAHeader",&_ICAGetParentOfPropertyPB_2};
	VPL_ExtStructure _ICAGetParentOfPropertyPB_S = {"ICAGetParentOfPropertyPB",&_ICAGetParentOfPropertyPB_1};

	VPL_ExtField _ICASetPropertyDataPB_6 = { "dataType",22,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICASetPropertyDataPB_5 = { "dataSize",18,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ICASetPropertyDataPB_6};
	VPL_ExtField _ICASetPropertyDataPB_4 = { "dataPtr",14,4,kPointerType,"void",1,0,"T*",&_ICASetPropertyDataPB_5};
	VPL_ExtField _ICASetPropertyDataPB_3 = { "startByte",10,4,kUnsignedType,"void",1,0,"unsigned long",&_ICASetPropertyDataPB_4};
	VPL_ExtField _ICASetPropertyDataPB_2 = { "property",6,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICASetPropertyDataPB_3};
	VPL_ExtField _ICASetPropertyDataPB_1 = { "header",0,6,kStructureType,"OpaqueICAProperty",1,0,"ICAHeader",&_ICASetPropertyDataPB_2};
	VPL_ExtStructure _ICASetPropertyDataPB_S = {"ICASetPropertyDataPB",&_ICASetPropertyDataPB_1};

	VPL_ExtField _ICAGetPropertyDataPB_7 = { "dataType",26,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAGetPropertyDataPB_6 = { "actualSize",22,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ICAGetPropertyDataPB_7};
	VPL_ExtField _ICAGetPropertyDataPB_5 = { "dataPtr",18,4,kPointerType,"void",1,0,"T*",&_ICAGetPropertyDataPB_6};
	VPL_ExtField _ICAGetPropertyDataPB_4 = { "requestedSize",14,4,kUnsignedType,"void",1,0,"unsigned long",&_ICAGetPropertyDataPB_5};
	VPL_ExtField _ICAGetPropertyDataPB_3 = { "startByte",10,4,kUnsignedType,"void",1,0,"unsigned long",&_ICAGetPropertyDataPB_4};
	VPL_ExtField _ICAGetPropertyDataPB_2 = { "property",6,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICAGetPropertyDataPB_3};
	VPL_ExtField _ICAGetPropertyDataPB_1 = { "header",0,6,kStructureType,"OpaqueICAProperty",1,0,"ICAHeader",&_ICAGetPropertyDataPB_2};
	VPL_ExtStructure _ICAGetPropertyDataPB_S = {"ICAGetPropertyDataPB",&_ICAGetPropertyDataPB_1};

	VPL_ExtField _ICAGetPropertyInfoPB_3 = { "propertyInfo",10,16,kStructureType,"NULL",0,0,"ICAPropertyInfo",NULL};
	VPL_ExtField _ICAGetPropertyInfoPB_2 = { "property",6,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICAGetPropertyInfoPB_3};
	VPL_ExtField _ICAGetPropertyInfoPB_1 = { "header",0,6,kStructureType,"OpaqueICAProperty",1,0,"ICAHeader",&_ICAGetPropertyInfoPB_2};
	VPL_ExtStructure _ICAGetPropertyInfoPB_S = {"ICAGetPropertyInfoPB",&_ICAGetPropertyInfoPB_1};

	VPL_ExtField _ICAGetPropertyByTypePB_5 = { "propertyInfo",18,16,kStructureType,"NULL",0,0,"ICAPropertyInfo",NULL};
	VPL_ExtField _ICAGetPropertyByTypePB_4 = { "property",14,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICAGetPropertyByTypePB_5};
	VPL_ExtField _ICAGetPropertyByTypePB_3 = { "propertyType",10,4,kUnsignedType,"OpaqueICAProperty",1,0,"unsigned long",&_ICAGetPropertyByTypePB_4};
	VPL_ExtField _ICAGetPropertyByTypePB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetPropertyByTypePB_3};
	VPL_ExtField _ICAGetPropertyByTypePB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetPropertyByTypePB_2};
	VPL_ExtStructure _ICAGetPropertyByTypePB_S = {"ICAGetPropertyByTypePB",&_ICAGetPropertyByTypePB_1};

	VPL_ExtField _ICAGetNthPropertyPB_5 = { "propertyInfo",18,16,kStructureType,"NULL",0,0,"ICAPropertyInfo",NULL};
	VPL_ExtField _ICAGetNthPropertyPB_4 = { "property",14,4,kPointerType,"OpaqueICAProperty",1,0,"T*",&_ICAGetNthPropertyPB_5};
	VPL_ExtField _ICAGetNthPropertyPB_3 = { "index",10,4,kUnsignedType,"OpaqueICAProperty",1,0,"unsigned long",&_ICAGetNthPropertyPB_4};
	VPL_ExtField _ICAGetNthPropertyPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetNthPropertyPB_3};
	VPL_ExtField _ICAGetNthPropertyPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetNthPropertyPB_2};
	VPL_ExtStructure _ICAGetNthPropertyPB_S = {"ICAGetNthPropertyPB",&_ICAGetNthPropertyPB_1};

	VPL_ExtField _ICAGetPropertyCountPB_3 = { "count",10,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAGetPropertyCountPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetPropertyCountPB_3};
	VPL_ExtField _ICAGetPropertyCountPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetPropertyCountPB_2};
	VPL_ExtStructure _ICAGetPropertyCountPB_S = {"ICAGetPropertyCountPB",&_ICAGetPropertyCountPB_1};

	VPL_ExtField _ICASetObjectRefConPB_3 = { "objectRefCon",10,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICASetObjectRefConPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICASetObjectRefConPB_3};
	VPL_ExtField _ICASetObjectRefConPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICASetObjectRefConPB_2};
	VPL_ExtStructure _ICASetObjectRefConPB_S = {"ICASetObjectRefConPB",&_ICASetObjectRefConPB_1};

	VPL_ExtField _ICAGetObjectRefConPB_3 = { "objectRefCon",10,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAGetObjectRefConPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetObjectRefConPB_3};
	VPL_ExtField _ICAGetObjectRefConPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetObjectRefConPB_2};
	VPL_ExtStructure _ICAGetObjectRefConPB_S = {"ICAGetObjectRefConPB",&_ICAGetObjectRefConPB_1};

	VPL_ExtField _ICAGetRootOfObjectPB_4 = { "rootInfo",14,8,kStructureType,"NULL",0,0,"ICAObjectInfo",NULL};
	VPL_ExtField _ICAGetRootOfObjectPB_3 = { "rootObject",10,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetRootOfObjectPB_4};
	VPL_ExtField _ICAGetRootOfObjectPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetRootOfObjectPB_3};
	VPL_ExtField _ICAGetRootOfObjectPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetRootOfObjectPB_2};
	VPL_ExtStructure _ICAGetRootOfObjectPB_S = {"ICAGetRootOfObjectPB",&_ICAGetRootOfObjectPB_1};

	VPL_ExtField _ICAGetParentOfObjectPB_4 = { "parentInfo",14,8,kStructureType,"NULL",0,0,"ICAObjectInfo",NULL};
	VPL_ExtField _ICAGetParentOfObjectPB_3 = { "parentObject",10,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetParentOfObjectPB_4};
	VPL_ExtField _ICAGetParentOfObjectPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetParentOfObjectPB_3};
	VPL_ExtField _ICAGetParentOfObjectPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetParentOfObjectPB_2};
	VPL_ExtStructure _ICAGetParentOfObjectPB_S = {"ICAGetParentOfObjectPB",&_ICAGetParentOfObjectPB_1};

	VPL_ExtField _ICAGetObjectInfoPB_3 = { "objectInfo",10,8,kStructureType,"NULL",0,0,"ICAObjectInfo",NULL};
	VPL_ExtField _ICAGetObjectInfoPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetObjectInfoPB_3};
	VPL_ExtField _ICAGetObjectInfoPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetObjectInfoPB_2};
	VPL_ExtStructure _ICAGetObjectInfoPB_S = {"ICAGetObjectInfoPB",&_ICAGetObjectInfoPB_1};

	VPL_ExtField _ICAGetNthChildPB_5 = { "childInfo",18,8,kStructureType,"NULL",0,0,"ICAObjectInfo",NULL};
	VPL_ExtField _ICAGetNthChildPB_4 = { "childObject",14,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetNthChildPB_5};
	VPL_ExtField _ICAGetNthChildPB_3 = { "index",10,4,kUnsignedType,"OpaqueICAObject",1,0,"unsigned long",&_ICAGetNthChildPB_4};
	VPL_ExtField _ICAGetNthChildPB_2 = { "parentObject",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetNthChildPB_3};
	VPL_ExtField _ICAGetNthChildPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetNthChildPB_2};
	VPL_ExtStructure _ICAGetNthChildPB_S = {"ICAGetNthChildPB",&_ICAGetNthChildPB_1};

	VPL_ExtField _ICAGetChildCountPB_3 = { "count",10,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAGetChildCountPB_2 = { "object",6,4,kPointerType,"OpaqueICAObject",1,0,"T*",&_ICAGetChildCountPB_3};
	VPL_ExtField _ICAGetChildCountPB_1 = { "header",0,6,kStructureType,"OpaqueICAObject",1,0,"ICAHeader",&_ICAGetChildCountPB_2};
	VPL_ExtStructure _ICAGetChildCountPB_S = {"ICAGetChildCountPB",&_ICAGetChildCountPB_1};

	VPL_ExtField _ICAHeader_2 = { "refcon",2,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAHeader_1 = { "err",0,2,kIntType,"NULL",0,0,"short",&_ICAHeader_2};
	VPL_ExtStructure _ICAHeader_S = {"ICAHeader",&_ICAHeader_1};

	VPL_ExtField _ICAThumbnail_4 = { "data",12,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ICAThumbnail_3 = { "dataSize",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ICAThumbnail_4};
	VPL_ExtField _ICAThumbnail_2 = { "height",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ICAThumbnail_3};
	VPL_ExtField _ICAThumbnail_1 = { "width",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ICAThumbnail_2};
	VPL_ExtStructure _ICAThumbnail_S = {"ICAThumbnail",&_ICAThumbnail_1};

	VPL_ExtField _ICAMessage_5 = { "dataType",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAMessage_4 = { "dataSize",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ICAMessage_5};
	VPL_ExtField _ICAMessage_3 = { "dataPtr",8,4,kPointerType,"void",1,0,"T*",&_ICAMessage_4};
	VPL_ExtField _ICAMessage_2 = { "startByte",4,4,kUnsignedType,"void",1,0,"unsigned long",&_ICAMessage_3};
	VPL_ExtField _ICAMessage_1 = { "messageType",0,4,kUnsignedType,"void",1,0,"unsigned long",&_ICAMessage_2};
	VPL_ExtStructure _ICAMessage_S = {"ICAMessage",&_ICAMessage_1};

	VPL_ExtField _ICAPropertyInfo_4 = { "dataFlags",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAPropertyInfo_3 = { "dataSize",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ICAPropertyInfo_4};
	VPL_ExtField _ICAPropertyInfo_2 = { "dataType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ICAPropertyInfo_3};
	VPL_ExtField _ICAPropertyInfo_1 = { "propertyType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ICAPropertyInfo_2};
	VPL_ExtStructure _ICAPropertyInfo_S = {"ICAPropertyInfo",&_ICAPropertyInfo_1};

	VPL_ExtField _ICAObjectInfo_2 = { "objectSubtype",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ICAObjectInfo_1 = { "objectType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ICAObjectInfo_2};
	VPL_ExtStructure _ICAObjectInfo_S = {"ICAObjectInfo",&_ICAObjectInfo_1};

	VPL_ExtStructure _OpaqueICAConnectionID_S = {"OpaqueICAConnectionID",NULL};

	VPL_ExtStructure _OpaqueICAProperty_S = {"OpaqueICAProperty",NULL};

	VPL_ExtStructure _OpaqueICAObject_S = {"OpaqueICAObject",NULL};

	VPL_ExtField _URLCallbackInfo_5 = { "systemEvent",16,4,kPointerType,"EventRecord",1,16,"T*",NULL};
	VPL_ExtField _URLCallbackInfo_4 = { "currentSize",12,4,kUnsignedType,"EventRecord",1,16,"unsigned long",&_URLCallbackInfo_5};
	VPL_ExtField _URLCallbackInfo_3 = { "property",8,4,kPointerType,"char",1,1,"T*",&_URLCallbackInfo_4};
	VPL_ExtField _URLCallbackInfo_2 = { "urlRef",4,4,kPointerType,"OpaqueURLReference",1,0,"T*",&_URLCallbackInfo_3};
	VPL_ExtField _URLCallbackInfo_1 = { "version",0,4,kUnsignedType,"OpaqueURLReference",1,0,"unsigned long",&_URLCallbackInfo_2};
	VPL_ExtStructure _URLCallbackInfo_S = {"URLCallbackInfo",&_URLCallbackInfo_1};

	VPL_ExtStructure _OpaqueURLReference_S = {"OpaqueURLReference",NULL};

	VPL_ExtField _SRCallBackParam_2 = { "refCon",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SRCallBackParam_1 = { "callBack",0,4,kPointerType,"void",1,0,"T*",&_SRCallBackParam_2};
	VPL_ExtStructure _SRCallBackParam_S = {"SRCallBackParam",&_SRCallBackParam_1};

	VPL_ExtField _SRCallBackStruct_6 = { "refCon",16,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SRCallBackStruct_5 = { "flags",14,2,kIntType,"NULL",0,0,"short",&_SRCallBackStruct_6};
	VPL_ExtField _SRCallBackStruct_4 = { "status",12,2,kIntType,"NULL",0,0,"short",&_SRCallBackStruct_5};
	VPL_ExtField _SRCallBackStruct_3 = { "instance",8,4,kPointerType,"OpaqueSRSpeechObject",1,0,"T*",&_SRCallBackStruct_4};
	VPL_ExtField _SRCallBackStruct_2 = { "message",4,4,kIntType,"OpaqueSRSpeechObject",1,0,"long int",&_SRCallBackStruct_3};
	VPL_ExtField _SRCallBackStruct_1 = { "what",0,4,kIntType,"OpaqueSRSpeechObject",1,0,"long int",&_SRCallBackStruct_2};
	VPL_ExtStructure _SRCallBackStruct_S = {"SRCallBackStruct",&_SRCallBackStruct_1};

	VPL_ExtStructure _OpaqueSRSpeechObject_S = {"OpaqueSRSpeechObject",NULL};

	VPL_ExtStructure _OpaqueHRReference_S = {"OpaqueHRReference",NULL};

	VPL_ExtField _NSLDialogOptions_6 = { "message",774,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _NSLDialogOptions_5 = { "cancelButtonLabel",518,256,kPointerType,"unsigned char",0,1,NULL,&_NSLDialogOptions_6};
	VPL_ExtField _NSLDialogOptions_4 = { "actionButtonLabel",262,256,kPointerType,"unsigned char",0,1,NULL,&_NSLDialogOptions_5};
	VPL_ExtField _NSLDialogOptions_3 = { "windowTitle",6,256,kPointerType,"unsigned char",0,1,NULL,&_NSLDialogOptions_4};
	VPL_ExtField _NSLDialogOptions_2 = { "dialogOptionFlags",2,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_NSLDialogOptions_3};
	VPL_ExtField _NSLDialogOptions_1 = { "version",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_NSLDialogOptions_2};
	VPL_ExtStructure _NSLDialogOptions_S = {"NSLDialogOptions",&_NSLDialogOptions_1};

	VPL_ExtField _CalibratorInfo_6 = { "isGood",20,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _CalibratorInfo_5 = { "eventProc",16,4,kPointerType,"void",1,0,"T*",&_CalibratorInfo_6};
	VPL_ExtField _CalibratorInfo_4 = { "profileLocationPtr",12,4,kPointerType,"CMProfileLocation",1,258,"T*",&_CalibratorInfo_5};
	VPL_ExtField _CalibratorInfo_3 = { "profileLocationSize",8,4,kUnsignedType,"CMProfileLocation",1,258,"unsigned long",&_CalibratorInfo_4};
	VPL_ExtField _CalibratorInfo_2 = { "displayID",4,4,kUnsignedType,"CMProfileLocation",1,258,"unsigned long",&_CalibratorInfo_3};
	VPL_ExtField _CalibratorInfo_1 = { "dataSize",0,4,kUnsignedType,"CMProfileLocation",1,258,"unsigned long",&_CalibratorInfo_2};
	VPL_ExtStructure _CalibratorInfo_S = {"CalibratorInfo",&_CalibratorInfo_1};

	VPL_ExtField _NColorPickerInfo_13 = { "reserved",311,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _NColorPickerInfo_12 = { "newColorChosen",310,1,kUnsignedType,"NULL",0,0,"unsigned char",&_NColorPickerInfo_13};
	VPL_ExtField _NColorPickerInfo_11 = { "mInfo",298,12,kStructureType,"NULL",0,0,"PickerMenuItemInfo",&_NColorPickerInfo_12};
	VPL_ExtField _NColorPickerInfo_10 = { "prompt",42,256,kPointerType,"unsigned char",0,1,NULL,&_NColorPickerInfo_11};
	VPL_ExtField _NColorPickerInfo_9 = { "colorProcData",38,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_NColorPickerInfo_10};
	VPL_ExtField _NColorPickerInfo_8 = { "colorProc",34,4,kPointerType,"void",1,0,"T*",&_NColorPickerInfo_9};
	VPL_ExtField _NColorPickerInfo_7 = { "eventProc",30,4,kPointerType,"unsigned char",1,1,"T*",&_NColorPickerInfo_8};
	VPL_ExtField _NColorPickerInfo_6 = { "pickerType",26,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_NColorPickerInfo_7};
	VPL_ExtField _NColorPickerInfo_5 = { "dialogOrigin",22,4,kStructureType,"unsigned char",1,1,"Point",&_NColorPickerInfo_6};
	VPL_ExtField _NColorPickerInfo_4 = { "placeWhere",20,2,kIntType,"unsigned char",1,1,"short",&_NColorPickerInfo_5};
	VPL_ExtField _NColorPickerInfo_3 = { "flags",16,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_NColorPickerInfo_4};
	VPL_ExtField _NColorPickerInfo_2 = { "dstProfile",12,4,kPointerType,"OpaqueCMProfileRef",1,0,"T*",&_NColorPickerInfo_3};
	VPL_ExtField _NColorPickerInfo_1 = { "theColor",0,12,kStructureType,"OpaqueCMProfileRef",1,0,"NPMColor",&_NColorPickerInfo_2};
	VPL_ExtStructure _NColorPickerInfo_S = {"NColorPickerInfo",&_NColorPickerInfo_1};

	VPL_ExtField _ColorPickerInfo_13 = { "filler",311,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _ColorPickerInfo_12 = { "newColorChosen",310,1,kUnsignedType,"NULL",0,0,"unsigned char",&_ColorPickerInfo_13};
	VPL_ExtField _ColorPickerInfo_11 = { "mInfo",298,12,kStructureType,"NULL",0,0,"PickerMenuItemInfo",&_ColorPickerInfo_12};
	VPL_ExtField _ColorPickerInfo_10 = { "prompt",42,256,kPointerType,"unsigned char",0,1,NULL,&_ColorPickerInfo_11};
	VPL_ExtField _ColorPickerInfo_9 = { "colorProcData",38,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ColorPickerInfo_10};
	VPL_ExtField _ColorPickerInfo_8 = { "colorProc",34,4,kPointerType,"void",1,0,"T*",&_ColorPickerInfo_9};
	VPL_ExtField _ColorPickerInfo_7 = { "eventProc",30,4,kPointerType,"unsigned char",1,1,"T*",&_ColorPickerInfo_8};
	VPL_ExtField _ColorPickerInfo_6 = { "pickerType",26,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_ColorPickerInfo_7};
	VPL_ExtField _ColorPickerInfo_5 = { "dialogOrigin",22,4,kStructureType,"unsigned char",1,1,"Point",&_ColorPickerInfo_6};
	VPL_ExtField _ColorPickerInfo_4 = { "placeWhere",20,2,kIntType,"unsigned char",1,1,"short",&_ColorPickerInfo_5};
	VPL_ExtField _ColorPickerInfo_3 = { "flags",16,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_ColorPickerInfo_4};
	VPL_ExtField _ColorPickerInfo_2 = { "dstProfile",12,4,kPointerType,"CMProfile",2,188,"T*",&_ColorPickerInfo_3};
	VPL_ExtField _ColorPickerInfo_1 = { "theColor",0,12,kStructureType,"CMProfile",2,188,"PMColor",&_ColorPickerInfo_2};
	VPL_ExtStructure _ColorPickerInfo_S = {"ColorPickerInfo",&_ColorPickerInfo_1};

	VPL_ExtField _PickerMenuItemInfo_6 = { "undoItem",10,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _PickerMenuItemInfo_5 = { "clearItem",8,2,kIntType,"NULL",0,0,"short",&_PickerMenuItemInfo_6};
	VPL_ExtField _PickerMenuItemInfo_4 = { "pasteItem",6,2,kIntType,"NULL",0,0,"short",&_PickerMenuItemInfo_5};
	VPL_ExtField _PickerMenuItemInfo_3 = { "copyItem",4,2,kIntType,"NULL",0,0,"short",&_PickerMenuItemInfo_4};
	VPL_ExtField _PickerMenuItemInfo_2 = { "cutItem",2,2,kIntType,"NULL",0,0,"short",&_PickerMenuItemInfo_3};
	VPL_ExtField _PickerMenuItemInfo_1 = { "editMenuID",0,2,kIntType,"NULL",0,0,"short",&_PickerMenuItemInfo_2};
	VPL_ExtStructure _PickerMenuItemInfo_S = {"PickerMenuItemInfo",&_PickerMenuItemInfo_1};

	VPL_ExtStructure _OpaquePicker_S = {"OpaquePicker",NULL};

	VPL_ExtField _NPMColor_2 = { "color",4,8,kStructureType,"NULL",0,0,"CMColor",NULL};
	VPL_ExtField _NPMColor_1 = { "profile",0,4,kPointerType,"OpaqueCMProfileRef",1,0,"T*",&_NPMColor_2};
	VPL_ExtStructure _NPMColor_S = {"NPMColor",&_NPMColor_1};

	VPL_ExtField _PMColor_2 = { "color",4,8,kStructureType,"NULL",0,0,"CMColor",NULL};
	VPL_ExtField _PMColor_1 = { "profile",0,4,kPointerType,"CMProfile",2,188,"T*",&_PMColor_2};
	VPL_ExtStructure _PMColor_S = {"PMColor",&_PMColor_1};

	VPL_ExtField _CMYColor_3 = { "yellow",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMYColor_2 = { "magenta",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMYColor_3};
	VPL_ExtField _CMYColor_1 = { "cyan",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMYColor_2};
	VPL_ExtStructure _CMYColor_S = {"CMYColor",&_CMYColor_1};

	VPL_ExtField _HSLColor_3 = { "lightness",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _HSLColor_2 = { "saturation",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HSLColor_3};
	VPL_ExtField _HSLColor_1 = { "hue",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HSLColor_2};
	VPL_ExtStructure _HSLColor_S = {"HSLColor",&_HSLColor_1};

	VPL_ExtField _HSVColor_3 = { "value",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _HSVColor_2 = { "saturation",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HSVColor_3};
	VPL_ExtField _HSVColor_1 = { "hue",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HSVColor_2};
	VPL_ExtStructure _HSVColor_S = {"HSVColor",&_HSVColor_1};

	VPL_ExtField _NavDialogCreationOptions_14 = { "reserved",50,16,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _NavDialogCreationOptions_13 = { "parentWindow",46,4,kPointerType,"OpaqueWindowPtr",1,0,"T*",&_NavDialogCreationOptions_14};
	VPL_ExtField _NavDialogCreationOptions_12 = { "modality",42,4,kUnsignedType,"OpaqueWindowPtr",1,0,"unsigned long",&_NavDialogCreationOptions_13};
	VPL_ExtField _NavDialogCreationOptions_11 = { "popupExtension",38,4,kPointerType,"__CFArray",1,0,"T*",&_NavDialogCreationOptions_12};
	VPL_ExtField _NavDialogCreationOptions_10 = { "preferenceKey",34,4,kUnsignedType,"__CFArray",1,0,"unsigned long",&_NavDialogCreationOptions_11};
	VPL_ExtField _NavDialogCreationOptions_9 = { "message",30,4,kPointerType,"__CFString",1,0,"T*",&_NavDialogCreationOptions_10};
	VPL_ExtField _NavDialogCreationOptions_8 = { "saveFileName",26,4,kPointerType,"__CFString",1,0,"T*",&_NavDialogCreationOptions_9};
	VPL_ExtField _NavDialogCreationOptions_7 = { "cancelButtonLabel",22,4,kPointerType,"__CFString",1,0,"T*",&_NavDialogCreationOptions_8};
	VPL_ExtField _NavDialogCreationOptions_6 = { "actionButtonLabel",18,4,kPointerType,"__CFString",1,0,"T*",&_NavDialogCreationOptions_7};
	VPL_ExtField _NavDialogCreationOptions_5 = { "windowTitle",14,4,kPointerType,"__CFString",1,0,"T*",&_NavDialogCreationOptions_6};
	VPL_ExtField _NavDialogCreationOptions_4 = { "clientName",10,4,kPointerType,"__CFString",1,0,"T*",&_NavDialogCreationOptions_5};
	VPL_ExtField _NavDialogCreationOptions_3 = { "location",6,4,kStructureType,"__CFString",1,0,"Point",&_NavDialogCreationOptions_4};
	VPL_ExtField _NavDialogCreationOptions_2 = { "optionFlags",2,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_NavDialogCreationOptions_3};
	VPL_ExtField _NavDialogCreationOptions_1 = { "version",0,2,kUnsignedType,"__CFString",1,0,"unsigned short",&_NavDialogCreationOptions_2};
	VPL_ExtStructure _NavDialogCreationOptions_S = {"NavDialogCreationOptions",&_NavDialogCreationOptions_1};

	VPL_ExtField _NavReplyRecord_13 = { "reserved",30,225,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _NavReplyRecord_12 = { "reserved2",29,1,kUnsignedType,"char",0,1,"unsigned char",&_NavReplyRecord_13};
	VPL_ExtField _NavReplyRecord_11 = { "saveFileExtensionHidden",28,1,kUnsignedType,"char",0,1,"unsigned char",&_NavReplyRecord_12};
	VPL_ExtField _NavReplyRecord_10 = { "saveFileName",24,4,kPointerType,"__CFString",1,0,"T*",&_NavReplyRecord_11};
	VPL_ExtField _NavReplyRecord_9 = { "reserved1",20,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_NavReplyRecord_10};
	VPL_ExtField _NavReplyRecord_8 = { "fileTranslation",16,4,kPointerType,"FileTranslationSpec",2,48,"T*",&_NavReplyRecord_9};
	VPL_ExtField _NavReplyRecord_7 = { "keyScript",14,2,kIntType,"FileTranslationSpec",2,48,"short",&_NavReplyRecord_8};
	VPL_ExtField _NavReplyRecord_6 = { "selection",6,8,kStructureType,"FileTranslationSpec",2,48,"AEDesc",&_NavReplyRecord_7};
	VPL_ExtField _NavReplyRecord_5 = { "translationNeeded",5,1,kUnsignedType,"FileTranslationSpec",2,48,"unsigned char",&_NavReplyRecord_6};
	VPL_ExtField _NavReplyRecord_4 = { "isStationery",4,1,kUnsignedType,"FileTranslationSpec",2,48,"unsigned char",&_NavReplyRecord_5};
	VPL_ExtField _NavReplyRecord_3 = { "replacing",3,1,kUnsignedType,"FileTranslationSpec",2,48,"unsigned char",&_NavReplyRecord_4};
	VPL_ExtField _NavReplyRecord_2 = { "validRecord",2,1,kUnsignedType,"FileTranslationSpec",2,48,"unsigned char",&_NavReplyRecord_3};
	VPL_ExtField _NavReplyRecord_1 = { "version",0,2,kUnsignedType,"FileTranslationSpec",2,48,"unsigned short",&_NavReplyRecord_2};
	VPL_ExtStructure _NavReplyRecord_S = {"NavReplyRecord",&_NavReplyRecord_1};

	VPL_ExtField _NavDialogOptions_12 = { "reserved",1554,494,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _NavDialogOptions_11 = { "popupExtension",1550,4,kPointerType,"NavMenuItemSpec",2,512,"T*",&_NavDialogOptions_12};
	VPL_ExtField _NavDialogOptions_10 = { "preferenceKey",1546,4,kUnsignedType,"NavMenuItemSpec",2,512,"unsigned long",&_NavDialogOptions_11};
	VPL_ExtField _NavDialogOptions_9 = { "message",1290,256,kPointerType,"unsigned char",0,1,NULL,&_NavDialogOptions_10};
	VPL_ExtField _NavDialogOptions_8 = { "savedFileName",1034,256,kPointerType,"unsigned char",0,1,NULL,&_NavDialogOptions_9};
	VPL_ExtField _NavDialogOptions_7 = { "cancelButtonLabel",778,256,kPointerType,"unsigned char",0,1,NULL,&_NavDialogOptions_8};
	VPL_ExtField _NavDialogOptions_6 = { "actionButtonLabel",522,256,kPointerType,"unsigned char",0,1,NULL,&_NavDialogOptions_7};
	VPL_ExtField _NavDialogOptions_5 = { "windowTitle",266,256,kPointerType,"unsigned char",0,1,NULL,&_NavDialogOptions_6};
	VPL_ExtField _NavDialogOptions_4 = { "clientName",10,256,kPointerType,"unsigned char",0,1,NULL,&_NavDialogOptions_5};
	VPL_ExtField _NavDialogOptions_3 = { "location",6,4,kStructureType,"unsigned char",0,1,"Point",&_NavDialogOptions_4};
	VPL_ExtField _NavDialogOptions_2 = { "dialogOptionFlags",2,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_NavDialogOptions_3};
	VPL_ExtField _NavDialogOptions_1 = { "version",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_NavDialogOptions_2};
	VPL_ExtStructure _NavDialogOptions_S = {"NavDialogOptions",&_NavDialogOptions_1};

	VPL_ExtField _NavTypeList_4 = { "osType",8,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _NavTypeList_3 = { "osTypeCount",6,2,kIntType,"unsigned long",0,4,"short",&_NavTypeList_4};
	VPL_ExtField _NavTypeList_2 = { "reserved",4,2,kIntType,"unsigned long",0,4,"short",&_NavTypeList_3};
	VPL_ExtField _NavTypeList_1 = { "componentSignature",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_NavTypeList_2};
	VPL_ExtStructure _NavTypeList_S = {"NavTypeList",&_NavTypeList_1};

	VPL_ExtField _NavMenuItemSpec_5 = { "reserved",266,245,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _NavMenuItemSpec_4 = { "menuItemName",10,256,kPointerType,"unsigned char",0,1,NULL,&_NavMenuItemSpec_5};
	VPL_ExtField _NavMenuItemSpec_3 = { "menuType",6,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_NavMenuItemSpec_4};
	VPL_ExtField _NavMenuItemSpec_2 = { "menuCreator",2,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_NavMenuItemSpec_3};
	VPL_ExtField _NavMenuItemSpec_1 = { "version",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_NavMenuItemSpec_2};
	VPL_ExtStructure _NavMenuItemSpec_S = {"NavMenuItemSpec",&_NavMenuItemSpec_1};

	VPL_ExtField _NavCBRec_8 = { "reserved",36,218,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _NavCBRec_7 = { "userAction",32,4,kUnsignedType,"char",0,1,"unsigned long",&_NavCBRec_8};
	VPL_ExtField _NavCBRec_6 = { "eventData",26,6,kStructureType,"char",0,1,"NavEventData",&_NavCBRec_7};
	VPL_ExtField _NavCBRec_5 = { "previewRect",18,8,kStructureType,"char",0,1,"Rect",&_NavCBRec_6};
	VPL_ExtField _NavCBRec_4 = { "customRect",10,8,kStructureType,"char",0,1,"Rect",&_NavCBRec_5};
	VPL_ExtField _NavCBRec_3 = { "window",6,4,kPointerType,"OpaqueWindowPtr",1,0,"T*",&_NavCBRec_4};
	VPL_ExtField _NavCBRec_2 = { "context",2,4,kPointerType,"__NavDialog",1,0,"T*",&_NavCBRec_3};
	VPL_ExtField _NavCBRec_1 = { "version",0,2,kUnsignedType,"__NavDialog",1,0,"unsigned short",&_NavCBRec_2};
	VPL_ExtStructure _NavCBRec_S = {"NavCBRec",&_NavCBRec_1};

	VPL_ExtStructure ___NavDialog_S = {"__NavDialog",NULL};

	VPL_ExtField _NavEventData_2 = { "itemHit",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _NavEventData_1 = { "eventDataParms",0,4,kStructureType,"NULL",0,0,"NavEventDataInfo",&_NavEventData_2};
	VPL_ExtStructure _NavEventData_S = {"NavEventData",&_NavEventData_1};

	VPL_ExtField _2373_12 = { "reserved3",50,206,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _2373_11 = { "folderCreator",46,4,kUnsignedType,"char",0,1,"unsigned long",&_2373_12};
	VPL_ExtField _2373_10 = { "folderType",42,4,kUnsignedType,"char",0,1,"unsigned long",&_2373_11};
	VPL_ExtField _2373_9 = { "finderDXInfo",26,16,kStructureType,"char",0,1,"DXInfo",&_2373_10};
	VPL_ExtField _2373_8 = { "finderDInfo",10,16,kStructureType,"char",0,1,"DInfo",&_2373_9};
	VPL_ExtField _2373_7 = { "numberOfFiles",6,4,kUnsignedType,"char",0,1,"unsigned long",&_2373_8};
	VPL_ExtField _2373_6 = { "reserved2",5,1,kUnsignedType,"char",0,1,"unsigned char",&_2373_7};
	VPL_ExtField _2373_5 = { "writeable",4,1,kUnsignedType,"char",0,1,"unsigned char",&_2373_6};
	VPL_ExtField _2373_4 = { "readable",3,1,kUnsignedType,"char",0,1,"unsigned char",&_2373_5};
	VPL_ExtField _2373_3 = { "mounted",2,1,kUnsignedType,"char",0,1,"unsigned char",&_2373_4};
	VPL_ExtField _2373_2 = { "sharePoint",1,1,kUnsignedType,"char",0,1,"unsigned char",&_2373_3};
	VPL_ExtField _2373_1 = { "shareable",0,1,kUnsignedType,"char",0,1,"unsigned char",&_2373_2};
	VPL_ExtStructure _2373_S = {"2373",&_2373_1};

	VPL_ExtField _2372_8 = { "finderXInfo",28,16,kStructureType,"NULL",0,0,"FXInfo",NULL};
	VPL_ExtField _2372_7 = { "finderInfo",12,16,kStructureType,"NULL",0,0,"FInfo",&_2372_8};
	VPL_ExtField _2372_6 = { "resourceSize",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_2372_7};
	VPL_ExtField _2372_5 = { "dataSize",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_2372_6};
	VPL_ExtField _2372_4 = { "reserved1",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_2372_5};
	VPL_ExtField _2372_3 = { "dataOpen",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_2372_4};
	VPL_ExtField _2372_2 = { "resourceOpen",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_2372_3};
	VPL_ExtField _2372_1 = { "locked",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_2372_2};
	VPL_ExtStructure _2372_S = {"2372",&_2372_1};

	VPL_ExtField _NavFileOrFolderInfo_6 = { "fileAndFolder",12,256,kStructureType,"NULL",0,0,"2371",NULL};
	VPL_ExtField _NavFileOrFolderInfo_5 = { "modificationDate",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NavFileOrFolderInfo_6};
	VPL_ExtField _NavFileOrFolderInfo_4 = { "creationDate",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NavFileOrFolderInfo_5};
	VPL_ExtField _NavFileOrFolderInfo_3 = { "visible",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_NavFileOrFolderInfo_4};
	VPL_ExtField _NavFileOrFolderInfo_2 = { "isFolder",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_NavFileOrFolderInfo_3};
	VPL_ExtField _NavFileOrFolderInfo_1 = { "version",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_NavFileOrFolderInfo_2};
	VPL_ExtStructure _NavFileOrFolderInfo_S = {"NavFileOrFolderInfo",&_NavFileOrFolderInfo_1};

	VPL_ExtField _StatementRange_2 = { "endPos",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _StatementRange_1 = { "startPos",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_StatementRange_2};
	VPL_ExtStructure _StatementRange_S = {"StatementRange",&_StatementRange_1};

	VPL_ExtField _SndInputCmpParam_8 = { "ioMisc",24,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _SndInputCmpParam_7 = { "ioBuffer",20,4,kPointerType,"char",1,1,"T*",&_SndInputCmpParam_8};
	VPL_ExtField _SndInputCmpParam_6 = { "ioActCount",16,4,kUnsignedType,"char",1,1,"unsigned long",&_SndInputCmpParam_7};
	VPL_ExtField _SndInputCmpParam_5 = { "ioReqCount",12,4,kUnsignedType,"char",1,1,"unsigned long",&_SndInputCmpParam_6};
	VPL_ExtField _SndInputCmpParam_4 = { "pad",10,2,kIntType,"char",1,1,"short",&_SndInputCmpParam_5};
	VPL_ExtField _SndInputCmpParam_3 = { "ioResult",8,2,kIntType,"char",1,1,"short",&_SndInputCmpParam_4};
	VPL_ExtField _SndInputCmpParam_2 = { "ioInterrupt",4,4,kPointerType,"void",1,0,"T*",&_SndInputCmpParam_3};
	VPL_ExtField _SndInputCmpParam_1 = { "ioCompletion",0,4,kPointerType,"void",1,0,"T*",&_SndInputCmpParam_2};
	VPL_ExtStructure _SndInputCmpParam_S = {"SndInputCmpParam",&_SndInputCmpParam_1};

	VPL_ExtField _SPB_10 = { "unused1",34,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SPB_9 = { "error",32,2,kIntType,"NULL",0,0,"short",&_SPB_10};
	VPL_ExtField _SPB_8 = { "userLong",28,4,kIntType,"NULL",0,0,"long int",&_SPB_9};
	VPL_ExtField _SPB_7 = { "interruptRoutine",24,4,kPointerType,"void",1,0,"T*",&_SPB_8};
	VPL_ExtField _SPB_6 = { "completionRoutine",20,4,kPointerType,"void",1,0,"T*",&_SPB_7};
	VPL_ExtField _SPB_5 = { "bufferPtr",16,4,kPointerType,"char",1,1,"T*",&_SPB_6};
	VPL_ExtField _SPB_4 = { "bufferLength",12,4,kUnsignedType,"char",1,1,"unsigned long",&_SPB_5};
	VPL_ExtField _SPB_3 = { "milliseconds",8,4,kUnsignedType,"char",1,1,"unsigned long",&_SPB_4};
	VPL_ExtField _SPB_2 = { "count",4,4,kUnsignedType,"char",1,1,"unsigned long",&_SPB_3};
	VPL_ExtField _SPB_1 = { "inRefNum",0,4,kIntType,"char",1,1,"long int",&_SPB_2};
	VPL_ExtStructure _SPB_S = {"SPB",&_SPB_1};

	VPL_ExtField _EQSpectrumBandsRecord_2 = { "frequency",2,4,kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _EQSpectrumBandsRecord_1 = { "count",0,2,kIntType,"unsigned long",1,4,"short",&_EQSpectrumBandsRecord_2};
	VPL_ExtStructure _EQSpectrumBandsRecord_S = {"EQSpectrumBandsRecord",&_EQSpectrumBandsRecord_1};

	VPL_ExtField _LevelMeterInfo_3 = { "rightMeter",3,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _LevelMeterInfo_2 = { "leftMeter",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_LevelMeterInfo_3};
	VPL_ExtField _LevelMeterInfo_1 = { "numChannels",0,2,kIntType,"NULL",0,0,"short",&_LevelMeterInfo_2};
	VPL_ExtStructure _LevelMeterInfo_S = {"LevelMeterInfo",&_LevelMeterInfo_1};

	VPL_ExtField _AudioTerminatorAtom_2 = { "atomType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _AudioTerminatorAtom_1 = { "size",0,4,kIntType,"NULL",0,0,"long int",&_AudioTerminatorAtom_2};
	VPL_ExtStructure _AudioTerminatorAtom_S = {"AudioTerminatorAtom",&_AudioTerminatorAtom_1};

	VPL_ExtField _AudioEndianAtom_3 = { "littleEndian",8,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _AudioEndianAtom_2 = { "atomType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_AudioEndianAtom_3};
	VPL_ExtField _AudioEndianAtom_1 = { "size",0,4,kIntType,"NULL",0,0,"long int",&_AudioEndianAtom_2};
	VPL_ExtStructure _AudioEndianAtom_S = {"AudioEndianAtom",&_AudioEndianAtom_1};

	VPL_ExtField _AudioFormatAtom_3 = { "format",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _AudioFormatAtom_2 = { "atomType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_AudioFormatAtom_3};
	VPL_ExtField _AudioFormatAtom_1 = { "size",0,4,kIntType,"NULL",0,0,"long int",&_AudioFormatAtom_2};
	VPL_ExtStructure _AudioFormatAtom_S = {"AudioFormatAtom",&_AudioFormatAtom_1};

	VPL_ExtField _AudioInfo_3 = { "numVolumeSteps",8,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _AudioInfo_2 = { "reserved",4,4,kIntType,"NULL",0,0,"long int",&_AudioInfo_3};
	VPL_ExtField _AudioInfo_1 = { "capabilitiesFlags",0,4,kIntType,"NULL",0,0,"long int",&_AudioInfo_2};
	VPL_ExtStructure _AudioInfo_S = {"AudioInfo",&_AudioInfo_1};

	VPL_ExtField _SoundComponentLink_3 = { "linkID",24,4,kPointerType,"OpaqueSoundSource",2,0,"T*",NULL};
	VPL_ExtField _SoundComponentLink_2 = { "mixerID",20,4,kPointerType,"OpaqueSoundSource",1,0,"T*",&_SoundComponentLink_3};
	VPL_ExtField _SoundComponentLink_1 = { "description",0,20,kStructureType,"OpaqueSoundSource",1,0,"ComponentDescription",&_SoundComponentLink_2};
	VPL_ExtStructure _SoundComponentLink_S = {"SoundComponentLink",&_SoundComponentLink_1};

	VPL_ExtStructure _OpaqueSoundSource_S = {"OpaqueSoundSource",NULL};

	VPL_ExtStructure _OpaqueSoundConverter_S = {"OpaqueSoundConverter",NULL};

	VPL_ExtField _SoundSlopeAndInterceptRecord_4 = { "maxClip",24,8,kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _SoundSlopeAndInterceptRecord_3 = { "minClip",16,8,kFloatType,"NULL",0,0,"double",&_SoundSlopeAndInterceptRecord_4};
	VPL_ExtField _SoundSlopeAndInterceptRecord_2 = { "intercept",8,8,kFloatType,"NULL",0,0,"double",&_SoundSlopeAndInterceptRecord_3};
	VPL_ExtField _SoundSlopeAndInterceptRecord_1 = { "slope",0,8,kFloatType,"NULL",0,0,"double",&_SoundSlopeAndInterceptRecord_2};
	VPL_ExtStructure _SoundSlopeAndInterceptRecord_S = {"SoundSlopeAndInterceptRecord",&_SoundSlopeAndInterceptRecord_1};

	VPL_ExtField _CompressionInfo_8 = { "futureUse1",18,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CompressionInfo_7 = { "bytesPerSample",16,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CompressionInfo_8};
	VPL_ExtField _CompressionInfo_6 = { "bytesPerFrame",14,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CompressionInfo_7};
	VPL_ExtField _CompressionInfo_5 = { "bytesPerPacket",12,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CompressionInfo_6};
	VPL_ExtField _CompressionInfo_4 = { "samplesPerPacket",10,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CompressionInfo_5};
	VPL_ExtField _CompressionInfo_3 = { "compressionID",8,2,kIntType,"NULL",0,0,"short",&_CompressionInfo_4};
	VPL_ExtField _CompressionInfo_2 = { "format",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CompressionInfo_3};
	VPL_ExtField _CompressionInfo_1 = { "recordSize",0,4,kIntType,"NULL",0,0,"long int",&_CompressionInfo_2};
	VPL_ExtStructure _CompressionInfo_S = {"CompressionInfo",&_CompressionInfo_1};

	VPL_ExtField _ExtendedSoundParamBlock_4 = { "bufferSize",68,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ExtendedSoundParamBlock_3 = { "extendedFlags",64,4,kIntType,"NULL",0,0,"long int",&_ExtendedSoundParamBlock_4};
	VPL_ExtField _ExtendedSoundParamBlock_2 = { "reserved",62,2,kIntType,"NULL",0,0,"short",&_ExtendedSoundParamBlock_3};
	VPL_ExtField _ExtendedSoundParamBlock_1 = { "pb",0,62,kStructureType,"NULL",0,0,"SoundParamBlock",&_ExtendedSoundParamBlock_2};
	VPL_ExtStructure _ExtendedSoundParamBlock_S = {"ExtendedSoundParamBlock",&_ExtendedSoundParamBlock_1};

	VPL_ExtField _SoundParamBlock_11 = { "result",60,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _SoundParamBlock_10 = { "refCon",56,4,kIntType,"NULL",0,0,"long int",&_SoundParamBlock_11};
	VPL_ExtField _SoundParamBlock_9 = { "completionRtn",52,4,kPointerType,"unsigned char",1,1,"T*",&_SoundParamBlock_10};
	VPL_ExtField _SoundParamBlock_8 = { "moreRtn",48,4,kPointerType,"unsigned char",1,1,"T*",&_SoundParamBlock_9};
	VPL_ExtField _SoundParamBlock_7 = { "filter",44,4,kPointerType,"ComponentInstanceRecord",1,4,"T*",&_SoundParamBlock_8};
	VPL_ExtField _SoundParamBlock_6 = { "quality",40,4,kIntType,"ComponentInstanceRecord",1,4,"long int",&_SoundParamBlock_7};
	VPL_ExtField _SoundParamBlock_5 = { "rightVolume",38,2,kIntType,"ComponentInstanceRecord",1,4,"short",&_SoundParamBlock_6};
	VPL_ExtField _SoundParamBlock_4 = { "leftVolume",36,2,kIntType,"ComponentInstanceRecord",1,4,"short",&_SoundParamBlock_5};
	VPL_ExtField _SoundParamBlock_3 = { "rateMultiplier",32,4,kUnsignedType,"ComponentInstanceRecord",1,4,"unsigned long",&_SoundParamBlock_4};
	VPL_ExtField _SoundParamBlock_2 = { "desc",4,28,kStructureType,"ComponentInstanceRecord",1,4,"SoundComponentData",&_SoundParamBlock_3};
	VPL_ExtField _SoundParamBlock_1 = { "recordSize",0,4,kIntType,"ComponentInstanceRecord",1,4,"long int",&_SoundParamBlock_2};
	VPL_ExtStructure _SoundParamBlock_S = {"SoundParamBlock",&_SoundParamBlock_1};

	VPL_ExtField _ExtendedSoundComponentData_4 = { "bufferSize",36,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ExtendedSoundComponentData_3 = { "extendedFlags",32,4,kIntType,"NULL",0,0,"long int",&_ExtendedSoundComponentData_4};
	VPL_ExtField _ExtendedSoundComponentData_2 = { "recordSize",28,4,kIntType,"NULL",0,0,"long int",&_ExtendedSoundComponentData_3};
	VPL_ExtField _ExtendedSoundComponentData_1 = { "desc",0,28,kStructureType,"NULL",0,0,"SoundComponentData",&_ExtendedSoundComponentData_2};
	VPL_ExtStructure _ExtendedSoundComponentData_S = {"ExtendedSoundComponentData",&_ExtendedSoundComponentData_1};

	VPL_ExtField _SoundComponentData_8 = { "reserved",24,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SoundComponentData_7 = { "buffer",20,4,kPointerType,"unsigned char",1,1,"T*",&_SoundComponentData_8};
	VPL_ExtField _SoundComponentData_6 = { "sampleCount",16,4,kIntType,"unsigned char",1,1,"long int",&_SoundComponentData_7};
	VPL_ExtField _SoundComponentData_5 = { "sampleRate",12,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SoundComponentData_6};
	VPL_ExtField _SoundComponentData_4 = { "sampleSize",10,2,kIntType,"unsigned char",1,1,"short",&_SoundComponentData_5};
	VPL_ExtField _SoundComponentData_3 = { "numChannels",8,2,kIntType,"unsigned char",1,1,"short",&_SoundComponentData_4};
	VPL_ExtField _SoundComponentData_2 = { "format",4,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SoundComponentData_3};
	VPL_ExtField _SoundComponentData_1 = { "flags",0,4,kIntType,"unsigned char",1,1,"long int",&_SoundComponentData_2};
	VPL_ExtStructure _SoundComponentData_S = {"SoundComponentData",&_SoundComponentData_1};

	VPL_ExtField _SoundInfoList_2 = { "infoHandle",2,4,kPointerType,"char",2,1,"T*",NULL};
	VPL_ExtField _SoundInfoList_1 = { "count",0,2,kIntType,"char",2,1,"short",&_SoundInfoList_2};
	VPL_ExtStructure _SoundInfoList_S = {"SoundInfoList",&_SoundInfoList_1};

	VPL_ExtField _AudioSelection_3 = { "selEnd",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _AudioSelection_2 = { "selStart",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_AudioSelection_3};
	VPL_ExtField _AudioSelection_1 = { "unitType",0,4,kIntType,"NULL",0,0,"long int",&_AudioSelection_2};
	VPL_ExtStructure _AudioSelection_S = {"AudioSelection",&_AudioSelection_1};

	VPL_ExtField _SCStatus_9 = { "scCPULoad",20,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SCStatus_8 = { "scChannelAttributes",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SCStatus_9};
	VPL_ExtField _SCStatus_7 = { "scUnused",15,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SCStatus_8};
	VPL_ExtField _SCStatus_6 = { "scChannelPaused",14,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SCStatus_7};
	VPL_ExtField _SCStatus_5 = { "scChannelDisposed",13,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SCStatus_6};
	VPL_ExtField _SCStatus_4 = { "scChannelBusy",12,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SCStatus_5};
	VPL_ExtField _SCStatus_3 = { "scCurrentTime",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SCStatus_4};
	VPL_ExtField _SCStatus_2 = { "scEndTime",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SCStatus_3};
	VPL_ExtField _SCStatus_1 = { "scStartTime",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SCStatus_2};
	VPL_ExtStructure _SCStatus_S = {"SCStatus",&_SCStatus_1};

	VPL_ExtField _SMStatus_3 = { "smCurCPULoad",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _SMStatus_2 = { "smNumChannels",2,2,kIntType,"NULL",0,0,"short",&_SMStatus_3};
	VPL_ExtField _SMStatus_1 = { "smMaxCPULoad",0,2,kIntType,"NULL",0,0,"short",&_SMStatus_2};
	VPL_ExtStructure _SMStatus_S = {"SMStatus",&_SMStatus_1};

	VPL_ExtField _ExtendedScheduledSoundHeader_9 = { "bufferSize",102,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ExtendedScheduledSoundHeader_8 = { "extendedFlags",98,4,kIntType,"NULL",0,0,"long int",&_ExtendedScheduledSoundHeader_9};
	VPL_ExtField _ExtendedScheduledSoundHeader_7 = { "recordSize",94,4,kIntType,"NULL",0,0,"long int",&_ExtendedScheduledSoundHeader_8};
	VPL_ExtField _ExtendedScheduledSoundHeader_6 = { "startTime",78,16,kStructureType,"NULL",0,0,"TimeRecord",&_ExtendedScheduledSoundHeader_7};
	VPL_ExtField _ExtendedScheduledSoundHeader_5 = { "callBackParam2",74,4,kIntType,"NULL",0,0,"long int",&_ExtendedScheduledSoundHeader_6};
	VPL_ExtField _ExtendedScheduledSoundHeader_4 = { "callBackParam1",72,2,kIntType,"NULL",0,0,"short",&_ExtendedScheduledSoundHeader_5};
	VPL_ExtField _ExtendedScheduledSoundHeader_3 = { "reserved",70,2,kIntType,"NULL",0,0,"short",&_ExtendedScheduledSoundHeader_4};
	VPL_ExtField _ExtendedScheduledSoundHeader_2 = { "flags",66,4,kIntType,"NULL",0,0,"long int",&_ExtendedScheduledSoundHeader_3};
	VPL_ExtField _ExtendedScheduledSoundHeader_1 = { "u",0,66,kStructureType,"NULL",0,0,"SoundHeaderUnion",&_ExtendedScheduledSoundHeader_2};
	VPL_ExtStructure _ExtendedScheduledSoundHeader_S = {"ExtendedScheduledSoundHeader",&_ExtendedScheduledSoundHeader_1};

	VPL_ExtField _ScheduledSoundHeader_6 = { "startTime",78,16,kStructureType,"NULL",0,0,"TimeRecord",NULL};
	VPL_ExtField _ScheduledSoundHeader_5 = { "callBackParam2",74,4,kIntType,"NULL",0,0,"long int",&_ScheduledSoundHeader_6};
	VPL_ExtField _ScheduledSoundHeader_4 = { "callBackParam1",72,2,kIntType,"NULL",0,0,"short",&_ScheduledSoundHeader_5};
	VPL_ExtField _ScheduledSoundHeader_3 = { "reserved",70,2,kIntType,"NULL",0,0,"short",&_ScheduledSoundHeader_4};
	VPL_ExtField _ScheduledSoundHeader_2 = { "flags",66,4,kIntType,"NULL",0,0,"long int",&_ScheduledSoundHeader_3};
	VPL_ExtField _ScheduledSoundHeader_1 = { "u",0,66,kStructureType,"NULL",0,0,"SoundHeaderUnion",&_ScheduledSoundHeader_2};
	VPL_ExtStructure _ScheduledSoundHeader_S = {"ScheduledSoundHeader",&_ScheduledSoundHeader_1};

	VPL_ExtField _ConversionBlock_4 = { "outputPtr",8,4,kPointerType,"CmpSoundHeader",1,66,"T*",NULL};
	VPL_ExtField _ConversionBlock_3 = { "inputPtr",4,4,kPointerType,"CmpSoundHeader",1,66,"T*",&_ConversionBlock_4};
	VPL_ExtField _ConversionBlock_2 = { "unused",2,2,kIntType,"CmpSoundHeader",1,66,"short",&_ConversionBlock_3};
	VPL_ExtField _ConversionBlock_1 = { "destination",0,2,kIntType,"CmpSoundHeader",1,66,"short",&_ConversionBlock_2};
	VPL_ExtStructure _ConversionBlock_S = {"ConversionBlock",&_ConversionBlock_1};

	VPL_ExtField _ExtSoundHeader_18 = { "sampleArea",64,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ExtSoundHeader_17 = { "futureUse4",60,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ExtSoundHeader_18};
	VPL_ExtField _ExtSoundHeader_16 = { "futureUse3",56,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ExtSoundHeader_17};
	VPL_ExtField _ExtSoundHeader_15 = { "futureUse2",52,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ExtSoundHeader_16};
	VPL_ExtField _ExtSoundHeader_14 = { "futureUse1",50,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_ExtSoundHeader_15};
	VPL_ExtField _ExtSoundHeader_13 = { "sampleSize",48,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_ExtSoundHeader_14};
	VPL_ExtField _ExtSoundHeader_12 = { "AESRecording",44,4,kPointerType,"char",1,1,"T*",&_ExtSoundHeader_13};
	VPL_ExtField _ExtSoundHeader_11 = { "instrumentChunks",40,4,kPointerType,"char",1,1,"T*",&_ExtSoundHeader_12};
	VPL_ExtField _ExtSoundHeader_10 = { "markerChunk",36,4,kPointerType,"char",1,1,"T*",&_ExtSoundHeader_11};
	VPL_ExtField _ExtSoundHeader_9 = { "AIFFSampleRate",26,10,kStructureType,"char",1,1,"Float80",&_ExtSoundHeader_10};
	VPL_ExtField _ExtSoundHeader_8 = { "numFrames",22,4,kUnsignedType,"char",1,1,"unsigned long",&_ExtSoundHeader_9};
	VPL_ExtField _ExtSoundHeader_7 = { "baseFrequency",21,1,kUnsignedType,"char",1,1,"unsigned char",&_ExtSoundHeader_8};
	VPL_ExtField _ExtSoundHeader_6 = { "encode",20,1,kUnsignedType,"char",1,1,"unsigned char",&_ExtSoundHeader_7};
	VPL_ExtField _ExtSoundHeader_5 = { "loopEnd",16,4,kUnsignedType,"char",1,1,"unsigned long",&_ExtSoundHeader_6};
	VPL_ExtField _ExtSoundHeader_4 = { "loopStart",12,4,kUnsignedType,"char",1,1,"unsigned long",&_ExtSoundHeader_5};
	VPL_ExtField _ExtSoundHeader_3 = { "sampleRate",8,4,kUnsignedType,"char",1,1,"unsigned long",&_ExtSoundHeader_4};
	VPL_ExtField _ExtSoundHeader_2 = { "numChannels",4,4,kUnsignedType,"char",1,1,"unsigned long",&_ExtSoundHeader_3};
	VPL_ExtField _ExtSoundHeader_1 = { "samplePtr",0,4,kPointerType,"char",1,1,"T*",&_ExtSoundHeader_2};
	VPL_ExtStructure _ExtSoundHeader_S = {"ExtSoundHeader",&_ExtSoundHeader_1};

	VPL_ExtField _CmpSoundHeader_19 = { "sampleArea",64,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CmpSoundHeader_18 = { "sampleSize",62,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_CmpSoundHeader_19};
	VPL_ExtField _CmpSoundHeader_17 = { "snthID",60,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_CmpSoundHeader_18};
	VPL_ExtField _CmpSoundHeader_16 = { "packetSize",58,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_CmpSoundHeader_17};
	VPL_ExtField _CmpSoundHeader_15 = { "compressionID",56,2,kIntType,"unsigned char",0,1,"short",&_CmpSoundHeader_16};
	VPL_ExtField _CmpSoundHeader_14 = { "leftOverSamples",52,4,kPointerType,"LeftOverBlock",1,36,"T*",&_CmpSoundHeader_15};
	VPL_ExtField _CmpSoundHeader_13 = { "stateVars",48,4,kPointerType,"StateBlock",1,128,"T*",&_CmpSoundHeader_14};
	VPL_ExtField _CmpSoundHeader_12 = { "futureUse2",44,4,kUnsignedType,"StateBlock",1,128,"unsigned long",&_CmpSoundHeader_13};
	VPL_ExtField _CmpSoundHeader_11 = { "format",40,4,kUnsignedType,"StateBlock",1,128,"unsigned long",&_CmpSoundHeader_12};
	VPL_ExtField _CmpSoundHeader_10 = { "markerChunk",36,4,kPointerType,"char",1,1,"T*",&_CmpSoundHeader_11};
	VPL_ExtField _CmpSoundHeader_9 = { "AIFFSampleRate",26,10,kStructureType,"char",1,1,"Float80",&_CmpSoundHeader_10};
	VPL_ExtField _CmpSoundHeader_8 = { "numFrames",22,4,kUnsignedType,"char",1,1,"unsigned long",&_CmpSoundHeader_9};
	VPL_ExtField _CmpSoundHeader_7 = { "baseFrequency",21,1,kUnsignedType,"char",1,1,"unsigned char",&_CmpSoundHeader_8};
	VPL_ExtField _CmpSoundHeader_6 = { "encode",20,1,kUnsignedType,"char",1,1,"unsigned char",&_CmpSoundHeader_7};
	VPL_ExtField _CmpSoundHeader_5 = { "loopEnd",16,4,kUnsignedType,"char",1,1,"unsigned long",&_CmpSoundHeader_6};
	VPL_ExtField _CmpSoundHeader_4 = { "loopStart",12,4,kUnsignedType,"char",1,1,"unsigned long",&_CmpSoundHeader_5};
	VPL_ExtField _CmpSoundHeader_3 = { "sampleRate",8,4,kUnsignedType,"char",1,1,"unsigned long",&_CmpSoundHeader_4};
	VPL_ExtField _CmpSoundHeader_2 = { "numChannels",4,4,kUnsignedType,"char",1,1,"unsigned long",&_CmpSoundHeader_3};
	VPL_ExtField _CmpSoundHeader_1 = { "samplePtr",0,4,kPointerType,"char",1,1,"T*",&_CmpSoundHeader_2};
	VPL_ExtStructure _CmpSoundHeader_S = {"CmpSoundHeader",&_CmpSoundHeader_1};

	VPL_ExtField _SoundHeader_8 = { "sampleArea",22,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _SoundHeader_7 = { "baseFrequency",21,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_SoundHeader_8};
	VPL_ExtField _SoundHeader_6 = { "encode",20,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_SoundHeader_7};
	VPL_ExtField _SoundHeader_5 = { "loopEnd",16,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_SoundHeader_6};
	VPL_ExtField _SoundHeader_4 = { "loopStart",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_SoundHeader_5};
	VPL_ExtField _SoundHeader_3 = { "sampleRate",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_SoundHeader_4};
	VPL_ExtField _SoundHeader_2 = { "length",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_SoundHeader_3};
	VPL_ExtField _SoundHeader_1 = { "samplePtr",0,4,kPointerType,"char",1,1,"T*",&_SoundHeader_2};
	VPL_ExtStructure _SoundHeader_S = {"SoundHeader",&_SoundHeader_1};

	VPL_ExtField _Snd2ListResource_5 = { "dataPart",14,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _Snd2ListResource_4 = { "commandPart",6,8,kPointerType,"SndCommand",0,8,NULL,&_Snd2ListResource_5};
	VPL_ExtField _Snd2ListResource_3 = { "numCommands",4,2,kIntType,"SndCommand",0,8,"short",&_Snd2ListResource_4};
	VPL_ExtField _Snd2ListResource_2 = { "refCount",2,2,kIntType,"SndCommand",0,8,"short",&_Snd2ListResource_3};
	VPL_ExtField _Snd2ListResource_1 = { "format",0,2,kIntType,"SndCommand",0,8,"short",&_Snd2ListResource_2};
	VPL_ExtStructure _Snd2ListResource_S = {"Snd2ListResource",&_Snd2ListResource_1};

	VPL_ExtField _SndListResource_6 = { "dataPart",20,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _SndListResource_5 = { "commandPart",12,8,kPointerType,"SndCommand",0,8,NULL,&_SndListResource_6};
	VPL_ExtField _SndListResource_4 = { "numCommands",10,2,kIntType,"SndCommand",0,8,"short",&_SndListResource_5};
	VPL_ExtField _SndListResource_3 = { "modifierPart",4,6,kPointerType,"ModRef",0,6,NULL,&_SndListResource_4};
	VPL_ExtField _SndListResource_2 = { "numModifiers",2,2,kIntType,"ModRef",0,6,"short",&_SndListResource_3};
	VPL_ExtField _SndListResource_1 = { "format",0,2,kIntType,"ModRef",0,6,"short",&_SndListResource_2};
	VPL_ExtStructure _SndListResource_S = {"SndListResource",&_SndListResource_1};

	VPL_ExtField _ModRef_2 = { "modInit",2,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ModRef_1 = { "modNumber",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ModRef_2};
	VPL_ExtStructure _ModRef_S = {"ModRef",&_ModRef_1};

	VPL_ExtField _LeftOverBlock_2 = { "sampleArea",4,32,kPointerType,"signed char",0,1,NULL,NULL};
	VPL_ExtField _LeftOverBlock_1 = { "count",0,4,kUnsignedType,"signed char",0,1,"unsigned long",&_LeftOverBlock_2};
	VPL_ExtStructure _LeftOverBlock_S = {"LeftOverBlock",&_LeftOverBlock_1};

	VPL_ExtField _StateBlock_1 = { "stateVar",0,128,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtStructure _StateBlock_S = {"StateBlock",&_StateBlock_1};

	VPL_ExtField _SndChannel_11 = { "queue",36,1024,kPointerType,"SndCommand",0,8,NULL,NULL};
	VPL_ExtField _SndChannel_10 = { "qTail",34,2,kIntType,"SndCommand",0,8,"short",&_SndChannel_11};
	VPL_ExtField _SndChannel_9 = { "qHead",32,2,kIntType,"SndCommand",0,8,"short",&_SndChannel_10};
	VPL_ExtField _SndChannel_8 = { "qLength",30,2,kIntType,"SndCommand",0,8,"short",&_SndChannel_9};
	VPL_ExtField _SndChannel_7 = { "flags",28,2,kIntType,"SndCommand",0,8,"short",&_SndChannel_8};
	VPL_ExtField _SndChannel_6 = { "cmdInProgress",20,8,kStructureType,"SndCommand",0,8,"SndCommand",&_SndChannel_7};
	VPL_ExtField _SndChannel_5 = { "wait",16,4,kIntType,"SndCommand",0,8,"long int",&_SndChannel_6};
	VPL_ExtField _SndChannel_4 = { "userInfo",12,4,kIntType,"SndCommand",0,8,"long int",&_SndChannel_5};
	VPL_ExtField _SndChannel_3 = { "callBack",8,4,kPointerType,"void",1,0,"T*",&_SndChannel_4};
	VPL_ExtField _SndChannel_2 = { "firstMod",4,4,kPointerType,"char",1,1,"T*",&_SndChannel_3};
	VPL_ExtField _SndChannel_1 = { "nextChan",0,4,kPointerType,"SndChannel",1,1060,"T*",&_SndChannel_2};
	VPL_ExtStructure _SndChannel_S = {"SndChannel",&_SndChannel_1};

	VPL_ExtField _SndCommand_3 = { "param2",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SndCommand_2 = { "param1",2,2,kIntType,"NULL",0,0,"short",&_SndCommand_3};
	VPL_ExtField _SndCommand_1 = { "cmd",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SndCommand_2};
	VPL_ExtStructure _SndCommand_S = {"SndCommand",&_SndCommand_1};

	VPL_ExtStructure _OpaqueIBNibRef_S = {"OpaqueIBNibRef",NULL};

	VPL_ExtField _ICServices_2 = { "services",2,260,kPointerType,"ICServiceEntry",0,260,NULL,NULL};
	VPL_ExtField _ICServices_1 = { "count",0,2,kIntType,"ICServiceEntry",0,260,"short",&_ICServices_2};
	VPL_ExtStructure _ICServices_S = {"ICServices",&_ICServices_1};

	VPL_ExtField _ICServiceEntry_3 = { "flags",258,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ICServiceEntry_2 = { "port",256,2,kIntType,"NULL",0,0,"short",&_ICServiceEntry_3};
	VPL_ExtField _ICServiceEntry_1 = { "name",0,256,kPointerType,"unsigned char",0,1,NULL,&_ICServiceEntry_2};
	VPL_ExtStructure _ICServiceEntry_S = {"ICServiceEntry",&_ICServiceEntry_1};

	VPL_ExtField _ICMapEntry_12 = { "entryName",1046,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ICMapEntry_11 = { "MIMEType",790,256,kPointerType,"unsigned char",0,1,NULL,&_ICMapEntry_12};
	VPL_ExtField _ICMapEntry_10 = { "postAppName",534,256,kPointerType,"unsigned char",0,1,NULL,&_ICMapEntry_11};
	VPL_ExtField _ICMapEntry_9 = { "creatorAppName",278,256,kPointerType,"unsigned char",0,1,NULL,&_ICMapEntry_10};
	VPL_ExtField _ICMapEntry_8 = { "extension",22,256,kPointerType,"unsigned char",0,1,NULL,&_ICMapEntry_9};
	VPL_ExtField _ICMapEntry_7 = { "flags",18,4,kIntType,"unsigned char",0,1,"long int",&_ICMapEntry_8};
	VPL_ExtField _ICMapEntry_6 = { "postCreator",14,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ICMapEntry_7};
	VPL_ExtField _ICMapEntry_5 = { "fileCreator",10,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ICMapEntry_6};
	VPL_ExtField _ICMapEntry_4 = { "fileType",6,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ICMapEntry_5};
	VPL_ExtField _ICMapEntry_3 = { "version",4,2,kIntType,"unsigned char",0,1,"short",&_ICMapEntry_4};
	VPL_ExtField _ICMapEntry_2 = { "fixedLength",2,2,kIntType,"unsigned char",0,1,"short",&_ICMapEntry_3};
	VPL_ExtField _ICMapEntry_1 = { "totalLength",0,2,kIntType,"unsigned char",0,1,"short",&_ICMapEntry_2};
	VPL_ExtStructure _ICMapEntry_S = {"ICMapEntry",&_ICMapEntry_1};

	VPL_ExtField _ICFileSpec_4 = { "alias",106,6,kStructureType,"NULL",0,0,"AliasRecord",NULL};
	VPL_ExtField _ICFileSpec_3 = { "fss",36,70,kStructureType,"NULL",0,0,"FSSpec",&_ICFileSpec_4};
	VPL_ExtField _ICFileSpec_2 = { "volCreationDate",32,4,kIntType,"NULL",0,0,"long int",&_ICFileSpec_3};
	VPL_ExtField _ICFileSpec_1 = { "volName",0,32,kPointerType,"unsigned char",0,1,NULL,&_ICFileSpec_2};
	VPL_ExtStructure _ICFileSpec_S = {"ICFileSpec",&_ICFileSpec_1};

	VPL_ExtField _ICAppSpecList_2 = { "appSpecs",2,68,kPointerType,"ICAppSpec",0,68,NULL,NULL};
	VPL_ExtField _ICAppSpecList_1 = { "numberOfItems",0,2,kIntType,"ICAppSpec",0,68,"short",&_ICAppSpecList_2};
	VPL_ExtStructure _ICAppSpecList_S = {"ICAppSpecList",&_ICAppSpecList_1};

	VPL_ExtField _ICAppSpec_2 = { "name",4,64,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ICAppSpec_1 = { "fCreator",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ICAppSpec_2};
	VPL_ExtStructure _ICAppSpec_S = {"ICAppSpec",&_ICAppSpec_1};

	VPL_ExtField _ICCharTable_2 = { "macToNet",256,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ICCharTable_1 = { "netToMac",0,256,kPointerType,"unsigned char",0,1,NULL,&_ICCharTable_2};
	VPL_ExtStructure _ICCharTable_S = {"ICCharTable",&_ICCharTable_1};

	VPL_ExtField _ICFontRecord_4 = { "font",4,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ICFontRecord_3 = { "pad",3,1,kIntType,"unsigned char",0,1,"char",&_ICFontRecord_4};
	VPL_ExtField _ICFontRecord_2 = { "face",2,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_ICFontRecord_3};
	VPL_ExtField _ICFontRecord_1 = { "size",0,2,kIntType,"unsigned char",0,1,"short",&_ICFontRecord_2};
	VPL_ExtStructure _ICFontRecord_S = {"ICFontRecord",&_ICFontRecord_1};

	VPL_ExtField _ICDirSpec_2 = { "dirID",2,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ICDirSpec_1 = { "vRefNum",0,2,kIntType,"NULL",0,0,"short",&_ICDirSpec_2};
	VPL_ExtStructure _ICDirSpec_S = {"ICDirSpec",&_ICDirSpec_1};

	VPL_ExtStructure _OpaqueICInstance_S = {"OpaqueICInstance",NULL};

	VPL_ExtField _TypeSelectRecord_3 = { "tsrKeyStrokes",6,64,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _TypeSelectRecord_2 = { "tsrScript",4,2,kIntType,"unsigned char",0,1,"short",&_TypeSelectRecord_3};
	VPL_ExtField _TypeSelectRecord_1 = { "tsrLastKeyTime",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_TypeSelectRecord_2};
	VPL_ExtStructure _TypeSelectRecord_S = {"TypeSelectRecord",&_TypeSelectRecord_1};

	VPL_ExtField _FileTranslationSpec_4 = { "dst",28,20,kStructureType,"NULL",0,0,"FileTypeSpec",NULL};
	VPL_ExtField _FileTranslationSpec_3 = { "src",8,20,kStructureType,"NULL",0,0,"FileTypeSpec",&_FileTranslationSpec_4};
	VPL_ExtField _FileTranslationSpec_2 = { "translationSystemInfo",4,4,kPointerType,"void",1,0,"T*",&_FileTranslationSpec_3};
	VPL_ExtField _FileTranslationSpec_1 = { "componentSignature",0,4,kUnsignedType,"void",1,0,"unsigned long",&_FileTranslationSpec_2};
	VPL_ExtStructure _FileTranslationSpec_S = {"FileTranslationSpec",&_FileTranslationSpec_1};

	VPL_ExtField _ScrapTranslationList_2 = { "groupCount",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ScrapTranslationList_1 = { "modDate",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ScrapTranslationList_2};
	VPL_ExtStructure _ScrapTranslationList_S = {"ScrapTranslationList",&_ScrapTranslationList_1};

	VPL_ExtField _ScrapTypeSpec_2 = { "hint",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ScrapTypeSpec_1 = { "format",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ScrapTypeSpec_2};
	VPL_ExtStructure _ScrapTypeSpec_S = {"ScrapTypeSpec",&_ScrapTypeSpec_1};

	VPL_ExtField _FileTranslationList_2 = { "groupCount",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _FileTranslationList_1 = { "modDate",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FileTranslationList_2};
	VPL_ExtStructure _FileTranslationList_S = {"FileTranslationList",&_FileTranslationList_1};

	VPL_ExtField _FileTypeSpec_5 = { "catInfoCreator",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _FileTypeSpec_4 = { "catInfoType",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FileTypeSpec_5};
	VPL_ExtField _FileTypeSpec_3 = { "flags",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FileTypeSpec_4};
	VPL_ExtField _FileTypeSpec_2 = { "hint",4,4,kIntType,"NULL",0,0,"long int",&_FileTypeSpec_3};
	VPL_ExtField _FileTypeSpec_1 = { "format",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FileTypeSpec_2};
	VPL_ExtStructure _FileTypeSpec_S = {"FileTypeSpec",&_FileTypeSpec_1};

	VPL_ExtField _TSMTERec_5 = { "refCon",16,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TSMTERec_4 = { "updateFlag",12,4,kIntType,"NULL",0,0,"long int",&_TSMTERec_5};
	VPL_ExtField _TSMTERec_3 = { "postUpdateProc",8,4,kPointerType,"void",1,0,"T*",&_TSMTERec_4};
	VPL_ExtField _TSMTERec_2 = { "preUpdateProc",4,4,kPointerType,"void",1,0,"T*",&_TSMTERec_3};
	VPL_ExtField _TSMTERec_1 = { "textH",0,4,kPointerType,"TERec",2,32098,"T*",&_TSMTERec_2};
	VPL_ExtStructure _TSMTERec_S = {"TSMTERec",&_TSMTERec_1};

	VPL_ExtField _DataBrowserListViewColumnDesc_2 = { "headerBtnDesc",12,46,kStructureType,"NULL",0,0,"DataBrowserListViewHeaderDesc",NULL};
	VPL_ExtField _DataBrowserListViewColumnDesc_1 = { "propertyDesc",0,12,kStructureType,"NULL",0,0,"DataBrowserPropertyDesc",&_DataBrowserListViewColumnDesc_2};
	VPL_ExtStructure _DataBrowserListViewColumnDesc_S = {"DataBrowserListViewColumnDesc",&_DataBrowserListViewColumnDesc_1};

	VPL_ExtField _DataBrowserListViewHeaderDesc_8 = { "btnContentInfo",40,6,kStructureType,"NULL",0,0,"ControlButtonContentInfo",NULL};
	VPL_ExtField _DataBrowserListViewHeaderDesc_7 = { "btnFontStyle",16,24,kStructureType,"NULL",0,0,"ControlFontStyleRec",&_DataBrowserListViewHeaderDesc_8};
	VPL_ExtField _DataBrowserListViewHeaderDesc_6 = { "initialOrder",14,2,kUnsignedType,"NULL",0,0,"unsigned short",&_DataBrowserListViewHeaderDesc_7};
	VPL_ExtField _DataBrowserListViewHeaderDesc_5 = { "titleString",10,4,kPointerType,"__CFString",1,0,"T*",&_DataBrowserListViewHeaderDesc_6};
	VPL_ExtField _DataBrowserListViewHeaderDesc_4 = { "titleOffset",8,2,kIntType,"__CFString",1,0,"short",&_DataBrowserListViewHeaderDesc_5};
	VPL_ExtField _DataBrowserListViewHeaderDesc_3 = { "maximumWidth",6,2,kUnsignedType,"__CFString",1,0,"unsigned short",&_DataBrowserListViewHeaderDesc_4};
	VPL_ExtField _DataBrowserListViewHeaderDesc_2 = { "minimumWidth",4,2,kUnsignedType,"__CFString",1,0,"unsigned short",&_DataBrowserListViewHeaderDesc_3};
	VPL_ExtField _DataBrowserListViewHeaderDesc_1 = { "version",0,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_DataBrowserListViewHeaderDesc_2};
	VPL_ExtStructure _DataBrowserListViewHeaderDesc_S = {"DataBrowserListViewHeaderDesc",&_DataBrowserListViewHeaderDesc_1};

	VPL_ExtField _2155_7 = { "receiveDragCallback",24,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _2155_6 = { "acceptDragCallback",20,4,kPointerType,"unsigned long",1,4,"T*",&_2155_7};
	VPL_ExtField _2155_5 = { "dragRegionCallback",16,4,kPointerType,"void",1,0,"T*",&_2155_6};
	VPL_ExtField _2155_4 = { "trackingCallback",12,4,kPointerType,"short",1,2,"T*",&_2155_5};
	VPL_ExtField _2155_3 = { "hitTestCallback",8,4,kPointerType,"unsigned char",1,1,"T*",&_2155_4};
	VPL_ExtField _2155_2 = { "editTextCallback",4,4,kPointerType,"unsigned char",1,1,"T*",&_2155_3};
	VPL_ExtField _2155_1 = { "drawItemCallback",0,4,kPointerType,"void",1,0,"T*",&_2155_2};
	VPL_ExtStructure _2155_S = {"2155",&_2155_1};

	VPL_ExtField _DataBrowserCustomCallbacks_2 = { "u",4,28,kStructureType,"NULL",0,0,"2154",NULL};
	VPL_ExtField _DataBrowserCustomCallbacks_1 = { "version",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DataBrowserCustomCallbacks_2};
	VPL_ExtStructure _DataBrowserCustomCallbacks_S = {"DataBrowserCustomCallbacks",&_DataBrowserCustomCallbacks_1};

	VPL_ExtField _2151_10 = { "selectContextualMenuCallback",36,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _2151_9 = { "getContextualMenuCallback",32,4,kPointerType,"void",1,0,"T*",&_2151_10};
	VPL_ExtField _2151_8 = { "itemHelpContentCallback",28,4,kPointerType,"void",1,0,"T*",&_2151_9};
	VPL_ExtField _2151_7 = { "postProcessDragCallback",24,4,kPointerType,"void",1,0,"T*",&_2151_8};
	VPL_ExtField _2151_6 = { "receiveDragCallback",20,4,kPointerType,"unsigned char",1,1,"T*",&_2151_7};
	VPL_ExtField _2151_5 = { "acceptDragCallback",16,4,kPointerType,"unsigned char",1,1,"T*",&_2151_6};
	VPL_ExtField _2151_4 = { "addDragItemCallback",12,4,kPointerType,"unsigned char",1,1,"T*",&_2151_5};
	VPL_ExtField _2151_3 = { "itemNotificationCallback",8,4,kPointerType,"void",1,0,"T*",&_2151_4};
	VPL_ExtField _2151_2 = { "itemCompareCallback",4,4,kPointerType,"unsigned char",1,1,"T*",&_2151_3};
	VPL_ExtField _2151_1 = { "itemDataCallback",0,4,kPointerType,"long int",1,4,"T*",&_2151_2};
	VPL_ExtStructure _2151_S = {"2151",&_2151_1};

	VPL_ExtField _DataBrowserCallbacks_2 = { "u",4,40,kStructureType,"NULL",0,0,"2150",NULL};
	VPL_ExtField _DataBrowserCallbacks_1 = { "version",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DataBrowserCallbacks_2};
	VPL_ExtStructure _DataBrowserCallbacks_S = {"DataBrowserCallbacks",&_DataBrowserCallbacks_1};

	VPL_ExtField _DataBrowserPropertyDesc_3 = { "propertyFlags",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _DataBrowserPropertyDesc_2 = { "propertyType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DataBrowserPropertyDesc_3};
	VPL_ExtField _DataBrowserPropertyDesc_1 = { "propertyID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DataBrowserPropertyDesc_2};
	VPL_ExtStructure _DataBrowserPropertyDesc_S = {"DataBrowserPropertyDesc",&_DataBrowserPropertyDesc_1};

	VPL_ExtField _ControlEditTextSelectionRec_2 = { "selEnd",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ControlEditTextSelectionRec_1 = { "selStart",0,2,kIntType,"NULL",0,0,"short",&_ControlEditTextSelectionRec_2};
	VPL_ExtStructure _ControlEditTextSelectionRec_S = {"ControlEditTextSelectionRec",&_ControlEditTextSelectionRec_1};

	VPL_ExtField _ControlTabInfoRecV1_3 = { "name",4,4,kPointerType,"__CFString",1,0,"T*",NULL};
	VPL_ExtField _ControlTabInfoRecV1_2 = { "iconSuiteID",2,2,kIntType,"__CFString",1,0,"short",&_ControlTabInfoRecV1_3};
	VPL_ExtField _ControlTabInfoRecV1_1 = { "version",0,2,kIntType,"__CFString",1,0,"short",&_ControlTabInfoRecV1_2};
	VPL_ExtStructure _ControlTabInfoRecV1_S = {"ControlTabInfoRecV1",&_ControlTabInfoRecV1_1};

	VPL_ExtField _ControlTabInfoRec_3 = { "name",4,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ControlTabInfoRec_2 = { "iconSuiteID",2,2,kIntType,"unsigned char",0,1,"short",&_ControlTabInfoRec_3};
	VPL_ExtField _ControlTabInfoRec_1 = { "version",0,2,kIntType,"unsigned char",0,1,"short",&_ControlTabInfoRec_2};
	VPL_ExtStructure _ControlTabInfoRec_S = {"ControlTabInfoRec",&_ControlTabInfoRec_1};

	VPL_ExtField _ControlTabEntry_3 = { "enabled",8,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _ControlTabEntry_2 = { "name",4,4,kPointerType,"__CFString",1,0,"T*",&_ControlTabEntry_3};
	VPL_ExtField _ControlTabEntry_1 = { "icon",0,4,kPointerType,"ControlButtonContentInfo",1,6,"T*",&_ControlTabEntry_2};
	VPL_ExtStructure _ControlTabEntry_S = {"ControlTabEntry",&_ControlTabEntry_1};

	VPL_ExtField _HMHelpContentRec_4 = { "content",14,520,kPointerType,"HMHelpContent",0,260,NULL,NULL};
	VPL_ExtField _HMHelpContentRec_3 = { "tagSide",12,2,kIntType,"HMHelpContent",0,260,"short",&_HMHelpContentRec_4};
	VPL_ExtField _HMHelpContentRec_2 = { "absHotRect",4,8,kStructureType,"HMHelpContent",0,260,"Rect",&_HMHelpContentRec_3};
	VPL_ExtField _HMHelpContentRec_1 = { "version",0,4,kIntType,"HMHelpContent",0,260,"long int",&_HMHelpContentRec_2};
	VPL_ExtStructure _HMHelpContentRec_S = {"HMHelpContentRec",&_HMHelpContentRec_1};

	VPL_ExtField _HMHelpContent_2 = { "u",4,256,kStructureType,"NULL",0,0,"2014",NULL};
	VPL_ExtField _HMHelpContent_1 = { "contentType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HMHelpContent_2};
	VPL_ExtStructure _HMHelpContent_S = {"HMHelpContent",&_HMHelpContent_1};

	VPL_ExtField _TXNCarbonEventInfo_4 = { "fDictionary",4,4,kPointerType,"__CFDictionary",1,0,"T*",NULL};
	VPL_ExtField _TXNCarbonEventInfo_3 = { "flags",2,2,kUnsignedType,"__CFDictionary",1,0,"unsigned short",&_TXNCarbonEventInfo_4};
	VPL_ExtField _TXNCarbonEventInfo_2 = { "filler",1,1,kUnsignedType,"__CFDictionary",1,0,"unsigned char",&_TXNCarbonEventInfo_3};
	VPL_ExtField _TXNCarbonEventInfo_1 = { "useCarbonEvents",0,1,kUnsignedType,"__CFDictionary",1,0,"unsigned char",&_TXNCarbonEventInfo_2};
	VPL_ExtStructure _TXNCarbonEventInfo_S = {"TXNCarbonEventInfo",&_TXNCarbonEventInfo_1};

	VPL_ExtField _TXNLongRect_4 = { "right",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TXNLongRect_3 = { "bottom",8,4,kIntType,"NULL",0,0,"long int",&_TXNLongRect_4};
	VPL_ExtField _TXNLongRect_2 = { "left",4,4,kIntType,"NULL",0,0,"long int",&_TXNLongRect_3};
	VPL_ExtField _TXNLongRect_1 = { "top",0,4,kIntType,"NULL",0,0,"long int",&_TXNLongRect_2};
	VPL_ExtStructure _TXNLongRect_S = {"TXNLongRect",&_TXNLongRect_1};

	VPL_ExtField _TXNBackground_2 = { "bg",4,6,kStructureType,"NULL",0,0,"TXNBackgroundData",NULL};
	VPL_ExtField _TXNBackground_1 = { "bgType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TXNBackground_2};
	VPL_ExtStructure _TXNBackground_S = {"TXNBackground",&_TXNBackground_1};

	VPL_ExtField _TXNMatchTextRecord_3 = { "iTextEncoding",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TXNMatchTextRecord_2 = { "iTextToMatchLength",4,4,kIntType,"NULL",0,0,"long int",&_TXNMatchTextRecord_3};
	VPL_ExtField _TXNMatchTextRecord_1 = { "iTextPtr",0,4,kPointerType,"void",1,0,"T*",&_TXNMatchTextRecord_2};
	VPL_ExtStructure _TXNMatchTextRecord_S = {"TXNMatchTextRecord",&_TXNMatchTextRecord_1};

	VPL_ExtField _TXNMacOSPreferredFontDescription_4 = { "fontStyle",12,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _TXNMacOSPreferredFontDescription_3 = { "encoding",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TXNMacOSPreferredFontDescription_4};
	VPL_ExtField _TXNMacOSPreferredFontDescription_2 = { "pointSize",4,4,kIntType,"NULL",0,0,"long int",&_TXNMacOSPreferredFontDescription_3};
	VPL_ExtField _TXNMacOSPreferredFontDescription_1 = { "fontID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TXNMacOSPreferredFontDescription_2};
	VPL_ExtStructure _TXNMacOSPreferredFontDescription_S = {"TXNMacOSPreferredFontDescription",&_TXNMacOSPreferredFontDescription_1};

	VPL_ExtField _TXNTypeAttributes_3 = { "data",8,4,kStructureType,"NULL",0,0,"TXNAttributeData",NULL};
	VPL_ExtField _TXNTypeAttributes_2 = { "size",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TXNTypeAttributes_3};
	VPL_ExtField _TXNTypeAttributes_1 = { "tag",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TXNTypeAttributes_2};
	VPL_ExtStructure _TXNTypeAttributes_S = {"TXNTypeAttributes",&_TXNTypeAttributes_1};

	VPL_ExtField _TXNATSUIVariations_3 = { "variationValues",8,4,kPointerType,"long int",1,4,"T*",NULL};
	VPL_ExtField _TXNATSUIVariations_2 = { "variationAxis",4,4,kPointerType,"unsigned long",1,4,"T*",&_TXNATSUIVariations_3};
	VPL_ExtField _TXNATSUIVariations_1 = { "variationCount",0,4,kUnsignedType,"unsigned long",1,4,"unsigned long",&_TXNATSUIVariations_2};
	VPL_ExtStructure _TXNATSUIVariations_S = {"TXNATSUIVariations",&_TXNATSUIVariations_1};

	VPL_ExtField _TXNATSUIFeatures_3 = { "featureSelectors",8,4,kPointerType,"unsigned short",1,2,"T*",NULL};
	VPL_ExtField _TXNATSUIFeatures_2 = { "featureTypes",4,4,kPointerType,"unsigned short",1,2,"T*",&_TXNATSUIFeatures_3};
	VPL_ExtField _TXNATSUIFeatures_1 = { "featureCount",0,4,kUnsignedType,"unsigned short",1,2,"unsigned long",&_TXNATSUIFeatures_2};
	VPL_ExtStructure _TXNATSUIFeatures_S = {"TXNATSUIFeatures",&_TXNATSUIFeatures_1};

	VPL_ExtField _TXNMargins_4 = { "rightMargin",6,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _TXNMargins_3 = { "bottomMargin",4,2,kIntType,"NULL",0,0,"short",&_TXNMargins_4};
	VPL_ExtField _TXNMargins_2 = { "leftMargin",2,2,kIntType,"NULL",0,0,"short",&_TXNMargins_3};
	VPL_ExtField _TXNMargins_1 = { "topMargin",0,2,kIntType,"NULL",0,0,"short",&_TXNMargins_2};
	VPL_ExtStructure _TXNMargins_S = {"TXNMargins",&_TXNMargins_1};

	VPL_ExtField _TXNTab_3 = { "filler",3,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _TXNTab_2 = { "tabType",2,1,kIntType,"NULL",0,0,"signed char",&_TXNTab_3};
	VPL_ExtField _TXNTab_1 = { "value",0,2,kIntType,"NULL",0,0,"short",&_TXNTab_2};
	VPL_ExtStructure _TXNTab_S = {"TXNTab",&_TXNTab_1};

	VPL_ExtField _TXNTextBoxOptionsData_5 = { "options",16,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _TXNTextBoxOptionsData_4 = { "rotation",12,4,kIntType,"void",1,0,"long int",&_TXNTextBoxOptionsData_5};
	VPL_ExtField _TXNTextBoxOptionsData_3 = { "justification",8,4,kIntType,"void",1,0,"long int",&_TXNTextBoxOptionsData_4};
	VPL_ExtField _TXNTextBoxOptionsData_2 = { "flushness",4,4,kIntType,"void",1,0,"long int",&_TXNTextBoxOptionsData_3};
	VPL_ExtField _TXNTextBoxOptionsData_1 = { "optionTags",0,4,kUnsignedType,"void",1,0,"unsigned long",&_TXNTextBoxOptionsData_2};
	VPL_ExtStructure _TXNTextBoxOptionsData_S = {"TXNTextBoxOptionsData",&_TXNTextBoxOptionsData_1};

	VPL_ExtStructure _OpaqueTXNFontMenuObject_S = {"OpaqueTXNFontMenuObject",NULL};

	VPL_ExtStructure _OpaqueTXNObject_S = {"OpaqueTXNObject",NULL};

	VPL_ExtStructure _OpaqueScrapRef_S = {"OpaqueScrapRef",NULL};

	VPL_ExtField _ScrapFlavorInfo_2 = { "flavorFlags",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ScrapFlavorInfo_1 = { "flavorType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ScrapFlavorInfo_2};
	VPL_ExtStructure _ScrapFlavorInfo_S = {"ScrapFlavorInfo",&_ScrapFlavorInfo_1};

	VPL_ExtField _ScriptLanguageSupport_2 = { "fScriptLanguageArray",2,4,kPointerType,"ScriptLanguageRecord",0,4,NULL,NULL};
	VPL_ExtField _ScriptLanguageSupport_1 = { "fScriptLanguageCount",0,2,kIntType,"ScriptLanguageRecord",0,4,"short",&_ScriptLanguageSupport_2};
	VPL_ExtStructure _ScriptLanguageSupport_S = {"ScriptLanguageSupport",&_ScriptLanguageSupport_1};

	VPL_ExtField _ScriptLanguageRecord_2 = { "fLanguage",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ScriptLanguageRecord_1 = { "fScript",0,2,kIntType,"NULL",0,0,"short",&_ScriptLanguageRecord_2};
	VPL_ExtStructure _ScriptLanguageRecord_S = {"ScriptLanguageRecord",&_ScriptLanguageRecord_1};

	VPL_ExtField _TextServiceList_2 = { "fServices",2,260,kPointerType,"TextServiceInfo",0,260,NULL,NULL};
	VPL_ExtField _TextServiceList_1 = { "fTextServiceCount",0,2,kIntType,"TextServiceInfo",0,260,"short",&_TextServiceList_2};
	VPL_ExtStructure _TextServiceList_S = {"TextServiceList",&_TextServiceList_1};

	VPL_ExtField _TextServiceInfo_2 = { "fItemName",4,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _TextServiceInfo_1 = { "fComponent",0,4,kPointerType,"ComponentRecord",1,4,"T*",&_TextServiceInfo_2};
	VPL_ExtStructure _TextServiceInfo_S = {"TextServiceInfo",&_TextServiceInfo_1};

	VPL_ExtStructure _OpaqueTSMDocumentID_S = {"OpaqueTSMDocumentID",NULL};

	VPL_ExtStructure _OpaqueTSMContext_S = {"OpaqueTSMContext",NULL};

	VPL_ExtField _ListDefSpec_2 = { "u",4,4,kStructureType,"NULL",0,0,"1938",NULL};
	VPL_ExtField _ListDefSpec_1 = { "defType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ListDefSpec_2};
	VPL_ExtStructure _ListDefSpec_S = {"ListDefSpec",&_ListDefSpec_1};

	VPL_ExtField _StandardIconListCellDataRec_5 = { "name",10,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _StandardIconListCellDataRec_4 = { "size",8,2,kIntType,"unsigned char",0,1,"short",&_StandardIconListCellDataRec_5};
	VPL_ExtField _StandardIconListCellDataRec_3 = { "face",6,2,kIntType,"unsigned char",0,1,"short",&_StandardIconListCellDataRec_4};
	VPL_ExtField _StandardIconListCellDataRec_2 = { "font",4,2,kIntType,"unsigned char",0,1,"short",&_StandardIconListCellDataRec_3};
	VPL_ExtField _StandardIconListCellDataRec_1 = { "iconHandle",0,4,kPointerType,"char",2,1,"T*",&_StandardIconListCellDataRec_2};
	VPL_ExtStructure _StandardIconListCellDataRec_S = {"StandardIconListCellDataRec",&_StandardIconListCellDataRec_1};

	VPL_ExtField _ListRec_23 = { "cellArray",86,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _ListRec_22 = { "maxIndex",84,2,kIntType,"short",0,2,"short",&_ListRec_23};
	VPL_ExtField _ListRec_21 = { "cells",80,4,kPointerType,"char",2,1,"T*",&_ListRec_22};
	VPL_ExtField _ListRec_20 = { "dataBounds",72,8,kStructureType,"char",2,1,"Rect",&_ListRec_21};
	VPL_ExtField _ListRec_19 = { "userHandle",68,4,kPointerType,"char",2,1,"T*",&_ListRec_20};
	VPL_ExtField _ListRec_18 = { "listDefProc",64,4,kPointerType,"char",2,1,"T*",&_ListRec_19};
	VPL_ExtField _ListRec_17 = { "refCon",60,4,kIntType,"char",2,1,"long int",&_ListRec_18};
	VPL_ExtField _ListRec_16 = { "lastClick",56,4,kStructureType,"char",2,1,"Point",&_ListRec_17};
	VPL_ExtField _ListRec_15 = { "lClickLoop",52,4,kPointerType,"unsigned char",1,1,"T*",&_ListRec_16};
	VPL_ExtField _ListRec_14 = { "mouseLoc",48,4,kStructureType,"unsigned char",1,1,"Point",&_ListRec_15};
	VPL_ExtField _ListRec_13 = { "clikLoc",44,4,kStructureType,"unsigned char",1,1,"Point",&_ListRec_14};
	VPL_ExtField _ListRec_12 = { "clikTime",40,4,kIntType,"unsigned char",1,1,"long int",&_ListRec_13};
	VPL_ExtField _ListRec_11 = { "listFlags",39,1,kIntType,"unsigned char",1,1,"signed char",&_ListRec_12};
	VPL_ExtField _ListRec_10 = { "lReserved",38,1,kIntType,"unsigned char",1,1,"signed char",&_ListRec_11};
	VPL_ExtField _ListRec_9 = { "lActive",37,1,kUnsignedType,"unsigned char",1,1,"unsigned char",&_ListRec_10};
	VPL_ExtField _ListRec_8 = { "selFlags",36,1,kIntType,"unsigned char",1,1,"signed char",&_ListRec_9};
	VPL_ExtField _ListRec_7 = { "hScroll",32,4,kPointerType,"OpaqueControlRef",1,0,"T*",&_ListRec_8};
	VPL_ExtField _ListRec_6 = { "vScroll",28,4,kPointerType,"OpaqueControlRef",1,0,"T*",&_ListRec_7};
	VPL_ExtField _ListRec_5 = { "visible",20,8,kStructureType,"OpaqueControlRef",1,0,"Rect",&_ListRec_6};
	VPL_ExtField _ListRec_4 = { "cellSize",16,4,kStructureType,"OpaqueControlRef",1,0,"Point",&_ListRec_5};
	VPL_ExtField _ListRec_3 = { "indent",12,4,kStructureType,"OpaqueControlRef",1,0,"Point",&_ListRec_4};
	VPL_ExtField _ListRec_2 = { "port",8,4,kPointerType,"OpaqueGrafPtr",1,0,"T*",&_ListRec_3};
	VPL_ExtField _ListRec_1 = { "rView",0,8,kStructureType,"OpaqueGrafPtr",1,0,"Rect",&_ListRec_2};
	VPL_ExtStructure _ListRec_S = {"ListRec",&_ListRec_1};

	VPL_ExtField _AlertStdCFStringAlertParamRec_10 = { "flags",24,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _AlertStdCFStringAlertParamRec_9 = { "position",22,2,kUnsignedType,"NULL",0,0,"unsigned short",&_AlertStdCFStringAlertParamRec_10};
	VPL_ExtField _AlertStdCFStringAlertParamRec_8 = { "cancelButton",20,2,kIntType,"NULL",0,0,"short",&_AlertStdCFStringAlertParamRec_9};
	VPL_ExtField _AlertStdCFStringAlertParamRec_7 = { "defaultButton",18,2,kIntType,"NULL",0,0,"short",&_AlertStdCFStringAlertParamRec_8};
	VPL_ExtField _AlertStdCFStringAlertParamRec_6 = { "otherText",14,4,kPointerType,"__CFString",1,0,"T*",&_AlertStdCFStringAlertParamRec_7};
	VPL_ExtField _AlertStdCFStringAlertParamRec_5 = { "cancelText",10,4,kPointerType,"__CFString",1,0,"T*",&_AlertStdCFStringAlertParamRec_6};
	VPL_ExtField _AlertStdCFStringAlertParamRec_4 = { "defaultText",6,4,kPointerType,"__CFString",1,0,"T*",&_AlertStdCFStringAlertParamRec_5};
	VPL_ExtField _AlertStdCFStringAlertParamRec_3 = { "helpButton",5,1,kUnsignedType,"__CFString",1,0,"unsigned char",&_AlertStdCFStringAlertParamRec_4};
	VPL_ExtField _AlertStdCFStringAlertParamRec_2 = { "movable",4,1,kUnsignedType,"__CFString",1,0,"unsigned char",&_AlertStdCFStringAlertParamRec_3};
	VPL_ExtField _AlertStdCFStringAlertParamRec_1 = { "version",0,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_AlertStdCFStringAlertParamRec_2};
	VPL_ExtStructure _AlertStdCFStringAlertParamRec_S = {"AlertStdCFStringAlertParamRec",&_AlertStdCFStringAlertParamRec_1};

	VPL_ExtField _AlertStdAlertParamRec_9 = { "position",22,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _AlertStdAlertParamRec_8 = { "cancelButton",20,2,kIntType,"NULL",0,0,"short",&_AlertStdAlertParamRec_9};
	VPL_ExtField _AlertStdAlertParamRec_7 = { "defaultButton",18,2,kIntType,"NULL",0,0,"short",&_AlertStdAlertParamRec_8};
	VPL_ExtField _AlertStdAlertParamRec_6 = { "otherText",14,4,kPointerType,"unsigned char",1,1,"T*",&_AlertStdAlertParamRec_7};
	VPL_ExtField _AlertStdAlertParamRec_5 = { "cancelText",10,4,kPointerType,"unsigned char",1,1,"T*",&_AlertStdAlertParamRec_6};
	VPL_ExtField _AlertStdAlertParamRec_4 = { "defaultText",6,4,kPointerType,"unsigned char",1,1,"T*",&_AlertStdAlertParamRec_5};
	VPL_ExtField _AlertStdAlertParamRec_3 = { "filterProc",2,4,kPointerType,"unsigned char",1,1,"T*",&_AlertStdAlertParamRec_4};
	VPL_ExtField _AlertStdAlertParamRec_2 = { "helpButton",1,1,kUnsignedType,"unsigned char",1,1,"unsigned char",&_AlertStdAlertParamRec_3};
	VPL_ExtField _AlertStdAlertParamRec_1 = { "movable",0,1,kUnsignedType,"unsigned char",1,1,"unsigned char",&_AlertStdAlertParamRec_2};
	VPL_ExtStructure _AlertStdAlertParamRec_S = {"AlertStdAlertParamRec",&_AlertStdAlertParamRec_1};

	VPL_ExtField _AlertTemplate_3 = { "stages",10,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _AlertTemplate_2 = { "itemsID",8,2,kIntType,"NULL",0,0,"short",&_AlertTemplate_3};
	VPL_ExtField _AlertTemplate_1 = { "boundsRect",0,8,kStructureType,"NULL",0,0,"Rect",&_AlertTemplate_2};
	VPL_ExtStructure _AlertTemplate_S = {"AlertTemplate",&_AlertTemplate_1};

	VPL_ExtField _DialogTemplate_9 = { "title",20,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _DialogTemplate_8 = { "itemsID",18,2,kIntType,"unsigned char",0,1,"short",&_DialogTemplate_9};
	VPL_ExtField _DialogTemplate_7 = { "refCon",14,4,kIntType,"unsigned char",0,1,"long int",&_DialogTemplate_8};
	VPL_ExtField _DialogTemplate_6 = { "filler2",13,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_DialogTemplate_7};
	VPL_ExtField _DialogTemplate_5 = { "goAwayFlag",12,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_DialogTemplate_6};
	VPL_ExtField _DialogTemplate_4 = { "filler1",11,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_DialogTemplate_5};
	VPL_ExtField _DialogTemplate_3 = { "visible",10,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_DialogTemplate_4};
	VPL_ExtField _DialogTemplate_2 = { "procID",8,2,kIntType,"unsigned char",0,1,"short",&_DialogTemplate_3};
	VPL_ExtField _DialogTemplate_1 = { "boundsRect",0,8,kStructureType,"unsigned char",0,1,"Rect",&_DialogTemplate_2};
	VPL_ExtStructure _DialogTemplate_S = {"DialogTemplate",&_DialogTemplate_1};

	VPL_ExtStructure _OpaqueEventHotKeyRef_S = {"OpaqueEventHotKeyRef",NULL};

	VPL_ExtField _EventHotKeyID_2 = { "id",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _EventHotKeyID_1 = { "signature",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_EventHotKeyID_2};
	VPL_ExtStructure _EventHotKeyID_S = {"EventHotKeyID",&_EventHotKeyID_1};

	VPL_ExtStructure _OpaqueToolboxObjectClassRef_S = {"OpaqueToolboxObjectClassRef",NULL};

	VPL_ExtStructure _OpaqueEventTargetRef_S = {"OpaqueEventTargetRef",NULL};

	VPL_ExtStructure _OpaqueEventHandlerCallRef_S = {"OpaqueEventHandlerCallRef",NULL};

	VPL_ExtStructure _OpaqueEventHandlerRef_S = {"OpaqueEventHandlerRef",NULL};

	VPL_ExtField _TabletProximityRec_11 = { "enterProximity",29,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _TabletProximityRec_10 = { "pointerType",28,1,kUnsignedType,"NULL",0,0,"unsigned char",&_TabletProximityRec_11};
	VPL_ExtField _TabletProximityRec_9 = { "capabilityMask",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TabletProximityRec_10};
	VPL_ExtField _TabletProximityRec_8 = { "uniqueID",16,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_TabletProximityRec_9};
	VPL_ExtField _TabletProximityRec_7 = { "pointerSerialNumber",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TabletProximityRec_8};
	VPL_ExtField _TabletProximityRec_6 = { "vendorPointerType",10,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletProximityRec_7};
	VPL_ExtField _TabletProximityRec_5 = { "systemTabletID",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletProximityRec_6};
	VPL_ExtField _TabletProximityRec_4 = { "deviceID",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletProximityRec_5};
	VPL_ExtField _TabletProximityRec_3 = { "pointerID",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletProximityRec_4};
	VPL_ExtField _TabletProximityRec_2 = { "tabletID",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletProximityRec_3};
	VPL_ExtField _TabletProximityRec_1 = { "vendorID",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletProximityRec_2};
	VPL_ExtStructure _TabletProximityRec_S = {"TabletProximityRec",&_TabletProximityRec_1};

	VPL_ExtField _TabletPointRec_13 = { "vendor3",30,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _TabletPointRec_12 = { "vendor2",28,2,kIntType,"NULL",0,0,"short",&_TabletPointRec_13};
	VPL_ExtField _TabletPointRec_11 = { "vendor1",26,2,kIntType,"NULL",0,0,"short",&_TabletPointRec_12};
	VPL_ExtField _TabletPointRec_10 = { "deviceID",24,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletPointRec_11};
	VPL_ExtField _TabletPointRec_9 = { "tangentialPressure",22,2,kIntType,"NULL",0,0,"short",&_TabletPointRec_10};
	VPL_ExtField _TabletPointRec_8 = { "rotation",20,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletPointRec_9};
	VPL_ExtField _TabletPointRec_7 = { "tiltY",18,2,kIntType,"NULL",0,0,"short",&_TabletPointRec_8};
	VPL_ExtField _TabletPointRec_6 = { "tiltX",16,2,kIntType,"NULL",0,0,"short",&_TabletPointRec_7};
	VPL_ExtField _TabletPointRec_5 = { "pressure",14,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletPointRec_6};
	VPL_ExtField _TabletPointRec_4 = { "buttons",12,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TabletPointRec_5};
	VPL_ExtField _TabletPointRec_3 = { "absZ",8,4,kIntType,"NULL",0,0,"long int",&_TabletPointRec_4};
	VPL_ExtField _TabletPointRec_2 = { "absY",4,4,kIntType,"NULL",0,0,"long int",&_TabletPointRec_3};
	VPL_ExtField _TabletPointRec_1 = { "absX",0,4,kIntType,"NULL",0,0,"long int",&_TabletPointRec_2};
	VPL_ExtStructure _TabletPointRec_S = {"TabletPointRec",&_TabletPointRec_1};

	VPL_ExtField _1891_2 = { "menuItemIndex",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _1891_1 = { "menuRef",0,4,kPointerType,"OpaqueMenuHandle",1,0,"T*",&_1891_2};
	VPL_ExtStructure _1891_S = {"1891",&_1891_1};

	VPL_ExtField _HICommand_3 = { "menu",8,6,kStructureType,"NULL",0,0,"1891",NULL};
	VPL_ExtField _HICommand_2 = { "commandID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HICommand_3};
	VPL_ExtField _HICommand_1 = { "attributes",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HICommand_2};
	VPL_ExtStructure _HICommand_S = {"HICommand",&_HICommand_1};

	VPL_ExtField _HIPoint_2 = { "y",4,4,kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField _HIPoint_1 = { "x",0,4,kFloatType,"NULL",0,0,"float",&_HIPoint_2};
	VPL_ExtStructure _HIPoint_S = {"HIPoint",&_HIPoint_1};

	VPL_ExtStructure _OpaqueEventLoopTimerRef_S = {"OpaqueEventLoopTimerRef",NULL};

	VPL_ExtStructure _OpaqueEventQueueRef_S = {"OpaqueEventQueueRef",NULL};

	VPL_ExtStructure _OpaqueEventLoopRef_S = {"OpaqueEventLoopRef",NULL};

	VPL_ExtField _EventTypeSpec_2 = { "eventKind",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _EventTypeSpec_1 = { "eventClass",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_EventTypeSpec_2};
	VPL_ExtStructure _EventTypeSpec_S = {"EventTypeSpec",&_EventTypeSpec_1};

	VPL_ExtStructure _OpaqueThemeDrawingState_S = {"OpaqueThemeDrawingState",NULL};

	VPL_ExtField _ThemeWindowMetrics_6 = { "popupTabPosition",10,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _ThemeWindowMetrics_5 = { "popupTabWidth",8,2,kIntType,"NULL",0,0,"short",&_ThemeWindowMetrics_6};
	VPL_ExtField _ThemeWindowMetrics_4 = { "popupTabOffset",6,2,kIntType,"NULL",0,0,"short",&_ThemeWindowMetrics_5};
	VPL_ExtField _ThemeWindowMetrics_3 = { "titleWidth",4,2,kIntType,"NULL",0,0,"short",&_ThemeWindowMetrics_4};
	VPL_ExtField _ThemeWindowMetrics_2 = { "titleHeight",2,2,kIntType,"NULL",0,0,"short",&_ThemeWindowMetrics_3};
	VPL_ExtField _ThemeWindowMetrics_1 = { "metricSize",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ThemeWindowMetrics_2};
	VPL_ExtStructure _ThemeWindowMetrics_S = {"ThemeWindowMetrics",&_ThemeWindowMetrics_1};

	VPL_ExtField _ThemeButtonDrawInfo_3 = { "adornment",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _ThemeButtonDrawInfo_2 = { "value",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ThemeButtonDrawInfo_3};
	VPL_ExtField _ThemeButtonDrawInfo_1 = { "state",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ThemeButtonDrawInfo_2};
	VPL_ExtStructure _ThemeButtonDrawInfo_S = {"ThemeButtonDrawInfo",&_ThemeButtonDrawInfo_1};

	VPL_ExtField _ThemeTrackDrawInfo_10 = { "trackInfo",30,6,kStructureType,"NULL",0,0,"1835",NULL};
	VPL_ExtField _ThemeTrackDrawInfo_9 = { "filler1",29,1,kUnsignedType,"NULL",0,0,"unsigned char",&_ThemeTrackDrawInfo_10};
	VPL_ExtField _ThemeTrackDrawInfo_8 = { "enableState",28,1,kUnsignedType,"NULL",0,0,"unsigned char",&_ThemeTrackDrawInfo_9};
	VPL_ExtField _ThemeTrackDrawInfo_7 = { "attributes",26,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ThemeTrackDrawInfo_8};
	VPL_ExtField _ThemeTrackDrawInfo_6 = { "reserved",22,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ThemeTrackDrawInfo_7};
	VPL_ExtField _ThemeTrackDrawInfo_5 = { "value",18,4,kIntType,"NULL",0,0,"long int",&_ThemeTrackDrawInfo_6};
	VPL_ExtField _ThemeTrackDrawInfo_4 = { "max",14,4,kIntType,"NULL",0,0,"long int",&_ThemeTrackDrawInfo_5};
	VPL_ExtField _ThemeTrackDrawInfo_3 = { "min",10,4,kIntType,"NULL",0,0,"long int",&_ThemeTrackDrawInfo_4};
	VPL_ExtField _ThemeTrackDrawInfo_2 = { "bounds",2,8,kStructureType,"NULL",0,0,"Rect",&_ThemeTrackDrawInfo_3};
	VPL_ExtField _ThemeTrackDrawInfo_1 = { "kind",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ThemeTrackDrawInfo_2};
	VPL_ExtStructure _ThemeTrackDrawInfo_S = {"ThemeTrackDrawInfo",&_ThemeTrackDrawInfo_1};

	VPL_ExtField _ProgressTrackInfo_1 = { "phase",0,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtStructure _ProgressTrackInfo_S = {"ProgressTrackInfo",&_ProgressTrackInfo_1};

	VPL_ExtField _SliderTrackInfo_2 = { "pressState",1,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _SliderTrackInfo_1 = { "thumbDir",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SliderTrackInfo_2};
	VPL_ExtStructure _SliderTrackInfo_S = {"SliderTrackInfo",&_SliderTrackInfo_1};

	VPL_ExtField _ScrollBarTrackInfo_2 = { "pressState",4,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _ScrollBarTrackInfo_1 = { "viewsize",0,4,kIntType,"NULL",0,0,"long int",&_ScrollBarTrackInfo_2};
	VPL_ExtStructure _ScrollBarTrackInfo_S = {"ScrollBarTrackInfo",&_ScrollBarTrackInfo_1};

	VPL_ExtStructure _OpaqueWindowGroupRef_S = {"OpaqueWindowGroupRef",NULL};

	VPL_ExtField _WindowDefSpec_2 = { "u",4,4,kStructureType,"NULL",0,0,"1783",NULL};
	VPL_ExtField _WindowDefSpec_1 = { "defType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_WindowDefSpec_2};
	VPL_ExtStructure _WindowDefSpec_S = {"WindowDefSpec",&_WindowDefSpec_1};

	VPL_ExtField _WStateData_2 = { "stdState",8,8,kStructureType,"NULL",0,0,"Rect",NULL};
	VPL_ExtField _WStateData_1 = { "userState",0,8,kStructureType,"NULL",0,0,"Rect",&_WStateData_2};
	VPL_ExtStructure _WStateData_S = {"WStateData",&_WStateData_1};

	VPL_ExtField _1779_2 = { "windowAttributes",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _1779_1 = { "windowClass",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_1779_2};
	VPL_ExtStructure _1779_S = {"1779",&_1779_1};

	VPL_ExtField _1778_2 = { "windowHasCloseBox",2,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _1778_1 = { "windowDefProc",0,2,kIntType,"NULL",0,0,"short",&_1778_2};
	VPL_ExtStructure _1778_S = {"1778",&_1778_1};

	VPL_ExtField _BasicWindowDescription_8 = { "windowDefinition",36,8,kStructureType,"NULL",0,0,"1777",NULL};
	VPL_ExtField _BasicWindowDescription_7 = { "windowDefinitionVersion",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BasicWindowDescription_8};
	VPL_ExtField _BasicWindowDescription_6 = { "windowPositionMethod",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BasicWindowDescription_7};
	VPL_ExtField _BasicWindowDescription_5 = { "windowStateFlags",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BasicWindowDescription_6};
	VPL_ExtField _BasicWindowDescription_4 = { "windowRefCon",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BasicWindowDescription_5};
	VPL_ExtField _BasicWindowDescription_3 = { "windowZoomRect",12,8,kStructureType,"NULL",0,0,"Rect",&_BasicWindowDescription_4};
	VPL_ExtField _BasicWindowDescription_2 = { "windowContentRect",4,8,kStructureType,"NULL",0,0,"Rect",&_BasicWindowDescription_3};
	VPL_ExtField _BasicWindowDescription_1 = { "descriptionSize",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BasicWindowDescription_2};
	VPL_ExtStructure _BasicWindowDescription_S = {"BasicWindowDescription",&_BasicWindowDescription_1};

	VPL_ExtField _WinCTab_4 = { "ctTable",8,40,kPointerType,"ColorSpec",0,8,NULL,NULL};
	VPL_ExtField _WinCTab_3 = { "ctSize",6,2,kIntType,"ColorSpec",0,8,"short",&_WinCTab_4};
	VPL_ExtField _WinCTab_2 = { "wCReserved",4,2,kIntType,"ColorSpec",0,8,"short",&_WinCTab_3};
	VPL_ExtField _WinCTab_1 = { "wCSeed",0,4,kIntType,"ColorSpec",0,8,"long int",&_WinCTab_2};
	VPL_ExtStructure _WinCTab_S = {"WinCTab",&_WinCTab_1};

	VPL_ExtField _GetGrowImageRegionRec_2 = { "growImageRegion",8,4,kPointerType,"OpaqueRgnHandle",1,0,"T*",NULL};
	VPL_ExtField _GetGrowImageRegionRec_1 = { "growRect",0,8,kStructureType,"OpaqueRgnHandle",1,0,"Rect",&_GetGrowImageRegionRec_2};
	VPL_ExtStructure _GetGrowImageRegionRec_S = {"GetGrowImageRegionRec",&_GetGrowImageRegionRec_1};

	VPL_ExtField _MeasureWindowTitleRec_4 = { "unused",5,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _MeasureWindowTitleRec_3 = { "isUnicodeTitle",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_MeasureWindowTitleRec_4};
	VPL_ExtField _MeasureWindowTitleRec_2 = { "titleTextWidth",2,2,kIntType,"NULL",0,0,"short",&_MeasureWindowTitleRec_3};
	VPL_ExtField _MeasureWindowTitleRec_1 = { "fullTitleWidth",0,2,kIntType,"NULL",0,0,"short",&_MeasureWindowTitleRec_2};
	VPL_ExtStructure _MeasureWindowTitleRec_S = {"MeasureWindowTitleRec",&_MeasureWindowTitleRec_1};

	VPL_ExtField _SetupWindowProxyDragImageRec_3 = { "outlineRgn",8,4,kPointerType,"OpaqueRgnHandle",1,0,"T*",NULL};
	VPL_ExtField _SetupWindowProxyDragImageRec_2 = { "imageRgn",4,4,kPointerType,"OpaqueRgnHandle",1,0,"T*",&_SetupWindowProxyDragImageRec_3};
	VPL_ExtField _SetupWindowProxyDragImageRec_1 = { "imageGWorld",0,4,kPointerType,"OpaqueGrafPtr",1,0,"T*",&_SetupWindowProxyDragImageRec_2};
	VPL_ExtStructure _SetupWindowProxyDragImageRec_S = {"SetupWindowProxyDragImageRec",&_SetupWindowProxyDragImageRec_1};

	VPL_ExtField _GetWindowRegionRec_2 = { "regionCode",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _GetWindowRegionRec_1 = { "winRgn",0,4,kPointerType,"OpaqueRgnHandle",1,0,"T*",&_GetWindowRegionRec_2};
	VPL_ExtStructure _GetWindowRegionRec_S = {"GetWindowRegionRec",&_GetWindowRegionRec_1};

	VPL_ExtField _ControlKind_2 = { "kind",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ControlKind_1 = { "signature",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ControlKind_2};
	VPL_ExtStructure _ControlKind_S = {"ControlKind",&_ControlKind_1};

	VPL_ExtField _ControlID_2 = { "id",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ControlID_1 = { "signature",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ControlID_2};
	VPL_ExtStructure _ControlID_S = {"ControlID",&_ControlID_1};

	VPL_ExtField _ControlDefSpec_2 = { "u",4,4,kStructureType,"NULL",0,0,"1738",NULL};
	VPL_ExtField _ControlDefSpec_1 = { "defType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ControlDefSpec_2};
	VPL_ExtStructure _ControlDefSpec_S = {"ControlDefSpec",&_ControlDefSpec_1};

	VPL_ExtField _ControlClickActivationRec_3 = { "result",6,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ControlClickActivationRec_2 = { "modifiers",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ControlClickActivationRec_3};
	VPL_ExtField _ControlClickActivationRec_1 = { "localPoint",0,4,kStructureType,"NULL",0,0,"Point",&_ControlClickActivationRec_2};
	VPL_ExtStructure _ControlClickActivationRec_S = {"ControlClickActivationRec",&_ControlClickActivationRec_1};

	VPL_ExtField _ControlContextualMenuClickRec_2 = { "menuDisplayed",4,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _ControlContextualMenuClickRec_1 = { "localPoint",0,4,kStructureType,"NULL",0,0,"Point",&_ControlContextualMenuClickRec_2};
	VPL_ExtStructure _ControlContextualMenuClickRec_S = {"ControlContextualMenuClickRec",&_ControlContextualMenuClickRec_1};

	VPL_ExtField _ControlSetCursorRec_3 = { "cursorWasSet",6,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _ControlSetCursorRec_2 = { "modifiers",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ControlSetCursorRec_3};
	VPL_ExtField _ControlSetCursorRec_1 = { "localPoint",0,4,kStructureType,"NULL",0,0,"Point",&_ControlSetCursorRec_2};
	VPL_ExtStructure _ControlSetCursorRec_S = {"ControlSetCursorRec",&_ControlSetCursorRec_1};

	VPL_ExtField _ControlGetRegionRec_2 = { "part",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ControlGetRegionRec_1 = { "region",0,4,kPointerType,"OpaqueRgnHandle",1,0,"T*",&_ControlGetRegionRec_2};
	VPL_ExtStructure _ControlGetRegionRec_S = {"ControlGetRegionRec",&_ControlGetRegionRec_1};

	VPL_ExtField _ControlApplyTextColorRec_3 = { "active",3,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _ControlApplyTextColorRec_2 = { "colorDevice",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_ControlApplyTextColorRec_3};
	VPL_ExtField _ControlApplyTextColorRec_1 = { "depth",0,2,kIntType,"NULL",0,0,"short",&_ControlApplyTextColorRec_2};
	VPL_ExtStructure _ControlApplyTextColorRec_S = {"ControlApplyTextColorRec",&_ControlApplyTextColorRec_1};

	VPL_ExtField _ControlBackgroundRec_2 = { "colorDevice",2,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _ControlBackgroundRec_1 = { "depth",0,2,kIntType,"NULL",0,0,"short",&_ControlBackgroundRec_2};
	VPL_ExtStructure _ControlBackgroundRec_S = {"ControlBackgroundRec",&_ControlBackgroundRec_1};

	VPL_ExtField _ControlCalcSizeRec_3 = { "baseLine",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ControlCalcSizeRec_2 = { "width",2,2,kIntType,"NULL",0,0,"short",&_ControlCalcSizeRec_3};
	VPL_ExtField _ControlCalcSizeRec_1 = { "height",0,2,kIntType,"NULL",0,0,"short",&_ControlCalcSizeRec_2};
	VPL_ExtStructure _ControlCalcSizeRec_S = {"ControlCalcSizeRec",&_ControlCalcSizeRec_1};

	VPL_ExtField _ControlDataAccessRec_4 = { "dataPtr",12,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _ControlDataAccessRec_3 = { "size",8,4,kIntType,"char",1,1,"long int",&_ControlDataAccessRec_4};
	VPL_ExtField _ControlDataAccessRec_2 = { "part",4,4,kUnsignedType,"char",1,1,"unsigned long",&_ControlDataAccessRec_3};
	VPL_ExtField _ControlDataAccessRec_1 = { "tag",0,4,kUnsignedType,"char",1,1,"unsigned long",&_ControlDataAccessRec_2};
	VPL_ExtStructure _ControlDataAccessRec_S = {"ControlDataAccessRec",&_ControlDataAccessRec_1};

	VPL_ExtField _ControlKeyDownRec_3 = { "charCode",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ControlKeyDownRec_2 = { "keyCode",2,2,kIntType,"NULL",0,0,"short",&_ControlKeyDownRec_3};
	VPL_ExtField _ControlKeyDownRec_1 = { "modifiers",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ControlKeyDownRec_2};
	VPL_ExtStructure _ControlKeyDownRec_S = {"ControlKeyDownRec",&_ControlKeyDownRec_1};

	VPL_ExtField _ControlTrackingRec_3 = { "action",6,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _ControlTrackingRec_2 = { "modifiers",4,2,kUnsignedType,"void",1,0,"unsigned short",&_ControlTrackingRec_3};
	VPL_ExtField _ControlTrackingRec_1 = { "startPt",0,4,kStructureType,"void",1,0,"Point",&_ControlTrackingRec_2};
	VPL_ExtStructure _ControlTrackingRec_S = {"ControlTrackingRec",&_ControlTrackingRec_1};

	VPL_ExtField _IndicatorDragConstraint_3 = { "axis",16,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _IndicatorDragConstraint_2 = { "slopRect",8,8,kStructureType,"NULL",0,0,"Rect",&_IndicatorDragConstraint_3};
	VPL_ExtField _IndicatorDragConstraint_1 = { "limitRect",0,8,kStructureType,"NULL",0,0,"Rect",&_IndicatorDragConstraint_2};
	VPL_ExtStructure _IndicatorDragConstraint_S = {"IndicatorDragConstraint",&_IndicatorDragConstraint_1};

	VPL_ExtField _ControlFontStyleRec_8 = { "backColor",18,6,kStructureType,"NULL",0,0,"RGBColor",NULL};
	VPL_ExtField _ControlFontStyleRec_7 = { "foreColor",12,6,kStructureType,"NULL",0,0,"RGBColor",&_ControlFontStyleRec_8};
	VPL_ExtField _ControlFontStyleRec_6 = { "just",10,2,kIntType,"NULL",0,0,"short",&_ControlFontStyleRec_7};
	VPL_ExtField _ControlFontStyleRec_5 = { "mode",8,2,kIntType,"NULL",0,0,"short",&_ControlFontStyleRec_6};
	VPL_ExtField _ControlFontStyleRec_4 = { "style",6,2,kIntType,"NULL",0,0,"short",&_ControlFontStyleRec_5};
	VPL_ExtField _ControlFontStyleRec_3 = { "size",4,2,kIntType,"NULL",0,0,"short",&_ControlFontStyleRec_4};
	VPL_ExtField _ControlFontStyleRec_2 = { "font",2,2,kIntType,"NULL",0,0,"short",&_ControlFontStyleRec_3};
	VPL_ExtField _ControlFontStyleRec_1 = { "flags",0,2,kIntType,"NULL",0,0,"short",&_ControlFontStyleRec_2};
	VPL_ExtStructure _ControlFontStyleRec_S = {"ControlFontStyleRec",&_ControlFontStyleRec_1};

	VPL_ExtField _ControlButtonContentInfo_2 = { "u",2,4,kStructureType,"NULL",0,0,"1721",NULL};
	VPL_ExtField _ControlButtonContentInfo_1 = { "contentType",0,2,kIntType,"NULL",0,0,"short",&_ControlButtonContentInfo_2};
	VPL_ExtStructure _ControlButtonContentInfo_S = {"ControlButtonContentInfo",&_ControlButtonContentInfo_1};

	VPL_ExtField _CtlCTab_4 = { "ctTable",8,32,kPointerType,"ColorSpec",0,8,NULL,NULL};
	VPL_ExtField _CtlCTab_3 = { "ctSize",6,2,kIntType,"ColorSpec",0,8,"short",&_CtlCTab_4};
	VPL_ExtField _CtlCTab_2 = { "ccRider",4,2,kIntType,"ColorSpec",0,8,"short",&_CtlCTab_3};
	VPL_ExtField _CtlCTab_1 = { "ccSeed",0,4,kIntType,"ColorSpec",0,8,"long int",&_CtlCTab_2};
	VPL_ExtStructure _CtlCTab_S = {"CtlCTab",&_CtlCTab_1};

	VPL_ExtStructure _OpaqueControlRef_S = {"OpaqueControlRef",NULL};

	VPL_ExtField _ControlTemplate_9 = { "controlTitle",22,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ControlTemplate_8 = { "controlReference",18,4,kIntType,"unsigned char",0,1,"long int",&_ControlTemplate_9};
	VPL_ExtField _ControlTemplate_7 = { "controlDefProcID",16,2,kIntType,"unsigned char",0,1,"short",&_ControlTemplate_8};
	VPL_ExtField _ControlTemplate_6 = { "controlMinimum",14,2,kIntType,"unsigned char",0,1,"short",&_ControlTemplate_7};
	VPL_ExtField _ControlTemplate_5 = { "controlMaximum",12,2,kIntType,"unsigned char",0,1,"short",&_ControlTemplate_6};
	VPL_ExtField _ControlTemplate_4 = { "fill",11,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_ControlTemplate_5};
	VPL_ExtField _ControlTemplate_3 = { "controlVisible",10,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_ControlTemplate_4};
	VPL_ExtField _ControlTemplate_2 = { "controlValue",8,2,kIntType,"unsigned char",0,1,"short",&_ControlTemplate_3};
	VPL_ExtField _ControlTemplate_1 = { "controlRect",0,8,kStructureType,"unsigned char",0,1,"Rect",&_ControlTemplate_2};
	VPL_ExtStructure _ControlTemplate_S = {"ControlTemplate",&_ControlTemplate_1};

	VPL_ExtField _IconFamilyResource_3 = { "elements",8,10,kPointerType,"IconFamilyElement",0,10,NULL,NULL};
	VPL_ExtField _IconFamilyResource_2 = { "resourceSize",4,4,kIntType,"IconFamilyElement",0,10,"long int",&_IconFamilyResource_3};
	VPL_ExtField _IconFamilyResource_1 = { "resourceType",0,4,kUnsignedType,"IconFamilyElement",0,10,"unsigned long",&_IconFamilyResource_2};
	VPL_ExtStructure _IconFamilyResource_S = {"IconFamilyResource",&_IconFamilyResource_1};

	VPL_ExtField _IconFamilyElement_3 = { "elementData",8,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _IconFamilyElement_2 = { "elementSize",4,4,kIntType,"unsigned char",0,1,"long int",&_IconFamilyElement_3};
	VPL_ExtField _IconFamilyElement_1 = { "elementType",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_IconFamilyElement_2};
	VPL_ExtStructure _IconFamilyElement_S = {"IconFamilyElement",&_IconFamilyElement_1};

	VPL_ExtStructure _OpaqueIconRef_S = {"OpaqueIconRef",NULL};

	VPL_ExtField _CIcon_5 = { "iconMaskData",82,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _CIcon_4 = { "iconData",78,4,kPointerType,"char",2,1,"T*",&_CIcon_5};
	VPL_ExtField _CIcon_3 = { "iconBMap",64,14,kStructureType,"char",2,1,"BitMap",&_CIcon_4};
	VPL_ExtField _CIcon_2 = { "iconMask",50,14,kStructureType,"char",2,1,"BitMap",&_CIcon_3};
	VPL_ExtField _CIcon_1 = { "iconPMap",0,50,kStructureType,"char",2,1,"PixMap",&_CIcon_2};
	VPL_ExtStructure _CIcon_S = {"CIcon",&_CIcon_1};

	VPL_ExtField _PromiseHFSFlavor_4 = { "promisedFlavor",10,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _PromiseHFSFlavor_3 = { "fdFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PromiseHFSFlavor_4};
	VPL_ExtField _PromiseHFSFlavor_2 = { "fileCreator",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PromiseHFSFlavor_3};
	VPL_ExtField _PromiseHFSFlavor_1 = { "fileType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PromiseHFSFlavor_2};
	VPL_ExtStructure _PromiseHFSFlavor_S = {"PromiseHFSFlavor",&_PromiseHFSFlavor_1};

	VPL_ExtField _HFSFlavor_4 = { "fileSpec",10,70,kStructureType,"NULL",0,0,"FSSpec",NULL};
	VPL_ExtField _HFSFlavor_3 = { "fdFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFSFlavor_4};
	VPL_ExtField _HFSFlavor_2 = { "fileCreator",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSFlavor_3};
	VPL_ExtField _HFSFlavor_1 = { "fileType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSFlavor_2};
	VPL_ExtStructure _HFSFlavor_S = {"HFSFlavor",&_HFSFlavor_1};

	VPL_ExtStructure _OpaqueDragRef_S = {"OpaqueDragRef",NULL};

	VPL_ExtField _NMRec_11 = { "nmRefCon",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _NMRec_10 = { "nmResp",28,4,kPointerType,"void",1,0,"T*",&_NMRec_11};
	VPL_ExtField _NMRec_9 = { "nmStr",24,4,kPointerType,"unsigned char",1,1,"T*",&_NMRec_10};
	VPL_ExtField _NMRec_8 = { "nmSound",20,4,kPointerType,"char",2,1,"T*",&_NMRec_9};
	VPL_ExtField _NMRec_7 = { "nmIcon",16,4,kPointerType,"char",2,1,"T*",&_NMRec_8};
	VPL_ExtField _NMRec_6 = { "nmMark",14,2,kIntType,"char",2,1,"short",&_NMRec_7};
	VPL_ExtField _NMRec_5 = { "nmReserved",12,2,kIntType,"char",2,1,"short",&_NMRec_6};
	VPL_ExtField _NMRec_4 = { "nmPrivate",8,4,kIntType,"char",2,1,"long int",&_NMRec_5};
	VPL_ExtField _NMRec_3 = { "nmFlags",6,2,kIntType,"char",2,1,"short",&_NMRec_4};
	VPL_ExtField _NMRec_2 = { "qType",4,2,kIntType,"char",2,1,"short",&_NMRec_3};
	VPL_ExtField _NMRec_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_NMRec_2};
	VPL_ExtStructure _NMRec_S = {"NMRec",&_NMRec_1};

	VPL_ExtField _HMMessageRecord_2 = { "u",2,256,kStructureType,"NULL",0,0,"1663",NULL};
	VPL_ExtField _HMMessageRecord_1 = { "hmmHelpType",0,2,kIntType,"NULL",0,0,"short",&_HMMessageRecord_2};
	VPL_ExtStructure _HMMessageRecord_S = {"HMMessageRecord",&_HMMessageRecord_1};

	VPL_ExtField _HMStringResType_2 = { "hmmIndex",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _HMStringResType_1 = { "hmmResID",0,2,kIntType,"NULL",0,0,"short",&_HMStringResType_2};
	VPL_ExtStructure _HMStringResType_S = {"HMStringResType",&_HMStringResType_1};

	VPL_ExtField _TextStyle_4 = { "tsColor",6,6,kStructureType,"NULL",0,0,"RGBColor",NULL};
	VPL_ExtField _TextStyle_3 = { "tsSize",4,2,kIntType,"NULL",0,0,"short",&_TextStyle_4};
	VPL_ExtField _TextStyle_2 = { "tsFace",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_TextStyle_3};
	VPL_ExtField _TextStyle_1 = { "tsFont",0,2,kIntType,"NULL",0,0,"short",&_TextStyle_2};
	VPL_ExtStructure _TextStyle_S = {"TextStyle",&_TextStyle_1};

	VPL_ExtField _TEStyleRec_7 = { "runs",20,32004,kPointerType,"StyleRun",0,4,NULL,NULL};
	VPL_ExtField _TEStyleRec_6 = { "nullStyle",16,4,kPointerType,"NullStRec",2,8,"T*",&_TEStyleRec_7};
	VPL_ExtField _TEStyleRec_5 = { "teRefCon",12,4,kIntType,"NullStRec",2,8,"long int",&_TEStyleRec_6};
	VPL_ExtField _TEStyleRec_4 = { "lhTab",8,4,kPointerType,"LHElement",2,4,"T*",&_TEStyleRec_5};
	VPL_ExtField _TEStyleRec_3 = { "styleTab",4,4,kPointerType,"STElement",2,18,"T*",&_TEStyleRec_4};
	VPL_ExtField _TEStyleRec_2 = { "nStyles",2,2,kIntType,"STElement",2,18,"short",&_TEStyleRec_3};
	VPL_ExtField _TEStyleRec_1 = { "nRuns",0,2,kIntType,"STElement",2,18,"short",&_TEStyleRec_2};
	VPL_ExtStructure _TEStyleRec_S = {"TEStyleRec",&_TEStyleRec_1};

	VPL_ExtField _NullStRec_2 = { "nullScrap",4,4,kPointerType,"StScrpRec",2,32022,"T*",NULL};
	VPL_ExtField _NullStRec_1 = { "teReserved",0,4,kIntType,"StScrpRec",2,32022,"long int",&_NullStRec_2};
	VPL_ExtStructure _NullStRec_S = {"NullStRec",&_NullStRec_1};

	VPL_ExtField _StScrpRec_2 = { "scrpStyleTab",2,32020,kPointerType,"ScrpSTElement",0,20,NULL,NULL};
	VPL_ExtField _StScrpRec_1 = { "scrpNStyles",0,2,kIntType,"ScrpSTElement",0,20,"short",&_StScrpRec_2};
	VPL_ExtStructure _StScrpRec_S = {"StScrpRec",&_StScrpRec_1};

	VPL_ExtField _ScrpSTElement_7 = { "scrpColor",14,6,kStructureType,"NULL",0,0,"RGBColor",NULL};
	VPL_ExtField _ScrpSTElement_6 = { "scrpSize",12,2,kIntType,"NULL",0,0,"short",&_ScrpSTElement_7};
	VPL_ExtField _ScrpSTElement_5 = { "scrpFace",10,1,kUnsignedType,"NULL",0,0,"unsigned char",&_ScrpSTElement_6};
	VPL_ExtField _ScrpSTElement_4 = { "scrpFont",8,2,kIntType,"NULL",0,0,"short",&_ScrpSTElement_5};
	VPL_ExtField _ScrpSTElement_3 = { "scrpAscent",6,2,kIntType,"NULL",0,0,"short",&_ScrpSTElement_4};
	VPL_ExtField _ScrpSTElement_2 = { "scrpHeight",4,2,kIntType,"NULL",0,0,"short",&_ScrpSTElement_3};
	VPL_ExtField _ScrpSTElement_1 = { "scrpStartChar",0,4,kIntType,"NULL",0,0,"long int",&_ScrpSTElement_2};
	VPL_ExtStructure _ScrpSTElement_S = {"ScrpSTElement",&_ScrpSTElement_1};

	VPL_ExtField _LHElement_2 = { "lhAscent",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _LHElement_1 = { "lhHeight",0,2,kIntType,"NULL",0,0,"short",&_LHElement_2};
	VPL_ExtStructure _LHElement_S = {"LHElement",&_LHElement_1};

	VPL_ExtField _STElement_7 = { "stColor",12,6,kStructureType,"NULL",0,0,"RGBColor",NULL};
	VPL_ExtField _STElement_6 = { "stSize",10,2,kIntType,"NULL",0,0,"short",&_STElement_7};
	VPL_ExtField _STElement_5 = { "stFace",8,1,kUnsignedType,"NULL",0,0,"unsigned char",&_STElement_6};
	VPL_ExtField _STElement_4 = { "stFont",6,2,kIntType,"NULL",0,0,"short",&_STElement_5};
	VPL_ExtField _STElement_3 = { "stAscent",4,2,kIntType,"NULL",0,0,"short",&_STElement_4};
	VPL_ExtField _STElement_2 = { "stHeight",2,2,kIntType,"NULL",0,0,"short",&_STElement_3};
	VPL_ExtField _STElement_1 = { "stCount",0,2,kIntType,"NULL",0,0,"short",&_STElement_2};
	VPL_ExtStructure _STElement_S = {"STElement",&_STElement_1};

	VPL_ExtField _StyleRun_2 = { "styleIndex",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _StyleRun_1 = { "startChar",0,2,kIntType,"NULL",0,0,"short",&_StyleRun_2};
	VPL_ExtStructure _StyleRun_S = {"StyleRun",&_StyleRun_1};

	VPL_ExtField _TERec_30 = { "lineStarts",96,32002,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _TERec_29 = { "nLines",94,2,kIntType,"short",0,2,"short",&_TERec_30};
	VPL_ExtField _TERec_28 = { "caretHook",90,4,kPointerType,"void",1,0,"T*",&_TERec_29};
	VPL_ExtField _TERec_27 = { "highHook",86,4,kPointerType,"void",1,0,"T*",&_TERec_28};
	VPL_ExtField _TERec_26 = { "inPort",82,4,kPointerType,"OpaqueGrafPtr",1,0,"T*",&_TERec_27};
	VPL_ExtField _TERec_25 = { "txSize",80,2,kIntType,"OpaqueGrafPtr",1,0,"short",&_TERec_26};
	VPL_ExtField _TERec_24 = { "txMode",78,2,kIntType,"OpaqueGrafPtr",1,0,"short",&_TERec_25};
	VPL_ExtField _TERec_23 = { "txFace",76,1,kUnsignedType,"OpaqueGrafPtr",1,0,"unsigned char",&_TERec_24};
	VPL_ExtField _TERec_22 = { "txFont",74,2,kIntType,"OpaqueGrafPtr",1,0,"short",&_TERec_23};
	VPL_ExtField _TERec_21 = { "crOnly",72,2,kIntType,"OpaqueGrafPtr",1,0,"short",&_TERec_22};
	VPL_ExtField _TERec_20 = { "clikStuff",70,2,kIntType,"OpaqueGrafPtr",1,0,"short",&_TERec_21};
	VPL_ExtField _TERec_19 = { "hDispatchRec",66,4,kIntType,"OpaqueGrafPtr",1,0,"long int",&_TERec_20};
	VPL_ExtField _TERec_18 = { "hText",62,4,kPointerType,"char",2,1,"T*",&_TERec_19};
	VPL_ExtField _TERec_17 = { "teLength",60,2,kIntType,"char",2,1,"short",&_TERec_18};
	VPL_ExtField _TERec_16 = { "just",58,2,kIntType,"char",2,1,"short",&_TERec_17};
	VPL_ExtField _TERec_15 = { "caretState",56,2,kIntType,"char",2,1,"short",&_TERec_16};
	VPL_ExtField _TERec_14 = { "caretTime",52,4,kIntType,"char",2,1,"long int",&_TERec_15};
	VPL_ExtField _TERec_13 = { "clickLoc",50,2,kIntType,"char",2,1,"short",&_TERec_14};
	VPL_ExtField _TERec_12 = { "clickTime",46,4,kIntType,"char",2,1,"long int",&_TERec_13};
	VPL_ExtField _TERec_11 = { "clickLoop",42,4,kPointerType,"unsigned char",1,1,"T*",&_TERec_12};
	VPL_ExtField _TERec_10 = { "wordBreak",38,4,kPointerType,"unsigned char",1,1,"T*",&_TERec_11};
	VPL_ExtField _TERec_9 = { "active",36,2,kIntType,"unsigned char",1,1,"short",&_TERec_10};
	VPL_ExtField _TERec_8 = { "selEnd",34,2,kIntType,"unsigned char",1,1,"short",&_TERec_9};
	VPL_ExtField _TERec_7 = { "selStart",32,2,kIntType,"unsigned char",1,1,"short",&_TERec_8};
	VPL_ExtField _TERec_6 = { "selPoint",28,4,kStructureType,"unsigned char",1,1,"Point",&_TERec_7};
	VPL_ExtField _TERec_5 = { "fontAscent",26,2,kIntType,"unsigned char",1,1,"short",&_TERec_6};
	VPL_ExtField _TERec_4 = { "lineHeight",24,2,kIntType,"unsigned char",1,1,"short",&_TERec_5};
	VPL_ExtField _TERec_3 = { "selRect",16,8,kStructureType,"unsigned char",1,1,"Rect",&_TERec_4};
	VPL_ExtField _TERec_2 = { "viewRect",8,8,kStructureType,"unsigned char",1,1,"Rect",&_TERec_3};
	VPL_ExtField _TERec_1 = { "destRect",0,8,kStructureType,"unsigned char",1,1,"Rect",&_TERec_2};
	VPL_ExtStructure _TERec_S = {"TERec",&_TERec_1};

	VPL_ExtField _ContextualMenuInterfaceStruct_7 = { "PostMenuCleanup",24,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _ContextualMenuInterfaceStruct_6 = { "HandleSelection",20,4,kPointerType,"long int",1,4,"T*",&_ContextualMenuInterfaceStruct_7};
	VPL_ExtField _ContextualMenuInterfaceStruct_5 = { "ExamineContext",16,4,kPointerType,"long int",1,4,"T*",&_ContextualMenuInterfaceStruct_6};
	VPL_ExtField _ContextualMenuInterfaceStruct_4 = { "Release",12,4,kPointerType,"unsigned long",1,4,"T*",&_ContextualMenuInterfaceStruct_5};
	VPL_ExtField _ContextualMenuInterfaceStruct_3 = { "AddRef",8,4,kPointerType,"unsigned long",1,4,"T*",&_ContextualMenuInterfaceStruct_4};
	VPL_ExtField _ContextualMenuInterfaceStruct_2 = { "QueryInterface",4,4,kPointerType,"long int",1,4,"T*",&_ContextualMenuInterfaceStruct_3};
	VPL_ExtField _ContextualMenuInterfaceStruct_1 = { "_reserved",0,4,kPointerType,"void",1,0,"T*",&_ContextualMenuInterfaceStruct_2};
	VPL_ExtStructure _ContextualMenuInterfaceStruct_S = {"ContextualMenuInterfaceStruct",&_ContextualMenuInterfaceStruct_1};

	VPL_ExtField _MenuDefSpec_2 = { "u",4,4,kStructureType,"NULL",0,0,"1635",NULL};
	VPL_ExtField _MenuDefSpec_1 = { "defType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MenuDefSpec_2};
	VPL_ExtStructure _MenuDefSpec_S = {"MenuDefSpec",&_MenuDefSpec_1};

	VPL_ExtStructure _OpaqueMenuLayoutRef_S = {"OpaqueMenuLayoutRef",NULL};

	VPL_ExtField _MenuItemDataRec_24 = { "cmdVirtualKey",78,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _MenuItemDataRec_23 = { "indent",74,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MenuItemDataRec_24};
	VPL_ExtField _MenuItemDataRec_22 = { "properties",70,4,kPointerType,"OpaqueCollection",1,0,"T*",&_MenuItemDataRec_23};
	VPL_ExtField _MenuItemDataRec_21 = { "cfText",66,4,kPointerType,"__CFString",1,0,"T*",&_MenuItemDataRec_22};
	VPL_ExtField _MenuItemDataRec_20 = { "attr",62,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_MenuItemDataRec_21};
	VPL_ExtField _MenuItemDataRec_19 = { "refcon",58,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_MenuItemDataRec_20};
	VPL_ExtField _MenuItemDataRec_18 = { "fontID",54,4,kIntType,"__CFString",1,0,"long int",&_MenuItemDataRec_19};
	VPL_ExtField _MenuItemDataRec_17 = { "submenuHandle",50,4,kPointerType,"OpaqueMenuHandle",1,0,"T*",&_MenuItemDataRec_18};
	VPL_ExtField _MenuItemDataRec_16 = { "submenuID",48,2,kIntType,"OpaqueMenuHandle",1,0,"short",&_MenuItemDataRec_17};
	VPL_ExtField _MenuItemDataRec_15 = { "encoding",44,4,kUnsignedType,"OpaqueMenuHandle",1,0,"unsigned long",&_MenuItemDataRec_16};
	VPL_ExtField _MenuItemDataRec_14 = { "cmdID",40,4,kUnsignedType,"OpaqueMenuHandle",1,0,"unsigned long",&_MenuItemDataRec_15};
	VPL_ExtField _MenuItemDataRec_13 = { "iconHandle",36,4,kPointerType,"char",2,1,"T*",&_MenuItemDataRec_14};
	VPL_ExtField _MenuItemDataRec_12 = { "iconType",32,4,kUnsignedType,"char",2,1,"unsigned long",&_MenuItemDataRec_13};
	VPL_ExtField _MenuItemDataRec_11 = { "iconID",28,4,kIntType,"char",2,1,"long int",&_MenuItemDataRec_12};
	VPL_ExtField _MenuItemDataRec_10 = { "filler1",27,1,kUnsignedType,"char",2,1,"unsigned char",&_MenuItemDataRec_11};
	VPL_ExtField _MenuItemDataRec_9 = { "iconEnabled",26,1,kUnsignedType,"char",2,1,"unsigned char",&_MenuItemDataRec_10};
	VPL_ExtField _MenuItemDataRec_8 = { "enabled",25,1,kUnsignedType,"char",2,1,"unsigned char",&_MenuItemDataRec_9};
	VPL_ExtField _MenuItemDataRec_7 = { "style",24,1,kUnsignedType,"char",2,1,"unsigned char",&_MenuItemDataRec_8};
	VPL_ExtField _MenuItemDataRec_6 = { "cmdKeyModifiers",20,4,kUnsignedType,"char",2,1,"unsigned long",&_MenuItemDataRec_7};
	VPL_ExtField _MenuItemDataRec_5 = { "cmdKeyGlyph",16,4,kUnsignedType,"char",2,1,"unsigned long",&_MenuItemDataRec_6};
	VPL_ExtField _MenuItemDataRec_4 = { "cmdKey",14,2,kUnsignedType,"char",2,1,"unsigned short",&_MenuItemDataRec_5};
	VPL_ExtField _MenuItemDataRec_3 = { "mark",12,2,kUnsignedType,"char",2,1,"unsigned short",&_MenuItemDataRec_4};
	VPL_ExtField _MenuItemDataRec_2 = { "text",8,4,kPointerType,"unsigned char",1,1,"T*",&_MenuItemDataRec_3};
	VPL_ExtField _MenuItemDataRec_1 = { "whichData",0,8,kUnsignedType,"unsigned char",1,1,"unsigned long long",&_MenuItemDataRec_2};
	VPL_ExtStructure _MenuItemDataRec_S = {"MenuItemDataRec",&_MenuItemDataRec_1};

	VPL_ExtField _MDEFDrawItemsData_4 = { "context",8,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _MDEFDrawItemsData_3 = { "trackingData",4,4,kPointerType,"MenuTrackingData",1,24,"T*",&_MDEFDrawItemsData_4};
	VPL_ExtField _MDEFDrawItemsData_2 = { "lastItem",2,2,kUnsignedType,"MenuTrackingData",1,24,"unsigned short",&_MDEFDrawItemsData_3};
	VPL_ExtField _MDEFDrawItemsData_1 = { "firstItem",0,2,kUnsignedType,"MenuTrackingData",1,24,"unsigned short",&_MDEFDrawItemsData_2};
	VPL_ExtStructure _MDEFDrawItemsData_S = {"MDEFDrawItemsData",&_MDEFDrawItemsData_1};

	VPL_ExtField _MDEFFindItemData_2 = { "context",24,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _MDEFFindItemData_1 = { "trackingData",0,24,kStructureType,"void",1,0,"MenuTrackingData",&_MDEFFindItemData_2};
	VPL_ExtStructure _MDEFFindItemData_S = {"MDEFFindItemData",&_MDEFFindItemData_1};

	VPL_ExtField _MDEFDrawData_2 = { "context",24,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _MDEFDrawData_1 = { "trackingData",0,24,kStructureType,"void",1,0,"MenuTrackingData",&_MDEFDrawData_2};
	VPL_ExtStructure _MDEFDrawData_S = {"MDEFDrawData",&_MDEFDrawData_1};

	VPL_ExtField _MDEFHiliteItemData_3 = { "context",4,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _MDEFHiliteItemData_2 = { "newItem",2,2,kUnsignedType,"void",1,0,"unsigned short",&_MDEFHiliteItemData_3};
	VPL_ExtField _MDEFHiliteItemData_1 = { "previousItem",0,2,kUnsignedType,"void",1,0,"unsigned short",&_MDEFHiliteItemData_2};
	VPL_ExtStructure _MDEFHiliteItemData_S = {"MDEFHiliteItemData",&_MDEFHiliteItemData_1};

	VPL_ExtField _MenuTrackingData_6 = { "virtualMenuBottom",20,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _MenuTrackingData_5 = { "virtualMenuTop",16,4,kIntType,"NULL",0,0,"long int",&_MenuTrackingData_6};
	VPL_ExtField _MenuTrackingData_4 = { "itemRect",8,8,kStructureType,"NULL",0,0,"Rect",&_MenuTrackingData_5};
	VPL_ExtField _MenuTrackingData_3 = { "itemUnderMouse",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MenuTrackingData_4};
	VPL_ExtField _MenuTrackingData_2 = { "itemSelected",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MenuTrackingData_3};
	VPL_ExtField _MenuTrackingData_1 = { "menu",0,4,kPointerType,"OpaqueMenuHandle",1,0,"T*",&_MenuTrackingData_2};
	VPL_ExtStructure _MenuTrackingData_S = {"MenuTrackingData",&_MenuTrackingData_1};

	VPL_ExtField _MenuCRsrc_2 = { "mcEntryRecs",2,30,kPointerType,"MCEntry",0,30,NULL,NULL};
	VPL_ExtField _MenuCRsrc_1 = { "numEntries",0,2,kIntType,"MCEntry",0,30,"short",&_MenuCRsrc_2};
	VPL_ExtStructure _MenuCRsrc_S = {"MenuCRsrc",&_MenuCRsrc_1};

	VPL_ExtField _MCEntry_7 = { "mctReserved",28,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _MCEntry_6 = { "mctRGB4",22,6,kStructureType,"NULL",0,0,"RGBColor",&_MCEntry_7};
	VPL_ExtField _MCEntry_5 = { "mctRGB3",16,6,kStructureType,"NULL",0,0,"RGBColor",&_MCEntry_6};
	VPL_ExtField _MCEntry_4 = { "mctRGB2",10,6,kStructureType,"NULL",0,0,"RGBColor",&_MCEntry_5};
	VPL_ExtField _MCEntry_3 = { "mctRGB1",4,6,kStructureType,"NULL",0,0,"RGBColor",&_MCEntry_4};
	VPL_ExtField _MCEntry_2 = { "mctItem",2,2,kIntType,"NULL",0,0,"short",&_MCEntry_3};
	VPL_ExtField _MCEntry_1 = { "mctID",0,2,kIntType,"NULL",0,0,"short",&_MCEntry_2};
	VPL_ExtStructure _MCEntry_S = {"MCEntry",&_MCEntry_1};

	VPL_ExtStructure _OpaqueMenuHandle_S = {"OpaqueMenuHandle",NULL};

	VPL_ExtField _SizeResourceRec_3 = { "minimumHeapSize",6,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _SizeResourceRec_2 = { "preferredHeapSize",2,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SizeResourceRec_3};
	VPL_ExtField _SizeResourceRec_1 = { "flags",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SizeResourceRec_2};
	VPL_ExtStructure _SizeResourceRec_S = {"SizeResourceRec",&_SizeResourceRec_1};

	VPL_ExtField _ProcessInfoExtendedRec_15 = { "processPurgeableTempMemTotal",64,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ProcessInfoExtendedRec_14 = { "processTempMemTotal",60,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ProcessInfoExtendedRec_15};
	VPL_ExtField _ProcessInfoExtendedRec_13 = { "processAppSpec",56,4,kPointerType,"FSSpec",1,70,"T*",&_ProcessInfoExtendedRec_14};
	VPL_ExtField _ProcessInfoExtendedRec_12 = { "processActiveTime",52,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_ProcessInfoExtendedRec_13};
	VPL_ExtField _ProcessInfoExtendedRec_11 = { "processLaunchDate",48,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_ProcessInfoExtendedRec_12};
	VPL_ExtField _ProcessInfoExtendedRec_10 = { "processLauncher",40,8,kStructureType,"FSSpec",1,70,"ProcessSerialNumber",&_ProcessInfoExtendedRec_11};
	VPL_ExtField _ProcessInfoExtendedRec_9 = { "processFreeMem",36,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_ProcessInfoExtendedRec_10};
	VPL_ExtField _ProcessInfoExtendedRec_8 = { "processSize",32,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_ProcessInfoExtendedRec_9};
	VPL_ExtField _ProcessInfoExtendedRec_7 = { "processLocation",28,4,kPointerType,"char",1,1,"T*",&_ProcessInfoExtendedRec_8};
	VPL_ExtField _ProcessInfoExtendedRec_6 = { "processMode",24,4,kUnsignedType,"char",1,1,"unsigned long",&_ProcessInfoExtendedRec_7};
	VPL_ExtField _ProcessInfoExtendedRec_5 = { "processSignature",20,4,kUnsignedType,"char",1,1,"unsigned long",&_ProcessInfoExtendedRec_6};
	VPL_ExtField _ProcessInfoExtendedRec_4 = { "processType",16,4,kUnsignedType,"char",1,1,"unsigned long",&_ProcessInfoExtendedRec_5};
	VPL_ExtField _ProcessInfoExtendedRec_3 = { "processNumber",8,8,kStructureType,"char",1,1,"ProcessSerialNumber",&_ProcessInfoExtendedRec_4};
	VPL_ExtField _ProcessInfoExtendedRec_2 = { "processName",4,4,kPointerType,"unsigned char",1,1,"T*",&_ProcessInfoExtendedRec_3};
	VPL_ExtField _ProcessInfoExtendedRec_1 = { "processInfoLength",0,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_ProcessInfoExtendedRec_2};
	VPL_ExtStructure _ProcessInfoExtendedRec_S = {"ProcessInfoExtendedRec",&_ProcessInfoExtendedRec_1};

	VPL_ExtField _ProcessInfoRec_13 = { "processAppSpec",56,4,kPointerType,"FSSpec",1,70,"T*",NULL};
	VPL_ExtField _ProcessInfoRec_12 = { "processActiveTime",52,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_ProcessInfoRec_13};
	VPL_ExtField _ProcessInfoRec_11 = { "processLaunchDate",48,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_ProcessInfoRec_12};
	VPL_ExtField _ProcessInfoRec_10 = { "processLauncher",40,8,kStructureType,"FSSpec",1,70,"ProcessSerialNumber",&_ProcessInfoRec_11};
	VPL_ExtField _ProcessInfoRec_9 = { "processFreeMem",36,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_ProcessInfoRec_10};
	VPL_ExtField _ProcessInfoRec_8 = { "processSize",32,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_ProcessInfoRec_9};
	VPL_ExtField _ProcessInfoRec_7 = { "processLocation",28,4,kPointerType,"char",1,1,"T*",&_ProcessInfoRec_8};
	VPL_ExtField _ProcessInfoRec_6 = { "processMode",24,4,kUnsignedType,"char",1,1,"unsigned long",&_ProcessInfoRec_7};
	VPL_ExtField _ProcessInfoRec_5 = { "processSignature",20,4,kUnsignedType,"char",1,1,"unsigned long",&_ProcessInfoRec_6};
	VPL_ExtField _ProcessInfoRec_4 = { "processType",16,4,kUnsignedType,"char",1,1,"unsigned long",&_ProcessInfoRec_5};
	VPL_ExtField _ProcessInfoRec_3 = { "processNumber",8,8,kStructureType,"char",1,1,"ProcessSerialNumber",&_ProcessInfoRec_4};
	VPL_ExtField _ProcessInfoRec_2 = { "processName",4,4,kPointerType,"unsigned char",1,1,"T*",&_ProcessInfoRec_3};
	VPL_ExtField _ProcessInfoRec_1 = { "processInfoLength",0,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_ProcessInfoRec_2};
	VPL_ExtStructure _ProcessInfoRec_S = {"ProcessInfoRec",&_ProcessInfoRec_1};

	VPL_ExtField _LaunchParamBlockRec_12 = { "launchAppParameters",40,4,kPointerType,"AppParameters",1,24,"T*",NULL};
	VPL_ExtField _LaunchParamBlockRec_11 = { "launchAvailableSize",36,4,kUnsignedType,"AppParameters",1,24,"unsigned long",&_LaunchParamBlockRec_12};
	VPL_ExtField _LaunchParamBlockRec_10 = { "launchMinimumSize",32,4,kUnsignedType,"AppParameters",1,24,"unsigned long",&_LaunchParamBlockRec_11};
	VPL_ExtField _LaunchParamBlockRec_9 = { "launchPreferredSize",28,4,kUnsignedType,"AppParameters",1,24,"unsigned long",&_LaunchParamBlockRec_10};
	VPL_ExtField _LaunchParamBlockRec_8 = { "launchProcessSN",20,8,kStructureType,"AppParameters",1,24,"ProcessSerialNumber",&_LaunchParamBlockRec_9};
	VPL_ExtField _LaunchParamBlockRec_7 = { "launchAppSpec",16,4,kPointerType,"FSSpec",1,70,"T*",&_LaunchParamBlockRec_8};
	VPL_ExtField _LaunchParamBlockRec_6 = { "launchControlFlags",14,2,kUnsignedType,"FSSpec",1,70,"unsigned short",&_LaunchParamBlockRec_7};
	VPL_ExtField _LaunchParamBlockRec_5 = { "launchFileFlags",12,2,kUnsignedType,"FSSpec",1,70,"unsigned short",&_LaunchParamBlockRec_6};
	VPL_ExtField _LaunchParamBlockRec_4 = { "launchEPBLength",8,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_LaunchParamBlockRec_5};
	VPL_ExtField _LaunchParamBlockRec_3 = { "launchBlockID",6,2,kUnsignedType,"FSSpec",1,70,"unsigned short",&_LaunchParamBlockRec_4};
	VPL_ExtField _LaunchParamBlockRec_2 = { "reserved2",4,2,kUnsignedType,"FSSpec",1,70,"unsigned short",&_LaunchParamBlockRec_3};
	VPL_ExtField _LaunchParamBlockRec_1 = { "reserved1",0,4,kUnsignedType,"FSSpec",1,70,"unsigned long",&_LaunchParamBlockRec_2};
	VPL_ExtStructure _LaunchParamBlockRec_S = {"LaunchParamBlockRec",&_LaunchParamBlockRec_1};

	VPL_ExtField _AppParameters_3 = { "messageLength",20,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _AppParameters_2 = { "eventRefCon",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_AppParameters_3};
	VPL_ExtField _AppParameters_1 = { "theMsgEvent",0,16,kStructureType,"NULL",0,0,"EventRecord",&_AppParameters_2};
	VPL_ExtStructure _AppParameters_S = {"AppParameters",&_AppParameters_1};

	VPL_ExtField _ProcessSerialNumber_2 = { "lowLongOfPSN",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ProcessSerialNumber_1 = { "highLongOfPSN",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ProcessSerialNumber_2};
	VPL_ExtStructure _ProcessSerialNumber_S = {"ProcessSerialNumber",&_ProcessSerialNumber_1};

	VPL_ExtStructure _OpaqueEventRef_S = {"OpaqueEventRef",NULL};

	VPL_ExtField _EvQEl_7 = { "evtQModifiers",20,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _EvQEl_6 = { "evtQWhere",16,4,kStructureType,"NULL",0,0,"Point",&_EvQEl_7};
	VPL_ExtField _EvQEl_5 = { "evtQWhen",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_EvQEl_6};
	VPL_ExtField _EvQEl_4 = { "evtQMessage",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_EvQEl_5};
	VPL_ExtField _EvQEl_3 = { "evtQWhat",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_EvQEl_4};
	VPL_ExtField _EvQEl_2 = { "qType",4,2,kIntType,"NULL",0,0,"short",&_EvQEl_3};
	VPL_ExtField _EvQEl_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_EvQEl_2};
	VPL_ExtStructure _EvQEl_S = {"EvQEl",&_EvQEl_1};

	VPL_ExtField _EventRecord_5 = { "modifiers",14,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _EventRecord_4 = { "where",10,4,kStructureType,"NULL",0,0,"Point",&_EventRecord_5};
	VPL_ExtField _EventRecord_3 = { "when",6,4,kUnsignedType,"NULL",0,0,"unsigned long",&_EventRecord_4};
	VPL_ExtField _EventRecord_2 = { "message",2,4,kUnsignedType,"NULL",0,0,"unsigned long",&_EventRecord_3};
	VPL_ExtField _EventRecord_1 = { "what",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_EventRecord_2};
	VPL_ExtStructure _EventRecord_S = {"EventRecord",&_EventRecord_1};

	VPL_ExtField _LSLaunchURLSpec_5 = { "asyncRefCon",16,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _LSLaunchURLSpec_4 = { "launchFlags",12,4,kUnsignedType,"void",1,0,"unsigned long",&_LSLaunchURLSpec_5};
	VPL_ExtField _LSLaunchURLSpec_3 = { "passThruParams",8,4,kPointerType,"AEDesc",1,8,"T*",&_LSLaunchURLSpec_4};
	VPL_ExtField _LSLaunchURLSpec_2 = { "itemURLs",4,4,kPointerType,"__CFArray",1,0,"T*",&_LSLaunchURLSpec_3};
	VPL_ExtField _LSLaunchURLSpec_1 = { "appURL",0,4,kPointerType,"__CFURL",1,0,"T*",&_LSLaunchURLSpec_2};
	VPL_ExtStructure _LSLaunchURLSpec_S = {"LSLaunchURLSpec",&_LSLaunchURLSpec_1};

	VPL_ExtField _LSLaunchFSRefSpec_6 = { "asyncRefCon",20,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _LSLaunchFSRefSpec_5 = { "launchFlags",16,4,kUnsignedType,"void",1,0,"unsigned long",&_LSLaunchFSRefSpec_6};
	VPL_ExtField _LSLaunchFSRefSpec_4 = { "passThruParams",12,4,kPointerType,"AEDesc",1,8,"T*",&_LSLaunchFSRefSpec_5};
	VPL_ExtField _LSLaunchFSRefSpec_3 = { "itemRefs",8,4,kPointerType,"FSRef",1,80,"T*",&_LSLaunchFSRefSpec_4};
	VPL_ExtField _LSLaunchFSRefSpec_2 = { "numDocs",4,4,kUnsignedType,"FSRef",1,80,"unsigned long",&_LSLaunchFSRefSpec_3};
	VPL_ExtField _LSLaunchFSRefSpec_1 = { "appRef",0,4,kPointerType,"FSRef",1,80,"T*",&_LSLaunchFSRefSpec_2};
	VPL_ExtStructure _LSLaunchFSRefSpec_S = {"LSLaunchFSRefSpec",&_LSLaunchFSRefSpec_1};

	VPL_ExtField _LSItemInfoRecord_6 = { "kindID",20,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _LSItemInfoRecord_5 = { "iconFileName",16,4,kPointerType,"__CFString",1,0,"T*",&_LSItemInfoRecord_6};
	VPL_ExtField _LSItemInfoRecord_4 = { "extension",12,4,kPointerType,"__CFString",1,0,"T*",&_LSItemInfoRecord_5};
	VPL_ExtField _LSItemInfoRecord_3 = { "creator",8,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_LSItemInfoRecord_4};
	VPL_ExtField _LSItemInfoRecord_2 = { "filetype",4,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_LSItemInfoRecord_3};
	VPL_ExtField _LSItemInfoRecord_1 = { "flags",0,4,kUnsignedType,"__CFString",1,0,"unsigned long",&_LSItemInfoRecord_2};
	VPL_ExtStructure _LSItemInfoRecord_S = {"LSItemInfoRecord",&_LSItemInfoRecord_1};

	VPL_ExtField _DelimiterInfo_2 = { "endDelimiter",2,2,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _DelimiterInfo_1 = { "startDelimiter",0,2,kPointerType,"unsigned char",0,1,NULL,&_DelimiterInfo_2};
	VPL_ExtStructure _DelimiterInfo_S = {"DelimiterInfo",&_DelimiterInfo_1};

	VPL_ExtField _SpeechXtndData_2 = { "synthData",4,2,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _SpeechXtndData_1 = { "synthCreator",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_SpeechXtndData_2};
	VPL_ExtStructure _SpeechXtndData_S = {"SpeechXtndData",&_SpeechXtndData_1};

	VPL_ExtField _PhonemeDescriptor_2 = { "thePhonemes",2,54,kPointerType,"PhonemeInfo",0,54,NULL,NULL};
	VPL_ExtField _PhonemeDescriptor_1 = { "phonemeCount",0,2,kIntType,"PhonemeInfo",0,54,"short",&_PhonemeDescriptor_2};
	VPL_ExtStructure _PhonemeDescriptor_S = {"PhonemeDescriptor",&_PhonemeDescriptor_1};

	VPL_ExtField _PhonemeInfo_5 = { "hiliteEnd",52,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _PhonemeInfo_4 = { "hiliteStart",50,2,kIntType,"NULL",0,0,"short",&_PhonemeInfo_5};
	VPL_ExtField _PhonemeInfo_3 = { "exampleStr",18,32,kPointerType,"unsigned char",0,1,NULL,&_PhonemeInfo_4};
	VPL_ExtField _PhonemeInfo_2 = { "phStr",2,16,kPointerType,"unsigned char",0,1,NULL,&_PhonemeInfo_3};
	VPL_ExtField _PhonemeInfo_1 = { "opcode",0,2,kIntType,"unsigned char",0,1,"short",&_PhonemeInfo_2};
	VPL_ExtStructure _PhonemeInfo_S = {"PhonemeInfo",&_PhonemeInfo_1};

	VPL_ExtField _SpeechVersionInfo_5 = { "synthVersion",16,4,kStructureType,"NULL",0,0,"NumVersion",NULL};
	VPL_ExtField _SpeechVersionInfo_4 = { "synthFlags",12,4,kIntType,"NULL",0,0,"long int",&_SpeechVersionInfo_5};
	VPL_ExtField _SpeechVersionInfo_3 = { "synthManufacturer",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SpeechVersionInfo_4};
	VPL_ExtField _SpeechVersionInfo_2 = { "synthSubType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SpeechVersionInfo_3};
	VPL_ExtField _SpeechVersionInfo_1 = { "synthType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SpeechVersionInfo_2};
	VPL_ExtStructure _SpeechVersionInfo_S = {"SpeechVersionInfo",&_SpeechVersionInfo_1};

	VPL_ExtField _SpeechErrorInfo_5 = { "newPos",10,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SpeechErrorInfo_4 = { "newest",8,2,kIntType,"NULL",0,0,"short",&_SpeechErrorInfo_5};
	VPL_ExtField _SpeechErrorInfo_3 = { "oldPos",4,4,kIntType,"NULL",0,0,"long int",&_SpeechErrorInfo_4};
	VPL_ExtField _SpeechErrorInfo_2 = { "oldest",2,2,kIntType,"NULL",0,0,"short",&_SpeechErrorInfo_3};
	VPL_ExtField _SpeechErrorInfo_1 = { "count",0,2,kIntType,"NULL",0,0,"short",&_SpeechErrorInfo_2};
	VPL_ExtStructure _SpeechErrorInfo_S = {"SpeechErrorInfo",&_SpeechErrorInfo_1};

	VPL_ExtField _SpeechStatusInfo_4 = { "phonemeCode",6,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _SpeechStatusInfo_3 = { "inputBytesLeft",2,4,kIntType,"NULL",0,0,"long int",&_SpeechStatusInfo_4};
	VPL_ExtField _SpeechStatusInfo_2 = { "outputPaused",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SpeechStatusInfo_3};
	VPL_ExtField _SpeechStatusInfo_1 = { "outputBusy",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SpeechStatusInfo_2};
	VPL_ExtStructure _SpeechStatusInfo_S = {"SpeechStatusInfo",&_SpeechStatusInfo_1};

	VPL_ExtField _VoiceFileInfo_2 = { "resID",70,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VoiceFileInfo_1 = { "fileSpec",0,70,kStructureType,"NULL",0,0,"FSSpec",&_VoiceFileInfo_2};
	VPL_ExtStructure _VoiceFileInfo_S = {"VoiceFileInfo",&_VoiceFileInfo_1};

	VPL_ExtField _VoiceDescription_11 = { "reserved",346,16,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _VoiceDescription_10 = { "region",344,2,kIntType,"long int",0,4,"short",&_VoiceDescription_11};
	VPL_ExtField _VoiceDescription_9 = { "language",342,2,kIntType,"long int",0,4,"short",&_VoiceDescription_10};
	VPL_ExtField _VoiceDescription_8 = { "script",340,2,kIntType,"long int",0,4,"short",&_VoiceDescription_9};
	VPL_ExtField _VoiceDescription_7 = { "age",338,2,kIntType,"long int",0,4,"short",&_VoiceDescription_8};
	VPL_ExtField _VoiceDescription_6 = { "gender",336,2,kIntType,"long int",0,4,"short",&_VoiceDescription_7};
	VPL_ExtField _VoiceDescription_5 = { "comment",80,256,kPointerType,"unsigned char",0,1,NULL,&_VoiceDescription_6};
	VPL_ExtField _VoiceDescription_4 = { "name",16,64,kPointerType,"unsigned char",0,1,NULL,&_VoiceDescription_5};
	VPL_ExtField _VoiceDescription_3 = { "version",12,4,kIntType,"unsigned char",0,1,"long int",&_VoiceDescription_4};
	VPL_ExtField _VoiceDescription_2 = { "voice",4,8,kStructureType,"unsigned char",0,1,"VoiceSpec",&_VoiceDescription_3};
	VPL_ExtField _VoiceDescription_1 = { "length",0,4,kIntType,"unsigned char",0,1,"long int",&_VoiceDescription_2};
	VPL_ExtStructure _VoiceDescription_S = {"VoiceDescription",&_VoiceDescription_1};

	VPL_ExtField _VoiceSpec_2 = { "id",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VoiceSpec_1 = { "creator",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VoiceSpec_2};
	VPL_ExtStructure _VoiceSpec_S = {"VoiceSpec",&_VoiceSpec_1};

	VPL_ExtField _SpeechChannelRecord_1 = { "data",0,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtStructure _SpeechChannelRecord_S = {"SpeechChannelRecord",&_SpeechChannelRecord_1};

	VPL_ExtField _HomographDicInfoRec_2 = { "uniqueID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _HomographDicInfoRec_1 = { "dictionaryID",0,4,kPointerType,"OpaqueDCMObjectID",1,0,"T*",&_HomographDicInfoRec_2};
	VPL_ExtStructure _HomographDicInfoRec_S = {"HomographDicInfoRec",&_HomographDicInfoRec_1};

	VPL_ExtField _MorphemeTextRange_2 = { "length",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MorphemeTextRange_1 = { "sourceOffset",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MorphemeTextRange_2};
	VPL_ExtStructure _MorphemeTextRange_S = {"MorphemeTextRange",&_MorphemeTextRange_1};

	VPL_ExtField _LAMorphemesArray_4 = { "morphemes",12,20,kPointerType,"LAMorphemeRec",0,20,NULL,NULL};
	VPL_ExtField _LAMorphemesArray_3 = { "morphemesTextLength",8,4,kUnsignedType,"LAMorphemeRec",0,20,"unsigned long",&_LAMorphemesArray_4};
	VPL_ExtField _LAMorphemesArray_2 = { "processedTextLength",4,4,kUnsignedType,"LAMorphemeRec",0,20,"unsigned long",&_LAMorphemesArray_3};
	VPL_ExtField _LAMorphemesArray_1 = { "morphemesCount",0,4,kUnsignedType,"LAMorphemeRec",0,20,"unsigned long",&_LAMorphemesArray_2};
	VPL_ExtStructure _LAMorphemesArray_S = {"LAMorphemesArray",&_LAMorphemesArray_1};

	VPL_ExtField _LAMorphemeRec_5 = { "partOfSpeech",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _LAMorphemeRec_4 = { "morphemeTextPtr",12,4,kPointerType,"void",1,0,"T*",&_LAMorphemeRec_5};
	VPL_ExtField _LAMorphemeRec_3 = { "morphemeTextLength",8,4,kUnsignedType,"void",1,0,"unsigned long",&_LAMorphemeRec_4};
	VPL_ExtField _LAMorphemeRec_2 = { "sourceTextPtr",4,4,kPointerType,"void",1,0,"T*",&_LAMorphemeRec_3};
	VPL_ExtField _LAMorphemeRec_1 = { "sourceTextLength",0,4,kUnsignedType,"void",1,0,"unsigned long",&_LAMorphemeRec_2};
	VPL_ExtStructure _LAMorphemeRec_S = {"LAMorphemeRec",&_LAMorphemeRec_1};

	VPL_ExtStructure _OpaqueLAContextRef_S = {"OpaqueLAContextRef",NULL};

	VPL_ExtStructure _OpaqueLAEnvironmentRef_S = {"OpaqueLAEnvironmentRef",NULL};

	VPL_ExtField _DictionaryAttributeTable_2 = { "datTable",1,1,kPointerType,"signed char",0,1,NULL,NULL};
	VPL_ExtField _DictionaryAttributeTable_1 = { "datSize",0,1,kUnsignedType,"signed char",0,1,"unsigned char",&_DictionaryAttributeTable_2};
	VPL_ExtStructure _DictionaryAttributeTable_S = {"DictionaryAttributeTable",&_DictionaryAttributeTable_1};

	VPL_ExtField _DictionaryInformation_6 = { "keyAttributes",82,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _DictionaryInformation_5 = { "maximumKeyLength",80,2,kIntType,"NULL",0,0,"short",&_DictionaryInformation_6};
	VPL_ExtField _DictionaryInformation_4 = { "script",78,2,kIntType,"NULL",0,0,"short",&_DictionaryInformation_5};
	VPL_ExtField _DictionaryInformation_3 = { "currentGarbageSize",74,4,kIntType,"NULL",0,0,"long int",&_DictionaryInformation_4};
	VPL_ExtField _DictionaryInformation_2 = { "numberOfRecords",70,4,kIntType,"NULL",0,0,"long int",&_DictionaryInformation_3};
	VPL_ExtField _DictionaryInformation_1 = { "dictionaryFSSpec",0,70,kStructureType,"NULL",0,0,"FSSpec",&_DictionaryInformation_2};
	VPL_ExtStructure _DictionaryInformation_S = {"DictionaryInformation",&_DictionaryInformation_1};

	VPL_ExtField _DCMDictionaryHeader_4 = { "accessMethod",12,64,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _DCMDictionaryHeader_3 = { "headerSize",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_DCMDictionaryHeader_4};
	VPL_ExtField _DCMDictionaryHeader_2 = { "headerVersion",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_DCMDictionaryHeader_3};
	VPL_ExtField _DCMDictionaryHeader_1 = { "headerSignature",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_DCMDictionaryHeader_2};
	VPL_ExtStructure _DCMDictionaryHeader_S = {"DCMDictionaryHeader",&_DCMDictionaryHeader_1};

	VPL_ExtStructure _OpaqueDCMFoundRecordIterator_S = {"OpaqueDCMFoundRecordIterator",NULL};

	VPL_ExtStructure _OpaqueDCMObjectIterator_S = {"OpaqueDCMObjectIterator",NULL};

	VPL_ExtStructure _OpaqueDCMObjectRef_S = {"OpaqueDCMObjectRef",NULL};

	VPL_ExtStructure _OpaqueDCMObjectID_S = {"OpaqueDCMObjectID",NULL};

	VPL_ExtField _PMLanguageInfo_3 = { "release",66,33,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _PMLanguageInfo_2 = { "version",33,33,kPointerType,"unsigned char",0,1,NULL,&_PMLanguageInfo_3};
	VPL_ExtField _PMLanguageInfo_1 = { "level",0,33,kPointerType,"unsigned char",0,1,NULL,&_PMLanguageInfo_2};
	VPL_ExtStructure _PMLanguageInfo_S = {"PMLanguageInfo",&_PMLanguageInfo_1};

	VPL_ExtField _PMResolution_2 = { "vRes",8,8,kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _PMResolution_1 = { "hRes",0,8,kFloatType,"NULL",0,0,"double",&_PMResolution_2};
	VPL_ExtStructure _PMResolution_S = {"PMResolution",&_PMResolution_1};

	VPL_ExtField _PMRect_4 = { "right",24,8,kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _PMRect_3 = { "bottom",16,8,kFloatType,"NULL",0,0,"double",&_PMRect_4};
	VPL_ExtField _PMRect_2 = { "left",8,8,kFloatType,"NULL",0,0,"double",&_PMRect_3};
	VPL_ExtField _PMRect_1 = { "top",0,8,kFloatType,"NULL",0,0,"double",&_PMRect_2};
	VPL_ExtStructure _PMRect_S = {"PMRect",&_PMRect_1};

	VPL_ExtStructure _OpaquePMPrinter_S = {"OpaquePMPrinter",NULL};

	VPL_ExtStructure _OpaquePMPrintSession_S = {"OpaquePMPrintSession",NULL};

	VPL_ExtStructure _OpaquePMPrintContext_S = {"OpaquePMPrintContext",NULL};

	VPL_ExtStructure _OpaquePMPageFormat_S = {"OpaquePMPageFormat",NULL};

	VPL_ExtStructure _OpaquePMPrintSettings_S = {"OpaquePMPrintSettings",NULL};

	VPL_ExtStructure _OpaquePMDialog_S = {"OpaquePMDialog",NULL};

	VPL_ExtStructure _OpaqueFBCSearchSession_S = {"OpaqueFBCSearchSession",NULL};

	VPL_ExtStructure _OpaqueFNSFontProfile_S = {"OpaqueFNSFontProfile",NULL};

	VPL_ExtStructure _OpaqueFNSFontReference_S = {"OpaqueFNSFontReference",NULL};

	VPL_ExtField _FNSSysInfo_7 = { "oFontSyncVersion",24,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _FNSSysInfo_6 = { "oMinProfileVersion",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FNSSysInfo_7};
	VPL_ExtField _FNSSysInfo_5 = { "oCurProfileVersion",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FNSSysInfo_6};
	VPL_ExtField _FNSSysInfo_4 = { "oMinRefVersion",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FNSSysInfo_5};
	VPL_ExtField _FNSSysInfo_3 = { "oCurRefVersion",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FNSSysInfo_4};
	VPL_ExtField _FNSSysInfo_2 = { "oFeatures",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FNSSysInfo_3};
	VPL_ExtField _FNSSysInfo_1 = { "iSysInfoVersion",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FNSSysInfo_2};
	VPL_ExtStructure _FNSSysInfo_S = {"FNSSysInfo",&_FNSSysInfo_1};

	VPL_ExtField _DMProfileListEntryRec_4 = { "profileReserved3",12,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _DMProfileListEntryRec_3 = { "profileReserved2",8,4,kPointerType,"char",1,1,"T*",&_DMProfileListEntryRec_4};
	VPL_ExtField _DMProfileListEntryRec_2 = { "profileReserved1",4,4,kPointerType,"char",1,1,"T*",&_DMProfileListEntryRec_3};
	VPL_ExtField _DMProfileListEntryRec_1 = { "profileRef",0,4,kPointerType,"OpaqueCMProfileRef",1,0,"T*",&_DMProfileListEntryRec_2};
	VPL_ExtStructure _DMProfileListEntryRec_S = {"DMProfileListEntryRec",&_DMProfileListEntryRec_1};

	VPL_ExtField _DisplayListEntryRec_8 = { "displayListEntryReserved5",28,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _DisplayListEntryRec_7 = { "displayListEntryReserved4",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DisplayListEntryRec_8};
	VPL_ExtField _DisplayListEntryRec_6 = { "displayListEntryReserved3",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DisplayListEntryRec_7};
	VPL_ExtField _DisplayListEntryRec_5 = { "displayListEntryReserved2",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DisplayListEntryRec_6};
	VPL_ExtField _DisplayListEntryRec_4 = { "displayListEntryReserved1",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DisplayListEntryRec_5};
	VPL_ExtField _DisplayListEntryRec_3 = { "displayListEntryIncludeFlags",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DisplayListEntryRec_4};
	VPL_ExtField _DisplayListEntryRec_2 = { "displayListEntryDisplayID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DisplayListEntryRec_3};
	VPL_ExtField _DisplayListEntryRec_1 = { "displayListEntryGDevice",0,4,kPointerType,"GDevice",2,62,"T*",&_DisplayListEntryRec_2};
	VPL_ExtStructure _DisplayListEntryRec_S = {"DisplayListEntryRec",&_DisplayListEntryRec_1};

	VPL_ExtField _DMMakeAndModelRec_5 = { "makeReserved",16,16,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _DMMakeAndModelRec_4 = { "manufactureDate",12,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_DMMakeAndModelRec_5};
	VPL_ExtField _DMMakeAndModelRec_3 = { "serialNumber",8,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_DMMakeAndModelRec_4};
	VPL_ExtField _DMMakeAndModelRec_2 = { "model",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_DMMakeAndModelRec_3};
	VPL_ExtField _DMMakeAndModelRec_1 = { "manufacturer",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_DMMakeAndModelRec_2};
	VPL_ExtStructure _DMMakeAndModelRec_S = {"DMMakeAndModelRec",&_DMMakeAndModelRec_1};

	VPL_ExtField _DependentNotifyRec_8 = { "notifyFuture",28,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _DependentNotifyRec_7 = { "notifyReserved",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DependentNotifyRec_8};
	VPL_ExtField _DependentNotifyRec_6 = { "notifyFlags",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DependentNotifyRec_7};
	VPL_ExtField _DependentNotifyRec_5 = { "notifyVersion",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DependentNotifyRec_6};
	VPL_ExtField _DependentNotifyRec_4 = { "notifyComponent",12,4,kPointerType,"ComponentInstanceRecord",1,4,"T*",&_DependentNotifyRec_5};
	VPL_ExtField _DependentNotifyRec_3 = { "notifyPortID",8,4,kUnsignedType,"ComponentInstanceRecord",1,4,"unsigned long",&_DependentNotifyRec_4};
	VPL_ExtField _DependentNotifyRec_2 = { "notifyClass",4,4,kUnsignedType,"ComponentInstanceRecord",1,4,"unsigned long",&_DependentNotifyRec_3};
	VPL_ExtField _DependentNotifyRec_1 = { "notifyType",0,4,kUnsignedType,"ComponentInstanceRecord",1,4,"unsigned long",&_DependentNotifyRec_2};
	VPL_ExtStructure _DependentNotifyRec_S = {"DependentNotifyRec",&_DependentNotifyRec_1};

	VPL_ExtField _DMDisplayModeListEntryRec_8 = { "displayModeDisplayInfo",28,4,kPointerType,"DMDisplayTimingInfoRec",1,80,"T*",NULL};
	VPL_ExtField _DMDisplayModeListEntryRec_7 = { "displayModeName",24,4,kPointerType,"unsigned char",1,1,"T*",&_DMDisplayModeListEntryRec_8};
	VPL_ExtField _DMDisplayModeListEntryRec_6 = { "displayModeVersion",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_DMDisplayModeListEntryRec_7};
	VPL_ExtField _DMDisplayModeListEntryRec_5 = { "displayModeDepthBlockInfo",16,4,kPointerType,"DMDepthInfoBlockRec",1,20,"T*",&_DMDisplayModeListEntryRec_6};
	VPL_ExtField _DMDisplayModeListEntryRec_4 = { "displayModeTimingInfo",12,4,kPointerType,"VDTimingInfoRec",1,20,"T*",&_DMDisplayModeListEntryRec_5};
	VPL_ExtField _DMDisplayModeListEntryRec_3 = { "displayModeResolutionInfo",8,4,kPointerType,"VDResolutionInfoRec",1,30,"T*",&_DMDisplayModeListEntryRec_4};
	VPL_ExtField _DMDisplayModeListEntryRec_2 = { "displayModeSwitchInfo",4,4,kPointerType,"VDSwitchInfoRec",1,16,"T*",&_DMDisplayModeListEntryRec_3};
	VPL_ExtField _DMDisplayModeListEntryRec_1 = { "displayModeFlags",0,4,kUnsignedType,"VDSwitchInfoRec",1,16,"unsigned long",&_DMDisplayModeListEntryRec_2};
	VPL_ExtStructure _DMDisplayModeListEntryRec_S = {"DMDisplayModeListEntryRec",&_DMDisplayModeListEntryRec_1};

	VPL_ExtField _DMDepthInfoBlockRec_5 = { "depthBlockReserved2",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _DMDepthInfoBlockRec_4 = { "depthBlockReserved1",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMDepthInfoBlockRec_5};
	VPL_ExtField _DMDepthInfoBlockRec_3 = { "depthBlockFlags",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMDepthInfoBlockRec_4};
	VPL_ExtField _DMDepthInfoBlockRec_2 = { "depthVPBlock",4,4,kPointerType,"DMDepthInfoRec",1,20,"T*",&_DMDepthInfoBlockRec_3};
	VPL_ExtField _DMDepthInfoBlockRec_1 = { "depthBlockCount",0,4,kUnsignedType,"DMDepthInfoRec",1,20,"unsigned long",&_DMDepthInfoBlockRec_2};
	VPL_ExtStructure _DMDepthInfoBlockRec_S = {"DMDepthInfoBlockRec",&_DMDepthInfoBlockRec_1};

	VPL_ExtField _DMDepthInfoRec_5 = { "depthReserved2",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _DMDepthInfoRec_4 = { "depthReserved1",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMDepthInfoRec_5};
	VPL_ExtField _DMDepthInfoRec_3 = { "depthFlags",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMDepthInfoRec_4};
	VPL_ExtField _DMDepthInfoRec_2 = { "depthVPBlock",4,4,kPointerType,"VPBlock",1,42,"T*",&_DMDepthInfoRec_3};
	VPL_ExtField _DMDepthInfoRec_1 = { "depthSwitchInfo",0,4,kPointerType,"VDSwitchInfoRec",1,16,"T*",&_DMDepthInfoRec_2};
	VPL_ExtStructure _DMDepthInfoRec_S = {"DMDepthInfoRec",&_DMDepthInfoRec_1};

	VPL_ExtField _AVLocationRec_1 = { "locationConstant",0,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtStructure _AVLocationRec_S = {"AVLocationRec",&_AVLocationRec_1};

	VPL_ExtField _DMComponentListEntryRec_13 = { "itemFuture4",64,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _DMComponentListEntryRec_12 = { "itemFuture3",60,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMComponentListEntryRec_13};
	VPL_ExtField _DMComponentListEntryRec_11 = { "itemFuture2",56,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMComponentListEntryRec_12};
	VPL_ExtField _DMComponentListEntryRec_10 = { "itemFuture1",52,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMComponentListEntryRec_11};
	VPL_ExtField _DMComponentListEntryRec_9 = { "itemReserved",48,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMComponentListEntryRec_10};
	VPL_ExtField _DMComponentListEntryRec_8 = { "itemFlags",44,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMComponentListEntryRec_9};
	VPL_ExtField _DMComponentListEntryRec_7 = { "itemSort",40,4,kStructureType,"NULL",0,0,"Point",&_DMComponentListEntryRec_8};
	VPL_ExtField _DMComponentListEntryRec_6 = { "itemSubClass",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMComponentListEntryRec_7};
	VPL_ExtField _DMComponentListEntryRec_5 = { "itemFidelity",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMComponentListEntryRec_6};
	VPL_ExtField _DMComponentListEntryRec_4 = { "itemClass",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DMComponentListEntryRec_5};
	VPL_ExtField _DMComponentListEntryRec_3 = { "itemDescription",8,20,kStructureType,"NULL",0,0,"ComponentDescription",&_DMComponentListEntryRec_4};
	VPL_ExtField _DMComponentListEntryRec_2 = { "itemComponent",4,4,kPointerType,"ComponentRecord",1,4,"T*",&_DMComponentListEntryRec_3};
	VPL_ExtField _DMComponentListEntryRec_1 = { "itemID",0,4,kUnsignedType,"ComponentRecord",1,4,"unsigned long",&_DMComponentListEntryRec_2};
	VPL_ExtStructure _DMComponentListEntryRec_S = {"DMComponentListEntryRec",&_DMComponentListEntryRec_1};

	VPL_ExtField _DMDisplayTimingInfoRec_5 = { "timingInfoReserved",16,64,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _DMDisplayTimingInfoRec_4 = { "timingInfoRelativeDefault",12,4,kIntType,"unsigned long",0,4,"long int",&_DMDisplayTimingInfoRec_5};
	VPL_ExtField _DMDisplayTimingInfoRec_3 = { "timingInfoRelativeQuality",8,4,kIntType,"unsigned long",0,4,"long int",&_DMDisplayTimingInfoRec_4};
	VPL_ExtField _DMDisplayTimingInfoRec_2 = { "timingInfoAttributes",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_DMDisplayTimingInfoRec_3};
	VPL_ExtField _DMDisplayTimingInfoRec_1 = { "timingInfoVersion",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_DMDisplayTimingInfoRec_2};
	VPL_ExtStructure _DMDisplayTimingInfoRec_S = {"DMDisplayTimingInfoRec",&_DMDisplayTimingInfoRec_1};

	VPL_ExtField _VDCommunicationInfoRec_12 = { "csReserved7",44,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDCommunicationInfoRec_11 = { "csReserved6",40,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationInfoRec_12};
	VPL_ExtField _VDCommunicationInfoRec_10 = { "csReserved5",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationInfoRec_11};
	VPL_ExtField _VDCommunicationInfoRec_9 = { "csReserved4",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationInfoRec_10};
	VPL_ExtField _VDCommunicationInfoRec_8 = { "csReserved3",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationInfoRec_9};
	VPL_ExtField _VDCommunicationInfoRec_7 = { "csReserved2",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationInfoRec_8};
	VPL_ExtField _VDCommunicationInfoRec_6 = { "csSupportedCommFlags",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationInfoRec_7};
	VPL_ExtField _VDCommunicationInfoRec_5 = { "csSupportedTypes",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationInfoRec_6};
	VPL_ExtField _VDCommunicationInfoRec_4 = { "csMaxBus",12,4,kIntType,"NULL",0,0,"long int",&_VDCommunicationInfoRec_5};
	VPL_ExtField _VDCommunicationInfoRec_3 = { "csMinBus",8,4,kIntType,"NULL",0,0,"long int",&_VDCommunicationInfoRec_4};
	VPL_ExtField _VDCommunicationInfoRec_2 = { "csBusType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationInfoRec_3};
	VPL_ExtField _VDCommunicationInfoRec_1 = { "csBusID",0,4,kIntType,"NULL",0,0,"long int",&_VDCommunicationInfoRec_2};
	VPL_ExtStructure _VDCommunicationInfoRec_S = {"VDCommunicationInfoRec",&_VDCommunicationInfoRec_1};

	VPL_ExtField _VDCommunicationRec_16 = { "csReserved6",60,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDCommunicationRec_15 = { "csReserved5",56,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationRec_16};
	VPL_ExtField _VDCommunicationRec_14 = { "csReserved4",52,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationRec_15};
	VPL_ExtField _VDCommunicationRec_13 = { "csReserved3",48,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationRec_14};
	VPL_ExtField _VDCommunicationRec_12 = { "csReplySize",44,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDCommunicationRec_13};
	VPL_ExtField _VDCommunicationRec_11 = { "csReplyBuffer",40,4,kPointerType,"void",1,0,"T*",&_VDCommunicationRec_12};
	VPL_ExtField _VDCommunicationRec_10 = { "csReplyType",36,4,kUnsignedType,"void",1,0,"unsigned long",&_VDCommunicationRec_11};
	VPL_ExtField _VDCommunicationRec_9 = { "csReplyAddress",32,4,kUnsignedType,"void",1,0,"unsigned long",&_VDCommunicationRec_10};
	VPL_ExtField _VDCommunicationRec_8 = { "csSendSize",28,4,kUnsignedType,"void",1,0,"unsigned long",&_VDCommunicationRec_9};
	VPL_ExtField _VDCommunicationRec_7 = { "csSendBuffer",24,4,kPointerType,"void",1,0,"T*",&_VDCommunicationRec_8};
	VPL_ExtField _VDCommunicationRec_6 = { "csSendType",20,4,kUnsignedType,"void",1,0,"unsigned long",&_VDCommunicationRec_7};
	VPL_ExtField _VDCommunicationRec_5 = { "csSendAddress",16,4,kUnsignedType,"void",1,0,"unsigned long",&_VDCommunicationRec_6};
	VPL_ExtField _VDCommunicationRec_4 = { "csReserved2",12,4,kUnsignedType,"void",1,0,"unsigned long",&_VDCommunicationRec_5};
	VPL_ExtField _VDCommunicationRec_3 = { "csMinReplyDelay",8,4,kUnsignedType,"void",1,0,"unsigned long",&_VDCommunicationRec_4};
	VPL_ExtField _VDCommunicationRec_2 = { "csCommFlags",4,4,kUnsignedType,"void",1,0,"unsigned long",&_VDCommunicationRec_3};
	VPL_ExtField _VDCommunicationRec_1 = { "csBusID",0,4,kIntType,"void",1,0,"long int",&_VDCommunicationRec_2};
	VPL_ExtStructure _VDCommunicationRec_S = {"VDCommunicationRec",&_VDCommunicationRec_1};

	VPL_ExtField _VDDetailedTimingRec_37 = { "csReserved8",156,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDDetailedTimingRec_36 = { "csReserved7",152,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_37};
	VPL_ExtField _VDDetailedTimingRec_35 = { "csReserved6",148,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_36};
	VPL_ExtField _VDDetailedTimingRec_34 = { "csReserved5",144,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_35};
	VPL_ExtField _VDDetailedTimingRec_33 = { "csReserved4",140,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_34};
	VPL_ExtField _VDDetailedTimingRec_32 = { "csReserved3",136,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_33};
	VPL_ExtField _VDDetailedTimingRec_31 = { "csReserved2",132,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_32};
	VPL_ExtField _VDDetailedTimingRec_30 = { "csReserved1",128,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_31};
	VPL_ExtField _VDDetailedTimingRec_29 = { "csVerticalSyncLevel",124,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_30};
	VPL_ExtField _VDDetailedTimingRec_28 = { "csVerticalSyncConfig",120,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_29};
	VPL_ExtField _VDDetailedTimingRec_27 = { "csHorizontalSyncLevel",116,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_28};
	VPL_ExtField _VDDetailedTimingRec_26 = { "csHorizontalSyncConfig",112,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_27};
	VPL_ExtField _VDDetailedTimingRec_25 = { "csVerticalBorderBottom",108,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_26};
	VPL_ExtField _VDDetailedTimingRec_24 = { "csVerticalBorderTop",104,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_25};
	VPL_ExtField _VDDetailedTimingRec_23 = { "csHorizontalBorderRight",100,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_24};
	VPL_ExtField _VDDetailedTimingRec_22 = { "csHorizontalBorderLeft",96,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_23};
	VPL_ExtField _VDDetailedTimingRec_21 = { "csVerticalSyncPulseWidth",92,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_22};
	VPL_ExtField _VDDetailedTimingRec_20 = { "csVerticalSyncOffset",88,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_21};
	VPL_ExtField _VDDetailedTimingRec_19 = { "csVerticalBlanking",84,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_20};
	VPL_ExtField _VDDetailedTimingRec_18 = { "csVerticalActive",80,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_19};
	VPL_ExtField _VDDetailedTimingRec_17 = { "csHorizontalSyncPulseWidth",76,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_18};
	VPL_ExtField _VDDetailedTimingRec_16 = { "csHorizontalSyncOffset",72,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_17};
	VPL_ExtField _VDDetailedTimingRec_15 = { "csHorizontalBlanking",68,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_16};
	VPL_ExtField _VDDetailedTimingRec_14 = { "csHorizontalActive",64,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_15};
	VPL_ExtField _VDDetailedTimingRec_13 = { "csMaxPixelClock",56,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_VDDetailedTimingRec_14};
	VPL_ExtField _VDDetailedTimingRec_12 = { "csMinPixelClock",48,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_VDDetailedTimingRec_13};
	VPL_ExtField _VDDetailedTimingRec_11 = { "csPixelClock",40,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_VDDetailedTimingRec_12};
	VPL_ExtField _VDDetailedTimingRec_10 = { "csSignalLevels",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_11};
	VPL_ExtField _VDDetailedTimingRec_9 = { "csSignalConfig",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_10};
	VPL_ExtField _VDDetailedTimingRec_8 = { "csDisplayModeAlias",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_9};
	VPL_ExtField _VDDetailedTimingRec_7 = { "csDisplayModeState",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_8};
	VPL_ExtField _VDDetailedTimingRec_6 = { "csDisplayModeSeed",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_7};
	VPL_ExtField _VDDetailedTimingRec_5 = { "csDisplayModeID",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_6};
	VPL_ExtField _VDDetailedTimingRec_4 = { "csTimingReserved",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_5};
	VPL_ExtField _VDDetailedTimingRec_3 = { "csTimingVersion",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_4};
	VPL_ExtField _VDDetailedTimingRec_2 = { "csTimingType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_3};
	VPL_ExtField _VDDetailedTimingRec_1 = { "csTimingSize",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDetailedTimingRec_2};
	VPL_ExtStructure _VDDetailedTimingRec_S = {"VDDetailedTimingRec",&_VDDetailedTimingRec_1};

	VPL_ExtField _VDDisplayTimingRangeRec_69 = { "csReserved8",236,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDDisplayTimingRangeRec_68 = { "csReserved7",232,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_69};
	VPL_ExtField _VDDisplayTimingRangeRec_67 = { "csReserved6",228,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_68};
	VPL_ExtField _VDDisplayTimingRangeRec_66 = { "csReserved5",224,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_67};
	VPL_ExtField _VDDisplayTimingRangeRec_65 = { "csReserved4",220,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_66};
	VPL_ExtField _VDDisplayTimingRangeRec_64 = { "csReserved3",216,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_65};
	VPL_ExtField _VDDisplayTimingRangeRec_63 = { "csReserved2",212,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_64};
	VPL_ExtField _VDDisplayTimingRangeRec_62 = { "csReserved1",208,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_63};
	VPL_ExtField _VDDisplayTimingRangeRec_61 = { "csMaxVerticalBorderBottom",204,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_62};
	VPL_ExtField _VDDisplayTimingRangeRec_60 = { "csMinVerticalBorderBottom",200,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_61};
	VPL_ExtField _VDDisplayTimingRangeRec_59 = { "csMaxVerticalBorderTop",196,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_60};
	VPL_ExtField _VDDisplayTimingRangeRec_58 = { "csMinVerticalBorderTop",192,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_59};
	VPL_ExtField _VDDisplayTimingRangeRec_57 = { "csMaxHorizontalBorderRight",188,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_58};
	VPL_ExtField _VDDisplayTimingRangeRec_56 = { "csMinHorizontalBorderRight",184,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_57};
	VPL_ExtField _VDDisplayTimingRangeRec_55 = { "csMaxHorizontalBorderLeft",180,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_56};
	VPL_ExtField _VDDisplayTimingRangeRec_54 = { "csMinHorizontalBorderLeft",176,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_55};
	VPL_ExtField _VDDisplayTimingRangeRec_53 = { "csMaxVerticalPulseWidthClocks",172,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_54};
	VPL_ExtField _VDDisplayTimingRangeRec_52 = { "csMinVerticalPulseWidthClocks",168,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_53};
	VPL_ExtField _VDDisplayTimingRangeRec_51 = { "csMaxVerticalSyncOffsetClocks",164,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_52};
	VPL_ExtField _VDDisplayTimingRangeRec_50 = { "csMinVerticalSyncOffsetClocks",160,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_51};
	VPL_ExtField _VDDisplayTimingRangeRec_49 = { "csMaxVerticalBlankingClocks",156,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_50};
	VPL_ExtField _VDDisplayTimingRangeRec_48 = { "csMinVerticalBlankingClocks",152,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_49};
	VPL_ExtField _VDDisplayTimingRangeRec_47 = { "csMaxVerticalActiveClocks",148,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_48};
	VPL_ExtField _VDDisplayTimingRangeRec_46 = { "csMinVerticalActiveClocks",144,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_47};
	VPL_ExtField _VDDisplayTimingRangeRec_45 = { "csMaxHorizontalPulseWidthClocks",140,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_46};
	VPL_ExtField _VDDisplayTimingRangeRec_44 = { "csMinHorizontalPulseWidthClocks",136,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_45};
	VPL_ExtField _VDDisplayTimingRangeRec_43 = { "csMaxHorizontalSyncOffsetClocks",132,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_44};
	VPL_ExtField _VDDisplayTimingRangeRec_42 = { "csMinHorizontalSyncOffsetClocks",128,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_43};
	VPL_ExtField _VDDisplayTimingRangeRec_41 = { "csMaxHorizontalBlankingClocks",124,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_42};
	VPL_ExtField _VDDisplayTimingRangeRec_40 = { "csMinHorizontalBlankingClocks",120,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_41};
	VPL_ExtField _VDDisplayTimingRangeRec_39 = { "csMaxHorizontalActiveClocks",116,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_40};
	VPL_ExtField _VDDisplayTimingRangeRec_38 = { "csMinHorizontalActiveClocks",112,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_39};
	VPL_ExtField _VDDisplayTimingRangeRec_37 = { "csCharSizeReserved1",110,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VDDisplayTimingRangeRec_38};
	VPL_ExtField _VDDisplayTimingRangeRec_36 = { "csCharSizeVerticalTotal",109,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_37};
	VPL_ExtField _VDDisplayTimingRangeRec_35 = { "csCharSizeHorizontalTotal",108,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_36};
	VPL_ExtField _VDDisplayTimingRangeRec_34 = { "csCharSizeVerticalBorderBottom",107,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_35};
	VPL_ExtField _VDDisplayTimingRangeRec_33 = { "csCharSizeVerticalBorderTop",106,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_34};
	VPL_ExtField _VDDisplayTimingRangeRec_32 = { "csCharSizeHorizontalBorderRight",105,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_33};
	VPL_ExtField _VDDisplayTimingRangeRec_31 = { "csCharSizeHorizontalBorderLeft",104,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_32};
	VPL_ExtField _VDDisplayTimingRangeRec_30 = { "csCharSizeVerticalSyncPulse",103,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_31};
	VPL_ExtField _VDDisplayTimingRangeRec_29 = { "csCharSizeVerticalSyncOffset",102,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_30};
	VPL_ExtField _VDDisplayTimingRangeRec_28 = { "csCharSizeVerticalBlanking",101,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_29};
	VPL_ExtField _VDDisplayTimingRangeRec_27 = { "csCharSizeVerticalActive",100,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_28};
	VPL_ExtField _VDDisplayTimingRangeRec_26 = { "csCharSizeHorizontalSyncPulse",99,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_27};
	VPL_ExtField _VDDisplayTimingRangeRec_25 = { "csCharSizeHorizontalSyncOffset",98,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_26};
	VPL_ExtField _VDDisplayTimingRangeRec_24 = { "csCharSizeHorizontalBlanking",97,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_25};
	VPL_ExtField _VDDisplayTimingRangeRec_23 = { "csCharSizeHorizontalActive",96,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayTimingRangeRec_24};
	VPL_ExtField _VDDisplayTimingRangeRec_22 = { "csMaxTotalReserved2",92,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_23};
	VPL_ExtField _VDDisplayTimingRangeRec_21 = { "csMaxTotalReserved1",88,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_22};
	VPL_ExtField _VDDisplayTimingRangeRec_20 = { "csMaxVerticalTotal",84,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_21};
	VPL_ExtField _VDDisplayTimingRangeRec_19 = { "csMaxHorizontalTotal",80,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_20};
	VPL_ExtField _VDDisplayTimingRangeRec_18 = { "csMaxLineRate",76,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_19};
	VPL_ExtField _VDDisplayTimingRangeRec_17 = { "csMinLineRate",72,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_18};
	VPL_ExtField _VDDisplayTimingRangeRec_16 = { "csMaxFrameRate",68,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_17};
	VPL_ExtField _VDDisplayTimingRangeRec_15 = { "csMinFrameRate",64,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_16};
	VPL_ExtField _VDDisplayTimingRangeRec_14 = { "csReserved0",60,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_15};
	VPL_ExtField _VDDisplayTimingRangeRec_13 = { "csTimingRangeSignalLevels",56,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_14};
	VPL_ExtField _VDDisplayTimingRangeRec_12 = { "csTimingRangeSyncFlags",52,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_13};
	VPL_ExtField _VDDisplayTimingRangeRec_11 = { "csMaxPixelError",48,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_12};
	VPL_ExtField _VDDisplayTimingRangeRec_10 = { "csMaxPixelClock",40,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_VDDisplayTimingRangeRec_11};
	VPL_ExtField _VDDisplayTimingRangeRec_9 = { "csMinPixelClock",32,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_VDDisplayTimingRangeRec_10};
	VPL_ExtField _VDDisplayTimingRangeRec_8 = { "csRangeFlags",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_9};
	VPL_ExtField _VDDisplayTimingRangeRec_7 = { "csRangeBlockCount",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_8};
	VPL_ExtField _VDDisplayTimingRangeRec_6 = { "csRangeGroup",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_7};
	VPL_ExtField _VDDisplayTimingRangeRec_5 = { "csRangeBlockIndex",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_6};
	VPL_ExtField _VDDisplayTimingRangeRec_4 = { "csRangeReserved",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_5};
	VPL_ExtField _VDDisplayTimingRangeRec_3 = { "csRangeVersion",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_4};
	VPL_ExtField _VDDisplayTimingRangeRec_2 = { "csRangeType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_3};
	VPL_ExtField _VDDisplayTimingRangeRec_1 = { "csRangeSize",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayTimingRangeRec_2};
	VPL_ExtStructure _VDDisplayTimingRangeRec_S = {"VDDisplayTimingRangeRec",&_VDDisplayTimingRangeRec_1};

	VPL_ExtField _VDDDCBlockRec_5 = { "ddcBlockData",16,128,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _VDDDCBlockRec_4 = { "ddcReserved",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_VDDDCBlockRec_5};
	VPL_ExtField _VDDDCBlockRec_3 = { "ddcFlags",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_VDDDCBlockRec_4};
	VPL_ExtField _VDDDCBlockRec_2 = { "ddcBlockType",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_VDDDCBlockRec_3};
	VPL_ExtField _VDDDCBlockRec_1 = { "ddcBlockNumber",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_VDDDCBlockRec_2};
	VPL_ExtStructure _VDDDCBlockRec_S = {"VDDDCBlockRec",&_VDDDCBlockRec_1};

	VPL_ExtField _VDPrivateSelectorRec_2 = { "data",4,16,kPointerType,"VDPrivateSelectorDataRec",0,16,NULL,NULL};
	VPL_ExtField _VDPrivateSelectorRec_1 = { "reserved",0,4,kUnsignedType,"VDPrivateSelectorDataRec",0,16,"unsigned long",&_VDPrivateSelectorRec_2};
	VPL_ExtStructure _VDPrivateSelectorRec_S = {"VDPrivateSelectorRec",&_VDPrivateSelectorRec_1};

	VPL_ExtField _VDPrivateSelectorDataRec_4 = { "privateResultsSize",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDPrivateSelectorDataRec_3 = { "privateResults",8,4,kPointerType,"void",1,0,"T*",&_VDPrivateSelectorDataRec_4};
	VPL_ExtField _VDPrivateSelectorDataRec_2 = { "privateParametersSize",4,4,kUnsignedType,"void",1,0,"unsigned long",&_VDPrivateSelectorDataRec_3};
	VPL_ExtField _VDPrivateSelectorDataRec_1 = { "privateParameters",0,4,kPointerType,"void",1,0,"T*",&_VDPrivateSelectorDataRec_2};
	VPL_ExtStructure _VDPrivateSelectorDataRec_S = {"VDPrivateSelectorDataRec",&_VDPrivateSelectorDataRec_1};

	VPL_ExtField _VDPowerStateRec_4 = { "powerReserved2",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDPowerStateRec_3 = { "powerReserved1",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDPowerStateRec_4};
	VPL_ExtField _VDPowerStateRec_2 = { "powerFlags",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDPowerStateRec_3};
	VPL_ExtField _VDPowerStateRec_1 = { "powerState",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDPowerStateRec_2};
	VPL_ExtStructure _VDPowerStateRec_S = {"VDPowerStateRec",&_VDPowerStateRec_1};

	VPL_ExtField _VDConvolutionInfoRec_5 = { "csReserved",14,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDConvolutionInfoRec_4 = { "csFlags",10,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDConvolutionInfoRec_5};
	VPL_ExtField _VDConvolutionInfoRec_3 = { "csPage",6,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDConvolutionInfoRec_4};
	VPL_ExtField _VDConvolutionInfoRec_2 = { "csDepthMode",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VDConvolutionInfoRec_3};
	VPL_ExtField _VDConvolutionInfoRec_1 = { "csDisplayModeID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDConvolutionInfoRec_2};
	VPL_ExtStructure _VDConvolutionInfoRec_S = {"VDConvolutionInfoRec",&_VDConvolutionInfoRec_1};

	VPL_ExtField _VDHardwareCursorDrawStateRec_6 = { "csReserved2",20,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDHardwareCursorDrawStateRec_5 = { "csReserved1",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDHardwareCursorDrawStateRec_6};
	VPL_ExtField _VDHardwareCursorDrawStateRec_4 = { "csCursorSet",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDHardwareCursorDrawStateRec_5};
	VPL_ExtField _VDHardwareCursorDrawStateRec_3 = { "csCursorVisible",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDHardwareCursorDrawStateRec_4};
	VPL_ExtField _VDHardwareCursorDrawStateRec_2 = { "csCursorY",4,4,kIntType,"NULL",0,0,"long int",&_VDHardwareCursorDrawStateRec_3};
	VPL_ExtField _VDHardwareCursorDrawStateRec_1 = { "csCursorX",0,4,kIntType,"NULL",0,0,"long int",&_VDHardwareCursorDrawStateRec_2};
	VPL_ExtStructure _VDHardwareCursorDrawStateRec_S = {"VDHardwareCursorDrawStateRec",&_VDHardwareCursorDrawStateRec_1};

	VPL_ExtField _VDSupportsHardwareCursorRec_3 = { "csReserved2",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDSupportsHardwareCursorRec_2 = { "csReserved1",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDSupportsHardwareCursorRec_3};
	VPL_ExtField _VDSupportsHardwareCursorRec_1 = { "csSupportsHardwareCursor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDSupportsHardwareCursorRec_2};
	VPL_ExtStructure _VDSupportsHardwareCursorRec_S = {"VDSupportsHardwareCursorRec",&_VDSupportsHardwareCursorRec_1};

	VPL_ExtField _VDDrawHardwareCursorRec_5 = { "csReserved2",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDDrawHardwareCursorRec_4 = { "csReserved1",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDrawHardwareCursorRec_5};
	VPL_ExtField _VDDrawHardwareCursorRec_3 = { "csCursorVisible",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDrawHardwareCursorRec_4};
	VPL_ExtField _VDDrawHardwareCursorRec_2 = { "csCursorY",4,4,kIntType,"NULL",0,0,"long int",&_VDDrawHardwareCursorRec_3};
	VPL_ExtField _VDDrawHardwareCursorRec_1 = { "csCursorX",0,4,kIntType,"NULL",0,0,"long int",&_VDDrawHardwareCursorRec_2};
	VPL_ExtStructure _VDDrawHardwareCursorRec_S = {"VDDrawHardwareCursorRec",&_VDDrawHardwareCursorRec_1};

	VPL_ExtField _VDSetHardwareCursorRec_3 = { "csReserved2",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDSetHardwareCursorRec_2 = { "csReserved1",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDSetHardwareCursorRec_3};
	VPL_ExtField _VDSetHardwareCursorRec_1 = { "csCursorRef",0,4,kPointerType,"void",1,0,"T*",&_VDSetHardwareCursorRec_2};
	VPL_ExtStructure _VDSetHardwareCursorRec_S = {"VDSetHardwareCursorRec",&_VDSetHardwareCursorRec_1};

	VPL_ExtField _VDRetrieveGammaRec_2 = { "csGammaTablePtr",4,4,kPointerType,"GammaTbl",1,14,"T*",NULL};
	VPL_ExtField _VDRetrieveGammaRec_1 = { "csGammaTableID",0,4,kUnsignedType,"GammaTbl",1,14,"unsigned long",&_VDRetrieveGammaRec_2};
	VPL_ExtStructure _VDRetrieveGammaRec_S = {"VDRetrieveGammaRec",&_VDRetrieveGammaRec_1};

	VPL_ExtField _VDGetGammaListRec_4 = { "csGammaTableName",12,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VDGetGammaListRec_3 = { "csGammaTableSize",8,4,kUnsignedType,"char",1,1,"unsigned long",&_VDGetGammaListRec_4};
	VPL_ExtField _VDGetGammaListRec_2 = { "csGammaTableID",4,4,kUnsignedType,"char",1,1,"unsigned long",&_VDGetGammaListRec_3};
	VPL_ExtField _VDGetGammaListRec_1 = { "csPreviousGammaTableID",0,4,kUnsignedType,"char",1,1,"unsigned long",&_VDGetGammaListRec_2};
	VPL_ExtStructure _VDGetGammaListRec_S = {"VDGetGammaListRec",&_VDGetGammaListRec_1};

	VPL_ExtField _VDGammaInfoRec_4 = { "csReserved",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDGammaInfoRec_3 = { "csGammaPtr",8,4,kPointerType,"char",1,1,"T*",&_VDGammaInfoRec_4};
	VPL_ExtField _VDGammaInfoRec_2 = { "csNextGammaID",4,4,kUnsignedType,"char",1,1,"unsigned long",&_VDGammaInfoRec_3};
	VPL_ExtField _VDGammaInfoRec_1 = { "csLastGammaID",0,4,kUnsignedType,"char",1,1,"unsigned long",&_VDGammaInfoRec_2};
	VPL_ExtStructure _VDGammaInfoRec_S = {"VDGammaInfoRec",&_VDGammaInfoRec_1};

	VPL_ExtField _VDVideoParametersInfoRec_6 = { "csDepthFlags",18,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDVideoParametersInfoRec_5 = { "csDeviceType",14,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDVideoParametersInfoRec_6};
	VPL_ExtField _VDVideoParametersInfoRec_4 = { "csPageCount",10,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDVideoParametersInfoRec_5};
	VPL_ExtField _VDVideoParametersInfoRec_3 = { "csVPBlockPtr",6,4,kPointerType,"VPBlock",1,42,"T*",&_VDVideoParametersInfoRec_4};
	VPL_ExtField _VDVideoParametersInfoRec_2 = { "csDepthMode",4,2,kUnsignedType,"VPBlock",1,42,"unsigned short",&_VDVideoParametersInfoRec_3};
	VPL_ExtField _VDVideoParametersInfoRec_1 = { "csDisplayModeID",0,4,kUnsignedType,"VPBlock",1,42,"unsigned long",&_VDVideoParametersInfoRec_2};
	VPL_ExtStructure _VDVideoParametersInfoRec_S = {"VDVideoParametersInfoRec",&_VDVideoParametersInfoRec_1};

	VPL_ExtField _VDResolutionInfoRec_8 = { "csReserved",26,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDResolutionInfoRec_7 = { "csResolutionFlags",22,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDResolutionInfoRec_8};
	VPL_ExtField _VDResolutionInfoRec_6 = { "csMaxDepthMode",20,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VDResolutionInfoRec_7};
	VPL_ExtField _VDResolutionInfoRec_5 = { "csRefreshRate",16,4,kIntType,"NULL",0,0,"long int",&_VDResolutionInfoRec_6};
	VPL_ExtField _VDResolutionInfoRec_4 = { "csVerticalLines",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDResolutionInfoRec_5};
	VPL_ExtField _VDResolutionInfoRec_3 = { "csHorizontalPixels",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDResolutionInfoRec_4};
	VPL_ExtField _VDResolutionInfoRec_2 = { "csDisplayModeID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDResolutionInfoRec_3};
	VPL_ExtField _VDResolutionInfoRec_1 = { "csPreviousDisplayModeID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDResolutionInfoRec_2};
	VPL_ExtStructure _VDResolutionInfoRec_S = {"VDResolutionInfoRec",&_VDResolutionInfoRec_1};

	VPL_ExtField _VDSyncInfoRec_2 = { "csFlags",1,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _VDSyncInfoRec_1 = { "csMode",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDSyncInfoRec_2};
	VPL_ExtStructure _VDSyncInfoRec_S = {"VDSyncInfoRec",&_VDSyncInfoRec_1};

	VPL_ExtField _VDDefMode_2 = { "filler",1,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _VDDefMode_1 = { "csID",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDefMode_2};
	VPL_ExtStructure _VDDefMode_S = {"VDDefMode",&_VDDefMode_1};

	VPL_ExtField _VDSettings_19 = { "csVertMax",36,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VDSettings_18 = { "csVertVal",34,2,kIntType,"NULL",0,0,"short",&_VDSettings_19};
	VPL_ExtField _VDSettings_17 = { "csVertDef",32,2,kIntType,"NULL",0,0,"short",&_VDSettings_18};
	VPL_ExtField _VDSettings_16 = { "csHorizMax",30,2,kIntType,"NULL",0,0,"short",&_VDSettings_17};
	VPL_ExtField _VDSettings_15 = { "csHorizVal",28,2,kIntType,"NULL",0,0,"short",&_VDSettings_16};
	VPL_ExtField _VDSettings_14 = { "csHorizDef",26,2,kIntType,"NULL",0,0,"short",&_VDSettings_15};
	VPL_ExtField _VDSettings_13 = { "csHueVal",24,2,kIntType,"NULL",0,0,"short",&_VDSettings_14};
	VPL_ExtField _VDSettings_12 = { "csHueDef",22,2,kIntType,"NULL",0,0,"short",&_VDSettings_13};
	VPL_ExtField _VDSettings_11 = { "csHueMax",20,2,kIntType,"NULL",0,0,"short",&_VDSettings_12};
	VPL_ExtField _VDSettings_10 = { "csTintVal",18,2,kIntType,"NULL",0,0,"short",&_VDSettings_11};
	VPL_ExtField _VDSettings_9 = { "csTintDef",16,2,kIntType,"NULL",0,0,"short",&_VDSettings_10};
	VPL_ExtField _VDSettings_8 = { "csTintMax",14,2,kIntType,"NULL",0,0,"short",&_VDSettings_9};
	VPL_ExtField _VDSettings_7 = { "csCntrstVal",12,2,kIntType,"NULL",0,0,"short",&_VDSettings_8};
	VPL_ExtField _VDSettings_6 = { "csCntrstDef",10,2,kIntType,"NULL",0,0,"short",&_VDSettings_7};
	VPL_ExtField _VDSettings_5 = { "csCntrstMax",8,2,kIntType,"NULL",0,0,"short",&_VDSettings_6};
	VPL_ExtField _VDSettings_4 = { "csBrightVal",6,2,kIntType,"NULL",0,0,"short",&_VDSettings_5};
	VPL_ExtField _VDSettings_3 = { "csBrightDef",4,2,kIntType,"NULL",0,0,"short",&_VDSettings_4};
	VPL_ExtField _VDSettings_2 = { "csBrightMax",2,2,kIntType,"NULL",0,0,"short",&_VDSettings_3};
	VPL_ExtField _VDSettings_1 = { "csParamCnt",0,2,kIntType,"NULL",0,0,"short",&_VDSettings_2};
	VPL_ExtStructure _VDSettings_S = {"VDSettings",&_VDSettings_1};

	VPL_ExtField _VDSizeInfo_4 = { "csVPos",6,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VDSizeInfo_3 = { "csVSize",4,2,kIntType,"NULL",0,0,"short",&_VDSizeInfo_4};
	VPL_ExtField _VDSizeInfo_2 = { "csHPos",2,2,kIntType,"NULL",0,0,"short",&_VDSizeInfo_3};
	VPL_ExtField _VDSizeInfo_1 = { "csHSize",0,2,kIntType,"NULL",0,0,"short",&_VDSizeInfo_2};
	VPL_ExtStructure _VDSizeInfo_S = {"VDSizeInfo",&_VDSizeInfo_1};

	VPL_ExtField _VDPageInfo_4 = { "csBaseAddr",8,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VDPageInfo_3 = { "csPage",6,2,kIntType,"char",1,1,"short",&_VDPageInfo_4};
	VPL_ExtField _VDPageInfo_2 = { "csData",2,4,kIntType,"char",1,1,"long int",&_VDPageInfo_3};
	VPL_ExtField _VDPageInfo_1 = { "csMode",0,2,kIntType,"char",1,1,"short",&_VDPageInfo_2};
	VPL_ExtStructure _VDPageInfo_S = {"VDPageInfo",&_VDPageInfo_1};

	VPL_ExtField _VDMultiConnectInfoRec_2 = { "csConnectInfo",4,16,kStructureType,"NULL",0,0,"VDDisplayConnectInfoRec",NULL};
	VPL_ExtField _VDMultiConnectInfoRec_1 = { "csDisplayCountOrNumber",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDMultiConnectInfoRec_2};
	VPL_ExtStructure _VDMultiConnectInfoRec_S = {"VDMultiConnectInfoRec",&_VDMultiConnectInfoRec_1};

	VPL_ExtField _VDDisplayConnectInfoRec_6 = { "csConnectReserved",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDDisplayConnectInfoRec_5 = { "csDisplayComponent",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayConnectInfoRec_6};
	VPL_ExtField _VDDisplayConnectInfoRec_4 = { "csConnectFlags",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDDisplayConnectInfoRec_5};
	VPL_ExtField _VDDisplayConnectInfoRec_3 = { "csConnectTaggedData",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayConnectInfoRec_4};
	VPL_ExtField _VDDisplayConnectInfoRec_2 = { "csConnectTaggedType",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDDisplayConnectInfoRec_3};
	VPL_ExtField _VDDisplayConnectInfoRec_1 = { "csDisplayType",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VDDisplayConnectInfoRec_2};
	VPL_ExtStructure _VDDisplayConnectInfoRec_S = {"VDDisplayConnectInfoRec",&_VDDisplayConnectInfoRec_1};

	VPL_ExtField _VDTimingInfoRec_5 = { "csTimingFlags",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDTimingInfoRec_4 = { "csTimingData",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDTimingInfoRec_5};
	VPL_ExtField _VDTimingInfoRec_3 = { "csTimingFormat",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDTimingInfoRec_4};
	VPL_ExtField _VDTimingInfoRec_2 = { "csTimingReserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDTimingInfoRec_3};
	VPL_ExtField _VDTimingInfoRec_1 = { "csTimingMode",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VDTimingInfoRec_2};
	VPL_ExtStructure _VDTimingInfoRec_S = {"VDTimingInfoRec",&_VDTimingInfoRec_1};

	VPL_ExtField _VDSwitchInfoRec_5 = { "csReserved",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VDSwitchInfoRec_4 = { "csBaseAddr",8,4,kPointerType,"char",1,1,"T*",&_VDSwitchInfoRec_5};
	VPL_ExtField _VDSwitchInfoRec_3 = { "csPage",6,2,kUnsignedType,"char",1,1,"unsigned short",&_VDSwitchInfoRec_4};
	VPL_ExtField _VDSwitchInfoRec_2 = { "csData",2,4,kUnsignedType,"char",1,1,"unsigned long",&_VDSwitchInfoRec_3};
	VPL_ExtField _VDSwitchInfoRec_1 = { "csMode",0,2,kUnsignedType,"char",1,1,"unsigned short",&_VDSwitchInfoRec_2};
	VPL_ExtStructure _VDSwitchInfoRec_S = {"VDSwitchInfoRec",&_VDSwitchInfoRec_1};

	VPL_ExtField _VDBaseAddressInfoRec_4 = { "csModeBase",10,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VDBaseAddressInfoRec_3 = { "csModeReserved",8,2,kIntType,"NULL",0,0,"short",&_VDBaseAddressInfoRec_4};
	VPL_ExtField _VDBaseAddressInfoRec_2 = { "csDevBase",4,4,kIntType,"NULL",0,0,"long int",&_VDBaseAddressInfoRec_3};
	VPL_ExtField _VDBaseAddressInfoRec_1 = { "csDevData",0,4,kIntType,"NULL",0,0,"long int",&_VDBaseAddressInfoRec_2};
	VPL_ExtStructure _VDBaseAddressInfoRec_S = {"VDBaseAddressInfoRec",&_VDBaseAddressInfoRec_1};

	VPL_ExtField _VDGammaRecord_1 = { "csGTable",0,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtStructure _VDGammaRecord_S = {"VDGammaRecord",&_VDGammaRecord_1};

	VPL_ExtField _VDSetEntryRecord_3 = { "csCount",6,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VDSetEntryRecord_2 = { "csStart",4,2,kIntType,"NULL",0,0,"short",&_VDSetEntryRecord_3};
	VPL_ExtField _VDSetEntryRecord_1 = { "csTable",0,4,kPointerType,"ColorSpec",1,8,"T*",&_VDSetEntryRecord_2};
	VPL_ExtStructure _VDSetEntryRecord_S = {"VDSetEntryRecord",&_VDSetEntryRecord_1};

	VPL_ExtField _VDFlagRecord_2 = { "filler",1,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _VDFlagRecord_1 = { "csMode",0,1,kIntType,"NULL",0,0,"signed char",&_VDFlagRecord_2};
	VPL_ExtStructure _VDFlagRecord_S = {"VDFlagRecord",&_VDFlagRecord_1};

	VPL_ExtField _VDGrayRecord_2 = { "filler",1,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _VDGrayRecord_1 = { "csMode",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VDGrayRecord_2};
	VPL_ExtStructure _VDGrayRecord_S = {"VDGrayRecord",&_VDGrayRecord_1};

	VPL_ExtField _VDEntryRecord_1 = { "csTable",0,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtStructure _VDEntryRecord_S = {"VDEntryRecord",&_VDEntryRecord_1};

	VPL_ExtField _VPBlock_13 = { "vpPlaneBytes",38,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPBlock_12 = { "vpCmpSize",36,2,kIntType,"NULL",0,0,"short",&_VPBlock_13};
	VPL_ExtField _VPBlock_11 = { "vpCmpCount",34,2,kIntType,"NULL",0,0,"short",&_VPBlock_12};
	VPL_ExtField _VPBlock_10 = { "vpPixelSize",32,2,kIntType,"NULL",0,0,"short",&_VPBlock_11};
	VPL_ExtField _VPBlock_9 = { "vpPixelType",30,2,kIntType,"NULL",0,0,"short",&_VPBlock_10};
	VPL_ExtField _VPBlock_8 = { "vpVRes",26,4,kIntType,"NULL",0,0,"long int",&_VPBlock_9};
	VPL_ExtField _VPBlock_7 = { "vpHRes",22,4,kIntType,"NULL",0,0,"long int",&_VPBlock_8};
	VPL_ExtField _VPBlock_6 = { "vpPackSize",18,4,kIntType,"NULL",0,0,"long int",&_VPBlock_7};
	VPL_ExtField _VPBlock_5 = { "vpPackType",16,2,kIntType,"NULL",0,0,"short",&_VPBlock_6};
	VPL_ExtField _VPBlock_4 = { "vpVersion",14,2,kIntType,"NULL",0,0,"short",&_VPBlock_5};
	VPL_ExtField _VPBlock_3 = { "vpBounds",6,8,kStructureType,"NULL",0,0,"Rect",&_VPBlock_4};
	VPL_ExtField _VPBlock_2 = { "vpRowBytes",4,2,kIntType,"NULL",0,0,"short",&_VPBlock_3};
	VPL_ExtField _VPBlock_1 = { "vpBaseOffset",0,4,kIntType,"NULL",0,0,"long int",&_VPBlock_2};
	VPL_ExtStructure _VPBlock_S = {"VPBlock",&_VPBlock_1};

	VPL_ExtField _ATSUUnhighlightData_2 = { "unhighlightData",4,16,kStructureType,"NULL",0,0,"ATSUBackgroundData",NULL};
	VPL_ExtField _ATSUUnhighlightData_1 = { "dataType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ATSUUnhighlightData_2};
	VPL_ExtStructure _ATSUUnhighlightData_S = {"ATSUUnhighlightData",&_ATSUUnhighlightData_1};

	VPL_ExtField _ATSUBackgroundColor_4 = { "alpha",12,4,kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField _ATSUBackgroundColor_3 = { "blue",8,4,kFloatType,"NULL",0,0,"float",&_ATSUBackgroundColor_4};
	VPL_ExtField _ATSUBackgroundColor_2 = { "green",4,4,kFloatType,"NULL",0,0,"float",&_ATSUBackgroundColor_3};
	VPL_ExtField _ATSUBackgroundColor_1 = { "red",0,4,kFloatType,"NULL",0,0,"float",&_ATSUBackgroundColor_2};
	VPL_ExtStructure _ATSUBackgroundColor_S = {"ATSUBackgroundColor",&_ATSUBackgroundColor_1};

	VPL_ExtField _ATSUGlyphInfoArray_3 = { "glyphs",8,28,kPointerType,"ATSUGlyphInfo",0,28,NULL,NULL};
	VPL_ExtField _ATSUGlyphInfoArray_2 = { "numGlyphs",4,4,kUnsignedType,"ATSUGlyphInfo",0,28,"unsigned long",&_ATSUGlyphInfoArray_3};
	VPL_ExtField _ATSUGlyphInfoArray_1 = { "layout",0,4,kPointerType,"OpaqueATSUTextLayout",1,0,"T*",&_ATSUGlyphInfoArray_2};
	VPL_ExtStructure _ATSUGlyphInfoArray_S = {"ATSUGlyphInfoArray",&_ATSUGlyphInfoArray_1};

	VPL_ExtField _ATSUGlyphInfo_9 = { "caretX",26,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ATSUGlyphInfo_8 = { "screenX",24,2,kIntType,"NULL",0,0,"short",&_ATSUGlyphInfo_9};
	VPL_ExtField _ATSUGlyphInfo_7 = { "idealX",20,4,kFloatType,"NULL",0,0,"float",&_ATSUGlyphInfo_8};
	VPL_ExtField _ATSUGlyphInfo_6 = { "deltaY",16,4,kFloatType,"NULL",0,0,"float",&_ATSUGlyphInfo_7};
	VPL_ExtField _ATSUGlyphInfo_5 = { "style",12,4,kPointerType,"OpaqueATSUStyle",1,0,"T*",&_ATSUGlyphInfo_6};
	VPL_ExtField _ATSUGlyphInfo_4 = { "charIndex",8,4,kUnsignedType,"OpaqueATSUStyle",1,0,"unsigned long",&_ATSUGlyphInfo_5};
	VPL_ExtField _ATSUGlyphInfo_3 = { "layoutFlags",4,4,kUnsignedType,"OpaqueATSUStyle",1,0,"unsigned long",&_ATSUGlyphInfo_4};
	VPL_ExtField _ATSUGlyphInfo_2 = { "reserved",2,2,kUnsignedType,"OpaqueATSUStyle",1,0,"unsigned short",&_ATSUGlyphInfo_3};
	VPL_ExtField _ATSUGlyphInfo_1 = { "glyphID",0,2,kUnsignedType,"OpaqueATSUStyle",1,0,"unsigned short",&_ATSUGlyphInfo_2};
	VPL_ExtStructure _ATSUGlyphInfo_S = {"ATSUGlyphInfo",&_ATSUGlyphInfo_1};

	VPL_ExtField _ATSUCaret_4 = { "fDeltaY",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ATSUCaret_3 = { "fDeltaX",8,4,kIntType,"NULL",0,0,"long int",&_ATSUCaret_4};
	VPL_ExtField _ATSUCaret_2 = { "fY",4,4,kIntType,"NULL",0,0,"long int",&_ATSUCaret_3};
	VPL_ExtField _ATSUCaret_1 = { "fX",0,4,kIntType,"NULL",0,0,"long int",&_ATSUCaret_2};
	VPL_ExtStructure _ATSUCaret_S = {"ATSUCaret",&_ATSUCaret_1};

	VPL_ExtField _ATSUAttributeInfo_2 = { "fValueSize",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ATSUAttributeInfo_1 = { "fTag",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ATSUAttributeInfo_2};
	VPL_ExtStructure _ATSUAttributeInfo_S = {"ATSUAttributeInfo",&_ATSUAttributeInfo_1};

	VPL_ExtStructure _OpaqueATSUFontFallbacks_S = {"OpaqueATSUFontFallbacks",NULL};

	VPL_ExtStructure _OpaqueATSUStyle_S = {"OpaqueATSUStyle",NULL};

	VPL_ExtStructure _OpaqueATSUTextLayout_S = {"OpaqueATSUTextLayout",NULL};

	VPL_ExtField _PictInfo_26 = { "reserved2",100,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _PictInfo_25 = { "reserved1",96,4,kIntType,"NULL",0,0,"long int",&_PictInfo_26};
	VPL_ExtField _PictInfo_24 = { "fontNamesHandle",92,4,kPointerType,"char",2,1,"T*",&_PictInfo_25};
	VPL_ExtField _PictInfo_23 = { "fontHandle",88,4,kPointerType,"FontSpec",2,26,"T*",&_PictInfo_24};
	VPL_ExtField _PictInfo_22 = { "uniqueFonts",84,4,kIntType,"FontSpec",2,26,"long int",&_PictInfo_23};
	VPL_ExtField _PictInfo_21 = { "commentHandle",80,4,kPointerType,"CommentSpec",2,4,"T*",&_PictInfo_22};
	VPL_ExtField _PictInfo_20 = { "uniqueComments",76,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_21};
	VPL_ExtField _PictInfo_19 = { "commentCount",72,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_20};
	VPL_ExtField _PictInfo_18 = { "pixMapCount",68,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_19};
	VPL_ExtField _PictInfo_17 = { "bitMapCount",64,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_18};
	VPL_ExtField _PictInfo_16 = { "regionCount",60,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_17};
	VPL_ExtField _PictInfo_15 = { "polyCount",56,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_16};
	VPL_ExtField _PictInfo_14 = { "arcCount",52,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_15};
	VPL_ExtField _PictInfo_13 = { "ovalCount",48,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_14};
	VPL_ExtField _PictInfo_12 = { "rRectCount",44,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_13};
	VPL_ExtField _PictInfo_11 = { "rectCount",40,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_12};
	VPL_ExtField _PictInfo_10 = { "lineCount",36,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_11};
	VPL_ExtField _PictInfo_9 = { "textCount",32,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_10};
	VPL_ExtField _PictInfo_8 = { "sourceRect",24,8,kStructureType,"CommentSpec",2,4,"Rect",&_PictInfo_9};
	VPL_ExtField _PictInfo_7 = { "depth",22,2,kIntType,"CommentSpec",2,4,"short",&_PictInfo_8};
	VPL_ExtField _PictInfo_6 = { "vRes",18,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_7};
	VPL_ExtField _PictInfo_5 = { "hRes",14,4,kIntType,"CommentSpec",2,4,"long int",&_PictInfo_6};
	VPL_ExtField _PictInfo_4 = { "theColorTable",10,4,kPointerType,"ColorTable",2,16,"T*",&_PictInfo_5};
	VPL_ExtField _PictInfo_3 = { "thePalette",6,4,kPointerType,"Palette",2,32,"T*",&_PictInfo_4};
	VPL_ExtField _PictInfo_2 = { "uniqueColors",2,4,kIntType,"Palette",2,32,"long int",&_PictInfo_3};
	VPL_ExtField _PictInfo_1 = { "version",0,2,kIntType,"Palette",2,32,"short",&_PictInfo_2};
	VPL_ExtStructure _PictInfo_S = {"PictInfo",&_PictInfo_1};

	VPL_ExtField _FontSpec_5 = { "nameOffset",22,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _FontSpec_4 = { "style",20,2,kIntType,"NULL",0,0,"short",&_FontSpec_5};
	VPL_ExtField _FontSpec_3 = { "size",4,16,kPointerType,"long int",0,4,NULL,&_FontSpec_4};
	VPL_ExtField _FontSpec_2 = { "sysFontID",2,2,kIntType,"long int",0,4,"short",&_FontSpec_3};
	VPL_ExtField _FontSpec_1 = { "pictFontID",0,2,kIntType,"long int",0,4,"short",&_FontSpec_2};
	VPL_ExtStructure _FontSpec_S = {"FontSpec",&_FontSpec_1};

	VPL_ExtField _CommentSpec_2 = { "ID",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _CommentSpec_1 = { "count",0,2,kIntType,"NULL",0,0,"short",&_CommentSpec_2};
	VPL_ExtStructure _CommentSpec_S = {"CommentSpec",&_CommentSpec_1};

	VPL_ExtField _Palette_3 = { "pmInfo",16,16,kPointerType,"ColorInfo",0,16,NULL,NULL};
	VPL_ExtField _Palette_2 = { "pmDataFields",2,14,kPointerType,"short",0,2,NULL,&_Palette_3};
	VPL_ExtField _Palette_1 = { "pmEntries",0,2,kIntType,"short",0,2,"short",&_Palette_2};
	VPL_ExtStructure _Palette_S = {"Palette",&_Palette_1};

	VPL_ExtField _ColorInfo_4 = { "ciDataFields",10,6,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _ColorInfo_3 = { "ciTolerance",8,2,kIntType,"short",0,2,"short",&_ColorInfo_4};
	VPL_ExtField _ColorInfo_2 = { "ciUsage",6,2,kIntType,"short",0,2,"short",&_ColorInfo_3};
	VPL_ExtField _ColorInfo_1 = { "ciRGB",0,6,kStructureType,"short",0,2,"RGBColor",&_ColorInfo_2};
	VPL_ExtStructure _ColorInfo_S = {"ColorInfo",&_ColorInfo_1};

	VPL_ExtField _FontRec_13 = { "rowWords",24,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _FontRec_12 = { "leading",22,2,kIntType,"NULL",0,0,"short",&_FontRec_13};
	VPL_ExtField _FontRec_11 = { "descent",20,2,kIntType,"NULL",0,0,"short",&_FontRec_12};
	VPL_ExtField _FontRec_10 = { "ascent",18,2,kIntType,"NULL",0,0,"short",&_FontRec_11};
	VPL_ExtField _FontRec_9 = { "owTLoc",16,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FontRec_10};
	VPL_ExtField _FontRec_8 = { "fRectHeight",14,2,kIntType,"NULL",0,0,"short",&_FontRec_9};
	VPL_ExtField _FontRec_7 = { "fRectWidth",12,2,kIntType,"NULL",0,0,"short",&_FontRec_8};
	VPL_ExtField _FontRec_6 = { "nDescent",10,2,kIntType,"NULL",0,0,"short",&_FontRec_7};
	VPL_ExtField _FontRec_5 = { "kernMax",8,2,kIntType,"NULL",0,0,"short",&_FontRec_6};
	VPL_ExtField _FontRec_4 = { "widMax",6,2,kIntType,"NULL",0,0,"short",&_FontRec_5};
	VPL_ExtField _FontRec_3 = { "lastChar",4,2,kIntType,"NULL",0,0,"short",&_FontRec_4};
	VPL_ExtField _FontRec_2 = { "firstChar",2,2,kIntType,"NULL",0,0,"short",&_FontRec_3};
	VPL_ExtField _FontRec_1 = { "fontType",0,2,kIntType,"NULL",0,0,"short",&_FontRec_2};
	VPL_ExtStructure _FontRec_S = {"FontRec",&_FontRec_1};

	VPL_ExtField _FamRec_14 = { "ffVersion",50,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _FamRec_13 = { "ffIntl",46,4,kPointerType,"short",0,2,NULL,&_FamRec_14};
	VPL_ExtField _FamRec_12 = { "ffProperty",28,18,kPointerType,"short",0,2,NULL,&_FamRec_13};
	VPL_ExtField _FamRec_11 = { "ffStylOff",24,4,kIntType,"short",0,2,"long int",&_FamRec_12};
	VPL_ExtField _FamRec_10 = { "ffKernOff",20,4,kIntType,"short",0,2,"long int",&_FamRec_11};
	VPL_ExtField _FamRec_9 = { "ffWTabOff",16,4,kIntType,"short",0,2,"long int",&_FamRec_10};
	VPL_ExtField _FamRec_8 = { "ffWidMax",14,2,kIntType,"short",0,2,"short",&_FamRec_9};
	VPL_ExtField _FamRec_7 = { "ffLeading",12,2,kIntType,"short",0,2,"short",&_FamRec_8};
	VPL_ExtField _FamRec_6 = { "ffDescent",10,2,kIntType,"short",0,2,"short",&_FamRec_7};
	VPL_ExtField _FamRec_5 = { "ffAscent",8,2,kIntType,"short",0,2,"short",&_FamRec_6};
	VPL_ExtField _FamRec_4 = { "ffLastChar",6,2,kIntType,"short",0,2,"short",&_FamRec_5};
	VPL_ExtField _FamRec_3 = { "ffFirstChar",4,2,kIntType,"short",0,2,"short",&_FamRec_4};
	VPL_ExtField _FamRec_2 = { "ffFamID",2,2,kIntType,"short",0,2,"short",&_FamRec_3};
	VPL_ExtField _FamRec_1 = { "ffFlags",0,2,kIntType,"short",0,2,"short",&_FamRec_2};
	VPL_ExtStructure _FamRec_S = {"FamRec",&_FamRec_1};

	VPL_ExtField _WidthTable_20 = { "tabSize",1070,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _WidthTable_19 = { "aSize",1068,2,kIntType,"NULL",0,0,"short",&_WidthTable_20};
	VPL_ExtField _WidthTable_18 = { "hFactor",1066,2,kIntType,"NULL",0,0,"short",&_WidthTable_19};
	VPL_ExtField _WidthTable_17 = { "vFactor",1064,2,kIntType,"NULL",0,0,"short",&_WidthTable_18};
	VPL_ExtField _WidthTable_16 = { "hOutput",1062,2,kIntType,"NULL",0,0,"short",&_WidthTable_17};
	VPL_ExtField _WidthTable_15 = { "vOutput",1060,2,kIntType,"NULL",0,0,"short",&_WidthTable_16};
	VPL_ExtField _WidthTable_14 = { "aFace",1059,1,kUnsignedType,"NULL",0,0,"unsigned char",&_WidthTable_15};
	VPL_ExtField _WidthTable_13 = { "usedFam",1058,1,kUnsignedType,"NULL",0,0,"unsigned char",&_WidthTable_14};
	VPL_ExtField _WidthTable_12 = { "fHand",1054,4,kPointerType,"char",2,1,"T*",&_WidthTable_13};
	VPL_ExtField _WidthTable_11 = { "aFID",1052,2,kIntType,"char",2,1,"short",&_WidthTable_12};
	VPL_ExtField _WidthTable_10 = { "inDenom",1048,4,kStructureType,"char",2,1,"Point",&_WidthTable_11};
	VPL_ExtField _WidthTable_9 = { "inNumer",1044,4,kStructureType,"char",2,1,"Point",&_WidthTable_10};
	VPL_ExtField _WidthTable_8 = { "device",1042,2,kIntType,"char",2,1,"short",&_WidthTable_9};
	VPL_ExtField _WidthTable_7 = { "face",1040,2,kIntType,"char",2,1,"short",&_WidthTable_8};
	VPL_ExtField _WidthTable_6 = { "fSize",1038,2,kIntType,"char",2,1,"short",&_WidthTable_7};
	VPL_ExtField _WidthTable_5 = { "fID",1036,2,kIntType,"char",2,1,"short",&_WidthTable_6};
	VPL_ExtField _WidthTable_4 = { "style",1032,4,kIntType,"char",2,1,"long int",&_WidthTable_5};
	VPL_ExtField _WidthTable_3 = { "sExtra",1028,4,kIntType,"char",2,1,"long int",&_WidthTable_4};
	VPL_ExtField _WidthTable_2 = { "tabFont",1024,4,kPointerType,"char",2,1,"T*",&_WidthTable_3};
	VPL_ExtField _WidthTable_1 = { "tabData",0,1024,kPointerType,"long int",0,4,NULL,&_WidthTable_2};
	VPL_ExtStructure _WidthTable_S = {"WidthTable",&_WidthTable_1};

	VPL_ExtField _KernTable_1 = { "numKerns",0,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtStructure _KernTable_S = {"KernTable",&_KernTable_1};

	VPL_ExtField _KernEntry_2 = { "kernLength",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _KernEntry_1 = { "kernStyle",0,2,kIntType,"NULL",0,0,"short",&_KernEntry_2};
	VPL_ExtStructure _KernEntry_S = {"KernEntry",&_KernEntry_1};

	VPL_ExtField _KernPair_3 = { "kernWidth",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _KernPair_2 = { "kernSecond",1,1,kIntType,"NULL",0,0,"char",&_KernPair_3};
	VPL_ExtField _KernPair_1 = { "kernFirst",0,1,kIntType,"NULL",0,0,"char",&_KernPair_2};
	VPL_ExtStructure _KernPair_S = {"KernPair",&_KernPair_1};

	VPL_ExtField _NameTable_2 = { "baseFontName",2,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _NameTable_1 = { "stringCount",0,2,kIntType,"unsigned char",0,1,"short",&_NameTable_2};
	VPL_ExtStructure _NameTable_S = {"NameTable",&_NameTable_1};

	VPL_ExtField _StyleTable_4 = { "indexes",10,48,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _StyleTable_3 = { "reserved",6,4,kIntType,"char",0,1,"long int",&_StyleTable_4};
	VPL_ExtField _StyleTable_2 = { "offset",2,4,kIntType,"char",0,1,"long int",&_StyleTable_3};
	VPL_ExtField _StyleTable_1 = { "fontClass",0,2,kIntType,"char",0,1,"short",&_StyleTable_2};
	VPL_ExtStructure _StyleTable_S = {"StyleTable",&_StyleTable_1};

	VPL_ExtField _FontAssoc_1 = { "numAssoc",0,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtStructure _FontAssoc_S = {"FontAssoc",&_FontAssoc_1};

	VPL_ExtField _AsscEntry_3 = { "fontID",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _AsscEntry_2 = { "fontStyle",2,2,kIntType,"NULL",0,0,"short",&_AsscEntry_3};
	VPL_ExtField _AsscEntry_1 = { "fontSize",0,2,kIntType,"NULL",0,0,"short",&_AsscEntry_2};
	VPL_ExtStructure _AsscEntry_S = {"AsscEntry",&_AsscEntry_1};

	VPL_ExtField _WidTable_1 = { "numWidths",0,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtStructure _WidTable_S = {"WidTable",&_WidTable_1};

	VPL_ExtField _WidEntry_1 = { "widStyle",0,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtStructure _WidEntry_S = {"WidEntry",&_WidEntry_1};

	VPL_ExtField _FMetricRec_5 = { "wTabHandle",16,4,kPointerType,"char",2,1,"T*",NULL};
	VPL_ExtField _FMetricRec_4 = { "widMax",12,4,kIntType,"char",2,1,"long int",&_FMetricRec_5};
	VPL_ExtField _FMetricRec_3 = { "leading",8,4,kIntType,"char",2,1,"long int",&_FMetricRec_4};
	VPL_ExtField _FMetricRec_2 = { "descent",4,4,kIntType,"char",2,1,"long int",&_FMetricRec_3};
	VPL_ExtField _FMetricRec_1 = { "ascent",0,4,kIntType,"char",2,1,"long int",&_FMetricRec_2};
	VPL_ExtStructure _FMetricRec_S = {"FMetricRec",&_FMetricRec_1};

	VPL_ExtField _FMOutput_16 = { "denom",22,4,kStructureType,"NULL",0,0,"Point",NULL};
	VPL_ExtField _FMOutput_15 = { "numer",18,4,kStructureType,"NULL",0,0,"Point",&_FMOutput_16};
	VPL_ExtField _FMOutput_14 = { "curStyle",17,1,kIntType,"NULL",0,0,"signed char",&_FMOutput_15};
	VPL_ExtField _FMOutput_13 = { "leading",16,1,kIntType,"NULL",0,0,"signed char",&_FMOutput_14};
	VPL_ExtField _FMOutput_12 = { "widMax",15,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_13};
	VPL_ExtField _FMOutput_11 = { "descent",14,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_12};
	VPL_ExtField _FMOutput_10 = { "ascent",13,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_11};
	VPL_ExtField _FMOutput_9 = { "extra",12,1,kIntType,"NULL",0,0,"signed char",&_FMOutput_10};
	VPL_ExtField _FMOutput_8 = { "shadowPixels",11,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_9};
	VPL_ExtField _FMOutput_7 = { "ulThick",10,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_8};
	VPL_ExtField _FMOutput_6 = { "ulShadow",9,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_7};
	VPL_ExtField _FMOutput_5 = { "ulOffset",8,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_6};
	VPL_ExtField _FMOutput_4 = { "italicPixels",7,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_5};
	VPL_ExtField _FMOutput_3 = { "boldPixels",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMOutput_4};
	VPL_ExtField _FMOutput_2 = { "fontHandle",2,4,kPointerType,"char",2,1,"T*",&_FMOutput_3};
	VPL_ExtField _FMOutput_1 = { "errNum",0,2,kIntType,"char",2,1,"short",&_FMOutput_2};
	VPL_ExtStructure _FMOutput_S = {"FMOutput",&_FMOutput_1};

	VPL_ExtField _FMInput_7 = { "denom",12,4,kStructureType,"NULL",0,0,"Point",NULL};
	VPL_ExtField _FMInput_6 = { "numer",8,4,kStructureType,"NULL",0,0,"Point",&_FMInput_7};
	VPL_ExtField _FMInput_5 = { "device",6,2,kIntType,"NULL",0,0,"short",&_FMInput_6};
	VPL_ExtField _FMInput_4 = { "needBits",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMInput_5};
	VPL_ExtField _FMInput_3 = { "face",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FMInput_4};
	VPL_ExtField _FMInput_2 = { "size",2,2,kIntType,"NULL",0,0,"short",&_FMInput_3};
	VPL_ExtField _FMInput_1 = { "family",0,2,kIntType,"NULL",0,0,"short",&_FMInput_2};
	VPL_ExtStructure _FMInput_S = {"FMInput",&_FMInput_1};

	VPL_ExtStructure _OpaqueQDRegionBitsRef_S = {"OpaqueQDRegionBitsRef",NULL};

	VPL_ExtField _CursorInfo_6 = { "reserved",24,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CursorInfo_5 = { "hotspot",20,4,kStructureType,"NULL",0,0,"Point",&_CursorInfo_6};
	VPL_ExtField _CursorInfo_4 = { "bounds",12,8,kStructureType,"NULL",0,0,"Rect",&_CursorInfo_5};
	VPL_ExtField _CursorInfo_3 = { "animateDuration",8,4,kIntType,"NULL",0,0,"long int",&_CursorInfo_4};
	VPL_ExtField _CursorInfo_2 = { "capabilities",4,4,kIntType,"NULL",0,0,"long int",&_CursorInfo_3};
	VPL_ExtField _CursorInfo_1 = { "version",0,4,kIntType,"NULL",0,0,"long int",&_CursorInfo_2};
	VPL_ExtStructure _CursorInfo_S = {"CursorInfo",&_CursorInfo_1};

	VPL_ExtField _CustomXFerRec_9 = { "destBounds",32,8,kStructureType,"NULL",0,0,"Rect",NULL};
	VPL_ExtField _CustomXFerRec_8 = { "firstPixelHV",28,4,kStructureType,"NULL",0,0,"Point",&_CustomXFerRec_9};
	VPL_ExtField _CustomXFerRec_7 = { "pixelCount",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CustomXFerRec_8};
	VPL_ExtField _CustomXFerRec_6 = { "pixelSize",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CustomXFerRec_7};
	VPL_ExtField _CustomXFerRec_5 = { "refCon",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CustomXFerRec_6};
	VPL_ExtField _CustomXFerRec_4 = { "resultPixels",12,4,kPointerType,"void",1,0,"T*",&_CustomXFerRec_5};
	VPL_ExtField _CustomXFerRec_3 = { "destPixels",8,4,kPointerType,"void",1,0,"T*",&_CustomXFerRec_4};
	VPL_ExtField _CustomXFerRec_2 = { "srcPixels",4,4,kPointerType,"void",1,0,"T*",&_CustomXFerRec_3};
	VPL_ExtField _CustomXFerRec_1 = { "version",0,4,kUnsignedType,"void",1,0,"unsigned long",&_CustomXFerRec_2};
	VPL_ExtStructure _CustomXFerRec_S = {"CustomXFerRec",&_CustomXFerRec_1};

	VPL_ExtField _CursorImageRec_4 = { "cursorBitMask",8,4,kPointerType,"BitMap",2,14,"T*",NULL};
	VPL_ExtField _CursorImageRec_3 = { "cursorPixMap",4,4,kPointerType,"PixMap",2,50,"T*",&_CursorImageRec_4};
	VPL_ExtField _CursorImageRec_2 = { "minorVersion",2,2,kUnsignedType,"PixMap",2,50,"unsigned short",&_CursorImageRec_3};
	VPL_ExtField _CursorImageRec_1 = { "majorVersion",0,2,kUnsignedType,"PixMap",2,50,"unsigned short",&_CursorImageRec_2};
	VPL_ExtStructure _CursorImageRec_S = {"CursorImageRec",&_CursorImageRec_1};

	VPL_ExtField _OpenCPicParams_6 = { "reserved2",20,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _OpenCPicParams_5 = { "reserved1",18,2,kIntType,"NULL",0,0,"short",&_OpenCPicParams_6};
	VPL_ExtField _OpenCPicParams_4 = { "version",16,2,kIntType,"NULL",0,0,"short",&_OpenCPicParams_5};
	VPL_ExtField _OpenCPicParams_3 = { "vRes",12,4,kIntType,"NULL",0,0,"long int",&_OpenCPicParams_4};
	VPL_ExtField _OpenCPicParams_2 = { "hRes",8,4,kIntType,"NULL",0,0,"long int",&_OpenCPicParams_3};
	VPL_ExtField _OpenCPicParams_1 = { "srcRect",0,8,kStructureType,"NULL",0,0,"Rect",&_OpenCPicParams_2};
	VPL_ExtStructure _OpenCPicParams_S = {"OpenCPicParams",&_OpenCPicParams_1};

	VPL_ExtField _ReqListRec_2 = { "reqLData",2,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _ReqListRec_1 = { "reqLSize",0,2,kIntType,"short",0,2,"short",&_ReqListRec_2};
	VPL_ExtStructure _ReqListRec_S = {"ReqListRec",&_ReqListRec_1};

	VPL_ExtField _CQDProcs_20 = { "newProc6",76,4,kPointerType,"long int",1,4,"T*",NULL};
	VPL_ExtField _CQDProcs_19 = { "newProc5",72,4,kPointerType,"long int",1,4,"T*",&_CQDProcs_20};
	VPL_ExtField _CQDProcs_18 = { "newProc4",68,4,kPointerType,"long int",1,4,"T*",&_CQDProcs_19};
	VPL_ExtField _CQDProcs_17 = { "printerStatusProc",64,4,kPointerType,"long int",1,4,"T*",&_CQDProcs_18};
	VPL_ExtField _CQDProcs_16 = { "glyphsProc",60,4,kPointerType,"long int",1,4,"T*",&_CQDProcs_17};
	VPL_ExtField _CQDProcs_15 = { "newProc1",56,4,kPointerType,"long int",1,4,"T*",&_CQDProcs_16};
	VPL_ExtField _CQDProcs_14 = { "opcodeProc",52,4,kPointerType,"void",1,0,"T*",&_CQDProcs_15};
	VPL_ExtField _CQDProcs_13 = { "putPicProc",48,4,kPointerType,"void",1,0,"T*",&_CQDProcs_14};
	VPL_ExtField _CQDProcs_12 = { "getPicProc",44,4,kPointerType,"void",1,0,"T*",&_CQDProcs_13};
	VPL_ExtField _CQDProcs_11 = { "txMeasProc",40,4,kPointerType,"short",1,2,"T*",&_CQDProcs_12};
	VPL_ExtField _CQDProcs_10 = { "commentProc",36,4,kPointerType,"void",1,0,"T*",&_CQDProcs_11};
	VPL_ExtField _CQDProcs_9 = { "bitsProc",32,4,kPointerType,"void",1,0,"T*",&_CQDProcs_10};
	VPL_ExtField _CQDProcs_8 = { "rgnProc",28,4,kPointerType,"void",1,0,"T*",&_CQDProcs_9};
	VPL_ExtField _CQDProcs_7 = { "polyProc",24,4,kPointerType,"void",1,0,"T*",&_CQDProcs_8};
	VPL_ExtField _CQDProcs_6 = { "arcProc",20,4,kPointerType,"void",1,0,"T*",&_CQDProcs_7};
	VPL_ExtField _CQDProcs_5 = { "ovalProc",16,4,kPointerType,"void",1,0,"T*",&_CQDProcs_6};
	VPL_ExtField _CQDProcs_4 = { "rRectProc",12,4,kPointerType,"void",1,0,"T*",&_CQDProcs_5};
	VPL_ExtField _CQDProcs_3 = { "rectProc",8,4,kPointerType,"void",1,0,"T*",&_CQDProcs_4};
	VPL_ExtField _CQDProcs_2 = { "lineProc",4,4,kPointerType,"void",1,0,"T*",&_CQDProcs_3};
	VPL_ExtField _CQDProcs_1 = { "textProc",0,4,kPointerType,"void",1,0,"T*",&_CQDProcs_2};
	VPL_ExtStructure _CQDProcs_S = {"CQDProcs",&_CQDProcs_1};

	VPL_ExtField _GrafVars_7 = { "pmFlags",24,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _GrafVars_6 = { "pmBkIndex",22,2,kIntType,"NULL",0,0,"short",&_GrafVars_7};
	VPL_ExtField _GrafVars_5 = { "pmBkColor",18,4,kPointerType,"char",2,1,"T*",&_GrafVars_6};
	VPL_ExtField _GrafVars_4 = { "pmFgIndex",16,2,kIntType,"char",2,1,"short",&_GrafVars_5};
	VPL_ExtField _GrafVars_3 = { "pmFgColor",12,4,kPointerType,"char",2,1,"T*",&_GrafVars_4};
	VPL_ExtField _GrafVars_2 = { "rgbHiliteColor",6,6,kStructureType,"char",2,1,"RGBColor",&_GrafVars_3};
	VPL_ExtField _GrafVars_1 = { "rgbOpColor",0,6,kStructureType,"char",2,1,"RGBColor",&_GrafVars_2};
	VPL_ExtStructure _GrafVars_S = {"GrafVars",&_GrafVars_1};

	VPL_ExtField _GDevice_18 = { "gdExt",58,4,kPointerType,"char",2,1,"T*",NULL};
	VPL_ExtField _GDevice_17 = { "gdCCXMask",54,4,kPointerType,"char",2,1,"T*",&_GDevice_18};
	VPL_ExtField _GDevice_16 = { "gdCCXData",50,4,kPointerType,"char",2,1,"T*",&_GDevice_17};
	VPL_ExtField _GDevice_15 = { "gdCCDepth",48,2,kIntType,"char",2,1,"short",&_GDevice_16};
	VPL_ExtField _GDevice_14 = { "gdCCBytes",46,2,kIntType,"char",2,1,"short",&_GDevice_15};
	VPL_ExtField _GDevice_13 = { "gdMode",42,4,kIntType,"char",2,1,"long int",&_GDevice_14};
	VPL_ExtField _GDevice_12 = { "gdRect",34,8,kStructureType,"char",2,1,"Rect",&_GDevice_13};
	VPL_ExtField _GDevice_11 = { "gdNextGD",30,4,kPointerType,"GDevice",2,62,"T*",&_GDevice_12};
	VPL_ExtField _GDevice_10 = { "gdRefCon",26,4,kIntType,"GDevice",2,62,"long int",&_GDevice_11};
	VPL_ExtField _GDevice_9 = { "gdPMap",22,4,kPointerType,"PixMap",2,50,"T*",&_GDevice_10};
	VPL_ExtField _GDevice_8 = { "gdFlags",20,2,kIntType,"PixMap",2,50,"short",&_GDevice_9};
	VPL_ExtField _GDevice_7 = { "gdCompProc",16,4,kPointerType,"CProcRec",2,8,"T*",&_GDevice_8};
	VPL_ExtField _GDevice_6 = { "gdSearchProc",12,4,kPointerType,"SProcRec",2,8,"T*",&_GDevice_7};
	VPL_ExtField _GDevice_5 = { "gdResPref",10,2,kIntType,"SProcRec",2,8,"short",&_GDevice_6};
	VPL_ExtField _GDevice_4 = { "gdITable",6,4,kPointerType,"ITab",2,8,"T*",&_GDevice_5};
	VPL_ExtField _GDevice_3 = { "gdType",4,2,kIntType,"ITab",2,8,"short",&_GDevice_4};
	VPL_ExtField _GDevice_2 = { "gdID",2,2,kIntType,"ITab",2,8,"short",&_GDevice_3};
	VPL_ExtField _GDevice_1 = { "gdRefNum",0,2,kIntType,"ITab",2,8,"short",&_GDevice_2};
	VPL_ExtStructure _GDevice_S = {"GDevice",&_GDevice_1};

	VPL_ExtField _CProcRec_2 = { "compProc",4,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _CProcRec_1 = { "nxtComp",0,4,kPointerType,"char",2,1,"T*",&_CProcRec_2};
	VPL_ExtStructure _CProcRec_S = {"CProcRec",&_CProcRec_1};

	VPL_ExtField _SProcRec_2 = { "srchProc",4,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _SProcRec_1 = { "nxtSrch",0,4,kPointerType,"char",2,1,"T*",&_SProcRec_2};
	VPL_ExtStructure _SProcRec_S = {"SProcRec",&_SProcRec_1};

	VPL_ExtField _ITab_3 = { "iTTable",6,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ITab_2 = { "iTabRes",4,2,kIntType,"unsigned char",0,1,"short",&_ITab_3};
	VPL_ExtField _ITab_1 = { "iTabSeed",0,4,kIntType,"unsigned char",0,1,"long int",&_ITab_2};
	VPL_ExtStructure _ITab_S = {"ITab",&_ITab_1};

	VPL_ExtField _GammaTbl_7 = { "gFormulaData",12,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _GammaTbl_6 = { "gDataWidth",10,2,kIntType,"short",0,2,"short",&_GammaTbl_7};
	VPL_ExtField _GammaTbl_5 = { "gDataCnt",8,2,kIntType,"short",0,2,"short",&_GammaTbl_6};
	VPL_ExtField _GammaTbl_4 = { "gChanCnt",6,2,kIntType,"short",0,2,"short",&_GammaTbl_5};
	VPL_ExtField _GammaTbl_3 = { "gFormulaSize",4,2,kIntType,"short",0,2,"short",&_GammaTbl_4};
	VPL_ExtField _GammaTbl_2 = { "gType",2,2,kIntType,"short",0,2,"short",&_GammaTbl_3};
	VPL_ExtField _GammaTbl_1 = { "gVersion",0,2,kIntType,"short",0,2,"short",&_GammaTbl_2};
	VPL_ExtStructure _GammaTbl_S = {"GammaTbl",&_GammaTbl_1};

	VPL_ExtField _CCrsr_11 = { "crsrID",92,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CCrsr_10 = { "crsrXTable",88,4,kIntType,"NULL",0,0,"long int",&_CCrsr_11};
	VPL_ExtField _CCrsr_9 = { "crsrHotSpot",84,4,kStructureType,"NULL",0,0,"Point",&_CCrsr_10};
	VPL_ExtField _CCrsr_8 = { "crsrMask",52,32,kPointerType,"short",0,2,NULL,&_CCrsr_9};
	VPL_ExtField _CCrsr_7 = { "crsr1Data",20,32,kPointerType,"short",0,2,NULL,&_CCrsr_8};
	VPL_ExtField _CCrsr_6 = { "crsrXHandle",16,4,kPointerType,"char",2,1,"T*",&_CCrsr_7};
	VPL_ExtField _CCrsr_5 = { "crsrXValid",14,2,kIntType,"char",2,1,"short",&_CCrsr_6};
	VPL_ExtField _CCrsr_4 = { "crsrXData",10,4,kPointerType,"char",2,1,"T*",&_CCrsr_5};
	VPL_ExtField _CCrsr_3 = { "crsrData",6,4,kPointerType,"char",2,1,"T*",&_CCrsr_4};
	VPL_ExtField _CCrsr_2 = { "crsrMap",2,4,kPointerType,"PixMap",2,50,"T*",&_CCrsr_3};
	VPL_ExtField _CCrsr_1 = { "crsrType",0,2,kIntType,"PixMap",2,50,"short",&_CCrsr_2};
	VPL_ExtStructure _CCrsr_S = {"CCrsr",&_CCrsr_1};

	VPL_ExtField _PixPat_7 = { "pat1Data",20,8,kStructureType,"NULL",0,0,"Pattern",NULL};
	VPL_ExtField _PixPat_6 = { "patXMap",16,4,kPointerType,"char",2,1,"T*",&_PixPat_7};
	VPL_ExtField _PixPat_5 = { "patXValid",14,2,kIntType,"char",2,1,"short",&_PixPat_6};
	VPL_ExtField _PixPat_4 = { "patXData",10,4,kPointerType,"char",2,1,"T*",&_PixPat_5};
	VPL_ExtField _PixPat_3 = { "patData",6,4,kPointerType,"char",2,1,"T*",&_PixPat_4};
	VPL_ExtField _PixPat_2 = { "patMap",2,4,kPointerType,"PixMap",2,50,"T*",&_PixPat_3};
	VPL_ExtField _PixPat_1 = { "patType",0,2,kIntType,"PixMap",2,50,"short",&_PixPat_2};
	VPL_ExtStructure _PixPat_S = {"PixPat",&_PixPat_1};

	VPL_ExtField _PixMap_15 = { "pmExt",46,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _PixMap_14 = { "pmTable",42,4,kPointerType,"ColorTable",2,16,"T*",&_PixMap_15};
	VPL_ExtField _PixMap_13 = { "pixelFormat",38,4,kUnsignedType,"ColorTable",2,16,"unsigned long",&_PixMap_14};
	VPL_ExtField _PixMap_12 = { "cmpSize",36,2,kIntType,"ColorTable",2,16,"short",&_PixMap_13};
	VPL_ExtField _PixMap_11 = { "cmpCount",34,2,kIntType,"ColorTable",2,16,"short",&_PixMap_12};
	VPL_ExtField _PixMap_10 = { "pixelSize",32,2,kIntType,"ColorTable",2,16,"short",&_PixMap_11};
	VPL_ExtField _PixMap_9 = { "pixelType",30,2,kIntType,"ColorTable",2,16,"short",&_PixMap_10};
	VPL_ExtField _PixMap_8 = { "vRes",26,4,kIntType,"ColorTable",2,16,"long int",&_PixMap_9};
	VPL_ExtField _PixMap_7 = { "hRes",22,4,kIntType,"ColorTable",2,16,"long int",&_PixMap_8};
	VPL_ExtField _PixMap_6 = { "packSize",18,4,kIntType,"ColorTable",2,16,"long int",&_PixMap_7};
	VPL_ExtField _PixMap_5 = { "packType",16,2,kIntType,"ColorTable",2,16,"short",&_PixMap_6};
	VPL_ExtField _PixMap_4 = { "pmVersion",14,2,kIntType,"ColorTable",2,16,"short",&_PixMap_5};
	VPL_ExtField _PixMap_3 = { "bounds",6,8,kStructureType,"ColorTable",2,16,"Rect",&_PixMap_4};
	VPL_ExtField _PixMap_2 = { "rowBytes",4,2,kIntType,"ColorTable",2,16,"short",&_PixMap_3};
	VPL_ExtField _PixMap_1 = { "baseAddr",0,4,kPointerType,"char",1,1,"T*",&_PixMap_2};
	VPL_ExtStructure _PixMap_S = {"PixMap",&_PixMap_1};

	VPL_ExtField _MatchRec_4 = { "matchData",6,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _MatchRec_3 = { "blue",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MatchRec_4};
	VPL_ExtField _MatchRec_2 = { "green",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MatchRec_3};
	VPL_ExtField _MatchRec_1 = { "red",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MatchRec_2};
	VPL_ExtStructure _MatchRec_S = {"MatchRec",&_MatchRec_1};

	VPL_ExtField _xColorSpec_3 = { "xalpha",8,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _xColorSpec_2 = { "rgb",2,6,kStructureType,"NULL",0,0,"RGBColor",&_xColorSpec_3};
	VPL_ExtField _xColorSpec_1 = { "value",0,2,kIntType,"NULL",0,0,"short",&_xColorSpec_2};
	VPL_ExtStructure _xColorSpec_S = {"xColorSpec",&_xColorSpec_1};

	VPL_ExtField _ColorTable_4 = { "ctTable",8,8,kPointerType,"ColorSpec",0,8,NULL,NULL};
	VPL_ExtField _ColorTable_3 = { "ctSize",6,2,kIntType,"ColorSpec",0,8,"short",&_ColorTable_4};
	VPL_ExtField _ColorTable_2 = { "ctFlags",4,2,kIntType,"ColorSpec",0,8,"short",&_ColorTable_3};
	VPL_ExtField _ColorTable_1 = { "ctSeed",0,4,kIntType,"ColorSpec",0,8,"long int",&_ColorTable_2};
	VPL_ExtStructure _ColorTable_S = {"ColorTable",&_ColorTable_1};

	VPL_ExtField _ColorSpec_2 = { "rgb",2,6,kStructureType,"NULL",0,0,"RGBColor",NULL};
	VPL_ExtField _ColorSpec_1 = { "value",0,2,kIntType,"NULL",0,0,"short",&_ColorSpec_2};
	VPL_ExtStructure _ColorSpec_S = {"ColorSpec",&_ColorSpec_1};

	VPL_ExtField _RGBColor_3 = { "blue",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _RGBColor_2 = { "green",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_RGBColor_3};
	VPL_ExtField _RGBColor_1 = { "red",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_RGBColor_2};
	VPL_ExtStructure _RGBColor_S = {"RGBColor",&_RGBColor_1};

	VPL_ExtStructure _OpaqueGrafPtr_S = {"OpaqueGrafPtr",NULL};

	VPL_ExtStructure _OpaqueDialogPtr_S = {"OpaqueDialogPtr",NULL};

	VPL_ExtStructure _OpaqueWindowPtr_S = {"OpaqueWindowPtr",NULL};

	VPL_ExtField _QDProcs_13 = { "putPicProc",48,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _QDProcs_12 = { "getPicProc",44,4,kPointerType,"void",1,0,"T*",&_QDProcs_13};
	VPL_ExtField _QDProcs_11 = { "txMeasProc",40,4,kPointerType,"short",1,2,"T*",&_QDProcs_12};
	VPL_ExtField _QDProcs_10 = { "commentProc",36,4,kPointerType,"void",1,0,"T*",&_QDProcs_11};
	VPL_ExtField _QDProcs_9 = { "bitsProc",32,4,kPointerType,"void",1,0,"T*",&_QDProcs_10};
	VPL_ExtField _QDProcs_8 = { "rgnProc",28,4,kPointerType,"void",1,0,"T*",&_QDProcs_9};
	VPL_ExtField _QDProcs_7 = { "polyProc",24,4,kPointerType,"void",1,0,"T*",&_QDProcs_8};
	VPL_ExtField _QDProcs_6 = { "arcProc",20,4,kPointerType,"void",1,0,"T*",&_QDProcs_7};
	VPL_ExtField _QDProcs_5 = { "ovalProc",16,4,kPointerType,"void",1,0,"T*",&_QDProcs_6};
	VPL_ExtField _QDProcs_4 = { "rRectProc",12,4,kPointerType,"void",1,0,"T*",&_QDProcs_5};
	VPL_ExtField _QDProcs_3 = { "rectProc",8,4,kPointerType,"void",1,0,"T*",&_QDProcs_4};
	VPL_ExtField _QDProcs_2 = { "lineProc",4,4,kPointerType,"void",1,0,"T*",&_QDProcs_3};
	VPL_ExtField _QDProcs_1 = { "textProc",0,4,kPointerType,"void",1,0,"T*",&_QDProcs_2};
	VPL_ExtStructure _QDProcs_S = {"QDProcs",&_QDProcs_1};

	VPL_ExtField _MacPolygon_3 = { "polyPoints",10,4,kPointerType,"Point",0,4,NULL,NULL};
	VPL_ExtField _MacPolygon_2 = { "polyBBox",2,8,kStructureType,"Point",0,4,"Rect",&_MacPolygon_3};
	VPL_ExtField _MacPolygon_1 = { "polySize",0,2,kIntType,"Point",0,4,"short",&_MacPolygon_2};
	VPL_ExtStructure _MacPolygon_S = {"MacPolygon",&_MacPolygon_1};

	VPL_ExtField _Picture_2 = { "picFrame",2,8,kStructureType,"NULL",0,0,"Rect",NULL};
	VPL_ExtField _Picture_1 = { "picSize",0,2,kIntType,"NULL",0,0,"short",&_Picture_2};
	VPL_ExtStructure _Picture_S = {"Picture",&_Picture_1};

	VPL_ExtStructure _OpaqueRgnHandle_S = {"OpaqueRgnHandle",NULL};

	VPL_ExtField _PenState_4 = { "pnPat",10,8,kStructureType,"NULL",0,0,"Pattern",NULL};
	VPL_ExtField _PenState_3 = { "pnMode",8,2,kIntType,"NULL",0,0,"short",&_PenState_4};
	VPL_ExtField _PenState_2 = { "pnSize",4,4,kStructureType,"NULL",0,0,"Point",&_PenState_3};
	VPL_ExtField _PenState_1 = { "pnLoc",0,4,kStructureType,"NULL",0,0,"Point",&_PenState_2};
	VPL_ExtStructure _PenState_S = {"PenState",&_PenState_1};

	VPL_ExtField _Cursor_3 = { "hotSpot",64,4,kStructureType,"NULL",0,0,"Point",NULL};
	VPL_ExtField _Cursor_2 = { "mask",32,32,kPointerType,"short",0,2,NULL,&_Cursor_3};
	VPL_ExtField _Cursor_1 = { "data",0,32,kPointerType,"short",0,2,NULL,&_Cursor_2};
	VPL_ExtStructure _Cursor_S = {"Cursor",&_Cursor_1};

	VPL_ExtField _BitMap_3 = { "bounds",6,8,kStructureType,"NULL",0,0,"Rect",NULL};
	VPL_ExtField _BitMap_2 = { "rowBytes",4,2,kIntType,"NULL",0,0,"short",&_BitMap_3};
	VPL_ExtField _BitMap_1 = { "baseAddr",0,4,kPointerType,"char",1,1,"T*",&_BitMap_2};
	VPL_ExtStructure _BitMap_S = {"BitMap",&_BitMap_1};

	VPL_ExtField _PrinterScalingStatus_1 = { "oScalingFactors",0,4,kStructureType,"NULL",0,0,"Point",NULL};
	VPL_ExtStructure _PrinterScalingStatus_S = {"PrinterScalingStatus",&_PrinterScalingStatus_1};

	VPL_ExtField _PrinterFontStatus_3 = { "iStyle",6,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _PrinterFontStatus_2 = { "iFondID",4,2,kIntType,"NULL",0,0,"short",&_PrinterFontStatus_3};
	VPL_ExtField _PrinterFontStatus_1 = { "oResult",0,4,kIntType,"NULL",0,0,"long int",&_PrinterFontStatus_2};
	VPL_ExtStructure _PrinterFontStatus_S = {"PrinterFontStatus",&_PrinterFontStatus_1};

	VPL_ExtField _Pattern_1 = { "pat",0,8,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtStructure _Pattern_S = {"Pattern",&_Pattern_1};

	VPL_ExtField _FontInfo_4 = { "leading",6,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _FontInfo_3 = { "widMax",4,2,kIntType,"NULL",0,0,"short",&_FontInfo_4};
	VPL_ExtField _FontInfo_2 = { "descent",2,2,kIntType,"NULL",0,0,"short",&_FontInfo_3};
	VPL_ExtField _FontInfo_1 = { "ascent",0,2,kIntType,"NULL",0,0,"short",&_FontInfo_2};
	VPL_ExtStructure _FontInfo_S = {"FontInfo",&_FontInfo_1};

	VPL_ExtField _1397_2 = { "trailer",24,8,kStructureType,"NULL",0,0,"1392",NULL};
	VPL_ExtField _1397_1 = { "header",0,24,kStructureType,"NULL",0,0,"1390",&_1397_2};
	VPL_ExtStructure _1397_S = {"1397",&_1397_1};

	VPL_ExtField _1396_1 = { "header",0,24,kStructureType,"NULL",0,0,"1390",NULL};
	VPL_ExtStructure _1396_S = {"1396",&_1396_1};

	VPL_ExtField _1395_4 = { "msgh_sender",16,8,kStructureType,"NULL",0,0,"1394",NULL};
	VPL_ExtField _1395_3 = { "msgh_seqno",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1395_4};
	VPL_ExtField _1395_2 = { "msgh_trailer_size",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1395_3};
	VPL_ExtField _1395_1 = { "msgh_trailer_type",0,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1395_2};
	VPL_ExtStructure _1395_S = {"1395",&_1395_1};

	VPL_ExtField _1394_1 = { "val",0,8,kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtStructure _1394_S = {"1394",&_1394_1};

	VPL_ExtField _1393_3 = { "msgh_seqno",8,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _1393_2 = { "msgh_trailer_size",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1393_3};
	VPL_ExtField _1393_1 = { "msgh_trailer_type",0,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1393_2};
	VPL_ExtStructure _1393_S = {"1393",&_1393_1};

	VPL_ExtField _1392_2 = { "msgh_trailer_size",4,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _1392_1 = { "msgh_trailer_type",0,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1392_2};
	VPL_ExtStructure _1392_S = {"1392",&_1392_1};

	VPL_ExtField _1391_2 = { "body",24,4,kStructureType,"NULL",0,0,"1389",NULL};
	VPL_ExtField _1391_1 = { "header",0,24,kStructureType,"NULL",0,0,"1390",&_1391_2};
	VPL_ExtStructure _1391_S = {"1391",&_1391_1};

	VPL_ExtField _1390_6 = { "msgh_id",20,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _1390_5 = { "msgh_reserved",16,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1390_6};
	VPL_ExtField _1390_4 = { "msgh_local_port",12,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1390_5};
	VPL_ExtField _1390_3 = { "msgh_remote_port",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1390_4};
	VPL_ExtField _1390_2 = { "msgh_size",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1390_3};
	VPL_ExtField _1390_1 = { "msgh_bits",0,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1390_2};
	VPL_ExtStructure _1390_S = {"1390",&_1390_1};

	VPL_ExtField _1389_1 = { "msgh_descriptor_count",0,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtStructure _1389_S = {"1389",&_1389_1};

	VPL_ExtField _1387_6 = { "type",8,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _1387_5 = { "disposition",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1387_6};
	VPL_ExtField _1387_4 = { "copy",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1387_5};
	VPL_ExtField _1387_3 = { "deallocate",8,4,kIntType,"NULL",0,0,"int",&_1387_4};
	VPL_ExtField _1387_2 = { "count",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1387_3};
	VPL_ExtField _1387_1 = { "address",0,4,kPointerType,"void",1,0,"T*",&_1387_2};
	VPL_ExtStructure _1387_S = {"1387",&_1387_1};

	VPL_ExtField _1386_6 = { "type",8,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _1386_5 = { "pad1",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1386_6};
	VPL_ExtField _1386_4 = { "copy",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1386_5};
	VPL_ExtField _1386_3 = { "deallocate",8,4,kIntType,"NULL",0,0,"int",&_1386_4};
	VPL_ExtField _1386_2 = { "size",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1386_3};
	VPL_ExtField _1386_1 = { "address",0,4,kPointerType,"void",1,0,"T*",&_1386_2};
	VPL_ExtStructure _1386_S = {"1386",&_1386_1};

	VPL_ExtField _1385_5 = { "type",8,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _1385_4 = { "disposition",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1385_5};
	VPL_ExtField _1385_3 = { "pad2",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1385_4};
	VPL_ExtField _1385_2 = { "pad1",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1385_3};
	VPL_ExtField _1385_1 = { "name",0,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1385_2};
	VPL_ExtStructure _1385_S = {"1385",&_1385_1};

	VPL_ExtField _1384_4 = { "type",8,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _1384_3 = { "pad3",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1384_4};
	VPL_ExtField _1384_2 = { "pad2",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_1384_3};
	VPL_ExtField _1384_1 = { "pad1",0,4,kPointerType,"void",1,0,"T*",&_1384_2};
	VPL_ExtStructure _1384_S = {"1384",&_1384_1};

	VPL_ExtStructure _OpaqueAEStreamRef_S = {"OpaqueAEStreamRef",NULL};

	VPL_ExtField _AEBuildError_2 = { "fErrorPos",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _AEBuildError_1 = { "fError",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_AEBuildError_2};
	VPL_ExtStructure _AEBuildError_S = {"AEBuildError",&_AEBuildError_1};

	VPL_ExtField _TScriptingSizeResource_7 = { "maxHeapSize",22,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TScriptingSizeResource_6 = { "preferredHeapSize",18,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TScriptingSizeResource_7};
	VPL_ExtField _TScriptingSizeResource_5 = { "minHeapSize",14,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TScriptingSizeResource_6};
	VPL_ExtField _TScriptingSizeResource_4 = { "maxStackSize",10,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TScriptingSizeResource_5};
	VPL_ExtField _TScriptingSizeResource_3 = { "preferredStackSize",6,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TScriptingSizeResource_4};
	VPL_ExtField _TScriptingSizeResource_2 = { "minStackSize",2,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TScriptingSizeResource_3};
	VPL_ExtField _TScriptingSizeResource_1 = { "scriptingSizeFlags",0,2,kIntType,"NULL",0,0,"short",&_TScriptingSizeResource_2};
	VPL_ExtStructure _TScriptingSizeResource_S = {"TScriptingSizeResource",&_TScriptingSizeResource_1};

	VPL_ExtField _IntlText_3 = { "theText",4,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _IntlText_2 = { "theLangCode",2,2,kIntType,"char",0,1,"short",&_IntlText_3};
	VPL_ExtField _IntlText_1 = { "theScriptCode",0,2,kIntType,"char",0,1,"short",&_IntlText_2};
	VPL_ExtStructure _IntlText_S = {"IntlText",&_IntlText_1};

	VPL_ExtField _WritingCode_2 = { "theLangCode",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _WritingCode_1 = { "theScriptCode",0,2,kIntType,"NULL",0,0,"short",&_WritingCode_2};
	VPL_ExtStructure _WritingCode_S = {"WritingCode",&_WritingCode_1};

	VPL_ExtField _OffsetArray_2 = { "fOffset",2,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _OffsetArray_1 = { "fNumOfOffsets",0,2,kIntType,"long int",0,4,"short",&_OffsetArray_2};
	VPL_ExtStructure _OffsetArray_S = {"OffsetArray",&_OffsetArray_1};

	VPL_ExtField _TextRangeArray_2 = { "fRange",2,10,kPointerType,"TextRange",0,10,NULL,NULL};
	VPL_ExtField _TextRangeArray_1 = { "fNumOfRanges",0,2,kIntType,"TextRange",0,10,"short",&_TextRangeArray_2};
	VPL_ExtStructure _TextRangeArray_S = {"TextRangeArray",&_TextRangeArray_1};

	VPL_ExtField _TextRange_3 = { "fHiliteStyle",8,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _TextRange_2 = { "fEnd",4,4,kIntType,"NULL",0,0,"long int",&_TextRange_3};
	VPL_ExtField _TextRange_1 = { "fStart",0,4,kIntType,"NULL",0,0,"long int",&_TextRange_2};
	VPL_ExtStructure _TextRange_S = {"TextRange",&_TextRange_1};

	VPL_ExtField _ccntTokenRecord_2 = { "token",4,8,kStructureType,"NULL",0,0,"AEDesc",NULL};
	VPL_ExtField _ccntTokenRecord_1 = { "tokenClass",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ccntTokenRecord_2};
	VPL_ExtStructure _ccntTokenRecord_S = {"ccntTokenRecord",&_ccntTokenRecord_1};

	VPL_ExtField _AEKeyDesc_2 = { "descContent",4,8,kStructureType,"NULL",0,0,"AEDesc",NULL};
	VPL_ExtField _AEKeyDesc_1 = { "descKey",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_AEKeyDesc_2};
	VPL_ExtStructure _AEKeyDesc_S = {"AEKeyDesc",&_AEKeyDesc_1};

	VPL_ExtField _AEDesc_2 = { "dataHandle",4,4,kPointerType,"OpaqueAEDataStorageType",2,0,"T*",NULL};
	VPL_ExtField _AEDesc_1 = { "descriptorType",0,4,kUnsignedType,"OpaqueAEDataStorageType",2,0,"unsigned long",&_AEDesc_2};
	VPL_ExtStructure _AEDesc_S = {"AEDesc",&_AEDesc_1};

	VPL_ExtStructure _OpaqueAEDataStorageType_S = {"OpaqueAEDataStorageType",NULL};

	VPL_ExtField _CMDeviceProfileArray_2 = { "profiles",4,274,kPointerType,"CMDeviceProfileInfo",0,274,NULL,NULL};
	VPL_ExtField _CMDeviceProfileArray_1 = { "profileCount",0,4,kUnsignedType,"CMDeviceProfileInfo",0,274,"unsigned long",&_CMDeviceProfileArray_2};
	VPL_ExtStructure _CMDeviceProfileArray_S = {"CMDeviceProfileArray",&_CMDeviceProfileArray_1};

	VPL_ExtField _NCMDeviceProfileInfo_6 = { "reserved",278,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _NCMDeviceProfileInfo_5 = { "profileScope",270,8,kStructureType,"NULL",0,0,"CMDeviceScope",&_NCMDeviceProfileInfo_6};
	VPL_ExtField _NCMDeviceProfileInfo_4 = { "profileName",266,4,kPointerType,"__CFDictionary",1,0,"T*",&_NCMDeviceProfileInfo_5};
	VPL_ExtField _NCMDeviceProfileInfo_3 = { "profileLoc",8,258,kStructureType,"__CFDictionary",1,0,"CMProfileLocation",&_NCMDeviceProfileInfo_4};
	VPL_ExtField _NCMDeviceProfileInfo_2 = { "profileID",4,4,kUnsignedType,"__CFDictionary",1,0,"unsigned long",&_NCMDeviceProfileInfo_3};
	VPL_ExtField _NCMDeviceProfileInfo_1 = { "dataVersion",0,4,kUnsignedType,"__CFDictionary",1,0,"unsigned long",&_NCMDeviceProfileInfo_2};
	VPL_ExtStructure _NCMDeviceProfileInfo_S = {"NCMDeviceProfileInfo",&_NCMDeviceProfileInfo_1};

	VPL_ExtField _CMDeviceProfileInfo_5 = { "reserved",270,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMDeviceProfileInfo_4 = { "profileName",266,4,kPointerType,"__CFDictionary",1,0,"T*",&_CMDeviceProfileInfo_5};
	VPL_ExtField _CMDeviceProfileInfo_3 = { "profileLoc",8,258,kStructureType,"__CFDictionary",1,0,"CMProfileLocation",&_CMDeviceProfileInfo_4};
	VPL_ExtField _CMDeviceProfileInfo_2 = { "profileID",4,4,kUnsignedType,"__CFDictionary",1,0,"unsigned long",&_CMDeviceProfileInfo_3};
	VPL_ExtField _CMDeviceProfileInfo_1 = { "dataVersion",0,4,kUnsignedType,"__CFDictionary",1,0,"unsigned long",&_CMDeviceProfileInfo_2};
	VPL_ExtStructure _CMDeviceProfileInfo_S = {"CMDeviceProfileInfo",&_CMDeviceProfileInfo_1};

	VPL_ExtField _CMDeviceInfo_9 = { "reserved",36,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMDeviceInfo_8 = { "profileCount",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMDeviceInfo_9};
	VPL_ExtField _CMDeviceInfo_7 = { "deviceName",28,4,kPointerType,"__CFDictionary",2,0,"T*",&_CMDeviceInfo_8};
	VPL_ExtField _CMDeviceInfo_6 = { "defaultProfileID",24,4,kUnsignedType,"__CFDictionary",2,0,"unsigned long",&_CMDeviceInfo_7};
	VPL_ExtField _CMDeviceInfo_5 = { "deviceState",20,4,kUnsignedType,"__CFDictionary",2,0,"unsigned long",&_CMDeviceInfo_6};
	VPL_ExtField _CMDeviceInfo_4 = { "deviceScope",12,8,kStructureType,"__CFDictionary",2,0,"CMDeviceScope",&_CMDeviceInfo_5};
	VPL_ExtField _CMDeviceInfo_3 = { "deviceID",8,4,kUnsignedType,"__CFDictionary",2,0,"unsigned long",&_CMDeviceInfo_4};
	VPL_ExtField _CMDeviceInfo_2 = { "deviceClass",4,4,kUnsignedType,"__CFDictionary",2,0,"unsigned long",&_CMDeviceInfo_3};
	VPL_ExtField _CMDeviceInfo_1 = { "dataVersion",0,4,kUnsignedType,"__CFDictionary",2,0,"unsigned long",&_CMDeviceInfo_2};
	VPL_ExtStructure _CMDeviceInfo_S = {"CMDeviceInfo",&_CMDeviceInfo_1};

	VPL_ExtField _CMDeviceScope_2 = { "deviceHost",4,4,kPointerType,"__CFString",1,0,"T*",NULL};
	VPL_ExtField _CMDeviceScope_1 = { "deviceUser",0,4,kPointerType,"__CFString",1,0,"T*",&_CMDeviceScope_2};
	VPL_ExtStructure _CMDeviceScope_S = {"CMDeviceScope",&_CMDeviceScope_1};

	VPL_ExtField _CMProfileIterateData_10 = { "digest",664,4,kPointerType,"unsigned char",2,1,"T*",NULL};
	VPL_ExtField _CMProfileIterateData_9 = { "makeAndModel",660,4,kPointerType,"CMMakeAndModel",1,32,"T*",&_CMProfileIterateData_10};
	VPL_ExtField _CMProfileIterateData_8 = { "asciiName",656,4,kPointerType,"unsigned char",1,1,"T*",&_CMProfileIterateData_9};
	VPL_ExtField _CMProfileIterateData_7 = { "uniCodeName",652,4,kPointerType,"unsigned short",1,2,"T*",&_CMProfileIterateData_8};
	VPL_ExtField _CMProfileIterateData_6 = { "uniCodeNameCount",648,4,kUnsignedType,"unsigned short",1,2,"unsigned long",&_CMProfileIterateData_7};
	VPL_ExtField _CMProfileIterateData_5 = { "location",390,258,kStructureType,"unsigned short",1,2,"CMProfileLocation",&_CMProfileIterateData_6};
	VPL_ExtField _CMProfileIterateData_4 = { "name",134,256,kPointerType,"unsigned char",0,1,NULL,&_CMProfileIterateData_5};
	VPL_ExtField _CMProfileIterateData_3 = { "code",132,2,kIntType,"unsigned char",0,1,"short",&_CMProfileIterateData_4};
	VPL_ExtField _CMProfileIterateData_2 = { "header",4,128,kStructureType,"unsigned char",0,1,"CM2Header",&_CMProfileIterateData_3};
	VPL_ExtField _CMProfileIterateData_1 = { "dataVersion",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMProfileIterateData_2};
	VPL_ExtStructure _CMProfileIterateData_S = {"CMProfileIterateData",&_CMProfileIterateData_1};

	VPL_ExtField _CMProfileLocation_2 = { "u",2,256,kStructureType,"NULL",0,0,"CMProfLoc",NULL};
	VPL_ExtField _CMProfileLocation_1 = { "locType",0,2,kIntType,"NULL",0,0,"short",&_CMProfileLocation_2};
	VPL_ExtStructure _CMProfileLocation_S = {"CMProfileLocation",&_CMProfileLocation_1};

	VPL_ExtField _CMBufferLocation_2 = { "size",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMBufferLocation_1 = { "buffer",0,4,kPointerType,"void",1,0,"T*",&_CMBufferLocation_2};
	VPL_ExtStructure _CMBufferLocation_S = {"CMBufferLocation",&_CMBufferLocation_1};

	VPL_ExtField _CMPathLocation_1 = { "path",0,256,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtStructure _CMPathLocation_S = {"CMPathLocation",&_CMPathLocation_1};

	VPL_ExtField _CMProcedureLocation_2 = { "refCon",4,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _CMProcedureLocation_1 = { "proc",0,4,kPointerType,"short",1,2,"T*",&_CMProcedureLocation_2};
	VPL_ExtStructure _CMProcedureLocation_S = {"CMProcedureLocation",&_CMProcedureLocation_1};

	VPL_ExtField _CMPtrLocation_1 = { "p",0,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtStructure _CMPtrLocation_S = {"CMPtrLocation",&_CMPtrLocation_1};

	VPL_ExtField _CMHandleLocation_1 = { "h",0,4,kPointerType,"char",2,1,"T*",NULL};
	VPL_ExtStructure _CMHandleLocation_S = {"CMHandleLocation",&_CMHandleLocation_1};

	VPL_ExtField _CMFileLocation_1 = { "spec",0,70,kStructureType,"NULL",0,0,"FSSpec",NULL};
	VPL_ExtStructure _CMFileLocation_S = {"CMFileLocation",&_CMFileLocation_1};

	VPL_ExtField _CMBitmap_8 = { "user2",28,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CMBitmap_7 = { "user1",24,4,kIntType,"NULL",0,0,"long int",&_CMBitmap_8};
	VPL_ExtField _CMBitmap_6 = { "space",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMBitmap_7};
	VPL_ExtField _CMBitmap_5 = { "pixelSize",16,4,kIntType,"NULL",0,0,"long int",&_CMBitmap_6};
	VPL_ExtField _CMBitmap_4 = { "rowBytes",12,4,kIntType,"NULL",0,0,"long int",&_CMBitmap_5};
	VPL_ExtField _CMBitmap_3 = { "height",8,4,kIntType,"NULL",0,0,"long int",&_CMBitmap_4};
	VPL_ExtField _CMBitmap_2 = { "width",4,4,kIntType,"NULL",0,0,"long int",&_CMBitmap_3};
	VPL_ExtField _CMBitmap_1 = { "image",0,4,kPointerType,"char",1,1,"T*",&_CMBitmap_2};
	VPL_ExtStructure _CMBitmap_S = {"CMBitmap",&_CMBitmap_1};

	VPL_ExtField _CMProfileIdentifier_4 = { "ASCIIProfileDescription",144,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CMProfileIdentifier_3 = { "ASCIIProfileDescriptionLen",140,4,kUnsignedType,"char",0,1,"unsigned long",&_CMProfileIdentifier_4};
	VPL_ExtField _CMProfileIdentifier_2 = { "calibrationDate",128,12,kStructureType,"char",0,1,"CMDateTime",&_CMProfileIdentifier_3};
	VPL_ExtField _CMProfileIdentifier_1 = { "profileHeader",0,128,kStructureType,"char",0,1,"CM2Header",&_CMProfileIdentifier_2};
	VPL_ExtStructure _CMProfileIdentifier_S = {"CMProfileIdentifier",&_CMProfileIdentifier_1};

	VPL_ExtField _CMCWInfoRecord_2 = { "cmmInfo",4,16,kPointerType,"CMMInfoRecord",0,8,NULL,NULL};
	VPL_ExtField _CMCWInfoRecord_1 = { "cmmCount",0,4,kUnsignedType,"CMMInfoRecord",0,8,"unsigned long",&_CMCWInfoRecord_2};
	VPL_ExtStructure _CMCWInfoRecord_S = {"CMCWInfoRecord",&_CMCWInfoRecord_1};

	VPL_ExtField _CMMInfoRecord_2 = { "CMMVersion",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CMMInfoRecord_1 = { "CMMType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMInfoRecord_2};
	VPL_ExtStructure _CMMInfoRecord_S = {"CMMInfoRecord",&_CMMInfoRecord_1};

	VPL_ExtField _CMMInfo_10 = { "UniCodeDesc",376,512,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _CMMInfo_9 = { "UniCodeDescCount",372,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMMInfo_10};
	VPL_ExtField _CMMInfo_8 = { "UniCodeName",308,64,kPointerType,"unsigned short",0,2,NULL,&_CMMInfo_9};
	VPL_ExtField _CMMInfo_7 = { "UniCodeNameCount",304,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMMInfo_8};
	VPL_ExtField _CMMInfo_6 = { "ASCIIDesc",48,256,kPointerType,"unsigned char",0,1,NULL,&_CMMInfo_7};
	VPL_ExtField _CMMInfo_5 = { "ASCIIName",16,32,kPointerType,"unsigned char",0,1,NULL,&_CMMInfo_6};
	VPL_ExtField _CMMInfo_4 = { "CMMVersion",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMInfo_5};
	VPL_ExtField _CMMInfo_3 = { "CMMMfr",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMInfo_4};
	VPL_ExtField _CMMInfo_2 = { "CMMType",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMInfo_3};
	VPL_ExtField _CMMInfo_1 = { "dataSize",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMInfo_2};
	VPL_ExtStructure _CMMInfo_S = {"CMMInfo",&_CMMInfo_1};

	VPL_ExtField _CMSearchRecord_10 = { "filter",40,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _CMSearchRecord_9 = { "searchMask",36,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_CMSearchRecord_10};
	VPL_ExtField _CMSearchRecord_8 = { "profileFlags",32,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_CMSearchRecord_9};
	VPL_ExtField _CMSearchRecord_7 = { "deviceAttributes",24,8,kPointerType,"unsigned long",0,4,NULL,&_CMSearchRecord_8};
	VPL_ExtField _CMSearchRecord_6 = { "deviceModel",20,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMSearchRecord_7};
	VPL_ExtField _CMSearchRecord_5 = { "deviceManufacturer",16,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMSearchRecord_6};
	VPL_ExtField _CMSearchRecord_4 = { "profileConnectionSpace",12,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMSearchRecord_5};
	VPL_ExtField _CMSearchRecord_3 = { "dataColorSpace",8,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMSearchRecord_4};
	VPL_ExtField _CMSearchRecord_2 = { "profileClass",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMSearchRecord_3};
	VPL_ExtField _CMSearchRecord_1 = { "CMMType",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMSearchRecord_2};
	VPL_ExtStructure _CMSearchRecord_S = {"CMSearchRecord",&_CMSearchRecord_1};

	VPL_ExtField _CMProfileSearchRecord_3 = { "reserved",68,8,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _CMProfileSearchRecord_2 = { "fieldMask",64,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMProfileSearchRecord_3};
	VPL_ExtField _CMProfileSearchRecord_1 = { "header",0,64,kStructureType,"unsigned long",0,4,"CMHeader",&_CMProfileSearchRecord_2};
	VPL_ExtStructure _CMProfileSearchRecord_S = {"CMProfileSearchRecord",&_CMProfileSearchRecord_1};

	VPL_ExtField _CMNamedColor_1 = { "namedColorIndex",0,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtStructure _CMNamedColor_S = {"CMNamedColor",&_CMNamedColor_1};

	VPL_ExtField _CMMultichannel8Color_1 = { "components",0,8,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtStructure _CMMultichannel8Color_S = {"CMMultichannel8Color",&_CMMultichannel8Color_1};

	VPL_ExtField _CMMultichannel7Color_1 = { "components",0,7,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtStructure _CMMultichannel7Color_S = {"CMMultichannel7Color",&_CMMultichannel7Color_1};

	VPL_ExtField _CMMultichannel6Color_1 = { "components",0,6,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtStructure _CMMultichannel6Color_S = {"CMMultichannel6Color",&_CMMultichannel6Color_1};

	VPL_ExtField _CMMultichannel5Color_1 = { "components",0,5,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtStructure _CMMultichannel5Color_S = {"CMMultichannel5Color",&_CMMultichannel5Color_1};

	VPL_ExtField _CMGrayColor_1 = { "gray",0,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtStructure _CMGrayColor_S = {"CMGrayColor",&_CMGrayColor_1};

	VPL_ExtField _CMYxyColor_3 = { "y",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMYxyColor_2 = { "x",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMYxyColor_3};
	VPL_ExtField _CMYxyColor_1 = { "capY",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMYxyColor_2};
	VPL_ExtStructure _CMYxyColor_S = {"CMYxyColor",&_CMYxyColor_1};

	VPL_ExtField _CMLuvColor_3 = { "v",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMLuvColor_2 = { "u",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMLuvColor_3};
	VPL_ExtField _CMLuvColor_1 = { "L",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMLuvColor_2};
	VPL_ExtStructure _CMLuvColor_S = {"CMLuvColor",&_CMLuvColor_1};

	VPL_ExtField _CMLabColor_3 = { "b",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMLabColor_2 = { "a",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMLabColor_3};
	VPL_ExtField _CMLabColor_1 = { "L",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMLabColor_2};
	VPL_ExtStructure _CMLabColor_S = {"CMLabColor",&_CMLabColor_1};

	VPL_ExtField _CMHSVColor_3 = { "value",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMHSVColor_2 = { "saturation",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMHSVColor_3};
	VPL_ExtField _CMHSVColor_1 = { "hue",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMHSVColor_2};
	VPL_ExtStructure _CMHSVColor_S = {"CMHSVColor",&_CMHSVColor_1};

	VPL_ExtField _CMHLSColor_3 = { "saturation",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMHLSColor_2 = { "lightness",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMHLSColor_3};
	VPL_ExtField _CMHLSColor_1 = { "hue",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMHLSColor_2};
	VPL_ExtStructure _CMHLSColor_S = {"CMHLSColor",&_CMHLSColor_1};

	VPL_ExtField _CMCMYColor_3 = { "yellow",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMCMYColor_2 = { "magenta",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMCMYColor_3};
	VPL_ExtField _CMCMYColor_1 = { "cyan",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMCMYColor_2};
	VPL_ExtStructure _CMCMYColor_S = {"CMCMYColor",&_CMCMYColor_1};

	VPL_ExtField _CMCMYKColor_4 = { "black",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMCMYKColor_3 = { "yellow",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMCMYKColor_4};
	VPL_ExtField _CMCMYKColor_2 = { "magenta",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMCMYKColor_3};
	VPL_ExtField _CMCMYKColor_1 = { "cyan",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMCMYKColor_2};
	VPL_ExtStructure _CMCMYKColor_S = {"CMCMYKColor",&_CMCMYKColor_1};

	VPL_ExtField _CMRGBColor_3 = { "blue",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMRGBColor_2 = { "green",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMRGBColor_3};
	VPL_ExtField _CMRGBColor_1 = { "red",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMRGBColor_2};
	VPL_ExtStructure _CMRGBColor_S = {"CMRGBColor",&_CMRGBColor_1};

	VPL_ExtField _NCMConcatProfileSet_5 = { "profileSpecs",16,12,kPointerType,"NCMConcatProfileSpec",0,12,NULL,NULL};
	VPL_ExtField _NCMConcatProfileSet_4 = { "profileCount",12,4,kUnsignedType,"NCMConcatProfileSpec",0,12,"unsigned long",&_NCMConcatProfileSet_5};
	VPL_ExtField _NCMConcatProfileSet_3 = { "flagsMask",8,4,kUnsignedType,"NCMConcatProfileSpec",0,12,"unsigned long",&_NCMConcatProfileSet_4};
	VPL_ExtField _NCMConcatProfileSet_2 = { "flags",4,4,kUnsignedType,"NCMConcatProfileSpec",0,12,"unsigned long",&_NCMConcatProfileSet_3};
	VPL_ExtField _NCMConcatProfileSet_1 = { "cmm",0,4,kUnsignedType,"NCMConcatProfileSpec",0,12,"unsigned long",&_NCMConcatProfileSet_2};
	VPL_ExtStructure _NCMConcatProfileSet_S = {"NCMConcatProfileSet",&_NCMConcatProfileSet_1};

	VPL_ExtField _NCMConcatProfileSpec_3 = { "profile",8,4,kPointerType,"OpaqueCMProfileRef",1,0,"T*",NULL};
	VPL_ExtField _NCMConcatProfileSpec_2 = { "transformTag",4,4,kUnsignedType,"OpaqueCMProfileRef",1,0,"unsigned long",&_NCMConcatProfileSpec_3};
	VPL_ExtField _NCMConcatProfileSpec_1 = { "renderingIntent",0,4,kUnsignedType,"OpaqueCMProfileRef",1,0,"unsigned long",&_NCMConcatProfileSpec_2};
	VPL_ExtStructure _NCMConcatProfileSpec_S = {"NCMConcatProfileSpec",&_NCMConcatProfileSpec_1};

	VPL_ExtField _CMConcatProfileSet_3 = { "profileSet",4,4,kPointerType,"OpaqueCMProfileRef",1,0,NULL,NULL};
	VPL_ExtField _CMConcatProfileSet_2 = { "count",2,2,kUnsignedType,"OpaqueCMProfileRef",1,0,"unsigned short",&_CMConcatProfileSet_3};
	VPL_ExtField _CMConcatProfileSet_1 = { "keyIndex",0,2,kUnsignedType,"OpaqueCMProfileRef",1,0,"unsigned short",&_CMConcatProfileSet_2};
	VPL_ExtStructure _CMConcatProfileSet_S = {"CMConcatProfileSet",&_CMConcatProfileSet_1};

	VPL_ExtField _CMProfile_5 = { "customData",186,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CMProfile_4 = { "profileName",120,66,kStructureType,"char",0,1,"CMIString",&_CMProfile_5};
	VPL_ExtField _CMProfile_3 = { "response",100,20,kStructureType,"char",0,1,"CMProfileResponse",&_CMProfile_4};
	VPL_ExtField _CMProfile_2 = { "profile",64,36,kStructureType,"char",0,1,"CMProfileChromaticities",&_CMProfile_3};
	VPL_ExtField _CMProfile_1 = { "header",0,64,kStructureType,"char",0,1,"CMHeader",&_CMProfile_2};
	VPL_ExtStructure _CMProfile_S = {"CMProfile",&_CMProfile_1};

	VPL_ExtField _CMProfileResponse_2 = { "data",18,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _CMProfileResponse_1 = { "counts",0,18,kPointerType,"unsigned short",0,2,NULL,&_CMProfileResponse_2};
	VPL_ExtStructure _CMProfileResponse_S = {"CMProfileResponse",&_CMProfileResponse_1};

	VPL_ExtField _CMProfileChromaticities_6 = { "yellow",30,6,kStructureType,"NULL",0,0,"CMXYZColor",NULL};
	VPL_ExtField _CMProfileChromaticities_5 = { "magenta",24,6,kStructureType,"NULL",0,0,"CMXYZColor",&_CMProfileChromaticities_6};
	VPL_ExtField _CMProfileChromaticities_4 = { "cyan",18,6,kStructureType,"NULL",0,0,"CMXYZColor",&_CMProfileChromaticities_5};
	VPL_ExtField _CMProfileChromaticities_3 = { "blue",12,6,kStructureType,"NULL",0,0,"CMXYZColor",&_CMProfileChromaticities_4};
	VPL_ExtField _CMProfileChromaticities_2 = { "green",6,6,kStructureType,"NULL",0,0,"CMXYZColor",&_CMProfileChromaticities_3};
	VPL_ExtField _CMProfileChromaticities_1 = { "red",0,6,kStructureType,"NULL",0,0,"CMXYZColor",&_CMProfileChromaticities_2};
	VPL_ExtStructure _CMProfileChromaticities_S = {"CMProfileChromaticities",&_CMProfileChromaticities_1};

	VPL_ExtField _CMHeader_14 = { "black",58,6,kStructureType,"NULL",0,0,"CMXYZColor",NULL};
	VPL_ExtField _CMHeader_13 = { "white",52,6,kStructureType,"NULL",0,0,"CMXYZColor",&_CMHeader_14};
	VPL_ExtField _CMHeader_12 = { "options",48,4,kIntType,"NULL",0,0,"long int",&_CMHeader_13};
	VPL_ExtField _CMHeader_11 = { "flags",44,4,kIntType,"NULL",0,0,"long int",&_CMHeader_12};
	VPL_ExtField _CMHeader_10 = { "customDataOffset",40,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMHeader_11};
	VPL_ExtField _CMHeader_9 = { "profileNameOffset",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMHeader_10};
	VPL_ExtField _CMHeader_8 = { "deviceAttributes",28,8,kPointerType,"unsigned long",0,4,NULL,&_CMHeader_9};
	VPL_ExtField _CMHeader_7 = { "deviceModel",24,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMHeader_8};
	VPL_ExtField _CMHeader_6 = { "deviceManufacturer",20,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMHeader_7};
	VPL_ExtField _CMHeader_5 = { "deviceType",16,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMHeader_6};
	VPL_ExtField _CMHeader_4 = { "dataType",12,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMHeader_5};
	VPL_ExtField _CMHeader_3 = { "applProfileVersion",8,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMHeader_4};
	VPL_ExtField _CMHeader_2 = { "CMMType",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMHeader_3};
	VPL_ExtField _CMHeader_1 = { "size",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMHeader_2};
	VPL_ExtStructure _CMHeader_S = {"CMHeader",&_CMHeader_1};

	VPL_ExtField _CMIString_2 = { "theString",2,64,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CMIString_1 = { "theScript",0,2,kIntType,"unsigned char",0,1,"short",&_CMIString_2};
	VPL_ExtStructure _CMIString_S = {"CMIString",&_CMIString_1};

	VPL_ExtField _CMMultiLocalizedUniCodeType_4 = { "entrySize",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMMultiLocalizedUniCodeType_3 = { "entryCount",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMultiLocalizedUniCodeType_4};
	VPL_ExtField _CMMultiLocalizedUniCodeType_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMultiLocalizedUniCodeType_3};
	VPL_ExtField _CMMultiLocalizedUniCodeType_1 = { "typeDescriptor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMultiLocalizedUniCodeType_2};
	VPL_ExtStructure _CMMultiLocalizedUniCodeType_S = {"CMMultiLocalizedUniCodeType",&_CMMultiLocalizedUniCodeType_1};

	VPL_ExtField _CMMultiLocalizedUniCodeEntryRec_4 = { "textOffset",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMMultiLocalizedUniCodeEntryRec_3 = { "textLength",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMultiLocalizedUniCodeEntryRec_4};
	VPL_ExtField _CMMultiLocalizedUniCodeEntryRec_2 = { "regionCode",2,2,kPointerType,"char",0,1,NULL,&_CMMultiLocalizedUniCodeEntryRec_3};
	VPL_ExtField _CMMultiLocalizedUniCodeEntryRec_1 = { "languageCode",0,2,kPointerType,"char",0,1,NULL,&_CMMultiLocalizedUniCodeEntryRec_2};
	VPL_ExtStructure _CMMultiLocalizedUniCodeEntryRec_S = {"CMMultiLocalizedUniCodeEntryRec",&_CMMultiLocalizedUniCodeEntryRec_1};

	VPL_ExtField _CMMakeAndModelType_3 = { "makeAndModel",8,32,kStructureType,"NULL",0,0,"CMMakeAndModel",NULL};
	VPL_ExtField _CMMakeAndModelType_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModelType_3};
	VPL_ExtField _CMMakeAndModelType_1 = { "typeDescriptor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModelType_2};
	VPL_ExtStructure _CMMakeAndModelType_S = {"CMMakeAndModelType",&_CMMakeAndModelType_1};

	VPL_ExtField _CMMakeAndModel_8 = { "reserved4",28,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMMakeAndModel_7 = { "reserved3",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModel_8};
	VPL_ExtField _CMMakeAndModel_6 = { "reserved2",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModel_7};
	VPL_ExtField _CMMakeAndModel_5 = { "reserved1",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModel_6};
	VPL_ExtField _CMMakeAndModel_4 = { "manufactureDate",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModel_5};
	VPL_ExtField _CMMakeAndModel_3 = { "serialNumber",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModel_4};
	VPL_ExtField _CMMakeAndModel_2 = { "model",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModel_3};
	VPL_ExtField _CMMakeAndModel_1 = { "manufacturer",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMakeAndModel_2};
	VPL_ExtStructure _CMMakeAndModel_S = {"CMMakeAndModel",&_CMMakeAndModel_1};

	VPL_ExtField _CMVideoCardGammaType_3 = { "gamma",8,40,kStructureType,"NULL",0,0,"CMVideoCardGamma",NULL};
	VPL_ExtField _CMVideoCardGammaType_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMVideoCardGammaType_3};
	VPL_ExtField _CMVideoCardGammaType_1 = { "typeDescriptor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMVideoCardGammaType_2};
	VPL_ExtStructure _CMVideoCardGammaType_S = {"CMVideoCardGammaType",&_CMVideoCardGammaType_1};

	VPL_ExtField _CMVideoCardGamma_2 = { "u",4,36,kStructureType,"NULL",0,0,"1265",NULL};
	VPL_ExtField _CMVideoCardGamma_1 = { "tagType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMVideoCardGamma_2};
	VPL_ExtStructure _CMVideoCardGamma_S = {"CMVideoCardGamma",&_CMVideoCardGamma_1};

	VPL_ExtField _CMVideoCardGammaFormula_9 = { "blueMax",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CMVideoCardGammaFormula_8 = { "blueMin",28,4,kIntType,"NULL",0,0,"long int",&_CMVideoCardGammaFormula_9};
	VPL_ExtField _CMVideoCardGammaFormula_7 = { "blueGamma",24,4,kIntType,"NULL",0,0,"long int",&_CMVideoCardGammaFormula_8};
	VPL_ExtField _CMVideoCardGammaFormula_6 = { "greenMax",20,4,kIntType,"NULL",0,0,"long int",&_CMVideoCardGammaFormula_7};
	VPL_ExtField _CMVideoCardGammaFormula_5 = { "greenMin",16,4,kIntType,"NULL",0,0,"long int",&_CMVideoCardGammaFormula_6};
	VPL_ExtField _CMVideoCardGammaFormula_4 = { "greenGamma",12,4,kIntType,"NULL",0,0,"long int",&_CMVideoCardGammaFormula_5};
	VPL_ExtField _CMVideoCardGammaFormula_3 = { "redMax",8,4,kIntType,"NULL",0,0,"long int",&_CMVideoCardGammaFormula_4};
	VPL_ExtField _CMVideoCardGammaFormula_2 = { "redMin",4,4,kIntType,"NULL",0,0,"long int",&_CMVideoCardGammaFormula_3};
	VPL_ExtField _CMVideoCardGammaFormula_1 = { "redGamma",0,4,kIntType,"NULL",0,0,"long int",&_CMVideoCardGammaFormula_2};
	VPL_ExtStructure _CMVideoCardGammaFormula_S = {"CMVideoCardGammaFormula",&_CMVideoCardGammaFormula_1};

	VPL_ExtField _CMVideoCardGammaTable_4 = { "data",6,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CMVideoCardGammaTable_3 = { "entrySize",4,2,kUnsignedType,"char",0,1,"unsigned short",&_CMVideoCardGammaTable_4};
	VPL_ExtField _CMVideoCardGammaTable_2 = { "entryCount",2,2,kUnsignedType,"char",0,1,"unsigned short",&_CMVideoCardGammaTable_3};
	VPL_ExtField _CMVideoCardGammaTable_1 = { "channels",0,2,kUnsignedType,"char",0,1,"unsigned short",&_CMVideoCardGammaTable_2};
	VPL_ExtStructure _CMVideoCardGammaTable_S = {"CMVideoCardGammaTable",&_CMVideoCardGammaTable_1};

	VPL_ExtField _CMPS2CRDVMSizeType_4 = { "intentCRD",12,8,kPointerType,"CMIntentCRDVMSize",0,8,NULL,NULL};
	VPL_ExtField _CMPS2CRDVMSizeType_3 = { "count",8,4,kUnsignedType,"CMIntentCRDVMSize",0,8,"unsigned long",&_CMPS2CRDVMSizeType_4};
	VPL_ExtField _CMPS2CRDVMSizeType_2 = { "reserved",4,4,kUnsignedType,"CMIntentCRDVMSize",0,8,"unsigned long",&_CMPS2CRDVMSizeType_3};
	VPL_ExtField _CMPS2CRDVMSizeType_1 = { "typeDescriptor",0,4,kUnsignedType,"CMIntentCRDVMSize",0,8,"unsigned long",&_CMPS2CRDVMSizeType_2};
	VPL_ExtStructure _CMPS2CRDVMSizeType_S = {"CMPS2CRDVMSizeType",&_CMPS2CRDVMSizeType_1};

	VPL_ExtField _CMIntentCRDVMSize_2 = { "VMSize",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMIntentCRDVMSize_1 = { "renderingIntent",0,4,kIntType,"NULL",0,0,"long int",&_CMIntentCRDVMSize_2};
	VPL_ExtStructure _CMIntentCRDVMSize_S = {"CMIntentCRDVMSize",&_CMIntentCRDVMSize_1};

	VPL_ExtField _CMUcrBgType_4 = { "ucrValues",12,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _CMUcrBgType_3 = { "ucrCount",8,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMUcrBgType_4};
	VPL_ExtField _CMUcrBgType_2 = { "reserved",4,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMUcrBgType_3};
	VPL_ExtField _CMUcrBgType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMUcrBgType_2};
	VPL_ExtStructure _CMUcrBgType_S = {"CMUcrBgType",&_CMUcrBgType_1};

	VPL_ExtField _CMProfileSequenceDescType_4 = { "data",12,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CMProfileSequenceDescType_3 = { "count",8,4,kUnsignedType,"char",0,1,"unsigned long",&_CMProfileSequenceDescType_4};
	VPL_ExtField _CMProfileSequenceDescType_2 = { "reserved",4,4,kUnsignedType,"char",0,1,"unsigned long",&_CMProfileSequenceDescType_3};
	VPL_ExtField _CMProfileSequenceDescType_1 = { "typeDescriptor",0,4,kUnsignedType,"char",0,1,"unsigned long",&_CMProfileSequenceDescType_2};
	VPL_ExtStructure _CMProfileSequenceDescType_S = {"CMProfileSequenceDescType",&_CMProfileSequenceDescType_1};

	VPL_ExtField _CMXYZType_3 = { "XYZ",8,12,kPointerType,"CMFixedXYZColor",0,12,NULL,NULL};
	VPL_ExtField _CMXYZType_2 = { "reserved",4,4,kUnsignedType,"CMFixedXYZColor",0,12,"unsigned long",&_CMXYZType_3};
	VPL_ExtField _CMXYZType_1 = { "typeDescriptor",0,4,kUnsignedType,"CMFixedXYZColor",0,12,"unsigned long",&_CMXYZType_2};
	VPL_ExtStructure _CMXYZType_S = {"CMXYZType",&_CMXYZType_1};

	VPL_ExtField _CMViewingConditionsType_5 = { "stdIlluminant",32,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMViewingConditionsType_4 = { "surround",20,12,kStructureType,"NULL",0,0,"CMFixedXYZColor",&_CMViewingConditionsType_5};
	VPL_ExtField _CMViewingConditionsType_3 = { "illuminant",8,12,kStructureType,"NULL",0,0,"CMFixedXYZColor",&_CMViewingConditionsType_4};
	VPL_ExtField _CMViewingConditionsType_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMViewingConditionsType_3};
	VPL_ExtField _CMViewingConditionsType_1 = { "typeDescriptor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMViewingConditionsType_2};
	VPL_ExtStructure _CMViewingConditionsType_S = {"CMViewingConditionsType",&_CMViewingConditionsType_1};

	VPL_ExtField _CMUInt64ArrayType_3 = { "value",8,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _CMUInt64ArrayType_2 = { "reserved",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMUInt64ArrayType_3};
	VPL_ExtField _CMUInt64ArrayType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMUInt64ArrayType_2};
	VPL_ExtStructure _CMUInt64ArrayType_S = {"CMUInt64ArrayType",&_CMUInt64ArrayType_1};

	VPL_ExtField _CMUInt32ArrayType_3 = { "value",8,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _CMUInt32ArrayType_2 = { "reserved",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMUInt32ArrayType_3};
	VPL_ExtField _CMUInt32ArrayType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMUInt32ArrayType_2};
	VPL_ExtStructure _CMUInt32ArrayType_S = {"CMUInt32ArrayType",&_CMUInt32ArrayType_1};

	VPL_ExtField _CMUInt16ArrayType_3 = { "value",8,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _CMUInt16ArrayType_2 = { "reserved",4,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMUInt16ArrayType_3};
	VPL_ExtField _CMUInt16ArrayType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMUInt16ArrayType_2};
	VPL_ExtStructure _CMUInt16ArrayType_S = {"CMUInt16ArrayType",&_CMUInt16ArrayType_1};

	VPL_ExtField _CMUInt8ArrayType_3 = { "value",8,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CMUInt8ArrayType_2 = { "reserved",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMUInt8ArrayType_3};
	VPL_ExtField _CMUInt8ArrayType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMUInt8ArrayType_2};
	VPL_ExtStructure _CMUInt8ArrayType_S = {"CMUInt8ArrayType",&_CMUInt8ArrayType_1};

	VPL_ExtField _CMU16Fixed16ArrayType_3 = { "value",8,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _CMU16Fixed16ArrayType_2 = { "reserved",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMU16Fixed16ArrayType_3};
	VPL_ExtField _CMU16Fixed16ArrayType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CMU16Fixed16ArrayType_2};
	VPL_ExtStructure _CMU16Fixed16ArrayType_S = {"CMU16Fixed16ArrayType",&_CMU16Fixed16ArrayType_1};

	VPL_ExtField _CMS15Fixed16ArrayType_3 = { "value",8,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _CMS15Fixed16ArrayType_2 = { "reserved",4,4,kUnsignedType,"long int",0,4,"unsigned long",&_CMS15Fixed16ArrayType_3};
	VPL_ExtField _CMS15Fixed16ArrayType_1 = { "typeDescriptor",0,4,kUnsignedType,"long int",0,4,"unsigned long",&_CMS15Fixed16ArrayType_2};
	VPL_ExtStructure _CMS15Fixed16ArrayType_S = {"CMS15Fixed16ArrayType",&_CMS15Fixed16ArrayType_1};

	VPL_ExtField _CMSignatureType_3 = { "signature",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMSignatureType_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMSignatureType_3};
	VPL_ExtField _CMSignatureType_1 = { "typeDescriptor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMSignatureType_2};
	VPL_ExtStructure _CMSignatureType_S = {"CMSignatureType",&_CMSignatureType_1};

	VPL_ExtField _CMScreeningType_5 = { "channelInfo",16,12,kPointerType,"CMScreeningChannelRec",0,12,NULL,NULL};
	VPL_ExtField _CMScreeningType_4 = { "channelCount",12,4,kUnsignedType,"CMScreeningChannelRec",0,12,"unsigned long",&_CMScreeningType_5};
	VPL_ExtField _CMScreeningType_3 = { "screeningFlag",8,4,kUnsignedType,"CMScreeningChannelRec",0,12,"unsigned long",&_CMScreeningType_4};
	VPL_ExtField _CMScreeningType_2 = { "reserved",4,4,kUnsignedType,"CMScreeningChannelRec",0,12,"unsigned long",&_CMScreeningType_3};
	VPL_ExtField _CMScreeningType_1 = { "typeDescriptor",0,4,kUnsignedType,"CMScreeningChannelRec",0,12,"unsigned long",&_CMScreeningType_2};
	VPL_ExtStructure _CMScreeningType_S = {"CMScreeningType",&_CMScreeningType_1};

	VPL_ExtField _CMScreeningChannelRec_3 = { "spotFunction",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMScreeningChannelRec_2 = { "angle",4,4,kIntType,"NULL",0,0,"long int",&_CMScreeningChannelRec_3};
	VPL_ExtField _CMScreeningChannelRec_1 = { "frequency",0,4,kIntType,"NULL",0,0,"long int",&_CMScreeningChannelRec_2};
	VPL_ExtStructure _CMScreeningChannelRec_S = {"CMScreeningChannelRec",&_CMScreeningChannelRec_1};

	VPL_ExtField _CMUnicodeTextType_3 = { "text",8,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _CMUnicodeTextType_2 = { "reserved",4,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMUnicodeTextType_3};
	VPL_ExtField _CMUnicodeTextType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMUnicodeTextType_2};
	VPL_ExtStructure _CMUnicodeTextType_S = {"CMUnicodeTextType",&_CMUnicodeTextType_1};

	VPL_ExtField _CMTextType_3 = { "text",8,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CMTextType_2 = { "reserved",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMTextType_3};
	VPL_ExtField _CMTextType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMTextType_2};
	VPL_ExtStructure _CMTextType_S = {"CMTextType",&_CMTextType_1};

	VPL_ExtField _CMTextDescriptionType_4 = { "ASCIIName",12,2,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CMTextDescriptionType_3 = { "ASCIICount",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMTextDescriptionType_4};
	VPL_ExtField _CMTextDescriptionType_2 = { "reserved",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMTextDescriptionType_3};
	VPL_ExtField _CMTextDescriptionType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMTextDescriptionType_2};
	VPL_ExtStructure _CMTextDescriptionType_S = {"CMTextDescriptionType",&_CMTextDescriptionType_1};

	VPL_ExtField _CMParametricCurveType_5 = { "value",12,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _CMParametricCurveType_4 = { "reserved2",10,2,kUnsignedType,"long int",0,4,"unsigned short",&_CMParametricCurveType_5};
	VPL_ExtField _CMParametricCurveType_3 = { "functionType",8,2,kUnsignedType,"long int",0,4,"unsigned short",&_CMParametricCurveType_4};
	VPL_ExtField _CMParametricCurveType_2 = { "reserved",4,4,kUnsignedType,"long int",0,4,"unsigned long",&_CMParametricCurveType_3};
	VPL_ExtField _CMParametricCurveType_1 = { "typeDescriptor",0,4,kUnsignedType,"long int",0,4,"unsigned long",&_CMParametricCurveType_2};
	VPL_ExtStructure _CMParametricCurveType_S = {"CMParametricCurveType",&_CMParametricCurveType_1};

	VPL_ExtField _CMNativeDisplayInfoType_3 = { "nativeDisplayInfo",8,56,kStructureType,"NULL",0,0,"CMNativeDisplayInfo",NULL};
	VPL_ExtField _CMNativeDisplayInfoType_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMNativeDisplayInfoType_3};
	VPL_ExtField _CMNativeDisplayInfoType_1 = { "typeDescriptor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMNativeDisplayInfoType_2};
	VPL_ExtStructure _CMNativeDisplayInfoType_S = {"CMNativeDisplayInfoType",&_CMNativeDisplayInfoType_1};

	VPL_ExtField _CMNativeDisplayInfo_12 = { "gammaData",54,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CMNativeDisplayInfo_11 = { "gammaEntrySize",52,2,kUnsignedType,"char",0,1,"unsigned short",&_CMNativeDisplayInfo_12};
	VPL_ExtField _CMNativeDisplayInfo_10 = { "gammaEntryCount",50,2,kUnsignedType,"char",0,1,"unsigned short",&_CMNativeDisplayInfo_11};
	VPL_ExtField _CMNativeDisplayInfo_9 = { "gammaChannels",48,2,kUnsignedType,"char",0,1,"unsigned short",&_CMNativeDisplayInfo_10};
	VPL_ExtField _CMNativeDisplayInfo_8 = { "blueGammaValue",44,4,kIntType,"char",0,1,"long int",&_CMNativeDisplayInfo_9};
	VPL_ExtField _CMNativeDisplayInfo_7 = { "greenGammaValue",40,4,kIntType,"char",0,1,"long int",&_CMNativeDisplayInfo_8};
	VPL_ExtField _CMNativeDisplayInfo_6 = { "redGammaValue",36,4,kIntType,"char",0,1,"long int",&_CMNativeDisplayInfo_7};
	VPL_ExtField _CMNativeDisplayInfo_5 = { "whitePoint",28,8,kStructureType,"char",0,1,"CMFixedXYColor",&_CMNativeDisplayInfo_6};
	VPL_ExtField _CMNativeDisplayInfo_4 = { "bluePhosphor",20,8,kStructureType,"char",0,1,"CMFixedXYColor",&_CMNativeDisplayInfo_5};
	VPL_ExtField _CMNativeDisplayInfo_3 = { "greenPhosphor",12,8,kStructureType,"char",0,1,"CMFixedXYColor",&_CMNativeDisplayInfo_4};
	VPL_ExtField _CMNativeDisplayInfo_2 = { "redPhosphor",4,8,kStructureType,"char",0,1,"CMFixedXYColor",&_CMNativeDisplayInfo_3};
	VPL_ExtField _CMNativeDisplayInfo_1 = { "dataSize",0,4,kUnsignedType,"char",0,1,"unsigned long",&_CMNativeDisplayInfo_2};
	VPL_ExtStructure _CMNativeDisplayInfo_S = {"CMNativeDisplayInfo",&_CMNativeDisplayInfo_1};

	VPL_ExtField _CMNamedColor2Type_8 = { "data",84,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CMNamedColor2Type_7 = { "suffixName",52,32,kPointerType,"unsigned char",0,1,NULL,&_CMNamedColor2Type_8};
	VPL_ExtField _CMNamedColor2Type_6 = { "prefixName",20,32,kPointerType,"unsigned char",0,1,NULL,&_CMNamedColor2Type_7};
	VPL_ExtField _CMNamedColor2Type_5 = { "deviceChannelCount",16,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColor2Type_6};
	VPL_ExtField _CMNamedColor2Type_4 = { "count",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColor2Type_5};
	VPL_ExtField _CMNamedColor2Type_3 = { "vendorFlag",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColor2Type_4};
	VPL_ExtField _CMNamedColor2Type_2 = { "reserved",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColor2Type_3};
	VPL_ExtField _CMNamedColor2Type_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColor2Type_2};
	VPL_ExtStructure _CMNamedColor2Type_S = {"CMNamedColor2Type",&_CMNamedColor2Type_1};

	VPL_ExtField _CMNamedColor2EntryType_3 = { "DeviceColorCoords",38,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _CMNamedColor2EntryType_2 = { "PCSColorCoords",32,6,kPointerType,"unsigned short",0,2,NULL,&_CMNamedColor2EntryType_3};
	VPL_ExtField _CMNamedColor2EntryType_1 = { "rootName",0,32,kPointerType,"unsigned char",0,1,NULL,&_CMNamedColor2EntryType_2};
	VPL_ExtStructure _CMNamedColor2EntryType_S = {"CMNamedColor2EntryType",&_CMNamedColor2EntryType_1};

	VPL_ExtField _CMNamedColorType_5 = { "prefixName",16,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CMNamedColorType_4 = { "count",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColorType_5};
	VPL_ExtField _CMNamedColorType_3 = { "vendorFlag",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColorType_4};
	VPL_ExtField _CMNamedColorType_2 = { "reserved",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColorType_3};
	VPL_ExtField _CMNamedColorType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMNamedColorType_2};
	VPL_ExtStructure _CMNamedColorType_S = {"CMNamedColorType",&_CMNamedColorType_1};

	VPL_ExtField _CMMeasurementType_7 = { "illuminant",32,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMMeasurementType_6 = { "flare",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMeasurementType_7};
	VPL_ExtField _CMMeasurementType_5 = { "geometry",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMeasurementType_6};
	VPL_ExtField _CMMeasurementType_4 = { "backingXYZ",12,12,kStructureType,"NULL",0,0,"CMFixedXYZColor",&_CMMeasurementType_5};
	VPL_ExtField _CMMeasurementType_3 = { "standardObserver",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMeasurementType_4};
	VPL_ExtField _CMMeasurementType_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMeasurementType_3};
	VPL_ExtField _CMMeasurementType_1 = { "typeDescriptor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMMeasurementType_2};
	VPL_ExtStructure _CMMeasurementType_S = {"CMMeasurementType",&_CMMeasurementType_1};

	VPL_ExtField _CMMultiFunctCLUTType_4 = { "data",20,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CMMultiFunctCLUTType_3 = { "reserved",17,3,kPointerType,"unsigned char",0,1,NULL,&_CMMultiFunctCLUTType_4};
	VPL_ExtField _CMMultiFunctCLUTType_2 = { "entrySize",16,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_CMMultiFunctCLUTType_3};
	VPL_ExtField _CMMultiFunctCLUTType_1 = { "gridPoints",0,16,kPointerType,"unsigned char",0,1,NULL,&_CMMultiFunctCLUTType_2};
	VPL_ExtStructure _CMMultiFunctCLUTType_S = {"CMMultiFunctCLUTType",&_CMMultiFunctCLUTType_1};

	VPL_ExtField _CMMultiFunctLutType_11 = { "data",32,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CMMultiFunctLutType_10 = { "offsetAcurves",28,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMultiFunctLutType_11};
	VPL_ExtField _CMMultiFunctLutType_9 = { "offsetCLUT",24,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMultiFunctLutType_10};
	VPL_ExtField _CMMultiFunctLutType_8 = { "offsetMcurves",20,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMultiFunctLutType_9};
	VPL_ExtField _CMMultiFunctLutType_7 = { "offsetMatrix",16,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMultiFunctLutType_8};
	VPL_ExtField _CMMultiFunctLutType_6 = { "offsetBcurves",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMultiFunctLutType_7};
	VPL_ExtField _CMMultiFunctLutType_5 = { "reserved2",10,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_CMMultiFunctLutType_6};
	VPL_ExtField _CMMultiFunctLutType_4 = { "outputChannels",9,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_CMMultiFunctLutType_5};
	VPL_ExtField _CMMultiFunctLutType_3 = { "inputChannels",8,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_CMMultiFunctLutType_4};
	VPL_ExtField _CMMultiFunctLutType_2 = { "reserved",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMultiFunctLutType_3};
	VPL_ExtField _CMMultiFunctLutType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CMMultiFunctLutType_2};
	VPL_ExtStructure _CMMultiFunctLutType_S = {"CMMultiFunctLutType",&_CMMultiFunctLutType_1};

	VPL_ExtField _CMLut8Type_8 = { "inputTable",48,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CMLut8Type_7 = { "matrix",12,36,kPointerType,"long int",1,4,NULL,&_CMLut8Type_8};
	VPL_ExtField _CMLut8Type_6 = { "reserved2",11,1,kUnsignedType,"long int",1,4,"unsigned char",&_CMLut8Type_7};
	VPL_ExtField _CMLut8Type_5 = { "gridPoints",10,1,kUnsignedType,"long int",1,4,"unsigned char",&_CMLut8Type_6};
	VPL_ExtField _CMLut8Type_4 = { "outputChannels",9,1,kUnsignedType,"long int",1,4,"unsigned char",&_CMLut8Type_5};
	VPL_ExtField _CMLut8Type_3 = { "inputChannels",8,1,kUnsignedType,"long int",1,4,"unsigned char",&_CMLut8Type_4};
	VPL_ExtField _CMLut8Type_2 = { "reserved",4,4,kUnsignedType,"long int",1,4,"unsigned long",&_CMLut8Type_3};
	VPL_ExtField _CMLut8Type_1 = { "typeDescriptor",0,4,kUnsignedType,"long int",1,4,"unsigned long",&_CMLut8Type_2};
	VPL_ExtStructure _CMLut8Type_S = {"CMLut8Type",&_CMLut8Type_1};

	VPL_ExtField _CMLut16Type_10 = { "inputTable",52,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _CMLut16Type_9 = { "outputTableEntries",50,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_CMLut16Type_10};
	VPL_ExtField _CMLut16Type_8 = { "inputTableEntries",48,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_CMLut16Type_9};
	VPL_ExtField _CMLut16Type_7 = { "matrix",12,36,kPointerType,"long int",1,4,NULL,&_CMLut16Type_8};
	VPL_ExtField _CMLut16Type_6 = { "reserved2",11,1,kUnsignedType,"long int",1,4,"unsigned char",&_CMLut16Type_7};
	VPL_ExtField _CMLut16Type_5 = { "gridPoints",10,1,kUnsignedType,"long int",1,4,"unsigned char",&_CMLut16Type_6};
	VPL_ExtField _CMLut16Type_4 = { "outputChannels",9,1,kUnsignedType,"long int",1,4,"unsigned char",&_CMLut16Type_5};
	VPL_ExtField _CMLut16Type_3 = { "inputChannels",8,1,kUnsignedType,"long int",1,4,"unsigned char",&_CMLut16Type_4};
	VPL_ExtField _CMLut16Type_2 = { "reserved",4,4,kUnsignedType,"long int",1,4,"unsigned long",&_CMLut16Type_3};
	VPL_ExtField _CMLut16Type_1 = { "typeDescriptor",0,4,kUnsignedType,"long int",1,4,"unsigned long",&_CMLut16Type_2};
	VPL_ExtStructure _CMLut16Type_S = {"CMLut16Type",&_CMLut16Type_1};

	VPL_ExtField _CMDateTimeType_3 = { "dateTime",8,12,kStructureType,"NULL",0,0,"CMDateTime",NULL};
	VPL_ExtField _CMDateTimeType_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMDateTimeType_3};
	VPL_ExtField _CMDateTimeType_1 = { "typeDescriptor",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMDateTimeType_2};
	VPL_ExtStructure _CMDateTimeType_S = {"CMDateTimeType",&_CMDateTimeType_1};

	VPL_ExtField _CMDataType_4 = { "data",12,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CMDataType_3 = { "dataFlag",8,4,kUnsignedType,"char",0,1,"unsigned long",&_CMDataType_4};
	VPL_ExtField _CMDataType_2 = { "reserved",4,4,kUnsignedType,"char",0,1,"unsigned long",&_CMDataType_3};
	VPL_ExtField _CMDataType_1 = { "typeDescriptor",0,4,kUnsignedType,"char",0,1,"unsigned long",&_CMDataType_2};
	VPL_ExtStructure _CMDataType_S = {"CMDataType",&_CMDataType_1};

	VPL_ExtField _CMCurveType_4 = { "data",12,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _CMCurveType_3 = { "countValue",8,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMCurveType_4};
	VPL_ExtField _CMCurveType_2 = { "reserved",4,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMCurveType_3};
	VPL_ExtField _CMCurveType_1 = { "typeDescriptor",0,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_CMCurveType_2};
	VPL_ExtStructure _CMCurveType_S = {"CMCurveType",&_CMCurveType_1};

	VPL_ExtField _CMAdaptationMatrixType_3 = { "adaptationMatrix",8,36,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _CMAdaptationMatrixType_2 = { "reserved",4,4,kUnsignedType,"long int",0,4,"unsigned long",&_CMAdaptationMatrixType_3};
	VPL_ExtField _CMAdaptationMatrixType_1 = { "typeDescriptor",0,4,kUnsignedType,"long int",0,4,"unsigned long",&_CMAdaptationMatrixType_2};
	VPL_ExtStructure _CMAdaptationMatrixType_S = {"CMAdaptationMatrixType",&_CMAdaptationMatrixType_1};

	VPL_ExtField _CM2Profile_3 = { "elemData",144,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CM2Profile_2 = { "tagTable",128,16,kStructureType,"char",0,1,"CMTagElemTable",&_CM2Profile_3};
	VPL_ExtField _CM2Profile_1 = { "header",0,128,kStructureType,"char",0,1,"CM2Header",&_CM2Profile_2};
	VPL_ExtStructure _CM2Profile_S = {"CM2Profile",&_CM2Profile_1};

	VPL_ExtField _CMTagElemTable_2 = { "tagList",4,12,kPointerType,"CMTagRecord",0,12,NULL,NULL};
	VPL_ExtField _CMTagElemTable_1 = { "count",0,4,kUnsignedType,"CMTagRecord",0,12,"unsigned long",&_CMTagElemTable_2};
	VPL_ExtStructure _CMTagElemTable_S = {"CMTagElemTable",&_CMTagElemTable_1};

	VPL_ExtField _CMTagRecord_3 = { "elementSize",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CMTagRecord_2 = { "elementOffset",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMTagRecord_3};
	VPL_ExtField _CMTagRecord_1 = { "tag",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CMTagRecord_2};
	VPL_ExtStructure _CMTagRecord_S = {"CMTagRecord",&_CMTagRecord_1};

	VPL_ExtField _CM4Header_18 = { "reserved",100,28,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CM4Header_17 = { "digest",84,16,kPointerType,"unsigned char",0,1,NULL,&_CM4Header_18};
	VPL_ExtField _CM4Header_16 = { "creator",80,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CM4Header_17};
	VPL_ExtField _CM4Header_15 = { "white",68,12,kStructureType,"unsigned char",0,1,"CMFixedXYZColor",&_CM4Header_16};
	VPL_ExtField _CM4Header_14 = { "renderingIntent",64,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CM4Header_15};
	VPL_ExtField _CM4Header_13 = { "deviceAttributes",56,8,kPointerType,"unsigned long",0,4,NULL,&_CM4Header_14};
	VPL_ExtField _CM4Header_12 = { "deviceModel",52,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_13};
	VPL_ExtField _CM4Header_11 = { "deviceManufacturer",48,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_12};
	VPL_ExtField _CM4Header_10 = { "flags",44,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_11};
	VPL_ExtField _CM4Header_9 = { "platform",40,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_10};
	VPL_ExtField _CM4Header_8 = { "CS2profileSignature",36,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_9};
	VPL_ExtField _CM4Header_7 = { "dateTime",24,12,kStructureType,"unsigned long",0,4,"CMDateTime",&_CM4Header_8};
	VPL_ExtField _CM4Header_6 = { "profileConnectionSpace",20,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_7};
	VPL_ExtField _CM4Header_5 = { "dataColorSpace",16,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_6};
	VPL_ExtField _CM4Header_4 = { "profileClass",12,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_5};
	VPL_ExtField _CM4Header_3 = { "profileVersion",8,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_4};
	VPL_ExtField _CM4Header_2 = { "CMMType",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_3};
	VPL_ExtField _CM4Header_1 = { "size",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM4Header_2};
	VPL_ExtStructure _CM4Header_S = {"CM4Header",&_CM4Header_1};

	VPL_ExtField _CM2Header_17 = { "reserved",84,44,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _CM2Header_16 = { "creator",80,4,kUnsignedType,"char",0,1,"unsigned long",&_CM2Header_17};
	VPL_ExtField _CM2Header_15 = { "white",68,12,kStructureType,"char",0,1,"CMFixedXYZColor",&_CM2Header_16};
	VPL_ExtField _CM2Header_14 = { "renderingIntent",64,4,kUnsignedType,"char",0,1,"unsigned long",&_CM2Header_15};
	VPL_ExtField _CM2Header_13 = { "deviceAttributes",56,8,kPointerType,"unsigned long",0,4,NULL,&_CM2Header_14};
	VPL_ExtField _CM2Header_12 = { "deviceModel",52,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_13};
	VPL_ExtField _CM2Header_11 = { "deviceManufacturer",48,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_12};
	VPL_ExtField _CM2Header_10 = { "flags",44,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_11};
	VPL_ExtField _CM2Header_9 = { "platform",40,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_10};
	VPL_ExtField _CM2Header_8 = { "CS2profileSignature",36,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_9};
	VPL_ExtField _CM2Header_7 = { "dateTime",24,12,kStructureType,"unsigned long",0,4,"CMDateTime",&_CM2Header_8};
	VPL_ExtField _CM2Header_6 = { "profileConnectionSpace",20,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_7};
	VPL_ExtField _CM2Header_5 = { "dataColorSpace",16,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_6};
	VPL_ExtField _CM2Header_4 = { "profileClass",12,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_5};
	VPL_ExtField _CM2Header_3 = { "profileVersion",8,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_4};
	VPL_ExtField _CM2Header_2 = { "CMMType",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_3};
	VPL_ExtField _CM2Header_1 = { "size",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_CM2Header_2};
	VPL_ExtStructure _CM2Header_S = {"CM2Header",&_CM2Header_1};

	VPL_ExtField _CMXYZColor_3 = { "Z",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMXYZColor_2 = { "Y",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMXYZColor_3};
	VPL_ExtField _CMXYZColor_1 = { "X",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMXYZColor_2};
	VPL_ExtStructure _CMXYZColor_S = {"CMXYZColor",&_CMXYZColor_1};

	VPL_ExtField _CMFixedXYZColor_3 = { "Z",8,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CMFixedXYZColor_2 = { "Y",4,4,kIntType,"NULL",0,0,"long int",&_CMFixedXYZColor_3};
	VPL_ExtField _CMFixedXYZColor_1 = { "X",0,4,kIntType,"NULL",0,0,"long int",&_CMFixedXYZColor_2};
	VPL_ExtStructure _CMFixedXYZColor_S = {"CMFixedXYZColor",&_CMFixedXYZColor_1};

	VPL_ExtField _CMFixedXYColor_2 = { "y",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CMFixedXYColor_1 = { "x",0,4,kIntType,"NULL",0,0,"long int",&_CMFixedXYColor_2};
	VPL_ExtStructure _CMFixedXYColor_S = {"CMFixedXYColor",&_CMFixedXYColor_1};

	VPL_ExtField _CMDateTime_6 = { "seconds",10,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CMDateTime_5 = { "minutes",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMDateTime_6};
	VPL_ExtField _CMDateTime_4 = { "hours",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMDateTime_5};
	VPL_ExtField _CMDateTime_3 = { "dayOfTheMonth",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMDateTime_4};
	VPL_ExtField _CMDateTime_2 = { "month",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMDateTime_3};
	VPL_ExtField _CMDateTime_1 = { "year",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CMDateTime_2};
	VPL_ExtStructure _CMDateTime_S = {"CMDateTime",&_CMDateTime_1};

	VPL_ExtStructure _OpaqueCMWorldRef_S = {"OpaqueCMWorldRef",NULL};

	VPL_ExtStructure _OpaqueCMMatchRef_S = {"OpaqueCMMatchRef",NULL};

	VPL_ExtStructure _OpaqueCMProfileSearchRef_S = {"OpaqueCMProfileSearchRef",NULL};

	VPL_ExtStructure _OpaqueCMProfileRef_S = {"OpaqueCMProfileRef",NULL};

	VPL_ExtField __CGDeviceByteColor_3 = { "blue",2,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField __CGDeviceByteColor_2 = { "green",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&__CGDeviceByteColor_3};
	VPL_ExtField __CGDeviceByteColor_1 = { "red",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&__CGDeviceByteColor_2};
	VPL_ExtStructure __CGDeviceByteColor_S = {"_CGDeviceByteColor",&__CGDeviceByteColor_1};

	VPL_ExtField __CGDeviceColor_3 = { "blue",8,4,kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField __CGDeviceColor_2 = { "green",4,4,kFloatType,"NULL",0,0,"float",&__CGDeviceColor_3};
	VPL_ExtField __CGDeviceColor_1 = { "red",0,4,kFloatType,"NULL",0,0,"float",&__CGDeviceColor_2};
	VPL_ExtStructure __CGDeviceColor_S = {"_CGDeviceColor",&__CGDeviceColor_1};

	VPL_ExtStructure __CGDirectPaletteRef_S = {"_CGDirectPaletteRef",NULL};

	VPL_ExtStructure __CGDirectDisplayID_S = {"_CGDirectDisplayID",NULL};

	VPL_ExtField _CGDataConsumerCallbacks_2 = { "releaseConsumer",4,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _CGDataConsumerCallbacks_1 = { "putBytes",0,4,kPointerType,"unsigned long",1,4,"T*",&_CGDataConsumerCallbacks_2};
	VPL_ExtStructure _CGDataConsumerCallbacks_S = {"CGDataConsumerCallbacks",&_CGDataConsumerCallbacks_1};

	VPL_ExtStructure _CGDataConsumer_S = {"CGDataConsumer",NULL};

	VPL_ExtStructure _CGPDFDocument_S = {"CGPDFDocument",NULL};

	VPL_ExtField _CGPatternCallbacks_3 = { "releaseInfo",8,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _CGPatternCallbacks_2 = { "drawPattern",4,4,kPointerType,"void",1,0,"T*",&_CGPatternCallbacks_3};
	VPL_ExtField _CGPatternCallbacks_1 = { "version",0,4,kUnsignedType,"void",1,0,"unsigned int",&_CGPatternCallbacks_2};
	VPL_ExtStructure _CGPatternCallbacks_S = {"CGPatternCallbacks",&_CGPatternCallbacks_1};

	VPL_ExtStructure _CGPattern_S = {"CGPattern",NULL};

	VPL_ExtStructure _CGImage_S = {"CGImage",NULL};

	VPL_ExtStructure _CGFont_S = {"CGFont",NULL};

	VPL_ExtField _CGDataProviderDirectAccessCallbacks_4 = { "releaseProvider",12,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _CGDataProviderDirectAccessCallbacks_3 = { "getBytes",8,4,kPointerType,"unsigned long",1,4,"T*",&_CGDataProviderDirectAccessCallbacks_4};
	VPL_ExtField _CGDataProviderDirectAccessCallbacks_2 = { "releaseBytePointer",4,4,kPointerType,"void",1,0,"T*",&_CGDataProviderDirectAccessCallbacks_3};
	VPL_ExtField _CGDataProviderDirectAccessCallbacks_1 = { "getBytePointer",0,4,kPointerType,"void",2,0,"T*",&_CGDataProviderDirectAccessCallbacks_2};
	VPL_ExtStructure _CGDataProviderDirectAccessCallbacks_S = {"CGDataProviderDirectAccessCallbacks",&_CGDataProviderDirectAccessCallbacks_1};

	VPL_ExtField _CGDataProviderCallbacks_4 = { "releaseProvider",12,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _CGDataProviderCallbacks_3 = { "rewind",8,4,kPointerType,"void",1,0,"T*",&_CGDataProviderCallbacks_4};
	VPL_ExtField _CGDataProviderCallbacks_2 = { "skipBytes",4,4,kPointerType,"void",1,0,"T*",&_CGDataProviderCallbacks_3};
	VPL_ExtField _CGDataProviderCallbacks_1 = { "getBytes",0,4,kPointerType,"unsigned long",1,4,"T*",&_CGDataProviderCallbacks_2};
	VPL_ExtStructure _CGDataProviderCallbacks_S = {"CGDataProviderCallbacks",&_CGDataProviderCallbacks_1};

	VPL_ExtStructure _CGDataProvider_S = {"CGDataProvider",NULL};

	VPL_ExtStructure _CGColorSpace_S = {"CGColorSpace",NULL};

	VPL_ExtStructure _CGContext_S = {"CGContext",NULL};

	VPL_ExtField _CGRect_2 = { "size",8,8,kStructureType,"NULL",0,0,"CGSize",NULL};
	VPL_ExtField _CGRect_1 = { "origin",0,8,kStructureType,"NULL",0,0,"CGPoint",&_CGRect_2};
	VPL_ExtStructure _CGRect_S = {"CGRect",&_CGRect_1};

	VPL_ExtField _CGSize_2 = { "height",4,4,kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField _CGSize_1 = { "width",0,4,kFloatType,"NULL",0,0,"float",&_CGSize_2};
	VPL_ExtStructure _CGSize_S = {"CGSize",&_CGSize_1};

	VPL_ExtField _CGPoint_2 = { "y",4,4,kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField _CGPoint_1 = { "x",0,4,kFloatType,"NULL",0,0,"float",&_CGPoint_2};
	VPL_ExtStructure _CGPoint_S = {"CGPoint",&_CGPoint_1};

	VPL_ExtField _CGAffineTransform_6 = { "ty",20,4,kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField _CGAffineTransform_5 = { "tx",16,4,kFloatType,"NULL",0,0,"float",&_CGAffineTransform_6};
	VPL_ExtField _CGAffineTransform_4 = { "d",12,4,kFloatType,"NULL",0,0,"float",&_CGAffineTransform_5};
	VPL_ExtField _CGAffineTransform_3 = { "c",8,4,kFloatType,"NULL",0,0,"float",&_CGAffineTransform_4};
	VPL_ExtField _CGAffineTransform_2 = { "b",4,4,kFloatType,"NULL",0,0,"float",&_CGAffineTransform_3};
	VPL_ExtField _CGAffineTransform_1 = { "a",0,4,kFloatType,"NULL",0,0,"float",&_CGAffineTransform_2};
	VPL_ExtStructure _CGAffineTransform_S = {"CGAffineTransform",&_CGAffineTransform_1};

	VPL_ExtField _scalerStreamData_3 = { "data",8,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _scalerStreamData_2 = { "byteCount",4,4,kIntType,"void",1,0,"long int",&_scalerStreamData_3};
	VPL_ExtField _scalerStreamData_1 = { "hexFlag",0,4,kIntType,"void",1,0,"long int",&_scalerStreamData_2};
	VPL_ExtStructure _scalerStreamData_S = {"scalerStreamData",&_scalerStreamData_1};

	VPL_ExtField _1233_2 = { "list",4,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _1233_1 = { "size",0,4,kIntType,"void",1,0,"long int",&_1233_2};
	VPL_ExtStructure _1233_S = {"1233",&_1233_1};

	VPL_ExtField _1232_3 = { "name",8,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _1232_2 = { "glyphBits",4,4,kPointerType,"long int",1,4,"T*",&_1232_3};
	VPL_ExtField _1232_1 = { "encoding",0,4,kPointerType,"unsigned short",1,2,"T*",&_1232_2};
	VPL_ExtStructure _1232_S = {"1232",&_1232_1};

	VPL_ExtField _scalerStream_8 = { "info",28,12,kStructureType,"NULL",0,0,"1231",NULL};
	VPL_ExtField _scalerStream_7 = { "variations",24,4,kPointerType,"void",1,0,"T*",&_scalerStream_8};
	VPL_ExtField _scalerStream_6 = { "variationCount",20,4,kIntType,"void",1,0,"long int",&_scalerStream_7};
	VPL_ExtField _scalerStream_5 = { "memorySize",16,4,kUnsignedType,"void",1,0,"unsigned long",&_scalerStream_6};
	VPL_ExtField _scalerStream_4 = { "action",12,4,kIntType,"void",1,0,"long int",&_scalerStream_5};
	VPL_ExtField _scalerStream_3 = { "types",8,4,kUnsignedType,"void",1,0,"unsigned long",&_scalerStream_4};
	VPL_ExtField _scalerStream_2 = { "targetVersion",4,4,kPointerType,"char",1,1,"T*",&_scalerStream_3};
	VPL_ExtField _scalerStream_1 = { "streamRefCon",0,4,kPointerType,"void",1,0,"T*",&_scalerStream_2};
	VPL_ExtStructure _scalerStream_S = {"scalerStream",&_scalerStream_1};

	VPL_ExtField _scalerPrerequisiteItem_3 = { "name",8,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _scalerPrerequisiteItem_2 = { "size",4,4,kIntType,"unsigned char",0,1,"long int",&_scalerPrerequisiteItem_3};
	VPL_ExtField _scalerPrerequisiteItem_1 = { "enumeration",0,4,kIntType,"unsigned char",0,1,"long int",&_scalerPrerequisiteItem_2};
	VPL_ExtStructure _scalerPrerequisiteItem_S = {"scalerPrerequisiteItem",&_scalerPrerequisiteItem_1};

	VPL_ExtField _ATSFontFilter_3 = { "filter",8,4,kStructureType,"NULL",0,0,"1227",NULL};
	VPL_ExtField _ATSFontFilter_2 = { "filterSelector",4,4,kEnumType,"NULL",0,0,"ATSFontFilterSelector",&_ATSFontFilter_3};
	VPL_ExtField _ATSFontFilter_1 = { "version",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ATSFontFilter_2};
	VPL_ExtStructure _ATSFontFilter_S = {"ATSFontFilter",&_ATSFontFilter_1};

	VPL_ExtStructure _ATSFontIterator__S = {"ATSFontIterator_",NULL};

	VPL_ExtStructure _ATSFontFamilyIterator__S = {"ATSFontFamilyIterator_",NULL};

	VPL_ExtField _FontVariation_2 = { "value",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _FontVariation_1 = { "name",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FontVariation_2};
	VPL_ExtStructure _FontVariation_S = {"FontVariation",&_FontVariation_1};

	VPL_ExtField _sfntFeatureHeader_7 = { "runs",28,4,kPointerType,"sfntFontRunFeature",0,4,NULL,NULL};
	VPL_ExtField _sfntFeatureHeader_6 = { "settings",24,4,kPointerType,"sfntFontFeatureSetting",0,4,NULL,&_sfntFeatureHeader_7};
	VPL_ExtField _sfntFeatureHeader_5 = { "names",12,12,kPointerType,"sfntFeatureName",0,12,NULL,&_sfntFeatureHeader_6};
	VPL_ExtField _sfntFeatureHeader_4 = { "reserved",8,4,kIntType,"sfntFeatureName",0,12,"long int",&_sfntFeatureHeader_5};
	VPL_ExtField _sfntFeatureHeader_3 = { "featureSetCount",6,2,kUnsignedType,"sfntFeatureName",0,12,"unsigned short",&_sfntFeatureHeader_4};
	VPL_ExtField _sfntFeatureHeader_2 = { "featureNameCount",4,2,kUnsignedType,"sfntFeatureName",0,12,"unsigned short",&_sfntFeatureHeader_3};
	VPL_ExtField _sfntFeatureHeader_1 = { "version",0,4,kIntType,"sfntFeatureName",0,12,"long int",&_sfntFeatureHeader_2};
	VPL_ExtStructure _sfntFeatureHeader_S = {"sfntFeatureHeader",&_sfntFeatureHeader_1};

	VPL_ExtField _sfntFontRunFeature_2 = { "setting",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _sfntFontRunFeature_1 = { "featureType",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntFontRunFeature_2};
	VPL_ExtStructure _sfntFontRunFeature_S = {"sfntFontRunFeature",&_sfntFontRunFeature_1};

	VPL_ExtField _sfntFontFeatureSetting_2 = { "nameID",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _sfntFontFeatureSetting_1 = { "setting",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntFontFeatureSetting_2};
	VPL_ExtStructure _sfntFontFeatureSetting_S = {"sfntFontFeatureSetting",&_sfntFontFeatureSetting_1};

	VPL_ExtField _sfntFeatureName_5 = { "nameID",10,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _sfntFeatureName_4 = { "featureFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntFeatureName_5};
	VPL_ExtField _sfntFeatureName_3 = { "offsetToSettings",4,4,kIntType,"NULL",0,0,"long int",&_sfntFeatureName_4};
	VPL_ExtField _sfntFeatureName_2 = { "settingCount",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntFeatureName_3};
	VPL_ExtField _sfntFeatureName_1 = { "featureType",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntFeatureName_2};
	VPL_ExtStructure _sfntFeatureName_S = {"sfntFeatureName",&_sfntFeatureName_1};

	VPL_ExtField _sfntDescriptorHeader_3 = { "descriptor",8,8,kPointerType,"sfntFontDescriptor",0,8,NULL,NULL};
	VPL_ExtField _sfntDescriptorHeader_2 = { "descriptorCount",4,4,kIntType,"sfntFontDescriptor",0,8,"long int",&_sfntDescriptorHeader_3};
	VPL_ExtField _sfntDescriptorHeader_1 = { "version",0,4,kIntType,"sfntFontDescriptor",0,8,"long int",&_sfntDescriptorHeader_2};
	VPL_ExtStructure _sfntDescriptorHeader_S = {"sfntDescriptorHeader",&_sfntDescriptorHeader_1};

	VPL_ExtField _sfntFontDescriptor_2 = { "value",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _sfntFontDescriptor_1 = { "name",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_sfntFontDescriptor_2};
	VPL_ExtStructure _sfntFontDescriptor_S = {"sfntFontDescriptor",&_sfntFontDescriptor_1};

	VPL_ExtField _sfntVariationHeader_9 = { "instance",36,8,kPointerType,"sfntInstance",0,8,NULL,NULL};
	VPL_ExtField _sfntVariationHeader_8 = { "axis",16,20,kPointerType,"sfntVariationAxis",0,20,NULL,&_sfntVariationHeader_9};
	VPL_ExtField _sfntVariationHeader_7 = { "instanceSize",14,2,kUnsignedType,"sfntVariationAxis",0,20,"unsigned short",&_sfntVariationHeader_8};
	VPL_ExtField _sfntVariationHeader_6 = { "instanceCount",12,2,kUnsignedType,"sfntVariationAxis",0,20,"unsigned short",&_sfntVariationHeader_7};
	VPL_ExtField _sfntVariationHeader_5 = { "axisSize",10,2,kUnsignedType,"sfntVariationAxis",0,20,"unsigned short",&_sfntVariationHeader_6};
	VPL_ExtField _sfntVariationHeader_4 = { "axisCount",8,2,kUnsignedType,"sfntVariationAxis",0,20,"unsigned short",&_sfntVariationHeader_5};
	VPL_ExtField _sfntVariationHeader_3 = { "countSizePairs",6,2,kUnsignedType,"sfntVariationAxis",0,20,"unsigned short",&_sfntVariationHeader_4};
	VPL_ExtField _sfntVariationHeader_2 = { "offsetToData",4,2,kUnsignedType,"sfntVariationAxis",0,20,"unsigned short",&_sfntVariationHeader_3};
	VPL_ExtField _sfntVariationHeader_1 = { "version",0,4,kIntType,"sfntVariationAxis",0,20,"long int",&_sfntVariationHeader_2};
	VPL_ExtStructure _sfntVariationHeader_S = {"sfntVariationHeader",&_sfntVariationHeader_1};

	VPL_ExtField _sfntInstance_3 = { "coord",4,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _sfntInstance_2 = { "flags",2,2,kIntType,"long int",0,4,"short",&_sfntInstance_3};
	VPL_ExtField _sfntInstance_1 = { "nameID",0,2,kIntType,"long int",0,4,"short",&_sfntInstance_2};
	VPL_ExtStructure _sfntInstance_S = {"sfntInstance",&_sfntInstance_1};

	VPL_ExtField _sfntVariationAxis_6 = { "nameID",18,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _sfntVariationAxis_5 = { "flags",16,2,kIntType,"NULL",0,0,"short",&_sfntVariationAxis_6};
	VPL_ExtField _sfntVariationAxis_4 = { "maxValue",12,4,kIntType,"NULL",0,0,"long int",&_sfntVariationAxis_5};
	VPL_ExtField _sfntVariationAxis_3 = { "defaultValue",8,4,kIntType,"NULL",0,0,"long int",&_sfntVariationAxis_4};
	VPL_ExtField _sfntVariationAxis_2 = { "minValue",4,4,kIntType,"NULL",0,0,"long int",&_sfntVariationAxis_3};
	VPL_ExtField _sfntVariationAxis_1 = { "axisTag",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_sfntVariationAxis_2};
	VPL_ExtStructure _sfntVariationAxis_S = {"sfntVariationAxis",&_sfntVariationAxis_1};

	VPL_ExtField _sfntNameHeader_4 = { "rec",6,12,kPointerType,"sfntNameRecord",0,12,NULL,NULL};
	VPL_ExtField _sfntNameHeader_3 = { "stringOffset",4,2,kUnsignedType,"sfntNameRecord",0,12,"unsigned short",&_sfntNameHeader_4};
	VPL_ExtField _sfntNameHeader_2 = { "count",2,2,kUnsignedType,"sfntNameRecord",0,12,"unsigned short",&_sfntNameHeader_3};
	VPL_ExtField _sfntNameHeader_1 = { "format",0,2,kUnsignedType,"sfntNameRecord",0,12,"unsigned short",&_sfntNameHeader_2};
	VPL_ExtStructure _sfntNameHeader_S = {"sfntNameHeader",&_sfntNameHeader_1};

	VPL_ExtField _sfntNameRecord_6 = { "offset",10,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _sfntNameRecord_5 = { "length",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntNameRecord_6};
	VPL_ExtField _sfntNameRecord_4 = { "nameID",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntNameRecord_5};
	VPL_ExtField _sfntNameRecord_3 = { "languageID",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntNameRecord_4};
	VPL_ExtField _sfntNameRecord_2 = { "scriptID",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntNameRecord_3};
	VPL_ExtField _sfntNameRecord_1 = { "platformID",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntNameRecord_2};
	VPL_ExtStructure _sfntNameRecord_S = {"sfntNameRecord",&_sfntNameRecord_1};

	VPL_ExtField _sfntCMapHeader_3 = { "encoding",4,8,kPointerType,"sfntCMapEncoding",0,8,NULL,NULL};
	VPL_ExtField _sfntCMapHeader_2 = { "numTables",2,2,kUnsignedType,"sfntCMapEncoding",0,8,"unsigned short",&_sfntCMapHeader_3};
	VPL_ExtField _sfntCMapHeader_1 = { "version",0,2,kUnsignedType,"sfntCMapEncoding",0,8,"unsigned short",&_sfntCMapHeader_2};
	VPL_ExtStructure _sfntCMapHeader_S = {"sfntCMapHeader",&_sfntCMapHeader_1};

	VPL_ExtField _sfntCMapEncoding_3 = { "offset",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _sfntCMapEncoding_2 = { "scriptID",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntCMapEncoding_3};
	VPL_ExtField _sfntCMapEncoding_1 = { "platformID",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntCMapEncoding_2};
	VPL_ExtStructure _sfntCMapEncoding_S = {"sfntCMapEncoding",&_sfntCMapEncoding_1};

	VPL_ExtField _sfntCMapSubHeader_3 = { "languageID",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _sfntCMapSubHeader_2 = { "length",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntCMapSubHeader_3};
	VPL_ExtField _sfntCMapSubHeader_1 = { "format",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_sfntCMapSubHeader_2};
	VPL_ExtStructure _sfntCMapSubHeader_S = {"sfntCMapSubHeader",&_sfntCMapSubHeader_1};

	VPL_ExtField _sfntDirectory_6 = { "table",12,16,kPointerType,"sfntDirectoryEntry",0,16,NULL,NULL};
	VPL_ExtField _sfntDirectory_5 = { "rangeShift",10,2,kUnsignedType,"sfntDirectoryEntry",0,16,"unsigned short",&_sfntDirectory_6};
	VPL_ExtField _sfntDirectory_4 = { "entrySelector",8,2,kUnsignedType,"sfntDirectoryEntry",0,16,"unsigned short",&_sfntDirectory_5};
	VPL_ExtField _sfntDirectory_3 = { "searchRange",6,2,kUnsignedType,"sfntDirectoryEntry",0,16,"unsigned short",&_sfntDirectory_4};
	VPL_ExtField _sfntDirectory_2 = { "numOffsets",4,2,kUnsignedType,"sfntDirectoryEntry",0,16,"unsigned short",&_sfntDirectory_3};
	VPL_ExtField _sfntDirectory_1 = { "format",0,4,kUnsignedType,"sfntDirectoryEntry",0,16,"unsigned long",&_sfntDirectory_2};
	VPL_ExtStructure _sfntDirectory_S = {"sfntDirectory",&_sfntDirectory_1};

	VPL_ExtField _sfntDirectoryEntry_4 = { "length",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _sfntDirectoryEntry_3 = { "offset",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_sfntDirectoryEntry_4};
	VPL_ExtField _sfntDirectoryEntry_2 = { "checkSum",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_sfntDirectoryEntry_3};
	VPL_ExtField _sfntDirectoryEntry_1 = { "tableTag",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_sfntDirectoryEntry_2};
	VPL_ExtStructure _sfntDirectoryEntry_S = {"sfntDirectoryEntry",&_sfntDirectoryEntry_1};

	VPL_ExtField _ATSJustWidthDeltaEntryOverride_6 = { "shrinkFlags",18,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _ATSJustWidthDeltaEntryOverride_5 = { "growFlags",16,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ATSJustWidthDeltaEntryOverride_6};
	VPL_ExtField _ATSJustWidthDeltaEntryOverride_4 = { "afterShrinkLimit",12,4,kIntType,"NULL",0,0,"long int",&_ATSJustWidthDeltaEntryOverride_5};
	VPL_ExtField _ATSJustWidthDeltaEntryOverride_3 = { "afterGrowLimit",8,4,kIntType,"NULL",0,0,"long int",&_ATSJustWidthDeltaEntryOverride_4};
	VPL_ExtField _ATSJustWidthDeltaEntryOverride_2 = { "beforeShrinkLimit",4,4,kIntType,"NULL",0,0,"long int",&_ATSJustWidthDeltaEntryOverride_3};
	VPL_ExtField _ATSJustWidthDeltaEntryOverride_1 = { "beforeGrowLimit",0,4,kIntType,"NULL",0,0,"long int",&_ATSJustWidthDeltaEntryOverride_2};
	VPL_ExtStructure _ATSJustWidthDeltaEntryOverride_S = {"ATSJustWidthDeltaEntryOverride",&_ATSJustWidthDeltaEntryOverride_1};

	VPL_ExtField _ATSTrapezoid_4 = { "lowerLeft",24,8,kStructureType,"NULL",0,0,"FixedPoint",NULL};
	VPL_ExtField _ATSTrapezoid_3 = { "lowerRight",16,8,kStructureType,"NULL",0,0,"FixedPoint",&_ATSTrapezoid_4};
	VPL_ExtField _ATSTrapezoid_2 = { "upperRight",8,8,kStructureType,"NULL",0,0,"FixedPoint",&_ATSTrapezoid_3};
	VPL_ExtField _ATSTrapezoid_1 = { "upperLeft",0,8,kStructureType,"NULL",0,0,"FixedPoint",&_ATSTrapezoid_2};
	VPL_ExtStructure _ATSTrapezoid_S = {"ATSTrapezoid",&_ATSTrapezoid_1};

	VPL_ExtField _ATSGlyphScreenMetrics_6 = { "otherSideBearing",32,8,kStructureType,"NULL",0,0,"Float32Point",NULL};
	VPL_ExtField _ATSGlyphScreenMetrics_5 = { "sideBearing",24,8,kStructureType,"NULL",0,0,"Float32Point",&_ATSGlyphScreenMetrics_6};
	VPL_ExtField _ATSGlyphScreenMetrics_4 = { "width",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ATSGlyphScreenMetrics_5};
	VPL_ExtField _ATSGlyphScreenMetrics_3 = { "height",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ATSGlyphScreenMetrics_4};
	VPL_ExtField _ATSGlyphScreenMetrics_2 = { "topLeft",8,8,kStructureType,"NULL",0,0,"Float32Point",&_ATSGlyphScreenMetrics_3};
	VPL_ExtField _ATSGlyphScreenMetrics_1 = { "deviceAdvance",0,8,kStructureType,"NULL",0,0,"Float32Point",&_ATSGlyphScreenMetrics_2};
	VPL_ExtStructure _ATSGlyphScreenMetrics_S = {"ATSGlyphScreenMetrics",&_ATSGlyphScreenMetrics_1};

	VPL_ExtField _ATSGlyphIdealMetrics_3 = { "otherSideBearing",16,8,kStructureType,"NULL",0,0,"Float32Point",NULL};
	VPL_ExtField _ATSGlyphIdealMetrics_2 = { "sideBearing",8,8,kStructureType,"NULL",0,0,"Float32Point",&_ATSGlyphIdealMetrics_3};
	VPL_ExtField _ATSGlyphIdealMetrics_1 = { "advance",0,8,kStructureType,"NULL",0,0,"Float32Point",&_ATSGlyphIdealMetrics_2};
	VPL_ExtStructure _ATSGlyphIdealMetrics_S = {"ATSGlyphIdealMetrics",&_ATSGlyphIdealMetrics_1};

	VPL_ExtField _ATSUCurvePaths_2 = { "contour",4,16,kPointerType,"ATSUCurvePath",0,16,NULL,NULL};
	VPL_ExtField _ATSUCurvePaths_1 = { "contours",0,4,kUnsignedType,"ATSUCurvePath",0,16,"unsigned long",&_ATSUCurvePaths_2};
	VPL_ExtStructure _ATSUCurvePaths_S = {"ATSUCurvePaths",&_ATSUCurvePaths_1};

	VPL_ExtField _ATSUCurvePath_3 = { "vector",8,8,kPointerType,"Float32Point",0,8,NULL,NULL};
	VPL_ExtField _ATSUCurvePath_2 = { "controlBits",4,4,kPointerType,"unsigned long",0,4,NULL,&_ATSUCurvePath_3};
	VPL_ExtField _ATSUCurvePath_1 = { "vectors",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_ATSUCurvePath_2};
	VPL_ExtStructure _ATSUCurvePath_S = {"ATSUCurvePath",&_ATSUCurvePath_1};

	VPL_ExtField _ATSFontMetrics_15 = { "underlineThickness",56,4,kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField _ATSFontMetrics_14 = { "underlinePosition",52,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_15};
	VPL_ExtField _ATSFontMetrics_13 = { "italicAngle",48,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_14};
	VPL_ExtField _ATSFontMetrics_12 = { "xHeight",44,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_13};
	VPL_ExtField _ATSFontMetrics_11 = { "capHeight",40,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_12};
	VPL_ExtField _ATSFontMetrics_10 = { "stemHeight",36,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_11};
	VPL_ExtField _ATSFontMetrics_9 = { "stemWidth",32,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_10};
	VPL_ExtField _ATSFontMetrics_8 = { "minRightSideBearing",28,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_9};
	VPL_ExtField _ATSFontMetrics_7 = { "minLeftSideBearing",24,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_8};
	VPL_ExtField _ATSFontMetrics_6 = { "maxAdvanceWidth",20,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_7};
	VPL_ExtField _ATSFontMetrics_5 = { "avgAdvanceWidth",16,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_6};
	VPL_ExtField _ATSFontMetrics_4 = { "leading",12,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_5};
	VPL_ExtField _ATSFontMetrics_3 = { "descent",8,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_4};
	VPL_ExtField _ATSFontMetrics_2 = { "ascent",4,4,kFloatType,"NULL",0,0,"float",&_ATSFontMetrics_3};
	VPL_ExtField _ATSFontMetrics_1 = { "version",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ATSFontMetrics_2};
	VPL_ExtStructure _ATSFontMetrics_S = {"ATSFontMetrics",&_ATSFontMetrics_1};

	VPL_ExtField _FMFilter_3 = { "filter",8,70,kStructureType,"NULL",0,0,"1186",NULL};
	VPL_ExtField _FMFilter_2 = { "selector",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FMFilter_3};
	VPL_ExtField _FMFilter_1 = { "format",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FMFilter_2};
	VPL_ExtStructure _FMFilter_S = {"FMFilter",&_FMFilter_1};

	VPL_ExtField _FMFontDirectoryFilter_2 = { "reserved",2,8,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _FMFontDirectoryFilter_1 = { "fontFolderDomain",0,2,kIntType,"unsigned long",0,4,"short",&_FMFontDirectoryFilter_2};
	VPL_ExtStructure _FMFontDirectoryFilter_S = {"FMFontDirectoryFilter",&_FMFontDirectoryFilter_1};

	VPL_ExtField _FMFontFamilyInstanceIterator_1 = { "reserved",0,64,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtStructure _FMFontFamilyInstanceIterator_S = {"FMFontFamilyInstanceIterator",&_FMFontFamilyInstanceIterator_1};

	VPL_ExtField _FMFontIterator_1 = { "reserved",0,64,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtStructure _FMFontIterator_S = {"FMFontIterator",&_FMFontIterator_1};

	VPL_ExtField _FMFontFamilyIterator_1 = { "reserved",0,64,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtStructure _FMFontFamilyIterator_S = {"FMFontFamilyIterator",&_FMFontFamilyIterator_1};

	VPL_ExtField _FMFontFamilyInstance_2 = { "fontStyle",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _FMFontFamilyInstance_1 = { "fontFamily",0,2,kIntType,"NULL",0,0,"short",&_FMFontFamilyInstance_2};
	VPL_ExtStructure _FMFontFamilyInstance_S = {"FMFontFamilyInstance",&_FMFontFamilyInstance_1};

	VPL_ExtField _BslnTable_4 = { "parts",8,84,kStructureType,"NULL",0,0,"BslnFormatUnion",NULL};
	VPL_ExtField _BslnTable_3 = { "defaultBaseline",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_BslnTable_4};
	VPL_ExtField _BslnTable_2 = { "format",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_BslnTable_3};
	VPL_ExtField _BslnTable_1 = { "version",0,4,kIntType,"NULL",0,0,"long int",&_BslnTable_2};
	VPL_ExtStructure _BslnTable_S = {"BslnTable",&_BslnTable_1};

	VPL_ExtField _BslnFormat3Part_3 = { "mappingData",66,18,kStructureType,"NULL",0,0,"SFNTLookupTable",NULL};
	VPL_ExtField _BslnFormat3Part_2 = { "ctlPoints",2,64,kPointerType,"short",0,2,NULL,&_BslnFormat3Part_3};
	VPL_ExtField _BslnFormat3Part_1 = { "stdGlyph",0,2,kUnsignedType,"short",0,2,"unsigned short",&_BslnFormat3Part_2};
	VPL_ExtStructure _BslnFormat3Part_S = {"BslnFormat3Part",&_BslnFormat3Part_1};

	VPL_ExtField _BslnFormat2Part_2 = { "ctlPoints",2,64,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _BslnFormat2Part_1 = { "stdGlyph",0,2,kUnsignedType,"short",0,2,"unsigned short",&_BslnFormat2Part_2};
	VPL_ExtStructure _BslnFormat2Part_S = {"BslnFormat2Part",&_BslnFormat2Part_1};

	VPL_ExtField _BslnFormat1Part_2 = { "mappingData",64,18,kStructureType,"NULL",0,0,"SFNTLookupTable",NULL};
	VPL_ExtField _BslnFormat1Part_1 = { "deltas",0,64,kPointerType,"short",0,2,NULL,&_BslnFormat1Part_2};
	VPL_ExtStructure _BslnFormat1Part_S = {"BslnFormat1Part",&_BslnFormat1Part_1};

	VPL_ExtField _BslnFormat0Part_1 = { "deltas",0,64,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtStructure _BslnFormat0Part_S = {"BslnFormat0Part",&_BslnFormat0Part_1};

	VPL_ExtField _KernSubtableHeader_4 = { "fsHeader",8,12,kStructureType,"NULL",0,0,"KernFormatSpecificHeader",NULL};
	VPL_ExtField _KernSubtableHeader_3 = { "tupleIndex",6,2,kIntType,"NULL",0,0,"short",&_KernSubtableHeader_4};
	VPL_ExtField _KernSubtableHeader_2 = { "stInfo",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_KernSubtableHeader_3};
	VPL_ExtField _KernSubtableHeader_1 = { "length",0,4,kIntType,"NULL",0,0,"long int",&_KernSubtableHeader_2};
	VPL_ExtStructure _KernSubtableHeader_S = {"KernSubtableHeader",&_KernSubtableHeader_1};

	VPL_ExtField _KernVersion0SubtableHeader_4 = { "fsHeader",6,12,kStructureType,"NULL",0,0,"KernFormatSpecificHeader",NULL};
	VPL_ExtField _KernVersion0SubtableHeader_3 = { "stInfo",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_KernVersion0SubtableHeader_4};
	VPL_ExtField _KernVersion0SubtableHeader_2 = { "length",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_KernVersion0SubtableHeader_3};
	VPL_ExtField _KernVersion0SubtableHeader_1 = { "version",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_KernVersion0SubtableHeader_2};
	VPL_ExtStructure _KernVersion0SubtableHeader_S = {"KernVersion0SubtableHeader",&_KernVersion0SubtableHeader_1};

	VPL_ExtField _KernIndexArrayHeader_9 = { "kernIndex",10,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _KernIndexArrayHeader_8 = { "rightClass",9,1,kPointerType,"unsigned char",0,1,NULL,&_KernIndexArrayHeader_9};
	VPL_ExtField _KernIndexArrayHeader_7 = { "leftClass",8,1,kPointerType,"unsigned char",0,1,NULL,&_KernIndexArrayHeader_8};
	VPL_ExtField _KernIndexArrayHeader_6 = { "kernValue",6,2,kPointerType,"short",0,2,NULL,&_KernIndexArrayHeader_7};
	VPL_ExtField _KernIndexArrayHeader_5 = { "flags",5,1,kUnsignedType,"short",0,2,"unsigned char",&_KernIndexArrayHeader_6};
	VPL_ExtField _KernIndexArrayHeader_4 = { "rightClassCount",4,1,kUnsignedType,"short",0,2,"unsigned char",&_KernIndexArrayHeader_5};
	VPL_ExtField _KernIndexArrayHeader_3 = { "leftClassCount",3,1,kUnsignedType,"short",0,2,"unsigned char",&_KernIndexArrayHeader_4};
	VPL_ExtField _KernIndexArrayHeader_2 = { "kernValueCount",2,1,kUnsignedType,"short",0,2,"unsigned char",&_KernIndexArrayHeader_3};
	VPL_ExtField _KernIndexArrayHeader_1 = { "glyphCount",0,2,kUnsignedType,"short",0,2,"unsigned short",&_KernIndexArrayHeader_2};
	VPL_ExtStructure _KernIndexArrayHeader_S = {"KernIndexArrayHeader",&_KernIndexArrayHeader_1};

	VPL_ExtField _KernSimpleArrayHeader_5 = { "firstTable",8,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _KernSimpleArrayHeader_4 = { "theArray",6,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernSimpleArrayHeader_5};
	VPL_ExtField _KernSimpleArrayHeader_3 = { "rightOffsetTable",4,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernSimpleArrayHeader_4};
	VPL_ExtField _KernSimpleArrayHeader_2 = { "leftOffsetTable",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernSimpleArrayHeader_3};
	VPL_ExtField _KernSimpleArrayHeader_1 = { "rowWidth",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernSimpleArrayHeader_2};
	VPL_ExtStructure _KernSimpleArrayHeader_S = {"KernSimpleArrayHeader",&_KernSimpleArrayHeader_1};

	VPL_ExtField _KernOffsetTable_3 = { "offsetTable",4,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _KernOffsetTable_2 = { "nGlyphs",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernOffsetTable_3};
	VPL_ExtField _KernOffsetTable_1 = { "firstGlyph",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernOffsetTable_2};
	VPL_ExtStructure _KernOffsetTable_S = {"KernOffsetTable",&_KernOffsetTable_1};

	VPL_ExtField _KernStateEntry_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _KernStateEntry_1 = { "newState",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_KernStateEntry_2};
	VPL_ExtStructure _KernStateEntry_S = {"KernStateEntry",&_KernStateEntry_1};

	VPL_ExtField _KernStateHeader_3 = { "firstTable",10,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _KernStateHeader_2 = { "valueTable",8,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_KernStateHeader_3};
	VPL_ExtField _KernStateHeader_1 = { "header",0,8,kStructureType,"unsigned char",0,1,"STHeader",&_KernStateHeader_2};
	VPL_ExtStructure _KernStateHeader_S = {"KernStateHeader",&_KernStateHeader_1};

	VPL_ExtField _KernOrderedListHeader_5 = { "table",8,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _KernOrderedListHeader_4 = { "rangeShift",6,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernOrderedListHeader_5};
	VPL_ExtField _KernOrderedListHeader_3 = { "entrySelector",4,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernOrderedListHeader_4};
	VPL_ExtField _KernOrderedListHeader_2 = { "searchRange",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernOrderedListHeader_3};
	VPL_ExtField _KernOrderedListHeader_1 = { "nPairs",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernOrderedListHeader_2};
	VPL_ExtStructure _KernOrderedListHeader_S = {"KernOrderedListHeader",&_KernOrderedListHeader_1};

	VPL_ExtField _KernOrderedListEntry_2 = { "value",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _KernOrderedListEntry_1 = { "pair",0,4,kStructureType,"NULL",0,0,"KernKerningPair",&_KernOrderedListEntry_2};
	VPL_ExtStructure _KernOrderedListEntry_S = {"KernOrderedListEntry",&_KernOrderedListEntry_1};

	VPL_ExtField _KernKerningPair_2 = { "right",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _KernKerningPair_1 = { "left",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_KernKerningPair_2};
	VPL_ExtStructure _KernKerningPair_S = {"KernKerningPair",&_KernKerningPair_1};

	VPL_ExtField _KernTableHeader_3 = { "firstSubtable",8,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _KernTableHeader_2 = { "nTables",4,4,kIntType,"unsigned short",0,2,"long int",&_KernTableHeader_3};
	VPL_ExtField _KernTableHeader_1 = { "version",0,4,kIntType,"unsigned short",0,2,"long int",&_KernTableHeader_2};
	VPL_ExtStructure _KernTableHeader_S = {"KernTableHeader",&_KernTableHeader_1};

	VPL_ExtField _KernVersion0Header_3 = { "firstSubtable",4,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _KernVersion0Header_2 = { "nTables",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernVersion0Header_3};
	VPL_ExtField _KernVersion0Header_1 = { "version",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_KernVersion0Header_2};
	VPL_ExtStructure _KernVersion0Header_S = {"KernVersion0Header",&_KernVersion0Header_1};

	VPL_ExtField _TrakTable_4 = { "vertOffset",8,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _TrakTable_3 = { "horizOffset",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TrakTable_4};
	VPL_ExtField _TrakTable_2 = { "format",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TrakTable_3};
	VPL_ExtField _TrakTable_1 = { "version",0,4,kIntType,"NULL",0,0,"long int",&_TrakTable_2};
	VPL_ExtStructure _TrakTable_S = {"TrakTable",&_TrakTable_1};

	VPL_ExtField _TrakTableData_4 = { "trakTable",8,8,kPointerType,"TrakTableEntry",0,8,NULL,NULL};
	VPL_ExtField _TrakTableData_3 = { "sizeTableOffset",4,4,kUnsignedType,"TrakTableEntry",0,8,"unsigned long",&_TrakTableData_4};
	VPL_ExtField _TrakTableData_2 = { "nSizes",2,2,kUnsignedType,"TrakTableEntry",0,8,"unsigned short",&_TrakTableData_3};
	VPL_ExtField _TrakTableData_1 = { "nTracks",0,2,kUnsignedType,"TrakTableEntry",0,8,"unsigned short",&_TrakTableData_2};
	VPL_ExtStructure _TrakTableData_S = {"TrakTableData",&_TrakTableData_1};

	VPL_ExtField _TrakTableEntry_3 = { "sizesOffset",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _TrakTableEntry_2 = { "nameTableIndex",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TrakTableEntry_3};
	VPL_ExtField _TrakTableEntry_1 = { "track",0,4,kIntType,"NULL",0,0,"long int",&_TrakTableEntry_2};
	VPL_ExtStructure _TrakTableEntry_S = {"TrakTableEntry",&_TrakTableEntry_1};

	VPL_ExtField _PropLookupSingle_2 = { "props",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _PropLookupSingle_1 = { "glyph",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PropLookupSingle_2};
	VPL_ExtStructure _PropLookupSingle_S = {"PropLookupSingle",&_PropLookupSingle_1};

	VPL_ExtField _PropLookupSegment_3 = { "value",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _PropLookupSegment_2 = { "firstGlyph",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PropLookupSegment_3};
	VPL_ExtField _PropLookupSegment_1 = { "lastGlyph",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PropLookupSegment_2};
	VPL_ExtStructure _PropLookupSegment_S = {"PropLookupSegment",&_PropLookupSegment_1};

	VPL_ExtField _PropTable_4 = { "lookup",8,18,kStructureType,"NULL",0,0,"SFNTLookupTable",NULL};
	VPL_ExtField _PropTable_3 = { "defaultProps",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PropTable_4};
	VPL_ExtField _PropTable_2 = { "format",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PropTable_3};
	VPL_ExtField _PropTable_1 = { "version",0,4,kIntType,"NULL",0,0,"long int",&_PropTable_2};
	VPL_ExtStructure _PropTable_S = {"PropTable",&_PropTable_1};

	VPL_ExtField _MorxTable_3 = { "chains",8,28,kPointerType,"MorxChain",0,28,NULL,NULL};
	VPL_ExtField _MorxTable_2 = { "nChains",4,4,kUnsignedType,"MorxChain",0,28,"unsigned long",&_MorxTable_3};
	VPL_ExtField _MorxTable_1 = { "version",0,4,kIntType,"MorxChain",0,28,"long int",&_MorxTable_2};
	VPL_ExtStructure _MorxTable_S = {"MorxTable",&_MorxTable_1};

	VPL_ExtField _MorxChain_5 = { "featureEntries",16,12,kPointerType,"MortFeatureEntry",0,12,NULL,NULL};
	VPL_ExtField _MorxChain_4 = { "nSubtables",12,4,kUnsignedType,"MortFeatureEntry",0,12,"unsigned long",&_MorxChain_5};
	VPL_ExtField _MorxChain_3 = { "nFeatures",8,4,kUnsignedType,"MortFeatureEntry",0,12,"unsigned long",&_MorxChain_4};
	VPL_ExtField _MorxChain_2 = { "length",4,4,kUnsignedType,"MortFeatureEntry",0,12,"unsigned long",&_MorxChain_3};
	VPL_ExtField _MorxChain_1 = { "defaultFlags",0,4,kUnsignedType,"MortFeatureEntry",0,12,"unsigned long",&_MorxChain_2};
	VPL_ExtStructure _MorxChain_S = {"MorxChain",&_MorxChain_1};

	VPL_ExtField _MorxSubtable_4 = { "u",12,28,kStructureType,"NULL",0,0,"MorxSpecificSubtable",NULL};
	VPL_ExtField _MorxSubtable_3 = { "flags",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MorxSubtable_4};
	VPL_ExtField _MorxSubtable_2 = { "coverage",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MorxSubtable_3};
	VPL_ExtField _MorxSubtable_1 = { "length",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MorxSubtable_2};
	VPL_ExtStructure _MorxSubtable_S = {"MorxSubtable",&_MorxSubtable_1};

	VPL_ExtField _MorxInsertionSubtable_2 = { "insertionGlyphTableOffset",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MorxInsertionSubtable_1 = { "header",0,16,kStructureType,"NULL",0,0,"STXHeader",&_MorxInsertionSubtable_2};
	VPL_ExtStructure _MorxInsertionSubtable_S = {"MorxInsertionSubtable",&_MorxInsertionSubtable_1};

	VPL_ExtField _MorxLigatureSubtable_4 = { "ligatureTableOffset",24,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MorxLigatureSubtable_3 = { "componentTableOffset",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MorxLigatureSubtable_4};
	VPL_ExtField _MorxLigatureSubtable_2 = { "ligatureActionTableOffset",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MorxLigatureSubtable_3};
	VPL_ExtField _MorxLigatureSubtable_1 = { "header",0,16,kStructureType,"NULL",0,0,"STXHeader",&_MorxLigatureSubtable_2};
	VPL_ExtStructure _MorxLigatureSubtable_S = {"MorxLigatureSubtable",&_MorxLigatureSubtable_1};

	VPL_ExtField _MorxContextualSubtable_2 = { "substitutionTableOffset",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MorxContextualSubtable_1 = { "header",0,16,kStructureType,"NULL",0,0,"STXHeader",&_MorxContextualSubtable_2};
	VPL_ExtStructure _MorxContextualSubtable_S = {"MorxContextualSubtable",&_MorxContextualSubtable_1};

	VPL_ExtField _MorxRearrangementSubtable_1 = { "header",0,16,kStructureType,"NULL",0,0,"STXHeader",NULL};
	VPL_ExtStructure _MorxRearrangementSubtable_S = {"MorxRearrangementSubtable",&_MorxRearrangementSubtable_1};

	VPL_ExtField _MortTable_3 = { "chains",8,24,kPointerType,"MortChain",0,24,NULL,NULL};
	VPL_ExtField _MortTable_2 = { "nChains",4,4,kUnsignedType,"MortChain",0,24,"unsigned long",&_MortTable_3};
	VPL_ExtField _MortTable_1 = { "version",0,4,kIntType,"MortChain",0,24,"long int",&_MortTable_2};
	VPL_ExtStructure _MortTable_S = {"MortTable",&_MortTable_1};

	VPL_ExtField _MortChain_5 = { "featureEntries",12,12,kPointerType,"MortFeatureEntry",0,12,NULL,NULL};
	VPL_ExtField _MortChain_4 = { "nSubtables",10,2,kUnsignedType,"MortFeatureEntry",0,12,"unsigned short",&_MortChain_5};
	VPL_ExtField _MortChain_3 = { "nFeatures",8,2,kUnsignedType,"MortFeatureEntry",0,12,"unsigned short",&_MortChain_4};
	VPL_ExtField _MortChain_2 = { "length",4,4,kUnsignedType,"MortFeatureEntry",0,12,"unsigned long",&_MortChain_3};
	VPL_ExtField _MortChain_1 = { "defaultFlags",0,4,kUnsignedType,"MortFeatureEntry",0,12,"unsigned long",&_MortChain_2};
	VPL_ExtStructure _MortChain_S = {"MortChain",&_MortChain_1};

	VPL_ExtField _MortFeatureEntry_4 = { "disableFlags",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MortFeatureEntry_3 = { "enableFlags",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MortFeatureEntry_4};
	VPL_ExtField _MortFeatureEntry_2 = { "featureSelector",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MortFeatureEntry_3};
	VPL_ExtField _MortFeatureEntry_1 = { "featureType",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MortFeatureEntry_2};
	VPL_ExtStructure _MortFeatureEntry_S = {"MortFeatureEntry",&_MortFeatureEntry_1};

	VPL_ExtField _MortSubtable_4 = { "u",8,18,kStructureType,"NULL",0,0,"MortSpecificSubtable",NULL};
	VPL_ExtField _MortSubtable_3 = { "flags",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MortSubtable_4};
	VPL_ExtField _MortSubtable_2 = { "coverage",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MortSubtable_3};
	VPL_ExtField _MortSubtable_1 = { "length",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MortSubtable_2};
	VPL_ExtStructure _MortSubtable_S = {"MortSubtable",&_MortSubtable_1};

	VPL_ExtField _MortInsertionSubtable_1 = { "header",0,8,kStructureType,"NULL",0,0,"STHeader",NULL};
	VPL_ExtStructure _MortInsertionSubtable_S = {"MortInsertionSubtable",&_MortInsertionSubtable_1};

	VPL_ExtField _MortSwashSubtable_1 = { "lookup",0,18,kStructureType,"NULL",0,0,"SFNTLookupTable",NULL};
	VPL_ExtStructure _MortSwashSubtable_S = {"MortSwashSubtable",&_MortSwashSubtable_1};

	VPL_ExtField _MortLigatureSubtable_4 = { "ligatureTableOffset",12,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _MortLigatureSubtable_3 = { "componentTableOffset",10,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MortLigatureSubtable_4};
	VPL_ExtField _MortLigatureSubtable_2 = { "ligatureActionTableOffset",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_MortLigatureSubtable_3};
	VPL_ExtField _MortLigatureSubtable_1 = { "header",0,8,kStructureType,"NULL",0,0,"STHeader",&_MortLigatureSubtable_2};
	VPL_ExtStructure _MortLigatureSubtable_S = {"MortLigatureSubtable",&_MortLigatureSubtable_1};

	VPL_ExtField _MortContextualSubtable_2 = { "substitutionTableOffset",8,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _MortContextualSubtable_1 = { "header",0,8,kStructureType,"NULL",0,0,"STHeader",&_MortContextualSubtable_2};
	VPL_ExtStructure _MortContextualSubtable_S = {"MortContextualSubtable",&_MortContextualSubtable_1};

	VPL_ExtField _MortRearrangementSubtable_1 = { "header",0,8,kStructureType,"NULL",0,0,"STHeader",NULL};
	VPL_ExtStructure _MortRearrangementSubtable_S = {"MortRearrangementSubtable",&_MortRearrangementSubtable_1};

	VPL_ExtField _OpbdTable_3 = { "lookupTable",6,18,kStructureType,"NULL",0,0,"SFNTLookupTable",NULL};
	VPL_ExtField _OpbdTable_2 = { "format",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_OpbdTable_3};
	VPL_ExtField _OpbdTable_1 = { "version",0,4,kIntType,"NULL",0,0,"long int",&_OpbdTable_2};
	VPL_ExtStructure _OpbdTable_S = {"OpbdTable",&_OpbdTable_1};

	VPL_ExtField _OpbdSideValues_4 = { "bottomSideShift",6,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _OpbdSideValues_3 = { "rightSideShift",4,2,kIntType,"NULL",0,0,"short",&_OpbdSideValues_4};
	VPL_ExtField _OpbdSideValues_2 = { "topSideShift",2,2,kIntType,"NULL",0,0,"short",&_OpbdSideValues_3};
	VPL_ExtField _OpbdSideValues_1 = { "leftSideShift",0,2,kIntType,"NULL",0,0,"short",&_OpbdSideValues_2};
	VPL_ExtStructure _OpbdSideValues_S = {"OpbdSideValues",&_OpbdSideValues_1};

	VPL_ExtField _JustTable_4 = { "vertHeaderOffset",8,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _JustTable_3 = { "horizHeaderOffset",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustTable_4};
	VPL_ExtField _JustTable_2 = { "format",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustTable_3};
	VPL_ExtField _JustTable_1 = { "version",0,4,kIntType,"NULL",0,0,"long int",&_JustTable_2};
	VPL_ExtStructure _JustTable_S = {"JustTable",&_JustTable_1};

	VPL_ExtField _JustDirectionTable_4 = { "lookup",6,18,kStructureType,"NULL",0,0,"SFNTLookupTable",NULL};
	VPL_ExtField _JustDirectionTable_3 = { "postcomp",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustDirectionTable_4};
	VPL_ExtField _JustDirectionTable_2 = { "widthDeltaClusters",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustDirectionTable_3};
	VPL_ExtField _JustDirectionTable_1 = { "justClass",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustDirectionTable_2};
	VPL_ExtStructure _JustDirectionTable_S = {"JustDirectionTable",&_JustDirectionTable_1};

	VPL_ExtField _JustPostcompTable_1 = { "lookupTable",0,18,kStructureType,"NULL",0,0,"SFNTLookupTable",NULL};
	VPL_ExtStructure _JustPostcompTable_S = {"JustPostcompTable",&_JustPostcompTable_1};

	VPL_ExtField _JustWidthDeltaGroup_2 = { "entries",4,24,kPointerType,"JustWidthDeltaEntry",0,24,NULL,NULL};
	VPL_ExtField _JustWidthDeltaGroup_1 = { "count",0,4,kUnsignedType,"JustWidthDeltaEntry",0,24,"unsigned long",&_JustWidthDeltaGroup_2};
	VPL_ExtStructure _JustWidthDeltaGroup_S = {"JustWidthDeltaGroup",&_JustWidthDeltaGroup_1};

	VPL_ExtField _JustWidthDeltaEntry_7 = { "shrinkFlags",22,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _JustWidthDeltaEntry_6 = { "growFlags",20,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustWidthDeltaEntry_7};
	VPL_ExtField _JustWidthDeltaEntry_5 = { "afterShrinkLimit",16,4,kIntType,"NULL",0,0,"long int",&_JustWidthDeltaEntry_6};
	VPL_ExtField _JustWidthDeltaEntry_4 = { "afterGrowLimit",12,4,kIntType,"NULL",0,0,"long int",&_JustWidthDeltaEntry_5};
	VPL_ExtField _JustWidthDeltaEntry_3 = { "beforeShrinkLimit",8,4,kIntType,"NULL",0,0,"long int",&_JustWidthDeltaEntry_4};
	VPL_ExtField _JustWidthDeltaEntry_2 = { "beforeGrowLimit",4,4,kIntType,"NULL",0,0,"long int",&_JustWidthDeltaEntry_3};
	VPL_ExtField _JustWidthDeltaEntry_1 = { "justClass",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_JustWidthDeltaEntry_2};
	VPL_ExtStructure _JustWidthDeltaEntry_S = {"JustWidthDeltaEntry",&_JustWidthDeltaEntry_1};

	VPL_ExtField _JustPCAction_2 = { "actions",4,12,kPointerType,"JustPCActionSubrecord",0,12,NULL,NULL};
	VPL_ExtField _JustPCAction_1 = { "actionCount",0,4,kUnsignedType,"JustPCActionSubrecord",0,12,"unsigned long",&_JustPCAction_2};
	VPL_ExtStructure _JustPCAction_S = {"JustPCAction",&_JustPCAction_1};

	VPL_ExtField _JustPCActionSubrecord_4 = { "data",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _JustPCActionSubrecord_3 = { "length",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_JustPCActionSubrecord_4};
	VPL_ExtField _JustPCActionSubrecord_2 = { "theType",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustPCActionSubrecord_3};
	VPL_ExtField _JustPCActionSubrecord_1 = { "theClass",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustPCActionSubrecord_2};
	VPL_ExtStructure _JustPCActionSubrecord_S = {"JustPCActionSubrecord",&_JustPCActionSubrecord_1};

	VPL_ExtField _JustPCGlyphRepeatAddAction_2 = { "glyph",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _JustPCGlyphRepeatAddAction_1 = { "flags",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustPCGlyphRepeatAddAction_2};
	VPL_ExtStructure _JustPCGlyphRepeatAddAction_S = {"JustPCGlyphRepeatAddAction",&_JustPCGlyphRepeatAddAction_1};

	VPL_ExtField _JustPCDuctilityAction_4 = { "maximumLimit",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _JustPCDuctilityAction_3 = { "noStretchValue",8,4,kIntType,"NULL",0,0,"long int",&_JustPCDuctilityAction_4};
	VPL_ExtField _JustPCDuctilityAction_2 = { "minimumLimit",4,4,kIntType,"NULL",0,0,"long int",&_JustPCDuctilityAction_3};
	VPL_ExtField _JustPCDuctilityAction_1 = { "ductilityAxis",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_JustPCDuctilityAction_2};
	VPL_ExtStructure _JustPCDuctilityAction_S = {"JustPCDuctilityAction",&_JustPCDuctilityAction_1};

	VPL_ExtField _JustPCConditionalAddAction_3 = { "substGlyph",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _JustPCConditionalAddAction_2 = { "addGlyph",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_JustPCConditionalAddAction_3};
	VPL_ExtField _JustPCConditionalAddAction_1 = { "substThreshhold",0,4,kIntType,"NULL",0,0,"long int",&_JustPCConditionalAddAction_2};
	VPL_ExtStructure _JustPCConditionalAddAction_S = {"JustPCConditionalAddAction",&_JustPCConditionalAddAction_1};

	VPL_ExtField _JustPCDecompositionAction_5 = { "glyphs",12,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _JustPCDecompositionAction_4 = { "count",10,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_JustPCDecompositionAction_5};
	VPL_ExtField _JustPCDecompositionAction_3 = { "order",8,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_JustPCDecompositionAction_4};
	VPL_ExtField _JustPCDecompositionAction_2 = { "upperLimit",4,4,kIntType,"unsigned short",0,2,"long int",&_JustPCDecompositionAction_3};
	VPL_ExtField _JustPCDecompositionAction_1 = { "lowerLimit",0,4,kIntType,"unsigned short",0,2,"long int",&_JustPCDecompositionAction_2};
	VPL_ExtStructure _JustPCDecompositionAction_S = {"JustPCDecompositionAction",&_JustPCDecompositionAction_1};

	VPL_ExtField _LcarCaretTable_3 = { "lookup",6,18,kStructureType,"NULL",0,0,"SFNTLookupTable",NULL};
	VPL_ExtField _LcarCaretTable_2 = { "format",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_LcarCaretTable_3};
	VPL_ExtField _LcarCaretTable_1 = { "version",0,4,kIntType,"NULL",0,0,"long int",&_LcarCaretTable_2};
	VPL_ExtStructure _LcarCaretTable_S = {"LcarCaretTable",&_LcarCaretTable_1};

	VPL_ExtField _LcarCaretClassEntry_2 = { "partials",2,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _LcarCaretClassEntry_1 = { "count",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_LcarCaretClassEntry_2};
	VPL_ExtStructure _LcarCaretClassEntry_S = {"LcarCaretClassEntry",&_LcarCaretClassEntry_1};

	VPL_ExtField _STXEntryTwo_4 = { "index2",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _STXEntryTwo_3 = { "index1",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STXEntryTwo_4};
	VPL_ExtField _STXEntryTwo_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STXEntryTwo_3};
	VPL_ExtField _STXEntryTwo_1 = { "newState",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STXEntryTwo_2};
	VPL_ExtStructure _STXEntryTwo_S = {"STXEntryTwo",&_STXEntryTwo_1};

	VPL_ExtField _STXEntryOne_3 = { "index1",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _STXEntryOne_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STXEntryOne_3};
	VPL_ExtField _STXEntryOne_1 = { "newState",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STXEntryOne_2};
	VPL_ExtStructure _STXEntryOne_S = {"STXEntryOne",&_STXEntryOne_1};

	VPL_ExtField _STXEntryZero_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _STXEntryZero_1 = { "newState",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STXEntryZero_2};
	VPL_ExtStructure _STXEntryZero_S = {"STXEntryZero",&_STXEntryZero_1};

	VPL_ExtField _STXHeader_4 = { "entryTableOffset",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _STXHeader_3 = { "stateArrayOffset",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_STXHeader_4};
	VPL_ExtField _STXHeader_2 = { "classTableOffset",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_STXHeader_3};
	VPL_ExtField _STXHeader_1 = { "nClasses",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_STXHeader_2};
	VPL_ExtStructure _STXHeader_S = {"STXHeader",&_STXHeader_1};

	VPL_ExtField _STEntryTwo_4 = { "offset2",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _STEntryTwo_3 = { "offset1",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STEntryTwo_4};
	VPL_ExtField _STEntryTwo_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STEntryTwo_3};
	VPL_ExtField _STEntryTwo_1 = { "newState",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STEntryTwo_2};
	VPL_ExtStructure _STEntryTwo_S = {"STEntryTwo",&_STEntryTwo_1};

	VPL_ExtField _STEntryOne_3 = { "offset1",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _STEntryOne_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STEntryOne_3};
	VPL_ExtField _STEntryOne_1 = { "newState",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STEntryOne_2};
	VPL_ExtStructure _STEntryOne_S = {"STEntryOne",&_STEntryOne_1};

	VPL_ExtField _STEntryZero_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _STEntryZero_1 = { "newState",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STEntryZero_2};
	VPL_ExtStructure _STEntryZero_S = {"STEntryZero",&_STEntryZero_1};

	VPL_ExtField _STClassTable_3 = { "classes",4,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _STClassTable_2 = { "nGlyphs",2,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_STClassTable_3};
	VPL_ExtField _STClassTable_1 = { "firstGlyph",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_STClassTable_2};
	VPL_ExtStructure _STClassTable_S = {"STClassTable",&_STClassTable_1};

	VPL_ExtField _STHeader_5 = { "entryTableOffset",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _STHeader_4 = { "stateArrayOffset",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STHeader_5};
	VPL_ExtField _STHeader_3 = { "classTableOffset",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_STHeader_4};
	VPL_ExtField _STHeader_2 = { "nClasses",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_STHeader_3};
	VPL_ExtField _STHeader_1 = { "filler",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_STHeader_2};
	VPL_ExtStructure _STHeader_S = {"STHeader",&_STHeader_1};

	VPL_ExtField _SFNTLookupTable_2 = { "fsHeader",2,16,kStructureType,"NULL",0,0,"SFNTLookupFormatSpecificHeader",NULL};
	VPL_ExtField _SFNTLookupTable_1 = { "format",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SFNTLookupTable_2};
	VPL_ExtStructure _SFNTLookupTable_S = {"SFNTLookupTable",&_SFNTLookupTable_1};

	VPL_ExtField _SFNTLookupSingleHeader_2 = { "entries",10,4,kPointerType,"SFNTLookupSingle",0,4,NULL,NULL};
	VPL_ExtField _SFNTLookupSingleHeader_1 = { "binSearch",0,10,kStructureType,"SFNTLookupSingle",0,4,"SFNTLookupBinarySearchHeader",&_SFNTLookupSingleHeader_2};
	VPL_ExtStructure _SFNTLookupSingleHeader_S = {"SFNTLookupSingleHeader",&_SFNTLookupSingleHeader_1};

	VPL_ExtField _SFNTLookupSingle_2 = { "value",2,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _SFNTLookupSingle_1 = { "glyph",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SFNTLookupSingle_2};
	VPL_ExtStructure _SFNTLookupSingle_S = {"SFNTLookupSingle",&_SFNTLookupSingle_1};

	VPL_ExtField _SFNTLookupSegmentHeader_2 = { "segments",10,6,kPointerType,"SFNTLookupSegment",0,6,NULL,NULL};
	VPL_ExtField _SFNTLookupSegmentHeader_1 = { "binSearch",0,10,kStructureType,"SFNTLookupSegment",0,6,"SFNTLookupBinarySearchHeader",&_SFNTLookupSegmentHeader_2};
	VPL_ExtStructure _SFNTLookupSegmentHeader_S = {"SFNTLookupSegmentHeader",&_SFNTLookupSegmentHeader_1};

	VPL_ExtField _SFNTLookupSegment_3 = { "value",4,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _SFNTLookupSegment_2 = { "firstGlyph",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SFNTLookupSegment_3};
	VPL_ExtField _SFNTLookupSegment_1 = { "lastGlyph",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SFNTLookupSegment_2};
	VPL_ExtStructure _SFNTLookupSegment_S = {"SFNTLookupSegment",&_SFNTLookupSegment_1};

	VPL_ExtField _SFNTLookupTrimmedArrayHeader_3 = { "valueArray",4,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _SFNTLookupTrimmedArrayHeader_2 = { "count",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SFNTLookupTrimmedArrayHeader_3};
	VPL_ExtField _SFNTLookupTrimmedArrayHeader_1 = { "firstGlyph",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SFNTLookupTrimmedArrayHeader_2};
	VPL_ExtStructure _SFNTLookupTrimmedArrayHeader_S = {"SFNTLookupTrimmedArrayHeader",&_SFNTLookupTrimmedArrayHeader_1};

	VPL_ExtField _SFNTLookupArrayHeader_1 = { "lookupValues",0,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtStructure _SFNTLookupArrayHeader_S = {"SFNTLookupArrayHeader",&_SFNTLookupArrayHeader_1};

	VPL_ExtField _SFNTLookupBinarySearchHeader_5 = { "rangeShift",8,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _SFNTLookupBinarySearchHeader_4 = { "entrySelector",6,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SFNTLookupBinarySearchHeader_5};
	VPL_ExtField _SFNTLookupBinarySearchHeader_3 = { "searchRange",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SFNTLookupBinarySearchHeader_4};
	VPL_ExtField _SFNTLookupBinarySearchHeader_2 = { "nUnits",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SFNTLookupBinarySearchHeader_3};
	VPL_ExtField _SFNTLookupBinarySearchHeader_1 = { "unitSize",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SFNTLookupBinarySearchHeader_2};
	VPL_ExtStructure _SFNTLookupBinarySearchHeader_S = {"SFNTLookupBinarySearchHeader",&_SFNTLookupBinarySearchHeader_1};

	VPL_ExtStructure ___CFHTTPMessage_S = {"__CFHTTPMessage",NULL};

	VPL_ExtField _KCCallbackInfo_5 = { "keychain",32,4,kPointerType,"OpaqueSecKeychainRef",1,0,"T*",NULL};
	VPL_ExtField _KCCallbackInfo_4 = { "event",16,16,kPointerType,"long int",0,4,NULL,&_KCCallbackInfo_5};
	VPL_ExtField _KCCallbackInfo_3 = { "processID",8,8,kPointerType,"long int",0,4,NULL,&_KCCallbackInfo_4};
	VPL_ExtField _KCCallbackInfo_2 = { "item",4,4,kPointerType,"OpaqueSecKeychainItemRef",1,0,"T*",&_KCCallbackInfo_3};
	VPL_ExtField _KCCallbackInfo_1 = { "version",0,4,kUnsignedType,"OpaqueSecKeychainItemRef",1,0,"unsigned long",&_KCCallbackInfo_2};
	VPL_ExtStructure _KCCallbackInfo_S = {"KCCallbackInfo",&_KCCallbackInfo_1};

	VPL_ExtField _SecKeychainAttributeList_2 = { "attr",4,4,kPointerType,"SecKeychainAttribute",1,12,"T*",NULL};
	VPL_ExtField _SecKeychainAttributeList_1 = { "count",0,4,kUnsignedType,"SecKeychainAttribute",1,12,"unsigned long",&_SecKeychainAttributeList_2};
	VPL_ExtStructure _SecKeychainAttributeList_S = {"SecKeychainAttributeList",&_SecKeychainAttributeList_1};

	VPL_ExtField _SecKeychainAttribute_3 = { "data",8,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _SecKeychainAttribute_2 = { "length",4,4,kUnsignedType,"void",1,0,"unsigned long",&_SecKeychainAttribute_3};
	VPL_ExtField _SecKeychainAttribute_1 = { "tag",0,4,kUnsignedType,"void",1,0,"unsigned long",&_SecKeychainAttribute_2};
	VPL_ExtStructure _SecKeychainAttribute_S = {"SecKeychainAttribute",&_SecKeychainAttribute_1};

	VPL_ExtStructure _OpaqueSecKeychainSearchRef_S = {"OpaqueSecKeychainSearchRef",NULL};

	VPL_ExtStructure _OpaqueSecKeychainItemRef_S = {"OpaqueSecKeychainItemRef",NULL};

	VPL_ExtStructure _OpaqueSecKeychainRef_S = {"OpaqueSecKeychainRef",NULL};

	VPL_ExtField _NSLPluginData_10 = { "commentStringOffset",22,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _NSLPluginData_9 = { "protocolListOffset",20,2,kUnsignedType,"NULL",0,0,"unsigned short",&_NSLPluginData_10};
	VPL_ExtField _NSLPluginData_8 = { "serviceListOffset",18,2,kUnsignedType,"NULL",0,0,"unsigned short",&_NSLPluginData_9};
	VPL_ExtField _NSLPluginData_7 = { "dataTypeOffset",16,2,kUnsignedType,"NULL",0,0,"unsigned short",&_NSLPluginData_8};
	VPL_ExtField _NSLPluginData_6 = { "totalLen",14,2,kUnsignedType,"NULL",0,0,"unsigned short",&_NSLPluginData_7};
	VPL_ExtField _NSLPluginData_5 = { "isPurgeable",13,1,kUnsignedType,"NULL",0,0,"unsigned char",&_NSLPluginData_6};
	VPL_ExtField _NSLPluginData_4 = { "supportsRegistration",12,1,kUnsignedType,"NULL",0,0,"unsigned char",&_NSLPluginData_5};
	VPL_ExtField _NSLPluginData_3 = { "reserved3",8,4,kIntType,"NULL",0,0,"long int",&_NSLPluginData_4};
	VPL_ExtField _NSLPluginData_2 = { "reserved2",4,4,kIntType,"NULL",0,0,"long int",&_NSLPluginData_3};
	VPL_ExtField _NSLPluginData_1 = { "reserved1",0,4,kIntType,"NULL",0,0,"long int",&_NSLPluginData_2};
	VPL_ExtStructure _NSLPluginData_S = {"NSLPluginData",&_NSLPluginData_1};

	VPL_ExtField _NSLServicesListHeader_2 = { "logicalLen",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _NSLServicesListHeader_1 = { "numServices",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLServicesListHeader_2};
	VPL_ExtStructure _NSLServicesListHeader_S = {"NSLServicesListHeader",&_NSLServicesListHeader_1};

	VPL_ExtField _NSLTypedData_2 = { "lengthOfData",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _NSLTypedData_1 = { "dataType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLTypedData_2};
	VPL_ExtStructure _NSLTypedData_S = {"NSLTypedData",&_NSLTypedData_1};

	VPL_ExtField _NSLPluginAsyncInfo_14 = { "searchResult",50,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _NSLPluginAsyncInfo_13 = { "searchState",48,2,kUnsignedType,"NULL",0,0,"unsigned short",&_NSLPluginAsyncInfo_14};
	VPL_ExtField _NSLPluginAsyncInfo_12 = { "requestRef",44,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLPluginAsyncInfo_13};
	VPL_ExtField _NSLPluginAsyncInfo_11 = { "clientRef",40,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLPluginAsyncInfo_12};
	VPL_ExtField _NSLPluginAsyncInfo_10 = { "reserved3",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLPluginAsyncInfo_11};
	VPL_ExtField _NSLPluginAsyncInfo_9 = { "reserved2",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLPluginAsyncInfo_10};
	VPL_ExtField _NSLPluginAsyncInfo_8 = { "reserved1",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLPluginAsyncInfo_9};
	VPL_ExtField _NSLPluginAsyncInfo_7 = { "maxSearchTime",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLPluginAsyncInfo_8};
	VPL_ExtField _NSLPluginAsyncInfo_6 = { "maxBufferSize",20,4,kIntType,"NULL",0,0,"long int",&_NSLPluginAsyncInfo_7};
	VPL_ExtField _NSLPluginAsyncInfo_5 = { "bufferLen",16,4,kIntType,"NULL",0,0,"long int",&_NSLPluginAsyncInfo_6};
	VPL_ExtField _NSLPluginAsyncInfo_4 = { "resultBuffer",12,4,kPointerType,"char",1,1,"T*",&_NSLPluginAsyncInfo_5};
	VPL_ExtField _NSLPluginAsyncInfo_3 = { "pluginPtr",8,4,kPointerType,"void",1,0,"T*",&_NSLPluginAsyncInfo_4};
	VPL_ExtField _NSLPluginAsyncInfo_2 = { "pluginContextPtr",4,4,kPointerType,"void",1,0,"T*",&_NSLPluginAsyncInfo_3};
	VPL_ExtField _NSLPluginAsyncInfo_1 = { "mgrContextPtr",0,4,kPointerType,"void",1,0,"T*",&_NSLPluginAsyncInfo_2};
	VPL_ExtStructure _NSLPluginAsyncInfo_S = {"NSLPluginAsyncInfo",&_NSLPluginAsyncInfo_1};

	VPL_ExtField _NSLClientAsyncInfo_14 = { "searchDataType",54,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _NSLClientAsyncInfo_13 = { "searchResult",46,8,kStructureType,"NULL",0,0,"NSLError",&_NSLClientAsyncInfo_14};
	VPL_ExtField _NSLClientAsyncInfo_12 = { "searchState",44,2,kUnsignedType,"NULL",0,0,"unsigned short",&_NSLClientAsyncInfo_13};
	VPL_ExtField _NSLClientAsyncInfo_11 = { "alertThreshold",40,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLClientAsyncInfo_12};
	VPL_ExtField _NSLClientAsyncInfo_10 = { "totalItems",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLClientAsyncInfo_11};
	VPL_ExtField _NSLClientAsyncInfo_9 = { "alertInterval",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLClientAsyncInfo_10};
	VPL_ExtField _NSLClientAsyncInfo_8 = { "maxSearchTime",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLClientAsyncInfo_9};
	VPL_ExtField _NSLClientAsyncInfo_7 = { "intStartTime",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLClientAsyncInfo_8};
	VPL_ExtField _NSLClientAsyncInfo_6 = { "startTime",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_NSLClientAsyncInfo_7};
	VPL_ExtField _NSLClientAsyncInfo_5 = { "maxBufferSize",16,4,kIntType,"NULL",0,0,"long int",&_NSLClientAsyncInfo_6};
	VPL_ExtField _NSLClientAsyncInfo_4 = { "bufferLen",12,4,kIntType,"NULL",0,0,"long int",&_NSLClientAsyncInfo_5};
	VPL_ExtField _NSLClientAsyncInfo_3 = { "resultBuffer",8,4,kPointerType,"char",1,1,"T*",&_NSLClientAsyncInfo_4};
	VPL_ExtField _NSLClientAsyncInfo_2 = { "mgrContextPtr",4,4,kPointerType,"void",1,0,"T*",&_NSLClientAsyncInfo_3};
	VPL_ExtField _NSLClientAsyncInfo_1 = { "clientContextPtr",0,4,kPointerType,"void",1,0,"T*",&_NSLClientAsyncInfo_2};
	VPL_ExtStructure _NSLClientAsyncInfo_S = {"NSLClientAsyncInfo",&_NSLClientAsyncInfo_1};

	VPL_ExtField _NSLError_2 = { "theContext",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _NSLError_1 = { "theErr",0,4,kIntType,"NULL",0,0,"long int",&_NSLError_2};
	VPL_ExtStructure _NSLError_S = {"NSLError",&_NSLError_1};

	VPL_ExtField _Partition_19 = { "pmPad",136,376,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _Partition_18 = { "pmProcessor",120,16,kPointerType,"unsigned char",0,1,NULL,&_Partition_19};
	VPL_ExtField _Partition_17 = { "pmBootCksum",116,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_18};
	VPL_ExtField _Partition_16 = { "pmBootEntry2",112,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_17};
	VPL_ExtField _Partition_15 = { "pmBootEntry",108,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_16};
	VPL_ExtField _Partition_14 = { "pmBootAddr2",104,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_15};
	VPL_ExtField _Partition_13 = { "pmBootAddr",100,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_14};
	VPL_ExtField _Partition_12 = { "pmBootSize",96,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_13};
	VPL_ExtField _Partition_11 = { "pmLgBootStart",92,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_12};
	VPL_ExtField _Partition_10 = { "pmPartStatus",88,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_11};
	VPL_ExtField _Partition_9 = { "pmDataCnt",84,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_10};
	VPL_ExtField _Partition_8 = { "pmLgDataStart",80,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_9};
	VPL_ExtField _Partition_7 = { "pmParType",48,32,kPointerType,"unsigned char",0,1,NULL,&_Partition_8};
	VPL_ExtField _Partition_6 = { "pmPartName",16,32,kPointerType,"unsigned char",0,1,NULL,&_Partition_7};
	VPL_ExtField _Partition_5 = { "pmPartBlkCnt",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_6};
	VPL_ExtField _Partition_4 = { "pmPyPartStart",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_5};
	VPL_ExtField _Partition_3 = { "pmMapBlkCnt",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Partition_4};
	VPL_ExtField _Partition_2 = { "pmSigPad",2,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_Partition_3};
	VPL_ExtField _Partition_1 = { "pmSig",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_Partition_2};
	VPL_ExtStructure _Partition_S = {"Partition",&_Partition_1};

	VPL_ExtField _DDMap_3 = { "ddType",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _DDMap_2 = { "ddSize",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_DDMap_3};
	VPL_ExtField _DDMap_1 = { "ddBlock",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DDMap_2};
	VPL_ExtStructure _DDMap_S = {"DDMap",&_DDMap_1};

	VPL_ExtField _Block0_11 = { "ddPad",26,486,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _Block0_10 = { "ddType",24,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_Block0_11};
	VPL_ExtField _Block0_9 = { "ddSize",22,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_Block0_10};
	VPL_ExtField _Block0_8 = { "ddBlock",18,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_Block0_9};
	VPL_ExtField _Block0_7 = { "sbDrvrCount",16,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_Block0_8};
	VPL_ExtField _Block0_6 = { "sbData",12,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_Block0_7};
	VPL_ExtField _Block0_5 = { "sbDevId",10,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_Block0_6};
	VPL_ExtField _Block0_4 = { "sbDevType",8,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_Block0_5};
	VPL_ExtField _Block0_3 = { "sbBlkCount",4,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_Block0_4};
	VPL_ExtField _Block0_2 = { "sbBlkSize",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_Block0_3};
	VPL_ExtField _Block0_1 = { "sbSig",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_Block0_2};
	VPL_ExtStructure _Block0_S = {"Block0",&_Block0_1};

	VPL_ExtField _SCSILoadDriverPB_15 = { "filler",39,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _SCSILoadDriverPB_14 = { "scsiDiskLoadFailed",38,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SCSILoadDriverPB_15};
	VPL_ExtField _SCSILoadDriverPB_13 = { "scsiLoadedRefNum",36,2,kIntType,"NULL",0,0,"short",&_SCSILoadDriverPB_14};
	VPL_ExtField _SCSILoadDriverPB_12 = { "scsiReserved3",32,4,kIntType,"NULL",0,0,"long int",&_SCSILoadDriverPB_13};
	VPL_ExtField _SCSILoadDriverPB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSILoadDriverPB_12};
	VPL_ExtField _SCSILoadDriverPB_10 = { "scsiDriverStorage",24,4,kPointerType,"char",1,1,"T*",&_SCSILoadDriverPB_11};
	VPL_ExtField _SCSILoadDriverPB_9 = { "scsiFlags",20,4,kUnsignedType,"char",1,1,"unsigned long",&_SCSILoadDriverPB_10};
	VPL_ExtField _SCSILoadDriverPB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSILoadDriverPB_9};
	VPL_ExtField _SCSILoadDriverPB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSILoadDriverPB_8};
	VPL_ExtField _SCSILoadDriverPB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSILoadDriverPB_7};
	VPL_ExtField _SCSILoadDriverPB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSILoadDriverPB_6};
	VPL_ExtField _SCSILoadDriverPB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSILoadDriverPB_5};
	VPL_ExtField _SCSILoadDriverPB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSILoadDriverPB_4};
	VPL_ExtField _SCSILoadDriverPB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSILoadDriverPB_3};
	VPL_ExtField _SCSILoadDriverPB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSILoadDriverPB_2};
	VPL_ExtStructure _SCSILoadDriverPB_S = {"SCSILoadDriverPB",&_SCSILoadDriverPB_1};

	VPL_ExtField _SCSIDriverPB_15 = { "scsiNextDevice",40,4,kStructureType,"NULL",0,0,"DeviceIdent",NULL};
	VPL_ExtField _SCSIDriverPB_14 = { "scsiDriverFlags",38,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SCSIDriverPB_15};
	VPL_ExtField _SCSIDriverPB_13 = { "scsiDriver",36,2,kIntType,"NULL",0,0,"short",&_SCSIDriverPB_14};
	VPL_ExtField _SCSIDriverPB_12 = { "scsiReserved3",32,4,kIntType,"NULL",0,0,"long int",&_SCSIDriverPB_13};
	VPL_ExtField _SCSIDriverPB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSIDriverPB_12};
	VPL_ExtField _SCSIDriverPB_10 = { "scsiDriverStorage",24,4,kPointerType,"char",1,1,"T*",&_SCSIDriverPB_11};
	VPL_ExtField _SCSIDriverPB_9 = { "scsiFlags",20,4,kUnsignedType,"char",1,1,"unsigned long",&_SCSIDriverPB_10};
	VPL_ExtField _SCSIDriverPB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSIDriverPB_9};
	VPL_ExtField _SCSIDriverPB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSIDriverPB_8};
	VPL_ExtField _SCSIDriverPB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSIDriverPB_7};
	VPL_ExtField _SCSIDriverPB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIDriverPB_6};
	VPL_ExtField _SCSIDriverPB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIDriverPB_5};
	VPL_ExtField _SCSIDriverPB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSIDriverPB_4};
	VPL_ExtField _SCSIDriverPB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSIDriverPB_3};
	VPL_ExtField _SCSIDriverPB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSIDriverPB_2};
	VPL_ExtStructure _SCSIDriverPB_S = {"SCSIDriverPB",&_SCSIDriverPB_1};

	VPL_ExtField _SCSIGetVirtualIDInfoPB_15 = { "filler",39,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_14 = { "scsiExists",38,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SCSIGetVirtualIDInfoPB_15};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_13 = { "scsiOldCallID",36,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SCSIGetVirtualIDInfoPB_14};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_12 = { "scsiReserved3",32,4,kIntType,"NULL",0,0,"long int",&_SCSIGetVirtualIDInfoPB_13};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSIGetVirtualIDInfoPB_12};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_10 = { "scsiDriverStorage",24,4,kPointerType,"char",1,1,"T*",&_SCSIGetVirtualIDInfoPB_11};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_9 = { "scsiFlags",20,4,kUnsignedType,"char",1,1,"unsigned long",&_SCSIGetVirtualIDInfoPB_10};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSIGetVirtualIDInfoPB_9};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSIGetVirtualIDInfoPB_8};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSIGetVirtualIDInfoPB_7};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIGetVirtualIDInfoPB_6};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIGetVirtualIDInfoPB_5};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSIGetVirtualIDInfoPB_4};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSIGetVirtualIDInfoPB_3};
	VPL_ExtField _SCSIGetVirtualIDInfoPB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSIGetVirtualIDInfoPB_2};
	VPL_ExtStructure _SCSIGetVirtualIDInfoPB_S = {"SCSIGetVirtualIDInfoPB",&_SCSIGetVirtualIDInfoPB_1};

	VPL_ExtField _SCSIReleaseQPB_12 = { "scsiReserved3",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SCSIReleaseQPB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSIReleaseQPB_12};
	VPL_ExtField _SCSIReleaseQPB_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSIReleaseQPB_11};
	VPL_ExtField _SCSIReleaseQPB_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSIReleaseQPB_10};
	VPL_ExtField _SCSIReleaseQPB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSIReleaseQPB_9};
	VPL_ExtField _SCSIReleaseQPB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSIReleaseQPB_8};
	VPL_ExtField _SCSIReleaseQPB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSIReleaseQPB_7};
	VPL_ExtField _SCSIReleaseQPB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIReleaseQPB_6};
	VPL_ExtField _SCSIReleaseQPB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIReleaseQPB_5};
	VPL_ExtField _SCSIReleaseQPB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSIReleaseQPB_4};
	VPL_ExtField _SCSIReleaseQPB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSIReleaseQPB_3};
	VPL_ExtField _SCSIReleaseQPB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSIReleaseQPB_2};
	VPL_ExtStructure _SCSIReleaseQPB_S = {"SCSIReleaseQPB",&_SCSIReleaseQPB_1};

	VPL_ExtField _SCSIResetDevicePB_12 = { "scsiReserved3",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SCSIResetDevicePB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSIResetDevicePB_12};
	VPL_ExtField _SCSIResetDevicePB_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSIResetDevicePB_11};
	VPL_ExtField _SCSIResetDevicePB_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSIResetDevicePB_10};
	VPL_ExtField _SCSIResetDevicePB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSIResetDevicePB_9};
	VPL_ExtField _SCSIResetDevicePB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSIResetDevicePB_8};
	VPL_ExtField _SCSIResetDevicePB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSIResetDevicePB_7};
	VPL_ExtField _SCSIResetDevicePB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIResetDevicePB_6};
	VPL_ExtField _SCSIResetDevicePB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIResetDevicePB_5};
	VPL_ExtField _SCSIResetDevicePB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSIResetDevicePB_4};
	VPL_ExtField _SCSIResetDevicePB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSIResetDevicePB_3};
	VPL_ExtField _SCSIResetDevicePB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSIResetDevicePB_2};
	VPL_ExtStructure _SCSIResetDevicePB_S = {"SCSIResetDevicePB",&_SCSIResetDevicePB_1};

	VPL_ExtField _SCSIResetBusPB_12 = { "scsiReserved3",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SCSIResetBusPB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSIResetBusPB_12};
	VPL_ExtField _SCSIResetBusPB_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSIResetBusPB_11};
	VPL_ExtField _SCSIResetBusPB_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSIResetBusPB_10};
	VPL_ExtField _SCSIResetBusPB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSIResetBusPB_9};
	VPL_ExtField _SCSIResetBusPB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSIResetBusPB_8};
	VPL_ExtField _SCSIResetBusPB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSIResetBusPB_7};
	VPL_ExtField _SCSIResetBusPB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIResetBusPB_6};
	VPL_ExtField _SCSIResetBusPB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIResetBusPB_5};
	VPL_ExtField _SCSIResetBusPB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSIResetBusPB_4};
	VPL_ExtField _SCSIResetBusPB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSIResetBusPB_3};
	VPL_ExtField _SCSIResetBusPB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSIResetBusPB_2};
	VPL_ExtStructure _SCSIResetBusPB_S = {"SCSIResetBusPB",&_SCSIResetBusPB_1};

	VPL_ExtField _SCSITerminateIOPB_13 = { "scsiIOptr",36,4,kPointerType,"SCSI_IO",1,176,"T*",NULL};
	VPL_ExtField _SCSITerminateIOPB_12 = { "scsiReserved3",32,4,kIntType,"SCSI_IO",1,176,"long int",&_SCSITerminateIOPB_13};
	VPL_ExtField _SCSITerminateIOPB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSITerminateIOPB_12};
	VPL_ExtField _SCSITerminateIOPB_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSITerminateIOPB_11};
	VPL_ExtField _SCSITerminateIOPB_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSITerminateIOPB_10};
	VPL_ExtField _SCSITerminateIOPB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSITerminateIOPB_9};
	VPL_ExtField _SCSITerminateIOPB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSITerminateIOPB_8};
	VPL_ExtField _SCSITerminateIOPB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSITerminateIOPB_7};
	VPL_ExtField _SCSITerminateIOPB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSITerminateIOPB_6};
	VPL_ExtField _SCSITerminateIOPB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSITerminateIOPB_5};
	VPL_ExtField _SCSITerminateIOPB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSITerminateIOPB_4};
	VPL_ExtField _SCSITerminateIOPB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSITerminateIOPB_3};
	VPL_ExtField _SCSITerminateIOPB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSITerminateIOPB_2};
	VPL_ExtStructure _SCSITerminateIOPB_S = {"SCSITerminateIOPB",&_SCSITerminateIOPB_1};

	VPL_ExtField _SCSIAbortCommandPB_13 = { "scsiIOptr",36,4,kPointerType,"SCSI_IO",1,176,"T*",NULL};
	VPL_ExtField _SCSIAbortCommandPB_12 = { "scsiReserved3",32,4,kIntType,"SCSI_IO",1,176,"long int",&_SCSIAbortCommandPB_13};
	VPL_ExtField _SCSIAbortCommandPB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSIAbortCommandPB_12};
	VPL_ExtField _SCSIAbortCommandPB_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSIAbortCommandPB_11};
	VPL_ExtField _SCSIAbortCommandPB_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSIAbortCommandPB_10};
	VPL_ExtField _SCSIAbortCommandPB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSIAbortCommandPB_9};
	VPL_ExtField _SCSIAbortCommandPB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSIAbortCommandPB_8};
	VPL_ExtField _SCSIAbortCommandPB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSIAbortCommandPB_7};
	VPL_ExtField _SCSIAbortCommandPB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIAbortCommandPB_6};
	VPL_ExtField _SCSIAbortCommandPB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIAbortCommandPB_5};
	VPL_ExtField _SCSIAbortCommandPB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSIAbortCommandPB_4};
	VPL_ExtField _SCSIAbortCommandPB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSIAbortCommandPB_3};
	VPL_ExtField _SCSIAbortCommandPB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSIAbortCommandPB_2};
	VPL_ExtStructure _SCSIAbortCommandPB_S = {"SCSIAbortCommandPB",&_SCSIAbortCommandPB_1};

	VPL_ExtField _SCSIBusInquiryPB_46 = { "scsiAdditionalLength",170,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _SCSIBusInquiryPB_45 = { "scsiBIReserved3",168,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SCSIBusInquiryPB_46};
	VPL_ExtField _SCSIBusInquiryPB_44 = { "scsiSIMsRsrcID",166,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SCSIBusInquiryPB_45};
	VPL_ExtField _SCSIBusInquiryPB_43 = { "scsiHBAslotNumber",165,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SCSIBusInquiryPB_44};
	VPL_ExtField _SCSIBusInquiryPB_42 = { "scsiHBAslotType",164,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SCSIBusInquiryPB_43};
	VPL_ExtField _SCSIBusInquiryPB_41 = { "scsiHBAversion",160,4,kPointerType,"char",0,1,NULL,&_SCSIBusInquiryPB_42};
	VPL_ExtField _SCSIBusInquiryPB_40 = { "scsiSIMversion",156,4,kPointerType,"char",0,1,NULL,&_SCSIBusInquiryPB_41};
	VPL_ExtField _SCSIBusInquiryPB_39 = { "scsiXPTversion",152,4,kPointerType,"char",0,1,NULL,&_SCSIBusInquiryPB_40};
	VPL_ExtField _SCSIBusInquiryPB_38 = { "scsiControllerType",136,16,kPointerType,"char",0,1,NULL,&_SCSIBusInquiryPB_39};
	VPL_ExtField _SCSIBusInquiryPB_37 = { "scsiControllerFamily",120,16,kPointerType,"char",0,1,NULL,&_SCSIBusInquiryPB_38};
	VPL_ExtField _SCSIBusInquiryPB_36 = { "scsiHBAVendor",104,16,kPointerType,"char",0,1,NULL,&_SCSIBusInquiryPB_37};
	VPL_ExtField _SCSIBusInquiryPB_35 = { "scsiSIMVendor",88,16,kPointerType,"char",0,1,NULL,&_SCSIBusInquiryPB_36};
	VPL_ExtField _SCSIBusInquiryPB_34 = { "scsiMaxLUN",86,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_35};
	VPL_ExtField _SCSIBusInquiryPB_33 = { "scsiMaxTarget",84,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_34};
	VPL_ExtField _SCSIBusInquiryPB_32 = { "scsiWeirdStuff",82,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_33};
	VPL_ExtField _SCSIBusInquiryPB_31 = { "scsiIOFlagsSupported",80,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_32};
	VPL_ExtField _SCSIBusInquiryPB_30 = { "scsiFlagsSupported",76,4,kUnsignedType,"char",0,1,"unsigned long",&_SCSIBusInquiryPB_31};
	VPL_ExtField _SCSIBusInquiryPB_29 = { "scsiBIReserved1",72,4,kUnsignedType,"char",0,1,"unsigned long",&_SCSIBusInquiryPB_30};
	VPL_ExtField _SCSIBusInquiryPB_28 = { "scsiBIReserved0",70,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_29};
	VPL_ExtField _SCSIBusInquiryPB_27 = { "scsiInitiatorID",69,1,kUnsignedType,"char",0,1,"unsigned char",&_SCSIBusInquiryPB_28};
	VPL_ExtField _SCSIBusInquiryPB_26 = { "scsiHiBusID",68,1,kUnsignedType,"char",0,1,"unsigned char",&_SCSIBusInquiryPB_27};
	VPL_ExtField _SCSIBusInquiryPB_25 = { "scsiAsyncFlags",64,4,kUnsignedType,"char",0,1,"unsigned long",&_SCSIBusInquiryPB_26};
	VPL_ExtField _SCSIBusInquiryPB_24 = { "scsiSIMPrivatesSize",60,4,kUnsignedType,"char",0,1,"unsigned long",&_SCSIBusInquiryPB_25};
	VPL_ExtField _SCSIBusInquiryPB_23 = { "scsiSIMPrivatesPtr",56,4,kUnsignedType,"char",0,1,"unsigned long",&_SCSIBusInquiryPB_24};
	VPL_ExtField _SCSIBusInquiryPB_22 = { "scsiScanFlags",55,1,kUnsignedType,"char",0,1,"unsigned char",&_SCSIBusInquiryPB_23};
	VPL_ExtField _SCSIBusInquiryPB_21 = { "scsiTargetModeFlags",54,1,kUnsignedType,"char",0,1,"unsigned char",&_SCSIBusInquiryPB_22};
	VPL_ExtField _SCSIBusInquiryPB_20 = { "scsiHBAInquiry",53,1,kUnsignedType,"char",0,1,"unsigned char",&_SCSIBusInquiryPB_21};
	VPL_ExtField _SCSIBusInquiryPB_19 = { "scsiVersionNumber",52,1,kUnsignedType,"char",0,1,"unsigned char",&_SCSIBusInquiryPB_20};
	VPL_ExtField _SCSIBusInquiryPB_18 = { "scsiFeatureFlags",48,4,kUnsignedType,"char",0,1,"unsigned long",&_SCSIBusInquiryPB_19};
	VPL_ExtField _SCSIBusInquiryPB_17 = { "scsiMaxIOpbSize",46,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_18};
	VPL_ExtField _SCSIBusInquiryPB_16 = { "scsiIOpbSize",44,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_17};
	VPL_ExtField _SCSIBusInquiryPB_15 = { "scsiDataTypes",40,4,kUnsignedType,"char",0,1,"unsigned long",&_SCSIBusInquiryPB_16};
	VPL_ExtField _SCSIBusInquiryPB_14 = { "scsiMaxTransferType",38,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_15};
	VPL_ExtField _SCSIBusInquiryPB_13 = { "scsiEngineCount",36,2,kUnsignedType,"char",0,1,"unsigned short",&_SCSIBusInquiryPB_14};
	VPL_ExtField _SCSIBusInquiryPB_12 = { "scsiReserved3",32,4,kIntType,"char",0,1,"long int",&_SCSIBusInquiryPB_13};
	VPL_ExtField _SCSIBusInquiryPB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSIBusInquiryPB_12};
	VPL_ExtField _SCSIBusInquiryPB_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSIBusInquiryPB_11};
	VPL_ExtField _SCSIBusInquiryPB_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSIBusInquiryPB_10};
	VPL_ExtField _SCSIBusInquiryPB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSIBusInquiryPB_9};
	VPL_ExtField _SCSIBusInquiryPB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSIBusInquiryPB_8};
	VPL_ExtField _SCSIBusInquiryPB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSIBusInquiryPB_7};
	VPL_ExtField _SCSIBusInquiryPB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIBusInquiryPB_6};
	VPL_ExtField _SCSIBusInquiryPB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIBusInquiryPB_5};
	VPL_ExtField _SCSIBusInquiryPB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSIBusInquiryPB_4};
	VPL_ExtField _SCSIBusInquiryPB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSIBusInquiryPB_3};
	VPL_ExtField _SCSIBusInquiryPB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSIBusInquiryPB_2};
	VPL_ExtStructure _SCSIBusInquiryPB_S = {"SCSIBusInquiryPB",&_SCSIBusInquiryPB_1};

	VPL_ExtField _SCSI_IO_50 = { "XPTextras",164,12,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _SCSI_IO_49 = { "XPTprivateFlags",163,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_SCSI_IO_50};
	VPL_ExtField _SCSI_IO_48 = { "scsiSCSImessage",162,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_SCSI_IO_49};
	VPL_ExtField _SCSI_IO_47 = { "scsiOldCallResult",160,2,kIntType,"unsigned char",0,1,"short",&_SCSI_IO_48};
	VPL_ExtField _SCSI_IO_46 = { "scsiSelector",158,2,kIntType,"unsigned char",0,1,"short",&_SCSI_IO_47};
	VPL_ExtField _SCSI_IO_45 = { "scsiCurrentPhase",156,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_SCSI_IO_46};
	VPL_ExtField _SCSI_IO_44 = { "scsiAppleReserved6",148,8,kPointerType,"unsigned char",0,1,NULL,&_SCSI_IO_45};
	VPL_ExtField _SCSI_IO_43 = { "scsiSIMpublics",140,8,kPointerType,"unsigned char",0,1,NULL,&_SCSI_IO_44};
	VPL_ExtField _SCSI_IO_42 = { "scsiCommandLink",136,4,kPointerType,"SCSI_IO",1,176,"T*",&_SCSI_IO_43};
	VPL_ExtField _SCSI_IO_41 = { "scsiReserved11",132,4,kUnsignedType,"SCSI_IO",1,176,"unsigned long",&_SCSI_IO_42};
	VPL_ExtField _SCSI_IO_40 = { "scsiReserved10",128,4,kUnsignedType,"SCSI_IO",1,176,"unsigned long",&_SCSI_IO_41};
	VPL_ExtField _SCSI_IO_39 = { "scsiHandshake",112,16,kPointerType,"unsigned short",0,2,NULL,&_SCSI_IO_40};
	VPL_ExtField _SCSI_IO_38 = { "scsiReserved9",108,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_SCSI_IO_39};
	VPL_ExtField _SCSI_IO_37 = { "scsiReserved8",104,4,kUnsignedType,"unsigned short",0,2,"unsigned long",&_SCSI_IO_38};
	VPL_ExtField _SCSI_IO_36 = { "scsiTransferType",103,1,kUnsignedType,"unsigned short",0,2,"unsigned char",&_SCSI_IO_37};
	VPL_ExtField _SCSI_IO_35 = { "scsiDataType",102,1,kUnsignedType,"unsigned short",0,2,"unsigned char",&_SCSI_IO_36};
	VPL_ExtField _SCSI_IO_34 = { "scsiSelectTimeout",100,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SCSI_IO_35};
	VPL_ExtField _SCSI_IO_33 = { "scsiReserved7",98,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SCSI_IO_34};
	VPL_ExtField _SCSI_IO_32 = { "scsiReserved6",97,1,kUnsignedType,"unsigned short",0,2,"unsigned char",&_SCSI_IO_33};
	VPL_ExtField _SCSI_IO_31 = { "scsiTagAction",96,1,kUnsignedType,"unsigned short",0,2,"unsigned char",&_SCSI_IO_32};
	VPL_ExtField _SCSI_IO_30 = { "scsiIOFlags",94,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SCSI_IO_31};
	VPL_ExtField _SCSI_IO_29 = { "scsiReserved5pt6",92,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_SCSI_IO_30};
	VPL_ExtField _SCSI_IO_28 = { "scsiReserved5pt5",88,4,kPointerType,"unsigned char",1,1,"T*",&_SCSI_IO_29};
	VPL_ExtField _SCSI_IO_27 = { "scsiTimeout",84,4,kIntType,"unsigned char",1,1,"long int",&_SCSI_IO_28};
	VPL_ExtField _SCSI_IO_26 = { "scsiCDB",68,16,kStructureType,"unsigned char",1,1,"CDB",&_SCSI_IO_27};
	VPL_ExtField _SCSI_IO_25 = { "scsiDataResidual",64,4,kIntType,"unsigned char",1,1,"long int",&_SCSI_IO_26};
	VPL_ExtField _SCSI_IO_24 = { "scsiReserved5",62,2,kUnsignedType,"unsigned char",1,1,"unsigned short",&_SCSI_IO_25};
	VPL_ExtField _SCSI_IO_23 = { "scsiSenseResidual",61,1,kIntType,"unsigned char",1,1,"signed char",&_SCSI_IO_24};
	VPL_ExtField _SCSI_IO_22 = { "scsiSCSIstatus",60,1,kUnsignedType,"unsigned char",1,1,"unsigned char",&_SCSI_IO_23};
	VPL_ExtField _SCSI_IO_21 = { "scsiReserved4",56,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSI_IO_22};
	VPL_ExtField _SCSI_IO_20 = { "scsiSGListCount",54,2,kUnsignedType,"unsigned char",1,1,"unsigned short",&_SCSI_IO_21};
	VPL_ExtField _SCSI_IO_19 = { "scsiCDBLength",53,1,kUnsignedType,"unsigned char",1,1,"unsigned char",&_SCSI_IO_20};
	VPL_ExtField _SCSI_IO_18 = { "scsiSenseLength",52,1,kUnsignedType,"unsigned char",1,1,"unsigned char",&_SCSI_IO_19};
	VPL_ExtField _SCSI_IO_17 = { "scsiSensePtr",48,4,kPointerType,"unsigned char",1,1,"T*",&_SCSI_IO_18};
	VPL_ExtField _SCSI_IO_16 = { "scsiDataLength",44,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSI_IO_17};
	VPL_ExtField _SCSI_IO_15 = { "scsiDataPtr",40,4,kPointerType,"unsigned char",1,1,"T*",&_SCSI_IO_16};
	VPL_ExtField _SCSI_IO_14 = { "scsiReserved3pt5",38,2,kUnsignedType,"unsigned char",1,1,"unsigned short",&_SCSI_IO_15};
	VPL_ExtField _SCSI_IO_13 = { "scsiResultFlags",36,2,kUnsignedType,"unsigned char",1,1,"unsigned short",&_SCSI_IO_14};
	VPL_ExtField _SCSI_IO_12 = { "scsiReserved3",32,4,kIntType,"unsigned char",1,1,"long int",&_SCSI_IO_13};
	VPL_ExtField _SCSI_IO_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSI_IO_12};
	VPL_ExtField _SCSI_IO_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSI_IO_11};
	VPL_ExtField _SCSI_IO_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSI_IO_10};
	VPL_ExtField _SCSI_IO_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSI_IO_9};
	VPL_ExtField _SCSI_IO_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSI_IO_8};
	VPL_ExtField _SCSI_IO_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSI_IO_7};
	VPL_ExtField _SCSI_IO_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSI_IO_6};
	VPL_ExtField _SCSI_IO_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSI_IO_5};
	VPL_ExtField _SCSI_IO_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSI_IO_4};
	VPL_ExtField _SCSI_IO_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSI_IO_3};
	VPL_ExtField _SCSI_IO_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSI_IO_2};
	VPL_ExtStructure _SCSI_IO_S = {"SCSI_IO",&_SCSI_IO_1};

	VPL_ExtField _SCSI_PB_12 = { "scsiReserved3",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SCSI_PB_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSI_PB_12};
	VPL_ExtField _SCSI_PB_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSI_PB_11};
	VPL_ExtField _SCSI_PB_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSI_PB_10};
	VPL_ExtField _SCSI_PB_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSI_PB_9};
	VPL_ExtField _SCSI_PB_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSI_PB_8};
	VPL_ExtField _SCSI_PB_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSI_PB_7};
	VPL_ExtField _SCSI_PB_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSI_PB_6};
	VPL_ExtField _SCSI_PB_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSI_PB_5};
	VPL_ExtField _SCSI_PB_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSI_PB_4};
	VPL_ExtField _SCSI_PB_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSI_PB_3};
	VPL_ExtField _SCSI_PB_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSI_PB_2};
	VPL_ExtStructure _SCSI_PB_S = {"SCSI_PB",&_SCSI_PB_1};

	VPL_ExtField _SCSIHdr_12 = { "scsiReserved3",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SCSIHdr_11 = { "scsiXPTprivate",28,4,kPointerType,"char",1,1,"T*",&_SCSIHdr_12};
	VPL_ExtField _SCSIHdr_10 = { "scsiDriverStorage",24,4,kPointerType,"unsigned char",1,1,"T*",&_SCSIHdr_11};
	VPL_ExtField _SCSIHdr_9 = { "scsiFlags",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_SCSIHdr_10};
	VPL_ExtField _SCSIHdr_8 = { "scsiCompletion",16,4,kPointerType,"void",1,0,"T*",&_SCSIHdr_9};
	VPL_ExtField _SCSIHdr_7 = { "scsiDevice",12,4,kStructureType,"void",1,0,"DeviceIdent",&_SCSIHdr_8};
	VPL_ExtField _SCSIHdr_6 = { "scsiResult",10,2,kIntType,"void",1,0,"short",&_SCSIHdr_7};
	VPL_ExtField _SCSIHdr_5 = { "scsiReserved2",9,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIHdr_6};
	VPL_ExtField _SCSIHdr_4 = { "scsiFunctionCode",8,1,kUnsignedType,"void",1,0,"unsigned char",&_SCSIHdr_5};
	VPL_ExtField _SCSIHdr_3 = { "scsiPBLength",6,2,kUnsignedType,"void",1,0,"unsigned short",&_SCSIHdr_4};
	VPL_ExtField _SCSIHdr_2 = { "scsiReserved1",4,2,kIntType,"void",1,0,"short",&_SCSIHdr_3};
	VPL_ExtField _SCSIHdr_1 = { "qLink",0,4,kPointerType,"SCSIHdr",1,36,"T*",&_SCSIHdr_2};
	VPL_ExtStructure _SCSIHdr_S = {"SCSIHdr",&_SCSIHdr_1};

	VPL_ExtField _SGRecord_2 = { "SGCount",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _SGRecord_1 = { "SGAddr",0,4,kPointerType,"char",1,1,"T*",&_SGRecord_2};
	VPL_ExtStructure _SGRecord_S = {"SGRecord",&_SGRecord_1};

	VPL_ExtField _DeviceIdentATA_4 = { "diReserved2",3,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _DeviceIdentATA_3 = { "devNum",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DeviceIdentATA_4};
	VPL_ExtField _DeviceIdentATA_2 = { "busNum",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DeviceIdentATA_3};
	VPL_ExtField _DeviceIdentATA_1 = { "diReserved",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DeviceIdentATA_2};
	VPL_ExtStructure _DeviceIdentATA_S = {"DeviceIdentATA",&_DeviceIdentATA_1};

	VPL_ExtField _DeviceIdent_4 = { "LUN",3,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _DeviceIdent_3 = { "targetID",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DeviceIdent_4};
	VPL_ExtField _DeviceIdent_2 = { "bus",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DeviceIdent_3};
	VPL_ExtField _DeviceIdent_1 = { "diReserved",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DeviceIdent_2};
	VPL_ExtStructure _DeviceIdent_S = {"DeviceIdent",&_DeviceIdent_1};

	VPL_ExtField _SCSIInstr_3 = { "scParam2",6,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _SCSIInstr_2 = { "scParam1",2,4,kIntType,"NULL",0,0,"long int",&_SCSIInstr_3};
	VPL_ExtField _SCSIInstr_1 = { "scOpcode",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_SCSIInstr_2};
	VPL_ExtStructure _SCSIInstr_S = {"SCSIInstr",&_SCSIInstr_1};

	VPL_ExtField _PowerSourceParamBlock_14 = { "reserved",48,64,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _PowerSourceParamBlock_13 = { "deadWarnLevel",44,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_14};
	VPL_ExtField _PowerSourceParamBlock_12 = { "lowWarnLevel",40,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_13};
	VPL_ExtField _PowerSourceParamBlock_11 = { "current",36,4,kIntType,"unsigned long",0,4,"long int",&_PowerSourceParamBlock_12};
	VPL_ExtField _PowerSourceParamBlock_10 = { "voltage",32,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_11};
	VPL_ExtField _PowerSourceParamBlock_9 = { "timeToFullCharge",28,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_10};
	VPL_ExtField _PowerSourceParamBlock_8 = { "timeRemaining",24,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_9};
	VPL_ExtField _PowerSourceParamBlock_7 = { "maxCapacity",20,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_8};
	VPL_ExtField _PowerSourceParamBlock_6 = { "currentCapacity",16,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_7};
	VPL_ExtField _PowerSourceParamBlock_5 = { "sourceState",12,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_6};
	VPL_ExtField _PowerSourceParamBlock_4 = { "sourceAttr",8,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_5};
	VPL_ExtField _PowerSourceParamBlock_3 = { "sourceVersion",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PowerSourceParamBlock_4};
	VPL_ExtField _PowerSourceParamBlock_2 = { "sourceCapacityUsage",2,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_PowerSourceParamBlock_3};
	VPL_ExtField _PowerSourceParamBlock_1 = { "sourceID",0,2,kIntType,"unsigned long",0,4,"short",&_PowerSourceParamBlock_2};
	VPL_ExtStructure _PowerSourceParamBlock_S = {"PowerSourceParamBlock",&_PowerSourceParamBlock_1};

	VPL_ExtField _StartupTime_3 = { "filler",5,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _StartupTime_2 = { "startEnabled",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_StartupTime_3};
	VPL_ExtField _StartupTime_1 = { "startTime",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_StartupTime_2};
	VPL_ExtStructure _StartupTime_S = {"StartupTime",&_StartupTime_1};

	VPL_ExtField _WakeupTime_3 = { "filler",5,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _WakeupTime_2 = { "wakeEnabled",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_WakeupTime_3};
	VPL_ExtField _WakeupTime_1 = { "wakeTime",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_WakeupTime_2};
	VPL_ExtStructure _WakeupTime_S = {"WakeupTime",&_WakeupTime_1};

	VPL_ExtField _BatteryTimeRec_4 = { "timeUntilCharged",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _BatteryTimeRec_3 = { "maximumBatteryTime",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BatteryTimeRec_4};
	VPL_ExtField _BatteryTimeRec_2 = { "minimumBatteryTime",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BatteryTimeRec_3};
	VPL_ExtField _BatteryTimeRec_1 = { "expectedBatteryTime",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BatteryTimeRec_2};
	VPL_ExtStructure _BatteryTimeRec_S = {"BatteryTimeRec",&_BatteryTimeRec_1};

	VPL_ExtField _PMgrQueueElement_6 = { "pmUser",16,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _PMgrQueueElement_5 = { "pmProc",12,4,kPointerType,"void",1,0,"T*",&_PMgrQueueElement_6};
	VPL_ExtField _PMgrQueueElement_4 = { "pmNotifyBits",8,4,kIntType,"void",1,0,"long int",&_PMgrQueueElement_5};
	VPL_ExtField _PMgrQueueElement_3 = { "pmFlags",6,2,kIntType,"void",1,0,"short",&_PMgrQueueElement_4};
	VPL_ExtField _PMgrQueueElement_2 = { "pmQType",4,2,kIntType,"void",1,0,"short",&_PMgrQueueElement_3};
	VPL_ExtField _PMgrQueueElement_1 = { "pmQLink",0,4,kPointerType,"PMgrQueueElement",1,20,"T*",&_PMgrQueueElement_2};
	VPL_ExtStructure _PMgrQueueElement_S = {"PMgrQueueElement",&_PMgrQueueElement_1};

	VPL_ExtField _HDQueueElement_5 = { "hdUser",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _HDQueueElement_4 = { "hdProc",8,4,kPointerType,"void",1,0,"T*",&_HDQueueElement_5};
	VPL_ExtField _HDQueueElement_3 = { "hdFlags",6,2,kIntType,"void",1,0,"short",&_HDQueueElement_4};
	VPL_ExtField _HDQueueElement_2 = { "hdQType",4,2,kIntType,"void",1,0,"short",&_HDQueueElement_3};
	VPL_ExtField _HDQueueElement_1 = { "hdQLink",0,4,kPointerType,"HDQueueElement",1,16,"T*",&_HDQueueElement_2};
	VPL_ExtStructure _HDQueueElement_S = {"HDQueueElement",&_HDQueueElement_1};

	VPL_ExtField _SleepQRec_4 = { "sleepQFlags",10,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _SleepQRec_3 = { "sleepQProc",6,4,kPointerType,"long int",1,4,"T*",&_SleepQRec_4};
	VPL_ExtField _SleepQRec_2 = { "sleepQType",4,2,kIntType,"long int",1,4,"short",&_SleepQRec_3};
	VPL_ExtField _SleepQRec_1 = { "sleepQLink",0,4,kPointerType,"SleepQRec",1,12,"T*",&_SleepQRec_2};
	VPL_ExtStructure _SleepQRec_S = {"SleepQRec",&_SleepQRec_1};

	VPL_ExtField _BatteryInfo_4 = { "batteryLevel",3,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _BatteryInfo_3 = { "reserved",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_BatteryInfo_4};
	VPL_ExtField _BatteryInfo_2 = { "warningLevel",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_BatteryInfo_3};
	VPL_ExtField _BatteryInfo_1 = { "flags",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_BatteryInfo_2};
	VPL_ExtStructure _BatteryInfo_S = {"BatteryInfo",&_BatteryInfo_1};

	VPL_ExtField _ActivityInfo_2 = { "ActivityTime",2,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ActivityInfo_1 = { "ActivityType",0,2,kIntType,"NULL",0,0,"short",&_ActivityInfo_2};
	VPL_ExtStructure _ActivityInfo_S = {"ActivityInfo",&_ActivityInfo_1};

	VPL_ExtField _PowerSummary_7 = { "devices",24,32,kPointerType,"DevicePowerInfo",0,32,NULL,NULL};
	VPL_ExtField _PowerSummary_6 = { "deviceCount",20,4,kUnsignedType,"DevicePowerInfo",0,32,"unsigned long",&_PowerSummary_7};
	VPL_ExtField _PowerSummary_5 = { "minimumWakeTime",16,4,kUnsignedType,"DevicePowerInfo",0,32,"unsigned long",&_PowerSummary_6};
	VPL_ExtField _PowerSummary_4 = { "sleepPowerNeeded",12,4,kUnsignedType,"DevicePowerInfo",0,32,"unsigned long",&_PowerSummary_5};
	VPL_ExtField _PowerSummary_3 = { "sleepPowerAvailable",8,4,kUnsignedType,"DevicePowerInfo",0,32,"unsigned long",&_PowerSummary_4};
	VPL_ExtField _PowerSummary_2 = { "flags",4,4,kUnsignedType,"DevicePowerInfo",0,32,"unsigned long",&_PowerSummary_3};
	VPL_ExtField _PowerSummary_1 = { "version",0,4,kUnsignedType,"DevicePowerInfo",0,32,"unsigned long",&_PowerSummary_2};
	VPL_ExtStructure _PowerSummary_S = {"PowerSummary",&_PowerSummary_1};

	VPL_ExtField _DevicePowerInfo_5 = { "sleepPowerNeeded",28,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _DevicePowerInfo_4 = { "minimumWakeTime",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DevicePowerInfo_5};
	VPL_ExtField _DevicePowerInfo_3 = { "flags",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DevicePowerInfo_4};
	VPL_ExtField _DevicePowerInfo_2 = { "regID",4,16,kStructureType,"NULL",0,0,"RegEntryID",&_DevicePowerInfo_3};
	VPL_ExtField _DevicePowerInfo_1 = { "version",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DevicePowerInfo_2};
	VPL_ExtStructure _DevicePowerInfo_S = {"DevicePowerInfo",&_DevicePowerInfo_1};

	VPL_ExtField _OTGate_5 = { "fInside",16,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _OTGate_4 = { "fNumQueued",12,4,kIntType,"NULL",0,0,"long int",&_OTGate_5};
	VPL_ExtField _OTGate_3 = { "fProc",8,4,kPointerType,"unsigned char",1,1,"T*",&_OTGate_4};
	VPL_ExtField _OTGate_2 = { "fList",4,4,kStructureType,"unsigned char",1,1,"OTList",&_OTGate_3};
	VPL_ExtField _OTGate_1 = { "fLIFO",0,4,kStructureType,"unsigned char",1,1,"OTLIFO",&_OTGate_2};
	VPL_ExtStructure _OTGate_S = {"OTGate",&_OTGate_1};

	VPL_ExtField _OTHashList_3 = { "fHashBuckets",8,4,kPointerType,"OTLink",2,4,"T*",NULL};
	VPL_ExtField _OTHashList_2 = { "fHashTableSize",4,4,kUnsignedType,"OTLink",2,4,"unsigned long",&_OTHashList_3};
	VPL_ExtField _OTHashList_1 = { "fHashProc",0,4,kPointerType,"unsigned long",1,4,"T*",&_OTHashList_2};
	VPL_ExtStructure _OTHashList_S = {"OTHashList",&_OTHashList_1};

	VPL_ExtField _OTClientList_2 = { "fBuffer",4,4,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _OTClientList_1 = { "fNumClients",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_OTClientList_2};
	VPL_ExtStructure _OTClientList_S = {"OTClientList",&_OTClientList_1};

	VPL_ExtField _OTPortCloseStruct_3 = { "fDenyReason",8,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _OTPortCloseStruct_2 = { "fTheProvider",4,4,kPointerType,"void",1,0,"T*",&_OTPortCloseStruct_3};
	VPL_ExtField _OTPortCloseStruct_1 = { "fPortRef",0,4,kUnsignedType,"void",1,0,"unsigned long",&_OTPortCloseStruct_2};
	VPL_ExtStructure _OTPortCloseStruct_S = {"OTPortCloseStruct",&_OTPortCloseStruct_1};

	VPL_ExtField _trace_ids_3 = { "ti_level",4,1,kIntType,"NULL",0,0,"char",NULL};
	VPL_ExtField _trace_ids_2 = { "ti_sid",2,2,kIntType,"NULL",0,0,"short",&_trace_ids_3};
	VPL_ExtField _trace_ids_1 = { "ti_mid",0,2,kIntType,"NULL",0,0,"short",&_trace_ids_2};
	VPL_ExtStructure _trace_ids_S = {"trace_ids",&_trace_ids_1};

	VPL_ExtField _log_ctl_8 = { "seq_no",16,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _log_ctl_7 = { "ttime",12,4,kIntType,"NULL",0,0,"long int",&_log_ctl_8};
	VPL_ExtField _log_ctl_6 = { "ltime",8,4,kIntType,"NULL",0,0,"long int",&_log_ctl_7};
	VPL_ExtField _log_ctl_5 = { "flags",6,2,kIntType,"NULL",0,0,"short",&_log_ctl_6};
	VPL_ExtField _log_ctl_4 = { "pad1",5,1,kIntType,"NULL",0,0,"char",&_log_ctl_5};
	VPL_ExtField _log_ctl_3 = { "level",4,1,kIntType,"NULL",0,0,"char",&_log_ctl_4};
	VPL_ExtField _log_ctl_2 = { "sid",2,2,kIntType,"NULL",0,0,"short",&_log_ctl_3};
	VPL_ExtField _log_ctl_1 = { "mid",0,2,kIntType,"NULL",0,0,"short",&_log_ctl_2};
	VPL_ExtStructure _log_ctl_S = {"log_ctl",&_log_ctl_1};

	VPL_ExtField _strioctl_4 = { "ic_dp",12,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _strioctl_3 = { "ic_len",8,4,kIntType,"char",1,1,"long int",&_strioctl_4};
	VPL_ExtField _strioctl_2 = { "ic_timout",4,4,kIntType,"char",1,1,"long int",&_strioctl_3};
	VPL_ExtField _strioctl_1 = { "ic_cmd",0,4,kIntType,"char",1,1,"long int",&_strioctl_2};
	VPL_ExtStructure _strioctl_S = {"strioctl",&_strioctl_1};

	VPL_ExtField _strrecvfd_4 = { "fill",8,8,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _strrecvfd_3 = { "gid",6,2,kUnsignedType,"char",0,1,"unsigned short",&_strrecvfd_4};
	VPL_ExtField _strrecvfd_2 = { "uid",4,2,kUnsignedType,"char",0,1,"unsigned short",&_strrecvfd_3};
	VPL_ExtField _strrecvfd_1 = { "fd",0,4,kIntType,"char",0,1,"long int",&_strrecvfd_2};
	VPL_ExtStructure _strrecvfd_S = {"strrecvfd",&_strrecvfd_1};

	VPL_ExtField _strpmsg_4 = { "flags",28,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _strpmsg_3 = { "band",24,4,kIntType,"NULL",0,0,"long int",&_strpmsg_4};
	VPL_ExtField _strpmsg_2 = { "databuf",12,12,kStructureType,"NULL",0,0,"strbuf",&_strpmsg_3};
	VPL_ExtField _strpmsg_1 = { "ctlbuf",0,12,kStructureType,"NULL",0,0,"strbuf",&_strpmsg_2};
	VPL_ExtStructure _strpmsg_S = {"strpmsg",&_strpmsg_1};

	VPL_ExtField _strpeek_3 = { "flags",24,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _strpeek_2 = { "databuf",12,12,kStructureType,"NULL",0,0,"strbuf",&_strpeek_3};
	VPL_ExtField _strpeek_1 = { "ctlbuf",0,12,kStructureType,"NULL",0,0,"strbuf",&_strpeek_2};
	VPL_ExtStructure _strpeek_S = {"strpeek",&_strpeek_1};

	VPL_ExtField _str_list_2 = { "sl_modlist",4,4,kPointerType,"str_mlist",1,32,"T*",NULL};
	VPL_ExtField _str_list_1 = { "sl_nmods",0,4,kIntType,"str_mlist",1,32,"long int",&_str_list_2};
	VPL_ExtStructure _str_list_S = {"str_list",&_str_list_1};

	VPL_ExtField _str_mlist_1 = { "l_name",0,32,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtStructure _str_mlist_S = {"str_mlist",&_str_mlist_1};

	VPL_ExtField _strfdinsert_5 = { "offset",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _strfdinsert_4 = { "fildes",28,4,kIntType,"NULL",0,0,"long int",&_strfdinsert_5};
	VPL_ExtField _strfdinsert_3 = { "flags",24,4,kIntType,"NULL",0,0,"long int",&_strfdinsert_4};
	VPL_ExtField _strfdinsert_2 = { "databuf",12,12,kStructureType,"NULL",0,0,"strbuf",&_strfdinsert_3};
	VPL_ExtField _strfdinsert_1 = { "ctlbuf",0,12,kStructureType,"NULL",0,0,"strbuf",&_strfdinsert_2};
	VPL_ExtStructure _strfdinsert_S = {"strfdinsert",&_strfdinsert_1};

	VPL_ExtField _bandinfo_3 = { "bi_flag",2,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _bandinfo_2 = { "pad1",1,1,kIntType,"NULL",0,0,"char",&_bandinfo_3};
	VPL_ExtField _bandinfo_1 = { "bi_pri",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_bandinfo_2};
	VPL_ExtStructure _bandinfo_S = {"bandinfo",&_bandinfo_1};

	VPL_ExtField _LCPEcho_2 = { "retryPeriod",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _LCPEcho_1 = { "retryCount",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_LCPEcho_2};
	VPL_ExtStructure _LCPEcho_S = {"LCPEcho",&_LCPEcho_1};

	VPL_ExtField _CCMiscInfo_6 = { "reserved",20,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CCMiscInfo_5 = { "bytesReceived",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CCMiscInfo_6};
	VPL_ExtField _CCMiscInfo_4 = { "bytesTransmitted",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CCMiscInfo_5};
	VPL_ExtField _CCMiscInfo_3 = { "connectionTimeRemaining",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CCMiscInfo_4};
	VPL_ExtField _CCMiscInfo_2 = { "connectionTimeElapsed",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CCMiscInfo_3};
	VPL_ExtField _CCMiscInfo_1 = { "connectionStatus",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CCMiscInfo_2};
	VPL_ExtStructure _CCMiscInfo_S = {"CCMiscInfo",&_CCMiscInfo_1};

	VPL_ExtField _PPPMRULimits_3 = { "lowerMRULimit",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _PPPMRULimits_2 = { "upperMRULimit",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PPPMRULimits_3};
	VPL_ExtField _PPPMRULimits_1 = { "mruSize",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PPPMRULimits_2};
	VPL_ExtStructure _PPPMRULimits_S = {"PPPMRULimits",&_PPPMRULimits_1};

	VPL_ExtField _OTISDNAddress_3 = { "fPhoneNumber",4,37,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _OTISDNAddress_2 = { "fPhoneLength",2,2,kUnsignedType,"char",0,1,"unsigned short",&_OTISDNAddress_3};
	VPL_ExtField _OTISDNAddress_1 = { "fAddressType",0,2,kUnsignedType,"char",0,1,"unsigned short",&_OTISDNAddress_2};
	VPL_ExtStructure _OTISDNAddress_S = {"OTISDNAddress",&_OTISDNAddress_1};

	VPL_ExtField _T8022FullPacketHeader_2 = { "f8022Part",14,8,kStructureType,"NULL",0,0,"T8022SNAPHeader",NULL};
	VPL_ExtField _T8022FullPacketHeader_1 = { "fEnetPart",0,14,kStructureType,"NULL",0,0,"EnetPacketHeader",&_T8022FullPacketHeader_2};
	VPL_ExtStructure _T8022FullPacketHeader_S = {"T8022FullPacketHeader",&_T8022FullPacketHeader_1};

	VPL_ExtField _T8022SNAPHeader_4 = { "fSNAP",3,5,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _T8022SNAPHeader_3 = { "fCtrl",2,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_T8022SNAPHeader_4};
	VPL_ExtField _T8022SNAPHeader_2 = { "fSSAP",1,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_T8022SNAPHeader_3};
	VPL_ExtField _T8022SNAPHeader_1 = { "fDSAP",0,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_T8022SNAPHeader_2};
	VPL_ExtStructure _T8022SNAPHeader_S = {"T8022SNAPHeader",&_T8022SNAPHeader_1};

	VPL_ExtField _T8022Header_3 = { "fCtrl",2,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _T8022Header_2 = { "fSSAP",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_T8022Header_3};
	VPL_ExtField _T8022Header_1 = { "fDSAP",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_T8022Header_2};
	VPL_ExtStructure _T8022Header_S = {"T8022Header",&_T8022Header_1};

	VPL_ExtField _EnetPacketHeader_3 = { "fProto",12,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _EnetPacketHeader_2 = { "fSourceAddr",6,6,kPointerType,"unsigned char",0,1,NULL,&_EnetPacketHeader_3};
	VPL_ExtField _EnetPacketHeader_1 = { "fDestAddr",0,6,kPointerType,"unsigned char",0,1,NULL,&_EnetPacketHeader_2};
	VPL_ExtStructure _EnetPacketHeader_S = {"EnetPacketHeader",&_EnetPacketHeader_1};

	VPL_ExtField _T8022Address_4 = { "fSNAP",10,5,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _T8022Address_3 = { "fSAP",8,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_T8022Address_4};
	VPL_ExtField _T8022Address_2 = { "fHWAddr",2,6,kPointerType,"unsigned char",0,1,NULL,&_T8022Address_3};
	VPL_ExtField _T8022Address_1 = { "fAddrFamily",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_T8022Address_2};
	VPL_ExtStructure _T8022Address_S = {"T8022Address",&_T8022Address_1};

	VPL_ExtField _AppleTalkInfo_4 = { "fFlags",20,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _AppleTalkInfo_3 = { "fCableRange",16,4,kPointerType,"unsigned short",0,2,NULL,&_AppleTalkInfo_4};
	VPL_ExtField _AppleTalkInfo_2 = { "fRouterAddress",8,8,kStructureType,"unsigned short",0,2,"DDPAddress",&_AppleTalkInfo_3};
	VPL_ExtField _AppleTalkInfo_1 = { "fOurAddress",0,8,kStructureType,"unsigned short",0,2,"DDPAddress",&_AppleTalkInfo_2};
	VPL_ExtStructure _AppleTalkInfo_S = {"AppleTalkInfo",&_AppleTalkInfo_1};

	VPL_ExtField _DDPNBPAddress_7 = { "fNBPNameBuffer",8,105,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _DDPNBPAddress_6 = { "fPad",7,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_DDPNBPAddress_7};
	VPL_ExtField _DDPNBPAddress_5 = { "fDDPType",6,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_DDPNBPAddress_6};
	VPL_ExtField _DDPNBPAddress_4 = { "fSocket",5,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_DDPNBPAddress_5};
	VPL_ExtField _DDPNBPAddress_3 = { "fNodeID",4,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_DDPNBPAddress_4};
	VPL_ExtField _DDPNBPAddress_2 = { "fNetwork",2,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_DDPNBPAddress_3};
	VPL_ExtField _DDPNBPAddress_1 = { "fAddressType",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_DDPNBPAddress_2};
	VPL_ExtStructure _DDPNBPAddress_S = {"DDPNBPAddress",&_DDPNBPAddress_1};

	VPL_ExtField _NBPAddress_2 = { "fNBPNameBuffer",2,105,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _NBPAddress_1 = { "fAddressType",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_NBPAddress_2};
	VPL_ExtStructure _NBPAddress_S = {"NBPAddress",&_NBPAddress_1};

	VPL_ExtField _DDPAddress_6 = { "fPad",7,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _DDPAddress_5 = { "fDDPType",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DDPAddress_6};
	VPL_ExtField _DDPAddress_4 = { "fSocket",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DDPAddress_5};
	VPL_ExtField _DDPAddress_3 = { "fNodeID",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_DDPAddress_4};
	VPL_ExtField _DDPAddress_2 = { "fNetwork",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_DDPAddress_3};
	VPL_ExtField _DDPAddress_1 = { "fAddressType",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_DDPAddress_2};
	VPL_ExtStructure _DDPAddress_S = {"DDPAddress",&_DDPAddress_1};

	VPL_ExtField _NBPEntity_1 = { "fEntity",0,99,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtStructure _NBPEntity_S = {"NBPEntity",&_NBPEntity_1};

	VPL_ExtField _InetDHCPOption_3 = { "fOptionValue",2,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _InetDHCPOption_2 = { "fOptionLen",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_InetDHCPOption_3};
	VPL_ExtField _InetDHCPOption_1 = { "fOptionTag",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_InetDHCPOption_2};
	VPL_ExtStructure _InetDHCPOption_S = {"InetDHCPOption",&_InetDHCPOption_1};

	VPL_ExtField _InetInterfaceInfo_13 = { "fReserved",300,252,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _InetInterfaceInfo_12 = { "fIPSecondaryCount",296,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_InetInterfaceInfo_13};
	VPL_ExtField _InetInterfaceInfo_11 = { "fDomainName",40,256,kPointerType,"char",0,1,NULL,&_InetInterfaceInfo_12};
	VPL_ExtField _InetInterfaceInfo_10 = { "fReservedPtrs",32,8,kPointerType,"unsigned char",1,1,NULL,&_InetInterfaceInfo_11};
	VPL_ExtField _InetInterfaceInfo_9 = { "fIfMTU",28,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_InetInterfaceInfo_10};
	VPL_ExtField _InetInterfaceInfo_8 = { "fHWAddr",24,4,kPointerType,"unsigned char",1,1,"T*",&_InetInterfaceInfo_9};
	VPL_ExtField _InetInterfaceInfo_7 = { "fHWAddrLen",22,2,kUnsignedType,"unsigned char",1,1,"unsigned short",&_InetInterfaceInfo_8};
	VPL_ExtField _InetInterfaceInfo_6 = { "fVersion",20,2,kUnsignedType,"unsigned char",1,1,"unsigned short",&_InetInterfaceInfo_7};
	VPL_ExtField _InetInterfaceInfo_5 = { "fDNSAddr",16,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_InetInterfaceInfo_6};
	VPL_ExtField _InetInterfaceInfo_4 = { "fDefaultGatewayAddr",12,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_InetInterfaceInfo_5};
	VPL_ExtField _InetInterfaceInfo_3 = { "fBroadcastAddr",8,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_InetInterfaceInfo_4};
	VPL_ExtField _InetInterfaceInfo_2 = { "fNetmask",4,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_InetInterfaceInfo_3};
	VPL_ExtField _InetInterfaceInfo_1 = { "fAddress",0,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_InetInterfaceInfo_2};
	VPL_ExtStructure _InetInterfaceInfo_S = {"InetInterfaceInfo",&_InetInterfaceInfo_1};

	VPL_ExtField _DNSAddress_2 = { "fName",2,256,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _DNSAddress_1 = { "fAddressType",0,2,kUnsignedType,"char",0,1,"unsigned short",&_DNSAddress_2};
	VPL_ExtStructure _DNSAddress_S = {"DNSAddress",&_DNSAddress_1};

	VPL_ExtField _DNSQueryInfo_7 = { "resourceData",268,4,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _DNSQueryInfo_6 = { "resourceLen",266,2,kUnsignedType,"char",0,1,"unsigned short",&_DNSQueryInfo_7};
	VPL_ExtField _DNSQueryInfo_5 = { "responseType",264,2,kUnsignedType,"char",0,1,"unsigned short",&_DNSQueryInfo_6};
	VPL_ExtField _DNSQueryInfo_4 = { "name",8,256,kPointerType,"char",0,1,NULL,&_DNSQueryInfo_5};
	VPL_ExtField _DNSQueryInfo_3 = { "ttl",4,4,kUnsignedType,"char",0,1,"unsigned long",&_DNSQueryInfo_4};
	VPL_ExtField _DNSQueryInfo_2 = { "qClass",2,2,kUnsignedType,"char",0,1,"unsigned short",&_DNSQueryInfo_3};
	VPL_ExtField _DNSQueryInfo_1 = { "qType",0,2,kUnsignedType,"char",0,1,"unsigned short",&_DNSQueryInfo_2};
	VPL_ExtStructure _DNSQueryInfo_S = {"DNSQueryInfo",&_DNSQueryInfo_1};

	VPL_ExtField _InetMailExchange_2 = { "exchange",2,256,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _InetMailExchange_1 = { "preference",0,2,kUnsignedType,"char",0,1,"unsigned short",&_InetMailExchange_2};
	VPL_ExtStructure _InetMailExchange_S = {"InetMailExchange",&_InetMailExchange_1};

	VPL_ExtField _InetSysInfo_2 = { "osType",32,32,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _InetSysInfo_1 = { "cpuType",0,32,kPointerType,"char",0,1,NULL,&_InetSysInfo_2};
	VPL_ExtStructure _InetSysInfo_S = {"InetSysInfo",&_InetSysInfo_1};

	VPL_ExtField _InetHostInfo_2 = { "addrs",256,40,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _InetHostInfo_1 = { "name",0,256,kPointerType,"char",0,1,NULL,&_InetHostInfo_2};
	VPL_ExtStructure _InetHostInfo_S = {"InetHostInfo",&_InetHostInfo_1};

	VPL_ExtField _InetAddress_4 = { "fUnused",8,8,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _InetAddress_3 = { "fHost",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_InetAddress_4};
	VPL_ExtField _InetAddress_2 = { "fPort",2,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_InetAddress_3};
	VPL_ExtField _InetAddress_1 = { "fAddressType",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_InetAddress_2};
	VPL_ExtStructure _InetAddress_S = {"InetAddress",&_InetAddress_1};

	VPL_ExtField _TIPAddMulticast_2 = { "interfaceAddress",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TIPAddMulticast_1 = { "multicastGroupAddress",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TIPAddMulticast_2};
	VPL_ExtStructure _TIPAddMulticast_S = {"TIPAddMulticast",&_TIPAddMulticast_1};

	VPL_ExtField _OTList_1 = { "fHead",0,4,kPointerType,"OTLink",1,4,"T*",NULL};
	VPL_ExtStructure _OTList_S = {"OTList",&_OTList_1};

	VPL_ExtField _OTLIFO_1 = { "fHead",0,4,kPointerType,"OTLink",1,4,"T*",NULL};
	VPL_ExtStructure _OTLIFO_S = {"OTLIFO",&_OTLIFO_1};

	VPL_ExtField _OTLink_1 = { "fNext",0,4,kPointerType,"OTLink",1,4,"T*",NULL};
	VPL_ExtStructure _OTLink_S = {"OTLink",&_OTLink_1};

	VPL_ExtStructure _OpaqueOTClientContextPtr_S = {"OpaqueOTClientContextPtr",NULL};

	VPL_ExtField _TLookupBuffer_3 = { "fAddressBuffer",4,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _TLookupBuffer_2 = { "fNameLength",2,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_TLookupBuffer_3};
	VPL_ExtField _TLookupBuffer_1 = { "fAddressLength",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_TLookupBuffer_2};
	VPL_ExtStructure _TLookupBuffer_S = {"TLookupBuffer",&_TLookupBuffer_1};

	VPL_ExtField _TLookupReply_2 = { "rspcount",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TLookupReply_1 = { "names",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TLookupReply_2};
	VPL_ExtStructure _TLookupReply_S = {"TLookupReply",&_TLookupReply_1};

	VPL_ExtField _TLookupRequest_5 = { "flags",32,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TLookupRequest_4 = { "timeout",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TLookupRequest_5};
	VPL_ExtField _TLookupRequest_3 = { "maxcnt",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TLookupRequest_4};
	VPL_ExtField _TLookupRequest_2 = { "addr",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TLookupRequest_3};
	VPL_ExtField _TLookupRequest_1 = { "name",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TLookupRequest_2};
	VPL_ExtStructure _TLookupRequest_S = {"TLookupRequest",&_TLookupRequest_1};

	VPL_ExtField _TRegisterReply_2 = { "nameid",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TRegisterReply_1 = { "addr",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TRegisterReply_2};
	VPL_ExtStructure _TRegisterReply_S = {"TRegisterReply",&_TRegisterReply_1};

	VPL_ExtField _TRegisterRequest_3 = { "flags",24,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TRegisterRequest_2 = { "addr",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TRegisterRequest_3};
	VPL_ExtField _TRegisterRequest_1 = { "name",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TRegisterRequest_2};
	VPL_ExtStructure _TRegisterRequest_S = {"TRegisterRequest",&_TRegisterRequest_1};

	VPL_ExtField _TUnitReply_3 = { "sequence",24,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TUnitReply_2 = { "udata",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUnitReply_3};
	VPL_ExtField _TUnitReply_1 = { "opt",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUnitReply_2};
	VPL_ExtStructure _TUnitReply_S = {"TUnitReply",&_TUnitReply_1};

	VPL_ExtField _TUnitRequest_4 = { "sequence",36,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TUnitRequest_3 = { "udata",24,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUnitRequest_4};
	VPL_ExtField _TUnitRequest_2 = { "opt",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUnitRequest_3};
	VPL_ExtField _TUnitRequest_1 = { "addr",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUnitRequest_2};
	VPL_ExtStructure _TUnitRequest_S = {"TUnitRequest",&_TUnitRequest_1};

	VPL_ExtField _TReply_3 = { "sequence",24,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TReply_2 = { "opt",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TReply_3};
	VPL_ExtField _TReply_1 = { "data",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TReply_2};
	VPL_ExtStructure _TReply_S = {"TReply",&_TReply_1};

	VPL_ExtField _TRequest_3 = { "sequence",24,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TRequest_2 = { "opt",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TRequest_3};
	VPL_ExtField _TRequest_1 = { "data",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TRequest_2};
	VPL_ExtStructure _TRequest_S = {"TRequest",&_TRequest_1};

	VPL_ExtField _TOptMgmt_2 = { "flags",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TOptMgmt_1 = { "opt",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TOptMgmt_2};
	VPL_ExtStructure _TOptMgmt_S = {"TOptMgmt",&_TOptMgmt_1};

	VPL_ExtField _TUDErr_3 = { "error",24,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TUDErr_2 = { "opt",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUDErr_3};
	VPL_ExtField _TUDErr_1 = { "addr",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUDErr_2};
	VPL_ExtStructure _TUDErr_S = {"TUDErr",&_TUDErr_1};

	VPL_ExtField _TUnitData_3 = { "udata",24,12,kStructureType,"NULL",0,0,"TNetbuf",NULL};
	VPL_ExtField _TUnitData_2 = { "opt",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUnitData_3};
	VPL_ExtField _TUnitData_1 = { "addr",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TUnitData_2};
	VPL_ExtStructure _TUnitData_S = {"TUnitData",&_TUnitData_1};

	VPL_ExtField _TCall_4 = { "sequence",36,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TCall_3 = { "udata",24,12,kStructureType,"NULL",0,0,"TNetbuf",&_TCall_4};
	VPL_ExtField _TCall_2 = { "opt",12,12,kStructureType,"NULL",0,0,"TNetbuf",&_TCall_3};
	VPL_ExtField _TCall_1 = { "addr",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TCall_2};
	VPL_ExtStructure _TCall_S = {"TCall",&_TCall_1};

	VPL_ExtField _TDiscon_3 = { "sequence",16,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TDiscon_2 = { "reason",12,4,kIntType,"NULL",0,0,"long int",&_TDiscon_3};
	VPL_ExtField _TDiscon_1 = { "udata",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TDiscon_2};
	VPL_ExtStructure _TDiscon_S = {"TDiscon",&_TDiscon_1};

	VPL_ExtField _TBind_2 = { "qlen",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TBind_1 = { "addr",0,12,kStructureType,"NULL",0,0,"TNetbuf",&_TBind_2};
	VPL_ExtStructure _TBind_S = {"TBind",&_TBind_1};

	VPL_ExtField _OTBufferInfo_3 = { "fPad",8,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _OTBufferInfo_2 = { "fOffset",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_OTBufferInfo_3};
	VPL_ExtField _OTBufferInfo_1 = { "fBuffer",0,4,kPointerType,"OTBuffer",1,28,"T*",&_OTBufferInfo_2};
	VPL_ExtStructure _OTBufferInfo_S = {"OTBufferInfo",&_OTBufferInfo_1};

	VPL_ExtField _OTBuffer_10 = { "fFlags",27,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _OTBuffer_9 = { "fPad1",26,1,kUnsignedType,"NULL",0,0,"unsigned char",&_OTBuffer_10};
	VPL_ExtField _OTBuffer_8 = { "fType",25,1,kUnsignedType,"NULL",0,0,"unsigned char",&_OTBuffer_9};
	VPL_ExtField _OTBuffer_7 = { "fBand",24,1,kUnsignedType,"NULL",0,0,"unsigned char",&_OTBuffer_8};
	VPL_ExtField _OTBuffer_6 = { "fSave",20,4,kPointerType,"void",1,0,"T*",&_OTBuffer_7};
	VPL_ExtField _OTBuffer_5 = { "fLen",16,4,kUnsignedType,"void",1,0,"unsigned long",&_OTBuffer_6};
	VPL_ExtField _OTBuffer_4 = { "fData",12,4,kPointerType,"unsigned char",1,1,"T*",&_OTBuffer_5};
	VPL_ExtField _OTBuffer_3 = { "fNext",8,4,kPointerType,"OTBuffer",1,28,"T*",&_OTBuffer_4};
	VPL_ExtField _OTBuffer_2 = { "fLink2",4,4,kPointerType,"void",1,0,"T*",&_OTBuffer_3};
	VPL_ExtField _OTBuffer_1 = { "fLink",0,4,kPointerType,"void",1,0,"T*",&_OTBuffer_2};
	VPL_ExtStructure _OTBuffer_S = {"OTBuffer",&_OTBuffer_1};

	VPL_ExtField _OTData_3 = { "fLen",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _OTData_2 = { "fData",4,4,kPointerType,"void",1,0,"T*",&_OTData_3};
	VPL_ExtField _OTData_1 = { "fNext",0,4,kPointerType,"void",1,0,"T*",&_OTData_2};
	VPL_ExtStructure _OTData_S = {"OTData",&_OTData_1};

	VPL_ExtField _strbuf_3 = { "buf",8,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _strbuf_2 = { "len",4,4,kIntType,"char",1,1,"long int",&_strbuf_3};
	VPL_ExtField _strbuf_1 = { "maxlen",0,4,kIntType,"char",1,1,"long int",&_strbuf_2};
	VPL_ExtStructure _strbuf_S = {"strbuf",&_strbuf_1};

	VPL_ExtField _TNetbuf_3 = { "buf",8,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _TNetbuf_2 = { "len",4,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_TNetbuf_3};
	VPL_ExtField _TNetbuf_1 = { "maxlen",0,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_TNetbuf_2};
	VPL_ExtStructure _TNetbuf_S = {"TNetbuf",&_TNetbuf_1};

	VPL_ExtField _OTPortRecord_11 = { "fReserved",132,164,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _OTPortRecord_10 = { "fResourceInfo",100,32,kPointerType,"char",0,1,NULL,&_OTPortRecord_11};
	VPL_ExtField _OTPortRecord_9 = { "fSlotID",92,8,kPointerType,"char",0,1,NULL,&_OTPortRecord_10};
	VPL_ExtField _OTPortRecord_8 = { "fModuleName",60,32,kPointerType,"char",0,1,NULL,&_OTPortRecord_9};
	VPL_ExtField _OTPortRecord_7 = { "fPortName",24,36,kPointerType,"char",0,1,NULL,&_OTPortRecord_8};
	VPL_ExtField _OTPortRecord_6 = { "fChildPorts",20,4,kPointerType,"unsigned long",1,4,"T*",&_OTPortRecord_7};
	VPL_ExtField _OTPortRecord_5 = { "fNumChildPorts",16,4,kUnsignedType,"unsigned long",1,4,"unsigned long",&_OTPortRecord_6};
	VPL_ExtField _OTPortRecord_4 = { "fCapabilities",12,4,kUnsignedType,"unsigned long",1,4,"unsigned long",&_OTPortRecord_5};
	VPL_ExtField _OTPortRecord_3 = { "fInfoFlags",8,4,kUnsignedType,"unsigned long",1,4,"unsigned long",&_OTPortRecord_4};
	VPL_ExtField _OTPortRecord_2 = { "fPortFlags",4,4,kUnsignedType,"unsigned long",1,4,"unsigned long",&_OTPortRecord_3};
	VPL_ExtField _OTPortRecord_1 = { "fRef",0,4,kUnsignedType,"unsigned long",1,4,"unsigned long",&_OTPortRecord_2};
	VPL_ExtStructure _OTPortRecord_S = {"OTPortRecord",&_OTPortRecord_1};

	VPL_ExtField _TEndpointInfo_8 = { "flags",28,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TEndpointInfo_7 = { "servtype",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TEndpointInfo_8};
	VPL_ExtField _TEndpointInfo_6 = { "discon",20,4,kIntType,"NULL",0,0,"long int",&_TEndpointInfo_7};
	VPL_ExtField _TEndpointInfo_5 = { "connect",16,4,kIntType,"NULL",0,0,"long int",&_TEndpointInfo_6};
	VPL_ExtField _TEndpointInfo_4 = { "etsdu",12,4,kIntType,"NULL",0,0,"long int",&_TEndpointInfo_5};
	VPL_ExtField _TEndpointInfo_3 = { "tsdu",8,4,kIntType,"NULL",0,0,"long int",&_TEndpointInfo_4};
	VPL_ExtField _TEndpointInfo_2 = { "options",4,4,kIntType,"NULL",0,0,"long int",&_TEndpointInfo_3};
	VPL_ExtField _TEndpointInfo_1 = { "addr",0,4,kIntType,"NULL",0,0,"long int",&_TEndpointInfo_2};
	VPL_ExtStructure _TEndpointInfo_S = {"TEndpointInfo",&_TEndpointInfo_1};

	VPL_ExtField _t_linger_2 = { "l_linger",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _t_linger_1 = { "l_onoff",0,4,kIntType,"NULL",0,0,"long int",&_t_linger_2};
	VPL_ExtStructure _t_linger_S = {"t_linger",&_t_linger_1};

	VPL_ExtField _t_kpalive_2 = { "kp_timeout",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _t_kpalive_1 = { "kp_onoff",0,4,kIntType,"NULL",0,0,"long int",&_t_kpalive_2};
	VPL_ExtStructure _t_kpalive_S = {"t_kpalive",&_t_kpalive_1};

	VPL_ExtField _TOption_5 = { "value",16,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _TOption_4 = { "status",12,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_TOption_5};
	VPL_ExtField _TOption_3 = { "name",8,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_TOption_4};
	VPL_ExtField _TOption_2 = { "level",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_TOption_3};
	VPL_ExtField _TOption_1 = { "len",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_TOption_2};
	VPL_ExtStructure _TOption_S = {"TOption",&_TOption_1};

	VPL_ExtField _TOptionHeader_4 = { "status",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TOptionHeader_3 = { "name",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TOptionHeader_4};
	VPL_ExtField _TOptionHeader_2 = { "level",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TOptionHeader_3};
	VPL_ExtField _TOptionHeader_1 = { "len",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TOptionHeader_2};
	VPL_ExtStructure _TOptionHeader_S = {"TOptionHeader",&_TOptionHeader_1};

	VPL_ExtStructure _OTConfiguration_S = {"OTConfiguration",NULL};

	VPL_ExtField _OTScriptInfo_3 = { "fScriptLength",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _OTScriptInfo_2 = { "fTheScript",4,4,kPointerType,"void",1,0,"T*",&_OTScriptInfo_3};
	VPL_ExtField _OTScriptInfo_1 = { "fScriptType",0,4,kUnsignedType,"void",1,0,"unsigned long",&_OTScriptInfo_2};
	VPL_ExtStructure _OTScriptInfo_S = {"OTScriptInfo",&_OTScriptInfo_1};

	VPL_ExtField _OTAddress_2 = { "fAddress",2,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _OTAddress_1 = { "fAddressType",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_OTAddress_2};
	VPL_ExtStructure _OTAddress_S = {"OTAddress",&_OTAddress_1};

	VPL_ExtField _TECPluginDispatchTable_21 = { "PluginGetTextEncodingFromInternetName",80,4,kPointerType,"long int",1,4,"T*",NULL};
	VPL_ExtField _TECPluginDispatchTable_20 = { "PluginGetTextEncodingInternetName",76,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_21};
	VPL_ExtField _TECPluginDispatchTable_19 = { "PluginGetCountMailTextEncodings",72,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_20};
	VPL_ExtField _TECPluginDispatchTable_18 = { "PluginGetCountWebTextEncodings",68,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_19};
	VPL_ExtField _TECPluginDispatchTable_17 = { "PluginGetCountAvailableSniffers",64,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_18};
	VPL_ExtField _TECPluginDispatchTable_16 = { "PluginGetCountSubTextEncodings",60,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_17};
	VPL_ExtField _TECPluginDispatchTable_15 = { "PluginGetCountDestinationTextEncodings",56,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_16};
	VPL_ExtField _TECPluginDispatchTable_14 = { "PluginGetCountAvailableTextEncodingPairs",52,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_15};
	VPL_ExtField _TECPluginDispatchTable_13 = { "PluginGetCountAvailableTextEncodings",48,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_14};
	VPL_ExtField _TECPluginDispatchTable_12 = { "PluginDisposeEncodingSniffer",44,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_13};
	VPL_ExtField _TECPluginDispatchTable_11 = { "PluginSniffTextEncoding",40,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_12};
	VPL_ExtField _TECPluginDispatchTable_10 = { "PluginClearSnifferContextInfo",36,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_11};
	VPL_ExtField _TECPluginDispatchTable_9 = { "PluginNewEncodingSniffer",32,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_10};
	VPL_ExtField _TECPluginDispatchTable_8 = { "PluginDisposeEncodingConverter",28,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_9};
	VPL_ExtField _TECPluginDispatchTable_7 = { "PluginFlushConversion",24,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_8};
	VPL_ExtField _TECPluginDispatchTable_6 = { "PluginConvertTextEncoding",20,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_7};
	VPL_ExtField _TECPluginDispatchTable_5 = { "PluginClearContextInfo",16,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_6};
	VPL_ExtField _TECPluginDispatchTable_4 = { "PluginNewEncodingConverter",12,4,kPointerType,"long int",1,4,"T*",&_TECPluginDispatchTable_5};
	VPL_ExtField _TECPluginDispatchTable_3 = { "PluginID",8,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECPluginDispatchTable_4};
	VPL_ExtField _TECPluginDispatchTable_2 = { "compatibleVersion",4,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECPluginDispatchTable_3};
	VPL_ExtField _TECPluginDispatchTable_1 = { "version",0,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECPluginDispatchTable_2};
	VPL_ExtStructure _TECPluginDispatchTable_S = {"TECPluginDispatchTable",&_TECPluginDispatchTable_1};

	VPL_ExtField _TECSnifferContextRec_12 = { "pluginState",44,20,kStructureType,"NULL",0,0,"TECPluginStateRec",NULL};
	VPL_ExtField _TECSnifferContextRec_11 = { "clearContextInfoProc",40,4,kPointerType,"long int",1,4,"T*",&_TECSnifferContextRec_12};
	VPL_ExtField _TECSnifferContextRec_10 = { "sniffProc",36,4,kPointerType,"long int",1,4,"T*",&_TECSnifferContextRec_11};
	VPL_ExtField _TECSnifferContextRec_9 = { "contextRefCon",32,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECSnifferContextRec_10};
	VPL_ExtField _TECSnifferContextRec_8 = { "numErrors",28,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECSnifferContextRec_9};
	VPL_ExtField _TECSnifferContextRec_7 = { "numFeatures",24,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECSnifferContextRec_8};
	VPL_ExtField _TECSnifferContextRec_6 = { "textInputBufferEnd",20,4,kPointerType,"unsigned char",1,1,"T*",&_TECSnifferContextRec_7};
	VPL_ExtField _TECSnifferContextRec_5 = { "textInputBuffer",16,4,kPointerType,"unsigned char",1,1,"T*",&_TECSnifferContextRec_6};
	VPL_ExtField _TECSnifferContextRec_4 = { "maxFeatures",12,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_TECSnifferContextRec_5};
	VPL_ExtField _TECSnifferContextRec_3 = { "maxErrors",8,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_TECSnifferContextRec_4};
	VPL_ExtField _TECSnifferContextRec_2 = { "encoding",4,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_TECSnifferContextRec_3};
	VPL_ExtField _TECSnifferContextRec_1 = { "pluginRec",0,4,kPointerType,"char",1,1,"T*",&_TECSnifferContextRec_2};
	VPL_ExtStructure _TECSnifferContextRec_S = {"TECSnifferContextRec",&_TECSnifferContextRec_1};

	VPL_ExtField _TECConverterContextRec_13 = { "pluginState",76,20,kStructureType,"NULL",0,0,"TECPluginStateRec",NULL};
	VPL_ExtField _TECConverterContextRec_12 = { "options2",72,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TECConverterContextRec_13};
	VPL_ExtField _TECConverterContextRec_11 = { "options1",68,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TECConverterContextRec_12};
	VPL_ExtField _TECConverterContextRec_10 = { "clearContextInfoProc",64,4,kPointerType,"long int",1,4,"T*",&_TECConverterContextRec_11};
	VPL_ExtField _TECConverterContextRec_9 = { "flushProc",60,4,kPointerType,"long int",1,4,"T*",&_TECConverterContextRec_10};
	VPL_ExtField _TECConverterContextRec_8 = { "conversionProc",56,4,kPointerType,"long int",1,4,"T*",&_TECConverterContextRec_9};
	VPL_ExtField _TECConverterContextRec_7 = { "contextRefCon",52,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECConverterContextRec_8};
	VPL_ExtField _TECConverterContextRec_6 = { "bufferContext",20,32,kStructureType,"long int",1,4,"TECBufferContextRec",&_TECConverterContextRec_7};
	VPL_ExtField _TECConverterContextRec_5 = { "reserved2",16,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECConverterContextRec_6};
	VPL_ExtField _TECConverterContextRec_4 = { "reserved1",12,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECConverterContextRec_5};
	VPL_ExtField _TECConverterContextRec_3 = { "destEncoding",8,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECConverterContextRec_4};
	VPL_ExtField _TECConverterContextRec_2 = { "sourceEncoding",4,4,kUnsignedType,"long int",1,4,"unsigned long",&_TECConverterContextRec_3};
	VPL_ExtField _TECConverterContextRec_1 = { "pluginRec",0,4,kPointerType,"char",1,1,"T*",&_TECConverterContextRec_2};
	VPL_ExtStructure _TECConverterContextRec_S = {"TECConverterContextRec",&_TECConverterContextRec_1};

	VPL_ExtField _TECPluginStateRec_8 = { "longState4",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TECPluginStateRec_7 = { "longState3",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TECPluginStateRec_8};
	VPL_ExtField _TECPluginStateRec_6 = { "longState2",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TECPluginStateRec_7};
	VPL_ExtField _TECPluginStateRec_5 = { "longState1",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TECPluginStateRec_6};
	VPL_ExtField _TECPluginStateRec_4 = { "state4",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_TECPluginStateRec_5};
	VPL_ExtField _TECPluginStateRec_3 = { "state3",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_TECPluginStateRec_4};
	VPL_ExtField _TECPluginStateRec_2 = { "state2",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_TECPluginStateRec_3};
	VPL_ExtField _TECPluginStateRec_1 = { "state1",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_TECPluginStateRec_2};
	VPL_ExtStructure _TECPluginStateRec_S = {"TECPluginStateRec",&_TECPluginStateRec_1};

	VPL_ExtField _TECBufferContextRec_8 = { "encodingOutputBufferEnd",28,4,kPointerType,"TextEncodingRun",1,8,"T*",NULL};
	VPL_ExtField _TECBufferContextRec_7 = { "encodingOutputBuffer",24,4,kPointerType,"TextEncodingRun",1,8,"T*",&_TECBufferContextRec_8};
	VPL_ExtField _TECBufferContextRec_6 = { "encodingInputBufferEnd",20,4,kPointerType,"TextEncodingRun",1,8,"T*",&_TECBufferContextRec_7};
	VPL_ExtField _TECBufferContextRec_5 = { "encodingInputBuffer",16,4,kPointerType,"TextEncodingRun",1,8,"T*",&_TECBufferContextRec_6};
	VPL_ExtField _TECBufferContextRec_4 = { "textOutputBufferEnd",12,4,kPointerType,"unsigned char",1,1,"T*",&_TECBufferContextRec_5};
	VPL_ExtField _TECBufferContextRec_3 = { "textOutputBuffer",8,4,kPointerType,"unsigned char",1,1,"T*",&_TECBufferContextRec_4};
	VPL_ExtField _TECBufferContextRec_2 = { "textInputBufferEnd",4,4,kPointerType,"unsigned char",1,1,"T*",&_TECBufferContextRec_3};
	VPL_ExtField _TECBufferContextRec_1 = { "textInputBuffer",0,4,kPointerType,"unsigned char",1,1,"T*",&_TECBufferContextRec_2};
	VPL_ExtStructure _TECBufferContextRec_S = {"TECBufferContextRec",&_TECBufferContextRec_1};

	VPL_ExtField _TextChunk_3 = { "text",8,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _TextChunk_2 = { "ckSize",4,4,kIntType,"char",0,1,"long int",&_TextChunk_3};
	VPL_ExtField _TextChunk_1 = { "ckID",0,4,kUnsignedType,"char",0,1,"unsigned long",&_TextChunk_2};
	VPL_ExtStructure _TextChunk_S = {"TextChunk",&_TextChunk_1};

	VPL_ExtField _CommentsChunk_4 = { "comments",10,10,kPointerType,"Comment",0,10,NULL,NULL};
	VPL_ExtField _CommentsChunk_3 = { "numComments",8,2,kUnsignedType,"Comment",0,10,"unsigned short",&_CommentsChunk_4};
	VPL_ExtField _CommentsChunk_2 = { "ckSize",4,4,kIntType,"Comment",0,10,"long int",&_CommentsChunk_3};
	VPL_ExtField _CommentsChunk_1 = { "ckID",0,4,kUnsignedType,"Comment",0,10,"unsigned long",&_CommentsChunk_2};
	VPL_ExtStructure _CommentsChunk_S = {"CommentsChunk",&_CommentsChunk_1};

	VPL_ExtField _Comment_4 = { "text",8,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _Comment_3 = { "count",6,2,kUnsignedType,"char",0,1,"unsigned short",&_Comment_4};
	VPL_ExtField _Comment_2 = { "marker",4,2,kIntType,"char",0,1,"short",&_Comment_3};
	VPL_ExtField _Comment_1 = { "timeStamp",0,4,kUnsignedType,"char",0,1,"unsigned long",&_Comment_2};
	VPL_ExtStructure _Comment_S = {"Comment",&_Comment_1};

	VPL_ExtField _ApplicationSpecificChunk_4 = { "data",12,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _ApplicationSpecificChunk_3 = { "applicationSignature",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ApplicationSpecificChunk_4};
	VPL_ExtField _ApplicationSpecificChunk_2 = { "ckSize",4,4,kIntType,"unsigned char",0,1,"long int",&_ApplicationSpecificChunk_3};
	VPL_ExtField _ApplicationSpecificChunk_1 = { "ckID",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_ApplicationSpecificChunk_2};
	VPL_ExtStructure _ApplicationSpecificChunk_S = {"ApplicationSpecificChunk",&_ApplicationSpecificChunk_1};

	VPL_ExtField _AudioRecordingChunk_3 = { "AESChannelStatus",8,24,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _AudioRecordingChunk_2 = { "ckSize",4,4,kIntType,"unsigned char",0,1,"long int",&_AudioRecordingChunk_3};
	VPL_ExtField _AudioRecordingChunk_1 = { "ckID",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_AudioRecordingChunk_2};
	VPL_ExtStructure _AudioRecordingChunk_S = {"AudioRecordingChunk",&_AudioRecordingChunk_1};

	VPL_ExtField _MIDIDataChunk_3 = { "MIDIdata",8,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _MIDIDataChunk_2 = { "ckSize",4,4,kIntType,"unsigned char",0,1,"long int",&_MIDIDataChunk_3};
	VPL_ExtField _MIDIDataChunk_1 = { "ckID",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_MIDIDataChunk_2};
	VPL_ExtStructure _MIDIDataChunk_S = {"MIDIDataChunk",&_MIDIDataChunk_1};

	VPL_ExtField _InstrumentChunk_11 = { "releaseLoop",22,6,kStructureType,"NULL",0,0,"AIFFLoop",NULL};
	VPL_ExtField _InstrumentChunk_10 = { "sustainLoop",16,6,kStructureType,"NULL",0,0,"AIFFLoop",&_InstrumentChunk_11};
	VPL_ExtField _InstrumentChunk_9 = { "gain",14,2,kIntType,"NULL",0,0,"short",&_InstrumentChunk_10};
	VPL_ExtField _InstrumentChunk_8 = { "highVelocity",13,1,kUnsignedType,"NULL",0,0,"unsigned char",&_InstrumentChunk_9};
	VPL_ExtField _InstrumentChunk_7 = { "lowVelocity",12,1,kUnsignedType,"NULL",0,0,"unsigned char",&_InstrumentChunk_8};
	VPL_ExtField _InstrumentChunk_6 = { "highFrequency",11,1,kUnsignedType,"NULL",0,0,"unsigned char",&_InstrumentChunk_7};
	VPL_ExtField _InstrumentChunk_5 = { "lowFrequency",10,1,kUnsignedType,"NULL",0,0,"unsigned char",&_InstrumentChunk_6};
	VPL_ExtField _InstrumentChunk_4 = { "detune",9,1,kUnsignedType,"NULL",0,0,"unsigned char",&_InstrumentChunk_5};
	VPL_ExtField _InstrumentChunk_3 = { "baseFrequency",8,1,kUnsignedType,"NULL",0,0,"unsigned char",&_InstrumentChunk_4};
	VPL_ExtField _InstrumentChunk_2 = { "ckSize",4,4,kIntType,"NULL",0,0,"long int",&_InstrumentChunk_3};
	VPL_ExtField _InstrumentChunk_1 = { "ckID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_InstrumentChunk_2};
	VPL_ExtStructure _InstrumentChunk_S = {"InstrumentChunk",&_InstrumentChunk_1};

	VPL_ExtField _AIFFLoop_3 = { "endLoop",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _AIFFLoop_2 = { "beginLoop",2,2,kIntType,"NULL",0,0,"short",&_AIFFLoop_3};
	VPL_ExtField _AIFFLoop_1 = { "playMode",0,2,kIntType,"NULL",0,0,"short",&_AIFFLoop_2};
	VPL_ExtStructure _AIFFLoop_S = {"AIFFLoop",&_AIFFLoop_1};

	VPL_ExtField _MarkerChunk_4 = { "Markers",10,262,kPointerType,"Marker",0,262,NULL,NULL};
	VPL_ExtField _MarkerChunk_3 = { "numMarkers",8,2,kUnsignedType,"Marker",0,262,"unsigned short",&_MarkerChunk_4};
	VPL_ExtField _MarkerChunk_2 = { "ckSize",4,4,kIntType,"Marker",0,262,"long int",&_MarkerChunk_3};
	VPL_ExtField _MarkerChunk_1 = { "ckID",0,4,kUnsignedType,"Marker",0,262,"unsigned long",&_MarkerChunk_2};
	VPL_ExtStructure _MarkerChunk_S = {"MarkerChunk",&_MarkerChunk_1};

	VPL_ExtField _Marker_3 = { "markerName",6,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _Marker_2 = { "position",2,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_Marker_3};
	VPL_ExtField _Marker_1 = { "id",0,2,kIntType,"unsigned char",0,1,"short",&_Marker_2};
	VPL_ExtStructure _Marker_S = {"Marker",&_Marker_1};

	VPL_ExtField _SoundDataChunk_4 = { "blockSize",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _SoundDataChunk_3 = { "offset",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SoundDataChunk_4};
	VPL_ExtField _SoundDataChunk_2 = { "ckSize",4,4,kIntType,"NULL",0,0,"long int",&_SoundDataChunk_3};
	VPL_ExtField _SoundDataChunk_1 = { "ckID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SoundDataChunk_2};
	VPL_ExtStructure _SoundDataChunk_S = {"SoundDataChunk",&_SoundDataChunk_1};

	VPL_ExtField _ExtCommonChunk_8 = { "compressionName",30,1,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _ExtCommonChunk_7 = { "compressionType",26,4,kUnsignedType,"char",0,1,"unsigned long",&_ExtCommonChunk_8};
	VPL_ExtField _ExtCommonChunk_6 = { "sampleRate",16,10,kStructureType,"char",0,1,"Float80",&_ExtCommonChunk_7};
	VPL_ExtField _ExtCommonChunk_5 = { "sampleSize",14,2,kIntType,"char",0,1,"short",&_ExtCommonChunk_6};
	VPL_ExtField _ExtCommonChunk_4 = { "numSampleFrames",10,4,kUnsignedType,"char",0,1,"unsigned long",&_ExtCommonChunk_5};
	VPL_ExtField _ExtCommonChunk_3 = { "numChannels",8,2,kIntType,"char",0,1,"short",&_ExtCommonChunk_4};
	VPL_ExtField _ExtCommonChunk_2 = { "ckSize",4,4,kIntType,"char",0,1,"long int",&_ExtCommonChunk_3};
	VPL_ExtField _ExtCommonChunk_1 = { "ckID",0,4,kUnsignedType,"char",0,1,"unsigned long",&_ExtCommonChunk_2};
	VPL_ExtStructure _ExtCommonChunk_S = {"ExtCommonChunk",&_ExtCommonChunk_1};

	VPL_ExtField _CommonChunk_6 = { "sampleRate",16,10,kStructureType,"NULL",0,0,"Float80",NULL};
	VPL_ExtField _CommonChunk_5 = { "sampleSize",14,2,kIntType,"NULL",0,0,"short",&_CommonChunk_6};
	VPL_ExtField _CommonChunk_4 = { "numSampleFrames",10,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CommonChunk_5};
	VPL_ExtField _CommonChunk_3 = { "numChannels",8,2,kIntType,"NULL",0,0,"short",&_CommonChunk_4};
	VPL_ExtField _CommonChunk_2 = { "ckSize",4,4,kIntType,"NULL",0,0,"long int",&_CommonChunk_3};
	VPL_ExtField _CommonChunk_1 = { "ckID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CommonChunk_2};
	VPL_ExtStructure _CommonChunk_S = {"CommonChunk",&_CommonChunk_1};

	VPL_ExtField _FormatVersionChunk_3 = { "timestamp",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _FormatVersionChunk_2 = { "ckSize",4,4,kIntType,"NULL",0,0,"long int",&_FormatVersionChunk_3};
	VPL_ExtField _FormatVersionChunk_1 = { "ckID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FormatVersionChunk_2};
	VPL_ExtStructure _FormatVersionChunk_S = {"FormatVersionChunk",&_FormatVersionChunk_1};

	VPL_ExtField _ContainerChunk_3 = { "formType",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ContainerChunk_2 = { "ckSize",4,4,kIntType,"NULL",0,0,"long int",&_ContainerChunk_3};
	VPL_ExtField _ContainerChunk_1 = { "ckID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ContainerChunk_2};
	VPL_ExtStructure _ContainerChunk_S = {"ContainerChunk",&_ContainerChunk_1};

	VPL_ExtField _ChunkHeader_2 = { "ckSize",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ChunkHeader_1 = { "ckID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ChunkHeader_2};
	VPL_ExtStructure _ChunkHeader_S = {"ChunkHeader",&_ChunkHeader_1};

	VPL_ExtField _BTHeaderRec_15 = { "reserved3",42,64,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _BTHeaderRec_14 = { "attributes",38,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_BTHeaderRec_15};
	VPL_ExtField _BTHeaderRec_13 = { "reserved2",37,1,kUnsignedType,"unsigned long",0,4,"unsigned char",&_BTHeaderRec_14};
	VPL_ExtField _BTHeaderRec_12 = { "btreeType",36,1,kUnsignedType,"unsigned long",0,4,"unsigned char",&_BTHeaderRec_13};
	VPL_ExtField _BTHeaderRec_11 = { "clumpSize",32,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_BTHeaderRec_12};
	VPL_ExtField _BTHeaderRec_10 = { "reserved1",30,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_BTHeaderRec_11};
	VPL_ExtField _BTHeaderRec_9 = { "freeNodes",26,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_BTHeaderRec_10};
	VPL_ExtField _BTHeaderRec_8 = { "totalNodes",22,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_BTHeaderRec_9};
	VPL_ExtField _BTHeaderRec_7 = { "maxKeyLength",20,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_BTHeaderRec_8};
	VPL_ExtField _BTHeaderRec_6 = { "nodeSize",18,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_BTHeaderRec_7};
	VPL_ExtField _BTHeaderRec_5 = { "lastLeafNode",14,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_BTHeaderRec_6};
	VPL_ExtField _BTHeaderRec_4 = { "firstLeafNode",10,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_BTHeaderRec_5};
	VPL_ExtField _BTHeaderRec_3 = { "leafRecords",6,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_BTHeaderRec_4};
	VPL_ExtField _BTHeaderRec_2 = { "rootNode",2,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_BTHeaderRec_3};
	VPL_ExtField _BTHeaderRec_1 = { "treeDepth",0,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_BTHeaderRec_2};
	VPL_ExtStructure _BTHeaderRec_S = {"BTHeaderRec",&_BTHeaderRec_1};

	VPL_ExtField _BTNodeDescriptor_6 = { "reserved",12,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _BTNodeDescriptor_5 = { "numRecords",10,2,kUnsignedType,"NULL",0,0,"unsigned short",&_BTNodeDescriptor_6};
	VPL_ExtField _BTNodeDescriptor_4 = { "height",9,1,kUnsignedType,"NULL",0,0,"unsigned char",&_BTNodeDescriptor_5};
	VPL_ExtField _BTNodeDescriptor_3 = { "kind",8,1,kIntType,"NULL",0,0,"signed char",&_BTNodeDescriptor_4};
	VPL_ExtField _BTNodeDescriptor_2 = { "bLink",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BTNodeDescriptor_3};
	VPL_ExtField _BTNodeDescriptor_1 = { "fLink",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_BTNodeDescriptor_2};
	VPL_ExtStructure _BTNodeDescriptor_S = {"BTNodeDescriptor",&_BTNodeDescriptor_1};

	VPL_ExtField _HFSPlusVolumeHeader_26 = { "startupFile",432,80,kStructureType,"NULL",0,0,"HFSPlusForkData",NULL};
	VPL_ExtField _HFSPlusVolumeHeader_25 = { "attributesFile",352,80,kStructureType,"NULL",0,0,"HFSPlusForkData",&_HFSPlusVolumeHeader_26};
	VPL_ExtField _HFSPlusVolumeHeader_24 = { "catalogFile",272,80,kStructureType,"NULL",0,0,"HFSPlusForkData",&_HFSPlusVolumeHeader_25};
	VPL_ExtField _HFSPlusVolumeHeader_23 = { "extentsFile",192,80,kStructureType,"NULL",0,0,"HFSPlusForkData",&_HFSPlusVolumeHeader_24};
	VPL_ExtField _HFSPlusVolumeHeader_22 = { "allocationFile",112,80,kStructureType,"NULL",0,0,"HFSPlusForkData",&_HFSPlusVolumeHeader_23};
	VPL_ExtField _HFSPlusVolumeHeader_21 = { "finderInfo",80,32,kPointerType,"unsigned char",0,1,NULL,&_HFSPlusVolumeHeader_22};
	VPL_ExtField _HFSPlusVolumeHeader_20 = { "encodingsBitmap",72,8,kUnsignedType,"unsigned char",0,1,"unsigned long long",&_HFSPlusVolumeHeader_21};
	VPL_ExtField _HFSPlusVolumeHeader_19 = { "writeCount",68,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_20};
	VPL_ExtField _HFSPlusVolumeHeader_18 = { "nextCatalogID",64,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_19};
	VPL_ExtField _HFSPlusVolumeHeader_17 = { "dataClumpSize",60,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_18};
	VPL_ExtField _HFSPlusVolumeHeader_16 = { "rsrcClumpSize",56,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_17};
	VPL_ExtField _HFSPlusVolumeHeader_15 = { "nextAllocation",52,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_16};
	VPL_ExtField _HFSPlusVolumeHeader_14 = { "freeBlocks",48,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_15};
	VPL_ExtField _HFSPlusVolumeHeader_13 = { "totalBlocks",44,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_14};
	VPL_ExtField _HFSPlusVolumeHeader_12 = { "blockSize",40,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_13};
	VPL_ExtField _HFSPlusVolumeHeader_11 = { "folderCount",36,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_12};
	VPL_ExtField _HFSPlusVolumeHeader_10 = { "fileCount",32,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_11};
	VPL_ExtField _HFSPlusVolumeHeader_9 = { "checkedDate",28,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_10};
	VPL_ExtField _HFSPlusVolumeHeader_8 = { "backupDate",24,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_9};
	VPL_ExtField _HFSPlusVolumeHeader_7 = { "modifyDate",20,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_8};
	VPL_ExtField _HFSPlusVolumeHeader_6 = { "createDate",16,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_7};
	VPL_ExtField _HFSPlusVolumeHeader_5 = { "reserved",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_6};
	VPL_ExtField _HFSPlusVolumeHeader_4 = { "lastMountedVersion",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_5};
	VPL_ExtField _HFSPlusVolumeHeader_3 = { "attributes",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusVolumeHeader_4};
	VPL_ExtField _HFSPlusVolumeHeader_2 = { "version",2,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSPlusVolumeHeader_3};
	VPL_ExtField _HFSPlusVolumeHeader_1 = { "signature",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSPlusVolumeHeader_2};
	VPL_ExtStructure _HFSPlusVolumeHeader_S = {"HFSPlusVolumeHeader",&_HFSPlusVolumeHeader_1};

	VPL_ExtField _HFSMasterDirectoryBlock_29 = { "drCTExtRec",150,12,kPointerType,"HFSExtentDescriptor",0,4,NULL,NULL};
	VPL_ExtField _HFSMasterDirectoryBlock_28 = { "drCTFlSize",146,4,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned long",&_HFSMasterDirectoryBlock_29};
	VPL_ExtField _HFSMasterDirectoryBlock_27 = { "drXTExtRec",134,12,kPointerType,"HFSExtentDescriptor",0,4,NULL,&_HFSMasterDirectoryBlock_28};
	VPL_ExtField _HFSMasterDirectoryBlock_26 = { "drXTFlSize",130,4,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned long",&_HFSMasterDirectoryBlock_27};
	VPL_ExtField _HFSMasterDirectoryBlock_25 = { "drEmbedExtent",126,4,kStructureType,"HFSExtentDescriptor",0,4,"HFSExtentDescriptor",&_HFSMasterDirectoryBlock_26};
	VPL_ExtField _HFSMasterDirectoryBlock_24 = { "drEmbedSigWord",124,2,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned short",&_HFSMasterDirectoryBlock_25};
	VPL_ExtField _HFSMasterDirectoryBlock_23 = { "drFndrInfo",92,32,kPointerType,"long int",0,4,NULL,&_HFSMasterDirectoryBlock_24};
	VPL_ExtField _HFSMasterDirectoryBlock_22 = { "drDirCnt",88,4,kUnsignedType,"long int",0,4,"unsigned long",&_HFSMasterDirectoryBlock_23};
	VPL_ExtField _HFSMasterDirectoryBlock_21 = { "drFilCnt",84,4,kUnsignedType,"long int",0,4,"unsigned long",&_HFSMasterDirectoryBlock_22};
	VPL_ExtField _HFSMasterDirectoryBlock_20 = { "drNmRtDirs",82,2,kUnsignedType,"long int",0,4,"unsigned short",&_HFSMasterDirectoryBlock_21};
	VPL_ExtField _HFSMasterDirectoryBlock_19 = { "drCTClpSiz",78,4,kUnsignedType,"long int",0,4,"unsigned long",&_HFSMasterDirectoryBlock_20};
	VPL_ExtField _HFSMasterDirectoryBlock_18 = { "drXTClpSiz",74,4,kUnsignedType,"long int",0,4,"unsigned long",&_HFSMasterDirectoryBlock_19};
	VPL_ExtField _HFSMasterDirectoryBlock_17 = { "drWrCnt",70,4,kUnsignedType,"long int",0,4,"unsigned long",&_HFSMasterDirectoryBlock_18};
	VPL_ExtField _HFSMasterDirectoryBlock_16 = { "drVSeqNum",68,2,kUnsignedType,"long int",0,4,"unsigned short",&_HFSMasterDirectoryBlock_17};
	VPL_ExtField _HFSMasterDirectoryBlock_15 = { "drVolBkUp",64,4,kUnsignedType,"long int",0,4,"unsigned long",&_HFSMasterDirectoryBlock_16};
	VPL_ExtField _HFSMasterDirectoryBlock_14 = { "drVN",36,28,kPointerType,"unsigned char",0,1,NULL,&_HFSMasterDirectoryBlock_15};
	VPL_ExtField _HFSMasterDirectoryBlock_13 = { "drFreeBks",34,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSMasterDirectoryBlock_14};
	VPL_ExtField _HFSMasterDirectoryBlock_12 = { "drNxtCNID",30,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSMasterDirectoryBlock_13};
	VPL_ExtField _HFSMasterDirectoryBlock_11 = { "drAlBlSt",28,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSMasterDirectoryBlock_12};
	VPL_ExtField _HFSMasterDirectoryBlock_10 = { "drClpSiz",24,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSMasterDirectoryBlock_11};
	VPL_ExtField _HFSMasterDirectoryBlock_9 = { "drAlBlkSiz",20,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSMasterDirectoryBlock_10};
	VPL_ExtField _HFSMasterDirectoryBlock_8 = { "drNmAlBlks",18,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSMasterDirectoryBlock_9};
	VPL_ExtField _HFSMasterDirectoryBlock_7 = { "drAllocPtr",16,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSMasterDirectoryBlock_8};
	VPL_ExtField _HFSMasterDirectoryBlock_6 = { "drVBMSt",14,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSMasterDirectoryBlock_7};
	VPL_ExtField _HFSMasterDirectoryBlock_5 = { "drNmFls",12,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSMasterDirectoryBlock_6};
	VPL_ExtField _HFSMasterDirectoryBlock_4 = { "drAtrb",10,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSMasterDirectoryBlock_5};
	VPL_ExtField _HFSMasterDirectoryBlock_3 = { "drLsMod",6,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSMasterDirectoryBlock_4};
	VPL_ExtField _HFSMasterDirectoryBlock_2 = { "drCrDate",2,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSMasterDirectoryBlock_3};
	VPL_ExtField _HFSMasterDirectoryBlock_1 = { "drSigWord",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_HFSMasterDirectoryBlock_2};
	VPL_ExtStructure _HFSMasterDirectoryBlock_S = {"HFSMasterDirectoryBlock",&_HFSMasterDirectoryBlock_1};

	VPL_ExtField _HFSPlusAttrExtents_3 = { "extents",8,64,kPointerType,"HFSPlusExtentDescriptor",0,8,NULL,NULL};
	VPL_ExtField _HFSPlusAttrExtents_2 = { "reserved",4,4,kUnsignedType,"HFSPlusExtentDescriptor",0,8,"unsigned long",&_HFSPlusAttrExtents_3};
	VPL_ExtField _HFSPlusAttrExtents_1 = { "recordType",0,4,kUnsignedType,"HFSPlusExtentDescriptor",0,8,"unsigned long",&_HFSPlusAttrExtents_2};
	VPL_ExtStructure _HFSPlusAttrExtents_S = {"HFSPlusAttrExtents",&_HFSPlusAttrExtents_1};

	VPL_ExtField _HFSPlusAttrForkData_3 = { "theFork",8,80,kStructureType,"NULL",0,0,"HFSPlusForkData",NULL};
	VPL_ExtField _HFSPlusAttrForkData_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusAttrForkData_3};
	VPL_ExtField _HFSPlusAttrForkData_1 = { "recordType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusAttrForkData_2};
	VPL_ExtStructure _HFSPlusAttrForkData_S = {"HFSPlusAttrForkData",&_HFSPlusAttrForkData_1};

	VPL_ExtField _HFSPlusAttrInlineData_4 = { "userData",12,2,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _HFSPlusAttrInlineData_3 = { "logicalSize",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusAttrInlineData_4};
	VPL_ExtField _HFSPlusAttrInlineData_2 = { "reserved",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusAttrInlineData_3};
	VPL_ExtField _HFSPlusAttrInlineData_1 = { "recordType",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSPlusAttrInlineData_2};
	VPL_ExtStructure _HFSPlusAttrInlineData_S = {"HFSPlusAttrInlineData",&_HFSPlusAttrInlineData_1};

	VPL_ExtField _HFSPlusCatalogThread_4 = { "nodeName",8,512,kStructureType,"NULL",0,0,"HFSUniStr255",NULL};
	VPL_ExtField _HFSPlusCatalogThread_3 = { "parentID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogThread_4};
	VPL_ExtField _HFSPlusCatalogThread_2 = { "reserved",2,2,kIntType,"NULL",0,0,"short",&_HFSPlusCatalogThread_3};
	VPL_ExtField _HFSPlusCatalogThread_1 = { "recordType",0,2,kIntType,"NULL",0,0,"short",&_HFSPlusCatalogThread_2};
	VPL_ExtStructure _HFSPlusCatalogThread_S = {"HFSPlusCatalogThread",&_HFSPlusCatalogThread_1};

	VPL_ExtField _HFSCatalogThread_4 = { "nodeName",14,32,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _HFSCatalogThread_3 = { "parentID",10,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSCatalogThread_4};
	VPL_ExtField _HFSCatalogThread_2 = { "reserved",2,8,kPointerType,"long int",0,4,NULL,&_HFSCatalogThread_3};
	VPL_ExtField _HFSCatalogThread_1 = { "recordType",0,2,kIntType,"long int",0,4,"short",&_HFSCatalogThread_2};
	VPL_ExtStructure _HFSCatalogThread_S = {"HFSCatalogThread",&_HFSCatalogThread_1};

	VPL_ExtField _HFSPlusCatalogFile_16 = { "resourceFork",168,80,kStructureType,"NULL",0,0,"HFSPlusForkData",NULL};
	VPL_ExtField _HFSPlusCatalogFile_15 = { "dataFork",88,80,kStructureType,"NULL",0,0,"HFSPlusForkData",&_HFSPlusCatalogFile_16};
	VPL_ExtField _HFSPlusCatalogFile_14 = { "reserved2",84,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_15};
	VPL_ExtField _HFSPlusCatalogFile_13 = { "textEncoding",80,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_14};
	VPL_ExtField _HFSPlusCatalogFile_12 = { "finderInfo",64,16,kStructureType,"NULL",0,0,"FXInfo",&_HFSPlusCatalogFile_13};
	VPL_ExtField _HFSPlusCatalogFile_11 = { "userInfo",48,16,kStructureType,"NULL",0,0,"FInfo",&_HFSPlusCatalogFile_12};
	VPL_ExtField _HFSPlusCatalogFile_10 = { "permissions",32,16,kStructureType,"NULL",0,0,"HFSPlusPermissions",&_HFSPlusCatalogFile_11};
	VPL_ExtField _HFSPlusCatalogFile_9 = { "backupDate",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_10};
	VPL_ExtField _HFSPlusCatalogFile_8 = { "accessDate",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_9};
	VPL_ExtField _HFSPlusCatalogFile_7 = { "attributeModDate",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_8};
	VPL_ExtField _HFSPlusCatalogFile_6 = { "contentModDate",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_7};
	VPL_ExtField _HFSPlusCatalogFile_5 = { "createDate",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_6};
	VPL_ExtField _HFSPlusCatalogFile_4 = { "fileID",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_5};
	VPL_ExtField _HFSPlusCatalogFile_3 = { "reserved1",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFile_4};
	VPL_ExtField _HFSPlusCatalogFile_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFSPlusCatalogFile_3};
	VPL_ExtField _HFSPlusCatalogFile_1 = { "recordType",0,2,kIntType,"NULL",0,0,"short",&_HFSPlusCatalogFile_2};
	VPL_ExtStructure _HFSPlusCatalogFile_S = {"HFSPlusCatalogFile",&_HFSPlusCatalogFile_1};

	VPL_ExtField _HFSCatalogFile_19 = { "reserved",98,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _HFSCatalogFile_18 = { "rsrcExtents",86,12,kPointerType,"HFSExtentDescriptor",0,4,NULL,&_HFSCatalogFile_19};
	VPL_ExtField _HFSCatalogFile_17 = { "dataExtents",74,12,kPointerType,"HFSExtentDescriptor",0,4,NULL,&_HFSCatalogFile_18};
	VPL_ExtField _HFSCatalogFile_16 = { "clumpSize",72,2,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned short",&_HFSCatalogFile_17};
	VPL_ExtField _HFSCatalogFile_15 = { "finderInfo",56,16,kStructureType,"HFSExtentDescriptor",0,4,"FXInfo",&_HFSCatalogFile_16};
	VPL_ExtField _HFSCatalogFile_14 = { "backupDate",52,4,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned long",&_HFSCatalogFile_15};
	VPL_ExtField _HFSCatalogFile_13 = { "modifyDate",48,4,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned long",&_HFSCatalogFile_14};
	VPL_ExtField _HFSCatalogFile_12 = { "createDate",44,4,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned long",&_HFSCatalogFile_13};
	VPL_ExtField _HFSCatalogFile_11 = { "rsrcPhysicalSize",40,4,kIntType,"HFSExtentDescriptor",0,4,"long int",&_HFSCatalogFile_12};
	VPL_ExtField _HFSCatalogFile_10 = { "rsrcLogicalSize",36,4,kIntType,"HFSExtentDescriptor",0,4,"long int",&_HFSCatalogFile_11};
	VPL_ExtField _HFSCatalogFile_9 = { "rsrcStartBlock",34,2,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned short",&_HFSCatalogFile_10};
	VPL_ExtField _HFSCatalogFile_8 = { "dataPhysicalSize",30,4,kIntType,"HFSExtentDescriptor",0,4,"long int",&_HFSCatalogFile_9};
	VPL_ExtField _HFSCatalogFile_7 = { "dataLogicalSize",26,4,kIntType,"HFSExtentDescriptor",0,4,"long int",&_HFSCatalogFile_8};
	VPL_ExtField _HFSCatalogFile_6 = { "dataStartBlock",24,2,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned short",&_HFSCatalogFile_7};
	VPL_ExtField _HFSCatalogFile_5 = { "fileID",20,4,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned long",&_HFSCatalogFile_6};
	VPL_ExtField _HFSCatalogFile_4 = { "userInfo",4,16,kStructureType,"HFSExtentDescriptor",0,4,"FInfo",&_HFSCatalogFile_5};
	VPL_ExtField _HFSCatalogFile_3 = { "fileType",3,1,kIntType,"HFSExtentDescriptor",0,4,"signed char",&_HFSCatalogFile_4};
	VPL_ExtField _HFSCatalogFile_2 = { "flags",2,1,kUnsignedType,"HFSExtentDescriptor",0,4,"unsigned char",&_HFSCatalogFile_3};
	VPL_ExtField _HFSCatalogFile_1 = { "recordType",0,2,kIntType,"HFSExtentDescriptor",0,4,"short",&_HFSCatalogFile_2};
	VPL_ExtStructure _HFSCatalogFile_S = {"HFSCatalogFile",&_HFSCatalogFile_1};

	VPL_ExtField _HFSPlusCatalogFolder_14 = { "reserved",84,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _HFSPlusCatalogFolder_13 = { "textEncoding",80,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFolder_14};
	VPL_ExtField _HFSPlusCatalogFolder_12 = { "finderInfo",64,16,kStructureType,"NULL",0,0,"DXInfo",&_HFSPlusCatalogFolder_13};
	VPL_ExtField _HFSPlusCatalogFolder_11 = { "userInfo",48,16,kStructureType,"NULL",0,0,"DInfo",&_HFSPlusCatalogFolder_12};
	VPL_ExtField _HFSPlusCatalogFolder_10 = { "permissions",32,16,kStructureType,"NULL",0,0,"HFSPlusPermissions",&_HFSPlusCatalogFolder_11};
	VPL_ExtField _HFSPlusCatalogFolder_9 = { "backupDate",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFolder_10};
	VPL_ExtField _HFSPlusCatalogFolder_8 = { "accessDate",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFolder_9};
	VPL_ExtField _HFSPlusCatalogFolder_7 = { "attributeModDate",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFolder_8};
	VPL_ExtField _HFSPlusCatalogFolder_6 = { "contentModDate",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFolder_7};
	VPL_ExtField _HFSPlusCatalogFolder_5 = { "createDate",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFolder_6};
	VPL_ExtField _HFSPlusCatalogFolder_4 = { "folderID",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFolder_5};
	VPL_ExtField _HFSPlusCatalogFolder_3 = { "valence",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogFolder_4};
	VPL_ExtField _HFSPlusCatalogFolder_2 = { "flags",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFSPlusCatalogFolder_3};
	VPL_ExtField _HFSPlusCatalogFolder_1 = { "recordType",0,2,kIntType,"NULL",0,0,"short",&_HFSPlusCatalogFolder_2};
	VPL_ExtStructure _HFSPlusCatalogFolder_S = {"HFSPlusCatalogFolder",&_HFSPlusCatalogFolder_1};

	VPL_ExtField _HFSCatalogFolder_10 = { "reserved",54,16,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _HFSCatalogFolder_9 = { "finderInfo",38,16,kStructureType,"unsigned long",0,4,"DXInfo",&_HFSCatalogFolder_10};
	VPL_ExtField _HFSCatalogFolder_8 = { "userInfo",22,16,kStructureType,"unsigned long",0,4,"DInfo",&_HFSCatalogFolder_9};
	VPL_ExtField _HFSCatalogFolder_7 = { "backupDate",18,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_HFSCatalogFolder_8};
	VPL_ExtField _HFSCatalogFolder_6 = { "modifyDate",14,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_HFSCatalogFolder_7};
	VPL_ExtField _HFSCatalogFolder_5 = { "createDate",10,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_HFSCatalogFolder_6};
	VPL_ExtField _HFSCatalogFolder_4 = { "folderID",6,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_HFSCatalogFolder_5};
	VPL_ExtField _HFSCatalogFolder_3 = { "valence",4,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_HFSCatalogFolder_4};
	VPL_ExtField _HFSCatalogFolder_2 = { "flags",2,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_HFSCatalogFolder_3};
	VPL_ExtField _HFSCatalogFolder_1 = { "recordType",0,2,kIntType,"unsigned long",0,4,"short",&_HFSCatalogFolder_2};
	VPL_ExtStructure _HFSCatalogFolder_S = {"HFSCatalogFolder",&_HFSCatalogFolder_1};

	VPL_ExtField _HFSPlusCatalogKey_3 = { "nodeName",6,512,kStructureType,"NULL",0,0,"HFSUniStr255",NULL};
	VPL_ExtField _HFSPlusCatalogKey_2 = { "parentID",2,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusCatalogKey_3};
	VPL_ExtField _HFSPlusCatalogKey_1 = { "keyLength",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFSPlusCatalogKey_2};
	VPL_ExtStructure _HFSPlusCatalogKey_S = {"HFSPlusCatalogKey",&_HFSPlusCatalogKey_1};

	VPL_ExtField _HFSCatalogKey_4 = { "nodeName",6,32,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _HFSCatalogKey_3 = { "parentID",2,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_HFSCatalogKey_4};
	VPL_ExtField _HFSCatalogKey_2 = { "reserved",1,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_HFSCatalogKey_3};
	VPL_ExtField _HFSCatalogKey_1 = { "keyLength",0,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_HFSCatalogKey_2};
	VPL_ExtStructure _HFSCatalogKey_S = {"HFSCatalogKey",&_HFSCatalogKey_1};

	VPL_ExtField _HFSPlusPermissions_4 = { "specialDevice",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _HFSPlusPermissions_3 = { "permissions",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusPermissions_4};
	VPL_ExtField _HFSPlusPermissions_2 = { "groupID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusPermissions_3};
	VPL_ExtField _HFSPlusPermissions_1 = { "ownerID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusPermissions_2};
	VPL_ExtStructure _HFSPlusPermissions_S = {"HFSPlusPermissions",&_HFSPlusPermissions_1};

	VPL_ExtField _HFSPlusForkData_4 = { "extents",16,64,kPointerType,"HFSPlusExtentDescriptor",0,8,NULL,NULL};
	VPL_ExtField _HFSPlusForkData_3 = { "totalBlocks",12,4,kUnsignedType,"HFSPlusExtentDescriptor",0,8,"unsigned long",&_HFSPlusForkData_4};
	VPL_ExtField _HFSPlusForkData_2 = { "clumpSize",8,4,kUnsignedType,"HFSPlusExtentDescriptor",0,8,"unsigned long",&_HFSPlusForkData_3};
	VPL_ExtField _HFSPlusForkData_1 = { "logicalSize",0,8,kUnsignedType,"HFSPlusExtentDescriptor",0,8,"unsigned long long",&_HFSPlusForkData_2};
	VPL_ExtStructure _HFSPlusForkData_S = {"HFSPlusForkData",&_HFSPlusForkData_1};

	VPL_ExtField _HFSPlusExtentDescriptor_2 = { "blockCount",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _HFSPlusExtentDescriptor_1 = { "startBlock",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusExtentDescriptor_2};
	VPL_ExtStructure _HFSPlusExtentDescriptor_S = {"HFSPlusExtentDescriptor",&_HFSPlusExtentDescriptor_1};

	VPL_ExtField _HFSExtentDescriptor_2 = { "blockCount",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _HFSExtentDescriptor_1 = { "startBlock",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFSExtentDescriptor_2};
	VPL_ExtStructure _HFSExtentDescriptor_S = {"HFSExtentDescriptor",&_HFSExtentDescriptor_1};

	VPL_ExtField _HFSPlusExtentKey_5 = { "startBlock",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _HFSPlusExtentKey_4 = { "fileID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSPlusExtentKey_5};
	VPL_ExtField _HFSPlusExtentKey_3 = { "pad",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_HFSPlusExtentKey_4};
	VPL_ExtField _HFSPlusExtentKey_2 = { "forkType",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_HFSPlusExtentKey_3};
	VPL_ExtField _HFSPlusExtentKey_1 = { "keyLength",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFSPlusExtentKey_2};
	VPL_ExtStructure _HFSPlusExtentKey_S = {"HFSPlusExtentKey",&_HFSPlusExtentKey_1};

	VPL_ExtField _HFSExtentKey_4 = { "startBlock",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _HFSExtentKey_3 = { "fileID",2,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFSExtentKey_4};
	VPL_ExtField _HFSExtentKey_2 = { "forkType",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_HFSExtentKey_3};
	VPL_ExtField _HFSExtentKey_1 = { "keyLength",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_HFSExtentKey_2};
	VPL_ExtStructure _HFSExtentKey_S = {"HFSExtentKey",&_HFSExtentKey_1};

	VPL_ExtField _XLibExportedSymbol_2 = { "bpOffset",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _XLibExportedSymbol_1 = { "classAndName",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibExportedSymbol_2};
	VPL_ExtStructure _XLibExportedSymbol_S = {"XLibExportedSymbol",&_XLibExportedSymbol_1};

	VPL_ExtField _XLibContainerHeader_20 = { "oldImpVersion",76,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _XLibContainerHeader_19 = { "oldDefVersion",72,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_20};
	VPL_ExtField _XLibContainerHeader_18 = { "currentVersion",68,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_19};
	VPL_ExtField _XLibContainerHeader_17 = { "dateTimeStamp",64,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_18};
	VPL_ExtField _XLibContainerHeader_16 = { "cpuModel",60,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_17};
	VPL_ExtField _XLibContainerHeader_15 = { "cpuFamily",56,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_16};
	VPL_ExtField _XLibContainerHeader_14 = { "dylibPathLength",52,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_15};
	VPL_ExtField _XLibContainerHeader_13 = { "dylibPathOffset",48,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_14};
	VPL_ExtField _XLibContainerHeader_12 = { "fragNameLength",44,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_13};
	VPL_ExtField _XLibContainerHeader_11 = { "fragNameOffset",40,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_12};
	VPL_ExtField _XLibContainerHeader_10 = { "exportedSymbolCount",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_11};
	VPL_ExtField _XLibContainerHeader_9 = { "exportHashTablePower",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_10};
	VPL_ExtField _XLibContainerHeader_8 = { "exportNamesOffset",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_9};
	VPL_ExtField _XLibContainerHeader_7 = { "exportSymbolOffset",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_8};
	VPL_ExtField _XLibContainerHeader_6 = { "exportKeyOffset",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_7};
	VPL_ExtField _XLibContainerHeader_5 = { "exportHashOffset",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_6};
	VPL_ExtField _XLibContainerHeader_4 = { "containerStringsOffset",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_5};
	VPL_ExtField _XLibContainerHeader_3 = { "currentFormat",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_4};
	VPL_ExtField _XLibContainerHeader_2 = { "tag2",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_3};
	VPL_ExtField _XLibContainerHeader_1 = { "tag1",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_XLibContainerHeader_2};
	VPL_ExtStructure _XLibContainerHeader_S = {"XLibContainerHeader",&_XLibContainerHeader_1};

	VPL_ExtField _PEFLoaderRelocationHeader_4 = { "firstRelocOffset",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _PEFLoaderRelocationHeader_3 = { "relocCount",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderRelocationHeader_4};
	VPL_ExtField _PEFLoaderRelocationHeader_2 = { "reservedA",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PEFLoaderRelocationHeader_3};
	VPL_ExtField _PEFLoaderRelocationHeader_1 = { "sectionIndex",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PEFLoaderRelocationHeader_2};
	VPL_ExtStructure _PEFLoaderRelocationHeader_S = {"PEFLoaderRelocationHeader",&_PEFLoaderRelocationHeader_1};

	VPL_ExtField _PEFExportedSymbol_3 = { "sectionIndex",8,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _PEFExportedSymbol_2 = { "symbolValue",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFExportedSymbol_3};
	VPL_ExtField _PEFExportedSymbol_1 = { "classAndName",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFExportedSymbol_2};
	VPL_ExtStructure _PEFExportedSymbol_S = {"PEFExportedSymbol",&_PEFExportedSymbol_1};

	VPL_ExtField _PEFExportedSymbolKey_1 = { "u",0,4,kStructureType,"NULL",0,0,"882",NULL};
	VPL_ExtStructure _PEFExportedSymbolKey_S = {"PEFExportedSymbolKey",&_PEFExportedSymbolKey_1};

	VPL_ExtField _PEFSplitHashWord_2 = { "hashValue",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _PEFSplitHashWord_1 = { "nameLength",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PEFSplitHashWord_2};
	VPL_ExtStructure _PEFSplitHashWord_S = {"PEFSplitHashWord",&_PEFSplitHashWord_1};

	VPL_ExtField _PEFExportedSymbolHashSlot_1 = { "countAndStart",0,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtStructure _PEFExportedSymbolHashSlot_S = {"PEFExportedSymbolHashSlot",&_PEFExportedSymbolHashSlot_1};

	VPL_ExtField _PEFImportedSymbol_1 = { "classAndName",0,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtStructure _PEFImportedSymbol_S = {"PEFImportedSymbol",&_PEFImportedSymbol_1};

	VPL_ExtField _PEFImportedLibrary_8 = { "reservedB",22,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _PEFImportedLibrary_7 = { "reservedA",21,1,kUnsignedType,"NULL",0,0,"unsigned char",&_PEFImportedLibrary_8};
	VPL_ExtField _PEFImportedLibrary_6 = { "options",20,1,kUnsignedType,"NULL",0,0,"unsigned char",&_PEFImportedLibrary_7};
	VPL_ExtField _PEFImportedLibrary_5 = { "firstImportedSymbol",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFImportedLibrary_6};
	VPL_ExtField _PEFImportedLibrary_4 = { "importedSymbolCount",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFImportedLibrary_5};
	VPL_ExtField _PEFImportedLibrary_3 = { "currentVersion",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFImportedLibrary_4};
	VPL_ExtField _PEFImportedLibrary_2 = { "oldImpVersion",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFImportedLibrary_3};
	VPL_ExtField _PEFImportedLibrary_1 = { "nameOffset",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFImportedLibrary_2};
	VPL_ExtStructure _PEFImportedLibrary_S = {"PEFImportedLibrary",&_PEFImportedLibrary_1};

	VPL_ExtField _PEFLoaderInfoHeader_14 = { "exportedSymbolCount",52,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _PEFLoaderInfoHeader_13 = { "exportHashTablePower",48,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_14};
	VPL_ExtField _PEFLoaderInfoHeader_12 = { "exportHashOffset",44,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_13};
	VPL_ExtField _PEFLoaderInfoHeader_11 = { "loaderStringsOffset",40,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_12};
	VPL_ExtField _PEFLoaderInfoHeader_10 = { "relocInstrOffset",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_11};
	VPL_ExtField _PEFLoaderInfoHeader_9 = { "relocSectionCount",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_10};
	VPL_ExtField _PEFLoaderInfoHeader_8 = { "totalImportedSymbolCount",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_9};
	VPL_ExtField _PEFLoaderInfoHeader_7 = { "importedLibraryCount",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_8};
	VPL_ExtField _PEFLoaderInfoHeader_6 = { "termOffset",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_7};
	VPL_ExtField _PEFLoaderInfoHeader_5 = { "termSection",16,4,kIntType,"NULL",0,0,"long int",&_PEFLoaderInfoHeader_6};
	VPL_ExtField _PEFLoaderInfoHeader_4 = { "initOffset",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_5};
	VPL_ExtField _PEFLoaderInfoHeader_3 = { "initSection",8,4,kIntType,"NULL",0,0,"long int",&_PEFLoaderInfoHeader_4};
	VPL_ExtField _PEFLoaderInfoHeader_2 = { "mainOffset",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFLoaderInfoHeader_3};
	VPL_ExtField _PEFLoaderInfoHeader_1 = { "mainSection",0,4,kIntType,"NULL",0,0,"long int",&_PEFLoaderInfoHeader_2};
	VPL_ExtStructure _PEFLoaderInfoHeader_S = {"PEFLoaderInfoHeader",&_PEFLoaderInfoHeader_1};

	VPL_ExtField _PEFSectionHeader_10 = { "reservedA",27,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _PEFSectionHeader_9 = { "alignment",26,1,kUnsignedType,"NULL",0,0,"unsigned char",&_PEFSectionHeader_10};
	VPL_ExtField _PEFSectionHeader_8 = { "shareKind",25,1,kUnsignedType,"NULL",0,0,"unsigned char",&_PEFSectionHeader_9};
	VPL_ExtField _PEFSectionHeader_7 = { "sectionKind",24,1,kUnsignedType,"NULL",0,0,"unsigned char",&_PEFSectionHeader_8};
	VPL_ExtField _PEFSectionHeader_6 = { "containerOffset",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFSectionHeader_7};
	VPL_ExtField _PEFSectionHeader_5 = { "containerLength",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFSectionHeader_6};
	VPL_ExtField _PEFSectionHeader_4 = { "unpackedLength",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFSectionHeader_5};
	VPL_ExtField _PEFSectionHeader_3 = { "totalLength",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFSectionHeader_4};
	VPL_ExtField _PEFSectionHeader_2 = { "defaultAddress",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFSectionHeader_3};
	VPL_ExtField _PEFSectionHeader_1 = { "nameOffset",0,4,kIntType,"NULL",0,0,"long int",&_PEFSectionHeader_2};
	VPL_ExtStructure _PEFSectionHeader_S = {"PEFSectionHeader",&_PEFSectionHeader_1};

	VPL_ExtField _PEFContainerHeader_11 = { "reservedA",36,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _PEFContainerHeader_10 = { "instSectionCount",34,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PEFContainerHeader_11};
	VPL_ExtField _PEFContainerHeader_9 = { "sectionCount",32,2,kUnsignedType,"NULL",0,0,"unsigned short",&_PEFContainerHeader_10};
	VPL_ExtField _PEFContainerHeader_8 = { "currentVersion",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFContainerHeader_9};
	VPL_ExtField _PEFContainerHeader_7 = { "oldImpVersion",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFContainerHeader_8};
	VPL_ExtField _PEFContainerHeader_6 = { "oldDefVersion",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFContainerHeader_7};
	VPL_ExtField _PEFContainerHeader_5 = { "dateTimeStamp",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFContainerHeader_6};
	VPL_ExtField _PEFContainerHeader_4 = { "formatVersion",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFContainerHeader_5};
	VPL_ExtField _PEFContainerHeader_3 = { "architecture",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFContainerHeader_4};
	VPL_ExtField _PEFContainerHeader_2 = { "tag2",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFContainerHeader_3};
	VPL_ExtField _PEFContainerHeader_1 = { "tag1",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_PEFContainerHeader_2};
	VPL_ExtStructure _PEFContainerHeader_S = {"PEFContainerHeader",&_PEFContainerHeader_1};

	VPL_ExtField _AVLTreeStruct_2 = { "privateStuff",4,32,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _AVLTreeStruct_1 = { "signature",0,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_AVLTreeStruct_2};
	VPL_ExtStructure _AVLTreeStruct_S = {"AVLTreeStruct",&_AVLTreeStruct_1};

	VPL_ExtField _MPAddressSpaceInfo_5 = { "vsid",16,64,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _MPAddressSpaceInfo_4 = { "nTasks",12,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_MPAddressSpaceInfo_5};
	VPL_ExtField _MPAddressSpaceInfo_3 = { "groupID",8,4,kPointerType,"OpaqueMPCoherenceID",1,0,"T*",&_MPAddressSpaceInfo_4};
	VPL_ExtField _MPAddressSpaceInfo_2 = { "processID",4,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_MPAddressSpaceInfo_3};
	VPL_ExtField _MPAddressSpaceInfo_1 = { "version",0,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPAddressSpaceInfo_2};
	VPL_ExtStructure _MPAddressSpaceInfo_S = {"MPAddressSpaceInfo",&_MPAddressSpaceInfo_1};

	VPL_ExtField _MPNotificationInfo_10 = { "semaphoreID",36,4,kPointerType,"OpaqueMPSemaphoreID",1,0,"T*",NULL};
	VPL_ExtField _MPNotificationInfo_9 = { "events",32,4,kUnsignedType,"OpaqueMPSemaphoreID",1,0,"unsigned long",&_MPNotificationInfo_10};
	VPL_ExtField _MPNotificationInfo_8 = { "eventID",28,4,kPointerType,"OpaqueMPEventID",1,0,"T*",&_MPNotificationInfo_9};
	VPL_ExtField _MPNotificationInfo_7 = { "p3",24,4,kPointerType,"void",1,0,"T*",&_MPNotificationInfo_8};
	VPL_ExtField _MPNotificationInfo_6 = { "p2",20,4,kPointerType,"void",1,0,"T*",&_MPNotificationInfo_7};
	VPL_ExtField _MPNotificationInfo_5 = { "p1",16,4,kPointerType,"void",1,0,"T*",&_MPNotificationInfo_6};
	VPL_ExtField _MPNotificationInfo_4 = { "queueID",12,4,kPointerType,"OpaqueMPQueueID",1,0,"T*",&_MPNotificationInfo_5};
	VPL_ExtField _MPNotificationInfo_3 = { "notificationName",8,4,kUnsignedType,"OpaqueMPQueueID",1,0,"unsigned long",&_MPNotificationInfo_4};
	VPL_ExtField _MPNotificationInfo_2 = { "processID",4,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_MPNotificationInfo_3};
	VPL_ExtField _MPNotificationInfo_1 = { "version",0,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPNotificationInfo_2};
	VPL_ExtStructure _MPNotificationInfo_S = {"MPNotificationInfo",&_MPNotificationInfo_1};

	VPL_ExtField _MPCriticalRegionInfo_7 = { "count",24,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MPCriticalRegionInfo_6 = { "owningTask",20,4,kPointerType,"OpaqueMPTaskID",1,0,"T*",&_MPCriticalRegionInfo_7};
	VPL_ExtField _MPCriticalRegionInfo_5 = { "waitingTaskID",16,4,kPointerType,"OpaqueMPTaskID",1,0,"T*",&_MPCriticalRegionInfo_6};
	VPL_ExtField _MPCriticalRegionInfo_4 = { "nWaiting",12,4,kUnsignedType,"OpaqueMPTaskID",1,0,"unsigned long",&_MPCriticalRegionInfo_5};
	VPL_ExtField _MPCriticalRegionInfo_3 = { "regionName",8,4,kUnsignedType,"OpaqueMPTaskID",1,0,"unsigned long",&_MPCriticalRegionInfo_4};
	VPL_ExtField _MPCriticalRegionInfo_2 = { "processID",4,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_MPCriticalRegionInfo_3};
	VPL_ExtField _MPCriticalRegionInfo_1 = { "version",0,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPCriticalRegionInfo_2};
	VPL_ExtStructure _MPCriticalRegionInfo_S = {"MPCriticalRegionInfo",&_MPCriticalRegionInfo_1};

	VPL_ExtField _MPEventInfo_6 = { "events",20,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MPEventInfo_5 = { "waitingTaskID",16,4,kPointerType,"OpaqueMPTaskID",1,0,"T*",&_MPEventInfo_6};
	VPL_ExtField _MPEventInfo_4 = { "nWaiting",12,4,kUnsignedType,"OpaqueMPTaskID",1,0,"unsigned long",&_MPEventInfo_5};
	VPL_ExtField _MPEventInfo_3 = { "eventName",8,4,kUnsignedType,"OpaqueMPTaskID",1,0,"unsigned long",&_MPEventInfo_4};
	VPL_ExtField _MPEventInfo_2 = { "processID",4,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_MPEventInfo_3};
	VPL_ExtField _MPEventInfo_1 = { "version",0,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPEventInfo_2};
	VPL_ExtStructure _MPEventInfo_S = {"MPEventInfo",&_MPEventInfo_1};

	VPL_ExtField _MPSemaphoreInfo_7 = { "count",24,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MPSemaphoreInfo_6 = { "maximum",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MPSemaphoreInfo_7};
	VPL_ExtField _MPSemaphoreInfo_5 = { "waitingTaskID",16,4,kPointerType,"OpaqueMPTaskID",1,0,"T*",&_MPSemaphoreInfo_6};
	VPL_ExtField _MPSemaphoreInfo_4 = { "nWaiting",12,4,kUnsignedType,"OpaqueMPTaskID",1,0,"unsigned long",&_MPSemaphoreInfo_5};
	VPL_ExtField _MPSemaphoreInfo_3 = { "semaphoreName",8,4,kUnsignedType,"OpaqueMPTaskID",1,0,"unsigned long",&_MPSemaphoreInfo_4};
	VPL_ExtField _MPSemaphoreInfo_2 = { "processID",4,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_MPSemaphoreInfo_3};
	VPL_ExtField _MPSemaphoreInfo_1 = { "version",0,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPSemaphoreInfo_2};
	VPL_ExtStructure _MPSemaphoreInfo_S = {"MPSemaphoreInfo",&_MPSemaphoreInfo_1};

	VPL_ExtField _MPQueueInfo_10 = { "p3",36,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _MPQueueInfo_9 = { "p2",32,4,kPointerType,"void",1,0,"T*",&_MPQueueInfo_10};
	VPL_ExtField _MPQueueInfo_8 = { "p1",28,4,kPointerType,"void",1,0,"T*",&_MPQueueInfo_9};
	VPL_ExtField _MPQueueInfo_7 = { "nReserved",24,4,kUnsignedType,"void",1,0,"unsigned long",&_MPQueueInfo_8};
	VPL_ExtField _MPQueueInfo_6 = { "nMessages",20,4,kUnsignedType,"void",1,0,"unsigned long",&_MPQueueInfo_7};
	VPL_ExtField _MPQueueInfo_5 = { "waitingTaskID",16,4,kPointerType,"OpaqueMPTaskID",1,0,"T*",&_MPQueueInfo_6};
	VPL_ExtField _MPQueueInfo_4 = { "nWaiting",12,4,kUnsignedType,"OpaqueMPTaskID",1,0,"unsigned long",&_MPQueueInfo_5};
	VPL_ExtField _MPQueueInfo_3 = { "queueName",8,4,kUnsignedType,"OpaqueMPTaskID",1,0,"unsigned long",&_MPQueueInfo_4};
	VPL_ExtField _MPQueueInfo_2 = { "processID",4,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_MPQueueInfo_3};
	VPL_ExtField _MPQueueInfo_1 = { "version",0,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPQueueInfo_2};
	VPL_ExtStructure _MPQueueInfo_S = {"MPQueueInfo",&_MPQueueInfo_1};

	VPL_ExtField _TMTask_6 = { "tmReserved",18,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _TMTask_5 = { "tmWakeUp",14,4,kIntType,"NULL",0,0,"long int",&_TMTask_6};
	VPL_ExtField _TMTask_4 = { "tmCount",10,4,kIntType,"NULL",0,0,"long int",&_TMTask_5};
	VPL_ExtField _TMTask_3 = { "tmAddr",6,4,kPointerType,"void",1,0,"T*",&_TMTask_4};
	VPL_ExtField _TMTask_2 = { "qType",4,2,kIntType,"void",1,0,"short",&_TMTask_3};
	VPL_ExtField _TMTask_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_TMTask_2};
	VPL_ExtStructure _TMTask_S = {"TMTask",&_TMTask_1};

	VPL_ExtField _MultiUserGestalt_32 = { "giInLoginScreen",240,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _MultiUserGestalt_31 = { "giReserved9",236,4,kIntType,"NULL",0,0,"long int",&_MultiUserGestalt_32};
	VPL_ExtField _MultiUserGestalt_30 = { "giReserved8",234,2,kIntType,"NULL",0,0,"short",&_MultiUserGestalt_31};
	VPL_ExtField _MultiUserGestalt_29 = { "giUserFolderEnabled",233,1,kUnsignedType,"NULL",0,0,"unsigned char",&_MultiUserGestalt_30};
	VPL_ExtField _MultiUserGestalt_28 = { "giInSystemAccess",232,1,kUnsignedType,"NULL",0,0,"unsigned char",&_MultiUserGestalt_29};
	VPL_ExtField _MultiUserGestalt_27 = { "giUsingDiskQuotas",231,1,kUnsignedType,"NULL",0,0,"unsigned char",&_MultiUserGestalt_28};
	VPL_ExtField _MultiUserGestalt_26 = { "giUsingPrintQuotas",230,1,kUnsignedType,"NULL",0,0,"unsigned char",&_MultiUserGestalt_27};
	VPL_ExtField _MultiUserGestalt_25 = { "giUserLogInTime",226,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MultiUserGestalt_26};
	VPL_ExtField _MultiUserGestalt_24 = { "giPrefsDirID",222,4,kIntType,"NULL",0,0,"long int",&_MultiUserGestalt_25};
	VPL_ExtField _MultiUserGestalt_23 = { "giPrefsVRefNum",220,2,kIntType,"NULL",0,0,"short",&_MultiUserGestalt_24};
	VPL_ExtField _MultiUserGestalt_22 = { "giSupportsAsyncFSCalls",219,1,kUnsignedType,"NULL",0,0,"unsigned char",&_MultiUserGestalt_23};
	VPL_ExtField _MultiUserGestalt_21 = { "giDisableScrnShots",218,1,kUnsignedType,"NULL",0,0,"unsigned char",&_MultiUserGestalt_22};
	VPL_ExtField _MultiUserGestalt_20 = { "giReserved7",214,4,kIntType,"NULL",0,0,"long int",&_MultiUserGestalt_21};
	VPL_ExtField _MultiUserGestalt_19 = { "giReserved6",210,4,kIntType,"NULL",0,0,"long int",&_MultiUserGestalt_20};
	VPL_ExtField _MultiUserGestalt_18 = { "giUserEnvironment",208,2,kIntType,"NULL",0,0,"short",&_MultiUserGestalt_19};
	VPL_ExtField _MultiUserGestalt_17 = { "giUserEncryptPwd",192,16,kPointerType,"char",0,1,NULL,&_MultiUserGestalt_18};
	VPL_ExtField _MultiUserGestalt_16 = { "giUserLoggedInType",190,2,kIntType,"char",0,1,"short",&_MultiUserGestalt_17};
	VPL_ExtField _MultiUserGestalt_15 = { "giIsOn",188,2,kIntType,"char",0,1,"short",&_MultiUserGestalt_16};
	VPL_ExtField _MultiUserGestalt_14 = { "giReserved5",186,2,kIntType,"char",0,1,"short",&_MultiUserGestalt_15};
	VPL_ExtField _MultiUserGestalt_13 = { "giFrontAppName",154,32,kPointerType,"unsigned char",0,1,NULL,&_MultiUserGestalt_14};
	VPL_ExtField _MultiUserGestalt_12 = { "giUserName",122,32,kPointerType,"unsigned char",0,1,NULL,&_MultiUserGestalt_13};
	VPL_ExtField _MultiUserGestalt_11 = { "giSetupName",90,32,kPointerType,"unsigned char",0,1,NULL,&_MultiUserGestalt_12};
	VPL_ExtField _MultiUserGestalt_10 = { "giForceOpens",88,2,kIntType,"unsigned char",0,1,"short",&_MultiUserGestalt_11};
	VPL_ExtField _MultiUserGestalt_9 = { "giForceSaves",86,2,kIntType,"unsigned char",0,1,"short",&_MultiUserGestalt_10};
	VPL_ExtField _MultiUserGestalt_8 = { "giDocsDirID",82,4,kIntType,"unsigned char",0,1,"long int",&_MultiUserGestalt_9};
	VPL_ExtField _MultiUserGestalt_7 = { "giDocsVRefNum",80,2,kIntType,"unsigned char",0,1,"short",&_MultiUserGestalt_8};
	VPL_ExtField _MultiUserGestalt_6 = { "giReserved4",10,70,kStructureType,"unsigned char",0,1,"FSSpec",&_MultiUserGestalt_7};
	VPL_ExtField _MultiUserGestalt_5 = { "giReserved3",8,2,kIntType,"unsigned char",0,1,"short",&_MultiUserGestalt_6};
	VPL_ExtField _MultiUserGestalt_4 = { "giReserved2",6,2,kIntType,"unsigned char",0,1,"short",&_MultiUserGestalt_5};
	VPL_ExtField _MultiUserGestalt_3 = { "giReserved1",4,2,kIntType,"unsigned char",0,1,"short",&_MultiUserGestalt_4};
	VPL_ExtField _MultiUserGestalt_2 = { "giReserved0",2,2,kIntType,"unsigned char",0,1,"short",&_MultiUserGestalt_3};
	VPL_ExtField _MultiUserGestalt_1 = { "giVersion",0,2,kIntType,"unsigned char",0,1,"short",&_MultiUserGestalt_2};
	VPL_ExtStructure _MultiUserGestalt_S = {"MultiUserGestalt",&_MultiUserGestalt_1};

	VPL_ExtField _FindFolderUserRedirectionGlobals_8 = { "remoteUserFolderDirID",50,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _FindFolderUserRedirectionGlobals_7 = { "remoteUserFolderVRefNum",48,2,kIntType,"NULL",0,0,"short",&_FindFolderUserRedirectionGlobals_8};
	VPL_ExtField _FindFolderUserRedirectionGlobals_6 = { "currentUserFolderDirID",44,4,kIntType,"NULL",0,0,"long int",&_FindFolderUserRedirectionGlobals_7};
	VPL_ExtField _FindFolderUserRedirectionGlobals_5 = { "currentUserFolderVRefNum",42,2,kIntType,"NULL",0,0,"short",&_FindFolderUserRedirectionGlobals_6};
	VPL_ExtField _FindFolderUserRedirectionGlobals_4 = { "userNameScript",40,2,kIntType,"NULL",0,0,"short",&_FindFolderUserRedirectionGlobals_5};
	VPL_ExtField _FindFolderUserRedirectionGlobals_3 = { "userName",8,32,kPointerType,"unsigned char",0,1,NULL,&_FindFolderUserRedirectionGlobals_4};
	VPL_ExtField _FindFolderUserRedirectionGlobals_2 = { "flags",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FindFolderUserRedirectionGlobals_3};
	VPL_ExtField _FindFolderUserRedirectionGlobals_1 = { "version",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FindFolderUserRedirectionGlobals_2};
	VPL_ExtStructure _FindFolderUserRedirectionGlobals_S = {"FindFolderUserRedirectionGlobals",&_FindFolderUserRedirectionGlobals_1};

	VPL_ExtField _FolderRouting_5 = { "flags",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _FolderRouting_4 = { "routeToFolder",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FolderRouting_5};
	VPL_ExtField _FolderRouting_3 = { "routeFromFolder",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FolderRouting_4};
	VPL_ExtField _FolderRouting_2 = { "fileType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FolderRouting_3};
	VPL_ExtField _FolderRouting_1 = { "descSize",0,4,kIntType,"NULL",0,0,"long int",&_FolderRouting_2};
	VPL_ExtStructure _FolderRouting_S = {"FolderRouting",&_FolderRouting_1};

	VPL_ExtField _FolderDesc_9 = { "name",32,64,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _FolderDesc_8 = { "reserved",28,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FolderDesc_9};
	VPL_ExtField _FolderDesc_7 = { "badgeType",24,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FolderDesc_8};
	VPL_ExtField _FolderDesc_6 = { "badgeSignature",20,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FolderDesc_7};
	VPL_ExtField _FolderDesc_5 = { "foldLocation",16,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FolderDesc_6};
	VPL_ExtField _FolderDesc_4 = { "foldClass",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FolderDesc_5};
	VPL_ExtField _FolderDesc_3 = { "flags",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FolderDesc_4};
	VPL_ExtField _FolderDesc_2 = { "foldType",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FolderDesc_3};
	VPL_ExtField _FolderDesc_1 = { "descSize",0,4,kIntType,"unsigned char",0,1,"long int",&_FolderDesc_2};
	VPL_ExtStructure _FolderDesc_S = {"FolderDesc",&_FolderDesc_1};

	VPL_ExtField _SchedulerInfoRec_4 = { "InterruptedCoopThreadID",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _SchedulerInfoRec_3 = { "SuggestedThreadID",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SchedulerInfoRec_4};
	VPL_ExtField _SchedulerInfoRec_2 = { "CurrentThreadID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SchedulerInfoRec_3};
	VPL_ExtField _SchedulerInfoRec_1 = { "InfoRecSize",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_SchedulerInfoRec_2};
	VPL_ExtStructure _SchedulerInfoRec_S = {"SchedulerInfoRec",&_SchedulerInfoRec_1};

	VPL_ExtField _UnicodeMapping_3 = { "mappingVersion",8,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _UnicodeMapping_2 = { "otherEncoding",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UnicodeMapping_3};
	VPL_ExtField _UnicodeMapping_1 = { "unicodeEncoding",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UnicodeMapping_2};
	VPL_ExtStructure _UnicodeMapping_S = {"UnicodeMapping",&_UnicodeMapping_1};

	VPL_ExtStructure _OpaqueUnicodeToTextRunInfo_S = {"OpaqueUnicodeToTextRunInfo",NULL};

	VPL_ExtStructure _OpaqueUnicodeToTextInfo_S = {"OpaqueUnicodeToTextInfo",NULL};

	VPL_ExtStructure _OpaqueTextToUnicodeInfo_S = {"OpaqueTextToUnicodeInfo",NULL};

	VPL_ExtField _TECConversionInfo_4 = { "reserved2",10,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _TECConversionInfo_3 = { "reserved1",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TECConversionInfo_4};
	VPL_ExtField _TECConversionInfo_2 = { "destinationEncoding",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TECConversionInfo_3};
	VPL_ExtField _TECConversionInfo_1 = { "sourceEncoding",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TECConversionInfo_2};
	VPL_ExtStructure _TECConversionInfo_S = {"TECConversionInfo",&_TECConversionInfo_1};

	VPL_ExtStructure _OpaqueTECSnifferObjectRef_S = {"OpaqueTECSnifferObjectRef",NULL};

	VPL_ExtStructure _OpaqueTECObjectRef_S = {"OpaqueTECObjectRef",NULL};

	VPL_ExtField _decform_3 = { "digits",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _decform_2 = { "unused",1,1,kIntType,"NULL",0,0,"char",&_decform_3};
	VPL_ExtField _decform_1 = { "style",0,1,kIntType,"NULL",0,0,"char",&_decform_2};
	VPL_ExtStructure _decform_S = {"decform",&_decform_1};

	VPL_ExtField _827_3 = { "unused",37,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _827_2 = { "text",1,36,kPointerType,"unsigned char",0,1,NULL,&_827_3};
	VPL_ExtField _827_1 = { "length",0,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_827_2};
	VPL_ExtStructure _827_S = {"827",&_827_1};

	VPL_ExtField _decimal_4 = { "sig",4,38,kStructureType,"NULL",0,0,"827",NULL};
	VPL_ExtField _decimal_3 = { "exp",2,2,kIntType,"NULL",0,0,"short",&_decimal_4};
	VPL_ExtField _decimal_2 = { "unused",1,1,kIntType,"NULL",0,0,"char",&_decimal_3};
	VPL_ExtField _decimal_1 = { "sgn",0,1,kIntType,"NULL",0,0,"char",&_decimal_2};
	VPL_ExtStructure _decimal_S = {"decimal",&_decimal_1};

	VPL_ExtStructure _OpaqueTextBreakLocatorRef_S = {"OpaqueTextBreakLocatorRef",NULL};

	VPL_ExtStructure _OpaqueCollatorRef_S = {"OpaqueCollatorRef",NULL};

	VPL_ExtField _UCKeySequenceDataIndex_3 = { "charSequenceOffsets",4,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _UCKeySequenceDataIndex_2 = { "charSequenceCount",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_UCKeySequenceDataIndex_3};
	VPL_ExtField _UCKeySequenceDataIndex_1 = { "keySequenceDataIndexFormat",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_UCKeySequenceDataIndex_2};
	VPL_ExtStructure _UCKeySequenceDataIndex_S = {"UCKeySequenceDataIndex",&_UCKeySequenceDataIndex_1};

	VPL_ExtField _UCKeyStateTerminators_3 = { "keyStateTerminators",4,2,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _UCKeyStateTerminators_2 = { "keyStateTerminatorCount",2,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_UCKeyStateTerminators_3};
	VPL_ExtField _UCKeyStateTerminators_1 = { "keyStateTerminatorsFormat",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_UCKeyStateTerminators_2};
	VPL_ExtStructure _UCKeyStateTerminators_S = {"UCKeyStateTerminators",&_UCKeyStateTerminators_1};

	VPL_ExtField _UCKeyStateRecordsIndex_3 = { "keyStateRecordOffsets",4,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _UCKeyStateRecordsIndex_2 = { "keyStateRecordCount",2,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_UCKeyStateRecordsIndex_3};
	VPL_ExtField _UCKeyStateRecordsIndex_1 = { "keyStateRecordsIndexFormat",0,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_UCKeyStateRecordsIndex_2};
	VPL_ExtStructure _UCKeyStateRecordsIndex_S = {"UCKeyStateRecordsIndex",&_UCKeyStateRecordsIndex_1};

	VPL_ExtField _UCKeyToCharTableIndex_4 = { "keyToCharTableOffsets",8,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _UCKeyToCharTableIndex_3 = { "keyToCharTableCount",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_UCKeyToCharTableIndex_4};
	VPL_ExtField _UCKeyToCharTableIndex_2 = { "keyToCharTableSize",2,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_UCKeyToCharTableIndex_3};
	VPL_ExtField _UCKeyToCharTableIndex_1 = { "keyToCharTableIndexFormat",0,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_UCKeyToCharTableIndex_2};
	VPL_ExtStructure _UCKeyToCharTableIndex_S = {"UCKeyToCharTableIndex",&_UCKeyToCharTableIndex_1};

	VPL_ExtField _UCKeyModifiersToTableNum_4 = { "tableNum",8,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _UCKeyModifiersToTableNum_3 = { "modifiersCount",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_UCKeyModifiersToTableNum_4};
	VPL_ExtField _UCKeyModifiersToTableNum_2 = { "defaultTableNum",2,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_UCKeyModifiersToTableNum_3};
	VPL_ExtField _UCKeyModifiersToTableNum_1 = { "keyModifiersToTableNumFormat",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_UCKeyModifiersToTableNum_2};
	VPL_ExtStructure _UCKeyModifiersToTableNum_S = {"UCKeyModifiersToTableNum",&_UCKeyModifiersToTableNum_1};

	VPL_ExtField _UCKeyLayoutFeatureInfo_3 = { "maxOutputStringLength",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _UCKeyLayoutFeatureInfo_2 = { "reserved",2,2,kUnsignedType,"NULL",0,0,"unsigned short",&_UCKeyLayoutFeatureInfo_3};
	VPL_ExtField _UCKeyLayoutFeatureInfo_1 = { "keyLayoutFeatureInfoFormat",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_UCKeyLayoutFeatureInfo_2};
	VPL_ExtStructure _UCKeyLayoutFeatureInfo_S = {"UCKeyLayoutFeatureInfo",&_UCKeyLayoutFeatureInfo_1};

	VPL_ExtField _UCKeyboardLayout_5 = { "keyboardTypeList",12,28,kPointerType,"UCKeyboardTypeHeader",0,28,NULL,NULL};
	VPL_ExtField _UCKeyboardLayout_4 = { "keyboardTypeCount",8,4,kUnsignedType,"UCKeyboardTypeHeader",0,28,"unsigned long",&_UCKeyboardLayout_5};
	VPL_ExtField _UCKeyboardLayout_3 = { "keyLayoutFeatureInfoOffset",4,4,kUnsignedType,"UCKeyboardTypeHeader",0,28,"unsigned long",&_UCKeyboardLayout_4};
	VPL_ExtField _UCKeyboardLayout_2 = { "keyLayoutDataVersion",2,2,kUnsignedType,"UCKeyboardTypeHeader",0,28,"unsigned short",&_UCKeyboardLayout_3};
	VPL_ExtField _UCKeyboardLayout_1 = { "keyLayoutHeaderFormat",0,2,kUnsignedType,"UCKeyboardTypeHeader",0,28,"unsigned short",&_UCKeyboardLayout_2};
	VPL_ExtStructure _UCKeyboardLayout_S = {"UCKeyboardLayout",&_UCKeyboardLayout_1};

	VPL_ExtField _UCKeyboardTypeHeader_7 = { "keySequenceDataIndexOffset",24,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _UCKeyboardTypeHeader_6 = { "keyStateTerminatorsOffset",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UCKeyboardTypeHeader_7};
	VPL_ExtField _UCKeyboardTypeHeader_5 = { "keyStateRecordsIndexOffset",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UCKeyboardTypeHeader_6};
	VPL_ExtField _UCKeyboardTypeHeader_4 = { "keyToCharTableIndexOffset",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UCKeyboardTypeHeader_5};
	VPL_ExtField _UCKeyboardTypeHeader_3 = { "keyModifiersToTableNumOffset",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UCKeyboardTypeHeader_4};
	VPL_ExtField _UCKeyboardTypeHeader_2 = { "keyboardTypeLast",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UCKeyboardTypeHeader_3};
	VPL_ExtField _UCKeyboardTypeHeader_1 = { "keyboardTypeFirst",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UCKeyboardTypeHeader_2};
	VPL_ExtStructure _UCKeyboardTypeHeader_S = {"UCKeyboardTypeHeader",&_UCKeyboardTypeHeader_1};

	VPL_ExtField _UCKeyStateEntryRange_5 = { "nextState",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _UCKeyStateEntryRange_4 = { "charData",4,2,kUnsignedType,"NULL",0,0,"unsigned short",&_UCKeyStateEntryRange_5};
	VPL_ExtField _UCKeyStateEntryRange_3 = { "deltaMultiplier",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_UCKeyStateEntryRange_4};
	VPL_ExtField _UCKeyStateEntryRange_2 = { "curStateRange",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_UCKeyStateEntryRange_3};
	VPL_ExtField _UCKeyStateEntryRange_1 = { "curStateStart",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_UCKeyStateEntryRange_2};
	VPL_ExtStructure _UCKeyStateEntryRange_S = {"UCKeyStateEntryRange",&_UCKeyStateEntryRange_1};

	VPL_ExtField _UCKeyStateEntryTerminal_2 = { "charData",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _UCKeyStateEntryTerminal_1 = { "curState",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_UCKeyStateEntryTerminal_2};
	VPL_ExtStructure _UCKeyStateEntryTerminal_S = {"UCKeyStateEntryTerminal",&_UCKeyStateEntryTerminal_1};

	VPL_ExtField _UCKeyStateRecord_5 = { "stateEntryData",8,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _UCKeyStateRecord_4 = { "stateEntryFormat",6,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_UCKeyStateRecord_5};
	VPL_ExtField _UCKeyStateRecord_3 = { "stateEntryCount",4,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_UCKeyStateRecord_4};
	VPL_ExtField _UCKeyStateRecord_2 = { "stateZeroNextState",2,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_UCKeyStateRecord_3};
	VPL_ExtField _UCKeyStateRecord_1 = { "stateZeroCharData",0,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_UCKeyStateRecord_2};
	VPL_ExtStructure _UCKeyStateRecord_S = {"UCKeyStateRecord",&_UCKeyStateRecord_1};

	VPL_ExtField _NBreakTable_11 = { "tables",272,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _NBreakTable_10 = { "charTypes",16,256,kPointerType,"char",0,1,NULL,&_NBreakTable_11};
	VPL_ExtField _NBreakTable_9 = { "length",14,2,kIntType,"char",0,1,"short",&_NBreakTable_10};
	VPL_ExtField _NBreakTable_8 = { "doBackup",12,2,kIntType,"char",0,1,"short",&_NBreakTable_9};
	VPL_ExtField _NBreakTable_7 = { "forwdTableOff",10,2,kIntType,"char",0,1,"short",&_NBreakTable_8};
	VPL_ExtField _NBreakTable_6 = { "backwdTableOff",8,2,kIntType,"char",0,1,"short",&_NBreakTable_7};
	VPL_ExtField _NBreakTable_5 = { "auxCTableOff",6,2,kIntType,"char",0,1,"short",&_NBreakTable_6};
	VPL_ExtField _NBreakTable_4 = { "classTableOff",4,2,kIntType,"char",0,1,"short",&_NBreakTable_5};
	VPL_ExtField _NBreakTable_3 = { "version",2,2,kIntType,"char",0,1,"short",&_NBreakTable_4};
	VPL_ExtField _NBreakTable_2 = { "flags2",1,1,kIntType,"char",0,1,"signed char",&_NBreakTable_3};
	VPL_ExtField _NBreakTable_1 = { "flags1",0,1,kIntType,"char",0,1,"signed char",&_NBreakTable_2};
	VPL_ExtStructure _NBreakTable_S = {"NBreakTable",&_NBreakTable_1};

	VPL_ExtField _BreakTable_3 = { "triples",258,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _BreakTable_2 = { "tripleLength",256,2,kIntType,"short",0,2,"short",&_BreakTable_3};
	VPL_ExtField _BreakTable_1 = { "charTypes",0,256,kPointerType,"char",0,1,NULL,&_BreakTable_2};
	VPL_ExtStructure _BreakTable_S = {"BreakTable",&_BreakTable_1};

	VPL_ExtField _ScriptRunStatus_2 = { "runVariant",1,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _ScriptRunStatus_1 = { "script",0,1,kIntType,"NULL",0,0,"signed char",&_ScriptRunStatus_2};
	VPL_ExtStructure _ScriptRunStatus_S = {"ScriptRunStatus",&_ScriptRunStatus_1};

	VPL_ExtField _FVector_2 = { "length",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _FVector_1 = { "start",0,2,kIntType,"NULL",0,0,"short",&_FVector_2};
	VPL_ExtStructure _FVector_S = {"FVector",&_FVector_1};

	VPL_ExtField _NumFormatString_3 = { "data",2,254,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _NumFormatString_2 = { "fVersion",1,1,kUnsignedType,"char",0,1,"unsigned char",&_NumFormatString_3};
	VPL_ExtField _NumFormatString_1 = { "fLength",0,1,kUnsignedType,"char",0,1,"unsigned char",&_NumFormatString_2};
	VPL_ExtStructure _NumFormatString_S = {"NumFormatString",&_NumFormatString_1};

	VPL_ExtField _InterruptSetMember_2 = { "member",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _InterruptSetMember_1 = { "setID",0,4,kPointerType,"OpaqueInterruptSetID",1,0,"T*",&_InterruptSetMember_2};
	VPL_ExtStructure _InterruptSetMember_S = {"InterruptSetMember",&_InterruptSetMember_1};

	VPL_ExtStructure _OpaqueInterruptSetID_S = {"OpaqueInterruptSetID",NULL};

	VPL_ExtField _PageInformation_3 = { "information",8,4,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _PageInformation_2 = { "count",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_PageInformation_3};
	VPL_ExtField _PageInformation_1 = { "area",0,4,kPointerType,"OpaqueAreaID",1,0,"T*",&_PageInformation_2};
	VPL_ExtStructure _PageInformation_S = {"PageInformation",&_PageInformation_1};

	VPL_ExtField _IOPreparationTable_11 = { "rangeInfo",40,8,kStructureType,"NULL",0,0,"794",NULL};
	VPL_ExtField _IOPreparationTable_10 = { "physicalMapping",36,4,kPointerType,"void",2,0,"T*",&_IOPreparationTable_11};
	VPL_ExtField _IOPreparationTable_9 = { "logicalMapping",32,4,kPointerType,"void",2,0,"T*",&_IOPreparationTable_10};
	VPL_ExtField _IOPreparationTable_8 = { "mappingEntryCount",28,4,kUnsignedType,"void",2,0,"unsigned long",&_IOPreparationTable_9};
	VPL_ExtField _IOPreparationTable_7 = { "lengthPrepared",24,4,kUnsignedType,"void",2,0,"unsigned long",&_IOPreparationTable_8};
	VPL_ExtField _IOPreparationTable_6 = { "firstPrepared",20,4,kUnsignedType,"void",2,0,"unsigned long",&_IOPreparationTable_7};
	VPL_ExtField _IOPreparationTable_5 = { "granularity",16,4,kUnsignedType,"void",2,0,"unsigned long",&_IOPreparationTable_6};
	VPL_ExtField _IOPreparationTable_4 = { "addressSpace",12,4,kPointerType,"OpaqueMPAddressSpaceID",1,0,"T*",&_IOPreparationTable_5};
	VPL_ExtField _IOPreparationTable_3 = { "preparationID",8,4,kPointerType,"OpaqueIOPreparationID",1,0,"T*",&_IOPreparationTable_4};
	VPL_ExtField _IOPreparationTable_2 = { "state",4,4,kUnsignedType,"OpaqueIOPreparationID",1,0,"unsigned long",&_IOPreparationTable_3};
	VPL_ExtField _IOPreparationTable_1 = { "options",0,4,kUnsignedType,"OpaqueIOPreparationID",1,0,"unsigned long",&_IOPreparationTable_2};
	VPL_ExtStructure _IOPreparationTable_S = {"IOPreparationTable",&_IOPreparationTable_1};

	VPL_ExtField _MultipleAddressRange_2 = { "rangeTable",4,4,kPointerType,"AddressRange",1,8,"T*",NULL};
	VPL_ExtField _MultipleAddressRange_1 = { "entryCount",0,4,kUnsignedType,"AddressRange",1,8,"unsigned long",&_MultipleAddressRange_2};
	VPL_ExtStructure _MultipleAddressRange_S = {"MultipleAddressRange",&_MultipleAddressRange_1};

	VPL_ExtField _AddressRange_2 = { "length",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _AddressRange_1 = { "base",0,4,kPointerType,"void",1,0,"T*",&_AddressRange_2};
	VPL_ExtStructure _AddressRange_S = {"AddressRange",&_AddressRange_1};

	VPL_ExtField _PhysicalAddressRange_2 = { "count",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _PhysicalAddressRange_1 = { "address",0,4,kPointerType,"void",1,0,"T*",&_PhysicalAddressRange_2};
	VPL_ExtStructure _PhysicalAddressRange_S = {"PhysicalAddressRange",&_PhysicalAddressRange_1};

	VPL_ExtField _LogicalAddressRange_2 = { "count",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _LogicalAddressRange_1 = { "address",0,4,kPointerType,"void",1,0,"T*",&_LogicalAddressRange_2};
	VPL_ExtStructure _LogicalAddressRange_S = {"LogicalAddressRange",&_LogicalAddressRange_1};

	VPL_ExtStructure _OpaqueTimerID_S = {"OpaqueTimerID",NULL};

	VPL_ExtStructure _OpaqueTaskID_S = {"OpaqueTaskID",NULL};

	VPL_ExtStructure _OpaqueSoftwareInterruptID_S = {"OpaqueSoftwareInterruptID",NULL};

	VPL_ExtStructure _OpaqueIOPreparationID_S = {"OpaqueIOPreparationID",NULL};

	VPL_ExtField _ExceptionInformationPowerPC_6 = { "vectorImage",20,4,kPointerType,"VectorInformationPowerPC",1,1024,"T*",NULL};
	VPL_ExtField _ExceptionInformationPowerPC_5 = { "info",16,4,kStructureType,"VectorInformationPowerPC",1,1024,"ExceptionInfo",&_ExceptionInformationPowerPC_6};
	VPL_ExtField _ExceptionInformationPowerPC_4 = { "FPUImage",12,4,kPointerType,"FPUInformationPowerPC",1,512,"T*",&_ExceptionInformationPowerPC_5};
	VPL_ExtField _ExceptionInformationPowerPC_3 = { "registerImage",8,4,kPointerType,"RegisterInformationPowerPC",1,256,"T*",&_ExceptionInformationPowerPC_4};
	VPL_ExtField _ExceptionInformationPowerPC_2 = { "machineState",4,4,kPointerType,"MachineInformationPowerPC",1,64,"T*",&_ExceptionInformationPowerPC_3};
	VPL_ExtField _ExceptionInformationPowerPC_1 = { "theKind",0,4,kUnsignedType,"MachineInformationPowerPC",1,64,"unsigned long",&_ExceptionInformationPowerPC_2};
	VPL_ExtStructure _ExceptionInformationPowerPC_S = {"ExceptionInformationPowerPC",&_ExceptionInformationPowerPC_1};

	VPL_ExtField _MemoryExceptionInformation_4 = { "theReference",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MemoryExceptionInformation_3 = { "theError",8,4,kIntType,"NULL",0,0,"long int",&_MemoryExceptionInformation_4};
	VPL_ExtField _MemoryExceptionInformation_2 = { "theAddress",4,4,kPointerType,"void",1,0,"T*",&_MemoryExceptionInformation_3};
	VPL_ExtField _MemoryExceptionInformation_1 = { "theArea",0,4,kPointerType,"OpaqueAreaID",1,0,"T*",&_MemoryExceptionInformation_2};
	VPL_ExtStructure _MemoryExceptionInformation_S = {"MemoryExceptionInformation",&_MemoryExceptionInformation_1};

	VPL_ExtField _VectorInformationPowerPC_3 = { "VRsave",528,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VectorInformationPowerPC_2 = { "VSCR",512,16,kStructureType,"NULL",0,0,"Vector128",&_VectorInformationPowerPC_3};
	VPL_ExtField _VectorInformationPowerPC_1 = { "Registers",0,512,kPointerType,"Vector128",0,16,NULL,&_VectorInformationPowerPC_2};
	VPL_ExtStructure _VectorInformationPowerPC_S = {"VectorInformationPowerPC",&_VectorInformationPowerPC_1};

	VPL_ExtField _FPUInformationPowerPC_3 = { "Reserved",260,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _FPUInformationPowerPC_2 = { "FPSCR",256,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FPUInformationPowerPC_3};
	VPL_ExtField _FPUInformationPowerPC_1 = { "Registers",0,256,kPointerType,"UnsignedWide",0,8,NULL,&_FPUInformationPowerPC_2};
	VPL_ExtStructure _FPUInformationPowerPC_S = {"FPUInformationPowerPC",&_FPUInformationPowerPC_1};

	VPL_ExtField _RegisterInformationPowerPC_32 = { "R31",248,8,kStructureType,"NULL",0,0,"UnsignedWide",NULL};
	VPL_ExtField _RegisterInformationPowerPC_31 = { "R30",240,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_32};
	VPL_ExtField _RegisterInformationPowerPC_30 = { "R29",232,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_31};
	VPL_ExtField _RegisterInformationPowerPC_29 = { "R28",224,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_30};
	VPL_ExtField _RegisterInformationPowerPC_28 = { "R27",216,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_29};
	VPL_ExtField _RegisterInformationPowerPC_27 = { "R26",208,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_28};
	VPL_ExtField _RegisterInformationPowerPC_26 = { "R25",200,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_27};
	VPL_ExtField _RegisterInformationPowerPC_25 = { "R24",192,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_26};
	VPL_ExtField _RegisterInformationPowerPC_24 = { "R23",184,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_25};
	VPL_ExtField _RegisterInformationPowerPC_23 = { "R22",176,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_24};
	VPL_ExtField _RegisterInformationPowerPC_22 = { "R21",168,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_23};
	VPL_ExtField _RegisterInformationPowerPC_21 = { "R20",160,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_22};
	VPL_ExtField _RegisterInformationPowerPC_20 = { "R19",152,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_21};
	VPL_ExtField _RegisterInformationPowerPC_19 = { "R18",144,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_20};
	VPL_ExtField _RegisterInformationPowerPC_18 = { "R17",136,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_19};
	VPL_ExtField _RegisterInformationPowerPC_17 = { "R16",128,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_18};
	VPL_ExtField _RegisterInformationPowerPC_16 = { "R15",120,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_17};
	VPL_ExtField _RegisterInformationPowerPC_15 = { "R14",112,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_16};
	VPL_ExtField _RegisterInformationPowerPC_14 = { "R13",104,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_15};
	VPL_ExtField _RegisterInformationPowerPC_13 = { "R12",96,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_14};
	VPL_ExtField _RegisterInformationPowerPC_12 = { "R11",88,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_13};
	VPL_ExtField _RegisterInformationPowerPC_11 = { "R10",80,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_12};
	VPL_ExtField _RegisterInformationPowerPC_10 = { "R9",72,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_11};
	VPL_ExtField _RegisterInformationPowerPC_9 = { "R8",64,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_10};
	VPL_ExtField _RegisterInformationPowerPC_8 = { "R7",56,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_9};
	VPL_ExtField _RegisterInformationPowerPC_7 = { "R6",48,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_8};
	VPL_ExtField _RegisterInformationPowerPC_6 = { "R5",40,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_7};
	VPL_ExtField _RegisterInformationPowerPC_5 = { "R4",32,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_6};
	VPL_ExtField _RegisterInformationPowerPC_4 = { "R3",24,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_5};
	VPL_ExtField _RegisterInformationPowerPC_3 = { "R2",16,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_4};
	VPL_ExtField _RegisterInformationPowerPC_2 = { "R1",8,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_3};
	VPL_ExtField _RegisterInformationPowerPC_1 = { "R0",0,8,kStructureType,"NULL",0,0,"UnsignedWide",&_RegisterInformationPowerPC_2};
	VPL_ExtStructure _RegisterInformationPowerPC_S = {"RegisterInformationPowerPC",&_RegisterInformationPowerPC_1};

	VPL_ExtField _MachineInformationPowerPC_11 = { "Reserved",56,8,kStructureType,"NULL",0,0,"UnsignedWide",NULL};
	VPL_ExtField _MachineInformationPowerPC_10 = { "DAR",48,8,kStructureType,"NULL",0,0,"UnsignedWide",&_MachineInformationPowerPC_11};
	VPL_ExtField _MachineInformationPowerPC_9 = { "DSISR",44,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MachineInformationPowerPC_10};
	VPL_ExtField _MachineInformationPowerPC_8 = { "ExceptKind",40,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MachineInformationPowerPC_9};
	VPL_ExtField _MachineInformationPowerPC_7 = { "MQ",36,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MachineInformationPowerPC_8};
	VPL_ExtField _MachineInformationPowerPC_6 = { "MSR",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MachineInformationPowerPC_7};
	VPL_ExtField _MachineInformationPowerPC_5 = { "XER",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MachineInformationPowerPC_6};
	VPL_ExtField _MachineInformationPowerPC_4 = { "CR",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MachineInformationPowerPC_5};
	VPL_ExtField _MachineInformationPowerPC_3 = { "PC",16,8,kStructureType,"NULL",0,0,"UnsignedWide",&_MachineInformationPowerPC_4};
	VPL_ExtField _MachineInformationPowerPC_2 = { "LR",8,8,kStructureType,"NULL",0,0,"UnsignedWide",&_MachineInformationPowerPC_3};
	VPL_ExtField _MachineInformationPowerPC_1 = { "CTR",0,8,kStructureType,"NULL",0,0,"UnsignedWide",&_MachineInformationPowerPC_2};
	VPL_ExtStructure _MachineInformationPowerPC_S = {"MachineInformationPowerPC",&_MachineInformationPowerPC_1};

	VPL_ExtStructure _OpaqueAreaID_S = {"OpaqueAreaID",NULL};

	VPL_ExtStructure _OpaqueIOCommandID_S = {"OpaqueIOCommandID",NULL};

	VPL_ExtField _DRVRHeader_10 = { "drvrName",18,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _DRVRHeader_9 = { "drvrClose",16,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_10};
	VPL_ExtField _DRVRHeader_8 = { "drvrStatus",14,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_9};
	VPL_ExtField _DRVRHeader_7 = { "drvrCtl",12,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_8};
	VPL_ExtField _DRVRHeader_6 = { "drvrPrime",10,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_7};
	VPL_ExtField _DRVRHeader_5 = { "drvrOpen",8,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_6};
	VPL_ExtField _DRVRHeader_4 = { "drvrMenu",6,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_5};
	VPL_ExtField _DRVRHeader_3 = { "drvrEMask",4,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_4};
	VPL_ExtField _DRVRHeader_2 = { "drvrDelay",2,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_3};
	VPL_ExtField _DRVRHeader_1 = { "drvrFlags",0,2,kIntType,"unsigned char",0,1,"short",&_DRVRHeader_2};
	VPL_ExtStructure _DRVRHeader_S = {"DRVRHeader",&_DRVRHeader_1};

	VPL_ExtStructure _OpaqueRegPropertyIter_S = {"OpaqueRegPropertyIter",NULL};

	VPL_ExtStructure _OpaqueRegEntryIter_S = {"OpaqueRegEntryIter",NULL};

	VPL_ExtField _RegEntryID_5 = { "es_spare2",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _RegEntryID_4 = { "es_spare1",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_RegEntryID_5};
	VPL_ExtField _RegEntryID_3 = { "es_devid",4,4,kPointerType,"OpaqueDeviceNodePtr",1,0,"T*",&_RegEntryID_4};
	VPL_ExtField _RegEntryID_2 = { "es_gen",2,2,kUnsignedType,"OpaqueDeviceNodePtr",1,0,"unsigned short",&_RegEntryID_3};
	VPL_ExtField _RegEntryID_1 = { "es_ver",0,2,kUnsignedType,"OpaqueDeviceNodePtr",1,0,"unsigned short",&_RegEntryID_2};
	VPL_ExtStructure _RegEntryID_S = {"RegEntryID",&_RegEntryID_1};

	VPL_ExtStructure _OpaqueDeviceNodePtr_S = {"OpaqueDeviceNodePtr",NULL};

	VPL_ExtField _LocaleAndVariant_2 = { "opVariant",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _LocaleAndVariant_1 = { "locale",0,4,kPointerType,"OpaqueLocaleRef",1,0,"T*",&_LocaleAndVariant_2};
	VPL_ExtStructure _LocaleAndVariant_S = {"LocaleAndVariant",&_LocaleAndVariant_1};

	VPL_ExtStructure _OpaqueLocaleRef_S = {"OpaqueLocaleRef",NULL};

	VPL_ExtField _AliasRecord_2 = { "aliasSize",4,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _AliasRecord_1 = { "userType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_AliasRecord_2};
	VPL_ExtStructure _AliasRecord_S = {"AliasRecord",&_AliasRecord_1};

	VPL_ExtField _CFragSystem7InitBlock_6 = { "reservedA",32,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CFragSystem7InitBlock_5 = { "libName",28,4,kPointerType,"unsigned char",1,1,"T*",&_CFragSystem7InitBlock_6};
	VPL_ExtField _CFragSystem7InitBlock_4 = { "fragLocator",12,16,kStructureType,"unsigned char",1,1,"CFragSystem7Locator",&_CFragSystem7InitBlock_5};
	VPL_ExtField _CFragSystem7InitBlock_3 = { "connectionID",8,4,kPointerType,"OpaqueCFragConnectionID",1,0,"T*",&_CFragSystem7InitBlock_4};
	VPL_ExtField _CFragSystem7InitBlock_2 = { "closureID",4,4,kPointerType,"OpaqueCFragClosureID",1,0,"T*",&_CFragSystem7InitBlock_3};
	VPL_ExtField _CFragSystem7InitBlock_1 = { "contextID",0,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_CFragSystem7InitBlock_2};
	VPL_ExtStructure _CFragSystem7InitBlock_S = {"CFragSystem7InitBlock",&_CFragSystem7InitBlock_1};

	VPL_ExtField _CFragSystem7Locator_2 = { "u",4,12,kStructureType,"NULL",0,0,"756",NULL};
	VPL_ExtField _CFragSystem7Locator_1 = { "where",0,4,kIntType,"NULL",0,0,"long int",&_CFragSystem7Locator_2};
	VPL_ExtStructure _CFragSystem7Locator_S = {"CFragSystem7Locator",&_CFragSystem7Locator_1};

	VPL_ExtField _CFragCFBundleLocator_3 = { "length",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CFragCFBundleLocator_2 = { "offset",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragCFBundleLocator_3};
	VPL_ExtField _CFragCFBundleLocator_1 = { "fragmentBundle",0,4,kPointerType,"__CFBundle",1,0,"T*",&_CFragCFBundleLocator_2};
	VPL_ExtStructure _CFragCFBundleLocator_S = {"CFragCFBundleLocator",&_CFragCFBundleLocator_1};

	VPL_ExtField _CFragSystem7SegmentedLocator_4 = { "reservedA",10,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CFragSystem7SegmentedLocator_3 = { "rsrcID",8,2,kIntType,"NULL",0,0,"short",&_CFragSystem7SegmentedLocator_4};
	VPL_ExtField _CFragSystem7SegmentedLocator_2 = { "rsrcType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragSystem7SegmentedLocator_3};
	VPL_ExtField _CFragSystem7SegmentedLocator_1 = { "fileSpec",0,4,kPointerType,"FSSpec",1,70,"T*",&_CFragSystem7SegmentedLocator_2};
	VPL_ExtStructure _CFragSystem7SegmentedLocator_S = {"CFragSystem7SegmentedLocator",&_CFragSystem7SegmentedLocator_1};

	VPL_ExtField _CFragSystem7DiskFlatLocator_3 = { "length",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CFragSystem7DiskFlatLocator_2 = { "offset",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragSystem7DiskFlatLocator_3};
	VPL_ExtField _CFragSystem7DiskFlatLocator_1 = { "fileSpec",0,4,kPointerType,"FSSpec",1,70,"T*",&_CFragSystem7DiskFlatLocator_2};
	VPL_ExtStructure _CFragSystem7DiskFlatLocator_S = {"CFragSystem7DiskFlatLocator",&_CFragSystem7DiskFlatLocator_1};

	VPL_ExtField _CFragSystem7MemoryLocator_5 = { "reservedB",10,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CFragSystem7MemoryLocator_4 = { "reservedA",9,1,kUnsignedType,"NULL",0,0,"unsigned char",&_CFragSystem7MemoryLocator_5};
	VPL_ExtField _CFragSystem7MemoryLocator_3 = { "inPlace",8,1,kUnsignedType,"NULL",0,0,"unsigned char",&_CFragSystem7MemoryLocator_4};
	VPL_ExtField _CFragSystem7MemoryLocator_2 = { "length",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragSystem7MemoryLocator_3};
	VPL_ExtField _CFragSystem7MemoryLocator_1 = { "address",0,4,kPointerType,"void",1,0,"T*",&_CFragSystem7MemoryLocator_2};
	VPL_ExtStructure _CFragSystem7MemoryLocator_S = {"CFragSystem7MemoryLocator",&_CFragSystem7MemoryLocator_1};

	VPL_ExtStructure _OpaqueCFragContainerID_S = {"OpaqueCFragContainerID",NULL};

	VPL_ExtStructure _OpaqueCFragClosureID_S = {"OpaqueCFragClosureID",NULL};

	VPL_ExtStructure _OpaqueCFragConnectionID_S = {"OpaqueCFragConnectionID",NULL};

	VPL_ExtField _CFragResource_11 = { "firstMember",32,58,kStructureType,"NULL",0,0,"CFragResourceMember",NULL};
	VPL_ExtField _CFragResource_10 = { "memberCount",30,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CFragResource_11};
	VPL_ExtField _CFragResource_9 = { "reservedH",28,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CFragResource_10};
	VPL_ExtField _CFragResource_8 = { "reservedG",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragResource_9};
	VPL_ExtField _CFragResource_7 = { "reservedF",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragResource_8};
	VPL_ExtField _CFragResource_6 = { "reservedE",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragResource_7};
	VPL_ExtField _CFragResource_5 = { "reservedD",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragResource_6};
	VPL_ExtField _CFragResource_4 = { "version",10,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CFragResource_5};
	VPL_ExtField _CFragResource_3 = { "reservedC",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CFragResource_4};
	VPL_ExtField _CFragResource_2 = { "reservedB",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragResource_3};
	VPL_ExtField _CFragResource_1 = { "reservedA",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CFragResource_2};
	VPL_ExtStructure _CFragResource_S = {"CFragResource",&_CFragResource_1};

	VPL_ExtField _CFragResourceSearchExtension_3 = { "qualifiers",8,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CFragResourceSearchExtension_2 = { "libKind",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CFragResourceSearchExtension_3};
	VPL_ExtField _CFragResourceSearchExtension_1 = { "header",0,4,kStructureType,"unsigned char",0,1,"CFragResourceExtensionHeader",&_CFragResourceSearchExtension_2};
	VPL_ExtStructure _CFragResourceSearchExtension_S = {"CFragResourceSearchExtension",&_CFragResourceSearchExtension_1};

	VPL_ExtField _CFragResourceExtensionHeader_2 = { "extensionSize",2,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _CFragResourceExtensionHeader_1 = { "extensionKind",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_CFragResourceExtensionHeader_2};
	VPL_ExtStructure _CFragResourceExtensionHeader_S = {"CFragResourceExtensionHeader",&_CFragResourceExtensionHeader_1};

	VPL_ExtField _CFragResourceMember_17 = { "name",42,16,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _CFragResourceMember_16 = { "memberSize",40,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_CFragResourceMember_17};
	VPL_ExtField _CFragResourceMember_15 = { "extensionCount",38,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_CFragResourceMember_16};
	VPL_ExtField _CFragResourceMember_14 = { "uWhere2",36,2,kStructureType,"unsigned char",0,1,"CFragWhere2Union",&_CFragResourceMember_15};
	VPL_ExtField _CFragResourceMember_13 = { "uWhere1",32,4,kStructureType,"unsigned char",0,1,"CFragWhere1Union",&_CFragResourceMember_14};
	VPL_ExtField _CFragResourceMember_12 = { "length",28,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CFragResourceMember_13};
	VPL_ExtField _CFragResourceMember_11 = { "offset",24,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CFragResourceMember_12};
	VPL_ExtField _CFragResourceMember_10 = { "where",23,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_CFragResourceMember_11};
	VPL_ExtField _CFragResourceMember_9 = { "usage",22,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_CFragResourceMember_10};
	VPL_ExtField _CFragResourceMember_8 = { "uUsage2",20,2,kStructureType,"unsigned char",0,1,"CFragUsage2Union",&_CFragResourceMember_9};
	VPL_ExtField _CFragResourceMember_7 = { "uUsage1",16,4,kStructureType,"unsigned char",0,1,"CFragUsage1Union",&_CFragResourceMember_8};
	VPL_ExtField _CFragResourceMember_6 = { "oldDefVersion",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CFragResourceMember_7};
	VPL_ExtField _CFragResourceMember_5 = { "currentVersion",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CFragResourceMember_6};
	VPL_ExtField _CFragResourceMember_4 = { "updateLevel",7,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_CFragResourceMember_5};
	VPL_ExtField _CFragResourceMember_3 = { "reservedB",6,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_CFragResourceMember_4};
	VPL_ExtField _CFragResourceMember_2 = { "reservedA",4,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_CFragResourceMember_3};
	VPL_ExtField _CFragResourceMember_1 = { "architecture",0,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_CFragResourceMember_2};
	VPL_ExtStructure _CFragResourceMember_S = {"CFragResourceMember",&_CFragResourceMember_1};

	VPL_ExtField _MPTaskInfo_19 = { "stackCurr",80,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _MPTaskInfo_18 = { "stackLimit",76,4,kPointerType,"void",1,0,"T*",&_MPTaskInfo_19};
	VPL_ExtField _MPTaskInfo_17 = { "stackBase",72,4,kPointerType,"void",1,0,"T*",&_MPTaskInfo_18};
	VPL_ExtField _MPTaskInfo_16 = { "spaceID",68,4,kPointerType,"OpaqueMPAddressSpaceID",1,0,"T*",&_MPTaskInfo_17};
	VPL_ExtField _MPTaskInfo_15 = { "blockedObject",64,4,kPointerType,"OpaqueMPOpaqueID",1,0,"T*",&_MPTaskInfo_16};
	VPL_ExtField _MPTaskInfo_14 = { "cpuID",60,4,kPointerType,"OpaqueMPCpuID",1,0,"T*",&_MPTaskInfo_15};
	VPL_ExtField _MPTaskInfo_13 = { "preemptions",56,4,kUnsignedType,"OpaqueMPCpuID",1,0,"unsigned long",&_MPTaskInfo_14};
	VPL_ExtField _MPTaskInfo_12 = { "dataPageFaults",52,4,kUnsignedType,"OpaqueMPCpuID",1,0,"unsigned long",&_MPTaskInfo_13};
	VPL_ExtField _MPTaskInfo_11 = { "codePageFaults",48,4,kUnsignedType,"OpaqueMPCpuID",1,0,"unsigned long",&_MPTaskInfo_12};
	VPL_ExtField _MPTaskInfo_10 = { "creationTime",40,8,kStructureType,"OpaqueMPCpuID",1,0,"UnsignedWide",&_MPTaskInfo_11};
	VPL_ExtField _MPTaskInfo_9 = { "schedTime",32,8,kStructureType,"OpaqueMPCpuID",1,0,"UnsignedWide",&_MPTaskInfo_10};
	VPL_ExtField _MPTaskInfo_8 = { "cpuTime",24,8,kStructureType,"OpaqueMPCpuID",1,0,"UnsignedWide",&_MPTaskInfo_9};
	VPL_ExtField _MPTaskInfo_7 = { "processID",20,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_MPTaskInfo_8};
	VPL_ExtField _MPTaskInfo_6 = { "weight",16,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPTaskInfo_7};
	VPL_ExtField _MPTaskInfo_5 = { "lastCPU",14,2,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned short",&_MPTaskInfo_6};
	VPL_ExtField _MPTaskInfo_4 = { "runState",12,2,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned short",&_MPTaskInfo_5};
	VPL_ExtField _MPTaskInfo_3 = { "queueName",8,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPTaskInfo_4};
	VPL_ExtField _MPTaskInfo_2 = { "name",4,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPTaskInfo_3};
	VPL_ExtField _MPTaskInfo_1 = { "version",0,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPTaskInfo_2};
	VPL_ExtStructure _MPTaskInfo_S = {"MPTaskInfo",&_MPTaskInfo_1};

	VPL_ExtField _MPTaskInfoVersion2_14 = { "cpuID",60,4,kPointerType,"OpaqueMPCpuID",1,0,"T*",NULL};
	VPL_ExtField _MPTaskInfoVersion2_13 = { "preemptions",56,4,kUnsignedType,"OpaqueMPCpuID",1,0,"unsigned long",&_MPTaskInfoVersion2_14};
	VPL_ExtField _MPTaskInfoVersion2_12 = { "dataPageFaults",52,4,kUnsignedType,"OpaqueMPCpuID",1,0,"unsigned long",&_MPTaskInfoVersion2_13};
	VPL_ExtField _MPTaskInfoVersion2_11 = { "codePageFaults",48,4,kUnsignedType,"OpaqueMPCpuID",1,0,"unsigned long",&_MPTaskInfoVersion2_12};
	VPL_ExtField _MPTaskInfoVersion2_10 = { "creationTime",40,8,kStructureType,"OpaqueMPCpuID",1,0,"UnsignedWide",&_MPTaskInfoVersion2_11};
	VPL_ExtField _MPTaskInfoVersion2_9 = { "schedTime",32,8,kStructureType,"OpaqueMPCpuID",1,0,"UnsignedWide",&_MPTaskInfoVersion2_10};
	VPL_ExtField _MPTaskInfoVersion2_8 = { "cpuTime",24,8,kStructureType,"OpaqueMPCpuID",1,0,"UnsignedWide",&_MPTaskInfoVersion2_9};
	VPL_ExtField _MPTaskInfoVersion2_7 = { "processID",20,4,kPointerType,"OpaqueMPProcessID",1,0,"T*",&_MPTaskInfoVersion2_8};
	VPL_ExtField _MPTaskInfoVersion2_6 = { "weight",16,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPTaskInfoVersion2_7};
	VPL_ExtField _MPTaskInfoVersion2_5 = { "lastCPU",14,2,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned short",&_MPTaskInfoVersion2_6};
	VPL_ExtField _MPTaskInfoVersion2_4 = { "runState",12,2,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned short",&_MPTaskInfoVersion2_5};
	VPL_ExtField _MPTaskInfoVersion2_3 = { "queueName",8,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPTaskInfoVersion2_4};
	VPL_ExtField _MPTaskInfoVersion2_2 = { "name",4,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPTaskInfoVersion2_3};
	VPL_ExtField _MPTaskInfoVersion2_1 = { "version",0,4,kUnsignedType,"OpaqueMPProcessID",1,0,"unsigned long",&_MPTaskInfoVersion2_2};
	VPL_ExtStructure _MPTaskInfoVersion2_S = {"MPTaskInfoVersion2",&_MPTaskInfoVersion2_1};

	VPL_ExtStructure _OpaqueMPOpaqueID_S = {"OpaqueMPOpaqueID",NULL};

	VPL_ExtStructure _OpaqueMPConsoleID_S = {"OpaqueMPConsoleID",NULL};

	VPL_ExtStructure _OpaqueMPAreaID_S = {"OpaqueMPAreaID",NULL};

	VPL_ExtStructure _OpaqueMPCpuID_S = {"OpaqueMPCpuID",NULL};

	VPL_ExtStructure _OpaqueMPCoherenceID_S = {"OpaqueMPCoherenceID",NULL};

	VPL_ExtStructure _OpaqueMPNotificationID_S = {"OpaqueMPNotificationID",NULL};

	VPL_ExtStructure _OpaqueMPAddressSpaceID_S = {"OpaqueMPAddressSpaceID",NULL};

	VPL_ExtStructure _OpaqueMPEventID_S = {"OpaqueMPEventID",NULL};

	VPL_ExtStructure _OpaqueMPTimerID_S = {"OpaqueMPTimerID",NULL};

	VPL_ExtStructure _OpaqueMPCriticalRegionID_S = {"OpaqueMPCriticalRegionID",NULL};

	VPL_ExtStructure _OpaqueMPSemaphoreID_S = {"OpaqueMPSemaphoreID",NULL};

	VPL_ExtStructure _OpaqueMPQueueID_S = {"OpaqueMPQueueID",NULL};

	VPL_ExtStructure _OpaqueMPTaskID_S = {"OpaqueMPTaskID",NULL};

	VPL_ExtStructure _OpaqueMPProcessID_S = {"OpaqueMPProcessID",NULL};

	VPL_ExtField _ComponentMPWorkFunctionHeaderRecord_6 = { "isRunning",15,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _ComponentMPWorkFunctionHeaderRecord_5 = { "unused",14,1,kUnsignedType,"NULL",0,0,"unsigned char",&_ComponentMPWorkFunctionHeaderRecord_6};
	VPL_ExtField _ComponentMPWorkFunctionHeaderRecord_4 = { "processorCount",12,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ComponentMPWorkFunctionHeaderRecord_5};
	VPL_ExtField _ComponentMPWorkFunctionHeaderRecord_3 = { "workFlags",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ComponentMPWorkFunctionHeaderRecord_4};
	VPL_ExtField _ComponentMPWorkFunctionHeaderRecord_2 = { "recordSize",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ComponentMPWorkFunctionHeaderRecord_3};
	VPL_ExtField _ComponentMPWorkFunctionHeaderRecord_1 = { "headerSize",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ComponentMPWorkFunctionHeaderRecord_2};
	VPL_ExtStructure _ComponentMPWorkFunctionHeaderRecord_S = {"ComponentMPWorkFunctionHeaderRecord",&_ComponentMPWorkFunctionHeaderRecord_1};

	VPL_ExtField _RegisteredComponentInstanceRecord_1 = { "data",0,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtStructure _RegisteredComponentInstanceRecord_S = {"RegisteredComponentInstanceRecord",&_RegisteredComponentInstanceRecord_1};

	VPL_ExtField _RegisteredComponentRecord_1 = { "data",0,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtStructure _RegisteredComponentRecord_S = {"RegisteredComponentRecord",&_RegisteredComponentRecord_1};

	VPL_ExtField _ComponentInstanceRecord_1 = { "data",0,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtStructure _ComponentInstanceRecord_S = {"ComponentInstanceRecord",&_ComponentInstanceRecord_1};

	VPL_ExtField _ComponentRecord_1 = { "data",0,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtStructure _ComponentRecord_S = {"ComponentRecord",&_ComponentRecord_1};

	VPL_ExtField _ComponentParameters_4 = { "params",4,4,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _ComponentParameters_3 = { "what",2,2,kIntType,"long int",0,4,"short",&_ComponentParameters_4};
	VPL_ExtField _ComponentParameters_2 = { "paramSize",1,1,kUnsignedType,"long int",0,4,"unsigned char",&_ComponentParameters_3};
	VPL_ExtField _ComponentParameters_1 = { "flags",0,1,kUnsignedType,"long int",0,4,"unsigned char",&_ComponentParameters_2};
	VPL_ExtStructure _ComponentParameters_S = {"ComponentParameters",&_ComponentParameters_1};

	VPL_ExtField _ComponentAliasResource_2 = { "aliasCD",44,20,kStructureType,"NULL",0,0,"ComponentDescription",NULL};
	VPL_ExtField _ComponentAliasResource_1 = { "cr",0,44,kStructureType,"NULL",0,0,"ComponentResource",&_ComponentAliasResource_2};
	VPL_ExtStructure _ComponentAliasResource_S = {"ComponentAliasResource",&_ComponentAliasResource_1};

	VPL_ExtField _ExtComponentResource_10 = { "platformArray",58,12,kPointerType,"ComponentPlatformInfo",0,12,NULL,NULL};
	VPL_ExtField _ExtComponentResource_9 = { "count",54,4,kIntType,"ComponentPlatformInfo",0,12,"long int",&_ExtComponentResource_10};
	VPL_ExtField _ExtComponentResource_8 = { "componentIconFamily",52,2,kIntType,"ComponentPlatformInfo",0,12,"short",&_ExtComponentResource_9};
	VPL_ExtField _ExtComponentResource_7 = { "componentRegisterFlags",48,4,kIntType,"ComponentPlatformInfo",0,12,"long int",&_ExtComponentResource_8};
	VPL_ExtField _ExtComponentResource_6 = { "componentVersion",44,4,kIntType,"ComponentPlatformInfo",0,12,"long int",&_ExtComponentResource_7};
	VPL_ExtField _ExtComponentResource_5 = { "componentIcon",38,6,kStructureType,"ComponentPlatformInfo",0,12,"ResourceSpec",&_ExtComponentResource_6};
	VPL_ExtField _ExtComponentResource_4 = { "componentInfo",32,6,kStructureType,"ComponentPlatformInfo",0,12,"ResourceSpec",&_ExtComponentResource_5};
	VPL_ExtField _ExtComponentResource_3 = { "componentName",26,6,kStructureType,"ComponentPlatformInfo",0,12,"ResourceSpec",&_ExtComponentResource_4};
	VPL_ExtField _ExtComponentResource_2 = { "component",20,6,kStructureType,"ComponentPlatformInfo",0,12,"ResourceSpec",&_ExtComponentResource_3};
	VPL_ExtField _ExtComponentResource_1 = { "cd",0,20,kStructureType,"ComponentPlatformInfo",0,12,"ComponentDescription",&_ExtComponentResource_2};
	VPL_ExtStructure _ExtComponentResource_S = {"ExtComponentResource",&_ExtComponentResource_1};

	VPL_ExtField _ComponentPlatformInfoArray_2 = { "platformArray",4,12,kPointerType,"ComponentPlatformInfo",0,12,NULL,NULL};
	VPL_ExtField _ComponentPlatformInfoArray_1 = { "count",0,4,kIntType,"ComponentPlatformInfo",0,12,"long int",&_ComponentPlatformInfoArray_2};
	VPL_ExtStructure _ComponentPlatformInfoArray_S = {"ComponentPlatformInfoArray",&_ComponentPlatformInfoArray_1};

	VPL_ExtField _ComponentResourceExtension_3 = { "componentIconFamily",8,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ComponentResourceExtension_2 = { "componentRegisterFlags",4,4,kIntType,"NULL",0,0,"long int",&_ComponentResourceExtension_3};
	VPL_ExtField _ComponentResourceExtension_1 = { "componentVersion",0,4,kIntType,"NULL",0,0,"long int",&_ComponentResourceExtension_2};
	VPL_ExtStructure _ComponentResourceExtension_S = {"ComponentResourceExtension",&_ComponentResourceExtension_1};

	VPL_ExtField _ComponentPlatformInfo_3 = { "platformType",10,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ComponentPlatformInfo_2 = { "component",4,6,kStructureType,"NULL",0,0,"ResourceSpec",&_ComponentPlatformInfo_3};
	VPL_ExtField _ComponentPlatformInfo_1 = { "componentFlags",0,4,kIntType,"NULL",0,0,"long int",&_ComponentPlatformInfo_2};
	VPL_ExtStructure _ComponentPlatformInfo_S = {"ComponentPlatformInfo",&_ComponentPlatformInfo_1};

	VPL_ExtField _ComponentResource_5 = { "componentIcon",38,6,kStructureType,"NULL",0,0,"ResourceSpec",NULL};
	VPL_ExtField _ComponentResource_4 = { "componentInfo",32,6,kStructureType,"NULL",0,0,"ResourceSpec",&_ComponentResource_5};
	VPL_ExtField _ComponentResource_3 = { "componentName",26,6,kStructureType,"NULL",0,0,"ResourceSpec",&_ComponentResource_4};
	VPL_ExtField _ComponentResource_2 = { "component",20,6,kStructureType,"NULL",0,0,"ResourceSpec",&_ComponentResource_3};
	VPL_ExtField _ComponentResource_1 = { "cd",0,20,kStructureType,"NULL",0,0,"ComponentDescription",&_ComponentResource_2};
	VPL_ExtStructure _ComponentResource_S = {"ComponentResource",&_ComponentResource_1};

	VPL_ExtField _ResourceSpec_2 = { "resID",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ResourceSpec_1 = { "resType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ResourceSpec_2};
	VPL_ExtStructure _ResourceSpec_S = {"ResourceSpec",&_ResourceSpec_1};

	VPL_ExtField _ComponentDescription_5 = { "componentFlagsMask",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _ComponentDescription_4 = { "componentFlags",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ComponentDescription_5};
	VPL_ExtField _ComponentDescription_3 = { "componentManufacturer",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ComponentDescription_4};
	VPL_ExtField _ComponentDescription_2 = { "componentSubType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ComponentDescription_3};
	VPL_ExtField _ComponentDescription_1 = { "componentType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ComponentDescription_2};
	VPL_ExtStructure _ComponentDescription_S = {"ComponentDescription",&_ComponentDescription_1};

	VPL_ExtStructure _OpaqueCollection_S = {"OpaqueCollection",NULL};

	VPL_ExtField _TokenBlock_20 = { "reserved",68,32,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _TokenBlock_19 = { "itlResource",64,4,kPointerType,"char",2,1,"T*",&_TokenBlock_20};
	VPL_ExtField _TokenBlock_18 = { "decimalCode",62,2,kIntType,"char",2,1,"short",&_TokenBlock_19};
	VPL_ExtField _TokenBlock_17 = { "escapeCode",60,2,kIntType,"char",2,1,"short",&_TokenBlock_18};
	VPL_ExtField _TokenBlock_16 = { "rightComment",52,8,kPointerType,"short",0,2,NULL,&_TokenBlock_17};
	VPL_ExtField _TokenBlock_15 = { "leftComment",44,8,kPointerType,"short",0,2,NULL,&_TokenBlock_16};
	VPL_ExtField _TokenBlock_14 = { "rightDelims",40,4,kPointerType,"short",0,2,NULL,&_TokenBlock_15};
	VPL_ExtField _TokenBlock_13 = { "leftDelims",36,4,kPointerType,"short",0,2,NULL,&_TokenBlock_14};
	VPL_ExtField _TokenBlock_12 = { "doNest",35,1,kUnsignedType,"short",0,2,"unsigned char",&_TokenBlock_13};
	VPL_ExtField _TokenBlock_11 = { "doAlphanumeric",34,1,kUnsignedType,"short",0,2,"unsigned char",&_TokenBlock_12};
	VPL_ExtField _TokenBlock_10 = { "doAppend",33,1,kUnsignedType,"short",0,2,"unsigned char",&_TokenBlock_11};
	VPL_ExtField _TokenBlock_9 = { "doString",32,1,kUnsignedType,"short",0,2,"unsigned char",&_TokenBlock_10};
	VPL_ExtField _TokenBlock_8 = { "stringCount",28,4,kIntType,"short",0,2,"long int",&_TokenBlock_9};
	VPL_ExtField _TokenBlock_7 = { "stringLength",24,4,kIntType,"short",0,2,"long int",&_TokenBlock_8};
	VPL_ExtField _TokenBlock_6 = { "stringList",20,4,kPointerType,"char",1,1,"T*",&_TokenBlock_7};
	VPL_ExtField _TokenBlock_5 = { "tokenCount",16,4,kIntType,"char",1,1,"long int",&_TokenBlock_6};
	VPL_ExtField _TokenBlock_4 = { "tokenLength",12,4,kIntType,"char",1,1,"long int",&_TokenBlock_5};
	VPL_ExtField _TokenBlock_3 = { "tokenList",8,4,kPointerType,"char",1,1,"T*",&_TokenBlock_4};
	VPL_ExtField _TokenBlock_2 = { "sourceLength",4,4,kIntType,"char",1,1,"long int",&_TokenBlock_3};
	VPL_ExtField _TokenBlock_1 = { "source",0,4,kPointerType,"char",1,1,"T*",&_TokenBlock_2};
	VPL_ExtStructure _TokenBlock_S = {"TokenBlock",&_TokenBlock_1};

	VPL_ExtField _TokenRec_4 = { "stringPosition",10,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _TokenRec_3 = { "length",6,4,kIntType,"unsigned char",1,1,"long int",&_TokenRec_4};
	VPL_ExtField _TokenRec_2 = { "position",2,4,kPointerType,"char",1,1,"T*",&_TokenRec_3};
	VPL_ExtField _TokenRec_1 = { "theToken",0,2,kIntType,"char",1,1,"short",&_TokenRec_2};
	VPL_ExtStructure _TokenRec_S = {"TokenRec",&_TokenRec_1};

	VPL_ExtField _ItlbExtRecord_16 = { "itlbAliasStyle",49,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _ItlbExtRecord_15 = { "itlbValidStyles",48,1,kUnsignedType,"NULL",0,0,"unsigned char",&_ItlbExtRecord_16};
	VPL_ExtField _ItlbExtRecord_14 = { "itlbHelpSize",46,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_15};
	VPL_ExtField _ItlbExtRecord_13 = { "itlbHelpFond",44,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_14};
	VPL_ExtField _ItlbExtRecord_12 = { "itlbAppSize",42,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_13};
	VPL_ExtField _ItlbExtRecord_11 = { "itlbAppFond",40,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_12};
	VPL_ExtField _ItlbExtRecord_10 = { "itlbSysSize",38,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_11};
	VPL_ExtField _ItlbExtRecord_9 = { "itlbSysFond",36,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_10};
	VPL_ExtField _ItlbExtRecord_8 = { "itlbSmallSize",34,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_9};
	VPL_ExtField _ItlbExtRecord_7 = { "itlbSmallFond",32,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_8};
	VPL_ExtField _ItlbExtRecord_6 = { "itlbPrefSize",30,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_7};
	VPL_ExtField _ItlbExtRecord_5 = { "itlbPrefFond",28,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_6};
	VPL_ExtField _ItlbExtRecord_4 = { "itlbMonoSize",26,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_5};
	VPL_ExtField _ItlbExtRecord_3 = { "itlbMonoFond",24,2,kIntType,"NULL",0,0,"short",&_ItlbExtRecord_4};
	VPL_ExtField _ItlbExtRecord_2 = { "itlbLocalSize",20,4,kIntType,"NULL",0,0,"long int",&_ItlbExtRecord_3};
	VPL_ExtField _ItlbExtRecord_1 = { "base",0,20,kStructureType,"NULL",0,0,"ItlbRecord",&_ItlbExtRecord_2};
	VPL_ExtStructure _ItlbExtRecord_S = {"ItlbExtRecord",&_ItlbExtRecord_1};

	VPL_ExtField _ItlbRecord_11 = { "itlbIcon",18,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ItlbRecord_10 = { "itlbKeys",16,2,kIntType,"NULL",0,0,"short",&_ItlbRecord_11};
	VPL_ExtField _ItlbRecord_9 = { "itlbDateRep",15,1,kIntType,"NULL",0,0,"signed char",&_ItlbRecord_10};
	VPL_ExtField _ItlbRecord_8 = { "itlbNumRep",14,1,kIntType,"NULL",0,0,"signed char",&_ItlbRecord_9};
	VPL_ExtField _ItlbRecord_7 = { "itlbLang",12,2,kIntType,"NULL",0,0,"short",&_ItlbRecord_8};
	VPL_ExtField _ItlbRecord_6 = { "itlbEncoding",10,2,kIntType,"NULL",0,0,"short",&_ItlbRecord_7};
	VPL_ExtField _ItlbRecord_5 = { "itlbToken",8,2,kIntType,"NULL",0,0,"short",&_ItlbRecord_6};
	VPL_ExtField _ItlbRecord_4 = { "itlbFlags",6,2,kIntType,"NULL",0,0,"short",&_ItlbRecord_5};
	VPL_ExtField _ItlbRecord_3 = { "itlbSort",4,2,kIntType,"NULL",0,0,"short",&_ItlbRecord_4};
	VPL_ExtField _ItlbRecord_2 = { "itlbDate",2,2,kIntType,"NULL",0,0,"short",&_ItlbRecord_3};
	VPL_ExtField _ItlbRecord_1 = { "itlbNumber",0,2,kIntType,"NULL",0,0,"short",&_ItlbRecord_2};
	VPL_ExtStructure _ItlbRecord_S = {"ItlbRecord",&_ItlbRecord_1};

	VPL_ExtField _ItlcRecord_12 = { "itlcReserved4",16,32,kPointerType,"signed char",0,1,NULL,NULL};
	VPL_ExtField _ItlcRecord_11 = { "itlcSysFlags",14,2,kIntType,"signed char",0,1,"short",&_ItlcRecord_12};
	VPL_ExtField _ItlcRecord_10 = { "itlcRegionCode",12,2,kIntType,"signed char",0,1,"short",&_ItlcRecord_11};
	VPL_ExtField _ItlcRecord_9 = { "itlcIconRsvd",11,1,kIntType,"signed char",0,1,"signed char",&_ItlcRecord_10};
	VPL_ExtField _ItlcRecord_8 = { "itlcIconSide",10,1,kIntType,"signed char",0,1,"signed char",&_ItlcRecord_9};
	VPL_ExtField _ItlcRecord_7 = { "itlcIconOffset",8,2,kIntType,"signed char",0,1,"short",&_ItlcRecord_8};
	VPL_ExtField _ItlcRecord_6 = { "itlcFlags",7,1,kIntType,"signed char",0,1,"signed char",&_ItlcRecord_7};
	VPL_ExtField _ItlcRecord_5 = { "itlcOldKybd",6,1,kIntType,"signed char",0,1,"signed char",&_ItlcRecord_6};
	VPL_ExtField _ItlcRecord_4 = { "itlcIntlForce",5,1,kIntType,"signed char",0,1,"signed char",&_ItlcRecord_5};
	VPL_ExtField _ItlcRecord_3 = { "itlcFontForce",4,1,kIntType,"signed char",0,1,"signed char",&_ItlcRecord_4};
	VPL_ExtField _ItlcRecord_2 = { "itlcReserved",2,2,kIntType,"signed char",0,1,"short",&_ItlcRecord_3};
	VPL_ExtField _ItlcRecord_1 = { "itlcSystem",0,2,kIntType,"signed char",0,1,"short",&_ItlcRecord_2};
	VPL_ExtStructure _ItlcRecord_S = {"ItlcRecord",&_ItlcRecord_1};

	VPL_ExtField _RuleBasedTrslRecord_5 = { "numberOfRules",8,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _RuleBasedTrslRecord_4 = { "propertyFlag",6,2,kIntType,"NULL",0,0,"short",&_RuleBasedTrslRecord_5};
	VPL_ExtField _RuleBasedTrslRecord_3 = { "formatNumber",4,2,kIntType,"NULL",0,0,"short",&_RuleBasedTrslRecord_4};
	VPL_ExtField _RuleBasedTrslRecord_2 = { "targetType",2,2,kIntType,"NULL",0,0,"short",&_RuleBasedTrslRecord_3};
	VPL_ExtField _RuleBasedTrslRecord_1 = { "sourceType",0,2,kIntType,"NULL",0,0,"short",&_RuleBasedTrslRecord_2};
	VPL_ExtStructure _RuleBasedTrslRecord_S = {"RuleBasedTrslRecord",&_RuleBasedTrslRecord_1};

	VPL_ExtField _Itl5Record_4 = { "tableDirectory",12,16,kPointerType,"TableDirectoryRecord",0,16,NULL,NULL};
	VPL_ExtField _Itl5Record_3 = { "reserved",6,6,kPointerType,"unsigned short",0,2,NULL,&_Itl5Record_4};
	VPL_ExtField _Itl5Record_2 = { "numberOfTables",4,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_Itl5Record_3};
	VPL_ExtField _Itl5Record_1 = { "versionNumber",0,4,kIntType,"unsigned short",0,2,"long int",&_Itl5Record_2};
	VPL_ExtStructure _Itl5Record_S = {"Itl5Record",&_Itl5Record_1};

	VPL_ExtField _TableDirectoryRecord_4 = { "tableSize",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TableDirectoryRecord_3 = { "tableStartOffset",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TableDirectoryRecord_4};
	VPL_ExtField _TableDirectoryRecord_2 = { "reserved",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TableDirectoryRecord_3};
	VPL_ExtField _TableDirectoryRecord_1 = { "tableSignature",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TableDirectoryRecord_2};
	VPL_ExtStructure _TableDirectoryRecord_S = {"TableDirectoryRecord",&_TableDirectoryRecord_1};

	VPL_ExtField _NItl4Rec_24 = { "resLength8",66,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _NItl4Rec_23 = { "resLength7",64,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_24};
	VPL_ExtField _NItl4Rec_22 = { "whtSpListLength",62,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_23};
	VPL_ExtField _NItl4Rec_21 = { "defPartsLength",60,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_22};
	VPL_ExtField _NItl4Rec_20 = { "unTokenLength",58,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_21};
	VPL_ExtField _NItl4Rec_19 = { "resLength3",56,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_20};
	VPL_ExtField _NItl4Rec_18 = { "resLength2",54,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_19};
	VPL_ExtField _NItl4Rec_17 = { "resLength1",52,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_18};
	VPL_ExtField _NItl4Rec_16 = { "resOffset8",48,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_17};
	VPL_ExtField _NItl4Rec_15 = { "resOffset7",44,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_16};
	VPL_ExtField _NItl4Rec_14 = { "whtSpListOffset",40,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_15};
	VPL_ExtField _NItl4Rec_13 = { "defPartsOffset",36,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_14};
	VPL_ExtField _NItl4Rec_12 = { "unTokenOffset",32,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_13};
	VPL_ExtField _NItl4Rec_11 = { "fetchOffset",28,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_12};
	VPL_ExtField _NItl4Rec_10 = { "strOffset",24,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_11};
	VPL_ExtField _NItl4Rec_9 = { "mapOffset",20,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_10};
	VPL_ExtField _NItl4Rec_8 = { "numTables",18,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_9};
	VPL_ExtField _NItl4Rec_7 = { "resHeader2",14,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_8};
	VPL_ExtField _NItl4Rec_6 = { "resHeader",12,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_7};
	VPL_ExtField _NItl4Rec_5 = { "format",10,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_6};
	VPL_ExtField _NItl4Rec_4 = { "version",8,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_5};
	VPL_ExtField _NItl4Rec_3 = { "resourceNum",6,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_4};
	VPL_ExtField _NItl4Rec_2 = { "resourceType",2,4,kIntType,"NULL",0,0,"long int",&_NItl4Rec_3};
	VPL_ExtField _NItl4Rec_1 = { "flags",0,2,kIntType,"NULL",0,0,"short",&_NItl4Rec_2};
	VPL_ExtStructure _NItl4Rec_S = {"NItl4Rec",&_NItl4Rec_1};

	VPL_ExtField _Itl4Rec_15 = { "resOffset8",48,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _Itl4Rec_14 = { "resOffset7",44,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_15};
	VPL_ExtField _Itl4Rec_13 = { "resOffset6",40,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_14};
	VPL_ExtField _Itl4Rec_12 = { "defPartsOffset",36,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_13};
	VPL_ExtField _Itl4Rec_11 = { "unTokenOffset",32,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_12};
	VPL_ExtField _Itl4Rec_10 = { "fetchOffset",28,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_11};
	VPL_ExtField _Itl4Rec_9 = { "strOffset",24,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_10};
	VPL_ExtField _Itl4Rec_8 = { "mapOffset",20,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_9};
	VPL_ExtField _Itl4Rec_7 = { "numTables",18,2,kIntType,"NULL",0,0,"short",&_Itl4Rec_8};
	VPL_ExtField _Itl4Rec_6 = { "resHeader2",14,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_7};
	VPL_ExtField _Itl4Rec_5 = { "resHeader1",10,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_6};
	VPL_ExtField _Itl4Rec_4 = { "version",8,2,kIntType,"NULL",0,0,"short",&_Itl4Rec_5};
	VPL_ExtField _Itl4Rec_3 = { "resourceNum",6,2,kIntType,"NULL",0,0,"short",&_Itl4Rec_4};
	VPL_ExtField _Itl4Rec_2 = { "resourceType",2,4,kIntType,"NULL",0,0,"long int",&_Itl4Rec_3};
	VPL_ExtField _Itl4Rec_1 = { "flags",0,2,kIntType,"NULL",0,0,"short",&_Itl4Rec_2};
	VPL_ExtStructure _Itl4Rec_S = {"Itl4Rec",&_Itl4Rec_1};

	VPL_ExtField _NumberParts_7 = { "reserved",152,20,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _NumberParts_6 = { "altNumTable",130,22,kStructureType,"char",0,1,"WideCharArr",&_NumberParts_7};
	VPL_ExtField _NumberParts_5 = { "peMinusPlus",108,22,kStructureType,"char",0,1,"WideCharArr",&_NumberParts_6};
	VPL_ExtField _NumberParts_4 = { "peMinus",86,22,kStructureType,"char",0,1,"WideCharArr",&_NumberParts_5};
	VPL_ExtField _NumberParts_3 = { "pePlus",64,22,kStructureType,"char",0,1,"WideCharArr",&_NumberParts_4};
	VPL_ExtField _NumberParts_2 = { "data",2,62,kPointerType,"WideChar",0,2,NULL,&_NumberParts_3};
	VPL_ExtField _NumberParts_1 = { "version",0,2,kIntType,"WideChar",0,2,"short",&_NumberParts_2};
	VPL_ExtStructure _NumberParts_S = {"NumberParts",&_NumberParts_1};

	VPL_ExtField _WideCharArr_2 = { "data",2,20,kPointerType,"WideChar",0,2,NULL,NULL};
	VPL_ExtField _WideCharArr_1 = { "size",0,2,kIntType,"WideChar",0,2,"short",&_WideCharArr_2};
	VPL_ExtStructure _WideCharArr_S = {"WideCharArr",&_WideCharArr_1};

	VPL_ExtField _UntokenTable_3 = { "index",4,512,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _UntokenTable_2 = { "lastToken",2,2,kIntType,"short",0,2,"short",&_UntokenTable_3};
	VPL_ExtField _UntokenTable_1 = { "len",0,2,kIntType,"short",0,2,"short",&_UntokenTable_2};
	VPL_ExtStructure _UntokenTable_S = {"UntokenTable",&_UntokenTable_1};

	VPL_ExtField _Itl1ExtRec_15 = { "tables",378,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _Itl1ExtRec_14 = { "extraSepsTableLength",374,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_15};
	VPL_ExtField _Itl1ExtRec_13 = { "extraSepsTableOffset",370,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_14};
	VPL_ExtField _Itl1ExtRec_12 = { "abbrevMonthsTableLength",366,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_13};
	VPL_ExtField _Itl1ExtRec_11 = { "abbrevMonthsTableOffset",362,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_12};
	VPL_ExtField _Itl1ExtRec_10 = { "abbrevDaysTableLength",358,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_11};
	VPL_ExtField _Itl1ExtRec_9 = { "abbrevDaysTableOffset",354,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_10};
	VPL_ExtField _Itl1ExtRec_8 = { "extraMonthsTableLength",350,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_9};
	VPL_ExtField _Itl1ExtRec_7 = { "extraMonthsTableOffset",346,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_8};
	VPL_ExtField _Itl1ExtRec_6 = { "extraDaysTableLength",342,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_7};
	VPL_ExtField _Itl1ExtRec_5 = { "extraDaysTableOffset",338,4,kIntType,"short",0,2,"long int",&_Itl1ExtRec_6};
	VPL_ExtField _Itl1ExtRec_4 = { "calendarCode",336,2,kIntType,"short",0,2,"short",&_Itl1ExtRec_5};
	VPL_ExtField _Itl1ExtRec_3 = { "format",334,2,kIntType,"short",0,2,"short",&_Itl1ExtRec_4};
	VPL_ExtField _Itl1ExtRec_2 = { "version",332,2,kIntType,"short",0,2,"short",&_Itl1ExtRec_3};
	VPL_ExtField _Itl1ExtRec_1 = { "base",0,332,kStructureType,"short",0,2,"Intl1Rec",&_Itl1ExtRec_2};
	VPL_ExtStructure _Itl1ExtRec_S = {"Itl1ExtRec",&_Itl1ExtRec_1};

	VPL_ExtField _Intl1Rec_13 = { "localRtn",330,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _Intl1Rec_12 = { "intl1Vers",328,2,kIntType,"short",0,2,"short",&_Intl1Rec_13};
	VPL_ExtField _Intl1Rec_11 = { "st4",324,4,kPointerType,"char",0,1,NULL,&_Intl1Rec_12};
	VPL_ExtField _Intl1Rec_10 = { "st3",320,4,kPointerType,"char",0,1,NULL,&_Intl1Rec_11};
	VPL_ExtField _Intl1Rec_9 = { "st2",316,4,kPointerType,"char",0,1,NULL,&_Intl1Rec_10};
	VPL_ExtField _Intl1Rec_8 = { "st1",312,4,kPointerType,"char",0,1,NULL,&_Intl1Rec_9};
	VPL_ExtField _Intl1Rec_7 = { "st0",308,4,kPointerType,"char",0,1,NULL,&_Intl1Rec_8};
	VPL_ExtField _Intl1Rec_6 = { "abbrLen",307,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl1Rec_7};
	VPL_ExtField _Intl1Rec_5 = { "dayLeading0",306,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl1Rec_6};
	VPL_ExtField _Intl1Rec_4 = { "lngDateFmt",305,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl1Rec_5};
	VPL_ExtField _Intl1Rec_3 = { "suppressDay",304,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl1Rec_4};
	VPL_ExtField _Intl1Rec_2 = { "months",112,192,kPointerType,"unsigned char",1,1,NULL,&_Intl1Rec_3};
	VPL_ExtField _Intl1Rec_1 = { "days",0,112,kPointerType,"unsigned char",1,1,NULL,&_Intl1Rec_2};
	VPL_ExtStructure _Intl1Rec_S = {"Intl1Rec",&_Intl1Rec_1};

	VPL_ExtField _Intl0Rec_25 = { "intl0Vers",30,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _Intl0Rec_24 = { "metricSys",29,1,kUnsignedType,"NULL",0,0,"unsigned char",&_Intl0Rec_25};
	VPL_ExtField _Intl0Rec_23 = { "time8Suff",28,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_24};
	VPL_ExtField _Intl0Rec_22 = { "time7Suff",27,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_23};
	VPL_ExtField _Intl0Rec_21 = { "time6Suff",26,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_22};
	VPL_ExtField _Intl0Rec_20 = { "time5Suff",25,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_21};
	VPL_ExtField _Intl0Rec_19 = { "time4Suff",24,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_20};
	VPL_ExtField _Intl0Rec_18 = { "time3Suff",23,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_19};
	VPL_ExtField _Intl0Rec_17 = { "time2Suff",22,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_18};
	VPL_ExtField _Intl0Rec_16 = { "time1Suff",21,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_17};
	VPL_ExtField _Intl0Rec_15 = { "timeSep",20,1,kIntType,"NULL",0,0,"char",&_Intl0Rec_16};
	VPL_ExtField _Intl0Rec_14 = { "eveStr",16,4,kPointerType,"char",0,1,NULL,&_Intl0Rec_15};
	VPL_ExtField _Intl0Rec_13 = { "mornStr",12,4,kPointerType,"char",0,1,NULL,&_Intl0Rec_14};
	VPL_ExtField _Intl0Rec_12 = { "timeFmt",11,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl0Rec_13};
	VPL_ExtField _Intl0Rec_11 = { "timeCycle",10,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl0Rec_12};
	VPL_ExtField _Intl0Rec_10 = { "dateSep",9,1,kIntType,"char",0,1,"char",&_Intl0Rec_11};
	VPL_ExtField _Intl0Rec_9 = { "shrtDateFmt",8,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl0Rec_10};
	VPL_ExtField _Intl0Rec_8 = { "dateOrder",7,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl0Rec_9};
	VPL_ExtField _Intl0Rec_7 = { "currFmt",6,1,kUnsignedType,"char",0,1,"unsigned char",&_Intl0Rec_8};
	VPL_ExtField _Intl0Rec_6 = { "currSym3",5,1,kIntType,"char",0,1,"char",&_Intl0Rec_7};
	VPL_ExtField _Intl0Rec_5 = { "currSym2",4,1,kIntType,"char",0,1,"char",&_Intl0Rec_6};
	VPL_ExtField _Intl0Rec_4 = { "currSym1",3,1,kIntType,"char",0,1,"char",&_Intl0Rec_5};
	VPL_ExtField _Intl0Rec_3 = { "listSep",2,1,kIntType,"char",0,1,"char",&_Intl0Rec_4};
	VPL_ExtField _Intl0Rec_2 = { "thousSep",1,1,kIntType,"char",0,1,"char",&_Intl0Rec_3};
	VPL_ExtField _Intl0Rec_1 = { "decimalPt",0,1,kIntType,"char",0,1,"char",&_Intl0Rec_2};
	VPL_ExtStructure _Intl0Rec_S = {"Intl0Rec",&_Intl0Rec_1};

	VPL_ExtField _OffPair_2 = { "offSecond",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _OffPair_1 = { "offFirst",0,2,kIntType,"NULL",0,0,"short",&_OffPair_2};
	VPL_ExtStructure _OffPair_S = {"OffPair",&_OffPair_1};

	VPL_ExtStructure ___CFUserNotification_S = {"__CFUserNotification",NULL};

	VPL_ExtStructure ___CFWriteStream_S = {"__CFWriteStream",NULL};

	VPL_ExtStructure ___CFReadStream_S = {"__CFReadStream",NULL};

	VPL_ExtField _436_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _436_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_436_5};
	VPL_ExtField _436_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_436_4};
	VPL_ExtField _436_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_436_3};
	VPL_ExtField _436_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_436_2};
	VPL_ExtStructure _436_S = {"436",&_436_1};

	VPL_ExtField _434_2 = { "error",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _434_1 = { "domain",0,4,kEnumType,"NULL",0,0,"433",&_434_2};
	VPL_ExtStructure _434_S = {"434",&_434_1};

	VPL_ExtStructure ___CFNotificationCenter_S = {"__CFNotificationCenter",NULL};

	VPL_ExtField _430_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _430_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_430_5};
	VPL_ExtField _430_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_430_4};
	VPL_ExtField _430_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_430_3};
	VPL_ExtField _430_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_430_2};
	VPL_ExtStructure _430_S = {"430",&_430_1};

	VPL_ExtField _428_4 = { "address",12,4,kPointerType,"__CFData",1,0,"T*",NULL};
	VPL_ExtField _428_3 = { "protocol",8,4,kIntType,"__CFData",1,0,"long int",&_428_4};
	VPL_ExtField _428_2 = { "socketType",4,4,kIntType,"__CFData",1,0,"long int",&_428_3};
	VPL_ExtField _428_1 = { "protocolFamily",0,4,kIntType,"__CFData",1,0,"long int",&_428_2};
	VPL_ExtStructure _428_S = {"428",&_428_1};

	VPL_ExtStructure ___CFSocket_S = {"__CFSocket",NULL};

	VPL_ExtField _426_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _426_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_426_5};
	VPL_ExtField _426_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_426_4};
	VPL_ExtField _426_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_426_3};
	VPL_ExtField _426_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_426_2};
	VPL_ExtStructure _426_S = {"426",&_426_1};

	VPL_ExtStructure ___CFMessagePort_S = {"__CFMessagePort",NULL};

	VPL_ExtField _424_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _424_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_424_5};
	VPL_ExtField _424_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_424_4};
	VPL_ExtField _424_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_424_3};
	VPL_ExtField _424_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_424_2};
	VPL_ExtStructure _424_S = {"424",&_424_1};

	VPL_ExtStructure ___CFMachPort_S = {"__CFMachPort",NULL};

	VPL_ExtField _423_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _423_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_423_5};
	VPL_ExtField _423_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_423_4};
	VPL_ExtField _423_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_423_3};
	VPL_ExtField _423_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_423_2};
	VPL_ExtStructure _423_S = {"423",&_423_1};

	VPL_ExtField _422_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _422_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_422_5};
	VPL_ExtField _422_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_422_4};
	VPL_ExtField _422_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_422_3};
	VPL_ExtField _422_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_422_2};
	VPL_ExtStructure _422_S = {"422",&_422_1};

	VPL_ExtField _421_9 = { "perform",32,4,kPointerType,"void",2,0,"T*",NULL};
	VPL_ExtField _421_8 = { "getPort",28,4,kPointerType,"unsigned int",1,4,"T*",&_421_9};
	VPL_ExtField _421_7 = { "hash",24,4,kPointerType,"unsigned long",1,4,"T*",&_421_8};
	VPL_ExtField _421_6 = { "equal",20,4,kPointerType,"unsigned char",1,1,"T*",&_421_7};
	VPL_ExtField _421_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",&_421_6};
	VPL_ExtField _421_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_421_5};
	VPL_ExtField _421_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_421_4};
	VPL_ExtField _421_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_421_3};
	VPL_ExtField _421_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_421_2};
	VPL_ExtStructure _421_S = {"421",&_421_1};

	VPL_ExtField _420_10 = { "perform",36,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _420_9 = { "cancel",32,4,kPointerType,"void",1,0,"T*",&_420_10};
	VPL_ExtField _420_8 = { "schedule",28,4,kPointerType,"void",1,0,"T*",&_420_9};
	VPL_ExtField _420_7 = { "hash",24,4,kPointerType,"unsigned long",1,4,"T*",&_420_8};
	VPL_ExtField _420_6 = { "equal",20,4,kPointerType,"unsigned char",1,1,"T*",&_420_7};
	VPL_ExtField _420_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",&_420_6};
	VPL_ExtField _420_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_420_5};
	VPL_ExtField _420_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_420_4};
	VPL_ExtField _420_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_420_3};
	VPL_ExtField _420_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_420_2};
	VPL_ExtStructure _420_S = {"420",&_420_1};

	VPL_ExtStructure ___CFRunLoopTimer_S = {"__CFRunLoopTimer",NULL};

	VPL_ExtStructure ___CFRunLoopObserver_S = {"__CFRunLoopObserver",NULL};

	VPL_ExtStructure ___CFRunLoopSource_S = {"__CFRunLoopSource",NULL};

	VPL_ExtStructure ___CFRunLoop_S = {"__CFRunLoop",NULL};

	VPL_ExtField _mach_port_qos_4 = { "len",4,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _mach_port_qos_3 = { "pad1",0,4,kIntType,"NULL",0,0,"int",&_mach_port_qos_4};
	VPL_ExtField _mach_port_qos_2 = { "prealloc",0,4,kIntType,"NULL",0,0,"int",&_mach_port_qos_3};
	VPL_ExtField _mach_port_qos_1 = { "name",0,4,kIntType,"NULL",0,0,"int",&_mach_port_qos_2};
	VPL_ExtStructure _mach_port_qos_S = {"mach_port_qos",&_mach_port_qos_1};

	VPL_ExtField _mach_port_limits_1 = { "mpl_qlimit",0,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtStructure _mach_port_limits_S = {"mach_port_limits",&_mach_port_limits_1};

	VPL_ExtField _mach_port_status_10 = { "mps_flags",36,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _mach_port_status_9 = { "mps_nsrequest",32,4,kIntType,"NULL",0,0,"int",&_mach_port_status_10};
	VPL_ExtField _mach_port_status_8 = { "mps_pdrequest",28,4,kIntType,"NULL",0,0,"int",&_mach_port_status_9};
	VPL_ExtField _mach_port_status_7 = { "mps_srights",24,4,kIntType,"NULL",0,0,"int",&_mach_port_status_8};
	VPL_ExtField _mach_port_status_6 = { "mps_sorights",20,4,kUnsignedType,"NULL",0,0,"unsigned int",&_mach_port_status_7};
	VPL_ExtField _mach_port_status_5 = { "mps_msgcount",16,4,kUnsignedType,"NULL",0,0,"unsigned int",&_mach_port_status_6};
	VPL_ExtField _mach_port_status_4 = { "mps_qlimit",12,4,kUnsignedType,"NULL",0,0,"unsigned int",&_mach_port_status_5};
	VPL_ExtField _mach_port_status_3 = { "mps_mscount",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_mach_port_status_4};
	VPL_ExtField _mach_port_status_2 = { "mps_seqno",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_mach_port_status_3};
	VPL_ExtField _mach_port_status_1 = { "mps_pset",0,4,kUnsignedType,"NULL",0,0,"unsigned int",&_mach_port_status_2};
	VPL_ExtStructure _mach_port_status_S = {"mach_port_status",&_mach_port_status_1};

	VPL_ExtStructure ___CFPlugInInstance_S = {"__CFPlugInInstance",NULL};

	VPL_ExtField _416_16 = { "byte15",15,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _416_15 = { "byte14",14,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_16};
	VPL_ExtField _416_14 = { "byte13",13,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_15};
	VPL_ExtField _416_13 = { "byte12",12,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_14};
	VPL_ExtField _416_12 = { "byte11",11,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_13};
	VPL_ExtField _416_11 = { "byte10",10,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_12};
	VPL_ExtField _416_10 = { "byte9",9,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_11};
	VPL_ExtField _416_9 = { "byte8",8,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_10};
	VPL_ExtField _416_8 = { "byte7",7,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_9};
	VPL_ExtField _416_7 = { "byte6",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_8};
	VPL_ExtField _416_6 = { "byte5",5,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_7};
	VPL_ExtField _416_5 = { "byte4",4,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_6};
	VPL_ExtField _416_4 = { "byte3",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_5};
	VPL_ExtField _416_3 = { "byte2",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_4};
	VPL_ExtField _416_2 = { "byte1",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_3};
	VPL_ExtField _416_1 = { "byte0",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_416_2};
	VPL_ExtStructure _416_S = {"416",&_416_1};

	VPL_ExtStructure ___CFUUID_S = {"__CFUUID",NULL};

	VPL_ExtField _403_1 = { "v",0,8,kUnsignedType,"NULL",0,0,"unsigned long long",NULL};
	VPL_ExtStructure _403_S = {"403",&_403_1};

	VPL_ExtField _402_1 = { "v",0,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtStructure _402_S = {"402",&_402_1};

	VPL_ExtStructure ___CFBundle_S = {"__CFBundle",NULL};

	VPL_ExtStructure ___CFBitVector_S = {"__CFBitVector",NULL};

	VPL_ExtStructure ___CFBinaryHeap_S = {"__CFBinaryHeap",NULL};

	VPL_ExtField _378_5 = { "compare",16,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _378_4 = { "copyDescription",12,4,kPointerType,"__CFString",2,0,"T*",&_378_5};
	VPL_ExtField _378_3 = { "release",8,4,kPointerType,"void",1,0,"T*",&_378_4};
	VPL_ExtField _378_2 = { "retain",4,4,kPointerType,"void",2,0,"T*",&_378_3};
	VPL_ExtField _378_1 = { "version",0,4,kIntType,"void",2,0,"long int",&_378_2};
	VPL_ExtStructure _378_S = {"378",&_378_1};

	VPL_ExtField _377_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _377_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_377_5};
	VPL_ExtField _377_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_377_4};
	VPL_ExtField _377_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_377_3};
	VPL_ExtField _377_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_377_2};
	VPL_ExtStructure _377_S = {"377",&_377_1};

	VPL_ExtField _tm_11 = { "tm_zone",40,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _tm_10 = { "tm_gmtoff",36,4,kIntType,"char",1,1,"long int",&_tm_11};
	VPL_ExtField _tm_9 = { "tm_isdst",32,4,kIntType,"char",1,1,"int",&_tm_10};
	VPL_ExtField _tm_8 = { "tm_yday",28,4,kIntType,"char",1,1,"int",&_tm_9};
	VPL_ExtField _tm_7 = { "tm_wday",24,4,kIntType,"char",1,1,"int",&_tm_8};
	VPL_ExtField _tm_6 = { "tm_year",20,4,kIntType,"char",1,1,"int",&_tm_7};
	VPL_ExtField _tm_5 = { "tm_mon",16,4,kIntType,"char",1,1,"int",&_tm_6};
	VPL_ExtField _tm_4 = { "tm_mday",12,4,kIntType,"char",1,1,"int",&_tm_5};
	VPL_ExtField _tm_3 = { "tm_hour",8,4,kIntType,"char",1,1,"int",&_tm_4};
	VPL_ExtField _tm_2 = { "tm_min",4,4,kIntType,"char",1,1,"int",&_tm_3};
	VPL_ExtField _tm_1 = { "tm_sec",0,4,kIntType,"char",1,1,"int",&_tm_2};
	VPL_ExtStructure _tm_S = {"tm",&_tm_1};

	VPL_ExtField _376_2 = { "rem",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _376_1 = { "quot",0,4,kIntType,"NULL",0,0,"long int",&_376_2};
	VPL_ExtStructure _376_S = {"376",&_376_1};

	VPL_ExtField _375_2 = { "rem",4,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _375_1 = { "quot",0,4,kIntType,"NULL",0,0,"int",&_375_2};
	VPL_ExtStructure _375_S = {"375",&_375_1};

	VPL_ExtField ___sFILE_20 = { "_offset",80,8,kIntType,"NULL",0,0,"long long int",NULL};
	VPL_ExtField ___sFILE_19 = { "_blksize",76,4,kIntType,"NULL",0,0,"int",&___sFILE_20};
	VPL_ExtField ___sFILE_18 = { "_lb",68,8,kStructureType,"NULL",0,0,"__sbuf",&___sFILE_19};
	VPL_ExtField ___sFILE_17 = { "_nbuf",67,1,kPointerType,"unsigned char",0,1,NULL,&___sFILE_18};
	VPL_ExtField ___sFILE_16 = { "_ubuf",64,3,kPointerType,"unsigned char",0,1,NULL,&___sFILE_17};
	VPL_ExtField ___sFILE_15 = { "_ur",60,4,kIntType,"unsigned char",0,1,"int",&___sFILE_16};
	VPL_ExtField ___sFILE_14 = { "_up",56,4,kPointerType,"unsigned char",1,1,"T*",&___sFILE_15};
	VPL_ExtField ___sFILE_13 = { "_ub",48,8,kStructureType,"unsigned char",1,1,"__sbuf",&___sFILE_14};
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

	VPL_ExtField ___sbuf_2 = { "_size",4,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField ___sbuf_1 = { "_base",0,4,kPointerType,"unsigned char",1,1,"T*",&___sbuf_2};
	VPL_ExtStructure ___sbuf_S = {"__sbuf",&___sbuf_1};

	VPL_ExtField _sigstack_2 = { "ss_onstack",4,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _sigstack_1 = { "ss_sp",0,4,kPointerType,"char",1,1,"T*",&_sigstack_2};
	VPL_ExtStructure _sigstack_S = {"sigstack",&_sigstack_1};

	VPL_ExtField _sigvec_3 = { "sv_flags",8,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _sigvec_2 = { "sv_mask",4,4,kIntType,"NULL",0,0,"int",&_sigvec_3};
	VPL_ExtField _sigvec_1 = { "sv_handler",0,4,kPointerType,"void",1,0,"T*",&_sigvec_2};
	VPL_ExtStructure _sigvec_S = {"sigvec",&_sigvec_1};

	VPL_ExtField _sigaltstack_3 = { "ss_flags",8,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _sigaltstack_2 = { "ss_size",4,4,kIntType,"NULL",0,0,"int",&_sigaltstack_3};
	VPL_ExtField _sigaltstack_1 = { "ss_sp",0,4,kPointerType,"char",1,1,"T*",&_sigaltstack_2};
	VPL_ExtStructure _sigaltstack_S = {"sigaltstack",&_sigaltstack_1};

	VPL_ExtField _sigaction_3 = { "sa_flags",8,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _sigaction_2 = { "sa_mask",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_sigaction_3};
	VPL_ExtField _sigaction_1 = { "sa_handler",0,4,kPointerType,"void",1,0,"T*",&_sigaction_2};
	VPL_ExtStructure _sigaction_S = {"sigaction",&_sigaction_1};

	VPL_ExtField _370_2 = { "opaque",4,4,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _370_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&_370_2};
	VPL_ExtStructure _370_S = {"370",&_370_1};

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

	VPL_ExtField __jmp_buf_3 = { "vreg",28,512,kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField __jmp_buf_2 = { "vmask",24,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&__jmp_buf_3};
	VPL_ExtField __jmp_buf_1 = { "sigcontext",0,24,kStructureType,"unsigned long",0,4,"sigcontext",&__jmp_buf_2};
	VPL_ExtStructure __jmp_buf_S = {"_jmp_buf",&__jmp_buf_1};

	VPL_ExtField _sigcontext_6 = { "sc_regs",20,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _sigcontext_5 = { "sc_sp",16,4,kIntType,"void",1,0,"int",&_sigcontext_6};
	VPL_ExtField _sigcontext_4 = { "sc_psw",12,4,kIntType,"void",1,0,"int",&_sigcontext_5};
	VPL_ExtField _sigcontext_3 = { "sc_ir",8,4,kIntType,"void",1,0,"int",&_sigcontext_4};
	VPL_ExtField _sigcontext_2 = { "sc_mask",4,4,kIntType,"void",1,0,"int",&_sigcontext_3};
	VPL_ExtField _sigcontext_1 = { "sc_onstack",0,4,kIntType,"void",1,0,"int",&_sigcontext_2};
	VPL_ExtStructure _sigcontext_S = {"sigcontext",&_sigcontext_1};

	VPL_ExtField _exception_5 = { "retval",24,8,kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _exception_4 = { "arg2",16,8,kFloatType,"NULL",0,0,"double",&_exception_5};
	VPL_ExtField _exception_3 = { "arg1",8,8,kFloatType,"NULL",0,0,"double",&_exception_4};
	VPL_ExtField _exception_2 = { "name",4,4,kPointerType,"char",1,1,"T*",&_exception_3};
	VPL_ExtField _exception_1 = { "type",0,4,kIntType,"char",1,1,"int",&_exception_2};
	VPL_ExtStructure _exception_S = {"exception",&_exception_1};

	VPL_ExtField _lconv_18 = { "n_sign_posn",47,1,kIntType,"NULL",0,0,"char",NULL};
	VPL_ExtField _lconv_17 = { "p_sign_posn",46,1,kIntType,"NULL",0,0,"char",&_lconv_18};
	VPL_ExtField _lconv_16 = { "n_sep_by_space",45,1,kIntType,"NULL",0,0,"char",&_lconv_17};
	VPL_ExtField _lconv_15 = { "n_cs_precedes",44,1,kIntType,"NULL",0,0,"char",&_lconv_16};
	VPL_ExtField _lconv_14 = { "p_sep_by_space",43,1,kIntType,"NULL",0,0,"char",&_lconv_15};
	VPL_ExtField _lconv_13 = { "p_cs_precedes",42,1,kIntType,"NULL",0,0,"char",&_lconv_14};
	VPL_ExtField _lconv_12 = { "frac_digits",41,1,kIntType,"NULL",0,0,"char",&_lconv_13};
	VPL_ExtField _lconv_11 = { "int_frac_digits",40,1,kIntType,"NULL",0,0,"char",&_lconv_12};
	VPL_ExtField _lconv_10 = { "negative_sign",36,4,kPointerType,"char",1,1,"T*",&_lconv_11};
	VPL_ExtField _lconv_9 = { "positive_sign",32,4,kPointerType,"char",1,1,"T*",&_lconv_10};
	VPL_ExtField _lconv_8 = { "mon_grouping",28,4,kPointerType,"char",1,1,"T*",&_lconv_9};
	VPL_ExtField _lconv_7 = { "mon_thousands_sep",24,4,kPointerType,"char",1,1,"T*",&_lconv_8};
	VPL_ExtField _lconv_6 = { "mon_decimal_point",20,4,kPointerType,"char",1,1,"T*",&_lconv_7};
	VPL_ExtField _lconv_5 = { "currency_symbol",16,4,kPointerType,"char",1,1,"T*",&_lconv_6};
	VPL_ExtField _lconv_4 = { "int_curr_symbol",12,4,kPointerType,"char",1,1,"T*",&_lconv_5};
	VPL_ExtField _lconv_3 = { "grouping",8,4,kPointerType,"char",1,1,"T*",&_lconv_4};
	VPL_ExtField _lconv_2 = { "thousands_sep",4,4,kPointerType,"char",1,1,"T*",&_lconv_3};
	VPL_ExtField _lconv_1 = { "decimal_point",0,4,kPointerType,"char",1,1,"T*",&_lconv_2};
	VPL_ExtStructure _lconv_S = {"lconv",&_lconv_1};

	VPL_ExtField _345_13 = { "variable_len",3152,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _345_12 = { "variable",3148,4,kPointerType,"void",1,0,"T*",&_345_13};
	VPL_ExtField _345_11 = { "mapupper_ext",3140,8,kStructureType,"void",1,0,"344",&_345_12};
	VPL_ExtField _345_10 = { "maplower_ext",3132,8,kStructureType,"void",1,0,"344",&_345_11};
	VPL_ExtField _345_9 = { "runetype_ext",3124,8,kStructureType,"void",1,0,"344",&_345_10};
	VPL_ExtField _345_8 = { "mapupper",2100,1024,kPointerType,"int",0,4,NULL,&_345_9};
	VPL_ExtField _345_7 = { "maplower",1076,1024,kPointerType,"int",0,4,NULL,&_345_8};
	VPL_ExtField _345_6 = { "runetype",52,1024,kPointerType,"unsigned long",0,4,NULL,&_345_7};
	VPL_ExtField _345_5 = { "invalid_rune",48,4,kIntType,"unsigned long",0,4,"int",&_345_6};
	VPL_ExtField _345_4 = { "sputrune",44,4,kPointerType,"int",1,4,"T*",&_345_5};
	VPL_ExtField _345_3 = { "sgetrune",40,4,kPointerType,"int",1,4,"T*",&_345_4};
	VPL_ExtField _345_2 = { "encoding",8,32,kPointerType,"char",0,1,NULL,&_345_3};
	VPL_ExtField _345_1 = { "magic",0,8,kPointerType,"char",0,1,NULL,&_345_2};
	VPL_ExtStructure _345_S = {"345",&_345_1};

	VPL_ExtField _344_2 = { "ranges",4,4,kPointerType,"343",1,16,"T*",NULL};
	VPL_ExtField _344_1 = { "nranges",0,4,kIntType,"343",1,16,"int",&_344_2};
	VPL_ExtStructure _344_S = {"344",&_344_1};

	VPL_ExtField _343_4 = { "types",12,4,kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _343_3 = { "map",8,4,kIntType,"unsigned long",1,4,"int",&_343_4};
	VPL_ExtField _343_2 = { "max",4,4,kIntType,"unsigned long",1,4,"int",&_343_3};
	VPL_ExtField _343_1 = { "min",0,4,kIntType,"unsigned long",1,4,"int",&_343_2};
	VPL_ExtStructure _343_S = {"343",&_343_1};

	VPL_ExtField _342_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _342_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_342_5};
	VPL_ExtField _342_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_342_4};
	VPL_ExtField _342_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_342_3};
	VPL_ExtField _342_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_342_2};
	VPL_ExtStructure _342_S = {"342",&_342_1};

	VPL_ExtField _341_6 = { "handleError",20,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _341_5 = { "resolveExternalEntity",16,4,kPointerType,"__CFData",2,0,"T*",&_341_6};
	VPL_ExtField _341_4 = { "endXMLStructure",12,4,kPointerType,"void",1,0,"T*",&_341_5};
	VPL_ExtField _341_3 = { "addChild",8,4,kPointerType,"void",1,0,"T*",&_341_4};
	VPL_ExtField _341_2 = { "createXMLStructure",4,4,kPointerType,"void",2,0,"T*",&_341_3};
	VPL_ExtField _341_1 = { "version",0,4,kIntType,"void",2,0,"long int",&_341_2};
	VPL_ExtStructure _341_S = {"341",&_341_1};

	VPL_ExtStructure ___CFXMLParser_S = {"__CFXMLParser",NULL};

	VPL_ExtField _338_1 = { "entityType",0,4,kEnumType,"NULL",0,0,"336",NULL};
	VPL_ExtStructure _338_S = {"338",&_338_1};

	VPL_ExtField _337_4 = { "notationName",16,4,kPointerType,"__CFString",1,0,"T*",NULL};
	VPL_ExtField _337_3 = { "entityID",8,8,kStructureType,"__CFString",1,0,"330",&_337_4};
	VPL_ExtField _337_2 = { "replacementText",4,4,kPointerType,"__CFString",1,0,"T*",&_337_3};
	VPL_ExtField _337_1 = { "entityType",0,4,kEnumType,"__CFString",1,0,"336",&_337_2};
	VPL_ExtStructure _337_S = {"337",&_337_1};

	VPL_ExtField _335_2 = { "attributes",4,4,kPointerType,"334",1,12,"T*",NULL};
	VPL_ExtField _335_1 = { "numberOfAttributes",0,4,kIntType,"334",1,12,"long int",&_335_2};
	VPL_ExtStructure _335_S = {"335",&_335_1};

	VPL_ExtField _334_3 = { "defaultString",8,4,kPointerType,"__CFString",1,0,"T*",NULL};
	VPL_ExtField _334_2 = { "typeString",4,4,kPointerType,"__CFString",1,0,"T*",&_334_3};
	VPL_ExtField _334_1 = { "attributeName",0,4,kPointerType,"__CFString",1,0,"T*",&_334_2};
	VPL_ExtStructure _334_S = {"334",&_334_1};

	VPL_ExtField _333_1 = { "contentDescription",0,4,kPointerType,"__CFString",1,0,"T*",NULL};
	VPL_ExtStructure _333_S = {"333",&_333_1};

	VPL_ExtField _332_1 = { "externalID",0,8,kStructureType,"NULL",0,0,"330",NULL};
	VPL_ExtStructure _332_S = {"332",&_332_1};

	VPL_ExtField _331_1 = { "externalID",0,8,kStructureType,"NULL",0,0,"330",NULL};
	VPL_ExtStructure _331_S = {"331",&_331_1};

	VPL_ExtField _330_2 = { "publicID",4,4,kPointerType,"__CFString",1,0,"T*",NULL};
	VPL_ExtField _330_1 = { "systemID",0,4,kPointerType,"__CFURL",1,0,"T*",&_330_2};
	VPL_ExtStructure _330_S = {"330",&_330_1};

	VPL_ExtField _329_2 = { "encoding",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _329_1 = { "sourceURL",0,4,kPointerType,"__CFURL",1,0,"T*",&_329_2};
	VPL_ExtStructure _329_S = {"329",&_329_1};

	VPL_ExtField _328_1 = { "dataString",0,4,kPointerType,"__CFString",1,0,"T*",NULL};
	VPL_ExtStructure _328_S = {"328",&_328_1};

	VPL_ExtField _327_3 = { "isEmpty",8,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _327_2 = { "attributeOrder",4,4,kPointerType,"__CFArray",1,0,"T*",&_327_3};
	VPL_ExtField _327_1 = { "attributes",0,4,kPointerType,"__CFDictionary",1,0,"T*",&_327_2};
	VPL_ExtStructure _327_S = {"327",&_327_1};

	VPL_ExtStructure ___CFXMLNode_S = {"__CFXMLNode",NULL};

	VPL_ExtStructure ___CFURL_S = {"__CFURL",NULL};

	VPL_ExtStructure _OpaqueFNSubscriptionRef_S = {"OpaqueFNSubscriptionRef",NULL};

	VPL_ExtField _FSVolumeInfoParam_13 = { "ref",40,4,kPointerType,"FSRef",1,80,"T*",NULL};
	VPL_ExtField _FSVolumeInfoParam_12 = { "volumeName",36,4,kPointerType,"HFSUniStr255",1,512,"T*",&_FSVolumeInfoParam_13};
	VPL_ExtField _FSVolumeInfoParam_11 = { "volumeInfo",32,4,kPointerType,"FSVolumeInfo",1,126,"T*",&_FSVolumeInfoParam_12};
	VPL_ExtField _FSVolumeInfoParam_10 = { "whichInfo",28,4,kUnsignedType,"FSVolumeInfo",1,126,"unsigned long",&_FSVolumeInfoParam_11};
	VPL_ExtField _FSVolumeInfoParam_9 = { "volumeIndex",24,4,kUnsignedType,"FSVolumeInfo",1,126,"unsigned long",&_FSVolumeInfoParam_10};
	VPL_ExtField _FSVolumeInfoParam_8 = { "ioVRefNum",22,2,kIntType,"FSVolumeInfo",1,126,"short",&_FSVolumeInfoParam_9};
	VPL_ExtField _FSVolumeInfoParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_FSVolumeInfoParam_8};
	VPL_ExtField _FSVolumeInfoParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_FSVolumeInfoParam_7};
	VPL_ExtField _FSVolumeInfoParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_FSVolumeInfoParam_6};
	VPL_ExtField _FSVolumeInfoParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_FSVolumeInfoParam_5};
	VPL_ExtField _FSVolumeInfoParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_FSVolumeInfoParam_4};
	VPL_ExtField _FSVolumeInfoParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_FSVolumeInfoParam_3};
	VPL_ExtField _FSVolumeInfoParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_FSVolumeInfoParam_2};
	VPL_ExtStructure _FSVolumeInfoParam_S = {"FSVolumeInfoParam",&_FSVolumeInfoParam_1};

	VPL_ExtField _FSVolumeInfo_21 = { "driverRefNum",124,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _FSVolumeInfo_20 = { "driveNumber",122,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FSVolumeInfo_21};
	VPL_ExtField _FSVolumeInfo_19 = { "signature",120,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FSVolumeInfo_20};
	VPL_ExtField _FSVolumeInfo_18 = { "filesystemID",118,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FSVolumeInfo_19};
	VPL_ExtField _FSVolumeInfo_17 = { "flags",116,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FSVolumeInfo_18};
	VPL_ExtField _FSVolumeInfo_16 = { "finderInfo",84,32,kPointerType,"unsigned char",0,1,NULL,&_FSVolumeInfo_17};
	VPL_ExtField _FSVolumeInfo_15 = { "nextCatalogID",80,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_16};
	VPL_ExtField _FSVolumeInfo_14 = { "dataClumpSize",76,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_15};
	VPL_ExtField _FSVolumeInfo_13 = { "rsrcClumpSize",72,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_14};
	VPL_ExtField _FSVolumeInfo_12 = { "nextAllocation",68,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_13};
	VPL_ExtField _FSVolumeInfo_11 = { "freeBlocks",64,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_12};
	VPL_ExtField _FSVolumeInfo_10 = { "totalBlocks",60,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_11};
	VPL_ExtField _FSVolumeInfo_9 = { "blockSize",56,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_10};
	VPL_ExtField _FSVolumeInfo_8 = { "freeBytes",48,8,kUnsignedType,"unsigned char",0,1,"unsigned long long",&_FSVolumeInfo_9};
	VPL_ExtField _FSVolumeInfo_7 = { "totalBytes",40,8,kUnsignedType,"unsigned char",0,1,"unsigned long long",&_FSVolumeInfo_8};
	VPL_ExtField _FSVolumeInfo_6 = { "folderCount",36,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_7};
	VPL_ExtField _FSVolumeInfo_5 = { "fileCount",32,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_FSVolumeInfo_6};
	VPL_ExtField _FSVolumeInfo_4 = { "checkedDate",24,8,kStructureType,"unsigned char",0,1,"UTCDateTime",&_FSVolumeInfo_5};
	VPL_ExtField _FSVolumeInfo_3 = { "backupDate",16,8,kStructureType,"unsigned char",0,1,"UTCDateTime",&_FSVolumeInfo_4};
	VPL_ExtField _FSVolumeInfo_2 = { "modifyDate",8,8,kStructureType,"unsigned char",0,1,"UTCDateTime",&_FSVolumeInfo_3};
	VPL_ExtField _FSVolumeInfo_1 = { "createDate",0,8,kStructureType,"unsigned char",0,1,"UTCDateTime",&_FSVolumeInfo_2};
	VPL_ExtStructure _FSVolumeInfo_S = {"FSVolumeInfo",&_FSVolumeInfo_1};

	VPL_ExtField _FSForkCBInfoParam_13 = { "forkName",34,4,kPointerType,"HFSUniStr255",1,512,"T*",NULL};
	VPL_ExtField _FSForkCBInfoParam_12 = { "forkInfo",30,4,kPointerType,"FSForkInfo",1,48,"T*",&_FSForkCBInfoParam_13};
	VPL_ExtField _FSForkCBInfoParam_11 = { "ref",26,4,kPointerType,"FSRef",1,80,"T*",&_FSForkCBInfoParam_12};
	VPL_ExtField _FSForkCBInfoParam_10 = { "actualRefNum",24,2,kIntType,"FSRef",1,80,"short",&_FSForkCBInfoParam_11};
	VPL_ExtField _FSForkCBInfoParam_9 = { "iterator",22,2,kIntType,"FSRef",1,80,"short",&_FSForkCBInfoParam_10};
	VPL_ExtField _FSForkCBInfoParam_8 = { "volumeRefNum",20,2,kIntType,"FSRef",1,80,"short",&_FSForkCBInfoParam_9};
	VPL_ExtField _FSForkCBInfoParam_7 = { "desiredRefNum",18,2,kIntType,"FSRef",1,80,"short",&_FSForkCBInfoParam_8};
	VPL_ExtField _FSForkCBInfoParam_6 = { "ioResult",16,2,kIntType,"FSRef",1,80,"short",&_FSForkCBInfoParam_7};
	VPL_ExtField _FSForkCBInfoParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_FSForkCBInfoParam_6};
	VPL_ExtField _FSForkCBInfoParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_FSForkCBInfoParam_5};
	VPL_ExtField _FSForkCBInfoParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_FSForkCBInfoParam_4};
	VPL_ExtField _FSForkCBInfoParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_FSForkCBInfoParam_3};
	VPL_ExtField _FSForkCBInfoParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_FSForkCBInfoParam_2};
	VPL_ExtStructure _FSForkCBInfoParam_S = {"FSForkCBInfoParam",&_FSForkCBInfoParam_1};

	VPL_ExtField _FSForkInfo_10 = { "process",40,8,kUnsignedType,"NULL",0,0,"unsigned long long",NULL};
	VPL_ExtField _FSForkInfo_9 = { "physicalEOF",32,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_FSForkInfo_10};
	VPL_ExtField _FSForkInfo_8 = { "logicalEOF",24,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_FSForkInfo_9};
	VPL_ExtField _FSForkInfo_7 = { "currentPosition",16,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_FSForkInfo_8};
	VPL_ExtField _FSForkInfo_6 = { "forkID",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FSForkInfo_7};
	VPL_ExtField _FSForkInfo_5 = { "nodeID",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FSForkInfo_6};
	VPL_ExtField _FSForkInfo_4 = { "reserved2",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FSForkInfo_5};
	VPL_ExtField _FSForkInfo_3 = { "volume",2,2,kIntType,"NULL",0,0,"short",&_FSForkInfo_4};
	VPL_ExtField _FSForkInfo_2 = { "permissions",1,1,kIntType,"NULL",0,0,"signed char",&_FSForkInfo_3};
	VPL_ExtField _FSForkInfo_1 = { "flags",0,1,kIntType,"NULL",0,0,"signed char",&_FSForkInfo_2};
	VPL_ExtStructure _FSForkInfo_S = {"FSForkInfo",&_FSForkInfo_1};

	VPL_ExtField _FSForkIOParam_23 = { "outForkName",88,4,kPointerType,"HFSUniStr255",1,512,"T*",NULL};
	VPL_ExtField _FSForkIOParam_22 = { "forkIterator",72,16,kStructureType,"HFSUniStr255",1,512,"CatPositionRec",&_FSForkIOParam_23};
	VPL_ExtField _FSForkIOParam_21 = { "forkName",68,4,kPointerType,"unsigned short",1,2,"T*",&_FSForkIOParam_22};
	VPL_ExtField _FSForkIOParam_20 = { "forkNameLength",64,4,kUnsignedType,"unsigned short",1,2,"unsigned long",&_FSForkIOParam_21};
	VPL_ExtField _FSForkIOParam_19 = { "allocationAmount",56,8,kUnsignedType,"unsigned short",1,2,"unsigned long long",&_FSForkIOParam_20};
	VPL_ExtField _FSForkIOParam_18 = { "allocationFlags",54,2,kUnsignedType,"unsigned short",1,2,"unsigned short",&_FSForkIOParam_19};
	VPL_ExtField _FSForkIOParam_17 = { "positionOffset",46,8,kIntType,"unsigned short",1,2,"long long int",&_FSForkIOParam_18};
	VPL_ExtField _FSForkIOParam_16 = { "positionMode",44,2,kUnsignedType,"unsigned short",1,2,"unsigned short",&_FSForkIOParam_17};
	VPL_ExtField _FSForkIOParam_15 = { "actualCount",40,4,kUnsignedType,"unsigned short",1,2,"unsigned long",&_FSForkIOParam_16};
	VPL_ExtField _FSForkIOParam_14 = { "requestCount",36,4,kUnsignedType,"unsigned short",1,2,"unsigned long",&_FSForkIOParam_15};
	VPL_ExtField _FSForkIOParam_13 = { "buffer",32,4,kPointerType,"char",1,1,"T*",&_FSForkIOParam_14};
	VPL_ExtField _FSForkIOParam_12 = { "ref",28,4,kPointerType,"FSRef",1,80,"T*",&_FSForkIOParam_13};
	VPL_ExtField _FSForkIOParam_11 = { "permissions",27,1,kIntType,"FSRef",1,80,"signed char",&_FSForkIOParam_12};
	VPL_ExtField _FSForkIOParam_10 = { "reserved3",26,1,kUnsignedType,"FSRef",1,80,"unsigned char",&_FSForkIOParam_11};
	VPL_ExtField _FSForkIOParam_9 = { "forkRefNum",24,2,kIntType,"FSRef",1,80,"short",&_FSForkIOParam_10};
	VPL_ExtField _FSForkIOParam_8 = { "reserved2",22,2,kIntType,"FSRef",1,80,"short",&_FSForkIOParam_9};
	VPL_ExtField _FSForkIOParam_7 = { "reserved1",18,4,kPointerType,"void",1,0,"T*",&_FSForkIOParam_8};
	VPL_ExtField _FSForkIOParam_6 = { "ioResult",16,2,kIntType,"void",1,0,"short",&_FSForkIOParam_7};
	VPL_ExtField _FSForkIOParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_FSForkIOParam_6};
	VPL_ExtField _FSForkIOParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_FSForkIOParam_5};
	VPL_ExtField _FSForkIOParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_FSForkIOParam_4};
	VPL_ExtField _FSForkIOParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_FSForkIOParam_3};
	VPL_ExtField _FSForkIOParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_FSForkIOParam_2};
	VPL_ExtStructure _FSForkIOParam_S = {"FSForkIOParam",&_FSForkIOParam_1};

	VPL_ExtField _FSCatalogBulkParam_19 = { "searchParams",60,4,kPointerType,"FSSearchParams",1,24,"T*",NULL};
	VPL_ExtField _FSCatalogBulkParam_18 = { "names",56,4,kPointerType,"HFSUniStr255",1,512,"T*",&_FSCatalogBulkParam_19};
	VPL_ExtField _FSCatalogBulkParam_17 = { "specs",52,4,kPointerType,"FSSpec",1,70,"T*",&_FSCatalogBulkParam_18};
	VPL_ExtField _FSCatalogBulkParam_16 = { "refs",48,4,kPointerType,"FSRef",1,80,"T*",&_FSCatalogBulkParam_17};
	VPL_ExtField _FSCatalogBulkParam_15 = { "catalogInfo",44,4,kPointerType,"FSCatalogInfo",1,144,"T*",&_FSCatalogBulkParam_16};
	VPL_ExtField _FSCatalogBulkParam_14 = { "whichInfo",40,4,kUnsignedType,"FSCatalogInfo",1,144,"unsigned long",&_FSCatalogBulkParam_15};
	VPL_ExtField _FSCatalogBulkParam_13 = { "actualItems",36,4,kUnsignedType,"FSCatalogInfo",1,144,"unsigned long",&_FSCatalogBulkParam_14};
	VPL_ExtField _FSCatalogBulkParam_12 = { "maximumItems",32,4,kUnsignedType,"FSCatalogInfo",1,144,"unsigned long",&_FSCatalogBulkParam_13};
	VPL_ExtField _FSCatalogBulkParam_11 = { "container",28,4,kPointerType,"FSRef",1,80,"T*",&_FSCatalogBulkParam_12};
	VPL_ExtField _FSCatalogBulkParam_10 = { "iterator",24,4,kPointerType,"OpaqueFSIterator",1,0,"T*",&_FSCatalogBulkParam_11};
	VPL_ExtField _FSCatalogBulkParam_9 = { "iteratorFlags",20,4,kUnsignedType,"OpaqueFSIterator",1,0,"unsigned long",&_FSCatalogBulkParam_10};
	VPL_ExtField _FSCatalogBulkParam_8 = { "reserved",19,1,kUnsignedType,"OpaqueFSIterator",1,0,"unsigned char",&_FSCatalogBulkParam_9};
	VPL_ExtField _FSCatalogBulkParam_7 = { "containerChanged",18,1,kUnsignedType,"OpaqueFSIterator",1,0,"unsigned char",&_FSCatalogBulkParam_8};
	VPL_ExtField _FSCatalogBulkParam_6 = { "ioResult",16,2,kIntType,"OpaqueFSIterator",1,0,"short",&_FSCatalogBulkParam_7};
	VPL_ExtField _FSCatalogBulkParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_FSCatalogBulkParam_6};
	VPL_ExtField _FSCatalogBulkParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_FSCatalogBulkParam_5};
	VPL_ExtField _FSCatalogBulkParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_FSCatalogBulkParam_4};
	VPL_ExtField _FSCatalogBulkParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_FSCatalogBulkParam_3};
	VPL_ExtField _FSCatalogBulkParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_FSCatalogBulkParam_2};
	VPL_ExtStructure _FSCatalogBulkParam_S = {"FSCatalogBulkParam",&_FSCatalogBulkParam_1};

	VPL_ExtField _FSSearchParams_6 = { "searchInfo2",20,4,kPointerType,"FSCatalogInfo",1,144,"T*",NULL};
	VPL_ExtField _FSSearchParams_5 = { "searchInfo1",16,4,kPointerType,"FSCatalogInfo",1,144,"T*",&_FSSearchParams_6};
	VPL_ExtField _FSSearchParams_4 = { "searchName",12,4,kPointerType,"unsigned short",1,2,"T*",&_FSSearchParams_5};
	VPL_ExtField _FSSearchParams_3 = { "searchNameLength",8,4,kUnsignedType,"unsigned short",1,2,"unsigned long",&_FSSearchParams_4};
	VPL_ExtField _FSSearchParams_2 = { "searchBits",4,4,kUnsignedType,"unsigned short",1,2,"unsigned long",&_FSSearchParams_3};
	VPL_ExtField _FSSearchParams_1 = { "searchTime",0,4,kIntType,"unsigned short",1,2,"long int",&_FSSearchParams_2};
	VPL_ExtStructure _FSSearchParams_S = {"FSSearchParams",&_FSSearchParams_1};

	VPL_ExtStructure _OpaqueFSIterator_S = {"OpaqueFSIterator",NULL};

	VPL_ExtField _FSRefParam_22 = { "outName",68,4,kPointerType,"HFSUniStr255",1,512,"T*",NULL};
	VPL_ExtField _FSRefParam_21 = { "textEncodingHint",64,4,kUnsignedType,"HFSUniStr255",1,512,"unsigned long",&_FSRefParam_22};
	VPL_ExtField _FSRefParam_20 = { "newRef",60,4,kPointerType,"FSRef",1,80,"T*",&_FSRefParam_21};
	VPL_ExtField _FSRefParam_19 = { "parentRef",56,4,kPointerType,"FSRef",1,80,"T*",&_FSRefParam_20};
	VPL_ExtField _FSRefParam_18 = { "spec",52,4,kPointerType,"FSSpec",1,70,"T*",&_FSRefParam_19};
	VPL_ExtField _FSRefParam_17 = { "ioDirID",48,4,kIntType,"FSSpec",1,70,"long int",&_FSRefParam_18};
	VPL_ExtField _FSRefParam_16 = { "name",44,4,kPointerType,"unsigned short",1,2,"T*",&_FSRefParam_17};
	VPL_ExtField _FSRefParam_15 = { "nameLength",40,4,kUnsignedType,"unsigned short",1,2,"unsigned long",&_FSRefParam_16};
	VPL_ExtField _FSRefParam_14 = { "catInfo",36,4,kPointerType,"FSCatalogInfo",1,144,"T*",&_FSRefParam_15};
	VPL_ExtField _FSRefParam_13 = { "whichInfo",32,4,kUnsignedType,"FSCatalogInfo",1,144,"unsigned long",&_FSRefParam_14};
	VPL_ExtField _FSRefParam_12 = { "ref",28,4,kPointerType,"FSRef",1,80,"T*",&_FSRefParam_13};
	VPL_ExtField _FSRefParam_11 = { "reserved3",27,1,kUnsignedType,"FSRef",1,80,"unsigned char",&_FSRefParam_12};
	VPL_ExtField _FSRefParam_10 = { "reserved2",26,1,kUnsignedType,"FSRef",1,80,"unsigned char",&_FSRefParam_11};
	VPL_ExtField _FSRefParam_9 = { "reserved1",24,2,kIntType,"FSRef",1,80,"short",&_FSRefParam_10};
	VPL_ExtField _FSRefParam_8 = { "ioVRefNum",22,2,kIntType,"FSRef",1,80,"short",&_FSRefParam_9};
	VPL_ExtField _FSRefParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_FSRefParam_8};
	VPL_ExtField _FSRefParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_FSRefParam_7};
	VPL_ExtField _FSRefParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_FSRefParam_6};
	VPL_ExtField _FSRefParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_FSRefParam_5};
	VPL_ExtField _FSRefParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_FSRefParam_4};
	VPL_ExtField _FSRefParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_FSRefParam_3};
	VPL_ExtField _FSRefParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_FSRefParam_2};
	VPL_ExtStructure _FSRefParam_S = {"FSRefParam",&_FSRefParam_1};

	VPL_ExtField _FSCatalogInfo_22 = { "textEncodingHint",140,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _FSCatalogInfo_21 = { "valence",136,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FSCatalogInfo_22};
	VPL_ExtField _FSCatalogInfo_20 = { "rsrcPhysicalSize",128,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_FSCatalogInfo_21};
	VPL_ExtField _FSCatalogInfo_19 = { "rsrcLogicalSize",120,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_FSCatalogInfo_20};
	VPL_ExtField _FSCatalogInfo_18 = { "dataPhysicalSize",112,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_FSCatalogInfo_19};
	VPL_ExtField _FSCatalogInfo_17 = { "dataLogicalSize",104,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_FSCatalogInfo_18};
	VPL_ExtField _FSCatalogInfo_16 = { "extFinderInfo",88,16,kPointerType,"unsigned char",0,1,NULL,&_FSCatalogInfo_17};
	VPL_ExtField _FSCatalogInfo_15 = { "finderInfo",72,16,kPointerType,"unsigned char",0,1,NULL,&_FSCatalogInfo_16};
	VPL_ExtField _FSCatalogInfo_14 = { "permissions",56,16,kPointerType,"unsigned long",0,4,NULL,&_FSCatalogInfo_15};
	VPL_ExtField _FSCatalogInfo_13 = { "backupDate",48,8,kStructureType,"unsigned long",0,4,"UTCDateTime",&_FSCatalogInfo_14};
	VPL_ExtField _FSCatalogInfo_12 = { "accessDate",40,8,kStructureType,"unsigned long",0,4,"UTCDateTime",&_FSCatalogInfo_13};
	VPL_ExtField _FSCatalogInfo_11 = { "attributeModDate",32,8,kStructureType,"unsigned long",0,4,"UTCDateTime",&_FSCatalogInfo_12};
	VPL_ExtField _FSCatalogInfo_10 = { "contentModDate",24,8,kStructureType,"unsigned long",0,4,"UTCDateTime",&_FSCatalogInfo_11};
	VPL_ExtField _FSCatalogInfo_9 = { "createDate",16,8,kStructureType,"unsigned long",0,4,"UTCDateTime",&_FSCatalogInfo_10};
	VPL_ExtField _FSCatalogInfo_8 = { "reserved2",15,1,kUnsignedType,"unsigned long",0,4,"unsigned char",&_FSCatalogInfo_9};
	VPL_ExtField _FSCatalogInfo_7 = { "reserved1",14,1,kUnsignedType,"unsigned long",0,4,"unsigned char",&_FSCatalogInfo_8};
	VPL_ExtField _FSCatalogInfo_6 = { "userPrivileges",13,1,kUnsignedType,"unsigned long",0,4,"unsigned char",&_FSCatalogInfo_7};
	VPL_ExtField _FSCatalogInfo_5 = { "sharingFlags",12,1,kUnsignedType,"unsigned long",0,4,"unsigned char",&_FSCatalogInfo_6};
	VPL_ExtField _FSCatalogInfo_4 = { "nodeID",8,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_FSCatalogInfo_5};
	VPL_ExtField _FSCatalogInfo_3 = { "parentDirID",4,4,kUnsignedType,"unsigned long",0,4,"unsigned long",&_FSCatalogInfo_4};
	VPL_ExtField _FSCatalogInfo_2 = { "volume",2,2,kIntType,"unsigned long",0,4,"short",&_FSCatalogInfo_3};
	VPL_ExtField _FSCatalogInfo_1 = { "nodeFlags",0,2,kUnsignedType,"unsigned long",0,4,"unsigned short",&_FSCatalogInfo_2};
	VPL_ExtStructure _FSCatalogInfo_S = {"FSCatalogInfo",&_FSCatalogInfo_1};

	VPL_ExtField _FSPermissionInfo_6 = { "reserved2",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _FSPermissionInfo_5 = { "mode",10,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FSPermissionInfo_6};
	VPL_ExtField _FSPermissionInfo_4 = { "userAccess",9,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FSPermissionInfo_5};
	VPL_ExtField _FSPermissionInfo_3 = { "reserved1",8,1,kUnsignedType,"NULL",0,0,"unsigned char",&_FSPermissionInfo_4};
	VPL_ExtField _FSPermissionInfo_2 = { "groupID",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FSPermissionInfo_3};
	VPL_ExtField _FSPermissionInfo_1 = { "userID",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FSPermissionInfo_2};
	VPL_ExtStructure _FSPermissionInfo_S = {"FSPermissionInfo",&_FSPermissionInfo_1};

	VPL_ExtField _FSRef_1 = { "hidden",0,80,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtStructure _FSRef_S = {"FSRef",&_FSRef_1};

	VPL_ExtField _DrvQEl_7 = { "dQDrvSz2",14,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _DrvQEl_6 = { "dQDrvSz",12,2,kUnsignedType,"NULL",0,0,"unsigned short",&_DrvQEl_7};
	VPL_ExtField _DrvQEl_5 = { "dQFSID",10,2,kIntType,"NULL",0,0,"short",&_DrvQEl_6};
	VPL_ExtField _DrvQEl_4 = { "dQRefNum",8,2,kIntType,"NULL",0,0,"short",&_DrvQEl_5};
	VPL_ExtField _DrvQEl_3 = { "dQDrive",6,2,kIntType,"NULL",0,0,"short",&_DrvQEl_4};
	VPL_ExtField _DrvQEl_2 = { "qType",4,2,kIntType,"NULL",0,0,"short",&_DrvQEl_3};
	VPL_ExtField _DrvQEl_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_DrvQEl_2};
	VPL_ExtStructure _DrvQEl_S = {"DrvQEl",&_DrvQEl_1};

	VPL_ExtField _VCB_45 = { "vcbOffsM",176,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VCB_44 = { "vcbDirIDM",172,4,kIntType,"NULL",0,0,"long int",&_VCB_45};
	VPL_ExtField _VCB_43 = { "vcbCtlBuf",168,4,kPointerType,"char",1,1,"T*",&_VCB_44};
	VPL_ExtField _VCB_42 = { "vcbCTRef",166,2,kIntType,"char",1,1,"short",&_VCB_43};
	VPL_ExtField _VCB_41 = { "vcbXTRef",164,2,kIntType,"char",1,1,"short",&_VCB_42};
	VPL_ExtField _VCB_40 = { "vcbCTAlBlks",162,2,kUnsignedType,"char",1,1,"unsigned short",&_VCB_41};
	VPL_ExtField _VCB_39 = { "vcbXTAlBlks",160,2,kUnsignedType,"char",1,1,"unsigned short",&_VCB_40};
	VPL_ExtField _VCB_38 = { "vcbCtlCSiz",158,2,kUnsignedType,"char",1,1,"unsigned short",&_VCB_39};
	VPL_ExtField _VCB_37 = { "vcbVBMCSiz",156,2,kUnsignedType,"char",1,1,"unsigned short",&_VCB_38};
	VPL_ExtField _VCB_36 = { "vcbVCSize",154,2,kUnsignedType,"char",1,1,"unsigned short",&_VCB_37};
	VPL_ExtField _VCB_35 = { "vcbFndrInfo",122,32,kPointerType,"long int",0,4,NULL,&_VCB_36};
	VPL_ExtField _VCB_34 = { "vcbDirCnt",118,4,kIntType,"long int",0,4,"long int",&_VCB_35};
	VPL_ExtField _VCB_33 = { "vcbFilCnt",114,4,kIntType,"long int",0,4,"long int",&_VCB_34};
	VPL_ExtField _VCB_32 = { "vcbNmRtDirs",112,2,kUnsignedType,"long int",0,4,"unsigned short",&_VCB_33};
	VPL_ExtField _VCB_31 = { "vcbCTClpSiz",108,4,kIntType,"long int",0,4,"long int",&_VCB_32};
	VPL_ExtField _VCB_30 = { "vcbXTClpSiz",104,4,kIntType,"long int",0,4,"long int",&_VCB_31};
	VPL_ExtField _VCB_29 = { "vcbWrCnt",100,4,kIntType,"long int",0,4,"long int",&_VCB_30};
	VPL_ExtField _VCB_28 = { "vcbVSeqNum",98,2,kUnsignedType,"long int",0,4,"unsigned short",&_VCB_29};
	VPL_ExtField _VCB_27 = { "vcbVolBkUp",94,4,kUnsignedType,"long int",0,4,"unsigned long",&_VCB_28};
	VPL_ExtField _VCB_26 = { "vcbDirBlk",92,2,kIntType,"long int",0,4,"short",&_VCB_27};
	VPL_ExtField _VCB_25 = { "vcbDirIndex",90,2,kIntType,"long int",0,4,"short",&_VCB_26};
	VPL_ExtField _VCB_24 = { "vcbMLen",88,2,kIntType,"long int",0,4,"short",&_VCB_25};
	VPL_ExtField _VCB_23 = { "vcbBufAdr",84,4,kPointerType,"char",1,1,"T*",&_VCB_24};
	VPL_ExtField _VCB_22 = { "vcbMAdr",80,4,kPointerType,"char",1,1,"T*",&_VCB_23};
	VPL_ExtField _VCB_21 = { "vcbVRefNum",78,2,kIntType,"char",1,1,"short",&_VCB_22};
	VPL_ExtField _VCB_20 = { "vcbFSID",76,2,kIntType,"char",1,1,"short",&_VCB_21};
	VPL_ExtField _VCB_19 = { "vcbDRefNum",74,2,kIntType,"char",1,1,"short",&_VCB_20};
	VPL_ExtField _VCB_18 = { "vcbDrvNum",72,2,kIntType,"char",1,1,"short",&_VCB_19};
	VPL_ExtField _VCB_17 = { "vcbVN",44,28,kPointerType,"unsigned char",0,1,NULL,&_VCB_18};
	VPL_ExtField _VCB_16 = { "vcbFreeBks",42,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_VCB_17};
	VPL_ExtField _VCB_15 = { "vcbNxtCNID",38,4,kIntType,"unsigned char",0,1,"long int",&_VCB_16};
	VPL_ExtField _VCB_14 = { "vcbAlBlSt",36,2,kIntType,"unsigned char",0,1,"short",&_VCB_15};
	VPL_ExtField _VCB_13 = { "vcbClpSiz",32,4,kIntType,"unsigned char",0,1,"long int",&_VCB_14};
	VPL_ExtField _VCB_12 = { "vcbAlBlkSiz",28,4,kIntType,"unsigned char",0,1,"long int",&_VCB_13};
	VPL_ExtField _VCB_11 = { "vcbNmAlBlks",26,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_VCB_12};
	VPL_ExtField _VCB_10 = { "vcbAllocPtr",24,2,kIntType,"unsigned char",0,1,"short",&_VCB_11};
	VPL_ExtField _VCB_9 = { "vcbVBMSt",22,2,kIntType,"unsigned char",0,1,"short",&_VCB_10};
	VPL_ExtField _VCB_8 = { "vcbNmFls",20,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_VCB_9};
	VPL_ExtField _VCB_7 = { "vcbAtrb",18,2,kIntType,"unsigned char",0,1,"short",&_VCB_8};
	VPL_ExtField _VCB_6 = { "vcbLsMod",14,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_VCB_7};
	VPL_ExtField _VCB_5 = { "vcbCrDate",10,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_VCB_6};
	VPL_ExtField _VCB_4 = { "vcbSigWord",8,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_VCB_5};
	VPL_ExtField _VCB_3 = { "vcbFlags",6,2,kIntType,"unsigned char",0,1,"short",&_VCB_4};
	VPL_ExtField _VCB_2 = { "qType",4,2,kIntType,"unsigned char",0,1,"short",&_VCB_3};
	VPL_ExtField _VCB_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_VCB_2};
	VPL_ExtStructure _VCB_S = {"VCB",&_VCB_1};

	VPL_ExtField _FCBPBRec_21 = { "ioFCBParID",58,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _FCBPBRec_20 = { "ioFCBClpSiz",54,4,kIntType,"NULL",0,0,"long int",&_FCBPBRec_21};
	VPL_ExtField _FCBPBRec_19 = { "ioFCBVRefNum",52,2,kIntType,"NULL",0,0,"short",&_FCBPBRec_20};
	VPL_ExtField _FCBPBRec_18 = { "ioFCBCrPs",48,4,kIntType,"NULL",0,0,"long int",&_FCBPBRec_19};
	VPL_ExtField _FCBPBRec_17 = { "ioFCBPLen",44,4,kIntType,"NULL",0,0,"long int",&_FCBPBRec_18};
	VPL_ExtField _FCBPBRec_16 = { "ioFCBEOF",40,4,kIntType,"NULL",0,0,"long int",&_FCBPBRec_17};
	VPL_ExtField _FCBPBRec_15 = { "ioFCBStBlk",38,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FCBPBRec_16};
	VPL_ExtField _FCBPBRec_14 = { "ioFCBFlags",36,2,kIntType,"NULL",0,0,"short",&_FCBPBRec_15};
	VPL_ExtField _FCBPBRec_13 = { "ioFCBFlNm",32,4,kIntType,"NULL",0,0,"long int",&_FCBPBRec_14};
	VPL_ExtField _FCBPBRec_12 = { "filler1",30,2,kIntType,"NULL",0,0,"short",&_FCBPBRec_13};
	VPL_ExtField _FCBPBRec_11 = { "ioFCBIndx",28,2,kIntType,"NULL",0,0,"short",&_FCBPBRec_12};
	VPL_ExtField _FCBPBRec_10 = { "filler",26,2,kIntType,"NULL",0,0,"short",&_FCBPBRec_11};
	VPL_ExtField _FCBPBRec_9 = { "ioRefNum",24,2,kIntType,"NULL",0,0,"short",&_FCBPBRec_10};
	VPL_ExtField _FCBPBRec_8 = { "ioVRefNum",22,2,kIntType,"NULL",0,0,"short",&_FCBPBRec_9};
	VPL_ExtField _FCBPBRec_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_FCBPBRec_8};
	VPL_ExtField _FCBPBRec_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_FCBPBRec_7};
	VPL_ExtField _FCBPBRec_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_FCBPBRec_6};
	VPL_ExtField _FCBPBRec_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_FCBPBRec_5};
	VPL_ExtField _FCBPBRec_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_FCBPBRec_4};
	VPL_ExtField _FCBPBRec_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_FCBPBRec_3};
	VPL_ExtField _FCBPBRec_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_FCBPBRec_2};
	VPL_ExtStructure _FCBPBRec_S = {"FCBPBRec",&_FCBPBRec_1};

	VPL_ExtField _WDPBRec_14 = { "ioWDDirID",48,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _WDPBRec_13 = { "filler2",34,14,kPointerType,"short",0,2,NULL,&_WDPBRec_14};
	VPL_ExtField _WDPBRec_12 = { "ioWDVRefNum",32,2,kIntType,"short",0,2,"short",&_WDPBRec_13};
	VPL_ExtField _WDPBRec_11 = { "ioWDProcID",28,4,kIntType,"short",0,2,"long int",&_WDPBRec_12};
	VPL_ExtField _WDPBRec_10 = { "ioWDIndex",26,2,kIntType,"short",0,2,"short",&_WDPBRec_11};
	VPL_ExtField _WDPBRec_9 = { "filler1",24,2,kIntType,"short",0,2,"short",&_WDPBRec_10};
	VPL_ExtField _WDPBRec_8 = { "ioVRefNum",22,2,kIntType,"short",0,2,"short",&_WDPBRec_9};
	VPL_ExtField _WDPBRec_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_WDPBRec_8};
	VPL_ExtField _WDPBRec_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_WDPBRec_7};
	VPL_ExtField _WDPBRec_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_WDPBRec_6};
	VPL_ExtField _WDPBRec_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_WDPBRec_5};
	VPL_ExtField _WDPBRec_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_WDPBRec_4};
	VPL_ExtField _WDPBRec_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_WDPBRec_3};
	VPL_ExtField _WDPBRec_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_WDPBRec_2};
	VPL_ExtStructure _WDPBRec_S = {"WDPBRec",&_WDPBRec_1};

	VPL_ExtField _CMovePBRec_14 = { "ioDirID",48,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CMovePBRec_13 = { "filler3",40,8,kPointerType,"long int",0,4,NULL,&_CMovePBRec_14};
	VPL_ExtField _CMovePBRec_12 = { "ioNewDirID",36,4,kIntType,"long int",0,4,"long int",&_CMovePBRec_13};
	VPL_ExtField _CMovePBRec_11 = { "filler2",32,4,kIntType,"long int",0,4,"long int",&_CMovePBRec_12};
	VPL_ExtField _CMovePBRec_10 = { "ioNewName",28,4,kPointerType,"unsigned char",1,1,"T*",&_CMovePBRec_11};
	VPL_ExtField _CMovePBRec_9 = { "filler1",24,4,kIntType,"unsigned char",1,1,"long int",&_CMovePBRec_10};
	VPL_ExtField _CMovePBRec_8 = { "ioVRefNum",22,2,kIntType,"unsigned char",1,1,"short",&_CMovePBRec_9};
	VPL_ExtField _CMovePBRec_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_CMovePBRec_8};
	VPL_ExtField _CMovePBRec_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_CMovePBRec_7};
	VPL_ExtField _CMovePBRec_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_CMovePBRec_6};
	VPL_ExtField _CMovePBRec_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_CMovePBRec_5};
	VPL_ExtField _CMovePBRec_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_CMovePBRec_4};
	VPL_ExtField _CMovePBRec_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_CMovePBRec_3};
	VPL_ExtField _CMovePBRec_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_CMovePBRec_2};
	VPL_ExtStructure _CMovePBRec_S = {"CMovePBRec",&_CMovePBRec_1};

	VPL_ExtField _CSParam_18 = { "ioOptBufSize",72,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CSParam_17 = { "ioOptBuffer",68,4,kPointerType,"char",1,1,"T*",&_CSParam_18};
	VPL_ExtField _CSParam_16 = { "ioCatPosition",52,16,kStructureType,"char",1,1,"CatPositionRec",&_CSParam_17};
	VPL_ExtField _CSParam_15 = { "ioSearchTime",48,4,kIntType,"char",1,1,"long int",&_CSParam_16};
	VPL_ExtField _CSParam_14 = { "ioSearchInfo2",44,4,kPointerType,"CInfoPBRec",1,108,"T*",&_CSParam_15};
	VPL_ExtField _CSParam_13 = { "ioSearchInfo1",40,4,kPointerType,"CInfoPBRec",1,108,"T*",&_CSParam_14};
	VPL_ExtField _CSParam_12 = { "ioSearchBits",36,4,kIntType,"CInfoPBRec",1,108,"long int",&_CSParam_13};
	VPL_ExtField _CSParam_11 = { "ioActMatchCount",32,4,kIntType,"CInfoPBRec",1,108,"long int",&_CSParam_12};
	VPL_ExtField _CSParam_10 = { "ioReqMatchCount",28,4,kIntType,"CInfoPBRec",1,108,"long int",&_CSParam_11};
	VPL_ExtField _CSParam_9 = { "ioMatchPtr",24,4,kPointerType,"FSSpec",1,70,"T*",&_CSParam_10};
	VPL_ExtField _CSParam_8 = { "ioVRefNum",22,2,kIntType,"FSSpec",1,70,"short",&_CSParam_9};
	VPL_ExtField _CSParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_CSParam_8};
	VPL_ExtField _CSParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_CSParam_7};
	VPL_ExtField _CSParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_CSParam_6};
	VPL_ExtField _CSParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_CSParam_5};
	VPL_ExtField _CSParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_CSParam_4};
	VPL_ExtField _CSParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_CSParam_3};
	VPL_ExtField _CSParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_CSParam_2};
	VPL_ExtStructure _CSParam_S = {"CSParam",&_CSParam_1};

	VPL_ExtField _ForeignPrivParam_19 = { "ioForeignPrivInfo4",64,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ForeignPrivParam_18 = { "ioForeignPrivInfo3",60,4,kIntType,"NULL",0,0,"long int",&_ForeignPrivParam_19};
	VPL_ExtField _ForeignPrivParam_17 = { "ioForeignPrivInfo2",56,4,kIntType,"NULL",0,0,"long int",&_ForeignPrivParam_18};
	VPL_ExtField _ForeignPrivParam_16 = { "ioForeignPrivInfo1",52,4,kIntType,"NULL",0,0,"long int",&_ForeignPrivParam_17};
	VPL_ExtField _ForeignPrivParam_15 = { "ioForeignPrivDirID",48,4,kIntType,"NULL",0,0,"long int",&_ForeignPrivParam_16};
	VPL_ExtField _ForeignPrivParam_14 = { "ioFiller23",44,4,kIntType,"NULL",0,0,"long int",&_ForeignPrivParam_15};
	VPL_ExtField _ForeignPrivParam_13 = { "ioForeignPrivReqCount",40,4,kIntType,"NULL",0,0,"long int",&_ForeignPrivParam_14};
	VPL_ExtField _ForeignPrivParam_12 = { "ioForeignPrivActCount",36,4,kIntType,"NULL",0,0,"long int",&_ForeignPrivParam_13};
	VPL_ExtField _ForeignPrivParam_11 = { "ioForeignPrivBuffer",32,4,kPointerType,"char",1,1,"T*",&_ForeignPrivParam_12};
	VPL_ExtField _ForeignPrivParam_10 = { "ioFiller22",28,4,kIntType,"char",1,1,"long int",&_ForeignPrivParam_11};
	VPL_ExtField _ForeignPrivParam_9 = { "ioFiller21",24,4,kIntType,"char",1,1,"long int",&_ForeignPrivParam_10};
	VPL_ExtField _ForeignPrivParam_8 = { "ioVRefNum",22,2,kIntType,"char",1,1,"short",&_ForeignPrivParam_9};
	VPL_ExtField _ForeignPrivParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_ForeignPrivParam_8};
	VPL_ExtField _ForeignPrivParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_ForeignPrivParam_7};
	VPL_ExtField _ForeignPrivParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_ForeignPrivParam_6};
	VPL_ExtField _ForeignPrivParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_ForeignPrivParam_5};
	VPL_ExtField _ForeignPrivParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_ForeignPrivParam_4};
	VPL_ExtField _ForeignPrivParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_ForeignPrivParam_3};
	VPL_ExtField _ForeignPrivParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_ForeignPrivParam_2};
	VPL_ExtStructure _ForeignPrivParam_S = {"ForeignPrivParam",&_ForeignPrivParam_1};

	VPL_ExtField _FIDParam_17 = { "ioFileID",54,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _FIDParam_16 = { "filler18",52,2,kIntType,"NULL",0,0,"short",&_FIDParam_17};
	VPL_ExtField _FIDParam_15 = { "ioSrcDirID",48,4,kIntType,"NULL",0,0,"long int",&_FIDParam_16};
	VPL_ExtField _FIDParam_14 = { "filler17",44,4,kIntType,"NULL",0,0,"long int",&_FIDParam_15};
	VPL_ExtField _FIDParam_13 = { "filler16",40,4,kIntType,"NULL",0,0,"long int",&_FIDParam_14};
	VPL_ExtField _FIDParam_12 = { "ioDestDirID",36,4,kIntType,"NULL",0,0,"long int",&_FIDParam_13};
	VPL_ExtField _FIDParam_11 = { "filler15",32,4,kIntType,"NULL",0,0,"long int",&_FIDParam_12};
	VPL_ExtField _FIDParam_10 = { "ioDestNamePtr",28,4,kPointerType,"unsigned char",1,1,"T*",&_FIDParam_11};
	VPL_ExtField _FIDParam_9 = { "filler14",24,4,kIntType,"unsigned char",1,1,"long int",&_FIDParam_10};
	VPL_ExtField _FIDParam_8 = { "ioVRefNum",22,2,kIntType,"unsigned char",1,1,"short",&_FIDParam_9};
	VPL_ExtField _FIDParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_FIDParam_8};
	VPL_ExtField _FIDParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_FIDParam_7};
	VPL_ExtField _FIDParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_FIDParam_6};
	VPL_ExtField _FIDParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_FIDParam_5};
	VPL_ExtField _FIDParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_FIDParam_4};
	VPL_ExtField _FIDParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_FIDParam_3};
	VPL_ExtField _FIDParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_FIDParam_2};
	VPL_ExtStructure _FIDParam_S = {"FIDParam",&_FIDParam_1};

	VPL_ExtField _WDParam_17 = { "ioWDDirID",48,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _WDParam_16 = { "filler13",44,4,kIntType,"NULL",0,0,"long int",&_WDParam_17};
	VPL_ExtField _WDParam_15 = { "filler12",40,4,kIntType,"NULL",0,0,"long int",&_WDParam_16};
	VPL_ExtField _WDParam_14 = { "filler11",36,4,kIntType,"NULL",0,0,"long int",&_WDParam_15};
	VPL_ExtField _WDParam_13 = { "filler10",34,2,kIntType,"NULL",0,0,"short",&_WDParam_14};
	VPL_ExtField _WDParam_12 = { "ioWDVRefNum",32,2,kIntType,"NULL",0,0,"short",&_WDParam_13};
	VPL_ExtField _WDParam_11 = { "ioWDProcID",28,4,kIntType,"NULL",0,0,"long int",&_WDParam_12};
	VPL_ExtField _WDParam_10 = { "ioWDIndex",26,2,kIntType,"NULL",0,0,"short",&_WDParam_11};
	VPL_ExtField _WDParam_9 = { "ioWDCreated",24,2,kIntType,"NULL",0,0,"short",&_WDParam_10};
	VPL_ExtField _WDParam_8 = { "ioVRefNum",22,2,kIntType,"NULL",0,0,"short",&_WDParam_9};
	VPL_ExtField _WDParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_WDParam_8};
	VPL_ExtField _WDParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_WDParam_7};
	VPL_ExtField _WDParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_WDParam_6};
	VPL_ExtField _WDParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_WDParam_5};
	VPL_ExtField _WDParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_WDParam_4};
	VPL_ExtField _WDParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_WDParam_3};
	VPL_ExtField _WDParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_WDParam_2};
	VPL_ExtStructure _WDParam_S = {"WDParam",&_WDParam_1};

	VPL_ExtField _CopyParam_16 = { "ioDirID",48,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _CopyParam_15 = { "filler15",44,4,kIntType,"NULL",0,0,"long int",&_CopyParam_16};
	VPL_ExtField _CopyParam_14 = { "filler14",40,4,kIntType,"NULL",0,0,"long int",&_CopyParam_15};
	VPL_ExtField _CopyParam_13 = { "ioNewDirID",36,4,kIntType,"NULL",0,0,"long int",&_CopyParam_14};
	VPL_ExtField _CopyParam_12 = { "ioCopyName",32,4,kPointerType,"unsigned char",1,1,"T*",&_CopyParam_13};
	VPL_ExtField _CopyParam_11 = { "ioNewName",28,4,kPointerType,"unsigned char",1,1,"T*",&_CopyParam_12};
	VPL_ExtField _CopyParam_10 = { "filler8",26,2,kIntType,"unsigned char",1,1,"short",&_CopyParam_11};
	VPL_ExtField _CopyParam_9 = { "ioDstVRefNum",24,2,kIntType,"unsigned char",1,1,"short",&_CopyParam_10};
	VPL_ExtField _CopyParam_8 = { "ioVRefNum",22,2,kIntType,"unsigned char",1,1,"short",&_CopyParam_9};
	VPL_ExtField _CopyParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_CopyParam_8};
	VPL_ExtField _CopyParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_CopyParam_7};
	VPL_ExtField _CopyParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_CopyParam_6};
	VPL_ExtField _CopyParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_CopyParam_5};
	VPL_ExtField _CopyParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_CopyParam_4};
	VPL_ExtField _CopyParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_CopyParam_3};
	VPL_ExtField _CopyParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_CopyParam_2};
	VPL_ExtStructure _CopyParam_S = {"CopyParam",&_CopyParam_1};

	VPL_ExtField _ObjParam_12 = { "ioObjID",32,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ObjParam_11 = { "ioObjNamePtr",28,4,kPointerType,"unsigned char",1,1,"T*",&_ObjParam_12};
	VPL_ExtField _ObjParam_10 = { "ioObjType",26,2,kIntType,"unsigned char",1,1,"short",&_ObjParam_11};
	VPL_ExtField _ObjParam_9 = { "filler7",24,2,kIntType,"unsigned char",1,1,"short",&_ObjParam_10};
	VPL_ExtField _ObjParam_8 = { "ioVRefNum",22,2,kIntType,"unsigned char",1,1,"short",&_ObjParam_9};
	VPL_ExtField _ObjParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_ObjParam_8};
	VPL_ExtField _ObjParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_ObjParam_7};
	VPL_ExtField _ObjParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_ObjParam_6};
	VPL_ExtField _ObjParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_ObjParam_5};
	VPL_ExtField _ObjParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_ObjParam_4};
	VPL_ExtField _ObjParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_ObjParam_3};
	VPL_ExtField _ObjParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_ObjParam_2};
	VPL_ExtStructure _ObjParam_S = {"ObjParam",&_ObjParam_1};

	VPL_ExtField _AccessParam_18 = { "ioDirID",48,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _AccessParam_17 = { "ioACAccess",44,4,kIntType,"NULL",0,0,"long int",&_AccessParam_18};
	VPL_ExtField _AccessParam_16 = { "ioACGroupID",40,4,kIntType,"NULL",0,0,"long int",&_AccessParam_17};
	VPL_ExtField _AccessParam_15 = { "ioACOwnerID",36,4,kIntType,"NULL",0,0,"long int",&_AccessParam_16};
	VPL_ExtField _AccessParam_14 = { "filler6",32,4,kIntType,"NULL",0,0,"long int",&_AccessParam_15};
	VPL_ExtField _AccessParam_13 = { "ioACUser",31,1,kIntType,"NULL",0,0,"signed char",&_AccessParam_14};
	VPL_ExtField _AccessParam_12 = { "filler5",30,1,kIntType,"NULL",0,0,"signed char",&_AccessParam_13};
	VPL_ExtField _AccessParam_11 = { "filler4",28,2,kIntType,"NULL",0,0,"short",&_AccessParam_12};
	VPL_ExtField _AccessParam_10 = { "ioDenyModes",26,2,kIntType,"NULL",0,0,"short",&_AccessParam_11};
	VPL_ExtField _AccessParam_9 = { "filler3",24,2,kIntType,"NULL",0,0,"short",&_AccessParam_10};
	VPL_ExtField _AccessParam_8 = { "ioVRefNum",22,2,kIntType,"NULL",0,0,"short",&_AccessParam_9};
	VPL_ExtField _AccessParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_AccessParam_8};
	VPL_ExtField _AccessParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_AccessParam_7};
	VPL_ExtField _AccessParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_AccessParam_6};
	VPL_ExtField _AccessParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_AccessParam_5};
	VPL_ExtField _AccessParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_AccessParam_4};
	VPL_ExtField _AccessParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_AccessParam_3};
	VPL_ExtField _AccessParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_AccessParam_2};
	VPL_ExtStructure _AccessParam_S = {"AccessParam",&_AccessParam_1};

	VPL_ExtField _XVolumeParam_34 = { "ioVFreeBytes",130,8,kUnsignedType,"NULL",0,0,"unsigned long long",NULL};
	VPL_ExtField _XVolumeParam_33 = { "ioVTotalBytes",122,8,kUnsignedType,"NULL",0,0,"unsigned long long",&_XVolumeParam_34};
	VPL_ExtField _XVolumeParam_32 = { "ioVFndrInfo",90,32,kPointerType,"long int",0,4,NULL,&_XVolumeParam_33};
	VPL_ExtField _XVolumeParam_31 = { "ioVDirCnt",86,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_32};
	VPL_ExtField _XVolumeParam_30 = { "ioVFilCnt",82,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_31};
	VPL_ExtField _XVolumeParam_29 = { "ioVWrCnt",78,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_30};
	VPL_ExtField _XVolumeParam_28 = { "ioVSeqNum",76,2,kIntType,"long int",0,4,"short",&_XVolumeParam_29};
	VPL_ExtField _XVolumeParam_27 = { "ioVBkUp",72,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_28};
	VPL_ExtField _XVolumeParam_26 = { "ioVFSID",70,2,kIntType,"long int",0,4,"short",&_XVolumeParam_27};
	VPL_ExtField _XVolumeParam_25 = { "ioVDRefNum",68,2,kIntType,"long int",0,4,"short",&_XVolumeParam_26};
	VPL_ExtField _XVolumeParam_24 = { "ioVDrvInfo",66,2,kIntType,"long int",0,4,"short",&_XVolumeParam_25};
	VPL_ExtField _XVolumeParam_23 = { "ioVSigWord",64,2,kUnsignedType,"long int",0,4,"unsigned short",&_XVolumeParam_24};
	VPL_ExtField _XVolumeParam_22 = { "ioVFrBlk",62,2,kUnsignedType,"long int",0,4,"unsigned short",&_XVolumeParam_23};
	VPL_ExtField _XVolumeParam_21 = { "ioVNxtCNID",58,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_22};
	VPL_ExtField _XVolumeParam_20 = { "ioAlBlSt",56,2,kUnsignedType,"long int",0,4,"unsigned short",&_XVolumeParam_21};
	VPL_ExtField _XVolumeParam_19 = { "ioVClpSiz",52,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_20};
	VPL_ExtField _XVolumeParam_18 = { "ioVAlBlkSiz",48,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_19};
	VPL_ExtField _XVolumeParam_17 = { "ioVNmAlBlks",46,2,kUnsignedType,"long int",0,4,"unsigned short",&_XVolumeParam_18};
	VPL_ExtField _XVolumeParam_16 = { "ioAllocPtr",44,2,kUnsignedType,"long int",0,4,"unsigned short",&_XVolumeParam_17};
	VPL_ExtField _XVolumeParam_15 = { "ioVBitMap",42,2,kUnsignedType,"long int",0,4,"unsigned short",&_XVolumeParam_16};
	VPL_ExtField _XVolumeParam_14 = { "ioVNmFls",40,2,kUnsignedType,"long int",0,4,"unsigned short",&_XVolumeParam_15};
	VPL_ExtField _XVolumeParam_13 = { "ioVAtrb",38,2,kIntType,"long int",0,4,"short",&_XVolumeParam_14};
	VPL_ExtField _XVolumeParam_12 = { "ioVLsMod",34,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_13};
	VPL_ExtField _XVolumeParam_11 = { "ioVCrDate",30,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_12};
	VPL_ExtField _XVolumeParam_10 = { "ioVolIndex",28,2,kIntType,"long int",0,4,"short",&_XVolumeParam_11};
	VPL_ExtField _XVolumeParam_9 = { "ioXVersion",24,4,kUnsignedType,"long int",0,4,"unsigned long",&_XVolumeParam_10};
	VPL_ExtField _XVolumeParam_8 = { "ioVRefNum",22,2,kIntType,"long int",0,4,"short",&_XVolumeParam_9};
	VPL_ExtField _XVolumeParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_XVolumeParam_8};
	VPL_ExtField _XVolumeParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_XVolumeParam_7};
	VPL_ExtField _XVolumeParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_XVolumeParam_6};
	VPL_ExtField _XVolumeParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_XVolumeParam_5};
	VPL_ExtField _XVolumeParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_XVolumeParam_4};
	VPL_ExtField _XVolumeParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_XVolumeParam_3};
	VPL_ExtField _XVolumeParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_XVolumeParam_2};
	VPL_ExtStructure _XVolumeParam_S = {"XVolumeParam",&_XVolumeParam_1};

	VPL_ExtField _XIOParam_17 = { "ioWPosOffset",46,8,kStructureType,"NULL",0,0,"wide",NULL};
	VPL_ExtField _XIOParam_16 = { "ioPosMode",44,2,kIntType,"NULL",0,0,"short",&_XIOParam_17};
	VPL_ExtField _XIOParam_15 = { "ioActCount",40,4,kIntType,"NULL",0,0,"long int",&_XIOParam_16};
	VPL_ExtField _XIOParam_14 = { "ioReqCount",36,4,kIntType,"NULL",0,0,"long int",&_XIOParam_15};
	VPL_ExtField _XIOParam_13 = { "ioBuffer",32,4,kPointerType,"char",1,1,"T*",&_XIOParam_14};
	VPL_ExtField _XIOParam_12 = { "ioMisc",28,4,kPointerType,"char",1,1,"T*",&_XIOParam_13};
	VPL_ExtField _XIOParam_11 = { "ioPermssn",27,1,kIntType,"char",1,1,"signed char",&_XIOParam_12};
	VPL_ExtField _XIOParam_10 = { "ioVersNum",26,1,kIntType,"char",1,1,"signed char",&_XIOParam_11};
	VPL_ExtField _XIOParam_9 = { "ioRefNum",24,2,kIntType,"char",1,1,"short",&_XIOParam_10};
	VPL_ExtField _XIOParam_8 = { "ioVRefNum",22,2,kIntType,"char",1,1,"short",&_XIOParam_9};
	VPL_ExtField _XIOParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_XIOParam_8};
	VPL_ExtField _XIOParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_XIOParam_7};
	VPL_ExtField _XIOParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_XIOParam_6};
	VPL_ExtField _XIOParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_XIOParam_5};
	VPL_ExtField _XIOParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_XIOParam_4};
	VPL_ExtField _XIOParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_XIOParam_3};
	VPL_ExtField _XIOParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_XIOParam_2};
	VPL_ExtStructure _XIOParam_S = {"XIOParam",&_XIOParam_1};

	VPL_ExtField _HVolumeParam_32 = { "ioVFndrInfo",90,32,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _HVolumeParam_31 = { "ioVDirCnt",86,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_32};
	VPL_ExtField _HVolumeParam_30 = { "ioVFilCnt",82,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_31};
	VPL_ExtField _HVolumeParam_29 = { "ioVWrCnt",78,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_30};
	VPL_ExtField _HVolumeParam_28 = { "ioVSeqNum",76,2,kIntType,"long int",0,4,"short",&_HVolumeParam_29};
	VPL_ExtField _HVolumeParam_27 = { "ioVBkUp",72,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_28};
	VPL_ExtField _HVolumeParam_26 = { "ioVFSID",70,2,kIntType,"long int",0,4,"short",&_HVolumeParam_27};
	VPL_ExtField _HVolumeParam_25 = { "ioVDRefNum",68,2,kIntType,"long int",0,4,"short",&_HVolumeParam_26};
	VPL_ExtField _HVolumeParam_24 = { "ioVDrvInfo",66,2,kIntType,"long int",0,4,"short",&_HVolumeParam_25};
	VPL_ExtField _HVolumeParam_23 = { "ioVSigWord",64,2,kUnsignedType,"long int",0,4,"unsigned short",&_HVolumeParam_24};
	VPL_ExtField _HVolumeParam_22 = { "ioVFrBlk",62,2,kUnsignedType,"long int",0,4,"unsigned short",&_HVolumeParam_23};
	VPL_ExtField _HVolumeParam_21 = { "ioVNxtCNID",58,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_22};
	VPL_ExtField _HVolumeParam_20 = { "ioAlBlSt",56,2,kUnsignedType,"long int",0,4,"unsigned short",&_HVolumeParam_21};
	VPL_ExtField _HVolumeParam_19 = { "ioVClpSiz",52,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_20};
	VPL_ExtField _HVolumeParam_18 = { "ioVAlBlkSiz",48,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_19};
	VPL_ExtField _HVolumeParam_17 = { "ioVNmAlBlks",46,2,kUnsignedType,"long int",0,4,"unsigned short",&_HVolumeParam_18};
	VPL_ExtField _HVolumeParam_16 = { "ioAllocPtr",44,2,kUnsignedType,"long int",0,4,"unsigned short",&_HVolumeParam_17};
	VPL_ExtField _HVolumeParam_15 = { "ioVBitMap",42,2,kUnsignedType,"long int",0,4,"unsigned short",&_HVolumeParam_16};
	VPL_ExtField _HVolumeParam_14 = { "ioVNmFls",40,2,kUnsignedType,"long int",0,4,"unsigned short",&_HVolumeParam_15};
	VPL_ExtField _HVolumeParam_13 = { "ioVAtrb",38,2,kIntType,"long int",0,4,"short",&_HVolumeParam_14};
	VPL_ExtField _HVolumeParam_12 = { "ioVLsMod",34,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_13};
	VPL_ExtField _HVolumeParam_11 = { "ioVCrDate",30,4,kUnsignedType,"long int",0,4,"unsigned long",&_HVolumeParam_12};
	VPL_ExtField _HVolumeParam_10 = { "ioVolIndex",28,2,kIntType,"long int",0,4,"short",&_HVolumeParam_11};
	VPL_ExtField _HVolumeParam_9 = { "filler2",24,4,kIntType,"long int",0,4,"long int",&_HVolumeParam_10};
	VPL_ExtField _HVolumeParam_8 = { "ioVRefNum",22,2,kIntType,"long int",0,4,"short",&_HVolumeParam_9};
	VPL_ExtField _HVolumeParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_HVolumeParam_8};
	VPL_ExtField _HVolumeParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_HVolumeParam_7};
	VPL_ExtField _HVolumeParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_HVolumeParam_6};
	VPL_ExtField _HVolumeParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_HVolumeParam_5};
	VPL_ExtField _HVolumeParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_HVolumeParam_4};
	VPL_ExtField _HVolumeParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_HVolumeParam_3};
	VPL_ExtField _HVolumeParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_HVolumeParam_2};
	VPL_ExtStructure _HVolumeParam_S = {"HVolumeParam",&_HVolumeParam_1};

	VPL_ExtField _HFileParam_24 = { "ioFlMdDat",76,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _HFileParam_23 = { "ioFlCrDat",72,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFileParam_24};
	VPL_ExtField _HFileParam_22 = { "ioFlRPyLen",68,4,kIntType,"NULL",0,0,"long int",&_HFileParam_23};
	VPL_ExtField _HFileParam_21 = { "ioFlRLgLen",64,4,kIntType,"NULL",0,0,"long int",&_HFileParam_22};
	VPL_ExtField _HFileParam_20 = { "ioFlRStBlk",62,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFileParam_21};
	VPL_ExtField _HFileParam_19 = { "ioFlPyLen",58,4,kIntType,"NULL",0,0,"long int",&_HFileParam_20};
	VPL_ExtField _HFileParam_18 = { "ioFlLgLen",54,4,kIntType,"NULL",0,0,"long int",&_HFileParam_19};
	VPL_ExtField _HFileParam_17 = { "ioFlStBlk",52,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFileParam_18};
	VPL_ExtField _HFileParam_16 = { "ioDirID",48,4,kIntType,"NULL",0,0,"long int",&_HFileParam_17};
	VPL_ExtField _HFileParam_15 = { "ioFlFndrInfo",32,16,kStructureType,"NULL",0,0,"FInfo",&_HFileParam_16};
	VPL_ExtField _HFileParam_14 = { "ioFlVersNum",31,1,kIntType,"NULL",0,0,"signed char",&_HFileParam_15};
	VPL_ExtField _HFileParam_13 = { "ioFlAttrib",30,1,kIntType,"NULL",0,0,"signed char",&_HFileParam_14};
	VPL_ExtField _HFileParam_12 = { "ioFDirIndex",28,2,kIntType,"NULL",0,0,"short",&_HFileParam_13};
	VPL_ExtField _HFileParam_11 = { "filler1",27,1,kIntType,"NULL",0,0,"signed char",&_HFileParam_12};
	VPL_ExtField _HFileParam_10 = { "ioFVersNum",26,1,kIntType,"NULL",0,0,"signed char",&_HFileParam_11};
	VPL_ExtField _HFileParam_9 = { "ioFRefNum",24,2,kIntType,"NULL",0,0,"short",&_HFileParam_10};
	VPL_ExtField _HFileParam_8 = { "ioVRefNum",22,2,kIntType,"NULL",0,0,"short",&_HFileParam_9};
	VPL_ExtField _HFileParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_HFileParam_8};
	VPL_ExtField _HFileParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_HFileParam_7};
	VPL_ExtField _HFileParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_HFileParam_6};
	VPL_ExtField _HFileParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_HFileParam_5};
	VPL_ExtField _HFileParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_HFileParam_4};
	VPL_ExtField _HFileParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_HFileParam_3};
	VPL_ExtField _HFileParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_HFileParam_2};
	VPL_ExtStructure _HFileParam_S = {"HFileParam",&_HFileParam_1};

	VPL_ExtField _HIOParam_17 = { "ioPosOffset",46,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _HIOParam_16 = { "ioPosMode",44,2,kIntType,"NULL",0,0,"short",&_HIOParam_17};
	VPL_ExtField _HIOParam_15 = { "ioActCount",40,4,kIntType,"NULL",0,0,"long int",&_HIOParam_16};
	VPL_ExtField _HIOParam_14 = { "ioReqCount",36,4,kIntType,"NULL",0,0,"long int",&_HIOParam_15};
	VPL_ExtField _HIOParam_13 = { "ioBuffer",32,4,kPointerType,"char",1,1,"T*",&_HIOParam_14};
	VPL_ExtField _HIOParam_12 = { "ioMisc",28,4,kPointerType,"char",1,1,"T*",&_HIOParam_13};
	VPL_ExtField _HIOParam_11 = { "ioPermssn",27,1,kIntType,"char",1,1,"signed char",&_HIOParam_12};
	VPL_ExtField _HIOParam_10 = { "ioVersNum",26,1,kIntType,"char",1,1,"signed char",&_HIOParam_11};
	VPL_ExtField _HIOParam_9 = { "ioRefNum",24,2,kIntType,"char",1,1,"short",&_HIOParam_10};
	VPL_ExtField _HIOParam_8 = { "ioVRefNum",22,2,kIntType,"char",1,1,"short",&_HIOParam_9};
	VPL_ExtField _HIOParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_HIOParam_8};
	VPL_ExtField _HIOParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_HIOParam_7};
	VPL_ExtField _HIOParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_HIOParam_6};
	VPL_ExtField _HIOParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_HIOParam_5};
	VPL_ExtField _HIOParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_HIOParam_4};
	VPL_ExtField _HIOParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_HIOParam_3};
	VPL_ExtField _HIOParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_HIOParam_2};
	VPL_ExtStructure _HIOParam_S = {"HIOParam",&_HIOParam_1};

	VPL_ExtField _DTPBRec_25 = { "ioAPPLParID",100,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _DTPBRec_24 = { "ioFiller4",72,28,kPointerType,"short",0,2,NULL,&_DTPBRec_25};
	VPL_ExtField _DTPBRec_23 = { "ioDTPyLen",68,4,kIntType,"short",0,2,"long int",&_DTPBRec_24};
	VPL_ExtField _DTPBRec_22 = { "ioDTLgLen",64,4,kIntType,"short",0,2,"long int",&_DTPBRec_23};
	VPL_ExtField _DTPBRec_21 = { "ioFiller3",60,4,kIntType,"short",0,2,"long int",&_DTPBRec_22};
	VPL_ExtField _DTPBRec_20 = { "ioFileType",56,4,kUnsignedType,"short",0,2,"unsigned long",&_DTPBRec_21};
	VPL_ExtField _DTPBRec_19 = { "ioFileCreator",52,4,kUnsignedType,"short",0,2,"unsigned long",&_DTPBRec_20};
	VPL_ExtField _DTPBRec_18 = { "ioDirID",48,4,kIntType,"short",0,2,"long int",&_DTPBRec_19};
	VPL_ExtField _DTPBRec_17 = { "ioFiller2",46,2,kIntType,"short",0,2,"short",&_DTPBRec_18};
	VPL_ExtField _DTPBRec_16 = { "ioIconType",45,1,kUnsignedType,"short",0,2,"unsigned char",&_DTPBRec_17};
	VPL_ExtField _DTPBRec_15 = { "ioFiller1",44,1,kIntType,"short",0,2,"signed char",&_DTPBRec_16};
	VPL_ExtField _DTPBRec_14 = { "ioDTActCount",40,4,kIntType,"short",0,2,"long int",&_DTPBRec_15};
	VPL_ExtField _DTPBRec_13 = { "ioDTReqCount",36,4,kIntType,"short",0,2,"long int",&_DTPBRec_14};
	VPL_ExtField _DTPBRec_12 = { "ioDTBuffer",32,4,kPointerType,"char",1,1,"T*",&_DTPBRec_13};
	VPL_ExtField _DTPBRec_11 = { "ioTagInfo",28,4,kIntType,"char",1,1,"long int",&_DTPBRec_12};
	VPL_ExtField _DTPBRec_10 = { "ioIndex",26,2,kIntType,"char",1,1,"short",&_DTPBRec_11};
	VPL_ExtField _DTPBRec_9 = { "ioDTRefNum",24,2,kIntType,"char",1,1,"short",&_DTPBRec_10};
	VPL_ExtField _DTPBRec_8 = { "ioVRefNum",22,2,kIntType,"char",1,1,"short",&_DTPBRec_9};
	VPL_ExtField _DTPBRec_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_DTPBRec_8};
	VPL_ExtField _DTPBRec_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_DTPBRec_7};
	VPL_ExtField _DTPBRec_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_DTPBRec_6};
	VPL_ExtField _DTPBRec_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_DTPBRec_5};
	VPL_ExtField _DTPBRec_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_DTPBRec_4};
	VPL_ExtField _DTPBRec_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_DTPBRec_3};
	VPL_ExtField _DTPBRec_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_DTPBRec_2};
	VPL_ExtStructure _DTPBRec_S = {"DTPBRec",&_DTPBRec_1};

	VPL_ExtField _AFPAlternateAddress_3 = { "fAddressList",2,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _AFPAlternateAddress_2 = { "fAddressCount",1,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_AFPAlternateAddress_3};
	VPL_ExtField _AFPAlternateAddress_1 = { "fVersion",0,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_AFPAlternateAddress_2};
	VPL_ExtStructure _AFPAlternateAddress_S = {"AFPAlternateAddress",&_AFPAlternateAddress_1};

	VPL_ExtField _AFPTagData_3 = { "fData",2,1,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _AFPTagData_2 = { "fType",1,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_AFPTagData_3};
	VPL_ExtField _AFPTagData_1 = { "fLength",0,1,kUnsignedType,"unsigned char",0,1,"unsigned char",&_AFPTagData_2};
	VPL_ExtStructure _AFPTagData_S = {"AFPTagData",&_AFPTagData_1};

	VPL_ExtField _AFPXVolMountInfo_16 = { "AFPData",30,176,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _AFPXVolMountInfo_15 = { "alternateAddressOffset",28,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_16};
	VPL_ExtField _AFPXVolMountInfo_14 = { "uamNameOffset",26,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_15};
	VPL_ExtField _AFPXVolMountInfo_13 = { "extendedFlags",24,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_14};
	VPL_ExtField _AFPXVolMountInfo_12 = { "volPasswordOffset",22,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_13};
	VPL_ExtField _AFPXVolMountInfo_11 = { "userPasswordOffset",20,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_12};
	VPL_ExtField _AFPXVolMountInfo_10 = { "userNameOffset",18,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_11};
	VPL_ExtField _AFPXVolMountInfo_9 = { "volNameOffset",16,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_10};
	VPL_ExtField _AFPXVolMountInfo_8 = { "serverNameOffset",14,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_9};
	VPL_ExtField _AFPXVolMountInfo_7 = { "zoneNameOffset",12,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_8};
	VPL_ExtField _AFPXVolMountInfo_6 = { "uamType",10,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_7};
	VPL_ExtField _AFPXVolMountInfo_5 = { "nbpCount",9,1,kIntType,"char",0,1,"signed char",&_AFPXVolMountInfo_6};
	VPL_ExtField _AFPXVolMountInfo_4 = { "nbpInterval",8,1,kIntType,"char",0,1,"signed char",&_AFPXVolMountInfo_5};
	VPL_ExtField _AFPXVolMountInfo_3 = { "flags",6,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_4};
	VPL_ExtField _AFPXVolMountInfo_2 = { "media",2,4,kUnsignedType,"char",0,1,"unsigned long",&_AFPXVolMountInfo_3};
	VPL_ExtField _AFPXVolMountInfo_1 = { "length",0,2,kIntType,"char",0,1,"short",&_AFPXVolMountInfo_2};
	VPL_ExtStructure _AFPXVolMountInfo_S = {"AFPXVolMountInfo",&_AFPXVolMountInfo_1};

	VPL_ExtField _AFPVolMountInfo_13 = { "AFPData",24,144,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _AFPVolMountInfo_12 = { "volPasswordOffset",22,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_13};
	VPL_ExtField _AFPVolMountInfo_11 = { "userPasswordOffset",20,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_12};
	VPL_ExtField _AFPVolMountInfo_10 = { "userNameOffset",18,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_11};
	VPL_ExtField _AFPVolMountInfo_9 = { "volNameOffset",16,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_10};
	VPL_ExtField _AFPVolMountInfo_8 = { "serverNameOffset",14,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_9};
	VPL_ExtField _AFPVolMountInfo_7 = { "zoneNameOffset",12,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_8};
	VPL_ExtField _AFPVolMountInfo_6 = { "uamType",10,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_7};
	VPL_ExtField _AFPVolMountInfo_5 = { "nbpCount",9,1,kIntType,"char",0,1,"signed char",&_AFPVolMountInfo_6};
	VPL_ExtField _AFPVolMountInfo_4 = { "nbpInterval",8,1,kIntType,"char",0,1,"signed char",&_AFPVolMountInfo_5};
	VPL_ExtField _AFPVolMountInfo_3 = { "flags",6,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_4};
	VPL_ExtField _AFPVolMountInfo_2 = { "media",2,4,kUnsignedType,"char",0,1,"unsigned long",&_AFPVolMountInfo_3};
	VPL_ExtField _AFPVolMountInfo_1 = { "length",0,2,kIntType,"char",0,1,"short",&_AFPVolMountInfo_2};
	VPL_ExtStructure _AFPVolMountInfo_S = {"AFPVolMountInfo",&_AFPVolMountInfo_1};

	VPL_ExtField _VolumeMountInfoHeader_3 = { "flags",6,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VolumeMountInfoHeader_2 = { "media",2,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VolumeMountInfoHeader_3};
	VPL_ExtField _VolumeMountInfoHeader_1 = { "length",0,2,kIntType,"NULL",0,0,"short",&_VolumeMountInfoHeader_2};
	VPL_ExtStructure _VolumeMountInfoHeader_S = {"VolumeMountInfoHeader",&_VolumeMountInfoHeader_1};

	VPL_ExtField _VolMountInfoHeader_2 = { "media",2,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VolMountInfoHeader_1 = { "length",0,2,kIntType,"NULL",0,0,"short",&_VolMountInfoHeader_2};
	VPL_ExtStructure _VolMountInfoHeader_S = {"VolMountInfoHeader",&_VolMountInfoHeader_1};

	VPL_ExtField _FSSpec_3 = { "name",6,64,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _FSSpec_2 = { "parID",2,4,kIntType,"unsigned char",0,1,"long int",&_FSSpec_3};
	VPL_ExtField _FSSpec_1 = { "vRefNum",0,2,kIntType,"unsigned char",0,1,"short",&_FSSpec_2};
	VPL_ExtStructure _FSSpec_S = {"FSSpec",&_FSSpec_1};

	VPL_ExtField _CatPositionRec_2 = { "priv",4,12,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _CatPositionRec_1 = { "initialize",0,4,kIntType,"short",0,2,"long int",&_CatPositionRec_2};
	VPL_ExtStructure _CatPositionRec_S = {"CatPositionRec",&_CatPositionRec_1};

	VPL_ExtField _XCInfoPBRec_15 = { "ioDirID",48,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _XCInfoPBRec_14 = { "filler3",40,8,kPointerType,"long int",0,4,NULL,&_XCInfoPBRec_15};
	VPL_ExtField _XCInfoPBRec_13 = { "ioPDAuxType",36,4,kIntType,"long int",0,4,"long int",&_XCInfoPBRec_14};
	VPL_ExtField _XCInfoPBRec_12 = { "ioPDType",34,2,kIntType,"long int",0,4,"short",&_XCInfoPBRec_13};
	VPL_ExtField _XCInfoPBRec_11 = { "filler2",32,2,kIntType,"long int",0,4,"short",&_XCInfoPBRec_12};
	VPL_ExtField _XCInfoPBRec_10 = { "ioShortNamePtr",28,4,kPointerType,"unsigned char",1,1,"T*",&_XCInfoPBRec_11};
	VPL_ExtField _XCInfoPBRec_9 = { "filler1",24,4,kIntType,"unsigned char",1,1,"long int",&_XCInfoPBRec_10};
	VPL_ExtField _XCInfoPBRec_8 = { "ioVRefNum",22,2,kIntType,"unsigned char",1,1,"short",&_XCInfoPBRec_9};
	VPL_ExtField _XCInfoPBRec_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_XCInfoPBRec_8};
	VPL_ExtField _XCInfoPBRec_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_XCInfoPBRec_7};
	VPL_ExtField _XCInfoPBRec_5 = { "ioCompletion",12,4,kPointerType,"long int",1,4,"T*",&_XCInfoPBRec_6};
	VPL_ExtField _XCInfoPBRec_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_XCInfoPBRec_5};
	VPL_ExtField _XCInfoPBRec_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_XCInfoPBRec_4};
	VPL_ExtField _XCInfoPBRec_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_XCInfoPBRec_3};
	VPL_ExtField _XCInfoPBRec_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_XCInfoPBRec_2};
	VPL_ExtStructure _XCInfoPBRec_S = {"XCInfoPBRec",&_XCInfoPBRec_1};

	VPL_ExtField _DirInfo_23 = { "ioDrParID",100,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _DirInfo_22 = { "ioDrFndrInfo",84,16,kStructureType,"NULL",0,0,"DXInfo",&_DirInfo_23};
	VPL_ExtField _DirInfo_21 = { "ioDrBkDat",80,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DirInfo_22};
	VPL_ExtField _DirInfo_20 = { "ioDrMdDat",76,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DirInfo_21};
	VPL_ExtField _DirInfo_19 = { "ioDrCrDat",72,4,kUnsignedType,"NULL",0,0,"unsigned long",&_DirInfo_20};
	VPL_ExtField _DirInfo_18 = { "filler3",54,18,kPointerType,"short",0,2,NULL,&_DirInfo_19};
	VPL_ExtField _DirInfo_17 = { "ioDrNmFls",52,2,kUnsignedType,"short",0,2,"unsigned short",&_DirInfo_18};
	VPL_ExtField _DirInfo_16 = { "ioDrDirID",48,4,kIntType,"short",0,2,"long int",&_DirInfo_17};
	VPL_ExtField _DirInfo_15 = { "ioDrUsrWds",32,16,kStructureType,"short",0,2,"DInfo",&_DirInfo_16};
	VPL_ExtField _DirInfo_14 = { "ioACUser",31,1,kIntType,"short",0,2,"signed char",&_DirInfo_15};
	VPL_ExtField _DirInfo_13 = { "ioFlAttrib",30,1,kIntType,"short",0,2,"signed char",&_DirInfo_14};
	VPL_ExtField _DirInfo_12 = { "ioFDirIndex",28,2,kIntType,"short",0,2,"short",&_DirInfo_13};
	VPL_ExtField _DirInfo_11 = { "filler1",27,1,kIntType,"short",0,2,"signed char",&_DirInfo_12};
	VPL_ExtField _DirInfo_10 = { "ioFVersNum",26,1,kIntType,"short",0,2,"signed char",&_DirInfo_11};
	VPL_ExtField _DirInfo_9 = { "ioFRefNum",24,2,kIntType,"short",0,2,"short",&_DirInfo_10};
	VPL_ExtField _DirInfo_8 = { "ioVRefNum",22,2,kIntType,"short",0,2,"short",&_DirInfo_9};
	VPL_ExtField _DirInfo_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_DirInfo_8};
	VPL_ExtField _DirInfo_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_DirInfo_7};
	VPL_ExtField _DirInfo_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_DirInfo_6};
	VPL_ExtField _DirInfo_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_DirInfo_5};
	VPL_ExtField _DirInfo_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_DirInfo_4};
	VPL_ExtField _DirInfo_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_DirInfo_3};
	VPL_ExtField _DirInfo_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_DirInfo_2};
	VPL_ExtStructure _DirInfo_S = {"DirInfo",&_DirInfo_1};

	VPL_ExtField _HFileInfo_28 = { "ioFlClpSiz",104,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _HFileInfo_27 = { "ioFlParID",100,4,kIntType,"NULL",0,0,"long int",&_HFileInfo_28};
	VPL_ExtField _HFileInfo_26 = { "ioFlXFndrInfo",84,16,kStructureType,"NULL",0,0,"FXInfo",&_HFileInfo_27};
	VPL_ExtField _HFileInfo_25 = { "ioFlBkDat",80,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFileInfo_26};
	VPL_ExtField _HFileInfo_24 = { "ioFlMdDat",76,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFileInfo_25};
	VPL_ExtField _HFileInfo_23 = { "ioFlCrDat",72,4,kUnsignedType,"NULL",0,0,"unsigned long",&_HFileInfo_24};
	VPL_ExtField _HFileInfo_22 = { "ioFlRPyLen",68,4,kIntType,"NULL",0,0,"long int",&_HFileInfo_23};
	VPL_ExtField _HFileInfo_21 = { "ioFlRLgLen",64,4,kIntType,"NULL",0,0,"long int",&_HFileInfo_22};
	VPL_ExtField _HFileInfo_20 = { "ioFlRStBlk",62,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFileInfo_21};
	VPL_ExtField _HFileInfo_19 = { "ioFlPyLen",58,4,kIntType,"NULL",0,0,"long int",&_HFileInfo_20};
	VPL_ExtField _HFileInfo_18 = { "ioFlLgLen",54,4,kIntType,"NULL",0,0,"long int",&_HFileInfo_19};
	VPL_ExtField _HFileInfo_17 = { "ioFlStBlk",52,2,kUnsignedType,"NULL",0,0,"unsigned short",&_HFileInfo_18};
	VPL_ExtField _HFileInfo_16 = { "ioDirID",48,4,kIntType,"NULL",0,0,"long int",&_HFileInfo_17};
	VPL_ExtField _HFileInfo_15 = { "ioFlFndrInfo",32,16,kStructureType,"NULL",0,0,"FInfo",&_HFileInfo_16};
	VPL_ExtField _HFileInfo_14 = { "ioACUser",31,1,kIntType,"NULL",0,0,"signed char",&_HFileInfo_15};
	VPL_ExtField _HFileInfo_13 = { "ioFlAttrib",30,1,kIntType,"NULL",0,0,"signed char",&_HFileInfo_14};
	VPL_ExtField _HFileInfo_12 = { "ioFDirIndex",28,2,kIntType,"NULL",0,0,"short",&_HFileInfo_13};
	VPL_ExtField _HFileInfo_11 = { "filler1",27,1,kIntType,"NULL",0,0,"signed char",&_HFileInfo_12};
	VPL_ExtField _HFileInfo_10 = { "ioFVersNum",26,1,kIntType,"NULL",0,0,"signed char",&_HFileInfo_11};
	VPL_ExtField _HFileInfo_9 = { "ioFRefNum",24,2,kIntType,"NULL",0,0,"short",&_HFileInfo_10};
	VPL_ExtField _HFileInfo_8 = { "ioVRefNum",22,2,kIntType,"NULL",0,0,"short",&_HFileInfo_9};
	VPL_ExtField _HFileInfo_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_HFileInfo_8};
	VPL_ExtField _HFileInfo_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_HFileInfo_7};
	VPL_ExtField _HFileInfo_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_HFileInfo_6};
	VPL_ExtField _HFileInfo_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_HFileInfo_5};
	VPL_ExtField _HFileInfo_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_HFileInfo_4};
	VPL_ExtField _HFileInfo_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_HFileInfo_3};
	VPL_ExtField _HFileInfo_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_HFileInfo_2};
	VPL_ExtStructure _HFileInfo_S = {"HFileInfo",&_HFileInfo_1};

	VPL_ExtField _MultiDevParam_14 = { "ioSEBlkPtr",34,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _MultiDevParam_13 = { "ioMFlags",32,2,kIntType,"char",1,1,"short",&_MultiDevParam_14};
	VPL_ExtField _MultiDevParam_12 = { "ioMMix",28,4,kPointerType,"char",1,1,"T*",&_MultiDevParam_13};
	VPL_ExtField _MultiDevParam_11 = { "ioMPermssn",27,1,kIntType,"char",1,1,"signed char",&_MultiDevParam_12};
	VPL_ExtField _MultiDevParam_10 = { "ioMVersNum",26,1,kIntType,"char",1,1,"signed char",&_MultiDevParam_11};
	VPL_ExtField _MultiDevParam_9 = { "ioMRefNum",24,2,kIntType,"char",1,1,"short",&_MultiDevParam_10};
	VPL_ExtField _MultiDevParam_8 = { "ioVRefNum",22,2,kIntType,"char",1,1,"short",&_MultiDevParam_9};
	VPL_ExtField _MultiDevParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_MultiDevParam_8};
	VPL_ExtField _MultiDevParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_MultiDevParam_7};
	VPL_ExtField _MultiDevParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_MultiDevParam_6};
	VPL_ExtField _MultiDevParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_MultiDevParam_5};
	VPL_ExtField _MultiDevParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_MultiDevParam_4};
	VPL_ExtField _MultiDevParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_MultiDevParam_3};
	VPL_ExtField _MultiDevParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_MultiDevParam_2};
	VPL_ExtStructure _MultiDevParam_S = {"MultiDevParam",&_MultiDevParam_1};

	VPL_ExtField _SlotDevParam_15 = { "ioID",35,1,kIntType,"NULL",0,0,"signed char",NULL};
	VPL_ExtField _SlotDevParam_14 = { "ioSlot",34,1,kIntType,"NULL",0,0,"signed char",&_SlotDevParam_15};
	VPL_ExtField _SlotDevParam_13 = { "ioSFlags",32,2,kIntType,"NULL",0,0,"short",&_SlotDevParam_14};
	VPL_ExtField _SlotDevParam_12 = { "ioSMix",28,4,kPointerType,"char",1,1,"T*",&_SlotDevParam_13};
	VPL_ExtField _SlotDevParam_11 = { "ioSPermssn",27,1,kIntType,"char",1,1,"signed char",&_SlotDevParam_12};
	VPL_ExtField _SlotDevParam_10 = { "ioSVersNum",26,1,kIntType,"char",1,1,"signed char",&_SlotDevParam_11};
	VPL_ExtField _SlotDevParam_9 = { "ioSRefNum",24,2,kIntType,"char",1,1,"short",&_SlotDevParam_10};
	VPL_ExtField _SlotDevParam_8 = { "ioVRefNum",22,2,kIntType,"char",1,1,"short",&_SlotDevParam_9};
	VPL_ExtField _SlotDevParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_SlotDevParam_8};
	VPL_ExtField _SlotDevParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_SlotDevParam_7};
	VPL_ExtField _SlotDevParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_SlotDevParam_6};
	VPL_ExtField _SlotDevParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_SlotDevParam_5};
	VPL_ExtField _SlotDevParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_SlotDevParam_4};
	VPL_ExtField _SlotDevParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_SlotDevParam_3};
	VPL_ExtField _SlotDevParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_SlotDevParam_2};
	VPL_ExtStructure _SlotDevParam_S = {"SlotDevParam",&_SlotDevParam_1};

	VPL_ExtField _CntrlParam_11 = { "csParam",28,22,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _CntrlParam_10 = { "csCode",26,2,kIntType,"short",0,2,"short",&_CntrlParam_11};
	VPL_ExtField _CntrlParam_9 = { "ioCRefNum",24,2,kIntType,"short",0,2,"short",&_CntrlParam_10};
	VPL_ExtField _CntrlParam_8 = { "ioVRefNum",22,2,kIntType,"short",0,2,"short",&_CntrlParam_9};
	VPL_ExtField _CntrlParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_CntrlParam_8};
	VPL_ExtField _CntrlParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_CntrlParam_7};
	VPL_ExtField _CntrlParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_CntrlParam_6};
	VPL_ExtField _CntrlParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_CntrlParam_5};
	VPL_ExtField _CntrlParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_CntrlParam_4};
	VPL_ExtField _CntrlParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_CntrlParam_3};
	VPL_ExtField _CntrlParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_CntrlParam_2};
	VPL_ExtStructure _CntrlParam_S = {"CntrlParam",&_CntrlParam_1};

	VPL_ExtField _VolumeParam_22 = { "ioVFrBlk",62,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VolumeParam_21 = { "ioVNxtFNum",58,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VolumeParam_22};
	VPL_ExtField _VolumeParam_20 = { "ioAlBlSt",56,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VolumeParam_21};
	VPL_ExtField _VolumeParam_19 = { "ioVClpSiz",52,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VolumeParam_20};
	VPL_ExtField _VolumeParam_18 = { "ioVAlBlkSiz",48,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VolumeParam_19};
	VPL_ExtField _VolumeParam_17 = { "ioVNmAlBlks",46,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VolumeParam_18};
	VPL_ExtField _VolumeParam_16 = { "ioVBlLn",44,2,kIntType,"NULL",0,0,"short",&_VolumeParam_17};
	VPL_ExtField _VolumeParam_15 = { "ioVDirSt",42,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VolumeParam_16};
	VPL_ExtField _VolumeParam_14 = { "ioVNmFls",40,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VolumeParam_15};
	VPL_ExtField _VolumeParam_13 = { "ioVAtrb",38,2,kUnsignedType,"NULL",0,0,"unsigned short",&_VolumeParam_14};
	VPL_ExtField _VolumeParam_12 = { "ioVLsBkUp",34,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VolumeParam_13};
	VPL_ExtField _VolumeParam_11 = { "ioVCrDate",30,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VolumeParam_12};
	VPL_ExtField _VolumeParam_10 = { "ioVolIndex",28,2,kIntType,"NULL",0,0,"short",&_VolumeParam_11};
	VPL_ExtField _VolumeParam_9 = { "filler2",24,4,kIntType,"NULL",0,0,"long int",&_VolumeParam_10};
	VPL_ExtField _VolumeParam_8 = { "ioVRefNum",22,2,kIntType,"NULL",0,0,"short",&_VolumeParam_9};
	VPL_ExtField _VolumeParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_VolumeParam_8};
	VPL_ExtField _VolumeParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_VolumeParam_7};
	VPL_ExtField _VolumeParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_VolumeParam_6};
	VPL_ExtField _VolumeParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_VolumeParam_5};
	VPL_ExtField _VolumeParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_VolumeParam_4};
	VPL_ExtField _VolumeParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_VolumeParam_3};
	VPL_ExtField _VolumeParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_VolumeParam_2};
	VPL_ExtStructure _VolumeParam_S = {"VolumeParam",&_VolumeParam_1};

	VPL_ExtField _FileParam_24 = { "ioFlMdDat",76,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _FileParam_23 = { "ioFlCrDat",72,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FileParam_24};
	VPL_ExtField _FileParam_22 = { "ioFlRPyLen",68,4,kIntType,"NULL",0,0,"long int",&_FileParam_23};
	VPL_ExtField _FileParam_21 = { "ioFlRLgLen",64,4,kIntType,"NULL",0,0,"long int",&_FileParam_22};
	VPL_ExtField _FileParam_20 = { "ioFlRStBlk",62,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FileParam_21};
	VPL_ExtField _FileParam_19 = { "ioFlPyLen",58,4,kIntType,"NULL",0,0,"long int",&_FileParam_20};
	VPL_ExtField _FileParam_18 = { "ioFlLgLen",54,4,kIntType,"NULL",0,0,"long int",&_FileParam_19};
	VPL_ExtField _FileParam_17 = { "ioFlStBlk",52,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FileParam_18};
	VPL_ExtField _FileParam_16 = { "ioFlNum",48,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FileParam_17};
	VPL_ExtField _FileParam_15 = { "ioFlFndrInfo",32,16,kStructureType,"NULL",0,0,"FInfo",&_FileParam_16};
	VPL_ExtField _FileParam_14 = { "ioFlVersNum",31,1,kIntType,"NULL",0,0,"signed char",&_FileParam_15};
	VPL_ExtField _FileParam_13 = { "ioFlAttrib",30,1,kIntType,"NULL",0,0,"signed char",&_FileParam_14};
	VPL_ExtField _FileParam_12 = { "ioFDirIndex",28,2,kIntType,"NULL",0,0,"short",&_FileParam_13};
	VPL_ExtField _FileParam_11 = { "filler1",27,1,kIntType,"NULL",0,0,"signed char",&_FileParam_12};
	VPL_ExtField _FileParam_10 = { "ioFVersNum",26,1,kIntType,"NULL",0,0,"signed char",&_FileParam_11};
	VPL_ExtField _FileParam_9 = { "ioFRefNum",24,2,kIntType,"NULL",0,0,"short",&_FileParam_10};
	VPL_ExtField _FileParam_8 = { "ioVRefNum",22,2,kIntType,"NULL",0,0,"short",&_FileParam_9};
	VPL_ExtField _FileParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_FileParam_8};
	VPL_ExtField _FileParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_FileParam_7};
	VPL_ExtField _FileParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_FileParam_6};
	VPL_ExtField _FileParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_FileParam_5};
	VPL_ExtField _FileParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_FileParam_4};
	VPL_ExtField _FileParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_FileParam_3};
	VPL_ExtField _FileParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_FileParam_2};
	VPL_ExtStructure _FileParam_S = {"FileParam",&_FileParam_1};

	VPL_ExtField _IOParam_17 = { "ioPosOffset",46,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _IOParam_16 = { "ioPosMode",44,2,kIntType,"NULL",0,0,"short",&_IOParam_17};
	VPL_ExtField _IOParam_15 = { "ioActCount",40,4,kIntType,"NULL",0,0,"long int",&_IOParam_16};
	VPL_ExtField _IOParam_14 = { "ioReqCount",36,4,kIntType,"NULL",0,0,"long int",&_IOParam_15};
	VPL_ExtField _IOParam_13 = { "ioBuffer",32,4,kPointerType,"char",1,1,"T*",&_IOParam_14};
	VPL_ExtField _IOParam_12 = { "ioMisc",28,4,kPointerType,"char",1,1,"T*",&_IOParam_13};
	VPL_ExtField _IOParam_11 = { "ioPermssn",27,1,kIntType,"char",1,1,"signed char",&_IOParam_12};
	VPL_ExtField _IOParam_10 = { "ioVersNum",26,1,kIntType,"char",1,1,"signed char",&_IOParam_11};
	VPL_ExtField _IOParam_9 = { "ioRefNum",24,2,kIntType,"char",1,1,"short",&_IOParam_10};
	VPL_ExtField _IOParam_8 = { "ioVRefNum",22,2,kIntType,"char",1,1,"short",&_IOParam_9};
	VPL_ExtField _IOParam_7 = { "ioNamePtr",18,4,kPointerType,"unsigned char",1,1,"T*",&_IOParam_8};
	VPL_ExtField _IOParam_6 = { "ioResult",16,2,kIntType,"unsigned char",1,1,"short",&_IOParam_7};
	VPL_ExtField _IOParam_5 = { "ioCompletion",12,4,kPointerType,"void",1,0,"T*",&_IOParam_6};
	VPL_ExtField _IOParam_4 = { "ioCmdAddr",8,4,kPointerType,"char",1,1,"T*",&_IOParam_5};
	VPL_ExtField _IOParam_3 = { "ioTrap",6,2,kIntType,"char",1,1,"short",&_IOParam_4};
	VPL_ExtField _IOParam_2 = { "qType",4,2,kIntType,"char",1,1,"short",&_IOParam_3};
	VPL_ExtField _IOParam_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_IOParam_2};
	VPL_ExtStructure _IOParam_S = {"IOParam",&_IOParam_1};

	VPL_ExtField _GetVolParmsInfoBuffer_8 = { "vMDeviceID",24,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _GetVolParmsInfoBuffer_7 = { "vMExtendedAttributes",20,4,kIntType,"void",1,0,"long int",&_GetVolParmsInfoBuffer_8};
	VPL_ExtField _GetVolParmsInfoBuffer_6 = { "vMForeignPrivID",18,2,kIntType,"void",1,0,"short",&_GetVolParmsInfoBuffer_7};
	VPL_ExtField _GetVolParmsInfoBuffer_5 = { "vMVolumeGrade",14,4,kIntType,"void",1,0,"long int",&_GetVolParmsInfoBuffer_6};
	VPL_ExtField _GetVolParmsInfoBuffer_4 = { "vMServerAdr",10,4,kIntType,"void",1,0,"long int",&_GetVolParmsInfoBuffer_5};
	VPL_ExtField _GetVolParmsInfoBuffer_3 = { "vMLocalHand",6,4,kPointerType,"char",2,1,"T*",&_GetVolParmsInfoBuffer_4};
	VPL_ExtField _GetVolParmsInfoBuffer_2 = { "vMAttrib",2,4,kIntType,"char",2,1,"long int",&_GetVolParmsInfoBuffer_3};
	VPL_ExtField _GetVolParmsInfoBuffer_1 = { "vMVersion",0,2,kIntType,"char",2,1,"short",&_GetVolParmsInfoBuffer_2};
	VPL_ExtStructure _GetVolParmsInfoBuffer_S = {"GetVolParmsInfoBuffer",&_GetVolParmsInfoBuffer_1};

	VPL_ExtField _HFSUniStr255_2 = { "unicode",2,510,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _HFSUniStr255_1 = { "length",0,2,kUnsignedType,"unsigned short",0,2,"unsigned short",&_HFSUniStr255_2};
	VPL_ExtStructure _HFSUniStr255_S = {"HFSUniStr255",&_HFSUniStr255_1};

	VPL_ExtField _DXInfo_6 = { "frPutAway",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _DXInfo_5 = { "frComment",10,2,kIntType,"NULL",0,0,"short",&_DXInfo_6};
	VPL_ExtField _DXInfo_4 = { "frXFlags",9,1,kIntType,"NULL",0,0,"signed char",&_DXInfo_5};
	VPL_ExtField _DXInfo_3 = { "frScript",8,1,kIntType,"NULL",0,0,"signed char",&_DXInfo_4};
	VPL_ExtField _DXInfo_2 = { "frOpenChain",4,4,kIntType,"NULL",0,0,"long int",&_DXInfo_3};
	VPL_ExtField _DXInfo_1 = { "frScroll",0,4,kStructureType,"NULL",0,0,"Point",&_DXInfo_2};
	VPL_ExtStructure _DXInfo_S = {"DXInfo",&_DXInfo_1};

	VPL_ExtField _DInfo_4 = { "frView",14,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _DInfo_3 = { "frLocation",10,4,kStructureType,"NULL",0,0,"Point",&_DInfo_4};
	VPL_ExtField _DInfo_2 = { "frFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_DInfo_3};
	VPL_ExtField _DInfo_1 = { "frRect",0,8,kStructureType,"NULL",0,0,"Rect",&_DInfo_2};
	VPL_ExtStructure _DInfo_S = {"DInfo",&_DInfo_1};

	VPL_ExtField _FXInfo_6 = { "fdPutAway",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _FXInfo_5 = { "fdComment",10,2,kIntType,"NULL",0,0,"short",&_FXInfo_6};
	VPL_ExtField _FXInfo_4 = { "fdXFlags",9,1,kIntType,"NULL",0,0,"signed char",&_FXInfo_5};
	VPL_ExtField _FXInfo_3 = { "fdScript",8,1,kIntType,"NULL",0,0,"signed char",&_FXInfo_4};
	VPL_ExtField _FXInfo_2 = { "fdReserved",2,6,kPointerType,"short",0,2,NULL,&_FXInfo_3};
	VPL_ExtField _FXInfo_1 = { "fdIconID",0,2,kIntType,"short",0,2,"short",&_FXInfo_2};
	VPL_ExtStructure _FXInfo_S = {"FXInfo",&_FXInfo_1};

	VPL_ExtField _FInfo_5 = { "fdFldr",14,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _FInfo_4 = { "fdLocation",10,4,kStructureType,"NULL",0,0,"Point",&_FInfo_5};
	VPL_ExtField _FInfo_3 = { "fdFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FInfo_4};
	VPL_ExtField _FInfo_2 = { "fdCreator",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FInfo_3};
	VPL_ExtField _FInfo_1 = { "fdType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FInfo_2};
	VPL_ExtStructure _FInfo_S = {"FInfo",&_FInfo_1};

	VPL_ExtField _ExtendedFolderInfo_5 = { "putAwayFolderID",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ExtendedFolderInfo_4 = { "reserved2",10,2,kIntType,"NULL",0,0,"short",&_ExtendedFolderInfo_5};
	VPL_ExtField _ExtendedFolderInfo_3 = { "extendedFinderFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ExtendedFolderInfo_4};
	VPL_ExtField _ExtendedFolderInfo_2 = { "reserved1",4,4,kIntType,"NULL",0,0,"long int",&_ExtendedFolderInfo_3};
	VPL_ExtField _ExtendedFolderInfo_1 = { "scrollPosition",0,4,kStructureType,"NULL",0,0,"Point",&_ExtendedFolderInfo_2};
	VPL_ExtStructure _ExtendedFolderInfo_S = {"ExtendedFolderInfo",&_ExtendedFolderInfo_1};

	VPL_ExtField _ExtendedFileInfo_4 = { "putAwayFolderID",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _ExtendedFileInfo_3 = { "reserved2",10,2,kIntType,"NULL",0,0,"short",&_ExtendedFileInfo_4};
	VPL_ExtField _ExtendedFileInfo_2 = { "extendedFinderFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_ExtendedFileInfo_3};
	VPL_ExtField _ExtendedFileInfo_1 = { "reserved1",0,8,kPointerType,"short",0,2,NULL,&_ExtendedFileInfo_2};
	VPL_ExtStructure _ExtendedFileInfo_S = {"ExtendedFileInfo",&_ExtendedFileInfo_1};

	VPL_ExtField _FolderInfo_4 = { "reservedField",14,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _FolderInfo_3 = { "location",10,4,kStructureType,"NULL",0,0,"Point",&_FolderInfo_4};
	VPL_ExtField _FolderInfo_2 = { "finderFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FolderInfo_3};
	VPL_ExtField _FolderInfo_1 = { "windowBounds",0,8,kStructureType,"NULL",0,0,"Rect",&_FolderInfo_2};
	VPL_ExtStructure _FolderInfo_S = {"FolderInfo",&_FolderInfo_1};

	VPL_ExtField _FileInfo_5 = { "reservedField",14,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _FileInfo_4 = { "location",10,4,kStructureType,"NULL",0,0,"Point",&_FileInfo_5};
	VPL_ExtField _FileInfo_3 = { "finderFlags",8,2,kUnsignedType,"NULL",0,0,"unsigned short",&_FileInfo_4};
	VPL_ExtField _FileInfo_2 = { "fileCreator",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FileInfo_3};
	VPL_ExtField _FileInfo_1 = { "fileType",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_FileInfo_2};
	VPL_ExtStructure _FileInfo_S = {"FileInfo",&_FileInfo_1};

	VPL_ExtField _RoutingResourceEntry_5 = { "reservedField",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _RoutingResourceEntry_4 = { "destinationFolder",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_RoutingResourceEntry_5};
	VPL_ExtField _RoutingResourceEntry_3 = { "targetFolder",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_RoutingResourceEntry_4};
	VPL_ExtField _RoutingResourceEntry_2 = { "fileType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_RoutingResourceEntry_3};
	VPL_ExtField _RoutingResourceEntry_1 = { "creator",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_RoutingResourceEntry_2};
	VPL_ExtStructure _RoutingResourceEntry_S = {"RoutingResourceEntry",&_RoutingResourceEntry_1};

	VPL_ExtField _CustomBadgeResource_8 = { "overrideCreator",24,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _CustomBadgeResource_7 = { "overrideType",20,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CustomBadgeResource_8};
	VPL_ExtField _CustomBadgeResource_6 = { "windowBadgeCreator",16,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CustomBadgeResource_7};
	VPL_ExtField _CustomBadgeResource_5 = { "windowBadgeType",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CustomBadgeResource_6};
	VPL_ExtField _CustomBadgeResource_4 = { "customBadgeCreator",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CustomBadgeResource_5};
	VPL_ExtField _CustomBadgeResource_3 = { "customBadgeType",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_CustomBadgeResource_4};
	VPL_ExtField _CustomBadgeResource_2 = { "customBadgeResourceID",2,2,kIntType,"NULL",0,0,"short",&_CustomBadgeResource_3};
	VPL_ExtField _CustomBadgeResource_1 = { "version",0,2,kIntType,"NULL",0,0,"short",&_CustomBadgeResource_2};
	VPL_ExtStructure _CustomBadgeResource_S = {"CustomBadgeResource",&_CustomBadgeResource_1};

	VPL_ExtField _LocalDateTime_3 = { "fraction",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _LocalDateTime_2 = { "lowSeconds",2,4,kUnsignedType,"NULL",0,0,"unsigned long",&_LocalDateTime_3};
	VPL_ExtField _LocalDateTime_1 = { "highSeconds",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_LocalDateTime_2};
	VPL_ExtStructure _LocalDateTime_S = {"LocalDateTime",&_LocalDateTime_1};

	VPL_ExtField _UTCDateTime_3 = { "fraction",6,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _UTCDateTime_2 = { "lowSeconds",2,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UTCDateTime_3};
	VPL_ExtField _UTCDateTime_1 = { "highSeconds",0,2,kUnsignedType,"NULL",0,0,"unsigned short",&_UTCDateTime_2};
	VPL_ExtStructure _UTCDateTime_S = {"UTCDateTime",&_UTCDateTime_1};

	VPL_ExtField _TECInfo_9 = { "tecHighestTEFileVersion",82,2,kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _TECInfo_8 = { "tecLowestTEFileVersion",80,2,kUnsignedType,"NULL",0,0,"unsigned short",&_TECInfo_9};
	VPL_ExtField _TECInfo_7 = { "tecExtensionFileName",48,32,kPointerType,"unsigned char",0,1,NULL,&_TECInfo_8};
	VPL_ExtField _TECInfo_6 = { "tecTextEncodingsFolderName",16,32,kPointerType,"unsigned char",0,1,NULL,&_TECInfo_7};
	VPL_ExtField _TECInfo_5 = { "tecTextCommonFeatures",12,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_TECInfo_6};
	VPL_ExtField _TECInfo_4 = { "tecUnicodeConverterFeatures",8,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_TECInfo_5};
	VPL_ExtField _TECInfo_3 = { "tecTextConverterFeatures",4,4,kUnsignedType,"unsigned char",0,1,"unsigned long",&_TECInfo_4};
	VPL_ExtField _TECInfo_2 = { "tecVersion",2,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_TECInfo_3};
	VPL_ExtField _TECInfo_1 = { "format",0,2,kUnsignedType,"unsigned char",0,1,"unsigned short",&_TECInfo_2};
	VPL_ExtStructure _TECInfo_S = {"TECInfo",&_TECInfo_1};

	VPL_ExtField _ScriptCodeRun_2 = { "script",4,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _ScriptCodeRun_1 = { "offset",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_ScriptCodeRun_2};
	VPL_ExtStructure _ScriptCodeRun_S = {"ScriptCodeRun",&_ScriptCodeRun_1};

	VPL_ExtField _TextEncodingRun_2 = { "textEncoding",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _TextEncodingRun_1 = { "offset",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_TextEncodingRun_2};
	VPL_ExtStructure _TextEncodingRun_S = {"TextEncodingRun",&_TextEncodingRun_1};

	VPL_ExtField _SysEnvRec_9 = { "sysVRefNum",14,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _SysEnvRec_8 = { "atDrvrVersNum",12,2,kIntType,"NULL",0,0,"short",&_SysEnvRec_9};
	VPL_ExtField _SysEnvRec_7 = { "keyBoardType",10,2,kIntType,"NULL",0,0,"short",&_SysEnvRec_8};
	VPL_ExtField _SysEnvRec_6 = { "hasColorQD",9,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SysEnvRec_7};
	VPL_ExtField _SysEnvRec_5 = { "hasFPU",8,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SysEnvRec_6};
	VPL_ExtField _SysEnvRec_4 = { "processor",6,2,kIntType,"NULL",0,0,"short",&_SysEnvRec_5};
	VPL_ExtField _SysEnvRec_3 = { "systemVersion",4,2,kIntType,"NULL",0,0,"short",&_SysEnvRec_4};
	VPL_ExtField _SysEnvRec_2 = { "machineType",2,2,kIntType,"NULL",0,0,"short",&_SysEnvRec_3};
	VPL_ExtField _SysEnvRec_1 = { "environsVersion",0,2,kIntType,"NULL",0,0,"short",&_SysEnvRec_2};
	VPL_ExtStructure _SysEnvRec_S = {"SysEnvRec",&_SysEnvRec_1};

	VPL_ExtField _MachineLocation_3 = { "u",8,4,kStructureType,"NULL",0,0,"83",NULL};
	VPL_ExtField _MachineLocation_2 = { "longitude",4,4,kIntType,"NULL",0,0,"long int",&_MachineLocation_3};
	VPL_ExtField _MachineLocation_1 = { "latitude",0,4,kIntType,"NULL",0,0,"long int",&_MachineLocation_2};
	VPL_ExtStructure _MachineLocation_S = {"MachineLocation",&_MachineLocation_1};

	VPL_ExtField _DeferredTask_6 = { "dtReserved",16,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _DeferredTask_5 = { "dtParam",12,4,kIntType,"NULL",0,0,"long int",&_DeferredTask_6};
	VPL_ExtField _DeferredTask_4 = { "dtAddr",8,4,kPointerType,"void",1,0,"T*",&_DeferredTask_5};
	VPL_ExtField _DeferredTask_3 = { "dtFlags",6,2,kIntType,"void",1,0,"short",&_DeferredTask_4};
	VPL_ExtField _DeferredTask_2 = { "qType",4,2,kIntType,"void",1,0,"short",&_DeferredTask_3};
	VPL_ExtField _DeferredTask_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_DeferredTask_2};
	VPL_ExtStructure _DeferredTask_S = {"DeferredTask",&_DeferredTask_1};

	VPL_ExtField _QHdr_3 = { "qTail",6,4,kPointerType,"QElem",1,8,"T*",NULL};
	VPL_ExtField _QHdr_2 = { "qHead",2,4,kPointerType,"QElem",1,8,"T*",&_QHdr_3};
	VPL_ExtField _QHdr_1 = { "qFlags",0,2,kIntType,"QElem",1,8,"short",&_QHdr_2};
	VPL_ExtStructure _QHdr_S = {"QHdr",&_QHdr_1};

	VPL_ExtField _QElem_3 = { "qData",6,2,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtField _QElem_2 = { "qType",4,2,kIntType,"short",0,2,"short",&_QElem_3};
	VPL_ExtField _QElem_1 = { "qLink",0,4,kPointerType,"QElem",1,8,"T*",&_QElem_2};
	VPL_ExtStructure _QElem_S = {"QElem",&_QElem_1};

	VPL_ExtField _SysParmType_11 = { "misc",18,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _SysParmType_10 = { "volClik",16,2,kIntType,"NULL",0,0,"short",&_SysParmType_11};
	VPL_ExtField _SysParmType_9 = { "kbdPrint",14,2,kIntType,"NULL",0,0,"short",&_SysParmType_10};
	VPL_ExtField _SysParmType_8 = { "font",12,2,kIntType,"NULL",0,0,"short",&_SysParmType_9};
	VPL_ExtField _SysParmType_7 = { "alarm",8,4,kIntType,"NULL",0,0,"long int",&_SysParmType_8};
	VPL_ExtField _SysParmType_6 = { "portB",6,2,kIntType,"NULL",0,0,"short",&_SysParmType_7};
	VPL_ExtField _SysParmType_5 = { "portA",4,2,kIntType,"NULL",0,0,"short",&_SysParmType_6};
	VPL_ExtField _SysParmType_4 = { "config",3,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SysParmType_5};
	VPL_ExtField _SysParmType_3 = { "aTalkB",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SysParmType_4};
	VPL_ExtField _SysParmType_2 = { "aTalkA",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SysParmType_3};
	VPL_ExtField _SysParmType_1 = { "valid",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_SysParmType_2};
	VPL_ExtStructure _SysParmType_S = {"SysParmType",&_SysParmType_1};

	VPL_ExtField _TogglePB_4 = { "reserved",12,16,kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _TogglePB_3 = { "pmChars",8,4,kUnsignedType,"long int",0,4,"unsigned long",&_TogglePB_4};
	VPL_ExtField _TogglePB_2 = { "amChars",4,4,kUnsignedType,"long int",0,4,"unsigned long",&_TogglePB_3};
	VPL_ExtField _TogglePB_1 = { "togFlags",0,4,kIntType,"long int",0,4,"long int",&_TogglePB_2};
	VPL_ExtStructure _TogglePB_S = {"TogglePB",&_TogglePB_1};

	VPL_ExtField _78_2 = { "oldDate",2,14,kStructureType,"NULL",0,0,"DateTimeRec",NULL};
	VPL_ExtField _78_1 = { "eraAlt",0,2,kIntType,"NULL",0,0,"short",&_78_2};
	VPL_ExtStructure _78_S = {"78",&_78_1};

	VPL_ExtField _77_14 = { "res3",26,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _77_13 = { "res2",24,2,kIntType,"NULL",0,0,"short",&_77_14};
	VPL_ExtField _77_12 = { "res1",22,2,kIntType,"NULL",0,0,"short",&_77_13};
	VPL_ExtField _77_11 = { "pm",20,2,kIntType,"NULL",0,0,"short",&_77_12};
	VPL_ExtField _77_10 = { "weekOfYear",18,2,kIntType,"NULL",0,0,"short",&_77_11};
	VPL_ExtField _77_9 = { "dayOfYear",16,2,kIntType,"NULL",0,0,"short",&_77_10};
	VPL_ExtField _77_8 = { "dayOfWeek",14,2,kIntType,"NULL",0,0,"short",&_77_9};
	VPL_ExtField _77_7 = { "second",12,2,kIntType,"NULL",0,0,"short",&_77_8};
	VPL_ExtField _77_6 = { "minute",10,2,kIntType,"NULL",0,0,"short",&_77_7};
	VPL_ExtField _77_5 = { "hour",8,2,kIntType,"NULL",0,0,"short",&_77_6};
	VPL_ExtField _77_4 = { "day",6,2,kIntType,"NULL",0,0,"short",&_77_5};
	VPL_ExtField _77_3 = { "month",4,2,kIntType,"NULL",0,0,"short",&_77_4};
	VPL_ExtField _77_2 = { "year",2,2,kIntType,"NULL",0,0,"short",&_77_3};
	VPL_ExtField _77_1 = { "era",0,2,kIntType,"NULL",0,0,"short",&_77_2};
	VPL_ExtStructure _77_S = {"77",&_77_1};

	VPL_ExtField _76_2 = { "lLow",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _76_1 = { "lHigh",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_76_2};
	VPL_ExtStructure _76_S = {"76",&_76_1};

	VPL_ExtField _DateTimeRec_7 = { "dayOfWeek",12,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _DateTimeRec_6 = { "second",10,2,kIntType,"NULL",0,0,"short",&_DateTimeRec_7};
	VPL_ExtField _DateTimeRec_5 = { "minute",8,2,kIntType,"NULL",0,0,"short",&_DateTimeRec_6};
	VPL_ExtField _DateTimeRec_4 = { "hour",6,2,kIntType,"NULL",0,0,"short",&_DateTimeRec_5};
	VPL_ExtField _DateTimeRec_3 = { "day",4,2,kIntType,"NULL",0,0,"short",&_DateTimeRec_4};
	VPL_ExtField _DateTimeRec_2 = { "month",2,2,kIntType,"NULL",0,0,"short",&_DateTimeRec_3};
	VPL_ExtField _DateTimeRec_1 = { "year",0,2,kIntType,"NULL",0,0,"short",&_DateTimeRec_2};
	VPL_ExtStructure _DateTimeRec_S = {"DateTimeRec",&_DateTimeRec_1};

	VPL_ExtField _DateCacheRecord_1 = { "hidden",0,512,kPointerType,"short",0,2,NULL,NULL};
	VPL_ExtStructure _DateCacheRecord_S = {"DateCacheRecord",&_DateCacheRecord_1};

	VPL_ExtField _VolumeVirtualMemoryInfo_5 = { "vmOptions",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VolumeVirtualMemoryInfo_4 = { "_fill",7,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VolumeVirtualMemoryInfo_5};
	VPL_ExtField _VolumeVirtualMemoryInfo_3 = { "inUse",6,1,kUnsignedType,"NULL",0,0,"unsigned char",&_VolumeVirtualMemoryInfo_4};
	VPL_ExtField _VolumeVirtualMemoryInfo_2 = { "volumeRefNum",4,2,kIntType,"NULL",0,0,"short",&_VolumeVirtualMemoryInfo_3};
	VPL_ExtField _VolumeVirtualMemoryInfo_1 = { "version",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_VolumeVirtualMemoryInfo_2};
	VPL_ExtStructure _VolumeVirtualMemoryInfo_S = {"VolumeVirtualMemoryInfo",&_VolumeVirtualMemoryInfo_1};

	VPL_ExtField _LogicalToPhysicalTable_2 = { "physical",8,64,kPointerType,"MemoryBlock",0,8,NULL,NULL};
	VPL_ExtField _LogicalToPhysicalTable_1 = { "logical",0,8,kStructureType,"MemoryBlock",0,8,"MemoryBlock",&_LogicalToPhysicalTable_2};
	VPL_ExtStructure _LogicalToPhysicalTable_S = {"LogicalToPhysicalTable",&_LogicalToPhysicalTable_1};

	VPL_ExtField _MemoryBlock_2 = { "count",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MemoryBlock_1 = { "address",0,4,kPointerType,"void",1,0,"T*",&_MemoryBlock_2};
	VPL_ExtStructure _MemoryBlock_S = {"MemoryBlock",&_MemoryBlock_1};

	VPL_ExtField _Zone_19 = { "heapData",52,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _Zone_18 = { "allocPtr",48,4,kPointerType,"char",1,1,"T*",&_Zone_19};
	VPL_ExtField _Zone_17 = { "sparePtr",44,4,kPointerType,"char",1,1,"T*",&_Zone_18};
	VPL_ExtField _Zone_16 = { "purgeProc",40,4,kPointerType,"void",1,0,"T*",&_Zone_17};
	VPL_ExtField _Zone_15 = { "minCBFree",36,4,kIntType,"void",1,0,"long int",&_Zone_16};
	VPL_ExtField _Zone_14 = { "cntHandles",34,2,kIntType,"void",1,0,"short",&_Zone_15};
	VPL_ExtField _Zone_13 = { "cntEmpty",32,2,kIntType,"void",1,0,"short",&_Zone_14};
	VPL_ExtField _Zone_12 = { "unused",31,1,kIntType,"void",1,0,"signed char",&_Zone_13};
	VPL_ExtField _Zone_11 = { "heapType",30,1,kIntType,"void",1,0,"signed char",&_Zone_12};
	VPL_ExtField _Zone_10 = { "cntNRel",28,2,kIntType,"void",1,0,"short",&_Zone_11};
	VPL_ExtField _Zone_9 = { "maxRel",26,2,kIntType,"void",1,0,"short",&_Zone_10};
	VPL_ExtField _Zone_8 = { "cntRel",24,2,kIntType,"void",1,0,"short",&_Zone_9};
	VPL_ExtField _Zone_7 = { "flags",22,2,kIntType,"void",1,0,"short",&_Zone_8};
	VPL_ExtField _Zone_6 = { "moreMast",20,2,kIntType,"void",1,0,"short",&_Zone_7};
	VPL_ExtField _Zone_5 = { "gzProc",16,4,kPointerType,"long int",1,4,"T*",&_Zone_6};
	VPL_ExtField _Zone_4 = { "zcbFree",12,4,kIntType,"long int",1,4,"long int",&_Zone_5};
	VPL_ExtField _Zone_3 = { "hFstFree",8,4,kPointerType,"char",1,1,"T*",&_Zone_4};
	VPL_ExtField _Zone_2 = { "purgePtr",4,4,kPointerType,"char",1,1,"T*",&_Zone_3};
	VPL_ExtField _Zone_1 = { "bkLim",0,4,kPointerType,"char",1,1,"T*",&_Zone_2};
	VPL_ExtStructure _Zone_S = {"Zone",&_Zone_1};

	VPL_ExtField _MixedModeStateRecord_4 = { "state4",12,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _MixedModeStateRecord_3 = { "state3",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MixedModeStateRecord_4};
	VPL_ExtField _MixedModeStateRecord_2 = { "state2",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MixedModeStateRecord_3};
	VPL_ExtField _MixedModeStateRecord_1 = { "state1",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_MixedModeStateRecord_2};
	VPL_ExtStructure _MixedModeStateRecord_S = {"MixedModeStateRecord",&_MixedModeStateRecord_1};

	VPL_ExtField _RoutineDescriptor_8 = { "routineRecords",12,20,kPointerType,"RoutineRecord",0,20,NULL,NULL};
	VPL_ExtField _RoutineDescriptor_7 = { "routineCount",10,2,kUnsignedType,"RoutineRecord",0,20,"unsigned short",&_RoutineDescriptor_8};
	VPL_ExtField _RoutineDescriptor_6 = { "selectorInfo",9,1,kUnsignedType,"RoutineRecord",0,20,"unsigned char",&_RoutineDescriptor_7};
	VPL_ExtField _RoutineDescriptor_5 = { "reserved2",8,1,kUnsignedType,"RoutineRecord",0,20,"unsigned char",&_RoutineDescriptor_6};
	VPL_ExtField _RoutineDescriptor_4 = { "reserved1",4,4,kUnsignedType,"RoutineRecord",0,20,"unsigned long",&_RoutineDescriptor_5};
	VPL_ExtField _RoutineDescriptor_3 = { "routineDescriptorFlags",3,1,kUnsignedType,"RoutineRecord",0,20,"unsigned char",&_RoutineDescriptor_4};
	VPL_ExtField _RoutineDescriptor_2 = { "version",2,1,kIntType,"RoutineRecord",0,20,"signed char",&_RoutineDescriptor_3};
	VPL_ExtField _RoutineDescriptor_1 = { "goMixedModeTrap",0,2,kUnsignedType,"RoutineRecord",0,20,"unsigned short",&_RoutineDescriptor_2};
	VPL_ExtStructure _RoutineDescriptor_S = {"RoutineDescriptor",&_RoutineDescriptor_1};

	VPL_ExtField _RoutineRecord_7 = { "selector",16,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _RoutineRecord_6 = { "reserved2",12,4,kUnsignedType,"NULL",0,0,"unsigned long",&_RoutineRecord_7};
	VPL_ExtField _RoutineRecord_5 = { "procDescriptor",8,4,kPointerType,"long int",1,4,"T*",&_RoutineRecord_6};
	VPL_ExtField _RoutineRecord_4 = { "routineFlags",6,2,kUnsignedType,"long int",1,4,"unsigned short",&_RoutineRecord_5};
	VPL_ExtField _RoutineRecord_3 = { "ISA",5,1,kIntType,"long int",1,4,"signed char",&_RoutineRecord_4};
	VPL_ExtField _RoutineRecord_2 = { "reserved1",4,1,kIntType,"long int",1,4,"signed char",&_RoutineRecord_3};
	VPL_ExtField _RoutineRecord_1 = { "procInfo",0,4,kUnsignedType,"long int",1,4,"unsigned long",&_RoutineRecord_2};
	VPL_ExtStructure _RoutineRecord_S = {"RoutineRecord",&_RoutineRecord_1};

	VPL_ExtStructure ___CFTree_S = {"__CFTree",NULL};

	VPL_ExtField _42_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",NULL};
	VPL_ExtField _42_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_42_5};
	VPL_ExtField _42_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_42_4};
	VPL_ExtField _42_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_42_3};
	VPL_ExtField _42_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_42_2};
	VPL_ExtStructure _42_S = {"42",&_42_1};

	VPL_ExtStructure ___CFSet_S = {"__CFSet",NULL};

	VPL_ExtField _41_6 = { "hash",20,4,kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _41_5 = { "equal",16,4,kPointerType,"unsigned char",1,1,"T*",&_41_6};
	VPL_ExtField _41_4 = { "copyDescription",12,4,kPointerType,"__CFString",2,0,"T*",&_41_5};
	VPL_ExtField _41_3 = { "release",8,4,kPointerType,"void",1,0,"T*",&_41_4};
	VPL_ExtField _41_2 = { "retain",4,4,kPointerType,"void",2,0,"T*",&_41_3};
	VPL_ExtField _41_1 = { "version",0,4,kIntType,"void",2,0,"long int",&_41_2};
	VPL_ExtStructure _41_S = {"41",&_41_1};

	VPL_ExtStructure ___CFNumber_S = {"__CFNumber",NULL};

	VPL_ExtStructure ___CFBoolean_S = {"__CFBoolean",NULL};

	VPL_ExtField _37_6 = { "seconds",20,8,kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _37_5 = { "minutes",16,4,kIntType,"NULL",0,0,"long int",&_37_6};
	VPL_ExtField _37_4 = { "hours",12,4,kIntType,"NULL",0,0,"long int",&_37_5};
	VPL_ExtField _37_3 = { "days",8,4,kIntType,"NULL",0,0,"long int",&_37_4};
	VPL_ExtField _37_2 = { "months",4,4,kIntType,"NULL",0,0,"long int",&_37_3};
	VPL_ExtField _37_1 = { "years",0,4,kIntType,"NULL",0,0,"long int",&_37_2};
	VPL_ExtStructure _37_S = {"37",&_37_1};

	VPL_ExtField _36_6 = { "second",8,8,kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _36_5 = { "minute",7,1,kIntType,"NULL",0,0,"signed char",&_36_6};
	VPL_ExtField _36_4 = { "hour",6,1,kIntType,"NULL",0,0,"signed char",&_36_5};
	VPL_ExtField _36_3 = { "day",5,1,kIntType,"NULL",0,0,"signed char",&_36_4};
	VPL_ExtField _36_2 = { "month",4,1,kIntType,"NULL",0,0,"signed char",&_36_3};
	VPL_ExtField _36_1 = { "year",0,4,kIntType,"NULL",0,0,"long int",&_36_2};
	VPL_ExtStructure _36_S = {"36",&_36_1};

	VPL_ExtStructure ___CFTimeZone_S = {"__CFTimeZone",NULL};

	VPL_ExtStructure ___CFDate_S = {"__CFDate",NULL};

	VPL_ExtStructure ___CFCharacterSet_S = {"__CFCharacterSet",NULL};

	VPL_ExtField _20_6 = { "bufferedRangeEnd",148,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _20_5 = { "bufferedRangeStart",144,4,kIntType,"NULL",0,0,"long int",&_20_6};
	VPL_ExtField _20_4 = { "rangeToBuffer",136,8,kStructureType,"NULL",0,0,"9",&_20_5};
	VPL_ExtField _20_3 = { "directBuffer",132,4,kPointerType,"unsigned short",1,2,"T*",&_20_4};
	VPL_ExtField _20_2 = { "theString",128,4,kPointerType,"__CFString",1,0,"T*",&_20_3};
	VPL_ExtField _20_1 = { "buffer",0,128,kPointerType,"unsigned short",0,2,NULL,&_20_2};
	VPL_ExtStructure _20_S = {"20",&_20_1};

	VPL_ExtStructure ___CFDictionary_S = {"__CFDictionary",NULL};

	VPL_ExtField _17_5 = { "equal",16,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _17_4 = { "copyDescription",12,4,kPointerType,"__CFString",2,0,"T*",&_17_5};
	VPL_ExtField _17_3 = { "release",8,4,kPointerType,"void",1,0,"T*",&_17_4};
	VPL_ExtField _17_2 = { "retain",4,4,kPointerType,"void",2,0,"T*",&_17_3};
	VPL_ExtField _17_1 = { "version",0,4,kIntType,"void",2,0,"long int",&_17_2};
	VPL_ExtStructure _17_S = {"17",&_17_1};

	VPL_ExtField _16_6 = { "hash",20,4,kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _16_5 = { "equal",16,4,kPointerType,"unsigned char",1,1,"T*",&_16_6};
	VPL_ExtField _16_4 = { "copyDescription",12,4,kPointerType,"__CFString",2,0,"T*",&_16_5};
	VPL_ExtField _16_3 = { "release",8,4,kPointerType,"void",1,0,"T*",&_16_4};
	VPL_ExtField _16_2 = { "retain",4,4,kPointerType,"void",2,0,"T*",&_16_3};
	VPL_ExtField _16_1 = { "version",0,4,kIntType,"void",2,0,"long int",&_16_2};
	VPL_ExtStructure _16_S = {"16",&_16_1};

	VPL_ExtStructure ___CFData_S = {"__CFData",NULL};

	VPL_ExtStructure ___CFBag_S = {"__CFBag",NULL};

	VPL_ExtField _15_6 = { "hash",20,4,kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _15_5 = { "equal",16,4,kPointerType,"unsigned char",1,1,"T*",&_15_6};
	VPL_ExtField _15_4 = { "copyDescription",12,4,kPointerType,"__CFString",2,0,"T*",&_15_5};
	VPL_ExtField _15_3 = { "release",8,4,kPointerType,"void",1,0,"T*",&_15_4};
	VPL_ExtField _15_2 = { "retain",4,4,kPointerType,"void",2,0,"T*",&_15_3};
	VPL_ExtField _15_1 = { "version",0,4,kIntType,"void",2,0,"long int",&_15_2};
	VPL_ExtStructure _15_S = {"15",&_15_1};

	VPL_ExtStructure ___CFArray_S = {"__CFArray",NULL};

	VPL_ExtField _14_5 = { "equal",16,4,kPointerType,"unsigned char",1,1,"T*",NULL};
	VPL_ExtField _14_4 = { "copyDescription",12,4,kPointerType,"__CFString",2,0,"T*",&_14_5};
	VPL_ExtField _14_3 = { "release",8,4,kPointerType,"void",1,0,"T*",&_14_4};
	VPL_ExtField _14_2 = { "retain",4,4,kPointerType,"void",2,0,"T*",&_14_3};
	VPL_ExtField _14_1 = { "version",0,4,kIntType,"void",2,0,"long int",&_14_2};
	VPL_ExtStructure _14_S = {"14",&_14_1};

	VPL_ExtField _13_9 = { "preferredSize",32,4,kPointerType,"long int",1,4,"T*",NULL};
	VPL_ExtField _13_8 = { "deallocate",28,4,kPointerType,"void",1,0,"T*",&_13_9};
	VPL_ExtField _13_7 = { "reallocate",24,4,kPointerType,"void",2,0,"T*",&_13_8};
	VPL_ExtField _13_6 = { "allocate",20,4,kPointerType,"void",2,0,"T*",&_13_7};
	VPL_ExtField _13_5 = { "copyDescription",16,4,kPointerType,"__CFString",2,0,"T*",&_13_6};
	VPL_ExtField _13_4 = { "release",12,4,kPointerType,"void",1,0,"T*",&_13_5};
	VPL_ExtField _13_3 = { "retain",8,4,kPointerType,"void",2,0,"T*",&_13_4};
	VPL_ExtField _13_2 = { "info",4,4,kPointerType,"void",1,0,"T*",&_13_3};
	VPL_ExtField _13_1 = { "version",0,4,kIntType,"void",1,0,"long int",&_13_2};
	VPL_ExtStructure _13_S = {"13",&_13_1};

	VPL_ExtStructure ___CFAllocator_S = {"__CFAllocator",NULL};

	VPL_ExtField _9_2 = { "length",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _9_1 = { "location",0,4,kIntType,"NULL",0,0,"long int",&_9_2};
	VPL_ExtStructure _9_S = {"9",&_9_1};

	VPL_ExtStructure ___CFString_S = {"__CFString",NULL};

	VPL_ExtField _VersRec_4 = { "reserved",262,256,kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _VersRec_3 = { "shortVersion",6,256,kPointerType,"unsigned char",0,1,NULL,&_VersRec_4};
	VPL_ExtField _VersRec_2 = { "countryCode",4,2,kIntType,"unsigned char",0,1,"short",&_VersRec_3};
	VPL_ExtField _VersRec_1 = { "numericVersion",0,4,kStructureType,"unsigned char",0,1,"NumVersion",&_VersRec_2};
	VPL_ExtStructure _VersRec_S = {"VersRec",&_VersRec_1};

	VPL_ExtField _NumVersion_4 = { "nonRelRev",3,1,kUnsignedType,"NULL",0,0,"unsigned char",NULL};
	VPL_ExtField _NumVersion_3 = { "stage",2,1,kUnsignedType,"NULL",0,0,"unsigned char",&_NumVersion_4};
	VPL_ExtField _NumVersion_2 = { "minorAndBugRev",1,1,kUnsignedType,"NULL",0,0,"unsigned char",&_NumVersion_3};
	VPL_ExtField _NumVersion_1 = { "majorRev",0,1,kUnsignedType,"NULL",0,0,"unsigned char",&_NumVersion_2};
	VPL_ExtStructure _NumVersion_S = {"NumVersion",&_NumVersion_1};

	VPL_ExtField _TimeRecord_3 = { "base",12,4,kPointerType,"TimeBaseRecord",1,0,"T*",NULL};
	VPL_ExtField _TimeRecord_2 = { "scale",8,4,kIntType,"TimeBaseRecord",1,0,"long int",&_TimeRecord_3};
	VPL_ExtField _TimeRecord_1 = { "value",0,8,kStructureType,"TimeBaseRecord",1,0,"wide",&_TimeRecord_2};
	VPL_ExtStructure _TimeRecord_S = {"TimeRecord",&_TimeRecord_1};

	VPL_ExtStructure _TimeBaseRecord_S = {"TimeBaseRecord",NULL};

	VPL_ExtField _FixedRect_4 = { "bottom",12,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _FixedRect_3 = { "right",8,4,kIntType,"NULL",0,0,"long int",&_FixedRect_4};
	VPL_ExtField _FixedRect_2 = { "top",4,4,kIntType,"NULL",0,0,"long int",&_FixedRect_3};
	VPL_ExtField _FixedRect_1 = { "left",0,4,kIntType,"NULL",0,0,"long int",&_FixedRect_2};
	VPL_ExtStructure _FixedRect_S = {"FixedRect",&_FixedRect_1};

	VPL_ExtField _FixedPoint_2 = { "y",4,4,kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _FixedPoint_1 = { "x",0,4,kIntType,"NULL",0,0,"long int",&_FixedPoint_2};
	VPL_ExtStructure _FixedPoint_S = {"FixedPoint",&_FixedPoint_1};

	VPL_ExtField _Rect_4 = { "right",6,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _Rect_3 = { "bottom",4,2,kIntType,"NULL",0,0,"short",&_Rect_4};
	VPL_ExtField _Rect_2 = { "left",2,2,kIntType,"NULL",0,0,"short",&_Rect_3};
	VPL_ExtField _Rect_1 = { "top",0,2,kIntType,"NULL",0,0,"short",&_Rect_2};
	VPL_ExtStructure _Rect_S = {"Rect",&_Rect_1};

	VPL_ExtField _Point_2 = { "h",2,2,kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _Point_1 = { "v",0,2,kIntType,"NULL",0,0,"short",&_Point_2};
	VPL_ExtStructure _Point_S = {"Point",&_Point_1};

	VPL_ExtField _Float32Point_2 = { "y",4,4,kFloatType,"NULL",0,0,"float",NULL};
	VPL_ExtField _Float32Point_1 = { "x",0,4,kFloatType,"NULL",0,0,"float",&_Float32Point_2};
	VPL_ExtStructure _Float32Point_S = {"Float32Point",&_Float32Point_1};

	VPL_ExtField _Float96_2 = { "man",4,8,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _Float96_1 = { "exp",0,4,kPointerType,"short",0,2,NULL,&_Float96_2};
	VPL_ExtStructure _Float96_S = {"Float96",&_Float96_1};

	VPL_ExtField _Float80_2 = { "man",2,8,kPointerType,"unsigned short",0,2,NULL,NULL};
	VPL_ExtField _Float80_1 = { "exp",0,2,kIntType,"unsigned short",0,2,"short",&_Float80_2};
	VPL_ExtStructure _Float80_S = {"Float80",&_Float80_1};

	VPL_ExtField _UnsignedWide_2 = { "lo",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _UnsignedWide_1 = { "hi",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_UnsignedWide_2};
	VPL_ExtStructure _UnsignedWide_S = {"UnsignedWide",&_UnsignedWide_1};

	VPL_ExtField _wide_2 = { "lo",4,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _wide_1 = { "hi",0,4,kIntType,"NULL",0,0,"long int",&_wide_2};
	VPL_ExtStructure _wide_S = {"wide",&_wide_1};

VPL_DictionaryNode VPX_MacOSX_Structures[] =	{
	{"ICD_DisposePropertyPB",&_ICD_DisposePropertyPB_S},
	{"ICD_NewPropertyPB",&_ICD_NewPropertyPB_S},
	{"ICD_DisposeObjectPB",&_ICD_DisposeObjectPB_S},
	{"ICD_NewObjectPB",&_ICD_NewObjectPB_S},
	{"ICDHeader",&_ICDHeader_S},
	{"ICACopyObjectPropertyDictionaryPB",&_ICACopyObjectPropertyDictionaryPB_S},
	{"ICADownloadFilePB",&_ICADownloadFilePB_S},
	{"ICARegisterEventNotificationPB",&_ICARegisterEventNotificationPB_S},
	{"ICAObjectSendMessagePB",&_ICAObjectSendMessagePB_S},
	{"ICAGetDeviceListPB",&_ICAGetDeviceListPB_S},
	{"ICASetPropertyRefConPB",&_ICASetPropertyRefConPB_S},
	{"ICAGetPropertyRefConPB",&_ICAGetPropertyRefConPB_S},
	{"ICAGetRootOfPropertyPB",&_ICAGetRootOfPropertyPB_S},
	{"ICAGetParentOfPropertyPB",&_ICAGetParentOfPropertyPB_S},
	{"ICASetPropertyDataPB",&_ICASetPropertyDataPB_S},
	{"ICAGetPropertyDataPB",&_ICAGetPropertyDataPB_S},
	{"ICAGetPropertyInfoPB",&_ICAGetPropertyInfoPB_S},
	{"ICAGetPropertyByTypePB",&_ICAGetPropertyByTypePB_S},
	{"ICAGetNthPropertyPB",&_ICAGetNthPropertyPB_S},
	{"ICAGetPropertyCountPB",&_ICAGetPropertyCountPB_S},
	{"ICASetObjectRefConPB",&_ICASetObjectRefConPB_S},
	{"ICAGetObjectRefConPB",&_ICAGetObjectRefConPB_S},
	{"ICAGetRootOfObjectPB",&_ICAGetRootOfObjectPB_S},
	{"ICAGetParentOfObjectPB",&_ICAGetParentOfObjectPB_S},
	{"ICAGetObjectInfoPB",&_ICAGetObjectInfoPB_S},
	{"ICAGetNthChildPB",&_ICAGetNthChildPB_S},
	{"ICAGetChildCountPB",&_ICAGetChildCountPB_S},
	{"ICAHeader",&_ICAHeader_S},
	{"ICAThumbnail",&_ICAThumbnail_S},
	{"ICAMessage",&_ICAMessage_S},
	{"ICAPropertyInfo",&_ICAPropertyInfo_S},
	{"ICAObjectInfo",&_ICAObjectInfo_S},
	{"OpaqueICAConnectionID",&_OpaqueICAConnectionID_S},
	{"OpaqueICAProperty",&_OpaqueICAProperty_S},
	{"OpaqueICAObject",&_OpaqueICAObject_S},
	{"URLCallbackInfo",&_URLCallbackInfo_S},
	{"OpaqueURLReference",&_OpaqueURLReference_S},
	{"SRCallBackParam",&_SRCallBackParam_S},
	{"SRCallBackStruct",&_SRCallBackStruct_S},
	{"OpaqueSRSpeechObject",&_OpaqueSRSpeechObject_S},
	{"OpaqueHRReference",&_OpaqueHRReference_S},
	{"NSLDialogOptions",&_NSLDialogOptions_S},
	{"CalibratorInfo",&_CalibratorInfo_S},
	{"NColorPickerInfo",&_NColorPickerInfo_S},
	{"ColorPickerInfo",&_ColorPickerInfo_S},
	{"PickerMenuItemInfo",&_PickerMenuItemInfo_S},
	{"OpaquePicker",&_OpaquePicker_S},
	{"NPMColor",&_NPMColor_S},
	{"PMColor",&_PMColor_S},
	{"CMYColor",&_CMYColor_S},
	{"HSLColor",&_HSLColor_S},
	{"HSVColor",&_HSVColor_S},
	{"NavDialogCreationOptions",&_NavDialogCreationOptions_S},
	{"NavReplyRecord",&_NavReplyRecord_S},
	{"NavDialogOptions",&_NavDialogOptions_S},
	{"NavTypeList",&_NavTypeList_S},
	{"NavMenuItemSpec",&_NavMenuItemSpec_S},
	{"NavCBRec",&_NavCBRec_S},
	{"__NavDialog",&___NavDialog_S},
	{"NavEventData",&_NavEventData_S},
	{"2373",&_2373_S},
	{"2372",&_2372_S},
	{"NavFileOrFolderInfo",&_NavFileOrFolderInfo_S},
	{"StatementRange",&_StatementRange_S},
	{"SndInputCmpParam",&_SndInputCmpParam_S},
	{"SPB",&_SPB_S},
	{"EQSpectrumBandsRecord",&_EQSpectrumBandsRecord_S},
	{"LevelMeterInfo",&_LevelMeterInfo_S},
	{"AudioTerminatorAtom",&_AudioTerminatorAtom_S},
	{"AudioEndianAtom",&_AudioEndianAtom_S},
	{"AudioFormatAtom",&_AudioFormatAtom_S},
	{"AudioInfo",&_AudioInfo_S},
	{"SoundComponentLink",&_SoundComponentLink_S},
	{"OpaqueSoundSource",&_OpaqueSoundSource_S},
	{"OpaqueSoundConverter",&_OpaqueSoundConverter_S},
	{"SoundSlopeAndInterceptRecord",&_SoundSlopeAndInterceptRecord_S},
	{"CompressionInfo",&_CompressionInfo_S},
	{"ExtendedSoundParamBlock",&_ExtendedSoundParamBlock_S},
	{"SoundParamBlock",&_SoundParamBlock_S},
	{"ExtendedSoundComponentData",&_ExtendedSoundComponentData_S},
	{"SoundComponentData",&_SoundComponentData_S},
	{"SoundInfoList",&_SoundInfoList_S},
	{"AudioSelection",&_AudioSelection_S},
	{"SCStatus",&_SCStatus_S},
	{"SMStatus",&_SMStatus_S},
	{"ExtendedScheduledSoundHeader",&_ExtendedScheduledSoundHeader_S},
	{"ScheduledSoundHeader",&_ScheduledSoundHeader_S},
	{"ConversionBlock",&_ConversionBlock_S},
	{"ExtSoundHeader",&_ExtSoundHeader_S},
	{"CmpSoundHeader",&_CmpSoundHeader_S},
	{"SoundHeader",&_SoundHeader_S},
	{"Snd2ListResource",&_Snd2ListResource_S},
	{"SndListResource",&_SndListResource_S},
	{"ModRef",&_ModRef_S},
	{"LeftOverBlock",&_LeftOverBlock_S},
	{"StateBlock",&_StateBlock_S},
	{"SndChannel",&_SndChannel_S},
	{"SndCommand",&_SndCommand_S},
	{"OpaqueIBNibRef",&_OpaqueIBNibRef_S},
	{"ICServices",&_ICServices_S},
	{"ICServiceEntry",&_ICServiceEntry_S},
	{"ICMapEntry",&_ICMapEntry_S},
	{"ICFileSpec",&_ICFileSpec_S},
	{"ICAppSpecList",&_ICAppSpecList_S},
	{"ICAppSpec",&_ICAppSpec_S},
	{"ICCharTable",&_ICCharTable_S},
	{"ICFontRecord",&_ICFontRecord_S},
	{"ICDirSpec",&_ICDirSpec_S},
	{"OpaqueICInstance",&_OpaqueICInstance_S},
	{"TypeSelectRecord",&_TypeSelectRecord_S},
	{"FileTranslationSpec",&_FileTranslationSpec_S},
	{"ScrapTranslationList",&_ScrapTranslationList_S},
	{"ScrapTypeSpec",&_ScrapTypeSpec_S},
	{"FileTranslationList",&_FileTranslationList_S},
	{"FileTypeSpec",&_FileTypeSpec_S},
	{"TSMTERec",&_TSMTERec_S},
	{"DataBrowserListViewColumnDesc",&_DataBrowserListViewColumnDesc_S},
	{"DataBrowserListViewHeaderDesc",&_DataBrowserListViewHeaderDesc_S},
	{"2155",&_2155_S},
	{"DataBrowserCustomCallbacks",&_DataBrowserCustomCallbacks_S},
	{"2151",&_2151_S},
	{"DataBrowserCallbacks",&_DataBrowserCallbacks_S},
	{"DataBrowserPropertyDesc",&_DataBrowserPropertyDesc_S},
	{"ControlEditTextSelectionRec",&_ControlEditTextSelectionRec_S},
	{"ControlTabInfoRecV1",&_ControlTabInfoRecV1_S},
	{"ControlTabInfoRec",&_ControlTabInfoRec_S},
	{"ControlTabEntry",&_ControlTabEntry_S},
	{"HMHelpContentRec",&_HMHelpContentRec_S},
	{"HMHelpContent",&_HMHelpContent_S},
	{"TXNCarbonEventInfo",&_TXNCarbonEventInfo_S},
	{"TXNLongRect",&_TXNLongRect_S},
	{"TXNBackground",&_TXNBackground_S},
	{"TXNMatchTextRecord",&_TXNMatchTextRecord_S},
	{"TXNMacOSPreferredFontDescription",&_TXNMacOSPreferredFontDescription_S},
	{"TXNTypeAttributes",&_TXNTypeAttributes_S},
	{"TXNATSUIVariations",&_TXNATSUIVariations_S},
	{"TXNATSUIFeatures",&_TXNATSUIFeatures_S},
	{"TXNMargins",&_TXNMargins_S},
	{"TXNTab",&_TXNTab_S},
	{"TXNTextBoxOptionsData",&_TXNTextBoxOptionsData_S},
	{"OpaqueTXNFontMenuObject",&_OpaqueTXNFontMenuObject_S},
	{"OpaqueTXNObject",&_OpaqueTXNObject_S},
	{"OpaqueScrapRef",&_OpaqueScrapRef_S},
	{"ScrapFlavorInfo",&_ScrapFlavorInfo_S},
	{"ScriptLanguageSupport",&_ScriptLanguageSupport_S},
	{"ScriptLanguageRecord",&_ScriptLanguageRecord_S},
	{"TextServiceList",&_TextServiceList_S},
	{"TextServiceInfo",&_TextServiceInfo_S},
	{"OpaqueTSMDocumentID",&_OpaqueTSMDocumentID_S},
	{"OpaqueTSMContext",&_OpaqueTSMContext_S},
	{"ListDefSpec",&_ListDefSpec_S},
	{"StandardIconListCellDataRec",&_StandardIconListCellDataRec_S},
	{"ListRec",&_ListRec_S},
	{"AlertStdCFStringAlertParamRec",&_AlertStdCFStringAlertParamRec_S},
	{"AlertStdAlertParamRec",&_AlertStdAlertParamRec_S},
	{"AlertTemplate",&_AlertTemplate_S},
	{"DialogTemplate",&_DialogTemplate_S},
	{"OpaqueEventHotKeyRef",&_OpaqueEventHotKeyRef_S},
	{"EventHotKeyID",&_EventHotKeyID_S},
	{"OpaqueToolboxObjectClassRef",&_OpaqueToolboxObjectClassRef_S},
	{"OpaqueEventTargetRef",&_OpaqueEventTargetRef_S},
	{"OpaqueEventHandlerCallRef",&_OpaqueEventHandlerCallRef_S},
	{"OpaqueEventHandlerRef",&_OpaqueEventHandlerRef_S},
	{"TabletProximityRec",&_TabletProximityRec_S},
	{"TabletPointRec",&_TabletPointRec_S},
	{"1891",&_1891_S},
	{"HICommand",&_HICommand_S},
	{"HIPoint",&_HIPoint_S},
	{"OpaqueEventLoopTimerRef",&_OpaqueEventLoopTimerRef_S},
	{"OpaqueEventQueueRef",&_OpaqueEventQueueRef_S},
	{"OpaqueEventLoopRef",&_OpaqueEventLoopRef_S},
	{"EventTypeSpec",&_EventTypeSpec_S},
	{"OpaqueThemeDrawingState",&_OpaqueThemeDrawingState_S},
	{"ThemeWindowMetrics",&_ThemeWindowMetrics_S},
	{"ThemeButtonDrawInfo",&_ThemeButtonDrawInfo_S},
	{"ThemeTrackDrawInfo",&_ThemeTrackDrawInfo_S},
	{"ProgressTrackInfo",&_ProgressTrackInfo_S},
	{"SliderTrackInfo",&_SliderTrackInfo_S},
	{"ScrollBarTrackInfo",&_ScrollBarTrackInfo_S},
	{"OpaqueWindowGroupRef",&_OpaqueWindowGroupRef_S},
	{"WindowDefSpec",&_WindowDefSpec_S},
	{"WStateData",&_WStateData_S},
	{"1779",&_1779_S},
	{"1778",&_1778_S},
	{"BasicWindowDescription",&_BasicWindowDescription_S},
	{"WinCTab",&_WinCTab_S},
	{"GetGrowImageRegionRec",&_GetGrowImageRegionRec_S},
	{"MeasureWindowTitleRec",&_MeasureWindowTitleRec_S},
	{"SetupWindowProxyDragImageRec",&_SetupWindowProxyDragImageRec_S},
	{"GetWindowRegionRec",&_GetWindowRegionRec_S},
	{"ControlKind",&_ControlKind_S},
	{"ControlID",&_ControlID_S},
	{"ControlDefSpec",&_ControlDefSpec_S},
	{"ControlClickActivationRec",&_ControlClickActivationRec_S},
	{"ControlContextualMenuClickRec",&_ControlContextualMenuClickRec_S},
	{"ControlSetCursorRec",&_ControlSetCursorRec_S},
	{"ControlGetRegionRec",&_ControlGetRegionRec_S},
	{"ControlApplyTextColorRec",&_ControlApplyTextColorRec_S},
	{"ControlBackgroundRec",&_ControlBackgroundRec_S},
	{"ControlCalcSizeRec",&_ControlCalcSizeRec_S},
	{"ControlDataAccessRec",&_ControlDataAccessRec_S},
	{"ControlKeyDownRec",&_ControlKeyDownRec_S},
	{"ControlTrackingRec",&_ControlTrackingRec_S},
	{"IndicatorDragConstraint",&_IndicatorDragConstraint_S},
	{"ControlFontStyleRec",&_ControlFontStyleRec_S},
	{"ControlButtonContentInfo",&_ControlButtonContentInfo_S},
	{"CtlCTab",&_CtlCTab_S},
	{"OpaqueControlRef",&_OpaqueControlRef_S},
	{"ControlTemplate",&_ControlTemplate_S},
	{"IconFamilyResource",&_IconFamilyResource_S},
	{"IconFamilyElement",&_IconFamilyElement_S},
	{"OpaqueIconRef",&_OpaqueIconRef_S},
	{"CIcon",&_CIcon_S},
	{"PromiseHFSFlavor",&_PromiseHFSFlavor_S},
	{"HFSFlavor",&_HFSFlavor_S},
	{"OpaqueDragRef",&_OpaqueDragRef_S},
	{"NMRec",&_NMRec_S},
	{"HMMessageRecord",&_HMMessageRecord_S},
	{"HMStringResType",&_HMStringResType_S},
	{"TextStyle",&_TextStyle_S},
	{"TEStyleRec",&_TEStyleRec_S},
	{"NullStRec",&_NullStRec_S},
	{"StScrpRec",&_StScrpRec_S},
	{"ScrpSTElement",&_ScrpSTElement_S},
	{"LHElement",&_LHElement_S},
	{"STElement",&_STElement_S},
	{"StyleRun",&_StyleRun_S},
	{"TERec",&_TERec_S},
	{"ContextualMenuInterfaceStruct",&_ContextualMenuInterfaceStruct_S},
	{"MenuDefSpec",&_MenuDefSpec_S},
	{"OpaqueMenuLayoutRef",&_OpaqueMenuLayoutRef_S},
	{"MenuItemDataRec",&_MenuItemDataRec_S},
	{"MDEFDrawItemsData",&_MDEFDrawItemsData_S},
	{"MDEFFindItemData",&_MDEFFindItemData_S},
	{"MDEFDrawData",&_MDEFDrawData_S},
	{"MDEFHiliteItemData",&_MDEFHiliteItemData_S},
	{"MenuTrackingData",&_MenuTrackingData_S},
	{"MenuCRsrc",&_MenuCRsrc_S},
	{"MCEntry",&_MCEntry_S},
	{"OpaqueMenuHandle",&_OpaqueMenuHandle_S},
	{"SizeResourceRec",&_SizeResourceRec_S},
	{"ProcessInfoExtendedRec",&_ProcessInfoExtendedRec_S},
	{"ProcessInfoRec",&_ProcessInfoRec_S},
	{"LaunchParamBlockRec",&_LaunchParamBlockRec_S},
	{"AppParameters",&_AppParameters_S},
	{"ProcessSerialNumber",&_ProcessSerialNumber_S},
	{"OpaqueEventRef",&_OpaqueEventRef_S},
	{"EvQEl",&_EvQEl_S},
	{"EventRecord",&_EventRecord_S},
	{"LSLaunchURLSpec",&_LSLaunchURLSpec_S},
	{"LSLaunchFSRefSpec",&_LSLaunchFSRefSpec_S},
	{"LSItemInfoRecord",&_LSItemInfoRecord_S},
	{"DelimiterInfo",&_DelimiterInfo_S},
	{"SpeechXtndData",&_SpeechXtndData_S},
	{"PhonemeDescriptor",&_PhonemeDescriptor_S},
	{"PhonemeInfo",&_PhonemeInfo_S},
	{"SpeechVersionInfo",&_SpeechVersionInfo_S},
	{"SpeechErrorInfo",&_SpeechErrorInfo_S},
	{"SpeechStatusInfo",&_SpeechStatusInfo_S},
	{"VoiceFileInfo",&_VoiceFileInfo_S},
	{"VoiceDescription",&_VoiceDescription_S},
	{"VoiceSpec",&_VoiceSpec_S},
	{"SpeechChannelRecord",&_SpeechChannelRecord_S},
	{"HomographDicInfoRec",&_HomographDicInfoRec_S},
	{"MorphemeTextRange",&_MorphemeTextRange_S},
	{"LAMorphemesArray",&_LAMorphemesArray_S},
	{"LAMorphemeRec",&_LAMorphemeRec_S},
	{"OpaqueLAContextRef",&_OpaqueLAContextRef_S},
	{"OpaqueLAEnvironmentRef",&_OpaqueLAEnvironmentRef_S},
	{"DictionaryAttributeTable",&_DictionaryAttributeTable_S},
	{"DictionaryInformation",&_DictionaryInformation_S},
	{"DCMDictionaryHeader",&_DCMDictionaryHeader_S},
	{"OpaqueDCMFoundRecordIterator",&_OpaqueDCMFoundRecordIterator_S},
	{"OpaqueDCMObjectIterator",&_OpaqueDCMObjectIterator_S},
	{"OpaqueDCMObjectRef",&_OpaqueDCMObjectRef_S},
	{"OpaqueDCMObjectID",&_OpaqueDCMObjectID_S},
	{"PMLanguageInfo",&_PMLanguageInfo_S},
	{"PMResolution",&_PMResolution_S},
	{"PMRect",&_PMRect_S},
	{"OpaquePMPrinter",&_OpaquePMPrinter_S},
	{"OpaquePMPrintSession",&_OpaquePMPrintSession_S},
	{"OpaquePMPrintContext",&_OpaquePMPrintContext_S},
	{"OpaquePMPageFormat",&_OpaquePMPageFormat_S},
	{"OpaquePMPrintSettings",&_OpaquePMPrintSettings_S},
	{"OpaquePMDialog",&_OpaquePMDialog_S},
	{"OpaqueFBCSearchSession",&_OpaqueFBCSearchSession_S},
	{"OpaqueFNSFontProfile",&_OpaqueFNSFontProfile_S},
	{"OpaqueFNSFontReference",&_OpaqueFNSFontReference_S},
	{"FNSSysInfo",&_FNSSysInfo_S},
	{"DMProfileListEntryRec",&_DMProfileListEntryRec_S},
	{"DisplayListEntryRec",&_DisplayListEntryRec_S},
	{"DMMakeAndModelRec",&_DMMakeAndModelRec_S},
	{"DependentNotifyRec",&_DependentNotifyRec_S},
	{"DMDisplayModeListEntryRec",&_DMDisplayModeListEntryRec_S},
	{"DMDepthInfoBlockRec",&_DMDepthInfoBlockRec_S},
	{"DMDepthInfoRec",&_DMDepthInfoRec_S},
	{"AVLocationRec",&_AVLocationRec_S},
	{"DMComponentListEntryRec",&_DMComponentListEntryRec_S},
	{"DMDisplayTimingInfoRec",&_DMDisplayTimingInfoRec_S},
	{"VDCommunicationInfoRec",&_VDCommunicationInfoRec_S},
	{"VDCommunicationRec",&_VDCommunicationRec_S},
	{"VDDetailedTimingRec",&_VDDetailedTimingRec_S},
	{"VDDisplayTimingRangeRec",&_VDDisplayTimingRangeRec_S},
	{"VDDDCBlockRec",&_VDDDCBlockRec_S},
	{"VDPrivateSelectorRec",&_VDPrivateSelectorRec_S},
	{"VDPrivateSelectorDataRec",&_VDPrivateSelectorDataRec_S},
	{"VDPowerStateRec",&_VDPowerStateRec_S},
	{"VDConvolutionInfoRec",&_VDConvolutionInfoRec_S},
	{"VDHardwareCursorDrawStateRec",&_VDHardwareCursorDrawStateRec_S},
	{"VDSupportsHardwareCursorRec",&_VDSupportsHardwareCursorRec_S},
	{"VDDrawHardwareCursorRec",&_VDDrawHardwareCursorRec_S},
	{"VDSetHardwareCursorRec",&_VDSetHardwareCursorRec_S},
	{"VDRetrieveGammaRec",&_VDRetrieveGammaRec_S},
	{"VDGetGammaListRec",&_VDGetGammaListRec_S},
	{"VDGammaInfoRec",&_VDGammaInfoRec_S},
	{"VDVideoParametersInfoRec",&_VDVideoParametersInfoRec_S},
	{"VDResolutionInfoRec",&_VDResolutionInfoRec_S},
	{"VDSyncInfoRec",&_VDSyncInfoRec_S},
	{"VDDefMode",&_VDDefMode_S},
	{"VDSettings",&_VDSettings_S},
	{"VDSizeInfo",&_VDSizeInfo_S},
	{"VDPageInfo",&_VDPageInfo_S},
	{"VDMultiConnectInfoRec",&_VDMultiConnectInfoRec_S},
	{"VDDisplayConnectInfoRec",&_VDDisplayConnectInfoRec_S},
	{"VDTimingInfoRec",&_VDTimingInfoRec_S},
	{"VDSwitchInfoRec",&_VDSwitchInfoRec_S},
	{"VDBaseAddressInfoRec",&_VDBaseAddressInfoRec_S},
	{"VDGammaRecord",&_VDGammaRecord_S},
	{"VDSetEntryRecord",&_VDSetEntryRecord_S},
	{"VDFlagRecord",&_VDFlagRecord_S},
	{"VDGrayRecord",&_VDGrayRecord_S},
	{"VDEntryRecord",&_VDEntryRecord_S},
	{"VPBlock",&_VPBlock_S},
	{"ATSUUnhighlightData",&_ATSUUnhighlightData_S},
	{"ATSUBackgroundColor",&_ATSUBackgroundColor_S},
	{"ATSUGlyphInfoArray",&_ATSUGlyphInfoArray_S},
	{"ATSUGlyphInfo",&_ATSUGlyphInfo_S},
	{"ATSUCaret",&_ATSUCaret_S},
	{"ATSUAttributeInfo",&_ATSUAttributeInfo_S},
	{"OpaqueATSUFontFallbacks",&_OpaqueATSUFontFallbacks_S},
	{"OpaqueATSUStyle",&_OpaqueATSUStyle_S},
	{"OpaqueATSUTextLayout",&_OpaqueATSUTextLayout_S},
	{"PictInfo",&_PictInfo_S},
	{"FontSpec",&_FontSpec_S},
	{"CommentSpec",&_CommentSpec_S},
	{"Palette",&_Palette_S},
	{"ColorInfo",&_ColorInfo_S},
	{"FontRec",&_FontRec_S},
	{"FamRec",&_FamRec_S},
	{"WidthTable",&_WidthTable_S},
	{"KernTable",&_KernTable_S},
	{"KernEntry",&_KernEntry_S},
	{"KernPair",&_KernPair_S},
	{"NameTable",&_NameTable_S},
	{"StyleTable",&_StyleTable_S},
	{"FontAssoc",&_FontAssoc_S},
	{"AsscEntry",&_AsscEntry_S},
	{"WidTable",&_WidTable_S},
	{"WidEntry",&_WidEntry_S},
	{"FMetricRec",&_FMetricRec_S},
	{"FMOutput",&_FMOutput_S},
	{"FMInput",&_FMInput_S},
	{"OpaqueQDRegionBitsRef",&_OpaqueQDRegionBitsRef_S},
	{"CursorInfo",&_CursorInfo_S},
	{"CustomXFerRec",&_CustomXFerRec_S},
	{"CursorImageRec",&_CursorImageRec_S},
	{"OpenCPicParams",&_OpenCPicParams_S},
	{"ReqListRec",&_ReqListRec_S},
	{"CQDProcs",&_CQDProcs_S},
	{"GrafVars",&_GrafVars_S},
	{"GDevice",&_GDevice_S},
	{"CProcRec",&_CProcRec_S},
	{"SProcRec",&_SProcRec_S},
	{"ITab",&_ITab_S},
	{"GammaTbl",&_GammaTbl_S},
	{"CCrsr",&_CCrsr_S},
	{"PixPat",&_PixPat_S},
	{"PixMap",&_PixMap_S},
	{"MatchRec",&_MatchRec_S},
	{"xColorSpec",&_xColorSpec_S},
	{"ColorTable",&_ColorTable_S},
	{"ColorSpec",&_ColorSpec_S},
	{"RGBColor",&_RGBColor_S},
	{"OpaqueGrafPtr",&_OpaqueGrafPtr_S},
	{"OpaqueDialogPtr",&_OpaqueDialogPtr_S},
	{"OpaqueWindowPtr",&_OpaqueWindowPtr_S},
	{"QDProcs",&_QDProcs_S},
	{"MacPolygon",&_MacPolygon_S},
	{"Picture",&_Picture_S},
	{"OpaqueRgnHandle",&_OpaqueRgnHandle_S},
	{"PenState",&_PenState_S},
	{"Cursor",&_Cursor_S},
	{"BitMap",&_BitMap_S},
	{"PrinterScalingStatus",&_PrinterScalingStatus_S},
	{"PrinterFontStatus",&_PrinterFontStatus_S},
	{"Pattern",&_Pattern_S},
	{"FontInfo",&_FontInfo_S},
	{"1397",&_1397_S},
	{"1396",&_1396_S},
	{"1395",&_1395_S},
	{"1394",&_1394_S},
	{"1393",&_1393_S},
	{"1392",&_1392_S},
	{"1391",&_1391_S},
	{"1390",&_1390_S},
	{"1389",&_1389_S},
	{"1387",&_1387_S},
	{"1386",&_1386_S},
	{"1385",&_1385_S},
	{"1384",&_1384_S},
	{"OpaqueAEStreamRef",&_OpaqueAEStreamRef_S},
	{"AEBuildError",&_AEBuildError_S},
	{"TScriptingSizeResource",&_TScriptingSizeResource_S},
	{"IntlText",&_IntlText_S},
	{"WritingCode",&_WritingCode_S},
	{"OffsetArray",&_OffsetArray_S},
	{"TextRangeArray",&_TextRangeArray_S},
	{"TextRange",&_TextRange_S},
	{"ccntTokenRecord",&_ccntTokenRecord_S},
	{"AEKeyDesc",&_AEKeyDesc_S},
	{"AEDesc",&_AEDesc_S},
	{"OpaqueAEDataStorageType",&_OpaqueAEDataStorageType_S},
	{"CMDeviceProfileArray",&_CMDeviceProfileArray_S},
	{"NCMDeviceProfileInfo",&_NCMDeviceProfileInfo_S},
	{"CMDeviceProfileInfo",&_CMDeviceProfileInfo_S},
	{"CMDeviceInfo",&_CMDeviceInfo_S},
	{"CMDeviceScope",&_CMDeviceScope_S},
	{"CMProfileIterateData",&_CMProfileIterateData_S},
	{"CMProfileLocation",&_CMProfileLocation_S},
	{"CMBufferLocation",&_CMBufferLocation_S},
	{"CMPathLocation",&_CMPathLocation_S},
	{"CMProcedureLocation",&_CMProcedureLocation_S},
	{"CMPtrLocation",&_CMPtrLocation_S},
	{"CMHandleLocation",&_CMHandleLocation_S},
	{"CMFileLocation",&_CMFileLocation_S},
	{"CMBitmap",&_CMBitmap_S},
	{"CMProfileIdentifier",&_CMProfileIdentifier_S},
	{"CMCWInfoRecord",&_CMCWInfoRecord_S},
	{"CMMInfoRecord",&_CMMInfoRecord_S},
	{"CMMInfo",&_CMMInfo_S},
	{"CMSearchRecord",&_CMSearchRecord_S},
	{"CMProfileSearchRecord",&_CMProfileSearchRecord_S},
	{"CMNamedColor",&_CMNamedColor_S},
	{"CMMultichannel8Color",&_CMMultichannel8Color_S},
	{"CMMultichannel7Color",&_CMMultichannel7Color_S},
	{"CMMultichannel6Color",&_CMMultichannel6Color_S},
	{"CMMultichannel5Color",&_CMMultichannel5Color_S},
	{"CMGrayColor",&_CMGrayColor_S},
	{"CMYxyColor",&_CMYxyColor_S},
	{"CMLuvColor",&_CMLuvColor_S},
	{"CMLabColor",&_CMLabColor_S},
	{"CMHSVColor",&_CMHSVColor_S},
	{"CMHLSColor",&_CMHLSColor_S},
	{"CMCMYColor",&_CMCMYColor_S},
	{"CMCMYKColor",&_CMCMYKColor_S},
	{"CMRGBColor",&_CMRGBColor_S},
	{"NCMConcatProfileSet",&_NCMConcatProfileSet_S},
	{"NCMConcatProfileSpec",&_NCMConcatProfileSpec_S},
	{"CMConcatProfileSet",&_CMConcatProfileSet_S},
	{"CMProfile",&_CMProfile_S},
	{"CMProfileResponse",&_CMProfileResponse_S},
	{"CMProfileChromaticities",&_CMProfileChromaticities_S},
	{"CMHeader",&_CMHeader_S},
	{"CMIString",&_CMIString_S},
	{"CMMultiLocalizedUniCodeType",&_CMMultiLocalizedUniCodeType_S},
	{"CMMultiLocalizedUniCodeEntryRec",&_CMMultiLocalizedUniCodeEntryRec_S},
	{"CMMakeAndModelType",&_CMMakeAndModelType_S},
	{"CMMakeAndModel",&_CMMakeAndModel_S},
	{"CMVideoCardGammaType",&_CMVideoCardGammaType_S},
	{"CMVideoCardGamma",&_CMVideoCardGamma_S},
	{"CMVideoCardGammaFormula",&_CMVideoCardGammaFormula_S},
	{"CMVideoCardGammaTable",&_CMVideoCardGammaTable_S},
	{"CMPS2CRDVMSizeType",&_CMPS2CRDVMSizeType_S},
	{"CMIntentCRDVMSize",&_CMIntentCRDVMSize_S},
	{"CMUcrBgType",&_CMUcrBgType_S},
	{"CMProfileSequenceDescType",&_CMProfileSequenceDescType_S},
	{"CMXYZType",&_CMXYZType_S},
	{"CMViewingConditionsType",&_CMViewingConditionsType_S},
	{"CMUInt64ArrayType",&_CMUInt64ArrayType_S},
	{"CMUInt32ArrayType",&_CMUInt32ArrayType_S},
	{"CMUInt16ArrayType",&_CMUInt16ArrayType_S},
	{"CMUInt8ArrayType",&_CMUInt8ArrayType_S},
	{"CMU16Fixed16ArrayType",&_CMU16Fixed16ArrayType_S},
	{"CMS15Fixed16ArrayType",&_CMS15Fixed16ArrayType_S},
	{"CMSignatureType",&_CMSignatureType_S},
	{"CMScreeningType",&_CMScreeningType_S},
	{"CMScreeningChannelRec",&_CMScreeningChannelRec_S},
	{"CMUnicodeTextType",&_CMUnicodeTextType_S},
	{"CMTextType",&_CMTextType_S},
	{"CMTextDescriptionType",&_CMTextDescriptionType_S},
	{"CMParametricCurveType",&_CMParametricCurveType_S},
	{"CMNativeDisplayInfoType",&_CMNativeDisplayInfoType_S},
	{"CMNativeDisplayInfo",&_CMNativeDisplayInfo_S},
	{"CMNamedColor2Type",&_CMNamedColor2Type_S},
	{"CMNamedColor2EntryType",&_CMNamedColor2EntryType_S},
	{"CMNamedColorType",&_CMNamedColorType_S},
	{"CMMeasurementType",&_CMMeasurementType_S},
	{"CMMultiFunctCLUTType",&_CMMultiFunctCLUTType_S},
	{"CMMultiFunctLutType",&_CMMultiFunctLutType_S},
	{"CMLut8Type",&_CMLut8Type_S},
	{"CMLut16Type",&_CMLut16Type_S},
	{"CMDateTimeType",&_CMDateTimeType_S},
	{"CMDataType",&_CMDataType_S},
	{"CMCurveType",&_CMCurveType_S},
	{"CMAdaptationMatrixType",&_CMAdaptationMatrixType_S},
	{"CM2Profile",&_CM2Profile_S},
	{"CMTagElemTable",&_CMTagElemTable_S},
	{"CMTagRecord",&_CMTagRecord_S},
	{"CM4Header",&_CM4Header_S},
	{"CM2Header",&_CM2Header_S},
	{"CMXYZColor",&_CMXYZColor_S},
	{"CMFixedXYZColor",&_CMFixedXYZColor_S},
	{"CMFixedXYColor",&_CMFixedXYColor_S},
	{"CMDateTime",&_CMDateTime_S},
	{"OpaqueCMWorldRef",&_OpaqueCMWorldRef_S},
	{"OpaqueCMMatchRef",&_OpaqueCMMatchRef_S},
	{"OpaqueCMProfileSearchRef",&_OpaqueCMProfileSearchRef_S},
	{"OpaqueCMProfileRef",&_OpaqueCMProfileRef_S},
	{"_CGDeviceByteColor",&__CGDeviceByteColor_S},
	{"_CGDeviceColor",&__CGDeviceColor_S},
	{"_CGDirectPaletteRef",&__CGDirectPaletteRef_S},
	{"_CGDirectDisplayID",&__CGDirectDisplayID_S},
	{"CGDataConsumerCallbacks",&_CGDataConsumerCallbacks_S},
	{"CGDataConsumer",&_CGDataConsumer_S},
	{"CGPDFDocument",&_CGPDFDocument_S},
	{"CGPatternCallbacks",&_CGPatternCallbacks_S},
	{"CGPattern",&_CGPattern_S},
	{"CGImage",&_CGImage_S},
	{"CGFont",&_CGFont_S},
	{"CGDataProviderDirectAccessCallbacks",&_CGDataProviderDirectAccessCallbacks_S},
	{"CGDataProviderCallbacks",&_CGDataProviderCallbacks_S},
	{"CGDataProvider",&_CGDataProvider_S},
	{"CGColorSpace",&_CGColorSpace_S},
	{"CGContext",&_CGContext_S},
	{"CGRect",&_CGRect_S},
	{"CGSize",&_CGSize_S},
	{"CGPoint",&_CGPoint_S},
	{"CGAffineTransform",&_CGAffineTransform_S},
	{"scalerStreamData",&_scalerStreamData_S},
	{"1233",&_1233_S},
	{"1232",&_1232_S},
	{"scalerStream",&_scalerStream_S},
	{"scalerPrerequisiteItem",&_scalerPrerequisiteItem_S},
	{"ATSFontFilter",&_ATSFontFilter_S},
	{"ATSFontIterator_",&_ATSFontIterator__S},
	{"ATSFontFamilyIterator_",&_ATSFontFamilyIterator__S},
	{"FontVariation",&_FontVariation_S},
	{"sfntFeatureHeader",&_sfntFeatureHeader_S},
	{"sfntFontRunFeature",&_sfntFontRunFeature_S},
	{"sfntFontFeatureSetting",&_sfntFontFeatureSetting_S},
	{"sfntFeatureName",&_sfntFeatureName_S},
	{"sfntDescriptorHeader",&_sfntDescriptorHeader_S},
	{"sfntFontDescriptor",&_sfntFontDescriptor_S},
	{"sfntVariationHeader",&_sfntVariationHeader_S},
	{"sfntInstance",&_sfntInstance_S},
	{"sfntVariationAxis",&_sfntVariationAxis_S},
	{"sfntNameHeader",&_sfntNameHeader_S},
	{"sfntNameRecord",&_sfntNameRecord_S},
	{"sfntCMapHeader",&_sfntCMapHeader_S},
	{"sfntCMapEncoding",&_sfntCMapEncoding_S},
	{"sfntCMapSubHeader",&_sfntCMapSubHeader_S},
	{"sfntDirectory",&_sfntDirectory_S},
	{"sfntDirectoryEntry",&_sfntDirectoryEntry_S},
	{"ATSJustWidthDeltaEntryOverride",&_ATSJustWidthDeltaEntryOverride_S},
	{"ATSTrapezoid",&_ATSTrapezoid_S},
	{"ATSGlyphScreenMetrics",&_ATSGlyphScreenMetrics_S},
	{"ATSGlyphIdealMetrics",&_ATSGlyphIdealMetrics_S},
	{"ATSUCurvePaths",&_ATSUCurvePaths_S},
	{"ATSUCurvePath",&_ATSUCurvePath_S},
	{"ATSFontMetrics",&_ATSFontMetrics_S},
	{"FMFilter",&_FMFilter_S},
	{"FMFontDirectoryFilter",&_FMFontDirectoryFilter_S},
	{"FMFontFamilyInstanceIterator",&_FMFontFamilyInstanceIterator_S},
	{"FMFontIterator",&_FMFontIterator_S},
	{"FMFontFamilyIterator",&_FMFontFamilyIterator_S},
	{"FMFontFamilyInstance",&_FMFontFamilyInstance_S},
	{"BslnTable",&_BslnTable_S},
	{"BslnFormat3Part",&_BslnFormat3Part_S},
	{"BslnFormat2Part",&_BslnFormat2Part_S},
	{"BslnFormat1Part",&_BslnFormat1Part_S},
	{"BslnFormat0Part",&_BslnFormat0Part_S},
	{"KernSubtableHeader",&_KernSubtableHeader_S},
	{"KernVersion0SubtableHeader",&_KernVersion0SubtableHeader_S},
	{"KernIndexArrayHeader",&_KernIndexArrayHeader_S},
	{"KernSimpleArrayHeader",&_KernSimpleArrayHeader_S},
	{"KernOffsetTable",&_KernOffsetTable_S},
	{"KernStateEntry",&_KernStateEntry_S},
	{"KernStateHeader",&_KernStateHeader_S},
	{"KernOrderedListHeader",&_KernOrderedListHeader_S},
	{"KernOrderedListEntry",&_KernOrderedListEntry_S},
	{"KernKerningPair",&_KernKerningPair_S},
	{"KernTableHeader",&_KernTableHeader_S},
	{"KernVersion0Header",&_KernVersion0Header_S},
	{"TrakTable",&_TrakTable_S},
	{"TrakTableData",&_TrakTableData_S},
	{"TrakTableEntry",&_TrakTableEntry_S},
	{"PropLookupSingle",&_PropLookupSingle_S},
	{"PropLookupSegment",&_PropLookupSegment_S},
	{"PropTable",&_PropTable_S},
	{"MorxTable",&_MorxTable_S},
	{"MorxChain",&_MorxChain_S},
	{"MorxSubtable",&_MorxSubtable_S},
	{"MorxInsertionSubtable",&_MorxInsertionSubtable_S},
	{"MorxLigatureSubtable",&_MorxLigatureSubtable_S},
	{"MorxContextualSubtable",&_MorxContextualSubtable_S},
	{"MorxRearrangementSubtable",&_MorxRearrangementSubtable_S},
	{"MortTable",&_MortTable_S},
	{"MortChain",&_MortChain_S},
	{"MortFeatureEntry",&_MortFeatureEntry_S},
	{"MortSubtable",&_MortSubtable_S},
	{"MortInsertionSubtable",&_MortInsertionSubtable_S},
	{"MortSwashSubtable",&_MortSwashSubtable_S},
	{"MortLigatureSubtable",&_MortLigatureSubtable_S},
	{"MortContextualSubtable",&_MortContextualSubtable_S},
	{"MortRearrangementSubtable",&_MortRearrangementSubtable_S},
	{"OpbdTable",&_OpbdTable_S},
	{"OpbdSideValues",&_OpbdSideValues_S},
	{"JustTable",&_JustTable_S},
	{"JustDirectionTable",&_JustDirectionTable_S},
	{"JustPostcompTable",&_JustPostcompTable_S},
	{"JustWidthDeltaGroup",&_JustWidthDeltaGroup_S},
	{"JustWidthDeltaEntry",&_JustWidthDeltaEntry_S},
	{"JustPCAction",&_JustPCAction_S},
	{"JustPCActionSubrecord",&_JustPCActionSubrecord_S},
	{"JustPCGlyphRepeatAddAction",&_JustPCGlyphRepeatAddAction_S},
	{"JustPCDuctilityAction",&_JustPCDuctilityAction_S},
	{"JustPCConditionalAddAction",&_JustPCConditionalAddAction_S},
	{"JustPCDecompositionAction",&_JustPCDecompositionAction_S},
	{"LcarCaretTable",&_LcarCaretTable_S},
	{"LcarCaretClassEntry",&_LcarCaretClassEntry_S},
	{"STXEntryTwo",&_STXEntryTwo_S},
	{"STXEntryOne",&_STXEntryOne_S},
	{"STXEntryZero",&_STXEntryZero_S},
	{"STXHeader",&_STXHeader_S},
	{"STEntryTwo",&_STEntryTwo_S},
	{"STEntryOne",&_STEntryOne_S},
	{"STEntryZero",&_STEntryZero_S},
	{"STClassTable",&_STClassTable_S},
	{"STHeader",&_STHeader_S},
	{"SFNTLookupTable",&_SFNTLookupTable_S},
	{"SFNTLookupSingleHeader",&_SFNTLookupSingleHeader_S},
	{"SFNTLookupSingle",&_SFNTLookupSingle_S},
	{"SFNTLookupSegmentHeader",&_SFNTLookupSegmentHeader_S},
	{"SFNTLookupSegment",&_SFNTLookupSegment_S},
	{"SFNTLookupTrimmedArrayHeader",&_SFNTLookupTrimmedArrayHeader_S},
	{"SFNTLookupArrayHeader",&_SFNTLookupArrayHeader_S},
	{"SFNTLookupBinarySearchHeader",&_SFNTLookupBinarySearchHeader_S},
	{"__CFHTTPMessage",&___CFHTTPMessage_S},
	{"KCCallbackInfo",&_KCCallbackInfo_S},
	{"SecKeychainAttributeList",&_SecKeychainAttributeList_S},
	{"SecKeychainAttribute",&_SecKeychainAttribute_S},
	{"OpaqueSecKeychainSearchRef",&_OpaqueSecKeychainSearchRef_S},
	{"OpaqueSecKeychainItemRef",&_OpaqueSecKeychainItemRef_S},
	{"OpaqueSecKeychainRef",&_OpaqueSecKeychainRef_S},
	{"NSLPluginData",&_NSLPluginData_S},
	{"NSLServicesListHeader",&_NSLServicesListHeader_S},
	{"NSLTypedData",&_NSLTypedData_S},
	{"NSLPluginAsyncInfo",&_NSLPluginAsyncInfo_S},
	{"NSLClientAsyncInfo",&_NSLClientAsyncInfo_S},
	{"NSLError",&_NSLError_S},
	{"Partition",&_Partition_S},
	{"DDMap",&_DDMap_S},
	{"Block0",&_Block0_S},
	{"SCSILoadDriverPB",&_SCSILoadDriverPB_S},
	{"SCSIDriverPB",&_SCSIDriverPB_S},
	{"SCSIGetVirtualIDInfoPB",&_SCSIGetVirtualIDInfoPB_S},
	{"SCSIReleaseQPB",&_SCSIReleaseQPB_S},
	{"SCSIResetDevicePB",&_SCSIResetDevicePB_S},
	{"SCSIResetBusPB",&_SCSIResetBusPB_S},
	{"SCSITerminateIOPB",&_SCSITerminateIOPB_S},
	{"SCSIAbortCommandPB",&_SCSIAbortCommandPB_S},
	{"SCSIBusInquiryPB",&_SCSIBusInquiryPB_S},
	{"SCSI_IO",&_SCSI_IO_S},
	{"SCSI_PB",&_SCSI_PB_S},
	{"SCSIHdr",&_SCSIHdr_S},
	{"SGRecord",&_SGRecord_S},
	{"DeviceIdentATA",&_DeviceIdentATA_S},
	{"DeviceIdent",&_DeviceIdent_S},
	{"SCSIInstr",&_SCSIInstr_S},
	{"PowerSourceParamBlock",&_PowerSourceParamBlock_S},
	{"StartupTime",&_StartupTime_S},
	{"WakeupTime",&_WakeupTime_S},
	{"BatteryTimeRec",&_BatteryTimeRec_S},
	{"PMgrQueueElement",&_PMgrQueueElement_S},
	{"HDQueueElement",&_HDQueueElement_S},
	{"SleepQRec",&_SleepQRec_S},
	{"BatteryInfo",&_BatteryInfo_S},
	{"ActivityInfo",&_ActivityInfo_S},
	{"PowerSummary",&_PowerSummary_S},
	{"DevicePowerInfo",&_DevicePowerInfo_S},
	{"OTGate",&_OTGate_S},
	{"OTHashList",&_OTHashList_S},
	{"OTClientList",&_OTClientList_S},
	{"OTPortCloseStruct",&_OTPortCloseStruct_S},
	{"trace_ids",&_trace_ids_S},
	{"log_ctl",&_log_ctl_S},
	{"strioctl",&_strioctl_S},
	{"strrecvfd",&_strrecvfd_S},
	{"strpmsg",&_strpmsg_S},
	{"strpeek",&_strpeek_S},
	{"str_list",&_str_list_S},
	{"str_mlist",&_str_mlist_S},
	{"strfdinsert",&_strfdinsert_S},
	{"bandinfo",&_bandinfo_S},
	{"LCPEcho",&_LCPEcho_S},
	{"CCMiscInfo",&_CCMiscInfo_S},
	{"PPPMRULimits",&_PPPMRULimits_S},
	{"OTISDNAddress",&_OTISDNAddress_S},
	{"T8022FullPacketHeader",&_T8022FullPacketHeader_S},
	{"T8022SNAPHeader",&_T8022SNAPHeader_S},
	{"T8022Header",&_T8022Header_S},
	{"EnetPacketHeader",&_EnetPacketHeader_S},
	{"T8022Address",&_T8022Address_S},
	{"AppleTalkInfo",&_AppleTalkInfo_S},
	{"DDPNBPAddress",&_DDPNBPAddress_S},
	{"NBPAddress",&_NBPAddress_S},
	{"DDPAddress",&_DDPAddress_S},
	{"NBPEntity",&_NBPEntity_S},
	{"InetDHCPOption",&_InetDHCPOption_S},
	{"InetInterfaceInfo",&_InetInterfaceInfo_S},
	{"DNSAddress",&_DNSAddress_S},
	{"DNSQueryInfo",&_DNSQueryInfo_S},
	{"InetMailExchange",&_InetMailExchange_S},
	{"InetSysInfo",&_InetSysInfo_S},
	{"InetHostInfo",&_InetHostInfo_S},
	{"InetAddress",&_InetAddress_S},
	{"TIPAddMulticast",&_TIPAddMulticast_S},
	{"OTList",&_OTList_S},
	{"OTLIFO",&_OTLIFO_S},
	{"OTLink",&_OTLink_S},
	{"OpaqueOTClientContextPtr",&_OpaqueOTClientContextPtr_S},
	{"TLookupBuffer",&_TLookupBuffer_S},
	{"TLookupReply",&_TLookupReply_S},
	{"TLookupRequest",&_TLookupRequest_S},
	{"TRegisterReply",&_TRegisterReply_S},
	{"TRegisterRequest",&_TRegisterRequest_S},
	{"TUnitReply",&_TUnitReply_S},
	{"TUnitRequest",&_TUnitRequest_S},
	{"TReply",&_TReply_S},
	{"TRequest",&_TRequest_S},
	{"TOptMgmt",&_TOptMgmt_S},
	{"TUDErr",&_TUDErr_S},
	{"TUnitData",&_TUnitData_S},
	{"TCall",&_TCall_S},
	{"TDiscon",&_TDiscon_S},
	{"TBind",&_TBind_S},
	{"OTBufferInfo",&_OTBufferInfo_S},
	{"OTBuffer",&_OTBuffer_S},
	{"OTData",&_OTData_S},
	{"strbuf",&_strbuf_S},
	{"TNetbuf",&_TNetbuf_S},
	{"OTPortRecord",&_OTPortRecord_S},
	{"TEndpointInfo",&_TEndpointInfo_S},
	{"t_linger",&_t_linger_S},
	{"t_kpalive",&_t_kpalive_S},
	{"TOption",&_TOption_S},
	{"TOptionHeader",&_TOptionHeader_S},
	{"OTConfiguration",&_OTConfiguration_S},
	{"OTScriptInfo",&_OTScriptInfo_S},
	{"OTAddress",&_OTAddress_S},
	{"TECPluginDispatchTable",&_TECPluginDispatchTable_S},
	{"TECSnifferContextRec",&_TECSnifferContextRec_S},
	{"TECConverterContextRec",&_TECConverterContextRec_S},
	{"TECPluginStateRec",&_TECPluginStateRec_S},
	{"TECBufferContextRec",&_TECBufferContextRec_S},
	{"TextChunk",&_TextChunk_S},
	{"CommentsChunk",&_CommentsChunk_S},
	{"Comment",&_Comment_S},
	{"ApplicationSpecificChunk",&_ApplicationSpecificChunk_S},
	{"AudioRecordingChunk",&_AudioRecordingChunk_S},
	{"MIDIDataChunk",&_MIDIDataChunk_S},
	{"InstrumentChunk",&_InstrumentChunk_S},
	{"AIFFLoop",&_AIFFLoop_S},
	{"MarkerChunk",&_MarkerChunk_S},
	{"Marker",&_Marker_S},
	{"SoundDataChunk",&_SoundDataChunk_S},
	{"ExtCommonChunk",&_ExtCommonChunk_S},
	{"CommonChunk",&_CommonChunk_S},
	{"FormatVersionChunk",&_FormatVersionChunk_S},
	{"ContainerChunk",&_ContainerChunk_S},
	{"ChunkHeader",&_ChunkHeader_S},
	{"BTHeaderRec",&_BTHeaderRec_S},
	{"BTNodeDescriptor",&_BTNodeDescriptor_S},
	{"HFSPlusVolumeHeader",&_HFSPlusVolumeHeader_S},
	{"HFSMasterDirectoryBlock",&_HFSMasterDirectoryBlock_S},
	{"HFSPlusAttrExtents",&_HFSPlusAttrExtents_S},
	{"HFSPlusAttrForkData",&_HFSPlusAttrForkData_S},
	{"HFSPlusAttrInlineData",&_HFSPlusAttrInlineData_S},
	{"HFSPlusCatalogThread",&_HFSPlusCatalogThread_S},
	{"HFSCatalogThread",&_HFSCatalogThread_S},
	{"HFSPlusCatalogFile",&_HFSPlusCatalogFile_S},
	{"HFSCatalogFile",&_HFSCatalogFile_S},
	{"HFSPlusCatalogFolder",&_HFSPlusCatalogFolder_S},
	{"HFSCatalogFolder",&_HFSCatalogFolder_S},
	{"HFSPlusCatalogKey",&_HFSPlusCatalogKey_S},
	{"HFSCatalogKey",&_HFSCatalogKey_S},
	{"HFSPlusPermissions",&_HFSPlusPermissions_S},
	{"HFSPlusForkData",&_HFSPlusForkData_S},
	{"HFSPlusExtentDescriptor",&_HFSPlusExtentDescriptor_S},
	{"HFSExtentDescriptor",&_HFSExtentDescriptor_S},
	{"HFSPlusExtentKey",&_HFSPlusExtentKey_S},
	{"HFSExtentKey",&_HFSExtentKey_S},
	{"XLibExportedSymbol",&_XLibExportedSymbol_S},
	{"XLibContainerHeader",&_XLibContainerHeader_S},
	{"PEFLoaderRelocationHeader",&_PEFLoaderRelocationHeader_S},
	{"PEFExportedSymbol",&_PEFExportedSymbol_S},
	{"PEFExportedSymbolKey",&_PEFExportedSymbolKey_S},
	{"PEFSplitHashWord",&_PEFSplitHashWord_S},
	{"PEFExportedSymbolHashSlot",&_PEFExportedSymbolHashSlot_S},
	{"PEFImportedSymbol",&_PEFImportedSymbol_S},
	{"PEFImportedLibrary",&_PEFImportedLibrary_S},
	{"PEFLoaderInfoHeader",&_PEFLoaderInfoHeader_S},
	{"PEFSectionHeader",&_PEFSectionHeader_S},
	{"PEFContainerHeader",&_PEFContainerHeader_S},
	{"AVLTreeStruct",&_AVLTreeStruct_S},
	{"MPAddressSpaceInfo",&_MPAddressSpaceInfo_S},
	{"MPNotificationInfo",&_MPNotificationInfo_S},
	{"MPCriticalRegionInfo",&_MPCriticalRegionInfo_S},
	{"MPEventInfo",&_MPEventInfo_S},
	{"MPSemaphoreInfo",&_MPSemaphoreInfo_S},
	{"MPQueueInfo",&_MPQueueInfo_S},
	{"TMTask",&_TMTask_S},
	{"MultiUserGestalt",&_MultiUserGestalt_S},
	{"FindFolderUserRedirectionGlobals",&_FindFolderUserRedirectionGlobals_S},
	{"FolderRouting",&_FolderRouting_S},
	{"FolderDesc",&_FolderDesc_S},
	{"SchedulerInfoRec",&_SchedulerInfoRec_S},
	{"UnicodeMapping",&_UnicodeMapping_S},
	{"OpaqueUnicodeToTextRunInfo",&_OpaqueUnicodeToTextRunInfo_S},
	{"OpaqueUnicodeToTextInfo",&_OpaqueUnicodeToTextInfo_S},
	{"OpaqueTextToUnicodeInfo",&_OpaqueTextToUnicodeInfo_S},
	{"TECConversionInfo",&_TECConversionInfo_S},
	{"OpaqueTECSnifferObjectRef",&_OpaqueTECSnifferObjectRef_S},
	{"OpaqueTECObjectRef",&_OpaqueTECObjectRef_S},
	{"decform",&_decform_S},
	{"827",&_827_S},
	{"decimal",&_decimal_S},
	{"OpaqueTextBreakLocatorRef",&_OpaqueTextBreakLocatorRef_S},
	{"OpaqueCollatorRef",&_OpaqueCollatorRef_S},
	{"UCKeySequenceDataIndex",&_UCKeySequenceDataIndex_S},
	{"UCKeyStateTerminators",&_UCKeyStateTerminators_S},
	{"UCKeyStateRecordsIndex",&_UCKeyStateRecordsIndex_S},
	{"UCKeyToCharTableIndex",&_UCKeyToCharTableIndex_S},
	{"UCKeyModifiersToTableNum",&_UCKeyModifiersToTableNum_S},
	{"UCKeyLayoutFeatureInfo",&_UCKeyLayoutFeatureInfo_S},
	{"UCKeyboardLayout",&_UCKeyboardLayout_S},
	{"UCKeyboardTypeHeader",&_UCKeyboardTypeHeader_S},
	{"UCKeyStateEntryRange",&_UCKeyStateEntryRange_S},
	{"UCKeyStateEntryTerminal",&_UCKeyStateEntryTerminal_S},
	{"UCKeyStateRecord",&_UCKeyStateRecord_S},
	{"NBreakTable",&_NBreakTable_S},
	{"BreakTable",&_BreakTable_S},
	{"ScriptRunStatus",&_ScriptRunStatus_S},
	{"FVector",&_FVector_S},
	{"NumFormatString",&_NumFormatString_S},
	{"InterruptSetMember",&_InterruptSetMember_S},
	{"OpaqueInterruptSetID",&_OpaqueInterruptSetID_S},
	{"PageInformation",&_PageInformation_S},
	{"IOPreparationTable",&_IOPreparationTable_S},
	{"MultipleAddressRange",&_MultipleAddressRange_S},
	{"AddressRange",&_AddressRange_S},
	{"PhysicalAddressRange",&_PhysicalAddressRange_S},
	{"LogicalAddressRange",&_LogicalAddressRange_S},
	{"OpaqueTimerID",&_OpaqueTimerID_S},
	{"OpaqueTaskID",&_OpaqueTaskID_S},
	{"OpaqueSoftwareInterruptID",&_OpaqueSoftwareInterruptID_S},
	{"OpaqueIOPreparationID",&_OpaqueIOPreparationID_S},
	{"ExceptionInformationPowerPC",&_ExceptionInformationPowerPC_S},
	{"MemoryExceptionInformation",&_MemoryExceptionInformation_S},
	{"VectorInformationPowerPC",&_VectorInformationPowerPC_S},
	{"FPUInformationPowerPC",&_FPUInformationPowerPC_S},
	{"RegisterInformationPowerPC",&_RegisterInformationPowerPC_S},
	{"MachineInformationPowerPC",&_MachineInformationPowerPC_S},
	{"OpaqueAreaID",&_OpaqueAreaID_S},
	{"OpaqueIOCommandID",&_OpaqueIOCommandID_S},
	{"DRVRHeader",&_DRVRHeader_S},
	{"OpaqueRegPropertyIter",&_OpaqueRegPropertyIter_S},
	{"OpaqueRegEntryIter",&_OpaqueRegEntryIter_S},
	{"RegEntryID",&_RegEntryID_S},
	{"OpaqueDeviceNodePtr",&_OpaqueDeviceNodePtr_S},
	{"LocaleAndVariant",&_LocaleAndVariant_S},
	{"OpaqueLocaleRef",&_OpaqueLocaleRef_S},
	{"AliasRecord",&_AliasRecord_S},
	{"CFragSystem7InitBlock",&_CFragSystem7InitBlock_S},
	{"CFragSystem7Locator",&_CFragSystem7Locator_S},
	{"CFragCFBundleLocator",&_CFragCFBundleLocator_S},
	{"CFragSystem7SegmentedLocator",&_CFragSystem7SegmentedLocator_S},
	{"CFragSystem7DiskFlatLocator",&_CFragSystem7DiskFlatLocator_S},
	{"CFragSystem7MemoryLocator",&_CFragSystem7MemoryLocator_S},
	{"OpaqueCFragContainerID",&_OpaqueCFragContainerID_S},
	{"OpaqueCFragClosureID",&_OpaqueCFragClosureID_S},
	{"OpaqueCFragConnectionID",&_OpaqueCFragConnectionID_S},
	{"CFragResource",&_CFragResource_S},
	{"CFragResourceSearchExtension",&_CFragResourceSearchExtension_S},
	{"CFragResourceExtensionHeader",&_CFragResourceExtensionHeader_S},
	{"CFragResourceMember",&_CFragResourceMember_S},
	{"MPTaskInfo",&_MPTaskInfo_S},
	{"MPTaskInfoVersion2",&_MPTaskInfoVersion2_S},
	{"OpaqueMPOpaqueID",&_OpaqueMPOpaqueID_S},
	{"OpaqueMPConsoleID",&_OpaqueMPConsoleID_S},
	{"OpaqueMPAreaID",&_OpaqueMPAreaID_S},
	{"OpaqueMPCpuID",&_OpaqueMPCpuID_S},
	{"OpaqueMPCoherenceID",&_OpaqueMPCoherenceID_S},
	{"OpaqueMPNotificationID",&_OpaqueMPNotificationID_S},
	{"OpaqueMPAddressSpaceID",&_OpaqueMPAddressSpaceID_S},
	{"OpaqueMPEventID",&_OpaqueMPEventID_S},
	{"OpaqueMPTimerID",&_OpaqueMPTimerID_S},
	{"OpaqueMPCriticalRegionID",&_OpaqueMPCriticalRegionID_S},
	{"OpaqueMPSemaphoreID",&_OpaqueMPSemaphoreID_S},
	{"OpaqueMPQueueID",&_OpaqueMPQueueID_S},
	{"OpaqueMPTaskID",&_OpaqueMPTaskID_S},
	{"OpaqueMPProcessID",&_OpaqueMPProcessID_S},
	{"ComponentMPWorkFunctionHeaderRecord",&_ComponentMPWorkFunctionHeaderRecord_S},
	{"RegisteredComponentInstanceRecord",&_RegisteredComponentInstanceRecord_S},
	{"RegisteredComponentRecord",&_RegisteredComponentRecord_S},
	{"ComponentInstanceRecord",&_ComponentInstanceRecord_S},
	{"ComponentRecord",&_ComponentRecord_S},
	{"ComponentParameters",&_ComponentParameters_S},
	{"ComponentAliasResource",&_ComponentAliasResource_S},
	{"ExtComponentResource",&_ExtComponentResource_S},
	{"ComponentPlatformInfoArray",&_ComponentPlatformInfoArray_S},
	{"ComponentResourceExtension",&_ComponentResourceExtension_S},
	{"ComponentPlatformInfo",&_ComponentPlatformInfo_S},
	{"ComponentResource",&_ComponentResource_S},
	{"ResourceSpec",&_ResourceSpec_S},
	{"ComponentDescription",&_ComponentDescription_S},
	{"OpaqueCollection",&_OpaqueCollection_S},
	{"TokenBlock",&_TokenBlock_S},
	{"TokenRec",&_TokenRec_S},
	{"ItlbExtRecord",&_ItlbExtRecord_S},
	{"ItlbRecord",&_ItlbRecord_S},
	{"ItlcRecord",&_ItlcRecord_S},
	{"RuleBasedTrslRecord",&_RuleBasedTrslRecord_S},
	{"Itl5Record",&_Itl5Record_S},
	{"TableDirectoryRecord",&_TableDirectoryRecord_S},
	{"NItl4Rec",&_NItl4Rec_S},
	{"Itl4Rec",&_Itl4Rec_S},
	{"NumberParts",&_NumberParts_S},
	{"WideCharArr",&_WideCharArr_S},
	{"UntokenTable",&_UntokenTable_S},
	{"Itl1ExtRec",&_Itl1ExtRec_S},
	{"Intl1Rec",&_Intl1Rec_S},
	{"Intl0Rec",&_Intl0Rec_S},
	{"OffPair",&_OffPair_S},
	{"__CFUserNotification",&___CFUserNotification_S},
	{"__CFWriteStream",&___CFWriteStream_S},
	{"__CFReadStream",&___CFReadStream_S},
	{"436",&_436_S},
	{"434",&_434_S},
	{"__CFNotificationCenter",&___CFNotificationCenter_S},
	{"430",&_430_S},
	{"428",&_428_S},
	{"__CFSocket",&___CFSocket_S},
	{"426",&_426_S},
	{"__CFMessagePort",&___CFMessagePort_S},
	{"424",&_424_S},
	{"__CFMachPort",&___CFMachPort_S},
	{"423",&_423_S},
	{"422",&_422_S},
	{"421",&_421_S},
	{"420",&_420_S},
	{"__CFRunLoopTimer",&___CFRunLoopTimer_S},
	{"__CFRunLoopObserver",&___CFRunLoopObserver_S},
	{"__CFRunLoopSource",&___CFRunLoopSource_S},
	{"__CFRunLoop",&___CFRunLoop_S},
	{"mach_port_qos",&_mach_port_qos_S},
	{"mach_port_limits",&_mach_port_limits_S},
	{"mach_port_status",&_mach_port_status_S},
	{"__CFPlugInInstance",&___CFPlugInInstance_S},
	{"416",&_416_S},
	{"__CFUUID",&___CFUUID_S},
	{"403",&_403_S},
	{"402",&_402_S},
	{"__CFBundle",&___CFBundle_S},
	{"__CFBitVector",&___CFBitVector_S},
	{"__CFBinaryHeap",&___CFBinaryHeap_S},
	{"378",&_378_S},
	{"377",&_377_S},
	{"tm",&_tm_S},
	{"376",&_376_S},
	{"375",&_375_S},
	{"__sFILE",&___sFILE_S},
	{"__sbuf",&___sbuf_S},
	{"sigstack",&_sigstack_S},
	{"sigvec",&_sigvec_S},
	{"sigaltstack",&_sigaltstack_S},
	{"sigaction",&_sigaction_S},
	{"370",&_370_S},
	{"_opaque_pthread_cond_t",&__opaque_pthread_cond_t_S},
	{"_opaque_pthread_condattr_t",&__opaque_pthread_condattr_t_S},
	{"_opaque_pthread_mutex_t",&__opaque_pthread_mutex_t_S},
	{"_opaque_pthread_mutexattr_t",&__opaque_pthread_mutexattr_t_S},
	{"_opaque_pthread_attr_t",&__opaque_pthread_attr_t_S},
	{"_opaque_pthread_t",&__opaque_pthread_t_S},
	{"_pthread_handler_rec",&__pthread_handler_rec_S},
	{"fd_set",&_fd_set_S},
	{"_jmp_buf",&__jmp_buf_S},
	{"sigcontext",&_sigcontext_S},
	{"exception",&_exception_S},
	{"lconv",&_lconv_S},
	{"345",&_345_S},
	{"344",&_344_S},
	{"343",&_343_S},
	{"342",&_342_S},
	{"341",&_341_S},
	{"__CFXMLParser",&___CFXMLParser_S},
	{"338",&_338_S},
	{"337",&_337_S},
	{"335",&_335_S},
	{"334",&_334_S},
	{"333",&_333_S},
	{"332",&_332_S},
	{"331",&_331_S},
	{"330",&_330_S},
	{"329",&_329_S},
	{"328",&_328_S},
	{"327",&_327_S},
	{"__CFXMLNode",&___CFXMLNode_S},
	{"__CFURL",&___CFURL_S},
	{"OpaqueFNSubscriptionRef",&_OpaqueFNSubscriptionRef_S},
	{"FSVolumeInfoParam",&_FSVolumeInfoParam_S},
	{"FSVolumeInfo",&_FSVolumeInfo_S},
	{"FSForkCBInfoParam",&_FSForkCBInfoParam_S},
	{"FSForkInfo",&_FSForkInfo_S},
	{"FSForkIOParam",&_FSForkIOParam_S},
	{"FSCatalogBulkParam",&_FSCatalogBulkParam_S},
	{"FSSearchParams",&_FSSearchParams_S},
	{"OpaqueFSIterator",&_OpaqueFSIterator_S},
	{"FSRefParam",&_FSRefParam_S},
	{"FSCatalogInfo",&_FSCatalogInfo_S},
	{"FSPermissionInfo",&_FSPermissionInfo_S},
	{"FSRef",&_FSRef_S},
	{"DrvQEl",&_DrvQEl_S},
	{"VCB",&_VCB_S},
	{"FCBPBRec",&_FCBPBRec_S},
	{"WDPBRec",&_WDPBRec_S},
	{"CMovePBRec",&_CMovePBRec_S},
	{"CSParam",&_CSParam_S},
	{"ForeignPrivParam",&_ForeignPrivParam_S},
	{"FIDParam",&_FIDParam_S},
	{"WDParam",&_WDParam_S},
	{"CopyParam",&_CopyParam_S},
	{"ObjParam",&_ObjParam_S},
	{"AccessParam",&_AccessParam_S},
	{"XVolumeParam",&_XVolumeParam_S},
	{"XIOParam",&_XIOParam_S},
	{"HVolumeParam",&_HVolumeParam_S},
	{"HFileParam",&_HFileParam_S},
	{"HIOParam",&_HIOParam_S},
	{"DTPBRec",&_DTPBRec_S},
	{"AFPAlternateAddress",&_AFPAlternateAddress_S},
	{"AFPTagData",&_AFPTagData_S},
	{"AFPXVolMountInfo",&_AFPXVolMountInfo_S},
	{"AFPVolMountInfo",&_AFPVolMountInfo_S},
	{"VolumeMountInfoHeader",&_VolumeMountInfoHeader_S},
	{"VolMountInfoHeader",&_VolMountInfoHeader_S},
	{"FSSpec",&_FSSpec_S},
	{"CatPositionRec",&_CatPositionRec_S},
	{"XCInfoPBRec",&_XCInfoPBRec_S},
	{"DirInfo",&_DirInfo_S},
	{"HFileInfo",&_HFileInfo_S},
	{"MultiDevParam",&_MultiDevParam_S},
	{"SlotDevParam",&_SlotDevParam_S},
	{"CntrlParam",&_CntrlParam_S},
	{"VolumeParam",&_VolumeParam_S},
	{"FileParam",&_FileParam_S},
	{"IOParam",&_IOParam_S},
	{"GetVolParmsInfoBuffer",&_GetVolParmsInfoBuffer_S},
	{"HFSUniStr255",&_HFSUniStr255_S},
	{"DXInfo",&_DXInfo_S},
	{"DInfo",&_DInfo_S},
	{"FXInfo",&_FXInfo_S},
	{"FInfo",&_FInfo_S},
	{"ExtendedFolderInfo",&_ExtendedFolderInfo_S},
	{"ExtendedFileInfo",&_ExtendedFileInfo_S},
	{"FolderInfo",&_FolderInfo_S},
	{"FileInfo",&_FileInfo_S},
	{"RoutingResourceEntry",&_RoutingResourceEntry_S},
	{"CustomBadgeResource",&_CustomBadgeResource_S},
	{"LocalDateTime",&_LocalDateTime_S},
	{"UTCDateTime",&_UTCDateTime_S},
	{"TECInfo",&_TECInfo_S},
	{"ScriptCodeRun",&_ScriptCodeRun_S},
	{"TextEncodingRun",&_TextEncodingRun_S},
	{"SysEnvRec",&_SysEnvRec_S},
	{"MachineLocation",&_MachineLocation_S},
	{"DeferredTask",&_DeferredTask_S},
	{"QHdr",&_QHdr_S},
	{"QElem",&_QElem_S},
	{"SysParmType",&_SysParmType_S},
	{"TogglePB",&_TogglePB_S},
	{"78",&_78_S},
	{"77",&_77_S},
	{"76",&_76_S},
	{"DateTimeRec",&_DateTimeRec_S},
	{"DateCacheRecord",&_DateCacheRecord_S},
	{"VolumeVirtualMemoryInfo",&_VolumeVirtualMemoryInfo_S},
	{"LogicalToPhysicalTable",&_LogicalToPhysicalTable_S},
	{"MemoryBlock",&_MemoryBlock_S},
	{"Zone",&_Zone_S},
	{"MixedModeStateRecord",&_MixedModeStateRecord_S},
	{"RoutineDescriptor",&_RoutineDescriptor_S},
	{"RoutineRecord",&_RoutineRecord_S},
	{"__CFTree",&___CFTree_S},
	{"42",&_42_S},
	{"__CFSet",&___CFSet_S},
	{"41",&_41_S},
	{"__CFNumber",&___CFNumber_S},
	{"__CFBoolean",&___CFBoolean_S},
	{"37",&_37_S},
	{"36",&_36_S},
	{"__CFTimeZone",&___CFTimeZone_S},
	{"__CFDate",&___CFDate_S},
	{"__CFCharacterSet",&___CFCharacterSet_S},
	{"20",&_20_S},
	{"__CFDictionary",&___CFDictionary_S},
	{"17",&_17_S},
	{"16",&_16_S},
	{"__CFData",&___CFData_S},
	{"__CFBag",&___CFBag_S},
	{"15",&_15_S},
	{"__CFArray",&___CFArray_S},
	{"14",&_14_S},
	{"13",&_13_S},
	{"__CFAllocator",&___CFAllocator_S},
	{"9",&_9_S},
	{"__CFString",&___CFString_S},
	{"VersRec",&_VersRec_S},
	{"NumVersion",&_NumVersion_S},
	{"TimeRecord",&_TimeRecord_S},
	{"TimeBaseRecord",&_TimeBaseRecord_S},
	{"FixedRect",&_FixedRect_S},
	{"FixedPoint",&_FixedPoint_S},
	{"Rect",&_Rect_S},
	{"Point",&_Point_S},
	{"Float32Point",&_Float32Point_S},
	{"Float96",&_Float96_S},
	{"Float80",&_Float80_S},
	{"UnsignedWide",&_UnsignedWide_S},
	{"wide",&_wide_S},
};

Nat4	VPX_MacOSX_Structures_Number = 1140;

#pragma export on

Nat4	load_MacOSX_Structures(V_Environment environment);
Nat4	load_MacOSX_Structures(V_Environment environment)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_MacOSX_Structures_Number,VPX_MacOSX_Structures);
		
		return result;
}

#pragma export off
