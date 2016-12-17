/*
	
	MacOSX_UNIX.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/
//#include "UnixStandard.h"
#ifdef __MWERKS__
#include "VPL_Compiler.h"
//FILE *popen(const char *, const char *);
//int pclose(FILE *);
#elif __GNUC__
//#include "fenv.h"
//#include <MartenEngine/MartenEngine.h>
#endif	

#pragma mark --------------- Constants ---------------

	VPL_ExtConstant _OSBigEndian_C = {"OSBigEndian",OSBigEndian,NULL};
	VPL_ExtConstant _OSLittleEndian_C = {"OSLittleEndian",OSLittleEndian,NULL};
	VPL_ExtConstant _OSUnknownByteOrder_C = {"OSUnknownByteOrder",OSUnknownByteOrder,NULL};
	VPL_ExtConstant _P_PGID_C = {"P_PGID",P_PGID,NULL};
	VPL_ExtConstant _P_PID_C = {"P_PID",P_PID,NULL};
	VPL_ExtConstant _P_ALL_C = {"P_ALL",P_ALL,NULL};
//Not Available in Mac OS X 10.6
#if 0
	VPL_ExtConstant __FP_SUPERNORMAL_C = {"_FP_SUPERNORMAL",_FP_SUPERNORMAL,NULL};
	VPL_ExtConstant __FP_SUBNORMAL_C = {"_FP_SUBNORMAL",_FP_SUBNORMAL,NULL};
	VPL_ExtConstant __FP_NORMAL_C = {"_FP_NORMAL",_FP_NORMAL,NULL};
	VPL_ExtConstant __FP_ZERO_C = {"_FP_ZERO",_FP_ZERO,NULL};
	VPL_ExtConstant __FP_INFINITE_C = {"_FP_INFINITE",_FP_INFINITE,NULL};
	VPL_ExtConstant __FP_NAN_C = {"_FP_NAN",_FP_NAN,NULL};
	VPL_ExtConstant __FE_DOWNWARD_C = {"_FE_DOWNWARD",_FE_DOWNWARD,NULL};
	VPL_ExtConstant __FE_UPWARD_C = {"_FE_UPWARD",_FE_UPWARD,NULL};
	VPL_ExtConstant __FE_TOWARDZERO_C = {"_FE_TOWARDZERO",_FE_TOWARDZERO,NULL};
	VPL_ExtConstant __FE_TONEAREST_C = {"_FE_TONEAREST",_FE_TONEAREST,NULL};
	VPL_ExtConstant __FE_ALL_EXCEPT_C = {"_FE_ALL_EXCEPT",_FE_ALL_EXCEPT,NULL};
	VPL_ExtConstant __FE_INVALID_C = {"_FE_INVALID",_FE_INVALID,NULL};
	VPL_ExtConstant __FE_OVERFLOW_C = {"_FE_OVERFLOW",_FE_OVERFLOW,NULL};
	VPL_ExtConstant __FE_UNDERFLOW_C = {"_FE_UNDERFLOW",_FE_UNDERFLOW,NULL};
	VPL_ExtConstant __FE_DIVBYZERO_C = {"_FE_DIVBYZERO",_FE_DIVBYZERO,NULL};
	VPL_ExtConstant __FE_INEXACT_C = {"_FE_INEXACT",_FE_INEXACT,NULL};
#endif

#pragma mark --------------- Structures ---------------

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

	VPL_ExtField _VPXStruct_timespec_2 = { "tv_nsec",offsetof(struct timespec,tv_nsec),sizeof(long int),kIntType,"NULL",0,0,"long int",NULL};
	VPL_ExtField _VPXStruct_timespec_1 = { "tv_sec",offsetof(struct timespec,tv_sec),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_timespec_2};
	VPL_ExtStructure _VPXStruct_timespec_S = {"timespec",&_VPXStruct_timespec_1,sizeof(struct timespec)};

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

	VPL_ExtField _VPXStruct_timeval_2 = { "tv_usec",offsetof(struct timeval,tv_usec),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
	VPL_ExtField _VPXStruct_timeval_1 = { "tv_sec",offsetof(struct timeval,tv_sec),sizeof(long int),kIntType,"NULL",0,0,"long int",&_VPXStruct_timeval_2};
	VPL_ExtStructure _VPXStruct_timeval_S = {"timeval",&_VPXStruct_timeval_1,sizeof(struct timeval)};

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
//	VPL_ExtField _VPXStruct___siginfo_8 = { "si_value",offsetof(struct __siginfo,si_value),sizeof(sigval),kStructureType,"unsigned long",0,4,"sigval",&_VPXStruct___siginfo_9};
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
//	VPL_ExtField _VPXStruct_sigevent_3 = { "sigev_value",offsetof(struct sigevent,sigev_value),sizeof(sigval),kStructureType,"void",1,0,"sigval",&_VPXStruct_sigevent_4};
	VPL_ExtField _VPXStruct_sigevent_2 = { "sigev_signo",offsetof(struct sigevent,sigev_signo),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct_sigevent_4};
	VPL_ExtField _VPXStruct_sigevent_1 = { "sigev_notify",offsetof(struct sigevent,sigev_notify),sizeof(int),kIntType,"void",1,0,"int",&_VPXStruct_sigevent_2};
	VPL_ExtStructure _VPXStruct_sigevent_S = {"sigevent",&_VPXStruct_sigevent_1,sizeof(struct sigevent)};

//	VPL_ExtField _VPXStruct_sigcontext_2 = { "sc_mask",offsetof(struct sigcontext,sc_mask),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
//	VPL_ExtField _VPXStruct_sigcontext_1 = { "sc_onstack",offsetof(struct sigcontext,sc_onstack),sizeof(int),kIntType,"NULL",0,0,"int",&_VPXStruct_sigcontext_2};
//	VPL_ExtStructure _VPXStruct_sigcontext_S = {"sigcontext",&_VPXStruct_sigcontext_1,sizeof(struct sigcontext)};

	VPL_ExtField _VPXStruct_exception_5 = { "retval",offsetof(struct exception,retval),sizeof(double),kFloatType,"NULL",0,0,"double",NULL};
	VPL_ExtField _VPXStruct_exception_4 = { "arg2",offsetof(struct exception,arg2),sizeof(double),kFloatType,"NULL",0,0,"double",&_VPXStruct_exception_5};
	VPL_ExtField _VPXStruct_exception_3 = { "arg1",offsetof(struct exception,arg1),sizeof(double),kFloatType,"NULL",0,0,"double",&_VPXStruct_exception_4};
	VPL_ExtField _VPXStruct_exception_2 = { "name",offsetof(struct exception,name),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_exception_3};
	VPL_ExtField _VPXStruct_exception_1 = { "type",offsetof(struct exception,type),sizeof(int),kIntType,"char",1,1,"int",&_VPXStruct_exception_2};
	VPL_ExtStructure _VPXStruct_exception_S = {"exception",&_VPXStruct_exception_1,sizeof(struct exception)};

	VPL_ExtField _VPXStruct_lconv_24 = { "int_n_sign_posn",offsetof(struct lconv,int_n_sign_posn),sizeof(char),kIntType,"NULL",0,0,"char",NULL};
	VPL_ExtField _VPXStruct_lconv_23 = { "int_p_sign_posn",offsetof(struct lconv,int_p_sign_posn),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_24};
	VPL_ExtField _VPXStruct_lconv_22 = { "int_n_sep_by_space",offsetof(struct lconv,int_n_sep_by_space),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_23};
	VPL_ExtField _VPXStruct_lconv_21 = { "int_p_sep_by_space",offsetof(struct lconv,int_p_sep_by_space),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_22};
	VPL_ExtField _VPXStruct_lconv_20 = { "int_n_cs_precedes",offsetof(struct lconv,int_n_cs_precedes),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_21};
	VPL_ExtField _VPXStruct_lconv_19 = { "int_p_cs_precedes",offsetof(struct lconv,int_p_cs_precedes),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_20};
	VPL_ExtField _VPXStruct_lconv_18 = { "n_sign_posn",offsetof(struct lconv,n_sign_posn),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_19};
	VPL_ExtField _VPXStruct_lconv_17 = { "p_sign_posn",offsetof(struct lconv,p_sign_posn),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_18};
	VPL_ExtField _VPXStruct_lconv_16 = { "n_sep_by_space",offsetof(struct lconv,n_sep_by_space),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_17};
	VPL_ExtField _VPXStruct_lconv_15 = { "n_cs_precedes",offsetof(struct lconv,n_cs_precedes),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_16};
	VPL_ExtField _VPXStruct_lconv_14 = { "p_sep_by_space",offsetof(struct lconv,p_sep_by_space),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_15};
	VPL_ExtField _VPXStruct_lconv_13 = { "p_cs_precedes",offsetof(struct lconv,p_cs_precedes),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_14};
	VPL_ExtField _VPXStruct_lconv_12 = { "frac_digits",offsetof(struct lconv,frac_digits),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_13};
	VPL_ExtField _VPXStruct_lconv_11 = { "int_frac_digits",offsetof(struct lconv,int_frac_digits),sizeof(char),kIntType,"NULL",0,0,"char",&_VPXStruct_lconv_12};
	VPL_ExtField _VPXStruct_lconv_10 = { "negative_sign",offsetof(struct lconv,negative_sign),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_11};
	VPL_ExtField _VPXStruct_lconv_9 = { "positive_sign",offsetof(struct lconv,positive_sign),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_10};
	VPL_ExtField _VPXStruct_lconv_8 = { "mon_grouping",offsetof(struct lconv,mon_grouping),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_9};
	VPL_ExtField _VPXStruct_lconv_7 = { "mon_thousands_sep",offsetof(struct lconv,mon_thousands_sep),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_8};
	VPL_ExtField _VPXStruct_lconv_6 = { "mon_decimal_point",offsetof(struct lconv,mon_decimal_point),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_7};
	VPL_ExtField _VPXStruct_lconv_5 = { "currency_symbol",offsetof(struct lconv,currency_symbol),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_6};
	VPL_ExtField _VPXStruct_lconv_4 = { "int_curr_symbol",offsetof(struct lconv,int_curr_symbol),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_5};
	VPL_ExtField _VPXStruct_lconv_3 = { "grouping",offsetof(struct lconv,grouping),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_4};
	VPL_ExtField _VPXStruct_lconv_2 = { "thousands_sep",offsetof(struct lconv,thousands_sep),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_3};
	VPL_ExtField _VPXStruct_lconv_1 = { "decimal_point",offsetof(struct lconv,decimal_point),sizeof(void *),kPointerType,"char",1,1,"T*",&_VPXStruct_lconv_2};
	VPL_ExtStructure _VPXStruct_lconv_S = {"lconv",&_VPXStruct_lconv_1,sizeof(struct lconv)};

//	VPL_ExtField _VPXStruct_ucontext64_6 = { "uc_mcontext64",offsetof(struct ucontext64,uc_mcontext64),sizeof(void *),kPointerType,"mcontext64",1,0,"T*",NULL};
//	VPL_ExtField _VPXStruct_ucontext64_5 = { "uc_mcsize",offsetof(struct ucontext64,uc_mcsize),sizeof(unsigned long),kUnsignedType,"mcontext64",1,0,"unsigned long",&_VPXStruct_ucontext64_6};
//	VPL_ExtField _VPXStruct_ucontext64_4 = { "uc_link",offsetof(struct ucontext64,uc_link),sizeof(void *),kPointerType,"ucontext64",1,32,"T*",&_VPXStruct_ucontext64_5};
//	VPL_ExtField _VPXStruct_ucontext64_3 = { "uc_stack",offsetof(struct ucontext64,uc_stack),sizeof(struct sigaltstack),kStructureType,"ucontext64",1,32,"sigaltstack",&_VPXStruct_ucontext64_4};
//	VPL_ExtField _VPXStruct_ucontext64_2 = { "uc_sigmask",offsetof(struct ucontext64,uc_sigmask),sizeof(unsigned int),kUnsignedType,"ucontext64",1,32,"unsigned int",&_VPXStruct_ucontext64_3};
//	VPL_ExtField _VPXStruct_ucontext64_1 = { "uc_onstack",offsetof(struct ucontext64,uc_onstack),sizeof(int),kIntType,"ucontext64",1,32,"int",&_VPXStruct_ucontext64_2};
//	VPL_ExtStructure _VPXStruct_ucontext64_S = {"ucontext64",&_VPXStruct_ucontext64_1,sizeof(struct ucontext64)};

//	VPL_ExtField _VPXStruct_ucontext_6 = { "uc_mcontext",offsetof(struct ucontext,uc_mcontext),sizeof(void *),kPointerType,"mcontext",1,0,"T*",NULL};
//	VPL_ExtField _VPXStruct_ucontext_5 = { "uc_mcsize",offsetof(struct ucontext,uc_mcsize),sizeof(unsigned long),kUnsignedType,"mcontext",1,0,"unsigned long",&_VPXStruct_ucontext_6};
//	VPL_ExtField _VPXStruct_ucontext_4 = { "uc_link",offsetof(struct ucontext,uc_link),sizeof(void *),kPointerType,"ucontext",1,32,"T*",&_VPXStruct_ucontext_5};
//	VPL_ExtField _VPXStruct_ucontext_3 = { "uc_stack",offsetof(struct ucontext,uc_stack),sizeof(struct sigaltstack),kStructureType,"ucontext",1,32,"sigaltstack",&_VPXStruct_ucontext_4};
//	VPL_ExtField _VPXStruct_ucontext_2 = { "uc_sigmask",offsetof(struct ucontext,uc_sigmask),sizeof(unsigned int),kUnsignedType,"ucontext",1,32,"unsigned int",&_VPXStruct_ucontext_3};
//	VPL_ExtField _VPXStruct_ucontext_1 = { "uc_onstack",offsetof(struct ucontext,uc_onstack),sizeof(int),kIntType,"ucontext",1,32,"int",&_VPXStruct_ucontext_2};
//	VPL_ExtStructure _VPXStruct_ucontext_S = {"ucontext",&_VPXStruct_ucontext_1,sizeof(struct ucontext)};
//
//	VPL_ExtField _VPXStruct_sigaltstack_3 = { "ss_flags",offsetof(struct sigaltstack,ss_flags),sizeof(int),kIntType,"NULL",0,0,"int",NULL};
//	VPL_ExtField _VPXStruct_sigaltstack_2 = { "ss_size",offsetof(struct sigaltstack,ss_size),sizeof(unsigned long),kUnsignedType,"NULL",0,0,"unsigned long",&_VPXStruct_sigaltstack_3};
//	VPL_ExtField _VPXStruct_sigaltstack_1 = { "ss_sp",offsetof(struct sigaltstack,ss_sp),sizeof(void *),kPointerType,"void",1,0,"T*",&_VPXStruct_sigaltstack_2};
//	VPL_ExtStructure _VPXStruct_sigaltstack_S = {"sigaltstack",&_VPXStruct_sigaltstack_1,sizeof(struct sigaltstack)};

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

	VPL_Parameter _sig_t_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sig_t_F = {"sig_t",NULL,&_sig_t_1,NULL};


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

//	VPL_Parameter _timezone_R = { kPointerType,1,"char",1,0,NULL};
//	VPL_Parameter _timezone_2 = { kIntType,4,NULL,0,0,NULL};
//	VPL_Parameter _timezone_1 = { kIntType,4,NULL,0,0,&_timezone_2};
//	VPL_ExtProcedure _timezone_F = {"timezone",timezone,&_timezone_1,&_timezone_R};

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

/*	VPL_Parameter _getdate_R = { kPointerType,44,"tm",1,0,NULL};
	VPL_Parameter _getdate_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _getdate_F = {"getdate",getdate,&_getdate_1,&_getdate_R};
*/
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

	VPL_Parameter _swab_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _swab_2 = { kPointerType,0,"void",1,0,&_swab_3};
	VPL_Parameter _swab_1 = { kPointerType,0,"void",1,1,&_swab_2};
	VPL_ExtProcedure _swab_F = {"swab",swab,&_swab_1,NULL};

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

	VPL_Parameter _valloc_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _valloc_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _valloc_F = {"valloc",valloc,&_valloc_1,&_valloc_R};

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

