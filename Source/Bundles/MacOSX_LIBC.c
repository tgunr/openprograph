/*
	
	MacOSX_LIBC.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/

#include "LibcStandard.h"

#pragma mark --------------- Constants ---------------

	VPL_ExtConstant _FILESEC_ACL_ALLOCSIZE_C = {"FILESEC_ACL_ALLOCSIZE",FILESEC_ACL_ALLOCSIZE,NULL};
	VPL_ExtConstant _FILESEC_ACL_RAW_C = {"FILESEC_ACL_RAW",FILESEC_ACL_RAW,NULL};
	VPL_ExtConstant _FILESEC_GRPUUID_C = {"FILESEC_GRPUUID",FILESEC_GRPUUID,NULL};
	VPL_ExtConstant _FILESEC_ACL_C = {"FILESEC_ACL",FILESEC_ACL,NULL};
	VPL_ExtConstant _FILESEC_MODE_C = {"FILESEC_MODE",FILESEC_MODE,NULL};
	VPL_ExtConstant _FILESEC_UUID_C = {"FILESEC_UUID",FILESEC_UUID,NULL};
	VPL_ExtConstant _FILESEC_GROUP_C = {"FILESEC_GROUP",FILESEC_GROUP,NULL};
	VPL_ExtConstant _FILESEC_OWNER_C = {"FILESEC_OWNER",FILESEC_OWNER,NULL};
	VPL_ExtConstant _P_PGID_C = {"P_PGID",P_PGID,NULL};
	VPL_ExtConstant _P_PID_C = {"P_PID",P_PID,NULL};
	VPL_ExtConstant _P_ALL_C = {"P_ALL",P_ALL,NULL};
	VPL_ExtConstant _OSBigEndian_C = {"OSBigEndian",OSBigEndian,NULL};
	VPL_ExtConstant _OSLittleEndian_C = {"OSLittleEndian",OSLittleEndian,NULL};
	VPL_ExtConstant _OSUnknownByteOrder_C = {"OSUnknownByteOrder",OSUnknownByteOrder,NULL};

#if MACOSX_DEPLOYMENT_TARGET > MAC_OS_X_VERSION_10_4
	VPL_ExtConstant _REG_NOTEOL_C = {"REG_NOTEOL",REG_NOTEOL,NULL};
	VPL_ExtConstant _REG_NOTBOL_C = {"REG_NOTBOL",REG_NOTBOL,NULL};
	VPL_ExtConstant _REG_BADRPT_C = {"REG_BADRPT",REG_BADRPT,NULL};
	VPL_ExtConstant _REG_ESPACE_C = {"REG_ESPACE",REG_ESPACE,NULL};
	VPL_ExtConstant _REG_ERANGE_C = {"REG_ERANGE",REG_ERANGE,NULL};
	VPL_ExtConstant _REG_BADBR_C = {"REG_BADBR",REG_BADBR,NULL};
	VPL_ExtConstant _REG_EBRACE_C = {"REG_EBRACE",REG_EBRACE,NULL};
	VPL_ExtConstant _REG_EPAREN_C = {"REG_EPAREN",REG_EPAREN,NULL};
	VPL_ExtConstant _REG_EBRACK_C = {"REG_EBRACK",REG_EBRACK,NULL};
	VPL_ExtConstant _REG_ESUBREG_C = {"REG_ESUBREG",REG_ESUBREG,NULL};
	VPL_ExtConstant _REG_EESCAPE_C = {"REG_EESCAPE",REG_EESCAPE,NULL};
	VPL_ExtConstant _REG_ECTYPE_C = {"REG_ECTYPE",REG_ECTYPE,NULL};
	VPL_ExtConstant _REG_ECOLLATE_C = {"REG_ECOLLATE",REG_ECOLLATE,NULL};
	VPL_ExtConstant _REG_BADPAT_C = {"REG_BADPAT",REG_BADPAT,NULL};
	VPL_ExtConstant _REG_NOMATCH_C = {"REG_NOMATCH",REG_NOMATCH,NULL};
	VPL_ExtConstant _REG_ENOSYS_C = {"REG_ENOSYS",REG_ENOSYS,NULL};
	VPL_ExtConstant _REG_NEWLINE_C = {"REG_NEWLINE",REG_NEWLINE,NULL};
	VPL_ExtConstant _REG_NOSUB_C = {"REG_NOSUB",REG_NOSUB,NULL};
	VPL_ExtConstant _REG_ICASE_C = {"REG_ICASE",REG_ICASE,NULL};
	VPL_ExtConstant _REG_EXTENDED_C = {"REG_EXTENDED",REG_EXTENDED,NULL};
#endif


#pragma mark --------------- Structures ---------------

#if MACOSX_DEPLOYMENT_TARGET > MAC_OS_X_VERSION_10_4
	VPL_ExtField _VPXStruct_regex_t_4 = { "re_g",offsetof(regex_t,re_g),sizeof(void*),kPointerType,"void",1,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_regex_t_3 = { "re_endp",offsetof(regex_t,re_endp),sizeof(void*),kPointerType,"char",1,1,"char",&_VPXStruct_regex_t_4};
	VPL_ExtField _VPXStruct_regex_t_2 = { "re_nsub",offsetof(regex_t,re_nsub),sizeof(size_t),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_regex_t_3};
	VPL_ExtField _VPXStruct_regex_t_1 = { "re_magic",offsetof(regex_t,re_magic),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_regex_t_2};
	VPL_ExtStructure _VPXStruct_regex_t_S = {"regex_t",&_VPXStruct_regex_t_1,sizeof(regex_t)};

	VPL_ExtField _VPXStruct_regmatch_t_2 = { "rm_eo",offsetof(regmatch_t,rm_eo),sizeof(regoff_t),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_regmatch_t_1 = { "rm_so",offsetof(regmatch_t,rm_so),sizeof(regoff_t),kIntType,"NULL",0,0,"int",&_VPXStruct_regmatch_t_2};
	VPL_ExtStructure _VPXStruct_regmatch_t_S = {"regmatch_t",&_VPXStruct_regmatch_t_1,sizeof(regmatch_t)};
#endif

	VPL_ExtField _VPXStruct_rpcent_3 = { "r_number",offsetof(struct rpcent,r_number),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_rpcent_2 = { "r_aliases",offsetof(struct rpcent,r_aliases),sizeof(void *),kPointerType,"char",2,1,"T*",&_VPXStruct_rpcent_3};
	VPL_ExtField _VPXStruct_rpcent_1 = { "r_name",offsetof(struct rpcent,r_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_rpcent_2};
	VPL_ExtStructure _VPXStruct_rpcent_S = {"rpcent",&_VPXStruct_rpcent_1,sizeof(struct rpcent)};

	VPL_ExtField _VPXStruct_addrinfo_8 = { "ai_next",offsetof(struct addrinfo,ai_next),sizeof(void *),kPointerType,"addrinfo",1,32,"T*",NULL};
	VPL_ExtField _VPXStruct_addrinfo_7 = { "ai_addr",offsetof(struct addrinfo,ai_addr),sizeof(void *),kPointerType,"sockaddr",1,20,"T*",&_VPXStruct_addrinfo_8};
	VPL_ExtField _VPXStruct_addrinfo_6 = { "ai_canonname",offsetof(struct addrinfo,ai_canonname),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_addrinfo_7};
	VPL_ExtField _VPXStruct_addrinfo_5 = { "ai_addrlen",offsetof(struct addrinfo,ai_addrlen),sizeof(unsigned int),kUnsignedType,"char",1,1,"unsigned int",&_VPXStruct_addrinfo_6};
	VPL_ExtField _VPXStruct_addrinfo_4 = { "ai_protocol",offsetof(struct addrinfo,ai_protocol),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_addrinfo_5};
	VPL_ExtField _VPXStruct_addrinfo_3 = { "ai_socktype",offsetof(struct addrinfo,ai_socktype),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_addrinfo_4};
	VPL_ExtField _VPXStruct_addrinfo_2 = { "ai_family",offsetof(struct addrinfo,ai_family),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_addrinfo_3};
	VPL_ExtField _VPXStruct_addrinfo_1 = { "ai_flags",offsetof(struct addrinfo,ai_flags),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_addrinfo_2};
	VPL_ExtStructure _VPXStruct_addrinfo_S = {"addrinfo",&_VPXStruct_addrinfo_1,sizeof(struct addrinfo)};

	VPL_ExtField _VPXStruct_protoent_3 = { "p_proto",offsetof(struct protoent,p_proto),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_protoent_2 = { "p_aliases",offsetof(struct protoent,p_aliases),sizeof(void *),kPointerType,"char",2,1,"T*",&_VPXStruct_protoent_3};
	VPL_ExtField _VPXStruct_protoent_1 = { "p_name",offsetof(struct protoent,p_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_protoent_2};
	VPL_ExtStructure _VPXStruct_protoent_S = {"protoent",&_VPXStruct_protoent_1,sizeof(struct protoent)};

	VPL_ExtField _VPXStruct_servent_4 = { "s_proto",offsetof(struct servent,s_proto),sizeof(void *),kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_servent_3 = { "s_port",offsetof(struct servent,s_port),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_servent_4};
	VPL_ExtField _VPXStruct_servent_2 = { "s_aliases",offsetof(struct servent,s_aliases),sizeof(void *),kPointerType,"char",2,1,"T*",&_VPXStruct_servent_3};
	VPL_ExtField _VPXStruct_servent_1 = { "s_name",offsetof(struct servent,s_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_servent_2};
	VPL_ExtStructure _VPXStruct_servent_S = {"servent",&_VPXStruct_servent_1,sizeof(struct servent)};

	VPL_ExtField _VPXStruct_netent_4 = { "n_net",offsetof(struct netent,n_net),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_netent_3 = { "n_addrtype",offsetof(struct netent,n_addrtype),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_netent_4};
	VPL_ExtField _VPXStruct_netent_2 = { "n_aliases",offsetof(struct netent,n_aliases),sizeof(void *),kPointerType,"char",2,1,"T*",&_VPXStruct_netent_3};
	VPL_ExtField _VPXStruct_netent_1 = { "n_name",offsetof(struct netent,n_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_netent_2};
	VPL_ExtStructure _VPXStruct_netent_S = {"netent",&_VPXStruct_netent_1,sizeof(struct netent)};

	VPL_ExtField _VPXStruct_hostent_5 = { "h_addr_list",offsetof(struct hostent,h_addr_list),sizeof(void *),kPointerType,"char",2,1,"T*",NULL};
	VPL_ExtField _VPXStruct_hostent_4 = { "h_length",offsetof(struct hostent,h_length),sizeof(int),kIntType,"char",2,1,"int",&_VPXStruct_hostent_5};
	VPL_ExtField _VPXStruct_hostent_3 = { "h_addrtype",offsetof(struct hostent,h_addrtype),sizeof(int),kIntType,"char",2,1,"int",&_VPXStruct_hostent_4};
	VPL_ExtField _VPXStruct_hostent_2 = { "h_aliases",offsetof(struct hostent,h_aliases),sizeof(void *),kPointerType,"char",2,1,"T*",&_VPXStruct_hostent_3};
	VPL_ExtField _VPXStruct_hostent_1 = { "h_name",offsetof(struct hostent,h_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_hostent_2};
	VPL_ExtStructure _VPXStruct_hostent_S = {"hostent",&_VPXStruct_hostent_1,sizeof(struct hostent)};

	VPL_ExtField _VPXStruct_qelem_3 = { "q_data",offsetof(struct qelem,q_data),sizeof(void *),kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_qelem_2 = { "q_back",offsetof(struct qelem,q_back),sizeof(void *),kPointerType,"qelem",1,12,"T*",&_VPXStruct_qelem_3};
	VPL_ExtField _VPXStruct_qelem_1 = { "q_forw",offsetof(struct qelem,q_forw),sizeof(void *),kPointerType,"qelem",1,12,"T*",&_VPXStruct_qelem_2};
	VPL_ExtStructure _VPXStruct_qelem_S = {"qelem",&_VPXStruct_qelem_1,sizeof(struct qelem)};

	VPL_ExtField _VPXStruct_in6_pktinfo_2 = { "ipi6_ifindex",offsetof(struct in6_pktinfo,ipi6_ifindex),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_in6_pktinfo_1 = { "ipi6_addr",offsetof(struct in6_pktinfo,ipi6_addr),sizeof(struct in6_addr),kStructureType,"NULL",0,0,"in6_addr",&_VPXStruct_in6_pktinfo_2};
	VPL_ExtStructure _VPXStruct_in6_pktinfo_S = {"in6_pktinfo",&_VPXStruct_in6_pktinfo_1,sizeof(struct in6_pktinfo)};

	VPL_ExtField _VPXStruct_ipv6_mreq_2 = { "ipv6mr_interface",offsetof(struct ipv6_mreq,ipv6mr_interface),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_ipv6_mreq_1 = { "ipv6mr_multiaddr",offsetof(struct ipv6_mreq,ipv6mr_multiaddr),sizeof(struct in6_addr),kStructureType,"NULL",0,0,"in6_addr",&_VPXStruct_ipv6_mreq_2};
	VPL_ExtStructure _VPXStruct_ipv6_mreq_S = {"ipv6_mreq",&_VPXStruct_ipv6_mreq_1,sizeof(struct ipv6_mreq)};

	VPL_ExtField _VPXStruct_sockaddr_in6_6 = { "sin6_scope_id",offsetof(struct sockaddr_in6,sin6_scope_id),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_sockaddr_in6_5 = { "sin6_addr",offsetof(struct sockaddr_in6,sin6_addr),sizeof(struct in6_addr),kStructureType,"NULL",0,0,"in6_addr",&_VPXStruct_sockaddr_in6_6};
	VPL_ExtField _VPXStruct_sockaddr_in6_4 = { "sin6_flowinfo",offsetof(struct sockaddr_in6,sin6_flowinfo),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_sockaddr_in6_5};
	VPL_ExtField _VPXStruct_sockaddr_in6_3 = { "sin6_port",offsetof(struct sockaddr_in6,sin6_port),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_sockaddr_in6_4};
	VPL_ExtField _VPXStruct_sockaddr_in6_2 = { "sin6_family",offsetof(struct sockaddr_in6,sin6_family),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_sockaddr_in6_3};
	VPL_ExtField _VPXStruct_sockaddr_in6_1 = { "sin6_len",offsetof(struct sockaddr_in6,sin6_len),sizeof(unsigned char),kUnsignedType,"NULL",0,0,"unsigned char",&_VPXStruct_sockaddr_in6_2};
	VPL_ExtStructure _VPXStruct_sockaddr_in6_S = {"sockaddr_in6",&_VPXStruct_sockaddr_in6_1,sizeof(struct sockaddr_in6)};

	VPL_ExtField _VPXStruct_in6_addr_1 = { "__u6_addr",offsetof(struct in6_addr,__u6_addr),sizeof(31),kStructureType,"NULL",0,0,"31",NULL};
	VPL_ExtStructure _VPXStruct_in6_addr_S = {"in6_addr",&_VPXStruct_in6_addr_1,sizeof(struct in6_addr)};

	VPL_ExtField _VPXStruct_ip_mreq_2 = { "imr_interface",offsetof(struct ip_mreq,imr_interface),sizeof(struct in_addr),kStructureType,"NULL",0,0,"in_addr",NULL};
	VPL_ExtField _VPXStruct_ip_mreq_1 = { "imr_multiaddr",offsetof(struct ip_mreq,imr_multiaddr),sizeof(struct in_addr),kStructureType,"NULL",0,0,"in_addr",&_VPXStruct_ip_mreq_2};
	VPL_ExtStructure _VPXStruct_ip_mreq_S = {"ip_mreq",&_VPXStruct_ip_mreq_1,sizeof(struct ip_mreq)};

	VPL_ExtField _VPXStruct_ip_opts_2 = { "ip_opts",offsetof(struct ip_opts,ip_opts),sizeof(char[40]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct_ip_opts_1 = { "ip_dst",offsetof(struct ip_opts,ip_dst),sizeof(struct in_addr),kStructureType,"char",0,1,"in_addr",&_VPXStruct_ip_opts_2};
	VPL_ExtStructure _VPXStruct_ip_opts_S = {"ip_opts",&_VPXStruct_ip_opts_1,sizeof(struct ip_opts)};

	VPL_ExtField _VPXStruct_sockaddr_in_5 = { "sin_zero",offsetof(struct sockaddr_in,sin_zero),sizeof(char[8]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct_sockaddr_in_4 = { "sin_addr",offsetof(struct sockaddr_in,sin_addr),sizeof(struct in_addr),kStructureType,"char",0,1,"in_addr",&_VPXStruct_sockaddr_in_5};
	VPL_ExtField _VPXStruct_sockaddr_in_3 = { "sin_port",offsetof(struct sockaddr_in,sin_port),sizeof(unsigned short),kUnsignedType,"char",0,1,"unsigned short",&_VPXStruct_sockaddr_in_4};
	VPL_ExtField _VPXStruct_sockaddr_in_2 = { "sin_family",offsetof(struct sockaddr_in,sin_family),sizeof(unsigned char),kUnsignedType,"char",0,1,"unsigned char",&_VPXStruct_sockaddr_in_3};
	VPL_ExtField _VPXStruct_sockaddr_in_1 = { "sin_len",offsetof(struct sockaddr_in,sin_len),sizeof(unsigned char),kUnsignedType,"char",0,1,"unsigned char",&_VPXStruct_sockaddr_in_2};
	VPL_ExtStructure _VPXStruct_sockaddr_in_S = {"sockaddr_in",&_VPXStruct_sockaddr_in_1,sizeof(struct sockaddr_in)};

	VPL_ExtField _VPXStruct_in_addr_1 = { "s_addr",offsetof(struct in_addr,s_addr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtStructure _VPXStruct_in_addr_S = {"in_addr",&_VPXStruct_in_addr_1,sizeof(struct in_addr)};

	VPL_ExtField _VPXStruct_ttysize_4 = { "ts_yyy",offsetof(struct ttysize,ts_yyy),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_ttysize_3 = { "ts_xxx",offsetof(struct ttysize,ts_xxx),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ttysize_4};
	VPL_ExtField _VPXStruct_ttysize_2 = { "ts_cols",offsetof(struct ttysize,ts_cols),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ttysize_3};
	VPL_ExtField _VPXStruct_ttysize_1 = { "ts_lines",offsetof(struct ttysize,ts_lines),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ttysize_2};
	VPL_ExtStructure _VPXStruct_ttysize_S = {"ttysize",&_VPXStruct_ttysize_1,sizeof(struct ttysize)};

	VPL_ExtField _VPXStruct_winsize_4 = { "ws_ypixel",offsetof(struct winsize,ws_ypixel),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_winsize_3 = { "ws_xpixel",offsetof(struct winsize,ws_xpixel),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_winsize_4};
	VPL_ExtField _VPXStruct_winsize_2 = { "ws_col",offsetof(struct winsize,ws_col),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_winsize_3};
	VPL_ExtField _VPXStruct_winsize_1 = { "ws_row",offsetof(struct winsize,ws_row),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_winsize_2};
	VPL_ExtStructure _VPXStruct_winsize_S = {"winsize",&_VPXStruct_winsize_1,sizeof(struct winsize)};

	VPL_ExtField _VPXStruct_extern_file_9 = { "f_data",offsetof(struct extern_file,f_data),sizeof(void *),kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_extern_file_8 = { "f_offset",offsetof(struct extern_file,f_offset),sizeof(long long int),kIntType,"char",1,1,"long long int",&_VPXStruct_extern_file_9};
	VPL_ExtField _VPXStruct_extern_file_7 = { "f_ops",offsetof(struct extern_file,f_ops),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_extern_file_8};
	VPL_ExtField _VPXStruct_extern_file_6 = { "f_cred",offsetof(struct extern_file,f_cred),sizeof(void *),kPointerType,"ucred",1,128,"T*",&_VPXStruct_extern_file_7};
	VPL_ExtField _VPXStruct_extern_file_5 = { "f_msgcount",offsetof(struct extern_file,f_msgcount),sizeof(short),kIntType,"ucred",1,128,"short",&_VPXStruct_extern_file_6};
	VPL_ExtField _VPXStruct_extern_file_4 = { "f_count",offsetof(struct extern_file,f_count),sizeof(short),kIntType,"ucred",1,128,"short",&_VPXStruct_extern_file_5};
	VPL_ExtField _VPXStruct_extern_file_3 = { "f_type",offsetof(struct extern_file,f_type),sizeof(short),kIntType,"ucred",1,128,"short",&_VPXStruct_extern_file_4};
	VPL_ExtField _VPXStruct_extern_file_2 = { "f_flag",offsetof(struct extern_file,f_flag),sizeof(short),kIntType,"ucred",1,128,"short",&_VPXStruct_extern_file_3};
	VPL_ExtStructure _VPXStruct_extern_file_S = {"extern_file",&_VPXStruct_extern_file_2,sizeof(struct extern_file)};

	VPL_ExtField _VPXStruct_log2phys_3 = { "l2p_devoffset",offsetof(struct log2phys,l2p_devoffset),sizeof(long long int),kIntType,"NULL",0,0,"long long int",NULL};
	VPL_ExtField _VPXStruct_log2phys_2 = { "l2p_contigbytes",offsetof(struct log2phys,l2p_contigbytes),sizeof(long long int),kIntType,"NULL",0,0,"long long int",&_VPXStruct_log2phys_3};
	VPL_ExtField _VPXStruct_log2phys_1 = { "l2p_flags",offsetof(struct log2phys,l2p_flags),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_log2phys_2};
	VPL_ExtStructure _VPXStruct_log2phys_S = {"log2phys",&_VPXStruct_log2phys_1,sizeof(struct log2phys)};

	VPL_ExtField _VPXStruct_fbootstraptransfer_3 = { "fbt_buffer",offsetof(struct fbootstraptransfer,fbt_buffer),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _VPXStruct_fbootstraptransfer_2 = { "fbt_length",offsetof(struct fbootstraptransfer,fbt_length),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_fbootstraptransfer_3};
	VPL_ExtField _VPXStruct_fbootstraptransfer_1 = { "fbt_offset",offsetof(struct fbootstraptransfer,fbt_offset),sizeof(long long int),kIntType,"void",1,0,"long long int",&_VPXStruct_fbootstraptransfer_2};
	VPL_ExtStructure _VPXStruct_fbootstraptransfer_S = {"fbootstraptransfer",&_VPXStruct_fbootstraptransfer_1,sizeof(struct fbootstraptransfer)};

	VPL_ExtField _VPXStruct_fstore_5 = { "fst_bytesalloc",offsetof(struct fstore,fst_bytesalloc),sizeof(long long int),kIntType,"NULL",0,0,"long long int",NULL};
	VPL_ExtField _VPXStruct_fstore_4 = { "fst_length",offsetof(struct fstore,fst_length),sizeof(long long int),kIntType,"NULL",0,0,"long long int",&_VPXStruct_fstore_5};
	VPL_ExtField _VPXStruct_fstore_3 = { "fst_offset",offsetof(struct fstore,fst_offset),sizeof(long long int),kIntType,"NULL",0,0,"long long int",&_VPXStruct_fstore_4};
	VPL_ExtField _VPXStruct_fstore_2 = { "fst_posmode",offsetof(struct fstore,fst_posmode),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_fstore_3};
	VPL_ExtField _VPXStruct_fstore_1 = { "fst_flags",offsetof(struct fstore,fst_flags),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_fstore_2};
	VPL_ExtStructure _VPXStruct_fstore_S = {"fstore",&_VPXStruct_fstore_1,sizeof(struct fstore)};

	VPL_ExtField _VPXStruct_radvisory_2 = { "ra_count",offsetof(struct radvisory,ra_count),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_radvisory_1 = { "ra_offset",offsetof(struct radvisory,ra_offset),sizeof(long long int),kIntType,"NULL",0,0,"long long int",&_VPXStruct_radvisory_2};
	VPL_ExtStructure _VPXStruct_radvisory_S = {"radvisory",&_VPXStruct_radvisory_1,sizeof(struct radvisory)};

	VPL_ExtField _VPXStruct_flock_5 = { "l_whence",offsetof(struct flock,l_whence),sizeof(short),kIntType,"NULL",0,0,"short",NULL};
	VPL_ExtField _VPXStruct_flock_4 = { "l_type",offsetof(struct flock,l_type),sizeof(short),kIntType,"NULL",0,0,"short",&_VPXStruct_flock_5};
	VPL_ExtField _VPXStruct_flock_3 = { "l_pid",offsetof(struct flock,l_pid),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_flock_4};
	VPL_ExtField _VPXStruct_flock_2 = { "l_len",offsetof(struct flock,l_len),sizeof(long long int),kIntType,"NULL",0,0,"long long int",&_VPXStruct_flock_3};
	VPL_ExtField _VPXStruct_flock_1 = { "l_start",offsetof(struct flock,l_start),sizeof(long long int),kIntType,"NULL",0,0,"long long int",&_VPXStruct_flock_2};
	VPL_ExtStructure _VPXStruct_flock_S = {"flock",&_VPXStruct_flock_1,sizeof(struct flock)};

	VPL_ExtField _VPXStruct_stat_17 = { "st_qspare",offsetof(struct stat,st_qspare),sizeof(long long int[2]),kPointerType,"long long int",0,8,NULL,NULL};
	VPL_ExtField _VPXStruct_stat_16 = { "st_lspare",offsetof(struct stat,st_lspare),sizeof(int),kIntType,"long long int",0,8,"int",&_VPXStruct_stat_17};
	VPL_ExtField _VPXStruct_stat_15 = { "st_gen",offsetof(struct stat,st_gen),sizeof(unsigned int),kUnsignedType,"long long int",0,8,"unsigned int",&_VPXStruct_stat_16};
	VPL_ExtField _VPXStruct_stat_14 = { "st_flags",offsetof(struct stat,st_flags),sizeof(unsigned int),kUnsignedType,"long long int",0,8,"unsigned int",&_VPXStruct_stat_15};
	VPL_ExtField _VPXStruct_stat_13 = { "st_blksize",offsetof(struct stat,st_blksize),sizeof(int),kIntType,"long long int",0,8,"int",&_VPXStruct_stat_14};
	VPL_ExtField _VPXStruct_stat_12 = { "st_blocks",offsetof(struct stat,st_blocks),sizeof(long long int),kIntType,"long long int",0,8,"long long int",&_VPXStruct_stat_13};
	VPL_ExtField _VPXStruct_stat_11 = { "st_size",offsetof(struct stat,st_size),sizeof(long long int),kIntType,"long long int",0,8,"long long int",&_VPXStruct_stat_12};
	VPL_ExtField _VPXStruct_stat_10 = { "st_ctimespec",offsetof(struct stat,st_ctimespec),sizeof(struct timespec),kStructureType,"long long int",0,8,"timespec",&_VPXStruct_stat_11};
	VPL_ExtField _VPXStruct_stat_9 = { "st_mtimespec",offsetof(struct stat,st_mtimespec),sizeof(struct timespec),kStructureType,"long long int",0,8,"timespec",&_VPXStruct_stat_10};
	VPL_ExtField _VPXStruct_stat_8 = { "st_atimespec",offsetof(struct stat,st_atimespec),sizeof(struct timespec),kStructureType,"long long int",0,8,"timespec",&_VPXStruct_stat_9};
	VPL_ExtField _VPXStruct_stat_7 = { "st_rdev",offsetof(struct stat,st_rdev),sizeof(int),kIntType,"long long int",0,8,"int",&_VPXStruct_stat_8};
	VPL_ExtField _VPXStruct_stat_6 = { "st_gid",offsetof(struct stat,st_gid),sizeof(unsigned int),kUnsignedType,"long long int",0,8,"unsigned int",&_VPXStruct_stat_7};
	VPL_ExtField _VPXStruct_stat_5 = { "st_uid",offsetof(struct stat,st_uid),sizeof(unsigned int),kUnsignedType,"long long int",0,8,"unsigned int",&_VPXStruct_stat_6};
	VPL_ExtField _VPXStruct_stat_4 = { "st_nlink",offsetof(struct stat,st_nlink),sizeof(unsigned short),kUnsignedType,"long long int",0,8,"unsigned short",&_VPXStruct_stat_5};
	VPL_ExtField _VPXStruct_stat_3 = { "st_mode",offsetof(struct stat,st_mode),sizeof(unsigned short),kUnsignedType,"long long int",0,8,"unsigned short",&_VPXStruct_stat_4};
	VPL_ExtField _VPXStruct_stat_2 = { "st_ino",offsetof(struct stat,st_ino),sizeof(unsigned int),kUnsignedType,"long long int",0,8,"unsigned int",&_VPXStruct_stat_3};
	VPL_ExtField _VPXStruct_stat_1 = { "st_dev",offsetof(struct stat,st_dev),sizeof(int),kIntType,"long long int",0,8,"int",&_VPXStruct_stat_2};
	VPL_ExtStructure _VPXStruct_stat_S = {"stat",&_VPXStruct_stat_1,sizeof(struct stat)};

	VPL_ExtField _VPXStruct_ostat_15 = { "st_gen",offsetof(struct ostat,st_gen),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_ostat_14 = { "st_flags",offsetof(struct ostat,st_flags),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_ostat_15};
	VPL_ExtField _VPXStruct_ostat_13 = { "st_blocks",offsetof(struct ostat,st_blocks),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_ostat_14};
	VPL_ExtField _VPXStruct_ostat_12 = { "st_blksize",offsetof(struct ostat,st_blksize),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_ostat_13};
	VPL_ExtField _VPXStruct_ostat_11 = { "st_ctimespec",offsetof(struct ostat,st_ctimespec),sizeof(struct timespec),kStructureType,"NULL",0,0,"timespec",&_VPXStruct_ostat_12};
	VPL_ExtField _VPXStruct_ostat_10 = { "st_mtimespec",offsetof(struct ostat,st_mtimespec),sizeof(struct timespec),kStructureType,"NULL",0,0,"timespec",&_VPXStruct_ostat_11};
	VPL_ExtField _VPXStruct_ostat_9 = { "st_atimespec",offsetof(struct ostat,st_atimespec),sizeof(struct timespec),kStructureType,"NULL",0,0,"timespec",&_VPXStruct_ostat_10};
	VPL_ExtField _VPXStruct_ostat_8 = { "st_size",offsetof(struct ostat,st_size),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_ostat_9};
	VPL_ExtField _VPXStruct_ostat_7 = { "st_rdev",offsetof(struct ostat,st_rdev),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ostat_8};
	VPL_ExtField _VPXStruct_ostat_6 = { "st_gid",offsetof(struct ostat,st_gid),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ostat_7};
	VPL_ExtField _VPXStruct_ostat_5 = { "st_uid",offsetof(struct ostat,st_uid),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ostat_6};
	VPL_ExtField _VPXStruct_ostat_4 = { "st_nlink",offsetof(struct ostat,st_nlink),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ostat_5};
	VPL_ExtField _VPXStruct_ostat_3 = { "st_mode",offsetof(struct ostat,st_mode),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ostat_4};
	VPL_ExtField _VPXStruct_ostat_2 = { "st_ino",offsetof(struct ostat,st_ino),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_ostat_3};
	VPL_ExtField _VPXStruct_ostat_1 = { "st_dev",offsetof(struct ostat,st_dev),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_ostat_2};
	VPL_ExtStructure _VPXStruct_ostat_S = {"ostat",&_VPXStruct_ostat_1,sizeof(struct ostat)};

	VPL_ExtField _VPXStruct_tms_4 = { "tms_cstime",offsetof(struct tms,tms_cstime),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_tms_3 = { "tms_cutime",offsetof(struct tms,tms_cutime),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_tms_4};
	VPL_ExtField _VPXStruct_tms_2 = { "tms_stime",offsetof(struct tms,tms_stime),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_tms_3};
	VPL_ExtField _VPXStruct_tms_1 = { "tms_utime",offsetof(struct tms,tms_utime),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_tms_2};
	VPL_ExtStructure _VPXStruct_tms_S = {"tms",&_VPXStruct_tms_1,sizeof(struct tms)};

	VPL_ExtField _VPXStruct_fhandle_2 = { "fh_data",offsetof(struct fhandle,fh_data),sizeof(unsigned char[64]),kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct_fhandle_1 = { "fh_len",offsetof(struct fhandle,fh_len),sizeof(int),kIntType,"unsigned char",0,1,"int",&_VPXStruct_fhandle_2};
	VPL_ExtStructure _VPXStruct_fhandle_S = {"fhandle",&_VPXStruct_fhandle_1,sizeof(struct fhandle)};

	VPL_ExtField _VPXStruct_vfsquery_2 = { "vq_spare",offsetof(struct vfsquery,vq_spare),sizeof(unsigned int[31]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_vfsquery_1 = { "vq_flags",offsetof(struct vfsquery,vq_flags),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_vfsquery_2};
	VPL_ExtStructure _VPXStruct_vfsquery_S = {"vfsquery",&_VPXStruct_vfsquery_1,sizeof(struct vfsquery)};

	VPL_ExtField _VPXStruct_vfsidctl_5 = { "vc_spare",offsetof(struct vfsidctl,vc_spare),sizeof(unsigned int[12]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_vfsidctl_4 = { "vc_len",offsetof(struct vfsidctl,vc_len),sizeof(unsigned long),kUnsignedType,"unsigned int",0,4,"unsigned long",&_VPXStruct_vfsidctl_5};
	VPL_ExtField _VPXStruct_vfsidctl_3 = { "vc_ptr",offsetof(struct vfsidctl,vc_ptr),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_vfsidctl_4};
	VPL_ExtField _VPXStruct_vfsidctl_2 = { "vc_fsid",offsetof(struct vfsidctl,vc_fsid),sizeof(struct fsid),kStructureType,"void",1,0,"fsid",&_VPXStruct_vfsidctl_3};
	VPL_ExtField _VPXStruct_vfsidctl_1 = { "vc_vers",offsetof(struct vfsidctl,vc_vers),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct_vfsidctl_2};
	VPL_ExtStructure _VPXStruct_vfsidctl_S = {"vfsidctl",&_VPXStruct_vfsidctl_1,sizeof(struct vfsidctl)};
//Not Available in Mac OS X 10.6
#if 0
	VPL_ExtField _VPXStruct_vfsconf_7 = { "vfc_next",offsetof(struct vfsconf,vfc_next),sizeof(void *),kPointerType,"vfsconf",1,40,"T*",NULL};
	VPL_ExtField _VPXStruct_vfsconf_6 = { "vfc_mountroot",offsetof(struct vfsconf,vfc_mountroot),sizeof(void *),kPointerType,"int",1,4,"T*",&_VPXStruct_vfsconf_7};
	VPL_ExtField _VPXStruct_vfsconf_5 = { "vfc_flags",offsetof(struct vfsconf,vfc_flags),sizeof(int),kIntType,"int",1,4,"int",&_VPXStruct_vfsconf_6};
	VPL_ExtField _VPXStruct_vfsconf_4 = { "vfc_refcount",offsetof(struct vfsconf,vfc_refcount),sizeof(int),kIntType,"int",1,4,"int",&_VPXStruct_vfsconf_5};
	VPL_ExtField _VPXStruct_vfsconf_3 = { "vfc_typenum",offsetof(struct vfsconf,vfc_typenum),sizeof(int),kIntType,"int",1,4,"int",&_VPXStruct_vfsconf_4};
	VPL_ExtField _VPXStruct_vfsconf_2 = { "vfc_name",offsetof(struct vfsconf,vfc_name),sizeof(char[15]),kPointerType,"char",0,1,NULL,&_VPXStruct_vfsconf_3};
	VPL_ExtField _VPXStruct_vfsconf_1 = { "vfc_vfsops",offsetof(struct vfsconf,vfc_vfsops),sizeof(void *),kPointerType,"vfsops",1,0,"T*",&_VPXStruct_vfsconf_2};
	VPL_ExtStructure _VPXStruct_vfsconf_S = {"vfsconf",&_VPXStruct_vfsconf_1,sizeof(struct vfsconf)};
#endif

//	VPL_ExtField _VPXStruct_vfs_attr_26 = { "f_carbon_fsid",offsetof(struct vfs_attr,f_carbon_fsid),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
//	VPL_ExtField _VPXStruct_vfs_attr_25 = { "f_signature",offsetof(struct vfs_attr,f_signature),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_vfs_attr_26};
//	VPL_ExtField _VPXStruct_vfs_attr_24 = { "f_vol_name",offsetof(struct vfs_attr,f_vol_name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_vfs_attr_25};
//	VPL_ExtField _VPXStruct_vfs_attr_23 = { "f_fssubtype",offsetof(struct vfs_attr,f_fssubtype),sizeof(unsigned int),kUnsignedType,"char",1,1,"unsigned int",&_VPXStruct_vfs_attr_24};
//	VPL_ExtField _VPXStruct_vfs_attr_22 = { "f_backup_time",offsetof(struct vfs_attr,f_backup_time),sizeof(struct timespec),kStructureType,"char",1,1,"timespec",&_VPXStruct_vfs_attr_23};
//	VPL_ExtField _VPXStruct_vfs_attr_21 = { "f_access_time",offsetof(struct vfs_attr,f_access_time),sizeof(struct timespec),kStructureType,"char",1,1,"timespec",&_VPXStruct_vfs_attr_22};
//	VPL_ExtField _VPXStruct_vfs_attr_20 = { "f_modify_time",offsetof(struct vfs_attr,f_modify_time),sizeof(struct timespec),kStructureType,"char",1,1,"timespec",&_VPXStruct_vfs_attr_21};
//	VPL_ExtField _VPXStruct_vfs_attr_19 = { "f_create_time",offsetof(struct vfs_attr,f_create_time),sizeof(struct timespec),kStructureType,"char",1,1,"timespec",&_VPXStruct_vfs_attr_20};
//	VPL_ExtField _VPXStruct_vfs_attr_18 = { "f_attributes",offsetof(struct vfs_attr,f_attributes),sizeof(struct vol_attributes_attr),kStructureType,"char",1,1,"vol_attributes_attr",&_VPXStruct_vfs_attr_19};
//	VPL_ExtField _VPXStruct_vfs_attr_17 = { "f_capabilities",offsetof(struct vfs_attr,f_capabilities),sizeof(struct vol_capabilities_attr),kStructureType,"char",1,1,"vol_capabilities_attr",&_VPXStruct_vfs_attr_18};
//	VPL_ExtField _VPXStruct_vfs_attr_16 = { "f_owner",offsetof(struct vfs_attr,f_owner),sizeof(unsigned int),kUnsignedType,"char",1,1,"unsigned int",&_VPXStruct_vfs_attr_17};
//	VPL_ExtField _VPXStruct_vfs_attr_15 = { "f_fsid",offsetof(struct vfs_attr,f_fsid),sizeof(struct fsid),kStructureType,"char",1,1,"fsid",&_VPXStruct_vfs_attr_16};
//	VPL_ExtField _VPXStruct_vfs_attr_14 = { "f_ffree",offsetof(struct vfs_attr,f_ffree),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_15};
//	VPL_ExtField _VPXStruct_vfs_attr_13 = { "f_files",offsetof(struct vfs_attr,f_files),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_14};
//	VPL_ExtField _VPXStruct_vfs_attr_12 = { "f_bused",offsetof(struct vfs_attr,f_bused),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_13};
//	VPL_ExtField _VPXStruct_vfs_attr_11 = { "f_bavail",offsetof(struct vfs_attr,f_bavail),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_12};
//	VPL_ExtField _VPXStruct_vfs_attr_10 = { "f_bfree",offsetof(struct vfs_attr,f_bfree),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_11};
//	VPL_ExtField _VPXStruct_vfs_attr_9 = { "f_blocks",offsetof(struct vfs_attr,f_blocks),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_10};
//	VPL_ExtField _VPXStruct_vfs_attr_8 = { "f_iosize",offsetof(struct vfs_attr,f_iosize),sizeof(unsigned long),kUnsignedType,"char",1,1,"unsigned long",&_VPXStruct_vfs_attr_9};
//	VPL_ExtField _VPXStruct_vfs_attr_7 = { "f_bsize",offsetof(struct vfs_attr,f_bsize),sizeof(unsigned int),kUnsignedType,"char",1,1,"unsigned int",&_VPXStruct_vfs_attr_8};
//	VPL_ExtField _VPXStruct_vfs_attr_6 = { "f_maxobjcount",offsetof(struct vfs_attr,f_maxobjcount),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_7};
//	VPL_ExtField _VPXStruct_vfs_attr_5 = { "f_dircount",offsetof(struct vfs_attr,f_dircount),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_6};
//	VPL_ExtField _VPXStruct_vfs_attr_4 = { "f_filecount",offsetof(struct vfs_attr,f_filecount),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_5};
//	VPL_ExtField _VPXStruct_vfs_attr_3 = { "f_objcount",offsetof(struct vfs_attr,f_objcount),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_4};
//	VPL_ExtField _VPXStruct_vfs_attr_2 = { "f_active",offsetof(struct vfs_attr,f_active),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_3};
//	VPL_ExtField _VPXStruct_vfs_attr_1 = { "f_supported",offsetof(struct vfs_attr,f_supported),sizeof(unsigned long long),kUnsignedType,"char",1,1,"unsigned long long",&_VPXStruct_vfs_attr_2};
//	VPL_ExtStructure _VPXStruct_vfs_attr_S = {"vfs_attr",&_VPXStruct_vfs_attr_1,sizeof(struct vfs_attr)};

	VPL_ExtField _VPXStruct_vfsstatfs_16 = { "f_reserved",offsetof(struct vfsstatfs,f_reserved),sizeof(void *[2]),kPointerType,"void",1,0,NULL,NULL};
	VPL_ExtField _VPXStruct_vfsstatfs_15 = { "f_fssubtype",offsetof(struct vfsstatfs,f_fssubtype),sizeof(unsigned int),kUnsignedType,"void",1,0,"unsigned int",&_VPXStruct_vfsstatfs_16};
	VPL_ExtField _VPXStruct_vfsstatfs_14 = { "f_mntfromname",offsetof(struct vfsstatfs,f_mntfromname),sizeof(char[1024]),kPointerType,"char",0,1,NULL,&_VPXStruct_vfsstatfs_15};
	VPL_ExtField _VPXStruct_vfsstatfs_13 = { "f_mntonname",offsetof(struct vfsstatfs,f_mntonname),sizeof(char[1024]),kPointerType,"char",0,1,NULL,&_VPXStruct_vfsstatfs_14};
	VPL_ExtField _VPXStruct_vfsstatfs_12 = { "f_fstypename",offsetof(struct vfsstatfs,f_fstypename),sizeof(char[16]),kPointerType,"char",0,1,NULL,&_VPXStruct_vfsstatfs_13};
	VPL_ExtField _VPXStruct_vfsstatfs_11 = { "f_flags",offsetof(struct vfsstatfs,f_flags),sizeof(unsigned long long),kUnsignedType,"char",0,1,"unsigned long long",&_VPXStruct_vfsstatfs_12};
	VPL_ExtField _VPXStruct_vfsstatfs_10 = { "f_owner",offsetof(struct vfsstatfs,f_owner),sizeof(unsigned int),kUnsignedType,"char",0,1,"unsigned int",&_VPXStruct_vfsstatfs_11};
	VPL_ExtField _VPXStruct_vfsstatfs_9 = { "f_fsid",offsetof(struct vfsstatfs,f_fsid),sizeof(struct fsid),kStructureType,"char",0,1,"fsid",&_VPXStruct_vfsstatfs_10};
	VPL_ExtField _VPXStruct_vfsstatfs_8 = { "f_ffree",offsetof(struct vfsstatfs,f_ffree),sizeof(unsigned long long),kUnsignedType,"char",0,1,"unsigned long long",&_VPXStruct_vfsstatfs_9};
	VPL_ExtField _VPXStruct_vfsstatfs_7 = { "f_files",offsetof(struct vfsstatfs,f_files),sizeof(unsigned long long),kUnsignedType,"char",0,1,"unsigned long long",&_VPXStruct_vfsstatfs_8};
	VPL_ExtField _VPXStruct_vfsstatfs_6 = { "f_bused",offsetof(struct vfsstatfs,f_bused),sizeof(unsigned long long),kUnsignedType,"char",0,1,"unsigned long long",&_VPXStruct_vfsstatfs_7};
	VPL_ExtField _VPXStruct_vfsstatfs_5 = { "f_bavail",offsetof(struct vfsstatfs,f_bavail),sizeof(unsigned long long),kUnsignedType,"char",0,1,"unsigned long long",&_VPXStruct_vfsstatfs_6};
	VPL_ExtField _VPXStruct_vfsstatfs_4 = { "f_bfree",offsetof(struct vfsstatfs,f_bfree),sizeof(unsigned long long),kUnsignedType,"char",0,1,"unsigned long long",&_VPXStruct_vfsstatfs_5};
	VPL_ExtField _VPXStruct_vfsstatfs_3 = { "f_blocks",offsetof(struct vfsstatfs,f_blocks),sizeof(unsigned long long),kUnsignedType,"char",0,1,"unsigned long long",&_VPXStruct_vfsstatfs_4};
	VPL_ExtField _VPXStruct_vfsstatfs_2 = { "f_iosize",offsetof(struct vfsstatfs,f_iosize),sizeof(unsigned long),kUnsignedType,"char",0,1,"unsigned long",&_VPXStruct_vfsstatfs_3};
	VPL_ExtField _VPXStruct_vfsstatfs_1 = { "f_bsize",offsetof(struct vfsstatfs,f_bsize),sizeof(unsigned int),kUnsignedType,"char",0,1,"unsigned int",&_VPXStruct_vfsstatfs_2};
	VPL_ExtStructure _VPXStruct_vfsstatfs_S = {"vfsstatfs",&_VPXStruct_vfsstatfs_1,sizeof(struct vfsstatfs)};

	VPL_ExtField _VPXStruct_statfs_20 = { "f_reserved4",offsetof(struct statfs,f_reserved4),sizeof(long int[4]),kPointerType,"long int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_statfs_19 = { "f_reserved3",offsetof(struct statfs,f_reserved3),sizeof(char),kIntType,"long int",0,4,"char",&_VPXStruct_statfs_20};
	VPL_ExtField _VPXStruct_statfs_18 = { "f_mntfromname",offsetof(struct statfs,f_mntfromname),sizeof(char[90]),kPointerType,"char",0,1,NULL,&_VPXStruct_statfs_19};
	VPL_ExtField _VPXStruct_statfs_17 = { "f_mntonname",offsetof(struct statfs,f_mntonname),sizeof(char[90]),kPointerType,"char",0,1,NULL,&_VPXStruct_statfs_18};
	VPL_ExtField _VPXStruct_statfs_16 = { "f_fstypename",offsetof(struct statfs,f_fstypename),sizeof(char[15]),kPointerType,"char",0,1,NULL,&_VPXStruct_statfs_17};
	VPL_ExtField _VPXStruct_statfs_15 = { "f_reserved2",offsetof(struct statfs,f_reserved2),sizeof(long int[2]),kPointerType,"long int",0,4,NULL,&_VPXStruct_statfs_16};
	VPL_ExtField _VPXStruct_statfs_14 = { "f_flags",offsetof(struct statfs,f_flags),sizeof(long int),kIntType,"long int",0,4,"long int",&_VPXStruct_statfs_15};
	VPL_ExtField _VPXStruct_statfs_13 = { "f_type",offsetof(struct statfs,f_type),sizeof(short),kIntType,"long int",0,4,"short",&_VPXStruct_statfs_14};
	VPL_ExtField _VPXStruct_statfs_12 = { "f_reserved1",offsetof(struct statfs,f_reserved1),sizeof(short),kIntType,"long int",0,4,"short",&_VPXStruct_statfs_13};
	VPL_ExtField _VPXStruct_statfs_11 = { "f_owner",offsetof(struct statfs,f_owner),sizeof(unsigned int),kUnsignedType,"long int",0,4,"unsigned int",&_VPXStruct_statfs_12};
	VPL_ExtField _VPXStruct_statfs_10 = { "f_fsid",offsetof(struct statfs,f_fsid),sizeof(struct fsid),kStructureType,"long int",0,4,"fsid",&_VPXStruct_statfs_11};
	VPL_ExtField _VPXStruct_statfs_9 = { "f_ffree",offsetof(struct statfs,f_ffree),sizeof(long int),kIntType,"long int",0,4,"long int",&_VPXStruct_statfs_10};
	VPL_ExtField _VPXStruct_statfs_8 = { "f_files",offsetof(struct statfs,f_files),sizeof(long int),kIntType,"long int",0,4,"long int",&_VPXStruct_statfs_9};
	VPL_ExtField _VPXStruct_statfs_7 = { "f_bavail",offsetof(struct statfs,f_bavail),sizeof(long int),kIntType,"long int",0,4,"long int",&_VPXStruct_statfs_8};
	VPL_ExtField _VPXStruct_statfs_6 = { "f_bfree",offsetof(struct statfs,f_bfree),sizeof(long int),kIntType,"long int",0,4,"long int",&_VPXStruct_statfs_7};
	VPL_ExtField _VPXStruct_statfs_5 = { "f_blocks",offsetof(struct statfs,f_blocks),sizeof(long int),kIntType,"long int",0,4,"long int",&_VPXStruct_statfs_6};
	VPL_ExtField _VPXStruct_statfs_4 = { "f_iosize",offsetof(struct statfs,f_iosize),sizeof(long int),kIntType,"long int",0,4,"long int",&_VPXStruct_statfs_5};
	VPL_ExtField _VPXStruct_statfs_3 = { "f_bsize",offsetof(struct statfs,f_bsize),sizeof(long int),kIntType,"long int",0,4,"long int",&_VPXStruct_statfs_4};
	VPL_ExtField _VPXStruct_statfs_2 = { "f_oflags",offsetof(struct statfs,f_oflags),sizeof(short),kIntType,"long int",0,4,"short",&_VPXStruct_statfs_3};
	VPL_ExtField _VPXStruct_statfs_1 = { "f_otype",offsetof(struct statfs,f_otype),sizeof(short),kIntType,"long int",0,4,"short",&_VPXStruct_statfs_2};
	VPL_ExtStructure _VPXStruct_statfs_S = {"statfs",&_VPXStruct_statfs_1,sizeof(struct statfs)};

	VPL_ExtField _VPXStruct_fsid_1 = { "val",offsetof(struct fsid,val),sizeof(int[2]),kPointerType,"int",0,4,NULL,NULL};
	VPL_ExtStructure _VPXStruct_fsid_S = {"fsid",&_VPXStruct_fsid_1,sizeof(struct fsid)};

	VPL_ExtField _VPXStruct_searchstate_1 = { "reserved",offsetof(struct searchstate,reserved),sizeof(unsigned char[556]),kPointerType,"unsigned char",0,1,NULL,NULL};
	VPL_ExtStructure _VPXStruct_searchstate_S = {"searchstate",&_VPXStruct_searchstate_1,sizeof(struct searchstate)};

	VPL_ExtField _VPXStruct_fssearchblock_10 = { "searchattrs",offsetof(struct fssearchblock,searchattrs),sizeof(struct attrlist),kStructureType,"NULL",0,0,"attrlist",NULL};
	VPL_ExtField _VPXStruct_fssearchblock_9 = { "sizeofsearchparams2",offsetof(struct fssearchblock,sizeofsearchparams2),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_fssearchblock_10};
	VPL_ExtField _VPXStruct_fssearchblock_8 = { "searchparams2",offsetof(struct fssearchblock,searchparams2),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_fssearchblock_9};
	VPL_ExtField _VPXStruct_fssearchblock_7 = { "sizeofsearchparams1",offsetof(struct fssearchblock,sizeofsearchparams1),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_fssearchblock_8};
	VPL_ExtField _VPXStruct_fssearchblock_6 = { "searchparams1",offsetof(struct fssearchblock,searchparams1),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_fssearchblock_7};
	VPL_ExtField _VPXStruct_fssearchblock_5 = { "timelimit",offsetof(struct fssearchblock,timelimit),sizeof(struct timeval),kStructureType,"void",1,0,"timeval",&_VPXStruct_fssearchblock_6};
	VPL_ExtField _VPXStruct_fssearchblock_4 = { "maxmatches",offsetof(struct fssearchblock,maxmatches),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_fssearchblock_5};
	VPL_ExtField _VPXStruct_fssearchblock_3 = { "returnbuffersize",offsetof(struct fssearchblock,returnbuffersize),sizeof(unsigned long),kUnsignedType,"void",1,0,"unsigned long",&_VPXStruct_fssearchblock_4};
	VPL_ExtField _VPXStruct_fssearchblock_2 = { "returnbuffer",offsetof(struct fssearchblock,returnbuffer),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_fssearchblock_3};
	VPL_ExtField _VPXStruct_fssearchblock_1 = { "returnattrs",offsetof(struct fssearchblock,returnattrs),sizeof(void *),kPointerType,"attrlist",1,24,"T*",&_VPXStruct_fssearchblock_2};
	VPL_ExtStructure _VPXStruct_fssearchblock_S = {"fssearchblock",&_VPXStruct_fssearchblock_1,sizeof(struct fssearchblock)};

	VPL_ExtField _VPXStruct_vol_attributes_attr_2 = { "nativeattr",offsetof(struct vol_attributes_attr,nativeattr),sizeof(struct attribute_set),kStructureType,"NULL",0,0,"attribute_set",NULL};
	VPL_ExtField _VPXStruct_vol_attributes_attr_1 = { "validattr",offsetof(struct vol_attributes_attr,validattr),sizeof(struct attribute_set),kStructureType,"NULL",0,0,"attribute_set",&_VPXStruct_vol_attributes_attr_2};
	VPL_ExtStructure _VPXStruct_vol_attributes_attr_S = {"vol_attributes_attr",&_VPXStruct_vol_attributes_attr_1,sizeof(struct vol_attributes_attr)};

	VPL_ExtField _VPXStruct_vol_capabilities_attr_2 = { "valid",offsetof(struct vol_capabilities_attr,valid),sizeof(unsigned int[4]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_vol_capabilities_attr_1 = { "capabilities",offsetof(struct vol_capabilities_attr,capabilities),sizeof(unsigned int[4]),kPointerType,"unsigned int",0,4,NULL,&_VPXStruct_vol_capabilities_attr_2};
	VPL_ExtStructure _VPXStruct_vol_capabilities_attr_S = {"vol_capabilities_attr",&_VPXStruct_vol_capabilities_attr_1,sizeof(struct vol_capabilities_attr)};

	VPL_ExtField _VPXStruct_diskextent_2 = { "blockcount",offsetof(struct diskextent,blockcount),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_diskextent_1 = { "startblock",offsetof(struct diskextent,startblock),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_diskextent_2};
	VPL_ExtStructure _VPXStruct_diskextent_S = {"diskextent",&_VPXStruct_diskextent_1,sizeof(struct diskextent)};

	VPL_ExtField _VPXStruct_attrreference_2 = { "attr_length",offsetof(struct attrreference,attr_length),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_attrreference_1 = { "attr_dataoffset",offsetof(struct attrreference,attr_dataoffset),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_attrreference_2};
	VPL_ExtStructure _VPXStruct_attrreference_S = {"attrreference",&_VPXStruct_attrreference_1,sizeof(struct attrreference)};

	VPL_ExtField _VPXStruct_attribute_set_5 = { "forkattr",offsetof(struct attribute_set,forkattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_attribute_set_4 = { "fileattr",offsetof(struct attribute_set,fileattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_attribute_set_5};
	VPL_ExtField _VPXStruct_attribute_set_3 = { "dirattr",offsetof(struct attribute_set,dirattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_attribute_set_4};
	VPL_ExtField _VPXStruct_attribute_set_2 = { "volattr",offsetof(struct attribute_set,volattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_attribute_set_3};
	VPL_ExtField _VPXStruct_attribute_set_1 = { "commonattr",offsetof(struct attribute_set,commonattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_attribute_set_2};
	VPL_ExtStructure _VPXStruct_attribute_set_S = {"attribute_set",&_VPXStruct_attribute_set_1,sizeof(struct attribute_set)};

	VPL_ExtField _VPXStruct_attrlist_7 = { "forkattr",offsetof(struct attrlist,forkattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_attrlist_6 = { "fileattr",offsetof(struct attrlist,fileattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_attrlist_7};
	VPL_ExtField _VPXStruct_attrlist_5 = { "dirattr",offsetof(struct attrlist,dirattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_attrlist_6};
	VPL_ExtField _VPXStruct_attrlist_4 = { "volattr",offsetof(struct attrlist,volattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_attrlist_5};
	VPL_ExtField _VPXStruct_attrlist_3 = { "commonattr",offsetof(struct attrlist,commonattr),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_attrlist_4};
	VPL_ExtField _VPXStruct_attrlist_2 = { "reserved",offsetof(struct attrlist,reserved),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_attrlist_3};
	VPL_ExtField _VPXStruct_attrlist_1 = { "bitmapcount",offsetof(struct attrlist,bitmapcount),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_attrlist_2};
	VPL_ExtStructure _VPXStruct_attrlist_S = {"attrlist",&_VPXStruct_attrlist_1,sizeof(struct attrlist)};

	VPL_ExtField _VPXStruct_fsobj_id_2 = { "fid_generation",offsetof(struct fsobj_id,fid_generation),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_fsobj_id_1 = { "fid_objno",offsetof(struct fsobj_id,fid_objno),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_fsobj_id_2};
	VPL_ExtStructure _VPXStruct_fsobj_id_S = {"fsobj_id",&_VPXStruct_fsobj_id_1,sizeof(struct fsobj_id)};

	VPL_ExtField _VPXStruct_xucred_4 = { "cr_groups",offsetof(struct xucred,cr_groups),sizeof(unsigned int[16]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_xucred_3 = { "cr_ngroups",offsetof(struct xucred,cr_ngroups),sizeof(short),kIntType,"unsigned int",0,4,"short",&_VPXStruct_xucred_4};
	VPL_ExtField _VPXStruct_xucred_2 = { "cr_uid",offsetof(struct xucred,cr_uid),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_xucred_3};
	VPL_ExtField _VPXStruct_xucred_1 = { "cr_version",offsetof(struct xucred,cr_version),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_xucred_2};
	VPL_ExtStructure _VPXStruct_xucred_S = {"xucred",&_VPXStruct_xucred_1,sizeof(struct xucred)};

	VPL_ExtField _VPXStruct_ucred_11 = { "cr_au",offsetof(struct ucred,cr_au),sizeof(struct auditinfo),kStructureType,"NULL",0,0,"auditinfo",NULL};
	VPL_ExtField _VPXStruct_ucred_10 = { "cr_gmuid",offsetof(struct ucred,cr_gmuid),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_ucred_11};
	VPL_ExtField _VPXStruct_ucred_9 = { "cr_svgid",offsetof(struct ucred,cr_svgid),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_ucred_10};
	VPL_ExtField _VPXStruct_ucred_8 = { "cr_rgid",offsetof(struct ucred,cr_rgid),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_ucred_9};
	VPL_ExtField _VPXStruct_ucred_7 = { "cr_groups",offsetof(struct ucred,cr_groups),sizeof(unsigned int[16]),kPointerType,"unsigned int",0,4,NULL,&_VPXStruct_ucred_8};
	VPL_ExtField _VPXStruct_ucred_6 = { "cr_ngroups",offsetof(struct ucred,cr_ngroups),sizeof(short),kIntType,"unsigned int",0,4,"short",&_VPXStruct_ucred_7};
	VPL_ExtField _VPXStruct_ucred_5 = { "cr_svuid",offsetof(struct ucred,cr_svuid),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_ucred_6};
	VPL_ExtField _VPXStruct_ucred_4 = { "cr_ruid",offsetof(struct ucred,cr_ruid),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_ucred_5};
	VPL_ExtField _VPXStruct_ucred_3 = { "cr_uid",offsetof(struct ucred,cr_uid),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_ucred_4};
	VPL_ExtField _VPXStruct_ucred_2 = { "cr_ref",offsetof(struct ucred,cr_ref),sizeof(unsigned long),kUnsignedType,"unsigned int",0,4,"unsigned long",&_VPXStruct_ucred_3};
	VPL_ExtStructure _VPXStruct_ucred_S = {"ucred",&_VPXStruct_ucred_2,sizeof(struct ucred)};

	VPL_ExtField _VPXStruct_au_evclass_map_2 = { "ec_class",offsetof(struct au_evclass_map,ec_class),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_au_evclass_map_1 = { "ec_number",offsetof(struct au_evclass_map,ec_number),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_au_evclass_map_2};
	VPL_ExtStructure _VPXStruct_au_evclass_map_S = {"au_evclass_map",&_VPXStruct_au_evclass_map_1,sizeof(struct au_evclass_map)};

	VPL_ExtField _VPXStruct_audit_fstat_2 = { "af_currsz",offsetof(struct audit_fstat,af_currsz),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",NULL};
	VPL_ExtField _VPXStruct_audit_fstat_1 = { "af_filesz",offsetof(struct audit_fstat,af_filesz),sizeof(unsigned long long),kUnsignedType,"NULL",0,0,"unsigned long long",&_VPXStruct_audit_fstat_2};
	VPL_ExtStructure _VPXStruct_audit_fstat_S = {"audit_fstat",&_VPXStruct_audit_fstat_1,sizeof(struct audit_fstat)};

//Not Available in Mac OS X 10.6
#if 0
	VPL_ExtField _VPXStruct_audit_stat_14 = { "as_memused",offsetof(struct audit_stat,as_memused),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_audit_stat_13 = { "as_totalsize",offsetof(struct audit_stat,as_totalsize),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_14};
	VPL_ExtField _VPXStruct_audit_stat_12 = { "as_dropped",offsetof(struct audit_stat,as_dropped),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_13};
	VPL_ExtField _VPXStruct_audit_stat_11 = { "as_rblocked",offsetof(struct audit_stat,as_rblocked),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_12};
	VPL_ExtField _VPXStruct_audit_stat_10 = { "as_wblocked",offsetof(struct audit_stat,as_wblocked),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_11};
	VPL_ExtField _VPXStruct_audit_stat_9 = { "as_written",offsetof(struct audit_stat,as_written),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_10};
	VPL_ExtField _VPXStruct_audit_stat_8 = { "as_enqueu",offsetof(struct audit_stat,as_enqueu),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_9};
	VPL_ExtField _VPXStruct_audit_stat_7 = { "as_auditctl",offsetof(struct audit_stat,as_auditctl),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_8};
	VPL_ExtField _VPXStruct_audit_stat_6 = { "as_audit",offsetof(struct audit_stat,as_audit),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_7};
	VPL_ExtField _VPXStruct_audit_stat_5 = { "as_kernel",offsetof(struct audit_stat,as_kernel),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_6};
	VPL_ExtField _VPXStruct_audit_stat_4 = { "as_nonattring",offsetof(struct audit_stat,as_nonattring),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_5};
	VPL_ExtField _VPXStruct_audit_stat_3 = { "as_generated",offsetof(struct audit_stat,as_generated),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_audit_stat_4};
	VPL_ExtField _VPXStruct_audit_stat_2 = { "as_numevent",offsetof(struct audit_stat,as_numevent),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_audit_stat_3};
	VPL_ExtField _VPXStruct_audit_stat_1 = { "as_version",offsetof(struct audit_stat,as_version),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_audit_stat_2};
	VPL_ExtStructure _VPXStruct_audit_stat_S = {"audit_stat",&_VPXStruct_audit_stat_1,sizeof(struct audit_stat)};
#endif
	VPL_ExtField _VPXStruct_au_qctrl_5 = { "aq_minfree",offsetof(struct au_qctrl,aq_minfree),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_au_qctrl_4 = { "aq_delay",offsetof(struct au_qctrl,aq_delay),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_au_qctrl_5};
	VPL_ExtField _VPXStruct_au_qctrl_3 = { "aq_bufsz",offsetof(struct au_qctrl,aq_bufsz),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_au_qctrl_4};
	VPL_ExtField _VPXStruct_au_qctrl_2 = { "aq_lowater",offsetof(struct au_qctrl,aq_lowater),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_au_qctrl_3};
	VPL_ExtField _VPXStruct_au_qctrl_1 = { "aq_hiwater",offsetof(struct au_qctrl,aq_hiwater),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_au_qctrl_2};
	VPL_ExtStructure _VPXStruct_au_qctrl_S = {"au_qctrl",&_VPXStruct_au_qctrl_1,sizeof(struct au_qctrl)};

//Not Available in Mac OS X 10.6
#if 0
	VPL_ExtField _VPXStruct_au_record_5 = { "len",offsetof(struct au_record,len),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_au_record_4 = { "data",offsetof(struct au_record,data),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",&_VPXStruct_au_record_5};
	VPL_ExtField _VPXStruct_au_record_2 = { "desc",offsetof(struct au_record,desc),sizeof(int),kIntType,"unsigned char",1,1,"int",&_VPXStruct_au_record_4};
	VPL_ExtField _VPXStruct_au_record_1 = { "used",offsetof(struct au_record,used),sizeof(char),kIntType,"unsigned char",1,1,"char",&_VPXStruct_au_record_2};
	VPL_ExtStructure _VPXStruct_au_record_S = {"au_record",&_VPXStruct_au_record_1,sizeof(struct au_record)};

	VPL_ExtField _VPXStruct_au_token_2 = { "len",offsetof(struct au_token,len),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_au_token_1 = { "t_data",offsetof(struct au_token,t_data),sizeof(void *),kPointerType,"unsigned char",1,1,"T*",&_VPXStruct_au_token_2};
	VPL_ExtStructure _VPXStruct_au_token_S = {"au_token",&_VPXStruct_au_token_1,sizeof(struct au_token)};
#endif

	VPL_ExtField _VPXStruct_auditpinfo_addr_5 = { "ap_asid",offsetof(struct auditpinfo_addr,ap_asid),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_auditpinfo_addr_4 = { "ap_termid",offsetof(struct auditpinfo_addr,ap_termid),sizeof(struct au_tid_addr),kStructureType,"NULL",0,0,"au_tid_addr",&_VPXStruct_auditpinfo_addr_5};
	VPL_ExtField _VPXStruct_auditpinfo_addr_3 = { "ap_mask",offsetof(struct auditpinfo_addr,ap_mask),sizeof(struct au_mask),kStructureType,"NULL",0,0,"au_mask",&_VPXStruct_auditpinfo_addr_4};
	VPL_ExtField _VPXStruct_auditpinfo_addr_2 = { "ap_auid",offsetof(struct auditpinfo_addr,ap_auid),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_auditpinfo_addr_3};
	VPL_ExtField _VPXStruct_auditpinfo_addr_1 = { "ap_pid",offsetof(struct auditpinfo_addr,ap_pid),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_auditpinfo_addr_2};
	VPL_ExtStructure _VPXStruct_auditpinfo_addr_S = {"auditpinfo_addr",&_VPXStruct_auditpinfo_addr_1,sizeof(struct auditpinfo_addr)};

	VPL_ExtField _VPXStruct_auditpinfo_5 = { "ap_asid",offsetof(struct auditpinfo,ap_asid),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_auditpinfo_4 = { "ap_termid",offsetof(struct auditpinfo,ap_termid),sizeof(struct au_tid),kStructureType,"NULL",0,0,"au_tid",&_VPXStruct_auditpinfo_5};
	VPL_ExtField _VPXStruct_auditpinfo_3 = { "ap_mask",offsetof(struct auditpinfo,ap_mask),sizeof(struct au_mask),kStructureType,"NULL",0,0,"au_mask",&_VPXStruct_auditpinfo_4};
	VPL_ExtField _VPXStruct_auditpinfo_2 = { "ap_auid",offsetof(struct auditpinfo,ap_auid),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_auditpinfo_3};
	VPL_ExtField _VPXStruct_auditpinfo_1 = { "ap_pid",offsetof(struct auditpinfo,ap_pid),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_auditpinfo_2};
	VPL_ExtStructure _VPXStruct_auditpinfo_S = {"auditpinfo",&_VPXStruct_auditpinfo_1,sizeof(struct auditpinfo)};

	VPL_ExtField _VPXStruct_auditinfo_addr_4 = { "ai_asid",offsetof(struct auditinfo_addr,ai_asid),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_auditinfo_addr_3 = { "ai_termid",offsetof(struct auditinfo_addr,ai_termid),sizeof(struct au_tid_addr),kStructureType,"NULL",0,0,"au_tid_addr",&_VPXStruct_auditinfo_addr_4};
	VPL_ExtField _VPXStruct_auditinfo_addr_2 = { "ai_mask",offsetof(struct auditinfo_addr,ai_mask),sizeof(struct au_mask),kStructureType,"NULL",0,0,"au_mask",&_VPXStruct_auditinfo_addr_3};
	VPL_ExtField _VPXStruct_auditinfo_addr_1 = { "ai_auid",offsetof(struct auditinfo_addr,ai_auid),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_auditinfo_addr_2};
	VPL_ExtStructure _VPXStruct_auditinfo_addr_S = {"auditinfo_addr",&_VPXStruct_auditinfo_addr_1,sizeof(struct auditinfo_addr)};

	VPL_ExtField _VPXStruct_auditinfo_4 = { "ai_asid",offsetof(struct auditinfo,ai_asid),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_auditinfo_3 = { "ai_termid",offsetof(struct auditinfo,ai_termid),sizeof(struct au_tid),kStructureType,"NULL",0,0,"au_tid",&_VPXStruct_auditinfo_4};
	VPL_ExtField _VPXStruct_auditinfo_2 = { "ai_mask",offsetof(struct auditinfo,ai_mask),sizeof(struct au_mask),kStructureType,"NULL",0,0,"au_mask",&_VPXStruct_auditinfo_3};
	VPL_ExtField _VPXStruct_auditinfo_1 = { "ai_auid",offsetof(struct auditinfo,ai_auid),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_auditinfo_2};
	VPL_ExtStructure _VPXStruct_auditinfo_S = {"auditinfo",&_VPXStruct_auditinfo_1,sizeof(struct auditinfo)};

	VPL_ExtField _VPXStruct_au_mask_2 = { "am_failure",offsetof(struct au_mask,am_failure),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_au_mask_1 = { "am_success",offsetof(struct au_mask,am_success),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_au_mask_2};
	VPL_ExtStructure _VPXStruct_au_mask_S = {"au_mask",&_VPXStruct_au_mask_1,sizeof(struct au_mask)};

	VPL_ExtField _VPXStruct_au_tid_addr_3 = { "at_addr",offsetof(struct au_tid_addr,at_addr),sizeof(unsigned int[4]),kPointerType,"unsigned int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_au_tid_addr_2 = { "at_type",offsetof(struct au_tid_addr,at_type),sizeof(unsigned int),kUnsignedType,"unsigned int",0,4,"unsigned int",&_VPXStruct_au_tid_addr_3};
	VPL_ExtField _VPXStruct_au_tid_addr_1 = { "at_port",offsetof(struct au_tid_addr,at_port),sizeof(int),kIntType,"unsigned int",0,4,"int",&_VPXStruct_au_tid_addr_2};
	VPL_ExtStructure _VPXStruct_au_tid_addr_S = {"au_tid_addr",&_VPXStruct_au_tid_addr_1,sizeof(struct au_tid_addr)};

	VPL_ExtField _VPXStruct_au_tid_2 = { "machine",offsetof(struct au_tid,machine),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",NULL};
	VPL_ExtField _VPXStruct_au_tid_1 = { "port",offsetof(struct au_tid,port),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_au_tid_2};
	VPL_ExtStructure _VPXStruct_au_tid_S = {"au_tid",&_VPXStruct_au_tid_1,sizeof(struct au_tid)};

//	VPL_ExtField _VPXStruct_omsghdr_6 = { "msg_accrightslen",offsetof(struct omsghdr,msg_accrightslen),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
//	VPL_ExtField _VPXStruct_omsghdr_5 = { "msg_accrights",offsetof(struct omsghdr,msg_accrights),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_omsghdr_6};
//	VPL_ExtField _VPXStruct_omsghdr_4 = { "msg_iovlen",offsetof(struct omsghdr,msg_iovlen),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct_omsghdr_5};
//	VPL_ExtField _VPXStruct_omsghdr_3 = { "msg_iov",offsetof(struct omsghdr,msg_iov),sizeof(void *),kPointerType,"iovec",1,8,"T*",&_VPXStruct_omsghdr_4};
//	VPL_ExtField _VPXStruct_omsghdr_2 = { "msg_namelen",offsetof(struct omsghdr,msg_namelen),sizeof(unsigned int),kUnsignedType,"iovec",1,8,"unsigned int",&_VPXStruct_omsghdr_3};
//	VPL_ExtField _VPXStruct_omsghdr_1 = { "msg_name",offsetof(struct omsghdr,msg_name),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_omsghdr_2};
//	VPL_ExtStructure _VPXStruct_omsghdr_S = {"omsghdr",&_VPXStruct_omsghdr_1,sizeof(struct omsghdr)};

//	VPL_ExtField _VPXStruct_osockaddr_2 = { "sa_data",offsetof(struct osockaddr,sa_data),sizeof(char[14]),kPointerType,"char",0,1,NULL,NULL};
//	VPL_ExtField _VPXStruct_osockaddr_1 = { "sa_family",offsetof(struct osockaddr,sa_family),sizeof(unsigned short),kUnsignedType,"char",0,1,"unsigned short",&_VPXStruct_osockaddr_2};
//	VPL_ExtStructure _VPXStruct_osockaddr_S = {"osockaddr",&_VPXStruct_osockaddr_1,sizeof(struct osockaddr)};

	VPL_ExtField _VPXStruct_cmsghdr_3 = { "cmsg_type",offsetof(struct cmsghdr,cmsg_type),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_cmsghdr_2 = { "cmsg_level",offsetof(struct cmsghdr,cmsg_level),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_cmsghdr_3};
	VPL_ExtField _VPXStruct_cmsghdr_1 = { "cmsg_len",offsetof(struct cmsghdr,cmsg_len),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_cmsghdr_2};
	VPL_ExtStructure _VPXStruct_cmsghdr_S = {"cmsghdr",&_VPXStruct_cmsghdr_1,sizeof(struct cmsghdr)};

	VPL_ExtField _VPXStruct_msghdr_7 = { "msg_flags",offsetof(struct msghdr,msg_flags),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_msghdr_6 = { "msg_controllen",offsetof(struct msghdr,msg_controllen),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_msghdr_7};
	VPL_ExtField _VPXStruct_msghdr_5 = { "msg_control",offsetof(struct msghdr,msg_control),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_msghdr_6};
	VPL_ExtField _VPXStruct_msghdr_4 = { "msg_iovlen",offsetof(struct msghdr,msg_iovlen),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct_msghdr_5};
	VPL_ExtField _VPXStruct_msghdr_3 = { "msg_iov",offsetof(struct msghdr,msg_iov),sizeof(void *),kPointerType,"iovec",1,8,"T*",&_VPXStruct_msghdr_4};
	VPL_ExtField _VPXStruct_msghdr_2 = { "msg_namelen",offsetof(struct msghdr,msg_namelen),sizeof(unsigned int),kUnsignedType,"iovec",1,8,"unsigned int",&_VPXStruct_msghdr_3};
	VPL_ExtField _VPXStruct_msghdr_1 = { "msg_name",offsetof(struct msghdr,msg_name),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_msghdr_2};
	VPL_ExtStructure _VPXStruct_msghdr_S = {"msghdr",&_VPXStruct_msghdr_1,sizeof(struct msghdr)};

	VPL_ExtField _VPXStruct_sockaddr_storage_5 = { "__ss_pad2",offsetof(struct sockaddr_storage,__ss_pad2),sizeof(char[112]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct_sockaddr_storage_4 = { "__ss_align",offsetof(struct sockaddr_storage,__ss_align),sizeof(long long int),kIntType,"char",0,1,"long long int",&_VPXStruct_sockaddr_storage_5};
	VPL_ExtField _VPXStruct_sockaddr_storage_3 = { "__ss_pad1",offsetof(struct sockaddr_storage,__ss_pad1),sizeof(char[6]),kPointerType,"char",0,1,NULL,&_VPXStruct_sockaddr_storage_4};
	VPL_ExtField _VPXStruct_sockaddr_storage_2 = { "ss_family",offsetof(struct sockaddr_storage,ss_family),sizeof(unsigned char),kUnsignedType,"char",0,1,"unsigned char",&_VPXStruct_sockaddr_storage_3};
	VPL_ExtField _VPXStruct_sockaddr_storage_1 = { "ss_len",offsetof(struct sockaddr_storage,ss_len),sizeof(unsigned char),kUnsignedType,"char",0,1,"unsigned char",&_VPXStruct_sockaddr_storage_2};
	VPL_ExtStructure _VPXStruct_sockaddr_storage_S = {"sockaddr_storage",&_VPXStruct_sockaddr_storage_1,sizeof(struct sockaddr_storage)};

	VPL_ExtField _VPXStruct_sockproto_2 = { "sp_protocol",offsetof(struct sockproto,sp_protocol),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",NULL};
	VPL_ExtField _VPXStruct_sockproto_1 = { "sp_family",offsetof(struct sockproto,sp_family),sizeof(unsigned short),kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_sockproto_2};
	VPL_ExtStructure _VPXStruct_sockproto_S = {"sockproto",&_VPXStruct_sockproto_1,sizeof(struct sockproto)};

	VPL_ExtField _VPXStruct_sockaddr_3 = { "sa_data",offsetof(struct sockaddr,sa_data),sizeof(char[14]),kPointerType,"char",0,1,NULL,NULL};
	VPL_ExtField _VPXStruct_sockaddr_2 = { "sa_family",offsetof(struct sockaddr,sa_family),sizeof(unsigned char),kUnsignedType,"char",0,1,"unsigned char",&_VPXStruct_sockaddr_3};
	VPL_ExtField _VPXStruct_sockaddr_1 = { "sa_len",offsetof(struct sockaddr,sa_len),sizeof(unsigned char),kUnsignedType,"char",0,1,"unsigned char",&_VPXStruct_sockaddr_2};
	VPL_ExtStructure _VPXStruct_sockaddr_S = {"sockaddr",&_VPXStruct_sockaddr_1,sizeof(struct sockaddr)};

	VPL_ExtField _VPXStruct_linger_2 = { "l_linger",offsetof(struct linger,l_linger),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_linger_1 = { "l_onoff",offsetof(struct linger,l_onoff),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_linger_2};
	VPL_ExtStructure _VPXStruct_linger_S = {"linger",&_VPXStruct_linger_1,sizeof(struct linger)};

	VPL_ExtField _VPXStruct_iovec_2 = { "iov_len",offsetof(struct iovec,iov_len),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",NULL};
	VPL_ExtField _VPXStruct_iovec_1 = { "iov_base",offsetof(struct iovec,iov_base),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_iovec_2};
	VPL_ExtStructure _VPXStruct_iovec_S = {"iovec",&_VPXStruct_iovec_1,sizeof(struct iovec)};

	VPL_ExtField _VPXStruct_rlimit_2 = { "rlim_max",offsetof(struct rlimit,rlim_max),sizeof(long long int),kIntType,"NULL",0,0,"long long int",NULL};
	VPL_ExtField _VPXStruct_rlimit_1 = { "rlim_cur",offsetof(struct rlimit,rlim_cur),sizeof(long long int),kIntType,"NULL",0,0,"long long int",&_VPXStruct_rlimit_2};
	VPL_ExtStructure _VPXStruct_rlimit_S = {"rlimit",&_VPXStruct_rlimit_1,sizeof(struct rlimit)};

	VPL_ExtField _VPXStruct_rusage_16 = { "ru_nivcsw",offsetof(struct rusage,ru_nivcsw),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_rusage_15 = { "ru_nvcsw",offsetof(struct rusage,ru_nvcsw),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_16};
	VPL_ExtField _VPXStruct_rusage_14 = { "ru_nsignals",offsetof(struct rusage,ru_nsignals),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_15};
	VPL_ExtField _VPXStruct_rusage_13 = { "ru_msgrcv",offsetof(struct rusage,ru_msgrcv),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_14};
	VPL_ExtField _VPXStruct_rusage_12 = { "ru_msgsnd",offsetof(struct rusage,ru_msgsnd),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_13};
	VPL_ExtField _VPXStruct_rusage_11 = { "ru_oublock",offsetof(struct rusage,ru_oublock),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_12};
	VPL_ExtField _VPXStruct_rusage_10 = { "ru_inblock",offsetof(struct rusage,ru_inblock),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_11};
	VPL_ExtField _VPXStruct_rusage_9 = { "ru_nswap",offsetof(struct rusage,ru_nswap),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_10};
	VPL_ExtField _VPXStruct_rusage_8 = { "ru_majflt",offsetof(struct rusage,ru_majflt),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_9};
	VPL_ExtField _VPXStruct_rusage_7 = { "ru_minflt",offsetof(struct rusage,ru_minflt),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_8};
	VPL_ExtField _VPXStruct_rusage_6 = { "ru_isrss",offsetof(struct rusage,ru_isrss),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_7};
	VPL_ExtField _VPXStruct_rusage_5 = { "ru_idrss",offsetof(struct rusage,ru_idrss),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_6};
	VPL_ExtField _VPXStruct_rusage_4 = { "ru_ixrss",offsetof(struct rusage,ru_ixrss),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_5};
	VPL_ExtField _VPXStruct_rusage_3 = { "ru_maxrss",offsetof(struct rusage,ru_maxrss),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_rusage_4};
	VPL_ExtField _VPXStruct_rusage_2 = { "ru_stime",offsetof(struct rusage,ru_stime),sizeof(struct timeval),kStructureType,"NULL",0,0,"timeval",&_VPXStruct_rusage_3};
	VPL_ExtField _VPXStruct_rusage_1 = { "ru_utime",offsetof(struct rusage,ru_utime),sizeof(struct timeval),kStructureType,"NULL",0,0,"timeval",&_VPXStruct_rusage_2};
	VPL_ExtStructure _VPXStruct_rusage_S = {"rusage",&_VPXStruct_rusage_1,sizeof(struct rusage)};

	VPL_ExtField _VPXStruct_tm_11 = { "tm_zone",offsetof(struct tm,tm_zone),sizeof(void *),kPointerType,"char",1,1,"T*",NULL};
	VPL_ExtField _VPXStruct_tm_10 = { "tm_gmtoff",offsetof(struct tm,tm_gmtoff),sizeof(long int),kIntType,"char",1,1,"long int",&_VPXStruct_tm_11};
	VPL_ExtField _VPXStruct_tm_9 = { "tm_isdst",offsetof(struct tm,tm_isdst),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_10};
	VPL_ExtField _VPXStruct_tm_8 = { "tm_yday",offsetof(struct tm,tm_yday),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_9};
	VPL_ExtField _VPXStruct_tm_7 = { "tm_wday",offsetof(struct tm,tm_wday),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_8};
	VPL_ExtField _VPXStruct_tm_6 = { "tm_year",offsetof(struct tm,tm_year),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_7};
	VPL_ExtField _VPXStruct_tm_5 = { "tm_mon",offsetof(struct tm,tm_mon),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_6};
	VPL_ExtField _VPXStruct_tm_4 = { "tm_mday",offsetof(struct tm,tm_mday),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_5};
	VPL_ExtField _VPXStruct_tm_3 = { "tm_hour",offsetof(struct tm,tm_hour),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_4};
	VPL_ExtField _VPXStruct_tm_2 = { "tm_min",offsetof(struct tm,tm_min),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_3};
	VPL_ExtField _VPXStruct_tm_1 = { "tm_sec",offsetof(struct tm,tm_sec),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_tm_2};
	VPL_ExtStructure _VPXStruct_tm_S = {"tm",&_VPXStruct_tm_1,sizeof(struct tm)};

	VPL_ExtField _VPXStruct_clockinfo_5 = { "profhz",offsetof(struct clockinfo,profhz),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_clockinfo_4 = { "stathz",offsetof(struct clockinfo,stathz),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_clockinfo_5};
	VPL_ExtField _VPXStruct_clockinfo_3 = { "tickadj",offsetof(struct clockinfo,tickadj),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_clockinfo_4};
	VPL_ExtField _VPXStruct_clockinfo_2 = { "tick",offsetof(struct clockinfo,tick),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_clockinfo_3};
	VPL_ExtField _VPXStruct_clockinfo_1 = { "hz",offsetof(struct clockinfo,hz),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_clockinfo_2};
	VPL_ExtStructure _VPXStruct_clockinfo_S = {"clockinfo",&_VPXStruct_clockinfo_1,sizeof(struct clockinfo)};

	VPL_ExtField _VPXStruct_timezone_2 = { "tz_dsttime",offsetof(struct timezone,tz_dsttime),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_timezone_1 = { "tz_minuteswest",offsetof(struct timezone,tz_minuteswest),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_timezone_2};
	VPL_ExtStructure _VPXStruct_timezone_S = {"timezone",&_VPXStruct_timezone_1,sizeof(struct timezone)};

	VPL_ExtField _VPXStruct_itimerval_2 = { "it_value",offsetof(struct itimerval,it_value),sizeof(struct timeval),kStructureType,"NULL",0,0,"timeval",NULL};
	VPL_ExtField _VPXStruct_itimerval_1 = { "it_interval",offsetof(struct itimerval,it_interval),sizeof(struct timeval),kStructureType,"NULL",0,0,"timeval",&_VPXStruct_itimerval_2};
	VPL_ExtStructure _VPXStruct_itimerval_S = {"itimerval",&_VPXStruct_itimerval_1,sizeof(struct itimerval)};

	VPL_ExtField _VPXStruct_timeval_2 = { "tv_usec",offsetof(struct timeval,tv_usec),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_timeval_1 = { "tv_sec",offsetof(struct timeval,tv_sec),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_timeval_2};
	VPL_ExtStructure _VPXStruct_timeval_S = {"timeval",&_VPXStruct_timeval_1,sizeof(struct timeval)};

	VPL_ExtField _VPXStruct_sigstack_2 = { "ss_onstack",offsetof(struct sigstack,ss_onstack),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_sigstack_1 = { "ss_sp",offsetof(struct sigstack,ss_sp),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_sigstack_2};
	VPL_ExtStructure _VPXStruct_sigstack_S = {"sigstack",&_VPXStruct_sigstack_1,sizeof(struct sigstack)};

	VPL_ExtField _VPXStruct_sigvec_3 = { "sv_flags",offsetof(struct sigvec,sv_flags),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_sigvec_2 = { "sv_mask",offsetof(struct sigvec,sv_mask),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_sigvec_3};
	VPL_ExtField _VPXStruct_sigvec_1 = { "sv_handler",offsetof(struct sigvec,sv_handler),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_sigvec_2};
	VPL_ExtStructure _VPXStruct_sigvec_S = {"sigvec",&_VPXStruct_sigvec_1,sizeof(struct sigvec)};

	VPL_ExtField _VPXStruct_sigaction_3 = { "sa_flags",offsetof(struct sigaction,sa_flags),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_sigaction_2 = { "sa_mask",offsetof(struct sigaction,sa_mask),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct_sigaction_3};
//	VPL_ExtField _VPXStruct_sigaction_1 = { "__sigaction_u",offsetof(struct sigaction,__sigaction_u),sizeof(__sigaction_u),kStructureType,"NULL",0,0,"__sigaction_u",&_VPXStruct_sigaction_2};
	VPL_ExtStructure _VPXStruct_sigaction_S = {"sigaction",&_VPXStruct_sigaction_2,sizeof(struct sigaction)};

	VPL_ExtField _VPXStruct___sigaction_4 = { "sa_flags",offsetof(struct __sigaction,sa_flags),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct___sigaction_3 = { "sa_mask",offsetof(struct __sigaction,sa_mask),sizeof(unsigned int),kUnsignedType,"NULL",0,0,"unsigned int",&_VPXStruct___sigaction_4};
	VPL_ExtField _VPXStruct___sigaction_2 = { "sa_tramp",offsetof(struct __sigaction,sa_tramp),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct___sigaction_3};
//	VPL_ExtField _VPXStruct___sigaction_1 = { "__sigaction_u",offsetof(struct __sigaction,__sigaction_u),sizeof(__sigaction_u),kStructureType,"void",1,0,"__sigaction_u",&_VPXStruct___sigaction_2};
	VPL_ExtStructure _VPXStruct___sigaction_S = {"__sigaction",&_VPXStruct___sigaction_2,sizeof(struct __sigaction)};

//	VPL_ExtField _VPXStruct___siginfo_10 = { "pad",offsetof(struct __siginfo,pad),sizeof(unsigned long[7]),kPointerType,"unsigned long",0,4,NULL,NULL};

	VPL_ExtField _VPXStruct___siginfo_10 = { "pad",offsetof(struct __siginfo,si_band)+sizeof(long int),sizeof(unsigned long[7]),kPointerType,"unsigned long",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct___siginfo_9 = { "si_band",offsetof(struct __siginfo,si_band),sizeof(long int),kIntType,"unsigned long",0,4,"long int",&_VPXStruct___siginfo_10};
	VPL_ExtField _VPXStruct___siginfo_7 = { "si_addr",offsetof(struct __siginfo,si_addr),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct___siginfo_9};
	VPL_ExtField _VPXStruct___siginfo_6 = { "si_status",offsetof(struct __siginfo,si_status),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct___siginfo_7};
	VPL_ExtField _VPXStruct___siginfo_5 = { "si_uid",offsetof(struct __siginfo,si_uid),sizeof(unsigned int),kUnsignedType,"void",1,0,"unsigned int",&_VPXStruct___siginfo_6};
	VPL_ExtField _VPXStruct___siginfo_4 = { "si_pid",offsetof(struct __siginfo,si_pid),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct___siginfo_5};
	VPL_ExtField _VPXStruct___siginfo_3 = { "si_code",offsetof(struct __siginfo,si_code),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct___siginfo_4};
	VPL_ExtField _VPXStruct___siginfo_2 = { "si_errno",offsetof(struct __siginfo,si_errno),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct___siginfo_3};
	VPL_ExtField _VPXStruct___siginfo_1 = { "si_signo",offsetof(struct __siginfo,si_signo),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct___siginfo_2};
	VPL_ExtStructure _VPXStruct___siginfo_S = {"__siginfo",&_VPXStruct___siginfo_1,sizeof(struct __siginfo)};

	VPL_ExtField _VPXStruct_sigevent_5 = { "sigev_notify_attributes",offsetof(struct sigevent,sigev_notify_attributes),sizeof(void *),kPointerType,"_opaque_pthread_attr_t",1,40,"T*",NULL};
	VPL_ExtField _VPXStruct_sigevent_4 = { "sigev_notify_function",offsetof(struct sigevent,sigev_notify_function),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_sigevent_5};
	VPL_ExtField _VPXStruct_sigevent_2 = { "sigev_signo",offsetof(struct sigevent,sigev_signo),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct_sigevent_4};
	VPL_ExtField _VPXStruct_sigevent_1 = { "sigev_notify",offsetof(struct sigevent,sigev_notify),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct_sigevent_2};
	VPL_ExtStructure _VPXStruct_sigevent_S = {"sigevent",&_VPXStruct_sigevent_1,sizeof(struct sigevent)};

//	VPL_ExtField _VPXStruct_sigcontext_2 = { "sc_mask",offsetof(struct sigcontext,sc_mask),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
//	VPL_ExtField _VPXStruct_sigcontext_1 = { "sc_onstack",offsetof(struct sigcontext,sc_onstack),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_sigcontext_2};
//	VPL_ExtStructure _VPXStruct_sigcontext_S = {"sigcontext",&_VPXStruct_sigcontext_1,sizeof(struct sigcontext)};

	VPL_ExtField _VPXStruct_fd_set_1 = { "fds_bits",offsetof(struct fd_set,fds_bits),sizeof(int[32]),kPointerType,"int",0,4,NULL,NULL};
	VPL_ExtStructure _VPXStruct_fd_set_S = {"fd_set",&_VPXStruct_fd_set_1,sizeof(struct fd_set)};

	VPL_ExtField _VPXStruct_timespec_2 = { "tv_nsec",offsetof(struct timespec,tv_nsec),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_timespec_1 = { "tv_sec",offsetof(struct timespec,tv_sec),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_timespec_2};
	VPL_ExtStructure _VPXStruct_timespec_S = {"timespec",&_VPXStruct_timespec_1,sizeof(struct timespec)};

	VPL_ExtField _VPXStruct_accessx_descriptor_3 = { "ad_pad",offsetof(struct accessx_descriptor,ad_pad),sizeof(int[2]),kPointerType,"int",0,4,NULL,NULL};
	VPL_ExtField _VPXStruct_accessx_descriptor_2 = { "ad_flags",offsetof(struct accessx_descriptor,ad_flags),sizeof(int),kIntType,"int",0,4,"int",&_VPXStruct_accessx_descriptor_3};
	VPL_ExtField _VPXStruct_accessx_descriptor_1 = { "ad_name_offset",offsetof(struct accessx_descriptor,ad_name_offset),sizeof(unsigned int),kUnsignedType,"int",0,4,"unsigned int",&_VPXStruct_accessx_descriptor_2};
	VPL_ExtStructure _VPXStruct_accessx_descriptor_S = {"accessx_descriptor",&_VPXStruct_accessx_descriptor_1,sizeof(struct accessx_descriptor)};

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

//	VPL_ExtField _VPXStruct_ucontext64_6 = { "uc_mcontext64",offsetof(struct ucontext64,uc_mcontext64),sizeof(void *),kPointerType,"mcontext64",1,0,"T*",NULL};
//	VPL_ExtField _VPXStruct_ucontext64_5 = { "uc_mcsize",offsetof(struct ucontext64,uc_mcsize),sizeof(unsigned long),kUnsignedType,"mcontext64",1,0,"unsigned long",&_VPXStruct_ucontext64_6};
//	VPL_ExtField _VPXStruct_ucontext64_4 = { "uc_link",offsetof(struct ucontext64,uc_link),sizeof(void *),kPointerType,"ucontext64",1,32,"T*",&_VPXStruct_ucontext64_5};
//	VPL_ExtField _VPXStruct_ucontext64_3 = { "uc_stack",offsetof(struct ucontext64,uc_stack),sizeof(struct sigaltstack),kStructureType,"ucontext64",1,32,"sigaltstack",&_VPXStruct_ucontext64_4};
//	VPL_ExtField _VPXStruct_ucontext64_2 = { "uc_sigmask",offsetof(struct ucontext64,uc_sigmask),sizeof(unsigned int),kUnsignedType,"ucontext64",1,32,"unsigned int",&_VPXStruct_ucontext64_3};
//	VPL_ExtField _VPXStruct_ucontext64_1 = { "uc_onstack",offsetof(struct ucontext64,uc_onstack),sizeof(int),kIntType,"ucontext64",1,32,"int",&_VPXStruct_ucontext64_2};
//	VPL_ExtStructure _VPXStruct_ucontext64_S = {"ucontext64",&_VPXStruct_ucontext64_1,sizeof(struct ucontext64)};

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

	VPL_ExtField _VPXStruct_termios_7 = { "c_ospeed",offsetof(struct termios,c_ospeed),sizeof(long),kIntType,"NULL",0,0,"long",NULL};
	VPL_ExtField _VPXStruct_termios_6 = { "c_ispeed",offsetof(struct termios,c_ispeed),sizeof(long),kIntType,"NULL",0,0,"long",&_VPXStruct_termios_7};
	VPL_ExtField _VPXStruct_termios_5 = { "c_cc",offsetof(struct termios,c_cc),sizeof(unsigned char)*NCCS,kUnsignedType,"NULL",0,0,"unsigned short",&_VPXStruct_termios_6};
	VPL_ExtField _VPXStruct_termios_4 = { "c_lflag",offsetof(struct termios,c_lflag),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_termios_5};
	VPL_ExtField _VPXStruct_termios_3 = { "c_cflag",offsetof(struct termios,c_cflag),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_termios_4};
	VPL_ExtField _VPXStruct_termios_2 = { "c_oflag",offsetof(struct termios,c_oflag),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_termios_3};
	VPL_ExtField _VPXStruct_termios_1 = { "c_iflag",offsetof(struct termios,c_iflag),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_termios_2};
	VPL_ExtStructure _VPXStruct_termios_S = {"termios",&_VPXStruct_termios_1,sizeof(struct termios)};


#pragma mark --------------- Procedures ---------------

#if MACOSX_DEPLOYMENT_TARGET > MAC_OS_X_VERSION_10_4
	VPL_Parameter _regcomp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _regcomp_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _regcomp_2 = { kPointerType,1,"char",1,1,&_regcomp_3};
	VPL_Parameter _regcomp_1 = { kPointerType, sizeof(regex_t),"regex_t",1,0,&_regcomp_2};
	VPL_ExtProcedure _regcomp_F = {"regcomp",regcomp,&_regcomp_1,&_regcomp_R};

	VPL_Parameter _regerror_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _regerror_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _regerror_3 = { kPointerType,1,"char",1,1,&_regerror_3};
	VPL_Parameter _regerror_2 = { kPointerType, sizeof(regex_t),"regex_t",1,1,&_regerror_2};
	VPL_Parameter _regerror_1 = { kIntType,4,NULL,0,0,&_regerror_4};
	VPL_ExtProcedure _regerror_F = {"regerror",regerror,&_regerror_1,&_regerror_R};

	VPL_Parameter _regexec_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _regexec_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _regexec_4 = { kPointerType,4,"regmatch_t",1,0,&_regexec_5};
	VPL_Parameter _regexec_3 = { kUnsignedType,4,NULL,0,0,&_regexec_4};
	VPL_Parameter _regexec_2 = { kPointerType,1,"char",1,1,&_regexec_3};
	VPL_Parameter _regexec_1 = { kPointerType, sizeof(regex_t),"regex_t",1,1,&_regexec_2};
	VPL_ExtProcedure _regexec_F = {"regexec",regexec,&_regexec_1,&_regexec_R};

	VPL_Parameter _regfree_1 = { kPointerType, sizeof(regex_t),"regex_t",1,0,NULL};
	VPL_ExtProcedure _regfree_F = {"regfree",regfree,&_regfree_1,NULL};
#endif

	VPL_Parameter _sig_t_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sig_t_F = {"sig_t",NULL,&_sig_t_1,NULL};


	VPL_Parameter _innetgr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _innetgr_4 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _innetgr_3 = { kPointerType,1,"char",1,1,&_innetgr_4};
	VPL_Parameter _innetgr_2 = { kPointerType,1,"char",1,1,&_innetgr_3};
	VPL_Parameter _innetgr_1 = { kPointerType,1,"char",1,1,&_innetgr_2};
	VPL_ExtProcedure _innetgr_F = {"innetgr",innetgr,&_innetgr_1,&_innetgr_R};

	VPL_Parameter _hstrerror_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _hstrerror_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _hstrerror_F = {"hstrerror",hstrerror,&_hstrerror_1,&_hstrerror_R};

	VPL_Parameter _herror_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _herror_F = {"herror",herror,&_herror_1,NULL};

	VPL_ExtProcedure _endrpcent_F = {"endrpcent",endrpcent,NULL,NULL};

	VPL_Parameter _setrpcent_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setrpcent_F = {"setrpcent",setrpcent,&_setrpcent_1,NULL};

	VPL_Parameter _getrpcent_R = { kPointerType,12,"rpcent",1,0,NULL};
	VPL_ExtProcedure _getrpcent_F = {"getrpcent",getrpcent,NULL,&_getrpcent_R};

	VPL_Parameter _getrpcbynumber_R = { kPointerType,12,"rpcent",1,0,NULL};
	VPL_Parameter _getrpcbynumber_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getrpcbynumber_F = {"getrpcbynumber",getrpcbynumber,&_getrpcbynumber_1,&_getrpcbynumber_R};

	VPL_Parameter _getrpcbyname_R = { kPointerType,12,"rpcent",1,0,NULL};
	VPL_Parameter _getrpcbyname_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _getrpcbyname_F = {"getrpcbyname",getrpcbyname,&_getrpcbyname_1,&_getrpcbyname_R};

	VPL_Parameter _getipnodebyname_R = { kPointerType,20,"hostent",1,0,NULL};
	VPL_Parameter _getipnodebyname_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _getipnodebyname_3 = { kIntType,4,NULL,0,0,&_getipnodebyname_4};
	VPL_Parameter _getipnodebyname_2 = { kIntType,4,NULL,0,0,&_getipnodebyname_3};
	VPL_Parameter _getipnodebyname_1 = { kPointerType,1,"char",1,1,&_getipnodebyname_2};
	VPL_ExtProcedure _getipnodebyname_F = {"getipnodebyname",getipnodebyname,&_getipnodebyname_1,&_getipnodebyname_R};

	VPL_Parameter _getipnodebyaddr_R = { kPointerType,20,"hostent",1,0,NULL};
	VPL_Parameter _getipnodebyaddr_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _getipnodebyaddr_3 = { kIntType,4,NULL,0,0,&_getipnodebyaddr_4};
	VPL_Parameter _getipnodebyaddr_2 = { kUnsignedType,4,NULL,0,0,&_getipnodebyaddr_3};
	VPL_Parameter _getipnodebyaddr_1 = { kPointerType,0,"void",1,1,&_getipnodebyaddr_2};
	VPL_ExtProcedure _getipnodebyaddr_F = {"getipnodebyaddr",getipnodebyaddr,&_getipnodebyaddr_1,&_getipnodebyaddr_R};

	VPL_Parameter _gethostbyname2_R = { kPointerType,20,"hostent",1,0,NULL};
	VPL_Parameter _gethostbyname2_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gethostbyname2_1 = { kPointerType,1,"char",1,1,&_gethostbyname2_2};
	VPL_ExtProcedure _gethostbyname2_F = {"gethostbyname2",gethostbyname2,&_gethostbyname2_1,&_gethostbyname2_R};

	VPL_Parameter _freehostent_1 = { kPointerType,20,"hostent",1,0,NULL};
	VPL_ExtProcedure _freehostent_F = {"freehostent",freehostent,&_freehostent_1,NULL};

	VPL_Parameter _setservent_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setservent_F = {"setservent",setservent,&_setservent_1,NULL};

	VPL_Parameter _setprotoent_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setprotoent_F = {"setprotoent",setprotoent,&_setprotoent_1,NULL};

	VPL_Parameter _setnetent_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setnetent_F = {"setnetent",setnetent,&_setnetent_1,NULL};

	VPL_Parameter _sethostent_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sethostent_F = {"sethostent",sethostent,&_sethostent_1,NULL};

	VPL_Parameter _getservent_R = { kPointerType,16,"servent",1,0,NULL};
	VPL_ExtProcedure _getservent_F = {"getservent",getservent,NULL,&_getservent_R};

	VPL_Parameter _getservbyport_R = { kPointerType,16,"servent",1,0,NULL};
	VPL_Parameter _getservbyport_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _getservbyport_1 = { kIntType,4,NULL,0,0,&_getservbyport_2};
	VPL_ExtProcedure _getservbyport_F = {"getservbyport",getservbyport,&_getservbyport_1,&_getservbyport_R};

	VPL_Parameter _getservbyname_R = { kPointerType,16,"servent",1,0,NULL};
	VPL_Parameter _getservbyname_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _getservbyname_1 = { kPointerType,1,"char",1,1,&_getservbyname_2};
	VPL_ExtProcedure _getservbyname_F = {"getservbyname",getservbyname,&_getservbyname_1,&_getservbyname_R};

	VPL_Parameter _getprotoent_R = { kPointerType,12,"protoent",1,0,NULL};
	VPL_ExtProcedure _getprotoent_F = {"getprotoent",getprotoent,NULL,&_getprotoent_R};

	VPL_Parameter _getprotobynumber_R = { kPointerType,12,"protoent",1,0,NULL};
	VPL_Parameter _getprotobynumber_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getprotobynumber_F = {"getprotobynumber",getprotobynumber,&_getprotobynumber_1,&_getprotobynumber_R};

	VPL_Parameter _getprotobyname_R = { kPointerType,12,"protoent",1,0,NULL};
	VPL_Parameter _getprotobyname_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _getprotobyname_F = {"getprotobyname",getprotobyname,&_getprotobyname_1,&_getprotobyname_R};

	VPL_Parameter _getnetent_R = { kPointerType,16,"netent",1,0,NULL};
	VPL_ExtProcedure _getnetent_F = {"getnetent",getnetent,NULL,&_getnetent_R};

	VPL_Parameter _getnetbyname_R = { kPointerType,16,"netent",1,0,NULL};
	VPL_Parameter _getnetbyname_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _getnetbyname_F = {"getnetbyname",getnetbyname,&_getnetbyname_1,&_getnetbyname_R};

	VPL_Parameter _getnetbyaddr_R = { kPointerType,16,"netent",1,0,NULL};
	VPL_Parameter _getnetbyaddr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getnetbyaddr_1 = { kUnsignedType,4,NULL,0,0,&_getnetbyaddr_2};
	VPL_ExtProcedure _getnetbyaddr_F = {"getnetbyaddr",getnetbyaddr,&_getnetbyaddr_1,&_getnetbyaddr_R};

	VPL_Parameter _getnameinfo_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getnameinfo_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getnameinfo_6 = { kUnsignedType,4,NULL,0,0,&_getnameinfo_7};
	VPL_Parameter _getnameinfo_5 = { kPointerType,1,"char",1,0,&_getnameinfo_6};
	VPL_Parameter _getnameinfo_4 = { kUnsignedType,4,NULL,0,0,&_getnameinfo_5};
	VPL_Parameter _getnameinfo_3 = { kPointerType,1,"char",1,0,&_getnameinfo_4};
	VPL_Parameter _getnameinfo_2 = { kUnsignedType,4,NULL,0,0,&_getnameinfo_3};
	VPL_Parameter _getnameinfo_1 = { kPointerType,20,"sockaddr",1,1,&_getnameinfo_2};
	VPL_ExtProcedure _getnameinfo_F = {"getnameinfo",getnameinfo,&_getnameinfo_1,&_getnameinfo_R};

	VPL_Parameter _gethostent_R = { kPointerType,20,"hostent",1,0,NULL};
	VPL_ExtProcedure _gethostent_F = {"gethostent",gethostent,NULL,&_gethostent_R};

	VPL_Parameter _gethostbyname_R = { kPointerType,20,"hostent",1,0,NULL};
	VPL_Parameter _gethostbyname_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _gethostbyname_F = {"gethostbyname",gethostbyname,&_gethostbyname_1,&_gethostbyname_R};

	VPL_Parameter _gethostbyaddr_R = { kPointerType,20,"hostent",1,0,NULL};
	VPL_Parameter _gethostbyaddr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gethostbyaddr_2 = { kUnsignedType,4,NULL,0,0,&_gethostbyaddr_3};
	VPL_Parameter _gethostbyaddr_1 = { kPointerType,0,"void",1,1,&_gethostbyaddr_2};
	VPL_ExtProcedure _gethostbyaddr_F = {"gethostbyaddr",gethostbyaddr,&_gethostbyaddr_1,&_gethostbyaddr_R};

	VPL_Parameter _getaddrinfo_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getaddrinfo_4 = { kPointerType,32,"addrinfo",2,0,NULL};
	VPL_Parameter _getaddrinfo_3 = { kPointerType,32,"addrinfo",1,1,&_getaddrinfo_4};
	VPL_Parameter _getaddrinfo_2 = { kPointerType,1,"char",1,1,&_getaddrinfo_3};
	VPL_Parameter _getaddrinfo_1 = { kPointerType,1,"char",1,1,&_getaddrinfo_2};
	VPL_ExtProcedure _getaddrinfo_F = {"getaddrinfo",getaddrinfo,&_getaddrinfo_1,&_getaddrinfo_R};

	VPL_Parameter _gai_strerror_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _gai_strerror_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _gai_strerror_F = {"gai_strerror",gai_strerror,&_gai_strerror_1,&_gai_strerror_R};

	VPL_Parameter _freeaddrinfo_1 = { kPointerType,32,"addrinfo",1,0,NULL};
	VPL_ExtProcedure _freeaddrinfo_F = {"freeaddrinfo",freeaddrinfo,&_freeaddrinfo_1,NULL};

	VPL_ExtProcedure _endservent_F = {"endservent",endservent,NULL,NULL};

	VPL_ExtProcedure _endprotoent_F = {"endprotoent",endprotoent,NULL,NULL};

	VPL_ExtProcedure _endnetent_F = {"endnetent",endnetent,NULL,NULL};

	VPL_ExtProcedure _endhostent_F = {"endhostent",endhostent,NULL,NULL};

	VPL_Parameter _map_fd_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _map_fd_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _map_fd_4 = { kIntType,4,NULL,0,0,&_map_fd_5};
	VPL_Parameter _map_fd_3 = { kPointerType,4,"unsigned int",1,0,&_map_fd_4};
	VPL_Parameter _map_fd_2 = { kUnsignedType,4,NULL,0,0,&_map_fd_3};
	VPL_Parameter _map_fd_1 = { kIntType,4,NULL,0,0,&_map_fd_2};
	VPL_ExtProcedure _map_fd_F = {"map_fd",map_fd,&_map_fd_1,&_map_fd_R};

	VPL_Parameter _inet_nsap_ntoa_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _inet_nsap_ntoa_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _inet_nsap_ntoa_2 = { kPointerType,1,"unsigned char",1,1,&_inet_nsap_ntoa_3};
	VPL_Parameter _inet_nsap_ntoa_1 = { kIntType,4,NULL,0,0,&_inet_nsap_ntoa_2};
	VPL_ExtProcedure _inet_nsap_ntoa_F = {"inet_nsap_ntoa",inet_nsap_ntoa,&_inet_nsap_ntoa_1,&_inet_nsap_ntoa_R};

	VPL_Parameter _inet_nsap_addr_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_nsap_addr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_nsap_addr_2 = { kPointerType,1,"unsigned char",1,0,&_inet_nsap_addr_3};
	VPL_Parameter _inet_nsap_addr_1 = { kPointerType,1,"char",1,1,&_inet_nsap_addr_2};
	VPL_ExtProcedure _inet_nsap_addr_F = {"inet_nsap_addr",inet_nsap_addr,&_inet_nsap_addr_1,&_inet_nsap_addr_R};

	VPL_Parameter _inet_neta_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _inet_neta_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_neta_2 = { kPointerType,1,"char",1,0,&_inet_neta_3};
	VPL_Parameter _inet_neta_1 = { kUnsignedType,4,NULL,0,0,&_inet_neta_2};
	VPL_ExtProcedure _inet_neta_F = {"inet_neta",inet_neta,&_inet_neta_1,&_inet_neta_R};

	VPL_Parameter _inet_net_pton_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_net_pton_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_net_pton_3 = { kPointerType,0,"void",1,0,&_inet_net_pton_4};
	VPL_Parameter _inet_net_pton_2 = { kPointerType,1,"char",1,1,&_inet_net_pton_3};
	VPL_Parameter _inet_net_pton_1 = { kIntType,4,NULL,0,0,&_inet_net_pton_2};
	VPL_ExtProcedure _inet_net_pton_F = {"inet_net_pton",inet_net_pton,&_inet_net_pton_1,&_inet_net_pton_R};

	VPL_Parameter _inet_net_ntop_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _inet_net_ntop_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_net_ntop_4 = { kPointerType,1,"char",1,0,&_inet_net_ntop_5};
	VPL_Parameter _inet_net_ntop_3 = { kIntType,4,NULL,0,0,&_inet_net_ntop_4};
	VPL_Parameter _inet_net_ntop_2 = { kPointerType,0,"void",1,1,&_inet_net_ntop_3};
	VPL_Parameter _inet_net_ntop_1 = { kIntType,4,NULL,0,0,&_inet_net_ntop_2};
	VPL_ExtProcedure _inet_net_ntop_F = {"inet_net_ntop",inet_net_ntop,&_inet_net_ntop_1,&_inet_net_ntop_R};

	VPL_Parameter _inet_network_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_network_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _inet_network_F = {"inet_network",inet_network,&_inet_network_1,&_inet_network_R};

	VPL_Parameter _inet_netof_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_netof_1 = { kStructureType,4,"in_addr",0,0,NULL};
	VPL_ExtProcedure _inet_netof_F = {"inet_netof",inet_netof,&_inet_netof_1,&_inet_netof_R};

	VPL_Parameter _inet_makeaddr_R = { kStructureType,4,"in_addr",0,0,NULL};
	VPL_Parameter _inet_makeaddr_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_makeaddr_1 = { kUnsignedType,4,NULL,0,0,&_inet_makeaddr_2};
	VPL_ExtProcedure _inet_makeaddr_F = {"inet_makeaddr",inet_makeaddr,&_inet_makeaddr_1,&_inet_makeaddr_R};

	VPL_Parameter _inet_lnaof_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_lnaof_1 = { kStructureType,4,"in_addr",0,0,NULL};
	VPL_ExtProcedure _inet_lnaof_F = {"inet_lnaof",inet_lnaof,&_inet_lnaof_1,&_inet_lnaof_R};

	VPL_Parameter _inet_aton_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_aton_2 = { kPointerType,4,"in_addr",1,0,NULL};
	VPL_Parameter _inet_aton_1 = { kPointerType,1,"char",1,1,&_inet_aton_2};
	VPL_ExtProcedure _inet_aton_F = {"inet_aton",inet_aton,&_inet_aton_1,&_inet_aton_R};

	VPL_Parameter _addr2ascii_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _addr2ascii_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _addr2ascii_3 = { kIntType,4,NULL,0,0,&_addr2ascii_4};
	VPL_Parameter _addr2ascii_2 = { kPointerType,0,"void",1,1,&_addr2ascii_3};
	VPL_Parameter _addr2ascii_1 = { kIntType,4,NULL,0,0,&_addr2ascii_2};
	VPL_ExtProcedure _addr2ascii_F = {"addr2ascii",addr2ascii,&_addr2ascii_1,&_addr2ascii_R};

	VPL_Parameter _ascii2addr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ascii2addr_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _ascii2addr_2 = { kPointerType,1,"char",1,1,&_ascii2addr_3};
	VPL_Parameter _ascii2addr_1 = { kIntType,4,NULL,0,0,&_ascii2addr_2};
	VPL_ExtProcedure _ascii2addr_F = {"ascii2addr",ascii2addr,&_ascii2addr_1,&_ascii2addr_R};

	VPL_Parameter _inet_pton_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_pton_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _inet_pton_2 = { kPointerType,1,"char",1,1,&_inet_pton_3};
	VPL_Parameter _inet_pton_1 = { kIntType,4,NULL,0,0,&_inet_pton_2};
	VPL_ExtProcedure _inet_pton_F = {"inet_pton",inet_pton,&_inet_pton_1,&_inet_pton_R};

	VPL_Parameter _inet_ntop_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _inet_ntop_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_ntop_3 = { kPointerType,1,"char",1,0,&_inet_ntop_4};
	VPL_Parameter _inet_ntop_2 = { kPointerType,0,"void",1,1,&_inet_ntop_3};
	VPL_Parameter _inet_ntop_1 = { kIntType,4,NULL,0,0,&_inet_ntop_2};
	VPL_ExtProcedure _inet_ntop_F = {"inet_ntop",inet_ntop,&_inet_ntop_1,&_inet_ntop_R};

	VPL_Parameter _inet_ntoa_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _inet_ntoa_1 = { kStructureType,4,"in_addr",0,0,NULL};
	VPL_ExtProcedure _inet_ntoa_F = {"inet_ntoa",inet_ntoa,&_inet_ntoa_1,&_inet_ntoa_R};

	VPL_Parameter _inet_addr_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet_addr_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _inet_addr_F = {"inet_addr",inet_addr,&_inet_addr_1,&_inet_addr_R};

	VPL_Parameter _inet6_rthdr_getflags_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_getflags_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_getflags_1 = { kPointerType,12,"cmsghdr",1,1,&_inet6_rthdr_getflags_2};
	VPL_ExtProcedure _inet6_rthdr_getflags_F = {"inet6_rthdr_getflags",inet6_rthdr_getflags,&_inet6_rthdr_getflags_1,&_inet6_rthdr_getflags_R};

	VPL_Parameter _inet6_rthdr_getaddr_R = { kPointerType,16,"in6_addr",1,0,NULL};
	VPL_Parameter _inet6_rthdr_getaddr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_getaddr_1 = { kPointerType,12,"cmsghdr",1,0,&_inet6_rthdr_getaddr_2};
	VPL_ExtProcedure _inet6_rthdr_getaddr_F = {"inet6_rthdr_getaddr",inet6_rthdr_getaddr,&_inet6_rthdr_getaddr_1,&_inet6_rthdr_getaddr_R};

	VPL_Parameter _inet6_rthdr_segments_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_segments_1 = { kPointerType,12,"cmsghdr",1,1,NULL};
	VPL_ExtProcedure _inet6_rthdr_segments_F = {"inet6_rthdr_segments",inet6_rthdr_segments,&_inet6_rthdr_segments_1,&_inet6_rthdr_segments_R};

	VPL_Parameter _inet6_rthdr_lasthop_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_lasthop_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_lasthop_1 = { kPointerType,12,"cmsghdr",1,0,&_inet6_rthdr_lasthop_2};
	VPL_ExtProcedure _inet6_rthdr_lasthop_F = {"inet6_rthdr_lasthop",inet6_rthdr_lasthop,&_inet6_rthdr_lasthop_1,&_inet6_rthdr_lasthop_R};

	VPL_Parameter _inet6_rthdr_add_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_add_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_add_2 = { kPointerType,16,"in6_addr",1,1,&_inet6_rthdr_add_3};
	VPL_Parameter _inet6_rthdr_add_1 = { kPointerType,12,"cmsghdr",1,0,&_inet6_rthdr_add_2};
	VPL_ExtProcedure _inet6_rthdr_add_F = {"inet6_rthdr_add",inet6_rthdr_add,&_inet6_rthdr_add_1,&_inet6_rthdr_add_R};

	VPL_Parameter _inet6_rthdr_init_R = { kPointerType,12,"cmsghdr",1,0,NULL};
	VPL_Parameter _inet6_rthdr_init_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_init_1 = { kPointerType,0,"void",1,0,&_inet6_rthdr_init_2};
	VPL_ExtProcedure _inet6_rthdr_init_F = {"inet6_rthdr_init",inet6_rthdr_init,&_inet6_rthdr_init_1,&_inet6_rthdr_init_R};

	VPL_Parameter _inet6_rthdr_space_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_space_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_rthdr_space_1 = { kIntType,4,NULL,0,0,&_inet6_rthdr_space_2};
	VPL_ExtProcedure _inet6_rthdr_space_F = {"inet6_rthdr_space",inet6_rthdr_space,&_inet6_rthdr_space_1,&_inet6_rthdr_space_R};

	VPL_Parameter _inet6_option_find_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_find_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_find_2 = { kPointerType,1,"unsigned char",2,0,&_inet6_option_find_3};
	VPL_Parameter _inet6_option_find_1 = { kPointerType,12,"cmsghdr",1,1,&_inet6_option_find_2};
	VPL_ExtProcedure _inet6_option_find_F = {"inet6_option_find",inet6_option_find,&_inet6_option_find_1,&_inet6_option_find_R};

	VPL_Parameter _inet6_option_next_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_next_2 = { kPointerType,1,"unsigned char",2,0,NULL};
	VPL_Parameter _inet6_option_next_1 = { kPointerType,12,"cmsghdr",1,1,&_inet6_option_next_2};
	VPL_ExtProcedure _inet6_option_next_F = {"inet6_option_next",inet6_option_next,&_inet6_option_next_1,&_inet6_option_next_R};

	VPL_Parameter _inet6_option_alloc_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _inet6_option_alloc_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_alloc_3 = { kIntType,4,NULL,0,0,&_inet6_option_alloc_4};
	VPL_Parameter _inet6_option_alloc_2 = { kIntType,4,NULL,0,0,&_inet6_option_alloc_3};
	VPL_Parameter _inet6_option_alloc_1 = { kPointerType,12,"cmsghdr",1,0,&_inet6_option_alloc_2};
	VPL_ExtProcedure _inet6_option_alloc_F = {"inet6_option_alloc",inet6_option_alloc,&_inet6_option_alloc_1,&_inet6_option_alloc_R};

	VPL_Parameter _inet6_option_append_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_append_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_append_3 = { kIntType,4,NULL,0,0,&_inet6_option_append_4};
	VPL_Parameter _inet6_option_append_2 = { kPointerType,1,"unsigned char",1,1,&_inet6_option_append_3};
	VPL_Parameter _inet6_option_append_1 = { kPointerType,12,"cmsghdr",1,0,&_inet6_option_append_2};
	VPL_ExtProcedure _inet6_option_append_F = {"inet6_option_append",inet6_option_append,&_inet6_option_append_1,&_inet6_option_append_R};

	VPL_Parameter _inet6_option_init_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_init_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_init_2 = { kPointerType,12,"cmsghdr",2,0,&_inet6_option_init_3};
	VPL_Parameter _inet6_option_init_1 = { kPointerType,0,"void",1,0,&_inet6_option_init_2};
	VPL_ExtProcedure _inet6_option_init_F = {"inet6_option_init",inet6_option_init,&_inet6_option_init_1,&_inet6_option_init_R};

	VPL_Parameter _inet6_option_space_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _inet6_option_space_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _inet6_option_space_F = {"inet6_option_space",inet6_option_space,&_inet6_option_space_1,&_inet6_option_space_R};

	VPL_Parameter _ioctl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ioctl_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ioctl_1 = { kIntType,4,NULL,0,0,&_ioctl_2};
	VPL_ExtProcedure _ioctl_F = {"ioctl",ioctl,&_ioctl_1,&_ioctl_R};

	VPL_Parameter _filesec_query_property_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _filesec_query_property_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _filesec_query_property_2 = { kEnumType,4,"29",0,0,&_filesec_query_property_3};
	VPL_Parameter _filesec_query_property_1 = { kPointerType,0,"_filesec",1,0,&_filesec_query_property_2};
	VPL_ExtProcedure _filesec_query_property_F = {"filesec_query_property",filesec_query_property,&_filesec_query_property_1,&_filesec_query_property_R};

	VPL_Parameter _filesec_set_property_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _filesec_set_property_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _filesec_set_property_2 = { kEnumType,4,"29",0,0,&_filesec_set_property_3};
	VPL_Parameter _filesec_set_property_1 = { kPointerType,0,"_filesec",1,0,&_filesec_set_property_2};
	VPL_ExtProcedure _filesec_set_property_F = {"filesec_set_property",filesec_set_property,&_filesec_set_property_1,&_filesec_set_property_R};

	VPL_Parameter _filesec_get_property_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _filesec_get_property_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _filesec_get_property_2 = { kEnumType,4,"29",0,0,&_filesec_get_property_3};
	VPL_Parameter _filesec_get_property_1 = { kPointerType,0,"_filesec",1,0,&_filesec_get_property_2};
	VPL_ExtProcedure _filesec_get_property_F = {"filesec_get_property",filesec_get_property,&_filesec_get_property_1,&_filesec_get_property_R};

	VPL_Parameter _filesec_free_1 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_ExtProcedure _filesec_free_F = {"filesec_free",filesec_free,&_filesec_free_1,NULL};

	VPL_Parameter _filesec_dup_R = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _filesec_dup_1 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_ExtProcedure _filesec_dup_F = {"filesec_dup",filesec_dup,&_filesec_dup_1,&_filesec_dup_R};

	VPL_Parameter _filesec_init_R = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_ExtProcedure _filesec_init_F = {"filesec_init",filesec_init,NULL,&_filesec_init_R};

	VPL_Parameter _flock_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _flock_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _flock_1 = { kIntType,4,NULL,0,0,&_flock_2};
	VPL_ExtProcedure _flock_F = {"flock",flock,&_flock_1,&_flock_R};

	VPL_Parameter _openx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _openx_np_3 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _openx_np_2 = { kIntType,4,NULL,0,0,&_openx_np_3};
	VPL_Parameter _openx_np_1 = { kPointerType,1,"char",1,1,&_openx_np_2};
	VPL_ExtProcedure _openx_np_F = {"openx_np",openx_np,&_openx_np_1,&_openx_np_R};

	VPL_Parameter _fcntl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fcntl_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fcntl_1 = { kIntType,4,NULL,0,0,&_fcntl_2};
	VPL_ExtProcedure _fcntl_F = {"fcntl",fcntl,&_fcntl_1,&_fcntl_R};

	VPL_Parameter _creat_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _creat_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _creat_1 = { kPointerType,1,"char",1,1,&_creat_2};
	VPL_ExtProcedure _creat_F = {"creat",creat,&_creat_1,&_creat_R};

	VPL_Parameter _open_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _open_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _open_1 = { kPointerType,1,"char",1,1,&_open_2};
	VPL_ExtProcedure _open_F = {"open",open,&_open_1,&_open_R};

	VPL_Parameter _umaskx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _umaskx_np_1 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_ExtProcedure _umaskx_np_F = {"umaskx_np",umaskx_np,&_umaskx_np_1,&_umaskx_np_R};

	VPL_Parameter _statx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _statx_np_3 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _statx_np_2 = { kPointerType,80,"stat",1,0,&_statx_np_3};
	VPL_Parameter _statx_np_1 = { kPointerType,1,"char",1,1,&_statx_np_2};
	VPL_ExtProcedure _statx_np_F = {"statx_np",statx_np,&_statx_np_1,&_statx_np_R};

	VPL_Parameter _mkfifox_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mkfifox_np_2 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _mkfifox_np_1 = { kPointerType,1,"char",1,1,&_mkfifox_np_2};
	VPL_ExtProcedure _mkfifox_np_F = {"mkfifox_np",mkfifox_np,&_mkfifox_np_1,&_mkfifox_np_R};

	VPL_Parameter _mkdirx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mkdirx_np_2 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _mkdirx_np_1 = { kPointerType,1,"char",1,1,&_mkdirx_np_2};
	VPL_ExtProcedure _mkdirx_np_F = {"mkdirx_np",mkdirx_np,&_mkdirx_np_1,&_mkdirx_np_R};

	VPL_Parameter _lstatx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lstatx_np_3 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _lstatx_np_2 = { kPointerType,80,"stat",1,0,&_lstatx_np_3};
	VPL_Parameter _lstatx_np_1 = { kPointerType,1,"char",1,1,&_lstatx_np_2};
	VPL_ExtProcedure _lstatx_np_F = {"lstatx_np",lstatx_np,&_lstatx_np_1,&_lstatx_np_R};

	VPL_Parameter _fstatx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fstatx_np_3 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _fstatx_np_2 = { kPointerType,80,"stat",1,0,&_fstatx_np_3};
	VPL_Parameter _fstatx_np_1 = { kIntType,4,NULL,0,0,&_fstatx_np_2};
	VPL_ExtProcedure _fstatx_np_F = {"fstatx_np",fstatx_np,&_fstatx_np_1,&_fstatx_np_R};

	VPL_Parameter _fchmodx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fchmodx_np_2 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _fchmodx_np_1 = { kIntType,4,NULL,0,0,&_fchmodx_np_2};
	VPL_ExtProcedure _fchmodx_np_F = {"fchmodx_np",fchmodx_np,&_fchmodx_np_1,&_fchmodx_np_R};

	VPL_Parameter _fchflags_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fchflags_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _fchflags_1 = { kIntType,4,NULL,0,0,&_fchflags_2};
	VPL_ExtProcedure _fchflags_F = {"fchflags",fchflags,&_fchflags_1,&_fchflags_R};

	VPL_Parameter _chmodx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _chmodx_np_2 = { kPointerType,0,"_filesec",1,0,NULL};
	VPL_Parameter _chmodx_np_1 = { kPointerType,1,"char",1,1,&_chmodx_np_2};
	VPL_ExtProcedure _chmodx_np_F = {"chmodx_np",chmodx_np,&_chmodx_np_1,&_chmodx_np_R};

	VPL_Parameter _chflags_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _chflags_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _chflags_1 = { kPointerType,1,"char",1,1,&_chflags_2};
	VPL_ExtProcedure _chflags_F = {"chflags",chflags,&_chflags_1,&_chflags_R};

	VPL_Parameter _umask_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _umask_1 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _umask_F = {"umask",umask,&_umask_1,&_umask_R};

	VPL_Parameter _stat_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _stat_2 = { kPointerType,80,"stat",1,0,NULL};
	VPL_Parameter _stat_1 = { kPointerType,1,"char",1,1,&_stat_2};
	VPL_ExtProcedure _stat_F = {"stat",stat,&_stat_1,&_stat_R};

	VPL_Parameter _mkfifo_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mkfifo_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _mkfifo_1 = { kPointerType,1,"char",1,1,&_mkfifo_2};
	VPL_ExtProcedure _mkfifo_F = {"mkfifo",mkfifo,&_mkfifo_1,&_mkfifo_R};

	VPL_Parameter _mkdir_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mkdir_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _mkdir_1 = { kPointerType,1,"char",1,1,&_mkdir_2};
	VPL_ExtProcedure _mkdir_F = {"mkdir",mkdir,&_mkdir_1,&_mkdir_R};

	VPL_Parameter _lstat_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lstat_2 = { kPointerType,80,"stat",1,0,NULL};
	VPL_Parameter _lstat_1 = { kPointerType,1,"char",1,1,&_lstat_2};
	VPL_ExtProcedure _lstat_F = {"lstat",lstat,&_lstat_1,&_lstat_R};

	VPL_Parameter _fstat_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fstat_2 = { kPointerType,80,"stat",1,0,NULL};
	VPL_Parameter _fstat_1 = { kIntType,4,NULL,0,0,&_fstat_2};
	VPL_ExtProcedure _fstat_F = {"fstat",fstat,&_fstat_1,&_fstat_R};

	VPL_Parameter _fchmod_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fchmod_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _fchmod_1 = { kIntType,4,NULL,0,0,&_fchmod_2};
	VPL_ExtProcedure _fchmod_F = {"fchmod",fchmod,&_fchmod_1,&_fchmod_R};

	VPL_Parameter _chmod_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _chmod_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _chmod_1 = { kPointerType,1,"char",1,1,&_chmod_2};
	VPL_ExtProcedure _chmod_F = {"chmod",chmod,&_chmod_1,&_chmod_R};

	VPL_Parameter _times_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _times_1 = { kPointerType,16,"tms",1,0,NULL};
	VPL_ExtProcedure _times_F = {"times",times,&_times_1,&_times_R};

	VPL_Parameter _getvfsbyname_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getvfsbyname_2 = { kPointerType,40,"vfsconf",1,0,NULL};
	VPL_Parameter _getvfsbyname_1 = { kPointerType,1,"char",1,1,&_getvfsbyname_2};
	VPL_ExtProcedure _getvfsbyname_F = {"getvfsbyname",getvfsbyname,&_getvfsbyname_1,&_getvfsbyname_R};

	VPL_Parameter _unmount_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _unmount_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _unmount_1 = { kPointerType,1,"char",1,1,&_unmount_2};
	VPL_ExtProcedure _unmount_F = {"unmount",unmount,&_unmount_1,&_unmount_R};

	VPL_Parameter _statfs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _statfs_2 = { kPointerType,288,"statfs",1,0,NULL};
	VPL_Parameter _statfs_1 = { kPointerType,1,"char",1,1,&_statfs_2};
	VPL_ExtProcedure _statfs_F = {"statfs",statfs,&_statfs_1,&_statfs_R};

	VPL_Parameter _mount_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mount_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _mount_3 = { kIntType,4,NULL,0,0,&_mount_4};
	VPL_Parameter _mount_2 = { kPointerType,1,"char",1,1,&_mount_3};
	VPL_Parameter _mount_1 = { kPointerType,1,"char",1,1,&_mount_2};
	VPL_ExtProcedure _mount_F = {"mount",mount,&_mount_1,&_mount_R};

	VPL_Parameter _getmntinfo_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getmntinfo_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getmntinfo_1 = { kPointerType,288,"statfs",2,0,&_getmntinfo_2};
	VPL_ExtProcedure _getmntinfo_F = {"getmntinfo",getmntinfo,&_getmntinfo_1,&_getmntinfo_R};

	VPL_Parameter _getfsstat_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getfsstat_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getfsstat_2 = { kIntType,4,NULL,0,0,&_getfsstat_3};
	VPL_Parameter _getfsstat_1 = { kPointerType,288,"statfs",1,0,&_getfsstat_2};
	VPL_ExtProcedure _getfsstat_F = {"getfsstat",getfsstat,&_getfsstat_1,&_getfsstat_R};

	VPL_Parameter _getfh_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getfh_2 = { kPointerType,68,"fhandle",1,0,NULL};
	VPL_Parameter _getfh_1 = { kPointerType,1,"char",1,1,&_getfh_2};
	VPL_ExtProcedure _getfh_F = {"getfh",getfh,&_getfh_1,&_getfh_R};

	VPL_Parameter _fstatfs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fstatfs_2 = { kPointerType,288,"statfs",1,0,NULL};
	VPL_Parameter _fstatfs_1 = { kIntType,4,NULL,0,0,&_fstatfs_2};
	VPL_ExtProcedure _fstatfs_F = {"fstatfs",fstatfs,&_fstatfs_1,&_fstatfs_R};

	VPL_Parameter _fhopen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fhopen_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fhopen_1 = { kPointerType,68,"fhandle",1,1,&_fhopen_2};
	VPL_ExtProcedure _fhopen_F = {"fhopen",fhopen,&_fhopen_1,&_fhopen_R};

	VPL_Parameter _setaudit_addr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setaudit_addr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setaudit_addr_1 = { kPointerType,40,"auditinfo_addr",1,1,&_setaudit_addr_2};
	VPL_ExtProcedure _setaudit_addr_F = {"setaudit_addr",setaudit_addr,&_setaudit_addr_1,&_setaudit_addr_R};

	VPL_Parameter _getaudit_addr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getaudit_addr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getaudit_addr_1 = { kPointerType,40,"auditinfo_addr",1,0,&_getaudit_addr_2};
	VPL_ExtProcedure _getaudit_addr_F = {"getaudit_addr",getaudit_addr,&_getaudit_addr_1,&_getaudit_addr_R};

	VPL_Parameter _setaudit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setaudit_1 = { kPointerType,24,"auditinfo",1,1,NULL};
	VPL_ExtProcedure _setaudit_F = {"setaudit",setaudit,&_setaudit_1,&_setaudit_R};

	VPL_Parameter _getaudit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getaudit_1 = { kPointerType,24,"auditinfo",1,0,NULL};
	VPL_ExtProcedure _getaudit_F = {"getaudit",getaudit,&_getaudit_1,&_getaudit_R};

	VPL_Parameter _setauid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setauid_1 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_ExtProcedure _setauid_F = {"setauid",setauid,&_setauid_1,&_setauid_R};

	VPL_Parameter _getauid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getauid_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _getauid_F = {"getauid",getauid,&_getauid_1,&_getauid_R};

	VPL_Parameter _auditctl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _auditctl_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _auditctl_F = {"auditctl",auditctl,&_auditctl_1,&_auditctl_R};

	VPL_Parameter _auditon_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _auditon_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _auditon_2 = { kPointerType,0,"void",1,0,&_auditon_3};
	VPL_Parameter _auditon_1 = { kIntType,4,NULL,0,0,&_auditon_2};
	VPL_ExtProcedure _auditon_F = {"auditon",auditon,&_auditon_1,&_auditon_R};

	VPL_Parameter _audit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _audit_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _audit_1 = { kPointerType,0,"void",1,1,&_audit_2};
	VPL_ExtProcedure _audit_F = {"audit",audit,&_audit_1,&_audit_R};

	VPL_Parameter _socketpair_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _socketpair_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _socketpair_3 = { kIntType,4,NULL,0,0,&_socketpair_4};
	VPL_Parameter _socketpair_2 = { kIntType,4,NULL,0,0,&_socketpair_3};
	VPL_Parameter _socketpair_1 = { kIntType,4,NULL,0,0,&_socketpair_2};
	VPL_ExtProcedure _socketpair_F = {"socketpair",socketpair,&_socketpair_1,&_socketpair_R};

	VPL_Parameter _socket_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _socket_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _socket_2 = { kIntType,4,NULL,0,0,&_socket_3};
	VPL_Parameter _socket_1 = { kIntType,4,NULL,0,0,&_socket_2};
	VPL_ExtProcedure _socket_F = {"socket",socket,&_socket_1,&_socket_R};

	VPL_Parameter _shutdown_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _shutdown_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _shutdown_1 = { kIntType,4,NULL,0,0,&_shutdown_2};
	VPL_ExtProcedure _shutdown_F = {"shutdown",shutdown,&_shutdown_1,&_shutdown_R};

	VPL_Parameter _setsockopt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setsockopt_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _setsockopt_4 = { kPointerType,0,"void",1,1,&_setsockopt_5};
	VPL_Parameter _setsockopt_3 = { kIntType,4,NULL,0,0,&_setsockopt_4};
	VPL_Parameter _setsockopt_2 = { kIntType,4,NULL,0,0,&_setsockopt_3};
	VPL_Parameter _setsockopt_1 = { kIntType,4,NULL,0,0,&_setsockopt_2};
	VPL_ExtProcedure _setsockopt_F = {"setsockopt",setsockopt,&_setsockopt_1,&_setsockopt_R};

	VPL_Parameter _sendto_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sendto_6 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _sendto_5 = { kPointerType,20,"sockaddr",1,1,&_sendto_6};
	VPL_Parameter _sendto_4 = { kIntType,4,NULL,0,0,&_sendto_5};
	VPL_Parameter _sendto_3 = { kUnsignedType,4,NULL,0,0,&_sendto_4};
	VPL_Parameter _sendto_2 = { kPointerType,0,"void",1,1,&_sendto_3};
	VPL_Parameter _sendto_1 = { kIntType,4,NULL,0,0,&_sendto_2};
	VPL_ExtProcedure _sendto_F = {"sendto",sendto,&_sendto_1,&_sendto_R};

	VPL_Parameter _sendmsg_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sendmsg_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sendmsg_2 = { kPointerType,28,"msghdr",1,1,&_sendmsg_3};
	VPL_Parameter _sendmsg_1 = { kIntType,4,NULL,0,0,&_sendmsg_2};
	VPL_ExtProcedure _sendmsg_F = {"sendmsg",sendmsg,&_sendmsg_1,&_sendmsg_R};

	VPL_Parameter _send_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _send_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _send_3 = { kUnsignedType,4,NULL,0,0,&_send_4};
	VPL_Parameter _send_2 = { kPointerType,0,"void",1,1,&_send_3};
	VPL_Parameter _send_1 = { kIntType,4,NULL,0,0,&_send_2};
	VPL_ExtProcedure _send_F = {"send",send,&_send_1,&_send_R};

	VPL_Parameter _recvmsg_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _recvmsg_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _recvmsg_2 = { kPointerType,28,"msghdr",1,0,&_recvmsg_3};
	VPL_Parameter _recvmsg_1 = { kIntType,4,NULL,0,0,&_recvmsg_2};
	VPL_ExtProcedure _recvmsg_F = {"recvmsg",recvmsg,&_recvmsg_1,&_recvmsg_R};

	VPL_Parameter _recvfrom_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _recvfrom_6 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _recvfrom_5 = { kPointerType,20,"sockaddr",1,0,&_recvfrom_6};
	VPL_Parameter _recvfrom_4 = { kIntType,4,NULL,0,0,&_recvfrom_5};
	VPL_Parameter _recvfrom_3 = { kUnsignedType,4,NULL,0,0,&_recvfrom_4};
	VPL_Parameter _recvfrom_2 = { kPointerType,0,"void",1,0,&_recvfrom_3};
	VPL_Parameter _recvfrom_1 = { kIntType,4,NULL,0,0,&_recvfrom_2};
	VPL_ExtProcedure _recvfrom_F = {"recvfrom",recvfrom,&_recvfrom_1,&_recvfrom_R};

	VPL_Parameter _recv_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _recv_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _recv_3 = { kUnsignedType,4,NULL,0,0,&_recv_4};
	VPL_Parameter _recv_2 = { kPointerType,0,"void",1,0,&_recv_3};
	VPL_Parameter _recv_1 = { kIntType,4,NULL,0,0,&_recv_2};
	VPL_ExtProcedure _recv_F = {"recv",recv,&_recv_1,&_recv_R};

	VPL_Parameter _listen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _listen_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _listen_1 = { kIntType,4,NULL,0,0,&_listen_2};
	VPL_ExtProcedure _listen_F = {"listen",listen,&_listen_1,&_listen_R};

	VPL_Parameter _getsockopt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getsockopt_5 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _getsockopt_4 = { kPointerType,0,"void",1,0,&_getsockopt_5};
	VPL_Parameter _getsockopt_3 = { kIntType,4,NULL,0,0,&_getsockopt_4};
	VPL_Parameter _getsockopt_2 = { kIntType,4,NULL,0,0,&_getsockopt_3};
	VPL_Parameter _getsockopt_1 = { kIntType,4,NULL,0,0,&_getsockopt_2};
	VPL_ExtProcedure _getsockopt_F = {"getsockopt",getsockopt,&_getsockopt_1,&_getsockopt_R};

	VPL_Parameter _getsockname_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getsockname_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _getsockname_2 = { kPointerType,20,"sockaddr",1,0,&_getsockname_3};
	VPL_Parameter _getsockname_1 = { kIntType,4,NULL,0,0,&_getsockname_2};
	VPL_ExtProcedure _getsockname_F = {"getsockname",getsockname,&_getsockname_1,&_getsockname_R};

	VPL_Parameter _getpeername_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getpeername_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _getpeername_2 = { kPointerType,20,"sockaddr",1,0,&_getpeername_3};
	VPL_Parameter _getpeername_1 = { kIntType,4,NULL,0,0,&_getpeername_2};
	VPL_ExtProcedure _getpeername_F = {"getpeername",getpeername,&_getpeername_1,&_getpeername_R};

	VPL_Parameter _connect_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _connect_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _connect_2 = { kPointerType,20,"sockaddr",1,1,&_connect_3};
	VPL_Parameter _connect_1 = { kIntType,4,NULL,0,0,&_connect_2};
	VPL_ExtProcedure _connect_F = {"connect",connect,&_connect_1,&_connect_R};

	VPL_Parameter _bind_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _bind_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _bind_2 = { kPointerType,20,"sockaddr",1,1,&_bind_3};
	VPL_Parameter _bind_1 = { kIntType,4,NULL,0,0,&_bind_2};
	VPL_ExtProcedure _bind_F = {"bind",bind,&_bind_1,&_bind_R};

	VPL_Parameter _accept_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _accept_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _accept_2 = { kPointerType,20,"sockaddr",1,0,&_accept_3};
	VPL_Parameter _accept_1 = { kIntType,4,NULL,0,0,&_accept_2};
	VPL_ExtProcedure _accept_F = {"accept",accept,&_accept_1,&_accept_R};

	VPL_Parameter _strtouq_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strtouq_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtouq_2 = { kPointerType,1,"char",2,0,&_strtouq_3};
	VPL_Parameter _strtouq_1 = { kPointerType,1,"char",1,1,&_strtouq_2};
	VPL_ExtProcedure _strtouq_F = {"strtouq",strtouq,&_strtouq_1,&_strtouq_R};

	VPL_Parameter _strtoq_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtoq_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtoq_2 = { kPointerType,1,"char",2,0,&_strtoq_3};
	VPL_Parameter _strtoq_1 = { kPointerType,1,"char",1,1,&_strtoq_2};
	VPL_ExtProcedure _strtoq_F = {"strtoq",strtoq,&_strtoq_1,&_strtoq_R};

	VPL_Parameter _reallocf_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _reallocf_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _reallocf_1 = { kPointerType,0,"void",1,0,&_reallocf_2};
	VPL_ExtProcedure _reallocf_F = {"reallocf",reallocf,&_reallocf_1,&_reallocf_R};

	VPL_Parameter _rand_r_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rand_r_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _rand_r_F = {"rand_r",rand_r,&_rand_r_1,&_rand_r_R};

	VPL_ExtProcedure _srandomdev_F = {"srandomdev",srandomdev,NULL,NULL};

	VPL_ExtProcedure _sranddev_F = {"sranddev",sranddev,NULL,NULL};

	VPL_Parameter _sradixsort_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sradixsort_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _sradixsort_3 = { kPointerType,1,"unsigned char",1,1,&_sradixsort_4};
	VPL_Parameter _sradixsort_2 = { kIntType,4,NULL,0,0,&_sradixsort_3};
	VPL_Parameter _sradixsort_1 = { kPointerType,1,"unsigned char",2,0,&_sradixsort_2};
	VPL_ExtProcedure _sradixsort_F = {"sradixsort",sradixsort,&_sradixsort_1,&_sradixsort_R};

	VPL_Parameter _setprogname_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _setprogname_F = {"setprogname",setprogname,&_setprogname_1,NULL};

	VPL_Parameter _radixsort_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _radixsort_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _radixsort_3 = { kPointerType,1,"unsigned char",1,1,&_radixsort_4};
	VPL_Parameter _radixsort_2 = { kIntType,4,NULL,0,0,&_radixsort_3};
	VPL_Parameter _radixsort_1 = { kPointerType,1,"unsigned char",2,0,&_radixsort_2};
	VPL_ExtProcedure _radixsort_F = {"radixsort",radixsort,&_radixsort_1,&_radixsort_R};

	VPL_Parameter _qsort_r_5 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _qsort_r_4 = { kPointerType,0,"void",1,0,&_qsort_r_5};
	VPL_Parameter _qsort_r_3 = { kUnsignedType,4,NULL,0,0,&_qsort_r_4};
	VPL_Parameter _qsort_r_2 = { kUnsignedType,4,NULL,0,0,&_qsort_r_3};
	VPL_Parameter _qsort_r_1 = { kPointerType,0,"void",1,0,&_qsort_r_2};
	VPL_ExtProcedure _qsort_r_F = {"qsort_r",qsort_r,&_qsort_r_1,NULL};

	VPL_Parameter _mergesort_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mergesort_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _mergesort_3 = { kUnsignedType,4,NULL,0,0,&_mergesort_4};
	VPL_Parameter _mergesort_2 = { kUnsignedType,4,NULL,0,0,&_mergesort_3};
	VPL_Parameter _mergesort_1 = { kPointerType,0,"void",1,0,&_mergesort_2};
	VPL_ExtProcedure _mergesort_F = {"mergesort",mergesort,&_mergesort_1,&_mergesort_R};

	VPL_Parameter _heapsort_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _heapsort_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _heapsort_3 = { kUnsignedType,4,NULL,0,0,&_heapsort_4};
	VPL_Parameter _heapsort_2 = { kUnsignedType,4,NULL,0,0,&_heapsort_3};
	VPL_Parameter _heapsort_1 = { kPointerType,0,"void",1,0,&_heapsort_2};
	VPL_ExtProcedure _heapsort_F = {"heapsort",heapsort,&_heapsort_1,&_heapsort_R};

	VPL_Parameter _getprogname_R = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _getprogname_F = {"getprogname",getprogname,NULL,&_getprogname_R};

	VPL_Parameter _getloadavg_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getloadavg_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getloadavg_1 = { kPointerType,8,"double",1,0,&_getloadavg_2};
	VPL_ExtProcedure _getloadavg_F = {"getloadavg",getloadavg,&_getloadavg_1,&_getloadavg_R};

	VPL_Parameter _getbsize_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _getbsize_2 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _getbsize_1 = { kPointerType,4,"int",1,0,&_getbsize_2};
	VPL_ExtProcedure _getbsize_F = {"getbsize",getbsize,&_getbsize_1,&_getbsize_R};

	VPL_Parameter _devname_r_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _devname_r_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _devname_r_3 = { kPointerType,1,"char",1,0,&_devname_r_4};
	VPL_Parameter _devname_r_2 = { kUnsignedType,2,NULL,0,0,&_devname_r_3};
	VPL_Parameter _devname_r_1 = { kIntType,4,NULL,0,0,&_devname_r_2};
	VPL_ExtProcedure _devname_r_F = {"devname_r",devname_r,&_devname_r_1,&_devname_r_R};

	VPL_Parameter _devname_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _devname_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _devname_1 = { kIntType,4,NULL,0,0,&_devname_2};
	VPL_ExtProcedure _devname_F = {"devname",devname,&_devname_1,&_devname_R};

	VPL_Parameter _daemon_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _daemon_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _daemon_1 = { kIntType,4,NULL,0,0,&_daemon_2};
	VPL_ExtProcedure _daemon_F = {"daemon",daemon,&_daemon_1,&_daemon_R};

	VPL_Parameter _cgetustr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetustr_3 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _cgetustr_2 = { kPointerType,1,"char",1,1,&_cgetustr_3};
	VPL_Parameter _cgetustr_1 = { kPointerType,1,"char",1,0,&_cgetustr_2};
	VPL_ExtProcedure _cgetustr_F = {"cgetustr",cgetustr,&_cgetustr_1,&_cgetustr_R};

	VPL_Parameter _cgetstr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetstr_3 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _cgetstr_2 = { kPointerType,1,"char",1,1,&_cgetstr_3};
	VPL_Parameter _cgetstr_1 = { kPointerType,1,"char",1,0,&_cgetstr_2};
	VPL_ExtProcedure _cgetstr_F = {"cgetstr",cgetstr,&_cgetstr_1,&_cgetstr_R};

	VPL_Parameter _cgetset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetset_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _cgetset_F = {"cgetset",cgetset,&_cgetset_1,&_cgetset_R};

	VPL_Parameter _cgetnum_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetnum_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _cgetnum_2 = { kPointerType,1,"char",1,1,&_cgetnum_3};
	VPL_Parameter _cgetnum_1 = { kPointerType,1,"char",1,0,&_cgetnum_2};
	VPL_ExtProcedure _cgetnum_F = {"cgetnum",cgetnum,&_cgetnum_1,&_cgetnum_R};

	VPL_Parameter _cgetnext_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetnext_2 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _cgetnext_1 = { kPointerType,1,"char",2,0,&_cgetnext_2};
	VPL_ExtProcedure _cgetnext_F = {"cgetnext",cgetnext,&_cgetnext_1,&_cgetnext_R};

	VPL_Parameter _cgetmatch_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetmatch_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _cgetmatch_1 = { kPointerType,1,"char",1,1,&_cgetmatch_2};
	VPL_ExtProcedure _cgetmatch_F = {"cgetmatch",cgetmatch,&_cgetmatch_1,&_cgetmatch_R};

	VPL_Parameter _cgetfirst_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetfirst_2 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _cgetfirst_1 = { kPointerType,1,"char",2,0,&_cgetfirst_2};
	VPL_ExtProcedure _cgetfirst_F = {"cgetfirst",cgetfirst,&_cgetfirst_1,&_cgetfirst_R};

	VPL_Parameter _cgetent_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetent_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _cgetent_2 = { kPointerType,1,"char",2,0,&_cgetent_3};
	VPL_Parameter _cgetent_1 = { kPointerType,1,"char",2,0,&_cgetent_2};
	VPL_ExtProcedure _cgetent_F = {"cgetent",cgetent,&_cgetent_1,&_cgetent_R};

	VPL_Parameter _cgetclose_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _cgetclose_F = {"cgetclose",cgetclose,NULL,&_cgetclose_R};

	VPL_Parameter _cgetcap_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _cgetcap_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _cgetcap_2 = { kPointerType,1,"char",1,1,&_cgetcap_3};
	VPL_Parameter _cgetcap_1 = { kPointerType,1,"char",1,0,&_cgetcap_2};
	VPL_ExtProcedure _cgetcap_F = {"cgetcap",cgetcap,&_cgetcap_1,&_cgetcap_R};

	VPL_ExtProcedure _arc4random_stir_F = {"arc4random_stir",arc4random_stir,NULL,NULL};

	VPL_Parameter _arc4random_addrandom_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _arc4random_addrandom_1 = { kPointerType,1,"unsigned char",1,0,&_arc4random_addrandom_2};
	VPL_ExtProcedure _arc4random_addrandom_F = {"arc4random_addrandom",arc4random_addrandom,&_arc4random_addrandom_1,NULL};

	VPL_Parameter _arc4random_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _arc4random_F = {"arc4random",arc4random,NULL,&_arc4random_R};

	VPL_Parameter _unsetenv_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _unsetenv_F = {"unsetenv",unsetenv,&_unsetenv_1,NULL};

	VPL_Parameter _unlockpt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _unlockpt_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _unlockpt_F = {"unlockpt",unlockpt,&_unlockpt_1,&_unlockpt_R};

	VPL_Parameter _srandom_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _srandom_F = {"srandom",srandom,&_srandom_1,NULL};

	VPL_Parameter _srand48_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _srand48_F = {"srand48",srand48,&_srand48_1,NULL};

	VPL_Parameter _setstate_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _setstate_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _setstate_F = {"setstate",setstate,&_setstate_1,&_setstate_R};

	VPL_Parameter _setenv_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setenv_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setenv_2 = { kPointerType,1,"char",1,1,&_setenv_3};
	VPL_Parameter _setenv_1 = { kPointerType,1,"char",1,1,&_setenv_2};
	VPL_ExtProcedure _setenv_F = {"setenv",setenv,&_setenv_1,&_setenv_R};

	VPL_Parameter _seed48_R = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_Parameter _seed48_1 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_ExtProcedure _seed48_F = {"seed48",seed48,&_seed48_1,&_seed48_R};

	VPL_Parameter _realpath_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _realpath_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _realpath_1 = { kPointerType,1,"char",1,1,&_realpath_2};
	VPL_ExtProcedure _realpath_F = {"realpath",realpath,&_realpath_1,&_realpath_R};

	VPL_Parameter _random_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _random_F = {"random",random,NULL,&_random_R};

	VPL_Parameter _putenv_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _putenv_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _putenv_F = {"putenv",putenv,&_putenv_1,&_putenv_R};

	VPL_Parameter _ptsname_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ptsname_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ptsname_F = {"ptsname",ptsname,&_ptsname_1,&_ptsname_R};

	VPL_Parameter _posix_openpt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _posix_openpt_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _posix_openpt_F = {"posix_openpt",posix_openpt,&_posix_openpt_1,&_posix_openpt_R};

	VPL_Parameter _nrand48_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _nrand48_1 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_ExtProcedure _nrand48_F = {"nrand48",nrand48,&_nrand48_1,&_nrand48_R};

	VPL_Parameter _mrand48_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _mrand48_F = {"mrand48",mrand48,NULL,&_mrand48_R};

	VPL_Parameter _lrand48_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _lrand48_F = {"lrand48",lrand48,NULL,&_lrand48_R};

	VPL_Parameter _lcong48_1 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_ExtProcedure _lcong48_F = {"lcong48",lcong48,&_lcong48_1,NULL};

	VPL_Parameter _l64a_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _l64a_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _l64a_F = {"l64a",l64a,&_l64a_1,&_l64a_R};

	VPL_Parameter _jrand48_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _jrand48_1 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_ExtProcedure _jrand48_F = {"jrand48",jrand48,&_jrand48_1,&_jrand48_R};

	VPL_Parameter _initstate_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _initstate_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _initstate_2 = { kPointerType,1,"char",1,0,&_initstate_3};
	VPL_Parameter _initstate_1 = { kUnsignedType,4,NULL,0,0,&_initstate_2};
	VPL_ExtProcedure _initstate_F = {"initstate",initstate,&_initstate_1,&_initstate_R};

	VPL_Parameter _grantpt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _grantpt_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _grantpt_F = {"grantpt",grantpt,&_grantpt_1,&_grantpt_R};

	VPL_Parameter _gcvt_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _gcvt_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _gcvt_2 = { kIntType,4,NULL,0,0,&_gcvt_3};
	VPL_Parameter _gcvt_1 = { kFloatType,8,NULL,0,0,&_gcvt_2};
	VPL_ExtProcedure _gcvt_F = {"gcvt",gcvt,&_gcvt_1,&_gcvt_R};

	VPL_Parameter _fcvt_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _fcvt_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _fcvt_3 = { kPointerType,4,"int",1,0,&_fcvt_4};
	VPL_Parameter _fcvt_2 = { kIntType,4,NULL,0,0,&_fcvt_3};
	VPL_Parameter _fcvt_1 = { kFloatType,8,NULL,0,0,&_fcvt_2};
	VPL_ExtProcedure _fcvt_F = {"fcvt",fcvt,&_fcvt_1,&_fcvt_R};

	VPL_Parameter _erand48_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _erand48_1 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_ExtProcedure _erand48_F = {"erand48",erand48,&_erand48_1,&_erand48_R};

	VPL_Parameter _ecvt_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ecvt_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _ecvt_3 = { kPointerType,4,"int",1,0,&_ecvt_4};
	VPL_Parameter _ecvt_2 = { kIntType,4,NULL,0,0,&_ecvt_3};
	VPL_Parameter _ecvt_1 = { kFloatType,8,NULL,0,0,&_ecvt_2};
	VPL_ExtProcedure _ecvt_F = {"ecvt",ecvt,&_ecvt_1,&_ecvt_R};

	VPL_Parameter _drand48_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _drand48_F = {"drand48",drand48,NULL,&_drand48_R};

	VPL_Parameter _a64l_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _a64l_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _a64l_F = {"a64l",a64l,&_a64l_1,&_a64l_R};

	VPL_Parameter _wctomb_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _wctomb_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _wctomb_1 = { kPointerType,1,"char",1,0,&_wctomb_2};
	VPL_ExtProcedure _wctomb_F = {"wctomb",wctomb,&_wctomb_1,&_wctomb_R};

	VPL_Parameter _wcstombs_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _wcstombs_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _wcstombs_2 = { kPointerType,4,"int",1,1,&_wcstombs_3};
	VPL_Parameter _wcstombs_1 = { kPointerType,1,"char",1,0,&_wcstombs_2};
	VPL_ExtProcedure _wcstombs_F = {"wcstombs",wcstombs,&_wcstombs_1,&_wcstombs_R};

	VPL_Parameter _system_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _system_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _system_F = {"system",system,&_system_1,&_system_R};

	VPL_Parameter _strtoull_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strtoull_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtoull_2 = { kPointerType,1,"char",2,0,&_strtoull_3};
	VPL_Parameter _strtoull_1 = { kPointerType,1,"char",1,1,&_strtoull_2};
	VPL_ExtProcedure _strtoull_F = {"strtoull",strtoull,&_strtoull_1,&_strtoull_R};

	VPL_Parameter _strtoul_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strtoul_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtoul_2 = { kPointerType,1,"char",2,0,&_strtoul_3};
	VPL_Parameter _strtoul_1 = { kPointerType,1,"char",1,1,&_strtoul_2};
	VPL_ExtProcedure _strtoul_F = {"strtoul",strtoul,&_strtoul_1,&_strtoul_R};

	VPL_Parameter _strtoll_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtoll_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtoll_2 = { kPointerType,1,"char",2,0,&_strtoll_3};
	VPL_Parameter _strtoll_1 = { kPointerType,1,"char",1,1,&_strtoll_2};
	VPL_ExtProcedure _strtoll_F = {"strtoll",strtoll,&_strtoll_1,&_strtoll_R};

	VPL_Parameter _strtold_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _strtold_2 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _strtold_1 = { kPointerType,1,"char",1,1,&_strtold_2};
	VPL_ExtProcedure _strtold_F = {"strtold",strtold,&_strtold_1,&_strtold_R};

	VPL_Parameter _strtol_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtol_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtol_2 = { kPointerType,1,"char",2,0,&_strtol_3};
	VPL_Parameter _strtol_1 = { kPointerType,1,"char",1,1,&_strtol_2};
	VPL_ExtProcedure _strtol_F = {"strtol",strtol,&_strtol_1,&_strtol_R};

	VPL_Parameter _strtof_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _strtof_2 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _strtof_1 = { kPointerType,1,"char",1,1,&_strtof_2};
	VPL_ExtProcedure _strtof_F = {"strtof",strtof,&_strtof_1,&_strtof_R};

	VPL_Parameter _strtod_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _strtod_2 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _strtod_1 = { kPointerType,1,"char",1,1,&_strtod_2};
	VPL_ExtProcedure _strtod_F = {"strtod",strtod,&_strtod_1,&_strtod_R};

	VPL_Parameter _srand_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _srand_F = {"srand",srand,&_srand_1,NULL};

	VPL_Parameter _realloc_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _realloc_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _realloc_1 = { kPointerType,0,"void",1,0,&_realloc_2};
	VPL_ExtProcedure _realloc_F = {"realloc",realloc,&_realloc_1,&_realloc_R};

	VPL_Parameter _rand_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _rand_F = {"rand",rand,NULL,&_rand_R};

	VPL_Parameter _qsort_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _qsort_3 = { kUnsignedType,4,NULL,0,0,&_qsort_4};
	VPL_Parameter _qsort_2 = { kUnsignedType,4,NULL,0,0,&_qsort_3};
	VPL_Parameter _qsort_1 = { kPointerType,0,"void",1,0,&_qsort_2};
	VPL_ExtProcedure _qsort_F = {"qsort",qsort,&_qsort_1,NULL};

	VPL_Parameter _mbtowc_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mbtowc_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mbtowc_2 = { kPointerType,1,"char",1,1,&_mbtowc_3};
	VPL_Parameter _mbtowc_1 = { kPointerType,4,"int",1,0,&_mbtowc_2};
	VPL_ExtProcedure _mbtowc_F = {"mbtowc",mbtowc,&_mbtowc_1,&_mbtowc_R};

	VPL_Parameter _mbstowcs_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mbstowcs_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mbstowcs_2 = { kPointerType,1,"char",1,1,&_mbstowcs_3};
	VPL_Parameter _mbstowcs_1 = { kPointerType,4,"int",1,0,&_mbstowcs_2};
	VPL_ExtProcedure _mbstowcs_F = {"mbstowcs",mbstowcs,&_mbstowcs_1,&_mbstowcs_R};

	VPL_Parameter _mblen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mblen_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _mblen_1 = { kPointerType,1,"char",1,1,&_mblen_2};
	VPL_ExtProcedure _mblen_F = {"mblen",mblen,&_mblen_1,&_mblen_R};

	VPL_Parameter _malloc_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _malloc_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _malloc_F = {"malloc",malloc,&_malloc_1,&_malloc_R};

	VPL_Parameter _lldiv_R = { kStructureType,8,"lldiv_t",0,0,NULL};
	VPL_Parameter _lldiv_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lldiv_1 = { kIntType,4,NULL,0,0,&_lldiv_2};
	VPL_ExtProcedure _lldiv_F = {"lldiv",lldiv,&_lldiv_1,&_lldiv_R};

	VPL_Parameter _llabs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _llabs_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _llabs_F = {"llabs",llabs,&_llabs_1,&_llabs_R};

	VPL_Parameter _ldiv_R = { kStructureType,8,"ldiv_t",0,0,NULL};
	VPL_Parameter _ldiv_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ldiv_1 = { kIntType,4,NULL,0,0,&_ldiv_2};
	VPL_ExtProcedure _ldiv_F = {"ldiv",ldiv,&_ldiv_1,&_ldiv_R};

	VPL_Parameter _labs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _labs_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _labs_F = {"labs",labs,&_labs_1,&_labs_R};

	VPL_Parameter _getenv_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _getenv_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _getenv_F = {"getenv",getenv,&_getenv_1,&_getenv_R};

	VPL_Parameter _free_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _free_F = {"free",free,&_free_1,NULL};

	VPL_Parameter _exit_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _exit_F = {"exit",exit,&_exit_1,NULL};

	VPL_Parameter _div_R = { kStructureType,8,"div_t",0,0,NULL};
	VPL_Parameter _div_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _div_1 = { kIntType,4,NULL,0,0,&_div_2};
	VPL_ExtProcedure _div_F = {"div",div,&_div_1,&_div_R};

	VPL_Parameter _calloc_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _calloc_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _calloc_1 = { kUnsignedType,4,NULL,0,0,&_calloc_2};
	VPL_ExtProcedure _calloc_F = {"calloc",calloc,&_calloc_1,&_calloc_R};

	VPL_Parameter _bsearch_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _bsearch_5 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _bsearch_4 = { kUnsignedType,4,NULL,0,0,&_bsearch_5};
	VPL_Parameter _bsearch_3 = { kUnsignedType,4,NULL,0,0,&_bsearch_4};
	VPL_Parameter _bsearch_2 = { kPointerType,0,"void",1,1,&_bsearch_3};
	VPL_Parameter _bsearch_1 = { kPointerType,0,"void",1,1,&_bsearch_2};
	VPL_ExtProcedure _bsearch_F = {"bsearch",bsearch,&_bsearch_1,&_bsearch_R};

	VPL_Parameter _atoll_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _atoll_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _atoll_F = {"atoll",atoll,&_atoll_1,&_atoll_R};

	VPL_Parameter _atol_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _atol_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _atol_F = {"atol",atol,&_atol_1,&_atol_R};

	VPL_Parameter _atoi_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _atoi_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _atoi_F = {"atoi",atoi,&_atoi_1,&_atoi_R};

	VPL_Parameter _atof_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atof_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _atof_F = {"atof",atof,&_atof_1,&_atof_R};

	VPL_Parameter _atexit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _atexit_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _atexit_F = {"atexit",atexit,&_atexit_1,&_atexit_R};

	VPL_Parameter _abs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _abs_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _abs_F = {"abs",abs,&_abs_1,&_abs_R};

	VPL_ExtProcedure _abort_F = {"abort",abort,NULL,NULL};

	VPL_Parameter _wait4_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _wait4_4 = { kPointerType,72,"rusage",1,0,NULL};
	VPL_Parameter _wait4_3 = { kIntType,4,NULL,0,0,&_wait4_4};
	VPL_Parameter _wait4_2 = { kPointerType,4,"int",1,0,&_wait4_3};
	VPL_Parameter _wait4_1 = { kIntType,4,NULL,0,0,&_wait4_2};
	VPL_ExtProcedure _wait4_F = {"wait4",wait4,&_wait4_1,&_wait4_R};

	VPL_Parameter _wait3_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _wait3_3 = { kPointerType,72,"rusage",1,0,NULL};
	VPL_Parameter _wait3_2 = { kIntType,4,NULL,0,0,&_wait3_3};
	VPL_Parameter _wait3_1 = { kPointerType,4,"int",1,0,&_wait3_2};
	VPL_ExtProcedure _wait3_F = {"wait3",wait3,&_wait3_1,&_wait3_R};

	VPL_Parameter _waitpid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _waitpid_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _waitpid_2 = { kPointerType,4,"int",1,0,&_waitpid_3};
	VPL_Parameter _waitpid_1 = { kIntType,4,NULL,0,0,&_waitpid_2};
	VPL_ExtProcedure _waitpid_F = {"waitpid",waitpid,&_waitpid_1,&_waitpid_R};

	VPL_Parameter _wait_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _wait_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _wait_F = {"wait",wait,&_wait_1,&_wait_R};

	VPL_Parameter _setrlimit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setrlimit_2 = { kPointerType,8,"rlimit",1,1,NULL};
	VPL_Parameter _setrlimit_1 = { kIntType,4,NULL,0,0,&_setrlimit_2};
	VPL_ExtProcedure _setrlimit_F = {"setrlimit",setrlimit,&_setrlimit_1,&_setrlimit_R};

	VPL_Parameter _setpriority_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setpriority_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setpriority_2 = { kUnsignedType,4,NULL,0,0,&_setpriority_3};
	VPL_Parameter _setpriority_1 = { kIntType,4,NULL,0,0,&_setpriority_2};
	VPL_ExtProcedure _setpriority_F = {"setpriority",setpriority,&_setpriority_1,&_setpriority_R};

	VPL_Parameter _getrusage_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getrusage_2 = { kPointerType,72,"rusage",1,0,NULL};
	VPL_Parameter _getrusage_1 = { kIntType,4,NULL,0,0,&_getrusage_2};
	VPL_ExtProcedure _getrusage_F = {"getrusage",getrusage,&_getrusage_1,&_getrusage_R};

	VPL_Parameter _getrlimit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getrlimit_2 = { kPointerType,8,"rlimit",1,0,NULL};
	VPL_Parameter _getrlimit_1 = { kIntType,4,NULL,0,0,&_getrlimit_2};
	VPL_ExtProcedure _getrlimit_F = {"getrlimit",getrlimit,&_getrlimit_1,&_getrlimit_R};

	VPL_Parameter _getpriority_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getpriority_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _getpriority_1 = { kIntType,4,NULL,0,0,&_getpriority_2};
	VPL_ExtProcedure _getpriority_F = {"getpriority",getpriority,&_getpriority_1,&_getpriority_R};

	VPL_Parameter _strsignal_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strsignal_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _strsignal_F = {"strsignal",strsignal,&_strsignal_1,&_strsignal_R};

	VPL_Parameter _strsep_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strsep_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strsep_1 = { kPointerType,1,"char",2,0,&_strsep_2};
	VPL_ExtProcedure _strsep_F = {"strsep",strsep,&_strsep_1,&_strsep_R};

	VPL_Parameter _strncasecmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strncasecmp_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strncasecmp_2 = { kPointerType,1,"char",1,1,&_strncasecmp_3};
	VPL_Parameter _strncasecmp_1 = { kPointerType,1,"char",1,1,&_strncasecmp_2};
	VPL_ExtProcedure _strncasecmp_F = {"strncasecmp",strncasecmp,&_strncasecmp_1,&_strncasecmp_R};

	VPL_Parameter _strmode_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strmode_1 = { kIntType,4,NULL,0,0,&_strmode_2};
	VPL_ExtProcedure _strmode_F = {"strmode",strmode,&_strmode_1,NULL};

	VPL_Parameter _strlcpy_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strlcpy_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strlcpy_2 = { kPointerType,1,"char",1,1,&_strlcpy_3};
	VPL_Parameter _strlcpy_1 = { kPointerType,1,"char",1,0,&_strlcpy_2};
	VPL_ExtProcedure _strlcpy_F = {"strlcpy",strlcpy,&_strlcpy_1,&_strlcpy_R};

	VPL_Parameter _strlcat_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strlcat_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strlcat_2 = { kPointerType,1,"char",1,1,&_strlcat_3};
	VPL_Parameter _strlcat_1 = { kPointerType,1,"char",1,0,&_strlcat_2};
	VPL_ExtProcedure _strlcat_F = {"strlcat",strlcat,&_strlcat_1,&_strlcat_R};

	VPL_Parameter _strcasecmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strcasecmp_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strcasecmp_1 = { kPointerType,1,"char",1,1,&_strcasecmp_2};
	VPL_ExtProcedure _strcasecmp_F = {"strcasecmp",strcasecmp,&_strcasecmp_1,&_strcasecmp_R};

	VPL_Parameter _rindex_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _rindex_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rindex_1 = { kPointerType,1,"char",1,1,&_rindex_2};
	VPL_ExtProcedure _rindex_F = {"rindex",rindex,&_rindex_1,&_rindex_R};

	VPL_Parameter _index_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _index_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _index_1 = { kPointerType,1,"char",1,1,&_index_2};
	VPL_ExtProcedure _index_F = {"index",index,&_index_1,&_index_R};

	VPL_Parameter _ffs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ffs_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ffs_F = {"ffs",ffs,&_ffs_1,&_ffs_R};

	VPL_Parameter _bzero_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _bzero_1 = { kPointerType,0,"void",1,0,&_bzero_2};
	VPL_ExtProcedure _bzero_F = {"bzero",bzero,&_bzero_1,NULL};

	VPL_Parameter _bcopy_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _bcopy_2 = { kPointerType,0,"void",1,0,&_bcopy_3};
	VPL_Parameter _bcopy_1 = { kPointerType,0,"void",1,1,&_bcopy_2};
	VPL_ExtProcedure _bcopy_F = {"bcopy",bcopy,&_bcopy_1,NULL};

	VPL_Parameter _bcmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _bcmp_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _bcmp_2 = { kPointerType,0,"void",1,1,&_bcmp_3};
	VPL_Parameter _bcmp_1 = { kPointerType,0,"void",1,1,&_bcmp_2};
	VPL_ExtProcedure _bcmp_F = {"bcmp",bcmp,&_bcmp_1,&_bcmp_R};

	VPL_Parameter _strdup_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strdup_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _strdup_F = {"strdup",strdup,&_strdup_1,&_strdup_R};

	VPL_Parameter _strtok_r_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strtok_r_3 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _strtok_r_2 = { kPointerType,1,"char",1,1,&_strtok_r_3};
	VPL_Parameter _strtok_r_1 = { kPointerType,1,"char",1,0,&_strtok_r_2};
	VPL_ExtProcedure _strtok_r_F = {"strtok_r",strtok_r,&_strtok_r_1,&_strtok_r_R};

	VPL_Parameter _memccpy_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _memccpy_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _memccpy_3 = { kIntType,4,NULL,0,0,&_memccpy_4};
	VPL_Parameter _memccpy_2 = { kPointerType,0,"void",1,1,&_memccpy_3};
	VPL_Parameter _memccpy_1 = { kPointerType,0,"void",1,0,&_memccpy_2};
	VPL_ExtProcedure _memccpy_F = {"memccpy",memccpy,&_memccpy_1,&_memccpy_R};

	VPL_Parameter _strxfrm_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strxfrm_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strxfrm_2 = { kPointerType,1,"char",1,1,&_strxfrm_3};
	VPL_Parameter _strxfrm_1 = { kPointerType,1,"char",1,0,&_strxfrm_2};
	VPL_ExtProcedure _strxfrm_F = {"strxfrm",strxfrm,&_strxfrm_1,&_strxfrm_R};

	VPL_Parameter _strtok_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strtok_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strtok_1 = { kPointerType,1,"char",1,0,&_strtok_2};
	VPL_ExtProcedure _strtok_F = {"strtok",strtok,&_strtok_1,&_strtok_R};

	VPL_Parameter _strstr_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strstr_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strstr_1 = { kPointerType,1,"char",1,1,&_strstr_2};
	VPL_ExtProcedure _strstr_F = {"strstr",strstr,&_strstr_1,&_strstr_R};

	VPL_Parameter _strspn_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strspn_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strspn_1 = { kPointerType,1,"char",1,1,&_strspn_2};
	VPL_ExtProcedure _strspn_F = {"strspn",strspn,&_strspn_1,&_strspn_R};

	VPL_Parameter _strrchr_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strrchr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strrchr_1 = { kPointerType,1,"char",1,1,&_strrchr_2};
	VPL_ExtProcedure _strrchr_F = {"strrchr",strrchr,&_strrchr_1,&_strrchr_R};

	VPL_Parameter _strpbrk_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strpbrk_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strpbrk_1 = { kPointerType,1,"char",1,1,&_strpbrk_2};
	VPL_ExtProcedure _strpbrk_F = {"strpbrk",strpbrk,&_strpbrk_1,&_strpbrk_R};

	VPL_Parameter _strnstr_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strnstr_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strnstr_2 = { kPointerType,1,"char",1,1,&_strnstr_3};
	VPL_Parameter _strnstr_1 = { kPointerType,1,"char",1,1,&_strnstr_2};
	VPL_ExtProcedure _strnstr_F = {"strnstr",strnstr,&_strnstr_1,&_strnstr_R};

	VPL_Parameter _strncpy_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strncpy_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strncpy_2 = { kPointerType,1,"char",1,1,&_strncpy_3};
	VPL_Parameter _strncpy_1 = { kPointerType,1,"char",1,0,&_strncpy_2};
	VPL_ExtProcedure _strncpy_F = {"strncpy",strncpy,&_strncpy_1,&_strncpy_R};

	VPL_Parameter _strncmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strncmp_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strncmp_2 = { kPointerType,1,"char",1,1,&_strncmp_3};
	VPL_Parameter _strncmp_1 = { kPointerType,1,"char",1,1,&_strncmp_2};
	VPL_ExtProcedure _strncmp_F = {"strncmp",strncmp,&_strncmp_1,&_strncmp_R};

	VPL_Parameter _strncat_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strncat_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strncat_2 = { kPointerType,1,"char",1,1,&_strncat_3};
	VPL_Parameter _strncat_1 = { kPointerType,1,"char",1,0,&_strncat_2};
	VPL_ExtProcedure _strncat_F = {"strncat",strncat,&_strncat_1,&_strncat_R};

	VPL_Parameter _strlen_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strlen_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _strlen_F = {"strlen",strlen,&_strlen_1,&_strlen_R};

	VPL_Parameter _strerror_r_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strerror_r_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strerror_r_2 = { kPointerType,1,"char",1,0,&_strerror_r_3};
	VPL_Parameter _strerror_r_1 = { kIntType,4,NULL,0,0,&_strerror_r_2};
	VPL_ExtProcedure _strerror_r_F = {"strerror_r",strerror_r,&_strerror_r_1,&_strerror_r_R};

	VPL_Parameter _strerror_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strerror_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _strerror_F = {"strerror",strerror,&_strerror_1,&_strerror_R};

	VPL_Parameter _strcspn_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strcspn_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strcspn_1 = { kPointerType,1,"char",1,1,&_strcspn_2};
	VPL_ExtProcedure _strcspn_F = {"strcspn",strcspn,&_strcspn_1,&_strcspn_R};

	VPL_Parameter _strcpy_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strcpy_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strcpy_1 = { kPointerType,1,"char",1,0,&_strcpy_2};
	VPL_ExtProcedure _strcpy_F = {"strcpy",strcpy,&_strcpy_1,&_strcpy_R};

	VPL_Parameter _strcoll_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strcoll_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strcoll_1 = { kPointerType,1,"char",1,1,&_strcoll_2};
	VPL_ExtProcedure _strcoll_F = {"strcoll",strcoll,&_strcoll_1,&_strcoll_R};

	VPL_Parameter _strcmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strcmp_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strcmp_1 = { kPointerType,1,"char",1,1,&_strcmp_2};
	VPL_ExtProcedure _strcmp_F = {"strcmp",strcmp,&_strcmp_1,&_strcmp_R};

	VPL_Parameter _strchr_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strchr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strchr_1 = { kPointerType,1,"char",1,1,&_strchr_2};
	VPL_ExtProcedure _strchr_F = {"strchr",strchr,&_strchr_1,&_strchr_R};

	VPL_Parameter _strcat_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strcat_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strcat_1 = { kPointerType,1,"char",1,0,&_strcat_2};
	VPL_ExtProcedure _strcat_F = {"strcat",strcat,&_strcat_1,&_strcat_R};

	VPL_Parameter _strcasestr_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strcasestr_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _strcasestr_1 = { kPointerType,1,"char",1,1,&_strcasestr_2};
	VPL_ExtProcedure _strcasestr_F = {"strcasestr",strcasestr,&_strcasestr_1,&_strcasestr_R};

	VPL_Parameter _stpcpy_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _stpcpy_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _stpcpy_1 = { kPointerType,1,"char",1,0,&_stpcpy_2};
	VPL_ExtProcedure _stpcpy_F = {"stpcpy",stpcpy,&_stpcpy_1,&_stpcpy_R};

	VPL_Parameter _memset_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _memset_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _memset_2 = { kIntType,4,NULL,0,0,&_memset_3};
	VPL_Parameter _memset_1 = { kPointerType,0,"void",1,0,&_memset_2};
	VPL_ExtProcedure _memset_F = {"memset",memset,&_memset_1,&_memset_R};

	VPL_Parameter _memmove_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _memmove_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _memmove_2 = { kPointerType,0,"void",1,1,&_memmove_3};
	VPL_Parameter _memmove_1 = { kPointerType,0,"void",1,0,&_memmove_2};
	VPL_ExtProcedure _memmove_F = {"memmove",memmove,&_memmove_1,&_memmove_R};

	VPL_Parameter _memcpy_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _memcpy_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _memcpy_2 = { kPointerType,0,"void",1,1,&_memcpy_3};
	VPL_Parameter _memcpy_1 = { kPointerType,0,"void",1,0,&_memcpy_2};
	VPL_ExtProcedure _memcpy_F = {"memcpy",memcpy,&_memcpy_1,&_memcpy_R};

	VPL_Parameter _memcmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _memcmp_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _memcmp_2 = { kPointerType,0,"void",1,1,&_memcmp_3};
	VPL_Parameter _memcmp_1 = { kPointerType,0,"void",1,1,&_memcmp_2};
	VPL_ExtProcedure _memcmp_F = {"memcmp",memcmp,&_memcmp_1,&_memcmp_R};

	VPL_Parameter _memchr_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _memchr_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _memchr_2 = { kIntType,4,NULL,0,0,&_memchr_3};
	VPL_Parameter _memchr_1 = { kPointerType,0,"void",1,1,&_memchr_2};
	VPL_ExtProcedure _memchr_F = {"memchr",memchr,&_memchr_1,&_memchr_R};

	VPL_Parameter _fsctl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fsctl_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _fsctl_3 = { kPointerType,0,"void",1,0,&_fsctl_4};
	VPL_Parameter _fsctl_2 = { kUnsignedType,4,NULL,0,0,&_fsctl_3};
	VPL_Parameter _fsctl_1 = { kPointerType,1,"char",1,1,&_fsctl_2};
	VPL_ExtProcedure _fsctl_F = {"fsctl",fsctl,&_fsctl_1,&_fsctl_R};

	VPL_Parameter _searchfs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _searchfs_6 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _searchfs_5 = { kUnsignedType,4,NULL,0,0,&_searchfs_6};
	VPL_Parameter _searchfs_4 = { kUnsignedType,4,NULL,0,0,&_searchfs_5};
	VPL_Parameter _searchfs_3 = { kPointerType,0,"void",1,0,&_searchfs_4};
	VPL_Parameter _searchfs_2 = { kPointerType,0,"void",1,0,&_searchfs_3};
	VPL_Parameter _searchfs_1 = { kPointerType,1,"char",1,1,&_searchfs_2};
	VPL_ExtProcedure _searchfs_F = {"searchfs",searchfs,&_searchfs_1,&_searchfs_R};

	VPL_Parameter _getdirentriesattr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getdirentriesattr_8 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _getdirentriesattr_7 = { kPointerType,4,"unsigned long",1,0,&_getdirentriesattr_8};
	VPL_Parameter _getdirentriesattr_6 = { kPointerType,4,"unsigned long",1,0,&_getdirentriesattr_7};
	VPL_Parameter _getdirentriesattr_5 = { kPointerType,4,"unsigned long",1,0,&_getdirentriesattr_6};
	VPL_Parameter _getdirentriesattr_4 = { kUnsignedType,4,NULL,0,0,&_getdirentriesattr_5};
	VPL_Parameter _getdirentriesattr_3 = { kPointerType,0,"void",1,0,&_getdirentriesattr_4};
	VPL_Parameter _getdirentriesattr_2 = { kPointerType,0,"void",1,0,&_getdirentriesattr_3};
	VPL_Parameter _getdirentriesattr_1 = { kIntType,4,NULL,0,0,&_getdirentriesattr_2};
	VPL_ExtProcedure _getdirentriesattr_F = {"getdirentriesattr",getdirentriesattr,&_getdirentriesattr_1,&_getdirentriesattr_R};

	VPL_Parameter _checkuseraccess_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _checkuseraccess_6 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _checkuseraccess_5 = { kIntType,4,NULL,0,0,&_checkuseraccess_6};
	VPL_Parameter _checkuseraccess_4 = { kIntType,4,NULL,0,0,&_checkuseraccess_5};
	VPL_Parameter _checkuseraccess_3 = { kPointerType,4,"unsigned int",1,0,&_checkuseraccess_4};
	VPL_Parameter _checkuseraccess_2 = { kUnsignedType,4,NULL,0,0,&_checkuseraccess_3};
	VPL_Parameter _checkuseraccess_1 = { kPointerType,1,"char",1,1,&_checkuseraccess_2};
	VPL_ExtProcedure _checkuseraccess_F = {"checkuseraccess",NULL,&_checkuseraccess_1,&_checkuseraccess_R};

	VPL_Parameter _exchangedata_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _exchangedata_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _exchangedata_2 = { kPointerType,1,"char",1,1,&_exchangedata_3};
	VPL_Parameter _exchangedata_1 = { kPointerType,1,"char",1,1,&_exchangedata_2};
	VPL_ExtProcedure _exchangedata_F = {"exchangedata",exchangedata,&_exchangedata_1,&_exchangedata_R};

	VPL_Parameter _setattrlist_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setattrlist_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _setattrlist_4 = { kUnsignedType,4,NULL,0,0,&_setattrlist_5};
	VPL_Parameter _setattrlist_3 = { kPointerType,0,"void",1,0,&_setattrlist_4};
	VPL_Parameter _setattrlist_2 = { kPointerType,0,"void",1,0,&_setattrlist_3};
	VPL_Parameter _setattrlist_1 = { kPointerType,1,"char",1,1,&_setattrlist_2};
	VPL_ExtProcedure _setattrlist_F = {"setattrlist",setattrlist,&_setattrlist_1,&_setattrlist_R};

	VPL_Parameter _getattrlist_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getattrlist_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _getattrlist_4 = { kUnsignedType,4,NULL,0,0,&_getattrlist_5};
	VPL_Parameter _getattrlist_3 = { kPointerType,0,"void",1,0,&_getattrlist_4};
	VPL_Parameter _getattrlist_2 = { kPointerType,0,"void",1,0,&_getattrlist_3};
	VPL_Parameter _getattrlist_1 = { kPointerType,1,"char",1,1,&_getattrlist_2};
	VPL_ExtProcedure _getattrlist_F = {"getattrlist",getattrlist,&_getattrlist_1,&_getattrlist_R};

	VPL_Parameter _getsubopt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getsubopt_3 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _getsubopt_2 = { kPointerType,1,"char",2,1,&_getsubopt_3};
	VPL_Parameter _getsubopt_1 = { kPointerType,1,"char",2,0,&_getsubopt_2};
	VPL_ExtProcedure _getsubopt_F = {"getsubopt",getsubopt,&_getsubopt_1,&_getsubopt_R};

	VPL_Parameter _valloc_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _valloc_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _valloc_F = {"valloc",valloc,&_valloc_1,&_valloc_R};

	VPL_Parameter _undelete_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _undelete_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _undelete_F = {"undelete",undelete,&_undelete_1,&_undelete_R};

	VPL_Parameter _ttyslot_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ttyslot_F = {"ttyslot",ttyslot,NULL,&_ttyslot_R};

	VPL_Parameter _syscall_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _syscall_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _syscall_F = {"syscall",syscall,&_syscall_1,&_syscall_R};

	VPL_Parameter _swapon_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _swapon_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _swapon_F = {"swapon",swapon,&_swapon_1,&_swapon_R};

	VPL_Parameter _strtofflags_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _strtofflags_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _strtofflags_2 = { kPointerType,4,"unsigned long",1,0,&_strtofflags_3};
	VPL_Parameter _strtofflags_1 = { kPointerType,1,"char",2,0,&_strtofflags_2};
	VPL_ExtProcedure _strtofflags_F = {"strtofflags",strtofflags,&_strtofflags_1,&_strtofflags_R};

	VPL_Parameter _setwgroups_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setwgroups_np_2 = { kPointerType,16,"unsigned char",1,1,NULL};
	VPL_Parameter _setwgroups_np_1 = { kIntType,4,NULL,0,0,&_setwgroups_np_2};
	VPL_ExtProcedure _setwgroups_np_F = {"setwgroups_np",setwgroups_np,&_setwgroups_np_1,&_setwgroups_np_R};

	VPL_ExtProcedure _setusershell_F = {"setusershell",setusershell,NULL,NULL};

	VPL_Parameter _setsgroups_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setsgroups_np_2 = { kPointerType,16,"unsigned char",1,1,NULL};
	VPL_Parameter _setsgroups_np_1 = { kIntType,4,NULL,0,0,&_setsgroups_np_2};
	VPL_ExtProcedure _setsgroups_np_F = {"setsgroups_np",setsgroups_np,&_setsgroups_np_1,&_setsgroups_np_R};

	VPL_Parameter _setruid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setruid_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setruid_F = {"setruid",setruid,&_setruid_1,&_setruid_R};

	VPL_Parameter _setrgid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setrgid_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setrgid_F = {"setrgid",setrgid,&_setrgid_1,&_setrgid_R};

	VPL_Parameter _setmode_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _setmode_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _setmode_F = {"setmode",setmode,&_setmode_1,&_setmode_R};

	VPL_Parameter _setlogin_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setlogin_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _setlogin_F = {"setlogin",setlogin,&_setlogin_1,&_setlogin_R};

	VPL_Parameter _setkey_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setkey_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _setkey_F = {"setkey",setkey,&_setkey_1,&_setkey_R};

	VPL_Parameter _sethostname_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sethostname_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sethostname_1 = { kPointerType,1,"char",1,1,&_sethostname_2};
	VPL_ExtProcedure _sethostname_F = {"sethostname",sethostname,&_sethostname_1,&_sethostname_R};

	VPL_Parameter _sethostid_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sethostid_F = {"sethostid",sethostid,&_sethostid_1,NULL};

	VPL_Parameter _setgroups_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setgroups_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _setgroups_1 = { kIntType,4,NULL,0,0,&_setgroups_2};
	VPL_ExtProcedure _setgroups_F = {"setgroups",setgroups,&_setgroups_1,&_setgroups_R};

	VPL_Parameter _setdomainname_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setdomainname_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setdomainname_1 = { kPointerType,1,"char",1,1,&_setdomainname_2};
	VPL_ExtProcedure _setdomainname_F = {"setdomainname",setdomainname,&_setdomainname_1,&_setdomainname_R};

	VPL_Parameter _sbrk_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _sbrk_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sbrk_F = {"sbrk",sbrk,&_sbrk_1,&_sbrk_R};

	VPL_Parameter _ruserok_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ruserok_4 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _ruserok_3 = { kPointerType,1,"char",1,1,&_ruserok_4};
	VPL_Parameter _ruserok_2 = { kIntType,4,NULL,0,0,&_ruserok_3};
	VPL_Parameter _ruserok_1 = { kPointerType,1,"char",1,1,&_ruserok_2};
	VPL_ExtProcedure _ruserok_F = {"ruserok",ruserok,&_ruserok_1,&_ruserok_R};

	VPL_Parameter _rresvport_af_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rresvport_af_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rresvport_af_1 = { kPointerType,4,"int",1,0,&_rresvport_af_2};
	VPL_ExtProcedure _rresvport_af_F = {"rresvport_af",rresvport_af,&_rresvport_af_1,&_rresvport_af_R};

	VPL_Parameter _rresvport_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rresvport_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _rresvport_F = {"rresvport",rresvport,&_rresvport_1,&_rresvport_R};

	VPL_Parameter _revoke_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _revoke_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _revoke_F = {"revoke",revoke,&_revoke_1,&_revoke_R};

	VPL_Parameter _reboot_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _reboot_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _reboot_F = {"reboot",reboot,&_reboot_1,&_reboot_R};

	VPL_Parameter _rcmd_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rcmd_6 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _rcmd_5 = { kPointerType,1,"char",1,1,&_rcmd_6};
	VPL_Parameter _rcmd_4 = { kPointerType,1,"char",1,1,&_rcmd_5};
	VPL_Parameter _rcmd_3 = { kPointerType,1,"char",1,1,&_rcmd_4};
	VPL_Parameter _rcmd_2 = { kIntType,4,NULL,0,0,&_rcmd_3};
	VPL_Parameter _rcmd_1 = { kPointerType,1,"char",2,0,&_rcmd_2};
	VPL_ExtProcedure _rcmd_F = {"rcmd",rcmd,&_rcmd_1,&_rcmd_R};

	VPL_Parameter _pthread_getugid_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pthread_getugid_np_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _pthread_getugid_np_1 = { kPointerType,4,"unsigned int",1,0,&_pthread_getugid_np_2};
	VPL_ExtProcedure _pthread_getugid_np_F = {"pthread_getugid_np",pthread_getugid_np,&_pthread_getugid_np_1,&_pthread_getugid_np_R};

	VPL_Parameter _pthread_setugid_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pthread_setugid_np_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _pthread_setugid_np_1 = { kUnsignedType,4,NULL,0,0,&_pthread_setugid_np_2};
	VPL_ExtProcedure _pthread_setugid_np_F = {"pthread_setugid_np",pthread_setugid_np,&_pthread_setugid_np_1,&_pthread_setugid_np_R};

	VPL_Parameter _profil_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _profil_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _profil_3 = { kUnsignedType,4,NULL,0,0,&_profil_4};
	VPL_Parameter _profil_2 = { kUnsignedType,4,NULL,0,0,&_profil_3};
	VPL_Parameter _profil_1 = { kPointerType,1,"char",1,0,&_profil_2};
	VPL_ExtProcedure _profil_F = {"profil",profil,&_profil_1,&_profil_R};

	VPL_Parameter _nfssvc_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _nfssvc_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _nfssvc_1 = { kIntType,4,NULL,0,0,&_nfssvc_2};
	VPL_ExtProcedure _nfssvc_F = {"nfssvc",nfssvc,&_nfssvc_1,&_nfssvc_R};

	VPL_Parameter _mktemp_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mktemp_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _mktemp_F = {"mktemp",mktemp,&_mktemp_1,&_mktemp_R};

	VPL_Parameter _mkstemps_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mkstemps_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mkstemps_1 = { kPointerType,1,"char",1,0,&_mkstemps_2};
	VPL_ExtProcedure _mkstemps_F = {"mkstemps",mkstemps,&_mkstemps_1,&_mkstemps_R};

	VPL_Parameter _mkstemp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mkstemp_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _mkstemp_F = {"mkstemp",mkstemp,&_mkstemp_1,&_mkstemp_R};

	VPL_Parameter _mknod_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mknod_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mknod_2 = { kUnsignedType,2,NULL,0,0,&_mknod_3};
	VPL_Parameter _mknod_1 = { kPointerType,1,"char",1,1,&_mknod_2};
	VPL_ExtProcedure _mknod_F = {"mknod",mknod,&_mknod_1,&_mknod_R};

	VPL_Parameter _mkdtemp_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mkdtemp_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _mkdtemp_F = {"mkdtemp",mkdtemp,&_mkdtemp_1,&_mkdtemp_R};

	VPL_Parameter _issetugid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _issetugid_F = {"issetugid",issetugid,NULL,&_issetugid_R};

	VPL_Parameter _iruserok_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _iruserok_4 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _iruserok_3 = { kPointerType,1,"char",1,1,&_iruserok_4};
	VPL_Parameter _iruserok_2 = { kIntType,4,NULL,0,0,&_iruserok_3};
	VPL_Parameter _iruserok_1 = { kUnsignedType,4,NULL,0,0,&_iruserok_2};
	VPL_ExtProcedure _iruserok_F = {"iruserok",iruserok,&_iruserok_1,&_iruserok_R};

	VPL_Parameter _initgroups_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _initgroups_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _initgroups_1 = { kPointerType,1,"char",1,1,&_initgroups_2};
	VPL_ExtProcedure _initgroups_F = {"initgroups",initgroups,&_initgroups_1,&_initgroups_R};

	VPL_Parameter _getwgroups_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getwgroups_np_2 = { kPointerType,16,"unsigned char",1,0,NULL};
	VPL_Parameter _getwgroups_np_1 = { kPointerType,4,"int",1,0,&_getwgroups_np_2};
	VPL_ExtProcedure _getwgroups_np_F = {"getwgroups_np",getwgroups_np,&_getwgroups_np_1,&_getwgroups_np_R};

	VPL_Parameter _getusershell_R = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _getusershell_F = {"getusershell",getusershell,NULL,&_getusershell_R};

	VPL_Parameter _getsgroups_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getsgroups_np_2 = { kPointerType,16,"unsigned char",1,0,NULL};
	VPL_Parameter _getsgroups_np_1 = { kPointerType,4,"int",1,0,&_getsgroups_np_2};
	VPL_ExtProcedure _getsgroups_np_F = {"getsgroups_np",getsgroups_np,&_getsgroups_np_1,&_getsgroups_np_R};

	VPL_Parameter _getpeereid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getpeereid_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _getpeereid_2 = { kPointerType,4,"unsigned int",1,0,&_getpeereid_3};
	VPL_Parameter _getpeereid_1 = { kIntType,4,NULL,0,0,&_getpeereid_2};
	VPL_ExtProcedure _getpeereid_F = {"getpeereid",getpeereid,&_getpeereid_1,&_getpeereid_R};

	VPL_Parameter _getpass_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _getpass_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _getpass_F = {"getpass",getpass,&_getpass_1,&_getpass_R};

	VPL_Parameter _getpagesize_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getpagesize_F = {"getpagesize",getpagesize,NULL,&_getpagesize_R};

	VPL_Parameter _getmode_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _getmode_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _getmode_1 = { kPointerType,0,"void",1,1,&_getmode_2};
	VPL_ExtProcedure _getmode_F = {"getmode",getmode,&_getmode_1,&_getmode_R};

	VPL_Parameter _getgrouplist_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getgrouplist_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _getgrouplist_3 = { kPointerType,4,"int",1,0,&_getgrouplist_4};
	VPL_Parameter _getgrouplist_2 = { kIntType,4,NULL,0,0,&_getgrouplist_3};
	VPL_Parameter _getgrouplist_1 = { kPointerType,1,"char",1,1,&_getgrouplist_2};
	VPL_ExtProcedure _getgrouplist_F = {"getgrouplist",getgrouplist,&_getgrouplist_1,&_getgrouplist_R};

	VPL_Parameter _getdomainname_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getdomainname_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getdomainname_1 = { kPointerType,1,"char",1,0,&_getdomainname_2};
	VPL_ExtProcedure _getdomainname_F = {"getdomainname",getdomainname,&_getdomainname_1,&_getdomainname_R};

	VPL_Parameter _getdtablesize_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getdtablesize_F = {"getdtablesize",getdtablesize,NULL,&_getdtablesize_R};

	VPL_Parameter _fsync_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fsync_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _fsync_F = {"fsync",fsync,&_fsync_1,&_fsync_R};

	VPL_Parameter _fflagstostr_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _fflagstostr_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _fflagstostr_F = {"fflagstostr",fflagstostr,&_fflagstostr_1,&_fflagstostr_R};

	VPL_Parameter _execvP_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _execvP_3 = { kPointerType,1,"char",2,1,NULL};
	VPL_Parameter _execvP_2 = { kPointerType,1,"char",1,1,&_execvP_3};
	VPL_Parameter _execvP_1 = { kPointerType,1,"char",1,1,&_execvP_2};
	VPL_ExtProcedure _execvP_F = {"execvP",execvP,&_execvP_1,&_execvP_R};

	VPL_ExtProcedure _endusershell_F = {"endusershell",endusershell,NULL,NULL};

	VPL_Parameter _encrypt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _encrypt_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _encrypt_1 = { kPointerType,1,"char",1,0,&_encrypt_2};
	VPL_ExtProcedure _encrypt_F = {"encrypt",encrypt,&_encrypt_1,&_encrypt_R};

	VPL_Parameter _chroot_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _chroot_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _chroot_F = {"chroot",chroot,&_chroot_1,&_chroot_R};

	VPL_Parameter _brk_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _brk_1 = { kPointerType,0,"void",1,1,NULL};
	VPL_ExtProcedure _brk_F = {"brk",brk,&_brk_1,&_brk_R};

	VPL_Parameter _add_profil_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _add_profil_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _add_profil_3 = { kUnsignedType,4,NULL,0,0,&_add_profil_4};
	VPL_Parameter _add_profil_2 = { kUnsignedType,4,NULL,0,0,&_add_profil_3};
	VPL_Parameter _add_profil_1 = { kPointerType,1,"char",1,0,&_add_profil_2};
	VPL_ExtProcedure _add_profil_F = {"add_profil",add_profil,&_add_profil_1,&_add_profil_R};

	VPL_Parameter _acct_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _acct_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _acct_F = {"acct",acct,&_acct_1,&_acct_R};

	VPL_Parameter _accessx_np_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _accessx_np_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _accessx_np_3 = { kPointerType,4,"int",1,0,&_accessx_np_4};
	VPL_Parameter _accessx_np_2 = { kUnsignedType,4,NULL,0,0,&_accessx_np_3};
	VPL_Parameter _accessx_np_1 = { kPointerType,16,"accessx_descriptor",1,1,&_accessx_np_2};
	VPL_ExtProcedure _accessx_np_F = {"accessx_np",accessx_np,&_accessx_np_1,&_accessx_np_R};

	VPL_Parameter __Exit_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure __Exit_F = {"_Exit",_Exit,&__Exit_1,NULL};

	VPL_Parameter _pselect_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pselect_6 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _pselect_5 = { kPointerType,8,"timespec",1,1,&_pselect_6};
	VPL_Parameter _pselect_4 = { kPointerType,128,"fd_set",1,0,&_pselect_5};
	VPL_Parameter _pselect_3 = { kPointerType,128,"fd_set",1,0,&_pselect_4};
	VPL_Parameter _pselect_2 = { kPointerType,128,"fd_set",1,0,&_pselect_3};
	VPL_Parameter _pselect_1 = { kIntType,4,NULL,0,0,&_pselect_2};
	VPL_ExtProcedure _pselect_F = {"pselect",pselect,&_pselect_1,&_pselect_R};

	VPL_Parameter _utimes_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _utimes_2 = { kPointerType,8,"timeval",1,1,NULL};
	VPL_Parameter _utimes_1 = { kPointerType,1,"char",1,1,&_utimes_2};
	VPL_ExtProcedure _utimes_F = {"utimes",utimes,&_utimes_1,&_utimes_R};

	VPL_Parameter _setitimer_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setitimer_3 = { kPointerType,16,"itimerval",1,0,NULL};
	VPL_Parameter _setitimer_2 = { kPointerType,16,"itimerval",1,1,&_setitimer_3};
	VPL_Parameter _setitimer_1 = { kIntType,4,NULL,0,0,&_setitimer_2};
	VPL_ExtProcedure _setitimer_F = {"setitimer",setitimer,&_setitimer_1,&_setitimer_R};

	VPL_Parameter _select_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _select_5 = { kPointerType,8,"timeval",1,0,NULL};
	VPL_Parameter _select_4 = { kPointerType,128,"fd_set",1,0,&_select_5};
	VPL_Parameter _select_3 = { kPointerType,128,"fd_set",1,0,&_select_4};
	VPL_Parameter _select_2 = { kPointerType,128,"fd_set",1,0,&_select_3};
	VPL_Parameter _select_1 = { kIntType,4,NULL,0,0,&_select_2};
	VPL_ExtProcedure _select_F = {"select",select,&_select_1,&_select_R};

	VPL_Parameter _gettimeofday_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gettimeofday_2 = { kPointerType,8,"timezone",1,0,NULL};
	VPL_Parameter _gettimeofday_1 = { kPointerType,8,"timeval",1,0,&_gettimeofday_2};
	VPL_ExtProcedure _gettimeofday_F = {"gettimeofday",gettimeofday,&_gettimeofday_1,&_gettimeofday_R};

	VPL_Parameter _getitimer_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getitimer_2 = { kPointerType,16,"itimerval",1,0,NULL};
	VPL_Parameter _getitimer_1 = { kIntType,4,NULL,0,0,&_getitimer_2};
	VPL_ExtProcedure _getitimer_F = {"getitimer",getitimer,&_getitimer_1,&_getitimer_R};

	VPL_Parameter _settimeofday_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _settimeofday_2 = { kPointerType,8,"timezone",1,1,NULL};
	VPL_Parameter _settimeofday_1 = { kPointerType,8,"timeval",1,1,&_settimeofday_2};
	VPL_ExtProcedure _settimeofday_F = {"settimeofday",settimeofday,&_settimeofday_1,&_settimeofday_R};

	VPL_Parameter _futimes_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _futimes_2 = { kPointerType,8,"timeval",1,1,NULL};
	VPL_Parameter _futimes_1 = { kIntType,4,NULL,0,0,&_futimes_2};
	VPL_ExtProcedure _futimes_F = {"futimes",futimes,&_futimes_1,&_futimes_R};

	VPL_Parameter _adjtime_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _adjtime_2 = { kPointerType,8,"timeval",1,0,NULL};
	VPL_Parameter _adjtime_1 = { kPointerType,8,"timeval",1,1,&_adjtime_2};
	VPL_ExtProcedure _adjtime_F = {"adjtime",adjtime,&_adjtime_1,&_adjtime_R};

	VPL_Parameter _nanosleep_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _nanosleep_2 = { kPointerType,8,"timespec",1,0,NULL};
	VPL_Parameter _nanosleep_1 = { kPointerType,8,"timespec",1,1,&_nanosleep_2};
	VPL_ExtProcedure _nanosleep_F = {"nanosleep",nanosleep,&_nanosleep_1,&_nanosleep_R};

	VPL_Parameter _timegm_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _timegm_1 = { kPointerType,44,"tm",1,0,NULL};
	VPL_ExtProcedure _timegm_F = {"timegm",timegm,&_timegm_1,&_timegm_R};

	VPL_Parameter _timelocal_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _timelocal_1 = { kPointerType,44,"tm",1,0,NULL};
	VPL_ExtProcedure _timelocal_F = {"timelocal",timelocal,&_timelocal_1,&_timelocal_R};

	VPL_Parameter _time2posix_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _time2posix_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _time2posix_F = {"time2posix",time2posix,&_time2posix_1,&_time2posix_R};

	VPL_ExtProcedure _tzsetwall_F = {"tzsetwall",tzsetwall,NULL,NULL};

	VPL_Parameter _timezone_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _timezone_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _timezone_1 = { kIntType,4,NULL,0,0,&_timezone_2};
	VPL_ExtProcedure _timezone_F = {"timezone",timezone,&_timezone_1,&_timezone_R};

	VPL_Parameter _posix2time_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _posix2time_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _posix2time_F = {"posix2time",posix2time,&_posix2time_1,&_posix2time_R};

	VPL_Parameter _localtime_r_R = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _localtime_r_2 = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _localtime_r_1 = { kPointerType,4,"long int",1,1,&_localtime_r_2};
	VPL_ExtProcedure _localtime_r_F = {"localtime_r",localtime_r,&_localtime_r_1,&_localtime_r_R};

	VPL_Parameter _gmtime_r_R = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _gmtime_r_2 = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _gmtime_r_1 = { kPointerType,4,"long int",1,1,&_gmtime_r_2};
	VPL_ExtProcedure _gmtime_r_F = {"gmtime_r",gmtime_r,&_gmtime_r_1,&_gmtime_r_R};

	VPL_Parameter _ctime_r_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ctime_r_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ctime_r_1 = { kPointerType,4,"long int",1,1,&_ctime_r_2};
	VPL_ExtProcedure _ctime_r_F = {"ctime_r",ctime_r,&_ctime_r_1,&_ctime_r_R};

	VPL_Parameter _asctime_r_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _asctime_r_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _asctime_r_1 = { kPointerType,44,"tm",1,1,&_asctime_r_2};
	VPL_ExtProcedure _asctime_r_F = {"asctime_r",asctime_r,&_asctime_r_1,&_asctime_r_R};

	VPL_ExtProcedure _tzset_F = {"tzset",tzset,NULL,NULL};

	VPL_Parameter _time_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _time_1 = { kPointerType,4,"long int",1,0,NULL};
	VPL_ExtProcedure _time_F = {"time",time,&_time_1,&_time_R};

	VPL_Parameter _strptime_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _strptime_3 = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _strptime_2 = { kPointerType,1,"char",1,1,&_strptime_3};
	VPL_Parameter _strptime_1 = { kPointerType,1,"char",1,1,&_strptime_2};
	VPL_ExtProcedure _strptime_F = {"strptime",strptime,&_strptime_1,&_strptime_R};

	VPL_Parameter _strftime_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _strftime_4 = { kPointerType,44,"tm",1,1,NULL};
	VPL_Parameter _strftime_3 = { kPointerType,1,"char",1,1,&_strftime_4};
	VPL_Parameter _strftime_2 = { kUnsignedType,4,NULL,0,0,&_strftime_3};
	VPL_Parameter _strftime_1 = { kPointerType,1,"char",1,0,&_strftime_2};
	VPL_ExtProcedure _strftime_F = {"strftime",strftime,&_strftime_1,&_strftime_R};

	VPL_Parameter _mktime_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mktime_1 = { kPointerType,44,"tm",1,0,NULL};
	VPL_ExtProcedure _mktime_F = {"mktime",mktime,&_mktime_1,&_mktime_R};

	VPL_Parameter _localtime_R = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _localtime_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _localtime_F = {"localtime",localtime,&_localtime_1,&_localtime_R};

	VPL_Parameter _gmtime_R = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _gmtime_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _gmtime_F = {"gmtime",gmtime,&_gmtime_1,&_gmtime_R};

	VPL_Parameter _getdate_R = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _getdate_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _getdate_F = {"getdate",getdate,&_getdate_1,&_getdate_R};

	VPL_Parameter _difftime_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _difftime_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _difftime_1 = { kIntType,4,NULL,0,0,&_difftime_2};
	VPL_ExtProcedure _difftime_F = {"difftime",difftime,&_difftime_1,&_difftime_R};

	VPL_Parameter _ctime_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ctime_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _ctime_F = {"ctime",ctime,&_ctime_1,&_ctime_R};

	VPL_Parameter _clock_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _clock_F = {"clock",clock,NULL,&_clock_R};

	VPL_Parameter _asctime_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _asctime_1 = { kPointerType,44,"tm",1,1,NULL};
	VPL_ExtProcedure _asctime_F = {"asctime",asctime,&_asctime_1,&_asctime_R};

	VPL_Parameter _sigvec_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigvec_3 = { kPointerType,12,"sigvec",1,0,NULL};
	VPL_Parameter _sigvec_2 = { kPointerType,12,"sigvec",1,0,&_sigvec_3};
	VPL_Parameter _sigvec_1 = { kIntType,4,NULL,0,0,&_sigvec_2};
	VPL_ExtProcedure _sigvec_F = {"sigvec",sigvec,&_sigvec_1,&_sigvec_R};

	VPL_Parameter _sigsetmask_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigsetmask_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sigsetmask_F = {"sigsetmask",sigsetmask,&_sigsetmask_1,&_sigsetmask_R};

	VPL_Parameter _sigreturn_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigreturn_1 = { kPointerType,72,"sigcontext",1,0,NULL};
	VPL_ExtProcedure _sigreturn_F = {"sigreturn",NULL,&_sigreturn_1,&_sigreturn_R};
//	VPL_ExtProcedure _sigreturn_F = {"sigreturn",sigreturn,&_sigreturn_1,&_sigreturn_R};

	VPL_Parameter _sigblock_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigblock_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sigblock_F = {"sigblock",sigblock,&_sigblock_1,&_sigblock_R};

	VPL_Parameter _psignal_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _psignal_1 = { kUnsignedType,4,NULL,0,0,&_psignal_2};
	VPL_ExtProcedure _psignal_F = {"psignal",psignal,&_psignal_1,NULL};

	VPL_Parameter _sigwait_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigwait_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _sigwait_1 = { kPointerType,4,"unsigned int",1,1,&_sigwait_2};
	VPL_ExtProcedure _sigwait_F = {"sigwait",sigwait,&_sigwait_1,&_sigwait_R};

	VPL_Parameter _sigsuspend_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigsuspend_1 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_ExtProcedure _sigsuspend_F = {"sigsuspend",sigsuspend,&_sigsuspend_1,&_sigsuspend_R};

	VPL_Parameter _sigset_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _sigset_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _sigset_1 = { kIntType,4,NULL,0,0,&_sigset_2};
	VPL_ExtProcedure _sigset_F = {"sigset",sigset,&_sigset_1,&_sigset_R};

	VPL_Parameter _sigrelse_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigrelse_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sigrelse_F = {"sigrelse",sigrelse,&_sigrelse_1,&_sigrelse_R};

	VPL_Parameter _sigprocmask_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigprocmask_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _sigprocmask_2 = { kPointerType,4,"unsigned int",1,1,&_sigprocmask_3};
	VPL_Parameter _sigprocmask_1 = { kIntType,4,NULL,0,0,&_sigprocmask_2};
	VPL_ExtProcedure _sigprocmask_F = {"sigprocmask",sigprocmask,&_sigprocmask_1,&_sigprocmask_R};

	VPL_Parameter _sigpending_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigpending_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _sigpending_F = {"sigpending",sigpending,&_sigpending_1,&_sigpending_R};

	VPL_Parameter _sigpause_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigpause_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sigpause_F = {"sigpause",sigpause,&_sigpause_1,&_sigpause_R};

	VPL_Parameter _sigismember_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigismember_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigismember_1 = { kPointerType,4,"unsigned int",1,1,&_sigismember_2};
	VPL_ExtProcedure _sigismember_F = {"sigismember",sigismember,&_sigismember_1,&_sigismember_R};

	VPL_Parameter _siginterrupt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _siginterrupt_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _siginterrupt_1 = { kIntType,4,NULL,0,0,&_siginterrupt_2};
	VPL_ExtProcedure _siginterrupt_F = {"siginterrupt",siginterrupt,&_siginterrupt_1,&_siginterrupt_R};

	VPL_Parameter _sigignore_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigignore_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sigignore_F = {"sigignore",sigignore,&_sigignore_1,&_sigignore_R};

	VPL_Parameter _sighold_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sighold_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sighold_F = {"sighold",sighold,&_sighold_1,&_sighold_R};

	VPL_Parameter _sigfillset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigfillset_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _sigfillset_F = {"sigfillset",sigfillset,&_sigfillset_1,&_sigfillset_R};

	VPL_Parameter _sigemptyset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigemptyset_1 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_ExtProcedure _sigemptyset_F = {"sigemptyset",sigemptyset,&_sigemptyset_1,&_sigemptyset_R};

	VPL_Parameter _sigdelset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigdelset_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigdelset_1 = { kPointerType,4,"unsigned int",1,0,&_sigdelset_2};
	VPL_ExtProcedure _sigdelset_F = {"sigdelset",sigdelset,&_sigdelset_1,&_sigdelset_R};

	VPL_Parameter _sigaltstack_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigaltstack_2 = { kPointerType,12,"sigaltstack",1,0,NULL};
	VPL_Parameter _sigaltstack_1 = { kPointerType,12,"sigaltstack",1,1,&_sigaltstack_2};
	VPL_ExtProcedure _sigaltstack_F = {"sigaltstack",sigaltstack,&_sigaltstack_1,&_sigaltstack_R};

	VPL_Parameter _sigaddset_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigaddset_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigaddset_1 = { kPointerType,4,"unsigned int",1,0,&_sigaddset_2};
	VPL_ExtProcedure _sigaddset_F = {"sigaddset",sigaddset,&_sigaddset_1,&_sigaddset_R};

	VPL_Parameter _sigaction_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigaction_3 = { kPointerType,12,"sigaction",1,0,NULL};
	VPL_Parameter _sigaction_2 = { kPointerType,12,"sigaction",1,1,&_sigaction_3};
	VPL_Parameter _sigaction_1 = { kIntType,4,NULL,0,0,&_sigaction_2};
	VPL_ExtProcedure _sigaction_F = {"sigaction",sigaction,&_sigaction_1,&_sigaction_R};

	VPL_Parameter _pthread_sigmask_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pthread_sigmask_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _pthread_sigmask_2 = { kPointerType,4,"unsigned int",1,1,&_pthread_sigmask_3};
	VPL_Parameter _pthread_sigmask_1 = { kIntType,4,NULL,0,0,&_pthread_sigmask_2};
	VPL_ExtProcedure _pthread_sigmask_F = {"pthread_sigmask",pthread_sigmask,&_pthread_sigmask_1,&_pthread_sigmask_R};

	VPL_Parameter _pthread_kill_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pthread_kill_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pthread_kill_1 = { kPointerType,604,"_opaque_pthread_t",1,0,&_pthread_kill_2};
	VPL_ExtProcedure _pthread_kill_F = {"pthread_kill",pthread_kill,&_pthread_kill_1,&_pthread_kill_R};

	VPL_Parameter _killpg_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _killpg_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _killpg_1 = { kIntType,4,NULL,0,0,&_killpg_2};
	VPL_ExtProcedure _killpg_F = {"killpg",killpg,&_killpg_1,&_killpg_R};

	VPL_Parameter _kill_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _kill_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _kill_1 = { kIntType,4,NULL,0,0,&_kill_2};
	VPL_ExtProcedure _kill_F = {"kill",kill,&_kill_1,&_kill_R};

	VPL_Parameter _bsd_signal_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _bsd_signal_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _bsd_signal_1 = { kIntType,4,NULL,0,0,&_bsd_signal_2};
	VPL_ExtProcedure _bsd_signal_F = {"bsd_signal",bsd_signal,&_bsd_signal_1,&_bsd_signal_R};

	VPL_Parameter _raise_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _raise_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _raise_F = {"raise",raise,&_raise_1,&_raise_R};

	VPL_Parameter _signal_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _signal_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _signal_1 = { kIntType,4,NULL,0,0,&_signal_2};
	VPL_ExtProcedure _signal_F = {"signal",signal,&_signal_1,&_signal_R};

//Not Available in Mac OS X 10.6
#if 0
	VPL_Parameter _htonl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _htonl_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _htonl_F = {"htonl",htonl,&_htonl_1,&_htonl_R};

	VPL_Parameter _ntohl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ntohl_1 = { kUnsignedType,4,NULL,0,0,NULL};
//	VPL_ExtProcedure _ntohl_F = {"ntohl",NULL,&_ntohl_1,&_ntohl_R};
	VPL_ExtProcedure _ntohl_F = {"ntohl",ntohl,&_ntohl_1,&_ntohl_R};

	VPL_Parameter _htons_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _htons_1 = { kUnsignedType,2,NULL,0,0,NULL};
//	VPL_ExtProcedure _htons_F = {"htons",NULL,&_htons_1,&_htons_R};
	VPL_ExtProcedure _htons_F = {"htons",htons,&_htons_1,&_htons_R};

	VPL_Parameter _ntohs_R = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _ntohs_1 = { kUnsignedType,2,NULL,0,0,NULL};
//	VPL_ExtProcedure _ntohs_F = {"ntohs",NULL,&_ntohs_1,&_ntohs_R};
	VPL_ExtProcedure _ntohs_F = {"ntohs",ntohs,&_ntohs_1,&_ntohs_R};
#endif

	VPL_Parameter _write_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _write_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _write_2 = { kPointerType,0,"void",1,1,&_write_3};
	VPL_Parameter _write_1 = { kIntType,4,NULL,0,0,&_write_2};
	VPL_ExtProcedure _write_F = {"write",write,&_write_1,&_write_R};

	VPL_Parameter _vfork_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _vfork_F = {"vfork",vfork,NULL,&_vfork_R};

	VPL_Parameter _usleep_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _usleep_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _usleep_F = {"usleep",usleep,&_usleep_1,&_usleep_R};

	VPL_Parameter _unlink_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _unlink_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _unlink_F = {"unlink",unlink,&_unlink_1,&_unlink_R};

	VPL_Parameter _ualarm_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ualarm_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ualarm_1 = { kUnsignedType,4,NULL,0,0,&_ualarm_2};
	VPL_ExtProcedure _ualarm_F = {"ualarm",ualarm,&_ualarm_1,&_ualarm_R};

	VPL_Parameter _ttyname_r_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ttyname_r_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _ttyname_r_2 = { kPointerType,1,"char",1,0,&_ttyname_r_3};
	VPL_Parameter _ttyname_r_1 = { kIntType,4,NULL,0,0,&_ttyname_r_2};
	VPL_ExtProcedure _ttyname_r_F = {"ttyname_r",ttyname_r,&_ttyname_r_1,&_ttyname_r_R};

	VPL_Parameter _ttyname_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ttyname_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ttyname_F = {"ttyname",ttyname,&_ttyname_1,&_ttyname_R};

	VPL_Parameter _truncate_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _truncate_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _truncate_1 = { kPointerType,1,"char",1,1,&_truncate_2};
	VPL_ExtProcedure _truncate_F = {"truncate",truncate,&_truncate_1,&_truncate_R};

	VPL_Parameter _tcsetpgrp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _tcsetpgrp_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _tcsetpgrp_1 = { kIntType,4,NULL,0,0,&_tcsetpgrp_2};
	VPL_ExtProcedure _tcsetpgrp_F = {"tcsetpgrp",tcsetpgrp,&_tcsetpgrp_1,&_tcsetpgrp_R};

	VPL_Parameter _tcgetpgrp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _tcgetpgrp_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _tcgetpgrp_F = {"tcgetpgrp",tcgetpgrp,&_tcgetpgrp_1,&_tcgetpgrp_R};

	VPL_Parameter _sysconf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sysconf_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sysconf_F = {"sysconf",sysconf,&_sysconf_1,&_sysconf_R};

	VPL_ExtProcedure _sync_F = {"sync",sync,NULL,NULL};

	VPL_Parameter _symlink_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _symlink_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _symlink_1 = { kPointerType,1,"char",1,1,&_symlink_2};
	VPL_ExtProcedure _symlink_F = {"symlink",symlink,&_symlink_1,&_symlink_R};

	VPL_Parameter _swab_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _swab_2 = { kPointerType,0,"void",1,0,&_swab_3};
	VPL_Parameter _swab_1 = { kPointerType,0,"void",1,1,&_swab_2};
	VPL_ExtProcedure _swab_F = {"swab",swab,&_swab_1,NULL};

	VPL_Parameter _sleep_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _sleep_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sleep_F = {"sleep",sleep,&_sleep_1,&_sleep_R};

	VPL_Parameter _setuid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setuid_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setuid_F = {"setuid",setuid,&_setuid_1,&_setuid_R};

	VPL_Parameter _setsid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setsid_F = {"setsid",setsid,NULL,&_setsid_R};

	VPL_Parameter _setreuid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setreuid_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _setreuid_1 = { kUnsignedType,4,NULL,0,0,&_setreuid_2};
	VPL_ExtProcedure _setreuid_F = {"setreuid",setreuid,&_setreuid_1,&_setreuid_R};

	VPL_Parameter _setregid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setregid_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _setregid_1 = { kUnsignedType,4,NULL,0,0,&_setregid_2};
	VPL_ExtProcedure _setregid_F = {"setregid",setregid,&_setregid_1,&_setregid_R};

	VPL_Parameter _setpgrp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setpgrp_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setpgrp_1 = { kIntType,4,NULL,0,0,&_setpgrp_2};
	VPL_ExtProcedure _setpgrp_F = {"setpgrp",setpgrp,&_setpgrp_1,&_setpgrp_R};

	VPL_Parameter _setpgid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setpgid_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setpgid_1 = { kIntType,4,NULL,0,0,&_setpgid_2};
	VPL_ExtProcedure _setpgid_F = {"setpgid",setpgid,&_setpgid_1,&_setpgid_R};

	VPL_Parameter _setgid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setgid_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setgid_F = {"setgid",setgid,&_setgid_1,&_setgid_R};

	VPL_Parameter _seteuid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _seteuid_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _seteuid_F = {"seteuid",seteuid,&_seteuid_1,&_seteuid_R};

	VPL_Parameter _setegid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setegid_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _setegid_F = {"setegid",setegid,&_setegid_1,&_setegid_R};

	VPL_Parameter _rmdir_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rmdir_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _rmdir_F = {"rmdir",rmdir,&_rmdir_1,&_rmdir_R};

	VPL_Parameter _readlink_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _readlink_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _readlink_2 = { kPointerType,1,"char",1,0,&_readlink_3};
	VPL_Parameter _readlink_1 = { kPointerType,1,"char",1,1,&_readlink_2};
	VPL_ExtProcedure _readlink_F = {"readlink",readlink,&_readlink_1,&_readlink_R};

	VPL_Parameter _read_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _read_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _read_2 = { kPointerType,0,"void",1,0,&_read_3};
	VPL_Parameter _read_1 = { kIntType,4,NULL,0,0,&_read_2};
	VPL_ExtProcedure _read_F = {"read",read,&_read_1,&_read_R};

	VPL_Parameter _pwrite_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pwrite_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pwrite_3 = { kUnsignedType,4,NULL,0,0,&_pwrite_4};
	VPL_Parameter _pwrite_2 = { kPointerType,0,"void",1,1,&_pwrite_3};
	VPL_Parameter _pwrite_1 = { kIntType,4,NULL,0,0,&_pwrite_2};
	VPL_ExtProcedure _pwrite_F = {"pwrite",pwrite,&_pwrite_1,&_pwrite_R};

	VPL_Parameter _pread_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pread_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pread_3 = { kUnsignedType,4,NULL,0,0,&_pread_4};
	VPL_Parameter _pread_2 = { kPointerType,0,"void",1,0,&_pread_3};
	VPL_Parameter _pread_1 = { kIntType,4,NULL,0,0,&_pread_2};
	VPL_ExtProcedure _pread_F = {"pread",pread,&_pread_1,&_pread_R};

	VPL_Parameter _pipe_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pipe_1 = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _pipe_F = {"pipe",pipe,&_pipe_1,&_pipe_R};

	VPL_Parameter _pause_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _pause_F = {"pause",pause,NULL,&_pause_R};

	VPL_Parameter _pathconf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pathconf_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _pathconf_1 = { kPointerType,1,"char",1,1,&_pathconf_2};
	VPL_ExtProcedure _pathconf_F = {"pathconf",pathconf,&_pathconf_1,&_pathconf_R};

	VPL_Parameter _nice_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _nice_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _nice_F = {"nice",nice,&_nice_1,&_nice_R};

	VPL_Parameter _lseek_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lseek_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lseek_2 = { kIntType,4,NULL,0,0,&_lseek_3};
	VPL_Parameter _lseek_1 = { kIntType,4,NULL,0,0,&_lseek_2};
	VPL_ExtProcedure _lseek_F = {"lseek",lseek,&_lseek_1,&_lseek_R};

	VPL_Parameter _lockf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lockf_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lockf_2 = { kIntType,4,NULL,0,0,&_lockf_3};
	VPL_Parameter _lockf_1 = { kIntType,4,NULL,0,0,&_lockf_2};
	VPL_ExtProcedure _lockf_F = {"lockf",lockf,&_lockf_1,&_lockf_R};

	VPL_Parameter _link_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _link_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _link_1 = { kPointerType,1,"char",1,1,&_link_2};
	VPL_ExtProcedure _link_F = {"link",link,&_link_1,&_link_R};

	VPL_Parameter _lchown_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lchown_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _lchown_2 = { kUnsignedType,4,NULL,0,0,&_lchown_3};
	VPL_Parameter _lchown_1 = { kPointerType,1,"char",1,1,&_lchown_2};
	VPL_ExtProcedure _lchown_F = {"lchown",lchown,&_lchown_1,&_lchown_R};

	VPL_Parameter _isatty_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isatty_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isatty_F = {"isatty",isatty,&_isatty_1,&_isatty_R};

	VPL_Parameter _getwd_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _getwd_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _getwd_F = {"getwd",getwd,&_getwd_1,&_getwd_R};

	VPL_Parameter _getuid_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getuid_F = {"getuid",getuid,NULL,&_getuid_R};

	VPL_Parameter _getsid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getsid_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getsid_F = {"getsid",getsid,&_getsid_1,&_getsid_R};

	VPL_Parameter _getppid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getppid_F = {"getppid",getppid,NULL,&_getppid_R};

	VPL_Parameter _getpid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getpid_F = {"getpid",getpid,NULL,&_getpid_R};

	VPL_Parameter _getpgrp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getpgrp_F = {"getpgrp",getpgrp,NULL,&_getpgrp_R};

	VPL_Parameter _getpgid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getpgid_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getpgid_F = {"getpgid",getpgid,&_getpgid_1,&_getpgid_R};

	VPL_Parameter _getopt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getopt_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _getopt_2 = { kPointerType,1,"char",2,1,&_getopt_3};
	VPL_Parameter _getopt_1 = { kIntType,4,NULL,0,0,&_getopt_2};
	VPL_ExtProcedure _getopt_F = {"getopt",getopt,&_getopt_1,&_getopt_R};

	VPL_Parameter _getlogin_r_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getlogin_r_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _getlogin_r_1 = { kPointerType,1,"char",1,0,&_getlogin_r_2};
	VPL_ExtProcedure _getlogin_r_F = {"getlogin_r",getlogin_r,&_getlogin_r_1,&_getlogin_r_R};

	VPL_Parameter _getlogin_R = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _getlogin_F = {"getlogin",getlogin,NULL,&_getlogin_R};

	VPL_Parameter _gethostname_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gethostname_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _gethostname_1 = { kPointerType,1,"char",1,0,&_gethostname_2};
	VPL_ExtProcedure _gethostname_F = {"gethostname",gethostname,&_gethostname_1,&_gethostname_R};

	VPL_Parameter _gethostid_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _gethostid_F = {"gethostid",gethostid,NULL,&_gethostid_R};

	VPL_Parameter _getgroups_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getgroups_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _getgroups_1 = { kIntType,4,NULL,0,0,&_getgroups_2};
	VPL_ExtProcedure _getgroups_F = {"getgroups",getgroups,&_getgroups_1,&_getgroups_R};

	VPL_Parameter _getgid_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getgid_F = {"getgid",getgid,NULL,&_getgid_R};

	VPL_Parameter _geteuid_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _geteuid_F = {"geteuid",geteuid,NULL,&_geteuid_R};

	VPL_Parameter _getegid_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _getegid_F = {"getegid",getegid,NULL,&_getegid_R};

	VPL_Parameter _getcwd_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _getcwd_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _getcwd_1 = { kPointerType,1,"char",1,0,&_getcwd_2};
	VPL_ExtProcedure _getcwd_F = {"getcwd",getcwd,&_getcwd_1,&_getcwd_R};

	VPL_Parameter _ftruncate_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ftruncate_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ftruncate_1 = { kIntType,4,NULL,0,0,&_ftruncate_2};
	VPL_ExtProcedure _ftruncate_F = {"ftruncate",ftruncate,&_ftruncate_1,&_ftruncate_R};

	VPL_Parameter _fpathconf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fpathconf_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fpathconf_1 = { kIntType,4,NULL,0,0,&_fpathconf_2};
	VPL_ExtProcedure _fpathconf_F = {"fpathconf",fpathconf,&_fpathconf_1,&_fpathconf_R};

	VPL_Parameter _fork_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _fork_F = {"fork",fork,NULL,&_fork_R};

	VPL_Parameter _fchdir_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fchdir_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _fchdir_F = {"fchdir",fchdir,&_fchdir_1,&_fchdir_R};

	VPL_Parameter _fchown_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fchown_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _fchown_2 = { kUnsignedType,4,NULL,0,0,&_fchown_3};
	VPL_Parameter _fchown_1 = { kIntType,4,NULL,0,0,&_fchown_2};
	VPL_ExtProcedure _fchown_F = {"fchown",fchown,&_fchown_1,&_fchown_R};

	VPL_Parameter _execvp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _execvp_2 = { kPointerType,1,"char",2,1,NULL};
	VPL_Parameter _execvp_1 = { kPointerType,1,"char",1,1,&_execvp_2};
	VPL_ExtProcedure _execvp_F = {"execvp",execvp,&_execvp_1,&_execvp_R};

	VPL_Parameter _execve_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _execve_3 = { kPointerType,1,"char",2,1,NULL};
	VPL_Parameter _execve_2 = { kPointerType,1,"char",2,1,&_execve_3};
	VPL_Parameter _execve_1 = { kPointerType,1,"char",1,1,&_execve_2};
	VPL_ExtProcedure _execve_F = {"execve",execve,&_execve_1,&_execve_R};

	VPL_Parameter _execv_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _execv_2 = { kPointerType,1,"char",2,1,NULL};
	VPL_Parameter _execv_1 = { kPointerType,1,"char",1,1,&_execv_2};
	VPL_ExtProcedure _execv_F = {"execv",execv,&_execv_1,&_execv_R};

	VPL_Parameter _execlp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _execlp_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _execlp_1 = { kPointerType,1,"char",1,1,&_execlp_2};
	VPL_ExtProcedure _execlp_F = {"execlp",execlp,&_execlp_1,&_execlp_R};

	VPL_Parameter _execle_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _execle_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _execle_1 = { kPointerType,1,"char",1,1,&_execle_2};
	VPL_ExtProcedure _execle_F = {"execle",execle,&_execle_1,&_execle_R};

	VPL_Parameter _execl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _execl_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _execl_1 = { kPointerType,1,"char",1,1,&_execl_2};
	VPL_ExtProcedure _execl_F = {"execl",execl,&_execl_1,&_execl_R};

	VPL_Parameter _dup2_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _dup2_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _dup2_1 = { kIntType,4,NULL,0,0,&_dup2_2};
	VPL_ExtProcedure _dup2_F = {"dup2",dup2,&_dup2_1,&_dup2_R};

	VPL_Parameter _dup_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _dup_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _dup_F = {"dup",dup,&_dup_1,&_dup_R};

	VPL_Parameter _crypt_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _crypt_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _crypt_1 = { kPointerType,1,"char",1,1,&_crypt_2};
	VPL_ExtProcedure _crypt_F = {"crypt",crypt,&_crypt_1,&_crypt_R};

	VPL_Parameter _confstr_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _confstr_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _confstr_2 = { kPointerType,1,"char",1,0,&_confstr_3};
	VPL_Parameter _confstr_1 = { kIntType,4,NULL,0,0,&_confstr_2};
	VPL_ExtProcedure _confstr_F = {"confstr",confstr,&_confstr_1,&_confstr_R};

	VPL_Parameter _close_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _close_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _close_F = {"close",close,&_close_1,&_close_R};

	VPL_Parameter _chown_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _chown_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _chown_2 = { kUnsignedType,4,NULL,0,0,&_chown_3};
	VPL_Parameter _chown_1 = { kPointerType,1,"char",1,1,&_chown_2};
	VPL_ExtProcedure _chown_F = {"chown",chown,&_chown_1,&_chown_R};

	VPL_Parameter _chdir_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _chdir_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _chdir_F = {"chdir",chdir,&_chdir_1,&_chdir_R};

	VPL_Parameter _alarm_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _alarm_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _alarm_F = {"alarm",alarm,&_alarm_1,&_alarm_R};

	VPL_Parameter _access_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _access_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _access_1 = { kPointerType,1,"char",1,1,&_access_2};
	VPL_ExtProcedure _access_F = {"access",access,&_access_1,&_access_R};

	VPL_Parameter __exit_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure __exit_F = {"_exit",_exit,&__exit_1,NULL};

	VPL_Parameter ___swbuf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___swbuf_2 = { kPointerType,88,"__sFILE",1,0,NULL};
	VPL_Parameter ___swbuf_1 = { kIntType,4,NULL,0,0,&___swbuf_2};
	VPL_ExtProcedure ___swbuf_F = {"__swbuf",__swbuf,&___swbuf_1,&___swbuf_R};

/*	VPL_Parameter ___svfscanf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___svfscanf_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter ___svfscanf_2 = { kPointerType,1,"char",1,1,&___svfscanf_3};
	VPL_Parameter ___svfscanf_1 = { kPointerType,88,"__sFILE",1,0,&___svfscanf_2};
	VPL_ExtProcedure ___svfscanf_F = {"__svfscanf",__svfscanf,&___svfscanf_1,&___svfscanf_R};
*/
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

	VPL_Parameter _forkpty_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _forkpty_4 = { kPointerType,sizeof(struct winsize),"winsize",1,0,NULL};
	VPL_Parameter _forkpty_3 = { kPointerType,sizeof(struct termios),"terminos",1,0,&_forkpty_4};
	VPL_Parameter _forkpty_2 = { kPointerType,1,"char",1,0,&_forkpty_3};
	VPL_Parameter _forkpty_1 = { kPointerType,4,"int",1,0,&_forkpty_2};
	VPL_ExtProcedure _forkpty_F = {"forkpty",forkpty,&_forkpty_1,&_forkpty_R};

