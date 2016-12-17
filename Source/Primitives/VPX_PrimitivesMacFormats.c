/*
 *  VPX_PrimitivesMacFormats.c
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

#ifdef CARBON	
#include <Carbon/Carbon.h>
#endif

#ifdef TOOLBOX	
#include <Types.h>
#include <Memory.h>
#include <Quickdraw.h>
#include <Fonts.h>
#include <Events.h>
#include <Menus.h>
#include <Windows.h>
#include <TextEdit.h>
#include <Dialogs.h>
#include <OSUtils.h>
#include <ToolUtils.h>
#include <SegLoad.h>
#include <Sound.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#endif



Int4 VPLP_RGB_2D_fore_2D_color( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_RGB_2D_fore_2D_color( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
    RGBColor			*theColor = NULL;
	V_Object			block = NULL;

	Int1	*moduleName = NULL;

	if(primInArity != 1) return record_error("RGB-fore-color: Inarity not 1!",moduleName,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("RGB-fore-color: Outarity not 0!",moduleName,kWRONGOUTARITY,environment);
	
	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL || block->type != kExternalBlock) return record_error("RGB-fore-color: Input 1 type not externalBlock! - ",moduleName,kWRONGINPUTTYPE,environment);
	if( strcmp(((V_ExternalBlock) block)->name,"RGBColor") != 0) return record_error("RGB-fore-color: Input 1 external not type RGBColor! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	theColor = (RGBColor *) ((V_ExternalBlock) block)->blockPtr;

	RGBForeColor(theColor);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_RGB_2D_back_2D_color( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_RGB_2D_back_2D_color( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
    RGBColor			*theColor = NULL;
	V_Object			block = NULL;

	Int1	*moduleName = NULL;

	if(primInArity != 1) return record_error("RGB-fore-color: Inarity not 1!",moduleName,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("RGB-fore-color: Outarity not 0!",moduleName,kWRONGOUTARITY,environment);
	
	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL || block->type != kExternalBlock) return record_error("RGB-fore-color: Input 1 type not externalBlock! - ",moduleName,kWRONGINPUTTYPE,environment);
	if( strcmp(((V_ExternalBlock) block)->name,"RGBColor") != 0) return record_error("RGB-fore-color: Input 1 external not type RGBColor! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	theColor = (RGBColor *) ((V_ExternalBlock) block)->blockPtr;

	RGBBackColor(theColor);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_get_2D_font_2D_number( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_font_2D_number( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*stringValue = 0;
#ifdef CARBON	
     Str255		pascalString;
#endif
     SInt16		fontNumber;
     V_Object	block = NULL;

	V_Integer	outputInt = 0;	
	Int1	*moduleName = NULL;

	if(primInArity != 1) return record_error("get-font-number: Inarity not 1!",moduleName,kWRONGINARITY,environment);
	if(primOutArity != 1) return record_error("get-font-number: Outarity not 1!",moduleName,kWRONGOUTARITY,environment);
	
	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL || block->type != kString) return record_error("get-font-number: Input 1 type not string! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	stringValue = ((V_String) block)->string;
#ifdef TOOLBOX	
	c2pstr(stringValue);
	GetFNum((const unsigned char *) stringValue,&fontNumber);
	p2cstr((unsigned char *)stringValue);
#endif
#ifdef CARBON	
	CopyCStringToPascal(stringValue,pascalString);
	GetFNum(pascalString,&fontNumber);
#endif
	
	outputInt = int_to_integer(fontNumber,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_text_2D_font( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_text_2D_font( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	block = NULL;
     SInt16		fontNumber;

	Int1	*moduleName = NULL;

	if(primInArity != 1) return record_error("text-font: Inarity not 1!",moduleName,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("text-font: Outarity not 0!",moduleName,kWRONGOUTARITY,environment);
	
	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL || block->type != kInteger) return record_error("text-font: Input 1 type not integer! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	fontNumber = ((V_Integer) block)->value;

	TextFont(fontNumber);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_text_2D_face( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_text_2D_face( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	block = NULL;
     SInt16		fontNumber;

	Int1	*moduleName = NULL;

	if(primInArity != 1) return record_error("text-face: Inarity not 1!",moduleName,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("text-face: Outarity not 0!",moduleName,kWRONGOUTARITY,environment);
	
	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL || block->type != kInteger) return record_error("text-face: Input 1 type not integer! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	fontNumber = ((V_Integer) block)->value;

	TextFace(fontNumber);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_text_2D_size( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_text_2D_size( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	block = NULL;
     SInt16		fontNumber;

	Int1	*moduleName = NULL;

	if(primInArity != 1) return record_error("text-size: Inarity not 1!",moduleName,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("text-size: Outarity not 0!",moduleName,kWRONGOUTARITY,environment);
	
	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL || block->type != kInteger) return record_error("text-size: Input 1 type not integer! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	fontNumber = ((V_Integer) block)->value;

	TextSize(fontNumber);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

#pragma mark MP Threaded popen

struct tpopen_params {
	Int1			*pCommandString;
	Int4			*pResultCode;
	Int1*			*pResultText;
	int				pResultTextSize;
};
typedef struct tpopen_params tpopen_params;

static OSStatus	VPLT_thread_popen( tpopen_params* inParams );
static OSStatus	VPLT_thread_popen( tpopen_params* inParams ) {

	OSStatus		err = 1;
	char*			theCommand = inParams->pCommandString;
	size_t			theBufferSize = inParams->pResultTextSize;
	FILE*			thePipe = NULL;
	
	BlockZero( inParams->pResultText, theBufferSize );
	*inParams->pResultCode = 0;
	
	thePipe = popen( theCommand, "r" );
	if( thePipe != NULL ) {
		err = fread( inParams->pResultText, theBufferSize, 1, thePipe );
		*inParams->pResultCode = strlen( (char*)inParams->pResultText );
		err = pclose( thePipe );
	}
	
	if( theCommand ) X_free( theCommand );
	X_free( inParams );
	
	return err;
}


Int4 VPLP_thread_2D_command( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_thread_2D_command( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object			block = NULL;
	V_ExternalBlock		externalBlock = NULL;

	Int1			*inCommandString = "";
	Int4			inStackSize = 4096;
	MPQueueID		inQueueID;
	MPTaskID		*outTaskID;
	tpopen_params	*theParams;
	vpl_BlockPtr	outTaskIDBlock = NULL;
	
	OSStatus		err;

	theParams = VPXMALLOC( 1, tpopen_params );
	outTaskID = VPXMALLOC( 1, MPTaskID );

	Int1	*primName = "thread-command";

	if(primInArity != 5) return record_error("thread-command: Inarity not 5!",primName,kWRONGINARITY,environment);
	if(primOutArity != 2) return record_error("thread-command: Outarity not 2!",primName,kWRONGOUTARITY,environment);
	
	
	block = VPLPrimGetInputObject(0,primitive,environment);				// The command string: "date"
	if( block == NULL || block->type != kString) return record_error("thread-command: Input 1 type not string!",primName,kWRONGINPUTTYPE,environment);
	inCommandString = new_string( ((V_String) block)->string , environment );
	theParams->pCommandString = inCommandString;

	block = VPLPrimGetInputObject(1,primitive,environment);				//	The stack size: 4096
	if( block == NULL || block->type != kInteger) return record_error("thread-command: Input 2 type not integer! - ",primName,kWRONGINPUTTYPE,environment);	
	inStackSize = ((V_Integer) block)->value;
	

	block = VPLPrimGetInputObject(2,primitive,environment);				// The MPQueueID: OpaqueMPQueueID*
	externalBlock = (V_ExternalBlock) block;

	if(externalBlock->levelOfIndirection == 0) inQueueID = (MPQueueID) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 1) inQueueID = *(MPQueueID *) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 2) inQueueID = **(MPQueueID **) externalBlock->blockPtr;
	else  return record_error("thread-command: MPQueueID: Level of indirection greater than 2! - ",primName,kERROR,environment);
	

	block = VPLPrimGetInputObject(3,primitive,environment);				// The Result Code: Int4*
	externalBlock = (V_ExternalBlock) block;

	if(externalBlock->levelOfIndirection == 0) theParams->pResultCode = (Int4 *) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 1) theParams->pResultCode = *(Int4 **) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 2) theParams->pResultCode = **(Int4 ***) externalBlock->blockPtr;
	else  return record_error("thread-command: Result Int4*: Level of indirection greater than 2! - ",primName,kERROR,environment);
	
	
	block = VPLPrimGetInputObject(4,primitive,environment);				// The Result Text:	char*
	externalBlock = (V_ExternalBlock) block;

	if(externalBlock->levelOfIndirection == 0) theParams->pResultText = (char* *) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 1) theParams->pResultText = *(char* **) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 2) theParams->pResultText = **(char* ***) externalBlock->blockPtr;
	else  return record_error("thread-command: Result char*: Level of indirection greater than 2! - ",primName,kERROR,environment);

	theParams->pResultTextSize = (ByteCount)externalBlock->size;

	err = MPCreateTask(	(TaskProc) VPLT_thread_popen, theParams,
						inStackSize,
						inQueueID,
						nil, nil,
						0,
						outTaskID );

	VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, err );
	VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 1, primitive, (vpl_BlockPtr)outTaskID, "MPTaskID", sizeof(outTaskIDBlock), 1 );
	
	*trigger = kSuccess;	
	return kNOERROR;
}






Nat4	loadConstants_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)        

        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"RGB-fore-color",dictionary,1,0,VPLP_RGB_2D_fore_2D_color)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"RGB-back-color",dictionary,1,0,VPLP_RGB_2D_back_2D_color)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-font-number",dictionary,1,1,VPLP_get_2D_font_2D_number)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"text-font",dictionary,1,0,VPLP_text_2D_font)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"text-face",dictionary,1,0,VPLP_text_2D_face)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"text-size",dictionary,1,0,VPLP_text_2D_size)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"thread-command",dictionary,5,2,VPLP_thread_2D_command)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesMacFormats(environment,bundleID);
		result = loadStructures_VPX_PrimitivesMacFormats(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesMacFormats(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesMacFormats(environment,bundleID);
		
		return result;
}





