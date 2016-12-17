/*
	
	MacOSX_OJBC.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/

#include <stdlib.h>
#include <string.h>
#include "ObjcStandard.h"

#pragma mark --------------- Constants ---------------

	VPL_ExtConstant _OBJC_ASSOCIATION_COPY_C = {"OBJC_ASSOCIATION_COPY",OBJC_ASSOCIATION_COPY,NULL};
	VPL_ExtConstant _OBJC_ASSOCIATION_RETAIN_C = {"OBJC_ASSOCIATION_RETAIN",OBJC_ASSOCIATION_RETAIN,NULL};
	VPL_ExtConstant _OBJC_ASSOCIATION_COPY_NONATOMIC_C = {"OBJC_ASSOCIATION_COPY_NONATOMIC",OBJC_ASSOCIATION_COPY_NONATOMIC,NULL};
	VPL_ExtConstant _OBJC_ASSOCIATION_RETAIN_NONATOMIC_C = {"OBJC_ASSOCIATION_RETAIN_NONATOMIC",OBJC_ASSOCIATION_RETAIN_NONATOMIC,NULL};
	VPL_ExtConstant _OBJC_ASSOCIATION_ASSIGN_C = {"OBJC_ASSOCIATION_ASSIGN",OBJC_ASSOCIATION_ASSIGN,NULL};

#pragma mark --------------- Structures ---------------

	VPL_ExtField _VPXStruct_objc_super_1 = { "class",offsetof(struct objc_super,class),sizeof(void *),kPointerType,"objc_class",1,40,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_super_2 = { "receiver",offsetof(struct objc_super,receiver),sizeof(void *),kPointerType,"objc_object",1,4,"T*",&_VPXStruct_objc_super_1};
	VPL_ExtStructure _VPXStruct_objc_super_S = {"objc_super",&_VPXStruct_objc_super_2,sizeof(struct objc_super)};

	VPL_ExtField _VPXStruct_objc_module_1 = { "symtab",offsetof(struct objc_module,symtab),sizeof(void *),kPointerType,"objc_symtab",1,16,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_module_2 = { "name",offsetof(struct objc_module,name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_module_1};
	VPL_ExtField _VPXStruct_objc_module_3 = { "size",offsetof(struct objc_module,size),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_objc_module_2};
	VPL_ExtField _VPXStruct_objc_module_4 = { "version",offsetof(struct objc_module,version),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_objc_module_3};
	VPL_ExtStructure _VPXStruct_objc_module_S = {"objc_module",&_VPXStruct_objc_module_4,sizeof(struct objc_module)};

	VPL_ExtField _VPXStruct_objc_symtab_1 = { "defs",offsetof(struct objc_symtab,defs),sizeof(void *[1]),kPointerType,"void",1,0,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_symtab_2 = { "cat_def_cnt",offsetof(struct objc_symtab,cat_def_cnt),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_objc_symtab_1};
	VPL_ExtField _VPXStruct_objc_symtab_3 = { "cls_def_cnt",offsetof(struct objc_symtab,cls_def_cnt),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_objc_symtab_2};
	VPL_ExtField _VPXStruct_objc_symtab_4 = { "refs",offsetof(struct objc_symtab,refs),sizeof(void *),kPointerType,"objc_selector",2,0,"T*",&_VPXStruct_objc_symtab_3};
	VPL_ExtField _VPXStruct_objc_symtab_5 = { "sel_ref_cnt",offsetof(struct objc_symtab,sel_ref_cnt),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_objc_symtab_4};
	VPL_ExtStructure _VPXStruct_objc_symtab_S = {"objc_symtab",&_VPXStruct_objc_symtab_5,sizeof(struct objc_symtab)};

//	VPL_ExtField _VPXStruct_objc_method_description_list_1 = { "list",offsetof(struct objc_method_description_list,list),sizeof(objc_method_description[1]),kPointerType,"objc_method_description",0,8,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_method_description_list_2 = { "count",offsetof(struct objc_method_description_list,count),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtStructure _VPXStruct_objc_method_description_list_S = {"objc_method_description_list",&_VPXStruct_objc_method_description_list_2,sizeof(struct objc_method_description_list)};

	VPL_ExtField _VPXStruct_objc_method_description_1 = { "types",offsetof(struct objc_method_description,types),sizeof(void *),kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_method_description_2 = { "name",offsetof(struct objc_method_description,name),sizeof(void *),kPointerType,"objc_selector",1,0,"T*",&_VPXStruct_objc_method_description_1};
	VPL_ExtStructure _VPXStruct_objc_method_description_S = {"objc_method_description",&_VPXStruct_objc_method_description_2,sizeof(struct objc_method_description)};

	VPL_ExtField _VPXStruct_objc_protocol_list_1 = { "list",offsetof(struct objc_protocol_list,list),sizeof(void *[1]),kPointerType,"objc_object",1,4,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_protocol_list_2 = { "count",offsetof(struct objc_protocol_list,count),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_objc_protocol_list_1};
	VPL_ExtField _VPXStruct_objc_protocol_list_3 = { "next",offsetof(struct objc_protocol_list,next),sizeof(void *),kPointerType,"objc_protocol_list",1,12,"T*",&_VPXStruct_objc_protocol_list_2};
	VPL_ExtStructure _VPXStruct_objc_protocol_list_S = {"objc_protocol_list",&_VPXStruct_objc_protocol_list_3,sizeof(struct objc_protocol_list)};

	VPL_ExtField _VPXStruct_objc_cache_1 = { "buckets",offsetof(struct objc_cache,buckets),sizeof(void *[1]),kPointerType,"objc_method",1,12,NULL,NULL};
	VPL_ExtField _VPXStruct_objc_cache_2 = { "occupied",offsetof(struct objc_cache,occupied),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_objc_cache_1};
	VPL_ExtField _VPXStruct_objc_cache_3 = { "mask",offsetof(struct objc_cache,mask),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_objc_cache_2};
	VPL_ExtStructure _VPXStruct_objc_cache_S = {"objc_cache",&_VPXStruct_objc_cache_3,sizeof(struct objc_cache)};

//	VPL_ExtField _VPXStruct_objc_method_list_1 = { "method_list",offsetof(struct objc_method_list,method_list),sizeof(objc_method[1]),kPointerType,"objc_method",0,12,NULL,NULL};
//	VPL_ExtField _VPXStruct_objc_method_list_2 = { "space",offsetof(struct objc_method_list,space),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_objc_method_list_1};
	VPL_ExtField _VPXStruct_objc_method_list_3 = { "method_count",offsetof(struct objc_method_list,method_count),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_objc_method_list_4 = { "obsolete",offsetof(struct objc_method_list,obsolete),sizeof(void *),kPointerType,"objc_method_list",1,24,"T*",&_VPXStruct_objc_method_list_3};
	VPL_ExtStructure _VPXStruct_objc_method_list_S = {"objc_method_list",&_VPXStruct_objc_method_list_4,sizeof(struct objc_method_list)};

//	VPL_ExtField _VPXStruct_objc_ivar_list_1 = { "ivar_list",offsetof(struct objc_ivar_list,ivar_list),sizeof(objc_ivar[1]),kPointerType,"objc_ivar",0,16,NULL,NULL};
//	VPL_ExtField _VPXStruct_objc_ivar_list_2 = { "space",offsetof(struct objc_ivar_list,space),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_objc_ivar_list_1};
	VPL_ExtField _VPXStruct_objc_ivar_list_3 = { "ivar_count",offsetof(struct objc_ivar_list,ivar_count),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtStructure _VPXStruct_objc_ivar_list_S = {"objc_ivar_list",&_VPXStruct_objc_ivar_list_3,sizeof(struct objc_ivar_list)};

	VPL_ExtStructure _VPXStruct_objc_property_S = {"objc_property",NULL,0};

	VPL_ExtField _VPXStruct_objc_category_1 = { "protocols",offsetof(struct objc_category,protocols),sizeof(void *),kPointerType,"objc_protocol_list",1,12,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_category_2 = { "class_methods",offsetof(struct objc_category,class_methods),sizeof(void *),kPointerType,"objc_method_list",1,24,"T*",&_VPXStruct_objc_category_1};
	VPL_ExtField _VPXStruct_objc_category_3 = { "instance_methods",offsetof(struct objc_category,instance_methods),sizeof(void *),kPointerType,"objc_method_list",1,24,"T*",&_VPXStruct_objc_category_2};
	VPL_ExtField _VPXStruct_objc_category_4 = { "class_name",offsetof(struct objc_category,class_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_category_3};
	VPL_ExtField _VPXStruct_objc_category_5 = { "category_name",offsetof(struct objc_category,category_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_category_4};
	VPL_ExtStructure _VPXStruct_objc_category_S = {"objc_category",&_VPXStruct_objc_category_5,sizeof(struct objc_category)};

//	VPL_ExtField _VPXStruct_objc_ivar_1 = { "space",offsetof(struct objc_ivar,space),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_objc_ivar_2 = { "ivar_offset",offsetof(struct objc_ivar,ivar_offset),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_objc_ivar_3 = { "ivar_type",offsetof(struct objc_ivar,ivar_type),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_ivar_2};
	VPL_ExtField _VPXStruct_objc_ivar_4 = { "ivar_name",offsetof(struct objc_ivar,ivar_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_ivar_3};
	VPL_ExtStructure _VPXStruct_objc_ivar_S = {"objc_ivar",&_VPXStruct_objc_ivar_4,sizeof(struct objc_ivar)};

	VPL_ExtField _VPXStruct_objc_method_1 = { "method_imp",offsetof(struct objc_method,method_imp),sizeof(void *),kPointerType,"objc_object",2,4,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_method_2 = { "method_types",offsetof(struct objc_method,method_types),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_method_1};
	VPL_ExtField _VPXStruct_objc_method_3 = { "method_name",offsetof(struct objc_method,method_name),sizeof(void *),kPointerType,"objc_selector",1,0,"T*",&_VPXStruct_objc_method_2};
	VPL_ExtStructure _VPXStruct_objc_method_S = {"objc_method",&_VPXStruct_objc_method_3,sizeof(struct objc_method)};

	VPL_ExtStructure _VPXStruct_objc_selector_S = {"objc_selector",NULL,0};

	VPL_ExtField _VPXStruct_objc_object_1 = { "isa",offsetof(struct objc_object,isa),sizeof(void *),kPointerType,"objc_class",1,40,"T*",NULL};
	VPL_ExtStructure _VPXStruct_objc_object_S = {"objc_object",&_VPXStruct_objc_object_1,sizeof(struct objc_object)};

	VPL_ExtField _VPXStruct_objc_class_1 = { "protocols",offsetof(struct objc_class,protocols),sizeof(void *),kPointerType,"objc_protocol_list",1,12,"T*",NULL};
	VPL_ExtField _VPXStruct_objc_class_2 = { "cache",offsetof(struct objc_class,cache),sizeof(void *),kPointerType,"objc_cache",1,12,"T*",&_VPXStruct_objc_class_1};
	VPL_ExtField _VPXStruct_objc_class_3 = { "methodLists",offsetof(struct objc_class,methodLists),sizeof(void *),kPointerType,"objc_method_list",2,24,"T*",&_VPXStruct_objc_class_2};
	VPL_ExtField _VPXStruct_objc_class_4 = { "ivars",offsetof(struct objc_class,ivars),sizeof(void *),kPointerType,"objc_ivar_list",1,24,"T*",&_VPXStruct_objc_class_3};
	VPL_ExtField _VPXStruct_objc_class_5 = { "instance_size",offsetof(struct objc_class,instance_size),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_objc_class_4};
	VPL_ExtField _VPXStruct_objc_class_6 = { "info",offsetof(struct objc_class,info),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_objc_class_5};
	VPL_ExtField _VPXStruct_objc_class_7 = { "version",offsetof(struct objc_class,version),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_objc_class_6};
	VPL_ExtField _VPXStruct_objc_class_8 = { "name",offsetof(struct objc_class,name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_objc_class_7};
	VPL_ExtField _VPXStruct_objc_class_9 = { "super_class",offsetof(struct objc_class,super_class),sizeof(void *),kPointerType,"objc_class",1,40,"T*",&_VPXStruct_objc_class_8};
	VPL_ExtField _VPXStruct_objc_class_10 = { "isa",offsetof(struct objc_class,isa),sizeof(void *),kPointerType,"objc_class",1,40,"T*",&_VPXStruct_objc_class_9};
	VPL_ExtStructure _VPXStruct_objc_class_S = {"objc_class",&_VPXStruct_objc_class_10,sizeof(struct objc_class)};

	VPL_ExtField _VPXStruct_fd_set_1 = { "fds_bits",offsetof(struct fd_set,fds_bits),sizeof(int[32]),kPointerType,"int",0,4,NULL,NULL};
	VPL_ExtStructure _VPXStruct_fd_set_S = {"fd_set",&_VPXStruct_fd_set_1,sizeof(struct fd_set)};

	VPL_ExtField _VPXStruct__opaque_pthread_t_1 = { "__opaque",offsetof(struct _opaque_pthread_t,__opaque),sizeof(char[1168]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_t_2 = { "__cleanup_stack",offsetof(struct _opaque_pthread_t,__cleanup_stack),sizeof(void *),kPointerType,"__darwin_pthread_handler_rec",1,12,"T*",&_VPXStruct__opaque_pthread_t_1};
	VPL_ExtField _VPXStruct__opaque_pthread_t_3 = { "__sig",offsetof(struct _opaque_pthread_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_t_S = {"_opaque_pthread_t",&_VPXStruct__opaque_pthread_t_3,sizeof(struct _opaque_pthread_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_rwlockattr_t_1 = { "__opaque",offsetof(struct _opaque_pthread_rwlockattr_t,__opaque),sizeof(char[16]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_rwlockattr_t_2 = { "__sig",offsetof(struct _opaque_pthread_rwlockattr_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_rwlockattr_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_rwlockattr_t_S = {"_opaque_pthread_rwlockattr_t",&_VPXStruct__opaque_pthread_rwlockattr_t_2,sizeof(struct _opaque_pthread_rwlockattr_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_rwlock_t_1 = { "__opaque",offsetof(struct _opaque_pthread_rwlock_t,__opaque),sizeof(char[192]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_rwlock_t_2 = { "__sig",offsetof(struct _opaque_pthread_rwlock_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_rwlock_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_rwlock_t_S = {"_opaque_pthread_rwlock_t",&_VPXStruct__opaque_pthread_rwlock_t_2,sizeof(struct _opaque_pthread_rwlock_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_once_t_1 = { "__opaque",offsetof(struct _opaque_pthread_once_t,__opaque),sizeof(char[8]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_once_t_2 = { "__sig",offsetof(struct _opaque_pthread_once_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_once_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_once_t_S = {"_opaque_pthread_once_t",&_VPXStruct__opaque_pthread_once_t_2,sizeof(struct _opaque_pthread_once_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_mutexattr_t_1 = { "__opaque",offsetof(struct _opaque_pthread_mutexattr_t,__opaque),sizeof(char[8]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_mutexattr_t_2 = { "__sig",offsetof(struct _opaque_pthread_mutexattr_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_mutexattr_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_mutexattr_t_S = {"_opaque_pthread_mutexattr_t",&_VPXStruct__opaque_pthread_mutexattr_t_2,sizeof(struct _opaque_pthread_mutexattr_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_mutex_t_1 = { "__opaque",offsetof(struct _opaque_pthread_mutex_t,__opaque),sizeof(char[56]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_mutex_t_2 = { "__sig",offsetof(struct _opaque_pthread_mutex_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_mutex_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_mutex_t_S = {"_opaque_pthread_mutex_t",&_VPXStruct__opaque_pthread_mutex_t_2,sizeof(struct _opaque_pthread_mutex_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_condattr_t_1 = { "__opaque",offsetof(struct _opaque_pthread_condattr_t,__opaque),sizeof(char[8]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_condattr_t_2 = { "__sig",offsetof(struct _opaque_pthread_condattr_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_condattr_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_condattr_t_S = {"_opaque_pthread_condattr_t",&_VPXStruct__opaque_pthread_condattr_t_2,sizeof(struct _opaque_pthread_condattr_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_cond_t_1 = { "__opaque",offsetof(struct _opaque_pthread_cond_t,__opaque),sizeof(char[40]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_cond_t_2 = { "__sig",offsetof(struct _opaque_pthread_cond_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_cond_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_cond_t_S = {"_opaque_pthread_cond_t",&_VPXStruct__opaque_pthread_cond_t_2,sizeof(struct _opaque_pthread_cond_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_attr_t_1 = { "__opaque",offsetof(struct _opaque_pthread_attr_t,__opaque),sizeof(char[56]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_attr_t_2 = { "__sig",offsetof(struct _opaque_pthread_attr_t,__sig),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct__opaque_pthread_attr_t_1};
	VPL_ExtStructure _VPXStruct__opaque_pthread_attr_t_S = {"_opaque_pthread_attr_t",&_VPXStruct__opaque_pthread_attr_t_2,sizeof(struct _opaque_pthread_attr_t)};

	VPL_ExtField _VPXStruct___darwin_pthread_handler_rec_1 = { "__next",offsetof(struct __darwin_pthread_handler_rec,__next),sizeof(void *),kPointerType,"__darwin_pthread_handler_rec",1,12,"T*",NULL};
	VPL_ExtField _VPXStruct___darwin_pthread_handler_rec_2 = { "__arg",offsetof(struct __darwin_pthread_handler_rec,__arg),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct___darwin_pthread_handler_rec_1};
	VPL_ExtField _VPXStruct___darwin_pthread_handler_rec_3 = { "__routine",offsetof(struct __darwin_pthread_handler_rec,__routine),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct___darwin_pthread_handler_rec_2};
	VPL_ExtStructure _VPXStruct___darwin_pthread_handler_rec_S = {"__darwin_pthread_handler_rec",&_VPXStruct___darwin_pthread_handler_rec_3,sizeof(struct __darwin_pthread_handler_rec)};


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
	VPL_Parameter _IMP_3 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _IMP_2 = { kPointerType,0,"objc_selector",1,0,&_IMP_3};
	VPL_Parameter _IMP_1 = { kPointerType,4,"objc_object",1,0,&_IMP_2};
	VPL_ExtProcedure _IMP_F = {"IMP",NULL,&_IMP_1,&_IMP_R};


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

	VPL_Parameter __objc_msgForward_stret_3 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter __objc_msgForward_stret_2 = { kPointerType,0,"objc_selector",1,0,&__objc_msgForward_stret_3};
	VPL_Parameter __objc_msgForward_stret_1 = { kPointerType,4,"objc_object",1,0,&__objc_msgForward_stret_2};
	VPL_ExtProcedure __objc_msgForward_stret_F = {"_objc_msgForward_stret",_objc_msgForward_stret,&__objc_msgForward_stret_1,NULL};

	VPL_Parameter __objc_msgForward_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter __objc_msgForward_3 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter __objc_msgForward_2 = { kPointerType,0,"objc_selector",1,0,&__objc_msgForward_3};
	VPL_Parameter __objc_msgForward_1 = { kPointerType,4,"objc_object",1,0,&__objc_msgForward_2};
	VPL_ExtProcedure __objc_msgForward_F = {"_objc_msgForward",_objc_msgForward,&__objc_msgForward_1,&__objc_msgForward_R};

	VPL_Parameter _method_invoke_stret_3 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _method_invoke_stret_2 = { kPointerType,12,"objc_method",1,0,&_method_invoke_stret_3};
	VPL_Parameter _method_invoke_stret_1 = { kPointerType,4,"objc_object",1,0,&_method_invoke_stret_2};
	VPL_ExtProcedure _method_invoke_stret_F = {"method_invoke_stret",method_invoke_stret,&_method_invoke_stret_1,NULL};

	VPL_Parameter _method_invoke_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _method_invoke_3 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _method_invoke_2 = { kPointerType,12,"objc_method",1,0,&_method_invoke_3};
	VPL_Parameter _method_invoke_1 = { kPointerType,4,"objc_object",1,0,&_method_invoke_2};
	VPL_ExtProcedure _method_invoke_F = {"method_invoke",method_invoke,&_method_invoke_1,&_method_invoke_R};
/*
	VPL_Parameter _objc_msgSend_fpret_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _objc_msgSend_fpret_3 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _objc_msgSend_fpret_2 = { kPointerType,0,"objc_selector",1,0,&_objc_msgSend_fpret_3};
	VPL_Parameter _objc_msgSend_fpret_1 = { kPointerType,4,"objc_object",1,0,&_objc_msgSend_fpret_2};
	VPL_ExtProcedure _objc_msgSend_fpret_F = {"objc_msgSend_fpret",objc_msgSend_fpret,&_objc_msgSend_fpret_1,&_objc_msgSend_fpret_R};
*/
	VPL_Parameter _objc_msgSendSuper_stret_4 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _objc_msgSendSuper_stret_3 = { kPointerType,0,"objc_selector",1,0,&_objc_msgSendSuper_stret_4};
	VPL_Parameter _objc_msgSendSuper_stret_2 = { kPointerType,8,"objc_super",1,0,&_objc_msgSendSuper_stret_3};
	VPL_Parameter _objc_msgSendSuper_stret_1 = { kPointerType,0,"void",1,0,&_objc_msgSendSuper_stret_2};
	VPL_ExtProcedure _objc_msgSendSuper_stret_F = {"objc_msgSendSuper_stret",objc_msgSendSuper_stret,&_objc_msgSendSuper_stret_1,NULL};

	VPL_Parameter _objc_msgSend_stret_4 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _objc_msgSend_stret_3 = { kPointerType,0,"objc_selector",1,0,&_objc_msgSend_stret_4};
	VPL_Parameter _objc_msgSend_stret_2 = { kPointerType,4,"objc_object",1,0,&_objc_msgSend_stret_3};
	VPL_Parameter _objc_msgSend_stret_1 = { kPointerType,0,"void",1,0,&_objc_msgSend_stret_2};
	VPL_ExtProcedure _objc_msgSend_stret_F = {"objc_msgSend_stret",objc_msgSend_stret,&_objc_msgSend_stret_1,NULL};

	VPL_Parameter _objc_msgSendSuper_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_msgSendSuper_3 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _objc_msgSendSuper_2 = { kPointerType,0,"objc_selector",1,0,&_objc_msgSendSuper_3};
	VPL_Parameter _objc_msgSendSuper_1 = { kPointerType,8,"objc_super",1,0,&_objc_msgSendSuper_2};
	VPL_ExtProcedure _objc_msgSendSuper_F = {"objc_msgSendSuper",objc_msgSendSuper,&_objc_msgSendSuper_1,&_objc_msgSendSuper_R};

	VPL_Parameter _objc_msgSend_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_msgSend_3 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _objc_msgSend_2 = { kPointerType,0,"objc_selector",1,0,&_objc_msgSend_3};
	VPL_Parameter _objc_msgSend_1 = { kPointerType,4,"objc_object",1,0,&_objc_msgSend_2};
	VPL_ExtProcedure _objc_msgSend_F = {"objc_msgSend",objc_msgSend,&_objc_msgSend_1,&_objc_msgSend_R};

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

	VPL_Parameter _class_nextMethodList_R = { kPointerType,24,"objc_method_list",1,0,NULL};
	VPL_Parameter _class_nextMethodList_2 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _class_nextMethodList_1 = { kPointerType,40,"objc_class",1,0,&_class_nextMethodList_2};
	VPL_ExtProcedure _class_nextMethodList_F = {"class_nextMethodList",class_nextMethodList,&_class_nextMethodList_1,&_class_nextMethodList_R};

	VPL_Parameter _objc_getOrigClass_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _objc_getOrigClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_getOrigClass_F = {"objc_getOrigClass",objc_getOrigClass,&_objc_getOrigClass_1,&_objc_getOrigClass_R};

	VPL_Parameter _class_lookupMethod_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _class_lookupMethod_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_lookupMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_lookupMethod_2};
	VPL_ExtProcedure _class_lookupMethod_F = {"class_lookupMethod",class_lookupMethod,&_class_lookupMethod_1,&_class_lookupMethod_R};

	VPL_Parameter _class_respondsToMethod_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _class_respondsToMethod_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_respondsToMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_respondsToMethod_2};
	VPL_ExtProcedure _class_respondsToMethod_F = {"class_respondsToMethod",class_respondsToMethod,&_class_respondsToMethod_1,&_class_respondsToMethod_R};

	VPL_Parameter _method_getArgumentInfo_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_getArgumentInfo_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _method_getArgumentInfo_3 = { kPointerType,1,"char",2,0,&_method_getArgumentInfo_4};
	VPL_Parameter _method_getArgumentInfo_2 = { kIntType,4,NULL,0,0,&_method_getArgumentInfo_3};
	VPL_Parameter _method_getArgumentInfo_1 = { kPointerType,12,"objc_method",1,0,&_method_getArgumentInfo_2};
	VPL_ExtProcedure _method_getArgumentInfo_F = {"method_getArgumentInfo",method_getArgumentInfo,&_method_getArgumentInfo_1,&_method_getArgumentInfo_R};

	VPL_Parameter _method_getSizeOfArguments_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_getSizeOfArguments_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_getSizeOfArguments_F = {"method_getSizeOfArguments",method_getSizeOfArguments,&_method_getSizeOfArguments_1,&_method_getSizeOfArguments_R};

	VPL_Parameter _class_poseAs_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _class_poseAs_2 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _class_poseAs_1 = { kPointerType,40,"objc_class",1,0,&_class_poseAs_2};
	VPL_ExtProcedure _class_poseAs_F = {"class_poseAs",class_poseAs,&_class_poseAs_1,&_class_poseAs_R};

	VPL_Parameter _class_removeMethods_2 = { kPointerType,24,"objc_method_list",1,0,NULL};
	VPL_Parameter _class_removeMethods_1 = { kPointerType,40,"objc_class",1,0,&_class_removeMethods_2};
	VPL_ExtProcedure _class_removeMethods_F = {"class_removeMethods",class_removeMethods,&_class_removeMethods_1,NULL};

	VPL_Parameter _class_addMethods_2 = { kPointerType,24,"objc_method_list",1,0,NULL};
	VPL_Parameter _class_addMethods_1 = { kPointerType,40,"objc_class",1,0,&_class_addMethods_2};
	VPL_ExtProcedure _class_addMethods_F = {"class_addMethods",class_addMethods,&_class_addMethods_1,NULL};

	VPL_Parameter _class_createInstanceFromZone_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _class_createInstanceFromZone_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _class_createInstanceFromZone_2 = { kUnsignedType,4,NULL,0,0,&_class_createInstanceFromZone_3};
	VPL_Parameter _class_createInstanceFromZone_1 = { kPointerType,40,"objc_class",1,0,&_class_createInstanceFromZone_2};
	VPL_ExtProcedure _class_createInstanceFromZone_F = {"class_createInstanceFromZone",class_createInstanceFromZone,&_class_createInstanceFromZone_1,&_class_createInstanceFromZone_R};

	VPL_Parameter _objc_setMultithreaded_1 = { kIntType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _objc_setMultithreaded_F = {"objc_setMultithreaded",objc_setMultithreaded,&_objc_setMultithreaded_1,NULL};

	VPL_Parameter _objc_setClassHandler_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _objc_setClassHandler_F = {"objc_setClassHandler",objc_setClassHandler,&_objc_setClassHandler_1,NULL};

	VPL_Parameter _objc_addClass_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _objc_addClass_F = {"objc_addClass",objc_addClass,&_objc_addClass_1,NULL};

	VPL_Parameter _objc_getClasses_R = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _objc_getClasses_F = {"objc_getClasses",objc_getClasses,NULL,&_objc_getClasses_R};

	VPL_Parameter _object_reallocFromZone_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _object_reallocFromZone_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _object_reallocFromZone_2 = { kUnsignedType,4,NULL,0,0,&_object_reallocFromZone_3};
	VPL_Parameter _object_reallocFromZone_1 = { kPointerType,4,"objc_object",1,0,&_object_reallocFromZone_2};
	VPL_ExtProcedure _object_reallocFromZone_F = {"object_reallocFromZone",object_reallocFromZone,&_object_reallocFromZone_1,&_object_reallocFromZone_R};

	VPL_Parameter _object_realloc_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _object_realloc_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _object_realloc_1 = { kPointerType,4,"objc_object",1,0,&_object_realloc_2};
	VPL_ExtProcedure _object_realloc_F = {"object_realloc",object_realloc,&_object_realloc_1,&_object_realloc_R};

	VPL_Parameter _object_copyFromZone_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _object_copyFromZone_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _object_copyFromZone_2 = { kUnsignedType,4,NULL,0,0,&_object_copyFromZone_3};
	VPL_Parameter _object_copyFromZone_1 = { kPointerType,4,"objc_object",1,0,&_object_copyFromZone_2};
	VPL_ExtProcedure _object_copyFromZone_F = {"object_copyFromZone",object_copyFromZone,&_object_copyFromZone_1,&_object_copyFromZone_R};

	VPL_Parameter _objc_removeAssociatedObjects_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _objc_removeAssociatedObjects_F = {"objc_removeAssociatedObjects",objc_removeAssociatedObjects,&_objc_removeAssociatedObjects_1,NULL};

	VPL_Parameter _objc_getAssociatedObject_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_getAssociatedObject_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _objc_getAssociatedObject_1 = { kPointerType,4,"objc_object",1,0,&_objc_getAssociatedObject_2};
	VPL_ExtProcedure _objc_getAssociatedObject_F = {"objc_getAssociatedObject",objc_getAssociatedObject,&_objc_getAssociatedObject_1,&_objc_getAssociatedObject_R};

	VPL_Parameter _objc_setAssociatedObject_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_setAssociatedObject_3 = { kPointerType,4,"objc_object",1,0,&_objc_setAssociatedObject_4};
	VPL_Parameter _objc_setAssociatedObject_2 = { kPointerType,0,"void",1,0,&_objc_setAssociatedObject_3};
	VPL_Parameter _objc_setAssociatedObject_1 = { kPointerType,4,"objc_object",1,0,&_objc_setAssociatedObject_2};
	VPL_ExtProcedure _objc_setAssociatedObject_F = {"objc_setAssociatedObject",objc_setAssociatedObject,&_objc_setAssociatedObject_1,NULL};

	VPL_Parameter _objc_setForwardHandler_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _objc_setForwardHandler_1 = { kPointerType,0,"void",1,0,&_objc_setForwardHandler_2};
	VPL_ExtProcedure _objc_setForwardHandler_F = {"objc_setForwardHandler",objc_setForwardHandler,&_objc_setForwardHandler_1,NULL};

	VPL_Parameter _objc_setEnumerationMutationHandler_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _objc_setEnumerationMutationHandler_F = {"objc_setEnumerationMutationHandler",objc_setEnumerationMutationHandler,&_objc_setEnumerationMutationHandler_1,NULL};

	VPL_Parameter _objc_enumerationMutation_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _objc_enumerationMutation_F = {"objc_enumerationMutation",objc_enumerationMutation,&_objc_enumerationMutation_1,NULL};

	VPL_Parameter _sel_isEqual_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _sel_isEqual_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _sel_isEqual_1 = { kPointerType,0,"objc_selector",1,0,&_sel_isEqual_2};
	VPL_ExtProcedure _sel_isEqual_F = {"sel_isEqual",sel_isEqual,&_sel_isEqual_1,&_sel_isEqual_R};

	VPL_Parameter _objc_copyClassNamesForImage_R = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _objc_copyClassNamesForImage_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _objc_copyClassNamesForImage_1 = { kPointerType,1,"char",1,1,&_objc_copyClassNamesForImage_2};
	VPL_ExtProcedure _objc_copyClassNamesForImage_F = {"objc_copyClassNamesForImage",objc_copyClassNamesForImage,&_objc_copyClassNamesForImage_1,&_objc_copyClassNamesForImage_R};

	VPL_Parameter _class_getImageName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _class_getImageName_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_getImageName_F = {"class_getImageName",class_getImageName,&_class_getImageName_1,&_class_getImageName_R};

	VPL_Parameter _objc_copyImageNames_R = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _objc_copyImageNames_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _objc_copyImageNames_F = {"objc_copyImageNames",objc_copyImageNames,&_objc_copyImageNames_1,&_objc_copyImageNames_R};

	VPL_Parameter _protocol_copyProtocolList_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _protocol_copyProtocolList_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _protocol_copyProtocolList_1 = { kPointerType,4,"objc_object",1,0,&_protocol_copyProtocolList_2};
	VPL_ExtProcedure _protocol_copyProtocolList_F = {"protocol_copyProtocolList",protocol_copyProtocolList,&_protocol_copyProtocolList_1,&_protocol_copyProtocolList_R};

	VPL_Parameter _protocol_copyPropertyList_R = { kPointerType,0,"objc_property",2,0,NULL};
	VPL_Parameter _protocol_copyPropertyList_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _protocol_copyPropertyList_1 = { kPointerType,4,"objc_object",1,0,&_protocol_copyPropertyList_2};
	VPL_ExtProcedure _protocol_copyPropertyList_F = {"protocol_copyPropertyList",protocol_copyPropertyList,&_protocol_copyPropertyList_1,&_protocol_copyPropertyList_R};

	VPL_Parameter _protocol_getProperty_R = { kPointerType,0,"objc_property",1,0,NULL};
	VPL_Parameter _protocol_getProperty_4 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _protocol_getProperty_3 = { kIntType,1,NULL,0,0,&_protocol_getProperty_4};
	VPL_Parameter _protocol_getProperty_2 = { kPointerType,1,"char",1,1,&_protocol_getProperty_3};
	VPL_Parameter _protocol_getProperty_1 = { kPointerType,4,"objc_object",1,0,&_protocol_getProperty_2};
	VPL_ExtProcedure _protocol_getProperty_F = {"protocol_getProperty",protocol_getProperty,&_protocol_getProperty_1,&_protocol_getProperty_R};

	VPL_Parameter _protocol_copyMethodDescriptionList_R = { kPointerType,8,"objc_method_description",1,0,NULL};
	VPL_Parameter _protocol_copyMethodDescriptionList_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _protocol_copyMethodDescriptionList_3 = { kIntType,1,NULL,0,0,&_protocol_copyMethodDescriptionList_4};
	VPL_Parameter _protocol_copyMethodDescriptionList_2 = { kIntType,1,NULL,0,0,&_protocol_copyMethodDescriptionList_3};
	VPL_Parameter _protocol_copyMethodDescriptionList_1 = { kPointerType,4,"objc_object",1,0,&_protocol_copyMethodDescriptionList_2};
	VPL_ExtProcedure _protocol_copyMethodDescriptionList_F = {"protocol_copyMethodDescriptionList",protocol_copyMethodDescriptionList,&_protocol_copyMethodDescriptionList_1,&_protocol_copyMethodDescriptionList_R};

	VPL_Parameter _protocol_getMethodDescription_R = { kStructureType,8,"objc_method_description",0,0,NULL};
	VPL_Parameter _protocol_getMethodDescription_4 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _protocol_getMethodDescription_3 = { kIntType,1,NULL,0,0,&_protocol_getMethodDescription_4};
	VPL_Parameter _protocol_getMethodDescription_2 = { kPointerType,0,"objc_selector",1,0,&_protocol_getMethodDescription_3};
	VPL_Parameter _protocol_getMethodDescription_1 = { kPointerType,4,"objc_object",1,0,&_protocol_getMethodDescription_2};
	VPL_ExtProcedure _protocol_getMethodDescription_F = {"protocol_getMethodDescription",protocol_getMethodDescription,&_protocol_getMethodDescription_1,&_protocol_getMethodDescription_R};

	VPL_Parameter _protocol_getName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _protocol_getName_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _protocol_getName_F = {"protocol_getName",protocol_getName,&_protocol_getName_1,&_protocol_getName_R};

	VPL_Parameter _protocol_isEqual_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _protocol_isEqual_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _protocol_isEqual_1 = { kPointerType,4,"objc_object",1,0,&_protocol_isEqual_2};
	VPL_ExtProcedure _protocol_isEqual_F = {"protocol_isEqual",protocol_isEqual,&_protocol_isEqual_1,&_protocol_isEqual_R};

	VPL_Parameter _protocol_conformsToProtocol_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _protocol_conformsToProtocol_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _protocol_conformsToProtocol_1 = { kPointerType,4,"objc_object",1,0,&_protocol_conformsToProtocol_2};
	VPL_ExtProcedure _protocol_conformsToProtocol_F = {"protocol_conformsToProtocol",protocol_conformsToProtocol,&_protocol_conformsToProtocol_1,&_protocol_conformsToProtocol_R};

	VPL_Parameter _property_getAttributes_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _property_getAttributes_1 = { kPointerType,0,"objc_property",1,0,NULL};
	VPL_ExtProcedure _property_getAttributes_F = {"property_getAttributes",property_getAttributes,&_property_getAttributes_1,&_property_getAttributes_R};

	VPL_Parameter _property_getName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _property_getName_1 = { kPointerType,0,"objc_property",1,0,NULL};
	VPL_ExtProcedure _property_getName_F = {"property_getName",property_getName,&_property_getName_1,&_property_getName_R};

	VPL_Parameter _ivar_getOffset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ivar_getOffset_1 = { kPointerType,16,"objc_ivar",1,0,NULL};
	VPL_ExtProcedure _ivar_getOffset_F = {"ivar_getOffset",ivar_getOffset,&_ivar_getOffset_1,&_ivar_getOffset_R};

	VPL_Parameter _ivar_getTypeEncoding_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ivar_getTypeEncoding_1 = { kPointerType,16,"objc_ivar",1,0,NULL};
	VPL_ExtProcedure _ivar_getTypeEncoding_F = {"ivar_getTypeEncoding",ivar_getTypeEncoding,&_ivar_getTypeEncoding_1,&_ivar_getTypeEncoding_R};

	VPL_Parameter _ivar_getName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ivar_getName_1 = { kPointerType,16,"objc_ivar",1,0,NULL};
	VPL_ExtProcedure _ivar_getName_F = {"ivar_getName",ivar_getName,&_ivar_getName_1,&_ivar_getName_R};

	VPL_Parameter _method_exchangeImplementations_2 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_Parameter _method_exchangeImplementations_1 = { kPointerType,12,"objc_method",1,0,&_method_exchangeImplementations_2};
	VPL_ExtProcedure _method_exchangeImplementations_F = {"method_exchangeImplementations",method_exchangeImplementations,&_method_exchangeImplementations_1,NULL};

	VPL_Parameter _method_setImplementation_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _method_setImplementation_2 = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _method_setImplementation_1 = { kPointerType,12,"objc_method",1,0,&_method_setImplementation_2};
	VPL_ExtProcedure _method_setImplementation_F = {"method_setImplementation",method_setImplementation,&_method_setImplementation_1,&_method_setImplementation_R};

	VPL_Parameter _method_getDescription_R = { kPointerType,8,"objc_method_description",1,0,NULL};
	VPL_Parameter _method_getDescription_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_getDescription_F = {"method_getDescription",method_getDescription,&_method_getDescription_1,&_method_getDescription_R};

	VPL_Parameter _method_getArgumentType_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_getArgumentType_3 = { kPointerType,1,"char",1,0,&_method_getArgumentType_4};
	VPL_Parameter _method_getArgumentType_2 = { kUnsignedType,4,NULL,0,0,&_method_getArgumentType_3};
	VPL_Parameter _method_getArgumentType_1 = { kPointerType,12,"objc_method",1,0,&_method_getArgumentType_2};
	VPL_ExtProcedure _method_getArgumentType_F = {"method_getArgumentType",method_getArgumentType,&_method_getArgumentType_1,NULL};

	VPL_Parameter _method_getReturnType_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_getReturnType_2 = { kPointerType,1,"char",1,0,&_method_getReturnType_3};
	VPL_Parameter _method_getReturnType_1 = { kPointerType,12,"objc_method",1,0,&_method_getReturnType_2};
	VPL_ExtProcedure _method_getReturnType_F = {"method_getReturnType",method_getReturnType,&_method_getReturnType_1,NULL};

	VPL_Parameter _method_copyArgumentType_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _method_copyArgumentType_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_copyArgumentType_1 = { kPointerType,12,"objc_method",1,0,&_method_copyArgumentType_2};
	VPL_ExtProcedure _method_copyArgumentType_F = {"method_copyArgumentType",method_copyArgumentType,&_method_copyArgumentType_1,&_method_copyArgumentType_R};

	VPL_Parameter _method_copyReturnType_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _method_copyReturnType_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_copyReturnType_F = {"method_copyReturnType",method_copyReturnType,&_method_copyReturnType_1,&_method_copyReturnType_R};

	VPL_Parameter _method_getNumberOfArguments_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _method_getNumberOfArguments_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_getNumberOfArguments_F = {"method_getNumberOfArguments",method_getNumberOfArguments,&_method_getNumberOfArguments_1,&_method_getNumberOfArguments_R};

	VPL_Parameter _method_getTypeEncoding_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _method_getTypeEncoding_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_getTypeEncoding_F = {"method_getTypeEncoding",method_getTypeEncoding,&_method_getTypeEncoding_1,&_method_getTypeEncoding_R};

	VPL_Parameter _method_getImplementation_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _method_getImplementation_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_getImplementation_F = {"method_getImplementation",method_getImplementation,&_method_getImplementation_1,&_method_getImplementation_R};

	VPL_Parameter _method_getName_R = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _method_getName_1 = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_ExtProcedure _method_getName_F = {"method_getName",method_getName,&_method_getName_1,&_method_getName_R};

	VPL_Parameter _class_setWeakIvarLayout_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_setWeakIvarLayout_1 = { kPointerType,40,"objc_class",1,0,&_class_setWeakIvarLayout_2};
	VPL_ExtProcedure _class_setWeakIvarLayout_F = {"class_setWeakIvarLayout",class_setWeakIvarLayout,&_class_setWeakIvarLayout_1,NULL};

	VPL_Parameter _class_setIvarLayout_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_setIvarLayout_1 = { kPointerType,40,"objc_class",1,0,&_class_setIvarLayout_2};
	VPL_ExtProcedure _class_setIvarLayout_F = {"class_setIvarLayout",class_setIvarLayout,&_class_setIvarLayout_1,NULL};

	VPL_Parameter _class_addProtocol_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _class_addProtocol_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _class_addProtocol_1 = { kPointerType,40,"objc_class",1,0,&_class_addProtocol_2};
	VPL_ExtProcedure _class_addProtocol_F = {"class_addProtocol",class_addProtocol,&_class_addProtocol_1,&_class_addProtocol_R};

	VPL_Parameter _class_addIvar_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _class_addIvar_5 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_addIvar_4 = { kUnsignedType,1,NULL,0,0,&_class_addIvar_5};
	VPL_Parameter _class_addIvar_3 = { kUnsignedType,4,NULL,0,0,&_class_addIvar_4};
	VPL_Parameter _class_addIvar_2 = { kPointerType,1,"char",1,1,&_class_addIvar_3};
	VPL_Parameter _class_addIvar_1 = { kPointerType,40,"objc_class",1,0,&_class_addIvar_2};
	VPL_ExtProcedure _class_addIvar_F = {"class_addIvar",class_addIvar,&_class_addIvar_1,&_class_addIvar_R};

	VPL_Parameter _class_replaceMethod_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _class_replaceMethod_4 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_replaceMethod_3 = { kPointerType,4,"objc_object",2,0,&_class_replaceMethod_4};
	VPL_Parameter _class_replaceMethod_2 = { kPointerType,0,"objc_selector",1,0,&_class_replaceMethod_3};
	VPL_Parameter _class_replaceMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_replaceMethod_2};
	VPL_ExtProcedure _class_replaceMethod_F = {"class_replaceMethod",class_replaceMethod,&_class_replaceMethod_1,&_class_replaceMethod_R};

	VPL_Parameter _class_addMethod_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _class_addMethod_4 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_addMethod_3 = { kPointerType,4,"objc_object",2,0,&_class_addMethod_4};
	VPL_Parameter _class_addMethod_2 = { kPointerType,0,"objc_selector",1,0,&_class_addMethod_3};
	VPL_Parameter _class_addMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_addMethod_2};
	VPL_ExtProcedure _class_addMethod_F = {"class_addMethod",class_addMethod,&_class_addMethod_1,&_class_addMethod_R};

	VPL_Parameter _objc_disposeClassPair_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _objc_disposeClassPair_F = {"objc_disposeClassPair",objc_disposeClassPair,&_objc_disposeClassPair_1,NULL};

	VPL_Parameter _objc_duplicateClass_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _objc_duplicateClass_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_duplicateClass_2 = { kPointerType,1,"char",1,1,&_objc_duplicateClass_3};
	VPL_Parameter _objc_duplicateClass_1 = { kPointerType,40,"objc_class",1,0,&_objc_duplicateClass_2};
	VPL_ExtProcedure _objc_duplicateClass_F = {"objc_duplicateClass",objc_duplicateClass,&_objc_duplicateClass_1,&_objc_duplicateClass_R};

	VPL_Parameter _objc_registerClassPair_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _objc_registerClassPair_F = {"objc_registerClassPair",objc_registerClassPair,&_objc_registerClassPair_1,NULL};

	VPL_Parameter _objc_allocateClassPair_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _objc_allocateClassPair_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_allocateClassPair_2 = { kPointerType,1,"char",1,1,&_objc_allocateClassPair_3};
	VPL_Parameter _objc_allocateClassPair_1 = { kPointerType,40,"objc_class",1,0,&_objc_allocateClassPair_2};
	VPL_ExtProcedure _objc_allocateClassPair_F = {"objc_allocateClassPair",objc_allocateClassPair,&_objc_allocateClassPair_1,&_objc_allocateClassPair_R};

	VPL_Parameter _class_createInstance_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _class_createInstance_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _class_createInstance_1 = { kPointerType,40,"objc_class",1,0,&_class_createInstance_2};
	VPL_ExtProcedure _class_createInstance_F = {"class_createInstance",class_createInstance,&_class_createInstance_1,&_class_createInstance_R};

	VPL_Parameter _class_getWeakIvarLayout_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _class_getWeakIvarLayout_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_getWeakIvarLayout_F = {"class_getWeakIvarLayout",class_getWeakIvarLayout,&_class_getWeakIvarLayout_1,&_class_getWeakIvarLayout_R};

	VPL_Parameter _class_getIvarLayout_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _class_getIvarLayout_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_getIvarLayout_F = {"class_getIvarLayout",class_getIvarLayout,&_class_getIvarLayout_1,&_class_getIvarLayout_R};

	VPL_Parameter _class_copyPropertyList_R = { kPointerType,0,"objc_property",2,0,NULL};
	VPL_Parameter _class_copyPropertyList_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _class_copyPropertyList_1 = { kPointerType,40,"objc_class",1,0,&_class_copyPropertyList_2};
	VPL_ExtProcedure _class_copyPropertyList_F = {"class_copyPropertyList",class_copyPropertyList,&_class_copyPropertyList_1,&_class_copyPropertyList_R};

	VPL_Parameter _class_getProperty_R = { kPointerType,0,"objc_property",1,0,NULL};
	VPL_Parameter _class_getProperty_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_getProperty_1 = { kPointerType,40,"objc_class",1,0,&_class_getProperty_2};
	VPL_ExtProcedure _class_getProperty_F = {"class_getProperty",class_getProperty,&_class_getProperty_1,&_class_getProperty_R};

	VPL_Parameter _class_copyProtocolList_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _class_copyProtocolList_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _class_copyProtocolList_1 = { kPointerType,40,"objc_class",1,0,&_class_copyProtocolList_2};
	VPL_ExtProcedure _class_copyProtocolList_F = {"class_copyProtocolList",class_copyProtocolList,&_class_copyProtocolList_1,&_class_copyProtocolList_R};

	VPL_Parameter _class_conformsToProtocol_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _class_conformsToProtocol_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _class_conformsToProtocol_1 = { kPointerType,40,"objc_class",1,0,&_class_conformsToProtocol_2};
	VPL_ExtProcedure _class_conformsToProtocol_F = {"class_conformsToProtocol",class_conformsToProtocol,&_class_conformsToProtocol_1,&_class_conformsToProtocol_R};

	VPL_Parameter _class_copyMethodList_R = { kPointerType,12,"objc_method",2,0,NULL};
	VPL_Parameter _class_copyMethodList_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _class_copyMethodList_1 = { kPointerType,40,"objc_class",1,0,&_class_copyMethodList_2};
	VPL_ExtProcedure _class_copyMethodList_F = {"class_copyMethodList",class_copyMethodList,&_class_copyMethodList_1,&_class_copyMethodList_R};

	VPL_Parameter _class_respondsToSelector_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _class_respondsToSelector_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_respondsToSelector_1 = { kPointerType,40,"objc_class",1,0,&_class_respondsToSelector_2};
	VPL_ExtProcedure _class_respondsToSelector_F = {"class_respondsToSelector",class_respondsToSelector,&_class_respondsToSelector_1,&_class_respondsToSelector_R};

	VPL_Parameter _class_getMethodImplementation_stret_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _class_getMethodImplementation_stret_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_getMethodImplementation_stret_1 = { kPointerType,40,"objc_class",1,0,&_class_getMethodImplementation_stret_2};
	VPL_ExtProcedure _class_getMethodImplementation_stret_F = {"class_getMethodImplementation_stret",class_getMethodImplementation_stret,&_class_getMethodImplementation_stret_1,&_class_getMethodImplementation_stret_R};

	VPL_Parameter _class_getMethodImplementation_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _class_getMethodImplementation_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_getMethodImplementation_1 = { kPointerType,40,"objc_class",1,0,&_class_getMethodImplementation_2};
	VPL_ExtProcedure _class_getMethodImplementation_F = {"class_getMethodImplementation",class_getMethodImplementation,&_class_getMethodImplementation_1,&_class_getMethodImplementation_R};

	VPL_Parameter _class_getClassMethod_R = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_Parameter _class_getClassMethod_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_getClassMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_getClassMethod_2};
	VPL_ExtProcedure _class_getClassMethod_F = {"class_getClassMethod",class_getClassMethod,&_class_getClassMethod_1,&_class_getClassMethod_R};

	VPL_Parameter _class_getInstanceMethod_R = { kPointerType,12,"objc_method",1,0,NULL};
	VPL_Parameter _class_getInstanceMethod_2 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _class_getInstanceMethod_1 = { kPointerType,40,"objc_class",1,0,&_class_getInstanceMethod_2};
	VPL_ExtProcedure _class_getInstanceMethod_F = {"class_getInstanceMethod",class_getInstanceMethod,&_class_getInstanceMethod_1,&_class_getInstanceMethod_R};

	VPL_Parameter _class_copyIvarList_R = { kPointerType,16,"objc_ivar",2,0,NULL};
	VPL_Parameter _class_copyIvarList_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _class_copyIvarList_1 = { kPointerType,40,"objc_class",1,0,&_class_copyIvarList_2};
	VPL_ExtProcedure _class_copyIvarList_F = {"class_copyIvarList",class_copyIvarList,&_class_copyIvarList_1,&_class_copyIvarList_R};

	VPL_Parameter _class_getClassVariable_R = { kPointerType,16,"objc_ivar",1,0,NULL};
	VPL_Parameter _class_getClassVariable_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_getClassVariable_1 = { kPointerType,40,"objc_class",1,0,&_class_getClassVariable_2};
	VPL_ExtProcedure _class_getClassVariable_F = {"class_getClassVariable",class_getClassVariable,&_class_getClassVariable_1,&_class_getClassVariable_R};

	VPL_Parameter _class_getInstanceVariable_R = { kPointerType,16,"objc_ivar",1,0,NULL};
	VPL_Parameter _class_getInstanceVariable_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _class_getInstanceVariable_1 = { kPointerType,40,"objc_class",1,0,&_class_getInstanceVariable_2};
	VPL_ExtProcedure _class_getInstanceVariable_F = {"class_getInstanceVariable",class_getInstanceVariable,&_class_getInstanceVariable_1,&_class_getInstanceVariable_R};

	VPL_Parameter _class_getInstanceSize_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _class_getInstanceSize_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_getInstanceSize_F = {"class_getInstanceSize",class_getInstanceSize,&_class_getInstanceSize_1,&_class_getInstanceSize_R};

	VPL_Parameter _class_setVersion_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _class_setVersion_1 = { kPointerType,40,"objc_class",1,0,&_class_setVersion_2};
	VPL_ExtProcedure _class_setVersion_F = {"class_setVersion",class_setVersion,&_class_setVersion_1,NULL};

	VPL_Parameter _class_getVersion_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _class_getVersion_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_getVersion_F = {"class_getVersion",class_getVersion,&_class_getVersion_1,&_class_getVersion_R};

	VPL_Parameter _class_setSuperclass_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _class_setSuperclass_2 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _class_setSuperclass_1 = { kPointerType,40,"objc_class",1,0,&_class_setSuperclass_2};
	VPL_ExtProcedure _class_setSuperclass_F = {"class_setSuperclass",class_setSuperclass,&_class_setSuperclass_1,&_class_setSuperclass_R};

	VPL_Parameter _class_getSuperclass_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _class_getSuperclass_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_getSuperclass_F = {"class_getSuperclass",class_getSuperclass,&_class_getSuperclass_1,&_class_getSuperclass_R};

	VPL_Parameter _class_isMetaClass_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _class_isMetaClass_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_isMetaClass_F = {"class_isMetaClass",class_isMetaClass,&_class_isMetaClass_1,&_class_isMetaClass_R};

	VPL_Parameter _class_getName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _class_getName_1 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_ExtProcedure _class_getName_F = {"class_getName",class_getName,&_class_getName_1,&_class_getName_R};

	VPL_Parameter _objc_copyProtocolList_R = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _objc_copyProtocolList_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _objc_copyProtocolList_F = {"objc_copyProtocolList",objc_copyProtocolList,&_objc_copyProtocolList_1,&_objc_copyProtocolList_R};

	VPL_Parameter _objc_getProtocol_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_getProtocol_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_getProtocol_F = {"objc_getProtocol",objc_getProtocol,&_objc_getProtocol_1,&_objc_getProtocol_R};

	VPL_Parameter _objc_getClassList_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_getClassList_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _objc_getClassList_1 = { kPointerType,40,"objc_class",2,0,&_objc_getClassList_2};
	VPL_ExtProcedure _objc_getClassList_F = {"objc_getClassList",objc_getClassList,&_objc_getClassList_1,&_objc_getClassList_R};

	VPL_Parameter _objc_setFutureClass_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _objc_setFutureClass_1 = { kPointerType,40,"objc_class",1,0,&_objc_setFutureClass_2};
	VPL_ExtProcedure _objc_setFutureClass_F = {"objc_setFutureClass",objc_setFutureClass,&_objc_setFutureClass_1,NULL};

	VPL_Parameter _objc_getFutureClass_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _objc_getFutureClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_getFutureClass_F = {"objc_getFutureClass",objc_getFutureClass,&_objc_getFutureClass_1,&_objc_getFutureClass_R};

	VPL_Parameter _objc_getRequiredClass_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_getRequiredClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_getRequiredClass_F = {"objc_getRequiredClass",objc_getRequiredClass,&_objc_getRequiredClass_1,&_objc_getRequiredClass_R};

	VPL_Parameter _objc_lookUpClass_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_lookUpClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_lookUpClass_F = {"objc_lookUpClass",objc_lookUpClass,&_objc_lookUpClass_1,&_objc_lookUpClass_R};

	VPL_Parameter _objc_getMetaClass_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_getMetaClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_getMetaClass_F = {"objc_getMetaClass",objc_getMetaClass,&_objc_getMetaClass_1,&_objc_getMetaClass_R};

	VPL_Parameter _objc_getClass_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _objc_getClass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _objc_getClass_F = {"objc_getClass",objc_getClass,&_objc_getClass_1,&_objc_getClass_R};

	VPL_Parameter _object_getInstanceVariable_R = { kPointerType,16,"objc_ivar",1,0,NULL};
	VPL_Parameter _object_getInstanceVariable_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _object_getInstanceVariable_2 = { kPointerType,1,"char",1,1,&_object_getInstanceVariable_3};
	VPL_Parameter _object_getInstanceVariable_1 = { kPointerType,4,"objc_object",1,0,&_object_getInstanceVariable_2};
	VPL_ExtProcedure _object_getInstanceVariable_F = {"object_getInstanceVariable",object_getInstanceVariable,&_object_getInstanceVariable_1,&_object_getInstanceVariable_R};

	VPL_Parameter _object_setInstanceVariable_R = { kPointerType,16,"objc_ivar",1,0,NULL};
	VPL_Parameter _object_setInstanceVariable_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _object_setInstanceVariable_2 = { kPointerType,1,"char",1,1,&_object_setInstanceVariable_3};
	VPL_Parameter _object_setInstanceVariable_1 = { kPointerType,4,"objc_object",1,0,&_object_setInstanceVariable_2};
	VPL_ExtProcedure _object_setInstanceVariable_F = {"object_setInstanceVariable",object_setInstanceVariable,&_object_setInstanceVariable_1,&_object_setInstanceVariable_R};

	VPL_Parameter _object_setIvar_3 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _object_setIvar_2 = { kPointerType,16,"objc_ivar",1,0,&_object_setIvar_3};
	VPL_Parameter _object_setIvar_1 = { kPointerType,4,"objc_object",1,0,&_object_setIvar_2};
	VPL_ExtProcedure _object_setIvar_F = {"object_setIvar",object_setIvar,&_object_setIvar_1,NULL};

	VPL_Parameter _object_getIvar_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _object_getIvar_2 = { kPointerType,16,"objc_ivar",1,0,NULL};
	VPL_Parameter _object_getIvar_1 = { kPointerType,4,"objc_object",1,0,&_object_getIvar_2};
	VPL_ExtProcedure _object_getIvar_F = {"object_getIvar",object_getIvar,&_object_getIvar_1,&_object_getIvar_R};

	VPL_Parameter _object_setClass_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _object_setClass_2 = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _object_setClass_1 = { kPointerType,4,"objc_object",1,0,&_object_setClass_2};
	VPL_ExtProcedure _object_setClass_F = {"object_setClass",object_setClass,&_object_setClass_1,&_object_setClass_R};

	VPL_Parameter _object_getClass_R = { kPointerType,40,"objc_class",1,0,NULL};
	VPL_Parameter _object_getClass_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _object_getClass_F = {"object_getClass",object_getClass,&_object_getClass_1,&_object_getClass_R};

	VPL_Parameter _object_dispose_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _object_dispose_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _object_dispose_F = {"object_dispose",object_dispose,&_object_dispose_1,&_object_dispose_R};

	VPL_Parameter _object_copy_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _object_copy_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _object_copy_1 = { kPointerType,4,"objc_object",1,0,&_object_copy_2};
	VPL_ExtProcedure _object_copy_F = {"object_copy",object_copy,&_object_copy_1,&_object_copy_R};

	VPL_Parameter _sel_getUid_R = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _sel_getUid_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _sel_getUid_F = {"sel_getUid",sel_getUid,&_sel_getUid_1,&_sel_getUid_R};

	VPL_Parameter _sel_isMapped_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _sel_isMapped_1 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_ExtProcedure _sel_isMapped_F = {"sel_isMapped",sel_isMapped,&_sel_isMapped_1,&_sel_isMapped_R};

	VPL_Parameter _object_getIndexedIvars_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _object_getIndexedIvars_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _object_getIndexedIvars_F = {"object_getIndexedIvars",object_getIndexedIvars,&_object_getIndexedIvars_1,&_object_getIndexedIvars_R};

	VPL_Parameter _object_getClassName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _object_getClassName_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _object_getClassName_F = {"object_getClassName",object_getClassName,&_object_getClassName_1,&_object_getClassName_R};

	VPL_Parameter _sel_registerName_R = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _sel_registerName_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _sel_registerName_F = {"sel_registerName",sel_registerName,&_sel_registerName_1,&_sel_registerName_R};

	VPL_Parameter _sel_getName_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _sel_getName_1 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_ExtProcedure _sel_getName_F = {"sel_getName",sel_getName,&_sel_getName_1,&_sel_getName_R};

	VPL_Parameter ___darwin_fd_isset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___darwin_fd_isset_2 = { kPointerType,128,"fd_set",1,1,NULL};
	VPL_Parameter ___darwin_fd_isset_1 = { kIntType,4,NULL,0,0,&___darwin_fd_isset_2};
	VPL_ExtProcedure ___darwin_fd_isset_F = {"__darwin_fd_isset",__darwin_fd_isset,&___darwin_fd_isset_1,&___darwin_fd_isset_R};