/*	VPL_Parameter _devname_r_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _devname_r_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _devname_r_3 = { kPointerType,1,"char",1,0,&_devname_r_4};
	VPL_Parameter _devname_r_2 = { kUnsignedType,2,NULL,0,0,&_devname_r_3};
	VPL_Parameter _devname_r_1 = { kIntType,4,NULL,0,0,&_devname_r_2};
	VPL_ExtProcedure _devname_r_F = {"devname_r",devname_r,&_devname_r_1,&_devname_r_R};
*/
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

/*	VPL_Parameter _unlockpt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _unlockpt_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _unlockpt_F = {"unlockpt",unlockpt,&_unlockpt_1,&_unlockpt_R};
*/
	VPL_Parameter _srandom_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _srandom_F = {"srandom",srandom,&_srandom_1,NULL};

	VPL_Parameter _srand48_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _srand48_F = {"srand48",srand48,&_srand48_1,NULL};

	VPL_Parameter _setstate_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _setstate_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _setstate_F = {"setstate",setstate,&_setstate_1,&_setstate_R};

	VPL_Parameter _setkey_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setkey_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _setkey_F = {"setkey",setkey,&_setkey_1,&_setkey_R};

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

/*	VPL_Parameter _ptsname_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _ptsname_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ptsname_F = {"ptsname",ptsname,&_ptsname_1,&_ptsname_R};
*/
/*	VPL_Parameter _posix_openpt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _posix_openpt_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _posix_openpt_F = {"posix_openpt",posix_openpt,&_posix_openpt_1,&_posix_openpt_R};
*/
	VPL_Parameter _nrand48_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _nrand48_1 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_ExtProcedure _nrand48_F = {"nrand48",nrand48,&_nrand48_1,&_nrand48_R};

	VPL_Parameter _mrand48_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _mrand48_F = {"mrand48",mrand48,NULL,&_mrand48_R};

	VPL_Parameter _mkstemp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _mkstemp_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _mkstemp_F = {"mkstemp",mkstemp,&_mkstemp_1,&_mkstemp_R};

	VPL_Parameter _mktemp_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _mktemp_1 = { kPointerType,1,"char",1,0,NULL};
	VPL_ExtProcedure _mktemp_F = {"mktemp",mktemp,&_mktemp_1,&_mktemp_R};

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

/*	VPL_Parameter _grantpt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _grantpt_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _grantpt_F = {"grantpt",grantpt,&_grantpt_1,&_grantpt_R};
*/
	VPL_Parameter _getsubopt_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _getsubopt_3 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _getsubopt_2 = { kPointerType,1,"char",2,1,&_getsubopt_3};
	VPL_Parameter _getsubopt_1 = { kPointerType,1,"char",2,0,&_getsubopt_2};
	VPL_ExtProcedure _getsubopt_F = {"getsubopt",getsubopt,&_getsubopt_1,&_getsubopt_R};

/*	VPL_Parameter _gcvt_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _gcvt_3 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _gcvt_2 = { kIntType,4,NULL,0,0,&_gcvt_3};
	VPL_Parameter _gcvt_1 = { kFloatType,8,NULL,0,0,&_gcvt_2};
	VPL_ExtProcedure _gcvt_F = {"gcvt",gcvt,&_gcvt_1,&_gcvt_R};
*/
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

	VPL_Parameter __Exit_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure __Exit_F = {"_Exit",_Exit,&__Exit_1,NULL};

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

//Not Available in Mac OS X 10.6
#if 0
	VPL_Parameter _htonl_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _htonl_1 = { kUnsignedType,4,NULL,0,0,NULL};
//	VPL_ExtProcedure _htonl_F = {"htonl",NULL,&_htonl_1,&_htonl_R};
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

	VPL_Parameter _sigvec_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigvec_3 = { kPointerType,12,"sigvec",1,0,NULL};
	VPL_Parameter _sigvec_2 = { kPointerType,12,"sigvec",1,0,&_sigvec_3};
	VPL_Parameter _sigvec_1 = { kIntType,4,NULL,0,0,&_sigvec_2};
	VPL_ExtProcedure _sigvec_F = {"sigvec",NULL,&_sigvec_1,&_sigvec_R};
//	VPL_ExtProcedure _sigvec_F = {"sigvec",sigvec,&_sigvec_1,&_sigvec_R};

	VPL_Parameter _sigsetmask_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigsetmask_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sigsetmask_F = {"sigsetmask",NULL,&_sigsetmask_1,&_sigsetmask_R};
//	VPL_ExtProcedure _sigsetmask_F = {"sigsetmask",sigsetmask,&_sigsetmask_1,&_sigsetmask_R};

	VPL_Parameter _sigreturn_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigreturn_1 = { kPointerType,72,"sigcontext",1,0,NULL};
	VPL_ExtProcedure _sigreturn_F = {"sigreturn",NULL,&_sigreturn_1,&_sigreturn_R};
