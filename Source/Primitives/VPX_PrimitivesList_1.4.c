/*
	
	VPL_Primitives.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	


Int4 VPLP_make_2D_list	( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_make_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_List	ptrA = NULL;
	Nat4	length = 0;
	Real10	startValue = 0.0;
	Real10	stepValue = 0.0;
	Nat4	counter = 0;
	bool	isData = true;
	bool	integerList = true;

	V_Object	size = NULL;	
	V_Object	start = NULL;	
	V_Object	step = NULL;	

	Int1	*primName = "make-list";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	switch(primInArity){
		case 3:
			result = VPLPrimCheckInputObjectTypes( 2,primName, primitive, environment, 2, kInteger, kReal );
			if( result != kNOERROR ) return result;
		case 1:
			result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
			if( result != kNOERROR ) return result;
			break;
	}

#endif

	size = VPLPrimGetInputObject(0,primitive,environment);
	length = ((V_Integer) size)->value;
	if(length < 0) return record_error("make-list: Length less than zero",primName,kERROR,environment);

	if(primInArity >= 2) {
		start = VPLPrimGetInputObject(1,primitive,environment);
		if( start == NULL || ( start->type != kInteger && start->type != kReal) ) {
			isData = true;
		} else {
			isData = false;
			if( start->type == kInteger) {
				startValue = ((V_Integer) start)->value;
				integerList = true;
			} else { 
				startValue = ((V_Real) start)->value;
				integerList = false;
			} 
		}
	} else {
		isData = true;
		start = NULL;
	}
		
	if(primInArity == 3) {
		step = VPLPrimGetInputObject(2,primitive,environment);
		if( step->type == kInteger) {
			stepValue = ((V_Integer) step)->value;
		} else {
			stepValue = ((V_Real) step)->value;
			integerList = false;
		}
	} else {
		stepValue = 0;
	}
	
	ptrA = create_list(length,environment); /* Create object, add to heap, set refcount */

	if( isData == false ) {
		for( counter = 0; counter < length; counter++){
			if(integerList == true) {
				*(ptrA->objectList+counter) = (V_Object) int_to_integer(startValue,environment); /* Create object, add to heap, set refcount */
			} else {
				*(ptrA->objectList+counter) = (V_Object) float_to_real(startValue,environment); /* Create object, add to heap, set refcount */
			}
			startValue += stepValue;
		}
	} else {
		for( counter = 0; counter < length; counter++){
			*(ptrA->objectList+counter) = (V_Object) VPLObjectRetain(start,environment); /* Create object, add to heap, set refcount */
		}
	}
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_attach_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_attach_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	Nat4			inarity = primInArity;
	V_Object	block = NULL;
	V_List		newList = NULL;
	V_Object	object = NULL;
	Nat4		length = 0;
	Nat4		counter = 0;

	Int1	*primName = "attach-r";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);

	length = ((V_List) block)->listLength;
	newList = clone_list( 0, 0, (V_List) block, length + inarity - 1,environment);	/* Clone list from 1->N into 1->N */

	for(counter = 1;counter<inarity;counter++){
		object = VPLPrimGetInputObject(counter,primitive,environment);
		increment_count(object);
		*(newList->objectList+length+counter-1) = object; /* Insert object */
	}

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) newList);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_attach_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_attach_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	Nat4			inarity = primInArity;
	V_Object	block = NULL;
	V_List		newList = NULL;
	V_Object	object = NULL;
	Nat4		length = 0;
	Nat4		counter = 0;

	Int1	*primName = "attach-l";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,inarity-1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(inarity-1,primitive,environment);

	length = ((V_List) block)->listLength;
	newList = clone_list( 0, inarity - 1, (V_List) block, length + inarity - 1,environment);	/* Clone list from 1->N into 1->N */

	for(counter = 0;counter<inarity-1;counter++){
		object = VPLPrimGetInputObject(counter,primitive,environment);
		increment_count(object);
		*(newList->objectList+counter) = object; /* Insert object */
	}

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) newList);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_detach_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_detach_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;
	Nat4			outarity = primOutArity;

	V_Object	block = NULL;
	V_List		newList = NULL;
	V_List		oldList = NULL;
	V_Object	object = NULL;
	Int4		length = 0;
	Nat4		counter = 0;

	Int1	*primName = "detach-r";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);

	oldList = (V_List) block;
	length = oldList->listLength - outarity + 1;
	if(length < 0) return record_error("detach-r: Empty list!",primName,kERROR,environment);
	newList = clone_list( 0, 0, oldList, length,environment);	/* Clone list from 1->N-1 into 1->N-1 */
	
	outputObject = (V_Object) newList;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
	
	for(counter = 1;counter<outarity;counter++){
		object = oldList->objectList[length + counter - 1];
		increment_count(object);
		VPLPrimSetOutputObject(environment,primInArity,counter,primitive,(V_Object) object);
	}

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_detach_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_detach_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;
	Nat4			outarity = primOutArity;

	V_Object	block = NULL;
	V_List		newList = NULL;
	V_List		oldList = NULL;
	V_Object	object = NULL;
	Int4		length = 0;
	Nat4		counter = 0;

	Int1	*primName = "detach-l";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);

	oldList = (V_List) block;
	length = oldList->listLength - outarity + 1;
	if(length < 0) return record_error("detach-r: Empty list!",primName,kERROR,environment);
	newList = clone_list( outarity - 1, 0, oldList, length,environment);	/* Clone list from 1->N-1 into 1->N-1 */
	
	outputObject = (V_Object) newList;
	VPLPrimSetOutputObject(environment,primInArity,outarity-1,primitive,(V_Object) outputObject);
	
	for(counter = 0;counter<outarity-1;counter++){
		object = oldList->objectList[counter];
		increment_count(object);
		VPLPrimSetOutputObject(environment,primInArity,counter,primitive,(V_Object) object);
	}

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_unpack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_unpack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	ptrA = NULL;
	V_List		theList = NULL;
	Nat4		counter = 0;
	V_Object	object = NULL;

	Int1	*primName = "unpack";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);
	theList = (V_List) ptrA;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, theList->listLength );
	if( result != kNOERROR ) return result;