VPL_DictionaryNode VPX_OBJC_Constants[] =	{
	{"OBJC_ASSOCIATION_COPY", &_OBJC_ASSOCIATION_COPY_C},
	{"OBJC_ASSOCIATION_RETAIN", &_OBJC_ASSOCIATION_RETAIN_C},
	{"OBJC_ASSOCIATION_COPY_NONATOMIC", &_OBJC_ASSOCIATION_COPY_NONATOMIC_C},
	{"OBJC_ASSOCIATION_RETAIN_NONATOMIC", &_OBJC_ASSOCIATION_RETAIN_NONATOMIC_C},
	{"OBJC_ASSOCIATION_ASSIGN", &_OBJC_ASSOCIATION_ASSIGN_C},
};

VPL_DictionaryNode VPX_OBJC_Structures[] =	{
	{"objc_super",&_VPXStruct_objc_super_S},
	{"objc_module",&_VPXStruct_objc_module_S},
	{"objc_symtab",&_VPXStruct_objc_symtab_S},
	{"objc_method_description_list",&_VPXStruct_objc_method_description_list_S},
	{"objc_method_description",&_VPXStruct_objc_method_description_S},
	{"objc_protocol_list",&_VPXStruct_objc_protocol_list_S},
	{"objc_cache",&_VPXStruct_objc_cache_S},
	{"objc_method_list",&_VPXStruct_objc_method_list_S},
	{"objc_ivar_list",&_VPXStruct_objc_ivar_list_S},
	{"objc_property",&_VPXStruct_objc_property_S},
	{"objc_category",&_VPXStruct_objc_category_S},
	{"objc_ivar",&_VPXStruct_objc_ivar_S},
	{"objc_method",&_VPXStruct_objc_method_S},
	{"objc_selector",&_VPXStruct_objc_selector_S},
	{"objc_object",&_VPXStruct_objc_object_S},
	{"objc_class",&_VPXStruct_objc_class_S},
	{"fd_set",&_VPXStruct_fd_set_S},
	{"_opaque_pthread_t",&_VPXStruct__opaque_pthread_t_S},
	{"_opaque_pthread_rwlockattr_t",&_VPXStruct__opaque_pthread_rwlockattr_t_S},
	{"_opaque_pthread_rwlock_t",&_VPXStruct__opaque_pthread_rwlock_t_S},
	{"_opaque_pthread_once_t",&_VPXStruct__opaque_pthread_once_t_S},
	{"_opaque_pthread_mutexattr_t",&_VPXStruct__opaque_pthread_mutexattr_t_S},
	{"_opaque_pthread_mutex_t",&_VPXStruct__opaque_pthread_mutex_t_S},
	{"_opaque_pthread_condattr_t",&_VPXStruct__opaque_pthread_condattr_t_S},
	{"_opaque_pthread_cond_t",&_VPXStruct__opaque_pthread_cond_t_S},
	{"_opaque_pthread_attr_t",&_VPXStruct__opaque_pthread_attr_t_S},
	{"__darwin_pthread_handler_rec",&_VPXStruct___darwin_pthread_handler_rec_S},
};

