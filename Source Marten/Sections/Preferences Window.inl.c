/* A VPL Section File */
/*

Preferences Window.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_VPLPrefs_20_Sync_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Sync_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(5)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(0));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"List Viewer Frame",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(3),TERMINAL(4));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLPrefs_20_Sync(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_VPLPrefs_20_Sync_case_1_local_2(PARAMETERS);

result = vpx_method_CFPreferences_20_Synchronize(PARAMETERS,NONE);
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Open Viewer At Launch?",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Reuse List Window?",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_4_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_4_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"4",TERMINAL(1));
FAILONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,LIST(0));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(5)
result = kSuccess;

result = vpx_constant(PARAMETERS,"List Viewer Frame",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_VPLPrefs_20_Load_case_1_local_4_case_2_local_7(PARAMETERS,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"VPL Data",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLPrefs_20_Load_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_VPLPrefs_20_Load_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Dock Side",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"List Line Highlights?",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_List_20_View_20_Row_20_Colors_3F_,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Export Mode",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Default Template",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Load_20_Project_20_Templates(PARAMETERS);
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VPZ Access Control",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Text File Creator Code",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_method_VPLPrefs_20_Load_case_1_local_11_case_1_local_4(PARAMETERS,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Interpreter Mode",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Load_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Auto Move Output Bar?",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_inject_persistent(PARAMETERS,INJECT(0),1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Load(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_VPLPrefs_20_Load_case_1_local_2(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_3(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_4(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_5(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_6(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_7(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_8(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_9(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_10(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_11(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_12(PARAMETERS);

result = vpx_method_VPLPrefs_20_Load_case_1_local_13(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLPrefs_20_Reset_case_1_local_23(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Reset_case_1_local_23(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(0));

result = vpx_persistent(PARAMETERS,kVPXValue_VPZ_20_Access_20_Control,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"\"mVPL\"",ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Text_20_File_20_Creator_20_Code,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Reset_case_1_local_24(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Reset_case_1_local_24(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_persistent(PARAMETERS,kVPXValue_Current_20_Drag,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Auto_20_Move_20_Output_20_Bar_3F_,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Reset_case_1_local_25(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_VPLPrefs_20_Reset_case_1_local_25(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_persistent(PARAMETERS,kVPXValue_Last_20_Form,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"com.andescotia",ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Default_20_Bundle_20_Identifier_20_Prefix,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLPrefs_20_Reset(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(12)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Process",ROOT(0));

result = vpx_persistent(PARAMETERS,kVPXValue_Interpreter_20_Mode,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"Standard",ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = vpx_persistent(PARAMETERS,kVPXValue_Lookup_20_History,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Open_20_Viewer_20_At_20_Launch_3F_,1,0,TERMINAL(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_persistent(PARAMETERS,kVPXValue_Reuse_20_List_20_Window_3F_,1,0,TERMINAL(4));

result = vpx_constant(PARAMETERS,"( 60 60 260 360 )",ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPL_20_Data,1,1,NONE,ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_persistent(PARAMETERS,kVPXValue_Current_20_Find_20_State,1,0,TERMINAL(8));

result = vpx_constant(PARAMETERS,"0",ROOT(9));

result = vpx_persistent(PARAMETERS,kVPXValue_appDEBUG_5F_VERBOSITY,1,0,TERMINAL(9));

result = vpx_constant(PARAMETERS,"( )",ROOT(10));

result = vpx_persistent(PARAMETERS,kVPXValue_Project_20_Templates,1,0,TERMINAL(10));

result = vpx_constant(PARAMETERS,"\"com.andescotia.marten.template.project.empty\"",ROOT(11));

result = vpx_persistent(PARAMETERS,kVPXValue_Default_20_Template,1,0,TERMINAL(11));

result = vpx_method_VPLPrefs_20_Reset_case_1_local_23(PARAMETERS);

result = vpx_method_VPLPrefs_20_Reset_case_1_local_24(PARAMETERS);

result = vpx_method_VPLPrefs_20_Reset_case_1_local_25(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}




	Nat4 tempAttribute_Preferences_20_Window_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X057B0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0B000000, 0X50726566, 0X6572656E, 0X63657300
	};
	Nat4 tempAttribute_Preferences_20_Window_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X00000600, 0X00000124, 0X00000044, 0X00000014, 0X000006F0, 0X000006EC, 0X000006E4,
0X0000042C, 0X0000069C, 0X00000698, 0X00000690, 0X00000428, 0X00000648, 0X00000644, 0X0000063C,
0X00000424, 0X000005F4, 0X000005F0, 0X000005E8, 0X00000420, 0X000005A0, 0X0000059C, 0X00000594,
0X0000041C, 0X0000054C, 0X00000548, 0X00000540, 0X00000418, 0X000004F8, 0X000004F4, 0X000004EC,
0X00000414, 0X000004A4, 0X000004A0, 0X00000498, 0X00000410, 0X00000450, 0X0000044C, 0X00000444,
0X0000040C, 0X00000404, 0X00000190, 0X0000018C, 0X000003BC, 0X00000178, 0X00000390, 0X00000174,
0X00000364, 0X0000034C, 0X00000324, 0X0000032C, 0X0000030C, 0X00000304, 0X0000016C, 0X000002DC,
0X000002C4, 0X0000029C, 0X000002A4, 0X00000220, 0X00000278, 0X00000260, 0X00000238, 0X00000240,
0X0000021C, 0X00000214, 0X00000168, 0X000001E4, 0X00000164, 0X000001B4, 0X0000015C, 0X00000138,
0X00000140, 0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000015C, 0X00000011,
0X00000144, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X000001A0,
0000000000, 0X000001D0, 0X00000200, 0X000002F0, 0000000000, 0X0000037C, 0X000003A8, 0000000000,
0000000000, 0000000000, 0000000000, 0X000003D8, 0X000003F0, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001BC, 0X11000000, 0X6B457665,
0X6E745769, 0X6E646F77, 0X436C6173, 0X73000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001EC, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000021C, 0X00000002, 0X00000224,
0X00000288, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000260, 0X00000001,
0X00000244, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X00000264, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002C4,
0X00000001, 0X000002A8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X000002C8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E4,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000030C, 0X00000001, 0X00000310, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000034C, 0X00000001, 0X00000330, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X00000350, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0F000000, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000040C, 0X00000009, 0X00000430, 0X00000484, 0X000004D8, 0X0000052C, 0X00000580,
0X000005D4, 0X00000628, 0X0000067C, 0X000006D0, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000044C, 0X00000002, 0X00000454, 0X0000046C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004A0, 0X00000002,
0X000004A8, 0X000004C0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636D6473,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000004F4, 0X00000002, 0X000004FC, 0X00000514, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000048, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000548, 0X00000002, 0X00000550, 0X00000568, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000004A,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000059C, 0X00000002, 0X000005A4,
0X000005BC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000005F0, 0X00000002, 0X000005F8, 0X00000610, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000006, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000644,
0X00000002, 0X0000064C, 0X00000664, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000698, 0X00000002, 0X000006A0, 0X000006B8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000001B, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000006EC, 0X00000002, 0X000006F4, 0X0000070C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000050
	};
	Nat4 tempAttribute_Preferences_20_Window_2F_Drawers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Preferences_20_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Preferences_20_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Preferences_20_Window_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_Preferences_20_Window_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Drawers",tempClass,tempAttribute_Preferences_20_Window_2F_Drawers,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Document Window");
	return kNOERROR;
}

/* Start Universals: { 185 334 }{ 609 310 } */
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Name,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"main",ROOT(1));