#endif

	for(counter = 0;counter<primOutArity;counter++){
		object = theList->objectList[counter];
		increment_count(object);
		VPLPrimSetOutputObject(environment,primInArity,counter,primitive,object);
	}
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_pack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_pack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_List		theList = NULL;
	Nat4		counter = 0;
	V_Object	object = NULL;

	Int1	*primName = "pack";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	theList = create_list(primInArity,environment); /* Create object, add to heap, set refcount */

	for(counter = 0;counter<primInArity;counter++){
		object = VPLPrimGetInputObject(counter,primitive,environment);
		increment_count(object);
		*(theList->objectList+counter) = object; /* Insert object */
	}
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) theList);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__28_length_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__28_length_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_List		theList = NULL;
	V_Object	object = NULL;

	V_Integer	outputInt = 0;	
	Int1	*primName = "(length)";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	theList = (V_List) object;
	
	outputInt = int_to_integer(theList->listLength,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_get_2D_nth	( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;

	V_Object	ptrA = NULL;
	V_List		theList = NULL;
	V_Object	object = NULL;
	Int4		theIndex = 0;

	Int1	*primName = "get-nth";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);
	theList = (V_List) ptrA;

	ptrA = VPLPrimGetInputObject(1,primitive,environment);
	theIndex = ((V_Integer) ptrA)->value;

	if( theIndex > theList->listLength) return record_error("get-nth: Index greater than list length!",NULL,kERROR,environment);
	if( theIndex < 1) return record_error("get-nth: Index less than 1!",NULL,kERROR,environment);


	object = theList->objectList[theIndex-1];
	increment_count(object);
	outputObject = (V_Object) object;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__28_join_29_	( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__28_join_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	ptrA = NULL;
	V_Object	ptrB = NULL;
	V_List		newList = NULL;
	V_List		tempList = NULL;
	Nat4		arity = 0;

	Int1	*primName = "(join)";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(arity = 0;arity<primInArity;arity++){
		result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	if(primInArity == 0){
		newList = create_list(0,environment);
	} else if (primInArity == 1){
		ptrA = VPLPrimGetInputObject(0,primitive,environment);
		newList = (V_List) ptrA;
		increment_count((V_Object) newList);
	} else {
		ptrA = VPLPrimGetInputObject(0,primitive,environment);
		tempList = clone_list( 0, 0, (V_List) ptrA,((V_List) ptrA)->listLength,environment);	/* Clone list from 1->N into 1->N */
		for(arity = 1;arity<primInArity;arity++){
			ptrB = VPLPrimGetInputObject(arity,primitive,environment);

			newList = join_list(environment,tempList,(V_List)ptrB);	/* Clone list from 1->N into 1->N */
			decrement_count(environment,(V_Object) tempList);
			tempList = newList;
		}
	}
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) newList);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_reverse		( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_reverse( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;

	V_List		theList = NULL;
	V_List		reverseList = NULL;
	Nat4		counter = 0;
	V_Object	object = NULL;

	Int1	*primName = "reverse";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	theList = (V_List) object;
	
	reverseList = create_list( theList->listLength , environment); /* Create object, add to heap, set refcount */
	
	if(reverseList == NULL) return kNOERROR;
	for( counter = 0; counter < theList->listLength; counter++){
		put_nth(environment,reverseList,theList->listLength-counter, *(theList->objectList+counter)); /* Insert and increment refcount */
	}

	outputObject = (V_Object) reverseList;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_split_2D_nth	( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_split_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;

	V_Object	ptrA = NULL;
	V_Object	ptrB = NULL;
	V_List		newList = NULL;
	V_List		leftList = NULL;
	Int4	length = 0;

	Int1	*primName = "split-nth";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);

	ptrB = VPLPrimGetInputObject(1,primitive,environment);

	length = ((V_Integer) ptrB)->value;
	if(length < 0) return record_error("split-nth: Negative split!",NULL,kERROR,environment);
	
	if(length < ((V_List) ptrA)->listLength) {
	
		leftList = clone_list( 0, 0, (V_List) ptrA, length,environment);
		/* Clone list from 1->Length into 1->Length */
	
		newList = clone_list( length, 0, (V_List) ptrA, ((V_List) ptrA)->listLength - length,environment);
		/* Clone list from (Length+1)->N into 1->N-Length */
	
	} else {

		leftList = clone_list( 0, 0, (V_List) ptrA, ((V_List) ptrA)->listLength ,environment);
		/* Clone list from 1->Length into 1->Length */
	
		newList = create_list(0,environment); /* Create object, add to heap, set refcount */
		/* Empty list */
	
	}
	
	
	outputObject = (V_Object) leftList;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	outputObject = (V_Object) newList;
	VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__28_in_29_	( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__28_in_29_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	ptrA = NULL;
	V_Object	ptrB = NULL;
	V_List		newList = NULL;
	Int4	counter = 0;
	Int4	length = 0;
	Bool	found = kFALSE;
	V_Object		inputObject = NULL;
	Int4			integerResult = 1;

	V_Integer	outputInt = 0;	
	Int1	*primName = "(in)";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if(primInArity == 3){
		result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);
	newList = (V_List) ptrA;
	length = newList->listLength;

	ptrB = VPLPrimGetInputObject(1,primitive,environment);
	
	if(primInArity == 3) {
		inputObject = VPLPrimGetInputObject(2,primitive,environment);
		integerResult *= ((V_Integer) inputObject)->value;
		if(integerResult > 0) counter = integerResult - 1;
	}
	
	while(counter < length){
		if( kTRUE == object_identity(ptrB,newList->objectList[counter++]) ){
			found = kTRUE;
			break;
		}
	}
	if(found == kFALSE) counter = 0;

	outputInt = int_to_integer(counter,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 boolean_compare_sort( V_Boolean objectA , V_Boolean objectB );
Int4 boolean_compare_sort( V_Boolean objectA , V_Boolean objectB )
{
	if(objectA->value == objectB->value) return kTRUE;

	return kFALSE;
}

Int4 integer_compare_sort( V_Integer objectA , V_Integer objectB );
Int4 integer_compare_sort( V_Integer objectA , V_Integer objectB )
{
	if(objectA->value < objectB->value) return -1;
	else if(objectA->value == objectB->value) return 0;
	else return 1;

	return kFALSE;
}

Int4 real_compare_sort( V_Real objectA , V_Real objectB );
Int4 real_compare_sort( V_Real objectA , V_Real objectB )
{
	if(objectA->value < objectB->value) return -1;
	else if(objectA->value == objectB->value) return 0;
	else return 1;

	return kFALSE;
}

Int4 string_compare_sort( V_String stringA , V_String stringB );
Int4 string_compare_sort( V_String stringA , V_String stringB )
{
	return strcmp(stringA->string,stringB->string);
}

Int4 list_compare_sort( V_List listA , V_List listB );
Int4 list_compare_sort( V_List listA , V_List listB )
{
	if(listA->listLength < listB->listLength) return -1;
	else if(listA->listLength == listB->listLength) return 0;
	else return 1;
}

Int4 object_compare_sort( V_Object objectA , V_Object objectB, Int1 *attribute, V_Environment environment );

Int4 instance_compare_sort( V_Instance instanceA , V_Instance instanceB, Int1 *attribute, V_Environment environment);
Int4 instance_compare_sort( V_Instance instanceA , V_Instance instanceB, Int1 *attribute, V_Environment environment)
{
	V_Object	objectA = NULL;
	V_Object	objectB = NULL;
	V_Class		tempClass = NULL;
	Int4		index = 0;
	
	
	if(attribute != NULL && environment != NULL){
		tempClass = get_class(environment->classTable,instanceA->name);
		index = attribute_offset(tempClass,attribute);
		if(index == -1){
			if(instanceA < instanceB) return -1;
			else if(instanceA == instanceB) return 0;
			else return 1;
		}
		objectA = instanceA->objectList[index];
		tempClass = get_class(environment->classTable,instanceB->name);
		index = attribute_offset(tempClass,attribute);
		if(index == -1){
			if(instanceA < instanceB) return -1;
			else if(instanceA == instanceB) return 0;
			else return 1;
		}
		objectB = instanceB->objectList[index];
		return object_compare_sort(objectA,objectB,NULL,NULL);
	}else{
		if(instanceA < instanceB) return -1;
		else if(instanceA == instanceB) return 0;
		else return 1;
	}
}

Int4 external_compare_sort( V_ExternalBlock objectA , V_ExternalBlock objectB );
Int4 external_compare_sort( V_ExternalBlock objectA , V_ExternalBlock objectB )
{
	if(objectA < objectB) return -1;
	else if(objectA == objectB) return 0;
	else return 1;
}

Int4 object_compare_sort( V_Object objectA , V_Object objectB, Int1 *attribute, V_Environment environment )
{
	if(objectA == NULL){
		if(objectB == NULL) return 0;
		else return -1;
	}
	if(objectB == NULL) return 1;

	switch(objectA->type){
		case kObject:
			return kFALSE;
		case kUndefined:
			if(objectB->type == kUndefined) return 0;
			else return 1;
		case kNone:
			if(objectB->type < kNone) return 1;
			else if(objectB->type == kNone) return 0;
			else return -1;
		case kBoolean:
			if(objectB->type < kBoolean) return 1;
			else if(objectB->type == kBoolean) return boolean_compare_sort((V_Boolean) objectA,(V_Boolean) objectB);
			else return -1;

// Integers and Reals can be compared in value	
		case kInteger:
			if(objectB->type < kInteger) return 1;
			else if(objectB->type == kInteger) return integer_compare_sort((V_Integer) objectA,(V_Integer) objectB);
			else if(objectB->type == kReal) {
				if(((V_Integer) objectA)->value < ((V_Real) objectB)->value) return -1;
				else if(((V_Integer) objectA)->value == ((V_Real) objectB)->value) return 0;
				else return 1;
			}
			else return -1;
			
		case kReal:
			if(objectB->type < kInteger) return 1;
			else if(objectB->type == kReal) return real_compare_sort((V_Real) objectA,(V_Real) objectB);
			else if(objectB->type == kInteger) {
				if(((V_Real) objectA)->value < ((V_Integer) objectB)->value) return -1;
				else if(((V_Real) objectA)->value == ((V_Integer) objectB)->value) return 0;
				else return 1;
			}
			else return -1;
			
		case kString:
			if(objectB->type < kString) return 1;
			else if(objectB->type == kString) return string_compare_sort((V_String) objectA,(V_String) objectB);
			else return -1;
		case kList:
			if(objectB->type < kList) return 1;
			else if(objectB->type == kList) return list_compare_sort((V_List) objectA,(V_List) objectB);
			else return -1;
		case kInstance:
			if(objectB->type < kInstance) return 1;
			else if(objectB->type == kInstance) return instance_compare_sort((V_Instance) objectA,(V_Instance) objectB,attribute,environment);
			else return -1;
		case kExternalBlock:
			if(objectB->type < kExternalBlock) return 1;
			else if(objectB->type == kExternalBlock) return external_compare_sort((V_ExternalBlock) objectA,(V_ExternalBlock) objectB);
			else return -1;
	}

	return kFALSE;
}

void vpl_sort(V_Object list[],unsigned long length,Int1 *attribute,V_Environment environment);
void vpl_sort(V_Object list[],unsigned long length,Int1 *attribute,V_Environment environment)
{
	unsigned long i = 0;
	unsigned long j = 0;
	
	V_Object	pivot = NULL;
	V_Object	temp = NULL;
	
	if(length <= 1) return;
	
	pivot = list[0];
	i = 1;
	j = length;
	
	for(;;){
		while(object_compare_sort(list[i],pivot,attribute,environment) < 0 && ++i < length) {}
		while(object_compare_sort(list[--j],pivot,attribute,environment) > 0) {}
		if(i >= j) break;
		temp = list[i];
		list[i] = list[j];
		list[j] = temp;
	}
	temp = list[i-1];
	list[i-1] = list[0];
	list[0] = temp;
	
	vpl_sort(list,i-1,attribute,environment);
	vpl_sort(list+i,length-i,attribute,environment);
}

Int4 VPLP_sort( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_sort( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	block = NULL;
	V_List		inputList = NULL;
	V_List		newList = NULL;
	V_List		tempList = NULL;
	Nat4		length = 0;
	Int1		*attribute = NULL;
	Bool		sieve = FALSE;
	Nat4		counter = 0;
	Nat4		index = 0;
	V_Object	currentObject = NULL;
	V_Object	tempObject = NULL;

	Int1	*primName = "sort";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	switch(primInArity){
		case 4:
			result = VPLPrimCheckInputObjectType( kBoolean,3, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		case 3:
			result = VPLPrimCheckInputObjectType( kString,2, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		case 2:
			result = VPLPrimCheckInputObjectType( kBoolean,1, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		case 1:
			result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
			if( result != kNOERROR ) return result;
			break;
	}

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	inputList = (V_List) block;
	
	if(primInArity > 1){
		block = VPLPrimGetInputObject(1,primitive,environment);
		sieve = ((V_Boolean) block)->value;
	}

	if(primInArity > 2){
		block = VPLPrimGetInputObject(2,primitive,environment);
		attribute = ((V_String) block)->string;
	}

	length = inputList->listLength;
	tempList = clone_list( 0, 0, inputList, length,environment);

	if(length != 0 && length != 1) vpl_sort(tempList->objectList,length,attribute,environment);
	
	if(sieve == kFALSE) newList = tempList;
	else{
		for(counter = 0;counter<length;counter++){
			currentObject = *(tempList->objectList+counter);
			*(tempList->objectList+counter) = NULL;
			if(object_identity(tempObject,currentObject) == kFALSE){
				*(tempList->objectList+index++) = currentObject;
				tempObject = currentObject;
			} else decrement_count(environment,currentObject);
		}
		newList = clone_list( 0, 0, tempList, index,environment);
		decrement_count(environment,(V_Object) tempList);
	}

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) newList);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_detach_2D_nth	( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_detach_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;

	V_Object	ptrA = NULL;
	V_List		newList = NULL;
	V_List		theList = NULL;
	Int4		length = 0;
	V_Object	object = NULL;
	Nat4 		fromCounter = 0;
	Nat4 		toCounter = 0;
	Int4		theIndex = 0;

	Int1	*primName = "detach-nth";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);
	theList = (V_List) ptrA;
	length = theList->listLength - 1;

	ptrA = VPLPrimGetInputObject(1,primitive,environment);
	theIndex = ((V_Integer) ptrA)->value;
	if( theIndex > theList->listLength) return record_error("detach-nth: Index greater than list length!",NULL,kERROR,environment);
	if( theIndex < 1) return record_error("detach-nth: Index less than 1!",NULL,kERROR,environment);
	
	newList = create_list( length , environment); /* Create object, add to heap, set refcount */
	
	if(newList == NULL){
		record_error("detach-nth: Failure to create new list!",NULL,kERROR,environment);
		return kERROR;
	}

	fromCounter = 0;
	for( toCounter = 0; toCounter < length ; toCounter++ ){
		if(fromCounter == theIndex - 1) fromCounter++;
		put_nth(environment,newList,toCounter+1, *(theList->objectList+fromCounter++)); /* Insert and increment refcount */
	}
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) newList);

	object = theList->objectList[theIndex-1];
	increment_count(object);
	outputObject = (V_Object) object;
	VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);

	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_insert_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_insert_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	ptrA = NULL;
	V_List		newList = NULL;
	V_List		theList = NULL;
	Int4		length = 0;
	V_Object	object = NULL;
	Nat4 		fromCounter = 0;
	Nat4 		toCounter = 0;
	Int4		theIndex = 0;

	Int1	*primName = "insert-nth";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);
	theList = (V_List) ptrA;
	length = theList->listLength + 1;

	object = VPLPrimGetInputObject(1,primitive,environment);

	ptrA = VPLPrimGetInputObject(2,primitive,environment);
	theIndex = ((V_Integer) ptrA)->value;
	if( theIndex > length) return record_error("insert-nth: Index greater than list length + 1!",NULL,kERROR,environment);
	if( theIndex < 1) return record_error("insert-nth: Index less than 1!",NULL,kERROR,environment);
	
	newList = create_list( length , environment); /* Create object, add to heap, set refcount */
	
	if(newList == NULL){
		record_error("insert-nth: Failure to create new list!",NULL,kERROR,environment);
		return kWRONGINPUTTYPE;
	}

	fromCounter = 0;
	for( toCounter = 0; toCounter < length ; toCounter++ ){
		if(toCounter == theIndex - 1) {;
			put_nth(environment,newList,toCounter+1, object); /* Insert and increment refcount */
		}else{
			put_nth(environment,newList,toCounter+1, *(theList->objectList+fromCounter++)); /* Insert and increment refcount */
		}
	}
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) newList);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_set_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_nth( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	ptrA = NULL;
	V_List		newList = NULL;
	V_List		theList = NULL;
	Int4		length = 0;
	V_Object	object = NULL;
	Nat4 		fromCounter = 0;
	Nat4 		toCounter = 0;
	Int4		theIndex = 0;

	Int1	*primName = "set-nth";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);
	theList = (V_List) ptrA;
	length = theList->listLength;

	object = VPLPrimGetInputObject(1,primitive,environment);

	ptrA = VPLPrimGetInputObject(2,primitive,environment);

	theIndex = ((V_Integer) ptrA)->value;
	if( theIndex > length) return record_error("set-nth: Index greater than list length + 1!",NULL,kERROR,environment);
	if( theIndex < 1) return record_error("set-nth: Index less than 1!",NULL,kERROR,environment);
	
	newList = create_list( length , environment); /* Create object, add to heap, set refcount */
	
	if(newList == NULL){
		record_error("set-nth: Failure to create new list!",NULL,kERROR,environment);
		return kWRONGINPUTTYPE;
	}

	fromCounter = 0;
	for( toCounter = 0; toCounter < length ; toCounter++ ){
		if(toCounter == theIndex - 1) {;
			put_nth(environment,newList,toCounter+1, object); /* Insert and increment refcount */
			fromCounter++;
		}else{
			put_nth(environment,newList,toCounter+1, *(theList->objectList+fromCounter++)); /* Insert and increment refcount */
		}
	}
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) newList);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_set_2D_nth_21_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_nth_21_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	ptrA = NULL;
	V_List		theList = NULL;
	Int4		length = 0;
	V_Object	object = NULL;
	Int4		theIndex = 0;

	Int1	*primName = "set-nth!";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);
	theList = (V_List) ptrA;
	length = theList->listLength;

	object = VPLPrimGetInputObject(1,primitive,environment);

	ptrA = VPLPrimGetInputObject(2,primitive,environment);
	theIndex = ((V_Integer) ptrA)->value;
	if( theIndex > length) return record_error("set-nth!: Index greater than list length!",NULL,kERROR,environment);
	if( theIndex < 1) return record_error("set-nth!: Index less than 1!",NULL,kERROR,environment);
	
	put_nth(environment,theList, theIndex, object ); // set and increment refcount 
	
	increment_count( (V_Object)theList );
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) theList);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_find_2D_instance( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_find_2D_instance( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;

	V_Object	block = NULL;
	V_List		inputList = NULL;
	Nat4		length = 0;
	Int1		*attribute = NULL;
	V_Object	checkValue = NULL;
	Nat4		startOffset = 0;
	Nat4		counter = 0;
	V_Object	currentObject = NULL;
	V_Object	tempObject = NULL;
	Bool		wasFound = kFALSE;

	V_Integer	outputInt = 0;	
	Int1	*primName = "find-instance";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if(primInArity > 3){													// Optional fourth input to specify a start index.
		result = VPLPrimCheckInputObjectType( kInteger,3, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	inputList = (V_List) block;
	length = inputList->listLength;	

	block = VPLPrimGetInputObject(1,primitive,environment);
	attribute = ((V_String) block)->string;

	checkValue = VPLPrimGetInputObject(2,primitive,environment);

	if(primInArity > 3){													// Optional fourth input to specify a start index.
		block = VPLPrimGetInputObject(3,primitive,environment);
		startOffset = ((V_Integer) block)->value;
		if(startOffset > 0) startOffset--;
		else startOffset = 0;
	}

	for(counter = startOffset; counter<length; counter++){				// Check attributes of instances for a matching value.
		currentObject = *(inputList->objectList+counter);
		if( VPLObjectGetType(currentObject) != kInstance ) return record_error("find-instance: Input 1 not instance in list!",NULL,kWRONGINPUTTYPE,environment);
		if( VPLObjectGetInstanceAttribute( &tempObject, attribute, currentObject, environment ) == kNOERROR){
			wasFound = object_identity(checkValue,tempObject);
			decrement_count(environment,tempObject);
		}
		if( wasFound == kTRUE ) break;
	}

	if( wasFound == kFALSE ) {
		counter = 0;
		currentObject = NULL;
	} else counter++;

	outputInt = int_to_integer(counter,environment);			// Returns found index and instance or
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	outputObject = (V_Object) VPLObjectRetain(currentObject,environment);
	VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_find_2D_sorted( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_find_2D_sorted( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;

	V_Object	block = NULL;
	V_List		inputList = NULL;
	Nat4		length = 0;
	Int1		*attribute = NULL;
	V_Object	checkValue = NULL;
	Nat4		counter = 0;
	V_Object	currentObject = NULL;
	V_Object	tempObject = NULL;
	Bool		wasFound = kFALSE;

	Int1	*primName = "find-sorted";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if(primInArity > 2){													// Optional third input to specify an attribute name.
		result = VPLPrimCheckInputObjectType( kString,2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	inputList = (V_List) block;
	length = inputList->listLength;
	
	checkValue = VPLPrimGetInputObject(1,primitive,environment);

	if(primInArity > 2 ) {													// Optional third input to specify an attribute name for an instance list.
		block = VPLPrimGetInputObject(2,primitive,environment);
		attribute = ((V_String) block)->string;
	}

	for(counter = 0; counter<length; counter++){							// Search sorted list for match.  Probably a faster way to do this!
		currentObject = *(inputList->objectList+counter);
		if( attribute != NULL ) {
			if( VPLObjectGetType(currentObject) != kInstance ) return record_error("find-sorted: Input 1 not instance in list!",NULL,kWRONGINPUTTYPE,environment);
			if( VPLObjectGetInstanceAttribute(&tempObject, attribute, currentObject, environment) == kNOERROR){
				wasFound = object_identity(checkValue,tempObject);
				decrement_count(environment,tempObject);
			}
		} else {
			wasFound = object_identity(checkValue,currentObject);
		}
		if( wasFound == kTRUE ) break;
	}

	if( wasFound == kFALSE ) {
		counter = 0;
		currentObject = NULL;
	} else counter++;

	outputObject = (V_Object) bool_to_boolean(wasFound,environment);	// Returns TRUE and integer index for found
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	outputObject = (V_Object) int_to_integer(counter,environment);
	VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Nat4	loadConstants_VPX_PrimitivesList(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesList(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesList(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesList(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesList(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesList(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesList(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesList(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"make-list",dictionary,1,1,VPLP_make_2D_list)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"attach-r",dictionary,2,1,VPLP_attach_2D_r)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"attach-l",dictionary,2,1,VPLP_attach_2D_l)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"detach-r",dictionary,1,2,VPLP_detach_2D_r)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"detach-l",dictionary,1,2,VPLP_detach_2D_l)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"unpack",dictionary,1,1,VPLP_unpack)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"pack",dictionary,1,1,VPLP_pack)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"(length)",dictionary,1,1,VPLP__28_length_29_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-nth",dictionary,2,1,VPLP_get_2D_nth)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"(join)",dictionary,2,1,VPLP__28_join_29_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"reverse",dictionary,1,1,VPLP_reverse)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"split-nth",dictionary,2,2,VPLP_split_2D_nth)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"(in)",dictionary,2,1,VPLP__28_in_29_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"sort",dictionary,1,1,VPLP_sort)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"detach-nth",dictionary,2,2,VPLP_detach_2D_nth)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"insert-nth",dictionary,3,1,VPLP_insert_2D_nth)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-nth",dictionary,3,1,VPLP_set_2D_nth)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-nth!",dictionary,3,1,VPLP_set_2D_nth_21_)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"find-instance",dictionary,3,2,VPLP_find_2D_instance)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"find-sorted",dictionary,2,2,VPLP_find_2D_sorted)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesList(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesList(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesList(environment,bundleID);
		result = loadStructures_VPX_PrimitivesList(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesList(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesList(environment,bundleID);
		
		return result;
}