//	VPL_ExtProcedure _sigreturn_F = {"sigreturn",sigreturn,&_sigreturn_1,&_sigreturn_R};

	VPL_Parameter _sigblock_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigblock_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sigblock_F = {"sigblock",NULL,&_sigblock_1,&_sigblock_R};
//	VPL_ExtProcedure _sigblock_F = {"sigblock",sigblock,&_sigblock_1,&_sigblock_R};

	VPL_Parameter _psignal_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _psignal_1 = { kUnsignedType,4,NULL,0,0,&_psignal_2};
	VPL_ExtProcedure _psignal_F = {"psignal",NULL,&_psignal_1,NULL};
//	VPL_ExtProcedure _psignal_F = {"psignal",psignal,&_psignal_1,NULL};

	VPL_Parameter _sigwait_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigwait_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _sigwait_1 = { kPointerType,4,"unsigned int",1,1,&_sigwait_2};
	VPL_ExtProcedure _sigwait_F = {"sigwait",sigwait,&_sigwait_1,&_sigwait_R};

	VPL_Parameter _sigsuspend_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigsuspend_1 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_ExtProcedure _sigsuspend_F = {"sigsuspend",sigsuspend,&_sigsuspend_1,&_sigsuspend_R};

/*	VPL_Parameter _sigset_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _sigset_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _sigset_1 = { kIntType,4,NULL,0,0,&_sigset_2};
	VPL_ExtProcedure _sigset_F = {"sigset",sigset,&_sigset_1,&_sigset_R};
*/
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

/*	VPL_Parameter _sigignore_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigignore_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sigignore_F = {"sigignore",sigignore,&_sigignore_1,&_sigignore_R};
*/
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

/*	VPL_Parameter _bsd_signal_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _bsd_signal_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _bsd_signal_1 = { kIntType,4,NULL,0,0,&_bsd_signal_2};
	VPL_ExtProcedure _bsd_signal_F = {"bsd_signal",bsd_signal,&_bsd_signal_1,&_bsd_signal_R};
*/
	VPL_Parameter _raise_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _raise_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _raise_F = {"raise",raise,&_raise_1,&_raise_R};

	VPL_Parameter _signal_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _signal_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _signal_1 = { kIntType,4,NULL,0,0,&_signal_2};
	VPL_ExtProcedure _signal_F = {"signal",signal,&_signal_1,&_signal_R};

	VPL_ExtProcedure _longjmperror_F = {"longjmperror",longjmperror,NULL,NULL};

	VPL_Parameter _siglongjmp_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _siglongjmp_1 = { kPointerType,304,"int",1,0,&_siglongjmp_2};
	VPL_ExtProcedure _siglongjmp_F = {"siglongjmp",siglongjmp,&_siglongjmp_1,NULL};

	VPL_Parameter _sigsetjmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigsetjmp_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _sigsetjmp_1 = { kPointerType,304,"int",1,0,&_sigsetjmp_2};
	VPL_ExtProcedure _sigsetjmp_F = {"sigsetjmp",sigsetjmp,&_sigsetjmp_1,&_sigsetjmp_R};

	VPL_Parameter __longjmp_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter __longjmp_1 = { kPointerType,288,"int",1,0,&__longjmp_2};
	VPL_ExtProcedure __longjmp_F = {"_longjmp",_longjmp,&__longjmp_1,NULL};

	VPL_Parameter __setjmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter __setjmp_1 = { kPointerType,288,"int",1,0,NULL};
	VPL_ExtProcedure __setjmp_F = {"_setjmp",_setjmp,&__setjmp_1,&__setjmp_R};

	VPL_Parameter _longjmp_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _longjmp_1 = { kPointerType,288,"int",1,0,&_longjmp_2};
	VPL_ExtProcedure _longjmp_F = {"longjmp",longjmp,&_longjmp_1,NULL};

	VPL_Parameter _setjmp_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _setjmp_1 = { kPointerType,288,"int",1,0,NULL};
	VPL_ExtProcedure _setjmp_F = {"setjmp",setjmp,&_setjmp_1,&_setjmp_R};

	VPL_Parameter _drem_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _drem_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _drem_1 = { kFloatType,8,NULL,0,0,&_drem_2};
	VPL_ExtProcedure _drem_F = {"drem",drem,&_drem_1,&_drem_R};

	VPL_Parameter _significand_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _significand_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _significand_F = {"significand",significand,&_significand_1,&_significand_R};

	VPL_Parameter _matherr_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _matherr_1 = { kPointerType,32,"exception",1,0,NULL};
	VPL_ExtProcedure _matherr_F = {"matherr",matherr,&_matherr_1,&_matherr_R};

	VPL_Parameter _gamma_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _gamma_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _gamma_F = {"gamma",gamma,&_gamma_1,&_gamma_R};

	VPL_Parameter _finite_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _finite_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _finite_F = {"finite",finite,&_finite_1,&_finite_R};

	VPL_Parameter _roundtol_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _roundtol_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _roundtol_F = {"roundtol",roundtol,&_roundtol_1,&_roundtol_R};

	VPL_Parameter _rinttol_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _rinttol_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _rinttol_F = {"rinttol",rinttol,&_rinttol_1,&_rinttol_R};