result = vpx_constant(PARAMETERS,"Prefs Window",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Nib_20_Window,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Controls,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Preferences_20_Window_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Run_20_Mode,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Interpreter_20_Mode,0,1,ROOT(2));

result = vpx_constant(PARAMETERS,"( \"Thread\" \"Process\" )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Case_20_Drawer,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Auto_20_Open_20_Case_20_Drawer_3F_,0,1,ROOT(2));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Deep_20_Case,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Deep_20_Case_20_Items_3F_,0,1,ROOT(2));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Proto_20_Windows,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Use_20_Prototype_20_Windows_3F_,0,1,ROOT(2));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Export_20_Mode,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(2));

result = vpx_constant(PARAMETERS,"( Standard Experimental )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Dock_20_Position,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Case_20_Dock_20_Side,0,1,ROOT(2));

result = vpx_constant(PARAMETERS,"( Left Top Right Bottom )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Initial_20_Window_3F_,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Open_20_Viewer_20_At_20_Launch_3F_,0,1,ROOT(2));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Reuse_20_List_3F_,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Reuse_20_List_20_Window_3F_,0,1,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_not,1,1,TERMINAL(2),ROOT(3));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Line_20_Hilite_3F_,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_List_20_View_20_Row_20_Colors_3F_,0,1,ROOT(2));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Recent_20_Projects,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_method_Get_20_Recents_20_Service(PARAMETERS,ROOT(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"( 0 5 10 15 20 30 50 )",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Projects_20_Max,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Value,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Open_20_Controls(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_5(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_6(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_7(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_8(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_9(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_10(PARAMETERS,TERMINAL(0));

result = vpx_method_Preferences_20_Window_2F_Open_20_Controls_case_1_local_11(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Pref\' 1 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Pref\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PRrt\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Run_20_Tests,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PrIM\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Run_20_Mode,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PRoc\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Open_20_Cases,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PRdc\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Deep_20_Cases,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PRpw\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Proto_20_Windows,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PrDp\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Dock_20_Position,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PRem\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Export_20_Mode,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PRrl\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Reuse_20_List_3F_,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PRpl\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Initial_20_Window_3F_,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PRlh\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Line_20_Hilite_3F_,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'PrRp\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Recent_20_Projects,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Run_20_Tests(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Run_20_Test_20_Tool(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Run_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Run_20_Mode,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( \"Thread\" \"Process\" )",ROOT(3));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Interpreter_20_Mode,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Pref\' 2 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Pref\' 2 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Pref\' 3 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Pref\' 3 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Open_20_Cases(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Case_20_Drawer,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Auto_20_Open_20_Case_20_Drawer_3F_,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Deep_20_Cases(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Deep_20_Case,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Deep_20_Case_20_Items_3F_,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Get_20_Method_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Pref\' 4 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Pref\' 4 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Proto_20_Windows(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Proto_20_Windows,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Use_20_Prototype_20_Windows_3F_,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'PRem\' 1 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'PRem\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'PrCD\' 1 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'PrCD\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Dock_20_Position_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Dock_20_Position_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(3)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(0));

result = vpx_constant(PARAMETERS,"Case Window",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Dock_20_Position(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Dock_20_Position,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( Left Top Right Bottom )",ROOT(3));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Case_20_Dock_20_Side,1,0,TERMINAL(4));

result = vpx_method_Preferences_20_Window_2F_HIC_20_Dock_20_Position_case_1_local_7(PARAMETERS);

result = vpx_constant(PARAMETERS,"Case Dock Side",ROOT(5));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(5),TERMINAL(4));
TERMINATEONFAILURE

result = vpx_method_VPLPrefs_20_Sync(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Export_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Export_20_Mode,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( Standard Experimental )",ROOT(3));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,1,0,TERMINAL(4));

result = vpx_constant(PARAMETERS,"Export Mode",ROOT(5));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(5),TERMINAL(4));
TERMINATEONFAILURE

result = vpx_method_VPLPrefs_20_Sync(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Pref\' 5 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Pref\' 5 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F__case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Initial_20_Window_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Initial_20_Window_3F_,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Open_20_Viewer_20_At_20_Launch_3F_,1,0,TERMINAL(3));

result = vpx_constant(PARAMETERS,"Open Viewer At Launch?",ROOT(4));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(4),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_method_VPLPrefs_20_Sync(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Pref\' 6 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Pref\' 6 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F__case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Reuse_20_List_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Reuse_20_List_3F_,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_not,1,1,TERMINAL(3),ROOT(4));

result = vpx_persistent(PARAMETERS,kVPXValue_Reuse_20_List_20_Window_3F_,1,0,TERMINAL(4));

result = vpx_constant(PARAMETERS,"Reuse List Window?",ROOT(5));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(5),TERMINAL(4));
TERMINATEONFAILURE

result = vpx_method_VPLPrefs_20_Sync(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Pref\' 7 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Pref\' 7 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F__case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Line_20_Hilite_3F__case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Line_20_Hilite_3F__case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Windows,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh,1,0,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Line_20_Hilite_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Line_20_Hilite_3F_,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_List_20_View_20_Row_20_Colors_3F_,1,0,TERMINAL(3));

result = vpx_constant(PARAMETERS,"List Line Highlights?",ROOT(4));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(4),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_method_VPLPrefs_20_Sync(PARAMETERS);

result = vpx_method_Preferences_20_Window_2F_HIC_20_Line_20_Hilite_3F__case_1_local_9(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_HIC_20_Recent_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Recent_20_Projects,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Control_20_Value,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( 0 5 10 15 20 30 50 )",ROOT(3));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_method_Get_20_Recents_20_Service(PARAMETERS,ROOT(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Change_20_Projects_20_Max,2,0,TERMINAL(5),TERMINAL(4));

result = vpx_method_VPLPrefs_20_Sync(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'PrRp\' 1 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'PrRp\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_Preferences_20_Window(V_Environment environment);
Nat4	loadClasses_Preferences_20_Window(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Preferences Window",environment);
	if(result == NULL) return kERROR;
	VPLC_Preferences_20_Window_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Preferences_20_Window(V_Environment environment);
Nat4	loadUniversals_Preferences_20_Window(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPLPrefs Sync",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLPrefs_20_Sync,NULL);

	result = method_new("VPLPrefs Load",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLPrefs_20_Load,NULL);

	result = method_new("VPLPrefs Reset",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLPrefs_20_Reset,NULL);

	result = method_new("Preferences Window/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Open,NULL);

	result = method_new("Preferences Window/Open Controls",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Open_20_Controls,NULL);

	result = method_new("Preferences Window/Find Run Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Run_20_Mode,NULL);

	result = method_new("Preferences Window/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_CE_20_HICommand_20_Process,NULL);

	result = method_new("Preferences Window/HIC Run Tests",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Run_20_Tests,NULL);

	result = method_new("Preferences Window/HIC Run Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Run_20_Mode,NULL);

	result = method_new("Preferences Window/Find Case Drawer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Case_20_Drawer,NULL);

	result = method_new("Preferences Window/Find Deep Case",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Deep_20_Case,NULL);

	result = method_new("Preferences Window/HIC Open Cases",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Open_20_Cases,NULL);

	result = method_new("Preferences Window/HIC Deep Cases",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Deep_20_Cases,NULL);

	result = method_new("Preferences Window/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Preferences Window/Get Method Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Get_20_Method_20_Data,NULL);

	result = method_new("Preferences Window/Find Proto Windows",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Proto_20_Windows,NULL);

	result = method_new("Preferences Window/HIC Proto Windows",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Proto_20_Windows,NULL);

	result = method_new("Preferences Window/Find Export Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Export_20_Mode,NULL);

	result = method_new("Preferences Window/Find Dock Position",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Dock_20_Position,NULL);

	result = method_new("Preferences Window/HIC Dock Position",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Dock_20_Position,NULL);

	result = method_new("Preferences Window/HIC Export Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Export_20_Mode,NULL);

	result = method_new("Preferences Window/Find Initial Window?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Initial_20_Window_3F_,NULL);

	result = method_new("Preferences Window/HIC Initial Window?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Initial_20_Window_3F_,NULL);

	result = method_new("Preferences Window/Find Reuse List?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Reuse_20_List_3F_,NULL);

	result = method_new("Preferences Window/HIC Reuse List?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Reuse_20_List_3F_,NULL);

	result = method_new("Preferences Window/Find Line Hilite?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Line_20_Hilite_3F_,NULL);

	result = method_new("Preferences Window/HIC Line Hilite?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Line_20_Hilite_3F_,NULL);

	result = method_new("Preferences Window/HIC Recent Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_HIC_20_Recent_20_Projects,NULL);

	result = method_new("Preferences Window/Find Recent Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Preferences_20_Window_2F_Find_20_Recent_20_Projects,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Preferences_20_Window(V_Environment environment);
Nat4	loadPersistents_Preferences_20_Window(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Preferences Window/Toolbar",NULL,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_Preferences_20_Window(V_Environment environment);
Nat4	load_Preferences_20_Window(V_Environment environment)
{

	loadClasses_Preferences_20_Window(environment);
	loadUniversals_Preferences_20_Window(environment);
	loadPersistents_Preferences_20_Window(environment);
	return kNOERROR;

}