VPL_DictionaryNode VPX_OBJC_Procedures[] =	{
	{"IMP",&_IMP_F},
	{"objc_msgSendv_stret",&_objc_msgSendv_stret_F},
	{"objc_msgSendv",&_objc_msgSendv_F},
	{"_objc_msgForward_stret",&__objc_msgForward_stret_F},
	{"_objc_msgForward",&__objc_msgForward_F},
	{"method_invoke_stret",&_method_invoke_stret_F},
	{"method_invoke",&_method_invoke_F},
//	{"objc_msgSend_fpret",&_objc_msgSend_fpret_F},
	{"objc_msgSendSuper_stret",&_objc_msgSendSuper_stret_F},
	{"objc_msgSend_stret",&_objc_msgSend_stret_F},
	{"objc_msgSendSuper",&_objc_msgSendSuper_F},
	{"objc_msgSend",&_objc_msgSend_F},
	{"_error",&__error_F},
	{"_zoneCopy",&__zoneCopy_F},
	{"_zoneRealloc",&__zoneRealloc_F},
	{"_zoneAlloc",&__zoneAlloc_F},
	{"_dealloc",&__dealloc_F},
	{"_realloc",&__realloc_F},
	{"_copy",&__copy_F},
	{"_alloc",&__alloc_F},
	{"class_nextMethodList",&_class_nextMethodList_F},
	{"objc_getOrigClass",&_objc_getOrigClass_F},
	{"class_lookupMethod",&_class_lookupMethod_F},
	{"class_respondsToMethod",&_class_respondsToMethod_F},
	{"method_getArgumentInfo",&_method_getArgumentInfo_F},
	{"method_getSizeOfArguments",&_method_getSizeOfArguments_F},
	{"class_poseAs",&_class_poseAs_F},
	{"class_removeMethods",&_class_removeMethods_F},
	{"class_addMethods",&_class_addMethods_F},
	{"class_createInstanceFromZone",&_class_createInstanceFromZone_F},
	{"objc_setMultithreaded",&_objc_setMultithreaded_F},
	{"objc_setClassHandler",&_objc_setClassHandler_F},
	{"objc_addClass",&_objc_addClass_F},
	{"objc_getClasses",&_objc_getClasses_F},
	{"object_reallocFromZone",&_object_reallocFromZone_F},
	{"object_realloc",&_object_realloc_F},
	{"object_copyFromZone",&_object_copyFromZone_F},
	{"objc_removeAssociatedObjects",&_objc_removeAssociatedObjects_F},
	{"objc_getAssociatedObject",&_objc_getAssociatedObject_F},
	{"objc_setAssociatedObject",&_objc_setAssociatedObject_F},
	{"objc_setForwardHandler",&_objc_setForwardHandler_F},
	{"objc_setEnumerationMutationHandler",&_objc_setEnumerationMutationHandler_F},
	{"objc_enumerationMutation",&_objc_enumerationMutation_F},
	{"sel_isEqual",&_sel_isEqual_F},
	{"objc_copyClassNamesForImage",&_objc_copyClassNamesForImage_F},
	{"class_getImageName",&_class_getImageName_F},
	{"objc_copyImageNames",&_objc_copyImageNames_F},
	{"protocol_copyProtocolList",&_protocol_copyProtocolList_F},
	{"protocol_copyPropertyList",&_protocol_copyPropertyList_F},
	{"protocol_getProperty",&_protocol_getProperty_F},
	{"protocol_copyMethodDescriptionList",&_protocol_copyMethodDescriptionList_F},
	{"protocol_getMethodDescription",&_protocol_getMethodDescription_F},
	{"protocol_getName",&_protocol_getName_F},
	{"protocol_isEqual",&_protocol_isEqual_F},
	{"protocol_conformsToProtocol",&_protocol_conformsToProtocol_F},
	{"property_getAttributes",&_property_getAttributes_F},
	{"property_getName",&_property_getName_F},
	{"ivar_getOffset",&_ivar_getOffset_F},
	{"ivar_getTypeEncoding",&_ivar_getTypeEncoding_F},
	{"ivar_getName",&_ivar_getName_F},
	{"method_exchangeImplementations",&_method_exchangeImplementations_F},
	{"method_setImplementation",&_method_setImplementation_F},
	{"method_getDescription",&_method_getDescription_F},
	{"method_getArgumentType",&_method_getArgumentType_F},
	{"method_getReturnType",&_method_getReturnType_F},
	{"method_copyArgumentType",&_method_copyArgumentType_F},
	{"method_copyReturnType",&_method_copyReturnType_F},
	{"method_getNumberOfArguments",&_method_getNumberOfArguments_F},
	{"method_getTypeEncoding",&_method_getTypeEncoding_F},
	{"method_getImplementation",&_method_getImplementation_F},
	{"method_getName",&_method_getName_F},
	{"class_setWeakIvarLayout",&_class_setWeakIvarLayout_F},
	{"class_setIvarLayout",&_class_setIvarLayout_F},
	{"class_addProtocol",&_class_addProtocol_F},
	{"class_addIvar",&_class_addIvar_F},
	{"class_replaceMethod",&_class_replaceMethod_F},
	{"class_addMethod",&_class_addMethod_F},
	{"objc_disposeClassPair",&_objc_disposeClassPair_F},
	{"objc_duplicateClass",&_objc_duplicateClass_F},
	{"objc_registerClassPair",&_objc_registerClassPair_F},
	{"objc_allocateClassPair",&_objc_allocateClassPair_F},
	{"class_createInstance",&_class_createInstance_F},
	{"class_getWeakIvarLayout",&_class_getWeakIvarLayout_F},
	{"class_getIvarLayout",&_class_getIvarLayout_F},
	{"class_copyPropertyList",&_class_copyPropertyList_F},
	{"class_getProperty",&_class_getProperty_F},
	{"class_copyProtocolList",&_class_copyProtocolList_F},
	{"class_conformsToProtocol",&_class_conformsToProtocol_F},
	{"class_copyMethodList",&_class_copyMethodList_F},
	{"class_respondsToSelector",&_class_respondsToSelector_F},
	{"class_getMethodImplementation_stret",&_class_getMethodImplementation_stret_F},
	{"class_getMethodImplementation",&_class_getMethodImplementation_F},
	{"class_getClassMethod",&_class_getClassMethod_F},
	{"class_getInstanceMethod",&_class_getInstanceMethod_F},
	{"class_copyIvarList",&_class_copyIvarList_F},
	{"class_getClassVariable",&_class_getClassVariable_F},
	{"class_getInstanceVariable",&_class_getInstanceVariable_F},
	{"class_getInstanceSize",&_class_getInstanceSize_F},
	{"class_setVersion",&_class_setVersion_F},
	{"class_getVersion",&_class_getVersion_F},
	{"class_setSuperclass",&_class_setSuperclass_F},
	{"class_getSuperclass",&_class_getSuperclass_F},
	{"class_isMetaClass",&_class_isMetaClass_F},
	{"class_getName",&_class_getName_F},
	{"objc_copyProtocolList",&_objc_copyProtocolList_F},
	{"objc_getProtocol",&_objc_getProtocol_F},
	{"objc_getClassList",&_objc_getClassList_F},
	{"objc_setFutureClass",&_objc_setFutureClass_F},
	{"objc_getFutureClass",&_objc_getFutureClass_F},
	{"objc_getRequiredClass",&_objc_getRequiredClass_F},
	{"objc_lookUpClass",&_objc_lookUpClass_F},
	{"objc_getMetaClass",&_objc_getMetaClass_F},
	{"objc_getClass",&_objc_getClass_F},
	{"object_getInstanceVariable",&_object_getInstanceVariable_F},
	{"object_setInstanceVariable",&_object_setInstanceVariable_F},
	{"object_setIvar",&_object_setIvar_F},
	{"object_getIvar",&_object_getIvar_F},
	{"object_setClass",&_object_setClass_F},
	{"object_getClass",&_object_getClass_F},
	{"object_dispose",&_object_dispose_F},
	{"object_copy",&_object_copy_F},
	{"sel_getUid",&_sel_getUid_F},
	{"sel_isMapped",&_sel_isMapped_F},
	{"object_getIndexedIvars",&_object_getIndexedIvars_F},
	{"object_getClassName",&_object_getClassName_F},
	{"sel_registerName",&_sel_registerName_F},
	{"sel_getName",&_sel_getName_F},
	{"__darwin_fd_isset",&___darwin_fd_isset_F},

	
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

Nat4	VPX_OBJC_Constants_Number = 5;
Nat4	VPX_OBJC_Structures_Number = 27;
Nat4	VPX_OBJC_Procedures_Number = 128 + 11 - 1;

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
