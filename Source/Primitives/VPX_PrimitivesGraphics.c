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

#pragma mark ***	Create Points		***

Int4 VPLP__28_vh_292D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__28_vh_292D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	float		topValue = 0.0;
	float		leftValue = 0.0;
	
    CGPoint		*thePoint = NULL;
	V_ExternalBlock		ptrO = NULL;
	
	Int1		*primName = "(vh)-to-point";
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
	if( theList->listLength < 2) return record_error("(vh)-to-point: List not of length 2! - ",primName,kERROR,environment);
	

	object = VPLObjectGetListItem( (V_Object)theList, 0 );
	topValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 0, primName, primitive, environment );

	object = VPLObjectGetListItem( (V_Object)theList, 1 );
	leftValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 1, primName, primitive, environment );
		
	thePoint = VPXMALLOC(1,CGPoint);
	
	thePoint->x = leftValue;
	thePoint->y = topValue;
	
	VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, thePoint, "CGPoint", sizeof(CGPoint), 1 );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__28_xy_292D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__28_xy_292D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	float		topValue = 0;
	float		leftValue = 0;
	
    CGPoint		*thePoint = NULL;
	V_ExternalBlock		ptrO = NULL;
	
	Int1		*primName = "(xy)-to-point";
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
	if( theList->listLength < 2) return record_error("(xy)-to-point: List not of length 2! - ",primName,kERROR,environment);
	
	object = VPLObjectGetListItem( (V_Object)theList, 0 );
	leftValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 0, primName, primitive, environment );
	
	object = VPLObjectGetListItem( (V_Object)theList, 1 );
	topValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 1, primName, primitive, environment );
	
	thePoint = VPXMALLOC(1,CGPoint);
	
	thePoint->x = leftValue;
	thePoint->y = topValue;
	
	VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, thePoint, "CGPoint", sizeof(CGPoint), 1 );
	
	*trigger = kSuccess;	
	return kNOERROR;
}


Int4 VPLP_vh_2D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_vh_2D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	float		topValue = 0.0;
	float		leftValue = 0.0;
	
    CGPoint		*thePoint = NULL;
	V_ExternalBlock		ptrO = NULL;
	
	Int1		*primName = "vh-to-point";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
#endif
		
	result = VPLPrimGetInputObjectRealCoerce( (vpl_Real*)&topValue, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimGetInputObjectRealCoerce( (vpl_Real*)&leftValue, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	thePoint = VPXMALLOC(1,CGPoint);	
	thePoint->x = leftValue;
	thePoint->y = topValue;
		
	VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, thePoint, "CGPoint", sizeof(CGPoint), 1 );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_xy_2D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_xy_2D_to_2D_point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	float		topValue = 0;
	float		leftValue = 0;
	
    CGPoint		*thePoint = NULL;
	V_ExternalBlock		ptrO = NULL;
	
	Int1		*primName = "xy-to-point";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectRealCoerce( (vpl_Real*)&leftValue, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimGetInputObjectRealCoerce( (vpl_Real*)&topValue, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	thePoint = VPXMALLOC(1,CGPoint);
	thePoint->x = leftValue;
	thePoint->y = topValue;
	
	VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, thePoint, "CGPoint", sizeof(CGPoint), 1 );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

#pragma mark ***	From Point			***

Int4 VPLP_point_2D_to_2D28_vh_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_point_2D_to_2D28_vh_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;
	
    CGPoint				*thePoint = NULL;
	V_Object			block = NULL;
	
	Int1		*primName = "point-to-(vh)";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectEBlockPtrCoerce( (vpl_BlockPtr*)thePoint, "CGPoint", 0, primName, primitive, environment );
	
	ptrA = (V_List)VPLObjectCreateList( 2, environment );
	result = VPLObjectSetListItem( (V_Object)ptrA, (V_Object)int_to_integer(thePoint->y,environment), 0, environment );
	result = VPLObjectSetListItem( (V_Object)ptrA, (V_Object)int_to_integer(thePoint->x,environment), 1, environment );

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_point_2D_to_2D28_xy_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_point_2D_to_2D28_xy_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;
	
    CGPoint				*thePoint = NULL;
	V_Object			block = NULL;
	
	Int1		*primName = "point-to-(xy)";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectEBlockPtrCoerce( (vpl_BlockPtr*)thePoint, "CGPoint", 0, primName, primitive, environment );
	
	ptrA = (V_List)VPLObjectCreateList( 2, environment );
	result = VPLObjectSetListItem( (V_Object)ptrA, (V_Object)int_to_integer(thePoint->x,environment), 0, environment );
	result = VPLObjectSetListItem( (V_Object)ptrA, (V_Object)int_to_integer(thePoint->y,environment), 1, environment );

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_point_2D_to_2D_vh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_point_2D_to_2D_vh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
    CGPoint				*thePoint = NULL;
	V_Object			block = NULL;
	
	Int1		*primName = "point-to-vh";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectEBlockPtrCoerce( (vpl_BlockPtr*)thePoint, "CGPoint", 0, primName, primitive, environment );
	
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, thePoint->y );
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, thePoint->x );
		
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_point_2D_to_2D_xy( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_point_2D_to_2D_xy( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
    CGPoint				*thePoint = NULL;
	V_Object			block = NULL;
	
	Int1		*primName = "point-to-xy";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectEBlockPtrCoerce( (vpl_BlockPtr*)thePoint, "CGPoint", 0, primName, primitive, environment );
	
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, thePoint->x );
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, thePoint->y );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

