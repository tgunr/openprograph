/*
	
	MacOSX_Procedures.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

#include <Carbon/Carbon.h>
#include <IOKit/IOKitLib.h>
#include <IOKit/IOCFPlugIn.h>
#include <IOKit/usb/IOUSBLib.h>

/* --------------------- Start User created functions -------------------------------- */


/* --------------------- End User created functions -------------------------------- */

	VPL_Parameter _list_walk_action_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _list_walk_action_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _list_walk_action_1 = { kPointerType,0,"void",1,0,&_list_walk_action_2};
	VPL_ExtProcedure _list_walk_action_F = {"list_walk_action",NULL,&_list_walk_action_1,&_list_walk_action_R};


	VPL_Parameter _net_safe_read_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _net_safe_read_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _net_safe_read_F = {"net_safe_read",net_safe_read,&_net_safe_read_1,&_net_safe_read_R};

	VPL_Parameter _mysql_close_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_close_F = {"mysql_close",mysql_close,&_mysql_close_1,NULL};

	VPL_Parameter _mysql_next_result_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_next_result_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_next_result_F = {"mysql_next_result",mysql_next_result,&_mysql_next_result_1,&_mysql_next_result_R};

	VPL_Parameter _mysql_more_results_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_more_results_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_more_results_F = {"mysql_more_results",mysql_more_results,&_mysql_more_results_1,&_mysql_more_results_R};

	VPL_Parameter _mysql_autocommit_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_autocommit_2 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_autocommit_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_autocommit_2};
	VPL_ExtProcedure _mysql_autocommit_F = {"mysql_autocommit",mysql_autocommit,&_mysql_autocommit_1,&_mysql_autocommit_R};

	VPL_Parameter _mysql_rollback_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_rollback_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_rollback_F = {"mysql_rollback",mysql_rollback,&_mysql_rollback_1,&_mysql_rollback_R};

	VPL_Parameter _mysql_commit_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_commit_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_commit_F = {"mysql_commit",mysql_commit,&_mysql_commit_1,&_mysql_commit_R};

	VPL_Parameter _mysql_stmt_field_count_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_field_count_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_field_count_F = {"mysql_stmt_field_count",mysql_stmt_field_count,&_mysql_stmt_field_count_1,&_mysql_stmt_field_count_R};

	VPL_Parameter _mysql_stmt_insert_id_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_insert_id_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_insert_id_F = {"mysql_stmt_insert_id",mysql_stmt_insert_id,&_mysql_stmt_insert_id_1,&_mysql_stmt_insert_id_R};

	VPL_Parameter _mysql_stmt_affected_rows_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_affected_rows_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_affected_rows_F = {"mysql_stmt_affected_rows",mysql_stmt_affected_rows,&_mysql_stmt_affected_rows_1,&_mysql_stmt_affected_rows_R};

	VPL_Parameter _mysql_stmt_num_rows_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_num_rows_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_num_rows_F = {"mysql_stmt_num_rows",mysql_stmt_num_rows,&_mysql_stmt_num_rows_1,&_mysql_stmt_num_rows_R};

	VPL_Parameter _mysql_stmt_data_seek_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_data_seek_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_data_seek_2};
	VPL_ExtProcedure _mysql_stmt_data_seek_F = {"mysql_stmt_data_seek",mysql_stmt_data_seek,&_mysql_stmt_data_seek_1,NULL};

	VPL_Parameter _mysql_stmt_row_tell_R = { kPointerType,12,"st_mysql_rows",1,0,NULL};
	VPL_Parameter _mysql_stmt_row_tell_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_row_tell_F = {"mysql_stmt_row_tell",mysql_stmt_row_tell,&_mysql_stmt_row_tell_1,&_mysql_stmt_row_tell_R};

	VPL_Parameter _mysql_stmt_row_seek_R = { kPointerType,12,"st_mysql_rows",1,0,NULL};
	VPL_Parameter _mysql_stmt_row_seek_2 = { kPointerType,12,"st_mysql_rows",1,0,NULL};
	VPL_Parameter _mysql_stmt_row_seek_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_row_seek_2};
	VPL_ExtProcedure _mysql_stmt_row_seek_F = {"mysql_stmt_row_seek",mysql_stmt_row_seek,&_mysql_stmt_row_seek_1,&_mysql_stmt_row_seek_R};

	VPL_Parameter _mysql_stmt_sqlstate_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_stmt_sqlstate_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_sqlstate_F = {"mysql_stmt_sqlstate",mysql_stmt_sqlstate,&_mysql_stmt_sqlstate_1,&_mysql_stmt_sqlstate_R};

	VPL_Parameter _mysql_stmt_error_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_stmt_error_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_error_F = {"mysql_stmt_error",mysql_stmt_error,&_mysql_stmt_error_1,&_mysql_stmt_error_R};

	VPL_Parameter _mysql_stmt_errno_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_errno_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_errno_F = {"mysql_stmt_errno",mysql_stmt_errno,&_mysql_stmt_errno_1,&_mysql_stmt_errno_R};

	VPL_Parameter _mysql_stmt_param_metadata_R = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_Parameter _mysql_stmt_param_metadata_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_param_metadata_F = {"mysql_stmt_param_metadata",mysql_stmt_param_metadata,&_mysql_stmt_param_metadata_1,&_mysql_stmt_param_metadata_R};

	VPL_Parameter _mysql_stmt_result_metadata_R = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_Parameter _mysql_stmt_result_metadata_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_result_metadata_F = {"mysql_stmt_result_metadata",mysql_stmt_result_metadata,&_mysql_stmt_result_metadata_1,&_mysql_stmt_result_metadata_R};

	VPL_Parameter _mysql_stmt_send_long_data_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_send_long_data_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_send_long_data_3 = { kPointerType,1,"char",1,1,&_mysql_stmt_send_long_data_4};
	VPL_Parameter _mysql_stmt_send_long_data_2 = { kUnsignedType,4,NULL,0,0,&_mysql_stmt_send_long_data_3};
	VPL_Parameter _mysql_stmt_send_long_data_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_send_long_data_2};
	VPL_ExtProcedure _mysql_stmt_send_long_data_F = {"mysql_stmt_send_long_data",mysql_stmt_send_long_data,&_mysql_stmt_send_long_data_1,&_mysql_stmt_send_long_data_R};

	VPL_Parameter _mysql_stmt_free_result_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_free_result_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_free_result_F = {"mysql_stmt_free_result",mysql_stmt_free_result,&_mysql_stmt_free_result_1,&_mysql_stmt_free_result_R};

	VPL_Parameter _mysql_stmt_reset_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_reset_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_reset_F = {"mysql_stmt_reset",mysql_stmt_reset,&_mysql_stmt_reset_1,&_mysql_stmt_reset_R};

	VPL_Parameter _mysql_stmt_close_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_close_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_close_F = {"mysql_stmt_close",mysql_stmt_close,&_mysql_stmt_close_1,&_mysql_stmt_close_R};

	VPL_Parameter _mysql_stmt_bind_result_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_bind_result_2 = { kPointerType,60,"st_mysql_bind",1,0,NULL};
	VPL_Parameter _mysql_stmt_bind_result_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_bind_result_2};
	VPL_ExtProcedure _mysql_stmt_bind_result_F = {"mysql_stmt_bind_result",mysql_stmt_bind_result,&_mysql_stmt_bind_result_1,&_mysql_stmt_bind_result_R};

	VPL_Parameter _mysql_stmt_bind_param_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_bind_param_2 = { kPointerType,60,"st_mysql_bind",1,0,NULL};
	VPL_Parameter _mysql_stmt_bind_param_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_bind_param_2};
	VPL_ExtProcedure _mysql_stmt_bind_param_F = {"mysql_stmt_bind_param",mysql_stmt_bind_param,&_mysql_stmt_bind_param_1,&_mysql_stmt_bind_param_R};

	VPL_Parameter _mysql_stmt_attr_get_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_attr_get_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _mysql_stmt_attr_get_2 = { kEnumType,4,"enum_stmt_attr_type",0,0,&_mysql_stmt_attr_get_3};
	VPL_Parameter _mysql_stmt_attr_get_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_attr_get_2};
	VPL_ExtProcedure _mysql_stmt_attr_get_F = {"mysql_stmt_attr_get",mysql_stmt_attr_get,&_mysql_stmt_attr_get_1,&_mysql_stmt_attr_get_R};

	VPL_Parameter _mysql_stmt_attr_set_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_attr_set_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _mysql_stmt_attr_set_2 = { kEnumType,4,"enum_stmt_attr_type",0,0,&_mysql_stmt_attr_set_3};
	VPL_Parameter _mysql_stmt_attr_set_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_attr_set_2};
	VPL_ExtProcedure _mysql_stmt_attr_set_F = {"mysql_stmt_attr_set",mysql_stmt_attr_set,&_mysql_stmt_attr_set_1,&_mysql_stmt_attr_set_R};

	VPL_Parameter _mysql_stmt_param_count_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_param_count_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_param_count_F = {"mysql_stmt_param_count",mysql_stmt_param_count,&_mysql_stmt_param_count_1,&_mysql_stmt_param_count_R};

	VPL_Parameter _mysql_stmt_store_result_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_store_result_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_store_result_F = {"mysql_stmt_store_result",mysql_stmt_store_result,&_mysql_stmt_store_result_1,&_mysql_stmt_store_result_R};

	VPL_Parameter _mysql_stmt_fetch_column_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_fetch_column_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_fetch_column_3 = { kUnsignedType,4,NULL,0,0,&_mysql_stmt_fetch_column_4};
	VPL_Parameter _mysql_stmt_fetch_column_2 = { kPointerType,60,"st_mysql_bind",1,0,&_mysql_stmt_fetch_column_3};
	VPL_Parameter _mysql_stmt_fetch_column_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_fetch_column_2};
	VPL_ExtProcedure _mysql_stmt_fetch_column_F = {"mysql_stmt_fetch_column",mysql_stmt_fetch_column,&_mysql_stmt_fetch_column_1,&_mysql_stmt_fetch_column_R};

	VPL_Parameter _mysql_stmt_fetch_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_fetch_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_fetch_F = {"mysql_stmt_fetch",mysql_stmt_fetch,&_mysql_stmt_fetch_1,&_mysql_stmt_fetch_R};

	VPL_Parameter _mysql_stmt_execute_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_execute_1 = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_execute_F = {"mysql_stmt_execute",mysql_stmt_execute,&_mysql_stmt_execute_1,&_mysql_stmt_execute_R};

	VPL_Parameter _mysql_stmt_prepare_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_prepare_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_stmt_prepare_2 = { kPointerType,1,"char",1,1,&_mysql_stmt_prepare_3};
	VPL_Parameter _mysql_stmt_prepare_1 = { kPointerType,704,"st_mysql_stmt",1,0,&_mysql_stmt_prepare_2};
	VPL_ExtProcedure _mysql_stmt_prepare_F = {"mysql_stmt_prepare",mysql_stmt_prepare,&_mysql_stmt_prepare_1,&_mysql_stmt_prepare_R};

	VPL_Parameter _mysql_stmt_init_R = { kPointerType,704,"st_mysql_stmt",1,0,NULL};
	VPL_Parameter _mysql_stmt_init_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_stmt_init_F = {"mysql_stmt_init",mysql_stmt_init,&_mysql_stmt_init_1,&_mysql_stmt_init_R};

	VPL_Parameter _mysql_read_query_result_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_read_query_result_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_read_query_result_F = {"mysql_read_query_result",mysql_read_query_result,&_mysql_read_query_result_1,&_mysql_read_query_result_R};

	VPL_Parameter _mysql_manager_fetch_line_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_manager_fetch_line_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_manager_fetch_line_2 = { kPointerType,1,"char",1,0,&_mysql_manager_fetch_line_3};
	VPL_Parameter _mysql_manager_fetch_line_1 = { kPointerType,1024,"st_mysql_manager",1,0,&_mysql_manager_fetch_line_2};
	VPL_ExtProcedure _mysql_manager_fetch_line_F = {"mysql_manager_fetch_line",mysql_manager_fetch_line,&_mysql_manager_fetch_line_1,&_mysql_manager_fetch_line_R};

	VPL_Parameter _mysql_manager_command_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_manager_command_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_manager_command_2 = { kPointerType,1,"char",1,1,&_mysql_manager_command_3};
	VPL_Parameter _mysql_manager_command_1 = { kPointerType,1024,"st_mysql_manager",1,0,&_mysql_manager_command_2};
	VPL_ExtProcedure _mysql_manager_command_F = {"mysql_manager_command",mysql_manager_command,&_mysql_manager_command_1,&_mysql_manager_command_R};

	VPL_Parameter _mysql_manager_close_1 = { kPointerType,1024,"st_mysql_manager",1,0,NULL};
	VPL_ExtProcedure _mysql_manager_close_F = {"mysql_manager_close",mysql_manager_close,&_mysql_manager_close_1,NULL};

	VPL_Parameter _mysql_manager_connect_R = { kPointerType,1024,"st_mysql_manager",1,0,NULL};
	VPL_Parameter _mysql_manager_connect_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_manager_connect_4 = { kPointerType,1,"char",1,1,&_mysql_manager_connect_5};
	VPL_Parameter _mysql_manager_connect_3 = { kPointerType,1,"char",1,1,&_mysql_manager_connect_4};
	VPL_Parameter _mysql_manager_connect_2 = { kPointerType,1,"char",1,1,&_mysql_manager_connect_3};
	VPL_Parameter _mysql_manager_connect_1 = { kPointerType,1024,"st_mysql_manager",1,0,&_mysql_manager_connect_2};
	VPL_ExtProcedure _mysql_manager_connect_F = {"mysql_manager_connect",mysql_manager_connect,&_mysql_manager_connect_1,&_mysql_manager_connect_R};

	VPL_Parameter _mysql_manager_init_R = { kPointerType,1024,"st_mysql_manager",1,0,NULL};
	VPL_Parameter _mysql_manager_init_1 = { kPointerType,1024,"st_mysql_manager",1,0,NULL};
	VPL_ExtProcedure _mysql_manager_init_F = {"mysql_manager_init",mysql_manager_init,&_mysql_manager_init_1,&_mysql_manager_init_R};

	VPL_Parameter _mysql_embedded_R = { kIntType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _mysql_embedded_F = {"mysql_embedded",mysql_embedded,NULL,&_mysql_embedded_R};

	VPL_Parameter _mysql_thread_safe_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _mysql_thread_safe_F = {"mysql_thread_safe",mysql_thread_safe,NULL,&_mysql_thread_safe_R};

	VPL_Parameter _myodbc_remove_escape_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _myodbc_remove_escape_1 = { kPointerType,1044,"st_mysql",1,0,&_myodbc_remove_escape_2};
	VPL_ExtProcedure _myodbc_remove_escape_F = {"myodbc_remove_escape",myodbc_remove_escape,&_myodbc_remove_escape_1,NULL};

	VPL_Parameter _mysql_odbc_escape_string_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_odbc_escape_string_7 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _mysql_odbc_escape_string_6 = { kPointerType,0,"void",1,0,&_mysql_odbc_escape_string_7};
	VPL_Parameter _mysql_odbc_escape_string_5 = { kUnsignedType,4,NULL,0,0,&_mysql_odbc_escape_string_6};
	VPL_Parameter _mysql_odbc_escape_string_4 = { kPointerType,1,"char",1,1,&_mysql_odbc_escape_string_5};
	VPL_Parameter _mysql_odbc_escape_string_3 = { kUnsignedType,4,NULL,0,0,&_mysql_odbc_escape_string_4};
	VPL_Parameter _mysql_odbc_escape_string_2 = { kPointerType,1,"char",1,0,&_mysql_odbc_escape_string_3};
	VPL_Parameter _mysql_odbc_escape_string_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_odbc_escape_string_2};
	VPL_ExtProcedure _mysql_odbc_escape_string_F = {"mysql_odbc_escape_string",mysql_odbc_escape_string,&_mysql_odbc_escape_string_1,&_mysql_odbc_escape_string_R};

	VPL_Parameter _mysql_debug_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _mysql_debug_F = {"mysql_debug",mysql_debug,&_mysql_debug_1,NULL};

	VPL_Parameter _mysql_real_escape_string_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_real_escape_string_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_real_escape_string_3 = { kPointerType,1,"char",1,1,&_mysql_real_escape_string_4};
	VPL_Parameter _mysql_real_escape_string_2 = { kPointerType,1,"char",1,0,&_mysql_real_escape_string_3};
	VPL_Parameter _mysql_real_escape_string_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_real_escape_string_2};
	VPL_ExtProcedure _mysql_real_escape_string_F = {"mysql_real_escape_string",mysql_real_escape_string,&_mysql_real_escape_string_1,&_mysql_real_escape_string_R};

	VPL_Parameter _mysql_hex_string_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_hex_string_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_hex_string_2 = { kPointerType,1,"char",1,1,&_mysql_hex_string_3};
	VPL_Parameter _mysql_hex_string_1 = { kPointerType,1,"char",1,0,&_mysql_hex_string_2};
	VPL_ExtProcedure _mysql_hex_string_F = {"mysql_hex_string",mysql_hex_string,&_mysql_hex_string_1,&_mysql_hex_string_R};

	VPL_Parameter _mysql_escape_string_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_escape_string_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_escape_string_2 = { kPointerType,1,"char",1,1,&_mysql_escape_string_3};
	VPL_Parameter _mysql_escape_string_1 = { kPointerType,1,"char",1,0,&_mysql_escape_string_2};
	VPL_ExtProcedure _mysql_escape_string_F = {"mysql_escape_string",mysql_escape_string,&_mysql_escape_string_1,&_mysql_escape_string_R};

	VPL_Parameter _mysql_list_fields_R = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_Parameter _mysql_list_fields_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_list_fields_2 = { kPointerType,1,"char",1,1,&_mysql_list_fields_3};
	VPL_Parameter _mysql_list_fields_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_list_fields_2};
	VPL_ExtProcedure _mysql_list_fields_F = {"mysql_list_fields",mysql_list_fields,&_mysql_list_fields_1,&_mysql_list_fields_R};

	VPL_Parameter _mysql_fetch_field_R = { kPointerType,80,"st_mysql_field",1,0,NULL};
	VPL_Parameter _mysql_fetch_field_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_fetch_field_F = {"mysql_fetch_field",mysql_fetch_field,&_mysql_fetch_field_1,&_mysql_fetch_field_R};

	VPL_Parameter _mysql_fetch_lengths_R = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _mysql_fetch_lengths_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_fetch_lengths_F = {"mysql_fetch_lengths",mysql_fetch_lengths,&_mysql_fetch_lengths_1,&_mysql_fetch_lengths_R};

	VPL_Parameter _mysql_fetch_row_R = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _mysql_fetch_row_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_fetch_row_F = {"mysql_fetch_row",mysql_fetch_row,&_mysql_fetch_row_1,&_mysql_fetch_row_R};

	VPL_Parameter _mysql_field_seek_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_field_seek_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_field_seek_1 = { kPointerType,80,"st_mysql_res",1,0,&_mysql_field_seek_2};
	VPL_ExtProcedure _mysql_field_seek_F = {"mysql_field_seek",mysql_field_seek,&_mysql_field_seek_1,&_mysql_field_seek_R};

	VPL_Parameter _mysql_row_seek_R = { kPointerType,12,"st_mysql_rows",1,0,NULL};
	VPL_Parameter _mysql_row_seek_2 = { kPointerType,12,"st_mysql_rows",1,0,NULL};
	VPL_Parameter _mysql_row_seek_1 = { kPointerType,80,"st_mysql_res",1,0,&_mysql_row_seek_2};
	VPL_ExtProcedure _mysql_row_seek_F = {"mysql_row_seek",mysql_row_seek,&_mysql_row_seek_1,&_mysql_row_seek_R};

	VPL_Parameter _mysql_data_seek_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_data_seek_1 = { kPointerType,80,"st_mysql_res",1,0,&_mysql_data_seek_2};
	VPL_ExtProcedure _mysql_data_seek_F = {"mysql_data_seek",mysql_data_seek,&_mysql_data_seek_1,NULL};

	VPL_Parameter _mysql_free_result_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_free_result_F = {"mysql_free_result",mysql_free_result,&_mysql_free_result_1,NULL};

	VPL_Parameter _mysql_options_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_options_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_options_2 = { kEnumType,4,"mysql_option",0,0,&_mysql_options_3};
	VPL_Parameter _mysql_options_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_options_2};
	VPL_ExtProcedure _mysql_options_F = {"mysql_options",mysql_options,&_mysql_options_1,&_mysql_options_R};

	VPL_Parameter _mysql_list_processes_R = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_Parameter _mysql_list_processes_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_list_processes_F = {"mysql_list_processes",mysql_list_processes,&_mysql_list_processes_1,&_mysql_list_processes_R};

	VPL_Parameter _mysql_list_tables_R = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_Parameter _mysql_list_tables_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_list_tables_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_list_tables_2};
	VPL_ExtProcedure _mysql_list_tables_F = {"mysql_list_tables",mysql_list_tables,&_mysql_list_tables_1,&_mysql_list_tables_R};

	VPL_Parameter _mysql_list_dbs_R = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_Parameter _mysql_list_dbs_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_list_dbs_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_list_dbs_2};
	VPL_ExtProcedure _mysql_list_dbs_F = {"mysql_list_dbs",mysql_list_dbs,&_mysql_list_dbs_1,&_mysql_list_dbs_R};

	VPL_Parameter _mysql_get_proto_info_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_get_proto_info_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_get_proto_info_F = {"mysql_get_proto_info",mysql_get_proto_info,&_mysql_get_proto_info_1,&_mysql_get_proto_info_R};

	VPL_Parameter _mysql_get_server_version_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_get_server_version_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_get_server_version_F = {"mysql_get_server_version",mysql_get_server_version,&_mysql_get_server_version_1,&_mysql_get_server_version_R};

	VPL_Parameter _mysql_get_host_info_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_get_host_info_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_get_host_info_F = {"mysql_get_host_info",mysql_get_host_info,&_mysql_get_host_info_1,&_mysql_get_host_info_R};

	VPL_Parameter _mysql_get_client_version_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _mysql_get_client_version_F = {"mysql_get_client_version",mysql_get_client_version,NULL,&_mysql_get_client_version_R};

	VPL_Parameter _mysql_get_client_info_R = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _mysql_get_client_info_F = {"mysql_get_client_info",mysql_get_client_info,NULL,&_mysql_get_client_info_R};

	VPL_Parameter _mysql_get_server_info_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_get_server_info_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_get_server_info_F = {"mysql_get_server_info",mysql_get_server_info,&_mysql_get_server_info_1,&_mysql_get_server_info_R};

	VPL_Parameter _mysql_stat_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_stat_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_stat_F = {"mysql_stat",mysql_stat,&_mysql_stat_1,&_mysql_stat_R};

	VPL_Parameter _mysql_ping_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_ping_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_ping_F = {"mysql_ping",mysql_ping,&_mysql_ping_1,&_mysql_ping_R};

	VPL_Parameter _mysql_set_server_option_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_set_server_option_2 = { kEnumType,4,"enum_mysql_set_option",0,0,NULL};
	VPL_Parameter _mysql_set_server_option_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_set_server_option_2};
	VPL_ExtProcedure _mysql_set_server_option_F = {"mysql_set_server_option",mysql_set_server_option,&_mysql_set_server_option_1,&_mysql_set_server_option_R};

	VPL_Parameter _mysql_kill_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_kill_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_kill_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_kill_2};
	VPL_ExtProcedure _mysql_kill_F = {"mysql_kill",mysql_kill,&_mysql_kill_1,&_mysql_kill_R};

	VPL_Parameter _mysql_refresh_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_refresh_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_refresh_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_refresh_2};
	VPL_ExtProcedure _mysql_refresh_F = {"mysql_refresh",mysql_refresh,&_mysql_refresh_1,&_mysql_refresh_R};

	VPL_Parameter _mysql_dump_debug_info_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_dump_debug_info_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_dump_debug_info_F = {"mysql_dump_debug_info",mysql_dump_debug_info,&_mysql_dump_debug_info_1,&_mysql_dump_debug_info_R};

	VPL_Parameter _mysql_shutdown_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_shutdown_2 = { kEnumType,4,"mysql_enum_shutdown_level",0,0,NULL};
	VPL_Parameter _mysql_shutdown_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_shutdown_2};
	VPL_ExtProcedure _mysql_shutdown_F = {"mysql_shutdown",mysql_shutdown,&_mysql_shutdown_1,&_mysql_shutdown_R};

	VPL_Parameter _mysql_add_slave_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_add_slave_5 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_add_slave_4 = { kPointerType,1,"char",1,1,&_mysql_add_slave_5};
	VPL_Parameter _mysql_add_slave_3 = { kUnsignedType,4,NULL,0,0,&_mysql_add_slave_4};
	VPL_Parameter _mysql_add_slave_2 = { kPointerType,1,"char",1,1,&_mysql_add_slave_3};
	VPL_Parameter _mysql_add_slave_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_add_slave_2};
	VPL_ExtProcedure _mysql_add_slave_F = {"mysql_add_slave",mysql_add_slave,&_mysql_add_slave_1,&_mysql_add_slave_R};

	VPL_Parameter _mysql_set_master_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_set_master_5 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_set_master_4 = { kPointerType,1,"char",1,1,&_mysql_set_master_5};
	VPL_Parameter _mysql_set_master_3 = { kUnsignedType,4,NULL,0,0,&_mysql_set_master_4};
	VPL_Parameter _mysql_set_master_2 = { kPointerType,1,"char",1,1,&_mysql_set_master_3};
	VPL_Parameter _mysql_set_master_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_set_master_2};
	VPL_ExtProcedure _mysql_set_master_F = {"mysql_set_master",mysql_set_master,&_mysql_set_master_1,&_mysql_set_master_R};

	VPL_Parameter _mysql_rpl_probe_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_rpl_probe_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_rpl_probe_F = {"mysql_rpl_probe",mysql_rpl_probe,&_mysql_rpl_probe_1,&_mysql_rpl_probe_R};

	VPL_Parameter _mysql_rpl_query_type_R = { kEnumType,4,"mysql_rpl_type",0,0,NULL};
	VPL_Parameter _mysql_rpl_query_type_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_rpl_query_type_1 = { kPointerType,1,"char",1,1,&_mysql_rpl_query_type_2};
	VPL_ExtProcedure _mysql_rpl_query_type_F = {"mysql_rpl_query_type",mysql_rpl_query_type,&_mysql_rpl_query_type_1,&_mysql_rpl_query_type_R};

	VPL_Parameter _mysql_reads_from_master_enabled_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_reads_from_master_enabled_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_reads_from_master_enabled_F = {"mysql_reads_from_master_enabled",mysql_reads_from_master_enabled,&_mysql_reads_from_master_enabled_1,&_mysql_reads_from_master_enabled_R};

	VPL_Parameter _mysql_disable_reads_from_master_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_disable_reads_from_master_F = {"mysql_disable_reads_from_master",mysql_disable_reads_from_master,&_mysql_disable_reads_from_master_1,NULL};

	VPL_Parameter _mysql_enable_reads_from_master_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_enable_reads_from_master_F = {"mysql_enable_reads_from_master",mysql_enable_reads_from_master,&_mysql_enable_reads_from_master_1,NULL};

	VPL_Parameter _mysql_rpl_parse_enabled_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_rpl_parse_enabled_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_rpl_parse_enabled_F = {"mysql_rpl_parse_enabled",mysql_rpl_parse_enabled,&_mysql_rpl_parse_enabled_1,&_mysql_rpl_parse_enabled_R};

	VPL_Parameter _mysql_disable_rpl_parse_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_disable_rpl_parse_F = {"mysql_disable_rpl_parse",mysql_disable_rpl_parse,&_mysql_disable_rpl_parse_1,NULL};

	VPL_Parameter _mysql_enable_rpl_parse_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_enable_rpl_parse_F = {"mysql_enable_rpl_parse",mysql_enable_rpl_parse,&_mysql_enable_rpl_parse_1,NULL};

	VPL_Parameter _mysql_set_local_infile_default_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_set_local_infile_default_F = {"mysql_set_local_infile_default",mysql_set_local_infile_default,&_mysql_set_local_infile_default_1,NULL};

	VPL_Parameter _mysql_set_local_infile_handler_6 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _mysql_set_local_infile_handler_5 = { kPointerType,4,"int",1,0,&_mysql_set_local_infile_handler_6};
	VPL_Parameter _mysql_set_local_infile_handler_4 = { kPointerType,0,"void",1,0,&_mysql_set_local_infile_handler_5};
	VPL_Parameter _mysql_set_local_infile_handler_3 = { kPointerType,4,"int",1,0,&_mysql_set_local_infile_handler_4};
	VPL_Parameter _mysql_set_local_infile_handler_2 = { kPointerType,4,"int",1,0,&_mysql_set_local_infile_handler_3};
	VPL_Parameter _mysql_set_local_infile_handler_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_set_local_infile_handler_2};
	VPL_ExtProcedure _mysql_set_local_infile_handler_F = {"mysql_set_local_infile_handler",mysql_set_local_infile_handler,&_mysql_set_local_infile_handler_1,NULL};

	VPL_Parameter _mysql_get_character_set_info_2 = { kPointerType,32,"character_set",1,0,NULL};
	VPL_Parameter _mysql_get_character_set_info_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_get_character_set_info_2};
	VPL_ExtProcedure _mysql_get_character_set_info_F = {"mysql_get_character_set_info",mysql_get_character_set_info,&_mysql_get_character_set_info_1,NULL};

	VPL_Parameter _mysql_slave_send_query_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_slave_send_query_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_slave_send_query_2 = { kPointerType,1,"char",1,1,&_mysql_slave_send_query_3};
	VPL_Parameter _mysql_slave_send_query_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_slave_send_query_2};
	VPL_ExtProcedure _mysql_slave_send_query_F = {"mysql_slave_send_query",mysql_slave_send_query,&_mysql_slave_send_query_1,&_mysql_slave_send_query_R};

	VPL_Parameter _mysql_slave_query_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_slave_query_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_slave_query_2 = { kPointerType,1,"char",1,1,&_mysql_slave_query_3};
	VPL_Parameter _mysql_slave_query_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_slave_query_2};
	VPL_ExtProcedure _mysql_slave_query_F = {"mysql_slave_query",mysql_slave_query,&_mysql_slave_query_1,&_mysql_slave_query_R};

	VPL_Parameter _mysql_master_send_query_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_master_send_query_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_master_send_query_2 = { kPointerType,1,"char",1,1,&_mysql_master_send_query_3};
	VPL_Parameter _mysql_master_send_query_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_master_send_query_2};
	VPL_ExtProcedure _mysql_master_send_query_F = {"mysql_master_send_query",mysql_master_send_query,&_mysql_master_send_query_1,&_mysql_master_send_query_R};

	VPL_Parameter _mysql_master_query_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_master_query_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_master_query_2 = { kPointerType,1,"char",1,1,&_mysql_master_query_3};
	VPL_Parameter _mysql_master_query_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_master_query_2};
	VPL_ExtProcedure _mysql_master_query_F = {"mysql_master_query",mysql_master_query,&_mysql_master_query_1,&_mysql_master_query_R};

	VPL_Parameter _mysql_use_result_R = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_Parameter _mysql_use_result_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_use_result_F = {"mysql_use_result",mysql_use_result,&_mysql_use_result_1,&_mysql_use_result_R};

	VPL_Parameter _mysql_store_result_R = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_Parameter _mysql_store_result_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_store_result_F = {"mysql_store_result",mysql_store_result,&_mysql_store_result_1,&_mysql_store_result_R};

	VPL_Parameter _mysql_real_query_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_real_query_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_real_query_2 = { kPointerType,1,"char",1,1,&_mysql_real_query_3};
	VPL_Parameter _mysql_real_query_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_real_query_2};
	VPL_ExtProcedure _mysql_real_query_F = {"mysql_real_query",mysql_real_query,&_mysql_real_query_1,&_mysql_real_query_R};

	VPL_Parameter _mysql_send_query_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_send_query_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_send_query_2 = { kPointerType,1,"char",1,1,&_mysql_send_query_3};
	VPL_Parameter _mysql_send_query_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_send_query_2};
	VPL_ExtProcedure _mysql_send_query_F = {"mysql_send_query",mysql_send_query,&_mysql_send_query_1,&_mysql_send_query_R};

	VPL_Parameter _mysql_query_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_query_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_query_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_query_2};
	VPL_ExtProcedure _mysql_query_F = {"mysql_query",mysql_query,&_mysql_query_1,&_mysql_query_R};

	VPL_Parameter _mysql_select_db_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_select_db_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_select_db_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_select_db_2};
	VPL_ExtProcedure _mysql_select_db_F = {"mysql_select_db",mysql_select_db,&_mysql_select_db_1,&_mysql_select_db_R};

	VPL_Parameter _mysql_real_connect_R = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_Parameter _mysql_real_connect_8 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_real_connect_7 = { kPointerType,1,"char",1,1,&_mysql_real_connect_8};
	VPL_Parameter _mysql_real_connect_6 = { kUnsignedType,4,NULL,0,0,&_mysql_real_connect_7};
	VPL_Parameter _mysql_real_connect_5 = { kPointerType,1,"char",1,1,&_mysql_real_connect_6};
	VPL_Parameter _mysql_real_connect_4 = { kPointerType,1,"char",1,1,&_mysql_real_connect_5};
	VPL_Parameter _mysql_real_connect_3 = { kPointerType,1,"char",1,1,&_mysql_real_connect_4};
	VPL_Parameter _mysql_real_connect_2 = { kPointerType,1,"char",1,1,&_mysql_real_connect_3};
	VPL_Parameter _mysql_real_connect_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_real_connect_2};
	VPL_ExtProcedure _mysql_real_connect_F = {"mysql_real_connect",mysql_real_connect,&_mysql_real_connect_1,&_mysql_real_connect_R};

	VPL_Parameter _mysql_change_user_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_change_user_4 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_change_user_3 = { kPointerType,1,"char",1,1,&_mysql_change_user_4};
	VPL_Parameter _mysql_change_user_2 = { kPointerType,1,"char",1,1,&_mysql_change_user_3};
	VPL_Parameter _mysql_change_user_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_change_user_2};
	VPL_ExtProcedure _mysql_change_user_F = {"mysql_change_user",mysql_change_user,&_mysql_change_user_1,&_mysql_change_user_R};

	VPL_Parameter _mysql_ssl_set_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_ssl_set_6 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_ssl_set_5 = { kPointerType,1,"char",1,1,&_mysql_ssl_set_6};
	VPL_Parameter _mysql_ssl_set_4 = { kPointerType,1,"char",1,1,&_mysql_ssl_set_5};
	VPL_Parameter _mysql_ssl_set_3 = { kPointerType,1,"char",1,1,&_mysql_ssl_set_4};
	VPL_Parameter _mysql_ssl_set_2 = { kPointerType,1,"char",1,1,&_mysql_ssl_set_3};
	VPL_Parameter _mysql_ssl_set_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_ssl_set_2};
	VPL_ExtProcedure _mysql_ssl_set_F = {"mysql_ssl_set",mysql_ssl_set,&_mysql_ssl_set_1,&_mysql_ssl_set_R};

	VPL_Parameter _mysql_init_R = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_Parameter _mysql_init_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_init_F = {"mysql_init",mysql_init,&_mysql_init_1,&_mysql_init_R};

	VPL_Parameter _mysql_set_character_set_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_set_character_set_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _mysql_set_character_set_1 = { kPointerType,1044,"st_mysql",1,0,&_mysql_set_character_set_2};
	VPL_ExtProcedure _mysql_set_character_set_F = {"mysql_set_character_set",mysql_set_character_set,&_mysql_set_character_set_1,&_mysql_set_character_set_R};

	VPL_Parameter _mysql_character_set_name_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_character_set_name_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_character_set_name_F = {"mysql_character_set_name",mysql_character_set_name,&_mysql_character_set_name_1,&_mysql_character_set_name_R};

	VPL_Parameter _mysql_thread_id_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_thread_id_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_thread_id_F = {"mysql_thread_id",mysql_thread_id,&_mysql_thread_id_1,&_mysql_thread_id_R};

	VPL_Parameter _mysql_info_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_info_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_info_F = {"mysql_info",mysql_info,&_mysql_info_1,&_mysql_info_R};

	VPL_Parameter _mysql_warning_count_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_warning_count_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_warning_count_F = {"mysql_warning_count",mysql_warning_count,&_mysql_warning_count_1,&_mysql_warning_count_R};

	VPL_Parameter _mysql_sqlstate_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_sqlstate_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_sqlstate_F = {"mysql_sqlstate",mysql_sqlstate,&_mysql_sqlstate_1,&_mysql_sqlstate_R};

	VPL_Parameter _mysql_error_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mysql_error_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_error_F = {"mysql_error",mysql_error,&_mysql_error_1,&_mysql_error_R};

	VPL_Parameter _mysql_errno_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_errno_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_errno_F = {"mysql_errno",mysql_errno,&_mysql_errno_1,&_mysql_errno_R};

	VPL_Parameter _mysql_insert_id_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_insert_id_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_insert_id_F = {"mysql_insert_id",mysql_insert_id,&_mysql_insert_id_1,&_mysql_insert_id_R};

	VPL_Parameter _mysql_affected_rows_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_affected_rows_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_affected_rows_F = {"mysql_affected_rows",mysql_affected_rows,&_mysql_affected_rows_1,&_mysql_affected_rows_R};

	VPL_Parameter _mysql_field_count_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_field_count_1 = { kPointerType,1044,"st_mysql",1,0,NULL};
	VPL_ExtProcedure _mysql_field_count_F = {"mysql_field_count",mysql_field_count,&_mysql_field_count_1,&_mysql_field_count_R};

	VPL_Parameter _mysql_field_tell_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_field_tell_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_field_tell_F = {"mysql_field_tell",mysql_field_tell,&_mysql_field_tell_1,&_mysql_field_tell_R};

	VPL_Parameter _mysql_row_tell_R = { kPointerType,12,"st_mysql_rows",1,0,NULL};
	VPL_Parameter _mysql_row_tell_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_row_tell_F = {"mysql_row_tell",mysql_row_tell,&_mysql_row_tell_1,&_mysql_row_tell_R};

	VPL_Parameter _mysql_fetch_fields_R = { kPointerType,80,"st_mysql_field",1,0,NULL};
	VPL_Parameter _mysql_fetch_fields_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_fetch_fields_F = {"mysql_fetch_fields",mysql_fetch_fields,&_mysql_fetch_fields_1,&_mysql_fetch_fields_R};

	VPL_Parameter _mysql_fetch_field_direct_R = { kPointerType,80,"st_mysql_field",1,0,NULL};
	VPL_Parameter _mysql_fetch_field_direct_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_fetch_field_direct_1 = { kPointerType,80,"st_mysql_res",1,0,&_mysql_fetch_field_direct_2};
	VPL_ExtProcedure _mysql_fetch_field_direct_F = {"mysql_fetch_field_direct",mysql_fetch_field_direct,&_mysql_fetch_field_direct_1,&_mysql_fetch_field_direct_R};

	VPL_Parameter _mysql_eof_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _mysql_eof_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_eof_F = {"mysql_eof",mysql_eof,&_mysql_eof_1,&_mysql_eof_R};

	VPL_Parameter _mysql_num_fields_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_num_fields_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_num_fields_F = {"mysql_num_fields",mysql_num_fields,&_mysql_num_fields_1,&_mysql_num_fields_R};

	VPL_Parameter _mysql_num_rows_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_num_rows_1 = { kPointerType,80,"st_mysql_res",1,0,NULL};
	VPL_ExtProcedure _mysql_num_rows_F = {"mysql_num_rows",mysql_num_rows,&_mysql_num_rows_1,&_mysql_num_rows_R};

	VPL_ExtProcedure _mysql_thread_end_F = {"mysql_thread_end",mysql_thread_end,NULL,NULL};

	VPL_Parameter _mysql_thread_init_R = { kIntType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _mysql_thread_init_F = {"mysql_thread_init",mysql_thread_init,NULL,&_mysql_thread_init_R};

	VPL_Parameter _mysql_get_parameters_R = { kPointerType,8,"st_mysql_parameters",1,0,NULL};
	VPL_ExtProcedure _mysql_get_parameters_F = {"mysql_get_parameters",mysql_get_parameters,NULL,&_mysql_get_parameters_R};

	VPL_ExtProcedure _mysql_server_end_F = {"mysql_server_end",mysql_server_end,NULL,NULL};

	VPL_Parameter _mysql_server_init_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mysql_server_init_3 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _mysql_server_init_2 = { kPointerType,1,"char",2,0,&_mysql_server_init_3};
	VPL_Parameter _mysql_server_init_1 = { kIntType,4,NULL,0,0,&_mysql_server_init_2};
	VPL_ExtProcedure _mysql_server_init_F = {"mysql_server_init",mysql_server_init,&_mysql_server_init_1,&_mysql_server_init_R};

	VPL_Parameter _list_walk_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _list_walk_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _list_walk_2 = { kPointerType,4,"int",1,0,&_list_walk_3};
	VPL_Parameter _list_walk_1 = { kPointerType,12,"st_list",1,0,&_list_walk_2};
	VPL_ExtProcedure _list_walk_F = {"list_walk",list_walk,&_list_walk_1,&_list_walk_R};

	VPL_Parameter _list_length_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _list_length_1 = { kPointerType,12,"st_list",1,0,NULL};
	VPL_ExtProcedure _list_length_F = {"list_length",list_length,&_list_length_1,&_list_length_R};

	VPL_Parameter _list_free_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _list_free_1 = { kPointerType,12,"st_list",1,0,&_list_free_2};
	VPL_ExtProcedure _list_free_F = {"list_free",list_free,&_list_free_1,NULL};

	VPL_Parameter _list_reverse_R = { kPointerType,12,"st_list",1,0,NULL};
	VPL_Parameter _list_reverse_1 = { kPointerType,12,"st_list",1,0,NULL};
	VPL_ExtProcedure _list_reverse_F = {"list_reverse",list_reverse,&_list_reverse_1,&_list_reverse_R};

	VPL_Parameter _list_cons_R = { kPointerType,12,"st_list",1,0,NULL};
	VPL_Parameter _list_cons_2 = { kPointerType,12,"st_list",1,0,NULL};
	VPL_Parameter _list_cons_1 = { kPointerType,0,"void",1,0,&_list_cons_2};
	VPL_ExtProcedure _list_cons_F = {"list_cons",list_cons,&_list_cons_1,&_list_cons_R};

	VPL_Parameter _list_delete_R = { kPointerType,12,"st_list",1,0,NULL};
	VPL_Parameter _list_delete_2 = { kPointerType,12,"st_list",1,0,NULL};
	VPL_Parameter _list_delete_1 = { kPointerType,12,"st_list",1,0,&_list_delete_2};
	VPL_ExtProcedure _list_delete_F = {"list_delete",list_delete,&_list_delete_1,&_list_delete_R};

	VPL_Parameter _list_add_R = { kPointerType,12,"st_list",1,0,NULL};
	VPL_Parameter _list_add_2 = { kPointerType,12,"st_list",1,0,NULL};
	VPL_Parameter _list_add_1 = { kPointerType,12,"st_list",1,0,&_list_add_2};
	VPL_ExtProcedure _list_add_F = {"list_add",list_add,&_list_add_1,&_list_add_R};

	VPL_Parameter _get_type_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _get_type_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _get_type_1 = { kPointerType,16,"st_typelib",1,0,&_get_type_2};
	VPL_ExtProcedure _get_type_F = {"get_type",get_type,&_get_type_1,&_get_type_R};

	VPL_Parameter _make_type_3 = { kPointerType,16,"st_typelib",1,0,NULL};
	VPL_Parameter _make_type_2 = { kUnsignedType,4,NULL,0,0,&_make_type_3};
	VPL_Parameter _make_type_1 = { kPointerType,1,"char",1,0,&_make_type_2};
	VPL_ExtProcedure _make_type_F = {"make_type",make_type,&_make_type_1,NULL};

	VPL_Parameter _find_type_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _find_type_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _find_type_2 = { kPointerType,16,"st_typelib",1,0,&_find_type_3};
	VPL_Parameter _find_type_1 = { kPointerType,1,"char",1,0,&_find_type_2};
	VPL_ExtProcedure _find_type_F = {"find_type",find_type,&_find_type_1,&_find_type_R};

	VPL_ExtProcedure _my_thread_end_F = {"my_thread_end",my_thread_end,NULL,NULL};

	VPL_Parameter _my_thread_init_R = { kIntType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _my_thread_init_F = {"my_thread_init",my_thread_init,NULL,&_my_thread_init_R};

	VPL_Parameter _load_defaults_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _load_defaults_4 = { kPointerType,1,"char",3,0,NULL};
	VPL_Parameter _load_defaults_3 = { kPointerType,4,"int",1,0,&_load_defaults_4};
	VPL_Parameter _load_defaults_2 = { kPointerType,1,"char",2,0,&_load_defaults_3};
	VPL_Parameter _load_defaults_1 = { kPointerType,1,"char",1,1,&_load_defaults_2};
	VPL_ExtProcedure _load_defaults_F = {"load_defaults",load_defaults,&_load_defaults_1,&_load_defaults_R};

	VPL_Parameter _modify_defaults_file_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _modify_defaults_file_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _modify_defaults_file_4 = { kPointerType,1,"char",1,1,&_modify_defaults_file_5};
	VPL_Parameter _modify_defaults_file_3 = { kPointerType,1,"char",1,1,&_modify_defaults_file_4};
	VPL_Parameter _modify_defaults_file_2 = { kPointerType,1,"char",1,1,&_modify_defaults_file_3};
	VPL_Parameter _modify_defaults_file_1 = { kPointerType,1,"char",1,1,&_modify_defaults_file_2};
	VPL_ExtProcedure _modify_defaults_file_F = {"modify_defaults_file",modify_defaults_file,&_modify_defaults_file_1,&_modify_defaults_file_R};

	VPL_Parameter _my_init_R = { kIntType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _my_init_F = {"my_init",my_init,NULL,&_my_init_R};

	VPL_Parameter _get_tty_password_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _get_tty_password_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _get_tty_password_F = {"get_tty_password",get_tty_password,&_get_tty_password_1,&_get_tty_password_R};

	VPL_Parameter _octet2hex_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _octet2hex_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _octet2hex_2 = { kPointerType,1,"char",1,1,&_octet2hex_3};
	VPL_Parameter _octet2hex_1 = { kPointerType,1,"char",1,0,&_octet2hex_2};
	VPL_ExtProcedure _octet2hex_F = {"octet2hex",octet2hex,&_octet2hex_1,&_octet2hex_R};

	VPL_Parameter _make_password_from_salt_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _make_password_from_salt_1 = { kPointerType,1,"char",1,0,&_make_password_from_salt_2};
	VPL_ExtProcedure _make_password_from_salt_F = {"make_password_from_salt",make_password_from_salt,&_make_password_from_salt_1,NULL};

	VPL_Parameter _get_salt_from_password_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _get_salt_from_password_1 = { kPointerType,1,"unsigned char",1,0,&_get_salt_from_password_2};
	VPL_ExtProcedure _get_salt_from_password_F = {"get_salt_from_password",get_salt_from_password,&_get_salt_from_password_1,NULL};

	VPL_Parameter _check_scramble_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _check_scramble_3 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _check_scramble_2 = { kPointerType,1,"char",1,1,&_check_scramble_3};
	VPL_Parameter _check_scramble_1 = { kPointerType,1,"char",1,1,&_check_scramble_2};
	VPL_ExtProcedure _check_scramble_F = {"check_scramble",check_scramble,&_check_scramble_1,&_check_scramble_R};

	VPL_Parameter _scramble_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _scramble_2 = { kPointerType,1,"char",1,1,&_scramble_3};
	VPL_Parameter _scramble_1 = { kPointerType,1,"char",1,0,&_scramble_2};
	VPL_ExtProcedure _scramble_F = {"scramble",scramble,&_scramble_1,NULL};

	VPL_Parameter _make_scrambled_password_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _make_scrambled_password_1 = { kPointerType,1,"char",1,0,&_make_scrambled_password_2};
	VPL_ExtProcedure _make_scrambled_password_F = {"make_scrambled_password",make_scrambled_password,&_make_scrambled_password_1,NULL};

	VPL_Parameter _make_password_from_salt_323_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _make_password_from_salt_323_1 = { kPointerType,1,"char",1,0,&_make_password_from_salt_323_2};
	VPL_ExtProcedure _make_password_from_salt_323_F = {"make_password_from_salt_323",make_password_from_salt_323,&_make_password_from_salt_323_1,NULL};

	VPL_Parameter _get_salt_from_password_323_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _get_salt_from_password_323_1 = { kPointerType,4,"unsigned long",1,0,&_get_salt_from_password_323_2};
	VPL_ExtProcedure _get_salt_from_password_323_F = {"get_salt_from_password_323",get_salt_from_password_323,&_get_salt_from_password_323_1,NULL};

	VPL_Parameter _check_scramble_323_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _check_scramble_323_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _check_scramble_323_2 = { kPointerType,1,"char",1,1,&_check_scramble_323_3};
	VPL_Parameter _check_scramble_323_1 = { kPointerType,1,"char",1,1,&_check_scramble_323_2};
	VPL_ExtProcedure _check_scramble_323_F = {"check_scramble_323",check_scramble_323,&_check_scramble_323_1,&_check_scramble_323_R};

	VPL_Parameter _scramble_323_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _scramble_323_2 = { kPointerType,1,"char",1,1,&_scramble_323_3};
	VPL_Parameter _scramble_323_1 = { kPointerType,1,"char",1,0,&_scramble_323_2};
	VPL_ExtProcedure _scramble_323_F = {"scramble_323",scramble_323,&_scramble_323_1,NULL};

	VPL_Parameter _make_scrambled_password_323_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _make_scrambled_password_323_1 = { kPointerType,1,"char",1,0,&_make_scrambled_password_323_2};
	VPL_ExtProcedure _make_scrambled_password_323_F = {"make_scrambled_password_323",make_scrambled_password_323,&_make_scrambled_password_323_1,NULL};

	VPL_Parameter _hash_password_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _hash_password_2 = { kPointerType,1,"char",1,1,&_hash_password_3};
	VPL_Parameter _hash_password_1 = { kPointerType,4,"unsigned long",1,0,&_hash_password_2};
	VPL_ExtProcedure _hash_password_F = {"hash_password",hash_password,&_hash_password_1,NULL};

	VPL_Parameter _create_random_string_3 = { kPointerType,20,"rand_struct",1,0,NULL};
	VPL_Parameter _create_random_string_2 = { kUnsignedType,4,NULL,0,0,&_create_random_string_3};
	VPL_Parameter _create_random_string_1 = { kPointerType,1,"char",1,0,&_create_random_string_2};
	VPL_ExtProcedure _create_random_string_F = {"create_random_string",create_random_string,&_create_random_string_1,NULL};

	VPL_Parameter _my_rnd_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _my_rnd_1 = { kPointerType,20,"rand_struct",1,0,NULL};
	VPL_ExtProcedure _my_rnd_F = {"my_rnd",my_rnd,&_my_rnd_1,&_my_rnd_R};

	VPL_Parameter _randominit_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _randominit_2 = { kUnsignedType,4,NULL,0,0,&_randominit_3};
	VPL_Parameter _randominit_1 = { kPointerType,20,"rand_struct",1,0,&_randominit_2};
	VPL_ExtProcedure _randominit_F = {"randominit",randominit,&_randominit_1,NULL};

	VPL_Parameter _my_connect_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _my_connect_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _my_connect_3 = { kUnsignedType,4,NULL,0,0,&_my_connect_4};
	VPL_Parameter _my_connect_2 = { kPointerType,0,"sockaddr",1,1,&_my_connect_3};
	VPL_Parameter _my_connect_1 = { kIntType,4,NULL,0,0,&_my_connect_2};
	VPL_ExtProcedure _my_connect_F = {"my_connect",my_connect,&_my_connect_1,&_my_connect_R};

	VPL_Parameter _my_net_read_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _my_net_read_1 = { kPointerType,620,"st_net",1,0,NULL};
	VPL_ExtProcedure _my_net_read_F = {"my_net_read",my_net_read,&_my_net_read_1,&_my_net_read_R};

	VPL_Parameter _net_real_write_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _net_real_write_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _net_real_write_2 = { kPointerType,1,"char",1,1,&_net_real_write_3};
	VPL_Parameter _net_real_write_1 = { kPointerType,620,"st_net",1,0,&_net_real_write_2};
	VPL_ExtProcedure _net_real_write_F = {"net_real_write",net_real_write,&_net_real_write_1,&_net_real_write_R};

	VPL_Parameter _net_write_command_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _net_write_command_6 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _net_write_command_5 = { kPointerType,1,"char",1,1,&_net_write_command_6};
	VPL_Parameter _net_write_command_4 = { kUnsignedType,4,NULL,0,0,&_net_write_command_5};
	VPL_Parameter _net_write_command_3 = { kPointerType,1,"char",1,1,&_net_write_command_4};
	VPL_Parameter _net_write_command_2 = { kUnsignedType,1,NULL,0,0,&_net_write_command_3};
	VPL_Parameter _net_write_command_1 = { kPointerType,620,"st_net",1,0,&_net_write_command_2};
	VPL_ExtProcedure _net_write_command_F = {"net_write_command",net_write_command,&_net_write_command_1,&_net_write_command_R};

	VPL_Parameter _my_net_write_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _my_net_write_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _my_net_write_2 = { kPointerType,1,"char",1,1,&_my_net_write_3};
	VPL_Parameter _my_net_write_1 = { kPointerType,620,"st_net",1,0,&_my_net_write_2};
	VPL_ExtProcedure _my_net_write_F = {"my_net_write",my_net_write,&_my_net_write_1,&_my_net_write_R};

	VPL_Parameter _net_flush_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _net_flush_1 = { kPointerType,620,"st_net",1,0,NULL};
	VPL_ExtProcedure _net_flush_F = {"net_flush",net_flush,&_net_flush_1,&_net_flush_R};

	VPL_Parameter _net_realloc_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _net_realloc_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _net_realloc_1 = { kPointerType,620,"st_net",1,0,&_net_realloc_2};
	VPL_ExtProcedure _net_realloc_F = {"net_realloc",net_realloc,&_net_realloc_1,&_net_realloc_R};

	VPL_Parameter _net_clear_1 = { kPointerType,620,"st_net",1,0,NULL};
	VPL_ExtProcedure _net_clear_F = {"net_clear",net_clear,&_net_clear_1,NULL};

	VPL_Parameter _net_end_1 = { kPointerType,620,"st_net",1,0,NULL};
	VPL_ExtProcedure _net_end_F = {"net_end",net_end,&_net_end_1,NULL};

	VPL_Parameter _my_net_local_init_1 = { kPointerType,620,"st_net",1,0,NULL};
	VPL_ExtProcedure _my_net_local_init_F = {"my_net_local_init",my_net_local_init,&_my_net_local_init_1,NULL};

	VPL_Parameter _my_net_init_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _my_net_init_2 = { kPointerType,0,"st_vio",1,0,NULL};
	VPL_Parameter _my_net_init_1 = { kPointerType,620,"st_net",1,0,&_my_net_init_2};
	VPL_ExtProcedure _my_net_init_F = {"my_net_init",my_net_init,&_my_net_init_1,&_my_net_init_R};

// Not available in Mac OS X 10.6
#if 0
	VPL_Parameter _ntohs_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _ntohs_F = {"ntohs",ntohs,NULL,&_ntohs_R};

	VPL_Parameter _ntohl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ntohl_F = {"ntohl",ntohl,NULL,&_ntohl_R};

	VPL_Parameter _htons_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _htons_F = {"htons",htons,NULL,&_htons_R};

	VPL_Parameter _htonl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _htonl_F = {"htonl",htonl,NULL,&_htonl_R};
#endif


VPL_DictionaryNode VPX_MySQL_Procedures[] =	{
	{"list_walk_action",&_list_walk_action_F},
	{"net_safe_read",&_net_safe_read_F},
	{"mysql_close",&_mysql_close_F},
	{"mysql_next_result",&_mysql_next_result_F},
	{"mysql_more_results",&_mysql_more_results_F},
	{"mysql_autocommit",&_mysql_autocommit_F},
	{"mysql_rollback",&_mysql_rollback_F},
	{"mysql_commit",&_mysql_commit_F},
	{"mysql_stmt_field_count",&_mysql_stmt_field_count_F},
	{"mysql_stmt_insert_id",&_mysql_stmt_insert_id_F},
	{"mysql_stmt_affected_rows",&_mysql_stmt_affected_rows_F},
	{"mysql_stmt_num_rows",&_mysql_stmt_num_rows_F},
	{"mysql_stmt_data_seek",&_mysql_stmt_data_seek_F},
	{"mysql_stmt_row_tell",&_mysql_stmt_row_tell_F},
	{"mysql_stmt_row_seek",&_mysql_stmt_row_seek_F},
	{"mysql_stmt_sqlstate",&_mysql_stmt_sqlstate_F},
	{"mysql_stmt_error",&_mysql_stmt_error_F},
	{"mysql_stmt_errno",&_mysql_stmt_errno_F},
	{"mysql_stmt_param_metadata",&_mysql_stmt_param_metadata_F},
	{"mysql_stmt_result_metadata",&_mysql_stmt_result_metadata_F},
	{"mysql_stmt_send_long_data",&_mysql_stmt_send_long_data_F},
	{"mysql_stmt_free_result",&_mysql_stmt_free_result_F},
	{"mysql_stmt_reset",&_mysql_stmt_reset_F},
	{"mysql_stmt_close",&_mysql_stmt_close_F},
	{"mysql_stmt_bind_result",&_mysql_stmt_bind_result_F},
	{"mysql_stmt_bind_param",&_mysql_stmt_bind_param_F},
	{"mysql_stmt_attr_get",&_mysql_stmt_attr_get_F},
	{"mysql_stmt_attr_set",&_mysql_stmt_attr_set_F},
	{"mysql_stmt_param_count",&_mysql_stmt_param_count_F},
	{"mysql_stmt_store_result",&_mysql_stmt_store_result_F},
	{"mysql_stmt_fetch_column",&_mysql_stmt_fetch_column_F},
	{"mysql_stmt_fetch",&_mysql_stmt_fetch_F},
	{"mysql_stmt_execute",&_mysql_stmt_execute_F},
	{"mysql_stmt_prepare",&_mysql_stmt_prepare_F},
	{"mysql_stmt_init",&_mysql_stmt_init_F},
	{"mysql_read_query_result",&_mysql_read_query_result_F},
	{"mysql_manager_fetch_line",&_mysql_manager_fetch_line_F},
	{"mysql_manager_command",&_mysql_manager_command_F},
	{"mysql_manager_close",&_mysql_manager_close_F},
	{"mysql_manager_connect",&_mysql_manager_connect_F},
	{"mysql_manager_init",&_mysql_manager_init_F},
	{"mysql_embedded",&_mysql_embedded_F},
	{"mysql_thread_safe",&_mysql_thread_safe_F},
	{"myodbc_remove_escape",&_myodbc_remove_escape_F},
	{"mysql_odbc_escape_string",&_mysql_odbc_escape_string_F},
	{"mysql_debug",&_mysql_debug_F},
	{"mysql_real_escape_string",&_mysql_real_escape_string_F},
	{"mysql_hex_string",&_mysql_hex_string_F},
	{"mysql_escape_string",&_mysql_escape_string_F},
	{"mysql_list_fields",&_mysql_list_fields_F},
	{"mysql_fetch_field",&_mysql_fetch_field_F},
	{"mysql_fetch_lengths",&_mysql_fetch_lengths_F},
	{"mysql_fetch_row",&_mysql_fetch_row_F},
	{"mysql_field_seek",&_mysql_field_seek_F},
	{"mysql_row_seek",&_mysql_row_seek_F},
	{"mysql_data_seek",&_mysql_data_seek_F},
	{"mysql_free_result",&_mysql_free_result_F},
	{"mysql_options",&_mysql_options_F},
	{"mysql_list_processes",&_mysql_list_processes_F},
	{"mysql_list_tables",&_mysql_list_tables_F},
	{"mysql_list_dbs",&_mysql_list_dbs_F},
	{"mysql_get_proto_info",&_mysql_get_proto_info_F},
	{"mysql_get_server_version",&_mysql_get_server_version_F},
	{"mysql_get_host_info",&_mysql_get_host_info_F},
	{"mysql_get_client_version",&_mysql_get_client_version_F},
	{"mysql_get_client_info",&_mysql_get_client_info_F},
	{"mysql_get_server_info",&_mysql_get_server_info_F},
	{"mysql_stat",&_mysql_stat_F},
	{"mysql_ping",&_mysql_ping_F},
	{"mysql_set_server_option",&_mysql_set_server_option_F},
	{"mysql_kill",&_mysql_kill_F},
	{"mysql_refresh",&_mysql_refresh_F},
	{"mysql_dump_debug_info",&_mysql_dump_debug_info_F},
	{"mysql_shutdown",&_mysql_shutdown_F},
	{"mysql_add_slave",&_mysql_add_slave_F},
	{"mysql_set_master",&_mysql_set_master_F},
	{"mysql_rpl_probe",&_mysql_rpl_probe_F},
	{"mysql_rpl_query_type",&_mysql_rpl_query_type_F},
	{"mysql_reads_from_master_enabled",&_mysql_reads_from_master_enabled_F},
	{"mysql_disable_reads_from_master",&_mysql_disable_reads_from_master_F},
	{"mysql_enable_reads_from_master",&_mysql_enable_reads_from_master_F},
	{"mysql_rpl_parse_enabled",&_mysql_rpl_parse_enabled_F},
	{"mysql_disable_rpl_parse",&_mysql_disable_rpl_parse_F},
	{"mysql_enable_rpl_parse",&_mysql_enable_rpl_parse_F},
	{"mysql_set_local_infile_default",&_mysql_set_local_infile_default_F},
	{"mysql_set_local_infile_handler",&_mysql_set_local_infile_handler_F},
	{"mysql_get_character_set_info",&_mysql_get_character_set_info_F},
	{"mysql_slave_send_query",&_mysql_slave_send_query_F},
	{"mysql_slave_query",&_mysql_slave_query_F},
	{"mysql_master_send_query",&_mysql_master_send_query_F},
	{"mysql_master_query",&_mysql_master_query_F},
	{"mysql_use_result",&_mysql_use_result_F},
	{"mysql_store_result",&_mysql_store_result_F},
	{"mysql_real_query",&_mysql_real_query_F},
	{"mysql_send_query",&_mysql_send_query_F},
	{"mysql_query",&_mysql_query_F},
	{"mysql_select_db",&_mysql_select_db_F},
	{"mysql_real_connect",&_mysql_real_connect_F},
	{"mysql_change_user",&_mysql_change_user_F},
	{"mysql_ssl_set",&_mysql_ssl_set_F},
	{"mysql_init",&_mysql_init_F},
	{"mysql_set_character_set",&_mysql_set_character_set_F},
	{"mysql_character_set_name",&_mysql_character_set_name_F},
	{"mysql_thread_id",&_mysql_thread_id_F},
	{"mysql_info",&_mysql_info_F},
	{"mysql_warning_count",&_mysql_warning_count_F},
	{"mysql_sqlstate",&_mysql_sqlstate_F},
	{"mysql_error",&_mysql_error_F},
	{"mysql_errno",&_mysql_errno_F},
	{"mysql_insert_id",&_mysql_insert_id_F},
	{"mysql_affected_rows",&_mysql_affected_rows_F},
	{"mysql_field_count",&_mysql_field_count_F},
	{"mysql_field_tell",&_mysql_field_tell_F},
	{"mysql_row_tell",&_mysql_row_tell_F},
	{"mysql_fetch_fields",&_mysql_fetch_fields_F},
	{"mysql_fetch_field_direct",&_mysql_fetch_field_direct_F},
	{"mysql_eof",&_mysql_eof_F},
	{"mysql_num_fields",&_mysql_num_fields_F},
	{"mysql_num_rows",&_mysql_num_rows_F},
	{"mysql_thread_end",&_mysql_thread_end_F},
	{"mysql_thread_init",&_mysql_thread_init_F},
	{"mysql_get_parameters",&_mysql_get_parameters_F},
	{"mysql_server_end",&_mysql_server_end_F},
	{"mysql_server_init",&_mysql_server_init_F},
	{"list_walk",&_list_walk_F},
	{"list_length",&_list_length_F},
	{"list_free",&_list_free_F},
	{"list_reverse",&_list_reverse_F},
	{"list_cons",&_list_cons_F},
	{"list_delete",&_list_delete_F},
	{"list_add",&_list_add_F},
	{"get_type",&_get_type_F},
	{"make_type",&_make_type_F},
	{"find_type",&_find_type_F},
	{"my_thread_end",&_my_thread_end_F},
	{"my_thread_init",&_my_thread_init_F},
	{"load_defaults",&_load_defaults_F},
	{"modify_defaults_file",&_modify_defaults_file_F},
	{"my_init",&_my_init_F},
	{"get_tty_password",&_get_tty_password_F},
	{"octet2hex",&_octet2hex_F},
	{"make_password_from_salt",&_make_password_from_salt_F},
	{"get_salt_from_password",&_get_salt_from_password_F},
	{"check_scramble",&_check_scramble_F},
	{"scramble",&_scramble_F},
	{"make_scrambled_password",&_make_scrambled_password_F},
	{"make_password_from_salt_323",&_make_password_from_salt_323_F},
	{"get_salt_from_password_323",&_get_salt_from_password_323_F},
	{"check_scramble_323",&_check_scramble_323_F},
	{"scramble_323",&_scramble_323_F},
	{"make_scrambled_password_323",&_make_scrambled_password_323_F},
	{"hash_password",&_hash_password_F},
	{"create_random_string",&_create_random_string_F},
	{"my_rnd",&_my_rnd_F},
	{"randominit",&_randominit_F},
	{"my_connect",&_my_connect_F},
	{"my_net_read",&_my_net_read_F},
	{"net_real_write",&_net_real_write_F},
	{"net_write_command",&_net_write_command_F},
	{"my_net_write",&_my_net_write_F},
	{"net_flush",&_net_flush_F},
	{"net_realloc",&_net_realloc_F},
	{"net_clear",&_net_clear_F},
	{"net_end",&_net_end_F},
	{"my_net_local_init",&_my_net_local_init_F},
	{"my_net_init",&_my_net_init_F},
//	{"ntohs",&_ntohs_F},
//	{"ntohl",&_ntohl_F},
//	{"htons",&_htons_F},
//	{"htonl",&_htonl_F},
};

Nat4	VPX_MySQL_Procedures_Number = 170;

#pragma export on

Nat4	load_MySQL_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MySQL_Procedures(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_MySQL_Procedures_Number,VPX_MySQL_Procedures);
		
		return result;
}

#pragma export off
