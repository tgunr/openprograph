/*
	
	MacOSX_Structures.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

	VPL_ExtField _st_mysql_stmt_26 = { "update_max_length",698,1,kIntType,"NULL",0,0,"char",NULL};
	VPL_ExtField _st_mysql_stmt_25 = { "unbuffered_fetch_cancelled",697,1,kIntType,"NULL",0,0,"char",&_st_mysql_stmt_26};
	VPL_ExtField _st_mysql_stmt_24 = { "bind_result_done",696,1,kUnsignedType,"NULL",0,0,"unsigned char",&_st_mysql_stmt_25};
	VPL_ExtField _st_mysql_stmt_23 = { "bind_param_done",695,1,kIntType,"NULL",0,0,"char",&_st_mysql_stmt_24};
	VPL_ExtField _st_mysql_stmt_22 = { "send_types_to_server",694,1,kIntType,"NULL",0,0,"char",&_st_mysql_stmt_23};
	VPL_ExtField _st_mysql_stmt_21 = { "sqlstate",688,6,kPointerType,"char",0,1,NULL,&_st_mysql_stmt_22};
	VPL_ExtField _st_mysql_stmt_20 = { "last_error",176,512,kPointerType,"char",0,1,NULL,&_st_mysql_stmt_21};
	VPL_ExtField _st_mysql_stmt_19 = { "state",172,4,kEnumType,"char",0,1,"enum_mysql_stmt_state",&_st_mysql_stmt_20};
	VPL_ExtField _st_mysql_stmt_18 = { "field_count",168,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_stmt_19};
	VPL_ExtField _st_mysql_stmt_17 = { "param_count",164,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_stmt_18};
	VPL_ExtField _st_mysql_stmt_16 = { "last_errno",160,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_stmt_17};
	VPL_ExtField _st_mysql_stmt_15 = { "server_status",156,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_stmt_16};
	VPL_ExtField _st_mysql_stmt_14 = { "prefetch_rows",152,4,kUnsignedType,"char",0,1,"unsigned long",&_st_mysql_stmt_15};
	VPL_ExtField _st_mysql_stmt_13 = { "flags",148,4,kUnsignedType,"char",0,1,"unsigned long",&_st_mysql_stmt_14};
	VPL_ExtField _st_mysql_stmt_12 = { "stmt_id",144,4,kUnsignedType,"char",0,1,"unsigned long",&_st_mysql_stmt_13};
	VPL_ExtField _st_mysql_stmt_11 = { "read_row_func",140,4,kPointerType,"int",1,4,"T*",&_st_mysql_stmt_12};
	VPL_ExtField _st_mysql_stmt_10 = { "insert_id",132,8,kUnsignedType,"int",1,4,"unsigned long long",&_st_mysql_stmt_11};
	VPL_ExtField _st_mysql_stmt_9 = { "affected_rows",124,8,kUnsignedType,"int",1,4,"unsigned long long",&_st_mysql_stmt_10};
	VPL_ExtField _st_mysql_stmt_8 = { "data_cursor",120,4,kPointerType,"st_mysql_rows",1,12,"T*",&_st_mysql_stmt_9};
	VPL_ExtField _st_mysql_stmt_7 = { "result",64,56,kStructureType,"st_mysql_rows",1,12,"st_mysql_data",&_st_mysql_stmt_8};
	VPL_ExtField _st_mysql_stmt_6 = { "fields",56,4,kPointerType,"st_mysql_field",1,80,"T*",&_st_mysql_stmt_7};
	VPL_ExtField _st_mysql_stmt_5 = { "bind",52,4,kPointerType,"st_mysql_bind",1,60,"T*",&_st_mysql_stmt_6};
	VPL_ExtField _st_mysql_stmt_4 = { "params",48,4,kPointerType,"st_mysql_bind",1,60,"T*",&_st_mysql_stmt_5};
	VPL_ExtField _st_mysql_stmt_3 = { "mysql",44,4,kPointerType,"st_mysql",1,1024,"T*",&_st_mysql_stmt_4};
	VPL_ExtField _st_mysql_stmt_2 = { "list",32,12,kStructureType,"st_mysql",1,1024,"st_list",&_st_mysql_stmt_3};
	VPL_ExtField _st_mysql_stmt_1 = { "mem_root",0,32,kStructureType,"st_mysql",1,1024,"st_mem_root",&_st_mysql_stmt_2};
	VPL_ExtStructure _st_mysql_stmt_S = {"st_mysql_stmt",&_st_mysql_stmt_1};

	VPL_ExtField _st_mysql_bind_18 = { "skip_result",56,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _st_mysql_bind_17 = { "fetch_result",52,4,kPointerType,"void",1,0,"T*",&_st_mysql_bind_18};
	VPL_ExtField _st_mysql_bind_16 = { "store_param_func",48,4,kPointerType,"void",1,0,"T*",&_st_mysql_bind_17};
	VPL_ExtField _st_mysql_bind_15 = { "is_null_value",47,1,kIntType,"void",1,0,"char",&_st_mysql_bind_16};
	VPL_ExtField _st_mysql_bind_14 = { "long_data_used",46,1,kIntType,"void",1,0,"char",&_st_mysql_bind_15};
	VPL_ExtField _st_mysql_bind_13 = { "is_unsigned",45,1,kIntType,"void",1,0,"char",&_st_mysql_bind_14};
	VPL_ExtField _st_mysql_bind_12 = { "error_value",44,1,kIntType,"void",1,0,"char",&_st_mysql_bind_13};
	VPL_ExtField _st_mysql_bind_11 = { "pack_length",40,4,kUnsignedType,"void",1,0,"unsigned int",&_st_mysql_bind_12};
	VPL_ExtField _st_mysql_bind_10 = { "param_number",36,4,kUnsignedType,"void",1,0,"unsigned int",&_st_mysql_bind_11};
	VPL_ExtField _st_mysql_bind_9 = { "length_value",32,4,kUnsignedType,"void",1,0,"unsigned long",&_st_mysql_bind_10};
	VPL_ExtField _st_mysql_bind_8 = { "offset",28,4,kUnsignedType,"void",1,0,"unsigned long",&_st_mysql_bind_9};
	VPL_ExtField _st_mysql_bind_7 = { "row_ptr",24,4,kPointerType,"unsigned char",1,1,"T*",&_st_mysql_bind_8};
	VPL_ExtField _st_mysql_bind_6 = { "buffer_length",20,4,kUnsignedType,"unsigned char",1,1,"unsigned long",&_st_mysql_bind_7};
	VPL_ExtField _st_mysql_bind_5 = { "buffer_type",16,4,kEnumType,"unsigned char",1,1,"enum_field_types",&_st_mysql_bind_6};
	VPL_ExtField _st_mysql_bind_4 = { "error",12,4,kPointerType,"char",1,1,"T*",&_st_mysql_bind_5};
	VPL_ExtField _st_mysql_bind_3 = { "buffer",8,4,kPointerType,"void",1,0,"T*",&_st_mysql_bind_4};
	VPL_ExtField _st_mysql_bind_2 = { "is_null",4,4,kPointerType,"char",1,1,"T*",&_st_mysql_bind_3};
	VPL_ExtField _st_mysql_bind_1 = { "length",0,4,kPointerType,"unsigned long",1,4,"T*",&_st_mysql_bind_2};
	VPL_ExtStructure _st_mysql_bind_S = {"st_mysql_bind",&_st_mysql_bind_1};

	VPL_ExtField _st_mysql_parameters_2 = { "p_net_buffer_length",4,4,kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _st_mysql_parameters_1 = { "p_max_allowed_packet",0,4,kPointerType,"unsigned long",1,4,"T*",&_st_mysql_parameters_2};
	VPL_ExtStructure _st_mysql_parameters_S = {"st_mysql_parameters",&_st_mysql_parameters_1};

	VPL_ExtField _st_mysql_manager_14 = { "last_error",664,256,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _st_mysql_manager_13 = { "net_buf_size",660,4,kIntType,"char",0,1,"int",&_st_mysql_manager_14};
	VPL_ExtField _st_mysql_manager_12 = { "net_data_end",656,4,kPointerType,"char",1,1,"T*",&_st_mysql_manager_13};
	VPL_ExtField _st_mysql_manager_11 = { "net_buf_pos",652,4,kPointerType,"char",1,1,"T*",&_st_mysql_manager_12};
	VPL_ExtField _st_mysql_manager_10 = { "net_buf",648,4,kPointerType,"char",1,1,"T*",&_st_mysql_manager_11};
	VPL_ExtField _st_mysql_manager_9 = { "last_errno",644,4,kIntType,"char",1,1,"int",&_st_mysql_manager_10};
	VPL_ExtField _st_mysql_manager_8 = { "cmd_status",640,4,kIntType,"char",1,1,"int",&_st_mysql_manager_9};
	VPL_ExtField _st_mysql_manager_7 = { "eof",637,1,kIntType,"char",1,1,"char",&_st_mysql_manager_8};
	VPL_ExtField _st_mysql_manager_6 = { "free_me",636,1,kIntType,"char",1,1,"char",&_st_mysql_manager_7};
	VPL_ExtField _st_mysql_manager_5 = { "port",632,4,kUnsignedType,"char",1,1,"unsigned int",&_st_mysql_manager_6};
	VPL_ExtField _st_mysql_manager_4 = { "passwd",628,4,kPointerType,"char",1,1,"T*",&_st_mysql_manager_5};
	VPL_ExtField _st_mysql_manager_3 = { "user",624,4,kPointerType,"char",1,1,"T*",&_st_mysql_manager_4};
	VPL_ExtField _st_mysql_manager_2 = { "host",620,4,kPointerType,"char",1,1,"T*",&_st_mysql_manager_3};
	VPL_ExtField _st_mysql_manager_1 = { "net",0,620,kStructureType,"char",1,1,"st_net",&_st_mysql_manager_2};
	VPL_ExtStructure _st_mysql_manager_S = {"st_mysql_manager",&_st_mysql_manager_1};

	VPL_ExtField _st_mysql_res_14 = { "methods",80,4,kPointerType,"st_mysql_methods",1,60,"T*",NULL};
	VPL_ExtField _st_mysql_res_13 = { "unbuffered_fetch_cancelled",77,1,kIntType,"st_mysql_methods",1,60,"char",&_st_mysql_res_14};
	VPL_ExtField _st_mysql_res_12 = { "eof",76,1,kIntType,"st_mysql_methods",1,60,"char",&_st_mysql_res_13};
	VPL_ExtField _st_mysql_res_11 = { "current_row",72,4,kPointerType,"char",2,1,"T*",&_st_mysql_res_12};
	VPL_ExtField _st_mysql_res_10 = { "row",68,4,kPointerType,"char",2,1,"T*",&_st_mysql_res_11};
	VPL_ExtField _st_mysql_res_9 = { "current_field",64,4,kUnsignedType,"char",2,1,"unsigned int",&_st_mysql_res_10};
	VPL_ExtField _st_mysql_res_8 = { "field_count",60,4,kUnsignedType,"char",2,1,"unsigned int",&_st_mysql_res_9};
	VPL_ExtField _st_mysql_res_7 = { "field_alloc",28,32,kStructureType,"char",2,1,"st_mem_root",&_st_mysql_res_8};
	VPL_ExtField _st_mysql_res_6 = { "handle",24,4,kPointerType,"st_mysql",1,1024,"T*",&_st_mysql_res_7};
	VPL_ExtField _st_mysql_res_5 = { "lengths",20,4,kPointerType,"unsigned long",1,4,"T*",&_st_mysql_res_6};
	VPL_ExtField _st_mysql_res_4 = { "data_cursor",16,4,kPointerType,"st_mysql_rows",1,12,"T*",&_st_mysql_res_5};
	VPL_ExtField _st_mysql_res_3 = { "data",12,4,kPointerType,"st_mysql_data",1,56,"T*",&_st_mysql_res_4};
	VPL_ExtField _st_mysql_res_2 = { "fields",8,4,kPointerType,"st_mysql_field",1,80,"T*",&_st_mysql_res_3};
	VPL_ExtField _st_mysql_res_1 = { "row_count",0,8,kUnsignedType,"st_mysql_field",1,80,"unsigned long long",&_st_mysql_res_2};
	VPL_ExtStructure _st_mysql_res_S = {"st_mysql_res",&_st_mysql_res_1};

	VPL_ExtStructure _charset_info_st_S = {"charset_info_st",NULL};

	VPL_ExtField _st_mysql_40 = { "unbuffered_fetch_owner",948,4,kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _st_mysql_39 = { "thd",944,4,kPointerType,"void",1,0,"T*",&_st_mysql_40};
	VPL_ExtField _st_mysql_38 = { "methods",940,4,kPointerType,"st_mysql_methods",1,60,"T*",&_st_mysql_39};
	VPL_ExtField _st_mysql_37 = { "stmts",936,4,kPointerType,"st_list",1,12,"T*",&_st_mysql_38};
	VPL_ExtField _st_mysql_36 = { "last_used_con",932,4,kPointerType,"st_mysql",1,1024,"T*",&_st_mysql_37};
	VPL_ExtField _st_mysql_35 = { "last_used_slave",928,4,kPointerType,"st_mysql",1,1024,"T*",&_st_mysql_36};
	VPL_ExtField _st_mysql_34 = { "next_slave",924,4,kPointerType,"st_mysql",1,1024,"T*",&_st_mysql_35};
	VPL_ExtField _st_mysql_33 = { "master",920,4,kPointerType,"st_mysql",1,1024,"T*",&_st_mysql_34};
	VPL_ExtField _st_mysql_32 = { "rpl_pivot",919,1,kIntType,"st_mysql",1,1024,"char",&_st_mysql_33};
	VPL_ExtField _st_mysql_31 = { "scramble",898,21,kPointerType,"char",0,1,NULL,&_st_mysql_32};
	VPL_ExtField _st_mysql_30 = { "reconnect",897,1,kIntType,"char",0,1,"char",&_st_mysql_31};
	VPL_ExtField _st_mysql_29 = { "free_me",896,1,kIntType,"char",0,1,"char",&_st_mysql_30};
	VPL_ExtField _st_mysql_28 = { "status",892,4,kEnumType,"char",0,1,"mysql_status",&_st_mysql_29};
	VPL_ExtField _st_mysql_27 = { "options",760,132,kStructureType,"char",0,1,"st_mysql_options",&_st_mysql_28};
	VPL_ExtField _st_mysql_26 = { "warning_count",756,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_27};
	VPL_ExtField _st_mysql_25 = { "server_language",752,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_26};
	VPL_ExtField _st_mysql_24 = { "server_status",748,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_25};
	VPL_ExtField _st_mysql_23 = { "field_count",744,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_24};
	VPL_ExtField _st_mysql_22 = { "protocol_version",740,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_23};
	VPL_ExtField _st_mysql_21 = { "server_capabilities",736,4,kUnsignedType,"char",0,1,"unsigned long",&_st_mysql_22};
	VPL_ExtField _st_mysql_20 = { "client_flag",732,4,kUnsignedType,"char",0,1,"unsigned long",&_st_mysql_21};
	VPL_ExtField _st_mysql_19 = { "port",728,4,kUnsignedType,"char",0,1,"unsigned int",&_st_mysql_20};
	VPL_ExtField _st_mysql_18 = { "packet_length",724,4,kUnsignedType,"char",0,1,"unsigned long",&_st_mysql_19};
	VPL_ExtField _st_mysql_17 = { "thread_id",720,4,kUnsignedType,"char",0,1,"unsigned long",&_st_mysql_18};
	VPL_ExtField _st_mysql_16 = { "extra_info",712,8,kUnsignedType,"char",0,1,"unsigned long long",&_st_mysql_17};
	VPL_ExtField _st_mysql_15 = { "insert_id",704,8,kUnsignedType,"char",0,1,"unsigned long long",&_st_mysql_16};
	VPL_ExtField _st_mysql_14 = { "affected_rows",696,8,kUnsignedType,"char",0,1,"unsigned long long",&_st_mysql_15};
	VPL_ExtField _st_mysql_13 = { "field_alloc",664,32,kStructureType,"char",0,1,"st_mem_root",&_st_mysql_14};
	VPL_ExtField _st_mysql_12 = { "fields",660,4,kPointerType,"st_mysql_field",1,80,"T*",&_st_mysql_13};
	VPL_ExtField _st_mysql_11 = { "charset",656,4,kPointerType,"charset_info_st",1,0,"T*",&_st_mysql_12};
	VPL_ExtField _st_mysql_10 = { "db",652,4,kPointerType,"char",1,1,"T*",&_st_mysql_11};
	VPL_ExtField _st_mysql_9 = { "info",648,4,kPointerType,"char",1,1,"T*",&_st_mysql_10};
	VPL_ExtField _st_mysql_8 = { "host_info",644,4,kPointerType,"char",1,1,"T*",&_st_mysql_9};
	VPL_ExtField _st_mysql_7 = { "server_version",640,4,kPointerType,"char",1,1,"T*",&_st_mysql_8};
	VPL_ExtField _st_mysql_6 = { "unix_socket",636,4,kPointerType,"char",1,1,"T*",&_st_mysql_7};
	VPL_ExtField _st_mysql_5 = { "passwd",632,4,kPointerType,"char",1,1,"T*",&_st_mysql_6};
	VPL_ExtField _st_mysql_4 = { "user",628,4,kPointerType,"char",1,1,"T*",&_st_mysql_5};
	VPL_ExtField _st_mysql_3 = { "host",624,4,kPointerType,"char",1,1,"T*",&_st_mysql_4};
	VPL_ExtField _st_mysql_2 = { "connector_fd",620,4,kPointerType,"char",1,1,"T*",&_st_mysql_3};
	VPL_ExtField _st_mysql_1 = { "net",0,620,kStructureType,"char",1,1,"st_net",&_st_mysql_2};
	VPL_ExtStructure _st_mysql_S = {"st_mysql",&_st_mysql_1};

	VPL_ExtField _st_mysql_methods_15 = { "read_change_user_result",56,4,kPointerType,"int",1,4,"T*",NULL};
	VPL_ExtField _st_mysql_methods_14 = { "next_result",52,4,kPointerType,"char",1,1,"T*",&_st_mysql_methods_15};
	VPL_ExtField _st_mysql_methods_13 = { "read_statistics",48,4,kPointerType,"char",2,1,"T*",&_st_mysql_methods_14};
	VPL_ExtField _st_mysql_methods_12 = { "free_embedded_thd",44,4,kPointerType,"void",1,0,"T*",&_st_mysql_methods_13};
	VPL_ExtField _st_mysql_methods_11 = { "unbuffered_fetch",40,4,kPointerType,"int",1,4,"T*",&_st_mysql_methods_12};
	VPL_ExtField _st_mysql_methods_10 = { "read_binary_rows",36,4,kPointerType,"int",1,4,"T*",&_st_mysql_methods_11};
	VPL_ExtField _st_mysql_methods_9 = { "stmt_execute",32,4,kPointerType,"int",1,4,"T*",&_st_mysql_methods_10};
	VPL_ExtField _st_mysql_methods_8 = { "read_prepare_result",28,4,kPointerType,"char",1,1,"T*",&_st_mysql_methods_9};
	VPL_ExtField _st_mysql_methods_7 = { "list_fields",24,4,kPointerType,"st_mysql_field",2,80,"T*",&_st_mysql_methods_8};
	VPL_ExtField _st_mysql_methods_6 = { "flush_use_result",20,4,kPointerType,"void",1,0,"T*",&_st_mysql_methods_7};
	VPL_ExtField _st_mysql_methods_5 = { "fetch_lengths",16,4,kPointerType,"void",1,0,"T*",&_st_mysql_methods_6};
	VPL_ExtField _st_mysql_methods_4 = { "use_result",12,4,kPointerType,"st_mysql_res",2,88,"T*",&_st_mysql_methods_5};
	VPL_ExtField _st_mysql_methods_3 = { "read_rows",8,4,kPointerType,"st_mysql_data",2,56,"T*",&_st_mysql_methods_4};
	VPL_ExtField _st_mysql_methods_2 = { "advanced_command",4,4,kPointerType,"char",1,1,"T*",&_st_mysql_methods_3};
	VPL_ExtField _st_mysql_methods_1 = { "read_query_result",0,4,kPointerType,"char",1,1,"T*",&_st_mysql_methods_2};
	VPL_ExtStructure _st_mysql_methods_S = {"st_mysql_methods",&_st_mysql_methods_1};

	VPL_ExtField _character_set_8 = { "mbmaxlen",28,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _character_set_7 = { "mbminlen",24,4,kUnsignedType,"NULL",0,0,"unsigned int",&_character_set_8};
	VPL_ExtField _character_set_6 = { "dir",20,4,kPointerType,"char",1,1,"T*",&_character_set_7};
	VPL_ExtField _character_set_5 = { "comment",16,4,kPointerType,"char",1,1,"T*",&_character_set_6};
	VPL_ExtField _character_set_4 = { "name",12,4,kPointerType,"char",1,1,"T*",&_character_set_5};
	VPL_ExtField _character_set_3 = { "csname",8,4,kPointerType,"char",1,1,"T*",&_character_set_4};
	VPL_ExtField _character_set_2 = { "state",4,4,kUnsignedType,"char",1,1,"unsigned int",&_character_set_3};
	VPL_ExtField _character_set_1 = { "number",0,4,kUnsignedType,"char",1,1,"unsigned int",&_character_set_2};
	VPL_ExtStructure _character_set_S = {"character_set",&_character_set_1};

	VPL_ExtStructure _st_dynamic_array_S = {"st_dynamic_array",NULL};

	VPL_ExtField _st_mysql_options_39 = { "local_infile_userdata",128,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _st_mysql_options_38 = { "local_infile_error",124,4,kPointerType,"int",1,4,"T*",&_st_mysql_options_39};
	VPL_ExtField _st_mysql_options_37 = { "local_infile_end",120,4,kPointerType,"void",1,0,"T*",&_st_mysql_options_38};
	VPL_ExtField _st_mysql_options_36 = { "local_infile_read",116,4,kPointerType,"int",1,4,"T*",&_st_mysql_options_37};
	VPL_ExtField _st_mysql_options_35 = { "local_infile_init",112,4,kPointerType,"int",1,4,"T*",&_st_mysql_options_36};
	VPL_ExtField _st_mysql_options_34 = { "report_data_truncation",109,1,kIntType,"int",1,4,"char",&_st_mysql_options_35};
	VPL_ExtField _st_mysql_options_33 = { "secure_auth",108,1,kIntType,"int",1,4,"char",&_st_mysql_options_34};
	VPL_ExtField _st_mysql_options_32 = { "client_ip",104,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_33};
	VPL_ExtField _st_mysql_options_31 = { "methods_to_use",100,4,kEnumType,"char",1,1,"mysql_option",&_st_mysql_options_32};
	VPL_ExtField _st_mysql_options_30 = { "separate_thread",98,1,kIntType,"char",1,1,"char",&_st_mysql_options_31};
	VPL_ExtField _st_mysql_options_29 = { "no_master_reads",97,1,kIntType,"char",1,1,"char",&_st_mysql_options_30};
	VPL_ExtField _st_mysql_options_28 = { "rpl_parse",96,1,kIntType,"char",1,1,"char",&_st_mysql_options_29};
	VPL_ExtField _st_mysql_options_27 = { "rpl_probe",95,1,kIntType,"char",1,1,"char",&_st_mysql_options_28};
	VPL_ExtField _st_mysql_options_26 = { "named_pipe",94,1,kIntType,"char",1,1,"char",&_st_mysql_options_27};
	VPL_ExtField _st_mysql_options_25 = { "compress",93,1,kIntType,"char",1,1,"char",&_st_mysql_options_26};
	VPL_ExtField _st_mysql_options_24 = { "use_ssl",92,1,kIntType,"char",1,1,"char",&_st_mysql_options_25};
	VPL_ExtField _st_mysql_options_23 = { "max_allowed_packet",88,4,kUnsignedType,"char",1,1,"unsigned long",&_st_mysql_options_24};
	VPL_ExtField _st_mysql_options_22 = { "shared_memory_base_name",84,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_23};
	VPL_ExtField _st_mysql_options_21 = { "ssl_cipher",80,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_22};
	VPL_ExtField _st_mysql_options_20 = { "ssl_capath",76,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_21};
	VPL_ExtField _st_mysql_options_19 = { "ssl_ca",72,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_20};
	VPL_ExtField _st_mysql_options_18 = { "ssl_cert",68,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_19};
	VPL_ExtField _st_mysql_options_17 = { "ssl_key",64,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_18};
	VPL_ExtField _st_mysql_options_16 = { "charset_name",60,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_17};
	VPL_ExtField _st_mysql_options_15 = { "charset_dir",56,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_16};
	VPL_ExtField _st_mysql_options_14 = { "my_cnf_group",52,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_15};
	VPL_ExtField _st_mysql_options_13 = { "my_cnf_file",48,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_14};
	VPL_ExtField _st_mysql_options_12 = { "init_commands",44,4,kPointerType,"st_dynamic_array",1,0,"T*",&_st_mysql_options_13};
	VPL_ExtField _st_mysql_options_11 = { "db",40,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_12};
	VPL_ExtField _st_mysql_options_10 = { "unix_socket",36,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_11};
	VPL_ExtField _st_mysql_options_9 = { "password",32,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_10};
	VPL_ExtField _st_mysql_options_8 = { "user",28,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_9};
	VPL_ExtField _st_mysql_options_7 = { "host",24,4,kPointerType,"char",1,1,"T*",&_st_mysql_options_8};
	VPL_ExtField _st_mysql_options_6 = { "client_flag",20,4,kUnsignedType,"char",1,1,"unsigned long",&_st_mysql_options_7};
	VPL_ExtField _st_mysql_options_5 = { "protocol",16,4,kUnsignedType,"char",1,1,"unsigned int",&_st_mysql_options_6};
	VPL_ExtField _st_mysql_options_4 = { "port",12,4,kUnsignedType,"char",1,1,"unsigned int",&_st_mysql_options_5};
	VPL_ExtField _st_mysql_options_3 = { "write_timeout",8,4,kUnsignedType,"char",1,1,"unsigned int",&_st_mysql_options_4};
	VPL_ExtField _st_mysql_options_2 = { "read_timeout",4,4,kUnsignedType,"char",1,1,"unsigned int",&_st_mysql_options_3};
	VPL_ExtField _st_mysql_options_1 = { "connect_timeout",0,4,kUnsignedType,"char",1,1,"unsigned int",&_st_mysql_options_2};
	VPL_ExtStructure _st_mysql_options_S = {"st_mysql_options",&_st_mysql_options_1};

	VPL_ExtField _st_mysql_data_5 = { "prev_ptr",48,4,kPointerType,"st_mysql_rows",2,12,"T*",NULL};
	VPL_ExtField _st_mysql_data_4 = { "alloc",16,32,kStructureType,"st_mysql_rows",2,12,"st_mem_root",&_st_mysql_data_5};
	VPL_ExtField _st_mysql_data_3 = { "data",12,4,kPointerType,"st_mysql_rows",1,12,"T*",&_st_mysql_data_4};
	VPL_ExtField _st_mysql_data_2 = { "fields",8,4,kUnsignedType,"st_mysql_rows",1,12,"unsigned int",&_st_mysql_data_3};
	VPL_ExtField _st_mysql_data_1 = { "rows",0,8,kUnsignedType,"st_mysql_rows",1,12,"unsigned long long",&_st_mysql_data_2};
	VPL_ExtStructure _st_mysql_data_S = {"st_mysql_data",&_st_mysql_data_1};

	VPL_ExtField _st_mem_root_8 = { "error_handler",28,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _st_mem_root_7 = { "first_block_usage",24,4,kUnsignedType,"void",1,0,"unsigned int",&_st_mem_root_8};
	VPL_ExtField _st_mem_root_6 = { "block_num",20,4,kUnsignedType,"void",1,0,"unsigned int",&_st_mem_root_7};
	VPL_ExtField _st_mem_root_5 = { "block_size",16,4,kUnsignedType,"void",1,0,"unsigned int",&_st_mem_root_6};
	VPL_ExtField _st_mem_root_4 = { "min_malloc",12,4,kUnsignedType,"void",1,0,"unsigned int",&_st_mem_root_5};
	VPL_ExtField _st_mem_root_3 = { "pre_alloc",8,4,kPointerType,"st_used_mem",1,12,"T*",&_st_mem_root_4};
	VPL_ExtField _st_mem_root_2 = { "used",4,4,kPointerType,"st_used_mem",1,12,"T*",&_st_mem_root_3};
	VPL_ExtField _st_mem_root_1 = { "free",0,4,kPointerType,"st_used_mem",1,12,"T*",&_st_mem_root_2};
	VPL_ExtStructure _st_mem_root_S = {"st_mem_root",&_st_mem_root_1};

	VPL_ExtField _st_used_mem_3 = { "size",8,4,kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _st_used_mem_2 = { "left",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_used_mem_3};
	VPL_ExtField _st_used_mem_1 = { "next",0,4,kPointerType,"st_used_mem",1,12,"T*",&_st_used_mem_2};
	VPL_ExtStructure _st_used_mem_S = {"st_used_mem",&_st_used_mem_1};

	VPL_ExtField _st_mysql_rows_3 = { "length",8,4,kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _st_mysql_rows_2 = { "data",4,4,kPointerType,"char",2,1,"T*",&_st_mysql_rows_3};
	VPL_ExtField _st_mysql_rows_1 = { "next",0,4,kPointerType,"st_mysql_rows",1,12,"T*",&_st_mysql_rows_2};
	VPL_ExtStructure _st_mysql_rows_S = {"st_mysql_rows",&_st_mysql_rows_1};

	VPL_ExtField _st_mysql_field_20 = { "type",76,4,kEnumType,"NULL",0,0,"enum_field_types",NULL};
	VPL_ExtField _st_mysql_field_19 = { "charsetnr",72,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_20};
	VPL_ExtField _st_mysql_field_18 = { "decimals",68,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_19};
	VPL_ExtField _st_mysql_field_17 = { "flags",64,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_18};
	VPL_ExtField _st_mysql_field_16 = { "def_length",60,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_17};
	VPL_ExtField _st_mysql_field_15 = { "catalog_length",56,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_16};
	VPL_ExtField _st_mysql_field_14 = { "db_length",52,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_15};
	VPL_ExtField _st_mysql_field_13 = { "org_table_length",48,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_14};
	VPL_ExtField _st_mysql_field_12 = { "table_length",44,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_13};
	VPL_ExtField _st_mysql_field_11 = { "org_name_length",40,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_12};
	VPL_ExtField _st_mysql_field_10 = { "name_length",36,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_field_11};
	VPL_ExtField _st_mysql_field_9 = { "max_length",32,4,kUnsignedType,"NULL",0,0,"unsigned long",&_st_mysql_field_10};
	VPL_ExtField _st_mysql_field_8 = { "length",28,4,kUnsignedType,"NULL",0,0,"unsigned long",&_st_mysql_field_9};
	VPL_ExtField _st_mysql_field_7 = { "def",24,4,kPointerType,"char",1,1,"T*",&_st_mysql_field_8};
	VPL_ExtField _st_mysql_field_6 = { "catalog",20,4,kPointerType,"char",1,1,"T*",&_st_mysql_field_7};
	VPL_ExtField _st_mysql_field_5 = { "db",16,4,kPointerType,"char",1,1,"T*",&_st_mysql_field_6};
	VPL_ExtField _st_mysql_field_4 = { "org_table",12,4,kPointerType,"char",1,1,"T*",&_st_mysql_field_5};
	VPL_ExtField _st_mysql_field_3 = { "table",8,4,kPointerType,"char",1,1,"T*",&_st_mysql_field_4};
	VPL_ExtField _st_mysql_field_2 = { "org_name",4,4,kPointerType,"char",1,1,"T*",&_st_mysql_field_3};
	VPL_ExtField _st_mysql_field_1 = { "name",0,4,kPointerType,"char",1,1,"T*",&_st_mysql_field_2};
	VPL_ExtStructure _st_mysql_field_S = {"st_mysql_field",&_st_mysql_field_1};

	VPL_ExtField _st_list_3 = { "data",8,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _st_list_2 = { "next",4,4,kPointerType,"st_list",1,12,"T*",&_st_list_3};
	VPL_ExtField _st_list_1 = { "prev",0,4,kPointerType,"st_list",1,12,"T*",&_st_list_2};
	VPL_ExtStructure _st_list_S = {"st_list",&_st_list_1};

	VPL_ExtField _st_typelib_4 = { "type_lengths",12,4,kPointerType,"unsigned int",1,4,"T*",NULL};
	VPL_ExtField _st_typelib_3 = { "type_names",8,4,kPointerType,"char",2,1,"T*",&_st_typelib_4};
	VPL_ExtField _st_typelib_2 = { "name",4,4,kPointerType,"char",1,1,"T*",&_st_typelib_3};
	VPL_ExtField _st_typelib_1 = { "count",0,4,kUnsignedType,"char",1,1,"unsigned int",&_st_typelib_2};
	VPL_ExtStructure _st_typelib_S = {"st_typelib",&_st_typelib_1};

	VPL_ExtField _st_mysql_time_9 = { "time_type",32,4,kEnumType,"NULL",0,0,"enum_mysql_timestamp_type",NULL};
	VPL_ExtField _st_mysql_time_8 = { "neg",28,1,kIntType,"NULL",0,0,"char",&_st_mysql_time_9};
	VPL_ExtField _st_mysql_time_7 = { "second_part",24,4,kUnsignedType,"NULL",0,0,"unsigned long",&_st_mysql_time_8};
	VPL_ExtField _st_mysql_time_6 = { "second",20,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_time_7};
	VPL_ExtField _st_mysql_time_5 = { "minute",16,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_time_6};
	VPL_ExtField _st_mysql_time_4 = { "hour",12,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_time_5};
	VPL_ExtField _st_mysql_time_3 = { "day",8,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_time_4};
	VPL_ExtField _st_mysql_time_2 = { "month",4,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_time_3};
	VPL_ExtField _st_mysql_time_1 = { "year",0,4,kUnsignedType,"NULL",0,0,"unsigned int",&_st_mysql_time_2};
	VPL_ExtStructure _st_mysql_time_S = {"st_mysql_time",&_st_mysql_time_1};

	VPL_ExtField _st_udf_init_5 = { "const_item",16,1,kIntType,"NULL",0,0,"char",NULL};
	VPL_ExtField _st_udf_init_4 = { "ptr",12,4,kPointerType,"char",1,1,"T*",&_st_udf_init_5};
	VPL_ExtField _st_udf_init_3 = { "max_length",8,4,kUnsignedType,"char",1,1,"unsigned long",&_st_udf_init_4};
	VPL_ExtField _st_udf_init_2 = { "decimals",4,4,kUnsignedType,"char",1,1,"unsigned int",&_st_udf_init_3};
	VPL_ExtField _st_udf_init_1 = { "maybe_null",0,1,kIntType,"char",1,1,"char",&_st_udf_init_2};
	VPL_ExtStructure _st_udf_init_S = {"st_udf_init",&_st_udf_init_1};

	VPL_ExtField _st_udf_args_7 = { "attribute_lengths",24,4,kPointerType,"unsigned long",1,4,"T*",NULL};
	VPL_ExtField _st_udf_args_6 = { "attributes",20,4,kPointerType,"char",2,1,"T*",&_st_udf_args_7};
	VPL_ExtField _st_udf_args_5 = { "maybe_null",16,4,kPointerType,"char",1,1,"T*",&_st_udf_args_6};
	VPL_ExtField _st_udf_args_4 = { "lengths",12,4,kPointerType,"unsigned long",1,4,"T*",&_st_udf_args_5};
	VPL_ExtField _st_udf_args_3 = { "args",8,4,kPointerType,"char",2,1,"T*",&_st_udf_args_4};
	VPL_ExtField _st_udf_args_2 = { "arg_type",4,4,kPointerType,"int",1,4,"T*",&_st_udf_args_3};
	VPL_ExtField _st_udf_args_1 = { "arg_count",0,4,kUnsignedType,"int",1,4,"unsigned int",&_st_udf_args_2};
	VPL_ExtStructure _st_udf_args_S = {"st_udf_args",&_st_udf_args_1};

	VPL_ExtField _rand_struct_4 = { "max_value_dbl",12,8,kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _rand_struct_3 = { "max_value",8,4,kUnsignedType,"NULL",0,0,"unsigned long",&_rand_struct_4};
	VPL_ExtField _rand_struct_2 = { "seed2",4,4,kUnsignedType,"NULL",0,0,"unsigned long",&_rand_struct_3};
	VPL_ExtField _rand_struct_1 = { "seed1",0,4,kUnsignedType,"NULL",0,0,"unsigned long",&_rand_struct_2};
	VPL_ExtStructure _rand_struct_S = {"rand_struct",&_rand_struct_1};

	VPL_ExtStructure _sockaddr_S = {"sockaddr",NULL};

	VPL_ExtField _st_net_32 = { "return_errno",617,1,kIntType,"NULL",0,0,"char",NULL};
	VPL_ExtField _st_net_31 = { "report_error",616,1,kIntType,"NULL",0,0,"char",&_st_net_32};
	VPL_ExtField _st_net_30 = { "query_cache_query",612,4,kPointerType,"char",1,1,"T*",&_st_net_31};
	VPL_ExtField _st_net_29 = { "error",608,1,kUnsignedType,"char",1,1,"unsigned char",&_st_net_30};
	VPL_ExtField _st_net_28 = { "last_errno",604,4,kUnsignedType,"char",1,1,"unsigned int",&_st_net_29};
	VPL_ExtField _st_net_27 = { "sqlstate",597,6,kPointerType,"char",0,1,NULL,&_st_net_28};
	VPL_ExtField _st_net_26 = { "last_error",85,512,kPointerType,"char",0,1,NULL,&_st_net_27};
	VPL_ExtField _st_net_25 = { "no_send_error",84,1,kIntType,"char",0,1,"char",&_st_net_26};
	VPL_ExtField _st_net_24 = { "no_send_eof",83,1,kIntType,"char",0,1,"char",&_st_net_25};
	VPL_ExtField _st_net_23 = { "no_send_ok",82,1,kIntType,"char",0,1,"char",&_st_net_24};
	VPL_ExtField _st_net_22 = { "save_char",81,1,kIntType,"char",0,1,"char",&_st_net_23};
	VPL_ExtField _st_net_21 = { "reading_or_writing",80,1,kUnsignedType,"char",0,1,"unsigned char",&_st_net_22};
	VPL_ExtField _st_net_20 = { "return_status",76,4,kPointerType,"unsigned int",1,4,"T*",&_st_net_21};
	VPL_ExtField _st_net_19 = { "where_b",72,4,kUnsignedType,"unsigned int",1,4,"unsigned long",&_st_net_20};
	VPL_ExtField _st_net_18 = { "buf_length",68,4,kUnsignedType,"unsigned int",1,4,"unsigned long",&_st_net_19};
	VPL_ExtField _st_net_17 = { "length",64,4,kUnsignedType,"unsigned int",1,4,"unsigned long",&_st_net_18};
	VPL_ExtField _st_net_16 = { "remain_in_buf",60,4,kUnsignedType,"unsigned int",1,4,"unsigned long",&_st_net_17};
	VPL_ExtField _st_net_15 = { "compress",56,1,kIntType,"unsigned int",1,4,"char",&_st_net_16};
	VPL_ExtField _st_net_14 = { "fcntl",52,4,kIntType,"unsigned int",1,4,"int",&_st_net_15};
	VPL_ExtField _st_net_13 = { "retry_count",48,4,kUnsignedType,"unsigned int",1,4,"unsigned int",&_st_net_14};
	VPL_ExtField _st_net_12 = { "read_timeout",44,4,kUnsignedType,"unsigned int",1,4,"unsigned int",&_st_net_13};
	VPL_ExtField _st_net_11 = { "write_timeout",40,4,kUnsignedType,"unsigned int",1,4,"unsigned int",&_st_net_12};
	VPL_ExtField _st_net_10 = { "compress_pkt_nr",36,4,kUnsignedType,"unsigned int",1,4,"unsigned int",&_st_net_11};
	VPL_ExtField _st_net_9 = { "pkt_nr",32,4,kUnsignedType,"unsigned int",1,4,"unsigned int",&_st_net_10};
	VPL_ExtField _st_net_8 = { "max_packet_size",28,4,kUnsignedType,"unsigned int",1,4,"unsigned long",&_st_net_9};
	VPL_ExtField _st_net_7 = { "max_packet",24,4,kUnsignedType,"unsigned int",1,4,"unsigned long",&_st_net_8};
	VPL_ExtField _st_net_6 = { "fd",20,4,kIntType,"unsigned int",1,4,"int",&_st_net_7};
	VPL_ExtField _st_net_5 = { "read_pos",16,4,kPointerType,"unsigned char",1,1,"T*",&_st_net_6};
	VPL_ExtField _st_net_4 = { "write_pos",12,4,kPointerType,"unsigned char",1,1,"T*",&_st_net_5};
	VPL_ExtField _st_net_3 = { "buff_end",8,4,kPointerType,"unsigned char",1,1,"T*",&_st_net_4};
	VPL_ExtField _st_net_2 = { "buff",4,4,kPointerType,"unsigned char",1,1,"T*",&_st_net_3};
	VPL_ExtField _st_net_1 = { "vio",0,4,kPointerType,"st_vio",1,0,"T*",&_st_net_2};
	VPL_ExtStructure _st_net_S = {"st_net",&_st_net_1};

	VPL_ExtStructure _st_vio_S = {"st_vio",NULL};

	VPL_ExtField _pthread_once_t_2 = { "opaque",4,4,kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _pthread_once_t_1 = { "sig",0,4,kIntType,"char",0,1,"long int",&_pthread_once_t_2};
	VPL_ExtStructure _pthread_once_t_S = {"pthread_once_t",&_pthread_once_t_1};

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



VPL_DictionaryNode VPX_MySQL_Structures[] =	{
	{"st_mysql_stmt",&_st_mysql_stmt_S},
	{"st_mysql_bind",&_st_mysql_bind_S},
	{"st_mysql_parameters",&_st_mysql_parameters_S},
	{"st_mysql_manager",&_st_mysql_manager_S},
	{"st_mysql_res",&_st_mysql_res_S},
	{"charset_info_st",&_charset_info_st_S},
	{"st_mysql",&_st_mysql_S},
	{"st_mysql_methods",&_st_mysql_methods_S},
	{"character_set",&_character_set_S},
	{"st_dynamic_array",&_st_dynamic_array_S},
	{"st_mysql_options",&_st_mysql_options_S},
	{"st_mysql_data",&_st_mysql_data_S},
	{"st_mem_root",&_st_mem_root_S},
	{"st_used_mem",&_st_used_mem_S},
	{"st_mysql_rows",&_st_mysql_rows_S},
	{"st_mysql_field",&_st_mysql_field_S},
	{"st_list",&_st_list_S},
	{"st_typelib",&_st_typelib_S},
	{"st_mysql_time",&_st_mysql_time_S},
	{"st_udf_init",&_st_udf_init_S},
	{"st_udf_args",&_st_udf_args_S},
	{"rand_struct",&_rand_struct_S},
	{"sockaddr",&_sockaddr_S},
	{"st_net",&_st_net_S},
	{"st_vio",&_st_vio_S},
	{"pthread_once_t",&_pthread_once_t_S},
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

Nat4	VPX_MySQL_Structures_Number = 36;

#pragma export on

Nat4	load_MySQL_Structures(V_Environment environment,char *bundleID);
Nat4	load_MySQL_Structures(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_MySQL_Structures_Number,VPX_MySQL_Structures);
		
		return result;
}

#pragma export off
