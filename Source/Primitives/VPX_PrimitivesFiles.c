/*
 *  VPX_PrimitivesFiles.c
 *  PB_56
 *
 *  Created by scott on Sat May 11 2002.
 *  Copyright (c) 2001 __MyCompanyName__. All rights reserved.
 *
 */
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	
#include "FSCopyObject.h"

Int4 VPLP_get_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;

    V_ExternalBlock	ptrO = NULL;
	FSSpec		tempSpec;
    FSSpec		*theFileSpec = NULL;

	OSErr	osError = noErr;
	NavReplyRecord	navReplyStruc;
	AEKeyword	theKeyword;
	DescType	actualType;
	Size		actualSize;
	FInfo		fileInfo;
	V_Integer	outputInt = 0;	
	NavDialogOptions	navOptionsStruc;

	Int1		*primName = "get-file";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

#endif

	osError = NavGetDefaultDialogOptions(&navOptionsStruc);
	navOptionsStruc.dialogOptionFlags = navOptionsStruc.dialogOptionFlags | kNavSupportPackages;
	osError = NavGetFile(NULL,&navReplyStruc,&navOptionsStruc,NULL,NULL,NULL,NULL,NULL);
	if(osError == noErr && navReplyStruc.validRecord){
		theFileSpec = (FSSpec *) X_malloc(sizeof (FSSpec));
		osError = AEGetNthPtr(&(navReplyStruc.selection),1,typeFSS,
			 &theKeyword,&actualType,&tempSpec,sizeof(tempSpec),&actualSize);
		if(osError == noErr){
			FSMakeFSSpec(tempSpec.vRefNum,tempSpec.parID,tempSpec.name,theFileSpec);
			if((osError = FSpGetFInfo(theFileSpec,&fileInfo)) == noErr){
				outputInt = int_to_integer(fileInfo.fdType,environment);
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

				ptrO = create_externalBlock("FSSpec",sizeof (FSSpec),environment);
				ptrO->blockPtr = (void *) theFileSpec;
				outputObject = (V_Object) ptrO;
				VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
			} else {
				FSRef			theFileRef;
				FSCatalogInfo	theInfo;
				osError = FSpMakeFSRef(theFileSpec,&theFileRef);
				osError = FSGetCatalogInfo(&theFileRef,kFSCatInfoNodeFlags,&theInfo,NULL,NULL,NULL);
				if(theInfo.nodeFlags & kFSNodeIsDirectoryMask) {
					outputInt = int_to_integer('APPL',environment);
					VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

					ptrO = create_externalBlock("FSSpec",sizeof (FSSpec),environment);
					ptrO->blockPtr = (void *) theFileSpec;
					outputObject = (V_Object) ptrO;
					VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
				}
			}
		}
		NavDisposeReply(&navReplyStruc);
	}
	if(osError == noErr){
		*trigger = kSuccess;
	}else{
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		VPLPrimSetOutputObjectNULL(environment,primInArity,1,primitive);

		*trigger = kFailure;
	}

	return kNOERROR;
}

