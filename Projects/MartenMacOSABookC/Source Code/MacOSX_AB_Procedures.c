/*
	
	MacOSX_AB_Procedures.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

#include <AddressBook/ABAddressBookC.h>
#include <AddressBook/ABPeoplePickerC.h>

/* --------------------- Start User created functions -------------------------------- */


/* --------------------- End User created functions -------------------------------- */

	VPL_Parameter _ABPickerSelectInAddressBook_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerSelectInAddressBook_F = {"ABPickerSelectInAddressBook",ABPickerSelectInAddressBook,&_ABPickerSelectInAddressBook_1,NULL};

	VPL_Parameter _ABPickerEditInAddressBook_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerEditInAddressBook_F = {"ABPickerEditInAddressBook",ABPickerEditInAddressBook,&_ABPickerEditInAddressBook_1,NULL};

	VPL_Parameter _ABPickerClearSearchField_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerClearSearchField_F = {"ABPickerClearSearchField",ABPickerClearSearchField,&_ABPickerClearSearchField_1,NULL};

	VPL_Parameter _ABPickerGetDelegate_R = { kPointerType,0,"OpqqueHIObjectRef",1,0,NULL};
	VPL_Parameter _ABPickerGetDelegate_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerGetDelegate_F = {"ABPickerGetDelegate",ABPickerGetDelegate,&_ABPickerGetDelegate_1,&_ABPickerGetDelegate_R};

	VPL_Parameter _ABPickerSetDelegate_2 = { kPointerType,0,"OpaqueHIObjectRef",1,0,NULL};
	VPL_Parameter _ABPickerSetDelegate_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerSetDelegate_2};
	VPL_ExtProcedure _ABPickerSetDelegate_F = {"ABPickerSetDelegate",ABPickerSetDelegate,&_ABPickerSetDelegate_1,NULL};

	VPL_Parameter _ABPickerDeselectAll_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerDeselectAll_F = {"ABPickerDeselectAll",ABPickerDeselectAll,&_ABPickerDeselectAll_1,NULL};

	VPL_Parameter _ABPickerDeselectIdentifier_3 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABPickerDeselectIdentifier_2 = { kPointerType,0,"__ABPerson",1,0,&_ABPickerDeselectIdentifier_3};
	VPL_Parameter _ABPickerDeselectIdentifier_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerDeselectIdentifier_2};
	VPL_ExtProcedure _ABPickerDeselectIdentifier_F = {"ABPickerDeselectIdentifier",ABPickerDeselectIdentifier,&_ABPickerDeselectIdentifier_1,NULL};

	VPL_Parameter _ABPickerDeselectRecord_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABPickerDeselectRecord_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerDeselectRecord_2};
	VPL_ExtProcedure _ABPickerDeselectRecord_F = {"ABPickerDeselectRecord",ABPickerDeselectRecord,&_ABPickerDeselectRecord_1,NULL};

	VPL_Parameter _ABPickerDeselectGroup_2 = { kPointerType,0,"__ABGroup",1,0,NULL};
	VPL_Parameter _ABPickerDeselectGroup_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerDeselectGroup_2};
	VPL_ExtProcedure _ABPickerDeselectGroup_F = {"ABPickerDeselectGroup",ABPickerDeselectGroup,&_ABPickerDeselectGroup_1,NULL};

	VPL_Parameter _ABPickerSelectIdentifier_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABPickerSelectIdentifier_3 = { kPointerType,0,"__CFString",1,1,&_ABPickerSelectIdentifier_4};
	VPL_Parameter _ABPickerSelectIdentifier_2 = { kPointerType,0,"__ABPerson",1,0,&_ABPickerSelectIdentifier_3};
	VPL_Parameter _ABPickerSelectIdentifier_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerSelectIdentifier_2};
	VPL_ExtProcedure _ABPickerSelectIdentifier_F = {"ABPickerSelectIdentifier",ABPickerSelectIdentifier,&_ABPickerSelectIdentifier_1,NULL};

	VPL_Parameter _ABPickerSelectRecord_3 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABPickerSelectRecord_2 = { kPointerType,0,"void",1,0,&_ABPickerSelectRecord_3};
	VPL_Parameter _ABPickerSelectRecord_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerSelectRecord_2};
	VPL_ExtProcedure _ABPickerSelectRecord_F = {"ABPickerSelectRecord",ABPickerSelectRecord,&_ABPickerSelectRecord_1,NULL};

	VPL_Parameter _ABPickerSelectGroup_3 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABPickerSelectGroup_2 = { kPointerType,0,"__ABGroup",1,0,&_ABPickerSelectGroup_3};
	VPL_Parameter _ABPickerSelectGroup_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerSelectGroup_2};
	VPL_ExtProcedure _ABPickerSelectGroup_F = {"ABPickerSelectGroup",ABPickerSelectGroup,&_ABPickerSelectGroup_1,NULL};

	VPL_Parameter _ABPickerCopySelectedValues_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABPickerCopySelectedValues_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerCopySelectedValues_F = {"ABPickerCopySelectedValues",ABPickerCopySelectedValues,&_ABPickerCopySelectedValues_1,&_ABPickerCopySelectedValues_R};

	VPL_Parameter _ABPickerCopySelectedIdentifiers_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABPickerCopySelectedIdentifiers_2 = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_Parameter _ABPickerCopySelectedIdentifiers_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerCopySelectedIdentifiers_2};
	VPL_ExtProcedure _ABPickerCopySelectedIdentifiers_F = {"ABPickerCopySelectedIdentifiers",ABPickerCopySelectedIdentifiers,&_ABPickerCopySelectedIdentifiers_1,&_ABPickerCopySelectedIdentifiers_R};

	VPL_Parameter _ABPickerCopySelectedRecords_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABPickerCopySelectedRecords_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerCopySelectedRecords_F = {"ABPickerCopySelectedRecords",ABPickerCopySelectedRecords,&_ABPickerCopySelectedRecords_1,&_ABPickerCopySelectedRecords_R};

	VPL_Parameter _ABPickerCopySelectedGroups_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABPickerCopySelectedGroups_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerCopySelectedGroups_F = {"ABPickerCopySelectedGroups",ABPickerCopySelectedGroups,&_ABPickerCopySelectedGroups_1,&_ABPickerCopySelectedGroups_R};

	VPL_Parameter _ABPickerCopyDisplayedProperty_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABPickerCopyDisplayedProperty_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerCopyDisplayedProperty_F = {"ABPickerCopyDisplayedProperty",ABPickerCopyDisplayedProperty,&_ABPickerCopyDisplayedProperty_1,&_ABPickerCopyDisplayedProperty_R};

	VPL_Parameter _ABPickerSetDisplayedProperty_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABPickerSetDisplayedProperty_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerSetDisplayedProperty_2};
	VPL_ExtProcedure _ABPickerSetDisplayedProperty_F = {"ABPickerSetDisplayedProperty",ABPickerSetDisplayedProperty,&_ABPickerSetDisplayedProperty_1,NULL};

	VPL_Parameter _ABPickerCopyColumnTitle_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABPickerCopyColumnTitle_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABPickerCopyColumnTitle_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerCopyColumnTitle_2};
	VPL_ExtProcedure _ABPickerCopyColumnTitle_F = {"ABPickerCopyColumnTitle",ABPickerCopyColumnTitle,&_ABPickerCopyColumnTitle_1,&_ABPickerCopyColumnTitle_R};

	VPL_Parameter _ABPickerSetColumnTitle_3 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABPickerSetColumnTitle_2 = { kPointerType,0,"__CFString",1,1,&_ABPickerSetColumnTitle_3};
	VPL_Parameter _ABPickerSetColumnTitle_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerSetColumnTitle_2};
	VPL_ExtProcedure _ABPickerSetColumnTitle_F = {"ABPickerSetColumnTitle",ABPickerSetColumnTitle,&_ABPickerSetColumnTitle_1,NULL};

	VPL_Parameter _ABPickerCopyProperties_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABPickerCopyProperties_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerCopyProperties_F = {"ABPickerCopyProperties",ABPickerCopyProperties,&_ABPickerCopyProperties_1,&_ABPickerCopyProperties_R};

	VPL_Parameter _ABPickerRemoveProperty_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABPickerRemoveProperty_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerRemoveProperty_2};
	VPL_ExtProcedure _ABPickerRemoveProperty_F = {"ABPickerRemoveProperty",ABPickerRemoveProperty,&_ABPickerRemoveProperty_1,NULL};

	VPL_Parameter _ABPickerAddProperty_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABPickerAddProperty_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerAddProperty_2};
	VPL_ExtProcedure _ABPickerAddProperty_F = {"ABPickerAddProperty",ABPickerAddProperty,&_ABPickerAddProperty_1,NULL};

	VPL_Parameter _ABPickerChangeAttributes_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ABPickerChangeAttributes_2 = { kUnsignedType,4,NULL,0,0,&_ABPickerChangeAttributes_3};
	VPL_Parameter _ABPickerChangeAttributes_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerChangeAttributes_2};
	VPL_ExtProcedure _ABPickerChangeAttributes_F = {"ABPickerChangeAttributes",ABPickerChangeAttributes,&_ABPickerChangeAttributes_1,NULL};

	VPL_Parameter _ABPickerGetAttributes_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ABPickerGetAttributes_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerGetAttributes_F = {"ABPickerGetAttributes",ABPickerGetAttributes,&_ABPickerGetAttributes_1,&_ABPickerGetAttributes_R};

	VPL_Parameter _ABPickerIsVisible_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABPickerIsVisible_1 = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerIsVisible_F = {"ABPickerIsVisible",ABPickerIsVisible,&_ABPickerIsVisible_1,&_ABPickerIsVisible_R};

	VPL_Parameter _ABPickerSetVisibility_2 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABPickerSetVisibility_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerSetVisibility_2};
	VPL_ExtProcedure _ABPickerSetVisibility_F = {"ABPickerSetVisibility",ABPickerSetVisibility,&_ABPickerSetVisibility_1,NULL};

	VPL_Parameter _ABPickerGetFrame_2 = { kPointerType,16,"CGRect",1,0,NULL};
	VPL_Parameter _ABPickerGetFrame_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerGetFrame_2};
	VPL_ExtProcedure _ABPickerGetFrame_F = {"ABPickerGetFrame",ABPickerGetFrame,&_ABPickerGetFrame_1,NULL};

	VPL_Parameter _ABPickerSetFrame_2 = { kPointerType,16,"CGRect",1,1,NULL};
	VPL_Parameter _ABPickerSetFrame_1 = { kPointerType,0,"OpaqueABPicker",1,0,&_ABPickerSetFrame_2};
	VPL_ExtProcedure _ABPickerSetFrame_F = {"ABPickerSetFrame",ABPickerSetFrame,&_ABPickerSetFrame_1,NULL};

	VPL_Parameter _ABPickerCreate_R = { kPointerType,0,"OpaqueABPicker",1,0,NULL};
	VPL_ExtProcedure _ABPickerCreate_F = {"ABPickerCreate",ABPickerCreate,NULL,&_ABPickerCreate_R};

	VPL_Parameter _ABImageClientCallback_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABImageClientCallback_2 = { kIntType,4,NULL,0,0,&_ABImageClientCallback_3};
	VPL_Parameter _ABImageClientCallback_1 = { kPointerType,0,"__CFData",1,1,&_ABImageClientCallback_2};
	VPL_ExtProcedure _ABImageClientCallback_F = {"ABImageClientCallback",NULL,&_ABImageClientCallback_1,NULL};

	VPL_Parameter _ABCancelLoadingImageDataForTag_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ABCancelLoadingImageDataForTag_F = {"ABCancelLoadingImageDataForTag",ABCancelLoadingImageDataForTag,&_ABCancelLoadingImageDataForTag_1,NULL};

	VPL_Parameter _ABBeginLoadingImageDataForClient_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABBeginLoadingImageDataForClient_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABBeginLoadingImageDataForClient_2 = { kPointerType,0,"void",1,0,&_ABBeginLoadingImageDataForClient_3};
	VPL_Parameter _ABBeginLoadingImageDataForClient_1 = { kPointerType,0,"__ABPerson",1,0,&_ABBeginLoadingImageDataForClient_2};
	VPL_ExtProcedure _ABBeginLoadingImageDataForClient_F = {"ABBeginLoadingImageDataForClient",ABBeginLoadingImageDataForClient,&_ABBeginLoadingImageDataForClient_1,&_ABBeginLoadingImageDataForClient_R};

	VPL_Parameter _ABPersonCopyImageData_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _ABPersonCopyImageData_1 = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_ExtProcedure _ABPersonCopyImageData_F = {"ABPersonCopyImageData",ABPersonCopyImageData,&_ABPersonCopyImageData_1,&_ABPersonCopyImageData_R};

	VPL_Parameter _ABPersonSetImageData_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABPersonSetImageData_2 = { kPointerType,0,"__CFData",1,1,NULL};
	VPL_Parameter _ABPersonSetImageData_1 = { kPointerType,0,"__ABPerson",1,0,&_ABPersonSetImageData_2};
	VPL_ExtProcedure _ABPersonSetImageData_F = {"ABPersonSetImageData",ABPersonSetImageData,&_ABPersonSetImageData_1,&_ABPersonSetImageData_R};

	VPL_Parameter _ABCopyDefaultCountryCode_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABCopyDefaultCountryCode_1 = { kPointerType,0,"__ABAddressBookRef",1,0,NULL};
	VPL_ExtProcedure _ABCopyDefaultCountryCode_F = {"ABCopyDefaultCountryCode",ABCopyDefaultCountryCode,&_ABCopyDefaultCountryCode_1,&_ABCopyDefaultCountryCode_R};

	VPL_Parameter _ABCreateFormattedAddressFromDictionary_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABCreateFormattedAddressFromDictionary_2 = { kPointerType,0,"__CFDictionary",1,1,NULL};
	VPL_Parameter _ABCreateFormattedAddressFromDictionary_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABCreateFormattedAddressFromDictionary_2};
	VPL_ExtProcedure _ABCreateFormattedAddressFromDictionary_F = {"ABCreateFormattedAddressFromDictionary",ABCreateFormattedAddressFromDictionary,&_ABCreateFormattedAddressFromDictionary_1,&_ABCreateFormattedAddressFromDictionary_R};

	VPL_Parameter _ABCopyLocalizedPropertyOrLabel_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABCopyLocalizedPropertyOrLabel_1 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_ExtProcedure _ABCopyLocalizedPropertyOrLabel_F = {"ABCopyLocalizedPropertyOrLabel",ABCopyLocalizedPropertyOrLabel,&_ABCopyLocalizedPropertyOrLabel_1,&_ABCopyLocalizedPropertyOrLabel_R};

	VPL_Parameter _ABMultiValueCreateMutableCopy_R = { kPointerType,0,"__ABMultiValue",1,0,NULL};
	VPL_Parameter _ABMultiValueCreateMutableCopy_1 = { kPointerType,0,"__ABMultiValue",1,1,NULL};
	VPL_ExtProcedure _ABMultiValueCreateMutableCopy_F = {"ABMultiValueCreateMutableCopy",ABMultiValueCreateMutableCopy,&_ABMultiValueCreateMutableCopy_1,&_ABMultiValueCreateMutableCopy_R};

	VPL_Parameter _ABMultiValueSetPrimaryIdentifier_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueSetPrimaryIdentifier_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABMultiValueSetPrimaryIdentifier_1 = { kPointerType,0,"__ABMultiValue",1,0,&_ABMultiValueSetPrimaryIdentifier_2};
	VPL_ExtProcedure _ABMultiValueSetPrimaryIdentifier_F = {"ABMultiValueSetPrimaryIdentifier",ABMultiValueSetPrimaryIdentifier,&_ABMultiValueSetPrimaryIdentifier_1,&_ABMultiValueSetPrimaryIdentifier_R};

	VPL_Parameter _ABMultiValueReplaceLabel_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueReplaceLabel_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueReplaceLabel_2 = { kPointerType,0,"__CFString",1,1,&_ABMultiValueReplaceLabel_3};
	VPL_Parameter _ABMultiValueReplaceLabel_1 = { kPointerType,0,"__ABMultiValue",1,0,&_ABMultiValueReplaceLabel_2};
	VPL_ExtProcedure _ABMultiValueReplaceLabel_F = {"ABMultiValueReplaceLabel",ABMultiValueReplaceLabel,&_ABMultiValueReplaceLabel_1,&_ABMultiValueReplaceLabel_R};

	VPL_Parameter _ABMultiValueReplaceValue_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueReplaceValue_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueReplaceValue_2 = { kPointerType,0,"void",1,1,&_ABMultiValueReplaceValue_3};
	VPL_Parameter _ABMultiValueReplaceValue_1 = { kPointerType,0,"__ABMultiValue",1,0,&_ABMultiValueReplaceValue_2};
	VPL_ExtProcedure _ABMultiValueReplaceValue_F = {"ABMultiValueReplaceValue",ABMultiValueReplaceValue,&_ABMultiValueReplaceValue_1,&_ABMultiValueReplaceValue_R};

	VPL_Parameter _ABMultiValueRemove_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueRemove_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueRemove_1 = { kPointerType,0,"__ABMultiValue",1,0,&_ABMultiValueRemove_2};
	VPL_ExtProcedure _ABMultiValueRemove_F = {"ABMultiValueRemove",ABMultiValueRemove,&_ABMultiValueRemove_1,&_ABMultiValueRemove_R};

	VPL_Parameter _ABMultiValueInsert_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueInsert_5 = { kPointerType,0,"__CFString",2,0,NULL};
	VPL_Parameter _ABMultiValueInsert_4 = { kIntType,4,NULL,0,0,&_ABMultiValueInsert_5};
	VPL_Parameter _ABMultiValueInsert_3 = { kPointerType,0,"__CFString",1,1,&_ABMultiValueInsert_4};
	VPL_Parameter _ABMultiValueInsert_2 = { kPointerType,0,"void",1,1,&_ABMultiValueInsert_3};
	VPL_Parameter _ABMultiValueInsert_1 = { kPointerType,0,"__ABMultiValue",1,0,&_ABMultiValueInsert_2};
	VPL_ExtProcedure _ABMultiValueInsert_F = {"ABMultiValueInsert",ABMultiValueInsert,&_ABMultiValueInsert_1,&_ABMultiValueInsert_R};

	VPL_Parameter _ABMultiValueAdd_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueAdd_4 = { kPointerType,0,"__CFString",2,0,NULL};
	VPL_Parameter _ABMultiValueAdd_3 = { kPointerType,0,"__CFString",1,1,&_ABMultiValueAdd_4};
	VPL_Parameter _ABMultiValueAdd_2 = { kPointerType,0,"void",1,1,&_ABMultiValueAdd_3};
	VPL_Parameter _ABMultiValueAdd_1 = { kPointerType,0,"__ABMultiValue",1,0,&_ABMultiValueAdd_2};
	VPL_ExtProcedure _ABMultiValueAdd_F = {"ABMultiValueAdd",ABMultiValueAdd,&_ABMultiValueAdd_1,&_ABMultiValueAdd_R};

	VPL_Parameter _ABMultiValueCreateMutable_R = { kPointerType,0,"__ABMultiValue",1,0,NULL};
	VPL_ExtProcedure _ABMultiValueCreateMutable_F = {"ABMultiValueCreateMutable",ABMultiValueCreateMutable,NULL,&_ABMultiValueCreateMutable_R};

	VPL_Parameter _ABMultiValueCreateCopy_R = { kPointerType,0,"__ABMultiValue",1,0,NULL};
	VPL_Parameter _ABMultiValueCreateCopy_1 = { kPointerType,0,"__ABMultiValue",1,1,NULL};
	VPL_ExtProcedure _ABMultiValueCreateCopy_F = {"ABMultiValueCreateCopy",ABMultiValueCreateCopy,&_ABMultiValueCreateCopy_1,&_ABMultiValueCreateCopy_R};

	VPL_Parameter _ABMultiValuePropertyType_R = { kEnumType,4,"_ABPropertyType",0,0,NULL};
	VPL_Parameter _ABMultiValuePropertyType_1 = { kPointerType,0,"__ABMultiValue",1,1,NULL};
	VPL_ExtProcedure _ABMultiValuePropertyType_F = {"ABMultiValuePropertyType",ABMultiValuePropertyType,&_ABMultiValuePropertyType_1,&_ABMultiValuePropertyType_R};

	VPL_Parameter _ABMultiValueCopyIdentifierAtIndex_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABMultiValueCopyIdentifierAtIndex_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueCopyIdentifierAtIndex_1 = { kPointerType,0,"__ABMultiValue",1,1,&_ABMultiValueCopyIdentifierAtIndex_2};
	VPL_ExtProcedure _ABMultiValueCopyIdentifierAtIndex_F = {"ABMultiValueCopyIdentifierAtIndex",ABMultiValueCopyIdentifierAtIndex,&_ABMultiValueCopyIdentifierAtIndex_1,&_ABMultiValueCopyIdentifierAtIndex_R};

	VPL_Parameter _ABMultiValueIndexForIdentifier_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueIndexForIdentifier_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABMultiValueIndexForIdentifier_1 = { kPointerType,0,"__ABMultiValue",1,1,&_ABMultiValueIndexForIdentifier_2};
	VPL_ExtProcedure _ABMultiValueIndexForIdentifier_F = {"ABMultiValueIndexForIdentifier",ABMultiValueIndexForIdentifier,&_ABMultiValueIndexForIdentifier_1,&_ABMultiValueIndexForIdentifier_R};

	VPL_Parameter _ABMultiValueCopyPrimaryIdentifier_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABMultiValueCopyPrimaryIdentifier_1 = { kPointerType,0,"__ABMultiValue",1,1,NULL};
	VPL_ExtProcedure _ABMultiValueCopyPrimaryIdentifier_F = {"ABMultiValueCopyPrimaryIdentifier",ABMultiValueCopyPrimaryIdentifier,&_ABMultiValueCopyPrimaryIdentifier_1,&_ABMultiValueCopyPrimaryIdentifier_R};

	VPL_Parameter _ABMultiValueCopyLabelAtIndex_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABMultiValueCopyLabelAtIndex_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueCopyLabelAtIndex_1 = { kPointerType,0,"__ABMultiValue",1,1,&_ABMultiValueCopyLabelAtIndex_2};
	VPL_ExtProcedure _ABMultiValueCopyLabelAtIndex_F = {"ABMultiValueCopyLabelAtIndex",ABMultiValueCopyLabelAtIndex,&_ABMultiValueCopyLabelAtIndex_1,&_ABMultiValueCopyLabelAtIndex_R};

	VPL_Parameter _ABMultiValueCopyValueAtIndex_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABMultiValueCopyValueAtIndex_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueCopyValueAtIndex_1 = { kPointerType,0,"__ABMultiValue",1,1,&_ABMultiValueCopyValueAtIndex_2};
	VPL_ExtProcedure _ABMultiValueCopyValueAtIndex_F = {"ABMultiValueCopyValueAtIndex",ABMultiValueCopyValueAtIndex,&_ABMultiValueCopyValueAtIndex_1,&_ABMultiValueCopyValueAtIndex_R};

	VPL_Parameter _ABMultiValueCount_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ABMultiValueCount_1 = { kPointerType,0,"__ABMultiValue",1,1,NULL};
	VPL_ExtProcedure _ABMultiValueCount_F = {"ABMultiValueCount",ABMultiValueCount,&_ABMultiValueCount_1,&_ABMultiValueCount_R};

	VPL_Parameter _ABMultiValueCreate_R = { kPointerType,0,"__ABMultiValue",1,0,NULL};
	VPL_ExtProcedure _ABMultiValueCreate_F = {"ABMultiValueCreate",ABMultiValueCreate,NULL,&_ABMultiValueCreate_R};

	VPL_Parameter _ABSearchElementMatchesRecord_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABSearchElementMatchesRecord_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABSearchElementMatchesRecord_1 = { kPointerType,0,"__ABSearchElementRef",1,0,&_ABSearchElementMatchesRecord_2};
	VPL_ExtProcedure _ABSearchElementMatchesRecord_F = {"ABSearchElementMatchesRecord",ABSearchElementMatchesRecord,&_ABSearchElementMatchesRecord_1,&_ABSearchElementMatchesRecord_R};

	VPL_Parameter _ABSearchElementCreateWithConjunction_R = { kPointerType,0,"__ABSearchElementRef",1,0,NULL};
	VPL_Parameter _ABSearchElementCreateWithConjunction_2 = { kPointerType,0,"__CFArray",1,1,NULL};
	VPL_Parameter _ABSearchElementCreateWithConjunction_1 = { kEnumType,4,"_ABSearchConjunction",0,0,&_ABSearchElementCreateWithConjunction_2};
	VPL_ExtProcedure _ABSearchElementCreateWithConjunction_F = {"ABSearchElementCreateWithConjunction",ABSearchElementCreateWithConjunction,&_ABSearchElementCreateWithConjunction_1,&_ABSearchElementCreateWithConjunction_R};

	VPL_Parameter _ABGroupCreateSearchElement_R = { kPointerType,0,"__ABSearchElementRef",1,0,NULL};
	VPL_Parameter _ABGroupCreateSearchElement_5 = { kEnumType,4,"_ABSearchComparison",0,0,NULL};
	VPL_Parameter _ABGroupCreateSearchElement_4 = { kPointerType,0,"void",1,1,&_ABGroupCreateSearchElement_5};
	VPL_Parameter _ABGroupCreateSearchElement_3 = { kPointerType,0,"__CFString",1,1,&_ABGroupCreateSearchElement_4};
	VPL_Parameter _ABGroupCreateSearchElement_2 = { kPointerType,0,"__CFString",1,1,&_ABGroupCreateSearchElement_3};
	VPL_Parameter _ABGroupCreateSearchElement_1 = { kPointerType,0,"__CFString",1,1,&_ABGroupCreateSearchElement_2};
	VPL_ExtProcedure _ABGroupCreateSearchElement_F = {"ABGroupCreateSearchElement",ABGroupCreateSearchElement,&_ABGroupCreateSearchElement_1,&_ABGroupCreateSearchElement_R};

	VPL_Parameter _ABGroupCopyDistributionIdentifier_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABGroupCopyDistributionIdentifier_3 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABGroupCopyDistributionIdentifier_2 = { kPointerType,0,"__ABPerson",1,0,&_ABGroupCopyDistributionIdentifier_3};
	VPL_Parameter _ABGroupCopyDistributionIdentifier_1 = { kPointerType,0,"__ABGroup",1,0,&_ABGroupCopyDistributionIdentifier_2};
	VPL_ExtProcedure _ABGroupCopyDistributionIdentifier_F = {"ABGroupCopyDistributionIdentifier",ABGroupCopyDistributionIdentifier,&_ABGroupCopyDistributionIdentifier_1,&_ABGroupCopyDistributionIdentifier_R};

	VPL_Parameter _ABGroupSetDistributionIdentifier_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABGroupSetDistributionIdentifier_4 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABGroupSetDistributionIdentifier_3 = { kPointerType,0,"__CFString",1,1,&_ABGroupSetDistributionIdentifier_4};
	VPL_Parameter _ABGroupSetDistributionIdentifier_2 = { kPointerType,0,"__ABPerson",1,0,&_ABGroupSetDistributionIdentifier_3};
	VPL_Parameter _ABGroupSetDistributionIdentifier_1 = { kPointerType,0,"__ABGroup",1,0,&_ABGroupSetDistributionIdentifier_2};
	VPL_ExtProcedure _ABGroupSetDistributionIdentifier_F = {"ABGroupSetDistributionIdentifier",ABGroupSetDistributionIdentifier,&_ABGroupSetDistributionIdentifier_1,&_ABGroupSetDistributionIdentifier_R};

	VPL_Parameter _ABGroupCopyParentGroups_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABGroupCopyParentGroups_1 = { kPointerType,0,"__ABGroup",1,0,NULL};
	VPL_ExtProcedure _ABGroupCopyParentGroups_F = {"ABGroupCopyParentGroups",ABGroupCopyParentGroups,&_ABGroupCopyParentGroups_1,&_ABGroupCopyParentGroups_R};

	VPL_Parameter _ABGroupRemoveGroup_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABGroupRemoveGroup_2 = { kPointerType,0,"__ABGroup",1,0,NULL};
	VPL_Parameter _ABGroupRemoveGroup_1 = { kPointerType,0,"__ABGroup",1,0,&_ABGroupRemoveGroup_2};
	VPL_ExtProcedure _ABGroupRemoveGroup_F = {"ABGroupRemoveGroup",ABGroupRemoveGroup,&_ABGroupRemoveGroup_1,&_ABGroupRemoveGroup_R};

	VPL_Parameter _ABGroupAddGroup_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABGroupAddGroup_2 = { kPointerType,0,"__ABGroup",1,0,NULL};
	VPL_Parameter _ABGroupAddGroup_1 = { kPointerType,0,"__ABGroup",1,0,&_ABGroupAddGroup_2};
	VPL_ExtProcedure _ABGroupAddGroup_F = {"ABGroupAddGroup",ABGroupAddGroup,&_ABGroupAddGroup_1,&_ABGroupAddGroup_R};

	VPL_Parameter _ABGroupCopyArrayOfAllSubgroups_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABGroupCopyArrayOfAllSubgroups_1 = { kPointerType,0,"__ABGroup",1,0,NULL};
	VPL_ExtProcedure _ABGroupCopyArrayOfAllSubgroups_F = {"ABGroupCopyArrayOfAllSubgroups",ABGroupCopyArrayOfAllSubgroups,&_ABGroupCopyArrayOfAllSubgroups_1,&_ABGroupCopyArrayOfAllSubgroups_R};

	VPL_Parameter _ABGroupRemoveMember_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABGroupRemoveMember_2 = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_Parameter _ABGroupRemoveMember_1 = { kPointerType,0,"__ABGroup",1,0,&_ABGroupRemoveMember_2};
	VPL_ExtProcedure _ABGroupRemoveMember_F = {"ABGroupRemoveMember",ABGroupRemoveMember,&_ABGroupRemoveMember_1,&_ABGroupRemoveMember_R};

	VPL_Parameter _ABGroupAddMember_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABGroupAddMember_2 = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_Parameter _ABGroupAddMember_1 = { kPointerType,0,"__ABGroup",1,0,&_ABGroupAddMember_2};
	VPL_ExtProcedure _ABGroupAddMember_F = {"ABGroupAddMember",ABGroupAddMember,&_ABGroupAddMember_1,&_ABGroupAddMember_R};

	VPL_Parameter _ABGroupCopyArrayOfAllMembers_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABGroupCopyArrayOfAllMembers_1 = { kPointerType,0,"__ABGroup",1,0,NULL};
	VPL_ExtProcedure _ABGroupCopyArrayOfAllMembers_F = {"ABGroupCopyArrayOfAllMembers",ABGroupCopyArrayOfAllMembers,&_ABGroupCopyArrayOfAllMembers_1,&_ABGroupCopyArrayOfAllMembers_R};

	VPL_Parameter _ABGroupCreate_R = { kPointerType,0,"__ABGroup",1,0,NULL};
	VPL_ExtProcedure _ABGroupCreate_F = {"ABGroupCreate",ABGroupCreate,NULL,&_ABGroupCreate_R};

	VPL_Parameter _ABPersonCreateSearchElement_R = { kPointerType,0,"__ABSearchElementRef",1,0,NULL};
	VPL_Parameter _ABPersonCreateSearchElement_5 = { kEnumType,4,"_ABSearchComparison",0,0,NULL};
	VPL_Parameter _ABPersonCreateSearchElement_4 = { kPointerType,0,"void",1,1,&_ABPersonCreateSearchElement_5};
	VPL_Parameter _ABPersonCreateSearchElement_3 = { kPointerType,0,"__CFString",1,1,&_ABPersonCreateSearchElement_4};
	VPL_Parameter _ABPersonCreateSearchElement_2 = { kPointerType,0,"__CFString",1,1,&_ABPersonCreateSearchElement_3};
	VPL_Parameter _ABPersonCreateSearchElement_1 = { kPointerType,0,"__CFString",1,1,&_ABPersonCreateSearchElement_2};
	VPL_ExtProcedure _ABPersonCreateSearchElement_F = {"ABPersonCreateSearchElement",ABPersonCreateSearchElement,&_ABPersonCreateSearchElement_1,&_ABPersonCreateSearchElement_R};

	VPL_Parameter _ABPersonCopyParentGroups_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABPersonCopyParentGroups_1 = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_ExtProcedure _ABPersonCopyParentGroups_F = {"ABPersonCopyParentGroups",ABPersonCopyParentGroups,&_ABPersonCopyParentGroups_1,&_ABPersonCopyParentGroups_R};

	VPL_Parameter _ABPersonCopyVCardRepresentation_R = { kPointerType,0,"__CFData",1,0,NULL};
	VPL_Parameter _ABPersonCopyVCardRepresentation_1 = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_ExtProcedure _ABPersonCopyVCardRepresentation_F = {"ABPersonCopyVCardRepresentation",ABPersonCopyVCardRepresentation,&_ABPersonCopyVCardRepresentation_1,&_ABPersonCopyVCardRepresentation_R};

	VPL_Parameter _ABPersonCreateWithVCardRepresentation_R = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_Parameter _ABPersonCreateWithVCardRepresentation_1 = { kPointerType,0,"__CFData",1,1,NULL};
	VPL_ExtProcedure _ABPersonCreateWithVCardRepresentation_F = {"ABPersonCreateWithVCardRepresentation",ABPersonCreateWithVCardRepresentation,&_ABPersonCreateWithVCardRepresentation_1,&_ABPersonCreateWithVCardRepresentation_R};

	VPL_Parameter _ABPersonCreate_R = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_ExtProcedure _ABPersonCreate_F = {"ABPersonCreate",ABPersonCreate,NULL,&_ABPersonCreate_R};

	VPL_Parameter _ABRecordCopyUniqueId_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABRecordCopyUniqueId_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _ABRecordCopyUniqueId_F = {"ABRecordCopyUniqueId",ABRecordCopyUniqueId,&_ABRecordCopyUniqueId_1,&_ABRecordCopyUniqueId_R};

	VPL_Parameter _ABRecordIsReadOnly_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABRecordIsReadOnly_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _ABRecordIsReadOnly_F = {"ABRecordIsReadOnly",ABRecordIsReadOnly,&_ABRecordIsReadOnly_1,&_ABRecordIsReadOnly_R};

	VPL_Parameter _ABRecordRemoveValue_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABRecordRemoveValue_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABRecordRemoveValue_1 = { kPointerType,0,"void",1,0,&_ABRecordRemoveValue_2};
	VPL_ExtProcedure _ABRecordRemoveValue_F = {"ABRecordRemoveValue",ABRecordRemoveValue,&_ABRecordRemoveValue_1,&_ABRecordRemoveValue_R};

	VPL_Parameter _ABRecordSetValue_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABRecordSetValue_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _ABRecordSetValue_2 = { kPointerType,0,"__CFString",1,1,&_ABRecordSetValue_3};
	VPL_Parameter _ABRecordSetValue_1 = { kPointerType,0,"void",1,0,&_ABRecordSetValue_2};
	VPL_ExtProcedure _ABRecordSetValue_F = {"ABRecordSetValue",ABRecordSetValue,&_ABRecordSetValue_1,&_ABRecordSetValue_R};

	VPL_Parameter _ABRecordCopyValue_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABRecordCopyValue_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABRecordCopyValue_1 = { kPointerType,0,"void",1,0,&_ABRecordCopyValue_2};
	VPL_ExtProcedure _ABRecordCopyValue_F = {"ABRecordCopyValue",ABRecordCopyValue,&_ABRecordCopyValue_1,&_ABRecordCopyValue_R};

	VPL_Parameter _ABRecordCopyRecordType_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABRecordCopyRecordType_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _ABRecordCopyRecordType_F = {"ABRecordCopyRecordType",ABRecordCopyRecordType,&_ABRecordCopyRecordType_1,&_ABRecordCopyRecordType_R};

	VPL_Parameter _ABRecordCreateCopy_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABRecordCreateCopy_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _ABRecordCreateCopy_F = {"ABRecordCreateCopy",ABRecordCreateCopy,&_ABRecordCreateCopy_1,&_ABRecordCreateCopy_R};

	VPL_Parameter _ABCopyArrayOfAllGroups_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABCopyArrayOfAllGroups_1 = { kPointerType,0,"__ABAddressBookRef",1,0,NULL};
	VPL_ExtProcedure _ABCopyArrayOfAllGroups_F = {"ABCopyArrayOfAllGroups",ABCopyArrayOfAllGroups,&_ABCopyArrayOfAllGroups_1,&_ABCopyArrayOfAllGroups_R};

	VPL_Parameter _ABCopyArrayOfAllPeople_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABCopyArrayOfAllPeople_1 = { kPointerType,0,"__ABAddressBookRef",1,0,NULL};
	VPL_ExtProcedure _ABCopyArrayOfAllPeople_F = {"ABCopyArrayOfAllPeople",ABCopyArrayOfAllPeople,&_ABCopyArrayOfAllPeople_1,&_ABCopyArrayOfAllPeople_R};

	VPL_Parameter _ABRemoveRecord_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABRemoveRecord_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABRemoveRecord_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABRemoveRecord_2};
	VPL_ExtProcedure _ABRemoveRecord_F = {"ABRemoveRecord",ABRemoveRecord,&_ABRemoveRecord_1,&_ABRemoveRecord_R};

	VPL_Parameter _ABAddRecord_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABAddRecord_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABAddRecord_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABAddRecord_2};
	VPL_ExtProcedure _ABAddRecord_F = {"ABAddRecord",ABAddRecord,&_ABAddRecord_1,&_ABAddRecord_R};

	VPL_Parameter _ABCopyRecordForUniqueId_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ABCopyRecordForUniqueId_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABCopyRecordForUniqueId_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABCopyRecordForUniqueId_2};
	VPL_ExtProcedure _ABCopyRecordForUniqueId_F = {"ABCopyRecordForUniqueId",ABCopyRecordForUniqueId,&_ABCopyRecordForUniqueId_1,&_ABCopyRecordForUniqueId_R};

	VPL_Parameter _ABTypeOfProperty_R = { kEnumType,4,"_ABPropertyType",0,0,NULL};
	VPL_Parameter _ABTypeOfProperty_3 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABTypeOfProperty_2 = { kPointerType,0,"__CFString",1,1,&_ABTypeOfProperty_3};
	VPL_Parameter _ABTypeOfProperty_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABTypeOfProperty_2};
	VPL_ExtProcedure _ABTypeOfProperty_F = {"ABTypeOfProperty",ABTypeOfProperty,&_ABTypeOfProperty_1,&_ABTypeOfProperty_R};

	VPL_Parameter _ABCopyArrayOfPropertiesForRecordType_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABCopyArrayOfPropertiesForRecordType_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABCopyArrayOfPropertiesForRecordType_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABCopyArrayOfPropertiesForRecordType_2};
	VPL_ExtProcedure _ABCopyArrayOfPropertiesForRecordType_F = {"ABCopyArrayOfPropertiesForRecordType",ABCopyArrayOfPropertiesForRecordType,&_ABCopyArrayOfPropertiesForRecordType_1,&_ABCopyArrayOfPropertiesForRecordType_R};

	VPL_Parameter _ABRemoveProperties_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABRemoveProperties_3 = { kPointerType,0,"__CFArray",1,1,NULL};
	VPL_Parameter _ABRemoveProperties_2 = { kPointerType,0,"__CFString",1,1,&_ABRemoveProperties_3};
	VPL_Parameter _ABRemoveProperties_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABRemoveProperties_2};
	VPL_ExtProcedure _ABRemoveProperties_F = {"ABRemoveProperties",ABRemoveProperties,&_ABRemoveProperties_1,&_ABRemoveProperties_R};

	VPL_Parameter _ABAddPropertiesAndTypes_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ABAddPropertiesAndTypes_3 = { kPointerType,0,"__CFDictionary",1,1,NULL};
	VPL_Parameter _ABAddPropertiesAndTypes_2 = { kPointerType,0,"__CFString",1,1,&_ABAddPropertiesAndTypes_3};
	VPL_Parameter _ABAddPropertiesAndTypes_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABAddPropertiesAndTypes_2};
	VPL_ExtProcedure _ABAddPropertiesAndTypes_F = {"ABAddPropertiesAndTypes",ABAddPropertiesAndTypes,&_ABAddPropertiesAndTypes_1,&_ABAddPropertiesAndTypes_R};

	VPL_Parameter _ABCopyRecordTypeFromUniqueId_R = { kPointerType,0,"__CFString",1,0,NULL};
	VPL_Parameter _ABCopyRecordTypeFromUniqueId_2 = { kPointerType,0,"__CFString",1,1,NULL};
	VPL_Parameter _ABCopyRecordTypeFromUniqueId_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABCopyRecordTypeFromUniqueId_2};
	VPL_ExtProcedure _ABCopyRecordTypeFromUniqueId_F = {"ABCopyRecordTypeFromUniqueId",ABCopyRecordTypeFromUniqueId,&_ABCopyRecordTypeFromUniqueId_1,&_ABCopyRecordTypeFromUniqueId_R};

	VPL_Parameter _ABSetMe_2 = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_Parameter _ABSetMe_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABSetMe_2};
	VPL_ExtProcedure _ABSetMe_F = {"ABSetMe",ABSetMe,&_ABSetMe_1,NULL};

	VPL_Parameter _ABGetMe_R = { kPointerType,0,"__ABPerson",1,0,NULL};
	VPL_Parameter _ABGetMe_1 = { kPointerType,0,"__ABAddressBookRef",1,0,NULL};
	VPL_ExtProcedure _ABGetMe_F = {"ABGetMe",ABGetMe,&_ABGetMe_1,&_ABGetMe_R};

	VPL_Parameter _ABHasUnsavedChanges_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABHasUnsavedChanges_1 = { kPointerType,0,"__ABAddressBookRef",1,0,NULL};
	VPL_ExtProcedure _ABHasUnsavedChanges_F = {"ABHasUnsavedChanges",ABHasUnsavedChanges,&_ABHasUnsavedChanges_1,&_ABHasUnsavedChanges_R};

	VPL_Parameter _ABSave_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _ABSave_1 = { kPointerType,0,"__ABAddressBookRef",1,0,NULL};
	VPL_ExtProcedure _ABSave_F = {"ABSave",ABSave,&_ABSave_1,&_ABSave_R};

	VPL_Parameter _ABCopyArrayOfMatchingRecords_R = { kPointerType,0,"__CFArray",1,0,NULL};
	VPL_Parameter _ABCopyArrayOfMatchingRecords_2 = { kPointerType,0,"__ABSearchElementRef",1,0,NULL};
	VPL_Parameter _ABCopyArrayOfMatchingRecords_1 = { kPointerType,0,"__ABAddressBookRef",1,0,&_ABCopyArrayOfMatchingRecords_2};
	VPL_ExtProcedure _ABCopyArrayOfMatchingRecords_F = {"ABCopyArrayOfMatchingRecords",ABCopyArrayOfMatchingRecords,&_ABCopyArrayOfMatchingRecords_1,&_ABCopyArrayOfMatchingRecords_R};

	VPL_Parameter _ABGetSharedAddressBook_R = { kPointerType,0,"__ABAddressBookRef",1,0,NULL};
	VPL_ExtProcedure _ABGetSharedAddressBook_F = {"ABGetSharedAddressBook",ABGetSharedAddressBook,NULL,&_ABGetSharedAddressBook_R};



