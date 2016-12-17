/*
	
	MacOSX_Postgres.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/

#include "libpq-fe.h"
#include "libpq-fs.h" // Contains the definitions of INV_READ and INV_WRITE
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	

#pragma mark --------------- Constants ---------------

	VPL_ExtConstant _PQERRORS_VERBOSE_C = {"PQERRORS_VERBOSE",PQERRORS_VERBOSE,NULL};
	VPL_ExtConstant _PQERRORS_DEFAULT_C = {"PQERRORS_DEFAULT",PQERRORS_DEFAULT,NULL};
	VPL_ExtConstant _PQERRORS_TERSE_C = {"PQERRORS_TERSE",PQERRORS_TERSE,NULL};
	VPL_ExtConstant _PQTRANS_UNKNOWN_C = {"PQTRANS_UNKNOWN",PQTRANS_UNKNOWN,NULL};
	VPL_ExtConstant _PQTRANS_INERROR_C = {"PQTRANS_INERROR",PQTRANS_INERROR,NULL};
	VPL_ExtConstant _PQTRANS_INTRANS_C = {"PQTRANS_INTRANS",PQTRANS_INTRANS,NULL};
	VPL_ExtConstant _PQTRANS_ACTIVE_C = {"PQTRANS_ACTIVE",PQTRANS_ACTIVE,NULL};
	VPL_ExtConstant _PQTRANS_IDLE_C = {"PQTRANS_IDLE",PQTRANS_IDLE,NULL};
	VPL_ExtConstant _PGRES_FATAL_ERROR_C = {"PGRES_FATAL_ERROR",PGRES_FATAL_ERROR,NULL};
	VPL_ExtConstant _PGRES_NONFATAL_ERROR_C = {"PGRES_NONFATAL_ERROR",PGRES_NONFATAL_ERROR,NULL};
	VPL_ExtConstant _PGRES_BAD_RESPONSE_C = {"PGRES_BAD_RESPONSE",PGRES_BAD_RESPONSE,NULL};
	VPL_ExtConstant _PGRES_COPY_IN_C = {"PGRES_COPY_IN",PGRES_COPY_IN,NULL};
	VPL_ExtConstant _PGRES_COPY_OUT_C = {"PGRES_COPY_OUT",PGRES_COPY_OUT,NULL};
	VPL_ExtConstant _PGRES_TUPLES_OK_C = {"PGRES_TUPLES_OK",PGRES_TUPLES_OK,NULL};
	VPL_ExtConstant _PGRES_COMMAND_OK_C = {"PGRES_COMMAND_OK",PGRES_COMMAND_OK,NULL};
	VPL_ExtConstant _PGRES_EMPTY_QUERY_C = {"PGRES_EMPTY_QUERY",PGRES_EMPTY_QUERY,NULL};
	VPL_ExtConstant _PGRES_POLLING_ACTIVE_C = {"PGRES_POLLING_ACTIVE",PGRES_POLLING_ACTIVE,NULL};
	VPL_ExtConstant _PGRES_POLLING_OK_C = {"PGRES_POLLING_OK",PGRES_POLLING_OK,NULL};
	VPL_ExtConstant _PGRES_POLLING_WRITING_C = {"PGRES_POLLING_WRITING",PGRES_POLLING_WRITING,NULL};
	VPL_ExtConstant _PGRES_POLLING_READING_C = {"PGRES_POLLING_READING",PGRES_POLLING_READING,NULL};
	VPL_ExtConstant _PGRES_POLLING_FAILED_C = {"PGRES_POLLING_FAILED",PGRES_POLLING_FAILED,NULL};
	VPL_ExtConstant _CONNECTION_NEEDED_C = {"CONNECTION_NEEDED",CONNECTION_NEEDED,NULL};
	VPL_ExtConstant _CONNECTION_SSL_STARTUP_C = {"CONNECTION_SSL_STARTUP",CONNECTION_SSL_STARTUP,NULL};
	VPL_ExtConstant _CONNECTION_SETENV_C = {"CONNECTION_SETENV",CONNECTION_SETENV,NULL};
	VPL_ExtConstant _CONNECTION_AUTH_OK_C = {"CONNECTION_AUTH_OK",CONNECTION_AUTH_OK,NULL};
	VPL_ExtConstant _CONNECTION_AWAITING_RESPONSE_C = {"CONNECTION_AWAITING_RESPONSE",CONNECTION_AWAITING_RESPONSE,NULL};
	VPL_ExtConstant _CONNECTION_MADE_C = {"CONNECTION_MADE",CONNECTION_MADE,NULL};
	VPL_ExtConstant _CONNECTION_STARTED_C = {"CONNECTION_STARTED",CONNECTION_STARTED,NULL};
	VPL_ExtConstant _CONNECTION_BAD_C = {"CONNECTION_BAD",CONNECTION_BAD,NULL};
	VPL_ExtConstant _CONNECTION_OK_C = {"CONNECTION_OK",CONNECTION_OK,NULL};


#pragma mark --------------- Structures ---------------

	VPL_ExtField _VPXStruct__PQconninfoOption_7 = { "dispsize",offsetof(struct _PQconninfoOption,dispsize),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct__PQconninfoOption_6 = { "dispchar",offsetof(struct _PQconninfoOption,dispchar),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQconninfoOption_7};
	VPL_ExtField _VPXStruct__PQconninfoOption_5 = { "label",offsetof(struct _PQconninfoOption,label),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQconninfoOption_6};
	VPL_ExtField _VPXStruct__PQconninfoOption_4 = { "val",offsetof(struct _PQconninfoOption,val),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQconninfoOption_5};
	VPL_ExtField _VPXStruct__PQconninfoOption_3 = { "compiled",offsetof(struct _PQconninfoOption,compiled),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQconninfoOption_4};
	VPL_ExtField _VPXStruct__PQconninfoOption_2 = { "envvar",offsetof(struct _PQconninfoOption,envvar),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQconninfoOption_3};
	VPL_ExtField _VPXStruct__PQconninfoOption_1 = { "keyword",offsetof(struct _PQconninfoOption,keyword),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQconninfoOption_2};
	VPL_ExtStructure _VPXStruct__PQconninfoOption_S = {"_PQconninfoOption",&_VPXStruct__PQconninfoOption_1,sizeof(struct _PQconninfoOption)};

	VPL_ExtField _VPXStruct__PQprintOpt_10 = { "fieldName",offsetof(struct _PQprintOpt,fieldName),sizeof(void *),kPointerType,"char",2,1,"T*",NULL};
	VPL_ExtField _VPXStruct__PQprintOpt_9 = { "caption",offsetof(struct _PQprintOpt,caption),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQprintOpt_10};
	VPL_ExtField _VPXStruct__PQprintOpt_8 = { "tableOpt",offsetof(struct _PQprintOpt,tableOpt),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQprintOpt_9};
	VPL_ExtField _VPXStruct__PQprintOpt_7 = { "fieldSep",offsetof(struct _PQprintOpt,fieldSep),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct__PQprintOpt_8};
	VPL_ExtField _VPXStruct__PQprintOpt_6 = { "pager",offsetof(struct _PQprintOpt,pager),sizeof(char),kIntType,"char",1,1,"char",&_VPXStruct__PQprintOpt_7};
	VPL_ExtField _VPXStruct__PQprintOpt_5 = { "expanded",offsetof(struct _PQprintOpt,expanded),sizeof(char),kIntType,"char",1,1,"char",&_VPXStruct__PQprintOpt_6};
	VPL_ExtField _VPXStruct__PQprintOpt_4 = { "html3",offsetof(struct _PQprintOpt,html3),sizeof(char),kIntType,"char",1,1,"char",&_VPXStruct__PQprintOpt_5};
	VPL_ExtField _VPXStruct__PQprintOpt_3 = { "standard",offsetof(struct _PQprintOpt,standard),sizeof(char),kIntType,"char",1,1,"char",&_VPXStruct__PQprintOpt_4};
	VPL_ExtField _VPXStruct__PQprintOpt_2 = { "align",offsetof(struct _PQprintOpt,align),sizeof(char),kIntType,"char",1,1,"char",&_VPXStruct__PQprintOpt_3};
	VPL_ExtField _VPXStruct__PQprintOpt_1 = { "header",offsetof(struct _PQprintOpt,header),sizeof(char),kIntType,"char",1,1,"char",&_VPXStruct__PQprintOpt_2};
	VPL_ExtStructure _VPXStruct__PQprintOpt_S = {"_PQprintOpt",&_VPXStruct__PQprintOpt_1,sizeof(struct _PQprintOpt)};

	VPL_ExtField _VPXStruct_pgNotify_4 = { "next",offsetof(struct pgNotify,next),sizeof(void *),kPointerType,"pgNotify",1,16,"T*",NULL};
	VPL_ExtField _VPXStruct_pgNotify_3 = { "extra",offsetof(struct pgNotify,extra),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_pgNotify_4};
	VPL_ExtField _VPXStruct_pgNotify_2 = { "be_pid",offsetof(struct pgNotify,be_pid),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_pgNotify_3};
	VPL_ExtField _VPXStruct_pgNotify_1 = { "relname",offsetof(struct pgNotify,relname),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_pgNotify_2};
	VPL_ExtStructure _VPXStruct_pgNotify_S = {"pgNotify",&_VPXStruct_pgNotify_1,sizeof(struct pgNotify)};

	VPL_ExtField _VPXStruct___sFILE_20 = { "_offset",offsetof(struct __sFILE,_offset),sizeof(long long int),kIntType,"NULL",0,0,"long long int",NULL};
	VPL_ExtField _VPXStruct___sFILE_19 = { "_blksize",offsetof(struct __sFILE,_blksize),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct___sFILE_20};
	VPL_ExtField _VPXStruct___sFILE_18 = { "_lb",offsetof(struct __sFILE,_lb),sizeof(struct __sbuf),kStructureType,"NULL",0,0,"__sbuf",&_VPXStruct___sFILE_19};
	VPL_ExtField _VPXStruct___sFILE_17 = { "_nbuf",offsetof(struct __sFILE,_nbuf),sizeof(unsigned char[1]),kPointerType,"unsigned char",0,1,NULL,&_VPXStruct___sFILE_18};
	VPL_ExtField _VPXStruct___sFILE_16 = { "_ubuf",offsetof(struct __sFILE,_ubuf),sizeof(unsigned char[3]),kPointerType,"unsigned char",0,1,NULL,&_VPXStruct___sFILE_17};
	VPL_ExtField _VPXStruct___sFILE_15 = { "_ur",offsetof(struct __sFILE,_ur),sizeof(int),kIntType,"unsigned char",0,1,"int",&_VPXStruct___sFILE_16};
	VPL_ExtField _VPXStruct___sFILE_14 = { "_extra",offsetof(struct __sFILE,_extra),sizeof(void *),kPointerType,"__sFILEX",1,0,"T*",&_VPXStruct___sFILE_15};
	VPL_ExtField _VPXStruct___sFILE_13 = { "_ub",offsetof(struct __sFILE,_ub),sizeof(struct __sbuf),kStructureType,"__sFILEX",1,0,"__sbuf",&_VPXStruct___sFILE_14};
	VPL_ExtField _VPXStruct___sFILE_12 = { "_write",offsetof(struct __sFILE,_write),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct___sFILE_13};
	VPL_ExtField _VPXStruct___sFILE_11 = { "_seek",offsetof(struct __sFILE,_seek),sizeof(void *),kPointerType,"long long int",1,8,"T*",&_VPXStruct___sFILE_12};
	VPL_ExtField _VPXStruct___sFILE_10 = { "_read",offsetof(struct __sFILE,_read),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct___sFILE_11};
	VPL_ExtField _VPXStruct___sFILE_9 = { "_close",offsetof(struct __sFILE,_close),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct___sFILE_10};
	VPL_ExtField _VPXStruct___sFILE_8 = { "_cookie",offsetof(struct __sFILE,_cookie),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct___sFILE_9};
	VPL_ExtField _VPXStruct___sFILE_7 = { "_lbfsize",offsetof(struct __sFILE,_lbfsize),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct___sFILE_8};
	VPL_ExtField _VPXStruct___sFILE_6 = { "_bf",offsetof(struct __sFILE,_bf),sizeof(struct __sbuf),kStructureType,"void",1,0,"__sbuf",&_VPXStruct___sFILE_7};
	VPL_ExtField _VPXStruct___sFILE_5 = { "_file",offsetof(struct __sFILE,_file),sizeof(short),kIntType,"void",1,0,"short",&_VPXStruct___sFILE_6};
	VPL_ExtField _VPXStruct___sFILE_4 = { "_flags",offsetof(struct __sFILE,_flags),sizeof(short),kIntType,"void",1,0,"short",&_VPXStruct___sFILE_5};
	VPL_ExtField _VPXStruct___sFILE_3 = { "_w",offsetof(struct __sFILE,_w),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct___sFILE_4};
	VPL_ExtField _VPXStruct___sFILE_2 = { "_r",offsetof(struct __sFILE,_r),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct___sFILE_3};
	VPL_ExtField _VPXStruct___sFILE_1 = { "_p",offsetof(struct __sFILE,_p),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",&_VPXStruct___sFILE_2};
	VPL_ExtStructure _VPXStruct___sFILE_S = {"__sFILE",&_VPXStruct___sFILE_1,sizeof(struct __sFILE)};

	VPL_ExtField _VPXStruct___sbuf_2 = { "_size",offsetof(struct __sbuf,_size),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct___sbuf_1 = { "_base",offsetof(struct __sbuf,_base),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",&_VPXStruct___sbuf_2};
	VPL_ExtStructure _VPXStruct___sbuf_S = {"__sbuf",&_VPXStruct___sbuf_1,sizeof(struct __sbuf)};

	VPL_ExtField _VPXStruct_ucontext64_6 = { "uc_mcontext64",offsetof(struct ucontext64,uc_mcontext64),sizeof(void *),kPointerType,"mcontext64",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_ucontext64_5 = { "uc_mcsize",offsetof(struct ucontext64,uc_mcsize),sizeof(unsigned long),kUnsignedType,"mcontext64",1,0,"unsigned long",&_VPXStruct_ucontext64_6};
	VPL_ExtField _VPXStruct_ucontext64_4 = { "uc_link",offsetof(struct ucontext64,uc_link),sizeof(void *),kPointerType,"ucontext64",1,32,"T*",&_VPXStruct_ucontext64_5};
	VPL_ExtField _VPXStruct_ucontext64_3 = { "uc_stack",offsetof(struct ucontext64,uc_stack),sizeof(struct sigaltstack),kStructureType,"ucontext64",1,32,"sigaltstack",&_VPXStruct_ucontext64_4};
	VPL_ExtField _VPXStruct_ucontext64_2 = { "uc_sigmask",offsetof(struct ucontext64,uc_sigmask),sizeof(unsigned int),kUnsignedType,"ucontext64",1,32,"unsigned int",&_VPXStruct_ucontext64_3};
	VPL_ExtField _VPXStruct_ucontext64_1 = { "uc_onstack",offsetof(struct ucontext64,uc_onstack),sizeof(int),kIntType,"ucontext64",1,32,"int",&_VPXStruct_ucontext64_2};
	VPL_ExtStructure _VPXStruct_ucontext64_S = {"ucontext64",&_VPXStruct_ucontext64_1,sizeof(struct ucontext64)};

	VPL_ExtField _VPXStruct_ucontext_6 = { "uc_mcontext",offsetof(struct ucontext,uc_mcontext),sizeof(void *),kPointerType,"mcontext",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_ucontext_5 = { "uc_mcsize",offsetof(struct ucontext,uc_mcsize),sizeof(unsigned long),kUnsignedType,"mcontext",1,0,"unsigned long",&_VPXStruct_ucontext_6};
	VPL_ExtField _VPXStruct_ucontext_4 = { "uc_link",offsetof(struct ucontext,uc_link),sizeof(void *),kPointerType,"ucontext",1,32,"T*",&_VPXStruct_ucontext_5};
	VPL_ExtField _VPXStruct_ucontext_3 = { "uc_stack",offsetof(struct ucontext,uc_stack),sizeof(struct sigaltstack),kStructureType,"ucontext",1,32,"sigaltstack",&_VPXStruct_ucontext_4};
	VPL_ExtField _VPXStruct_ucontext_2 = { "uc_sigmask",offsetof(struct ucontext,uc_sigmask),sizeof(unsigned int),kUnsignedType,"ucontext",1,32,"unsigned int",&_VPXStruct_ucontext_3};
	VPL_ExtField _VPXStruct_ucontext_1 = { "uc_onstack",offsetof(struct ucontext,uc_onstack),sizeof(int),kIntType,"ucontext",1,32,"int",&_VPXStruct_ucontext_2};
	VPL_ExtStructure _VPXStruct_ucontext_S = {"ucontext",&_VPXStruct_ucontext_1,sizeof(struct ucontext)};

	VPL_ExtField _VPXStruct_sigaltstack_3 = { "ss_flags",offsetof(struct sigaltstack,ss_flags),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_sigaltstack_2 = { "ss_size",offsetof(struct sigaltstack,ss_size),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_sigaltstack_3};
	VPL_ExtField _VPXStruct_sigaltstack_1 = { "ss_sp",offsetof(struct sigaltstack,ss_sp),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_sigaltstack_2};
	VPL_ExtStructure _VPXStruct_sigaltstack_S = {"sigaltstack",&_VPXStruct_sigaltstack_1,sizeof(struct sigaltstack)};

	VPL_ExtField _VPXStruct__opaque_pthread_t_3 = { "__opaque",offsetof(struct _opaque_pthread_t,__opaque),sizeof(char[596]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_t_2 = { "__cleanup_stack",offsetof(struct _opaque_pthread_t,__cleanup_stack),sizeof(void *),kPointerType,"__darwin_pthread_handler_rec",1,12,"T*",&_VPXStruct__opaque_pthread_t_3};
	VPL_ExtField _VPXStruct__opaque_pthread_t_1 = { "__sig",offsetof(struct _opaque_pthread_t,__sig),sizeof(long int),kIntType,"__darwin_pthread_handler_rec",1,12,"long int",&_VPXStruct__opaque_pthread_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_t_S = {"_opaque_pthread_t",&_VPXStruct__opaque_pthread_t_1,sizeof(struct _opaque_pthread_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_rwlockattr_t_2 = { "__opaque",offsetof(struct _opaque_pthread_rwlockattr_t,__opaque),sizeof(char[12]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_rwlockattr_t_1 = { "__sig",offsetof(struct _opaque_pthread_rwlockattr_t,__sig),sizeof(long int),kIntType,"char",0,1,"long int",&_VPXStruct__opaque_pthread_rwlockattr_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_rwlockattr_t_S = {"_opaque_pthread_rwlockattr_t",&_VPXStruct__opaque_pthread_rwlockattr_t_1,sizeof(struct _opaque_pthread_rwlockattr_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_rwlock_t_2 = { "__opaque",offsetof(struct _opaque_pthread_rwlock_t,__opaque),sizeof(char[124]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_rwlock_t_1 = { "__sig",offsetof(struct _opaque_pthread_rwlock_t,__sig),sizeof(long int),kIntType,"char",0,1,"long int",&_VPXStruct__opaque_pthread_rwlock_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_rwlock_t_S = {"_opaque_pthread_rwlock_t",&_VPXStruct__opaque_pthread_rwlock_t_1,sizeof(struct _opaque_pthread_rwlock_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_once_t_2 = { "__opaque",offsetof(struct _opaque_pthread_once_t,__opaque),sizeof(char[4]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_once_t_1 = { "__sig",offsetof(struct _opaque_pthread_once_t,__sig),sizeof(long int),kIntType,"char",0,1,"long int",&_VPXStruct__opaque_pthread_once_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_once_t_S = {"_opaque_pthread_once_t",&_VPXStruct__opaque_pthread_once_t_1,sizeof(struct _opaque_pthread_once_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_mutexattr_t_2 = { "__opaque",offsetof(struct _opaque_pthread_mutexattr_t,__opaque),sizeof(char[8]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_mutexattr_t_1 = { "__sig",offsetof(struct _opaque_pthread_mutexattr_t,__sig),sizeof(long int),kIntType,"char",0,1,"long int",&_VPXStruct__opaque_pthread_mutexattr_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_mutexattr_t_S = {"_opaque_pthread_mutexattr_t",&_VPXStruct__opaque_pthread_mutexattr_t_1,sizeof(struct _opaque_pthread_mutexattr_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_mutex_t_2 = { "__opaque",offsetof(struct _opaque_pthread_mutex_t,__opaque),sizeof(char[40]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_mutex_t_1 = { "__sig",offsetof(struct _opaque_pthread_mutex_t,__sig),sizeof(long int),kIntType,"char",0,1,"long int",&_VPXStruct__opaque_pthread_mutex_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_mutex_t_S = {"_opaque_pthread_mutex_t",&_VPXStruct__opaque_pthread_mutex_t_1,sizeof(struct _opaque_pthread_mutex_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_condattr_t_2 = { "__opaque",offsetof(struct _opaque_pthread_condattr_t,__opaque),sizeof(char[4]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_condattr_t_1 = { "__sig",offsetof(struct _opaque_pthread_condattr_t,__sig),sizeof(long int),kIntType,"char",0,1,"long int",&_VPXStruct__opaque_pthread_condattr_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_condattr_t_S = {"_opaque_pthread_condattr_t",&_VPXStruct__opaque_pthread_condattr_t_1,sizeof(struct _opaque_pthread_condattr_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_cond_t_2 = { "__opaque",offsetof(struct _opaque_pthread_cond_t,__opaque),sizeof(char[24]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_cond_t_1 = { "__sig",offsetof(struct _opaque_pthread_cond_t,__sig),sizeof(long int),kIntType,"char",0,1,"long int",&_VPXStruct__opaque_pthread_cond_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_cond_t_S = {"_opaque_pthread_cond_t",&_VPXStruct__opaque_pthread_cond_t_1,sizeof(struct _opaque_pthread_cond_t)};

	VPL_ExtField _VPXStruct__opaque_pthread_attr_t_2 = { "__opaque",offsetof(struct _opaque_pthread_attr_t,__opaque),sizeof(char[36]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct__opaque_pthread_attr_t_1 = { "__sig",offsetof(struct _opaque_pthread_attr_t,__sig),sizeof(long int),kIntType,"char",0,1,"long int",&_VPXStruct__opaque_pthread_attr_t_2};
	VPL_ExtStructure _VPXStruct__opaque_pthread_attr_t_S = {"_opaque_pthread_attr_t",&_VPXStruct__opaque_pthread_attr_t_1,sizeof(struct _opaque_pthread_attr_t)};

	VPL_ExtField _VPXStruct___darwin_pthread_handler_rec_3 = { "__next",offsetof(struct __darwin_pthread_handler_rec,__next),sizeof(void *),kPointerType,"__darwin_pthread_handler_rec",1,12,"T*",NULL};
	VPL_ExtField _VPXStruct___darwin_pthread_handler_rec_2 = { "__arg",offsetof(struct __darwin_pthread_handler_rec,__arg),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct___darwin_pthread_handler_rec_3};
	VPL_ExtField _VPXStruct___darwin_pthread_handler_rec_1 = { "__routine",offsetof(struct __darwin_pthread_handler_rec,__routine),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct___darwin_pthread_handler_rec_2};
	VPL_ExtStructure _VPXStruct___darwin_pthread_handler_rec_S = {"__darwin_pthread_handler_rec",&_VPXStruct___darwin_pthread_handler_rec_1,sizeof(struct __darwin_pthread_handler_rec)};

#pragma mark --------------- Procedures ---------------

	VPL_Parameter _pgthreadlock_t_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _pgthreadlock_t_F = {"pgthreadlock_t",NULL,&_pgthreadlock_t_1,NULL};

	VPL_Parameter _PQnoticeProcessor_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQnoticeProcessor_1 = { kPointerType,0,"void",1,0,&_PQnoticeProcessor_2};
	VPL_ExtProcedure _PQnoticeProcessor_F = {"PQnoticeProcessor",NULL,&_PQnoticeProcessor_1,NULL};

	VPL_Parameter _PQnoticeReceiver_2 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_Parameter _PQnoticeReceiver_1 = { kPointerType,0,"void",1,0,&_PQnoticeReceiver_2};
	VPL_ExtProcedure _PQnoticeReceiver_F = {"PQnoticeReceiver",NULL,&_PQnoticeReceiver_1,NULL};


	VPL_Parameter _PQenv2encoding_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _PQenv2encoding_F = {"PQenv2encoding",PQenv2encoding,NULL,&_PQenv2encoding_R};

	VPL_Parameter _PQdsplen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQdsplen_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQdsplen_1 = { kPointerType,1,"char",1,1,&_PQdsplen_2};
	VPL_ExtProcedure _PQdsplen_F = {"PQdsplen",PQdsplen,&_PQdsplen_1,&_PQdsplen_R};

	VPL_Parameter _PQmblen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQmblen_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQmblen_1 = { kPointerType,1,"char",1,1,&_PQmblen_2};
	VPL_ExtProcedure _PQmblen_F = {"PQmblen",PQmblen,&_PQmblen_1,&_PQmblen_R};

	VPL_Parameter _lo_export_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_export_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _lo_export_2 = { kUnsignedType,4,NULL,0,0,&_lo_export_3};
	VPL_Parameter _lo_export_1 = { kPointerType,0,"pg_conn",1,0,&_lo_export_2};
	VPL_ExtProcedure _lo_export_F = {"lo_export",lo_export,&_lo_export_1,&_lo_export_R};

	VPL_Parameter _lo_import_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_import_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _lo_import_1 = { kPointerType,0,"pg_conn",1,0,&_lo_import_2};
	VPL_ExtProcedure _lo_import_F = {"lo_import",lo_import,&_lo_import_1,&_lo_import_R};

	VPL_Parameter _lo_unlink_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_unlink_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_unlink_1 = { kPointerType,0,"pg_conn",1,0,&_lo_unlink_2};
	VPL_ExtProcedure _lo_unlink_F = {"lo_unlink",lo_unlink,&_lo_unlink_1,&_lo_unlink_R};

	VPL_Parameter _lo_tell_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_tell_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_tell_1 = { kPointerType,0,"pg_conn",1,0,&_lo_tell_2};
	VPL_ExtProcedure _lo_tell_F = {"lo_tell",lo_tell,&_lo_tell_1,&_lo_tell_R};

	VPL_Parameter _lo_create_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_create_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_create_1 = { kPointerType,0,"pg_conn",1,0,&_lo_create_2};
	VPL_ExtProcedure _lo_create_F = {"lo_create",lo_create,&_lo_create_1,&_lo_create_R};

	VPL_Parameter _lo_creat_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_creat_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_creat_1 = { kPointerType,0,"pg_conn",1,0,&_lo_creat_2};
	VPL_ExtProcedure _lo_creat_F = {"lo_creat",lo_creat,&_lo_creat_1,&_lo_creat_R};

	VPL_Parameter _lo_lseek_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_lseek_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_lseek_3 = { kIntType,4,NULL,0,0,&_lo_lseek_4};
	VPL_Parameter _lo_lseek_2 = { kIntType,4,NULL,0,0,&_lo_lseek_3};
	VPL_Parameter _lo_lseek_1 = { kPointerType,0,"pg_conn",1,0,&_lo_lseek_2};
	VPL_ExtProcedure _lo_lseek_F = {"lo_lseek",lo_lseek,&_lo_lseek_1,&_lo_lseek_R};

	VPL_Parameter _lo_write_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_write_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_write_3 = { kPointerType,1,"char",1,0,&_lo_write_4};
	VPL_Parameter _lo_write_2 = { kIntType,4,NULL,0,0,&_lo_write_3};
	VPL_Parameter _lo_write_1 = { kPointerType,0,"pg_conn",1,0,&_lo_write_2};
	VPL_ExtProcedure _lo_write_F = {"lo_write",lo_write,&_lo_write_1,&_lo_write_R};

	VPL_Parameter _lo_read_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_read_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_read_3 = { kPointerType,1,"char",1,0,&_lo_read_4};
	VPL_Parameter _lo_read_2 = { kIntType,4,NULL,0,0,&_lo_read_3};
	VPL_Parameter _lo_read_1 = { kPointerType,0,"pg_conn",1,0,&_lo_read_2};
	VPL_ExtProcedure _lo_read_F = {"lo_read",lo_read,&_lo_read_1,&_lo_read_R};

	VPL_Parameter _lo_close_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_close_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_close_1 = { kPointerType,0,"pg_conn",1,0,&_lo_close_2};
	VPL_ExtProcedure _lo_close_F = {"lo_close",lo_close,&_lo_close_1,&_lo_close_R};

	VPL_Parameter _lo_open_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_open_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lo_open_2 = { kUnsignedType,4,NULL,0,0,&_lo_open_3};
	VPL_Parameter _lo_open_1 = { kPointerType,0,"pg_conn",1,0,&_lo_open_2};
	VPL_ExtProcedure _lo_open_F = {"lo_open",lo_open,&_lo_open_1,&_lo_open_R};

	VPL_Parameter _PQprintTuples_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQprintTuples_4 = { kIntType,4,NULL,0,0,&_PQprintTuples_5};
	VPL_Parameter _PQprintTuples_3 = { kIntType,4,NULL,0,0,&_PQprintTuples_4};
	VPL_Parameter _PQprintTuples_2 = { kPointerType,88,"__sFILE",1,0,&_PQprintTuples_3};
	VPL_Parameter _PQprintTuples_1 = { kPointerType,0,"pg_result",1,1,&_PQprintTuples_2};
	VPL_ExtProcedure _PQprintTuples_F = {"PQprintTuples",PQprintTuples,&_PQprintTuples_1,NULL};

	VPL_Parameter _PQdisplayTuples_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQdisplayTuples_5 = { kIntType,4,NULL,0,0,&_PQdisplayTuples_6};
	VPL_Parameter _PQdisplayTuples_4 = { kPointerType,1,"char",1,1,&_PQdisplayTuples_5};
	VPL_Parameter _PQdisplayTuples_3 = { kIntType,4,NULL,0,0,&_PQdisplayTuples_4};
	VPL_Parameter _PQdisplayTuples_2 = { kPointerType,88,"__sFILE",1,0,&_PQdisplayTuples_3};
	VPL_Parameter _PQdisplayTuples_1 = { kPointerType,0,"pg_result",1,1,&_PQdisplayTuples_2};
	VPL_ExtProcedure _PQdisplayTuples_F = {"PQdisplayTuples",PQdisplayTuples,&_PQdisplayTuples_1,NULL};

	VPL_Parameter _PQprint_3 = { kPointerType,40,"_PQprintOpt",1,1,NULL};
	VPL_Parameter _PQprint_2 = { kPointerType,0,"pg_result",1,1,&_PQprint_3};
	VPL_Parameter _PQprint_1 = { kPointerType,88,"__sFILE",1,0,&_PQprint_2};
	VPL_ExtProcedure _PQprint_F = {"PQprint",PQprint,&_PQprint_1,NULL};

	VPL_Parameter _PQunescapeBytea_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _PQunescapeBytea_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _PQunescapeBytea_1 = { kPointerType,1,"unsigned char",1,1,&_PQunescapeBytea_2};
	VPL_ExtProcedure _PQunescapeBytea_F = {"PQunescapeBytea",PQunescapeBytea,&_PQunescapeBytea_1,&_PQunescapeBytea_R};

	VPL_Parameter _PQescapeBytea_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _PQescapeBytea_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _PQescapeBytea_2 = { kUnsignedType,4,NULL,0,0,&_PQescapeBytea_3};
	VPL_Parameter _PQescapeBytea_1 = { kPointerType,1,"unsigned char",1,1,&_PQescapeBytea_2};
	VPL_ExtProcedure _PQescapeBytea_F = {"PQescapeBytea",PQescapeBytea,&_PQescapeBytea_1,&_PQescapeBytea_R};

	VPL_Parameter _PQescapeString_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _PQescapeString_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _PQescapeString_2 = { kPointerType,1,"char",1,1,&_PQescapeString_3};
	VPL_Parameter _PQescapeString_1 = { kPointerType,1,"char",1,0,&_PQescapeString_2};
	VPL_ExtProcedure _PQescapeString_F = {"PQescapeString",PQescapeString,&_PQescapeString_1,&_PQescapeString_R};

	VPL_Parameter _PQmakeEmptyPGresult_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQmakeEmptyPGresult_2 = { kEnumType,4,"4",0,0,NULL};
	VPL_Parameter _PQmakeEmptyPGresult_1 = { kPointerType,0,"pg_conn",1,0,&_PQmakeEmptyPGresult_2};
	VPL_ExtProcedure _PQmakeEmptyPGresult_F = {"PQmakeEmptyPGresult",PQmakeEmptyPGresult,&_PQmakeEmptyPGresult_1,&_PQmakeEmptyPGresult_R};

	VPL_Parameter _PQfreemem_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _PQfreemem_F = {"PQfreemem",PQfreemem,&_PQfreemem_1,NULL};

	VPL_Parameter _PQclear_1 = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_ExtProcedure _PQclear_F = {"PQclear",PQclear,&_PQclear_1,NULL};

	VPL_Parameter _PQgetisnull_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetisnull_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetisnull_2 = { kIntType,4,NULL,0,0,&_PQgetisnull_3};
	VPL_Parameter _PQgetisnull_1 = { kPointerType,0,"pg_result",1,1,&_PQgetisnull_2};
	VPL_ExtProcedure _PQgetisnull_F = {"PQgetisnull",PQgetisnull,&_PQgetisnull_1,&_PQgetisnull_R};

	VPL_Parameter _PQgetlength_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetlength_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetlength_2 = { kIntType,4,NULL,0,0,&_PQgetlength_3};
	VPL_Parameter _PQgetlength_1 = { kPointerType,0,"pg_result",1,1,&_PQgetlength_2};
	VPL_ExtProcedure _PQgetlength_F = {"PQgetlength",PQgetlength,&_PQgetlength_1,&_PQgetlength_R};

	VPL_Parameter _PQgetvalue_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQgetvalue_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetvalue_2 = { kIntType,4,NULL,0,0,&_PQgetvalue_3};
	VPL_Parameter _PQgetvalue_1 = { kPointerType,0,"pg_result",1,1,&_PQgetvalue_2};
	VPL_ExtProcedure _PQgetvalue_F = {"PQgetvalue",PQgetvalue,&_PQgetvalue_1,&_PQgetvalue_R};

	VPL_Parameter _PQcmdTuples_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQcmdTuples_1 = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_ExtProcedure _PQcmdTuples_F = {"PQcmdTuples",PQcmdTuples,&_PQcmdTuples_1,&_PQcmdTuples_R};

	VPL_Parameter _PQoidValue_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _PQoidValue_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQoidValue_F = {"PQoidValue",PQoidValue,&_PQoidValue_1,&_PQoidValue_R};

	VPL_Parameter _PQoidStatus_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQoidStatus_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQoidStatus_F = {"PQoidStatus",PQoidStatus,&_PQoidStatus_1,&_PQoidStatus_R};

	VPL_Parameter _PQcmdStatus_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQcmdStatus_1 = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_ExtProcedure _PQcmdStatus_F = {"PQcmdStatus",PQcmdStatus,&_PQcmdStatus_1,&_PQcmdStatus_R};

	VPL_Parameter _PQfmod_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfmod_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfmod_1 = { kPointerType,0,"pg_result",1,1,&_PQfmod_2};
	VPL_ExtProcedure _PQfmod_F = {"PQfmod",PQfmod,&_PQfmod_1,&_PQfmod_R};

	VPL_Parameter _PQfsize_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfsize_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfsize_1 = { kPointerType,0,"pg_result",1,1,&_PQfsize_2};
	VPL_ExtProcedure _PQfsize_F = {"PQfsize",PQfsize,&_PQfsize_1,&_PQfsize_R};

	VPL_Parameter _PQftype_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _PQftype_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQftype_1 = { kPointerType,0,"pg_result",1,1,&_PQftype_2};
	VPL_ExtProcedure _PQftype_F = {"PQftype",PQftype,&_PQftype_1,&_PQftype_R};

	VPL_Parameter _PQfformat_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfformat_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfformat_1 = { kPointerType,0,"pg_result",1,1,&_PQfformat_2};
	VPL_ExtProcedure _PQfformat_F = {"PQfformat",PQfformat,&_PQfformat_1,&_PQfformat_R};

	VPL_Parameter _PQftablecol_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQftablecol_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQftablecol_1 = { kPointerType,0,"pg_result",1,1,&_PQftablecol_2};
	VPL_ExtProcedure _PQftablecol_F = {"PQftablecol",PQftablecol,&_PQftablecol_1,&_PQftablecol_R};

	VPL_Parameter _PQftable_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _PQftable_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQftable_1 = { kPointerType,0,"pg_result",1,1,&_PQftable_2};
	VPL_ExtProcedure _PQftable_F = {"PQftable",PQftable,&_PQftable_1,&_PQftable_R};

	VPL_Parameter _PQfnumber_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfnumber_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQfnumber_1 = { kPointerType,0,"pg_result",1,1,&_PQfnumber_2};
	VPL_ExtProcedure _PQfnumber_F = {"PQfnumber",PQfnumber,&_PQfnumber_1,&_PQfnumber_R};

	VPL_Parameter _PQfname_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQfname_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfname_1 = { kPointerType,0,"pg_result",1,1,&_PQfname_2};
	VPL_ExtProcedure _PQfname_F = {"PQfname",PQfname,&_PQfname_1,&_PQfname_R};

	VPL_Parameter _PQbinaryTuples_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQbinaryTuples_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQbinaryTuples_F = {"PQbinaryTuples",PQbinaryTuples,&_PQbinaryTuples_1,&_PQbinaryTuples_R};

	VPL_Parameter _PQnfields_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQnfields_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQnfields_F = {"PQnfields",PQnfields,&_PQnfields_1,&_PQnfields_R};

	VPL_Parameter _PQntuples_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQntuples_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQntuples_F = {"PQntuples",PQntuples,&_PQntuples_1,&_PQntuples_R};

	VPL_Parameter _PQresultErrorField_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQresultErrorField_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQresultErrorField_1 = { kPointerType,0,"pg_result",1,1,&_PQresultErrorField_2};
	VPL_ExtProcedure _PQresultErrorField_F = {"PQresultErrorField",PQresultErrorField,&_PQresultErrorField_1,&_PQresultErrorField_R};

	VPL_Parameter _PQresultErrorMessage_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQresultErrorMessage_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQresultErrorMessage_F = {"PQresultErrorMessage",PQresultErrorMessage,&_PQresultErrorMessage_1,&_PQresultErrorMessage_R};

	VPL_Parameter _PQresStatus_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQresStatus_1 = { kEnumType,4,"4",0,0,NULL};
	VPL_ExtProcedure _PQresStatus_F = {"PQresStatus",PQresStatus,&_PQresStatus_1,&_PQresStatus_R};

	VPL_Parameter _PQresultStatus_R = { kEnumType,4,"4",0,0,NULL};
	VPL_Parameter _PQresultStatus_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQresultStatus_F = {"PQresultStatus",PQresultStatus,&_PQresultStatus_1,&_PQresultStatus_R};

	VPL_Parameter _PQfn_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQfn_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfn_6 = { kPointerType,12,"PQArgBlock",1,1,&_PQfn_7};
	VPL_Parameter _PQfn_5 = { kIntType,4,NULL,0,0,&_PQfn_6};
	VPL_Parameter _PQfn_4 = { kPointerType,4,"int",1,0,&_PQfn_5};
	VPL_Parameter _PQfn_3 = { kPointerType,4,"int",1,0,&_PQfn_4};
	VPL_Parameter _PQfn_2 = { kIntType,4,NULL,0,0,&_PQfn_3};
	VPL_Parameter _PQfn_1 = { kPointerType,0,"pg_conn",1,0,&_PQfn_2};
	VPL_ExtProcedure _PQfn_F = {"PQfn",PQfn,&_PQfn_1,&_PQfn_R};

	VPL_Parameter _PQflush_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQflush_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQflush_F = {"PQflush",PQflush,&_PQflush_1,&_PQflush_R};

	VPL_Parameter _PQisnonblocking_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQisnonblocking_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQisnonblocking_F = {"PQisnonblocking",PQisnonblocking,&_PQisnonblocking_1,&_PQisnonblocking_R};

	VPL_Parameter _PQsetnonblocking_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsetnonblocking_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsetnonblocking_1 = { kPointerType,0,"pg_conn",1,0,&_PQsetnonblocking_2};
	VPL_ExtProcedure _PQsetnonblocking_F = {"PQsetnonblocking",PQsetnonblocking,&_PQsetnonblocking_1,&_PQsetnonblocking_R};

	VPL_Parameter _PQendcopy_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQendcopy_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQendcopy_F = {"PQendcopy",PQendcopy,&_PQendcopy_1,&_PQendcopy_R};

	VPL_Parameter _PQputnbytes_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQputnbytes_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQputnbytes_2 = { kPointerType,1,"char",1,1,&_PQputnbytes_3};
	VPL_Parameter _PQputnbytes_1 = { kPointerType,0,"pg_conn",1,0,&_PQputnbytes_2};
	VPL_ExtProcedure _PQputnbytes_F = {"PQputnbytes",PQputnbytes,&_PQputnbytes_1,&_PQputnbytes_R};

	VPL_Parameter _PQgetlineAsync_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetlineAsync_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetlineAsync_2 = { kPointerType,1,"char",1,0,&_PQgetlineAsync_3};
	VPL_Parameter _PQgetlineAsync_1 = { kPointerType,0,"pg_conn",1,0,&_PQgetlineAsync_2};
	VPL_ExtProcedure _PQgetlineAsync_F = {"PQgetlineAsync",PQgetlineAsync,&_PQgetlineAsync_1,&_PQgetlineAsync_R};

	VPL_Parameter _PQputline_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQputline_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQputline_1 = { kPointerType,0,"pg_conn",1,0,&_PQputline_2};
	VPL_ExtProcedure _PQputline_F = {"PQputline",PQputline,&_PQputline_1,&_PQputline_R};

	VPL_Parameter _PQgetline_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetline_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetline_2 = { kPointerType,1,"char",1,0,&_PQgetline_3};
	VPL_Parameter _PQgetline_1 = { kPointerType,0,"pg_conn",1,0,&_PQgetline_2};
	VPL_ExtProcedure _PQgetline_F = {"PQgetline",PQgetline,&_PQgetline_1,&_PQgetline_R};

	VPL_Parameter _PQgetCopyData_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetCopyData_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQgetCopyData_2 = { kPointerType,1,"char",2,0,&_PQgetCopyData_3};
	VPL_Parameter _PQgetCopyData_1 = { kPointerType,0,"pg_conn",1,0,&_PQgetCopyData_2};
	VPL_ExtProcedure _PQgetCopyData_F = {"PQgetCopyData",PQgetCopyData,&_PQgetCopyData_1,&_PQgetCopyData_R};

	VPL_Parameter _PQputCopyEnd_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQputCopyEnd_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQputCopyEnd_1 = { kPointerType,0,"pg_conn",1,0,&_PQputCopyEnd_2};
	VPL_ExtProcedure _PQputCopyEnd_F = {"PQputCopyEnd",PQputCopyEnd,&_PQputCopyEnd_1,&_PQputCopyEnd_R};

	VPL_Parameter _PQputCopyData_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQputCopyData_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQputCopyData_2 = { kPointerType,1,"char",1,1,&_PQputCopyData_3};
	VPL_Parameter _PQputCopyData_1 = { kPointerType,0,"pg_conn",1,0,&_PQputCopyData_2};
	VPL_ExtProcedure _PQputCopyData_F = {"PQputCopyData",PQputCopyData,&_PQputCopyData_1,&_PQputCopyData_R};

	VPL_Parameter _PQnotifies_R = { kPointerType,16,"pgNotify",1,0,NULL};
	VPL_Parameter _PQnotifies_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQnotifies_F = {"PQnotifies",PQnotifies,&_PQnotifies_1,&_PQnotifies_R};

	VPL_Parameter _PQconsumeInput_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQconsumeInput_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQconsumeInput_F = {"PQconsumeInput",PQconsumeInput,&_PQconsumeInput_1,&_PQconsumeInput_R};

	VPL_Parameter _PQisBusy_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQisBusy_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQisBusy_F = {"PQisBusy",PQisBusy,&_PQisBusy_1,&_PQisBusy_R};

	VPL_Parameter _PQgetResult_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQgetResult_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQgetResult_F = {"PQgetResult",PQgetResult,&_PQgetResult_1,&_PQgetResult_R};

	VPL_Parameter _PQsendQueryPrepared_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsendQueryPrepared_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsendQueryPrepared_6 = { kPointerType,4,"int",1,1,&_PQsendQueryPrepared_7};
	VPL_Parameter _PQsendQueryPrepared_5 = { kPointerType,4,"int",1,1,&_PQsendQueryPrepared_6};
	VPL_Parameter _PQsendQueryPrepared_4 = { kPointerType,1,"char",2,1,&_PQsendQueryPrepared_5};
	VPL_Parameter _PQsendQueryPrepared_3 = { kIntType,4,NULL,0,0,&_PQsendQueryPrepared_4};
	VPL_Parameter _PQsendQueryPrepared_2 = { kPointerType,1,"char",1,1,&_PQsendQueryPrepared_3};
	VPL_Parameter _PQsendQueryPrepared_1 = { kPointerType,0,"pg_conn",1,0,&_PQsendQueryPrepared_2};
	VPL_ExtProcedure _PQsendQueryPrepared_F = {"PQsendQueryPrepared",PQsendQueryPrepared,&_PQsendQueryPrepared_1,&_PQsendQueryPrepared_R};

	VPL_Parameter _PQsendPrepare_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsendPrepare_5 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _PQsendPrepare_4 = { kIntType,4,NULL,0,0,&_PQsendPrepare_5};
	VPL_Parameter _PQsendPrepare_3 = { kPointerType,1,"char",1,1,&_PQsendPrepare_4};
	VPL_Parameter _PQsendPrepare_2 = { kPointerType,1,"char",1,1,&_PQsendPrepare_3};
	VPL_Parameter _PQsendPrepare_1 = { kPointerType,0,"pg_conn",1,0,&_PQsendPrepare_2};
	VPL_ExtProcedure _PQsendPrepare_F = {"PQsendPrepare",PQsendPrepare,&_PQsendPrepare_1,&_PQsendPrepare_R};

	VPL_Parameter _PQsendQueryParams_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsendQueryParams_8 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsendQueryParams_7 = { kPointerType,4,"int",1,1,&_PQsendQueryParams_8};
	VPL_Parameter _PQsendQueryParams_6 = { kPointerType,4,"int",1,1,&_PQsendQueryParams_7};
	VPL_Parameter _PQsendQueryParams_5 = { kPointerType,1,"char",2,1,&_PQsendQueryParams_6};
	VPL_Parameter _PQsendQueryParams_4 = { kPointerType,4,"unsigned int",1,1,&_PQsendQueryParams_5};
	VPL_Parameter _PQsendQueryParams_3 = { kIntType,4,NULL,0,0,&_PQsendQueryParams_4};
	VPL_Parameter _PQsendQueryParams_2 = { kPointerType,1,"char",1,1,&_PQsendQueryParams_3};
	VPL_Parameter _PQsendQueryParams_1 = { kPointerType,0,"pg_conn",1,0,&_PQsendQueryParams_2};
	VPL_ExtProcedure _PQsendQueryParams_F = {"PQsendQueryParams",PQsendQueryParams,&_PQsendQueryParams_1,&_PQsendQueryParams_R};

	VPL_Parameter _PQsendQuery_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsendQuery_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQsendQuery_1 = { kPointerType,0,"pg_conn",1,0,&_PQsendQuery_2};
	VPL_ExtProcedure _PQsendQuery_F = {"PQsendQuery",PQsendQuery,&_PQsendQuery_1,&_PQsendQuery_R};

	VPL_Parameter _PQexecPrepared_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQexecPrepared_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQexecPrepared_6 = { kPointerType,4,"int",1,1,&_PQexecPrepared_7};
	VPL_Parameter _PQexecPrepared_5 = { kPointerType,4,"int",1,1,&_PQexecPrepared_6};
	VPL_Parameter _PQexecPrepared_4 = { kPointerType,1,"char",2,1,&_PQexecPrepared_5};
	VPL_Parameter _PQexecPrepared_3 = { kIntType,4,NULL,0,0,&_PQexecPrepared_4};
	VPL_Parameter _PQexecPrepared_2 = { kPointerType,1,"char",1,1,&_PQexecPrepared_3};
	VPL_Parameter _PQexecPrepared_1 = { kPointerType,0,"pg_conn",1,0,&_PQexecPrepared_2};
	VPL_ExtProcedure _PQexecPrepared_F = {"PQexecPrepared",PQexecPrepared,&_PQexecPrepared_1,&_PQexecPrepared_R};

	VPL_Parameter _PQprepare_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQprepare_5 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _PQprepare_4 = { kIntType,4,NULL,0,0,&_PQprepare_5};
	VPL_Parameter _PQprepare_3 = { kPointerType,1,"char",1,1,&_PQprepare_4};
	VPL_Parameter _PQprepare_2 = { kPointerType,1,"char",1,1,&_PQprepare_3};
	VPL_Parameter _PQprepare_1 = { kPointerType,0,"pg_conn",1,0,&_PQprepare_2};
	VPL_ExtProcedure _PQprepare_F = {"PQprepare",PQprepare,&_PQprepare_1,&_PQprepare_R};

	VPL_Parameter _PQexecParams_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQexecParams_8 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQexecParams_7 = { kPointerType,4,"int",1,1,&_PQexecParams_8};
	VPL_Parameter _PQexecParams_6 = { kPointerType,4,"int",1,1,&_PQexecParams_7};
	VPL_Parameter _PQexecParams_5 = { kPointerType,1,"char",2,1,&_PQexecParams_6};
	VPL_Parameter _PQexecParams_4 = { kPointerType,4,"unsigned int",1,1,&_PQexecParams_5};
	VPL_Parameter _PQexecParams_3 = { kIntType,4,NULL,0,0,&_PQexecParams_4};
	VPL_Parameter _PQexecParams_2 = { kPointerType,1,"char",1,1,&_PQexecParams_3};
	VPL_Parameter _PQexecParams_1 = { kPointerType,0,"pg_conn",1,0,&_PQexecParams_2};
	VPL_ExtProcedure _PQexecParams_F = {"PQexecParams",PQexecParams,&_PQexecParams_1,&_PQexecParams_R};

	VPL_Parameter _PQexec_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQexec_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQexec_1 = { kPointerType,0,"pg_conn",1,0,&_PQexec_2};
	VPL_ExtProcedure _PQexec_F = {"PQexec",PQexec,&_PQexec_1,&_PQexec_R};

	VPL_Parameter _PQregisterThreadLock_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _PQregisterThreadLock_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _PQregisterThreadLock_F = {"PQregisterThreadLock",PQregisterThreadLock,&_PQregisterThreadLock_1,&_PQregisterThreadLock_R};

	VPL_Parameter _PQsetNoticeProcessor_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _PQsetNoticeProcessor_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _PQsetNoticeProcessor_2 = { kPointerType,0,"void",1,0,&_PQsetNoticeProcessor_3};
	VPL_Parameter _PQsetNoticeProcessor_1 = { kPointerType,0,"pg_conn",1,0,&_PQsetNoticeProcessor_2};
	VPL_ExtProcedure _PQsetNoticeProcessor_F = {"PQsetNoticeProcessor",PQsetNoticeProcessor,&_PQsetNoticeProcessor_1,&_PQsetNoticeProcessor_R};

	VPL_Parameter _PQsetNoticeReceiver_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _PQsetNoticeReceiver_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _PQsetNoticeReceiver_2 = { kPointerType,0,"void",1,0,&_PQsetNoticeReceiver_3};
	VPL_Parameter _PQsetNoticeReceiver_1 = { kPointerType,0,"pg_conn",1,0,&_PQsetNoticeReceiver_2};
	VPL_ExtProcedure _PQsetNoticeReceiver_F = {"PQsetNoticeReceiver",PQsetNoticeReceiver,&_PQsetNoticeReceiver_1,&_PQsetNoticeReceiver_R};

	VPL_Parameter _PQuntrace_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQuntrace_F = {"PQuntrace",PQuntrace,&_PQuntrace_1,NULL};

	VPL_Parameter _PQtrace_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _PQtrace_1 = { kPointerType,0,"pg_conn",1,0,&_PQtrace_2};
	VPL_ExtProcedure _PQtrace_F = {"PQtrace",PQtrace,&_PQtrace_1,NULL};

	VPL_Parameter _PQsetErrorVerbosity_R = { kEnumType,4,"6",0,0,NULL};
	VPL_Parameter _PQsetErrorVerbosity_2 = { kEnumType,4,"6",0,0,NULL};
	VPL_Parameter _PQsetErrorVerbosity_1 = { kPointerType,0,"pg_conn",1,0,&_PQsetErrorVerbosity_2};
	VPL_ExtProcedure _PQsetErrorVerbosity_F = {"PQsetErrorVerbosity",PQsetErrorVerbosity,&_PQsetErrorVerbosity_1,&_PQsetErrorVerbosity_R};

	VPL_Parameter _PQinitSSL_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _PQinitSSL_F = {"PQinitSSL",PQinitSSL,&_PQinitSSL_1,NULL};

	VPL_Parameter _PQgetssl_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _PQgetssl_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQgetssl_F = {"PQgetssl",PQgetssl,&_PQgetssl_1,&_PQgetssl_R};

	VPL_Parameter _PQsetClientEncoding_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsetClientEncoding_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQsetClientEncoding_1 = { kPointerType,0,"pg_conn",1,0,&_PQsetClientEncoding_2};
	VPL_ExtProcedure _PQsetClientEncoding_F = {"PQsetClientEncoding",PQsetClientEncoding,&_PQsetClientEncoding_1,&_PQsetClientEncoding_R};

	VPL_Parameter _PQclientEncoding_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQclientEncoding_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQclientEncoding_F = {"PQclientEncoding",PQclientEncoding,&_PQclientEncoding_1,&_PQclientEncoding_R};

	VPL_Parameter _PQbackendPID_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQbackendPID_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQbackendPID_F = {"PQbackendPID",PQbackendPID,&_PQbackendPID_1,&_PQbackendPID_R};

	VPL_Parameter _PQsocket_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsocket_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQsocket_F = {"PQsocket",PQsocket,&_PQsocket_1,&_PQsocket_R};

	VPL_Parameter _PQerrorMessage_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQerrorMessage_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQerrorMessage_F = {"PQerrorMessage",PQerrorMessage,&_PQerrorMessage_1,&_PQerrorMessage_R};

	VPL_Parameter _PQserverVersion_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQserverVersion_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQserverVersion_F = {"PQserverVersion",PQserverVersion,&_PQserverVersion_1,&_PQserverVersion_R};

	VPL_Parameter _PQprotocolVersion_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQprotocolVersion_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQprotocolVersion_F = {"PQprotocolVersion",PQprotocolVersion,&_PQprotocolVersion_1,&_PQprotocolVersion_R};

	VPL_Parameter _PQparameterStatus_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQparameterStatus_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQparameterStatus_1 = { kPointerType,0,"pg_conn",1,1,&_PQparameterStatus_2};
	VPL_ExtProcedure _PQparameterStatus_F = {"PQparameterStatus",PQparameterStatus,&_PQparameterStatus_1,&_PQparameterStatus_R};

	VPL_Parameter _PQtransactionStatus_R = { kEnumType,4,"5",0,0,NULL};
	VPL_Parameter _PQtransactionStatus_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQtransactionStatus_F = {"PQtransactionStatus",PQtransactionStatus,&_PQtransactionStatus_1,&_PQtransactionStatus_R};

	VPL_Parameter _PQstatus_R = { kEnumType,4,"2",0,0,NULL};
	VPL_Parameter _PQstatus_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQstatus_F = {"PQstatus",PQstatus,&_PQstatus_1,&_PQstatus_R};

	VPL_Parameter _PQoptions_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQoptions_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQoptions_F = {"PQoptions",PQoptions,&_PQoptions_1,&_PQoptions_R};

	VPL_Parameter _PQtty_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQtty_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQtty_F = {"PQtty",PQtty,&_PQtty_1,&_PQtty_R};

	VPL_Parameter _PQport_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQport_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQport_F = {"PQport",PQport,&_PQport_1,&_PQport_R};

	VPL_Parameter _PQhost_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQhost_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQhost_F = {"PQhost",PQhost,&_PQhost_1,&_PQhost_R};

	VPL_Parameter _PQpass_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQpass_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQpass_F = {"PQpass",PQpass,&_PQpass_1,&_PQpass_R};

	VPL_Parameter _PQuser_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQuser_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQuser_F = {"PQuser",PQuser,&_PQuser_1,&_PQuser_R};

	VPL_Parameter _PQdb_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQdb_1 = { kPointerType,0,"pg_conn",1,1,NULL};
	VPL_ExtProcedure _PQdb_F = {"PQdb",PQdb,&_PQdb_1,&_PQdb_R};

	VPL_Parameter _PQrequestCancel_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQrequestCancel_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQrequestCancel_F = {"PQrequestCancel",PQrequestCancel,&_PQrequestCancel_1,&_PQrequestCancel_R};

	VPL_Parameter _PQcancel_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQcancel_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQcancel_2 = { kPointerType,1,"char",1,0,&_PQcancel_3};
	VPL_Parameter _PQcancel_1 = { kPointerType,0,"pg_cancel",1,0,&_PQcancel_2};
	VPL_ExtProcedure _PQcancel_F = {"PQcancel",PQcancel,&_PQcancel_1,&_PQcancel_R};

	VPL_Parameter _PQfreeCancel_1 = { kPointerType,0,"pg_cancel",1,0,NULL};
	VPL_ExtProcedure _PQfreeCancel_F = {"PQfreeCancel",PQfreeCancel,&_PQfreeCancel_1,NULL};

	VPL_Parameter _PQgetCancel_R = { kPointerType,0,"pg_cancel",1,0,NULL};
	VPL_Parameter _PQgetCancel_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQgetCancel_F = {"PQgetCancel",PQgetCancel,&_PQgetCancel_1,&_PQgetCancel_R};

	VPL_Parameter _PQreset_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQreset_F = {"PQreset",PQreset,&_PQreset_1,NULL};

	VPL_Parameter _PQresetPoll_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _PQresetPoll_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQresetPoll_F = {"PQresetPoll",PQresetPoll,&_PQresetPoll_1,&_PQresetPoll_R};

	VPL_Parameter _PQresetStart_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQresetStart_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQresetStart_F = {"PQresetStart",PQresetStart,&_PQresetStart_1,&_PQresetStart_R};

	VPL_Parameter _PQconninfoFree_1 = { kPointerType,28,"_PQconninfoOption",1,0,NULL};
	VPL_ExtProcedure _PQconninfoFree_F = {"PQconninfoFree",PQconninfoFree,&_PQconninfoFree_1,NULL};

	VPL_Parameter _PQconndefaults_R = { kPointerType,28,"_PQconninfoOption",1,0,NULL};
	VPL_ExtProcedure _PQconndefaults_F = {"PQconndefaults",PQconndefaults,NULL,&_PQconndefaults_R};

	VPL_Parameter _PQfinish_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQfinish_F = {"PQfinish",PQfinish,&_PQfinish_1,NULL};

	VPL_Parameter _PQsetdbLogin_R = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_Parameter _PQsetdbLogin_7 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQsetdbLogin_6 = { kPointerType,1,"char",1,1,&_PQsetdbLogin_7};
	VPL_Parameter _PQsetdbLogin_5 = { kPointerType,1,"char",1,1,&_PQsetdbLogin_6};
	VPL_Parameter _PQsetdbLogin_4 = { kPointerType,1,"char",1,1,&_PQsetdbLogin_5};
	VPL_Parameter _PQsetdbLogin_3 = { kPointerType,1,"char",1,1,&_PQsetdbLogin_4};
	VPL_Parameter _PQsetdbLogin_2 = { kPointerType,1,"char",1,1,&_PQsetdbLogin_3};
	VPL_Parameter _PQsetdbLogin_1 = { kPointerType,1,"char",1,1,&_PQsetdbLogin_2};
	VPL_ExtProcedure _PQsetdbLogin_F = {"PQsetdbLogin",PQsetdbLogin,&_PQsetdbLogin_1,&_PQsetdbLogin_R};

	VPL_Parameter _PQconnectdb_R = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_Parameter _PQconnectdb_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _PQconnectdb_F = {"PQconnectdb",PQconnectdb,&_PQconnectdb_1,&_PQconnectdb_R};

	VPL_Parameter _PQconnectPoll_R = { kEnumType,4,"3",0,0,NULL};
	VPL_Parameter _PQconnectPoll_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQconnectPoll_F = {"PQconnectPoll",PQconnectPoll,&_PQconnectPoll_1,&_PQconnectPoll_R};

	VPL_Parameter _PQconnectStart_R = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_Parameter _PQconnectStart_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _PQconnectStart_F = {"PQconnectStart",PQconnectStart,&_PQconnectStart_1,&_PQconnectStart_R};

	VPL_Parameter ___swbuf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___swbuf_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter ___swbuf_1 = { kIntType,4,NULL,0,0,&___swbuf_2};
	VPL_ExtProcedure ___swbuf_F = {"__swbuf",__swbuf,&___swbuf_1,&___swbuf_R};

	VPL_Parameter ___svfscanf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___svfscanf_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter ___svfscanf_2 = { kPointerType,1,"char",1,1,&___svfscanf_3};
	VPL_Parameter ___svfscanf_1 = { kPointerType,88,"__sFILE",1,0,&___svfscanf_2};
	VPL_ExtProcedure ___svfscanf_F = {"__svfscanf",__svfscanf,&___svfscanf_1,&___svfscanf_R};

	VPL_Parameter ___srget_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___srget_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure ___srget_F = {"__srget",__srget,&___srget_1,&___srget_R};

	VPL_Parameter _funopen_R = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _funopen_5 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _funopen_4 = { kPointerType,4,"long long int",1,0,&_funopen_5};
	VPL_Parameter _funopen_3 = { kPointerType,4,"int",1,0,&_funopen_4};
	VPL_Parameter _funopen_2 = { kPointerType,4,"int",1,0,&_funopen_3};
	VPL_Parameter _funopen_1 = { kPointerType,0,"void",1,1,&_funopen_2};
	VPL_ExtProcedure _funopen_F = {"funopen",funopen,&_funopen_1,&_funopen_R};

	VPL_Parameter _vsscanf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vsscanf_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vsscanf_2 = { kPointerType,1,"char",1,1,&_vsscanf_3};
	VPL_Parameter _vsscanf_1 = { kPointerType,1,"char",1,1,&_vsscanf_2};
	VPL_ExtProcedure _vsscanf_F = {"vsscanf",vsscanf,&_vsscanf_1,&_vsscanf_R};

	VPL_Parameter _vsnprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vsnprintf_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vsnprintf_3 = { kPointerType,1,"char",1,1,&_vsnprintf_4};
	VPL_Parameter _vsnprintf_2 = { kUnsignedType,4,NULL,0,0,&_vsnprintf_3};
	VPL_Parameter _vsnprintf_1 = { kPointerType,1,"char",1,0,&_vsnprintf_2};
	VPL_ExtProcedure _vsnprintf_F = {"vsnprintf",vsnprintf,&_vsnprintf_1,&_vsnprintf_R};

	VPL_Parameter _vscanf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vscanf_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vscanf_1 = { kPointerType,1,"char",1,1,&_vscanf_2};
	VPL_ExtProcedure _vscanf_F = {"vscanf",vscanf,&_vscanf_1,&_vscanf_R};

	VPL_Parameter _vfscanf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vfscanf_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vfscanf_2 = { kPointerType,1,"char",1,1,&_vfscanf_3};
	VPL_Parameter _vfscanf_1 = { kPointerType,88,"__sFILE",1,0,&_vfscanf_2};
	VPL_ExtProcedure _vfscanf_F = {"vfscanf",vfscanf,&_vfscanf_1,&_vfscanf_R};

	VPL_Parameter _tempnam_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _tempnam_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _tempnam_1 = { kPointerType,1,"char",1,1,&_tempnam_2};
	VPL_ExtProcedure _tempnam_F = {"tempnam",tempnam,&_tempnam_1,&_tempnam_R};

	VPL_Parameter _snprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _snprintf_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _snprintf_2 = { kUnsignedType,4,NULL,0,0,&_snprintf_3};
	VPL_Parameter _snprintf_1 = { kPointerType,1,"char",1,0,&_snprintf_2};
	VPL_ExtProcedure _snprintf_F = {"snprintf",snprintf,&_snprintf_1,&_snprintf_R};

	VPL_Parameter _setlinebuf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setlinebuf_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _setlinebuf_F = {"setlinebuf",setlinebuf,&_setlinebuf_1,&_setlinebuf_R};

	VPL_Parameter _setbuffer_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setbuffer_2 = { kPointerType,1,"char",1,0,&_setbuffer_3};
	VPL_Parameter _setbuffer_1 = { kPointerType,88,"__sFILE",1,0,&_setbuffer_2};
	VPL_ExtProcedure _setbuffer_F = {"setbuffer",setbuffer,&_setbuffer_1,NULL};

	VPL_Parameter _putw_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _putw_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _putw_1 = { kIntType,4,NULL,0,0,&_putw_2};
	VPL_ExtProcedure _putw_F = {"putw",putw,&_putw_1,&_putw_R};

	VPL_Parameter _putchar_unlocked_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _putchar_unlocked_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _putchar_unlocked_F = {"putchar_unlocked",putchar_unlocked,&_putchar_unlocked_1,&_putchar_unlocked_R};

	VPL_Parameter _putc_unlocked_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _putc_unlocked_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _putc_unlocked_1 = { kIntType,4,NULL,0,0,&_putc_unlocked_2};
	VPL_ExtProcedure _putc_unlocked_F = {"putc_unlocked",putc_unlocked,&_putc_unlocked_1,&_putc_unlocked_R};

	VPL_Parameter _popen_R = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _popen_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _popen_1 = { kPointerType,1,"char",1,1,&_popen_2};
	VPL_ExtProcedure _popen_F = {"popen",popen,&_popen_1,&_popen_R};

	VPL_Parameter _pclose_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pclose_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _pclose_F = {"pclose",pclose,&_pclose_1,&_pclose_R};

	VPL_Parameter _getw_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getw_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _getw_F = {"getw",getw,&_getw_1,&_getw_R};

	VPL_Parameter _getchar_unlocked_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getchar_unlocked_F = {"getchar_unlocked",getchar_unlocked,NULL,&_getchar_unlocked_R};

	VPL_Parameter _getc_unlocked_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getc_unlocked_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _getc_unlocked_F = {"getc_unlocked",getc_unlocked,&_getc_unlocked_1,&_getc_unlocked_R};

	VPL_Parameter _funlockfile_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _funlockfile_F = {"funlockfile",funlockfile,&_funlockfile_1,NULL};

	VPL_Parameter _ftrylockfile_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ftrylockfile_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _ftrylockfile_F = {"ftrylockfile",ftrylockfile,&_ftrylockfile_1,&_ftrylockfile_R};

	VPL_Parameter _ftello_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ftello_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _ftello_F = {"ftello",ftello,&_ftello_1,&_ftello_R};

	VPL_Parameter _fseeko_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fseeko_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fseeko_2 = { kIntType,4,NULL,0,0,&_fseeko_3};
	VPL_Parameter _fseeko_1 = { kPointerType,88,"__sFILE",1,0,&_fseeko_2};
	VPL_ExtProcedure _fseeko_F = {"fseeko",fseeko,&_fseeko_1,&_fseeko_R};

	VPL_Parameter _fpurge_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fpurge_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _fpurge_F = {"fpurge",fpurge,&_fpurge_1,&_fpurge_R};

	VPL_Parameter _fmtcheck_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _fmtcheck_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _fmtcheck_1 = { kPointerType,1,"char",1,1,&_fmtcheck_2};
	VPL_ExtProcedure _fmtcheck_F = {"fmtcheck",fmtcheck,&_fmtcheck_1,&_fmtcheck_R};

	VPL_Parameter _flockfile_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _flockfile_F = {"flockfile",flockfile,&_flockfile_1,NULL};

	VPL_Parameter _fileno_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fileno_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _fileno_F = {"fileno",fileno,&_fileno_1,&_fileno_R};

	VPL_Parameter _fgetln_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _fgetln_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _fgetln_1 = { kPointerType,88,"__sFILE",1,0,&_fgetln_2};
	VPL_ExtProcedure _fgetln_F = {"fgetln",fgetln,&_fgetln_1,&_fgetln_R};

	VPL_Parameter _fdopen_R = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _fdopen_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _fdopen_1 = { kIntType,4,NULL,0,0,&_fdopen_2};
	VPL_ExtProcedure _fdopen_F = {"fdopen",fdopen,&_fdopen_1,&_fdopen_R};

	VPL_Parameter _ctermid_r_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ctermid_r_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _ctermid_r_F = {"ctermid_r",ctermid_r,&_ctermid_r_1,&_ctermid_r_R};

	VPL_Parameter _ctermid_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ctermid_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _ctermid_F = {"ctermid",ctermid,&_ctermid_1,&_ctermid_R};

	VPL_Parameter _vasprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vasprintf_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vasprintf_2 = { kPointerType,1,"char",1,1,&_vasprintf_3};
	VPL_Parameter _vasprintf_1 = { kPointerType,1,"char",2,0,&_vasprintf_2};
	VPL_ExtProcedure _vasprintf_F = {"vasprintf",vasprintf,&_vasprintf_1,&_vasprintf_R};

	VPL_Parameter _asprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _asprintf_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _asprintf_1 = { kPointerType,1,"char",2,0,&_asprintf_2};
	VPL_ExtProcedure _asprintf_F = {"asprintf",asprintf,&_asprintf_1,&_asprintf_R};

	VPL_Parameter _vsprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vsprintf_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vsprintf_2 = { kPointerType,1,"char",1,1,&_vsprintf_3};
	VPL_Parameter _vsprintf_1 = { kPointerType,1,"char",1,0,&_vsprintf_2};
	VPL_ExtProcedure _vsprintf_F = {"vsprintf",vsprintf,&_vsprintf_1,&_vsprintf_R};

	VPL_Parameter _vprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vprintf_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vprintf_1 = { kPointerType,1,"char",1,1,&_vprintf_2};
	VPL_ExtProcedure _vprintf_F = {"vprintf",vprintf,&_vprintf_1,&_vprintf_R};

	VPL_Parameter _vfprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _vfprintf_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _vfprintf_2 = { kPointerType,1,"char",1,1,&_vfprintf_3};
	VPL_Parameter _vfprintf_1 = { kPointerType,88,"__sFILE",1,0,&_vfprintf_2};
	VPL_ExtProcedure _vfprintf_F = {"vfprintf",vfprintf,&_vfprintf_1,&_vfprintf_R};

	VPL_Parameter _ungetc_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ungetc_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _ungetc_1 = { kIntType,4,NULL,0,0,&_ungetc_2};
	VPL_ExtProcedure _ungetc_F = {"ungetc",ungetc,&_ungetc_1,&_ungetc_R};

	VPL_Parameter _tmpnam_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _tmpnam_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _tmpnam_F = {"tmpnam",tmpnam,&_tmpnam_1,&_tmpnam_R};

	VPL_Parameter _tmpfile_R = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _tmpfile_F = {"tmpfile",tmpfile,NULL,&_tmpfile_R};

	VPL_Parameter _sscanf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sscanf_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _sscanf_1 = { kPointerType,1,"char",1,1,&_sscanf_2};
	VPL_ExtProcedure _sscanf_F = {"sscanf",sscanf,&_sscanf_1,&_sscanf_R};

	VPL_Parameter _sprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sprintf_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _sprintf_1 = { kPointerType,1,"char",1,0,&_sprintf_2};
	VPL_ExtProcedure _sprintf_F = {"sprintf",sprintf,&_sprintf_1,&_sprintf_R};

	VPL_Parameter _setvbuf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setvbuf_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _setvbuf_3 = { kIntType,4,NULL,0,0,&_setvbuf_4};
	VPL_Parameter _setvbuf_2 = { kPointerType,1,"char",1,0,&_setvbuf_3};
	VPL_Parameter _setvbuf_1 = { kPointerType,88,"__sFILE",1,0,&_setvbuf_2};
	VPL_ExtProcedure _setvbuf_F = {"setvbuf",setvbuf,&_setvbuf_1,&_setvbuf_R};

	VPL_Parameter _setbuf_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _setbuf_1 = { kPointerType,88,"__sFILE",1,0,&_setbuf_2};
	VPL_ExtProcedure _setbuf_F = {"setbuf",setbuf,&_setbuf_1,NULL};

	VPL_Parameter _scanf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _scanf_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _scanf_F = {"scanf",scanf,&_scanf_1,&_scanf_R};

	VPL_Parameter _rewind_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _rewind_F = {"rewind",rewind,&_rewind_1,NULL};

	VPL_Parameter _rename_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rename_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _rename_1 = { kPointerType,1,"char",1,1,&_rename_2};
	VPL_ExtProcedure _rename_F = {"rename",rename,&_rename_1,&_rename_R};

	VPL_Parameter _remove_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _remove_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _remove_F = {"remove",remove,&_remove_1,&_remove_R};

	VPL_Parameter _puts_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _puts_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _puts_F = {"puts",puts,&_puts_1,&_puts_R};

	VPL_Parameter _putchar_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _putchar_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _putchar_F = {"putchar",putchar,&_putchar_1,&_putchar_R};

	VPL_Parameter _putc_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _putc_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _putc_1 = { kIntType,4,NULL,0,0,&_putc_2};
	VPL_ExtProcedure _putc_F = {"putc",putc,&_putc_1,&_putc_R};

	VPL_Parameter _printf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _printf_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _printf_F = {"printf",printf,&_printf_1,&_printf_R};

	VPL_Parameter _perror_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _perror_F = {"perror",perror,&_perror_1,NULL};

	VPL_Parameter _gets_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _gets_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _gets_F = {"gets",gets,&_gets_1,&_gets_R};

	VPL_Parameter _getchar_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getchar_F = {"getchar",getchar,NULL,&_getchar_R};

	VPL_Parameter _getc_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getc_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _getc_F = {"getc",getc,&_getc_1,&_getc_R};

	VPL_Parameter _fwrite_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _fwrite_4 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _fwrite_3 = { kUnsignedType,4,NULL,0,0,&_fwrite_4};
	VPL_Parameter _fwrite_2 = { kUnsignedType,4,NULL,0,0,&_fwrite_3};
	VPL_Parameter _fwrite_1 = { kPointerType,0,"void",1,1,&_fwrite_2};
	VPL_ExtProcedure _fwrite_F = {"fwrite",fwrite,&_fwrite_1,&_fwrite_R};

	VPL_Parameter _ftell_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ftell_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _ftell_F = {"ftell",ftell,&_ftell_1,&_ftell_R};

	VPL_Parameter _fsetpos_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fsetpos_2 = { kPointerType,4,"long long int",1,1,NULL};
	VPL_Parameter _fsetpos_1 = { kPointerType,88,"__sFILE",1,0,&_fsetpos_2};
	VPL_ExtProcedure _fsetpos_F = {"fsetpos",fsetpos,&_fsetpos_1,&_fsetpos_R};

	VPL_Parameter _fseek_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fseek_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fseek_2 = { kIntType,4,NULL,0,0,&_fseek_3};
	VPL_Parameter _fseek_1 = { kPointerType,88,"__sFILE",1,0,&_fseek_2};
	VPL_ExtProcedure _fseek_F = {"fseek",fseek,&_fseek_1,&_fseek_R};

	VPL_Parameter _fscanf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fscanf_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _fscanf_1 = { kPointerType,88,"__sFILE",1,0,&_fscanf_2};
	VPL_ExtProcedure _fscanf_F = {"fscanf",fscanf,&_fscanf_1,&_fscanf_R};

	VPL_Parameter _freopen_R = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _freopen_3 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _freopen_2 = { kPointerType,1,"char",1,1,&_freopen_3};
	VPL_Parameter _freopen_1 = { kPointerType,1,"char",1,1,&_freopen_2};
	VPL_ExtProcedure _freopen_F = {"freopen",freopen,&_freopen_1,&_freopen_R};

	VPL_Parameter _fread_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _fread_4 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _fread_3 = { kUnsignedType,4,NULL,0,0,&_fread_4};
	VPL_Parameter _fread_2 = { kUnsignedType,4,NULL,0,0,&_fread_3};
	VPL_Parameter _fread_1 = { kPointerType,0,"void",1,0,&_fread_2};
	VPL_ExtProcedure _fread_F = {"fread",fread,&_fread_1,&_fread_R};

	VPL_Parameter _fputs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fputs_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _fputs_1 = { kPointerType,1,"char",1,1,&_fputs_2};
	VPL_ExtProcedure _fputs_F = {"fputs",fputs,&_fputs_1,&_fputs_R};

	VPL_Parameter _fputc_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fputc_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _fputc_1 = { kIntType,4,NULL,0,0,&_fputc_2};
	VPL_ExtProcedure _fputc_F = {"fputc",fputc,&_fputc_1,&_fputc_R};

	VPL_Parameter _fprintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fprintf_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _fprintf_1 = { kPointerType,88,"__sFILE",1,0,&_fprintf_2};
	VPL_ExtProcedure _fprintf_F = {"fprintf",fprintf,&_fprintf_1,&_fprintf_R};

	VPL_Parameter _fopen_R = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _fopen_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _fopen_1 = { kPointerType,1,"char",1,1,&_fopen_2};
	VPL_ExtProcedure _fopen_F = {"fopen",fopen,&_fopen_1,&_fopen_R};

	VPL_Parameter _fgets_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _fgets_3 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter _fgets_2 = { kIntType,4,NULL,0,0,&_fgets_3};
	VPL_Parameter _fgets_1 = { kPointerType,1,"char",1,0,&_fgets_2};
	VPL_ExtProcedure _fgets_F = {"fgets",fgets,&_fgets_1,&_fgets_R};

	VPL_Parameter _fgetpos_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fgetpos_2 = { kPointerType,4,"long long int",1,0,NULL};
	VPL_Parameter _fgetpos_1 = { kPointerType,88,"__sFILE",1,0,&_fgetpos_2};
	VPL_ExtProcedure _fgetpos_F = {"fgetpos",fgetpos,&_fgetpos_1,&_fgetpos_R};

	VPL_Parameter _fgetc_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fgetc_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _fgetc_F = {"fgetc",fgetc,&_fgetc_1,&_fgetc_R};

	VPL_Parameter _fflush_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fflush_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _fflush_F = {"fflush",fflush,&_fflush_1,&_fflush_R};

	VPL_Parameter _ferror_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ferror_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _ferror_F = {"ferror",ferror,&_ferror_1,&_ferror_R};

	VPL_Parameter _feof_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _feof_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _feof_F = {"feof",feof,&_feof_1,&_feof_R};

	VPL_Parameter _fclose_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fclose_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _fclose_F = {"fclose",fclose,&_fclose_1,&_fclose_R};

	VPL_Parameter _clearerr_1 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_ExtProcedure _clearerr_F = {"clearerr",clearerr,&_clearerr_1,NULL};


VPL_DictionaryNode VPX_Postgres_Constants[] =	{
	{"PQERRORS_VERBOSE", &_PQERRORS_VERBOSE_C},
	{"PQERRORS_DEFAULT", &_PQERRORS_DEFAULT_C},
	{"PQERRORS_TERSE", &_PQERRORS_TERSE_C},
	{"PQTRANS_UNKNOWN", &_PQTRANS_UNKNOWN_C},
	{"PQTRANS_INERROR", &_PQTRANS_INERROR_C},
	{"PQTRANS_INTRANS", &_PQTRANS_INTRANS_C},
	{"PQTRANS_ACTIVE", &_PQTRANS_ACTIVE_C},
	{"PQTRANS_IDLE", &_PQTRANS_IDLE_C},
	{"PGRES_FATAL_ERROR", &_PGRES_FATAL_ERROR_C},
	{"PGRES_NONFATAL_ERROR", &_PGRES_NONFATAL_ERROR_C},
	{"PGRES_BAD_RESPONSE", &_PGRES_BAD_RESPONSE_C},
	{"PGRES_COPY_IN", &_PGRES_COPY_IN_C},
	{"PGRES_COPY_OUT", &_PGRES_COPY_OUT_C},
	{"PGRES_TUPLES_OK", &_PGRES_TUPLES_OK_C},
	{"PGRES_COMMAND_OK", &_PGRES_COMMAND_OK_C},
	{"PGRES_EMPTY_QUERY", &_PGRES_EMPTY_QUERY_C},
	{"PGRES_POLLING_ACTIVE", &_PGRES_POLLING_ACTIVE_C},
	{"PGRES_POLLING_OK", &_PGRES_POLLING_OK_C},
	{"PGRES_POLLING_WRITING", &_PGRES_POLLING_WRITING_C},
	{"PGRES_POLLING_READING", &_PGRES_POLLING_READING_C},
	{"PGRES_POLLING_FAILED", &_PGRES_POLLING_FAILED_C},
	{"CONNECTION_NEEDED", &_CONNECTION_NEEDED_C},
	{"CONNECTION_SSL_STARTUP", &_CONNECTION_SSL_STARTUP_C},
	{"CONNECTION_SETENV", &_CONNECTION_SETENV_C},
	{"CONNECTION_AUTH_OK", &_CONNECTION_AUTH_OK_C},
	{"CONNECTION_AWAITING_RESPONSE", &_CONNECTION_AWAITING_RESPONSE_C},
	{"CONNECTION_MADE", &_CONNECTION_MADE_C},
	{"CONNECTION_STARTED", &_CONNECTION_STARTED_C},
	{"CONNECTION_BAD", &_CONNECTION_BAD_C},
	{"CONNECTION_OK", &_CONNECTION_OK_C},
};

VPL_DictionaryNode VPX_Postgres_Structures[] =	{
	{"_PQconninfoOption",&_VPXStruct__PQconninfoOption_S},
	{"_PQprintOpt",&_VPXStruct__PQprintOpt_S},
	{"pgNotify",&_VPXStruct_pgNotify_S},
	{"__sFILE",&_VPXStruct___sFILE_S},
	{"__sbuf",&_VPXStruct___sbuf_S},
	{"ucontext64",&_VPXStruct_ucontext64_S},
	{"ucontext",&_VPXStruct_ucontext_S},
	{"sigaltstack",&_VPXStruct_sigaltstack_S},
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

VPL_DictionaryNode VPX_Postgres_Procedures[] =	{
	{"pgthreadlock_t",&_pgthreadlock_t_F},
	{"PQnoticeProcessor",&_PQnoticeProcessor_F},
	{"PQnoticeReceiver",&_PQnoticeReceiver_F},
	{"PQenv2encoding",&_PQenv2encoding_F},
	{"PQdsplen",&_PQdsplen_F},
	{"PQmblen",&_PQmblen_F},
	{"lo_export",&_lo_export_F},
	{"lo_import",&_lo_import_F},
	{"lo_unlink",&_lo_unlink_F},
	{"lo_tell",&_lo_tell_F},
	{"lo_create",&_lo_create_F},
	{"lo_creat",&_lo_creat_F},
	{"lo_lseek",&_lo_lseek_F},
	{"lo_write",&_lo_write_F},
	{"lo_read",&_lo_read_F},
	{"lo_close",&_lo_close_F},
	{"lo_open",&_lo_open_F},
	{"PQprintTuples",&_PQprintTuples_F},
	{"PQdisplayTuples",&_PQdisplayTuples_F},
	{"PQprint",&_PQprint_F},
	{"PQunescapeBytea",&_PQunescapeBytea_F},
	{"PQescapeBytea",&_PQescapeBytea_F},
	{"PQescapeString",&_PQescapeString_F},
	{"PQmakeEmptyPGresult",&_PQmakeEmptyPGresult_F},
	{"PQfreemem",&_PQfreemem_F},
	{"PQclear",&_PQclear_F},
	{"PQgetisnull",&_PQgetisnull_F},
	{"PQgetlength",&_PQgetlength_F},
	{"PQgetvalue",&_PQgetvalue_F},
	{"PQcmdTuples",&_PQcmdTuples_F},
	{"PQoidValue",&_PQoidValue_F},
	{"PQoidStatus",&_PQoidStatus_F},
	{"PQcmdStatus",&_PQcmdStatus_F},
	{"PQfmod",&_PQfmod_F},
	{"PQfsize",&_PQfsize_F},
	{"PQftype",&_PQftype_F},
	{"PQfformat",&_PQfformat_F},
	{"PQftablecol",&_PQftablecol_F},
	{"PQftable",&_PQftable_F},
	{"PQfnumber",&_PQfnumber_F},
	{"PQfname",&_PQfname_F},
	{"PQbinaryTuples",&_PQbinaryTuples_F},
	{"PQnfields",&_PQnfields_F},
	{"PQntuples",&_PQntuples_F},
	{"PQresultErrorField",&_PQresultErrorField_F},
	{"PQresultErrorMessage",&_PQresultErrorMessage_F},
	{"PQresStatus",&_PQresStatus_F},
	{"PQresultStatus",&_PQresultStatus_F},
	{"PQfn",&_PQfn_F},
	{"PQflush",&_PQflush_F},
	{"PQisnonblocking",&_PQisnonblocking_F},
	{"PQsetnonblocking",&_PQsetnonblocking_F},
	{"PQendcopy",&_PQendcopy_F},
	{"PQputnbytes",&_PQputnbytes_F},
	{"PQgetlineAsync",&_PQgetlineAsync_F},
	{"PQputline",&_PQputline_F},
	{"PQgetline",&_PQgetline_F},
	{"PQgetCopyData",&_PQgetCopyData_F},
	{"PQputCopyEnd",&_PQputCopyEnd_F},
	{"PQputCopyData",&_PQputCopyData_F},
	{"PQnotifies",&_PQnotifies_F},
	{"PQconsumeInput",&_PQconsumeInput_F},
	{"PQisBusy",&_PQisBusy_F},
	{"PQgetResult",&_PQgetResult_F},
	{"PQsendQueryPrepared",&_PQsendQueryPrepared_F},
	{"PQsendPrepare",&_PQsendPrepare_F},
	{"PQsendQueryParams",&_PQsendQueryParams_F},
	{"PQsendQuery",&_PQsendQuery_F},
	{"PQexecPrepared",&_PQexecPrepared_F},
	{"PQprepare",&_PQprepare_F},
	{"PQexecParams",&_PQexecParams_F},
	{"PQexec",&_PQexec_F},
	{"PQregisterThreadLock",&_PQregisterThreadLock_F},
	{"PQsetNoticeProcessor",&_PQsetNoticeProcessor_F},
	{"PQsetNoticeReceiver",&_PQsetNoticeReceiver_F},
	{"PQuntrace",&_PQuntrace_F},
	{"PQtrace",&_PQtrace_F},
	{"PQsetErrorVerbosity",&_PQsetErrorVerbosity_F},
	{"PQinitSSL",&_PQinitSSL_F},
	{"PQgetssl",&_PQgetssl_F},
	{"PQsetClientEncoding",&_PQsetClientEncoding_F},
	{"PQclientEncoding",&_PQclientEncoding_F},
	{"PQbackendPID",&_PQbackendPID_F},
	{"PQsocket",&_PQsocket_F},
	{"PQerrorMessage",&_PQerrorMessage_F},
	{"PQserverVersion",&_PQserverVersion_F},
	{"PQprotocolVersion",&_PQprotocolVersion_F},
	{"PQparameterStatus",&_PQparameterStatus_F},
	{"PQtransactionStatus",&_PQtransactionStatus_F},
	{"PQstatus",&_PQstatus_F},
	{"PQoptions",&_PQoptions_F},
	{"PQtty",&_PQtty_F},
	{"PQport",&_PQport_F},
	{"PQhost",&_PQhost_F},
	{"PQpass",&_PQpass_F},
	{"PQuser",&_PQuser_F},
	{"PQdb",&_PQdb_F},
	{"PQrequestCancel",&_PQrequestCancel_F},
	{"PQcancel",&_PQcancel_F},
	{"PQfreeCancel",&_PQfreeCancel_F},
	{"PQgetCancel",&_PQgetCancel_F},
	{"PQreset",&_PQreset_F},
	{"PQresetPoll",&_PQresetPoll_F},
	{"PQresetStart",&_PQresetStart_F},
	{"PQconninfoFree",&_PQconninfoFree_F},
	{"PQconndefaults",&_PQconndefaults_F},
	{"PQfinish",&_PQfinish_F},
	{"PQsetdbLogin",&_PQsetdbLogin_F},
	{"PQconnectdb",&_PQconnectdb_F},
	{"PQconnectPoll",&_PQconnectPoll_F},
	{"PQconnectStart",&_PQconnectStart_F},
	{"__swbuf",&___swbuf_F},
	{"__svfscanf",&___svfscanf_F},
	{"__srget",&___srget_F},
	{"funopen",&_funopen_F},
	{"vsscanf",&_vsscanf_F},
	{"vsnprintf",&_vsnprintf_F},
	{"vscanf",&_vscanf_F},
	{"vfscanf",&_vfscanf_F},
	{"tempnam",&_tempnam_F},
	{"snprintf",&_snprintf_F},
	{"setlinebuf",&_setlinebuf_F},
	{"setbuffer",&_setbuffer_F},
	{"putw",&_putw_F},
	{"putchar_unlocked",&_putchar_unlocked_F},
	{"putc_unlocked",&_putc_unlocked_F},
	{"popen",&_popen_F},
	{"pclose",&_pclose_F},
	{"getw",&_getw_F},
	{"getchar_unlocked",&_getchar_unlocked_F},
	{"getc_unlocked",&_getc_unlocked_F},
	{"funlockfile",&_funlockfile_F},
	{"ftrylockfile",&_ftrylockfile_F},
	{"ftello",&_ftello_F},
	{"fseeko",&_fseeko_F},
	{"fpurge",&_fpurge_F},
	{"fmtcheck",&_fmtcheck_F},
	{"flockfile",&_flockfile_F},
	{"fileno",&_fileno_F},
	{"fgetln",&_fgetln_F},
	{"fdopen",&_fdopen_F},
	{"ctermid_r",&_ctermid_r_F},
	{"ctermid",&_ctermid_F},
	{"vasprintf",&_vasprintf_F},
	{"asprintf",&_asprintf_F},
	{"vsprintf",&_vsprintf_F},
	{"vprintf",&_vprintf_F},
	{"vfprintf",&_vfprintf_F},
	{"ungetc",&_ungetc_F},
	{"tmpnam",&_tmpnam_F},
	{"tmpfile",&_tmpfile_F},
	{"sscanf",&_sscanf_F},
	{"sprintf",&_sprintf_F},
	{"setvbuf",&_setvbuf_F},
	{"setbuf",&_setbuf_F},
	{"scanf",&_scanf_F},
	{"rewind",&_rewind_F},
	{"rename",&_rename_F},
	{"remove",&_remove_F},
	{"puts",&_puts_F},
	{"putchar",&_putchar_F},
	{"putc",&_putc_F},
	{"printf",&_printf_F},
	{"perror",&_perror_F},
	{"gets",&_gets_F},
	{"getchar",&_getchar_F},
	{"getc",&_getc_F},
	{"fwrite",&_fwrite_F},
	{"ftell",&_ftell_F},
	{"fsetpos",&_fsetpos_F},
	{"fseek",&_fseek_F},
	{"fscanf",&_fscanf_F},
	{"freopen",&_freopen_F},
	{"fread",&_fread_F},
	{"fputs",&_fputs_F},
	{"fputc",&_fputc_F},
	{"fprintf",&_fprintf_F},
	{"fopen",&_fopen_F},
	{"fgets",&_fgets_F},
	{"fgetpos",&_fgetpos_F},
	{"fgetc",&_fgetc_F},
	{"fflush",&_fflush_F},
	{"ferror",&_ferror_F},
	{"feof",&_feof_F},
	{"fclose",&_fclose_F},
	{"clearerr",&_clearerr_F},
};

Nat4	VPX_Postgres_Constants_Number = 30;
Nat4	VPX_Postgres_Structures_Number = 18;
Nat4	VPX_Postgres_Procedures_Number = 186;

#pragma export on

Nat4	load_MacOSX_Postgres_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_Postgres_Constants(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_Postgres_Constants_Number,VPX_Postgres_Constants);
		
		return result;
}

Nat4	load_MacOSX_Postgres_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_Postgres_Structures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_Postgres_Structures_Number,VPX_Postgres_Structures);
		
		return result;
}

Nat4	load_MacOSX_Postgres_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_Postgres_Procedures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_Postgres_Procedures_Number,VPX_Postgres_Procedures);
		
		return result;
}

#pragma export off
