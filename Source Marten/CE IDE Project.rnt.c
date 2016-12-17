/* A Marten Project Source File */
/*

CE IDE Project.rnt.c
Copyright: 2005 Andescotia LLC

*/

#define vpl_MAIN "MAIN"
#define vpl_INIT NULL

V_Environment gVPLCE_20_IDE_20_Project_Environment = NULL;

extern Nat4 load_Interpreter(V_Environment environment);
extern Nat4 load_LibC(V_Environment environment);
extern Nat4 load_martenInfo(V_Environment environment);
extern Nat4 load_MacOSX(V_Environment environment);
extern Nat4 load_Carbon(V_Environment environment);
extern Nat4 load_System(V_Environment environment);
extern Nat4 load_Standard(V_Environment environment);


extern Nat4 load_Application(V_Environment environment);
extern Nat4 load_Common_20_Universals(V_Environment environment);
extern Nat4 load_Common_20_Blocks(V_Environment environment);
extern Nat4 load_Common_20_Drawing(V_Environment environment);
extern Nat4 load_Services(V_Environment environment);
extern Nat4 load_Debug(V_Environment environment);
extern Nat4 load_Desktop_20_Service(V_Environment environment);
extern Nat4 load_Dispatch(V_Environment environment);
extern Nat4 load_Dispatch_20_Callback(V_Environment environment);
extern Nat4 load_Event_20_Service(V_Environment environment);
extern Nat4 load_Apple_20_Events(V_Environment environment);
extern Nat4 load_OSA_20_Event(V_Environment environment);
extern Nat4 load_Carbon_20_Events(V_Environment environment);
extern Nat4 load_Pasteboard_20_Service(V_Environment environment);
extern Nat4 load_Pasteboard_20_Archive(V_Environment environment);
extern Nat4 load_Drag_202620_Drop(V_Environment environment);
extern Nat4 load_Printing(V_Environment environment);
extern Nat4 load_Media_20_Reference(V_Environment environment);
extern Nat4 load_Navigation(V_Environment environment);
extern Nat4 load_HIObject(V_Environment environment);
extern Nat4 load_HIToolbar(V_Environment environment);
extern Nat4 load_HIView(V_Environment environment);
extern Nat4 load_HIView_20_Scrollable(V_Environment environment);
extern Nat4 load_Icons(V_Environment environment);
extern Nat4 load_CF_20_Base(V_Environment environment);
extern Nat4 load_CF_20_Streams(V_Environment environment);
extern Nat4 load_CF_20_Network_20_Service(V_Environment environment);
extern Nat4 load_CG_20_Context(V_Environment environment);
extern Nat4 load_Window(V_Environment environment);
extern Nat4 load_Window_20_Extras(V_Environment environment);
extern Nat4 load_Window_20_Item(V_Environment environment);
extern Nat4 load_Data_20_Browser(V_Environment environment);
extern Nat4 load_MP_20_Task_20_Service(V_Environment environment);
extern Nat4 load_Activity_20_Service(V_Environment environment);
extern Nat4 load_Activity_20_Stages(V_Environment environment);
extern Nat4 load_Activity_20_Test(V_Environment environment);
extern Nat4 load_Workspace(V_Environment environment);
extern Nat4 load_About_20_Window(V_Environment environment);
extern Nat4 load_Info_20_Window(V_Environment environment);
extern Nat4 load_Info_20_Extras(V_Environment environment);
extern Nat4 load_Preferences_20_Window(V_Environment environment);
extern Nat4 load_Project_20_Window(V_Environment environment);
extern Nat4 load_Project_20_Open_20_Activity(V_Environment environment);
extern Nat4 load_Project_20_File_20_Activity(V_Environment environment);
extern Nat4 load_Project_20_Update_20_Activity(V_Environment environment);
extern Nat4 load_Project_20_Build_20_Activity(V_Environment environment);
extern Nat4 load_MyCaseData(V_Environment environment);
extern Nat4 load_MyClassData(V_Environment environment);
extern Nat4 load_MyDebugData(V_Environment environment);
extern Nat4 load_MyHelperData(V_Environment environment);
extern Nat4 load_MyInputOutputs(V_Environment environment);
extern Nat4 load_MyListData(V_Environment environment);
extern Nat4 load_MyOperationData(V_Environment environment);
extern Nat4 load_MyProjectData(V_Environment environment);
extern Nat4 load_MySectionData(V_Environment environment);
extern Nat4 load_MyUniversalData(V_Environment environment);
extern Nat4 load_MyUtilities(V_Environment environment);
extern Nat4 load_MyValueData(V_Environment environment);
extern Nat4 load_VPLCEWindows(V_Environment environment);
extern Nat4 load_VPLWindowItems(V_Environment environment);
extern Nat4 load_VPLViews(V_Environment environment);
extern Nat4 load_VPLControls(V_Environment environment);
extern Nat4 load_VPLEdit_20_Text(V_Environment environment);
extern Nat4 load_VPLGraphics(V_Environment environment);
extern Nat4 load_VPLGraphicItems(V_Environment environment);
extern Nat4 load_List_20_Window(V_Environment environment);
extern Nat4 load_MyCaseGraphics(V_Environment environment);
extern Nat4 load_MyCaseWindow(V_Environment environment);
extern Nat4 load_MyCaseDrawer(V_Environment environment);
extern Nat4 load_MyCaseDropWindow(V_Environment environment);
extern Nat4 load_MySelectWindow(V_Environment environment);
extern Nat4 load_Value_20_Window(V_Environment environment);
extern Nat4 load_Debugger(V_Environment environment);
extern Nat4 load_MyStackWindow(V_Environment environment);
extern Nat4 load_MyFindWindow(V_Environment environment);
extern Nat4 load_MyCreateWindow(V_Environment environment);


