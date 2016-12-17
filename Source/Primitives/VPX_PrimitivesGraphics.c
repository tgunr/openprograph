/*
 *  VPX_PrimitivesGraphics.c
 *  PB_56
 *
 *  Created by scott on Sat May 11 2004.
 *  Copyright (c) 2001 __MyCompanyName__. All rights reserved.
 *
 */
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	
#include "FSCopyObject.h"

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

Int4 VPLP_list_2D_to_2D_Point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_Point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	Int4		topValue = 0;
	Int4		leftValue = 0;

    Point		*thePoint = NULL;
	V_ExternalBlock		ptrO = NULL;

	Int1		*primName = "list-to-Point";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	theList = (V_List) object;
	if( theList->listLength != 2) return record_error("list-to-Point: List not of length 2! - ",primName,kERROR,environment);

	object = theList->objectList[0];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Point: List element 1 type not integer! - ",primName,kERROR,environment);
	topValue = ((V_Integer) object)->value;

	object = theList->objectList[1];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Point: List element 2 type not integer! - ",primName,kERROR,environment);
	leftValue = ((V_Integer) object)->value;
	
	thePoint = VPXMALLOC(1,Point);
	SetPt(thePoint,leftValue,topValue);

	ptrO = create_externalBlock("Point",sizeof (Point),environment);
	ptrO->blockPtr = (void *) thePoint;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrO);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_list_2D_to_2D_Rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_Rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	Int4		topValue = 0;
	Int4		leftValue = 0;
	Int4		bottomValue = 0;
	Int4		rightValue = 0;

    Rect		*theRect = NULL;
	V_ExternalBlock		ptrO = NULL;

	Int1		*primName = "list-to-Rect";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	theList = (V_List) object;
	if( theList->listLength != 4) return record_error("list-to-Rect: List not of length 4! - ",primName,kERROR,environment);

	object = theList->objectList[0];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Rect: List element 1 type not integer! - ",primName,kERROR,environment);
	topValue = ((V_Integer) object)->value;

	object = theList->objectList[1];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Rect: List element 2 type not integer! - ",primName,kERROR,environment);
	leftValue = ((V_Integer) object)->value;
	
	object = theList->objectList[2];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Rect: List element 3 type not integer! - ",primName,kERROR,environment);
	bottomValue = ((V_Integer) object)->value;
	
	object = theList->objectList[3];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Rect: List element 4 type not integer! - ",primName,kERROR,environment);
	rightValue = ((V_Integer) object)->value;
	
	theRect = VPXMALLOC(1,Rect);
	SetRect(theRect,leftValue,topValue,rightValue,bottomValue);

	ptrO = create_externalBlock("Rect",sizeof (Rect),environment);
	ptrO->blockPtr = (void *) theRect;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrO);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_Point_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_Point_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;

    Point				*thePoint = NULL;
	V_Object			block = NULL;

	Int1		*primName = "Point-to-list";
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
	if( strcmp(((V_ExternalBlock)block)->name,"Point") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"Point",					// Operation Name
			((V_ExternalBlock)block)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	if(((V_ExternalBlock)block)->levelOfIndirection == 0) thePoint = (Point *) ((V_ExternalBlock) block)->blockPtr;
	else if(((V_ExternalBlock)block)->levelOfIndirection == 1) thePoint = *(Point **) ((V_ExternalBlock) block)->blockPtr;
	else if(((V_ExternalBlock)block)->levelOfIndirection == 2) thePoint = **(Point ***) ((V_ExternalBlock) block)->blockPtr;
	else return record_error("Point-to-list: Indirection greater than 2! - ",primName,kWRONGINPUTTYPE,environment);

	ptrA = create_list(2,environment); /* Create object, add to heap, set refcount */
	
	ptrA->objectList[0] = (V_Object) int_to_integer(thePoint->v,environment); /* Create object, add to heap, set refcount */
	ptrA->objectList[1] = (V_Object) int_to_integer(thePoint->h,environment); /* Create object, add to heap, set refcount */

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_Rect_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_Rect_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;

    Rect				*theRect = NULL;
	V_Object			block = NULL;

	Int1		*primName = "Rect-to-list";
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
	if( strcmp(((V_ExternalBlock)block)->name,"Rect") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"Rect",					// Operation Name
			((V_ExternalBlock)block)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	if(((V_ExternalBlock)block)->levelOfIndirection == 0) theRect = (Rect *) ((V_ExternalBlock) block)->blockPtr;
	else if(((V_ExternalBlock)block)->levelOfIndirection == 1) theRect = *(Rect **) ((V_ExternalBlock) block)->blockPtr;
	else if(((V_ExternalBlock)block)->levelOfIndirection == 2) theRect = **(Rect ***) ((V_ExternalBlock) block)->blockPtr;
	else return record_error("Rect-to-list: Indirection greater than 2! - ",primName,kWRONGINPUTTYPE,environment);

	ptrA = create_list(4,environment); /* Create object, add to heap, set refcount */
	
	ptrA->objectList[0] = (V_Object) int_to_integer(theRect->top,environment); /* Create object, add to heap, set refcount */
	ptrA->objectList[1] = (V_Object) int_to_integer(theRect->left,environment); /* Create object, add to heap, set refcount */
	ptrA->objectList[2] = (V_Object) int_to_integer(theRect->bottom,environment); /* Create object, add to heap, set refcount */
	ptrA->objectList[3] = (V_Object) int_to_integer(theRect->right,environment); /* Create object, add to heap, set refcount */

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_list_2D_to_2D_RGB( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_RGB( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	Int4		redValue = 0;
	Int4		greenValue = 0;
	Int4		blueValue = 0;

    RGBColor	*theColor = NULL;
	V_ExternalBlock		ptrO = NULL;

	Int1		*primName = "list-to-RGB";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	theList = (V_List) object;
	if( theList->listLength != 3) return record_error("list-to-Point: List not of length 3! - ",primName,kERROR,environment);

	object = theList->objectList[0];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Point: List element 1 type not integer! - ",primName,kERROR,environment);
	redValue = ((V_Integer) object)->value;

	object = theList->objectList[1];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Point: List element 2 type not integer! - ",primName,kERROR,environment);
	greenValue = ((V_Integer) object)->value;
	
	object = theList->objectList[2];
	if( object == NULL || object->type != kInteger) return record_error("list-to-Point: List element 3 type not integer! - ",primName,kERROR,environment);
	blueValue = ((V_Integer) object)->value;
	
	theColor = (RGBColor *) X_malloc(sizeof (RGBColor));
	theColor->red = redValue;
	theColor->green = greenValue;
	theColor->blue = blueValue;

	ptrO = create_externalBlock("RGBColor",sizeof (RGBColor),environment);
	ptrO->blockPtr = (void *) theColor;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrO);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_RGB_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_RGB_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;

    RGBColor			*theColor = NULL;
	V_Object			block = NULL;

	Int1		*primName = "RGB-to-list";
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
	if( strcmp(((V_ExternalBlock)block)->name,"RGBColor") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"RGBColor",					// Operation Name
			((V_ExternalBlock)block)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	if(((V_ExternalBlock)block)->levelOfIndirection == 0) theColor = (RGBColor *) ((V_ExternalBlock) block)->blockPtr;
	else if(((V_ExternalBlock)block)->levelOfIndirection == 1) theColor = *(RGBColor **) ((V_ExternalBlock) block)->blockPtr;
	else if(((V_ExternalBlock)block)->levelOfIndirection == 2) theColor = **(RGBColor ***) ((V_ExternalBlock) block)->blockPtr;
	else return record_error("RGB-to-list: Indirection greater than 2! - ",primName,kWRONGINPUTTYPE,environment);

	ptrA = create_list(3,environment); /* Create object, add to heap, set refcount */
	
	ptrA->objectList[0] = (V_Object) int_to_integer(theColor->red,environment); /* Create object, add to heap, set refcount */
	ptrA->objectList[1] = (V_Object) int_to_integer(theColor->green,environment); /* Create object, add to heap, set refcount */
	ptrA->objectList[2] = (V_Object) int_to_integer(theColor->blue,environment); /* Create object, add to heap, set refcount */

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);

	*trigger = kSuccess;	
	return kNOERROR;
}

Nat4	loadConstants_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        

        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        

        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)

        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;

		if(dictionary){
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"list-to-Point",dictionary,1,1,VPLP_list_2D_to_2D_Point)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"list-to-Rect",dictionary,1,1,VPLP_list_2D_to_2D_Rect)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"Point-to-list",dictionary,1,1,VPLP_Point_2D_to_2D_list)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"Rect-to-list",dictionary,1,1,VPLP_Rect_2D_to_2D_list)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"list-to-RGB",dictionary,1,1,VPLP_list_2D_to_2D_RGB)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"RGB-to-list",dictionary,1,1,VPLP_RGB_2D_to_2D_list)) == NULL) return kERROR;
		}

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesGraphics(environment,bundleID);
		result = loadStructures_VPX_PrimitivesGraphics(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesGraphics(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesGraphics(environment,bundleID);
		
		return result;
}


