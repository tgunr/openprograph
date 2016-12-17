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

#pragma mark --------------- Constants ---------------

VPL_ExtConstant _O_RDONLY_C = {"O_RDONLY",O_RDONLY,NULL};
VPL_ExtConstant _O_WRONLY_C = {"O_WRONLY",O_WRONLY,NULL};
VPL_ExtConstant _O_RDWR_C = {"O_RDWR",O_RDWR,NULL};
VPL_ExtConstant _O_APPEND_C = {"O_APPEND",O_APPEND,NULL};
// There are more O_things to do
VPL_ExtConstant _S_IRWXU_C = {"S_IRWXU",S_IRWXU,NULL};
VPL_ExtConstant _S_IRUSR_C = {"S_IRUSR",S_IRUSR,NULL};
VPL_ExtConstant _S_IWUSR_C = {"S_IWUSR",S_IWUSR,NULL};
VPL_ExtConstant _S_IXUSR_C = {"S_IXUSR",S_IXUSR,NULL};
VPL_ExtConstant _S_IRWXG_C = {"S_IRWXG",S_IRWXG,NULL};
VPL_ExtConstant _S_IRGRP_C = {"S_IRGRP",S_IRGRP,NULL};
VPL_ExtConstant _S_IWGRP_C = {"S_IWGRP",S_IWGRP,NULL};
VPL_ExtConstant _S_IXGRP_C = {"S_IXGRP",S_IXGRP,NULL};
VPL_ExtConstant _S_IRWXO_C = {"S_IRWXO",S_IRWXO,NULL};
VPL_ExtConstant _S_IROTH_C = {"S_IROTH",S_IROTH,NULL};
VPL_ExtConstant _S_IWOTH_C = {"S_IWOTH",S_IWOTH,NULL};
VPL_ExtConstant _S_IXOTH_C = {"S_IXOTH",S_IXOTH,NULL};

VPL_DictionaryNode VPX_UNIX_Constants[] =	{
{"O_RDONLY", &_O_RDONLY_C},
{"O_WRONLY", &_O_WRONLY_C},
{"O_RDWR", &_O_RDWR_C},
{"O_APPEND", &_O_APPEND_C},		//	4
{"S_IRWXU", &_S_IRWXU_C},
{"S_IRUSR", &_S_IRUSR_C},
{"S_IWUSR", &_S_IWUSR_C},
{"S_IXUSR", &_S_IXUSR_C},
{"S_IRWXG", &_S_IRWXG_C},
{"S_IRGRP", &_S_IRGRP_C},
{"S_IWGRP", &_S_IWGRP_C},
{"S_IXGRP", &_S_IXGRP_C},
{"S_IRWXO", &_S_IRWXO_C},
{"S_IROTH", &_S_IROTH_C},
{"S_IWOTH", &_S_IWOTH_C},
{"S_IXOTH", &_S_IXOTH_C},		// 12

};

Nat4	VPX_UNIX_Constants_Number = 16;


#pragma mark --------------- Primitives ---------------

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

#pragma mark *** File Modification Prims ***

Int4 VPLP_close_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_close_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	int			fileD = -1;
	
	Int1		*primName = "close-file";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&fileD, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	if( fileD > 0 )
		result = close( fileD );
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return kNOERROR;
}

Int4 VPLP_delete_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_delete_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_StringPtr	zapPath = NULL;
	
	Int1			*primName = "delete-file";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &zapPath, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = unlink( zapPath );
	
	//	printf( "unlink result: %ld\n", result );
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return kNOERROR;
}

Int4 VPLP_create_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	
	vpl_StringPtr		openPath = NULL;
	int					openMode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;			// rw-r--r--
	int					openFile = -1;
	
	Int1				*primName = "create-file";
	Int4				result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &openPath, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	if( primInArity == 2 ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&openMode, 1, primName, primitive, environment);
		if( result != kNOERROR ) return result;
	}
	
	openFile = creat( openPath, openMode );
	
	if( openFile >= 0 ) {
		result = VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, openFile );
	} else {
		VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );
		result = kERROR;
	}
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return result;
}