/*	VPL_Parameter _scalb_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _scalb_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _scalb_1 = { kFloatType,8,NULL,0,0,&_scalb_2};
	VPL_ExtProcedure _scalb_F = {"scalb",scalb,&_scalb_1,&_scalb_R};
*/
	VPL_Parameter _yn_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _yn_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _yn_1 = { kIntType,4,NULL,0,0,&_yn_2};
	VPL_ExtProcedure _yn_F = {"yn",yn,&_yn_1,&_yn_R};

	VPL_Parameter _y1_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _y1_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _y1_F = {"y1",y1,&_y1_1,&_y1_R};

	VPL_Parameter _y0_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _y0_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _y0_F = {"y0",y0,&_y0_1,&_y0_R};

	VPL_Parameter _jn_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _jn_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _jn_1 = { kIntType,4,NULL,0,0,&_jn_2};
	VPL_ExtProcedure _jn_F = {"jn",jn,&_jn_1,&_jn_R};

	VPL_Parameter _j1_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _j1_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _j1_F = {"j1",j1,&_j1_1,&_j1_R};

	VPL_Parameter _j0_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _j0_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _j0_F = {"j0",j0,&_j0_1,&_j0_R};

	VPL_Parameter ___nan_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure ___nan_F = {"__nan",__nan,NULL,&___nan_R};

	VPL_Parameter ___inff_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure ___inff_F = {"__inff",__inff,NULL,&___inff_R};

	VPL_Parameter ___inf_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure ___inf_F = {"__inf",__inf,NULL,&___inf_R};

	VPL_Parameter _fmal_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmal_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmal_2 = { kFloatType,8,NULL,0,0,&_fmal_3};
	VPL_Parameter _fmal_1 = { kFloatType,8,NULL,0,0,&_fmal_2};
	VPL_ExtProcedure _fmal_F = {"fmal",fmal,&_fmal_1,&_fmal_R};

	VPL_Parameter _fminl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fminl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fminl_1 = { kFloatType,8,NULL,0,0,&_fminl_2};
	VPL_ExtProcedure _fminl_F = {"fminl",fminl,&_fminl_1,&_fminl_R};

	VPL_Parameter _fmaxl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmaxl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmaxl_1 = { kFloatType,8,NULL,0,0,&_fmaxl_2};
	VPL_ExtProcedure _fmaxl_F = {"fmaxl",fmaxl,&_fmaxl_1,&_fmaxl_R};

	VPL_Parameter _fdiml_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fdiml_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fdiml_1 = { kFloatType,8,NULL,0,0,&_fdiml_2};
	VPL_ExtProcedure _fdiml_F = {"fdiml",fdiml,&_fdiml_1,&_fdiml_R};

	VPL_Parameter _nexttowardl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nexttowardl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nexttowardl_1 = { kFloatType,8,NULL,0,0,&_nexttowardl_2};
	VPL_ExtProcedure _nexttowardl_F = {"nexttowardl",nexttowardl,&_nexttowardl_1,&_nexttowardl_R};

	VPL_Parameter _nexttowardf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _nexttowardf_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nexttowardf_1 = { kFloatType,4,NULL,0,0,&_nexttowardf_2};
	VPL_ExtProcedure _nexttowardf_F = {"nexttowardf",nexttowardf,&_nexttowardf_1,&_nexttowardf_R};

	VPL_Parameter _nexttoward_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nexttoward_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nexttoward_1 = { kFloatType,8,NULL,0,0,&_nexttoward_2};
	VPL_ExtProcedure _nexttoward_F = {"nexttoward",nexttoward,&_nexttoward_1,&_nexttoward_R};

	VPL_Parameter _nextafterl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nextafterl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nextafterl_1 = { kFloatType,8,NULL,0,0,&_nextafterl_2};
	VPL_ExtProcedure _nextafterl_F = {"nextafterl",nextafterl,&_nextafterl_1,&_nextafterl_R};

	VPL_Parameter _nanl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nanl_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _nanl_F = {"nanl",nanl,&_nanl_1,&_nanl_R};

	VPL_Parameter _copysignl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _copysignl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _copysignl_1 = { kFloatType,8,NULL,0,0,&_copysignl_2};
	VPL_ExtProcedure _copysignl_F = {"copysignl",copysignl,&_copysignl_1,&_copysignl_R};

	VPL_Parameter _remquol_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _remquol_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _remquol_2 = { kFloatType,8,NULL,0,0,&_remquol_3};
	VPL_Parameter _remquol_1 = { kFloatType,8,NULL,0,0,&_remquol_2};
	VPL_ExtProcedure _remquol_F = {"remquol",remquol,&_remquol_1,&_remquol_R};

	VPL_Parameter _remainderl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _remainderl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _remainderl_1 = { kFloatType,8,NULL,0,0,&_remainderl_2};
	VPL_ExtProcedure _remainderl_F = {"remainderl",remainderl,&_remainderl_1,&_remainderl_R};

	VPL_Parameter _fmodl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmodl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmodl_1 = { kFloatType,8,NULL,0,0,&_fmodl_2};
	VPL_ExtProcedure _fmodl_F = {"fmodl",fmodl,&_fmodl_1,&_fmodl_R};

	VPL_Parameter _truncl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _truncl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _truncl_F = {"truncl",truncl,&_truncl_1,&_truncl_R};

	VPL_Parameter _llroundl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _llroundl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _llroundl_F = {"llroundl",llroundl,&_llroundl_1,&_llroundl_R};

	VPL_Parameter _lroundl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lroundl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _lroundl_F = {"lroundl",lroundl,&_lroundl_1,&_lroundl_R};

	VPL_Parameter _roundl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _roundl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _roundl_F = {"roundl",roundl,&_roundl_1,&_roundl_R};

	VPL_Parameter _llrintl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _llrintl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _llrintl_F = {"llrintl",llrintl,&_llrintl_1,&_llrintl_R};

	VPL_Parameter _lrintl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lrintl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _lrintl_F = {"lrintl",lrintl,&_lrintl_1,&_lrintl_R};

	VPL_Parameter _rintl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _rintl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _rintl_F = {"rintl",rintl,&_rintl_1,&_rintl_R};

	VPL_Parameter _nearbyintl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nearbyintl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _nearbyintl_F = {"nearbyintl",nearbyintl,&_nearbyintl_1,&_nearbyintl_R};

	VPL_Parameter _floorl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _floorl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _floorl_F = {"floorl",floorl,&_floorl_1,&_floorl_R};

	VPL_Parameter _ceill_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _ceill_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _ceill_F = {"ceill",ceill,&_ceill_1,&_ceill_R};

	VPL_Parameter _tgammal_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _tgammal_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _tgammal_F = {"tgammal",tgammal,&_tgammal_1,&_tgammal_R};

	VPL_Parameter _lgammal_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _lgammal_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _lgammal_F = {"lgammal",lgammal,&_lgammal_1,&_lgammal_R};

	VPL_Parameter _erfcl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _erfcl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _erfcl_F = {"erfcl",erfcl,&_erfcl_1,&_erfcl_R};

	VPL_Parameter _erfl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _erfl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _erfl_F = {"erfl",erfl,&_erfl_1,&_erfl_R};

	VPL_Parameter _sqrtl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _sqrtl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _sqrtl_F = {"sqrtl",sqrtl,&_sqrtl_1,&_sqrtl_R};

	VPL_Parameter _powl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _powl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _powl_1 = { kFloatType,8,NULL,0,0,&_powl_2};
	VPL_ExtProcedure _powl_F = {"powl",powl,&_powl_1,&_powl_R};

	VPL_Parameter _hypotl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _hypotl_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _hypotl_1 = { kFloatType,8,NULL,0,0,&_hypotl_2};
	VPL_ExtProcedure _hypotl_F = {"hypotl",hypotl,&_hypotl_1,&_hypotl_R};

	VPL_Parameter _cbrtl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _cbrtl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _cbrtl_F = {"cbrtl",cbrtl,&_cbrtl_1,&_cbrtl_R};

	VPL_Parameter _fabsl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fabsl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _fabsl_F = {"fabsl",fabsl,&_fabsl_1,&_fabsl_R};

	VPL_Parameter _scalblnl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _scalblnl_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _scalblnl_1 = { kFloatType,8,NULL,0,0,&_scalblnl_2};
	VPL_ExtProcedure _scalblnl_F = {"scalblnl",scalblnl,&_scalblnl_1,&_scalblnl_R};

	VPL_Parameter _scalbnl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _scalbnl_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _scalbnl_1 = { kFloatType,8,NULL,0,0,&_scalbnl_2};
	VPL_ExtProcedure _scalbnl_F = {"scalbnl",scalbnl,&_scalbnl_1,&_scalbnl_R};

	VPL_Parameter _ilogbl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ilogbl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _ilogbl_F = {"ilogbl",ilogbl,&_ilogbl_1,&_ilogbl_R};

	VPL_Parameter _frexpl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _frexpl_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _frexpl_1 = { kFloatType,8,NULL,0,0,&_frexpl_2};
	VPL_ExtProcedure _frexpl_F = {"frexpl",frexpl,&_frexpl_1,&_frexpl_R};

	VPL_Parameter _ldexpl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _ldexpl_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ldexpl_1 = { kFloatType,8,NULL,0,0,&_ldexpl_2};
	VPL_ExtProcedure _ldexpl_F = {"ldexpl",ldexpl,&_ldexpl_1,&_ldexpl_R};

	VPL_Parameter _modfl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _modfl_2 = { kPointerType,8,"long double",1,0,NULL};
	VPL_Parameter _modfl_1 = { kFloatType,8,NULL,0,0,&_modfl_2};
	VPL_ExtProcedure _modfl_F = {"modfl",modfl,&_modfl_1,&_modfl_R};

	VPL_Parameter _logbl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _logbl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _logbl_F = {"logbl",logbl,&_logbl_1,&_logbl_R};

	VPL_Parameter _log1pl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _log1pl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _log1pl_F = {"log1pl",log1pl,&_log1pl_1,&_log1pl_R};

	VPL_Parameter _log2l_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _log2l_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _log2l_F = {"log2l",log2l,&_log2l_1,&_log2l_R};

	VPL_Parameter _log10l_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _log10l_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _log10l_F = {"log10l",log10l,&_log10l_1,&_log10l_R};

	VPL_Parameter _logl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _logl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _logl_F = {"logl",logl,&_logl_1,&_logl_R};

	VPL_Parameter _expm1l_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _expm1l_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _expm1l_F = {"expm1l",expm1l,&_expm1l_1,&_expm1l_R};

	VPL_Parameter _exp2l_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _exp2l_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _exp2l_F = {"exp2l",exp2l,&_exp2l_1,&_exp2l_R};

	VPL_Parameter _expl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _expl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _expl_F = {"expl",expl,&_expl_1,&_expl_R};

	VPL_Parameter _tanhl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _tanhl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _tanhl_F = {"tanhl",tanhl,&_tanhl_1,&_tanhl_R};

	VPL_Parameter _sinhl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _sinhl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _sinhl_F = {"sinhl",sinhl,&_sinhl_1,&_sinhl_R};

	VPL_Parameter _coshl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _coshl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _coshl_F = {"coshl",coshl,&_coshl_1,&_coshl_R};

	VPL_Parameter _atanhl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atanhl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _atanhl_F = {"atanhl",atanhl,&_atanhl_1,&_atanhl_R};

	VPL_Parameter _asinhl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _asinhl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _asinhl_F = {"asinhl",asinhl,&_asinhl_1,&_asinhl_R};

	VPL_Parameter _acoshl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _acoshl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _acoshl_F = {"acoshl",acoshl,&_acoshl_1,&_acoshl_R};

	VPL_Parameter _tanl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _tanl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _tanl_F = {"tanl",tanl,&_tanl_1,&_tanl_R};

	VPL_Parameter _sinl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _sinl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _sinl_F = {"sinl",sinl,&_sinl_1,&_sinl_R};

	VPL_Parameter _cosl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _cosl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _cosl_F = {"cosl",cosl,&_cosl_1,&_cosl_R};

	VPL_Parameter _atan2l_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atan2l_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atan2l_1 = { kFloatType,8,NULL,0,0,&_atan2l_2};
	VPL_ExtProcedure _atan2l_F = {"atan2l",atan2l,&_atan2l_1,&_atan2l_R};

	VPL_Parameter _atanl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atanl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _atanl_F = {"atanl",atanl,&_atanl_1,&_atanl_R};

	VPL_Parameter _asinl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _asinl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _asinl_F = {"asinl",asinl,&_asinl_1,&_asinl_R};

	VPL_Parameter _acosl_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _acosl_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _acosl_F = {"acosl",acosl,&_acosl_1,&_acosl_R};

	VPL_Parameter _fmaf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fmaf_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fmaf_2 = { kFloatType,4,NULL,0,0,&_fmaf_3};
	VPL_Parameter _fmaf_1 = { kFloatType,4,NULL,0,0,&_fmaf_2};
	VPL_ExtProcedure _fmaf_F = {"fmaf",fmaf,&_fmaf_1,&_fmaf_R};

	VPL_Parameter _fma_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fma_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fma_2 = { kFloatType,8,NULL,0,0,&_fma_3};
	VPL_Parameter _fma_1 = { kFloatType,8,NULL,0,0,&_fma_2};
	VPL_ExtProcedure _fma_F = {"fma",fma,&_fma_1,&_fma_R};

	VPL_Parameter _fminf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fminf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fminf_1 = { kFloatType,4,NULL,0,0,&_fminf_2};
	VPL_ExtProcedure _fminf_F = {"fminf",fminf,&_fminf_1,&_fminf_R};

	VPL_Parameter _fmin_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmin_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmin_1 = { kFloatType,8,NULL,0,0,&_fmin_2};
	VPL_ExtProcedure _fmin_F = {"fmin",fmin,&_fmin_1,&_fmin_R};

	VPL_Parameter _fmaxf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fmaxf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fmaxf_1 = { kFloatType,4,NULL,0,0,&_fmaxf_2};
	VPL_ExtProcedure _fmaxf_F = {"fmaxf",fmaxf,&_fmaxf_1,&_fmaxf_R};

	VPL_Parameter _fmax_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmax_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmax_1 = { kFloatType,8,NULL,0,0,&_fmax_2};
	VPL_ExtProcedure _fmax_F = {"fmax",fmax,&_fmax_1,&_fmax_R};

	VPL_Parameter _fdimf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fdimf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fdimf_1 = { kFloatType,4,NULL,0,0,&_fdimf_2};
	VPL_ExtProcedure _fdimf_F = {"fdimf",fdimf,&_fdimf_1,&_fdimf_R};

	VPL_Parameter _fdim_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fdim_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fdim_1 = { kFloatType,8,NULL,0,0,&_fdim_2};
	VPL_ExtProcedure _fdim_F = {"fdim",fdim,&_fdim_1,&_fdim_R};

	VPL_Parameter _nextafterf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _nextafterf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _nextafterf_1 = { kFloatType,4,NULL,0,0,&_nextafterf_2};
	VPL_ExtProcedure _nextafterf_F = {"nextafterf",nextafterf,&_nextafterf_1,&_nextafterf_R};

	VPL_Parameter _nextafter_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nextafter_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nextafter_1 = { kFloatType,8,NULL,0,0,&_nextafter_2};
	VPL_ExtProcedure _nextafter_F = {"nextafter",nextafter,&_nextafter_1,&_nextafter_R};

	VPL_Parameter _nanf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _nanf_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _nanf_F = {"nanf",nanf,&_nanf_1,&_nanf_R};

	VPL_Parameter _nan_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nan_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _nan_F = {"nan",nan,&_nan_1,&_nan_R};

	VPL_Parameter _copysignf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _copysignf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _copysignf_1 = { kFloatType,4,NULL,0,0,&_copysignf_2};
	VPL_ExtProcedure _copysignf_F = {"copysignf",copysignf,&_copysignf_1,&_copysignf_R};

	VPL_Parameter _copysign_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _copysign_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _copysign_1 = { kFloatType,8,NULL,0,0,&_copysign_2};
	VPL_ExtProcedure _copysign_F = {"copysign",copysign,&_copysign_1,&_copysign_R};

	VPL_Parameter _remquof_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _remquof_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _remquof_2 = { kFloatType,4,NULL,0,0,&_remquof_3};
	VPL_Parameter _remquof_1 = { kFloatType,4,NULL,0,0,&_remquof_2};
	VPL_ExtProcedure _remquof_F = {"remquof",remquof,&_remquof_1,&_remquof_R};

	VPL_Parameter _remquo_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _remquo_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _remquo_2 = { kFloatType,8,NULL,0,0,&_remquo_3};
	VPL_Parameter _remquo_1 = { kFloatType,8,NULL,0,0,&_remquo_2};
	VPL_ExtProcedure _remquo_F = {"remquo",remquo,&_remquo_1,&_remquo_R};

	VPL_Parameter _remainderf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _remainderf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _remainderf_1 = { kFloatType,4,NULL,0,0,&_remainderf_2};
	VPL_ExtProcedure _remainderf_F = {"remainderf",remainderf,&_remainderf_1,&_remainderf_R};

	VPL_Parameter _remainder_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _remainder_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _remainder_1 = { kFloatType,8,NULL,0,0,&_remainder_2};
	VPL_ExtProcedure _remainder_F = {"remainder",remainder,&_remainder_1,&_remainder_R};

	VPL_Parameter _fmodf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fmodf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fmodf_1 = { kFloatType,4,NULL,0,0,&_fmodf_2};
	VPL_ExtProcedure _fmodf_F = {"fmodf",fmodf,&_fmodf_1,&_fmodf_R};

	VPL_Parameter _fmod_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmod_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fmod_1 = { kFloatType,8,NULL,0,0,&_fmod_2};
	VPL_ExtProcedure _fmod_F = {"fmod",fmod,&_fmod_1,&_fmod_R};

	VPL_Parameter _truncf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _truncf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _truncf_F = {"truncf",truncf,&_truncf_1,&_truncf_R};

	VPL_Parameter _trunc_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _trunc_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _trunc_F = {"trunc",trunc,&_trunc_1,&_trunc_R};

	VPL_Parameter _llroundf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _llroundf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _llroundf_F = {"llroundf",llroundf,&_llroundf_1,&_llroundf_R};

	VPL_Parameter _llround_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _llround_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _llround_F = {"llround",llround,&_llround_1,&_llround_R};

	VPL_Parameter _lroundf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lroundf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _lroundf_F = {"lroundf",lroundf,&_lroundf_1,&_lroundf_R};

	VPL_Parameter _lround_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lround_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _lround_F = {"lround",lround,&_lround_1,&_lround_R};

	VPL_Parameter _roundf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _roundf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _roundf_F = {"roundf",roundf,&_roundf_1,&_roundf_R};

	VPL_Parameter _round_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _round_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _round_F = {"round",round,&_round_1,&_round_R};

	VPL_Parameter _llrintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _llrintf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _llrintf_F = {"llrintf",llrintf,&_llrintf_1,&_llrintf_R};

	VPL_Parameter _llrint_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _llrint_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _llrint_F = {"llrint",llrint,&_llrint_1,&_llrint_R};

	VPL_Parameter _lrintf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lrintf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _lrintf_F = {"lrintf",lrintf,&_lrintf_1,&_lrintf_R};

	VPL_Parameter _lrint_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _lrint_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _lrint_F = {"lrint",lrint,&_lrint_1,&_lrint_R};

	VPL_Parameter _rintf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _rintf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _rintf_F = {"rintf",rintf,&_rintf_1,&_rintf_R};

	VPL_Parameter _rint_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _rint_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _rint_F = {"rint",rint,&_rint_1,&_rint_R};

	VPL_Parameter _nearbyintf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _nearbyintf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _nearbyintf_F = {"nearbyintf",nearbyintf,&_nearbyintf_1,&_nearbyintf_R};

	VPL_Parameter _nearbyint_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _nearbyint_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _nearbyint_F = {"nearbyint",nearbyint,&_nearbyint_1,&_nearbyint_R};

	VPL_Parameter _floorf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _floorf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _floorf_F = {"floorf",floorf,&_floorf_1,&_floorf_R};

	VPL_Parameter _floor_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _floor_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _floor_F = {"floor",floor,&_floor_1,&_floor_R};

	VPL_Parameter _ceilf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _ceilf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ceilf_F = {"ceilf",ceilf,&_ceilf_1,&_ceilf_R};

	VPL_Parameter _ceil_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _ceil_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _ceil_F = {"ceil",ceil,&_ceil_1,&_ceil_R};

	VPL_Parameter _tgammaf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _tgammaf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _tgammaf_F = {"tgammaf",tgammaf,&_tgammaf_1,&_tgammaf_R};

	VPL_Parameter _tgamma_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _tgamma_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _tgamma_F = {"tgamma",tgamma,&_tgamma_1,&_tgamma_R};

	VPL_Parameter _lgammaf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _lgammaf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _lgammaf_F = {"lgammaf",lgammaf,&_lgammaf_1,&_lgammaf_R};

	VPL_Parameter _lgamma_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _lgamma_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _lgamma_F = {"lgamma",lgamma,&_lgamma_1,&_lgamma_R};

	VPL_Parameter _erfcf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _erfcf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _erfcf_F = {"erfcf",erfcf,&_erfcf_1,&_erfcf_R};

	VPL_Parameter _erfc_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _erfc_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _erfc_F = {"erfc",erfc,&_erfc_1,&_erfc_R};

	VPL_Parameter _erff_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _erff_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _erff_F = {"erff",erff,&_erff_1,&_erff_R};

	VPL_Parameter _erf_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _erf_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _erf_F = {"erf",erf,&_erf_1,&_erf_R};

	VPL_Parameter _sqrtf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _sqrtf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sqrtf_F = {"sqrtf",sqrtf,&_sqrtf_1,&_sqrtf_R};

	VPL_Parameter _sqrt_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _sqrt_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _sqrt_F = {"sqrt",sqrt,&_sqrt_1,&_sqrt_R};

	VPL_Parameter _powf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _powf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _powf_1 = { kFloatType,4,NULL,0,0,&_powf_2};
	VPL_ExtProcedure _powf_F = {"powf",powf,&_powf_1,&_powf_R};

	VPL_Parameter _pow_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _pow_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _pow_1 = { kFloatType,8,NULL,0,0,&_pow_2};
	VPL_ExtProcedure _pow_F = {"pow",pow,&_pow_1,&_pow_R};

	VPL_Parameter _hypotf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _hypotf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _hypotf_1 = { kFloatType,4,NULL,0,0,&_hypotf_2};
	VPL_ExtProcedure _hypotf_F = {"hypotf",hypotf,&_hypotf_1,&_hypotf_R};

	VPL_Parameter _hypot_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _hypot_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _hypot_1 = { kFloatType,8,NULL,0,0,&_hypot_2};
	VPL_ExtProcedure _hypot_F = {"hypot",hypot,&_hypot_1,&_hypot_R};

	VPL_Parameter _cbrtf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _cbrtf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _cbrtf_F = {"cbrtf",cbrtf,&_cbrtf_1,&_cbrtf_R};

	VPL_Parameter _cbrt_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _cbrt_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _cbrt_F = {"cbrt",cbrt,&_cbrt_1,&_cbrt_R};

	VPL_Parameter _fabsf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _fabsf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _fabsf_F = {"fabsf",fabsf,&_fabsf_1,&_fabsf_R};

	VPL_Parameter _fabs_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _fabs_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _fabs_F = {"fabs",fabs,&_fabs_1,&_fabs_R};

	VPL_Parameter _scalblnf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _scalblnf_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _scalblnf_1 = { kFloatType,4,NULL,0,0,&_scalblnf_2};
	VPL_ExtProcedure _scalblnf_F = {"scalblnf",scalblnf,&_scalblnf_1,&_scalblnf_R};

	VPL_Parameter _scalbln_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _scalbln_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _scalbln_1 = { kFloatType,8,NULL,0,0,&_scalbln_2};
	VPL_ExtProcedure _scalbln_F = {"scalbln",scalbln,&_scalbln_1,&_scalbln_R};

	VPL_Parameter _scalbnf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _scalbnf_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _scalbnf_1 = { kFloatType,4,NULL,0,0,&_scalbnf_2};
	VPL_ExtProcedure _scalbnf_F = {"scalbnf",scalbnf,&_scalbnf_1,&_scalbnf_R};

	VPL_Parameter _scalbn_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _scalbn_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _scalbn_1 = { kFloatType,8,NULL,0,0,&_scalbn_2};
	VPL_ExtProcedure _scalbn_F = {"scalbn",scalbn,&_scalbn_1,&_scalbn_R};

	VPL_Parameter _ilogbf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ilogbf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ilogbf_F = {"ilogbf",ilogbf,&_ilogbf_1,&_ilogbf_R};

	VPL_Parameter _ilogb_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ilogb_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _ilogb_F = {"ilogb",ilogb,&_ilogb_1,&_ilogb_R};

	VPL_Parameter _frexpf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _frexpf_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _frexpf_1 = { kFloatType,4,NULL,0,0,&_frexpf_2};
	VPL_ExtProcedure _frexpf_F = {"frexpf",frexpf,&_frexpf_1,&_frexpf_R};

	VPL_Parameter _frexp_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _frexp_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _frexp_1 = { kFloatType,8,NULL,0,0,&_frexp_2};
	VPL_ExtProcedure _frexp_F = {"frexp",frexp,&_frexp_1,&_frexp_R};

	VPL_Parameter _ldexpf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _ldexpf_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ldexpf_1 = { kFloatType,4,NULL,0,0,&_ldexpf_2};
	VPL_ExtProcedure _ldexpf_F = {"ldexpf",ldexpf,&_ldexpf_1,&_ldexpf_R};

	VPL_Parameter _ldexp_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _ldexp_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ldexp_1 = { kFloatType,8,NULL,0,0,&_ldexp_2};
	VPL_ExtProcedure _ldexp_F = {"ldexp",ldexp,&_ldexp_1,&_ldexp_R};

	VPL_Parameter _modff_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _modff_2 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _modff_1 = { kFloatType,4,NULL,0,0,&_modff_2};
	VPL_ExtProcedure _modff_F = {"modff",modff,&_modff_1,&_modff_R};

	VPL_Parameter _modf_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _modf_2 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _modf_1 = { kFloatType,8,NULL,0,0,&_modf_2};
	VPL_ExtProcedure _modf_F = {"modf",modf,&_modf_1,&_modf_R};

	VPL_Parameter _logbf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _logbf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _logbf_F = {"logbf",logbf,&_logbf_1,&_logbf_R};

	VPL_Parameter _logb_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _logb_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _logb_F = {"logb",logb,&_logb_1,&_logb_R};

	VPL_Parameter _log1pf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _log1pf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _log1pf_F = {"log1pf",log1pf,&_log1pf_1,&_log1pf_R};

	VPL_Parameter _log1p_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _log1p_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _log1p_F = {"log1p",log1p,&_log1p_1,&_log1p_R};

	VPL_Parameter _log2f_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _log2f_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _log2f_F = {"log2f",log2f,&_log2f_1,&_log2f_R};

	VPL_Parameter _log2_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _log2_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _log2_F = {"log2",log2,&_log2_1,&_log2_R};

	VPL_Parameter _log10f_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _log10f_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _log10f_F = {"log10f",log10f,&_log10f_1,&_log10f_R};

	VPL_Parameter _log10_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _log10_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _log10_F = {"log10",log10,&_log10_1,&_log10_R};

	VPL_Parameter _logf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _logf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _logf_F = {"logf",logf,&_logf_1,&_logf_R};

	VPL_Parameter _log_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _log_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _log_F = {"log",log,&_log_1,&_log_R};

	VPL_Parameter _expm1f_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _expm1f_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _expm1f_F = {"expm1f",expm1f,&_expm1f_1,&_expm1f_R};

	VPL_Parameter _expm1_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _expm1_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _expm1_F = {"expm1",expm1,&_expm1_1,&_expm1_R};

	VPL_Parameter _exp2f_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _exp2f_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _exp2f_F = {"exp2f",exp2f,&_exp2f_1,&_exp2f_R};

	VPL_Parameter _exp2_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _exp2_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _exp2_F = {"exp2",exp2,&_exp2_1,&_exp2_R};

	VPL_Parameter _expf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _expf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _expf_F = {"expf",expf,&_expf_1,&_expf_R};

	VPL_Parameter _exp_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _exp_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _exp_F = {"exp",exp,&_exp_1,&_exp_R};

	VPL_Parameter _tanhf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _tanhf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _tanhf_F = {"tanhf",tanhf,&_tanhf_1,&_tanhf_R};

	VPL_Parameter _tanh_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _tanh_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _tanh_F = {"tanh",tanh,&_tanh_1,&_tanh_R};

	VPL_Parameter _sinhf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _sinhf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sinhf_F = {"sinhf",sinhf,&_sinhf_1,&_sinhf_R};

	VPL_Parameter _sinh_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _sinh_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _sinh_F = {"sinh",sinh,&_sinh_1,&_sinh_R};

	VPL_Parameter _coshf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _coshf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _coshf_F = {"coshf",coshf,&_coshf_1,&_coshf_R};

	VPL_Parameter _cosh_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _cosh_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _cosh_F = {"cosh",cosh,&_cosh_1,&_cosh_R};

	VPL_Parameter _atanhf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _atanhf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _atanhf_F = {"atanhf",atanhf,&_atanhf_1,&_atanhf_R};

	VPL_Parameter _atanh_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atanh_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _atanh_F = {"atanh",atanh,&_atanh_1,&_atanh_R};

	VPL_Parameter _asinhf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _asinhf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _asinhf_F = {"asinhf",asinhf,&_asinhf_1,&_asinhf_R};

	VPL_Parameter _asinh_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _asinh_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _asinh_F = {"asinh",asinh,&_asinh_1,&_asinh_R};

	VPL_Parameter _acoshf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _acoshf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _acoshf_F = {"acoshf",acoshf,&_acoshf_1,&_acoshf_R};

	VPL_Parameter _acosh_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _acosh_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _acosh_F = {"acosh",acosh,&_acosh_1,&_acosh_R};

	VPL_Parameter _tanf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _tanf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _tanf_F = {"tanf",tanf,&_tanf_1,&_tanf_R};

	VPL_Parameter _tan_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _tan_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _tan_F = {"tan",tan,&_tan_1,&_tan_R};

	VPL_Parameter _sinf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _sinf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _sinf_F = {"sinf",sinf,&_sinf_1,&_sinf_R};

	VPL_Parameter _sin_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _sin_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _sin_F = {"sin",sin,&_sin_1,&_sin_R};

	VPL_Parameter _cosf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _cosf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _cosf_F = {"cosf",cosf,&_cosf_1,&_cosf_R};

	VPL_Parameter _cos_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _cos_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _cos_F = {"cos",cos,&_cos_1,&_cos_R};

	VPL_Parameter _atan2f_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _atan2f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _atan2f_1 = { kFloatType,4,NULL,0,0,&_atan2f_2};
	VPL_ExtProcedure _atan2f_F = {"atan2f",atan2f,&_atan2f_1,&_atan2f_R};

	VPL_Parameter _atan2_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atan2_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atan2_1 = { kFloatType,8,NULL,0,0,&_atan2_2};
	VPL_ExtProcedure _atan2_F = {"atan2",atan2,&_atan2_1,&_atan2_R};

	VPL_Parameter _atanf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _atanf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _atanf_F = {"atanf",atanf,&_atanf_1,&_atanf_R};

	VPL_Parameter _atan_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _atan_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _atan_F = {"atan",atan,&_atan_1,&_atan_R};

	VPL_Parameter _asinf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _asinf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _asinf_F = {"asinf",asinf,&_asinf_1,&_asinf_R};

	VPL_Parameter _asin_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _asin_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _asin_F = {"asin",asin,&_asin_1,&_asin_R};

	VPL_Parameter _acosf_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _acosf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _acosf_F = {"acosf",acosf,&_acosf_1,&_acosf_R};

	VPL_Parameter _acos_R = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _acos_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _acos_F = {"acos",acos,&_acos_1,&_acos_R};

	VPL_Parameter ___fpclassify_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___fpclassify_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure ___fpclassify_F = {"__fpclassify",__fpclassify,&___fpclassify_1,&___fpclassify_R};

	VPL_Parameter ___fpclassifyd_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___fpclassifyd_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure ___fpclassifyd_F = {"__fpclassifyd",__fpclassifyd,&___fpclassifyd_1,&___fpclassifyd_R};

	VPL_Parameter ___fpclassifyf_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___fpclassifyf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure ___fpclassifyf_F = {"__fpclassifyf",__fpclassifyf,&___fpclassifyf_1,&___fpclassifyf_R};

	VPL_Parameter ___math_errhandling_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure ___math_errhandling_F = {"__math_errhandling",__math_errhandling,NULL,&___math_errhandling_R};

	VPL_Parameter _setlocale_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _setlocale_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _setlocale_1 = { kIntType,4,NULL,0,0,&_setlocale_2};
	VPL_ExtProcedure _setlocale_F = {"setlocale",setlocale,&_setlocale_1,&_setlocale_R};

	VPL_Parameter _localeconv_R = { kPointerType,96,"lconv",1,0,NULL};
	VPL_ExtProcedure _localeconv_F = {"localeconv",localeconv,NULL,&_localeconv_R};

	VPL_Parameter _feupdateenv_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _feupdateenv_1 = { kPointerType,16,"fenv_t",1,1,NULL};
	VPL_ExtProcedure _feupdateenv_F = {"feupdateenv",feupdateenv,&_feupdateenv_1,&_feupdateenv_R};

	VPL_Parameter _fesetenv_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fesetenv_1 = { kPointerType,16,"fenv_t",1,1,NULL};
	VPL_ExtProcedure _fesetenv_F = {"fesetenv",fesetenv,&_fesetenv_1,&_fesetenv_R};

	VPL_Parameter _feholdexcept_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _feholdexcept_1 = { kPointerType,16,"fenv_t",1,0,NULL};
	VPL_ExtProcedure _feholdexcept_F = {"feholdexcept",feholdexcept,&_feholdexcept_1,&_feholdexcept_R};

	VPL_Parameter _fegetenv_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fegetenv_1 = { kPointerType,16,"fenv_t",1,0,NULL};
	VPL_ExtProcedure _fegetenv_F = {"fegetenv",fegetenv,&_fegetenv_1,&_fegetenv_R};

	VPL_Parameter _fesetround_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fesetround_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _fesetround_F = {"fesetround",fesetround,&_fesetround_1,&_fesetround_R};

	VPL_Parameter _fegetround_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _fegetround_F = {"fegetround",fegetround,NULL,&_fegetround_R};

	VPL_Parameter _fetestexcept_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fetestexcept_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _fetestexcept_F = {"fetestexcept",fetestexcept,&_fetestexcept_1,&_fetestexcept_R};

	VPL_Parameter _fesetexceptflag_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fesetexceptflag_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fesetexceptflag_1 = { kPointerType,2,"unsigned short",1,1,&_fesetexceptflag_2};
	VPL_ExtProcedure _fesetexceptflag_F = {"fesetexceptflag",fesetexceptflag,&_fesetexceptflag_1,&_fesetexceptflag_R};

	VPL_Parameter _feraiseexcept_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _feraiseexcept_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _feraiseexcept_F = {"feraiseexcept",feraiseexcept,&_feraiseexcept_1,&_feraiseexcept_R};

	VPL_Parameter _fegetexceptflag_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fegetexceptflag_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _fegetexceptflag_1 = { kPointerType,2,"unsigned short",1,0,&_fegetexceptflag_2};
	VPL_ExtProcedure _fegetexceptflag_F = {"fegetexceptflag",fegetexceptflag,&_fegetexceptflag_1,&_fegetexceptflag_R};

	VPL_Parameter _feclearexcept_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _feclearexcept_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _feclearexcept_F = {"feclearexcept",feclearexcept,&_feclearexcept_1,&_feclearexcept_R};

	VPL_Parameter ___error_R = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure ___error_F = {"__error",__error,NULL,&___error_R};

	VPL_Parameter ___maskrune_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter ___maskrune_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter ___maskrune_1 = { kIntType,4,NULL,0,0,&___maskrune_2};
	VPL_ExtProcedure ___maskrune_F = {"__maskrune",__maskrune,&___maskrune_1,&___maskrune_R};

	VPL_Parameter ____runetype_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter ____runetype_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure ____runetype_F = {"___runetype",___runetype,&____runetype_1,&____runetype_R};

	VPL_Parameter _isspecial_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isspecial_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isspecial_F = {"isspecial",isspecial,&_isspecial_1,&_isspecial_R};

	VPL_Parameter _isrune_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isrune_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isrune_F = {"isrune",isrune,&_isrune_1,&_isrune_R};

	VPL_Parameter _isphonogram_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isphonogram_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isphonogram_F = {"isphonogram",isphonogram,&_isphonogram_1,&_isphonogram_R};

	VPL_Parameter _isnumber_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isnumber_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isnumber_F = {"isnumber",isnumber,&_isnumber_1,&_isnumber_R};

	VPL_Parameter _isideogram_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isideogram_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isideogram_F = {"isideogram",isideogram,&_isideogram_1,&_isideogram_R};

	VPL_Parameter _ishexnumber_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ishexnumber_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ishexnumber_F = {"ishexnumber",ishexnumber,&_ishexnumber_1,&_ishexnumber_R};

	VPL_Parameter _digittoint_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _digittoint_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _digittoint_F = {"digittoint",digittoint,&_digittoint_1,&_digittoint_R};

	VPL_Parameter _toascii_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _toascii_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _toascii_F = {"toascii",toascii,&_toascii_1,&_toascii_R};

	VPL_Parameter _isascii_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isascii_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isascii_F = {"isascii",isascii,&_isascii_1,&_isascii_R};

	VPL_Parameter _toupper_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _toupper_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _toupper_F = {"toupper",toupper,&_toupper_1,&_toupper_R};

	VPL_Parameter _tolower_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _tolower_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _tolower_F = {"tolower",tolower,&_tolower_1,&_tolower_R};

	VPL_Parameter _isxdigit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isxdigit_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isxdigit_F = {"isxdigit",isxdigit,&_isxdigit_1,&_isxdigit_R};

	VPL_Parameter _isupper_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isupper_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isupper_F = {"isupper",isupper,&_isupper_1,&_isupper_R};

	VPL_Parameter _isspace_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isspace_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isspace_F = {"isspace",isspace,&_isspace_1,&_isspace_R};

	VPL_Parameter _ispunct_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _ispunct_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _ispunct_F = {"ispunct",ispunct,&_ispunct_1,&_ispunct_R};

	VPL_Parameter _isprint_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isprint_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isprint_F = {"isprint",isprint,&_isprint_1,&_isprint_R};

	VPL_Parameter _islower_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _islower_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _islower_F = {"islower",islower,&_islower_1,&_islower_R};

	VPL_Parameter _isgraph_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isgraph_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isgraph_F = {"isgraph",isgraph,&_isgraph_1,&_isgraph_R};

	VPL_Parameter _isdigit_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isdigit_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isdigit_F = {"isdigit",isdigit,&_isdigit_1,&_isdigit_R};

	VPL_Parameter _iscntrl_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _iscntrl_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _iscntrl_F = {"iscntrl",iscntrl,&_iscntrl_1,&_iscntrl_R};

	VPL_Parameter _isblank_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isblank_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isblank_F = {"isblank",isblank,&_isblank_1,&_isblank_R};

	VPL_Parameter _isalpha_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isalpha_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isalpha_F = {"isalpha",isalpha,&_isalpha_1,&_isalpha_R};

	VPL_Parameter _isalnum_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _isalnum_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _isalnum_F = {"isalnum",isalnum,&_isalnum_1,&_isalnum_R};

	VPL_Parameter ___eprintf_4 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter ___eprintf_3 = { kUnsignedType,4,NULL,0,0,&___eprintf_4};
	VPL_Parameter ___eprintf_2 = { kPointerType,1,"char",1,1,&___eprintf_3};
	VPL_Parameter ___eprintf_1 = { kPointerType,1,"char",1,1,&___eprintf_2};
	VPL_ExtProcedure ___eprintf_F = {"__eprintf",__eprintf,&___eprintf_1,NULL};