#pragma mark ** Primitives **

#pragma mark ** Tables **

VPL_DictionaryNode VPX_LIBC_Constants[] =	{
	{"FILESEC_ACL_ALLOCSIZE", &_FILESEC_ACL_ALLOCSIZE_C},
	{"FILESEC_ACL_RAW", &_FILESEC_ACL_RAW_C},
	{"FILESEC_GRPUUID", &_FILESEC_GRPUUID_C},
	{"FILESEC_ACL", &_FILESEC_ACL_C},
	{"FILESEC_MODE", &_FILESEC_MODE_C},
	{"FILESEC_UUID", &_FILESEC_UUID_C},
	{"FILESEC_GROUP", &_FILESEC_GROUP_C},
	{"FILESEC_OWNER", &_FILESEC_OWNER_C},
	{"P_PGID", &_P_PGID_C},
	{"P_PID", &_P_PID_C},
	{"P_ALL", &_P_ALL_C},
	{"OSBigEndian", &_OSBigEndian_C},
	{"OSLittleEndian", &_OSLittleEndian_C},
	{"OSUnknownByteOrder", &_OSUnknownByteOrder_C},

#if MACOSX_DEPLOYMENT_TARGET > MAC_OS_X_VERSION_10_4
	{"REG_NOTEOL", &_REG_NOTEOL_C},
	{"REG_NOTBOL", &_REG_NOTBOL_C},
	{"REG_BADRPT", &_REG_BADRPT_C},
	{"REG_ESPACE", &_REG_ESPACE_C},
	{"REG_ERANGE", &_REG_ERANGE_C},
	{"REG_BADBR", &_REG_BADBR_C},
	{"REG_EBRACE", &_REG_EBRACE_C},
	{"REG_EPAREN", &_REG_EPAREN_C},
	{"REG_EBRACK", &_REG_EBRACK_C},
	{"REG_ESUBREG", &_REG_ESUBREG_C},
	{"REG_EESCAPE", &_REG_EESCAPE_C},
	{"REG_ECTYPE", &_REG_ECTYPE_C},
	{"REG_ECOLLATE", &_REG_ECOLLATE_C},
	{"REG_BADPAT", &_REG_BADPAT_C},
	{"REG_NOMATCH", &_REG_NOMATCH_C},
	{"REG_ENOSYS", &_REG_ENOSYS_C},
	{"REG_NEWLINE", &_REG_NEWLINE_C},
	{"REG_NOSUB", &_REG_NOSUB_C},
	{"REG_ICASE", &_REG_ICASE_C},
	{"REG_EXTENDED", &_REG_EXTENDED_C},
#endif
};

