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

	VPL_ExtConstant _PGRES_FATAL_ERROR_C = {"PGRES_FATAL_ERROR",7,NULL};
	VPL_ExtConstant _PGRES_NONFATAL_ERROR_C = {"PGRES_NONFATAL_ERROR",6,NULL};
	VPL_ExtConstant _PGRES_BAD_RESPONSE_C = {"PGRES_BAD_RESPONSE",5,NULL};
	VPL_ExtConstant _PGRES_COPY_IN_C = {"PGRES_COPY_IN",4,NULL};
	VPL_ExtConstant _PGRES_COPY_OUT_C = {"PGRES_COPY_OUT",3,NULL};
	VPL_ExtConstant _PGRES_TUPLES_OK_C = {"PGRES_TUPLES_OK",2,NULL};
	VPL_ExtConstant _PGRES_COMMAND_OK_C = {"PGRES_COMMAND_OK",1,NULL};
	VPL_ExtConstant _PGRES_EMPTY_QUERY_C = {"PGRES_EMPTY_QUERY",0,NULL};
	VPL_ExtConstant _PGRES_POLLING_ACTIVE_C = {"PGRES_POLLING_ACTIVE",4,NULL};
	VPL_ExtConstant _PGRES_POLLING_OK_C = {"PGRES_POLLING_OK",3,NULL};
	VPL_ExtConstant _PGRES_POLLING_WRITING_C = {"PGRES_POLLING_WRITING",2,NULL};
	VPL_ExtConstant _PGRES_POLLING_READING_C = {"PGRES_POLLING_READING",1,NULL};
	VPL_ExtConstant _PGRES_POLLING_FAILED_C = {"PGRES_POLLING_FAILED",0,NULL};
	VPL_ExtConstant _CONNECTION_SETENV_C = {"CONNECTION_SETENV",6,NULL};
	VPL_ExtConstant _CONNECTION_AUTH_OK_C = {"CONNECTION_AUTH_OK",5,NULL};
	VPL_ExtConstant _CONNECTION_AWAITING_RESPONSE_C = {"CONNECTION_AWAITING_RESPONSE",4,NULL};
	VPL_ExtConstant _CONNECTION_MADE_C = {"CONNECTION_MADE",3,NULL};
	VPL_ExtConstant _CONNECTION_STARTED_C = {"CONNECTION_STARTED",2,NULL};
	VPL_ExtConstant _CONNECTION_BAD_C = {"CONNECTION_BAD",1,NULL};
	VPL_ExtConstant _CONNECTION_OK_C = {"CONNECTION_OK",0,NULL};
	VPL_ExtConstant _INV_WRITE_C = {"INV_WRITE",INV_WRITE,NULL};
	VPL_ExtConstant _INV_READ_C = {"INV_READ",INV_READ,NULL};