Int4 VPLP_open_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_open_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_StringPtr		openPath = NULL;
	int					openFlags = O_RDWR;
	int					fileD = -1;
	
	off_t				theSize = 0;
	
	Int1				*primName = "open-file";
	Int4				result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &openPath, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	if( primInArity == 2 ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&openFlags, 1, primName, primitive, environment);
		if( result != kNOERROR ) return result;
	}
	
	fileD = open( openPath, openFlags );
	
	if( fileD > 0 ) {
		theSize = lseek( fileD, 0, SEEK_END );
		lseek( fileD, 0, SEEK_SET );
	}
	
	//	printf("open-file theFile: %d theSize: %ld\n", fileD, (Nat4)theSize );
	
	if( fileD > 0 ) {
		VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, fileD );		
	} else {
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		result = kERROR;
	}
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return result;
}

Int4 VPLP_read_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	int				theFile = -1;
	Nat4			theSize = 0;
	vpl_StringPtr	theBuffer = NULL;
	
	Int1			*primName = "read-text";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theFile, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	if( theFile > 0 ) {
		if( primInArity == 2 ) {
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theSize, 1, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		} else {
			theSize = lseek( theFile, 0, SEEK_END );
			lseek( theFile, 0, SEEK_SET );
		}
		
		theBuffer = (vpl_StringPtr)X_malloc( theSize + 1 );
		
		if( theBuffer != NULL ) {
			theBuffer[theSize] = vpl_StringTerminator;		
			result = read( theFile, theBuffer, theSize );
		}		
	} else
		result = -1;
	
	if( result >= 0 ) {
		result = VPLPrimSetOutputObjectStringCopy( environment, primInArity, 0, primitive, theBuffer );
	} else {
		result = VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );
		result = kERROR;
	}
	
	if( theBuffer != NULL ) X_free( theBuffer );
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return result;
}


Int4 VPLP_create_2D_text_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_text_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_StringPtr	filePath = NULL;
	vpl_StringPtr	fileText = NULL;
	
	FILE*			pathFile = NULL;
	
	Int1			*primName = "create-text-file";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &filePath, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimGetInputObjectStringCoerceCopy( &fileText, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if ((pathFile = fopen(filePath, "w+"))) {
		result = fwrite(fileText, 1, strlen(fileText), pathFile);
		fclose(pathFile);
		if( result >= 0 ) result = 0;
	}
	
	X_free( fileText );
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return kNOERROR;
}

Int4 VPLP_read_2D_text_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_text_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	FILE*			theFile = NULL;
	Nat4			theSize = 0;
	vpl_StringPtr	filePath = NULL;
	vpl_StringPtr	theBuffer = NULL;
	
	Int1			*primName = "read-text-file";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &filePath, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
		
	if ((theFile = fopen(filePath, "r"))) {
		
		//		printf("read-text-file fopen: OK\n" );
		if( primInArity == 2 ) {
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theSize, 1, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		} else {
			fseek( theFile, 0, SEEK_END );
			theSize = ftell( theFile );
			rewind( theFile );
		}
		
		theBuffer = (vpl_StringPtr)X_calloc( theSize + 1, 1 );
		if( theBuffer != NULL ) {
			result = fread( theBuffer, theSize, 1, theFile );
			fclose(theFile);
			
			//			printf("read-text-file fread: %ld\n", result );
			//			printf( "read-text-file string: %s\n", theBuffer );
		}
	}
	
	if( theBuffer != NULL ) {
		//		printf( "read-text-file string: %s\n", theBuffer );
		result = VPLPrimSetOutputObjectStringCopy( environment, primOutArity, 0, primitive, theBuffer );
	} else {
		result = VPLPrimSetOutputObjectNULL( environment, primOutArity, 0, primitive );
		result = kERROR;
	}
	
	if( theBuffer != NULL ) X_free( theBuffer );
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return result;
}