Int4 VPLP_close_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_close_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
    V_Object	block = NULL;
    Int4		theRefNum = 0;
    OSErr		closeResult = 0;
	
	Int1		*primName = "close-file";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	
	theRefNum = ((V_Integer) block)->value;

	closeResult = FSClose(theRefNum);
	
	if(closeResult == 0) {
		*trigger = kSuccess;
	} else {
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_delete_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_delete_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
    V_Object	block = NULL;
    FSSpec		*theFileSpec = NULL;
    OSErr		deleteResult = 0;
	
	Int1		*primName = "delete-file";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	if( strcmp(((V_ExternalBlock)block)->name,"FSSpec") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"FSSpec",					// Operation Name
			((V_ExternalBlock)block)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	theFileSpec = (FSSpec *) ((V_ExternalBlock)block)->blockPtr;

	deleteResult = FSpDelete(theFileSpec);
	
	if(deleteResult == 0) {
		*trigger = kSuccess;
	} else {
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_open_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_open_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object 	block = NULL;
    Int2		theRefNum = 0;
    OSErr		openResult = 0;
    FSSpec		*theFileSpec = NULL;
	
	V_Integer	outputInt = 0;	

	Int1		*primName = "open-file";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	if( strcmp(((V_ExternalBlock)block)->name,"FSSpec") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"FSSpec",					// Operation Name
			((V_ExternalBlock)block)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	theFileSpec = (FSSpec *) ((V_ExternalBlock)block)->blockPtr;
	
	openResult = FSpOpenDF(theFileSpec,fsCurPerm,&theRefNum);

	if(openResult == 0) {
		outputInt = int_to_integer(theRefNum,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);
		*trigger = kSuccess;
	} else {
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_read_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;


	V_Object 	block = NULL;
    Int2		theRefNum = 0;
    Int4		theNumberOfBytes = 0;
    OSErr		readResult = 0;
    Int1		*theTextBuffer = NULL;
    V_String	theText = NULL;
	
	Int1		*primName = "read-text";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	
	theRefNum = ((V_Integer) block)->value;
	
	readResult = GetEOF(theRefNum,&theNumberOfBytes);
	if(readResult == 0){
		theTextBuffer = VPXMALLOC(theNumberOfBytes+1,Int1);
		if(theNumberOfBytes != 0){
			readResult = FSRead(theRefNum,&theNumberOfBytes,theTextBuffer);
			if(readResult == 0) {
				theTextBuffer[theNumberOfBytes] = '\0';
				theText = install_string(theTextBuffer,environment);
				outputObject = (V_Object) theText;
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

				*trigger = kSuccess;
			}else{
				X_free(theTextBuffer);
				readResult = 1;
			}
		}else readResult = 1;
	}else readResult = 1;

	if(readResult != 0) {
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		*trigger = kFailure;
	}
	return kNOERROR;
}

NavEventUPP gGetFilePutFileEventFunctionUPP;
NavDialogRef gModalToApplicationNavDialogRef;
FSSpec	gFileSpec;
FSSpec	*gFileSpecPtr;
OSType	gFileType;
ScriptCode gKeyScript;
Bool	gFileError;

void getFilePutFileEventFunction(NavEventCallbackMessage callBackSelector,
        NavCBRecPtr callBackParams,NavCallBackUserData callBackUD);
void getFilePutFileEventFunction(NavEventCallbackMessage callBackSelector,
            NavCBRecPtr callBackParams,NavCallBackUserData callBackUD){
#pragma unused(callBackUD)
            
        OSErr	osError = noErr;
        OSErr	err = noErr;
        NavReplyRecord	navReplyStruc;
        NavUserAction	navUserAction;
        
        AEKeyword	theKeyword;
        DescType	actualType;
        Size		actualSize;
        FInfo		fileInfo;
        CFStringRef	fileName;
        
	AEDesc				theDesc;
	Size				dataSize = 0;
	FSRef				fsRefParent;
	
	FSCatalogInfo		theCatInfo;
	FSSpec				tempSpec;
    Bool		result = FALSE;
	Str255				tempPascal;

        gFileError = kTRUE;
        
        switch(callBackSelector){
            case kNavCBUserAction:
                osError = NavDialogGetReply(callBackParams->context,&navReplyStruc);
                if(osError == noErr && navReplyStruc.validRecord){
                    navUserAction = NavDialogGetUserAction(callBackParams->context);
                    switch(navUserAction){
                        case kNavUserActionChoose:
                            if(gModalToApplicationNavDialogRef != NULL){
                                osError = AEGetNthPtr(&(navReplyStruc.selection),1,typeFSS,
                                    &theKeyword,&actualType,&tempSpec,sizeof(tempSpec),&actualSize);
                                if(osError == noErr){
									FSMakeFSSpec(tempSpec.vRefNum,tempSpec.parID,tempSpec.name,&gFileSpec);
									gFileSpecPtr = &gFileSpec;
                                }else{
									gFileSpecPtr = NULL;
                                }
                            }else{
                                gFileSpecPtr = NULL;
                            }
                            break;

                        case kNavUserActionOpen:
                            if(gModalToApplicationNavDialogRef != NULL){
                                osError = AEGetNthPtr(&(navReplyStruc.selection),1,typeFSS,
                                    &theKeyword,&actualType,&gFileSpec,sizeof(gFileSpec),&actualSize);
                                if(osError == noErr){
                                    if((osError = FSpGetFInfo(&gFileSpec,&fileInfo)) == noErr){
                                        gFileType = fileInfo.fdType;
                                        gFileError = kFALSE;
                                        gFileSpecPtr = &gFileSpec;
                                    }else{
                                        gFileSpecPtr = NULL;
                                    }
                                }else{
                                    gFileSpecPtr = NULL;
                                }
                            }else{
                                gFileSpecPtr = NULL;
                            }
                            break;

                        case kNavUserActionSaveAs:
                            if(gModalToApplicationNavDialogRef != NULL){
    err = AECoerceDesc(&(navReplyStruc.selection),typeFSRef,&theDesc);
    
	if(err == noErr){
		dataSize = AEGetDescDataSize(&theDesc);
		if(dataSize > 0){
			err = AEGetDescData(&theDesc,&fsRefParent,sizeof(FSRef));
			if(err == noErr){
		    	err = FSGetCatalogInfo(&fsRefParent,kFSCatInfoNodeID,&theCatInfo,NULL,&tempSpec,NULL);
				if(err == noErr){
					fileName = NavDialogGetSaveFileName(gModalToApplicationNavDialogRef);
					if(fileName != NULL){
						result = CFStringGetPascalString(fileName,tempPascal,256,kCFStringEncodingUTF8);
					}
					err = FSMakeFSSpec(tempSpec.vRefNum,theCatInfo.nodeID,tempPascal,&gFileSpec);
				}
		    }
		}
		AEDisposeDesc(&theDesc);
	}
                                gFileSpecPtr = &gFileSpec;
                                gFileType = 'TEXT';
                                gFileError = kFALSE;
                                gKeyScript = navReplyStruc.keyScript;
                            }else{
                                gFileSpecPtr = NULL;
                            }
                            break;
                    }
                    osError = NavDisposeReply(&navReplyStruc);
                }
                break;
                
            case kNavCBTerminate:
                if(gModalToApplicationNavDialogRef != NULL){
                    NavDialogDispose(gModalToApplicationNavDialogRef);
                    gModalToApplicationNavDialogRef = NULL;
                }
                break;
        }
}

Int4 VPLP_put_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_put_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;


    V_ExternalBlock	ptrO = NULL;
    FSSpec		*theFileSpec = NULL;
    Bool		localFileError = kFALSE;

        OSErr	osError = noErr;
        NavDialogCreationOptions	dialogOptions;
        
    V_Object			text = NULL;
    Int1				*theTextBuffer = NULL;
	
	V_Integer	outputInt = 0;	

	Int1		*primName = "put-file";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	text = VPLPrimGetInputObject(0,primitive,environment);
	theTextBuffer = ((V_String) text)->string;

        gFileSpecPtr = NULL;
        osError = NavGetDefaultDialogCreationOptions(&dialogOptions);
        if(osError == noErr){
            dialogOptions.optionFlags |= kNavNoTypePopup;
            dialogOptions.saveFileName = CFStringCreateWithCString(NULL,theTextBuffer,kCFStringEncodingUTF8);
//          dialogOptions.clientName = CFStringCreateWithCString(NULL,(const char *)"\pMarten",kCFStringEncodingUTF8);
            dialogOptions.clientName = CFSTR("Marten");
/*        dialogOptions.modality = kWindowModalityWindowModal; */
            dialogOptions.modality = kWindowModalityAppModal;
        
            gGetFilePutFileEventFunctionUPP = NewNavEventUPP((NavEventProcPtr) getFilePutFileEventFunction);
        
            osError = NavCreatePutFileDialog(&dialogOptions,'TEXT','mVPL',gGetFilePutFileEventFunctionUPP,
                    NULL,&gModalToApplicationNavDialogRef);
            
            if(osError == noErr && gModalToApplicationNavDialogRef != NULL){
                osError = NavDialogRun(gModalToApplicationNavDialogRef);
                if(osError != noErr){
                    NavDialogDispose(gModalToApplicationNavDialogRef);
                    gModalToApplicationNavDialogRef = NULL;
                }
            }
        
            if(dialogOptions.saveFileName != NULL) CFRelease(dialogOptions.saveFileName);
//          if(dialogOptions.clientName != NULL) CFRelease(dialogOptions.clientName);
            
            localFileError = gFileError;

            if(gFileSpecPtr != NULL) {
		outputInt = int_to_integer(gFileType,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

		theFileSpec = (FSSpec *) X_malloc(sizeof (FSSpec));
		memcpy(theFileSpec,gFileSpecPtr,sizeof (FSSpec));
		ptrO = create_externalBlock("FSSpec",sizeof (FSSpec),environment);
		ptrO->blockPtr = (void *) theFileSpec;
		outputObject = (V_Object) ptrO;
		VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);

		outputObject = (V_Object) int_to_integer(gKeyScript,environment);
		VPLPrimSetOutputObject(environment,primInArity,2,primitive, (V_Object) outputObject);

		*trigger = kSuccess;
                return kNOERROR;
            }else{
                VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
				VPLPrimSetOutputObjectNULL(environment,primInArity,1,primitive);
				VPLPrimSetOutputObjectNULL(environment,primInArity,2,primitive);
                *trigger = kFailure;
            }
        }
        VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		VPLPrimSetOutputObjectNULL(environment,primInArity,1,primitive);
		VPLPrimSetOutputObjectNULL(environment,primInArity,2,primitive);
        *trigger = kFailure;

	return kNOERROR;
}

Int4 VPLP_create_2D_text_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_text_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object 	block = NULL;
	V_Object 	script = NULL;
    ScriptCode	theScript = 0;
    OSErr		createResult = 0;
    FSSpec		*theFileSpec = NULL;
	
	Int1		*primName = "create-text-file";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	if( strcmp(((V_ExternalBlock)block)->name,"FSSpec") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"FSSpec",					// Operation Name
			((V_ExternalBlock)block)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	theFileSpec = (FSSpec *) ((V_ExternalBlock)block)->blockPtr;
	
	script = VPLPrimGetInputObject(1,primitive,environment);

	theScript = (ScriptCode) ((V_Integer) script)->value;
	
	createResult = FSpCreate(theFileSpec,'CWIE','TEXT',theScript);
	
	if(createResult == dupFNErr){
		createResult = FSpDelete(theFileSpec);
		if(createResult == 0)
			createResult = FSpCreate(theFileSpec,'CWIE','TEXT',theScript);
	}

	if(createResult == 0) {
		*trigger = kSuccess;
	} else {
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_write_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_write_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object 	block = NULL;
	V_Object 	text = NULL;
    Int2		theRefNum = 0;
    Int4		theNumberOfBytes = 0;
    OSErr		writeResult = 0;
    Int1		*theTextBuffer = NULL;
	
	Int1		*primName = "write-text";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	
	text = VPLPrimGetInputObject(1,primitive,environment);
	
	theRefNum = ((V_Integer) block)->value;
	
	theTextBuffer = ((V_String) text)->string;
	
	theNumberOfBytes = strlen(theTextBuffer);
	
	writeResult = SetFPos(theRefNum,fsFromStart,0);
	if(writeResult == 0){
		writeResult = FSWrite(theRefNum,&theNumberOfBytes,theTextBuffer);
		if(writeResult == 0){
			writeResult = SetEOF(theRefNum,theNumberOfBytes);
		}else writeResult = 1;
	}else writeResult = 1;

	if(writeResult == 0) {
		*trigger = kSuccess;
	} else {
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_create_2D_object_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_object_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object 	block = NULL;
	V_Object 	script = NULL;
    ScriptCode	theScript = 0;
    OSErr		createResult = 0;
    FSSpec		*theFileSpec = NULL;
	OSType		theFileType = 0;
	
	Int1		*primName = "create-object-file";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	if( strcmp(((V_ExternalBlock)block)->name,"FSSpec") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"FSSpec",					// Operation Name
			((V_ExternalBlock)block)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	theFileSpec = (FSSpec *) ((V_ExternalBlock)block)->blockPtr;
	
	script = VPLPrimGetInputObject(1,primitive,environment);
	theScript = (ScriptCode) ((V_Integer) script)->value;
	
	block = VPLPrimGetInputObject(2,primitive,environment);
	theFileType = (OSType) ((V_Integer) block)->value;
	
	createResult = FSpCreate(theFileSpec,'mVPL',theFileType,theScript);
	
	if(createResult == dupFNErr){
		createResult = FSpDelete(theFileSpec);
		if(createResult == 0)
			createResult = FSpCreate(theFileSpec,'mVPL',theFileType,theScript);
	}


	if(createResult == 0) {
		*trigger = kSuccess;
	} else {
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_write_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_write_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object 	block = NULL;
	V_Object 	object = NULL;
    Int2		theRefNum = 0;
    Int4		theNumberOfBytes = 0;
    OSErr		writeResult = 0;
    Int1		*theObjectBuffer = NULL;
	
	Int1		*primName = "write-object";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	theRefNum = ((V_Integer) block)->value;
	
	object = VPLPrimGetInputObject(1,primitive,environment);
	
	theObjectBuffer = (Int1 *) archive_object(environment,object,&theNumberOfBytes);
	
	writeResult = SetFPos(theRefNum,fsFromStart,0);
	if(writeResult == 0){
		writeResult = FSWrite(theRefNum,&theNumberOfBytes,theObjectBuffer);
		if(writeResult == 0){
			writeResult = SetEOF(theRefNum,theNumberOfBytes);
		}else writeResult = 1;
	}else writeResult = 1;

	X_free(theObjectBuffer);

	if(writeResult == 0) {
		*trigger = kSuccess;
	} else {
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_read_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object 	block = NULL;
	V_Object 	object = NULL;
    Int2		theRefNum = 0;
    Int4		theNumberOfBytes = 0;
    OSErr		readResult = 0;
    Int1		*theObjectBuffer = NULL;
    V_Instance	tempInstance = NULL;
    V_Class		tempClass = NULL;
    V_Dictionary	tempDictionary = NULL;
	
	Int1		*primName = "read-object";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	theRefNum = ((V_Integer) block)->value;
	
	readResult = GetEOF(theRefNum,&theNumberOfBytes);
	if(readResult == 0){
		theObjectBuffer = VPXMALLOC(theNumberOfBytes,Int1);
		if(theObjectBuffer != NULL){
			readResult = FSRead(theRefNum,&theNumberOfBytes,theObjectBuffer);
			if(readResult == 0) {
				object = unarchive_object(environment,(V_Archive)theObjectBuffer);
				X_free(theObjectBuffer);
/* Copy object into one defined by the current class definition if list length is different*/
				if(object != NULL && object->type == kInstance){
					tempInstance = (V_Instance) object;
					tempClass = get_class(environment->classTable,tempInstance->name);
					if(tempClass != NULL){
						tempDictionary = tempClass->attributes;
						if(tempDictionary != NULL && tempDictionary->numberOfNodes > tempInstance->listLength){
							return record_error("read-object: Instance attributes not equal to definition",tempInstance->name,kERROR,environment);
						}
					}else{
						return record_error("read-object: Instance is unknown class",tempInstance->name,kERROR,environment);
/* ToDo: Provide for "unknown" class */					
					}
				}				
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) object);
				*trigger = kSuccess;
			}else{
				X_free(theObjectBuffer);
				readResult = 1;
			}
		}else readResult = 1;
	}else readResult = 1;

	if(readResult != 0) {
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_read_2D_buffer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_buffer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object 	block = NULL;
    Int2		theRefNum = 0;
    Int4		theNumberOfBytes = 0;
    OSErr		readResult = 0;
    Int1		*theObjectBuffer = NULL;

	V_ExternalBlock 	ptrO = NULL;
	
	Int1		*primName = "read-buffer";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	
	theRefNum = ((V_Integer) block)->value;
	
	readResult = GetEOF(theRefNum,&theNumberOfBytes);
	if(readResult == 0){
		theObjectBuffer = VPXMALLOC(theNumberOfBytes,Int1);
		if(theObjectBuffer != NULL){
			readResult = FSRead(theRefNum,&theNumberOfBytes,theObjectBuffer);
			if(readResult == 0) {
				ptrO = create_externalBlock("void",theNumberOfBytes,environment);
				ptrO->blockPtr = (void *) theObjectBuffer;
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrO);
				*trigger = kSuccess;
			}else{
				X_free(theObjectBuffer);
				readResult = 1;
			}
		}else readResult = 1;
	}else readResult = 1;

	if(readResult != 0) {
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		*trigger = kFailure;
	}
	return kNOERROR;
}

Int4 VPLP_get_2D_folder( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_folder( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;


    V_ExternalBlock	ptrO = NULL;
    FSSpec		*theFileSpec = NULL;
	FSSpec		tempSpec;

	OSErr	osError = noErr;
	NavReplyRecord	navReplyStruc;
	AEKeyword	theKeyword;
	DescType	actualType;
	Size		actualSize;
	V_Integer	outputInt = 0;	
        
	NavDialogOptions	navOptionsStruc;

	Int1		*primName = "get-folder";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

#endif

	osError = NavGetDefaultDialogOptions(&navOptionsStruc);
	navOptionsStruc.dialogOptionFlags = navOptionsStruc.dialogOptionFlags | kNavSupportPackages;

	osError = NavChooseFolder(NULL,&navReplyStruc,&navOptionsStruc,NULL,NULL,NULL);
	if(osError == noErr && navReplyStruc.validRecord){
		theFileSpec = (FSSpec *) X_malloc(sizeof (FSSpec));
		 osError = AEGetNthPtr(&(navReplyStruc.selection),1,typeFSS,
			&theKeyword,&actualType,&tempSpec,sizeof(tempSpec),&actualSize);
		if(osError == noErr){
			FSMakeFSSpec(tempSpec.vRefNum,tempSpec.parID,tempSpec.name,theFileSpec);
			outputInt = int_to_integer(0,environment);
			VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

			ptrO = create_externalBlock("FSSpec",sizeof (FSSpec),environment);
			ptrO->blockPtr = (void *) theFileSpec;
			outputObject = (V_Object) ptrO;
			VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
		}
		NavDisposeReply(&navReplyStruc);
	}
	if(osError == noErr){
		*trigger = kSuccess;
	}else{
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		VPLPrimSetOutputObjectNULL(environment,primInArity,1,primitive);
		*trigger = kFailure;
	}

	return kNOERROR;
}

Int4 VPLP_folder_2D_fsspecs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_folder_2D_fsspecs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
    OSErr		err = noErr;
	V_Object 	block = NULL;
	V_ExternalBlock	ptrO = NULL;
	V_List		list = NULL;

	FSCatalogInfo		theCatInfo;
	FSSpec		*theFileSpec = NULL;
	FSRef		theFolderRef;
	FSIterator	theIterator;
	
	Nat4		numberOfItems = 0;
	Nat4		actualNumber = 0;
	Nat4		counter = 0;
	FSSpec		*theFSSpecArray = NULL;

	Int1		*primName = "folder-fsspecs";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	if( strcmp(((V_ExternalBlock)block)->name,"FSSpec") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"FSSpec",					// Operation Name
			((V_ExternalBlock)block)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	theFileSpec = (FSSpec *) ((V_ExternalBlock)block)->blockPtr;
	
	if(theFileSpec != NULL){
	
		err = FSpMakeFSRef(theFileSpec,&theFolderRef);
	
		if(err == noErr) err = FSGetCatalogInfo(&theFolderRef,kFSCatInfoValence,&theCatInfo,NULL,NULL,NULL);
		if(err == noErr) {
			numberOfItems = theCatInfo.valence;
			theFSSpecArray = (FSSpec *) calloc(numberOfItems,sizeof(FSSpec));
		
			if(theFileSpec != NULL){
				if(err == noErr) err = FSOpenIterator(&theFolderRef,kFSIterateFlat,&theIterator);
				if(err == noErr) err = FSGetCatalogInfoBulk(theIterator,numberOfItems,&actualNumber,NULL,kFSCatInfoNone,NULL,NULL,theFSSpecArray,NULL);
				if(err == noErr) err = FSCloseIterator(theIterator);
			
				if(err == noErr) {
					list = create_list(actualNumber,environment);
					for(counter = 0;counter<actualNumber;counter++){
						ptrO = create_externalBlock("FSSpec",sizeof (FInfo),environment);
						theFileSpec = (FSSpec *) X_malloc(sizeof(FSSpec));
						memcpy(theFileSpec,&theFSSpecArray[counter],sizeof (FSSpec));
						ptrO->blockPtr = (void *) theFileSpec;
						*(list->objectList + counter) = (V_Object) ptrO;
					}
					VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) list);
				}else{
					VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
				}
				X_free(theFSSpecArray);
				theFSSpecArray = NULL;	
			}else{
				VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
			}
		}else{
			VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		}
	}else{
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
	}

	*trigger = kSuccess;	
	return kNOERROR;
}

Nat4	loadConstants_VPX_PrimitivesFiles(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesFiles(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesFiles(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesFiles(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesFiles(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesFiles(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesFiles(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesFiles(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;

		if(dictionary){
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"close-file",dictionary,1,0,VPLP_close_2D_file)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"create-object-file",dictionary,3,0,VPLP_create_2D_object_2D_file)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"create-text-file",dictionary,2,0,VPLP_create_2D_text_2D_file)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"delete-file",dictionary,1,0,VPLP_delete_2D_file)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"get-file",dictionary,0,2,VPLP_get_2D_file)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"open-file",dictionary,1,1,VPLP_open_2D_file)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"put-file",dictionary,1,3,VPLP_put_2D_file)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-buffer",dictionary,1,1,VPLP_read_2D_buffer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-object",dictionary,1,1,VPLP_read_2D_object)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-text",dictionary,1,1,VPLP_read_2D_text)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"write-object",dictionary,2,0,VPLP_write_2D_object)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"write-text",dictionary,2,0,VPLP_write_2D_text)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"get-folder",dictionary,0,2,VPLP_get_2D_folder)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"folder-fsspecs",dictionary,1,1,VPLP_folder_2D_fsspecs)) == NULL) return kERROR;
		}

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesFiles(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesFiles(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesFiles(environment,bundleID);
		result = loadStructures_VPX_PrimitivesFiles(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesFiles(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesFiles(environment,bundleID);
		
		return result;
}