#pragma mark --------------- Structures ---------------

	VPL_ExtField _6_3 = { "u",8,4,kStructureType,"NULL",0,0,"7",NULL};
	VPL_ExtField _6_2 = { "isint",4,4,kIntType,"NULL",0,0,"int",&_6_3};
	VPL_ExtField _6_1 = { "len",0,4,kIntType,"NULL",0,0,"int",&_6_2};
	VPL_ExtStructure _6_S = {"6",&_6_1};

	VPL_ExtField __PQconninfoOption_7 = { "dispsize",24,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField __PQconninfoOption_6 = { "dispchar",20,4,kPointerType,"char",1,1,"T*",&__PQconninfoOption_7};
	VPL_ExtField __PQconninfoOption_5 = { "label",16,4,kPointerType,"char",1,1,"T*",&__PQconninfoOption_6};
	VPL_ExtField __PQconninfoOption_4 = { "val",12,4,kPointerType,"char",1,1,"T*",&__PQconninfoOption_5};
	VPL_ExtField __PQconninfoOption_3 = { "compiled",8,4,kPointerType,"char",1,1,"T*",&__PQconninfoOption_4};
	VPL_ExtField __PQconninfoOption_2 = { "envvar",4,4,kPointerType,"char",1,1,"T*",&__PQconninfoOption_3};
	VPL_ExtField __PQconninfoOption_1 = { "keyword",0,4,kPointerType,"char",1,1,"T*",&__PQconninfoOption_2};
	VPL_ExtStructure __PQconninfoOption_S = {"_PQconninfoOption",&__PQconninfoOption_1};

	VPL_ExtField __PQprintOpt_10 = { "fieldName",20,4,kPointerType,"char",2,1,"T*",NULL};
	VPL_ExtField __PQprintOpt_9 = { "caption",16,4,kPointerType,"char",1,1,"T*",&__PQprintOpt_10};
	VPL_ExtField __PQprintOpt_8 = { "tableOpt",12,4,kPointerType,"char",1,1,"T*",&__PQprintOpt_9};
	VPL_ExtField __PQprintOpt_7 = { "fieldSep",8,4,kPointerType,"char",1,1,"T*",&__PQprintOpt_8};
	VPL_ExtField __PQprintOpt_6 = { "pager",5,1,kIntType,"char",1,1,"char",&__PQprintOpt_7};
	VPL_ExtField __PQprintOpt_5 = { "expanded",4,1,kIntType,"char",1,1,"char",&__PQprintOpt_6};
	VPL_ExtField __PQprintOpt_4 = { "html3",3,1,kIntType,"char",1,1,"char",&__PQprintOpt_5};
	VPL_ExtField __PQprintOpt_3 = { "standard",2,1,kIntType,"char",1,1,"char",&__PQprintOpt_4};
	VPL_ExtField __PQprintOpt_2 = { "align",1,1,kIntType,"char",1,1,"char",&__PQprintOpt_3};
	VPL_ExtField __PQprintOpt_1 = { "header",0,1,kIntType,"char",1,1,"char",&__PQprintOpt_2};
	VPL_ExtStructure __PQprintOpt_S = {"_PQprintOpt",&__PQprintOpt_1};

	VPL_ExtField _pgNotify_2 = { "be_pid",4,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _pgNotify_1 = { "relname",0,4,kPointerType,"char",1,1,"T*",&_pgNotify_2};
	VPL_ExtStructure _pgNotify_S = {"pgNotify",&_pgNotify_1};

	VPL_ExtStructure _pg_result_S = {"pg_result",NULL};

	VPL_ExtStructure _pg_conn_S = {"pg_conn",NULL};

	VPL_ExtField ___sFILE_20 = { "_offset",80,8,kIntType,"NULL",0,0,"long long int",NULL};
	VPL_ExtField ___sFILE_19 = { "_blksize",76,4,kIntType,"NULL",0,0,"int",&___sFILE_20};
	VPL_ExtField ___sFILE_18 = { "_lb",68,8,kStructureType,"NULL",0,0,"__sbuf",&___sFILE_19};
	VPL_ExtField ___sFILE_17 = { "_nbuf",67,1,kPointerType,"unsigned char",0,1,NULL,&___sFILE_18};
	VPL_ExtField ___sFILE_16 = { "_ubuf",64,3,kPointerType,"unsigned char",0,1,NULL,&___sFILE_17};
	VPL_ExtField ___sFILE_15 = { "_ur",60,4,kIntType,"unsigned char",0,1,"int",&___sFILE_16};
	VPL_ExtField ___sFILE_14 = { "_extra",56,4,kPointerType,"__sFILEX",1,0,"T*",&___sFILE_15};
	VPL_ExtField ___sFILE_13 = { "_ub",48,8,kStructureType,"__sFILEX",1,0,"__sbuf",&___sFILE_14};
	VPL_ExtField ___sFILE_12 = { "_write",44,4,kPointerType,"int",1,4,"T*",&___sFILE_13};
	VPL_ExtField ___sFILE_11 = { "_seek",40,4,kPointerType,"long long int",1,8,"T*",&___sFILE_12};
	VPL_ExtField ___sFILE_10 = { "_read",36,4,kPointerType,"int",1,4,"T*",&___sFILE_11};
	VPL_ExtField ___sFILE_9 = { "_close",32,4,kPointerType,"int",1,4,"T*",&___sFILE_10};
	VPL_ExtField ___sFILE_8 = { "_cookie",28,4,kPointerType,"void",1,0,"T*",&___sFILE_9};
	VPL_ExtField ___sFILE_7 = { "_lbfsize",24,4,kIntType,"void",1,0,"int",&___sFILE_8};
	VPL_ExtField ___sFILE_6 = { "_bf",16,8,kStructureType,"void",1,0,"__sbuf",&___sFILE_7};
	VPL_ExtField ___sFILE_5 = { "_file",14,2,kIntType,"void",1,0,"short",&___sFILE_6};
	VPL_ExtField ___sFILE_4 = { "_flags",12,2,kIntType,"void",1,0,"short",&___sFILE_5};
	VPL_ExtField ___sFILE_3 = { "_w",8,4,kIntType,"void",1,0,"int",&___sFILE_4};
	VPL_ExtField ___sFILE_2 = { "_r",4,4,kIntType,"void",1,0,"int",&___sFILE_3};
	VPL_ExtField ___sFILE_1 = { "_p",0,4,kPointerType,"unsigned char",1,1,"T*",&___sFILE_2};
	VPL_ExtStructure ___sFILE_S = {"__sFILE",&___sFILE_1};

	VPL_ExtStructure ___sFILEX_S = {"__sFILEX",NULL};

	VPL_ExtField ___sbuf_2 = { "_size",4,4,kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField ___sbuf_1 = { "_base",0,4,kPointerType,"unsigned char",1,1,"T*",&___sbuf_2};
	VPL_ExtStructure ___sbuf_S = {"__sbuf",&___sbuf_1};

	VPL_ExtField _2_2 = { "opaque",4,4,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _2_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&_2_2};
	VPL_ExtStructure _2_S = {"2",&_2_1};

	VPL_ExtField __opaque_pthread_rwlock_t_2 = { "opaque",4,124,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_rwlock_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_rwlock_t_2};
	VPL_ExtStructure __opaque_pthread_rwlock_t_S = {"_opaque_pthread_rwlock_t",&__opaque_pthread_rwlock_t_1};

	VPL_ExtField __opaque_pthread_rwlockattr_t_2 = { "opaque",4,12,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_rwlockattr_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_rwlockattr_t_2};
	VPL_ExtStructure __opaque_pthread_rwlockattr_t_S = {"_opaque_pthread_rwlockattr_t",&__opaque_pthread_rwlockattr_t_1};

	VPL_ExtField __opaque_pthread_cond_t_2 = { "opaque",4,24,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_cond_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_cond_t_2};
	VPL_ExtStructure __opaque_pthread_cond_t_S = {"_opaque_pthread_cond_t",&__opaque_pthread_cond_t_1};

	VPL_ExtField __opaque_pthread_condattr_t_2 = { "opaque",4,4,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_condattr_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_condattr_t_2};
	VPL_ExtStructure __opaque_pthread_condattr_t_S = {"_opaque_pthread_condattr_t",&__opaque_pthread_condattr_t_1};

	VPL_ExtField __opaque_pthread_mutex_t_2 = { "opaque",4,40,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_mutex_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_mutex_t_2};
	VPL_ExtStructure __opaque_pthread_mutex_t_S = {"_opaque_pthread_mutex_t",&__opaque_pthread_mutex_t_1};

	VPL_ExtField __opaque_pthread_mutexattr_t_2 = { "opaque",4,8,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_mutexattr_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_mutexattr_t_2};
	VPL_ExtStructure __opaque_pthread_mutexattr_t_S = {"_opaque_pthread_mutexattr_t",&__opaque_pthread_mutexattr_t_1};

	VPL_ExtField __opaque_pthread_attr_t_2 = { "opaque",4,36,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_attr_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&__opaque_pthread_attr_t_2};
	VPL_ExtStructure __opaque_pthread_attr_t_S = {"_opaque_pthread_attr_t",&__opaque_pthread_attr_t_1};

	VPL_ExtField __opaque_pthread_t_3 = { "opaque",8,596,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField __opaque_pthread_t_2 = { "cleanup_stack",4,4,kPointerType,"_pthread_handler_rec",1,12,"T*",&__opaque_pthread_t_3};
	VPL_ExtField __opaque_pthread_t_1 = { "sig",0,4,kIntType,"_pthread_handler_rec",1,12,"long int",&__opaque_pthread_t_2};
	VPL_ExtStructure __opaque_pthread_t_S = {"_opaque_pthread_t",&__opaque_pthread_t_1};

	VPL_ExtField __pthread_handler_rec_3 = { "next",8,4,kPointerType,"_pthread_handler_rec",1,12,"T*",NULL};
	VPL_ExtField __pthread_handler_rec_2 = { "arg",4,4,kPointerType,"void",1,0,"T*",&__pthread_handler_rec_3};
	VPL_ExtField __pthread_handler_rec_1 = { "routine",0,4,kPointerType,"void",1,0,"T*",&__pthread_handler_rec_2};
	VPL_ExtStructure __pthread_handler_rec_S = {"_pthread_handler_rec",&__pthread_handler_rec_1};

	VPL_ExtField _fd_set_1 = { "fds_bits",0,128,kPointerType,"int",0,4,NULL,NULL};
	VPL_ExtStructure _fd_set_S = {"fd_set",&_fd_set_1};



#pragma mark --------------- Procedures ---------------

	VPL_Parameter _PQnoticeProcessor_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQnoticeProcessor_1 = { kPointerType,0,"void",1,0,&_PQnoticeProcessor_2};
	VPL_ExtProcedure _PQnoticeProcessor_F = {"PQnoticeProcessor",NULL,&_PQnoticeProcessor_1,NULL};

	VPL_Parameter _PQenv2encoding_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _PQenv2encoding_F = {"PQenv2encoding",PQenv2encoding,NULL,&_PQenv2encoding_R};

	VPL_Parameter _PQmblen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQmblen_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQmblen_1 = { kPointerType,1,"unsigned char",1,1,&_PQmblen_2};
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
	VPL_Parameter _PQprintTuples_2 = { kPointerType,84,"__sFILE",1,0,&_PQprintTuples_3};
	VPL_Parameter _PQprintTuples_1 = { kPointerType,0,"pg_result",1,1,&_PQprintTuples_2};
	VPL_ExtProcedure _PQprintTuples_F = {"PQprintTuples",PQprintTuples,&_PQprintTuples_1,NULL};

	VPL_Parameter _PQdisplayTuples_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQdisplayTuples_5 = { kIntType,4,NULL,0,0,&_PQdisplayTuples_6};
	VPL_Parameter _PQdisplayTuples_4 = { kPointerType,1,"char",1,1,&_PQdisplayTuples_5};
	VPL_Parameter _PQdisplayTuples_3 = { kIntType,4,NULL,0,0,&_PQdisplayTuples_4};
	VPL_Parameter _PQdisplayTuples_2 = { kPointerType,84,"__sFILE",1,0,&_PQdisplayTuples_3};
	VPL_Parameter _PQdisplayTuples_1 = { kPointerType,0,"pg_result",1,1,&_PQdisplayTuples_2};
	VPL_ExtProcedure _PQdisplayTuples_F = {"PQdisplayTuples",PQdisplayTuples,&_PQdisplayTuples_1,NULL};

	VPL_Parameter _PQprint_3 = { kPointerType,24,"_PQprintOpt",1,1,NULL};
	VPL_Parameter _PQprint_2 = { kPointerType,0,"pg_result",1,1,&_PQprint_3};
	VPL_Parameter _PQprint_1 = { kPointerType,84,"__sFILE",1,0,&_PQprint_2};
	VPL_ExtProcedure _PQprint_F = {"PQprint",PQprint,&_PQprint_1,NULL};

	VPL_Parameter _PQmakeEmptyPGresult_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQmakeEmptyPGresult_2 = { kEnumType,4,"5",0,0,NULL};
	VPL_Parameter _PQmakeEmptyPGresult_1 = { kPointerType,0,"pg_conn",1,0,&_PQmakeEmptyPGresult_2};
	VPL_ExtProcedure _PQmakeEmptyPGresult_F = {"PQmakeEmptyPGresult",PQmakeEmptyPGresult,&_PQmakeEmptyPGresult_1,&_PQmakeEmptyPGresult_R};

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

	VPL_Parameter _PQresultErrorMessage_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQresultErrorMessage_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQresultErrorMessage_F = {"PQresultErrorMessage",PQresultErrorMessage,&_PQresultErrorMessage_1,&_PQresultErrorMessage_R};

	VPL_Parameter _PQresStatus_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _PQresStatus_1 = { kEnumType,4,"5",0,0,NULL};
	VPL_ExtProcedure _PQresStatus_F = {"PQresStatus",PQresStatus,&_PQresStatus_1,&_PQresStatus_R};

	VPL_Parameter _PQresultStatus_R = { kEnumType,4,"5",0,0,NULL};
	VPL_Parameter _PQresultStatus_1 = { kPointerType,0,"pg_result",1,1,NULL};
	VPL_ExtProcedure _PQresultStatus_F = {"PQresultStatus",PQresultStatus,&_PQresultStatus_1,&_PQresultStatus_R};

	VPL_Parameter _PQfn_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQfn_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQfn_6 = { kPointerType,12,"6",1,1,&_PQfn_7};
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

	VPL_Parameter _PQconsumeInput_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQconsumeInput_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQconsumeInput_F = {"PQconsumeInput",PQconsumeInput,&_PQconsumeInput_1,&_PQconsumeInput_R};

	VPL_Parameter _PQisBusy_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQisBusy_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQisBusy_F = {"PQisBusy",PQisBusy,&_PQisBusy_1,&_PQisBusy_R};

	VPL_Parameter _PQgetResult_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQgetResult_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQgetResult_F = {"PQgetResult",PQgetResult,&_PQgetResult_1,&_PQgetResult_R};

	VPL_Parameter _PQsendQuery_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _PQsendQuery_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQsendQuery_1 = { kPointerType,0,"pg_conn",1,0,&_PQsendQuery_2};
	VPL_ExtProcedure _PQsendQuery_F = {"PQsendQuery",PQsendQuery,&_PQsendQuery_1,&_PQsendQuery_R};

	VPL_Parameter _PQnotifies_R = { kPointerType,8,"pgNotify",1,0,NULL};
	VPL_Parameter _PQnotifies_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQnotifies_F = {"PQnotifies",PQnotifies,&_PQnotifies_1,&_PQnotifies_R};

	VPL_Parameter _PQexec_R = { kPointerType,0,"pg_result",1,0,NULL};
	VPL_Parameter _PQexec_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _PQexec_1 = { kPointerType,0,"pg_conn",1,0,&_PQexec_2};
	VPL_ExtProcedure _PQexec_F = {"PQexec",PQexec,&_PQexec_1,&_PQexec_R};

	VPL_Parameter _PQunescapeBytea_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _PQunescapeBytea_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _PQunescapeBytea_1 = { kPointerType,1,"unsigned char",1,0,&_PQunescapeBytea_2};
	VPL_ExtProcedure _PQunescapeBytea_F = {"PQunescapeBytea",PQunescapeBytea,&_PQunescapeBytea_1,&_PQunescapeBytea_R};

	VPL_Parameter _PQescapeBytea_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _PQescapeBytea_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _PQescapeBytea_2 = { kUnsignedType,4,NULL,0,0,&_PQescapeBytea_3};
	VPL_Parameter _PQescapeBytea_1 = { kPointerType,1,"unsigned char",1,0,&_PQescapeBytea_2};
	VPL_ExtProcedure _PQescapeBytea_F = {"PQescapeBytea",PQescapeBytea,&_PQescapeBytea_1,&_PQescapeBytea_R};

	VPL_Parameter _PQescapeString_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _PQescapeString_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _PQescapeString_2 = { kPointerType,1,"char",1,1,&_PQescapeString_3};
	VPL_Parameter _PQescapeString_1 = { kPointerType,1,"char",1,0,&_PQescapeString_2};
	VPL_ExtProcedure _PQescapeString_F = {"PQescapeString",PQescapeString,&_PQescapeString_1,&_PQescapeString_R};

	VPL_Parameter _PQsetNoticeProcessor_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _PQsetNoticeProcessor_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _PQsetNoticeProcessor_2 = { kPointerType,0,"void",1,0,&_PQsetNoticeProcessor_3};
	VPL_Parameter _PQsetNoticeProcessor_1 = { kPointerType,0,"pg_conn",1,0,&_PQsetNoticeProcessor_2};
	VPL_ExtProcedure _PQsetNoticeProcessor_F = {"PQsetNoticeProcessor",PQsetNoticeProcessor,&_PQsetNoticeProcessor_1,&_PQsetNoticeProcessor_R};

	VPL_Parameter _PQuntrace_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQuntrace_F = {"PQuntrace",PQuntrace,&_PQuntrace_1,NULL};

	VPL_Parameter _PQtrace_2 = { kPointerType,84,"__sFILE",1,0,NULL};
	VPL_Parameter _PQtrace_1 = { kPointerType,0,"pg_conn",1,0,&_PQtrace_2};
	VPL_ExtProcedure _PQtrace_F = {"PQtrace",PQtrace,&_PQtrace_1,NULL};

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

	VPL_Parameter _PQstatus_R = { kEnumType,4,"3",0,0,NULL};
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

	VPL_Parameter _PQreset_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQreset_F = {"PQreset",PQreset,&_PQreset_1,NULL};

	VPL_Parameter _PQresetPoll_R = { kEnumType,4,"4",0,0,NULL};
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

	VPL_Parameter _PQconnectPoll_R = { kEnumType,4,"4",0,0,NULL};
	VPL_Parameter _PQconnectPoll_1 = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_ExtProcedure _PQconnectPoll_F = {"PQconnectPoll",PQconnectPoll,&_PQconnectPoll_1,&_PQconnectPoll_R};

	VPL_Parameter _PQconnectStart_R = { kPointerType,0,"pg_conn",1,0,NULL};
	VPL_Parameter _PQconnectStart_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _PQconnectStart_F = {"PQconnectStart",PQconnectStart,&_PQconnectStart_1,&_PQconnectStart_R};

VPL_DictionaryNode VPX_Postgres_Constants[] =	{
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
	{"CONNECTION_SETENV", &_CONNECTION_SETENV_C},
	{"CONNECTION_AUTH_OK", &_CONNECTION_AUTH_OK_C},
	{"CONNECTION_AWAITING_RESPONSE", &_CONNECTION_AWAITING_RESPONSE_C},
	{"CONNECTION_MADE", &_CONNECTION_MADE_C},
	{"CONNECTION_STARTED", &_CONNECTION_STARTED_C},
	{"CONNECTION_BAD", &_CONNECTION_BAD_C},
	{"CONNECTION_OK", &_CONNECTION_OK_C},
	{"INV_WRITE", &_INV_WRITE_C},
	{"INV_READ", &_INV_READ_C},

};

VPL_DictionaryNode VPX_Postgres_Structures[] =	{
	{"6",&_6_S},
	{"_PQconninfoOption",&__PQconninfoOption_S},
	{"_PQprintOpt",&__PQprintOpt_S},
	{"pgNotify",&_pgNotify_S},
	{"pg_result",&_pg_result_S},
	{"pg_conn",&_pg_conn_S},
	{"__sFILE",&___sFILE_S},
	{"__sFILEX",&___sFILEX_S},
	{"__sbuf",&___sbuf_S},
	{"2",&_2_S},
	{"_opaque_pthread_rwlock_t",&__opaque_pthread_rwlock_t_S},
	{"_opaque_pthread_rwlockattr_t",&__opaque_pthread_rwlockattr_t_S},
	{"_opaque_pthread_cond_t",&__opaque_pthread_cond_t_S},
	{"_opaque_pthread_condattr_t",&__opaque_pthread_condattr_t_S},
	{"_opaque_pthread_mutex_t",&__opaque_pthread_mutex_t_S},
	{"_opaque_pthread_mutexattr_t",&__opaque_pthread_mutexattr_t_S},
	{"_opaque_pthread_attr_t",&__opaque_pthread_attr_t_S},
	{"_opaque_pthread_t",&__opaque_pthread_t_S},
	{"_pthread_handler_rec",&__pthread_handler_rec_S},
	{"fd_set",&_fd_set_S},

};

VPL_DictionaryNode VPX_Postgres_Procedures[] =	{
	{"PQnoticeProcessor",&_PQnoticeProcessor_F},
	{"PQenv2encoding",&_PQenv2encoding_F},
	{"PQmblen",&_PQmblen_F},
	{"lo_export",&_lo_export_F},
	{"lo_import",&_lo_import_F},
	{"lo_unlink",&_lo_unlink_F},
	{"lo_tell",&_lo_tell_F},
	{"lo_creat",&_lo_creat_F},
	{"lo_lseek",&_lo_lseek_F},
	{"lo_write",&_lo_write_F},
	{"lo_read",&_lo_read_F},
	{"lo_close",&_lo_close_F},
	{"lo_open",&_lo_open_F},
	{"PQprintTuples",&_PQprintTuples_F},
	{"PQdisplayTuples",&_PQdisplayTuples_F},
	{"PQprint",&_PQprint_F},
	{"PQmakeEmptyPGresult",&_PQmakeEmptyPGresult_F},
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
	{"PQfnumber",&_PQfnumber_F},
	{"PQfname",&_PQfname_F},
	{"PQbinaryTuples",&_PQbinaryTuples_F},
	{"PQnfields",&_PQnfields_F},
	{"PQntuples",&_PQntuples_F},
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
	{"PQconsumeInput",&_PQconsumeInput_F},
	{"PQisBusy",&_PQisBusy_F},
	{"PQgetResult",&_PQgetResult_F},
	{"PQsendQuery",&_PQsendQuery_F},
	{"PQnotifies",&_PQnotifies_F},
	{"PQexec",&_PQexec_F},
	{"PQunescapeBytea",&_PQunescapeBytea_F},
	{"PQescapeBytea",&_PQescapeBytea_F},
	{"PQescapeString",&_PQescapeString_F},
	{"PQsetNoticeProcessor",&_PQsetNoticeProcessor_F},
	{"PQuntrace",&_PQuntrace_F},
	{"PQtrace",&_PQtrace_F},
	{"PQsetClientEncoding",&_PQsetClientEncoding_F},
	{"PQclientEncoding",&_PQclientEncoding_F},
	{"PQbackendPID",&_PQbackendPID_F},
	{"PQsocket",&_PQsocket_F},
	{"PQerrorMessage",&_PQerrorMessage_F},
	{"PQstatus",&_PQstatus_F},
	{"PQoptions",&_PQoptions_F},
	{"PQtty",&_PQtty_F},
	{"PQport",&_PQport_F},
	{"PQhost",&_PQhost_F},
	{"PQpass",&_PQpass_F},
	{"PQuser",&_PQuser_F},
	{"PQdb",&_PQdb_F},
	{"PQrequestCancel",&_PQrequestCancel_F},
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
};

Nat4	VPX_Postgres_Constants_Number = 22;
Nat4	VPX_Postgres_Structures_Number = 20;
Nat4	VPX_Postgres_Procedures_Number = 81;

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