Int4 VPLP_write_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_write_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	int				theFile = -1;
	vpl_StringPtr	theString = NULL;
	
	Int1			*primName = "write-text";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theFile, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	result = VPLPrimGetInputObjectString( &theString, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if( theFile > 0 )
		result = write( theFile, theString, strlen(theString) );
	
	*trigger = (result >= 0) ? kSuccess : kFailure;
	return kNOERROR;
}

Int4 VPLP_write_2D_buffer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_write_2D_buffer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	int				theFile = -1;
	vpl_BlockPtr	theBlock = NULL;
	vpl_BlockSize	theBlockSize = 0;
	
	V_ExternalBlock	theBlockObject = NULL;
	
	Int1			*primName = "write-buffer";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimGetInputObjectType( kExternalBlock, 1, primitive, environment );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theFile, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	theBlockObject = (V_ExternalBlock)VPLPrimGetInputObject( 1, primitive, environment );
	if( theBlockObject != NULL ) {
		
		theBlock = (vpl_BlockPtr)theBlockObject->blockPtr;
		
		if( primInArity == 3 ) {
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theBlockSize, 2, primName, primitive, environment );
			if( result != kNOERROR ) return result;
			
			if( theBlockObject->size < theBlockSize ) 			// if requested size is > known size FAIL
				theFile = -1;
		} else 
			theBlockSize = (vpl_BlockSize)theBlockObject->size;
		
		if( theFile > 0 )
			result = write( theFile, theBlock, theBlockSize );
		else
			result = -1;
	} else {
		// Just passing NULL is no error, only if specified block size is > 0 then FAIL.
		if( primInArity == 3 ) {
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theBlockSize, 2, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		}
		
		if( theBlockSize > 0 )
			result = -1;
	}
	
	*trigger = (result >= 0) ? kSuccess : kFailure;
	return kNOERROR;
}

Int4 VPLP_create_2D_object_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_object_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_StringPtr	filePath = NULL;
	FILE*			theFile = NULL;
	V_Object		theObject = NULL;
	
	Int1*			theObjectBuffer = NULL;
	Nat4			theNumberOfBytes = 0;
	
	Int1			*primName = "create-object-file";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &filePath, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	theObject = VPLPrimGetInputObject( 1, primitive, environment );
	theObjectBuffer = (Int1 *)archive_object( environment, theObject, (Int4*)&theNumberOfBytes );
	
	//	printf("create-object-file theNumberOfBytes: %ld\n", theNumberOfBytes );
	
	if ((theFile = fopen(filePath, "w+"))) {
		result = fwrite( theObjectBuffer, theNumberOfBytes, 1, theFile );
		//		printf("create-object-file fwrite result: %ld\n", result );
		fclose(theFile);
	}
	
	//	printf("create-object-file result: %ld\n", result );
	
	X_free(theObjectBuffer);
	
	*trigger = (result >= 0) ? kSuccess : kFailure;
	return kNOERROR;
}