VPL_DictionaryNode VPX_LIBC_Structures[] =	{
	{"rpcent",&_VPXStruct_rpcent_S},
	{"addrinfo",&_VPXStruct_addrinfo_S},
	{"protoent",&_VPXStruct_protoent_S},
	{"servent",&_VPXStruct_servent_S},
	{"netent",&_VPXStruct_netent_S},
	{"hostent",&_VPXStruct_hostent_S},
	{"qelem",&_VPXStruct_qelem_S},
	{"in6_pktinfo",&_VPXStruct_in6_pktinfo_S},
	{"ipv6_mreq",&_VPXStruct_ipv6_mreq_S},
	{"sockaddr_in6",&_VPXStruct_sockaddr_in6_S},
	{"in6_addr",&_VPXStruct_in6_addr_S},
	{"ip_mreq",&_VPXStruct_ip_mreq_S},
	{"ip_opts",&_VPXStruct_ip_opts_S},
	{"sockaddr_in",&_VPXStruct_sockaddr_in_S},
	{"in_addr",&_VPXStruct_in_addr_S},
	{"ttysize",&_VPXStruct_ttysize_S},
	{"winsize",&_VPXStruct_winsize_S},
	{"extern_file",&_VPXStruct_extern_file_S},
	{"log2phys",&_VPXStruct_log2phys_S},
	{"fbootstraptransfer",&_VPXStruct_fbootstraptransfer_S},
	{"fstore",&_VPXStruct_fstore_S},
	{"radvisory",&_VPXStruct_radvisory_S},
	{"flock",&_VPXStruct_flock_S},
	{"stat",&_VPXStruct_stat_S},
	{"ostat",&_VPXStruct_ostat_S},
	{"tms",&_VPXStruct_tms_S},
	{"fhandle",&_VPXStruct_fhandle_S},
	{"vfsquery",&_VPXStruct_vfsquery_S},
	{"vfsidctl",&_VPXStruct_vfsidctl_S},
//	{"vfsconf",&_VPXStruct_vfsconf_S},
//	{"vfs_attr",&_VPXStruct_vfs_attr_S},
	{"vfsstatfs",&_VPXStruct_vfsstatfs_S},
	{"statfs",&_VPXStruct_statfs_S},
	{"fsid",&_VPXStruct_fsid_S},
	{"searchstate",&_VPXStruct_searchstate_S},
	{"fssearchblock",&_VPXStruct_fssearchblock_S},
	{"vol_attributes_attr",&_VPXStruct_vol_attributes_attr_S},
	{"vol_capabilities_attr",&_VPXStruct_vol_capabilities_attr_S},
	{"diskextent",&_VPXStruct_diskextent_S},
	{"attrreference",&_VPXStruct_attrreference_S},
	{"attribute_set",&_VPXStruct_attribute_set_S},
	{"attrlist",&_VPXStruct_attrlist_S},
	{"fsobj_id",&_VPXStruct_fsobj_id_S},
	{"xucred",&_VPXStruct_xucred_S},
	{"ucred",&_VPXStruct_ucred_S},
	{"au_evclass_map",&_VPXStruct_au_evclass_map_S},
	{"audit_fstat",&_VPXStruct_audit_fstat_S},
//	{"audit_stat",&_VPXStruct_audit_stat_S},
	{"au_qctrl",&_VPXStruct_au_qctrl_S},
//	{"au_record",&_VPXStruct_au_record_S},
//	{"au_token",&_VPXStruct_au_token_S},
	{"auditpinfo_addr",&_VPXStruct_auditpinfo_addr_S},
	{"auditpinfo",&_VPXStruct_auditpinfo_S},
	{"auditinfo_addr",&_VPXStruct_auditinfo_addr_S},
	{"auditinfo",&_VPXStruct_auditinfo_S},
	{"au_mask",&_VPXStruct_au_mask_S},
	{"au_tid_addr",&_VPXStruct_au_tid_addr_S},
	{"au_tid",&_VPXStruct_au_tid_S},
//	{"omsghdr",&_VPXStruct_omsghdr_S},
//	{"osockaddr",&_VPXStruct_osockaddr_S},
	{"cmsghdr",&_VPXStruct_cmsghdr_S},
	{"msghdr",&_VPXStruct_msghdr_S},
	{"sockaddr_storage",&_VPXStruct_sockaddr_storage_S},
	{"sockproto",&_VPXStruct_sockproto_S},
	{"sockaddr",&_VPXStruct_sockaddr_S},
	{"linger",&_VPXStruct_linger_S},
	{"iovec",&_VPXStruct_iovec_S},
	{"rlimit",&_VPXStruct_rlimit_S},
	{"rusage",&_VPXStruct_rusage_S},
	{"tm",&_VPXStruct_tm_S},
	{"clockinfo",&_VPXStruct_clockinfo_S},
	{"timezone",&_VPXStruct_timezone_S},
	{"itimerval",&_VPXStruct_itimerval_S},
	{"timeval",&_VPXStruct_timeval_S},
	{"sigstack",&_VPXStruct_sigstack_S},
	{"sigvec",&_VPXStruct_sigvec_S},
	{"sigaction",&_VPXStruct_sigaction_S},
	{"__sigaction",&_VPXStruct___sigaction_S},
	{"__siginfo",&_VPXStruct___siginfo_S},
	{"sigevent",&_VPXStruct_sigevent_S},
//	{"sigcontext",&_VPXStruct_sigcontext_S},
	{"fd_set",&_VPXStruct_fd_set_S},
	{"timespec",&_VPXStruct_timespec_S},
	{"accessx_descriptor",&_VPXStruct_accessx_descriptor_S},
	{"__sFILE",&_VPXStruct___sFILE_S},
	{"__sbuf",&_VPXStruct___sbuf_S},
//	{"ucontext64",&_VPXStruct_ucontext64_S},
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
	{"terminos",&_VPXStruct_termios_S},
#if MACOSX_DEPLOYMENT_TARGET > MAC_OS_X_VERSION_10_4
	{"regmatch_t",&_VPXStruct_regmatch_t_S},
	{"regex_t",&_VPXStruct_regex_t_S},
#endif
};