VPL_DictionaryNode VPX_MacOSAddressBook_Procedures[] =	{
	{"ABPickerSelectInAddressBook",&_ABPickerSelectInAddressBook_F},
	{"ABPickerEditInAddressBook",&_ABPickerEditInAddressBook_F},
	{"ABPickerClearSearchField",&_ABPickerClearSearchField_F},
	{"ABPickerGetDelegate",&_ABPickerGetDelegate_F},
	{"ABPickerSetDelegate",&_ABPickerSetDelegate_F},
	{"ABPickerDeselectAll",&_ABPickerDeselectAll_F},
	{"ABPickerDeselectIdentifier",&_ABPickerDeselectIdentifier_F},
	{"ABPickerDeselectRecord",&_ABPickerDeselectRecord_F},
	{"ABPickerDeselectGroup",&_ABPickerDeselectGroup_F},
	{"ABPickerSelectIdentifier",&_ABPickerSelectIdentifier_F},
	{"ABPickerSelectRecord",&_ABPickerSelectRecord_F},
	{"ABPickerSelectGroup",&_ABPickerSelectGroup_F},
	{"ABPickerCopySelectedValues",&_ABPickerCopySelectedValues_F},
	{"ABPickerCopySelectedIdentifiers",&_ABPickerCopySelectedIdentifiers_F},
	{"ABPickerCopySelectedRecords",&_ABPickerCopySelectedRecords_F},
	{"ABPickerCopySelectedGroups",&_ABPickerCopySelectedGroups_F},
	{"ABPickerCopyDisplayedProperty",&_ABPickerCopyDisplayedProperty_F},
	{"ABPickerSetDisplayedProperty",&_ABPickerSetDisplayedProperty_F},
	{"ABPickerCopyColumnTitle",&_ABPickerCopyColumnTitle_F},
	{"ABPickerSetColumnTitle",&_ABPickerSetColumnTitle_F},
	{"ABPickerCopyProperties",&_ABPickerCopyProperties_F},
	{"ABPickerRemoveProperty",&_ABPickerRemoveProperty_F},
	{"ABPickerAddProperty",&_ABPickerAddProperty_F},
	{"ABPickerChangeAttributes",&_ABPickerChangeAttributes_F},
	{"ABPickerGetAttributes",&_ABPickerGetAttributes_F},
	{"ABPickerIsVisible",&_ABPickerIsVisible_F},
	{"ABPickerSetVisibility",&_ABPickerSetVisibility_F},
	{"ABPickerGetFrame",&_ABPickerGetFrame_F},
	{"ABPickerSetFrame",&_ABPickerSetFrame_F},
	{"ABPickerCreate",&_ABPickerCreate_F},
	{"ABImageClientCallback",&_ABImageClientCallback_F},
	{"ABCancelLoadingImageDataForTag",&_ABCancelLoadingImageDataForTag_F},
	{"ABBeginLoadingImageDataForClient",&_ABBeginLoadingImageDataForClient_F},
	{"ABPersonCopyImageData",&_ABPersonCopyImageData_F},
	{"ABPersonSetImageData",&_ABPersonSetImageData_F},
	{"ABCopyDefaultCountryCode",&_ABCopyDefaultCountryCode_F},
	{"ABCreateFormattedAddressFromDictionary",&_ABCreateFormattedAddressFromDictionary_F},
	{"ABCopyLocalizedPropertyOrLabel",&_ABCopyLocalizedPropertyOrLabel_F},
	{"ABMultiValueCreateMutableCopy",&_ABMultiValueCreateMutableCopy_F},
	{"ABMultiValueSetPrimaryIdentifier",&_ABMultiValueSetPrimaryIdentifier_F},
	{"ABMultiValueReplaceLabel",&_ABMultiValueReplaceLabel_F},
	{"ABMultiValueReplaceValue",&_ABMultiValueReplaceValue_F},
	{"ABMultiValueRemove",&_ABMultiValueRemove_F},
	{"ABMultiValueInsert",&_ABMultiValueInsert_F},
	{"ABMultiValueAdd",&_ABMultiValueAdd_F},
	{"ABMultiValueCreateMutable",&_ABMultiValueCreateMutable_F},
	{"ABMultiValueCreateCopy",&_ABMultiValueCreateCopy_F},
	{"ABMultiValuePropertyType",&_ABMultiValuePropertyType_F},
	{"ABMultiValueCopyIdentifierAtIndex",&_ABMultiValueCopyIdentifierAtIndex_F},
	{"ABMultiValueIndexForIdentifier",&_ABMultiValueIndexForIdentifier_F},
	{"ABMultiValueCopyPrimaryIdentifier",&_ABMultiValueCopyPrimaryIdentifier_F},
	{"ABMultiValueCopyLabelAtIndex",&_ABMultiValueCopyLabelAtIndex_F},
	{"ABMultiValueCopyValueAtIndex",&_ABMultiValueCopyValueAtIndex_F},
	{"ABMultiValueCount",&_ABMultiValueCount_F},
	{"ABMultiValueCreate",&_ABMultiValueCreate_F},
	{"ABSearchElementMatchesRecord",&_ABSearchElementMatchesRecord_F},
	{"ABSearchElementCreateWithConjunction",&_ABSearchElementCreateWithConjunction_F},
	{"ABGroupCreateSearchElement",&_ABGroupCreateSearchElement_F},
	{"ABGroupCopyDistributionIdentifier",&_ABGroupCopyDistributionIdentifier_F},
	{"ABGroupSetDistributionIdentifier",&_ABGroupSetDistributionIdentifier_F},
	{"ABGroupCopyParentGroups",&_ABGroupCopyParentGroups_F},
	{"ABGroupRemoveGroup",&_ABGroupRemoveGroup_F},
	{"ABGroupAddGroup",&_ABGroupAddGroup_F},
	{"ABGroupCopyArrayOfAllSubgroups",&_ABGroupCopyArrayOfAllSubgroups_F},
	{"ABGroupRemoveMember",&_ABGroupRemoveMember_F},
	{"ABGroupAddMember",&_ABGroupAddMember_F},
	{"ABGroupCopyArrayOfAllMembers",&_ABGroupCopyArrayOfAllMembers_F},
	{"ABGroupCreate",&_ABGroupCreate_F},
	{"ABPersonCreateSearchElement",&_ABPersonCreateSearchElement_F},
	{"ABPersonCopyParentGroups",&_ABPersonCopyParentGroups_F},
	{"ABPersonCopyVCardRepresentation",&_ABPersonCopyVCardRepresentation_F},
	{"ABPersonCreateWithVCardRepresentation",&_ABPersonCreateWithVCardRepresentation_F},
	{"ABPersonCreate",&_ABPersonCreate_F},
	{"ABRecordCopyUniqueId",&_ABRecordCopyUniqueId_F},
	{"ABRecordIsReadOnly",&_ABRecordIsReadOnly_F},
	{"ABRecordRemoveValue",&_ABRecordRemoveValue_F},
	{"ABRecordSetValue",&_ABRecordSetValue_F},
	{"ABRecordCopyValue",&_ABRecordCopyValue_F},
	{"ABRecordCopyRecordType",&_ABRecordCopyRecordType_F},
	{"ABRecordCreateCopy",&_ABRecordCreateCopy_F},
	{"ABCopyArrayOfAllGroups",&_ABCopyArrayOfAllGroups_F},
	{"ABCopyArrayOfAllPeople",&_ABCopyArrayOfAllPeople_F},
	{"ABRemoveRecord",&_ABRemoveRecord_F},
	{"ABAddRecord",&_ABAddRecord_F},
	{"ABCopyRecordForUniqueId",&_ABCopyRecordForUniqueId_F},
	{"ABTypeOfProperty",&_ABTypeOfProperty_F},
	{"ABCopyArrayOfPropertiesForRecordType",&_ABCopyArrayOfPropertiesForRecordType_F},
	{"ABRemoveProperties",&_ABRemoveProperties_F},
	{"ABAddPropertiesAndTypes",&_ABAddPropertiesAndTypes_F},
	{"ABCopyRecordTypeFromUniqueId",&_ABCopyRecordTypeFromUniqueId_F},
	{"ABSetMe",&_ABSetMe_F},
	{"ABGetMe",&_ABGetMe_F},
	{"ABHasUnsavedChanges",&_ABHasUnsavedChanges_F},
	{"ABSave",&_ABSave_F},
	{"ABCopyArrayOfMatchingRecords",&_ABCopyArrayOfMatchingRecords_F},
	{"ABGetSharedAddressBook",&_ABGetSharedAddressBook_F},
};

Nat4	VPX_MacOSAddressBook_Procedures_Number = 96;

#pragma export on

Nat4	load_MacOSAddressBook_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSAddressBook_Procedures(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_MacOSAddressBook_Procedures_Number,VPX_MacOSAddressBook_Procedures);
		
		return result;
}

#pragma export off