Int4 VPLP_read_2D_object_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_object_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	FILE*			theFile = NULL;
	vpl_StringPtr	filePath = NULL;
	
	Int1*			theObjectBuffer = NULL;
	Nat4			theNumberOfBytes = 0;
	
	V_Object		theObject = NULL;
	V_Instance		tempInstance = NULL;
	V_Class			tempClass = NULL;
	V_Dictionary	tempDictionary = NULL;
	
	Int1			*primName = "read-object-file";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &filePath, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if ((theFile = fopen(filePath, "r"))) {
		
		//		printf("read-object-file fopen: OK\n" );
				
		if( primInArity == 2 ) {
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theNumberOfBytes, 1, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		} else {
			fseek( theFile, 0, SEEK_END );
			theNumberOfBytes = ftell( theFile );
			rewind( theFile );
		}
		
		//		printf("read-object-file theNumberOfBytes: %ld\n", theNumberOfBytes );
		
		theObjectBuffer = (Int1*)X_malloc( theNumberOfBytes );
		
		if( theObjectBuffer != NULL ) {
			result = fread( theObjectBuffer, theNumberOfBytes, 1, theFile );
			fclose(theFile);
		}
		
	} else
		result = -1;
	
	if( result >= 0 ) {
		theObject = unarchive_object(environment,(V_Archive)theObjectBuffer);
		
		//		printf("read-object-file unarchive_object: %x\n", theObject );
		
		X_free(theObjectBuffer);
		// Copy object into one defined by the current class definition if list length is different//
		if(theObject != NULL && theObject->type == kInstance){
			tempInstance = (V_Instance) theObject;
			tempClass = get_class(environment->classTable,tempInstance->name);
			if(tempClass != NULL){
				tempDictionary = tempClass->attributes;
				if(tempDictionary != NULL && tempDictionary->numberOfNodes > tempInstance->listLength){
					return record_error("read-object: Instance attributes not equal to definition",tempInstance->name,kERROR,environment);
				}
			}else{
				return record_error("read-object: Instance is unknown class",tempInstance->name,kERROR,environment);
				// ToDo: Provide for "unknown" class //					
			}
		}				
		result = VPLPrimSetOutputObject( environment, primInArity, 0, primitive, (V_Object)theObject);
	} else {
		result = VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );
		if( theObjectBuffer != NULL ) X_free( theObjectBuffer );
		result = kERROR;
	}
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return result;
}

Int4 VPLP_write_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_write_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	int			theFile = -1;
	V_Object	theObject = NULL;
	
	Int1*		theObjectBuffer = NULL;
	Nat4		theNumberOfBytes = 0;
	
	Int1		*primName = "write-object";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theFile, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	if( theFile > 0 ) {
		theObject = VPLPrimGetInputObject( 1, primitive, environment );
		
		theObjectBuffer = (Int1 *)archive_object( environment, theObject, (Int4*)&theNumberOfBytes );
		
		result = write( theFile, theObjectBuffer, theNumberOfBytes );
		
		X_free(theObjectBuffer);
	} else
		result = -1;
	
	*trigger = (result >= 0) ? kSuccess : kFailure;
	return kNOERROR;
}

Int4 VPLP_read_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	int			theFile = -1;
	V_Object	theObject = NULL;
	V_Instance	tempInstance = NULL;
	V_Class		tempClass = NULL;
	V_Dictionary	tempDictionary = NULL;
	
	Int1*		theObjectBuffer = NULL;
	Nat4		theInitialOffset = 0;
	Nat4		theCurrentOffset = 0;
	Nat4		theNumberOfBytes = 0;
	
	Int1		*primName = "read-object";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theFile, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	if( theFile > 0 ) {
		theInitialOffset = lseek( theFile, 0, SEEK_CUR );
		theCurrentOffset = lseek( theFile, 0, SEEK_END );
		theNumberOfBytes = theCurrentOffset - theInitialOffset;
		lseek( theFile, 0, SEEK_SET );
		
		theObjectBuffer = (Int1*)X_malloc( theNumberOfBytes );	
		result = read( theFile, theObjectBuffer, theNumberOfBytes );
		
		theObject = unarchive_object(environment,(V_Archive)theObjectBuffer);
		X_free(theObjectBuffer);
		// Copy object into one defined by the current class definition if list length is different//
		if(theObject != NULL && theObject->type == kInstance){
			tempInstance = (V_Instance) theObject;
			tempClass = get_class(environment->classTable,tempInstance->name);
			if(tempClass != NULL){
				tempDictionary = tempClass->attributes;
				if(tempDictionary != NULL && tempDictionary->numberOfNodes > tempInstance->listLength){
					return record_error("read-object: Instance attributes not equal to definition",tempInstance->name,kERROR,environment);
				}
			}else{
				return record_error("read-object: Instance is unknown class",tempInstance->name,kERROR,environment);
				// ToDo: Provide for "unknown" class //					
			}
		}				
		result = VPLPrimSetOutputObject( environment, primInArity, 0, primitive, (V_Object)theObject);
	} else 
		result = -1;
	
	if( result != 0 )
		VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );
	
	*trigger = (result >= 0) ? kSuccess : kFailure;
	return kNOERROR;
}