/*	VPL_Parameter ___assert_rtn_4 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter ___assert_rtn_3 = { kIntType,4,NULL,0,0,&___assert_rtn_4};
	VPL_Parameter ___assert_rtn_2 = { kPointerType,1,"char",1,1,&___assert_rtn_3};
	VPL_Parameter ___assert_rtn_1 = { kPointerType,1,"char",1,1,&___assert_rtn_2};
	VPL_ExtProcedure ___assert_rtn_F = {"__assert_rtn",__assert_rtn,&___assert_rtn_1,NULL};
*/


VPL_DictionaryNode VPX_UNIX_Constants[] =	{
	{"OSBigEndian", &_OSBigEndian_C},
	{"OSLittleEndian", &_OSLittleEndian_C},
	{"OSUnknownByteOrder", &_OSUnknownByteOrder_C},
	{"P_PGID", &_P_PGID_C},
	{"P_PID", &_P_PID_C},
	{"P_ALL", &_P_ALL_C},
//Not Available in Mac OS X 10.6
#if 0
	{"_FP_SUPERNORMAL", &__FP_SUPERNORMAL_C},
	{"_FP_SUBNORMAL", &__FP_SUBNORMAL_C},
	{"_FP_NORMAL", &__FP_NORMAL_C},
	{"_FP_ZERO", &__FP_ZERO_C},
	{"_FP_INFINITE", &__FP_INFINITE_C},
	{"_FP_NAN", &__FP_NAN_C},
	{"_FE_DOWNWARD", &__FE_DOWNWARD_C},
	{"_FE_UPWARD", &__FE_UPWARD_C},
	{"_FE_TOWARDZERO", &__FE_TOWARDZERO_C},
	{"_FE_TONEAREST", &__FE_TONEAREST_C},
	{"_FE_ALL_EXCEPT", &__FE_ALL_EXCEPT_C},
	{"_FE_INVALID", &__FE_INVALID_C},
	{"_FE_OVERFLOW", &__FE_OVERFLOW_C},
	{"_FE_UNDERFLOW", &__FE_UNDERFLOW_C},
	{"_FE_DIVBYZERO", &__FE_DIVBYZERO_C},
	{"_FE_INEXACT", &__FE_INEXACT_C},
#endif
};