#pragma mark ***	Legacy Point		***

Int4 VPLP_list_2D_to_2D_Point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_Point( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	return VPLP__28_vh_292D_to_2D_point( environment, trigger, primInArity, primOutArity, primitive );		//	TODO: replace with OLD!!
}

Int4 VPLP_Point_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_Point_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	return VPLP_point_2D_to_2D28_vh_29_(environment, trigger, primInArity, primOutArity, primitive);		//	TODO: replace with OLD!!
}


#pragma mark *** Create Rects ***

Int4 VPLP__28_tlbr_292D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__28_tlbr_292D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	float		topValue = 0.0;
	float		leftValue = 0.0;
	float		bottomValue = 0.0;
	float		rightValue = 0.0;

    CGRect		*theRect = NULL;
	V_ExternalBlock		ptrO = NULL;

	Int1		*primName = "(tlbr)-to-rect";
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
	if( theList->listLength != 4) return record_error("(tlbr)-to-rect: List not of length 4! - ",primName,kERROR,environment);

	object = VPLObjectGetListItem( (V_Object)theList, 0 );
	topValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 0, primName, primitive, environment );

	object = VPLObjectGetListItem( (V_Object)theList, 1 );
	leftValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 1, primName, primitive, environment );

	object = VPLObjectGetListItem( (V_Object)theList, 2 );
	bottomValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 2, primName, primitive, environment );

	object = VPLObjectGetListItem( (V_Object)theList, 3 );
	rightValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 3, primName, primitive, environment );

	theRect = VPXMALLOC(1,CGRect);
	
	theRect->origin.x = leftValue;
	theRect->origin.y = topValue;
	theRect->size.width = rightValue - leftValue;
	theRect->size.height = bottomValue - topValue;

	VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, theRect, "CGRect", sizeof(CGRect), 1 );

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__28_xywh_292D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__28_xywh_292D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	
	float		xValue = 0.0;
	float		yValue = 0.0;
	float		wValue = 0.0;
	float		hValue = 0.0;

    CGRect		*theRect = NULL;
	V_ExternalBlock		ptrO = NULL;
	
	Int1		*primName = "(xywh)-to-rect";
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
	if( theList->listLength != 4) return record_error("(xywh)-to-rect: List not of length 4! - ",primName,kERROR,environment);
	
	object = VPLObjectGetListItem( (V_Object)theList, 0 );
	xValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 0, primName, primitive, environment );
	
	object = VPLObjectGetListItem( (V_Object)theList, 1 );
	yValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 1, primName, primitive, environment );
	
	object = VPLObjectGetListItem( (V_Object)theList, 2 );
	wValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 2, primName, primitive, environment );
	
	object = VPLObjectGetListItem( (V_Object)theList, 3 );
	hValue = VPLObjectCoerceValueReal( object, &result );
	if( result != kNOERROR ) return VPLPrimCheckListObjectType( kReal, theList, 3, primName, primitive, environment );
	
	theRect = VPXMALLOC(1,CGRect);
	theRect->origin.x = xValue;
	theRect->origin.y = xValue;
	theRect->size.width = wValue;
	theRect->size.height = hValue;
	
	result = VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, theRect, "Rect", sizeof(Rect), 0 );

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_tlbr_2D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_tlbr_2D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	Int4		topValue = 0;
	Int4		leftValue = 0;
	Int4		bottomValue = 0;
	Int4		rightValue = 0;
	
    Rect		*theRect = NULL;
	V_ExternalBlock		ptrO = NULL;
	
	Int1		*primName = "tlbr-to-rect";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