Int4 VPLP_read_2D_buffer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_buffer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	int			theFile = -1;
	
	Int1*		theObjectBuffer = NULL;
	Nat4		theNumberOfBytes = 0;
	
	Int1		*primName = "read-buffer";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theFile, 0, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
	if( theFile > 0 ) {
		if( primInArity == 2 ) {
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theNumberOfBytes, 1, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		} else {
			theNumberOfBytes = lseek( theFile, 0, SEEK_END );
			lseek( theFile, 0, SEEK_SET );
		}
		
		theObjectBuffer = (Int1*)X_malloc( theNumberOfBytes );	
		result = read( theFile, theObjectBuffer, theNumberOfBytes );
	} else
		result = -1;
	
	if( result >= 0 ) {
		VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, 
										(vpl_BlockPtr)theObjectBuffer, "void", theNumberOfBytes, 1 );
	} else
		VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );
	
	*trigger = (result >= 0) ? kSuccess : kFailure;
	return kNOERROR;
}


Int4 VPLP_create_2D_data_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_data_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_StringPtr		filePath = NULL;
	vpl_BlockPtr		theBlock = NULL;
	vpl_BlockSize		theBlockSize = 0;
	V_ExternalBlock		theBlockObject = NULL;
	
	FILE*			pathFile = NULL;
	
	Int1			*primName = "create-data-file";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &filePath, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	theBlockObject = (V_ExternalBlock)VPLPrimGetInputObject( 1, primitive, environment );
	if( theBlockObject != NULL ) {
		
		theBlock = (vpl_BlockPtr)theBlockObject->blockPtr;
		
		if( primInArity == 3 ) {
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theBlockSize, 2, primName, primitive, environment );
			if( result != kNOERROR ) return result;
			
			if( theBlockSize > (vpl_BlockSize)theBlockObject->size ) {			// if requested size is > known size FAIL
				result = -1;
				goto BAIL;
			}
		} else 
			theBlockSize = (vpl_BlockSize)theBlockObject->size;
		
		if ((pathFile = fopen(filePath, "w+"))) {
			result = fwrite(theBlock, 1, theBlockSize, pathFile);
			fclose(pathFile);
			if( result >= 0 ) result = 0;
		} else
			result = -1;
	} else 
		result = -1;
	
BAIL:
	*trigger = (result == 0) ? kSuccess : kFailure;
	return kNOERROR;
}