VPL_DictionaryNode VPX_UNIX_Structures[] =	{
	{"tm",&_VPXStruct_tm_S},
	{"timespec",&_VPXStruct_timespec_S},
	{"rlimit",&_VPXStruct_rlimit_S},
	{"rusage",&_VPXStruct_rusage_S},
	{"timeval",&_VPXStruct_timeval_S},
	{"__sFILE",&_VPXStruct___sFILE_S},
	{"__sbuf",&_VPXStruct___sbuf_S},
	{"sigstack",&_VPXStruct_sigstack_S},
	{"sigvec",&_VPXStruct_sigvec_S},
	{"sigaction",&_VPXStruct_sigaction_S},
	{"__sigaction",&_VPXStruct___sigaction_S},
	{"__siginfo",&_VPXStruct___siginfo_S},
	{"sigevent",&_VPXStruct_sigevent_S},
//	{"sigcontext",&_VPXStruct_sigcontext_S},
	{"exception",&_VPXStruct_exception_S},
	{"lconv",&_VPXStruct_lconv_S},
//	{"ucontext64",&_VPXStruct_ucontext64_S},
//	{"ucontext",&_VPXStruct_ucontext_S},
//	{"sigaltstack",&_VPXStruct_sigaltstack_S},
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

VPL_DictionaryNode VPX_UNIX_Procedures[] =	{
	{"sig_t",&_sig_t_F},
	{"nanosleep",&_nanosleep_F},
	{"timegm",&_timegm_F},
	{"timelocal",&_timelocal_F},
	{"time2posix",&_time2posix_F},
	{"tzsetwall",&_tzsetwall_F},
//	{"timezone",&_timezone_F},
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
//	{"getdate",&_getdate_F},
	{"difftime",&_difftime_F},
	{"ctime",&_ctime_F},
	{"clock",&_clock_F},
	{"asctime",&_asctime_F},
	{"swab",&_swab_F},
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
	{"valloc",&_valloc_F},
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
//	{"devname_r",&_devname_r_F},
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
//	{"unlockpt",&_unlockpt_F},
	{"srandom",&_srandom_F},
	{"srand48",&_srand48_F},
	{"setstate",&_setstate_F},
	{"setkey",&_setkey_F},
	{"setenv",&_setenv_F},
	{"seed48",&_seed48_F},
	{"realpath",&_realpath_F},
	{"random",&_random_F},
	{"putenv",&_putenv_F},
//	{"ptsname",&_ptsname_F},
//	{"posix_openpt",&_posix_openpt_F},
	{"nrand48",&_nrand48_F},
	{"mrand48",&_mrand48_F},
	{"mkstemp",&_mkstemp_F},
	{"mktemp",&_mktemp_F},
	{"lrand48",&_lrand48_F},
	{"lcong48",&_lcong48_F},
	{"l64a",&_l64a_F},
	{"jrand48",&_jrand48_F},
	{"initstate",&_initstate_F},
//	{"grantpt",&_grantpt_F},
	{"getsubopt",&_getsubopt_F},
//	{"gcvt",&_gcvt_F},
	{"fcvt",&_fcvt_F},
	{"erand48",&_erand48_F},
	{"ecvt",&_ecvt_F},
	{"drand48",&_drand48_F},
	{"a64l",&_a64l_F},
	{"_Exit",&__Exit_F},
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
//	{"htonl",&_htonl_F},
//	{"ntohl",&_ntohl_F},
//	{"htons",&_htons_F},
//	{"ntohs",&_ntohs_F},
	{"setrlimit",&_setrlimit_F},
	{"setpriority",&_setpriority_F},
	{"getrusage",&_getrusage_F},
	{"getrlimit",&_getrlimit_F},
	{"getpriority",&_getpriority_F},
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
	{"sigvec",&_sigvec_F},
	{"sigsetmask",&_sigsetmask_F},
	{"sigreturn",&_sigreturn_F},
	{"sigblock",&_sigblock_F},
	{"psignal",&_psignal_F},
	{"sigwait",&_sigwait_F},
	{"sigsuspend",&_sigsuspend_F},
//	{"sigset",&_sigset_F},
	{"sigrelse",&_sigrelse_F},
	{"sigprocmask",&_sigprocmask_F},
	{"sigpending",&_sigpending_F},
	{"sigpause",&_sigpause_F},
	{"sigismember",&_sigismember_F},
	{"siginterrupt",&_siginterrupt_F},
//	{"sigignore",&_sigignore_F},
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
//	{"bsd_signal",&_bsd_signal_F},
	{"raise",&_raise_F},
	{"signal",&_signal_F},
	{"longjmperror",&_longjmperror_F},
	{"siglongjmp",&_siglongjmp_F},
	{"sigsetjmp",&_sigsetjmp_F},
	{"_longjmp",&__longjmp_F},
	{"_setjmp",&__setjmp_F},
	{"longjmp",&_longjmp_F},
	{"setjmp",&_setjmp_F},
	{"drem",&_drem_F},
	{"significand",&_significand_F},
	{"matherr",&_matherr_F},
	{"gamma",&_gamma_F},
	{"finite",&_finite_F},
	{"roundtol",&_roundtol_F},
	{"rinttol",&_rinttol_F},
//	{"scalb",&_scalb_F},
	{"yn",&_yn_F},
	{"y1",&_y1_F},
	{"y0",&_y0_F},
	{"jn",&_jn_F},
	{"j1",&_j1_F},
	{"j0",&_j0_F},
	{"__nan",&___nan_F},
	{"__inff",&___inff_F},
	{"__inf",&___inf_F},
	{"fmal",&_fmal_F},
	{"fminl",&_fminl_F},
	{"fmaxl",&_fmaxl_F},
	{"fdiml",&_fdiml_F},
	{"nexttowardl",&_nexttowardl_F},
	{"nexttowardf",&_nexttowardf_F},
	{"nexttoward",&_nexttoward_F},
	{"nextafterl",&_nextafterl_F},
	{"nanl",&_nanl_F},
	{"copysignl",&_copysignl_F},
	{"remquol",&_remquol_F},
	{"remainderl",&_remainderl_F},
	{"fmodl",&_fmodl_F},
	{"truncl",&_truncl_F},
	{"llroundl",&_llroundl_F},
	{"lroundl",&_lroundl_F},
	{"roundl",&_roundl_F},
	{"llrintl",&_llrintl_F},
	{"lrintl",&_lrintl_F},
	{"rintl",&_rintl_F},
	{"nearbyintl",&_nearbyintl_F},
	{"floorl",&_floorl_F},
	{"ceill",&_ceill_F},
	{"tgammal",&_tgammal_F},
	{"lgammal",&_lgammal_F},
	{"erfcl",&_erfcl_F},
	{"erfl",&_erfl_F},
	{"sqrtl",&_sqrtl_F},
	{"powl",&_powl_F},
	{"hypotl",&_hypotl_F},
	{"cbrtl",&_cbrtl_F},
	{"fabsl",&_fabsl_F},
	{"scalblnl",&_scalblnl_F},
	{"scalbnl",&_scalbnl_F},
	{"ilogbl",&_ilogbl_F},
	{"frexpl",&_frexpl_F},
	{"ldexpl",&_ldexpl_F},
	{"modfl",&_modfl_F},
	{"logbl",&_logbl_F},
	{"log1pl",&_log1pl_F},
	{"log2l",&_log2l_F},
	{"log10l",&_log10l_F},
	{"logl",&_logl_F},
	{"expm1l",&_expm1l_F},
	{"exp2l",&_exp2l_F},
	{"expl",&_expl_F},
	{"tanhl",&_tanhl_F},
	{"sinhl",&_sinhl_F},
	{"coshl",&_coshl_F},
	{"atanhl",&_atanhl_F},
	{"asinhl",&_asinhl_F},
	{"acoshl",&_acoshl_F},
	{"tanl",&_tanl_F},
	{"sinl",&_sinl_F},
	{"cosl",&_cosl_F},
	{"atan2l",&_atan2l_F},
	{"atanl",&_atanl_F},
	{"asinl",&_asinl_F},
	{"acosl",&_acosl_F},
	{"fmaf",&_fmaf_F},
	{"fma",&_fma_F},
	{"fminf",&_fminf_F},
	{"fmin",&_fmin_F},
	{"fmaxf",&_fmaxf_F},
	{"fmax",&_fmax_F},
	{"fdimf",&_fdimf_F},
	{"fdim",&_fdim_F},
	{"nextafterf",&_nextafterf_F},
	{"nextafter",&_nextafter_F},
	{"nanf",&_nanf_F},
	{"nan",&_nan_F},
	{"copysignf",&_copysignf_F},
	{"copysign",&_copysign_F},
	{"remquof",&_remquof_F},
	{"remquo",&_remquo_F},
	{"remainderf",&_remainderf_F},
	{"remainder",&_remainder_F},
	{"fmodf",&_fmodf_F},
	{"fmod",&_fmod_F},
	{"truncf",&_truncf_F},
	{"trunc",&_trunc_F},
	{"llroundf",&_llroundf_F},
	{"llround",&_llround_F},
	{"lroundf",&_lroundf_F},
	{"lround",&_lround_F},
	{"roundf",&_roundf_F},
	{"round",&_round_F},
	{"llrintf",&_llrintf_F},
	{"llrint",&_llrint_F},
	{"lrintf",&_lrintf_F},
	{"lrint",&_lrint_F},
	{"rintf",&_rintf_F},
	{"rint",&_rint_F},
	{"nearbyintf",&_nearbyintf_F},
	{"nearbyint",&_nearbyint_F},
	{"floorf",&_floorf_F},
	{"floor",&_floor_F},
	{"ceilf",&_ceilf_F},
	{"ceil",&_ceil_F},
	{"tgammaf",&_tgammaf_F},
	{"tgamma",&_tgamma_F},
	{"lgammaf",&_lgammaf_F},
	{"lgamma",&_lgamma_F},
	{"erfcf",&_erfcf_F},
	{"erfc",&_erfc_F},
	{"erff",&_erff_F},
	{"erf",&_erf_F},
	{"sqrtf",&_sqrtf_F},
	{"sqrt",&_sqrt_F},
	{"powf",&_powf_F},
	{"pow",&_pow_F},
	{"hypotf",&_hypotf_F},
	{"hypot",&_hypot_F},
	{"cbrtf",&_cbrtf_F},
	{"cbrt",&_cbrt_F},
	{"fabsf",&_fabsf_F},
	{"fabs",&_fabs_F},
	{"scalblnf",&_scalblnf_F},
	{"scalbln",&_scalbln_F},
	{"scalbnf",&_scalbnf_F},
	{"scalbn",&_scalbn_F},
	{"ilogbf",&_ilogbf_F},
	{"ilogb",&_ilogb_F},
	{"frexpf",&_frexpf_F},
	{"frexp",&_frexp_F},
	{"ldexpf",&_ldexpf_F},
	{"ldexp",&_ldexp_F},
	{"modff",&_modff_F},
	{"modf",&_modf_F},
	{"logbf",&_logbf_F},
	{"logb",&_logb_F},
	{"log1pf",&_log1pf_F},
	{"log1p",&_log1p_F},
	{"log2f",&_log2f_F},
	{"log2",&_log2_F},
	{"log10f",&_log10f_F},
	{"log10",&_log10_F},
	{"logf",&_logf_F},
	{"log",&_log_F},
	{"expm1f",&_expm1f_F},
	{"expm1",&_expm1_F},
	{"exp2f",&_exp2f_F},
	{"exp2",&_exp2_F},
	{"expf",&_expf_F},
	{"exp",&_exp_F},
	{"tanhf",&_tanhf_F},
	{"tanh",&_tanh_F},
	{"sinhf",&_sinhf_F},
	{"sinh",&_sinh_F},
	{"coshf",&_coshf_F},
	{"cosh",&_cosh_F},
	{"atanhf",&_atanhf_F},
	{"atanh",&_atanh_F},
	{"asinhf",&_asinhf_F},
	{"asinh",&_asinh_F},
	{"acoshf",&_acoshf_F},
	{"acosh",&_acosh_F},
	{"tanf",&_tanf_F},
	{"tan",&_tan_F},
	{"sinf",&_sinf_F},
	{"sin",&_sin_F},
	{"cosf",&_cosf_F},
	{"cos",&_cos_F},
	{"atan2f",&_atan2f_F},
	{"atan2",&_atan2_F},
	{"atanf",&_atanf_F},
	{"atan",&_atan_F},
	{"asinf",&_asinf_F},
	{"asin",&_asin_F},
	{"acosf",&_acosf_F},
	{"acos",&_acos_F},
	{"__fpclassify",&___fpclassify_F},
	{"__fpclassifyd",&___fpclassifyd_F},
	{"__fpclassifyf",&___fpclassifyf_F},
	{"__math_errhandling",&___math_errhandling_F},
	{"setlocale",&_setlocale_F},
	{"localeconv",&_localeconv_F},
	{"feupdateenv",&_feupdateenv_F},
	{"fesetenv",&_fesetenv_F},
	{"feholdexcept",&_feholdexcept_F},
	{"fegetenv",&_fegetenv_F},
	{"fesetround",&_fesetround_F},
	{"fegetround",&_fegetround_F},
	{"fetestexcept",&_fetestexcept_F},
	{"fesetexceptflag",&_fesetexceptflag_F},
	{"feraiseexcept",&_feraiseexcept_F},
	{"fegetexceptflag",&_fegetexceptflag_F},
	{"feclearexcept",&_feclearexcept_F},
	{"__error",&___error_F},
	{"__maskrune",&___maskrune_F},
	{"___runetype",&____runetype_F},
	{"isspecial",&_isspecial_F},
	{"isrune",&_isrune_F},
	{"isphonogram",&_isphonogram_F},
	{"isnumber",&_isnumber_F},
	{"isideogram",&_isideogram_F},
	{"ishexnumber",&_ishexnumber_F},
	{"digittoint",&_digittoint_F},
	{"toascii",&_toascii_F},
	{"isascii",&_isascii_F},
	{"toupper",&_toupper_F},
	{"tolower",&_tolower_F},
	{"isxdigit",&_isxdigit_F},
	{"isupper",&_isupper_F},
	{"isspace",&_isspace_F},
	{"ispunct",&_ispunct_F},
	{"isprint",&_isprint_F},
	{"islower",&_islower_F},
	{"isgraph",&_isgraph_F},
	{"isdigit",&_isdigit_F},
	{"iscntrl",&_iscntrl_F},
	{"isblank",&_isblank_F},
	{"isalpha",&_isalpha_F},
	{"isalnum",&_isalnum_F},
	{"__eprintf",&___eprintf_F},
//	{"__assert_rtn",&___assert_rtn_F},
};

Nat4	VPX_UNIX_Constants_Number = 22 - 16;    //	 16 removed for 10.6 (sigcontext & ucontext64)
Nat4	VPX_UNIX_Structures_Number = 29 - 2;	//	 two removed for 10.6 (sigcontext & ucontext64)
Nat4	VPX_UNIX_Procedures_Number = 522 - 17;

#pragma export on

Nat4	load_MacOSX_UNIX_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_UNIX_Constants(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_UNIX_Constants_Number,VPX_UNIX_Constants);
		
		return result;
}

Nat4	load_MacOSX_UNIX_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_UNIX_Structures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_UNIX_Structures_Number,VPX_UNIX_Structures);
		
		return result;
}

Nat4	load_MacOSX_UNIX_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_UNIX_Procedures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_UNIX_Procedures_Number,VPX_UNIX_Procedures);
		
		return result;
}

#pragma export off