VPL_DictionaryNode VPX_LIBC_Procedures[] =	{
	{"sig_t",&_sig_t_F},
	{"innetgr",&_innetgr_F},
	{"hstrerror",&_hstrerror_F},
	{"herror",&_herror_F},
	{"endrpcent",&_endrpcent_F},
	{"setrpcent",&_setrpcent_F},
	{"getrpcent",&_getrpcent_F},
	{"getrpcbynumber",&_getrpcbynumber_F},
	{"getrpcbyname",&_getrpcbyname_F},
	{"getipnodebyname",&_getipnodebyname_F},
	{"getipnodebyaddr",&_getipnodebyaddr_F},
	{"gethostbyname2",&_gethostbyname2_F},
	{"freehostent",&_freehostent_F},
	{"setservent",&_setservent_F},
	{"setprotoent",&_setprotoent_F},
	{"setnetent",&_setnetent_F},
	{"sethostent",&_sethostent_F},
	{"getservent",&_getservent_F},
	{"getservbyport",&_getservbyport_F},
	{"getservbyname",&_getservbyname_F},
	{"getprotoent",&_getprotoent_F},
	{"getprotobynumber",&_getprotobynumber_F},
	{"getprotobyname",&_getprotobyname_F},
	{"getnetent",&_getnetent_F},
	{"getnetbyname",&_getnetbyname_F},
	{"getnetbyaddr",&_getnetbyaddr_F},
	{"getnameinfo",&_getnameinfo_F},
	{"gethostent",&_gethostent_F},
	{"gethostbyname",&_gethostbyname_F},
	{"gethostbyaddr",&_gethostbyaddr_F},
	{"getaddrinfo",&_getaddrinfo_F},
	{"gai_strerror",&_gai_strerror_F},
	{"freeaddrinfo",&_freeaddrinfo_F},
	{"endservent",&_endservent_F},
	{"endprotoent",&_endprotoent_F},
	{"endnetent",&_endnetent_F},
	{"endhostent",&_endhostent_F},
	{"map_fd",&_map_fd_F},
	{"inet_nsap_ntoa",&_inet_nsap_ntoa_F},
	{"inet_nsap_addr",&_inet_nsap_addr_F},
	{"inet_neta",&_inet_neta_F},
	{"inet_net_pton",&_inet_net_pton_F},
	{"inet_net_ntop",&_inet_net_ntop_F},
	{"inet_network",&_inet_network_F},
	{"inet_netof",&_inet_netof_F},
	{"inet_makeaddr",&_inet_makeaddr_F},
	{"inet_lnaof",&_inet_lnaof_F},
	{"inet_aton",&_inet_aton_F},
	{"addr2ascii",&_addr2ascii_F},
	{"ascii2addr",&_ascii2addr_F},
	{"inet_pton",&_inet_pton_F},
	{"inet_ntop",&_inet_ntop_F},
	{"inet_ntoa",&_inet_ntoa_F},
	{"inet_addr",&_inet_addr_F},
	{"inet6_rthdr_getflags",&_inet6_rthdr_getflags_F},
	{"inet6_rthdr_getaddr",&_inet6_rthdr_getaddr_F},
	{"inet6_rthdr_segments",&_inet6_rthdr_segments_F},
	{"inet6_rthdr_lasthop",&_inet6_rthdr_lasthop_F},
	{"inet6_rthdr_add",&_inet6_rthdr_add_F},
	{"inet6_rthdr_init",&_inet6_rthdr_init_F},
	{"inet6_rthdr_space",&_inet6_rthdr_space_F},
	{"inet6_option_find",&_inet6_option_find_F},
	{"inet6_option_next",&_inet6_option_next_F},
	{"inet6_option_alloc",&_inet6_option_alloc_F},
	{"inet6_option_append",&_inet6_option_append_F},
	{"inet6_option_init",&_inet6_option_init_F},
	{"inet6_option_space",&_inet6_option_space_F},
	{"ioctl",&_ioctl_F},
	{"filesec_query_property",&_filesec_query_property_F},
	{"filesec_set_property",&_filesec_set_property_F},
	{"filesec_get_property",&_filesec_get_property_F},
	{"filesec_free",&_filesec_free_F},
	{"filesec_dup",&_filesec_dup_F},
	{"filesec_init",&_filesec_init_F},
	{"flock",&_flock_F},
	{"openx_np",&_openx_np_F},
	{"fcntl",&_fcntl_F},
	{"creat",&_creat_F},
	{"open",&_open_F},
	{"umaskx_np",&_umaskx_np_F},
	{"statx_np",&_statx_np_F},
	{"mkfifox_np",&_mkfifox_np_F},
	{"mkdirx_np",&_mkdirx_np_F},
	{"lstatx_np",&_lstatx_np_F},
	{"fstatx_np",&_fstatx_np_F},
	{"fchmodx_np",&_fchmodx_np_F},
	{"fchflags",&_fchflags_F},
	{"chmodx_np",&_chmodx_np_F},
	{"chflags",&_chflags_F},
	{"umask",&_umask_F},
	{"stat",&_stat_F},
	{"mkfifo",&_mkfifo_F},
	{"mkdir",&_mkdir_F},
	{"lstat",&_lstat_F},
	{"fstat",&_fstat_F},
	{"fchmod",&_fchmod_F},
	{"chmod",&_chmod_F},
	{"times",&_times_F},
	{"getvfsbyname",&_getvfsbyname_F},
	{"unmount",&_unmount_F},
	{"statfs",&_statfs_F},
	{"mount",&_mount_F},
	{"getmntinfo",&_getmntinfo_F},
	{"getfsstat",&_getfsstat_F},
	{"getfh",&_getfh_F},
	{"fstatfs",&_fstatfs_F},
	{"fhopen",&_fhopen_F},
	{"setaudit_addr",&_setaudit_addr_F},
	{"getaudit_addr",&_getaudit_addr_F},
	{"setaudit",&_setaudit_F},
	{"getaudit",&_getaudit_F},
	{"setauid",&_setauid_F},
	{"getauid",&_getauid_F},
	{"auditctl",&_auditctl_F},
	{"auditon",&_auditon_F},
	{"audit",&_audit_F},
	{"socketpair",&_socketpair_F},
	{"socket",&_socket_F},
	{"shutdown",&_shutdown_F},
	{"setsockopt",&_setsockopt_F},
	{"sendto",&_sendto_F},
	{"sendmsg",&_sendmsg_F},
	{"send",&_send_F},
	{"recvmsg",&_recvmsg_F},
	{"recvfrom",&_recvfrom_F},
	{"recv",&_recv_F},
	{"listen",&_listen_F},
	{"getsockopt",&_getsockopt_F},
	{"getsockname",&_getsockname_F},
	{"getpeername",&_getpeername_F},
	{"connect",&_connect_F},
	{"bind",&_bind_F},
	{"accept",&_accept_F},
	{"strtouq",&_strtouq_F},
	{"strtoq",&_strtoq_F},
	{"reallocf",&_reallocf_F},
	{"rand_r",&_rand_r_F},
	{"srandomdev",&_srandomdev_F},
	{"sranddev",&_sranddev_F},
	{"sradixsort",&_sradixsort_F},
	{"setprogname",&_setprogname_F},
	{"radixsort",&_radixsort_F},
	{"qsort_r",&_qsort_r_F},
	{"mergesort",&_mergesort_F},
	{"heapsort",&_heapsort_F},
	{"getprogname",&_getprogname_F},
	{"getloadavg",&_getloadavg_F},
	{"getbsize",&_getbsize_F},
	{"devname_r",&_devname_r_F},
	{"devname",&_devname_F},
	{"daemon",&_daemon_F},
	{"cgetustr",&_cgetustr_F},
	{"cgetstr",&_cgetstr_F},
	{"cgetset",&_cgetset_F},
	{"cgetnum",&_cgetnum_F},
	{"cgetnext",&_cgetnext_F},
	{"cgetmatch",&_cgetmatch_F},
	{"cgetfirst",&_cgetfirst_F},
	{"cgetent",&_cgetent_F},
	{"cgetclose",&_cgetclose_F},
	{"cgetcap",&_cgetcap_F},
	{"arc4random_stir",&_arc4random_stir_F},
	{"arc4random_addrandom",&_arc4random_addrandom_F},
	{"arc4random",&_arc4random_F},
	{"unsetenv",&_unsetenv_F},
	{"unlockpt",&_unlockpt_F},
	{"srandom",&_srandom_F},
	{"srand48",&_srand48_F},
	{"setstate",&_setstate_F},
	{"setenv",&_setenv_F},
	{"seed48",&_seed48_F},
	{"realpath",&_realpath_F},
	{"random",&_random_F},
	{"putenv",&_putenv_F},
	{"ptsname",&_ptsname_F},
	{"posix_openpt",&_posix_openpt_F},
	{"nrand48",&_nrand48_F},
	{"mrand48",&_mrand48_F},
	{"lrand48",&_lrand48_F},
	{"lcong48",&_lcong48_F},
	{"l64a",&_l64a_F},
	{"jrand48",&_jrand48_F},
	{"initstate",&_initstate_F},
	{"grantpt",&_grantpt_F},
	{"gcvt",&_gcvt_F},
	{"fcvt",&_fcvt_F},
	{"erand48",&_erand48_F},
	{"ecvt",&_ecvt_F},
	{"drand48",&_drand48_F},
	{"a64l",&_a64l_F},
	{"wctomb",&_wctomb_F},
	{"wcstombs",&_wcstombs_F},
	{"system",&_system_F},
	{"strtoull",&_strtoull_F},
	{"strtoul",&_strtoul_F},
	{"strtoll",&_strtoll_F},
	{"strtold",&_strtold_F},
	{"strtol",&_strtol_F},
	{"strtof",&_strtof_F},
	{"strtod",&_strtod_F},
	{"srand",&_srand_F},
	{"realloc",&_realloc_F},
	{"rand",&_rand_F},
	{"qsort",&_qsort_F},
	{"mbtowc",&_mbtowc_F},
	{"mbstowcs",&_mbstowcs_F},
	{"mblen",&_mblen_F},
	{"malloc",&_malloc_F},
	{"lldiv",&_lldiv_F},
	{"llabs",&_llabs_F},
	{"ldiv",&_ldiv_F},
	{"labs",&_labs_F},
	{"getenv",&_getenv_F},
	{"free",&_free_F},
	{"exit",&_exit_F},
	{"div",&_div_F},
	{"calloc",&_calloc_F},
	{"bsearch",&_bsearch_F},
	{"atoll",&_atoll_F},
	{"atol",&_atol_F},
	{"atoi",&_atoi_F},
	{"atof",&_atof_F},
	{"atexit",&_atexit_F},
	{"abs",&_abs_F},
	{"abort",&_abort_F},
	{"wait4",&_wait4_F},
	{"wait3",&_wait3_F},
	{"waitpid",&_waitpid_F},
	{"wait",&_wait_F},
	{"setrlimit",&_setrlimit_F},
	{"setpriority",&_setpriority_F},
	{"getrusage",&_getrusage_F},
	{"getrlimit",&_getrlimit_F},
	{"getpriority",&_getpriority_F},
	{"strsignal",&_strsignal_F},
	{"strsep",&_strsep_F},
	{"strncasecmp",&_strncasecmp_F},
	{"strmode",&_strmode_F},
	{"strlcpy",&_strlcpy_F},
	{"strlcat",&_strlcat_F},
	{"strcasecmp",&_strcasecmp_F},
	{"rindex",&_rindex_F},
	{"index",&_index_F},
	{"ffs",&_ffs_F},
	{"bzero",&_bzero_F},
	{"bcopy",&_bcopy_F},
	{"bcmp",&_bcmp_F},
	{"strdup",&_strdup_F},
	{"strtok_r",&_strtok_r_F},
	{"memccpy",&_memccpy_F},
	{"strxfrm",&_strxfrm_F},
	{"strtok",&_strtok_F},
	{"strstr",&_strstr_F},
	{"strspn",&_strspn_F},
	{"strrchr",&_strrchr_F},
	{"strpbrk",&_strpbrk_F},
	{"strnstr",&_strnstr_F},
	{"strncpy",&_strncpy_F},
	{"strncmp",&_strncmp_F},
	{"strncat",&_strncat_F},
	{"strlen",&_strlen_F},
	{"strerror_r",&_strerror_r_F},
	{"strerror",&_strerror_F},
	{"strcspn",&_strcspn_F},
	{"strcpy",&_strcpy_F},
	{"strcoll",&_strcoll_F},
	{"strcmp",&_strcmp_F},
	{"strchr",&_strchr_F},
	{"strcat",&_strcat_F},
	{"strcasestr",&_strcasestr_F},
	{"stpcpy",&_stpcpy_F},
	{"memset",&_memset_F},
	{"memmove",&_memmove_F},
	{"memcpy",&_memcpy_F},
	{"memcmp",&_memcmp_F},
	{"memchr",&_memchr_F},
	{"fsctl",&_fsctl_F},
	{"searchfs",&_searchfs_F},
	{"getdirentriesattr",&_getdirentriesattr_F},
	{"checkuseraccess",&_checkuseraccess_F},
	{"exchangedata",&_exchangedata_F},
	{"setattrlist",&_setattrlist_F},
	{"getattrlist",&_getattrlist_F},
	{"getsubopt",&_getsubopt_F},
	{"valloc",&_valloc_F},
	{"undelete",&_undelete_F},
	{"ttyslot",&_ttyslot_F},
	{"syscall",&_syscall_F},
	{"swapon",&_swapon_F},
	{"strtofflags",&_strtofflags_F},
	{"setwgroups_np",&_setwgroups_np_F},
	{"setusershell",&_setusershell_F},
	{"setsgroups_np",&_setsgroups_np_F},
	{"setruid",&_setruid_F},
	{"setrgid",&_setrgid_F},
	{"setmode",&_setmode_F},
	{"setlogin",&_setlogin_F},
	{"setkey",&_setkey_F},
	{"sethostname",&_sethostname_F},
	{"sethostid",&_sethostid_F},
	{"setgroups",&_setgroups_F},
	{"setdomainname",&_setdomainname_F},
	{"sbrk",&_sbrk_F},
	{"ruserok",&_ruserok_F},
	{"rresvport_af",&_rresvport_af_F},
	{"rresvport",&_rresvport_F},
	{"revoke",&_revoke_F},
	{"reboot",&_reboot_F},
	{"rcmd",&_rcmd_F},
	{"pthread_getugid_np",&_pthread_getugid_np_F},
	{"pthread_setugid_np",&_pthread_setugid_np_F},
	{"profil",&_profil_F},
	{"nfssvc",&_nfssvc_F},
	{"mktemp",&_mktemp_F},
	{"mkstemps",&_mkstemps_F},
	{"mkstemp",&_mkstemp_F},
	{"mknod",&_mknod_F},
	{"mkdtemp",&_mkdtemp_F},
	{"issetugid",&_issetugid_F},
	{"iruserok",&_iruserok_F},
	{"initgroups",&_initgroups_F},
	{"getwgroups_np",&_getwgroups_np_F},
	{"getusershell",&_getusershell_F},
	{"getsgroups_np",&_getsgroups_np_F},
	{"getpeereid",&_getpeereid_F},
	{"getpass",&_getpass_F},
	{"getpagesize",&_getpagesize_F},
	{"getmode",&_getmode_F},
	{"getgrouplist",&_getgrouplist_F},
	{"getdomainname",&_getdomainname_F},
	{"getdtablesize",&_getdtablesize_F},
	{"fsync",&_fsync_F},
	{"fflagstostr",&_fflagstostr_F},
	{"execvP",&_execvP_F},
	{"endusershell",&_endusershell_F},
	{"encrypt",&_encrypt_F},
	{"chroot",&_chroot_F},
	{"brk",&_brk_F},
	{"add_profil",&_add_profil_F},
	{"acct",&_acct_F},
	{"accessx_np",&_accessx_np_F},
	{"_Exit",&__Exit_F},
	{"pselect",&_pselect_F},
	{"utimes",&_utimes_F},
	{"setitimer",&_setitimer_F},
	{"select",&_select_F},
	{"gettimeofday",&_gettimeofday_F},
	{"getitimer",&_getitimer_F},
	{"settimeofday",&_settimeofday_F},
	{"futimes",&_futimes_F},
	{"adjtime",&_adjtime_F},
	{"nanosleep",&_nanosleep_F},
	{"timegm",&_timegm_F},
	{"timelocal",&_timelocal_F},
	{"time2posix",&_time2posix_F},
	{"tzsetwall",&_tzsetwall_F},
	{"timezone",&_timezone_F},
	{"posix2time",&_posix2time_F},
	{"localtime_r",&_localtime_r_F},
	{"gmtime_r",&_gmtime_r_F},
	{"ctime_r",&_ctime_r_F},
	{"asctime_r",&_asctime_r_F},
	{"tzset",&_tzset_F},
	{"time",&_time_F},
	{"strptime",&_strptime_F},
	{"strftime",&_strftime_F},
	{"mktime",&_mktime_F},
	{"localtime",&_localtime_F},
	{"gmtime",&_gmtime_F},
	{"getdate",&_getdate_F},
	{"difftime",&_difftime_F},
	{"ctime",&_ctime_F},
	{"clock",&_clock_F},
	{"asctime",&_asctime_F},
	{"sigvec",&_sigvec_F},
	{"sigsetmask",&_sigsetmask_F},
	{"sigreturn",&_sigreturn_F},
	{"sigblock",&_sigblock_F},
	{"psignal",&_psignal_F},
	{"sigwait",&_sigwait_F},
	{"sigsuspend",&_sigsuspend_F},
	{"sigset",&_sigset_F},
	{"sigrelse",&_sigrelse_F},
	{"sigprocmask",&_sigprocmask_F},
	{"sigpending",&_sigpending_F},
	{"sigpause",&_sigpause_F},
	{"sigismember",&_sigismember_F},
	{"siginterrupt",&_siginterrupt_F},
	{"sigignore",&_sigignore_F},
	{"sighold",&_sighold_F},
	{"sigfillset",&_sigfillset_F},
	{"sigemptyset",&_sigemptyset_F},
	{"sigdelset",&_sigdelset_F},
	{"sigaltstack",&_sigaltstack_F},
	{"sigaddset",&_sigaddset_F},
	{"sigaction",&_sigaction_F},
	{"pthread_sigmask",&_pthread_sigmask_F},
	{"pthread_kill",&_pthread_kill_F},
	{"killpg",&_killpg_F},
	{"kill",&_kill_F},
	{"bsd_signal",&_bsd_signal_F},
	{"raise",&_raise_F},
	{"signal",&_signal_F},
//	{"htonl",&_htonl_F},
//	{"ntohl",&_ntohl_F},
//	{"htons",&_htons_F},
//	{"ntohs",&_ntohs_F},
	{"write",&_write_F},
	{"vfork",&_vfork_F},
	{"usleep",&_usleep_F},
	{"unlink",&_unlink_F},
	{"ualarm",&_ualarm_F},
	{"ttyname_r",&_ttyname_r_F},
	{"ttyname",&_ttyname_F},
	{"truncate",&_truncate_F},
	{"tcsetpgrp",&_tcsetpgrp_F},
	{"tcgetpgrp",&_tcgetpgrp_F},
	{"sysconf",&_sysconf_F},
	{"sync",&_sync_F},
	{"symlink",&_symlink_F},
	{"swab",&_swab_F},
	{"sleep",&_sleep_F},
	{"setuid",&_setuid_F},
	{"setsid",&_setsid_F},
	{"setreuid",&_setreuid_F},
	{"setregid",&_setregid_F},
	{"setpgrp",&_setpgrp_F},
	{"setpgid",&_setpgid_F},
	{"setgid",&_setgid_F},
	{"seteuid",&_seteuid_F},
	{"setegid",&_setegid_F},
	{"rmdir",&_rmdir_F},
	{"readlink",&_readlink_F},
	{"read",&_read_F},
	{"pwrite",&_pwrite_F},
	{"pread",&_pread_F},
	{"pipe",&_pipe_F},
	{"pause",&_pause_F},
	{"pathconf",&_pathconf_F},
	{"nice",&_nice_F},
	{"lseek",&_lseek_F},
	{"lockf",&_lockf_F},
	{"link",&_link_F},
	{"lchown",&_lchown_F},
	{"isatty",&_isatty_F},
	{"getwd",&_getwd_F},
	{"getuid",&_getuid_F},
	{"getsid",&_getsid_F},
	{"getppid",&_getppid_F},
	{"getpid",&_getpid_F},
	{"getpgrp",&_getpgrp_F},
	{"getpgid",&_getpgid_F},
	{"getopt",&_getopt_F},
	{"getlogin_r",&_getlogin_r_F},
	{"getlogin",&_getlogin_F},
	{"gethostname",&_gethostname_F},
	{"gethostid",&_gethostid_F},
	{"getgroups",&_getgroups_F},
	{"getgid",&_getgid_F},
	{"geteuid",&_geteuid_F},
	{"getegid",&_getegid_F},
	{"getcwd",&_getcwd_F},
	{"ftruncate",&_ftruncate_F},
	{"fpathconf",&_fpathconf_F},
	{"fork",&_fork_F},
	{"fchdir",&_fchdir_F},
	{"fchown",&_fchown_F},
	{"execvp",&_execvp_F},
	{"execve",&_execve_F},
	{"execv",&_execv_F},
	{"execlp",&_execlp_F},
	{"execle",&_execle_F},
	{"execl",&_execl_F},
	{"dup2",&_dup2_F},
	{"dup",&_dup_F},
	{"crypt",&_crypt_F},
	{"confstr",&_confstr_F},
	{"close",&_close_F},
	{"chown",&_chown_F},
	{"chdir",&_chdir_F},
	{"alarm",&_alarm_F},
	{"access",&_access_F},
	{"_exit",&__exit_F},
	{"__swbuf",&___swbuf_F},
//	{"__svfscanf",&___svfscanf_F},
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
	{"forkpty",&_forkpty_F},
#if MACOSX_DEPLOYMENT_TARGET > MAC_OS_X_VERSION_10_4
	{"regfree",&_regfree_F},
	{"regexec",&_regexec_F},
	{"regerror",&_regerror_F},
	{"regcomp",&_regcomp_F},
#endif

};