Int4 VPLP_read_2D_data_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_read_2D_data_2D_file( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	FILE*			theFile = NULL;
	Nat4			theSize = 0;
	vpl_StringPtr	filePath = NULL;
	vpl_BlockPtr	theBuffer = NULL;
	
	Int1			*primName = "read-data-file";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectString( &filePath, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if ((theFile = fopen( filePath, "r"))) 
	{
		if( primInArity == 2 )
		{
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theSize, 1, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		} else {
			fseek( theFile, 0, SEEK_END );
			theSize = ftell( theFile );
			rewind( theFile );
		}
		
		theBuffer = (vpl_BlockPtr)X_calloc( theSize, 1 );
		if( theBuffer != NULL ) {
			result = fread( theBuffer, theSize, 1, theFile );
			fclose(theFile);
		}
	}
	
	if( theBuffer != NULL ) {
		result = VPLPrimSetOutputObjectEBlockPtr( environment, primOutArity, 0, primitive, theBuffer, "void", theSize, 0 );
	} else {
		result = VPLPrimSetOutputObjectNULL( environment, primOutArity, 0, primitive );
		result = kERROR;
	}
	
	*trigger = (result == 0) ? kSuccess : kFailure;
	return result;
}

vpl_StringPtr	CFStringCopyVPLString( CFStringRef inString, V_Environment environment );
vpl_StringPtr	CFStringCopyVPLString( CFStringRef inString, V_Environment environment )
{
	vpl_StringPtr		convertText = NULL;
	
	CFIndex				maxBuffSize = CFStringGetMaximumSizeForEncoding( CFStringGetLength(inString), kCFStringEncodingUTF8 );
	CFIndex				actualSize = 0;
	
	convertText = (vpl_StringPtr)X_calloc(1, maxBuffSize + 1);
	if( convertText != NULL ) {
		CFStringGetBytes( inString, CFRangeMake(0, CFStringGetLength(inString)), kCFStringEncodingUTF8, '?', false, (UInt8*)convertText, maxBuffSize, &actualSize );
		X_realloc( convertText, 1, actualSize );
	}
	
	if( (actualSize == 0) && (convertText != NULL) ) {
		X_free( convertText );
		convertText = strdup("");
	}
	
	return convertText;
}

V_String		CFStringCopyV_String( CFStringRef inString, V_Environment environment );
V_String		CFStringCopyV_String( CFStringRef inString, V_Environment environment )
{
	vpl_StringPtr	text = CFStringCopyVPLString( inString, environment );
	V_String		textObject = (text != NULL) ? create_string(text, environment) : NULL;
	
	return textObject;
}

CFStringRef		CFStringCreateFromV_String( CFAllocatorRef allocator, V_String inVString, V_Environment environment );
CFStringRef		CFStringCreateFromV_String( CFAllocatorRef allocator, V_String inVString, V_Environment environment )
{
	CFStringRef		outText = NULL;
	
	if( inVString ) 
		outText = CFStringCreateWithCString( allocator, inVString->string, kCFStringEncodingUTF8 );
	
	return outText;
}

CFStringRef		CFStringCreateFromVPLString( CFAllocatorRef allocator, vpl_StringPtr inString, V_Environment environment );
CFStringRef		CFStringCreateFromVPLString( CFAllocatorRef allocator, vpl_StringPtr inString, V_Environment environment )
{
	CFStringRef		outText = NULL;
	
	if( inString ) 
		outText = CFStringCreateWithCString( allocator, inString, kCFStringEncodingUTF8 );
	
	return outText;
}

Int4 VPLP_folder_2D_items( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_folder_2D_items( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	
	Int1*			primName = "folder-items";
	Int4			result = kNOERROR;
	
	vpl_Boolean		fullPath = kFALSE;
	vpl_StringPtr	parentPath = NULL;
	vpl_StringPtr	itemName = NULL;
	vpl_StringPtr	needSlash = "/";
	vpl_StringPtr	itemPath = NULL;
	
	V_List			list = NULL;
	V_String		itemString = NULL;
	
	Nat4			valenceCount = 0;
	Nat4			numberOfItems = 0;
	Nat4			counter = 0;
	
	OSStatus		status = -1;
	FSCatalogInfo	theCatInfo;

	FSRef			theFolderRef;
	HFSUniStr255*	theUniNamesArray = NULL;
	CFStringRef		theNameString = NULL;
	FSIterator		theIterator;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectString( &parentPath, 0, primName, primitive, environment ); 
	if( result != kNOERROR ) return result;
	
	needSlash = "";
	if( strlen(parentPath) > 2 ) 
		needSlash = ( parentPath[strlen(parentPath)-1] == '/') ? "" : "/";
	
	if( primInArity == 2 ) {
		result = VPLPrimGetInputObjectBool( &fullPath, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	status = FSPathMakeRef( (const UInt8*)parentPath, &theFolderRef, NULL );
	
	if( status == 0 ) {
		status = FSGetCatalogInfo(&theFolderRef,kFSCatInfoValence,&theCatInfo,NULL,NULL,NULL);
		if(status == noErr) {
			valenceCount = theCatInfo.valence;
			
			theUniNamesArray = (HFSUniStr255*)X_calloc(valenceCount,sizeof(HFSUniStr255));
		
			if(theUniNamesArray != NULL){
				if(status == noErr) status = FSOpenIterator(&theFolderRef,kFSIterateFlat,&theIterator);
				if(status == noErr) status = FSGetCatalogInfoBulk(theIterator,valenceCount,&numberOfItems,NULL,kFSCatInfoNone,NULL,NULL,NULL,theUniNamesArray);
				if(status == noErr) status = FSCloseIterator(theIterator);
				
				if(status == noErr) {
					list = create_list( numberOfItems, environment );
					for( counter = 0; counter < numberOfItems; counter++ ) 
					{
						itemString = NULL;
						itemPath = NULL;
						
						theNameString = CFStringCreateWithCharacters( NULL,  theUniNamesArray[counter].unicode, theUniNamesArray[counter].length );
						itemName = CFStringCopyVPLString( theNameString, environment );
						if( theNameString ) CFRelease( theNameString );
						
						if( itemName != NULL )
						{
							itemPath = (vpl_StringPtr)X_calloc( 1, strlen(parentPath)+strlen(itemName)+2 );
							if( itemPath != NULL ) 
							{
								if( fullPath == kTRUE ) 
									sprintf( itemPath, "%s%s%s", parentPath, needSlash, itemName );
								else
									itemPath = strdup( itemName );
							
								itemString = create_string( itemPath, environment );
								X_free( itemPath );
							}
							X_free( itemName );
						}
						
						*(list->objectList + counter) = (V_Object) itemString;
					}
					
					status = VPLPrimSetOutputObject( environment, primInArity, 0, primitive, (V_Object)list );
				}
			}
		}
	}
	
	if( status != 0 )
		VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );

	*trigger = kSuccess;
	return kNOERROR;
}
/*
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
*/

Nat4	loadConstants_VPX_PrimitivesFiles(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesFiles(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)
	
	Nat4	result = 0;
	V_Dictionary	dictionary = NULL;
	
	dictionary = environment->externalConstantsTable;
	result = add_nodes(dictionary,VPX_UNIX_Constants_Number,VPX_UNIX_Constants);
	
	return result;
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
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"get-file",dictionary,0,2,VPLP_get_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"put-file",dictionary,1,3,VPLP_put_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"get-folder",dictionary,0,2,VPLP_get_2D_folder)) == NULL) return kERROR;

			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"create-object-file",dictionary,2,0,VPLP_create_2D_object_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"create-text-file",dictionary,2,0,VPLP_create_2D_text_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"create-data-file",dictionary,2,0,VPLP_create_2D_data_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-object-file",dictionary,1,1,VPLP_read_2D_object_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-text-file",dictionary,1,1,VPLP_read_2D_text_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-data-file",dictionary,1,1,VPLP_read_2D_data_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"delete-file",dictionary,1,0,VPLP_delete_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"create-file",dictionary,1,1,VPLP_create_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"open-file",dictionary,1,1,VPLP_open_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"close-file",dictionary,1,0,VPLP_close_2D_file)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-data",dictionary,1,1,VPLP_read_2D_buffer)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-object",dictionary,1,1,VPLP_read_2D_object)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"read-text",dictionary,1,1,VPLP_read_2D_text)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"write-data",dictionary,2,0,VPLP_write_2D_buffer)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"write-object",dictionary,2,0,VPLP_write_2D_object)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"write-text",dictionary,2,0,VPLP_write_2D_text)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"folder-items",dictionary,1,1,VPLP_folder_2D_items)) == NULL) return kERROR;
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