#endif
	
	object = VPLPrimGetInputObject(0,primitive,environment);
	if( object != NULL && object->type == kReal) topValue = (Int4)((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("tlbr-to-rect: Input 1 type not integer! - ",primName,kERROR,environment);
	else topValue = ((V_Integer) object)->value;
	
	object = VPLPrimGetInputObject(1,primitive,environment);
	if( object != NULL && object->type == kReal) leftValue = (Int4)((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("tlbr-to-rect: Input 2 type not integer! - ",primName,kERROR,environment);
	else leftValue = ((V_Integer) object)->value;
	
	object = VPLPrimGetInputObject(2,primitive,environment);
	if( object != NULL && object->type == kReal) bottomValue = (Int4)((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("tlbr-to-rect: Input 3 type not integer! - ",primName,kERROR,environment);
	else bottomValue = ((V_Integer) object)->value;
	
	object = VPLPrimGetInputObject(3,primitive,environment);
	if( object != NULL && object->type == kReal) rightValue = (Int4)((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("tlbr-to-rect: Input 4 type not integer! - ",primName,kERROR,environment);
	else rightValue = ((V_Integer) object)->value;
	
	theRect = VPXMALLOC(1,Rect);
	SetRect( theRect, leftValue, topValue, rightValue, bottomValue );
	
	VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, theRect, "Rect", sizeof(Rect), 0 );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_xtwh_2D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_xywh_2D_to_2D_rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	Int4		topValue = 0;
	Int4		leftValue = 0;
	Int4		widthValue = 0;
	Int4		heightValue = 0;
	
    Rect		*theRect = NULL;
	V_ExternalBlock		ptrO = NULL;
	
	Int1		*primName = "xywh-to-rect";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
#endif
	
	object = VPLPrimGetInputObject(0,primitive,environment);
	if( object != NULL && object->type == kReal) topValue = (Int4)((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("xywh-to-rect: Input 1 type not integer! - ",primName,kERROR,environment);
	else topValue = ((V_Integer) object)->value;
	
	object = VPLPrimGetInputObject(1,primitive,environment);
	if( object != NULL && object->type == kReal) leftValue = (Int4)((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("xywh-to-rect: Input 2 type not integer! - ",primName,kERROR,environment);
	else leftValue = ((V_Integer) object)->value;
	
	object = VPLPrimGetInputObject(2,primitive,environment);
	if( object != NULL && object->type == kReal) widthValue = (Int4)((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("xywh-to-rect: Input 3 type not integer! - ",primName,kERROR,environment);
	else widthValue = ((V_Integer) object)->value;
	
	object = VPLPrimGetInputObject(3,primitive,environment);
	if( object != NULL && object->type == kReal) heightValue = (Int4)((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("xywh-to-rect: Input 4 type not integer! - ",primName,kERROR,environment);
	else heightValue = ((V_Integer) object)->value;
	
	theRect = VPXMALLOC(1,Rect);
	SetRect( theRect, leftValue, topValue, leftValue + widthValue, topValue + heightValue );
	
	VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, theRect, "Rect", sizeof(Rect), 0 );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

#pragma mark ***	From Rects			***

Int4 VPLP_rect_2D_to_2D28_tlbr_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_rect_2D_to_2D28_tlbr_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;

    Rect				*theRect = NULL;
	V_Object			block = NULL;

	Int1		*primName = "rect-to-(tlbr)";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &theRect, "Rect", 0, primName, primitive, environment );
	
	ptrA = VPLObjectCreateList( 4, environment );
	
	result = VPLObjectSetListItem( ptrA, int_to_integer(theRect->top,environment), 0, environment );
	result = VPLObjectSetListItem( ptrA, int_to_integer(theRect->left,environment), 1, environment );
	result = VPLObjectSetListItem( ptrA, int_to_integer(theRect->bottom,environment), 2, environment );
	result = VPLObjectSetListItem( ptrA, int_to_integer(theRect->right,environment), 3, environment );

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_rect_2D_to_2D28_xywh_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_rect_2D_to_2D28_xywh_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;
	
    Rect				*theRect = NULL;
	V_Object			block = NULL;
	
	Int1		*primName = "rect-to-(xywh)";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectEBlockPtrCoerce( &theRect, "Rect", 0, primName, primitive, environment );
	
	ptrA = VPLObjectCreateList( 4, environment );
	
	result = VPLObjectSetListItem( ptrA, int_to_integer(theRect->left,environment), 0, environment );
	result = VPLObjectSetListItem( ptrA, int_to_integer(theRect->top,environment), 1, environment );
	result = VPLObjectSetListItem( ptrA, int_to_integer(theRect->right - theRect->left,environment), 2, environment );
	result = VPLObjectSetListItem( ptrA, int_to_integer(theRect->bottom - theRect->top,environment), 3, environment );
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_rect_2D_to_2D_tlbr( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_rect_2D_to_2D_tlbr( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;
	
    Rect				*theRect = NULL;
	V_Object			block = NULL;
	
	Int1		*primName = "rect-to-tlbr";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 4 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectEBlockPtrCoerce( &theRect, "Rect", 0, primName, primitive, environment );
	
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, theRect->top );
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theRect->left );
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 2, primitive, theRect->bottom );
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 3, primitive, theRect->right );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_rect_2D_to_2D_xywh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_rect_2D_to_2D_xywh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_List				ptrA = NULL;
	
    Rect				*theRect = NULL;
	V_Object			block = NULL;
	
	Int1		*primName = "rect-to-xywh";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 4 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	result = VPLPrimGetInputObjectEBlockPtrCoerce( &theRect, "Rect", 0, primName, primitive, environment );
	
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, theRect->left );
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theRect->top );
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 2, primitive, theRect->right - theRect->left );
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 3, primitive, theRect->bottom - theRect->top );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

#pragma mark ***	Legacy Rects		***

Int4 VPLP_list_2D_to_2D_Rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_Rect( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	return	VPLP__28_tlbr_292D_to_2D_rect( environment, trigger, primInArity, primOutArity, primitive );
}

Int4 VPLP_Rect_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_Rect_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	return VPLP_rect_2D_to_2D28_tlbr_29_( environment, trigger, primInArity, primOutArity, primitive );
}

#pragma mark ***	Create RGBColors	***

Int4 VPLP_list_2D_to_2D_color( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_color( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_List		theList = NULL;
	float		redValue = 0.0;
	float		greenValue = 0.0;
	float		blueValue = 0.0;
	float		alphaValue = 0.0;
	
    CGColorRef	theColor = NULL;
	float		ourParts[4] = { 0.0, 0.0, 0.0, 0.0 };
	
	V_ExternalBlock		ptrO = NULL;
	
	Int1		*primName = "list-to-color";
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
	if( theList->listLength < 3) return record_error("list-to-rgbacolor: List not of length 3! - ",primName,kERROR,environment);
	
	object = theList->objectList[0];
	if( object == NULL || object->type != kInteger) return record_error("list-to-rgbacolor: List element 1 type not integer! - ",primName,kERROR,environment);
	redValue = (float)((V_Integer) object)->value;
	
	object = theList->objectList[1];
	if( object == NULL || object->type != kInteger) return record_error("list-to-rgbacolor: List element 2 type not integer! - ",primName,kERROR,environment);
	greenValue = ((V_Integer) object)->value;
	
	object = theList->objectList[2];
	if( object == NULL || object->type != kInteger) return record_error("list-to-rgbacolor: List element 3 type not integer! - ",primName,kERROR,environment);
	blueValue = ((V_Integer) object)->value;
	
	
	object = VPLObjectGetListItem( theList, 0 );
	if( object != NULL && object->type == kReal) redValue = ((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("(xywh)-to-rect: List element 1 type not a number! - ",primName,kERROR,environment);
	else redValue = (float)((V_Integer) object)->value;
	
	object = VPLObjectGetListItem( theList, 1 );
	if( object != NULL && object->type == kReal) greenValue = ((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("(xywh)-to-rect: List element 2 type not a number! - ",primName,kERROR,environment);
	else greenValue = (float)((V_Integer) object)->value;
	
	object = VPLObjectGetListItem( theList, 2 );
	if( object != NULL && object->type == kReal) blueValue = ((V_Real) object)->value;
	else if( object == NULL || object->type != kInteger) return record_error("(xywh)-to-rect: List element 3 type not a number! - ",primName,kERROR,environment);
	else blueValue = (float)((V_Integer) object)->value;

	if( theList->listLength >= 4 ) {
		object = VPLObjectGetListItem( theList, 3 );
		if( object != NULL && object->type == kReal) alphaValue = ((V_Real) object)->value;
		else if( object == NULL || object->type != kInteger) return record_error("(xywh)-to-rect: List element 4 type not a number! - ",primName,kERROR,environment);
		else alphaValue = (float)((V_Integer) object)->value;
	} else {
		alphaValue = 1.0f;
	}
	
	ourParts[0] = redValue;
	ourParts[1] = greenValue;
	ourParts[2] = blueValue;
	ourParts[3] = alphaValue;

	theColor = CGColorCreate( CGColorSpaceCreateDeviceRGB(), ourParts );
	
	result = VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 0, primitive, theColor, "CGColor", sizeof(CGColorRef), 1 );
		
	*trigger = kSuccess;	
	return kNOERROR;
}

#pragma mark ***	Legacy RGBColors	***

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
	if( theList->listLength < 3) return record_error("list-to-Point: List not of length 3! - ",primName,kERROR,environment);

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

#pragma mark ***	Loaders				***

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
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"(vh)-to-point",dictionary,1,1,VPLP__28_vh_292D_to_2D_point)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"(xy)-to-point",dictionary,1,1,VPLP__28_xy_292D_to_2D_point)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"vh-to-point",dictionary,2,1,VPLP_vh_2D_to_2D_point)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"xy-to-point",dictionary,2,1,VPLP_xy_2D_to_2D_point)) == NULL) return kERROR;

			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"point-to-(vh)",dictionary,1,1,VPLP_point_2D_to_2D28_vh_29_)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"point-to-(xy)",dictionary,1,1,VPLP_point_2D_to_2D28_xy_29_)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"point-to-vh",dictionary,1,2,VPLP_point_2D_to_2D_vh)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"point-to-xy",dictionary,1,2,VPLP_point_2D_to_2D_xy)) == NULL) return kERROR;

			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"list-to-Point",dictionary,1,1,VPLP_list_2D_to_2D_Point)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"Point-to-list",dictionary,1,1,VPLP_Point_2D_to_2D_list)) == NULL) return kERROR;


			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"(tlbr)-to-rect",dictionary,1,1,VPLP__28_tlbr_292D_to_2D_rect)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"(xywh)-to-rect",dictionary,1,1,VPLP__28_xywh_292D_to_2D_rect)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"tlbr-to-rect",dictionary,4,1,VPLP_tlbr_2D_to_2D_rect)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"xywh-to-rect",dictionary,4,1,VPLP_xywh_2D_to_2D_rect)) == NULL) return kERROR;

			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rect-to-(tlbr)",dictionary,1,1,VPLP_rect_2D_to_2D28_tlbr_29_)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rect-to-(xywh)",dictionary,1,1,VPLP_rect_2D_to_2D28_xywh_29_)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rect-to-tlbr",dictionary,1,4,VPLP_rect_2D_to_2D_tlbr)) == NULL) return kERROR;
			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rect-to-xywh",dictionary,1,4,VPLP_rect_2D_to_2D_xywh)) == NULL) return kERROR;

			if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"list-to-Rect",dictionary,1,1,VPLP_list_2D_to_2D_Rect)) == NULL) return kERROR;
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


