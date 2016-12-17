/*
	
	MacOSX_OJBC.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/

#include <stdlib.h>
#include <string.h>
#include "ObjcStandard.h"

#pragma mark --------------- Constants ---------------

	VPL_ExtConstant _OBJC_SYNC_NOT_INITIALIZED_C = {"OBJC_SYNC_NOT_INITIALIZED",OBJC_SYNC_NOT_INITIALIZED,NULL};
	VPL_ExtConstant _OBJC_SYNC_TIMED_OUT_C = {"OBJC_SYNC_TIMED_OUT",OBJC_SYNC_TIMED_OUT,NULL};
	VPL_ExtConstant _OBJC_SYNC_NOT_OWNING_THREAD_ERROR_C = {"OBJC_SYNC_NOT_OWNING_THREAD_ERROR",OBJC_SYNC_NOT_OWNING_THREAD_ERROR,NULL};
	VPL_ExtConstant _OBJC_SYNC_SUCCESS_C = {"OBJC_SYNC_SUCCESS",OBJC_SYNC_SUCCESS,NULL};

#pragma mark --------------- Structures ---------------

	VPL_ExtField _VPXStruct_objc_super_2 = { "class",offsetof(struct objc_super,class),sizeof(void *),kPointerType,"objc_class",1,40,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_super_1 = { "receiver",offsetof(struct objc_super,receiver),sizeof(void *),kPointerType,"objc_object",1,4,"T*",&_VPXStruct_objc_super_2};
	VPL_ExtStructure _VPXStruct_objc_super_S = {"objc_super",&_VPXStruct_objc_super_1,sizeof(struct objc_super)};

	VPL_ExtField _VPXStruct_objc_module_4 = { "symtab",offsetof(struct objc_module,symtab),sizeof(void *),kPointerType,"objc_symtab",1,16,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_module_3 = { "name",offsetof(struct objc_module,name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_module_4};
	VPL_ExtField _VPXStruct_objc_module_2 = { "size",offsetof(struct objc_module,size),sizeof(unsigned long),kUnsignedType,"char",1,1,"unsigned long",&_VPXStruct_objc_module_3};
	VPL_ExtField _VPXStruct_objc_module_1 = { "version",offsetof(struct objc_module,version),sizeof(unsigned long),kUnsignedType,"char",1,1,"unsigned long",&_VPXStruct_objc_module_2};
	VPL_ExtStructure _VPXStruct_objc_module_S = {"objc_module",&_VPXStruct_objc_module_1,sizeof(struct objc_module)};

	VPL_ExtField _VPXStruct_objc_symtab_5 = { "defs",offsetof(struct objc_symtab,defs),sizeof(void *[1]),kPointerType,"void",1,0,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_symtab_4 = { "cat_def_cnt",offsetof(struct objc_symtab,cat_def_cnt),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_objc_symtab_5};
	VPL_ExtField _VPXStruct_objc_symtab_3 = { "cls_def_cnt",offsetof(struct objc_symtab,cls_def_cnt),sizeof(unsigned short),kUnsignedType,"void",1,0,"unsigned short",&_VPXStruct_objc_symtab_4};
	VPL_ExtField _VPXStruct_objc_symtab_2 = { "refs",offsetof(struct objc_symtab,refs),sizeof(void *),kPointerType,"objc_selector",2,0,"T*",&_VPXStruct_objc_symtab_3};
	VPL_ExtField _VPXStruct_objc_symtab_1 = { "sel_ref_cnt",offsetof(struct objc_symtab,sel_ref_cnt),sizeof(unsigned long),kUnsignedType,"objc_selector",2,0,"unsigned long",&_VPXStruct_objc_symtab_2};
	VPL_ExtStructure _VPXStruct_objc_symtab_S = {"objc_symtab",&_VPXStruct_objc_symtab_1,sizeof(struct objc_symtab)};

/*	VPL_ExtStructure _VPXStruct_mach_port_qos_S = {"mach_port_qos",NULL,sizeof(struct mach_port_qos)};

	VPL_ExtField _VPXStruct_mach_port_limits_1 = { "mpl_qlimit",offsetof(struct mach_port_limits,mpl_qlimit),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtStructure _VPXStruct_mach_port_limits_S = {"mach_port_limits",&_VPXStruct_mach_port_limits_1,sizeof(struct mach_port_limits)};

	VPL_ExtField _VPXStruct_mach_port_status_10 = { "mps_flags",offsetof(struct mach_port_status,mps_flags),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_mach_port_status_9 = { "mps_nsrequest",offsetof(struct mach_port_status,mps_nsrequest),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_mach_port_status_10};
	VPL_ExtField _VPXStruct_mach_port_status_8 = { "mps_pdrequest",offsetof(struct mach_port_status,mps_pdrequest),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_mach_port_status_9};
	VPL_ExtField _VPXStruct_mach_port_status_7 = { "mps_srights",offsetof(struct mach_port_status,mps_srights),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_mach_port_status_8};
	VPL_ExtField _VPXStruct_mach_port_status_6 = { "mps_sorights",offsetof(struct mach_port_status,mps_sorights),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_port_status_7};
	VPL_ExtField _VPXStruct_mach_port_status_5 = { "mps_msgcount",offsetof(struct mach_port_status,mps_msgcount),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_port_status_6};
	VPL_ExtField _VPXStruct_mach_port_status_4 = { "mps_qlimit",offsetof(struct mach_port_status,mps_qlimit),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_port_status_5};
	VPL_ExtField _VPXStruct_mach_port_status_3 = { "mps_mscount",offsetof(struct mach_port_status,mps_mscount),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_port_status_4};
	VPL_ExtField _VPXStruct_mach_port_status_2 = { "mps_seqno",offsetof(struct mach_port_status,mps_seqno),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_port_status_3};
	VPL_ExtField _VPXStruct_mach_port_status_1 = { "mps_pset",offsetof(struct mach_port_status,mps_pset),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_mach_port_status_2};
	VPL_ExtStructure _VPXStruct_mach_port_status_S = {"mach_port_status",&_VPXStruct_mach_port_status_1,sizeof(struct mach_port_status)};
*/
	VPL_ExtField _VPXStruct_objc_ivar_3 = { "ivar_offset",offsetof(struct objc_ivar,ivar_offset),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_objc_ivar_2 = { "ivar_type",offsetof(struct objc_ivar,ivar_type),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_ivar_3};
	VPL_ExtField _VPXStruct_objc_ivar_1 = { "ivar_name",offsetof(struct objc_ivar,ivar_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_ivar_2};
	VPL_ExtStructure _VPXStruct_objc_ivar_S = {"objc_ivar",&_VPXStruct_objc_ivar_1,sizeof(struct objc_ivar)};

	VPL_ExtField _VPXStruct_objc_category_5 = { "protocols",offsetof(struct objc_category,protocols),sizeof(void *),kPointerType,"objc_protocol_list",1,12,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_category_4 = { "class_methods",offsetof(struct objc_category,class_methods),sizeof(void *),kPointerType,"objc_method_list",1,20,"T*",&_VPXStruct_objc_category_5};
	VPL_ExtField _VPXStruct_objc_category_3 = { "instance_methods",offsetof(struct objc_category,instance_methods),sizeof(void *),kPointerType,"objc_method_list",1,20,"T*",&_VPXStruct_objc_category_4};
	VPL_ExtField _VPXStruct_objc_category_2 = { "class_name",offsetof(struct objc_category,class_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_category_3};
	VPL_ExtField _VPXStruct_objc_category_1 = { "category_name",offsetof(struct objc_category,category_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_category_2};
	VPL_ExtStructure _VPXStruct_objc_category_S = {"objc_category",&_VPXStruct_objc_category_1,sizeof(struct objc_category)};

	VPL_ExtField _VPXStruct_objc_protocol_list_3 = { "list",offsetof(struct objc_protocol_list,list),sizeof(void *[1]),kPointerType,"objc_class",2,40,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_protocol_list_2 = { "count",offsetof(struct objc_protocol_list,count),sizeof(int),kIntType,"objc_class",2,40,"int",&_VPXStruct_objc_protocol_list_3};
	VPL_ExtField _VPXStruct_objc_protocol_list_1 = { "next",offsetof(struct objc_protocol_list,next),sizeof(void *),kPointerType,"objc_protocol_list",1,12,"T*",&_VPXStruct_objc_protocol_list_2};
	VPL_ExtStructure _VPXStruct_objc_protocol_list_S = {"objc_protocol_list",&_VPXStruct_objc_protocol_list_1,sizeof(struct objc_protocol_list)};

	VPL_ExtField _VPXStruct_objc_cache_3 = { "buckets",offsetof(struct objc_cache,buckets),sizeof(void *[1]),kPointerType,"objc_method",1,12,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_cache_2 = { "occupied",offsetof(struct objc_cache,occupied),sizeof(unsigned int),kUnsignedType,"objc_method",1,12,"unsigned int",&_VPXStruct_objc_cache_3};
	VPL_ExtField _VPXStruct_objc_cache_1 = { "mask",offsetof(struct objc_cache,mask),sizeof(unsigned int),kUnsignedType,"objc_method",1,12,"unsigned int",&_VPXStruct_objc_cache_2};
	VPL_ExtStructure _VPXStruct_objc_cache_S = {"objc_cache",&_VPXStruct_objc_cache_1,sizeof(struct objc_cache)};

	VPL_ExtField _VPXStruct_objc_ivar_list_2 = { "ivar_list",offsetof(struct objc_ivar_list,ivar_list),sizeof(struct objc_ivar[1]),kPointerType,"objc_ivar",0,12,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_ivar_list_1 = { "ivar_count",offsetof(struct objc_ivar_list,ivar_count),sizeof(int),kIntType,"objc_ivar",0,12,"int",&_VPXStruct_objc_ivar_list_2};
	VPL_ExtStructure _VPXStruct_objc_ivar_list_S = {"objc_ivar_list",&_VPXStruct_objc_ivar_list_1,sizeof(struct objc_ivar_list)};

	VPL_ExtField _VPXStruct_objc_method_list_3 = { "method_list",offsetof(struct objc_method_list,method_list),sizeof(struct objc_method[1]),kPointerType,"objc_method",0,12,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_method_list_2 = { "method_count",offsetof(struct objc_method_list,method_count),sizeof(int),kIntType,"objc_method",0,12,"int",&_VPXStruct_objc_method_list_3};
	VPL_ExtField _VPXStruct_objc_method_list_1 = { "obsolete",offsetof(struct objc_method_list,obsolete),sizeof(void *),kPointerType,"objc_method_list",1,20,"T*",&_VPXStruct_objc_method_list_2};
	VPL_ExtStructure _VPXStruct_objc_method_list_S = {"objc_method_list",&_VPXStruct_objc_method_list_1,sizeof(struct objc_method_list)};

	VPL_ExtField _VPXStruct_objc_method_3 = { "method_imp",offsetof(struct objc_method,method_imp),sizeof(void *),kPointerType,"objc_object",2,4,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_method_2 = { "method_types",offsetof(struct objc_method,method_types),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_method_3};
	VPL_ExtField _VPXStruct_objc_method_1 = { "method_name",offsetof(struct objc_method,method_name),sizeof(void *),kPointerType,"objc_selector",1,0,"T*",&_VPXStruct_objc_method_2};
	VPL_ExtStructure _VPXStruct_objc_method_S = {"objc_method",&_VPXStruct_objc_method_1,sizeof(struct objc_method)};

	VPL_ExtField _VPXStruct_objc_object_1 = { "isa",offsetof(struct objc_object,isa),sizeof(void *),kPointerType,"objc_class",1,40,"T*",NULL};
	VPL_ExtStructure _VPXStruct_objc_object_S = {"objc_object",&_VPXStruct_objc_object_1,sizeof(struct objc_object)};

	VPL_ExtField _VPXStruct_objc_class_10 = { "protocols",offsetof(struct objc_class,protocols),sizeof(void *),kPointerType,"objc_protocol_list",1,12,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_class_9 = { "cache",offsetof(struct objc_class,cache),sizeof(void *),kPointerType,"objc_cache",1,12,"T*",&_VPXStruct_objc_class_10};
	VPL_ExtField _VPXStruct_objc_class_8 = { "methodLists",offsetof(struct objc_class,methodLists),sizeof(void *),kPointerType,"objc_method_list",2,20,"T*",&_VPXStruct_objc_class_9};
	VPL_ExtField _VPXStruct_objc_class_7 = { "ivars",offsetof(struct objc_class,ivars),sizeof(void *),kPointerType,"objc_ivar_list",1,16,"T*",&_VPXStruct_objc_class_8};
	VPL_ExtField _VPXStruct_objc_class_6 = { "instance_size",offsetof(struct objc_class,instance_size),sizeof(long int),kIntType,"objc_ivar_list",1,16,"long int",&_VPXStruct_objc_class_7};
	VPL_ExtField _VPXStruct_objc_class_5 = { "info",offsetof(struct objc_class,info),sizeof(long int),kIntType,"objc_ivar_list",1,16,"long int",&_VPXStruct_objc_class_6};
	VPL_ExtField _VPXStruct_objc_class_4 = { "version",offsetof(struct objc_class,version),sizeof(long int),kIntType,"objc_ivar_list",1,16,"long int",&_VPXStruct_objc_class_5};
	VPL_ExtField _VPXStruct_objc_class_3 = { "name",offsetof(struct objc_class,name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_class_4};
	VPL_ExtField _VPXStruct_objc_class_2 = { "super_class",offsetof(struct objc_class,super_class),sizeof(void *),kPointerType,"objc_class",1,40,"T*",&_VPXStruct_objc_class_3};
	VPL_ExtField _VPXStruct_objc_class_1 = { "isa",offsetof(struct objc_class,isa),sizeof(void *),kPointerType,"objc_class",1,40,"T*",&_VPXStruct_objc_class_2};
	VPL_ExtStructure _VPXStruct_objc_class_S = {"objc_class",&_VPXStruct_objc_class_1,sizeof(struct objc_class)};



#pragma mark --------------- Helper Implementations ---------------

// This function borrowed from Apple at
// http://developer.apple.com/documentation/Cocoa/Reference/ObjCRuntimeRef/ObjCRuntimeRef/chapter_1.2_section_5.html
//

int objc_createClass( const char * name, const char * superclassName, int attCount )
{
    struct objc_class * meta_class;
    struct objc_class * super_class;
    struct objc_class * new_class;
    struct objc_class * root_class;

	struct objc_ivar_list *ivarsList;

    //
    // Ensure that the superclass exists and that someone
    // hasn't already implemented a class with the same name
    //
    super_class = (struct objc_class *)objc_lookUpClass (superclassName);
    if (super_class == nil)
    {
        return NO;
    }
        
    if (objc_lookUpClass (name) != nil) 
    {
        return NO;
    }
    // Find the root class
    root_class = super_class;
    while( root_class->super_class != nil )
    {
        root_class = root_class->super_class;
    }
    // Allocate space for the class and its metaclass
    new_class = calloc( 2, sizeof(struct objc_class) );
    meta_class = &new_class[1];
    // setup class
    new_class->isa      = meta_class;
    new_class->info     = CLS_CLASS;
    meta_class->info    = CLS_META;
    //
    // Create a copy of the class name.
    // For efficiency, we have the metaclass and the class itself 
    // to share this copy of the name, but this is not a requirement
    // imposed by the runtime.
    //
    new_class->name = malloc (strlen (name) + 1);
    strcpy ((char*)new_class->name, name);
    meta_class->name = new_class->name;
    //
    // Allocate empty method lists.
    // We can add methods later.
    //
    new_class->methodLists = calloc( 1, sizeof(struct objc_method_list *) );
    *new_class->methodLists = (struct objc_method_list *) -1;
    meta_class->methodLists = calloc( 1, sizeof(struct objc_method_list *) );
    *meta_class->methodLists = (struct objc_method_list *) -1;
    //
    // Connect the class definition to the class hierarchy:
    // Connect the class to the superclass.
    // Connect the metaclass to the metaclass of the superclass.
    // Connect the metaclass of the metaclass to
    //      the metaclass of the root class.
    new_class->super_class  = super_class;
    meta_class->super_class = super_class->isa;
    meta_class->isa         = (void *)root_class->isa;

	// Create room for our data
	if (super_class != NULL) {
		new_class->instance_size = super_class->instance_size + vplSizeOfMartenOBJCInstanceData;
		meta_class->instance_size = super_class->isa->instance_size;
	} else {
		new_class->instance_size = vplSizeOfMartenOBJCInstanceData;
		meta_class->instance_size = 0;
	}
	
	// Create room for our attributes

	if( attCount > 0 ) {
		ivarsList = (struct objc_ivar_list *) malloc( sizeof( struct objc_ivar_list ) + (sizeof(struct objc_ivar)*(attCount-1)) );
		if( ivarsList == NULL ) return NO;

		ivarsList->ivar_count = 0;
		new_class->ivars = ivarsList;
	} else new_class->ivars = NULL;
	
    // Finally, register the class with the runtime.
    objc_addClass( new_class ); 
	
//	printf( "finalized new_class->instance_size:%d\n", new_class->instance_size );
//	printf( "finalized meta_class->instance_size:%d\n", meta_class->instance_size );
	
    return YES;
}

int class_addOneMethod( Class theClass, Method theMethod )
{
	struct objc_method_list *methodsToAdd;
	struct objc_method		*copyMethod;
	
	copyMethod = calloc( 1, sizeof(struct objc_method *) );
	copyMethod->method_name = theMethod->method_name;
	copyMethod->method_types = theMethod->method_types;
	copyMethod->method_imp = theMethod->method_imp;

	methodsToAdd = calloc( 1, sizeof(struct objc_method_list *) );
	methodsToAdd->method_count = 1;
//	methodsToAdd->method_list = (struct objc_method*)calloc( 1, sizeof(struct objc_method *) );
	methodsToAdd->method_list[1] = *copyMethod;
	
	class_addMethods( theClass, methodsToAdd );
	
	return YES;
}

/*
    		id	myNewClass = objc_lookUpClass("MyClass");
    		struct	objc_method_list *myMethodList = (struct	objc_method_list *) malloc(sizeof(struct objc_method_list));
    		Method myMethod = (Method) malloc(sizeof(struct objc_method));
    		SEL	theSelector = sel_registerName("MyMethod");
    		myMethod->method_name = theSelector;
    		myMethod->method_types = NULL;
    		myMethod->method_imp = objcMyMethod;
    		
    		myMethodList->method_count = 1;
    		myMethodList->method_list[0] = *myMethod;
    		
    		class_addMethods((Class) myNewClass,myMethodList);

*/

int class_addOneMethodName( Class theClass, const char *newName, const char *newTypes, const void *newIMP )
{
	struct objc_method_list *methodsToAdd;
	Method					copyMethod;
	char					*copyTypes;
	SEL						theSelector;
	
	copyMethod = (Method) malloc( sizeof(struct objc_method) );
	if( copyMethod == NULL ) return NO;

	methodsToAdd = (struct objc_method_list *) malloc( sizeof(struct objc_method_list) );
	if( methodsToAdd == NULL ) {
		free( copyMethod );
		return NO;
	}

	copyTypes = NULL;
	if( newTypes != NULL ) copyTypes = strdup( newTypes );
	
	theSelector = sel_registerName( newName );
	
	copyMethod->method_name = theSelector;
	copyMethod->method_types = copyTypes;
	copyMethod->method_imp = newIMP;

	methodsToAdd->method_count = 1;
	methodsToAdd->method_list[0] = *copyMethod;
	
	class_addMethods( theClass, methodsToAdd );
	
	return YES;
}

int class_addOneAttributeName( Class theClass, const char *newName, const char *newType, int newOffset )
{
	Ivar	theIvar;
	int		theCount;
/*	int		attCount = 2;
	
	
	if( theClass->ivars == NULL ) {
		struct objc_ivar_list *ivarsList;
		ivarsList = (struct objc_ivar_list *) malloc( sizeof( struct objc_ivar_list ) + (sizeof(struct objc_ivar)*(attCount-1)) );
		if( ivarsList == NULL ) return NO;

		ivarsList->ivar_count = 0;
		theClass->ivars = ivarsList;
	}
*/
	
	theCount = theClass->ivars->ivar_count;
	
	theIvar = &theClass->ivars->ivar_list[theCount];

	theIvar->ivar_name = strdup( newName );
	theIvar->ivar_type = strdup( newType );
	theIvar->ivar_offset = newOffset;
	
	theClass->ivars->ivar_count++;

/*
	ivarsList = (struct objc_ivar_list *) malloc( sizeof( struct objc_ivar_list ) );
	if( ivarsList == NULL ) return NO;
	
	ivarsList->ivar_count = 1;
	theIvar = &ivarsList->ivar_list[0];

	theIvar->ivar_name = strdup( newName );
	theIvar->ivar_type = strdup( newType );
	theIvar->ivar_offset = newOffset;
	
	theClass->ivars = ivarsList;
*/

	return YES;
}

#pragma mark --------------- Marg Implementations ---------------

marg_list* marg_malloc( unsigned int args_size, int *size )
{
	if( size != NULL ) *size = (marg_prearg_size + ((7 + args_size) & ~7) );
	return (marg_list *)malloc (marg_prearg_size + ((7 + args_size) & ~7) );
}

void marg_free( marg_list *margs )
{
	free( margs );
}

void* marg_getRef( marg_list margs, int offset )
{
	return ( (Nat4*)(margs + (marg_prearg_size + offset)) );
}

void* marg_getValue( marg_list margs, int offset )
{
	return (void *) *((Nat4*)(marg_getRef( margs, offset )));
}

void marg_setValue( marg_list margs, int offset,  const void* value )
{
	*((Nat4*)marg_getRef( margs, offset) ) = (Nat4) value;
}

	VPL_Parameter _marg_malloc_R = { kPointerType,0,"margs_list",1,0,NULL};
	VPL_Parameter _marg_malloc_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _marg_malloc_1 = { kUnsignedType,4,NULL,0,0,&_marg_malloc_2};
	VPL_ExtProcedure marg_malloc_F = {"marg_malloc",marg_malloc,&_marg_malloc_1,&_marg_malloc_R};

	VPL_Parameter _marg_free_1 = { kPointerType,0,"margs_list",1,0,NULL};
	VPL_ExtProcedure marg_free_F = {"marg_free",marg_free,&_marg_free_1,NULL};

	VPL_Parameter _marg_getRef_R = { kPointerType,4,"void",1,0,NULL};
	VPL_Parameter _marg_getRef_2 = { kUnsignedType,4,"int",0,0,NULL};
	VPL_Parameter _marg_getRef_1 = { kPointerType,0,"margs_list",1,1,&_marg_getRef_2};
	VPL_ExtProcedure marg_getRef_F = {"marg_getRef",marg_getRef,&_marg_getRef_1,&_marg_getRef_R};

	VPL_Parameter _marg_setValue_3 = { kPointerType,4,"void",1,1,NULL};
	VPL_Parameter _marg_setValue_2 = { kUnsignedType,4,NULL,0,0,&_marg_setValue_3};
	VPL_Parameter _marg_setValue_1 = { kPointerType,0,"margs_list",1,0,&_marg_setValue_2};
	VPL_ExtProcedure marg_setValue_F = {"marg_setValue",marg_setValue,&_marg_setValue_1,NULL};

	VPL_Parameter _objc_createClass_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_createClass_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_createClass_2 = { kPointerType,0,"char",1,1,&_objc_createClass_3};
	VPL_Parameter _objc_createClass_1 = { kPointerType,0,"char",1,1,&_objc_createClass_2};
	VPL_ExtProcedure objc_createClass_F = {"objc_createClass",objc_createClass,&_objc_createClass_1,&_objc_createClass_R};

	VPL_Parameter _class_addOneMethod_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _class_addOneMethod_2 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_Parameter _class_addOneMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_addOneMethod_2};
	VPL_ExtProcedure class_addOneMethod_F = {"class_addOneMethod",class_addOneMethod,&_class_addOneMethod_1,&_class_addOneMethod_R};

	VPL_Parameter _class_addOneMethodName_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _class_addOneMethodName_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _class_addOneMethodName_3 = { kPointerType,0,"char",1,1,&_class_addOneMethodName_4};
	VPL_Parameter _class_addOneMethodName_2 = { kPointerType,0,"char",1,1,&_class_addOneMethodName_3};
	VPL_Parameter _class_addOneMethodName_1 = { kPointerType,40,"objc_class",1,0,&_class_addOneMethodName_2};
	VPL_ExtProcedure class_addOneMethodName_F = {"class_addOneMethodName",class_addOneMethodName,&_class_addOneMethodName_1,&_class_addOneMethodName_R};

	VPL_Parameter _class_addOneAttributeName_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _class_addOneAttributeName_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _class_addOneAttributeName_3 = { kPointerType,0,"char",1,1,&_class_addOneAttributeName_4};
	VPL_Parameter _class_addOneAttributeName_2 = { kPointerType,0,"char",1,1,&_class_addOneAttributeName_3};
	VPL_Parameter _class_addOneAttributeName_1 = { kPointerType,40,"objc_class",1,0,&_class_addOneAttributeName_2};
	VPL_ExtProcedure class_addOneAttributeName_F = {"class_addOneAttributeName",class_addOneAttributeName,&_class_addOneAttributeName_1,&_class_addOneAttributeName_R};

	VPL_Parameter _objc_callbackClassHandler_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_callbackClassHandler_1 = { kPointerType,4,"char",1,1,NULL};
	VPL_ExtProcedure _objc_callbackClassHandler_F = {"objc_callbackClassHandler",NULL,&_objc_callbackClassHandler_1,&_objc_callbackClassHandler_R};

	VPL_Parameter _NSApplicationMain_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSApplicationMain_2 = { kPointerType,0,"char",1,1,NULL};
	VPL_Parameter _NSApplicationMain_1 = { kUnsignedType,4,NULL,0,0,&_NSApplicationMain_2};
	VPL_ExtProcedure NSApplicationMain_F = {"NSApplicationMain",NSApplicationMain,&_NSApplicationMain_1,&_NSApplicationMain_R};

	VPL_ExtProcedure NSApplicationLoad_F = {"NSApplicationLoad",NSApplicationLoad,NULL,NULL};


#pragma mark --------------- Procedures ---------------


	VPL_Parameter _IMP_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _IMP_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _IMP_1 = { kPointerType,4,"objc_object",1,0,&_IMP_2};
	VPL_ExtProcedure _IMP_F = {"IMP",NULL,&_IMP_1,&_IMP_R};

	VPL_Parameter __error_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter __error_2 = { kPointerType,1,"char",1,1,&__error_3};
	VPL_Parameter __error_1 = { kPointerType,4,"objc_object",1,0,&__error_2};
	VPL_ExtProcedure __error_F = {"_error",NULL,&__error_1,NULL};

	VPL_Parameter __zoneCopy_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter __zoneCopy_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter __zoneCopy_2 = { kUnsignedType,4,NULL,0,0,&__zoneCopy_3};
	VPL_Parameter __zoneCopy_1 = { kPointerType,4,"objc_object",1,0,&__zoneCopy_2};
	VPL_ExtProcedure __zoneCopy_F = {"_zoneCopy",NULL,&__zoneCopy_1,&__zoneCopy_R};

	VPL_Parameter __zoneRealloc_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter __zoneRealloc_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter __zoneRealloc_2 = { kUnsignedType,4,NULL,0,0,&__zoneRealloc_3};
	VPL_Parameter __zoneRealloc_1 = { kPointerType,4,"objc_object",1,0,&__zoneRealloc_2};
	VPL_ExtProcedure __zoneRealloc_F = {"_zoneRealloc",NULL,&__zoneRealloc_1,&__zoneRealloc_R};

	VPL_Parameter __zoneAlloc_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter __zoneAlloc_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter __zoneAlloc_2 = { kUnsignedType,4,NULL,0,0,&__zoneAlloc_3};
	VPL_Parameter __zoneAlloc_1 = { kPointerType,40,"objc_class",1,0,&__zoneAlloc_2};
	VPL_ExtProcedure __zoneAlloc_F = {"_zoneAlloc",NULL,&__zoneAlloc_1,&__zoneAlloc_R};

	VPL_Parameter __dealloc_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter __dealloc_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure __dealloc_F = {"_dealloc",NULL,&__dealloc_1,&__dealloc_R};

	VPL_Parameter __realloc_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter __realloc_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter __realloc_1 = { kPointerType,4,"objc_object",1,0,&__realloc_2};
	VPL_ExtProcedure __realloc_F = {"_realloc",NULL,&__realloc_1,&__realloc_R};

	VPL_Parameter __copy_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter __copy_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter __copy_1 = { kPointerType,4,"objc_object",1,0,&__copy_2};
	VPL_ExtProcedure __copy_F = {"_copy",NULL,&__copy_1,&__copy_R};

	VPL_Parameter __alloc_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter __alloc_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter __alloc_1 = { kPointerType,40,"objc_class",1,0,&__alloc_2};
	VPL_ExtProcedure __alloc_F = {"_alloc",NULL,&__alloc_1,&__alloc_R};

	VPL_Parameter _objc_setMultithreaded_1 = { kIntType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _objc_setMultithreaded_F = {"objc_setMultithreaded",objc_setMultithreaded,&_objc_setMultithreaded_1,NULL};

	VPL_Parameter _objc_setClassHandler_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _objc_setClassHandler_F = {"objc_setClassHandler",objc_setClassHandler,&_objc_setClassHandler_1,NULL};

	VPL_Parameter _objc_addClass_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _objc_addClass_F = {"objc_addClass",objc_addClass,&_objc_addClass_1,NULL};

	VPL_Parameter _objc_lookUpClass_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_lookUpClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_lookUpClass_F = {"objc_lookUpClass",objc_lookUpClass,&_objc_lookUpClass_1,&_objc_lookUpClass_R};

	VPL_Parameter _objc_getClasses_R = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _objc_getClasses_F = {"objc_getClasses",objc_getClasses,NULL,&_objc_getClasses_R};

	VPL_Parameter _objc_getClassList_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_getClassList_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_getClassList_1 = { kPointerType,40,"objc_class",2,0,&_objc_getClassList_2};
	VPL_ExtProcedure _objc_getClassList_F = {"objc_getClassList",objc_getClassList,&_objc_getClassList_1,&_objc_getClassList_R};

	VPL_Parameter _objc_msgSendv_stret_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _objc_msgSendv_stret_4 = { kUnsignedType,4,NULL,0,0,&_objc_msgSendv_stret_5};
	VPL_Parameter _objc_msgSendv_stret_3 = { kPointerType,0,"objc_selector",1,0,&_objc_msgSendv_stret_4};
	VPL_Parameter _objc_msgSendv_stret_2 = { kPointerType,4,"objc_object",1,0,&_objc_msgSendv_stret_3};
	VPL_Parameter _objc_msgSendv_stret_1 = { kPointerType,0,"void",1,0,&_objc_msgSendv_stret_2};
	VPL_ExtProcedure _objc_msgSendv_stret_F = {"objc_msgSendv_stret",objc_msgSendv_stret,&_objc_msgSendv_stret_1,NULL};

	VPL_Parameter _objc_msgSendv_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_msgSendv_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _objc_msgSendv_3 = { kUnsignedType,4,NULL,0,0,&_objc_msgSendv_4};
	VPL_Parameter _objc_msgSendv_2 = { kPointerType,0,"objc_selector",1,0,&_objc_msgSendv_3};
	VPL_Parameter _objc_msgSendv_1 = { kPointerType,4,"objc_object",1,0,&_objc_msgSendv_2};
	VPL_ExtProcedure _objc_msgSendv_F = {"objc_msgSendv",objc_msgSendv,&_objc_msgSendv_1,&_objc_msgSendv_R};

	VPL_Parameter _objc_msgSendSuper_stret_3 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _objc_msgSendSuper_stret_2 = { kPointerType,8,"objc_super",1,0,&_objc_msgSendSuper_stret_3};
	VPL_Parameter _objc_msgSendSuper_stret_1 = { kPointerType,0,"void",1,0,&_objc_msgSendSuper_stret_2};
	VPL_ExtProcedure _objc_msgSendSuper_stret_F = {"objc_msgSendSuper_stret",objc_msgSendSuper_stret,&_objc_msgSendSuper_stret_1,NULL};

	VPL_Parameter _objc_msgSend_stret_3 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _objc_msgSend_stret_2 = { kPointerType,4,"objc_object",1,0,&_objc_msgSend_stret_3};
	VPL_Parameter _objc_msgSend_stret_1 = { kPointerType,0,"void",1,0,&_objc_msgSend_stret_2};
	VPL_ExtProcedure _objc_msgSend_stret_F = {"objc_msgSend_stret",objc_msgSend_stret,&_objc_msgSend_stret_1,NULL};

	VPL_Parameter _objc_msgSendSuper_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_msgSendSuper_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _objc_msgSendSuper_1 = { kPointerType,8,"objc_super",1,0,&_objc_msgSendSuper_2};
	VPL_ExtProcedure _objc_msgSendSuper_F = {"objc_msgSendSuper",objc_msgSendSuper,&_objc_msgSendSuper_1,&_objc_msgSendSuper_R};

	VPL_Parameter _objc_msgSend_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_msgSend_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _objc_msgSend_1 = { kPointerType,4,"objc_object",1,0,&_objc_msgSend_2};
	VPL_ExtProcedure _objc_msgSend_F = {"objc_msgSend",objc_msgSend,&_objc_msgSend_1,&_objc_msgSend_R};

	VPL_Parameter _objc_getMetaClass_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_getMetaClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_getMetaClass_F = {"objc_getMetaClass",objc_getMetaClass,&_objc_getMetaClass_1,&_objc_getMetaClass_R};

	VPL_Parameter _objc_getClass_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_getClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_getClass_F = {"objc_getClass",objc_getClass,&_objc_getClass_1,&_objc_getClass_R};

	VPL_Parameter _objc_unloadModules_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_unloadModules_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _objc_unloadModules_1 = { kPointerType,0,"void",1,0,&_objc_unloadModules_2};
	VPL_ExtProcedure _objc_unloadModules_F = {"objc_unloadModules",objc_unloadModules,&_objc_unloadModules_1,&_objc_unloadModules_R};

	VPL_Parameter _objc_loadModule_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_loadModule_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _objc_loadModule_2 = { kPointerType,0,"void",1,0,&_objc_loadModule_3};
	VPL_Parameter _objc_loadModule_1 = { kPointerType,1,"char",1,0,&_objc_loadModule_2};
	VPL_ExtProcedure _objc_loadModule_F = {"objc_loadModule",objc_loadModule,&_objc_loadModule_1,&_objc_loadModule_R};

	VPL_Parameter _objc_loadModules_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_loadModules_5 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _objc_loadModules_4 = { kPointerType,28,"mach_header",2,0,&_objc_loadModules_5};
	VPL_Parameter _objc_loadModules_3 = { kPointerType,0,"void",1,0,&_objc_loadModules_4};
	VPL_Parameter _objc_loadModules_2 = { kPointerType,0,"void",1,0,&_objc_loadModules_3};
	VPL_Parameter _objc_loadModules_1 = { kPointerType,1,"char",2,0,&_objc_loadModules_2};
	VPL_ExtProcedure _objc_loadModules_F = {"objc_loadModules",objc_loadModules,&_objc_loadModules_1,&_objc_loadModules_R};

	VPL_Parameter _objc_exception_set_functions_1 = { kPointerType,24,"objc_exception_functions_t",1,0,NULL};
	VPL_ExtProcedure _objc_exception_set_functions_F = {"objc_exception_set_functions",objc_exception_set_functions,&_objc_exception_set_functions_1,NULL};

	VPL_Parameter _objc_exception_get_functions_1 = { kPointerType,24,"objc_exception_functions_t",1,0,NULL};
	VPL_ExtProcedure _objc_exception_get_functions_F = {"objc_exception_get_functions",objc_exception_get_functions,&_objc_exception_get_functions_1,NULL};

	VPL_Parameter _objc_exception_match_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_exception_match_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_exception_match_1 = { kPointerType,40,"objc_class",1,0,&_objc_exception_match_2};
	VPL_ExtProcedure _objc_exception_match_F = {"objc_exception_match",objc_exception_match,&_objc_exception_match_1,&_objc_exception_match_R};

	VPL_Parameter _objc_exception_extract_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_exception_extract_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _objc_exception_extract_F = {"objc_exception_extract",objc_exception_extract,&_objc_exception_extract_1,&_objc_exception_extract_R};

	VPL_Parameter _objc_exception_try_exit_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _objc_exception_try_exit_F = {"objc_exception_try_exit",objc_exception_try_exit,&_objc_exception_try_exit_1,NULL};

	VPL_Parameter _objc_exception_try_enter_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _objc_exception_try_enter_F = {"objc_exception_try_enter",objc_exception_try_enter,&_objc_exception_try_enter_1,NULL};

	VPL_Parameter _objc_exception_throw_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _objc_exception_throw_F = {"objc_exception_throw",objc_exception_throw,&_objc_exception_throw_1,NULL};

	VPL_Parameter _class_nextMethodList_R = { kPointerType,20,"objc_method_list",1,0,NULL};
	VPL_Parameter _class_nextMethodList_2 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _class_nextMethodList_1 = { kPointerType,40,"objc_class",1,0,&_class_nextMethodList_2};
	VPL_ExtProcedure _class_nextMethodList_F = {"class_nextMethodList",class_nextMethodList,&_class_nextMethodList_1,&_class_nextMethodList_R};

	VPL_Parameter _method_getArgumentInfo_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_getArgumentInfo_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _method_getArgumentInfo_3 = { kPointerType,1,"char",2,0,&_method_getArgumentInfo_4};
	VPL_Parameter _method_getArgumentInfo_2 = { kIntType,4,NULL,0,0,&_method_getArgumentInfo_3};
	VPL_Parameter _method_getArgumentInfo_1 = { kPointerType,12,"objc_method",1,0,&_method_getArgumentInfo_2};
	VPL_ExtProcedure _method_getArgumentInfo_F = {"method_getArgumentInfo",method_getArgumentInfo,&_method_getArgumentInfo_1,&_method_getArgumentInfo_R};

	VPL_Parameter _method_getSizeOfArguments_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_getSizeOfArguments_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_getSizeOfArguments_F = {"method_getSizeOfArguments",method_getSizeOfArguments,&_method_getSizeOfArguments_1,&_method_getSizeOfArguments_R};

	VPL_Parameter _method_getNumberOfArguments_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_getNumberOfArguments_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_getNumberOfArguments_F = {"method_getNumberOfArguments",method_getNumberOfArguments,&_method_getNumberOfArguments_1,&_method_getNumberOfArguments_R};

	VPL_Parameter _class_poseAs_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _class_poseAs_2 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _class_poseAs_1 = { kPointerType,40,"objc_class",1,0,&_class_poseAs_2};
	VPL_ExtProcedure _class_poseAs_F = {"class_poseAs",class_poseAs,&_class_poseAs_1,&_class_poseAs_R};

	VPL_Parameter _class_removeMethods_2 = { kPointerType,20,"objc_method_list",1,0,NULL};
	VPL_Parameter _class_removeMethods_1 = { kPointerType,40,"objc_class",1,0,&_class_removeMethods_2};
	VPL_ExtProcedure _class_removeMethods_F = {"class_removeMethods",class_removeMethods,&_class_removeMethods_1,NULL};

	VPL_Parameter _class_addMethods_2 = { kPointerType,20,"objc_method_list",1,0,NULL};
	VPL_Parameter _class_addMethods_1 = { kPointerType,40,"objc_class",1,0,&_class_addMethods_2};
	VPL_ExtProcedure _class_addMethods_F = {"class_addMethods",class_addMethods,&_class_addMethods_1,NULL};

	VPL_Parameter _class_getClassMethod_R = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_Parameter _class_getClassMethod_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_getClassMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_getClassMethod_2};
	VPL_ExtProcedure _class_getClassMethod_F = {"class_getClassMethod",class_getClassMethod,&_class_getClassMethod_1,&_class_getClassMethod_R};

	VPL_Parameter _class_getInstanceMethod_R = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_Parameter _class_getInstanceMethod_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_getInstanceMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_getInstanceMethod_2};
	VPL_ExtProcedure _class_getInstanceMethod_F = {"class_getInstanceMethod",class_getInstanceMethod,&_class_getInstanceMethod_1,&_class_getInstanceMethod_R};

	VPL_Parameter _class_getInstanceVariable_R = { kPointerType,12,"objc_ivar",1,0,NULL};
	VPL_Parameter _class_getInstanceVariable_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_getInstanceVariable_1 = { kPointerType,40,"objc_class",1,0,&_class_getInstanceVariable_2};
	VPL_ExtProcedure _class_getInstanceVariable_F = {"class_getInstanceVariable",class_getInstanceVariable,&_class_getInstanceVariable_1,&_class_getInstanceVariable_R};

	VPL_Parameter _class_getVersion_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _class_getVersion_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_getVersion_F = {"class_getVersion",class_getVersion,&_class_getVersion_1,&_class_getVersion_R};

	VPL_Parameter _class_setVersion_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _class_setVersion_1 = { kPointerType,40,"objc_class",1,0,&_class_setVersion_2};
	VPL_ExtProcedure _class_setVersion_F = {"class_setVersion",class_setVersion,&_class_setVersion_1,NULL};

	VPL_Parameter _class_createInstanceFromZone_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _class_createInstanceFromZone_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _class_createInstanceFromZone_2 = { kUnsignedType,4,NULL,0,0,&_class_createInstanceFromZone_3};
	VPL_Parameter _class_createInstanceFromZone_1 = { kPointerType,40,"objc_class",1,0,&_class_createInstanceFromZone_2};
	VPL_ExtProcedure _class_createInstanceFromZone_F = {"class_createInstanceFromZone",class_createInstanceFromZone,&_class_createInstanceFromZone_1,&_class_createInstanceFromZone_R};

	VPL_Parameter _class_createInstance_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _class_createInstance_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _class_createInstance_1 = { kPointerType,40,"objc_class",1,0,&_class_createInstance_2};
	VPL_ExtProcedure _class_createInstance_F = {"class_createInstance",class_createInstance,&_class_createInstance_1,&_class_createInstance_R};

	VPL_Parameter _object_getInstanceVariable_R = { kPointerType,12,"objc_ivar",1,0,NULL};
	VPL_Parameter _object_getInstanceVariable_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _object_getInstanceVariable_2 = { kPointerType,1,"char",1,1,&_object_getInstanceVariable_3};
	VPL_Parameter _object_getInstanceVariable_1 = { kPointerType,4,"objc_object",1,0,&_object_getInstanceVariable_2};
	VPL_ExtProcedure _object_getInstanceVariable_F = {"object_getInstanceVariable",object_getInstanceVariable,&_object_getInstanceVariable_1,&_object_getInstanceVariable_R};

	VPL_Parameter _object_setInstanceVariable_R = { kPointerType,12,"objc_ivar",1,0,NULL};
	VPL_Parameter _object_setInstanceVariable_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _object_setInstanceVariable_2 = { kPointerType,1,"char",1,1,&_object_setInstanceVariable_3};
	VPL_Parameter _object_setInstanceVariable_1 = { kPointerType,4,"objc_object",1,0,&_object_setInstanceVariable_2};
	VPL_ExtProcedure _object_setInstanceVariable_F = {"object_setInstanceVariable",object_setInstanceVariable,&_object_setInstanceVariable_1,&_object_setInstanceVariable_R};

//	VPL_Parameter _objc_sync_notifyAll_R = { kIntType,4,NULL,0,0,NULL};
//	VPL_Parameter _objc_sync_notifyAll_1 = { kPointerType,4,"objc_object",1,0,NULL};
//	VPL_ExtProcedure _objc_sync_notifyAll_F = {"objc_sync_notifyAll",objc_sync_notifyAll,&_objc_sync_notifyAll_1,&_objc_sync_notifyAll_R};
//
//	VPL_Parameter _objc_sync_notify_R = { kIntType,4,NULL,0,0,NULL};
//	VPL_Parameter _objc_sync_notify_1 = { kPointerType,4,"objc_object",1,0,NULL};
//	VPL_ExtProcedure _objc_sync_notify_F = {"objc_sync_notify",objc_sync_notify,&_objc_sync_notify_1,&_objc_sync_notify_R};
//
//	VPL_Parameter _objc_sync_wait_R = { kIntType,4,NULL,0,0,NULL};
//	VPL_Parameter _objc_sync_wait_2 = { kIntType,4,NULL,0,0,NULL};
//	VPL_Parameter _objc_sync_wait_1 = { kPointerType,4,"objc_object",1,0,&_objc_sync_wait_2};
//	VPL_ExtProcedure _objc_sync_wait_F = {"objc_sync_wait",objc_sync_wait,&_objc_sync_wait_1,&_objc_sync_wait_R};

	VPL_Parameter _objc_sync_exit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_sync_exit_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _objc_sync_exit_F = {"objc_sync_exit",objc_sync_exit,&_objc_sync_exit_1,&_objc_sync_exit_R};

	VPL_Parameter _objc_sync_enter_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_sync_enter_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _objc_sync_enter_F = {"objc_sync_enter",objc_sync_enter,&_objc_sync_enter_1,&_objc_sync_enter_R};

	VPL_Parameter _object_getIndexedIvars_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _object_getIndexedIvars_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _object_getIndexedIvars_F = {"object_getIndexedIvars",object_getIndexedIvars,&_object_getIndexedIvars_1,&_object_getIndexedIvars_R};

	VPL_Parameter _object_getClassName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _object_getClassName_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _object_getClassName_F = {"object_getClassName",object_getClassName,&_object_getClassName_1,&_object_getClassName_R};

	VPL_Parameter _sel_registerName_R = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _sel_registerName_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _sel_registerName_F = {"sel_registerName",sel_registerName,&_sel_registerName_1,&_sel_registerName_R};

	VPL_Parameter _sel_getUid_R = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _sel_getUid_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _sel_getUid_F = {"sel_getUid",sel_getUid,&_sel_getUid_1,&_sel_getUid_R};

	VPL_Parameter _sel_getName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _sel_getName_1 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_ExtProcedure _sel_getName_F = {"sel_getName",sel_getName,&_sel_getName_1,&_sel_getName_R};

	VPL_Parameter _sel_isMapped_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _sel_isMapped_1 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_ExtProcedure _sel_isMapped_F = {"sel_isMapped",sel_isMapped,&_sel_isMapped_1,&_sel_isMapped_R};



VPL_DictionaryNode VPX_OBJC_Constants[] =	{
	{"OBJC_SYNC_NOT_INITIALIZED", &_OBJC_SYNC_NOT_INITIALIZED_C},
	{"OBJC_SYNC_TIMED_OUT", &_OBJC_SYNC_TIMED_OUT_C},
	{"OBJC_SYNC_NOT_OWNING_THREAD_ERROR", &_OBJC_SYNC_NOT_OWNING_THREAD_ERROR_C},
	{"OBJC_SYNC_SUCCESS", &_OBJC_SYNC_SUCCESS_C},
};

VPL_DictionaryNode VPX_OBJC_Structures[] =	{
	{"objc_super",&_VPXStruct_objc_super_S},
	{"objc_module",&_VPXStruct_objc_module_S},
	{"objc_symtab",&_VPXStruct_objc_symtab_S},
//	{"mach_port_qos",&_VPXStruct_mach_port_qos_S},
//	{"mach_port_limits",&_VPXStruct_mach_port_limits_S},
//	{"mach_port_status",&_VPXStruct_mach_port_status_S},
	{"objc_ivar",&_VPXStruct_objc_ivar_S},
	{"objc_category",&_VPXStruct_objc_category_S},
	{"objc_protocol_list",&_VPXStruct_objc_protocol_list_S},
	{"objc_cache",&_VPXStruct_objc_cache_S},
	{"objc_ivar_list",&_VPXStruct_objc_ivar_list_S},
	{"objc_method_list",&_VPXStruct_objc_method_list_S},
	{"objc_method",&_VPXStruct_objc_method_S},
	{"objc_object",&_VPXStruct_objc_object_S},
	{"objc_class",&_VPXStruct_objc_class_S},
};

VPL_DictionaryNode VPX_OBJC_Procedures[] =	{
	{"IMP",&_IMP_F},
	{"_error",&__error_F},
	{"_zoneCopy",&__zoneCopy_F},
	{"_zoneRealloc",&__zoneRealloc_F},
	{"_zoneAlloc",&__zoneAlloc_F},
	{"_dealloc",&__dealloc_F},
	{"_realloc",&__realloc_F},
	{"_copy",&__copy_F},
	{"_alloc",&__alloc_F},
	{"objc_setMultithreaded",&_objc_setMultithreaded_F},
	{"objc_setClassHandler",&_objc_setClassHandler_F},
	{"objc_addClass",&_objc_addClass_F},
	{"objc_lookUpClass",&_objc_lookUpClass_F},
	{"objc_getClasses",&_objc_getClasses_F},
	{"objc_getClassList",&_objc_getClassList_F},
	{"objc_msgSendv_stret",&_objc_msgSendv_stret_F},
	{"objc_msgSendv",&_objc_msgSendv_F},
	{"objc_msgSendSuper_stret",&_objc_msgSendSuper_stret_F},
	{"objc_msgSend_stret",&_objc_msgSend_stret_F},
	{"objc_msgSendSuper",&_objc_msgSendSuper_F},
	{"objc_msgSend",&_objc_msgSend_F},
	{"objc_getMetaClass",&_objc_getMetaClass_F},
	{"objc_getClass",&_objc_getClass_F},
	{"objc_unloadModules",&_objc_unloadModules_F},
	{"objc_loadModule",&_objc_loadModule_F},
	{"objc_loadModules",&_objc_loadModules_F},
	{"objc_exception_set_functions",&_objc_exception_set_functions_F},
	{"objc_exception_get_functions",&_objc_exception_get_functions_F},
	{"objc_exception_match",&_objc_exception_match_F},
	{"objc_exception_extract",&_objc_exception_extract_F},
	{"objc_exception_try_exit",&_objc_exception_try_exit_F},
	{"objc_exception_try_enter",&_objc_exception_try_enter_F},
	{"objc_exception_throw",&_objc_exception_throw_F},
	{"class_nextMethodList",&_class_nextMethodList_F},
	{"method_getArgumentInfo",&_method_getArgumentInfo_F},
	{"method_getSizeOfArguments",&_method_getSizeOfArguments_F},
	{"method_getNumberOfArguments",&_method_getNumberOfArguments_F},
	{"class_poseAs",&_class_poseAs_F},
	{"class_removeMethods",&_class_removeMethods_F},
	{"class_addMethods",&_class_addMethods_F},
	{"class_getClassMethod",&_class_getClassMethod_F},
	{"class_getInstanceMethod",&_class_getInstanceMethod_F},
	{"class_getInstanceVariable",&_class_getInstanceVariable_F},
	{"class_getVersion",&_class_getVersion_F},
	{"class_setVersion",&_class_setVersion_F},
	{"class_createInstanceFromZone",&_class_createInstanceFromZone_F},
	{"class_createInstance",&_class_createInstance_F},
	{"object_getInstanceVariable",&_object_getInstanceVariable_F},
	{"object_setInstanceVariable",&_object_setInstanceVariable_F},
//	{"objc_sync_notifyAll",&_objc_sync_notifyAll_F},
//	{"objc_sync_notify",&_objc_sync_notify_F},
//	{"objc_sync_wait",&_objc_sync_wait_F},
	{"objc_sync_exit",&_objc_sync_exit_F},
	{"objc_sync_enter",&_objc_sync_enter_F},
	{"object_getIndexedIvars",&_object_getIndexedIvars_F},
	{"object_getClassName",&_object_getClassName_F},
	{"sel_registerName",&_sel_registerName_F},
	{"sel_getUid",&_sel_getUid_F},
	{"sel_getName",&_sel_getName_F},
	{"sel_isMapped",&_sel_isMapped_F},



	{"objc_callbackClassHandler",&_objc_callbackClassHandler_F},
	{"marg_malloc",&marg_malloc_F},
	{"marg_free",&marg_free_F},
	{"marg_getRef",&marg_getRef_F},
	{"marg_setValue",&marg_setValue_F},
	{"objc_createClass",&objc_createClass_F},
	{"class_addOneMethod",&class_addOneMethod_F},
	{"class_addOneMethodName",&class_addOneMethodName_F},
	{"class_addOneAttributeName",&class_addOneAttributeName_F},
	{"NSApplicationMain",&NSApplicationMain_F},
	{"NSApplicationLoad",&NSApplicationLoad_F},
};

Nat4	VPX_OBJC_Constants_Number = 4;
Nat4	VPX_OBJC_Structures_Number = 15 - 3;
Nat4	VPX_OBJC_Procedures_Number = 60 + 11;

#pragma export on

Nat4	load_MacOSX_OBJC_Constants(V_Environment environment);
Nat4	load_MacOSX_OBJC_Constants(V_Environment environment)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_OBJC_Constants_Number,VPX_OBJC_Constants);
		
		return result;
}

Nat4	load_MacOSX_OBJC_Structures(V_Environment environment);
Nat4	load_MacOSX_OBJC_Structures(V_Environment environment)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_OBJC_Structures_Number,VPX_OBJC_Structures);
		
		return result;
}

Nat4	load_MacOSX_OBJC_Procedures(V_Environment environment);
Nat4	load_MacOSX_OBJC_Procedures(V_Environment environment)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_OBJC_Procedures_Number,VPX_OBJC_Procedures);
		
		return result;
}

#pragma export off