#pragma mark ### Counts ###

#if MACOSX_DEPLOYMENT_TARGET > MAC_OS_X_VERSION_10_4
Nat4	VPX_LIBC_Constants_Number = 14 + 20;
Nat4	VPX_LIBC_Structures_Number = 99 + 1 + 2 - 9;			// ( 9 removed for 10.6:  vfs_attr, omsghdr, osockaddr, sigcontext, ucontext64 )
Nat4	VPX_LIBC_Procedures_Number = 559 + 4 - 5;
#else
Nat4	VPX_LIBC_Constants_Number = 14;
Nat4	VPX_LIBC_Structures_Number = 99 + 1 - 5;			// ( 5 removed for 10.6:  vfs_attr, omsghdr, osockaddr, sigcontext, ucontext64 )
Nat4	VPX_LIBC_Procedures_Number = 558 - 1 + 1;
#endif

#pragma export on

Nat4	load_MacOSX_LIBC_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_LIBC_Constants(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_LIBC_Constants_Number,VPX_LIBC_Constants);
		
		return result;
}

Nat4	load_MacOSX_LIBC_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_LIBC_Structures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_LIBC_Structures_Number,VPX_LIBC_Structures);
		
		return result;
}

Nat4	load_MacOSX_LIBC_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_LIBC_Procedures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_LIBC_Procedures_Number,VPX_LIBC_Procedures);
		
		return result;
}

Nat4	load_MacOSX_LIBC_Primitives(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_LIBC_Primitives(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
       
        return kNOERROR;

}



#pragma export off