vpl_Status load_project_CE_20_IDE_20_Project(V_Environment environment);
vpl_Status load_project_CE_20_IDE_20_Project(V_Environment environment)
{
	Int4	result = 0;

	load_Interpreter(environment);
	load_LibC(environment);
	load_martenInfo(environment);
	load_MacOSX(environment);
	load_Carbon(environment);
	load_System(environment);
	load_Standard(environment);


	load_Application(environment);
	load_Common_20_Universals(environment);
	load_Common_20_Blocks(environment);
	load_Common_20_Drawing(environment);
	load_Services(environment);
	load_Debug(environment);
	load_Desktop_20_Service(environment);
	load_Dispatch(environment);
	load_Dispatch_20_Callback(environment);
	load_Event_20_Service(environment);
	load_Apple_20_Events(environment);
	load_OSA_20_Event(environment);
	load_Carbon_20_Events(environment);
	load_Pasteboard_20_Service(environment);
	load_Pasteboard_20_Archive(environment);
	load_Drag_202620_Drop(environment);
	load_Printing(environment);
	load_Media_20_Reference(environment);
	load_Navigation(environment);
	load_HIObject(environment);
	load_HIToolbar(environment);
	load_HIView(environment);
	load_HIView_20_Scrollable(environment);
	load_Icons(environment);
	load_CF_20_Base(environment);
	load_CF_20_Streams(environment);
	load_CF_20_Network_20_Service(environment);
	load_CG_20_Context(environment);
	load_Window(environment);
	load_Window_20_Extras(environment);
	load_Window_20_Item(environment);
	load_Data_20_Browser(environment);
	load_MP_20_Task_20_Service(environment);
	load_Activity_20_Service(environment);
	load_Activity_20_Stages(environment);
	load_Activity_20_Test(environment);
	load_Workspace(environment);
	load_About_20_Window(environment);
	load_Info_20_Window(environment);
	load_Info_20_Extras(environment);
	load_Preferences_20_Window(environment);
	load_Project_20_Window(environment);
	load_Project_20_Open_20_Activity(environment);
	load_Project_20_File_20_Activity(environment);
	load_Project_20_Update_20_Activity(environment);
	load_Project_20_Build_20_Activity(environment);
	load_MyCaseData(environment);
	load_MyClassData(environment);
	load_MyDebugData(environment);
	load_MyHelperData(environment);
	load_MyInputOutputs(environment);
	load_MyListData(environment);
	load_MyOperationData(environment);
	load_MyProjectData(environment);
	load_MySectionData(environment);
	load_MyUniversalData(environment);
	load_MyUtilities(environment);
	load_MyValueData(environment);
	load_VPLCEWindows(environment);
	load_VPLWindowItems(environment);
	load_VPLViews(environment);
	load_VPLControls(environment);
	load_VPLEdit_20_Text(environment);
	load_VPLGraphics(environment);
	load_VPLGraphicItems(environment);
	load_List_20_Window(environment);
	load_MyCaseGraphics(environment);
	load_MyCaseWindow(environment);
	load_MyCaseDrawer(environment);
	load_MyCaseDropWindow(environment);
	load_MySelectWindow(environment);
	load_Value_20_Window(environment);
	load_Debugger(environment);
	load_MyStackWindow(environment);
	load_MyFindWindow(environment);
	load_MyCreateWindow(environment);


    return kNOERROR;
}

void init_project_CE_20_IDE_20_Project(void);
void init_project_CE_20_IDE_20_Project(void)
{
    if( gVPLCE_20_IDE_20_Project_Environment == NULL ){
        gVPLCE_20_IDE_20_Project_Environment = VPLEnvironmentCreate("CE IDE Project", kvpl_StackRuntime, kTRUE);

        load_project_CE_20_IDE_20_Project(gVPLCE_20_IDE_20_Project_Environment);

        VPLEnvironmentInit(gVPLCE_20_IDE_20_Project_Environment, vpl_INIT);
    }
}

int main(int argc,char *argv[])
{
    init_project_CE_20_IDE_20_Project();
        
    return VPLEnvironmentMain(gVPLCE_20_IDE_20_Project_Environment,vpl_MAIN,argc,argv);
}
