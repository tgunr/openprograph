/*
	
	MacOSX_OpenGL.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <AGL/agl.h>
#include <Glut/glut.h>

#pragma mark --------------- Constants ---------------


#pragma mark --------------- Structures ---------------

	VPL_ExtStructure _VPXStruct___AGLPBufferRec_S = {"__AGLPBufferRec",NULL,0};

	VPL_ExtStructure _VPXStruct___AGLContextRec_S = {"__AGLContextRec",NULL,0};

	VPL_ExtStructure _VPXStruct___AGLPixelFormatRec_S = {"__AGLPixelFormatRec",NULL,0};

	VPL_ExtStructure _VPXStruct___AGLRendererInfoRec_S = {"__AGLRendererInfoRec",NULL,0};

	VPL_ExtStructure _VPXStruct_OpaqueGrafPtr_S = {"OpaqueGrafPtr",NULL,0};

	VPL_ExtStructure _VPXStruct_GDevice_S = {"GDevice",NULL,0};

	VPL_ExtStructure _VPXStruct_GLUtesselator_S = {"GLUtesselator",NULL,0};

	VPL_ExtStructure _VPXStruct_GLUquadric_S = {"GLUquadric",NULL,0};

	VPL_ExtStructure _VPXStruct_GLUnurbs_S = {"GLUnurbs",NULL,0};


#pragma mark --------------- Procedures ---------------




	VPL_Parameter _glutGameModeGet_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutGameModeGet_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutGameModeGet_F = {"glutGameModeGet",glutGameModeGet,&_glutGameModeGet_1,&_glutGameModeGet_R};

	VPL_ExtProcedure _glutLeaveGameMode_F = {"glutLeaveGameMode",glutLeaveGameMode,NULL,NULL};

	VPL_Parameter _glutEnterGameMode_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutEnterGameMode_F = {"glutEnterGameMode",glutEnterGameMode,NULL,&_glutEnterGameMode_R};

	VPL_Parameter _glutGameModeString_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _glutGameModeString_F = {"glutGameModeString",glutGameModeString,&_glutGameModeString_1,NULL};

	VPL_ExtProcedure _glutForceJoystickFunc_F = {"glutForceJoystickFunc",glutForceJoystickFunc,NULL,NULL};

	VPL_Parameter _glutSetKeyRepeat_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutSetKeyRepeat_F = {"glutSetKeyRepeat",glutSetKeyRepeat,&_glutSetKeyRepeat_1,NULL};

	VPL_Parameter _glutIgnoreKeyRepeat_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutIgnoreKeyRepeat_F = {"glutIgnoreKeyRepeat",glutIgnoreKeyRepeat,&_glutIgnoreKeyRepeat_1,NULL};

	VPL_ExtProcedure _glutReportErrors_F = {"glutReportErrors",glutReportErrors,NULL,NULL};

	VPL_Parameter _glutVideoPan_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutVideoPan_3 = { kIntType,4,NULL,0,0,&_glutVideoPan_4};
	VPL_Parameter _glutVideoPan_2 = { kIntType,4,NULL,0,0,&_glutVideoPan_3};
	VPL_Parameter _glutVideoPan_1 = { kIntType,4,NULL,0,0,&_glutVideoPan_2};
	VPL_ExtProcedure _glutVideoPan_F = {"glutVideoPan",glutVideoPan,&_glutVideoPan_1,NULL};

	VPL_Parameter _glutVideoResize_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutVideoResize_3 = { kIntType,4,NULL,0,0,&_glutVideoResize_4};
	VPL_Parameter _glutVideoResize_2 = { kIntType,4,NULL,0,0,&_glutVideoResize_3};
	VPL_Parameter _glutVideoResize_1 = { kIntType,4,NULL,0,0,&_glutVideoResize_2};
	VPL_ExtProcedure _glutVideoResize_F = {"glutVideoResize",glutVideoResize,&_glutVideoResize_1,NULL};

	VPL_ExtProcedure _glutStopVideoResizing_F = {"glutStopVideoResizing",glutStopVideoResizing,NULL,NULL};

	VPL_ExtProcedure _glutSetupVideoResizing_F = {"glutSetupVideoResizing",glutSetupVideoResizing,NULL,NULL};

	VPL_Parameter _glutVideoResizeGet_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutVideoResizeGet_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutVideoResizeGet_F = {"glutVideoResizeGet",glutVideoResizeGet,&_glutVideoResizeGet_1,&_glutVideoResizeGet_R};

	VPL_ExtProcedure _glutSolidIcosahedron_F = {"glutSolidIcosahedron",glutSolidIcosahedron,NULL,NULL};

	VPL_ExtProcedure _glutWireIcosahedron_F = {"glutWireIcosahedron",glutWireIcosahedron,NULL,NULL};

	VPL_ExtProcedure _glutSolidTetrahedron_F = {"glutSolidTetrahedron",glutSolidTetrahedron,NULL,NULL};

	VPL_ExtProcedure _glutWireTetrahedron_F = {"glutWireTetrahedron",glutWireTetrahedron,NULL,NULL};

	VPL_ExtProcedure _glutSolidOctahedron_F = {"glutSolidOctahedron",glutSolidOctahedron,NULL,NULL};

	VPL_ExtProcedure _glutWireOctahedron_F = {"glutWireOctahedron",glutWireOctahedron,NULL,NULL};

	VPL_Parameter _glutSolidTeapot_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glutSolidTeapot_F = {"glutSolidTeapot",glutSolidTeapot,&_glutSolidTeapot_1,NULL};

	VPL_Parameter _glutWireTeapot_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glutWireTeapot_F = {"glutWireTeapot",glutWireTeapot,&_glutWireTeapot_1,NULL};

	VPL_ExtProcedure _glutSolidDodecahedron_F = {"glutSolidDodecahedron",glutSolidDodecahedron,NULL,NULL};

	VPL_ExtProcedure _glutWireDodecahedron_F = {"glutWireDodecahedron",glutWireDodecahedron,NULL,NULL};

	VPL_Parameter _glutSolidTorus_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSolidTorus_3 = { kIntType,4,NULL,0,0,&_glutSolidTorus_4};
	VPL_Parameter _glutSolidTorus_2 = { kFloatType,8,NULL,0,0,&_glutSolidTorus_3};
	VPL_Parameter _glutSolidTorus_1 = { kFloatType,8,NULL,0,0,&_glutSolidTorus_2};
	VPL_ExtProcedure _glutSolidTorus_F = {"glutSolidTorus",glutSolidTorus,&_glutSolidTorus_1,NULL};

	VPL_Parameter _glutWireTorus_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutWireTorus_3 = { kIntType,4,NULL,0,0,&_glutWireTorus_4};
	VPL_Parameter _glutWireTorus_2 = { kFloatType,8,NULL,0,0,&_glutWireTorus_3};
	VPL_Parameter _glutWireTorus_1 = { kFloatType,8,NULL,0,0,&_glutWireTorus_2};
	VPL_ExtProcedure _glutWireTorus_F = {"glutWireTorus",glutWireTorus,&_glutWireTorus_1,NULL};

	VPL_Parameter _glutSolidCube_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glutSolidCube_F = {"glutSolidCube",glutSolidCube,&_glutSolidCube_1,NULL};

	VPL_Parameter _glutWireCube_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glutWireCube_F = {"glutWireCube",glutWireCube,&_glutWireCube_1,NULL};

	VPL_Parameter _glutSolidCone_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSolidCone_3 = { kIntType,4,NULL,0,0,&_glutSolidCone_4};
	VPL_Parameter _glutSolidCone_2 = { kFloatType,8,NULL,0,0,&_glutSolidCone_3};
	VPL_Parameter _glutSolidCone_1 = { kFloatType,8,NULL,0,0,&_glutSolidCone_2};
	VPL_ExtProcedure _glutSolidCone_F = {"glutSolidCone",glutSolidCone,&_glutSolidCone_1,NULL};

	VPL_Parameter _glutWireCone_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutWireCone_3 = { kIntType,4,NULL,0,0,&_glutWireCone_4};
	VPL_Parameter _glutWireCone_2 = { kFloatType,8,NULL,0,0,&_glutWireCone_3};
	VPL_Parameter _glutWireCone_1 = { kFloatType,8,NULL,0,0,&_glutWireCone_2};
	VPL_ExtProcedure _glutWireCone_F = {"glutWireCone",glutWireCone,&_glutWireCone_1,NULL};

	VPL_Parameter _glutSolidSphere_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSolidSphere_2 = { kIntType,4,NULL,0,0,&_glutSolidSphere_3};
	VPL_Parameter _glutSolidSphere_1 = { kFloatType,8,NULL,0,0,&_glutSolidSphere_2};
	VPL_ExtProcedure _glutSolidSphere_F = {"glutSolidSphere",glutSolidSphere,&_glutSolidSphere_1,NULL};

	VPL_Parameter _glutWireSphere_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutWireSphere_2 = { kIntType,4,NULL,0,0,&_glutWireSphere_3};
	VPL_Parameter _glutWireSphere_1 = { kFloatType,8,NULL,0,0,&_glutWireSphere_2};
	VPL_ExtProcedure _glutWireSphere_F = {"glutWireSphere",glutWireSphere,&_glutWireSphere_1,NULL};

	VPL_Parameter _glutStrokeLength_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutStrokeLength_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glutStrokeLength_1 = { kPointerType,0,"void",1,0,&_glutStrokeLength_2};
	VPL_ExtProcedure _glutStrokeLength_F = {"glutStrokeLength",glutStrokeLength,&_glutStrokeLength_1,&_glutStrokeLength_R};

	VPL_Parameter _glutBitmapLength_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutBitmapLength_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glutBitmapLength_1 = { kPointerType,0,"void",1,0,&_glutBitmapLength_2};
	VPL_ExtProcedure _glutBitmapLength_F = {"glutBitmapLength",glutBitmapLength,&_glutBitmapLength_1,&_glutBitmapLength_R};

	VPL_Parameter _glutStrokeWidth_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutStrokeWidth_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutStrokeWidth_1 = { kPointerType,0,"void",1,0,&_glutStrokeWidth_2};
	VPL_ExtProcedure _glutStrokeWidth_F = {"glutStrokeWidth",glutStrokeWidth,&_glutStrokeWidth_1,&_glutStrokeWidth_R};

	VPL_Parameter _glutStrokeCharacter_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutStrokeCharacter_1 = { kPointerType,0,"void",1,0,&_glutStrokeCharacter_2};
	VPL_ExtProcedure _glutStrokeCharacter_F = {"glutStrokeCharacter",glutStrokeCharacter,&_glutStrokeCharacter_1,NULL};

	VPL_Parameter _glutBitmapWidth_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutBitmapWidth_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutBitmapWidth_1 = { kPointerType,0,"void",1,0,&_glutBitmapWidth_2};
	VPL_ExtProcedure _glutBitmapWidth_F = {"glutBitmapWidth",glutBitmapWidth,&_glutBitmapWidth_1,&_glutBitmapWidth_R};

	VPL_Parameter _glutBitmapCharacter_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutBitmapCharacter_1 = { kPointerType,0,"void",1,0,&_glutBitmapCharacter_2};
	VPL_ExtProcedure _glutBitmapCharacter_F = {"glutBitmapCharacter",glutBitmapCharacter,&_glutBitmapCharacter_1,NULL};

	VPL_Parameter _glutGetProcAddress_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glutGetProcAddress_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _glutGetProcAddress_F = {"glutGetProcAddress",glutGetProcAddress,&_glutGetProcAddress_1,&_glutGetProcAddress_R};

	VPL_Parameter _glutLayerGet_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutLayerGet_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutLayerGet_F = {"glutLayerGet",glutLayerGet,&_glutLayerGet_1,&_glutLayerGet_R};

	VPL_Parameter _glutGetModifiers_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutGetModifiers_F = {"glutGetModifiers",glutGetModifiers,NULL,&_glutGetModifiers_R};

	VPL_Parameter _glutExtensionSupported_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutExtensionSupported_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _glutExtensionSupported_F = {"glutExtensionSupported",glutExtensionSupported,&_glutExtensionSupported_1,&_glutExtensionSupported_R};

	VPL_Parameter _glutDeviceGet_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutDeviceGet_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutDeviceGet_F = {"glutDeviceGet",glutDeviceGet,&_glutDeviceGet_1,&_glutDeviceGet_R};

	VPL_Parameter _glutGet_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutGet_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutGet_F = {"glutGet",glutGet,&_glutGet_1,&_glutGet_R};

	VPL_Parameter _glutCopyColormap_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutCopyColormap_F = {"glutCopyColormap",glutCopyColormap,&_glutCopyColormap_1,NULL};

	VPL_Parameter _glutGetColor_R = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glutGetColor_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutGetColor_1 = { kIntType,4,NULL,0,0,&_glutGetColor_2};
	VPL_ExtProcedure _glutGetColor_F = {"glutGetColor",glutGetColor,&_glutGetColor_1,&_glutGetColor_R};

	VPL_Parameter _glutSetColor_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSetColor_3 = { kFloatType,4,NULL,0,0,&_glutSetColor_4};
	VPL_Parameter _glutSetColor_2 = { kFloatType,4,NULL,0,0,&_glutSetColor_3};
	VPL_Parameter _glutSetColor_1 = { kIntType,4,NULL,0,0,&_glutSetColor_2};
	VPL_ExtProcedure _glutSetColor_F = {"glutSetColor",glutSetColor,&_glutSetColor_1,NULL};

	VPL_Parameter _glutJoystickFunc_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutJoystickFunc_1 = { kPointerType,0,"void",1,0,&_glutJoystickFunc_2};
	VPL_ExtProcedure _glutJoystickFunc_F = {"glutJoystickFunc",glutJoystickFunc,&_glutJoystickFunc_1,NULL};

	VPL_Parameter _glutSpecialUpFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutSpecialUpFunc_F = {"glutSpecialUpFunc",glutSpecialUpFunc,&_glutSpecialUpFunc_1,NULL};

	VPL_Parameter _glutKeyboardUpFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutKeyboardUpFunc_F = {"glutKeyboardUpFunc",glutKeyboardUpFunc,&_glutKeyboardUpFunc_1,NULL};

	VPL_Parameter _glutWindowStatusFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutWindowStatusFunc_F = {"glutWindowStatusFunc",glutWindowStatusFunc,&_glutWindowStatusFunc_1,NULL};

	VPL_Parameter _glutOverlayDisplayFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutOverlayDisplayFunc_F = {"glutOverlayDisplayFunc",glutOverlayDisplayFunc,&_glutOverlayDisplayFunc_1,NULL};

	VPL_Parameter _glutMenuStatusFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutMenuStatusFunc_F = {"glutMenuStatusFunc",glutMenuStatusFunc,&_glutMenuStatusFunc_1,NULL};

	VPL_Parameter _glutTabletButtonFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutTabletButtonFunc_F = {"glutTabletButtonFunc",glutTabletButtonFunc,&_glutTabletButtonFunc_1,NULL};

	VPL_Parameter _glutTabletMotionFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutTabletMotionFunc_F = {"glutTabletMotionFunc",glutTabletMotionFunc,&_glutTabletMotionFunc_1,NULL};

	VPL_Parameter _glutDialsFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutDialsFunc_F = {"glutDialsFunc",glutDialsFunc,&_glutDialsFunc_1,NULL};

	VPL_Parameter _glutButtonBoxFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutButtonBoxFunc_F = {"glutButtonBoxFunc",glutButtonBoxFunc,&_glutButtonBoxFunc_1,NULL};

	VPL_Parameter _glutSpaceballButtonFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutSpaceballButtonFunc_F = {"glutSpaceballButtonFunc",glutSpaceballButtonFunc,&_glutSpaceballButtonFunc_1,NULL};

	VPL_Parameter _glutSpaceballRotateFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutSpaceballRotateFunc_F = {"glutSpaceballRotateFunc",glutSpaceballRotateFunc,&_glutSpaceballRotateFunc_1,NULL};

	VPL_Parameter _glutSpaceballMotionFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutSpaceballMotionFunc_F = {"glutSpaceballMotionFunc",glutSpaceballMotionFunc,&_glutSpaceballMotionFunc_1,NULL};

	VPL_Parameter _glutSpecialFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutSpecialFunc_F = {"glutSpecialFunc",glutSpecialFunc,&_glutSpecialFunc_1,NULL};

	VPL_Parameter _glutMenuStateFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutMenuStateFunc_F = {"glutMenuStateFunc",glutMenuStateFunc,&_glutMenuStateFunc_1,NULL};

	VPL_Parameter _glutIdleFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutIdleFunc_F = {"glutIdleFunc",glutIdleFunc,&_glutIdleFunc_1,NULL};

	VPL_Parameter _glutVisibilityFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutVisibilityFunc_F = {"glutVisibilityFunc",glutVisibilityFunc,&_glutVisibilityFunc_1,NULL};

	VPL_Parameter _glutEntryFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutEntryFunc_F = {"glutEntryFunc",glutEntryFunc,&_glutEntryFunc_1,NULL};

	VPL_Parameter _glutPassiveMotionFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutPassiveMotionFunc_F = {"glutPassiveMotionFunc",glutPassiveMotionFunc,&_glutPassiveMotionFunc_1,NULL};

	VPL_Parameter _glutMotionFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutMotionFunc_F = {"glutMotionFunc",glutMotionFunc,&_glutMotionFunc_1,NULL};

	VPL_Parameter _glutMouseFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutMouseFunc_F = {"glutMouseFunc",glutMouseFunc,&_glutMouseFunc_1,NULL};

	VPL_Parameter _glutKeyboardFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutKeyboardFunc_F = {"glutKeyboardFunc",glutKeyboardFunc,&_glutKeyboardFunc_1,NULL};

	VPL_Parameter _glutReshapeFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutReshapeFunc_F = {"glutReshapeFunc",glutReshapeFunc,&_glutReshapeFunc_1,NULL};

	VPL_Parameter _glutDisplayFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutDisplayFunc_F = {"glutDisplayFunc",glutDisplayFunc,&_glutDisplayFunc_1,NULL};

	VPL_Parameter _glutJoystickFuncProcPtr_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutJoystickFuncProcPtr_3 = { kIntType,4,NULL,0,0,&_glutJoystickFuncProcPtr_4};
	VPL_Parameter _glutJoystickFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutJoystickFuncProcPtr_3};
	VPL_Parameter _glutJoystickFuncProcPtr_1 = { kUnsignedType,4,NULL,0,0,&_glutJoystickFuncProcPtr_2};
	VPL_ExtProcedure _glutJoystickFuncProcPtr_F = {"glutJoystickFuncProcPtr",NULL,&_glutJoystickFuncProcPtr_1,NULL};

	VPL_Parameter _glutSpecialUpFuncProcPtr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSpecialUpFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutSpecialUpFuncProcPtr_3};
	VPL_Parameter _glutSpecialUpFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutSpecialUpFuncProcPtr_2};
	VPL_ExtProcedure _glutSpecialUpFuncProcPtr_F = {"glutSpecialUpFuncProcPtr",NULL,&_glutSpecialUpFuncProcPtr_1,NULL};

	VPL_Parameter _glutKeyboardUpFuncProcPtr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutKeyboardUpFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutKeyboardUpFuncProcPtr_3};
	VPL_Parameter _glutKeyboardUpFuncProcPtr_1 = { kUnsignedType,1,NULL,0,0,&_glutKeyboardUpFuncProcPtr_2};
	VPL_ExtProcedure _glutKeyboardUpFuncProcPtr_F = {"glutKeyboardUpFuncProcPtr",NULL,&_glutKeyboardUpFuncProcPtr_1,NULL};

	VPL_Parameter _glutWindowStatusFuncProcPtr_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutWindowStatusFuncProcPtr_F = {"glutWindowStatusFuncProcPtr",NULL,&_glutWindowStatusFuncProcPtr_1,NULL};

	VPL_ExtProcedure _glutOverlayDisplayFuncProcPtr_F = {"glutOverlayDisplayFuncProcPtr",NULL,NULL,NULL};

	VPL_Parameter _glutMenuStatusFuncProcPtr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutMenuStatusFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutMenuStatusFuncProcPtr_3};
	VPL_Parameter _glutMenuStatusFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutMenuStatusFuncProcPtr_2};
	VPL_ExtProcedure _glutMenuStatusFuncProcPtr_F = {"glutMenuStatusFuncProcPtr",NULL,&_glutMenuStatusFuncProcPtr_1,NULL};

	VPL_Parameter _glutTabletButtonFuncProcPtr_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutTabletButtonFuncProcPtr_3 = { kIntType,4,NULL,0,0,&_glutTabletButtonFuncProcPtr_4};
	VPL_Parameter _glutTabletButtonFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutTabletButtonFuncProcPtr_3};
	VPL_Parameter _glutTabletButtonFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutTabletButtonFuncProcPtr_2};
	VPL_ExtProcedure _glutTabletButtonFuncProcPtr_F = {"glutTabletButtonFuncProcPtr",NULL,&_glutTabletButtonFuncProcPtr_1,NULL};

	VPL_Parameter _glutTabletMotionFuncProcPtr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutTabletMotionFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutTabletMotionFuncProcPtr_2};
	VPL_ExtProcedure _glutTabletMotionFuncProcPtr_F = {"glutTabletMotionFuncProcPtr",NULL,&_glutTabletMotionFuncProcPtr_1,NULL};

	VPL_Parameter _glutDialsFuncProcPtr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutDialsFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutDialsFuncProcPtr_2};
	VPL_ExtProcedure _glutDialsFuncProcPtr_F = {"glutDialsFuncProcPtr",NULL,&_glutDialsFuncProcPtr_1,NULL};

	VPL_Parameter _glutButtonBoxFuncProcPtr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutButtonBoxFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutButtonBoxFuncProcPtr_2};
	VPL_ExtProcedure _glutButtonBoxFuncProcPtr_F = {"glutButtonBoxFuncProcPtr",NULL,&_glutButtonBoxFuncProcPtr_1,NULL};

	VPL_Parameter _glutSpaceballButtonFuncProcPtr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSpaceballButtonFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutSpaceballButtonFuncProcPtr_2};
	VPL_ExtProcedure _glutSpaceballButtonFuncProcPtr_F = {"glutSpaceballButtonFuncProcPtr",NULL,&_glutSpaceballButtonFuncProcPtr_1,NULL};

	VPL_Parameter _glutSpaceballRotateFuncProcPtr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSpaceballRotateFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutSpaceballRotateFuncProcPtr_3};
	VPL_Parameter _glutSpaceballRotateFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutSpaceballRotateFuncProcPtr_2};
	VPL_ExtProcedure _glutSpaceballRotateFuncProcPtr_F = {"glutSpaceballRotateFuncProcPtr",NULL,&_glutSpaceballRotateFuncProcPtr_1,NULL};

	VPL_Parameter _glutSpaceballMotionFuncProcPtr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSpaceballMotionFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutSpaceballMotionFuncProcPtr_3};
	VPL_Parameter _glutSpaceballMotionFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutSpaceballMotionFuncProcPtr_2};
	VPL_ExtProcedure _glutSpaceballMotionFuncProcPtr_F = {"glutSpaceballMotionFuncProcPtr",NULL,&_glutSpaceballMotionFuncProcPtr_1,NULL};

	VPL_Parameter _glutSpecialFuncProcPtr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSpecialFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutSpecialFuncProcPtr_3};
	VPL_Parameter _glutSpecialFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutSpecialFuncProcPtr_2};
	VPL_ExtProcedure _glutSpecialFuncProcPtr_F = {"glutSpecialFuncProcPtr",NULL,&_glutSpecialFuncProcPtr_1,NULL};

	VPL_Parameter _glutMenuStateFuncProcPtr_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutMenuStateFuncProcPtr_F = {"glutMenuStateFuncProcPtr",NULL,&_glutMenuStateFuncProcPtr_1,NULL};

	VPL_Parameter _glutTimerFunc_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutTimerFunc_2 = { kPointerType,0,"void",1,0,&_glutTimerFunc_3};
	VPL_Parameter _glutTimerFunc_1 = { kUnsignedType,4,NULL,0,0,&_glutTimerFunc_2};
	VPL_ExtProcedure _glutTimerFunc_F = {"glutTimerFunc",glutTimerFunc,&_glutTimerFunc_1,NULL};

	VPL_ExtProcedure _glutIdleFuncProcPtr_F = {"glutIdleFuncProcPtr",NULL,NULL,NULL};

	VPL_Parameter _glutVisibilityFuncProcPtr_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutVisibilityFuncProcPtr_F = {"glutVisibilityFuncProcPtr",NULL,&_glutVisibilityFuncProcPtr_1,NULL};

	VPL_Parameter _glutEntryFuncProcPtr_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutEntryFuncProcPtr_F = {"glutEntryFuncProcPtr",NULL,&_glutEntryFuncProcPtr_1,NULL};

	VPL_Parameter _glutPassiveMotionFuncProcPtr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutPassiveMotionFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutPassiveMotionFuncProcPtr_2};
	VPL_ExtProcedure _glutPassiveMotionFuncProcPtr_F = {"glutPassiveMotionFuncProcPtr",NULL,&_glutPassiveMotionFuncProcPtr_1,NULL};

	VPL_Parameter _glutMotionFuncProcPtr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutMotionFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutMotionFuncProcPtr_2};
	VPL_ExtProcedure _glutMotionFuncProcPtr_F = {"glutMotionFuncProcPtr",NULL,&_glutMotionFuncProcPtr_1,NULL};

	VPL_Parameter _glutMouseFuncProcPtr_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutMouseFuncProcPtr_3 = { kIntType,4,NULL,0,0,&_glutMouseFuncProcPtr_4};
	VPL_Parameter _glutMouseFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutMouseFuncProcPtr_3};
	VPL_Parameter _glutMouseFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutMouseFuncProcPtr_2};
	VPL_ExtProcedure _glutMouseFuncProcPtr_F = {"glutMouseFuncProcPtr",NULL,&_glutMouseFuncProcPtr_1,NULL};

	VPL_Parameter _glutKeyboardFuncProcPtr_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutKeyboardFuncProcPtr_2 = { kIntType,4,NULL,0,0,&_glutKeyboardFuncProcPtr_3};
	VPL_Parameter _glutKeyboardFuncProcPtr_1 = { kUnsignedType,1,NULL,0,0,&_glutKeyboardFuncProcPtr_2};
	VPL_ExtProcedure _glutKeyboardFuncProcPtr_F = {"glutKeyboardFuncProcPtr",NULL,&_glutKeyboardFuncProcPtr_1,NULL};

	VPL_Parameter _glutReshapeFuncProcPtr_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutReshapeFuncProcPtr_1 = { kIntType,4,NULL,0,0,&_glutReshapeFuncProcPtr_2};
	VPL_ExtProcedure _glutReshapeFuncProcPtr_F = {"glutReshapeFuncProcPtr",NULL,&_glutReshapeFuncProcPtr_1,NULL};

	VPL_ExtProcedure _glutDisplayFuncProcPtr_F = {"glutDisplayFuncProcPtr",NULL,NULL,NULL};

	VPL_Parameter _glutDetachMenu_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutDetachMenu_F = {"glutDetachMenu",glutDetachMenu,&_glutDetachMenu_1,NULL};

	VPL_Parameter _glutAttachMenu_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutAttachMenu_F = {"glutAttachMenu",glutAttachMenu,&_glutAttachMenu_1,NULL};

	VPL_Parameter _glutRemoveMenuItem_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutRemoveMenuItem_F = {"glutRemoveMenuItem",glutRemoveMenuItem,&_glutRemoveMenuItem_1,NULL};

	VPL_Parameter _glutChangeToSubMenu_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutChangeToSubMenu_2 = { kPointerType,1,"char",1,1,&_glutChangeToSubMenu_3};
	VPL_Parameter _glutChangeToSubMenu_1 = { kIntType,4,NULL,0,0,&_glutChangeToSubMenu_2};
	VPL_ExtProcedure _glutChangeToSubMenu_F = {"glutChangeToSubMenu",glutChangeToSubMenu,&_glutChangeToSubMenu_1,NULL};

	VPL_Parameter _glutChangeToMenuEntry_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutChangeToMenuEntry_2 = { kPointerType,1,"char",1,1,&_glutChangeToMenuEntry_3};
	VPL_Parameter _glutChangeToMenuEntry_1 = { kIntType,4,NULL,0,0,&_glutChangeToMenuEntry_2};
	VPL_ExtProcedure _glutChangeToMenuEntry_F = {"glutChangeToMenuEntry",glutChangeToMenuEntry,&_glutChangeToMenuEntry_1,NULL};

	VPL_Parameter _glutAddSubMenu_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutAddSubMenu_1 = { kPointerType,1,"char",1,1,&_glutAddSubMenu_2};
	VPL_ExtProcedure _glutAddSubMenu_F = {"glutAddSubMenu",glutAddSubMenu,&_glutAddSubMenu_1,NULL};

	VPL_Parameter _glutAddMenuEntry_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutAddMenuEntry_1 = { kPointerType,1,"char",1,1,&_glutAddMenuEntry_2};
	VPL_ExtProcedure _glutAddMenuEntry_F = {"glutAddMenuEntry",glutAddMenuEntry,&_glutAddMenuEntry_1,NULL};

	VPL_Parameter _glutSetMenu_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutSetMenu_F = {"glutSetMenu",glutSetMenu,&_glutSetMenu_1,NULL};

	VPL_Parameter _glutGetMenu_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutGetMenu_F = {"glutGetMenu",glutGetMenu,NULL,&_glutGetMenu_R};

	VPL_Parameter _glutDestroyMenu_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutDestroyMenu_F = {"glutDestroyMenu",glutDestroyMenu,&_glutDestroyMenu_1,NULL};

	VPL_Parameter _glutCreateMenu_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutCreateMenu_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutCreateMenu_F = {"glutCreateMenu",glutCreateMenu,&_glutCreateMenu_1,&_glutCreateMenu_R};

	VPL_ExtProcedure _glutHideOverlay_F = {"glutHideOverlay",glutHideOverlay,NULL,NULL};

	VPL_ExtProcedure _glutShowOverlay_F = {"glutShowOverlay",glutShowOverlay,NULL,NULL};

	VPL_Parameter _glutPostWindowOverlayRedisplay_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutPostWindowOverlayRedisplay_F = {"glutPostWindowOverlayRedisplay",glutPostWindowOverlayRedisplay,&_glutPostWindowOverlayRedisplay_1,NULL};

	VPL_ExtProcedure _glutPostOverlayRedisplay_F = {"glutPostOverlayRedisplay",glutPostOverlayRedisplay,NULL,NULL};

	VPL_Parameter _glutUseLayer_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutUseLayer_F = {"glutUseLayer",glutUseLayer,&_glutUseLayer_1,NULL};

	VPL_ExtProcedure _glutRemoveOverlay_F = {"glutRemoveOverlay",glutRemoveOverlay,NULL,NULL};

	VPL_ExtProcedure _glutEstablishOverlay_F = {"glutEstablishOverlay",glutEstablishOverlay,NULL,NULL};

	VPL_ExtProcedure _glutCheckLoop_F = {"glutCheckLoop",glutCheckLoop,NULL,NULL};

	VPL_Parameter _glutWMCloseFunc_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glutWMCloseFunc_F = {"glutWMCloseFunc",glutWMCloseFunc,&_glutWMCloseFunc_1,NULL};

	VPL_ExtProcedure _glutWMCloseFuncProcPtr_F = {"glutWMCloseFuncProcPtr",NULL,NULL,NULL};

	VPL_Parameter _glutSurfaceTexture_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutSurfaceTexture_2 = { kUnsignedType,4,NULL,0,0,&_glutSurfaceTexture_3};
	VPL_Parameter _glutSurfaceTexture_1 = { kUnsignedType,4,NULL,0,0,&_glutSurfaceTexture_2};
	VPL_ExtProcedure _glutSurfaceTexture_F = {"glutSurfaceTexture",glutSurfaceTexture,&_glutSurfaceTexture_1,NULL};

	VPL_Parameter _glutWarpPointer_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutWarpPointer_1 = { kIntType,4,NULL,0,0,&_glutWarpPointer_2};
	VPL_ExtProcedure _glutWarpPointer_F = {"glutWarpPointer",glutWarpPointer,&_glutWarpPointer_1,NULL};

	VPL_Parameter _glutSetCursor_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutSetCursor_F = {"glutSetCursor",glutSetCursor,&_glutSetCursor_1,NULL};

	VPL_ExtProcedure _glutFullScreen_F = {"glutFullScreen",glutFullScreen,NULL,NULL};

	VPL_ExtProcedure _glutHideWindow_F = {"glutHideWindow",glutHideWindow,NULL,NULL};

	VPL_ExtProcedure _glutShowWindow_F = {"glutShowWindow",glutShowWindow,NULL,NULL};

	VPL_ExtProcedure _glutIconifyWindow_F = {"glutIconifyWindow",glutIconifyWindow,NULL,NULL};

	VPL_ExtProcedure _glutPushWindow_F = {"glutPushWindow",glutPushWindow,NULL,NULL};

	VPL_ExtProcedure _glutPopWindow_F = {"glutPopWindow",glutPopWindow,NULL,NULL};

	VPL_Parameter _glutReshapeWindow_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutReshapeWindow_1 = { kIntType,4,NULL,0,0,&_glutReshapeWindow_2};
	VPL_ExtProcedure _glutReshapeWindow_F = {"glutReshapeWindow",glutReshapeWindow,&_glutReshapeWindow_1,NULL};

	VPL_Parameter _glutPositionWindow_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutPositionWindow_1 = { kIntType,4,NULL,0,0,&_glutPositionWindow_2};
	VPL_ExtProcedure _glutPositionWindow_F = {"glutPositionWindow",glutPositionWindow,&_glutPositionWindow_1,NULL};

	VPL_Parameter _glutSetIconTitle_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _glutSetIconTitle_F = {"glutSetIconTitle",glutSetIconTitle,&_glutSetIconTitle_1,NULL};

	VPL_Parameter _glutSetWindowTitle_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _glutSetWindowTitle_F = {"glutSetWindowTitle",glutSetWindowTitle,&_glutSetWindowTitle_1,NULL};

	VPL_Parameter _glutSetWindow_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutSetWindow_F = {"glutSetWindow",glutSetWindow,&_glutSetWindow_1,NULL};

	VPL_Parameter _glutGetWindow_R = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutGetWindow_F = {"glutGetWindow",glutGetWindow,NULL,&_glutGetWindow_R};

	VPL_ExtProcedure _glutSwapBuffers_F = {"glutSwapBuffers",glutSwapBuffers,NULL,NULL};

	VPL_Parameter _glutPostWindowRedisplay_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutPostWindowRedisplay_F = {"glutPostWindowRedisplay",glutPostWindowRedisplay,&_glutPostWindowRedisplay_1,NULL};

	VPL_ExtProcedure _glutPostRedisplay_F = {"glutPostRedisplay",glutPostRedisplay,NULL,NULL};

	VPL_Parameter _glutDestroyWindow_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutDestroyWindow_F = {"glutDestroyWindow",glutDestroyWindow,&_glutDestroyWindow_1,NULL};

	VPL_Parameter _glutCreateSubWindow_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutCreateSubWindow_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutCreateSubWindow_4 = { kIntType,4,NULL,0,0,&_glutCreateSubWindow_5};
	VPL_Parameter _glutCreateSubWindow_3 = { kIntType,4,NULL,0,0,&_glutCreateSubWindow_4};
	VPL_Parameter _glutCreateSubWindow_2 = { kIntType,4,NULL,0,0,&_glutCreateSubWindow_3};
	VPL_Parameter _glutCreateSubWindow_1 = { kIntType,4,NULL,0,0,&_glutCreateSubWindow_2};
	VPL_ExtProcedure _glutCreateSubWindow_F = {"glutCreateSubWindow",glutCreateSubWindow,&_glutCreateSubWindow_1,&_glutCreateSubWindow_R};

	VPL_Parameter _glutCreateWindow_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutCreateWindow_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _glutCreateWindow_F = {"glutCreateWindow",glutCreateWindow,&_glutCreateWindow_1,&_glutCreateWindow_R};

	VPL_ExtProcedure _glutMainLoop_F = {"glutMainLoop",glutMainLoop,NULL,NULL};

	VPL_Parameter _glutInitWindowSize_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutInitWindowSize_1 = { kIntType,4,NULL,0,0,&_glutInitWindowSize_2};
	VPL_ExtProcedure _glutInitWindowSize_F = {"glutInitWindowSize",glutInitWindowSize,&_glutInitWindowSize_1,NULL};

	VPL_Parameter _glutInitWindowPosition_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glutInitWindowPosition_1 = { kIntType,4,NULL,0,0,&_glutInitWindowPosition_2};
	VPL_ExtProcedure _glutInitWindowPosition_F = {"glutInitWindowPosition",glutInitWindowPosition,&_glutInitWindowPosition_1,NULL};

	VPL_Parameter _glutInitDisplayString_1 = { kPointerType,1,"char",1,1,NULL};
	VPL_ExtProcedure _glutInitDisplayString_F = {"glutInitDisplayString",glutInitDisplayString,&_glutInitDisplayString_1,NULL};

	VPL_Parameter _glutInitDisplayMode_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glutInitDisplayMode_F = {"glutInitDisplayMode",glutInitDisplayMode,&_glutInitDisplayMode_1,NULL};

	VPL_Parameter _glutInit_2 = { kPointerType,1,"char",2,0,NULL};
	VPL_Parameter _glutInit_1 = { kPointerType,4,"int",1,0,&_glutInit_2};
	VPL_ExtProcedure _glutInit_F = {"glutInit",glutInit,&_glutInit_1,NULL};

	VPL_Parameter _aglGetCGLPixelFormat_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglGetCGLPixelFormat_2 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _aglGetCGLPixelFormat_1 = { kPointerType,0,"__AGLPixelFormatRec",1,0,&_aglGetCGLPixelFormat_2};
	VPL_ExtProcedure _aglGetCGLPixelFormat_F = {"aglGetCGLPixelFormat",aglGetCGLPixelFormat,&_aglGetCGLPixelFormat_1,&_aglGetCGLPixelFormat_R};

	VPL_Parameter _aglGetCGLContext_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglGetCGLContext_2 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _aglGetCGLContext_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglGetCGLContext_2};
	VPL_ExtProcedure _aglGetCGLContext_F = {"aglGetCGLContext",aglGetCGLContext,&_aglGetCGLContext_1,&_aglGetCGLContext_R};

	VPL_Parameter _aglGetPBuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglGetPBuffer_5 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _aglGetPBuffer_4 = { kPointerType,4,"long int",1,0,&_aglGetPBuffer_5};
	VPL_Parameter _aglGetPBuffer_3 = { kPointerType,4,"long int",1,0,&_aglGetPBuffer_4};
	VPL_Parameter _aglGetPBuffer_2 = { kPointerType,0,"__AGLPBufferRec",2,0,&_aglGetPBuffer_3};
	VPL_Parameter _aglGetPBuffer_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglGetPBuffer_2};
	VPL_ExtProcedure _aglGetPBuffer_F = {"aglGetPBuffer",aglGetPBuffer,&_aglGetPBuffer_1,&_aglGetPBuffer_R};

	VPL_Parameter _aglSetPBuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglSetPBuffer_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _aglSetPBuffer_4 = { kIntType,4,NULL,0,0,&_aglSetPBuffer_5};
	VPL_Parameter _aglSetPBuffer_3 = { kIntType,4,NULL,0,0,&_aglSetPBuffer_4};
	VPL_Parameter _aglSetPBuffer_2 = { kPointerType,0,"__AGLPBufferRec",1,0,&_aglSetPBuffer_3};
	VPL_Parameter _aglSetPBuffer_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglSetPBuffer_2};
	VPL_ExtProcedure _aglSetPBuffer_F = {"aglSetPBuffer",aglSetPBuffer,&_aglSetPBuffer_1,&_aglSetPBuffer_R};

	VPL_Parameter _aglTexImagePBuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglTexImagePBuffer_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _aglTexImagePBuffer_2 = { kPointerType,0,"__AGLPBufferRec",1,0,&_aglTexImagePBuffer_3};
	VPL_Parameter _aglTexImagePBuffer_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglTexImagePBuffer_2};
	VPL_ExtProcedure _aglTexImagePBuffer_F = {"aglTexImagePBuffer",aglTexImagePBuffer,&_aglTexImagePBuffer_1,&_aglTexImagePBuffer_R};

	VPL_Parameter _aglDescribePBuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglDescribePBuffer_6 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _aglDescribePBuffer_5 = { kPointerType,4,"unsigned long",1,0,&_aglDescribePBuffer_6};
	VPL_Parameter _aglDescribePBuffer_4 = { kPointerType,4,"unsigned long",1,0,&_aglDescribePBuffer_5};
	VPL_Parameter _aglDescribePBuffer_3 = { kPointerType,4,"long int",1,0,&_aglDescribePBuffer_4};
	VPL_Parameter _aglDescribePBuffer_2 = { kPointerType,4,"long int",1,0,&_aglDescribePBuffer_3};
	VPL_Parameter _aglDescribePBuffer_1 = { kPointerType,0,"__AGLPBufferRec",1,0,&_aglDescribePBuffer_2};
	VPL_ExtProcedure _aglDescribePBuffer_F = {"aglDescribePBuffer",aglDescribePBuffer,&_aglDescribePBuffer_1,&_aglDescribePBuffer_R};

	VPL_Parameter _aglDestroyPBuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglDestroyPBuffer_1 = { kPointerType,0,"__AGLPBufferRec",1,0,NULL};
	VPL_ExtProcedure _aglDestroyPBuffer_F = {"aglDestroyPBuffer",aglDestroyPBuffer,&_aglDestroyPBuffer_1,&_aglDestroyPBuffer_R};

	VPL_Parameter _aglCreatePBuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglCreatePBuffer_6 = { kPointerType,0,"__AGLPBufferRec",2,0,NULL};
	VPL_Parameter _aglCreatePBuffer_5 = { kIntType,4,NULL,0,0,&_aglCreatePBuffer_6};
	VPL_Parameter _aglCreatePBuffer_4 = { kUnsignedType,4,NULL,0,0,&_aglCreatePBuffer_5};
	VPL_Parameter _aglCreatePBuffer_3 = { kUnsignedType,4,NULL,0,0,&_aglCreatePBuffer_4};
	VPL_Parameter _aglCreatePBuffer_2 = { kIntType,4,NULL,0,0,&_aglCreatePBuffer_3};
	VPL_Parameter _aglCreatePBuffer_1 = { kIntType,4,NULL,0,0,&_aglCreatePBuffer_2};
	VPL_ExtProcedure _aglCreatePBuffer_F = {"aglCreatePBuffer",aglCreatePBuffer,&_aglCreatePBuffer_1,&_aglCreatePBuffer_R};

	VPL_Parameter _aglSurfaceTexture_4 = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_Parameter _aglSurfaceTexture_3 = { kUnsignedType,4,NULL,0,0,&_aglSurfaceTexture_4};
	VPL_Parameter _aglSurfaceTexture_2 = { kUnsignedType,4,NULL,0,0,&_aglSurfaceTexture_3};
	VPL_Parameter _aglSurfaceTexture_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglSurfaceTexture_2};
	VPL_ExtProcedure _aglSurfaceTexture_F = {"aglSurfaceTexture",aglSurfaceTexture,&_aglSurfaceTexture_1,NULL};

	VPL_ExtProcedure _aglResetLibrary_F = {"aglResetLibrary",aglResetLibrary,NULL,NULL};

	VPL_Parameter _aglErrorString_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _aglErrorString_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _aglErrorString_F = {"aglErrorString",aglErrorString,&_aglErrorString_1,&_aglErrorString_R};

	VPL_Parameter _aglGetError_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _aglGetError_F = {"aglGetError",aglGetError,NULL,&_aglGetError_R};

	VPL_Parameter _aglUseFont_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglUseFont_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _aglUseFont_6 = { kIntType,4,NULL,0,0,&_aglUseFont_7};
	VPL_Parameter _aglUseFont_5 = { kIntType,4,NULL,0,0,&_aglUseFont_6};
	VPL_Parameter _aglUseFont_4 = { kIntType,4,NULL,0,0,&_aglUseFont_5};
	VPL_Parameter _aglUseFont_3 = { kUnsignedType,1,NULL,0,0,&_aglUseFont_4};
	VPL_Parameter _aglUseFont_2 = { kIntType,4,NULL,0,0,&_aglUseFont_3};
	VPL_Parameter _aglUseFont_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglUseFont_2};
	VPL_ExtProcedure _aglUseFont_F = {"aglUseFont",aglUseFont,&_aglUseFont_1,&_aglUseFont_R};

	VPL_Parameter _aglGetInteger_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglGetInteger_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _aglGetInteger_2 = { kUnsignedType,4,NULL,0,0,&_aglGetInteger_3};
	VPL_Parameter _aglGetInteger_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglGetInteger_2};
	VPL_ExtProcedure _aglGetInteger_F = {"aglGetInteger",aglGetInteger,&_aglGetInteger_1,&_aglGetInteger_R};

	VPL_Parameter _aglSetInteger_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglSetInteger_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _aglSetInteger_2 = { kUnsignedType,4,NULL,0,0,&_aglSetInteger_3};
	VPL_Parameter _aglSetInteger_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglSetInteger_2};
	VPL_ExtProcedure _aglSetInteger_F = {"aglSetInteger",aglSetInteger,&_aglSetInteger_1,&_aglSetInteger_R};

	VPL_Parameter _aglIsEnabled_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglIsEnabled_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _aglIsEnabled_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglIsEnabled_2};
	VPL_ExtProcedure _aglIsEnabled_F = {"aglIsEnabled",aglIsEnabled,&_aglIsEnabled_1,&_aglIsEnabled_R};

	VPL_Parameter _aglDisable_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglDisable_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _aglDisable_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglDisable_2};
	VPL_ExtProcedure _aglDisable_F = {"aglDisable",aglDisable,&_aglDisable_1,&_aglDisable_R};

	VPL_Parameter _aglEnable_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglEnable_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _aglEnable_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglEnable_2};
	VPL_ExtProcedure _aglEnable_F = {"aglEnable",aglEnable,&_aglEnable_1,&_aglEnable_R};

	VPL_Parameter _aglSwapBuffers_1 = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_ExtProcedure _aglSwapBuffers_F = {"aglSwapBuffers",aglSwapBuffers,&_aglSwapBuffers_1,NULL};

	VPL_Parameter _aglConfigure_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglConfigure_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _aglConfigure_1 = { kUnsignedType,4,NULL,0,0,&_aglConfigure_2};
	VPL_ExtProcedure _aglConfigure_F = {"aglConfigure",aglConfigure,&_aglConfigure_1,&_aglConfigure_R};

	VPL_Parameter _aglGetVersion_2 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _aglGetVersion_1 = { kPointerType,4,"long int",1,0,&_aglGetVersion_2};
	VPL_ExtProcedure _aglGetVersion_F = {"aglGetVersion",aglGetVersion,&_aglGetVersion_1,NULL};

	VPL_Parameter _aglGetVirtualScreen_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _aglGetVirtualScreen_1 = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_ExtProcedure _aglGetVirtualScreen_F = {"aglGetVirtualScreen",aglGetVirtualScreen,&_aglGetVirtualScreen_1,&_aglGetVirtualScreen_R};

	VPL_Parameter _aglSetVirtualScreen_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglSetVirtualScreen_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _aglSetVirtualScreen_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglSetVirtualScreen_2};
	VPL_ExtProcedure _aglSetVirtualScreen_F = {"aglSetVirtualScreen",aglSetVirtualScreen,&_aglSetVirtualScreen_1,&_aglSetVirtualScreen_R};

	VPL_Parameter _aglGetDrawable_R = { kPointerType,0,"OpaqueGrafPtr",1,0,NULL};
	VPL_Parameter _aglGetDrawable_1 = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_ExtProcedure _aglGetDrawable_F = {"aglGetDrawable",aglGetDrawable,&_aglGetDrawable_1,&_aglGetDrawable_R};

	VPL_Parameter _aglSetFullScreen_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglSetFullScreen_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _aglSetFullScreen_4 = { kIntType,4,NULL,0,0,&_aglSetFullScreen_5};
	VPL_Parameter _aglSetFullScreen_3 = { kIntType,4,NULL,0,0,&_aglSetFullScreen_4};
	VPL_Parameter _aglSetFullScreen_2 = { kIntType,4,NULL,0,0,&_aglSetFullScreen_3};
	VPL_Parameter _aglSetFullScreen_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglSetFullScreen_2};
	VPL_ExtProcedure _aglSetFullScreen_F = {"aglSetFullScreen",aglSetFullScreen,&_aglSetFullScreen_1,&_aglSetFullScreen_R};

	VPL_Parameter _aglSetOffScreen_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglSetOffScreen_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _aglSetOffScreen_4 = { kIntType,4,NULL,0,0,&_aglSetOffScreen_5};
	VPL_Parameter _aglSetOffScreen_3 = { kIntType,4,NULL,0,0,&_aglSetOffScreen_4};
	VPL_Parameter _aglSetOffScreen_2 = { kIntType,4,NULL,0,0,&_aglSetOffScreen_3};
	VPL_Parameter _aglSetOffScreen_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglSetOffScreen_2};
	VPL_ExtProcedure _aglSetOffScreen_F = {"aglSetOffScreen",aglSetOffScreen,&_aglSetOffScreen_1,&_aglSetOffScreen_R};

	VPL_Parameter _aglSetDrawable_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglSetDrawable_2 = { kPointerType,0,"OpaqueGrafPtr",1,0,NULL};
	VPL_Parameter _aglSetDrawable_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglSetDrawable_2};
	VPL_ExtProcedure _aglSetDrawable_F = {"aglSetDrawable",aglSetDrawable,&_aglSetDrawable_1,&_aglSetDrawable_R};

	VPL_Parameter _aglGetCurrentContext_R = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_ExtProcedure _aglGetCurrentContext_F = {"aglGetCurrentContext",aglGetCurrentContext,NULL,&_aglGetCurrentContext_R};

	VPL_Parameter _aglSetCurrentContext_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglSetCurrentContext_1 = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_ExtProcedure _aglSetCurrentContext_F = {"aglSetCurrentContext",aglSetCurrentContext,&_aglSetCurrentContext_1,&_aglSetCurrentContext_R};

	VPL_Parameter _aglUpdateContext_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglUpdateContext_1 = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_ExtProcedure _aglUpdateContext_F = {"aglUpdateContext",aglUpdateContext,&_aglUpdateContext_1,&_aglUpdateContext_R};

	VPL_Parameter _aglCopyContext_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglCopyContext_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _aglCopyContext_2 = { kPointerType,0,"__AGLContextRec",1,0,&_aglCopyContext_3};
	VPL_Parameter _aglCopyContext_1 = { kPointerType,0,"__AGLContextRec",1,0,&_aglCopyContext_2};
	VPL_ExtProcedure _aglCopyContext_F = {"aglCopyContext",aglCopyContext,&_aglCopyContext_1,&_aglCopyContext_R};

	VPL_Parameter _aglDestroyContext_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglDestroyContext_1 = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_ExtProcedure _aglDestroyContext_F = {"aglDestroyContext",aglDestroyContext,&_aglDestroyContext_1,&_aglDestroyContext_R};

	VPL_Parameter _aglCreateContext_R = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_Parameter _aglCreateContext_2 = { kPointerType,0,"__AGLContextRec",1,0,NULL};
	VPL_Parameter _aglCreateContext_1 = { kPointerType,0,"__AGLPixelFormatRec",1,0,&_aglCreateContext_2};
	VPL_ExtProcedure _aglCreateContext_F = {"aglCreateContext",aglCreateContext,&_aglCreateContext_1,&_aglCreateContext_R};

	VPL_Parameter _aglDescribeRenderer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglDescribeRenderer_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _aglDescribeRenderer_2 = { kIntType,4,NULL,0,0,&_aglDescribeRenderer_3};
	VPL_Parameter _aglDescribeRenderer_1 = { kPointerType,0,"__AGLRendererInfoRec",1,0,&_aglDescribeRenderer_2};
	VPL_ExtProcedure _aglDescribeRenderer_F = {"aglDescribeRenderer",aglDescribeRenderer,&_aglDescribeRenderer_1,&_aglDescribeRenderer_R};

	VPL_Parameter _aglNextRendererInfo_R = { kPointerType,0,"__AGLRendererInfoRec",1,0,NULL};
	VPL_Parameter _aglNextRendererInfo_1 = { kPointerType,0,"__AGLRendererInfoRec",1,0,NULL};
	VPL_ExtProcedure _aglNextRendererInfo_F = {"aglNextRendererInfo",aglNextRendererInfo,&_aglNextRendererInfo_1,&_aglNextRendererInfo_R};

	VPL_Parameter _aglDestroyRendererInfo_1 = { kPointerType,0,"__AGLRendererInfoRec",1,0,NULL};
	VPL_ExtProcedure _aglDestroyRendererInfo_F = {"aglDestroyRendererInfo",aglDestroyRendererInfo,&_aglDestroyRendererInfo_1,NULL};

	VPL_Parameter _aglQueryRendererInfo_R = { kPointerType,0,"__AGLRendererInfoRec",1,0,NULL};
	VPL_Parameter _aglQueryRendererInfo_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _aglQueryRendererInfo_1 = { kPointerType,0,"GDevice",3,1,&_aglQueryRendererInfo_2};
	VPL_ExtProcedure _aglQueryRendererInfo_F = {"aglQueryRendererInfo",aglQueryRendererInfo,&_aglQueryRendererInfo_1,&_aglQueryRendererInfo_R};

	VPL_Parameter _aglDevicesOfPixelFormat_R = { kPointerType,0,"GDevice",3,0,NULL};
	VPL_Parameter _aglDevicesOfPixelFormat_2 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _aglDevicesOfPixelFormat_1 = { kPointerType,0,"__AGLPixelFormatRec",1,0,&_aglDevicesOfPixelFormat_2};
	VPL_ExtProcedure _aglDevicesOfPixelFormat_F = {"aglDevicesOfPixelFormat",aglDevicesOfPixelFormat,&_aglDevicesOfPixelFormat_1,&_aglDevicesOfPixelFormat_R};

	VPL_Parameter _aglDescribePixelFormat_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _aglDescribePixelFormat_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _aglDescribePixelFormat_2 = { kIntType,4,NULL,0,0,&_aglDescribePixelFormat_3};
	VPL_Parameter _aglDescribePixelFormat_1 = { kPointerType,0,"__AGLPixelFormatRec",1,0,&_aglDescribePixelFormat_2};
	VPL_ExtProcedure _aglDescribePixelFormat_F = {"aglDescribePixelFormat",aglDescribePixelFormat,&_aglDescribePixelFormat_1,&_aglDescribePixelFormat_R};

	VPL_Parameter _aglNextPixelFormat_R = { kPointerType,0,"__AGLPixelFormatRec",1,0,NULL};
	VPL_Parameter _aglNextPixelFormat_1 = { kPointerType,0,"__AGLPixelFormatRec",1,0,NULL};
	VPL_ExtProcedure _aglNextPixelFormat_F = {"aglNextPixelFormat",aglNextPixelFormat,&_aglNextPixelFormat_1,&_aglNextPixelFormat_R};

	VPL_Parameter _aglDestroyPixelFormat_1 = { kPointerType,0,"__AGLPixelFormatRec",1,0,NULL};
	VPL_ExtProcedure _aglDestroyPixelFormat_F = {"aglDestroyPixelFormat",aglDestroyPixelFormat,&_aglDestroyPixelFormat_1,NULL};

	VPL_Parameter _aglChoosePixelFormat_R = { kPointerType,0,"__AGLPixelFormatRec",1,0,NULL};
	VPL_Parameter _aglChoosePixelFormat_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _aglChoosePixelFormat_2 = { kIntType,4,NULL,0,0,&_aglChoosePixelFormat_3};
	VPL_Parameter _aglChoosePixelFormat_1 = { kPointerType,0,"GDevice",3,1,&_aglChoosePixelFormat_2};
	VPL_ExtProcedure _aglChoosePixelFormat_F = {"aglChoosePixelFormat",aglChoosePixelFormat,&_aglChoosePixelFormat_1,&_aglChoosePixelFormat_R};

	VPL_Parameter _gluUnProject4_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluUnProject4_13 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _gluUnProject4_12 = { kPointerType,8,"double",1,0,&_gluUnProject4_13};
	VPL_Parameter _gluUnProject4_11 = { kPointerType,8,"double",1,0,&_gluUnProject4_12};
	VPL_Parameter _gluUnProject4_10 = { kPointerType,8,"double",1,0,&_gluUnProject4_11};
	VPL_Parameter _gluUnProject4_9 = { kFloatType,8,NULL,0,0,&_gluUnProject4_10};
	VPL_Parameter _gluUnProject4_8 = { kFloatType,8,NULL,0,0,&_gluUnProject4_9};
	VPL_Parameter _gluUnProject4_7 = { kPointerType,4,"long int",1,1,&_gluUnProject4_8};
	VPL_Parameter _gluUnProject4_6 = { kPointerType,8,"double",1,1,&_gluUnProject4_7};
	VPL_Parameter _gluUnProject4_5 = { kPointerType,8,"double",1,1,&_gluUnProject4_6};
	VPL_Parameter _gluUnProject4_4 = { kFloatType,8,NULL,0,0,&_gluUnProject4_5};
	VPL_Parameter _gluUnProject4_3 = { kFloatType,8,NULL,0,0,&_gluUnProject4_4};
	VPL_Parameter _gluUnProject4_2 = { kFloatType,8,NULL,0,0,&_gluUnProject4_3};
	VPL_Parameter _gluUnProject4_1 = { kFloatType,8,NULL,0,0,&_gluUnProject4_2};
	VPL_ExtProcedure _gluUnProject4_F = {"gluUnProject4",gluUnProject4,&_gluUnProject4_1,&_gluUnProject4_R};

	VPL_Parameter _gluUnProject_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluUnProject_9 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _gluUnProject_8 = { kPointerType,8,"double",1,0,&_gluUnProject_9};
	VPL_Parameter _gluUnProject_7 = { kPointerType,8,"double",1,0,&_gluUnProject_8};
	VPL_Parameter _gluUnProject_6 = { kPointerType,4,"long int",1,1,&_gluUnProject_7};
	VPL_Parameter _gluUnProject_5 = { kPointerType,8,"double",1,1,&_gluUnProject_6};
	VPL_Parameter _gluUnProject_4 = { kPointerType,8,"double",1,1,&_gluUnProject_5};
	VPL_Parameter _gluUnProject_3 = { kFloatType,8,NULL,0,0,&_gluUnProject_4};
	VPL_Parameter _gluUnProject_2 = { kFloatType,8,NULL,0,0,&_gluUnProject_3};
	VPL_Parameter _gluUnProject_1 = { kFloatType,8,NULL,0,0,&_gluUnProject_2};
	VPL_ExtProcedure _gluUnProject_F = {"gluUnProject",gluUnProject,&_gluUnProject_1,&_gluUnProject_R};

	VPL_Parameter _gluTessVertex_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _gluTessVertex_2 = { kPointerType,8,"double",1,0,&_gluTessVertex_3};
	VPL_Parameter _gluTessVertex_1 = { kPointerType,0,"GLUtesselator",1,0,&_gluTessVertex_2};
	VPL_ExtProcedure _gluTessVertex_F = {"gluTessVertex",gluTessVertex,&_gluTessVertex_1,NULL};

	VPL_Parameter _gluTessProperty_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _gluTessProperty_2 = { kUnsignedType,4,NULL,0,0,&_gluTessProperty_3};
	VPL_Parameter _gluTessProperty_1 = { kPointerType,0,"GLUtesselator",1,0,&_gluTessProperty_2};
	VPL_ExtProcedure _gluTessProperty_F = {"gluTessProperty",gluTessProperty,&_gluTessProperty_1,NULL};

	VPL_Parameter _gluTessNormal_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _gluTessNormal_3 = { kFloatType,8,NULL,0,0,&_gluTessNormal_4};
	VPL_Parameter _gluTessNormal_2 = { kFloatType,8,NULL,0,0,&_gluTessNormal_3};
	VPL_Parameter _gluTessNormal_1 = { kPointerType,0,"GLUtesselator",1,0,&_gluTessNormal_2};
	VPL_ExtProcedure _gluTessNormal_F = {"gluTessNormal",gluTessNormal,&_gluTessNormal_1,NULL};

	VPL_Parameter _gluTessEndPolygon_1 = { kPointerType,0,"GLUtesselator",1,0,NULL};
	VPL_ExtProcedure _gluTessEndPolygon_F = {"gluTessEndPolygon",gluTessEndPolygon,&_gluTessEndPolygon_1,NULL};

	VPL_Parameter _gluTessEndContour_1 = { kPointerType,0,"GLUtesselator",1,0,NULL};
	VPL_ExtProcedure _gluTessEndContour_F = {"gluTessEndContour",gluTessEndContour,&_gluTessEndContour_1,NULL};

	VPL_Parameter _gluTessCallback_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _gluTessCallback_2 = { kUnsignedType,4,NULL,0,0,&_gluTessCallback_3};
	VPL_Parameter _gluTessCallback_1 = { kPointerType,0,"GLUtesselator",1,0,&_gluTessCallback_2};
	VPL_ExtProcedure _gluTessCallback_F = {"gluTessCallback",gluTessCallback,&_gluTessCallback_1,NULL};

	VPL_Parameter _gluTessBeginPolygon_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _gluTessBeginPolygon_1 = { kPointerType,0,"GLUtesselator",1,0,&_gluTessBeginPolygon_2};
	VPL_ExtProcedure _gluTessBeginPolygon_F = {"gluTessBeginPolygon",gluTessBeginPolygon,&_gluTessBeginPolygon_1,NULL};

	VPL_Parameter _gluTessBeginContour_1 = { kPointerType,0,"GLUtesselator",1,0,NULL};
	VPL_ExtProcedure _gluTessBeginContour_F = {"gluTessBeginContour",gluTessBeginContour,&_gluTessBeginContour_1,NULL};

	VPL_Parameter _gluSphere_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluSphere_3 = { kIntType,4,NULL,0,0,&_gluSphere_4};
	VPL_Parameter _gluSphere_2 = { kFloatType,8,NULL,0,0,&_gluSphere_3};
	VPL_Parameter _gluSphere_1 = { kPointerType,0,"GLUquadric",1,0,&_gluSphere_2};
	VPL_ExtProcedure _gluSphere_F = {"gluSphere",gluSphere,&_gluSphere_1,NULL};

	VPL_Parameter _gluScaleImage_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluScaleImage_9 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _gluScaleImage_8 = { kUnsignedType,4,NULL,0,0,&_gluScaleImage_9};
	VPL_Parameter _gluScaleImage_7 = { kIntType,4,NULL,0,0,&_gluScaleImage_8};
	VPL_Parameter _gluScaleImage_6 = { kIntType,4,NULL,0,0,&_gluScaleImage_7};
	VPL_Parameter _gluScaleImage_5 = { kPointerType,0,"void",1,1,&_gluScaleImage_6};
	VPL_Parameter _gluScaleImage_4 = { kUnsignedType,4,NULL,0,0,&_gluScaleImage_5};
	VPL_Parameter _gluScaleImage_3 = { kIntType,4,NULL,0,0,&_gluScaleImage_4};
	VPL_Parameter _gluScaleImage_2 = { kIntType,4,NULL,0,0,&_gluScaleImage_3};
	VPL_Parameter _gluScaleImage_1 = { kUnsignedType,4,NULL,0,0,&_gluScaleImage_2};
	VPL_ExtProcedure _gluScaleImage_F = {"gluScaleImage",gluScaleImage,&_gluScaleImage_1,&_gluScaleImage_R};

	VPL_Parameter _gluQuadricTexture_2 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _gluQuadricTexture_1 = { kPointerType,0,"GLUquadric",1,0,&_gluQuadricTexture_2};
	VPL_ExtProcedure _gluQuadricTexture_F = {"gluQuadricTexture",gluQuadricTexture,&_gluQuadricTexture_1,NULL};

	VPL_Parameter _gluQuadricOrientation_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _gluQuadricOrientation_1 = { kPointerType,0,"GLUquadric",1,0,&_gluQuadricOrientation_2};
	VPL_ExtProcedure _gluQuadricOrientation_F = {"gluQuadricOrientation",gluQuadricOrientation,&_gluQuadricOrientation_1,NULL};

	VPL_Parameter _gluQuadricNormals_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _gluQuadricNormals_1 = { kPointerType,0,"GLUquadric",1,0,&_gluQuadricNormals_2};
	VPL_ExtProcedure _gluQuadricNormals_F = {"gluQuadricNormals",gluQuadricNormals,&_gluQuadricNormals_1,NULL};

	VPL_Parameter _gluQuadricDrawStyle_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _gluQuadricDrawStyle_1 = { kPointerType,0,"GLUquadric",1,0,&_gluQuadricDrawStyle_2};
	VPL_ExtProcedure _gluQuadricDrawStyle_F = {"gluQuadricDrawStyle",gluQuadricDrawStyle,&_gluQuadricDrawStyle_1,NULL};

	VPL_Parameter _gluQuadricCallback_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _gluQuadricCallback_2 = { kUnsignedType,4,NULL,0,0,&_gluQuadricCallback_3};
	VPL_Parameter _gluQuadricCallback_1 = { kPointerType,0,"GLUquadric",1,0,&_gluQuadricCallback_2};
	VPL_ExtProcedure _gluQuadricCallback_F = {"gluQuadricCallback",gluQuadricCallback,&_gluQuadricCallback_1,NULL};

	VPL_Parameter _gluPwlCurve_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _gluPwlCurve_4 = { kIntType,4,NULL,0,0,&_gluPwlCurve_5};
	VPL_Parameter _gluPwlCurve_3 = { kPointerType,4,"float",1,0,&_gluPwlCurve_4};
	VPL_Parameter _gluPwlCurve_2 = { kIntType,4,NULL,0,0,&_gluPwlCurve_3};
	VPL_Parameter _gluPwlCurve_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluPwlCurve_2};
	VPL_ExtProcedure _gluPwlCurve_F = {"gluPwlCurve",gluPwlCurve,&_gluPwlCurve_1,NULL};

	VPL_Parameter _gluProject_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluProject_9 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _gluProject_8 = { kPointerType,8,"double",1,0,&_gluProject_9};
	VPL_Parameter _gluProject_7 = { kPointerType,8,"double",1,0,&_gluProject_8};
	VPL_Parameter _gluProject_6 = { kPointerType,4,"long int",1,1,&_gluProject_7};
	VPL_Parameter _gluProject_5 = { kPointerType,8,"double",1,1,&_gluProject_6};
	VPL_Parameter _gluProject_4 = { kPointerType,8,"double",1,1,&_gluProject_5};
	VPL_Parameter _gluProject_3 = { kFloatType,8,NULL,0,0,&_gluProject_4};
	VPL_Parameter _gluProject_2 = { kFloatType,8,NULL,0,0,&_gluProject_3};
	VPL_Parameter _gluProject_1 = { kFloatType,8,NULL,0,0,&_gluProject_2};
	VPL_ExtProcedure _gluProject_F = {"gluProject",gluProject,&_gluProject_1,&_gluProject_R};

	VPL_Parameter _gluPickMatrix_5 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _gluPickMatrix_4 = { kFloatType,8,NULL,0,0,&_gluPickMatrix_5};
	VPL_Parameter _gluPickMatrix_3 = { kFloatType,8,NULL,0,0,&_gluPickMatrix_4};
	VPL_Parameter _gluPickMatrix_2 = { kFloatType,8,NULL,0,0,&_gluPickMatrix_3};
	VPL_Parameter _gluPickMatrix_1 = { kFloatType,8,NULL,0,0,&_gluPickMatrix_2};
	VPL_ExtProcedure _gluPickMatrix_F = {"gluPickMatrix",gluPickMatrix,&_gluPickMatrix_1,NULL};

	VPL_Parameter _gluPerspective_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _gluPerspective_3 = { kFloatType,8,NULL,0,0,&_gluPerspective_4};
	VPL_Parameter _gluPerspective_2 = { kFloatType,8,NULL,0,0,&_gluPerspective_3};
	VPL_Parameter _gluPerspective_1 = { kFloatType,8,NULL,0,0,&_gluPerspective_2};
	VPL_ExtProcedure _gluPerspective_F = {"gluPerspective",gluPerspective,&_gluPerspective_1,NULL};

	VPL_Parameter _gluPartialDisk_7 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _gluPartialDisk_6 = { kFloatType,8,NULL,0,0,&_gluPartialDisk_7};
	VPL_Parameter _gluPartialDisk_5 = { kIntType,4,NULL,0,0,&_gluPartialDisk_6};
	VPL_Parameter _gluPartialDisk_4 = { kIntType,4,NULL,0,0,&_gluPartialDisk_5};
	VPL_Parameter _gluPartialDisk_3 = { kFloatType,8,NULL,0,0,&_gluPartialDisk_4};
	VPL_Parameter _gluPartialDisk_2 = { kFloatType,8,NULL,0,0,&_gluPartialDisk_3};
	VPL_Parameter _gluPartialDisk_1 = { kPointerType,0,"GLUquadric",1,0,&_gluPartialDisk_2};
	VPL_ExtProcedure _gluPartialDisk_F = {"gluPartialDisk",gluPartialDisk,&_gluPartialDisk_1,NULL};

	VPL_Parameter _gluOrtho2D_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _gluOrtho2D_3 = { kFloatType,8,NULL,0,0,&_gluOrtho2D_4};
	VPL_Parameter _gluOrtho2D_2 = { kFloatType,8,NULL,0,0,&_gluOrtho2D_3};
	VPL_Parameter _gluOrtho2D_1 = { kFloatType,8,NULL,0,0,&_gluOrtho2D_2};
	VPL_ExtProcedure _gluOrtho2D_F = {"gluOrtho2D",gluOrtho2D,&_gluOrtho2D_1,NULL};

	VPL_Parameter _gluNurbsSurface_11 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _gluNurbsSurface_10 = { kIntType,4,NULL,0,0,&_gluNurbsSurface_11};
	VPL_Parameter _gluNurbsSurface_9 = { kIntType,4,NULL,0,0,&_gluNurbsSurface_10};
	VPL_Parameter _gluNurbsSurface_8 = { kPointerType,4,"float",1,0,&_gluNurbsSurface_9};
	VPL_Parameter _gluNurbsSurface_7 = { kIntType,4,NULL,0,0,&_gluNurbsSurface_8};
	VPL_Parameter _gluNurbsSurface_6 = { kIntType,4,NULL,0,0,&_gluNurbsSurface_7};
	VPL_Parameter _gluNurbsSurface_5 = { kPointerType,4,"float",1,0,&_gluNurbsSurface_6};
	VPL_Parameter _gluNurbsSurface_4 = { kIntType,4,NULL,0,0,&_gluNurbsSurface_5};
	VPL_Parameter _gluNurbsSurface_3 = { kPointerType,4,"float",1,0,&_gluNurbsSurface_4};
	VPL_Parameter _gluNurbsSurface_2 = { kIntType,4,NULL,0,0,&_gluNurbsSurface_3};
	VPL_Parameter _gluNurbsSurface_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluNurbsSurface_2};
	VPL_ExtProcedure _gluNurbsSurface_F = {"gluNurbsSurface",gluNurbsSurface,&_gluNurbsSurface_1,NULL};

	VPL_Parameter _gluNurbsProperty_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _gluNurbsProperty_2 = { kUnsignedType,4,NULL,0,0,&_gluNurbsProperty_3};
	VPL_Parameter _gluNurbsProperty_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluNurbsProperty_2};
	VPL_ExtProcedure _gluNurbsProperty_F = {"gluNurbsProperty",gluNurbsProperty,&_gluNurbsProperty_1,NULL};

	VPL_Parameter _gluNurbsCurve_7 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _gluNurbsCurve_6 = { kIntType,4,NULL,0,0,&_gluNurbsCurve_7};
	VPL_Parameter _gluNurbsCurve_5 = { kPointerType,4,"float",1,0,&_gluNurbsCurve_6};
	VPL_Parameter _gluNurbsCurve_4 = { kIntType,4,NULL,0,0,&_gluNurbsCurve_5};
	VPL_Parameter _gluNurbsCurve_3 = { kPointerType,4,"float",1,0,&_gluNurbsCurve_4};
	VPL_Parameter _gluNurbsCurve_2 = { kIntType,4,NULL,0,0,&_gluNurbsCurve_3};
	VPL_Parameter _gluNurbsCurve_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluNurbsCurve_2};
	VPL_ExtProcedure _gluNurbsCurve_F = {"gluNurbsCurve",gluNurbsCurve,&_gluNurbsCurve_1,NULL};

	VPL_Parameter _gluNurbsCallbackDataEXT_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _gluNurbsCallbackDataEXT_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluNurbsCallbackDataEXT_2};
	VPL_ExtProcedure _gluNurbsCallbackDataEXT_F = {"gluNurbsCallbackDataEXT",gluNurbsCallbackDataEXT,&_gluNurbsCallbackDataEXT_1,NULL};

	VPL_Parameter _gluNurbsCallbackData_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _gluNurbsCallbackData_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluNurbsCallbackData_2};
	VPL_ExtProcedure _gluNurbsCallbackData_F = {"gluNurbsCallbackData",gluNurbsCallbackData,&_gluNurbsCallbackData_1,NULL};

	VPL_Parameter _gluNurbsCallback_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _gluNurbsCallback_2 = { kUnsignedType,4,NULL,0,0,&_gluNurbsCallback_3};
	VPL_Parameter _gluNurbsCallback_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluNurbsCallback_2};
	VPL_ExtProcedure _gluNurbsCallback_F = {"gluNurbsCallback",gluNurbsCallback,&_gluNurbsCallback_1,NULL};

	VPL_Parameter _gluNextContour_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _gluNextContour_1 = { kPointerType,0,"GLUtesselator",1,0,&_gluNextContour_2};
	VPL_ExtProcedure _gluNextContour_F = {"gluNextContour",gluNextContour,&_gluNextContour_1,NULL};

	VPL_Parameter _gluNewTess_R = { kPointerType,0,"GLUtesselator",1,0,NULL};
	VPL_ExtProcedure _gluNewTess_F = {"gluNewTess",gluNewTess,NULL,&_gluNewTess_R};

	VPL_Parameter _gluNewQuadric_R = { kPointerType,0,"GLUquadric",1,0,NULL};
	VPL_ExtProcedure _gluNewQuadric_F = {"gluNewQuadric",gluNewQuadric,NULL,&_gluNewQuadric_R};

	VPL_Parameter _gluNewNurbsRenderer_R = { kPointerType,0,"GLUnurbs",1,0,NULL};
	VPL_ExtProcedure _gluNewNurbsRenderer_F = {"gluNewNurbsRenderer",gluNewNurbsRenderer,NULL,&_gluNewNurbsRenderer_R};

	VPL_Parameter _gluLookAt_9 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _gluLookAt_8 = { kFloatType,8,NULL,0,0,&_gluLookAt_9};
	VPL_Parameter _gluLookAt_7 = { kFloatType,8,NULL,0,0,&_gluLookAt_8};
	VPL_Parameter _gluLookAt_6 = { kFloatType,8,NULL,0,0,&_gluLookAt_7};
	VPL_Parameter _gluLookAt_5 = { kFloatType,8,NULL,0,0,&_gluLookAt_6};
	VPL_Parameter _gluLookAt_4 = { kFloatType,8,NULL,0,0,&_gluLookAt_5};
	VPL_Parameter _gluLookAt_3 = { kFloatType,8,NULL,0,0,&_gluLookAt_4};
	VPL_Parameter _gluLookAt_2 = { kFloatType,8,NULL,0,0,&_gluLookAt_3};
	VPL_Parameter _gluLookAt_1 = { kFloatType,8,NULL,0,0,&_gluLookAt_2};
	VPL_ExtProcedure _gluLookAt_F = {"gluLookAt",gluLookAt,&_gluLookAt_1,NULL};

	VPL_Parameter _gluLoadSamplingMatrices_4 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _gluLoadSamplingMatrices_3 = { kPointerType,4,"float",1,1,&_gluLoadSamplingMatrices_4};
	VPL_Parameter _gluLoadSamplingMatrices_2 = { kPointerType,4,"float",1,1,&_gluLoadSamplingMatrices_3};
	VPL_Parameter _gluLoadSamplingMatrices_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluLoadSamplingMatrices_2};
	VPL_ExtProcedure _gluLoadSamplingMatrices_F = {"gluLoadSamplingMatrices",gluLoadSamplingMatrices,&_gluLoadSamplingMatrices_1,NULL};

	VPL_Parameter _gluGetTessProperty_3 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _gluGetTessProperty_2 = { kUnsignedType,4,NULL,0,0,&_gluGetTessProperty_3};
	VPL_Parameter _gluGetTessProperty_1 = { kPointerType,0,"GLUtesselator",1,0,&_gluGetTessProperty_2};
	VPL_ExtProcedure _gluGetTessProperty_F = {"gluGetTessProperty",gluGetTessProperty,&_gluGetTessProperty_1,NULL};

	VPL_Parameter _gluGetString_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _gluGetString_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _gluGetString_F = {"gluGetString",gluGetString,&_gluGetString_1,&_gluGetString_R};

	VPL_Parameter _gluGetNurbsProperty_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _gluGetNurbsProperty_2 = { kUnsignedType,4,NULL,0,0,&_gluGetNurbsProperty_3};
	VPL_Parameter _gluGetNurbsProperty_1 = { kPointerType,0,"GLUnurbs",1,0,&_gluGetNurbsProperty_2};
	VPL_ExtProcedure _gluGetNurbsProperty_F = {"gluGetNurbsProperty",gluGetNurbsProperty,&_gluGetNurbsProperty_1,NULL};

	VPL_Parameter _gluErrorString_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _gluErrorString_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _gluErrorString_F = {"gluErrorString",gluErrorString,&_gluErrorString_1,&_gluErrorString_R};

	VPL_Parameter _gluEndTrim_1 = { kPointerType,0,"GLUnurbs",1,0,NULL};
	VPL_ExtProcedure _gluEndTrim_F = {"gluEndTrim",gluEndTrim,&_gluEndTrim_1,NULL};

	VPL_Parameter _gluEndSurface_1 = { kPointerType,0,"GLUnurbs",1,0,NULL};
	VPL_ExtProcedure _gluEndSurface_F = {"gluEndSurface",gluEndSurface,&_gluEndSurface_1,NULL};

	VPL_Parameter _gluEndPolygon_1 = { kPointerType,0,"GLUtesselator",1,0,NULL};
	VPL_ExtProcedure _gluEndPolygon_F = {"gluEndPolygon",gluEndPolygon,&_gluEndPolygon_1,NULL};

	VPL_Parameter _gluEndCurve_1 = { kPointerType,0,"GLUnurbs",1,0,NULL};
	VPL_ExtProcedure _gluEndCurve_F = {"gluEndCurve",gluEndCurve,&_gluEndCurve_1,NULL};

	VPL_Parameter _gluDisk_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluDisk_4 = { kIntType,4,NULL,0,0,&_gluDisk_5};
	VPL_Parameter _gluDisk_3 = { kFloatType,8,NULL,0,0,&_gluDisk_4};
	VPL_Parameter _gluDisk_2 = { kFloatType,8,NULL,0,0,&_gluDisk_3};
	VPL_Parameter _gluDisk_1 = { kPointerType,0,"GLUquadric",1,0,&_gluDisk_2};
	VPL_ExtProcedure _gluDisk_F = {"gluDisk",gluDisk,&_gluDisk_1,NULL};

	VPL_Parameter _gluDeleteTess_1 = { kPointerType,0,"GLUtesselator",1,0,NULL};
	VPL_ExtProcedure _gluDeleteTess_F = {"gluDeleteTess",gluDeleteTess,&_gluDeleteTess_1,NULL};

	VPL_Parameter _gluDeleteQuadric_1 = { kPointerType,0,"GLUquadric",1,0,NULL};
	VPL_ExtProcedure _gluDeleteQuadric_F = {"gluDeleteQuadric",gluDeleteQuadric,&_gluDeleteQuadric_1,NULL};

	VPL_Parameter _gluDeleteNurbsRenderer_1 = { kPointerType,0,"GLUnurbs",1,0,NULL};
	VPL_ExtProcedure _gluDeleteNurbsRenderer_F = {"gluDeleteNurbsRenderer",gluDeleteNurbsRenderer,&_gluDeleteNurbsRenderer_1,NULL};

	VPL_Parameter _gluCylinder_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluCylinder_5 = { kIntType,4,NULL,0,0,&_gluCylinder_6};
	VPL_Parameter _gluCylinder_4 = { kFloatType,8,NULL,0,0,&_gluCylinder_5};
	VPL_Parameter _gluCylinder_3 = { kFloatType,8,NULL,0,0,&_gluCylinder_4};
	VPL_Parameter _gluCylinder_2 = { kFloatType,8,NULL,0,0,&_gluCylinder_3};
	VPL_Parameter _gluCylinder_1 = { kPointerType,0,"GLUquadric",1,0,&_gluCylinder_2};
	VPL_ExtProcedure _gluCylinder_F = {"gluCylinder",gluCylinder,&_gluCylinder_1,NULL};

	VPL_Parameter _gluCheckExtension_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _gluCheckExtension_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _gluCheckExtension_1 = { kPointerType,1,"unsigned char",1,1,&_gluCheckExtension_2};
	VPL_ExtProcedure _gluCheckExtension_F = {"gluCheckExtension",gluCheckExtension,&_gluCheckExtension_1,&_gluCheckExtension_R};

	VPL_Parameter _gluBuild3DMipmaps_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluBuild3DMipmaps_8 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _gluBuild3DMipmaps_7 = { kUnsignedType,4,NULL,0,0,&_gluBuild3DMipmaps_8};
	VPL_Parameter _gluBuild3DMipmaps_6 = { kUnsignedType,4,NULL,0,0,&_gluBuild3DMipmaps_7};
	VPL_Parameter _gluBuild3DMipmaps_5 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmaps_6};
	VPL_Parameter _gluBuild3DMipmaps_4 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmaps_5};
	VPL_Parameter _gluBuild3DMipmaps_3 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmaps_4};
	VPL_Parameter _gluBuild3DMipmaps_2 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmaps_3};
	VPL_Parameter _gluBuild3DMipmaps_1 = { kUnsignedType,4,NULL,0,0,&_gluBuild3DMipmaps_2};
	VPL_ExtProcedure _gluBuild3DMipmaps_F = {"gluBuild3DMipmaps",gluBuild3DMipmaps,&_gluBuild3DMipmaps_1,&_gluBuild3DMipmaps_R};

	VPL_Parameter _gluBuild3DMipmapLevels_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluBuild3DMipmapLevels_11 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _gluBuild3DMipmapLevels_10 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmapLevels_11};
	VPL_Parameter _gluBuild3DMipmapLevels_9 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmapLevels_10};
	VPL_Parameter _gluBuild3DMipmapLevels_8 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmapLevels_9};
	VPL_Parameter _gluBuild3DMipmapLevels_7 = { kUnsignedType,4,NULL,0,0,&_gluBuild3DMipmapLevels_8};
	VPL_Parameter _gluBuild3DMipmapLevels_6 = { kUnsignedType,4,NULL,0,0,&_gluBuild3DMipmapLevels_7};
	VPL_Parameter _gluBuild3DMipmapLevels_5 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmapLevels_6};
	VPL_Parameter _gluBuild3DMipmapLevels_4 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmapLevels_5};
	VPL_Parameter _gluBuild3DMipmapLevels_3 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmapLevels_4};
	VPL_Parameter _gluBuild3DMipmapLevels_2 = { kIntType,4,NULL,0,0,&_gluBuild3DMipmapLevels_3};
	VPL_Parameter _gluBuild3DMipmapLevels_1 = { kUnsignedType,4,NULL,0,0,&_gluBuild3DMipmapLevels_2};
	VPL_ExtProcedure _gluBuild3DMipmapLevels_F = {"gluBuild3DMipmapLevels",gluBuild3DMipmapLevels,&_gluBuild3DMipmapLevels_1,&_gluBuild3DMipmapLevels_R};

	VPL_Parameter _gluBuild2DMipmaps_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluBuild2DMipmaps_7 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _gluBuild2DMipmaps_6 = { kUnsignedType,4,NULL,0,0,&_gluBuild2DMipmaps_7};
	VPL_Parameter _gluBuild2DMipmaps_5 = { kUnsignedType,4,NULL,0,0,&_gluBuild2DMipmaps_6};
	VPL_Parameter _gluBuild2DMipmaps_4 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmaps_5};
	VPL_Parameter _gluBuild2DMipmaps_3 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmaps_4};
	VPL_Parameter _gluBuild2DMipmaps_2 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmaps_3};
	VPL_Parameter _gluBuild2DMipmaps_1 = { kUnsignedType,4,NULL,0,0,&_gluBuild2DMipmaps_2};
	VPL_ExtProcedure _gluBuild2DMipmaps_F = {"gluBuild2DMipmaps",gluBuild2DMipmaps,&_gluBuild2DMipmaps_1,&_gluBuild2DMipmaps_R};

	VPL_Parameter _gluBuild2DMipmapLevels_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluBuild2DMipmapLevels_10 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _gluBuild2DMipmapLevels_9 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmapLevels_10};
	VPL_Parameter _gluBuild2DMipmapLevels_8 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmapLevels_9};
	VPL_Parameter _gluBuild2DMipmapLevels_7 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmapLevels_8};
	VPL_Parameter _gluBuild2DMipmapLevels_6 = { kUnsignedType,4,NULL,0,0,&_gluBuild2DMipmapLevels_7};
	VPL_Parameter _gluBuild2DMipmapLevels_5 = { kUnsignedType,4,NULL,0,0,&_gluBuild2DMipmapLevels_6};
	VPL_Parameter _gluBuild2DMipmapLevels_4 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmapLevels_5};
	VPL_Parameter _gluBuild2DMipmapLevels_3 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmapLevels_4};
	VPL_Parameter _gluBuild2DMipmapLevels_2 = { kIntType,4,NULL,0,0,&_gluBuild2DMipmapLevels_3};
	VPL_Parameter _gluBuild2DMipmapLevels_1 = { kUnsignedType,4,NULL,0,0,&_gluBuild2DMipmapLevels_2};
	VPL_ExtProcedure _gluBuild2DMipmapLevels_F = {"gluBuild2DMipmapLevels",gluBuild2DMipmapLevels,&_gluBuild2DMipmapLevels_1,&_gluBuild2DMipmapLevels_R};

	VPL_Parameter _gluBuild1DMipmaps_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluBuild1DMipmaps_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _gluBuild1DMipmaps_5 = { kUnsignedType,4,NULL,0,0,&_gluBuild1DMipmaps_6};
	VPL_Parameter _gluBuild1DMipmaps_4 = { kUnsignedType,4,NULL,0,0,&_gluBuild1DMipmaps_5};
	VPL_Parameter _gluBuild1DMipmaps_3 = { kIntType,4,NULL,0,0,&_gluBuild1DMipmaps_4};
	VPL_Parameter _gluBuild1DMipmaps_2 = { kIntType,4,NULL,0,0,&_gluBuild1DMipmaps_3};
	VPL_Parameter _gluBuild1DMipmaps_1 = { kUnsignedType,4,NULL,0,0,&_gluBuild1DMipmaps_2};
	VPL_ExtProcedure _gluBuild1DMipmaps_F = {"gluBuild1DMipmaps",gluBuild1DMipmaps,&_gluBuild1DMipmaps_1,&_gluBuild1DMipmaps_R};

	VPL_Parameter _gluBuild1DMipmapLevels_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _gluBuild1DMipmapLevels_9 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _gluBuild1DMipmapLevels_8 = { kIntType,4,NULL,0,0,&_gluBuild1DMipmapLevels_9};
	VPL_Parameter _gluBuild1DMipmapLevels_7 = { kIntType,4,NULL,0,0,&_gluBuild1DMipmapLevels_8};
	VPL_Parameter _gluBuild1DMipmapLevels_6 = { kIntType,4,NULL,0,0,&_gluBuild1DMipmapLevels_7};
	VPL_Parameter _gluBuild1DMipmapLevels_5 = { kUnsignedType,4,NULL,0,0,&_gluBuild1DMipmapLevels_6};
	VPL_Parameter _gluBuild1DMipmapLevels_4 = { kUnsignedType,4,NULL,0,0,&_gluBuild1DMipmapLevels_5};
	VPL_Parameter _gluBuild1DMipmapLevels_3 = { kIntType,4,NULL,0,0,&_gluBuild1DMipmapLevels_4};
	VPL_Parameter _gluBuild1DMipmapLevels_2 = { kIntType,4,NULL,0,0,&_gluBuild1DMipmapLevels_3};
	VPL_Parameter _gluBuild1DMipmapLevels_1 = { kUnsignedType,4,NULL,0,0,&_gluBuild1DMipmapLevels_2};
	VPL_ExtProcedure _gluBuild1DMipmapLevels_F = {"gluBuild1DMipmapLevels",gluBuild1DMipmapLevels,&_gluBuild1DMipmapLevels_1,&_gluBuild1DMipmapLevels_R};

	VPL_Parameter _gluBeginTrim_1 = { kPointerType,0,"GLUnurbs",1,0,NULL};
	VPL_ExtProcedure _gluBeginTrim_F = {"gluBeginTrim",gluBeginTrim,&_gluBeginTrim_1,NULL};

	VPL_Parameter _gluBeginSurface_1 = { kPointerType,0,"GLUnurbs",1,0,NULL};
	VPL_ExtProcedure _gluBeginSurface_F = {"gluBeginSurface",gluBeginSurface,&_gluBeginSurface_1,NULL};

	VPL_Parameter _gluBeginPolygon_1 = { kPointerType,0,"GLUtesselator",1,0,NULL};
	VPL_ExtProcedure _gluBeginPolygon_F = {"gluBeginPolygon",gluBeginPolygon,&_gluBeginPolygon_1,NULL};

	VPL_Parameter _gluBeginCurve_1 = { kPointerType,0,"GLUnurbs",1,0,NULL};
	VPL_ExtProcedure _gluBeginCurve_F = {"gluBeginCurve",gluBeginCurve,&_gluBeginCurve_1,NULL};

	VPL_Parameter _glStencilMaskSeparate_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glStencilMaskSeparate_1 = { kUnsignedType,4,NULL,0,0,&_glStencilMaskSeparate_2};
	VPL_ExtProcedure _glStencilMaskSeparate_F = {"glStencilMaskSeparate",glStencilMaskSeparate,&_glStencilMaskSeparate_1,NULL};

	VPL_Parameter _glStencilOpSeparate_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glStencilOpSeparate_3 = { kUnsignedType,4,NULL,0,0,&_glStencilOpSeparate_4};
	VPL_Parameter _glStencilOpSeparate_2 = { kUnsignedType,4,NULL,0,0,&_glStencilOpSeparate_3};
	VPL_Parameter _glStencilOpSeparate_1 = { kUnsignedType,4,NULL,0,0,&_glStencilOpSeparate_2};
	VPL_ExtProcedure _glStencilOpSeparate_F = {"glStencilOpSeparate",glStencilOpSeparate,&_glStencilOpSeparate_1,NULL};

	VPL_Parameter _glStencilFuncSeparate_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glStencilFuncSeparate_3 = { kIntType,4,NULL,0,0,&_glStencilFuncSeparate_4};
	VPL_Parameter _glStencilFuncSeparate_2 = { kUnsignedType,4,NULL,0,0,&_glStencilFuncSeparate_3};
	VPL_Parameter _glStencilFuncSeparate_1 = { kUnsignedType,4,NULL,0,0,&_glStencilFuncSeparate_2};
	VPL_ExtProcedure _glStencilFuncSeparate_F = {"glStencilFuncSeparate",glStencilFuncSeparate,&_glStencilFuncSeparate_1,NULL};

	VPL_Parameter _glGetAttribLocation_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetAttribLocation_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glGetAttribLocation_1 = { kUnsignedType,4,NULL,0,0,&_glGetAttribLocation_2};
	VPL_ExtProcedure _glGetAttribLocation_F = {"glGetAttribLocation",glGetAttribLocation,&_glGetAttribLocation_1,&_glGetAttribLocation_R};

	VPL_Parameter _glGetActiveAttrib_7 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetActiveAttrib_6 = { kPointerType,4,"unsigned long",1,0,&_glGetActiveAttrib_7};
	VPL_Parameter _glGetActiveAttrib_5 = { kPointerType,4,"long int",1,0,&_glGetActiveAttrib_6};
	VPL_Parameter _glGetActiveAttrib_4 = { kPointerType,4,"long int",1,0,&_glGetActiveAttrib_5};
	VPL_Parameter _glGetActiveAttrib_3 = { kIntType,4,NULL,0,0,&_glGetActiveAttrib_4};
	VPL_Parameter _glGetActiveAttrib_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveAttrib_3};
	VPL_Parameter _glGetActiveAttrib_1 = { kUnsignedType,4,NULL,0,0,&_glGetActiveAttrib_2};
	VPL_ExtProcedure _glGetActiveAttrib_F = {"glGetActiveAttrib",glGetActiveAttrib,&_glGetActiveAttrib_1,NULL};

	VPL_Parameter _glBindAttribLocation_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glBindAttribLocation_2 = { kUnsignedType,4,NULL,0,0,&_glBindAttribLocation_3};
	VPL_Parameter _glBindAttribLocation_1 = { kUnsignedType,4,NULL,0,0,&_glBindAttribLocation_2};
	VPL_ExtProcedure _glBindAttribLocation_F = {"glBindAttribLocation",glBindAttribLocation,&_glBindAttribLocation_1,NULL};

	VPL_Parameter _glGetShaderSource_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetShaderSource_3 = { kPointerType,4,"long int",1,0,&_glGetShaderSource_4};
	VPL_Parameter _glGetShaderSource_2 = { kIntType,4,NULL,0,0,&_glGetShaderSource_3};
	VPL_Parameter _glGetShaderSource_1 = { kUnsignedType,4,NULL,0,0,&_glGetShaderSource_2};
	VPL_ExtProcedure _glGetShaderSource_F = {"glGetShaderSource",glGetShaderSource,&_glGetShaderSource_1,NULL};

	VPL_Parameter _glGetUniformiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetUniformiv_2 = { kIntType,4,NULL,0,0,&_glGetUniformiv_3};
	VPL_Parameter _glGetUniformiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformiv_2};
	VPL_ExtProcedure _glGetUniformiv_F = {"glGetUniformiv",glGetUniformiv,&_glGetUniformiv_1,NULL};

	VPL_Parameter _glGetUniformfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetUniformfv_2 = { kIntType,4,NULL,0,0,&_glGetUniformfv_3};
	VPL_Parameter _glGetUniformfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformfv_2};
	VPL_ExtProcedure _glGetUniformfv_F = {"glGetUniformfv",glGetUniformfv,&_glGetUniformfv_1,NULL};

	VPL_Parameter _glGetActiveUniform_7 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetActiveUniform_6 = { kPointerType,4,"unsigned long",1,0,&_glGetActiveUniform_7};
	VPL_Parameter _glGetActiveUniform_5 = { kPointerType,4,"long int",1,0,&_glGetActiveUniform_6};
	VPL_Parameter _glGetActiveUniform_4 = { kPointerType,4,"long int",1,0,&_glGetActiveUniform_5};
	VPL_Parameter _glGetActiveUniform_3 = { kIntType,4,NULL,0,0,&_glGetActiveUniform_4};
	VPL_Parameter _glGetActiveUniform_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniform_3};
	VPL_Parameter _glGetActiveUniform_1 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniform_2};
	VPL_ExtProcedure _glGetActiveUniform_F = {"glGetActiveUniform",glGetActiveUniform,&_glGetActiveUniform_1,NULL};

	VPL_Parameter _glGetUniformLocation_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformLocation_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glGetUniformLocation_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformLocation_2};
	VPL_ExtProcedure _glGetUniformLocation_F = {"glGetUniformLocation",glGetUniformLocation,&_glGetUniformLocation_1,&_glGetUniformLocation_R};

	VPL_Parameter _glGetProgramInfoLog_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetProgramInfoLog_3 = { kPointerType,4,"long int",1,0,&_glGetProgramInfoLog_4};
	VPL_Parameter _glGetProgramInfoLog_2 = { kIntType,4,NULL,0,0,&_glGetProgramInfoLog_3};
	VPL_Parameter _glGetProgramInfoLog_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramInfoLog_2};
	VPL_ExtProcedure _glGetProgramInfoLog_F = {"glGetProgramInfoLog",glGetProgramInfoLog,&_glGetProgramInfoLog_1,NULL};

	VPL_Parameter _glGetShaderInfoLog_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetShaderInfoLog_3 = { kPointerType,4,"long int",1,0,&_glGetShaderInfoLog_4};
	VPL_Parameter _glGetShaderInfoLog_2 = { kIntType,4,NULL,0,0,&_glGetShaderInfoLog_3};
	VPL_Parameter _glGetShaderInfoLog_1 = { kUnsignedType,4,NULL,0,0,&_glGetShaderInfoLog_2};
	VPL_ExtProcedure _glGetShaderInfoLog_F = {"glGetShaderInfoLog",glGetShaderInfoLog,&_glGetShaderInfoLog_1,NULL};

	VPL_Parameter _glGetAttachedShaders_4 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGetAttachedShaders_3 = { kPointerType,4,"long int",1,0,&_glGetAttachedShaders_4};
	VPL_Parameter _glGetAttachedShaders_2 = { kIntType,4,NULL,0,0,&_glGetAttachedShaders_3};
	VPL_Parameter _glGetAttachedShaders_1 = { kUnsignedType,4,NULL,0,0,&_glGetAttachedShaders_2};
	VPL_ExtProcedure _glGetAttachedShaders_F = {"glGetAttachedShaders",glGetAttachedShaders,&_glGetAttachedShaders_1,NULL};

	VPL_Parameter _glGetProgramiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetProgramiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetProgramiv_3};
	VPL_Parameter _glGetProgramiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramiv_2};
	VPL_ExtProcedure _glGetProgramiv_F = {"glGetProgramiv",glGetProgramiv,&_glGetProgramiv_1,NULL};

	VPL_Parameter _glGetShaderiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetShaderiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetShaderiv_3};
	VPL_Parameter _glGetShaderiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetShaderiv_2};
	VPL_ExtProcedure _glGetShaderiv_F = {"glGetShaderiv",glGetShaderiv,&_glGetShaderiv_1,NULL};

	VPL_Parameter _glIsProgram_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsProgram_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsProgram_F = {"glIsProgram",glIsProgram,&_glIsProgram_1,&_glIsProgram_R};

	VPL_Parameter _glIsShader_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsShader_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsShader_F = {"glIsShader",glIsShader,&_glIsShader_1,&_glIsShader_R};

	VPL_Parameter _glUniformMatrix4fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix4fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix4fv_4};
	VPL_Parameter _glUniformMatrix4fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix4fv_3};
	VPL_Parameter _glUniformMatrix4fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix4fv_2};
	VPL_ExtProcedure _glUniformMatrix4fv_F = {"glUniformMatrix4fv",glUniformMatrix4fv,&_glUniformMatrix4fv_1,NULL};

	VPL_Parameter _glUniformMatrix3fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix3fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix3fv_4};
	VPL_Parameter _glUniformMatrix3fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix3fv_3};
	VPL_Parameter _glUniformMatrix3fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix3fv_2};
	VPL_ExtProcedure _glUniformMatrix3fv_F = {"glUniformMatrix3fv",glUniformMatrix3fv,&_glUniformMatrix3fv_1,NULL};

	VPL_Parameter _glUniformMatrix2fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix2fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix2fv_4};
	VPL_Parameter _glUniformMatrix2fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix2fv_3};
	VPL_Parameter _glUniformMatrix2fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix2fv_2};
	VPL_ExtProcedure _glUniformMatrix2fv_F = {"glUniformMatrix2fv",glUniformMatrix2fv,&_glUniformMatrix2fv_1,NULL};

	VPL_Parameter _glUniform4iv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glUniform4iv_2 = { kIntType,4,NULL,0,0,&_glUniform4iv_3};
	VPL_Parameter _glUniform4iv_1 = { kIntType,4,NULL,0,0,&_glUniform4iv_2};
	VPL_ExtProcedure _glUniform4iv_F = {"glUniform4iv",glUniform4iv,&_glUniform4iv_1,NULL};

	VPL_Parameter _glUniform3iv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glUniform3iv_2 = { kIntType,4,NULL,0,0,&_glUniform3iv_3};
	VPL_Parameter _glUniform3iv_1 = { kIntType,4,NULL,0,0,&_glUniform3iv_2};
	VPL_ExtProcedure _glUniform3iv_F = {"glUniform3iv",glUniform3iv,&_glUniform3iv_1,NULL};

	VPL_Parameter _glUniform2iv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glUniform2iv_2 = { kIntType,4,NULL,0,0,&_glUniform2iv_3};
	VPL_Parameter _glUniform2iv_1 = { kIntType,4,NULL,0,0,&_glUniform2iv_2};
	VPL_ExtProcedure _glUniform2iv_F = {"glUniform2iv",glUniform2iv,&_glUniform2iv_1,NULL};

	VPL_Parameter _glUniform1iv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glUniform1iv_2 = { kIntType,4,NULL,0,0,&_glUniform1iv_3};
	VPL_Parameter _glUniform1iv_1 = { kIntType,4,NULL,0,0,&_glUniform1iv_2};
	VPL_ExtProcedure _glUniform1iv_F = {"glUniform1iv",glUniform1iv,&_glUniform1iv_1,NULL};

	VPL_Parameter _glUniform4fv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniform4fv_2 = { kIntType,4,NULL,0,0,&_glUniform4fv_3};
	VPL_Parameter _glUniform4fv_1 = { kIntType,4,NULL,0,0,&_glUniform4fv_2};
	VPL_ExtProcedure _glUniform4fv_F = {"glUniform4fv",glUniform4fv,&_glUniform4fv_1,NULL};

	VPL_Parameter _glUniform3fv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniform3fv_2 = { kIntType,4,NULL,0,0,&_glUniform3fv_3};
	VPL_Parameter _glUniform3fv_1 = { kIntType,4,NULL,0,0,&_glUniform3fv_2};
	VPL_ExtProcedure _glUniform3fv_F = {"glUniform3fv",glUniform3fv,&_glUniform3fv_1,NULL};

	VPL_Parameter _glUniform2fv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniform2fv_2 = { kIntType,4,NULL,0,0,&_glUniform2fv_3};
	VPL_Parameter _glUniform2fv_1 = { kIntType,4,NULL,0,0,&_glUniform2fv_2};
	VPL_ExtProcedure _glUniform2fv_F = {"glUniform2fv",glUniform2fv,&_glUniform2fv_1,NULL};

	VPL_Parameter _glUniform1fv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniform1fv_2 = { kIntType,4,NULL,0,0,&_glUniform1fv_3};
	VPL_Parameter _glUniform1fv_1 = { kIntType,4,NULL,0,0,&_glUniform1fv_2};
	VPL_ExtProcedure _glUniform1fv_F = {"glUniform1fv",glUniform1fv,&_glUniform1fv_1,NULL};

	VPL_Parameter _glUniform4i_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform4i_4 = { kIntType,4,NULL,0,0,&_glUniform4i_5};
	VPL_Parameter _glUniform4i_3 = { kIntType,4,NULL,0,0,&_glUniform4i_4};
	VPL_Parameter _glUniform4i_2 = { kIntType,4,NULL,0,0,&_glUniform4i_3};
	VPL_Parameter _glUniform4i_1 = { kIntType,4,NULL,0,0,&_glUniform4i_2};
	VPL_ExtProcedure _glUniform4i_F = {"glUniform4i",glUniform4i,&_glUniform4i_1,NULL};

	VPL_Parameter _glUniform3i_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform3i_3 = { kIntType,4,NULL,0,0,&_glUniform3i_4};
	VPL_Parameter _glUniform3i_2 = { kIntType,4,NULL,0,0,&_glUniform3i_3};
	VPL_Parameter _glUniform3i_1 = { kIntType,4,NULL,0,0,&_glUniform3i_2};
	VPL_ExtProcedure _glUniform3i_F = {"glUniform3i",glUniform3i,&_glUniform3i_1,NULL};

	VPL_Parameter _glUniform2i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform2i_2 = { kIntType,4,NULL,0,0,&_glUniform2i_3};
	VPL_Parameter _glUniform2i_1 = { kIntType,4,NULL,0,0,&_glUniform2i_2};
	VPL_ExtProcedure _glUniform2i_F = {"glUniform2i",glUniform2i,&_glUniform2i_1,NULL};

	VPL_Parameter _glUniform1i_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform1i_1 = { kIntType,4,NULL,0,0,&_glUniform1i_2};
	VPL_ExtProcedure _glUniform1i_F = {"glUniform1i",glUniform1i,&_glUniform1i_1,NULL};

	VPL_Parameter _glUniform4f_5 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform4f_4 = { kFloatType,4,NULL,0,0,&_glUniform4f_5};
	VPL_Parameter _glUniform4f_3 = { kFloatType,4,NULL,0,0,&_glUniform4f_4};
	VPL_Parameter _glUniform4f_2 = { kFloatType,4,NULL,0,0,&_glUniform4f_3};
	VPL_Parameter _glUniform4f_1 = { kIntType,4,NULL,0,0,&_glUniform4f_2};
	VPL_ExtProcedure _glUniform4f_F = {"glUniform4f",glUniform4f,&_glUniform4f_1,NULL};

	VPL_Parameter _glUniform3f_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform3f_3 = { kFloatType,4,NULL,0,0,&_glUniform3f_4};
	VPL_Parameter _glUniform3f_2 = { kFloatType,4,NULL,0,0,&_glUniform3f_3};
	VPL_Parameter _glUniform3f_1 = { kIntType,4,NULL,0,0,&_glUniform3f_2};
	VPL_ExtProcedure _glUniform3f_F = {"glUniform3f",glUniform3f,&_glUniform3f_1,NULL};

	VPL_Parameter _glUniform2f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform2f_2 = { kFloatType,4,NULL,0,0,&_glUniform2f_3};
	VPL_Parameter _glUniform2f_1 = { kIntType,4,NULL,0,0,&_glUniform2f_2};
	VPL_ExtProcedure _glUniform2f_F = {"glUniform2f",glUniform2f,&_glUniform2f_1,NULL};

	VPL_Parameter _glUniform1f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform1f_1 = { kIntType,4,NULL,0,0,&_glUniform1f_2};
	VPL_ExtProcedure _glUniform1f_F = {"glUniform1f",glUniform1f,&_glUniform1f_1,NULL};

	VPL_Parameter _glValidateProgram_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glValidateProgram_F = {"glValidateProgram",glValidateProgram,&_glValidateProgram_1,NULL};

	VPL_Parameter _glDeleteProgram_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glDeleteProgram_F = {"glDeleteProgram",glDeleteProgram,&_glDeleteProgram_1,NULL};

	VPL_Parameter _glUseProgram_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glUseProgram_F = {"glUseProgram",glUseProgram,&_glUseProgram_1,NULL};

	VPL_Parameter _glLinkProgram_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glLinkProgram_F = {"glLinkProgram",glLinkProgram,&_glLinkProgram_1,NULL};

	VPL_Parameter _glAttachShader_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glAttachShader_1 = { kUnsignedType,4,NULL,0,0,&_glAttachShader_2};
	VPL_ExtProcedure _glAttachShader_F = {"glAttachShader",glAttachShader,&_glAttachShader_1,NULL};

	VPL_Parameter _glCreateProgram_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glCreateProgram_F = {"glCreateProgram",glCreateProgram,NULL,&_glCreateProgram_R};

	VPL_Parameter _glCompileShader_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glCompileShader_F = {"glCompileShader",glCompileShader,&_glCompileShader_1,NULL};

	VPL_Parameter _glShaderSource_4 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glShaderSource_3 = { kPointerType,1,"char",2,0,&_glShaderSource_4};
	VPL_Parameter _glShaderSource_2 = { kIntType,4,NULL,0,0,&_glShaderSource_3};
	VPL_Parameter _glShaderSource_1 = { kUnsignedType,4,NULL,0,0,&_glShaderSource_2};
	VPL_ExtProcedure _glShaderSource_F = {"glShaderSource",glShaderSource,&_glShaderSource_1,NULL};

	VPL_Parameter _glCreateShader_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glCreateShader_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glCreateShader_F = {"glCreateShader",glCreateShader,&_glCreateShader_1,&_glCreateShader_R};

	VPL_Parameter _glDetachShader_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glDetachShader_1 = { kUnsignedType,4,NULL,0,0,&_glDetachShader_2};
	VPL_ExtProcedure _glDetachShader_F = {"glDetachShader",glDetachShader,&_glDetachShader_1,NULL};

	VPL_Parameter _glDeleteShader_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glDeleteShader_F = {"glDeleteShader",glDeleteShader,&_glDeleteShader_1,NULL};

	VPL_Parameter _glGetVertexAttribPointerv_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetVertexAttribPointerv_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribPointerv_3};
	VPL_Parameter _glGetVertexAttribPointerv_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribPointerv_2};
	VPL_ExtProcedure _glGetVertexAttribPointerv_F = {"glGetVertexAttribPointerv",glGetVertexAttribPointerv,&_glGetVertexAttribPointerv_1,NULL};

	VPL_Parameter _glGetVertexAttribiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetVertexAttribiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribiv_3};
	VPL_Parameter _glGetVertexAttribiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribiv_2};
	VPL_ExtProcedure _glGetVertexAttribiv_F = {"glGetVertexAttribiv",glGetVertexAttribiv,&_glGetVertexAttribiv_1,NULL};

	VPL_Parameter _glGetVertexAttribfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetVertexAttribfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribfv_3};
	VPL_Parameter _glGetVertexAttribfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribfv_2};
	VPL_ExtProcedure _glGetVertexAttribfv_F = {"glGetVertexAttribfv",glGetVertexAttribfv,&_glGetVertexAttribfv_1,NULL};

	VPL_Parameter _glGetVertexAttribdv_3 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _glGetVertexAttribdv_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribdv_3};
	VPL_Parameter _glGetVertexAttribdv_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribdv_2};
	VPL_ExtProcedure _glGetVertexAttribdv_F = {"glGetVertexAttribdv",glGetVertexAttribdv,&_glGetVertexAttribdv_1,NULL};

	VPL_Parameter _glDisableVertexAttribArray_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glDisableVertexAttribArray_F = {"glDisableVertexAttribArray",glDisableVertexAttribArray,&_glDisableVertexAttribArray_1,NULL};

	VPL_Parameter _glEnableVertexAttribArray_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glEnableVertexAttribArray_F = {"glEnableVertexAttribArray",glEnableVertexAttribArray,&_glEnableVertexAttribArray_1,NULL};

	VPL_Parameter _glVertexAttribPointer_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glVertexAttribPointer_5 = { kIntType,4,NULL,0,0,&_glVertexAttribPointer_6};
	VPL_Parameter _glVertexAttribPointer_4 = { kUnsignedType,1,NULL,0,0,&_glVertexAttribPointer_5};
	VPL_Parameter _glVertexAttribPointer_3 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribPointer_4};
	VPL_Parameter _glVertexAttribPointer_2 = { kIntType,4,NULL,0,0,&_glVertexAttribPointer_3};
	VPL_Parameter _glVertexAttribPointer_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribPointer_2};
	VPL_ExtProcedure _glVertexAttribPointer_F = {"glVertexAttribPointer",glVertexAttribPointer,&_glVertexAttribPointer_1,NULL};

	VPL_Parameter _glVertexAttrib4usv_2 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_Parameter _glVertexAttrib4usv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4usv_2};
	VPL_ExtProcedure _glVertexAttrib4usv_F = {"glVertexAttrib4usv",glVertexAttrib4usv,&_glVertexAttrib4usv_1,NULL};

	VPL_Parameter _glVertexAttrib4uiv_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glVertexAttrib4uiv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4uiv_2};
	VPL_ExtProcedure _glVertexAttrib4uiv_F = {"glVertexAttrib4uiv",glVertexAttrib4uiv,&_glVertexAttrib4uiv_1,NULL};

	VPL_Parameter _glVertexAttrib4ubv_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glVertexAttrib4ubv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4ubv_2};
	VPL_ExtProcedure _glVertexAttrib4ubv_F = {"glVertexAttrib4ubv",glVertexAttrib4ubv,&_glVertexAttrib4ubv_1,NULL};

	VPL_Parameter _glVertexAttrib4sv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib4sv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4sv_2};
	VPL_ExtProcedure _glVertexAttrib4sv_F = {"glVertexAttrib4sv",glVertexAttrib4sv,&_glVertexAttrib4sv_1,NULL};

	VPL_Parameter _glVertexAttrib4s_5 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib4s_4 = { kIntType,2,NULL,0,0,&_glVertexAttrib4s_5};
	VPL_Parameter _glVertexAttrib4s_3 = { kIntType,2,NULL,0,0,&_glVertexAttrib4s_4};
	VPL_Parameter _glVertexAttrib4s_2 = { kIntType,2,NULL,0,0,&_glVertexAttrib4s_3};
	VPL_Parameter _glVertexAttrib4s_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4s_2};
	VPL_ExtProcedure _glVertexAttrib4s_F = {"glVertexAttrib4s",glVertexAttrib4s,&_glVertexAttrib4s_1,NULL};

	VPL_Parameter _glVertexAttrib4iv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glVertexAttrib4iv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4iv_2};
	VPL_ExtProcedure _glVertexAttrib4iv_F = {"glVertexAttrib4iv",glVertexAttrib4iv,&_glVertexAttrib4iv_1,NULL};

	VPL_Parameter _glVertexAttrib4fv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glVertexAttrib4fv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4fv_2};
	VPL_ExtProcedure _glVertexAttrib4fv_F = {"glVertexAttrib4fv",glVertexAttrib4fv,&_glVertexAttrib4fv_1,NULL};

	VPL_Parameter _glVertexAttrib4f_5 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib4f_4 = { kFloatType,4,NULL,0,0,&_glVertexAttrib4f_5};
	VPL_Parameter _glVertexAttrib4f_3 = { kFloatType,4,NULL,0,0,&_glVertexAttrib4f_4};
	VPL_Parameter _glVertexAttrib4f_2 = { kFloatType,4,NULL,0,0,&_glVertexAttrib4f_3};
	VPL_Parameter _glVertexAttrib4f_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4f_2};
	VPL_ExtProcedure _glVertexAttrib4f_F = {"glVertexAttrib4f",glVertexAttrib4f,&_glVertexAttrib4f_1,NULL};

	VPL_Parameter _glVertexAttrib4dv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glVertexAttrib4dv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4dv_2};
	VPL_ExtProcedure _glVertexAttrib4dv_F = {"glVertexAttrib4dv",glVertexAttrib4dv,&_glVertexAttrib4dv_1,NULL};

	VPL_Parameter _glVertexAttrib4d_5 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib4d_4 = { kFloatType,8,NULL,0,0,&_glVertexAttrib4d_5};
	VPL_Parameter _glVertexAttrib4d_3 = { kFloatType,8,NULL,0,0,&_glVertexAttrib4d_4};
	VPL_Parameter _glVertexAttrib4d_2 = { kFloatType,8,NULL,0,0,&_glVertexAttrib4d_3};
	VPL_Parameter _glVertexAttrib4d_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4d_2};
	VPL_ExtProcedure _glVertexAttrib4d_F = {"glVertexAttrib4d",glVertexAttrib4d,&_glVertexAttrib4d_1,NULL};

	VPL_Parameter _glVertexAttrib4bv_2 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_Parameter _glVertexAttrib4bv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4bv_2};
	VPL_ExtProcedure _glVertexAttrib4bv_F = {"glVertexAttrib4bv",glVertexAttrib4bv,&_glVertexAttrib4bv_1,NULL};

	VPL_Parameter _glVertexAttrib4Nusv_2 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_Parameter _glVertexAttrib4Nusv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4Nusv_2};
	VPL_ExtProcedure _glVertexAttrib4Nusv_F = {"glVertexAttrib4Nusv",glVertexAttrib4Nusv,&_glVertexAttrib4Nusv_1,NULL};

	VPL_Parameter _glVertexAttrib4Nuiv_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glVertexAttrib4Nuiv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4Nuiv_2};
	VPL_ExtProcedure _glVertexAttrib4Nuiv_F = {"glVertexAttrib4Nuiv",glVertexAttrib4Nuiv,&_glVertexAttrib4Nuiv_1,NULL};

	VPL_Parameter _glVertexAttrib4Nubv_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glVertexAttrib4Nubv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4Nubv_2};
	VPL_ExtProcedure _glVertexAttrib4Nubv_F = {"glVertexAttrib4Nubv",glVertexAttrib4Nubv,&_glVertexAttrib4Nubv_1,NULL};

	VPL_Parameter _glVertexAttrib4Nub_5 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib4Nub_4 = { kUnsignedType,1,NULL,0,0,&_glVertexAttrib4Nub_5};
	VPL_Parameter _glVertexAttrib4Nub_3 = { kUnsignedType,1,NULL,0,0,&_glVertexAttrib4Nub_4};
	VPL_Parameter _glVertexAttrib4Nub_2 = { kUnsignedType,1,NULL,0,0,&_glVertexAttrib4Nub_3};
	VPL_Parameter _glVertexAttrib4Nub_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4Nub_2};
	VPL_ExtProcedure _glVertexAttrib4Nub_F = {"glVertexAttrib4Nub",glVertexAttrib4Nub,&_glVertexAttrib4Nub_1,NULL};

	VPL_Parameter _glVertexAttrib4Nsv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib4Nsv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4Nsv_2};
	VPL_ExtProcedure _glVertexAttrib4Nsv_F = {"glVertexAttrib4Nsv",glVertexAttrib4Nsv,&_glVertexAttrib4Nsv_1,NULL};

	VPL_Parameter _glVertexAttrib4Niv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glVertexAttrib4Niv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4Niv_2};
	VPL_ExtProcedure _glVertexAttrib4Niv_F = {"glVertexAttrib4Niv",glVertexAttrib4Niv,&_glVertexAttrib4Niv_1,NULL};

	VPL_Parameter _glVertexAttrib4Nbv_2 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_Parameter _glVertexAttrib4Nbv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4Nbv_2};
	VPL_ExtProcedure _glVertexAttrib4Nbv_F = {"glVertexAttrib4Nbv",glVertexAttrib4Nbv,&_glVertexAttrib4Nbv_1,NULL};

	VPL_Parameter _glVertexAttrib3sv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib3sv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3sv_2};
	VPL_ExtProcedure _glVertexAttrib3sv_F = {"glVertexAttrib3sv",glVertexAttrib3sv,&_glVertexAttrib3sv_1,NULL};

	VPL_Parameter _glVertexAttrib3s_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib3s_3 = { kIntType,2,NULL,0,0,&_glVertexAttrib3s_4};
	VPL_Parameter _glVertexAttrib3s_2 = { kIntType,2,NULL,0,0,&_glVertexAttrib3s_3};
	VPL_Parameter _glVertexAttrib3s_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3s_2};
	VPL_ExtProcedure _glVertexAttrib3s_F = {"glVertexAttrib3s",glVertexAttrib3s,&_glVertexAttrib3s_1,NULL};

	VPL_Parameter _glVertexAttrib3fv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glVertexAttrib3fv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3fv_2};
	VPL_ExtProcedure _glVertexAttrib3fv_F = {"glVertexAttrib3fv",glVertexAttrib3fv,&_glVertexAttrib3fv_1,NULL};

	VPL_Parameter _glVertexAttrib3f_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib3f_3 = { kFloatType,4,NULL,0,0,&_glVertexAttrib3f_4};
	VPL_Parameter _glVertexAttrib3f_2 = { kFloatType,4,NULL,0,0,&_glVertexAttrib3f_3};
	VPL_Parameter _glVertexAttrib3f_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3f_2};
	VPL_ExtProcedure _glVertexAttrib3f_F = {"glVertexAttrib3f",glVertexAttrib3f,&_glVertexAttrib3f_1,NULL};

	VPL_Parameter _glVertexAttrib3dv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glVertexAttrib3dv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3dv_2};
	VPL_ExtProcedure _glVertexAttrib3dv_F = {"glVertexAttrib3dv",glVertexAttrib3dv,&_glVertexAttrib3dv_1,NULL};

	VPL_Parameter _glVertexAttrib3d_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib3d_3 = { kFloatType,8,NULL,0,0,&_glVertexAttrib3d_4};
	VPL_Parameter _glVertexAttrib3d_2 = { kFloatType,8,NULL,0,0,&_glVertexAttrib3d_3};
	VPL_Parameter _glVertexAttrib3d_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3d_2};
	VPL_ExtProcedure _glVertexAttrib3d_F = {"glVertexAttrib3d",glVertexAttrib3d,&_glVertexAttrib3d_1,NULL};

	VPL_Parameter _glVertexAttrib2sv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib2sv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2sv_2};
	VPL_ExtProcedure _glVertexAttrib2sv_F = {"glVertexAttrib2sv",glVertexAttrib2sv,&_glVertexAttrib2sv_1,NULL};

	VPL_Parameter _glVertexAttrib2s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib2s_2 = { kIntType,2,NULL,0,0,&_glVertexAttrib2s_3};
	VPL_Parameter _glVertexAttrib2s_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2s_2};
	VPL_ExtProcedure _glVertexAttrib2s_F = {"glVertexAttrib2s",glVertexAttrib2s,&_glVertexAttrib2s_1,NULL};

	VPL_Parameter _glVertexAttrib2fv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glVertexAttrib2fv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2fv_2};
	VPL_ExtProcedure _glVertexAttrib2fv_F = {"glVertexAttrib2fv",glVertexAttrib2fv,&_glVertexAttrib2fv_1,NULL};

	VPL_Parameter _glVertexAttrib2f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib2f_2 = { kFloatType,4,NULL,0,0,&_glVertexAttrib2f_3};
	VPL_Parameter _glVertexAttrib2f_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2f_2};
	VPL_ExtProcedure _glVertexAttrib2f_F = {"glVertexAttrib2f",glVertexAttrib2f,&_glVertexAttrib2f_1,NULL};

	VPL_Parameter _glVertexAttrib2dv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glVertexAttrib2dv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2dv_2};
	VPL_ExtProcedure _glVertexAttrib2dv_F = {"glVertexAttrib2dv",glVertexAttrib2dv,&_glVertexAttrib2dv_1,NULL};

	VPL_Parameter _glVertexAttrib2d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib2d_2 = { kFloatType,8,NULL,0,0,&_glVertexAttrib2d_3};
	VPL_Parameter _glVertexAttrib2d_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2d_2};
	VPL_ExtProcedure _glVertexAttrib2d_F = {"glVertexAttrib2d",glVertexAttrib2d,&_glVertexAttrib2d_1,NULL};

	VPL_Parameter _glVertexAttrib1sv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib1sv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1sv_2};
	VPL_ExtProcedure _glVertexAttrib1sv_F = {"glVertexAttrib1sv",glVertexAttrib1sv,&_glVertexAttrib1sv_1,NULL};

	VPL_Parameter _glVertexAttrib1s_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib1s_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1s_2};
	VPL_ExtProcedure _glVertexAttrib1s_F = {"glVertexAttrib1s",glVertexAttrib1s,&_glVertexAttrib1s_1,NULL};

	VPL_Parameter _glVertexAttrib1fv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glVertexAttrib1fv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1fv_2};
	VPL_ExtProcedure _glVertexAttrib1fv_F = {"glVertexAttrib1fv",glVertexAttrib1fv,&_glVertexAttrib1fv_1,NULL};

	VPL_Parameter _glVertexAttrib1f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib1f_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1f_2};
	VPL_ExtProcedure _glVertexAttrib1f_F = {"glVertexAttrib1f",glVertexAttrib1f,&_glVertexAttrib1f_1,NULL};

	VPL_Parameter _glVertexAttrib1dv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glVertexAttrib1dv_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1dv_2};
	VPL_ExtProcedure _glVertexAttrib1dv_F = {"glVertexAttrib1dv",glVertexAttrib1dv,&_glVertexAttrib1dv_1,NULL};

	VPL_Parameter _glVertexAttrib1d_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib1d_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1d_2};
	VPL_ExtProcedure _glVertexAttrib1d_F = {"glVertexAttrib1d",glVertexAttrib1d,&_glVertexAttrib1d_1,NULL};

	VPL_Parameter _glDrawBuffers_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDrawBuffers_1 = { kIntType,4,NULL,0,0,&_glDrawBuffers_2};
	VPL_ExtProcedure _glDrawBuffers_F = {"glDrawBuffers",glDrawBuffers,&_glDrawBuffers_1,NULL};

	VPL_Parameter _glGetBufferPointerv_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetBufferPointerv_2 = { kUnsignedType,4,NULL,0,0,&_glGetBufferPointerv_3};
	VPL_Parameter _glGetBufferPointerv_1 = { kUnsignedType,4,NULL,0,0,&_glGetBufferPointerv_2};
	VPL_ExtProcedure _glGetBufferPointerv_F = {"glGetBufferPointerv",glGetBufferPointerv,&_glGetBufferPointerv_1,NULL};

	VPL_Parameter _glGetBufferParameteriv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetBufferParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetBufferParameteriv_3};
	VPL_Parameter _glGetBufferParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetBufferParameteriv_2};
	VPL_ExtProcedure _glGetBufferParameteriv_F = {"glGetBufferParameteriv",glGetBufferParameteriv,&_glGetBufferParameteriv_1,NULL};

	VPL_Parameter _glUnmapBuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glUnmapBuffer_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glUnmapBuffer_F = {"glUnmapBuffer",glUnmapBuffer,&_glUnmapBuffer_1,&_glUnmapBuffer_R};

	VPL_Parameter _glMapBuffer_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glMapBuffer_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glMapBuffer_1 = { kUnsignedType,4,NULL,0,0,&_glMapBuffer_2};
	VPL_ExtProcedure _glMapBuffer_F = {"glMapBuffer",glMapBuffer,&_glMapBuffer_1,&_glMapBuffer_R};

	VPL_Parameter _glGetBufferSubData_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetBufferSubData_3 = { kIntType,4,NULL,0,0,&_glGetBufferSubData_4};
	VPL_Parameter _glGetBufferSubData_2 = { kIntType,4,NULL,0,0,&_glGetBufferSubData_3};
	VPL_Parameter _glGetBufferSubData_1 = { kUnsignedType,4,NULL,0,0,&_glGetBufferSubData_2};
	VPL_ExtProcedure _glGetBufferSubData_F = {"glGetBufferSubData",glGetBufferSubData,&_glGetBufferSubData_1,NULL};

	VPL_Parameter _glBufferSubData_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glBufferSubData_3 = { kIntType,4,NULL,0,0,&_glBufferSubData_4};
	VPL_Parameter _glBufferSubData_2 = { kIntType,4,NULL,0,0,&_glBufferSubData_3};
	VPL_Parameter _glBufferSubData_1 = { kUnsignedType,4,NULL,0,0,&_glBufferSubData_2};
	VPL_ExtProcedure _glBufferSubData_F = {"glBufferSubData",glBufferSubData,&_glBufferSubData_1,NULL};

	VPL_Parameter _glBufferData_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBufferData_3 = { kPointerType,0,"void",1,1,&_glBufferData_4};
	VPL_Parameter _glBufferData_2 = { kIntType,4,NULL,0,0,&_glBufferData_3};
	VPL_Parameter _glBufferData_1 = { kUnsignedType,4,NULL,0,0,&_glBufferData_2};
	VPL_ExtProcedure _glBufferData_F = {"glBufferData",glBufferData,&_glBufferData_1,NULL};

	VPL_Parameter _glIsBuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsBuffer_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsBuffer_F = {"glIsBuffer",glIsBuffer,&_glIsBuffer_1,&_glIsBuffer_R};

	VPL_Parameter _glGenBuffers_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenBuffers_1 = { kIntType,4,NULL,0,0,&_glGenBuffers_2};
	VPL_ExtProcedure _glGenBuffers_F = {"glGenBuffers",glGenBuffers,&_glGenBuffers_1,NULL};

	VPL_Parameter _glDeleteBuffers_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteBuffers_1 = { kIntType,4,NULL,0,0,&_glDeleteBuffers_2};
	VPL_ExtProcedure _glDeleteBuffers_F = {"glDeleteBuffers",glDeleteBuffers,&_glDeleteBuffers_1,NULL};

	VPL_Parameter _glBindBuffer_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindBuffer_1 = { kUnsignedType,4,NULL,0,0,&_glBindBuffer_2};
	VPL_ExtProcedure _glBindBuffer_F = {"glBindBuffer",glBindBuffer,&_glBindBuffer_1,NULL};

	VPL_Parameter _glGetQueryObjectuiv_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGetQueryObjectuiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectuiv_3};
	VPL_Parameter _glGetQueryObjectuiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectuiv_2};
	VPL_ExtProcedure _glGetQueryObjectuiv_F = {"glGetQueryObjectuiv",glGetQueryObjectuiv,&_glGetQueryObjectuiv_1,NULL};

	VPL_Parameter _glGetQueryObjectiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetQueryObjectiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectiv_3};
	VPL_Parameter _glGetQueryObjectiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectiv_2};
	VPL_ExtProcedure _glGetQueryObjectiv_F = {"glGetQueryObjectiv",glGetQueryObjectiv,&_glGetQueryObjectiv_1,NULL};

	VPL_Parameter _glGetQueryiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetQueryiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryiv_3};
	VPL_Parameter _glGetQueryiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryiv_2};
	VPL_ExtProcedure _glGetQueryiv_F = {"glGetQueryiv",glGetQueryiv,&_glGetQueryiv_1,NULL};

	VPL_Parameter _glEndQuery_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glEndQuery_F = {"glEndQuery",glEndQuery,&_glEndQuery_1,NULL};

	VPL_Parameter _glBeginQuery_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBeginQuery_1 = { kUnsignedType,4,NULL,0,0,&_glBeginQuery_2};
	VPL_ExtProcedure _glBeginQuery_F = {"glBeginQuery",glBeginQuery,&_glBeginQuery_1,NULL};

	VPL_Parameter _glIsQuery_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsQuery_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsQuery_F = {"glIsQuery",glIsQuery,&_glIsQuery_1,&_glIsQuery_R};

	VPL_Parameter _glDeleteQueries_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteQueries_1 = { kIntType,4,NULL,0,0,&_glDeleteQueries_2};
	VPL_ExtProcedure _glDeleteQueries_F = {"glDeleteQueries",glDeleteQueries,&_glDeleteQueries_1,NULL};

	VPL_Parameter _glGenQueries_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenQueries_1 = { kIntType,4,NULL,0,0,&_glGenQueries_2};
	VPL_ExtProcedure _glGenQueries_F = {"glGenQueries",glGenQueries,&_glGenQueries_1,NULL};

	VPL_Parameter _glWindowPos3sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3sv_F = {"glWindowPos3sv",glWindowPos3sv,&_glWindowPos3sv_1,NULL};

	VPL_Parameter _glWindowPos3s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3s_2 = { kIntType,2,NULL,0,0,&_glWindowPos3s_3};
	VPL_Parameter _glWindowPos3s_1 = { kIntType,2,NULL,0,0,&_glWindowPos3s_2};
	VPL_ExtProcedure _glWindowPos3s_F = {"glWindowPos3s",glWindowPos3s,&_glWindowPos3s_1,NULL};

	VPL_Parameter _glWindowPos3iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3iv_F = {"glWindowPos3iv",glWindowPos3iv,&_glWindowPos3iv_1,NULL};

	VPL_Parameter _glWindowPos3i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3i_2 = { kIntType,4,NULL,0,0,&_glWindowPos3i_3};
	VPL_Parameter _glWindowPos3i_1 = { kIntType,4,NULL,0,0,&_glWindowPos3i_2};
	VPL_ExtProcedure _glWindowPos3i_F = {"glWindowPos3i",glWindowPos3i,&_glWindowPos3i_1,NULL};

	VPL_Parameter _glWindowPos3fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3fv_F = {"glWindowPos3fv",glWindowPos3fv,&_glWindowPos3fv_1,NULL};

	VPL_Parameter _glWindowPos3f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3f_2 = { kFloatType,4,NULL,0,0,&_glWindowPos3f_3};
	VPL_Parameter _glWindowPos3f_1 = { kFloatType,4,NULL,0,0,&_glWindowPos3f_2};
	VPL_ExtProcedure _glWindowPos3f_F = {"glWindowPos3f",glWindowPos3f,&_glWindowPos3f_1,NULL};

	VPL_Parameter _glWindowPos3dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3dv_F = {"glWindowPos3dv",glWindowPos3dv,&_glWindowPos3dv_1,NULL};

	VPL_Parameter _glWindowPos3d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3d_2 = { kFloatType,8,NULL,0,0,&_glWindowPos3d_3};
	VPL_Parameter _glWindowPos3d_1 = { kFloatType,8,NULL,0,0,&_glWindowPos3d_2};
	VPL_ExtProcedure _glWindowPos3d_F = {"glWindowPos3d",glWindowPos3d,&_glWindowPos3d_1,NULL};

	VPL_Parameter _glWindowPos2sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glWindowPos2sv_F = {"glWindowPos2sv",glWindowPos2sv,&_glWindowPos2sv_1,NULL};

	VPL_Parameter _glWindowPos2s_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos2s_1 = { kIntType,2,NULL,0,0,&_glWindowPos2s_2};
	VPL_ExtProcedure _glWindowPos2s_F = {"glWindowPos2s",glWindowPos2s,&_glWindowPos2s_1,NULL};

	VPL_Parameter _glWindowPos2iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glWindowPos2iv_F = {"glWindowPos2iv",glWindowPos2iv,&_glWindowPos2iv_1,NULL};

	VPL_Parameter _glWindowPos2i_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos2i_1 = { kIntType,4,NULL,0,0,&_glWindowPos2i_2};
	VPL_ExtProcedure _glWindowPos2i_F = {"glWindowPos2i",glWindowPos2i,&_glWindowPos2i_1,NULL};

	VPL_Parameter _glWindowPos2fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glWindowPos2fv_F = {"glWindowPos2fv",glWindowPos2fv,&_glWindowPos2fv_1,NULL};

	VPL_Parameter _glWindowPos2f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos2f_1 = { kFloatType,4,NULL,0,0,&_glWindowPos2f_2};
	VPL_ExtProcedure _glWindowPos2f_F = {"glWindowPos2f",glWindowPos2f,&_glWindowPos2f_1,NULL};

	VPL_Parameter _glWindowPos2dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glWindowPos2dv_F = {"glWindowPos2dv",glWindowPos2dv,&_glWindowPos2dv_1,NULL};

	VPL_Parameter _glWindowPos2d_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos2d_1 = { kFloatType,8,NULL,0,0,&_glWindowPos2d_2};
	VPL_ExtProcedure _glWindowPos2d_F = {"glWindowPos2d",glWindowPos2d,&_glWindowPos2d_1,NULL};

	VPL_Parameter _glMultiDrawElements_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawElements_4 = { kPointerType,0,"void",2,0,&_glMultiDrawElements_5};
	VPL_Parameter _glMultiDrawElements_3 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawElements_4};
	VPL_Parameter _glMultiDrawElements_2 = { kPointerType,4,"long int",1,1,&_glMultiDrawElements_3};
	VPL_Parameter _glMultiDrawElements_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawElements_2};
	VPL_ExtProcedure _glMultiDrawElements_F = {"glMultiDrawElements",glMultiDrawElements,&_glMultiDrawElements_1,NULL};

	VPL_Parameter _glMultiDrawArrays_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawArrays_3 = { kPointerType,4,"long int",1,1,&_glMultiDrawArrays_4};
	VPL_Parameter _glMultiDrawArrays_2 = { kPointerType,4,"long int",1,1,&_glMultiDrawArrays_3};
	VPL_Parameter _glMultiDrawArrays_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawArrays_2};
	VPL_ExtProcedure _glMultiDrawArrays_F = {"glMultiDrawArrays",glMultiDrawArrays,&_glMultiDrawArrays_1,NULL};

	VPL_Parameter _glBlendFuncSeparate_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendFuncSeparate_3 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparate_4};
	VPL_Parameter _glBlendFuncSeparate_2 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparate_3};
	VPL_Parameter _glBlendFuncSeparate_1 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparate_2};
	VPL_ExtProcedure _glBlendFuncSeparate_F = {"glBlendFuncSeparate",glBlendFuncSeparate,&_glBlendFuncSeparate_1,NULL};

	VPL_Parameter _glPointParameteriv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glPointParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameteriv_2};
	VPL_ExtProcedure _glPointParameteriv_F = {"glPointParameteriv",glPointParameteriv,&_glPointParameteriv_1,NULL};

	VPL_Parameter _glPointParameteri_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glPointParameteri_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameteri_2};
	VPL_ExtProcedure _glPointParameteri_F = {"glPointParameteri",glPointParameteri,&_glPointParameteri_1,NULL};

	VPL_Parameter _glPointParameterfv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glPointParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameterfv_2};
	VPL_ExtProcedure _glPointParameterfv_F = {"glPointParameterfv",glPointParameterfv,&_glPointParameterfv_1,NULL};

	VPL_Parameter _glPointParameterf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glPointParameterf_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameterf_2};
	VPL_ExtProcedure _glPointParameterf_F = {"glPointParameterf",glPointParameterf,&_glPointParameterf_1,NULL};

	VPL_Parameter _glSecondaryColorPointer_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glSecondaryColorPointer_3 = { kIntType,4,NULL,0,0,&_glSecondaryColorPointer_4};
	VPL_Parameter _glSecondaryColorPointer_2 = { kUnsignedType,4,NULL,0,0,&_glSecondaryColorPointer_3};
	VPL_Parameter _glSecondaryColorPointer_1 = { kIntType,4,NULL,0,0,&_glSecondaryColorPointer_2};
	VPL_ExtProcedure _glSecondaryColorPointer_F = {"glSecondaryColorPointer",glSecondaryColorPointer,&_glSecondaryColorPointer_1,NULL};

	VPL_Parameter _glSecondaryColor3usv_1 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3usv_F = {"glSecondaryColor3usv",glSecondaryColor3usv,&_glSecondaryColor3usv_1,NULL};

	VPL_Parameter _glSecondaryColor3us_3 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3us_2 = { kUnsignedType,2,NULL,0,0,&_glSecondaryColor3us_3};
	VPL_Parameter _glSecondaryColor3us_1 = { kUnsignedType,2,NULL,0,0,&_glSecondaryColor3us_2};
	VPL_ExtProcedure _glSecondaryColor3us_F = {"glSecondaryColor3us",glSecondaryColor3us,&_glSecondaryColor3us_1,NULL};

	VPL_Parameter _glSecondaryColor3uiv_1 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3uiv_F = {"glSecondaryColor3uiv",glSecondaryColor3uiv,&_glSecondaryColor3uiv_1,NULL};

	VPL_Parameter _glSecondaryColor3ui_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3ui_2 = { kUnsignedType,4,NULL,0,0,&_glSecondaryColor3ui_3};
	VPL_Parameter _glSecondaryColor3ui_1 = { kUnsignedType,4,NULL,0,0,&_glSecondaryColor3ui_2};
	VPL_ExtProcedure _glSecondaryColor3ui_F = {"glSecondaryColor3ui",glSecondaryColor3ui,&_glSecondaryColor3ui_1,NULL};

	VPL_Parameter _glSecondaryColor3ubv_1 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3ubv_F = {"glSecondaryColor3ubv",glSecondaryColor3ubv,&_glSecondaryColor3ubv_1,NULL};

	VPL_Parameter _glSecondaryColor3ub_3 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3ub_2 = { kUnsignedType,1,NULL,0,0,&_glSecondaryColor3ub_3};
	VPL_Parameter _glSecondaryColor3ub_1 = { kUnsignedType,1,NULL,0,0,&_glSecondaryColor3ub_2};
	VPL_ExtProcedure _glSecondaryColor3ub_F = {"glSecondaryColor3ub",glSecondaryColor3ub,&_glSecondaryColor3ub_1,NULL};

	VPL_Parameter _glSecondaryColor3sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3sv_F = {"glSecondaryColor3sv",glSecondaryColor3sv,&_glSecondaryColor3sv_1,NULL};

	VPL_Parameter _glSecondaryColor3s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3s_2 = { kIntType,2,NULL,0,0,&_glSecondaryColor3s_3};
	VPL_Parameter _glSecondaryColor3s_1 = { kIntType,2,NULL,0,0,&_glSecondaryColor3s_2};
	VPL_ExtProcedure _glSecondaryColor3s_F = {"glSecondaryColor3s",glSecondaryColor3s,&_glSecondaryColor3s_1,NULL};

	VPL_Parameter _glSecondaryColor3iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3iv_F = {"glSecondaryColor3iv",glSecondaryColor3iv,&_glSecondaryColor3iv_1,NULL};

	VPL_Parameter _glSecondaryColor3i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3i_2 = { kIntType,4,NULL,0,0,&_glSecondaryColor3i_3};
	VPL_Parameter _glSecondaryColor3i_1 = { kIntType,4,NULL,0,0,&_glSecondaryColor3i_2};
	VPL_ExtProcedure _glSecondaryColor3i_F = {"glSecondaryColor3i",glSecondaryColor3i,&_glSecondaryColor3i_1,NULL};

	VPL_Parameter _glSecondaryColor3fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3fv_F = {"glSecondaryColor3fv",glSecondaryColor3fv,&_glSecondaryColor3fv_1,NULL};

	VPL_Parameter _glSecondaryColor3f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3f_2 = { kFloatType,4,NULL,0,0,&_glSecondaryColor3f_3};
	VPL_Parameter _glSecondaryColor3f_1 = { kFloatType,4,NULL,0,0,&_glSecondaryColor3f_2};
	VPL_ExtProcedure _glSecondaryColor3f_F = {"glSecondaryColor3f",glSecondaryColor3f,&_glSecondaryColor3f_1,NULL};

	VPL_Parameter _glSecondaryColor3dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3dv_F = {"glSecondaryColor3dv",glSecondaryColor3dv,&_glSecondaryColor3dv_1,NULL};

	VPL_Parameter _glSecondaryColor3d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3d_2 = { kFloatType,8,NULL,0,0,&_glSecondaryColor3d_3};
	VPL_Parameter _glSecondaryColor3d_1 = { kFloatType,8,NULL,0,0,&_glSecondaryColor3d_2};
	VPL_ExtProcedure _glSecondaryColor3d_F = {"glSecondaryColor3d",glSecondaryColor3d,&_glSecondaryColor3d_1,NULL};

	VPL_Parameter _glSecondaryColor3bv_1 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3bv_F = {"glSecondaryColor3bv",glSecondaryColor3bv,&_glSecondaryColor3bv_1,NULL};

	VPL_Parameter _glSecondaryColor3b_3 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3b_2 = { kIntType,1,NULL,0,0,&_glSecondaryColor3b_3};
	VPL_Parameter _glSecondaryColor3b_1 = { kIntType,1,NULL,0,0,&_glSecondaryColor3b_2};
	VPL_ExtProcedure _glSecondaryColor3b_F = {"glSecondaryColor3b",glSecondaryColor3b,&_glSecondaryColor3b_1,NULL};

	VPL_Parameter _glFogCoordPointer_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glFogCoordPointer_2 = { kIntType,4,NULL,0,0,&_glFogCoordPointer_3};
	VPL_Parameter _glFogCoordPointer_1 = { kUnsignedType,4,NULL,0,0,&_glFogCoordPointer_2};
	VPL_ExtProcedure _glFogCoordPointer_F = {"glFogCoordPointer",glFogCoordPointer,&_glFogCoordPointer_1,NULL};

	VPL_Parameter _glFogCoorddv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glFogCoorddv_F = {"glFogCoorddv",glFogCoorddv,&_glFogCoorddv_1,NULL};

	VPL_Parameter _glFogCoordd_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glFogCoordd_F = {"glFogCoordd",glFogCoordd,&_glFogCoordd_1,NULL};

	VPL_Parameter _glFogCoordfv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glFogCoordfv_F = {"glFogCoordfv",glFogCoordfv,&_glFogCoordfv_1,NULL};

	VPL_Parameter _glFogCoordf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glFogCoordf_F = {"glFogCoordf",glFogCoordf,&_glFogCoordf_1,NULL};

	VPL_Parameter _glMultiTexCoord4sv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glMultiTexCoord4sv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4sv_2};
	VPL_ExtProcedure _glMultiTexCoord4sv_F = {"glMultiTexCoord4sv",glMultiTexCoord4sv,&_glMultiTexCoord4sv_1,NULL};

	VPL_Parameter _glMultiTexCoord4s_5 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord4s_4 = { kIntType,2,NULL,0,0,&_glMultiTexCoord4s_5};
	VPL_Parameter _glMultiTexCoord4s_3 = { kIntType,2,NULL,0,0,&_glMultiTexCoord4s_4};
	VPL_Parameter _glMultiTexCoord4s_2 = { kIntType,2,NULL,0,0,&_glMultiTexCoord4s_3};
	VPL_Parameter _glMultiTexCoord4s_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4s_2};
	VPL_ExtProcedure _glMultiTexCoord4s_F = {"glMultiTexCoord4s",glMultiTexCoord4s,&_glMultiTexCoord4s_1,NULL};

	VPL_Parameter _glMultiTexCoord4iv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMultiTexCoord4iv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4iv_2};
	VPL_ExtProcedure _glMultiTexCoord4iv_F = {"glMultiTexCoord4iv",glMultiTexCoord4iv,&_glMultiTexCoord4iv_1,NULL};

	VPL_Parameter _glMultiTexCoord4i_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord4i_4 = { kIntType,4,NULL,0,0,&_glMultiTexCoord4i_5};
	VPL_Parameter _glMultiTexCoord4i_3 = { kIntType,4,NULL,0,0,&_glMultiTexCoord4i_4};
	VPL_Parameter _glMultiTexCoord4i_2 = { kIntType,4,NULL,0,0,&_glMultiTexCoord4i_3};
	VPL_Parameter _glMultiTexCoord4i_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4i_2};
	VPL_ExtProcedure _glMultiTexCoord4i_F = {"glMultiTexCoord4i",glMultiTexCoord4i,&_glMultiTexCoord4i_1,NULL};

	VPL_Parameter _glMultiTexCoord4fv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMultiTexCoord4fv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4fv_2};
	VPL_ExtProcedure _glMultiTexCoord4fv_F = {"glMultiTexCoord4fv",glMultiTexCoord4fv,&_glMultiTexCoord4fv_1,NULL};

	VPL_Parameter _glMultiTexCoord4f_5 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord4f_4 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord4f_5};
	VPL_Parameter _glMultiTexCoord4f_3 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord4f_4};
	VPL_Parameter _glMultiTexCoord4f_2 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord4f_3};
	VPL_Parameter _glMultiTexCoord4f_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4f_2};
	VPL_ExtProcedure _glMultiTexCoord4f_F = {"glMultiTexCoord4f",glMultiTexCoord4f,&_glMultiTexCoord4f_1,NULL};

	VPL_Parameter _glMultiTexCoord4dv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMultiTexCoord4dv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4dv_2};
	VPL_ExtProcedure _glMultiTexCoord4dv_F = {"glMultiTexCoord4dv",glMultiTexCoord4dv,&_glMultiTexCoord4dv_1,NULL};

	VPL_Parameter _glMultiTexCoord4d_5 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord4d_4 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord4d_5};
	VPL_Parameter _glMultiTexCoord4d_3 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord4d_4};
	VPL_Parameter _glMultiTexCoord4d_2 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord4d_3};
	VPL_Parameter _glMultiTexCoord4d_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4d_2};
	VPL_ExtProcedure _glMultiTexCoord4d_F = {"glMultiTexCoord4d",glMultiTexCoord4d,&_glMultiTexCoord4d_1,NULL};

	VPL_Parameter _glMultiTexCoord3sv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glMultiTexCoord3sv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3sv_2};
	VPL_ExtProcedure _glMultiTexCoord3sv_F = {"glMultiTexCoord3sv",glMultiTexCoord3sv,&_glMultiTexCoord3sv_1,NULL};

	VPL_Parameter _glMultiTexCoord3s_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord3s_3 = { kIntType,2,NULL,0,0,&_glMultiTexCoord3s_4};
	VPL_Parameter _glMultiTexCoord3s_2 = { kIntType,2,NULL,0,0,&_glMultiTexCoord3s_3};
	VPL_Parameter _glMultiTexCoord3s_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3s_2};
	VPL_ExtProcedure _glMultiTexCoord3s_F = {"glMultiTexCoord3s",glMultiTexCoord3s,&_glMultiTexCoord3s_1,NULL};

	VPL_Parameter _glMultiTexCoord3iv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMultiTexCoord3iv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3iv_2};
	VPL_ExtProcedure _glMultiTexCoord3iv_F = {"glMultiTexCoord3iv",glMultiTexCoord3iv,&_glMultiTexCoord3iv_1,NULL};

	VPL_Parameter _glMultiTexCoord3i_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord3i_3 = { kIntType,4,NULL,0,0,&_glMultiTexCoord3i_4};
	VPL_Parameter _glMultiTexCoord3i_2 = { kIntType,4,NULL,0,0,&_glMultiTexCoord3i_3};
	VPL_Parameter _glMultiTexCoord3i_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3i_2};
	VPL_ExtProcedure _glMultiTexCoord3i_F = {"glMultiTexCoord3i",glMultiTexCoord3i,&_glMultiTexCoord3i_1,NULL};

	VPL_Parameter _glMultiTexCoord3fv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMultiTexCoord3fv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3fv_2};
	VPL_ExtProcedure _glMultiTexCoord3fv_F = {"glMultiTexCoord3fv",glMultiTexCoord3fv,&_glMultiTexCoord3fv_1,NULL};

	VPL_Parameter _glMultiTexCoord3f_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord3f_3 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord3f_4};
	VPL_Parameter _glMultiTexCoord3f_2 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord3f_3};
	VPL_Parameter _glMultiTexCoord3f_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3f_2};
	VPL_ExtProcedure _glMultiTexCoord3f_F = {"glMultiTexCoord3f",glMultiTexCoord3f,&_glMultiTexCoord3f_1,NULL};

	VPL_Parameter _glMultiTexCoord3dv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMultiTexCoord3dv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3dv_2};
	VPL_ExtProcedure _glMultiTexCoord3dv_F = {"glMultiTexCoord3dv",glMultiTexCoord3dv,&_glMultiTexCoord3dv_1,NULL};

	VPL_Parameter _glMultiTexCoord3d_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord3d_3 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord3d_4};
	VPL_Parameter _glMultiTexCoord3d_2 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord3d_3};
	VPL_Parameter _glMultiTexCoord3d_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3d_2};
	VPL_ExtProcedure _glMultiTexCoord3d_F = {"glMultiTexCoord3d",glMultiTexCoord3d,&_glMultiTexCoord3d_1,NULL};

	VPL_Parameter _glMultiTexCoord2sv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glMultiTexCoord2sv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2sv_2};
	VPL_ExtProcedure _glMultiTexCoord2sv_F = {"glMultiTexCoord2sv",glMultiTexCoord2sv,&_glMultiTexCoord2sv_1,NULL};

	VPL_Parameter _glMultiTexCoord2s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord2s_2 = { kIntType,2,NULL,0,0,&_glMultiTexCoord2s_3};
	VPL_Parameter _glMultiTexCoord2s_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2s_2};
	VPL_ExtProcedure _glMultiTexCoord2s_F = {"glMultiTexCoord2s",glMultiTexCoord2s,&_glMultiTexCoord2s_1,NULL};

	VPL_Parameter _glMultiTexCoord2iv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMultiTexCoord2iv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2iv_2};
	VPL_ExtProcedure _glMultiTexCoord2iv_F = {"glMultiTexCoord2iv",glMultiTexCoord2iv,&_glMultiTexCoord2iv_1,NULL};

	VPL_Parameter _glMultiTexCoord2i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord2i_2 = { kIntType,4,NULL,0,0,&_glMultiTexCoord2i_3};
	VPL_Parameter _glMultiTexCoord2i_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2i_2};
	VPL_ExtProcedure _glMultiTexCoord2i_F = {"glMultiTexCoord2i",glMultiTexCoord2i,&_glMultiTexCoord2i_1,NULL};

	VPL_Parameter _glMultiTexCoord2fv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMultiTexCoord2fv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2fv_2};
	VPL_ExtProcedure _glMultiTexCoord2fv_F = {"glMultiTexCoord2fv",glMultiTexCoord2fv,&_glMultiTexCoord2fv_1,NULL};

	VPL_Parameter _glMultiTexCoord2f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord2f_2 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord2f_3};
	VPL_Parameter _glMultiTexCoord2f_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2f_2};
	VPL_ExtProcedure _glMultiTexCoord2f_F = {"glMultiTexCoord2f",glMultiTexCoord2f,&_glMultiTexCoord2f_1,NULL};

	VPL_Parameter _glMultiTexCoord2dv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMultiTexCoord2dv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2dv_2};
	VPL_ExtProcedure _glMultiTexCoord2dv_F = {"glMultiTexCoord2dv",glMultiTexCoord2dv,&_glMultiTexCoord2dv_1,NULL};

	VPL_Parameter _glMultiTexCoord2d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord2d_2 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord2d_3};
	VPL_Parameter _glMultiTexCoord2d_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2d_2};
	VPL_ExtProcedure _glMultiTexCoord2d_F = {"glMultiTexCoord2d",glMultiTexCoord2d,&_glMultiTexCoord2d_1,NULL};

	VPL_Parameter _glMultiTexCoord1sv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glMultiTexCoord1sv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1sv_2};
	VPL_ExtProcedure _glMultiTexCoord1sv_F = {"glMultiTexCoord1sv",glMultiTexCoord1sv,&_glMultiTexCoord1sv_1,NULL};

	VPL_Parameter _glMultiTexCoord1s_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord1s_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1s_2};
	VPL_ExtProcedure _glMultiTexCoord1s_F = {"glMultiTexCoord1s",glMultiTexCoord1s,&_glMultiTexCoord1s_1,NULL};

	VPL_Parameter _glMultiTexCoord1iv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMultiTexCoord1iv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1iv_2};
	VPL_ExtProcedure _glMultiTexCoord1iv_F = {"glMultiTexCoord1iv",glMultiTexCoord1iv,&_glMultiTexCoord1iv_1,NULL};

	VPL_Parameter _glMultiTexCoord1i_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord1i_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1i_2};
	VPL_ExtProcedure _glMultiTexCoord1i_F = {"glMultiTexCoord1i",glMultiTexCoord1i,&_glMultiTexCoord1i_1,NULL};

	VPL_Parameter _glMultiTexCoord1fv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMultiTexCoord1fv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1fv_2};
	VPL_ExtProcedure _glMultiTexCoord1fv_F = {"glMultiTexCoord1fv",glMultiTexCoord1fv,&_glMultiTexCoord1fv_1,NULL};

	VPL_Parameter _glMultiTexCoord1f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord1f_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1f_2};
	VPL_ExtProcedure _glMultiTexCoord1f_F = {"glMultiTexCoord1f",glMultiTexCoord1f,&_glMultiTexCoord1f_1,NULL};

	VPL_Parameter _glMultiTexCoord1dv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMultiTexCoord1dv_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1dv_2};
	VPL_ExtProcedure _glMultiTexCoord1dv_F = {"glMultiTexCoord1dv",glMultiTexCoord1dv,&_glMultiTexCoord1dv_1,NULL};

	VPL_Parameter _glMultiTexCoord1d_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord1d_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1d_2};
	VPL_ExtProcedure _glMultiTexCoord1d_F = {"glMultiTexCoord1d",glMultiTexCoord1d,&_glMultiTexCoord1d_1,NULL};

	VPL_Parameter _glClientActiveTexture_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glClientActiveTexture_F = {"glClientActiveTexture",glClientActiveTexture,&_glClientActiveTexture_1,NULL};

	VPL_Parameter _glActiveTexture_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glActiveTexture_F = {"glActiveTexture",glActiveTexture,&_glActiveTexture_1,NULL};

	VPL_Parameter _glGetCompressedTexImage_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetCompressedTexImage_2 = { kIntType,4,NULL,0,0,&_glGetCompressedTexImage_3};
	VPL_Parameter _glGetCompressedTexImage_1 = { kUnsignedType,4,NULL,0,0,&_glGetCompressedTexImage_2};
	VPL_ExtProcedure _glGetCompressedTexImage_F = {"glGetCompressedTexImage",glGetCompressedTexImage,&_glGetCompressedTexImage_1,NULL};

	VPL_Parameter _glCompressedTexSubImage1D_7 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexSubImage1D_6 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage1D_7};
	VPL_Parameter _glCompressedTexSubImage1D_5 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage1D_6};
	VPL_Parameter _glCompressedTexSubImage1D_4 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage1D_5};
	VPL_Parameter _glCompressedTexSubImage1D_3 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage1D_4};
	VPL_Parameter _glCompressedTexSubImage1D_2 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage1D_3};
	VPL_Parameter _glCompressedTexSubImage1D_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage1D_2};
	VPL_ExtProcedure _glCompressedTexSubImage1D_F = {"glCompressedTexSubImage1D",glCompressedTexSubImage1D,&_glCompressedTexSubImage1D_1,NULL};

	VPL_Parameter _glCompressedTexSubImage2D_9 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexSubImage2D_8 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2D_9};
	VPL_Parameter _glCompressedTexSubImage2D_7 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage2D_8};
	VPL_Parameter _glCompressedTexSubImage2D_6 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2D_7};
	VPL_Parameter _glCompressedTexSubImage2D_5 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2D_6};
	VPL_Parameter _glCompressedTexSubImage2D_4 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2D_5};
	VPL_Parameter _glCompressedTexSubImage2D_3 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2D_4};
	VPL_Parameter _glCompressedTexSubImage2D_2 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2D_3};
	VPL_Parameter _glCompressedTexSubImage2D_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage2D_2};
	VPL_ExtProcedure _glCompressedTexSubImage2D_F = {"glCompressedTexSubImage2D",glCompressedTexSubImage2D,&_glCompressedTexSubImage2D_1,NULL};

	VPL_Parameter _glCompressedTexSubImage3D_11 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexSubImage3D_10 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3D_11};
	VPL_Parameter _glCompressedTexSubImage3D_9 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage3D_10};
	VPL_Parameter _glCompressedTexSubImage3D_8 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3D_9};
	VPL_Parameter _glCompressedTexSubImage3D_7 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3D_8};
	VPL_Parameter _glCompressedTexSubImage3D_6 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3D_7};
	VPL_Parameter _glCompressedTexSubImage3D_5 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3D_6};
	VPL_Parameter _glCompressedTexSubImage3D_4 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3D_5};
	VPL_Parameter _glCompressedTexSubImage3D_3 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3D_4};
	VPL_Parameter _glCompressedTexSubImage3D_2 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3D_3};
	VPL_Parameter _glCompressedTexSubImage3D_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage3D_2};
	VPL_ExtProcedure _glCompressedTexSubImage3D_F = {"glCompressedTexSubImage3D",glCompressedTexSubImage3D,&_glCompressedTexSubImage3D_1,NULL};

	VPL_Parameter _glCompressedTexImage1D_7 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexImage1D_6 = { kIntType,4,NULL,0,0,&_glCompressedTexImage1D_7};
	VPL_Parameter _glCompressedTexImage1D_5 = { kIntType,4,NULL,0,0,&_glCompressedTexImage1D_6};
	VPL_Parameter _glCompressedTexImage1D_4 = { kIntType,4,NULL,0,0,&_glCompressedTexImage1D_5};
	VPL_Parameter _glCompressedTexImage1D_3 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage1D_4};
	VPL_Parameter _glCompressedTexImage1D_2 = { kIntType,4,NULL,0,0,&_glCompressedTexImage1D_3};
	VPL_Parameter _glCompressedTexImage1D_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage1D_2};
	VPL_ExtProcedure _glCompressedTexImage1D_F = {"glCompressedTexImage1D",glCompressedTexImage1D,&_glCompressedTexImage1D_1,NULL};

	VPL_Parameter _glCompressedTexImage2D_8 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexImage2D_7 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2D_8};
	VPL_Parameter _glCompressedTexImage2D_6 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2D_7};
	VPL_Parameter _glCompressedTexImage2D_5 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2D_6};
	VPL_Parameter _glCompressedTexImage2D_4 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2D_5};
	VPL_Parameter _glCompressedTexImage2D_3 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage2D_4};
	VPL_Parameter _glCompressedTexImage2D_2 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2D_3};
	VPL_Parameter _glCompressedTexImage2D_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage2D_2};
	VPL_ExtProcedure _glCompressedTexImage2D_F = {"glCompressedTexImage2D",glCompressedTexImage2D,&_glCompressedTexImage2D_1,NULL};

	VPL_Parameter _glCompressedTexImage3D_9 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexImage3D_8 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3D_9};
	VPL_Parameter _glCompressedTexImage3D_7 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3D_8};
	VPL_Parameter _glCompressedTexImage3D_6 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3D_7};
	VPL_Parameter _glCompressedTexImage3D_5 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3D_6};
	VPL_Parameter _glCompressedTexImage3D_4 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3D_5};
	VPL_Parameter _glCompressedTexImage3D_3 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage3D_4};
	VPL_Parameter _glCompressedTexImage3D_2 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3D_3};
	VPL_Parameter _glCompressedTexImage3D_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage3D_2};
	VPL_ExtProcedure _glCompressedTexImage3D_F = {"glCompressedTexImage3D",glCompressedTexImage3D,&_glCompressedTexImage3D_1,NULL};

	VPL_Parameter _glMultTransposeMatrixd_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glMultTransposeMatrixd_F = {"glMultTransposeMatrixd",glMultTransposeMatrixd,&_glMultTransposeMatrixd_1,NULL};

	VPL_Parameter _glMultTransposeMatrixf_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glMultTransposeMatrixf_F = {"glMultTransposeMatrixf",glMultTransposeMatrixf,&_glMultTransposeMatrixf_1,NULL};

	VPL_Parameter _glLoadTransposeMatrixd_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glLoadTransposeMatrixd_F = {"glLoadTransposeMatrixd",glLoadTransposeMatrixd,&_glLoadTransposeMatrixd_1,NULL};

	VPL_Parameter _glLoadTransposeMatrixf_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glLoadTransposeMatrixf_F = {"glLoadTransposeMatrixf",glLoadTransposeMatrixf,&_glLoadTransposeMatrixf_1,NULL};

	VPL_Parameter _glSamplePass_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glSamplePass_F = {"glSamplePass",glSamplePass,&_glSamplePass_1,NULL};

	VPL_Parameter _glSampleCoverage_2 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glSampleCoverage_1 = { kFloatType,4,NULL,0,0,&_glSampleCoverage_2};
	VPL_ExtProcedure _glSampleCoverage_F = {"glSampleCoverage",glSampleCoverage,&_glSampleCoverage_1,NULL};

	VPL_Parameter _glViewport_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glViewport_3 = { kIntType,4,NULL,0,0,&_glViewport_4};
	VPL_Parameter _glViewport_2 = { kIntType,4,NULL,0,0,&_glViewport_3};
	VPL_Parameter _glViewport_1 = { kIntType,4,NULL,0,0,&_glViewport_2};
	VPL_ExtProcedure _glViewport_F = {"glViewport",glViewport,&_glViewport_1,NULL};

	VPL_Parameter _glVertexPointer_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glVertexPointer_3 = { kIntType,4,NULL,0,0,&_glVertexPointer_4};
	VPL_Parameter _glVertexPointer_2 = { kUnsignedType,4,NULL,0,0,&_glVertexPointer_3};
	VPL_Parameter _glVertexPointer_1 = { kIntType,4,NULL,0,0,&_glVertexPointer_2};
	VPL_ExtProcedure _glVertexPointer_F = {"glVertexPointer",glVertexPointer,&_glVertexPointer_1,NULL};

	VPL_Parameter _glVertex4sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glVertex4sv_F = {"glVertex4sv",glVertex4sv,&_glVertex4sv_1,NULL};

	VPL_Parameter _glVertex4s_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertex4s_3 = { kIntType,2,NULL,0,0,&_glVertex4s_4};
	VPL_Parameter _glVertex4s_2 = { kIntType,2,NULL,0,0,&_glVertex4s_3};
	VPL_Parameter _glVertex4s_1 = { kIntType,2,NULL,0,0,&_glVertex4s_2};
	VPL_ExtProcedure _glVertex4s_F = {"glVertex4s",glVertex4s,&_glVertex4s_1,NULL};

	VPL_Parameter _glVertex4iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glVertex4iv_F = {"glVertex4iv",glVertex4iv,&_glVertex4iv_1,NULL};

	VPL_Parameter _glVertex4i_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertex4i_3 = { kIntType,4,NULL,0,0,&_glVertex4i_4};
	VPL_Parameter _glVertex4i_2 = { kIntType,4,NULL,0,0,&_glVertex4i_3};
	VPL_Parameter _glVertex4i_1 = { kIntType,4,NULL,0,0,&_glVertex4i_2};
	VPL_ExtProcedure _glVertex4i_F = {"glVertex4i",glVertex4i,&_glVertex4i_1,NULL};

	VPL_Parameter _glVertex4fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glVertex4fv_F = {"glVertex4fv",glVertex4fv,&_glVertex4fv_1,NULL};

	VPL_Parameter _glVertex4f_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertex4f_3 = { kFloatType,4,NULL,0,0,&_glVertex4f_4};
	VPL_Parameter _glVertex4f_2 = { kFloatType,4,NULL,0,0,&_glVertex4f_3};
	VPL_Parameter _glVertex4f_1 = { kFloatType,4,NULL,0,0,&_glVertex4f_2};
	VPL_ExtProcedure _glVertex4f_F = {"glVertex4f",glVertex4f,&_glVertex4f_1,NULL};

	VPL_Parameter _glVertex4dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glVertex4dv_F = {"glVertex4dv",glVertex4dv,&_glVertex4dv_1,NULL};

	VPL_Parameter _glVertex4d_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertex4d_3 = { kFloatType,8,NULL,0,0,&_glVertex4d_4};
	VPL_Parameter _glVertex4d_2 = { kFloatType,8,NULL,0,0,&_glVertex4d_3};
	VPL_Parameter _glVertex4d_1 = { kFloatType,8,NULL,0,0,&_glVertex4d_2};
	VPL_ExtProcedure _glVertex4d_F = {"glVertex4d",glVertex4d,&_glVertex4d_1,NULL};

	VPL_Parameter _glVertex3sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glVertex3sv_F = {"glVertex3sv",glVertex3sv,&_glVertex3sv_1,NULL};

	VPL_Parameter _glVertex3s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertex3s_2 = { kIntType,2,NULL,0,0,&_glVertex3s_3};
	VPL_Parameter _glVertex3s_1 = { kIntType,2,NULL,0,0,&_glVertex3s_2};
	VPL_ExtProcedure _glVertex3s_F = {"glVertex3s",glVertex3s,&_glVertex3s_1,NULL};

	VPL_Parameter _glVertex3iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glVertex3iv_F = {"glVertex3iv",glVertex3iv,&_glVertex3iv_1,NULL};

	VPL_Parameter _glVertex3i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertex3i_2 = { kIntType,4,NULL,0,0,&_glVertex3i_3};
	VPL_Parameter _glVertex3i_1 = { kIntType,4,NULL,0,0,&_glVertex3i_2};
	VPL_ExtProcedure _glVertex3i_F = {"glVertex3i",glVertex3i,&_glVertex3i_1,NULL};

	VPL_Parameter _glVertex3fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glVertex3fv_F = {"glVertex3fv",glVertex3fv,&_glVertex3fv_1,NULL};

	VPL_Parameter _glVertex3f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertex3f_2 = { kFloatType,4,NULL,0,0,&_glVertex3f_3};
	VPL_Parameter _glVertex3f_1 = { kFloatType,4,NULL,0,0,&_glVertex3f_2};
	VPL_ExtProcedure _glVertex3f_F = {"glVertex3f",glVertex3f,&_glVertex3f_1,NULL};

	VPL_Parameter _glVertex3dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glVertex3dv_F = {"glVertex3dv",glVertex3dv,&_glVertex3dv_1,NULL};

	VPL_Parameter _glVertex3d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertex3d_2 = { kFloatType,8,NULL,0,0,&_glVertex3d_3};
	VPL_Parameter _glVertex3d_1 = { kFloatType,8,NULL,0,0,&_glVertex3d_2};
	VPL_ExtProcedure _glVertex3d_F = {"glVertex3d",glVertex3d,&_glVertex3d_1,NULL};

	VPL_Parameter _glVertex2sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glVertex2sv_F = {"glVertex2sv",glVertex2sv,&_glVertex2sv_1,NULL};

	VPL_Parameter _glVertex2s_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertex2s_1 = { kIntType,2,NULL,0,0,&_glVertex2s_2};
	VPL_ExtProcedure _glVertex2s_F = {"glVertex2s",glVertex2s,&_glVertex2s_1,NULL};

	VPL_Parameter _glVertex2iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glVertex2iv_F = {"glVertex2iv",glVertex2iv,&_glVertex2iv_1,NULL};

	VPL_Parameter _glVertex2i_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertex2i_1 = { kIntType,4,NULL,0,0,&_glVertex2i_2};
	VPL_ExtProcedure _glVertex2i_F = {"glVertex2i",glVertex2i,&_glVertex2i_1,NULL};

	VPL_Parameter _glVertex2fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glVertex2fv_F = {"glVertex2fv",glVertex2fv,&_glVertex2fv_1,NULL};

	VPL_Parameter _glVertex2f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertex2f_1 = { kFloatType,4,NULL,0,0,&_glVertex2f_2};
	VPL_ExtProcedure _glVertex2f_F = {"glVertex2f",glVertex2f,&_glVertex2f_1,NULL};

	VPL_Parameter _glVertex2dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glVertex2dv_F = {"glVertex2dv",glVertex2dv,&_glVertex2dv_1,NULL};

	VPL_Parameter _glVertex2d_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertex2d_1 = { kFloatType,8,NULL,0,0,&_glVertex2d_2};
	VPL_ExtProcedure _glVertex2d_F = {"glVertex2d",glVertex2d,&_glVertex2d_1,NULL};

	VPL_Parameter _glTranslatef_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glTranslatef_2 = { kFloatType,4,NULL,0,0,&_glTranslatef_3};
	VPL_Parameter _glTranslatef_1 = { kFloatType,4,NULL,0,0,&_glTranslatef_2};
	VPL_ExtProcedure _glTranslatef_F = {"glTranslatef",glTranslatef,&_glTranslatef_1,NULL};

	VPL_Parameter _glTranslated_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glTranslated_2 = { kFloatType,8,NULL,0,0,&_glTranslated_3};
	VPL_Parameter _glTranslated_1 = { kFloatType,8,NULL,0,0,&_glTranslated_2};
	VPL_ExtProcedure _glTranslated_F = {"glTranslated",glTranslated,&_glTranslated_1,NULL};

	VPL_Parameter _glTexSubImage3D_11 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glTexSubImage3D_10 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage3D_11};
	VPL_Parameter _glTexSubImage3D_9 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage3D_10};
	VPL_Parameter _glTexSubImage3D_8 = { kIntType,4,NULL,0,0,&_glTexSubImage3D_9};
	VPL_Parameter _glTexSubImage3D_7 = { kIntType,4,NULL,0,0,&_glTexSubImage3D_8};
	VPL_Parameter _glTexSubImage3D_6 = { kIntType,4,NULL,0,0,&_glTexSubImage3D_7};
	VPL_Parameter _glTexSubImage3D_5 = { kIntType,4,NULL,0,0,&_glTexSubImage3D_6};
	VPL_Parameter _glTexSubImage3D_4 = { kIntType,4,NULL,0,0,&_glTexSubImage3D_5};
	VPL_Parameter _glTexSubImage3D_3 = { kIntType,4,NULL,0,0,&_glTexSubImage3D_4};
	VPL_Parameter _glTexSubImage3D_2 = { kIntType,4,NULL,0,0,&_glTexSubImage3D_3};
	VPL_Parameter _glTexSubImage3D_1 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage3D_2};
	VPL_ExtProcedure _glTexSubImage3D_F = {"glTexSubImage3D",glTexSubImage3D,&_glTexSubImage3D_1,NULL};

	VPL_Parameter _glTexSubImage2D_9 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glTexSubImage2D_8 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage2D_9};
	VPL_Parameter _glTexSubImage2D_7 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage2D_8};
	VPL_Parameter _glTexSubImage2D_6 = { kIntType,4,NULL,0,0,&_glTexSubImage2D_7};
	VPL_Parameter _glTexSubImage2D_5 = { kIntType,4,NULL,0,0,&_glTexSubImage2D_6};
	VPL_Parameter _glTexSubImage2D_4 = { kIntType,4,NULL,0,0,&_glTexSubImage2D_5};
	VPL_Parameter _glTexSubImage2D_3 = { kIntType,4,NULL,0,0,&_glTexSubImage2D_4};
	VPL_Parameter _glTexSubImage2D_2 = { kIntType,4,NULL,0,0,&_glTexSubImage2D_3};
	VPL_Parameter _glTexSubImage2D_1 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage2D_2};
	VPL_ExtProcedure _glTexSubImage2D_F = {"glTexSubImage2D",glTexSubImage2D,&_glTexSubImage2D_1,NULL};

	VPL_Parameter _glTexSubImage1D_7 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glTexSubImage1D_6 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage1D_7};
	VPL_Parameter _glTexSubImage1D_5 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage1D_6};
	VPL_Parameter _glTexSubImage1D_4 = { kIntType,4,NULL,0,0,&_glTexSubImage1D_5};
	VPL_Parameter _glTexSubImage1D_3 = { kIntType,4,NULL,0,0,&_glTexSubImage1D_4};
	VPL_Parameter _glTexSubImage1D_2 = { kIntType,4,NULL,0,0,&_glTexSubImage1D_3};
	VPL_Parameter _glTexSubImage1D_1 = { kUnsignedType,4,NULL,0,0,&_glTexSubImage1D_2};
	VPL_ExtProcedure _glTexSubImage1D_F = {"glTexSubImage1D",glTexSubImage1D,&_glTexSubImage1D_1,NULL};

	VPL_Parameter _glTexParameteriv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glTexParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glTexParameteriv_3};
	VPL_Parameter _glTexParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glTexParameteriv_2};
	VPL_ExtProcedure _glTexParameteriv_F = {"glTexParameteriv",glTexParameteriv,&_glTexParameteriv_1,NULL};

	VPL_Parameter _glTexParameteri_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexParameteri_2 = { kUnsignedType,4,NULL,0,0,&_glTexParameteri_3};
	VPL_Parameter _glTexParameteri_1 = { kUnsignedType,4,NULL,0,0,&_glTexParameteri_2};
	VPL_ExtProcedure _glTexParameteri_F = {"glTexParameteri",glTexParameteri,&_glTexParameteri_1,NULL};

	VPL_Parameter _glTexParameterfv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glTexParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glTexParameterfv_3};
	VPL_Parameter _glTexParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glTexParameterfv_2};
	VPL_ExtProcedure _glTexParameterfv_F = {"glTexParameterfv",glTexParameterfv,&_glTexParameterfv_1,NULL};

	VPL_Parameter _glTexParameterf_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexParameterf_2 = { kUnsignedType,4,NULL,0,0,&_glTexParameterf_3};
	VPL_Parameter _glTexParameterf_1 = { kUnsignedType,4,NULL,0,0,&_glTexParameterf_2};
	VPL_ExtProcedure _glTexParameterf_F = {"glTexParameterf",glTexParameterf,&_glTexParameterf_1,NULL};

	VPL_Parameter _glTexImage3D_10 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glTexImage3D_9 = { kUnsignedType,4,NULL,0,0,&_glTexImage3D_10};
	VPL_Parameter _glTexImage3D_8 = { kUnsignedType,4,NULL,0,0,&_glTexImage3D_9};
	VPL_Parameter _glTexImage3D_7 = { kIntType,4,NULL,0,0,&_glTexImage3D_8};
	VPL_Parameter _glTexImage3D_6 = { kIntType,4,NULL,0,0,&_glTexImage3D_7};
	VPL_Parameter _glTexImage3D_5 = { kIntType,4,NULL,0,0,&_glTexImage3D_6};
	VPL_Parameter _glTexImage3D_4 = { kIntType,4,NULL,0,0,&_glTexImage3D_5};
	VPL_Parameter _glTexImage3D_3 = { kUnsignedType,4,NULL,0,0,&_glTexImage3D_4};
	VPL_Parameter _glTexImage3D_2 = { kIntType,4,NULL,0,0,&_glTexImage3D_3};
	VPL_Parameter _glTexImage3D_1 = { kUnsignedType,4,NULL,0,0,&_glTexImage3D_2};
	VPL_ExtProcedure _glTexImage3D_F = {"glTexImage3D",glTexImage3D,&_glTexImage3D_1,NULL};

	VPL_Parameter _glTexImage2D_9 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glTexImage2D_8 = { kUnsignedType,4,NULL,0,0,&_glTexImage2D_9};
	VPL_Parameter _glTexImage2D_7 = { kUnsignedType,4,NULL,0,0,&_glTexImage2D_8};
	VPL_Parameter _glTexImage2D_6 = { kIntType,4,NULL,0,0,&_glTexImage2D_7};
	VPL_Parameter _glTexImage2D_5 = { kIntType,4,NULL,0,0,&_glTexImage2D_6};
	VPL_Parameter _glTexImage2D_4 = { kIntType,4,NULL,0,0,&_glTexImage2D_5};
	VPL_Parameter _glTexImage2D_3 = { kUnsignedType,4,NULL,0,0,&_glTexImage2D_4};
	VPL_Parameter _glTexImage2D_2 = { kIntType,4,NULL,0,0,&_glTexImage2D_3};
	VPL_Parameter _glTexImage2D_1 = { kUnsignedType,4,NULL,0,0,&_glTexImage2D_2};
	VPL_ExtProcedure _glTexImage2D_F = {"glTexImage2D",glTexImage2D,&_glTexImage2D_1,NULL};

	VPL_Parameter _glTexImage1D_8 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glTexImage1D_7 = { kUnsignedType,4,NULL,0,0,&_glTexImage1D_8};
	VPL_Parameter _glTexImage1D_6 = { kUnsignedType,4,NULL,0,0,&_glTexImage1D_7};
	VPL_Parameter _glTexImage1D_5 = { kIntType,4,NULL,0,0,&_glTexImage1D_6};
	VPL_Parameter _glTexImage1D_4 = { kIntType,4,NULL,0,0,&_glTexImage1D_5};
	VPL_Parameter _glTexImage1D_3 = { kUnsignedType,4,NULL,0,0,&_glTexImage1D_4};
	VPL_Parameter _glTexImage1D_2 = { kIntType,4,NULL,0,0,&_glTexImage1D_3};
	VPL_Parameter _glTexImage1D_1 = { kUnsignedType,4,NULL,0,0,&_glTexImage1D_2};
	VPL_ExtProcedure _glTexImage1D_F = {"glTexImage1D",glTexImage1D,&_glTexImage1D_1,NULL};

	VPL_Parameter _glTexGeniv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glTexGeniv_2 = { kUnsignedType,4,NULL,0,0,&_glTexGeniv_3};
	VPL_Parameter _glTexGeniv_1 = { kUnsignedType,4,NULL,0,0,&_glTexGeniv_2};
	VPL_ExtProcedure _glTexGeniv_F = {"glTexGeniv",glTexGeniv,&_glTexGeniv_1,NULL};

	VPL_Parameter _glTexGeni_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexGeni_2 = { kUnsignedType,4,NULL,0,0,&_glTexGeni_3};
	VPL_Parameter _glTexGeni_1 = { kUnsignedType,4,NULL,0,0,&_glTexGeni_2};
	VPL_ExtProcedure _glTexGeni_F = {"glTexGeni",glTexGeni,&_glTexGeni_1,NULL};

	VPL_Parameter _glTexGenfv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glTexGenfv_2 = { kUnsignedType,4,NULL,0,0,&_glTexGenfv_3};
	VPL_Parameter _glTexGenfv_1 = { kUnsignedType,4,NULL,0,0,&_glTexGenfv_2};
	VPL_ExtProcedure _glTexGenfv_F = {"glTexGenfv",glTexGenfv,&_glTexGenfv_1,NULL};

	VPL_Parameter _glTexGenf_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexGenf_2 = { kUnsignedType,4,NULL,0,0,&_glTexGenf_3};
	VPL_Parameter _glTexGenf_1 = { kUnsignedType,4,NULL,0,0,&_glTexGenf_2};
	VPL_ExtProcedure _glTexGenf_F = {"glTexGenf",glTexGenf,&_glTexGenf_1,NULL};

	VPL_Parameter _glTexGendv_3 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glTexGendv_2 = { kUnsignedType,4,NULL,0,0,&_glTexGendv_3};
	VPL_Parameter _glTexGendv_1 = { kUnsignedType,4,NULL,0,0,&_glTexGendv_2};
	VPL_ExtProcedure _glTexGendv_F = {"glTexGendv",glTexGendv,&_glTexGendv_1,NULL};

	VPL_Parameter _glTexGend_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glTexGend_2 = { kUnsignedType,4,NULL,0,0,&_glTexGend_3};
	VPL_Parameter _glTexGend_1 = { kUnsignedType,4,NULL,0,0,&_glTexGend_2};
	VPL_ExtProcedure _glTexGend_F = {"glTexGend",glTexGend,&_glTexGend_1,NULL};

	VPL_Parameter _glTexEnviv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glTexEnviv_2 = { kUnsignedType,4,NULL,0,0,&_glTexEnviv_3};
	VPL_Parameter _glTexEnviv_1 = { kUnsignedType,4,NULL,0,0,&_glTexEnviv_2};
	VPL_ExtProcedure _glTexEnviv_F = {"glTexEnviv",glTexEnviv,&_glTexEnviv_1,NULL};

	VPL_Parameter _glTexEnvi_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexEnvi_2 = { kUnsignedType,4,NULL,0,0,&_glTexEnvi_3};
	VPL_Parameter _glTexEnvi_1 = { kUnsignedType,4,NULL,0,0,&_glTexEnvi_2};
	VPL_ExtProcedure _glTexEnvi_F = {"glTexEnvi",glTexEnvi,&_glTexEnvi_1,NULL};

	VPL_Parameter _glTexEnvfv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glTexEnvfv_2 = { kUnsignedType,4,NULL,0,0,&_glTexEnvfv_3};
	VPL_Parameter _glTexEnvfv_1 = { kUnsignedType,4,NULL,0,0,&_glTexEnvfv_2};
	VPL_ExtProcedure _glTexEnvfv_F = {"glTexEnvfv",glTexEnvfv,&_glTexEnvfv_1,NULL};

	VPL_Parameter _glTexEnvf_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexEnvf_2 = { kUnsignedType,4,NULL,0,0,&_glTexEnvf_3};
	VPL_Parameter _glTexEnvf_1 = { kUnsignedType,4,NULL,0,0,&_glTexEnvf_2};
	VPL_ExtProcedure _glTexEnvf_F = {"glTexEnvf",glTexEnvf,&_glTexEnvf_1,NULL};

	VPL_Parameter _glTexCoordPointer_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glTexCoordPointer_3 = { kIntType,4,NULL,0,0,&_glTexCoordPointer_4};
	VPL_Parameter _glTexCoordPointer_2 = { kUnsignedType,4,NULL,0,0,&_glTexCoordPointer_3};
	VPL_Parameter _glTexCoordPointer_1 = { kIntType,4,NULL,0,0,&_glTexCoordPointer_2};
	VPL_ExtProcedure _glTexCoordPointer_F = {"glTexCoordPointer",glTexCoordPointer,&_glTexCoordPointer_1,NULL};

	VPL_Parameter _glTexCoord4sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glTexCoord4sv_F = {"glTexCoord4sv",glTexCoord4sv,&_glTexCoord4sv_1,NULL};

	VPL_Parameter _glTexCoord4s_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord4s_3 = { kIntType,2,NULL,0,0,&_glTexCoord4s_4};
	VPL_Parameter _glTexCoord4s_2 = { kIntType,2,NULL,0,0,&_glTexCoord4s_3};
	VPL_Parameter _glTexCoord4s_1 = { kIntType,2,NULL,0,0,&_glTexCoord4s_2};
	VPL_ExtProcedure _glTexCoord4s_F = {"glTexCoord4s",glTexCoord4s,&_glTexCoord4s_1,NULL};

	VPL_Parameter _glTexCoord4iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glTexCoord4iv_F = {"glTexCoord4iv",glTexCoord4iv,&_glTexCoord4iv_1,NULL};

	VPL_Parameter _glTexCoord4i_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord4i_3 = { kIntType,4,NULL,0,0,&_glTexCoord4i_4};
	VPL_Parameter _glTexCoord4i_2 = { kIntType,4,NULL,0,0,&_glTexCoord4i_3};
	VPL_Parameter _glTexCoord4i_1 = { kIntType,4,NULL,0,0,&_glTexCoord4i_2};
	VPL_ExtProcedure _glTexCoord4i_F = {"glTexCoord4i",glTexCoord4i,&_glTexCoord4i_1,NULL};

	VPL_Parameter _glTexCoord4fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glTexCoord4fv_F = {"glTexCoord4fv",glTexCoord4fv,&_glTexCoord4fv_1,NULL};

	VPL_Parameter _glTexCoord4f_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord4f_3 = { kFloatType,4,NULL,0,0,&_glTexCoord4f_4};
	VPL_Parameter _glTexCoord4f_2 = { kFloatType,4,NULL,0,0,&_glTexCoord4f_3};
	VPL_Parameter _glTexCoord4f_1 = { kFloatType,4,NULL,0,0,&_glTexCoord4f_2};
	VPL_ExtProcedure _glTexCoord4f_F = {"glTexCoord4f",glTexCoord4f,&_glTexCoord4f_1,NULL};

	VPL_Parameter _glTexCoord4dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glTexCoord4dv_F = {"glTexCoord4dv",glTexCoord4dv,&_glTexCoord4dv_1,NULL};

	VPL_Parameter _glTexCoord4d_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord4d_3 = { kFloatType,8,NULL,0,0,&_glTexCoord4d_4};
	VPL_Parameter _glTexCoord4d_2 = { kFloatType,8,NULL,0,0,&_glTexCoord4d_3};
	VPL_Parameter _glTexCoord4d_1 = { kFloatType,8,NULL,0,0,&_glTexCoord4d_2};
	VPL_ExtProcedure _glTexCoord4d_F = {"glTexCoord4d",glTexCoord4d,&_glTexCoord4d_1,NULL};

	VPL_Parameter _glTexCoord3sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glTexCoord3sv_F = {"glTexCoord3sv",glTexCoord3sv,&_glTexCoord3sv_1,NULL};

	VPL_Parameter _glTexCoord3s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord3s_2 = { kIntType,2,NULL,0,0,&_glTexCoord3s_3};
	VPL_Parameter _glTexCoord3s_1 = { kIntType,2,NULL,0,0,&_glTexCoord3s_2};
	VPL_ExtProcedure _glTexCoord3s_F = {"glTexCoord3s",glTexCoord3s,&_glTexCoord3s_1,NULL};

	VPL_Parameter _glTexCoord3iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glTexCoord3iv_F = {"glTexCoord3iv",glTexCoord3iv,&_glTexCoord3iv_1,NULL};

	VPL_Parameter _glTexCoord3i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord3i_2 = { kIntType,4,NULL,0,0,&_glTexCoord3i_3};
	VPL_Parameter _glTexCoord3i_1 = { kIntType,4,NULL,0,0,&_glTexCoord3i_2};
	VPL_ExtProcedure _glTexCoord3i_F = {"glTexCoord3i",glTexCoord3i,&_glTexCoord3i_1,NULL};

	VPL_Parameter _glTexCoord3fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glTexCoord3fv_F = {"glTexCoord3fv",glTexCoord3fv,&_glTexCoord3fv_1,NULL};

	VPL_Parameter _glTexCoord3f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord3f_2 = { kFloatType,4,NULL,0,0,&_glTexCoord3f_3};
	VPL_Parameter _glTexCoord3f_1 = { kFloatType,4,NULL,0,0,&_glTexCoord3f_2};
	VPL_ExtProcedure _glTexCoord3f_F = {"glTexCoord3f",glTexCoord3f,&_glTexCoord3f_1,NULL};

	VPL_Parameter _glTexCoord3dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glTexCoord3dv_F = {"glTexCoord3dv",glTexCoord3dv,&_glTexCoord3dv_1,NULL};

	VPL_Parameter _glTexCoord3d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord3d_2 = { kFloatType,8,NULL,0,0,&_glTexCoord3d_3};
	VPL_Parameter _glTexCoord3d_1 = { kFloatType,8,NULL,0,0,&_glTexCoord3d_2};
	VPL_ExtProcedure _glTexCoord3d_F = {"glTexCoord3d",glTexCoord3d,&_glTexCoord3d_1,NULL};

	VPL_Parameter _glTexCoord2sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glTexCoord2sv_F = {"glTexCoord2sv",glTexCoord2sv,&_glTexCoord2sv_1,NULL};

	VPL_Parameter _glTexCoord2s_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord2s_1 = { kIntType,2,NULL,0,0,&_glTexCoord2s_2};
	VPL_ExtProcedure _glTexCoord2s_F = {"glTexCoord2s",glTexCoord2s,&_glTexCoord2s_1,NULL};

	VPL_Parameter _glTexCoord2iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glTexCoord2iv_F = {"glTexCoord2iv",glTexCoord2iv,&_glTexCoord2iv_1,NULL};

	VPL_Parameter _glTexCoord2i_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord2i_1 = { kIntType,4,NULL,0,0,&_glTexCoord2i_2};
	VPL_ExtProcedure _glTexCoord2i_F = {"glTexCoord2i",glTexCoord2i,&_glTexCoord2i_1,NULL};

	VPL_Parameter _glTexCoord2fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glTexCoord2fv_F = {"glTexCoord2fv",glTexCoord2fv,&_glTexCoord2fv_1,NULL};

	VPL_Parameter _glTexCoord2f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord2f_1 = { kFloatType,4,NULL,0,0,&_glTexCoord2f_2};
	VPL_ExtProcedure _glTexCoord2f_F = {"glTexCoord2f",glTexCoord2f,&_glTexCoord2f_1,NULL};

	VPL_Parameter _glTexCoord2dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glTexCoord2dv_F = {"glTexCoord2dv",glTexCoord2dv,&_glTexCoord2dv_1,NULL};

	VPL_Parameter _glTexCoord2d_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glTexCoord2d_1 = { kFloatType,8,NULL,0,0,&_glTexCoord2d_2};
	VPL_ExtProcedure _glTexCoord2d_F = {"glTexCoord2d",glTexCoord2d,&_glTexCoord2d_1,NULL};

	VPL_Parameter _glTexCoord1sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glTexCoord1sv_F = {"glTexCoord1sv",glTexCoord1sv,&_glTexCoord1sv_1,NULL};

	VPL_Parameter _glTexCoord1s_1 = { kIntType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _glTexCoord1s_F = {"glTexCoord1s",glTexCoord1s,&_glTexCoord1s_1,NULL};

	VPL_Parameter _glTexCoord1iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glTexCoord1iv_F = {"glTexCoord1iv",glTexCoord1iv,&_glTexCoord1iv_1,NULL};

	VPL_Parameter _glTexCoord1i_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glTexCoord1i_F = {"glTexCoord1i",glTexCoord1i,&_glTexCoord1i_1,NULL};

	VPL_Parameter _glTexCoord1fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glTexCoord1fv_F = {"glTexCoord1fv",glTexCoord1fv,&_glTexCoord1fv_1,NULL};

	VPL_Parameter _glTexCoord1f_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glTexCoord1f_F = {"glTexCoord1f",glTexCoord1f,&_glTexCoord1f_1,NULL};

	VPL_Parameter _glTexCoord1dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glTexCoord1dv_F = {"glTexCoord1dv",glTexCoord1dv,&_glTexCoord1dv_1,NULL};

	VPL_Parameter _glTexCoord1d_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glTexCoord1d_F = {"glTexCoord1d",glTexCoord1d,&_glTexCoord1d_1,NULL};

	VPL_Parameter _glStencilOp_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glStencilOp_2 = { kUnsignedType,4,NULL,0,0,&_glStencilOp_3};
	VPL_Parameter _glStencilOp_1 = { kUnsignedType,4,NULL,0,0,&_glStencilOp_2};
	VPL_ExtProcedure _glStencilOp_F = {"glStencilOp",glStencilOp,&_glStencilOp_1,NULL};

	VPL_Parameter _glStencilMask_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glStencilMask_F = {"glStencilMask",glStencilMask,&_glStencilMask_1,NULL};

	VPL_Parameter _glStencilFunc_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glStencilFunc_2 = { kIntType,4,NULL,0,0,&_glStencilFunc_3};
	VPL_Parameter _glStencilFunc_1 = { kUnsignedType,4,NULL,0,0,&_glStencilFunc_2};
	VPL_ExtProcedure _glStencilFunc_F = {"glStencilFunc",glStencilFunc,&_glStencilFunc_1,NULL};

	VPL_Parameter _glShadeModel_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glShadeModel_F = {"glShadeModel",glShadeModel,&_glShadeModel_1,NULL};

	VPL_Parameter _glSeparableFilter2D_8 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glSeparableFilter2D_7 = { kPointerType,0,"void",1,1,&_glSeparableFilter2D_8};
	VPL_Parameter _glSeparableFilter2D_6 = { kUnsignedType,4,NULL,0,0,&_glSeparableFilter2D_7};
	VPL_Parameter _glSeparableFilter2D_5 = { kUnsignedType,4,NULL,0,0,&_glSeparableFilter2D_6};
	VPL_Parameter _glSeparableFilter2D_4 = { kIntType,4,NULL,0,0,&_glSeparableFilter2D_5};
	VPL_Parameter _glSeparableFilter2D_3 = { kIntType,4,NULL,0,0,&_glSeparableFilter2D_4};
	VPL_Parameter _glSeparableFilter2D_2 = { kUnsignedType,4,NULL,0,0,&_glSeparableFilter2D_3};
	VPL_Parameter _glSeparableFilter2D_1 = { kUnsignedType,4,NULL,0,0,&_glSeparableFilter2D_2};
	VPL_ExtProcedure _glSeparableFilter2D_F = {"glSeparableFilter2D",glSeparableFilter2D,&_glSeparableFilter2D_1,NULL};

	VPL_Parameter _glSelectBuffer_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glSelectBuffer_1 = { kIntType,4,NULL,0,0,&_glSelectBuffer_2};
	VPL_ExtProcedure _glSelectBuffer_F = {"glSelectBuffer",glSelectBuffer,&_glSelectBuffer_1,NULL};

	VPL_Parameter _glScissor_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glScissor_3 = { kIntType,4,NULL,0,0,&_glScissor_4};
	VPL_Parameter _glScissor_2 = { kIntType,4,NULL,0,0,&_glScissor_3};
	VPL_Parameter _glScissor_1 = { kIntType,4,NULL,0,0,&_glScissor_2};
	VPL_ExtProcedure _glScissor_F = {"glScissor",glScissor,&_glScissor_1,NULL};

	VPL_Parameter _glScalef_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glScalef_2 = { kFloatType,4,NULL,0,0,&_glScalef_3};
	VPL_Parameter _glScalef_1 = { kFloatType,4,NULL,0,0,&_glScalef_2};
	VPL_ExtProcedure _glScalef_F = {"glScalef",glScalef,&_glScalef_1,NULL};

	VPL_Parameter _glScaled_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glScaled_2 = { kFloatType,8,NULL,0,0,&_glScaled_3};
	VPL_Parameter _glScaled_1 = { kFloatType,8,NULL,0,0,&_glScaled_2};
	VPL_ExtProcedure _glScaled_F = {"glScaled",glScaled,&_glScaled_1,NULL};

	VPL_Parameter _glRotatef_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glRotatef_3 = { kFloatType,4,NULL,0,0,&_glRotatef_4};
	VPL_Parameter _glRotatef_2 = { kFloatType,4,NULL,0,0,&_glRotatef_3};
	VPL_Parameter _glRotatef_1 = { kFloatType,4,NULL,0,0,&_glRotatef_2};
	VPL_ExtProcedure _glRotatef_F = {"glRotatef",glRotatef,&_glRotatef_1,NULL};

	VPL_Parameter _glRotated_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glRotated_3 = { kFloatType,8,NULL,0,0,&_glRotated_4};
	VPL_Parameter _glRotated_2 = { kFloatType,8,NULL,0,0,&_glRotated_3};
	VPL_Parameter _glRotated_1 = { kFloatType,8,NULL,0,0,&_glRotated_2};
	VPL_ExtProcedure _glRotated_F = {"glRotated",glRotated,&_glRotated_1,NULL};

	VPL_Parameter _glResetMinmax_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glResetMinmax_F = {"glResetMinmax",glResetMinmax,&_glResetMinmax_1,NULL};

	VPL_Parameter _glResetHistogram_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glResetHistogram_F = {"glResetHistogram",glResetHistogram,&_glResetHistogram_1,NULL};

	VPL_Parameter _glRenderMode_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRenderMode_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glRenderMode_F = {"glRenderMode",glRenderMode,&_glRenderMode_1,&_glRenderMode_R};

	VPL_Parameter _glRectsv_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glRectsv_1 = { kPointerType,2,"short",1,1,&_glRectsv_2};
	VPL_ExtProcedure _glRectsv_F = {"glRectsv",glRectsv,&_glRectsv_1,NULL};

	VPL_Parameter _glRects_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glRects_3 = { kIntType,2,NULL,0,0,&_glRects_4};
	VPL_Parameter _glRects_2 = { kIntType,2,NULL,0,0,&_glRects_3};
	VPL_Parameter _glRects_1 = { kIntType,2,NULL,0,0,&_glRects_2};
	VPL_ExtProcedure _glRects_F = {"glRects",glRects,&_glRects_1,NULL};

	VPL_Parameter _glRectiv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glRectiv_1 = { kPointerType,4,"long int",1,1,&_glRectiv_2};
	VPL_ExtProcedure _glRectiv_F = {"glRectiv",glRectiv,&_glRectiv_1,NULL};

	VPL_Parameter _glRecti_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRecti_3 = { kIntType,4,NULL,0,0,&_glRecti_4};
	VPL_Parameter _glRecti_2 = { kIntType,4,NULL,0,0,&_glRecti_3};
	VPL_Parameter _glRecti_1 = { kIntType,4,NULL,0,0,&_glRecti_2};
	VPL_ExtProcedure _glRecti_F = {"glRecti",glRecti,&_glRecti_1,NULL};

	VPL_Parameter _glRectfv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glRectfv_1 = { kPointerType,4,"float",1,1,&_glRectfv_2};
	VPL_ExtProcedure _glRectfv_F = {"glRectfv",glRectfv,&_glRectfv_1,NULL};

	VPL_Parameter _glRectf_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glRectf_3 = { kFloatType,4,NULL,0,0,&_glRectf_4};
	VPL_Parameter _glRectf_2 = { kFloatType,4,NULL,0,0,&_glRectf_3};
	VPL_Parameter _glRectf_1 = { kFloatType,4,NULL,0,0,&_glRectf_2};
	VPL_ExtProcedure _glRectf_F = {"glRectf",glRectf,&_glRectf_1,NULL};

	VPL_Parameter _glRectdv_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glRectdv_1 = { kPointerType,8,"double",1,1,&_glRectdv_2};
	VPL_ExtProcedure _glRectdv_F = {"glRectdv",glRectdv,&_glRectdv_1,NULL};

	VPL_Parameter _glRectd_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glRectd_3 = { kFloatType,8,NULL,0,0,&_glRectd_4};
	VPL_Parameter _glRectd_2 = { kFloatType,8,NULL,0,0,&_glRectd_3};
	VPL_Parameter _glRectd_1 = { kFloatType,8,NULL,0,0,&_glRectd_2};
	VPL_ExtProcedure _glRectd_F = {"glRectd",glRectd,&_glRectd_1,NULL};

	VPL_Parameter _glReadPixels_7 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glReadPixels_6 = { kUnsignedType,4,NULL,0,0,&_glReadPixels_7};
	VPL_Parameter _glReadPixels_5 = { kUnsignedType,4,NULL,0,0,&_glReadPixels_6};
	VPL_Parameter _glReadPixels_4 = { kIntType,4,NULL,0,0,&_glReadPixels_5};
	VPL_Parameter _glReadPixels_3 = { kIntType,4,NULL,0,0,&_glReadPixels_4};
	VPL_Parameter _glReadPixels_2 = { kIntType,4,NULL,0,0,&_glReadPixels_3};
	VPL_Parameter _glReadPixels_1 = { kIntType,4,NULL,0,0,&_glReadPixels_2};
	VPL_ExtProcedure _glReadPixels_F = {"glReadPixels",glReadPixels,&_glReadPixels_1,NULL};

	VPL_Parameter _glReadBuffer_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glReadBuffer_F = {"glReadBuffer",glReadBuffer,&_glReadBuffer_1,NULL};

	VPL_Parameter _glRasterPos4sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glRasterPos4sv_F = {"glRasterPos4sv",glRasterPos4sv,&_glRasterPos4sv_1,NULL};

	VPL_Parameter _glRasterPos4s_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos4s_3 = { kIntType,2,NULL,0,0,&_glRasterPos4s_4};
	VPL_Parameter _glRasterPos4s_2 = { kIntType,2,NULL,0,0,&_glRasterPos4s_3};
	VPL_Parameter _glRasterPos4s_1 = { kIntType,2,NULL,0,0,&_glRasterPos4s_2};
	VPL_ExtProcedure _glRasterPos4s_F = {"glRasterPos4s",glRasterPos4s,&_glRasterPos4s_1,NULL};

	VPL_Parameter _glRasterPos4iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glRasterPos4iv_F = {"glRasterPos4iv",glRasterPos4iv,&_glRasterPos4iv_1,NULL};

	VPL_Parameter _glRasterPos4i_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos4i_3 = { kIntType,4,NULL,0,0,&_glRasterPos4i_4};
	VPL_Parameter _glRasterPos4i_2 = { kIntType,4,NULL,0,0,&_glRasterPos4i_3};
	VPL_Parameter _glRasterPos4i_1 = { kIntType,4,NULL,0,0,&_glRasterPos4i_2};
	VPL_ExtProcedure _glRasterPos4i_F = {"glRasterPos4i",glRasterPos4i,&_glRasterPos4i_1,NULL};

	VPL_Parameter _glRasterPos4fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glRasterPos4fv_F = {"glRasterPos4fv",glRasterPos4fv,&_glRasterPos4fv_1,NULL};

	VPL_Parameter _glRasterPos4f_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos4f_3 = { kFloatType,4,NULL,0,0,&_glRasterPos4f_4};
	VPL_Parameter _glRasterPos4f_2 = { kFloatType,4,NULL,0,0,&_glRasterPos4f_3};
	VPL_Parameter _glRasterPos4f_1 = { kFloatType,4,NULL,0,0,&_glRasterPos4f_2};
	VPL_ExtProcedure _glRasterPos4f_F = {"glRasterPos4f",glRasterPos4f,&_glRasterPos4f_1,NULL};

	VPL_Parameter _glRasterPos4dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glRasterPos4dv_F = {"glRasterPos4dv",glRasterPos4dv,&_glRasterPos4dv_1,NULL};

	VPL_Parameter _glRasterPos4d_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos4d_3 = { kFloatType,8,NULL,0,0,&_glRasterPos4d_4};
	VPL_Parameter _glRasterPos4d_2 = { kFloatType,8,NULL,0,0,&_glRasterPos4d_3};
	VPL_Parameter _glRasterPos4d_1 = { kFloatType,8,NULL,0,0,&_glRasterPos4d_2};
	VPL_ExtProcedure _glRasterPos4d_F = {"glRasterPos4d",glRasterPos4d,&_glRasterPos4d_1,NULL};

	VPL_Parameter _glRasterPos3sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glRasterPos3sv_F = {"glRasterPos3sv",glRasterPos3sv,&_glRasterPos3sv_1,NULL};

	VPL_Parameter _glRasterPos3s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos3s_2 = { kIntType,2,NULL,0,0,&_glRasterPos3s_3};
	VPL_Parameter _glRasterPos3s_1 = { kIntType,2,NULL,0,0,&_glRasterPos3s_2};
	VPL_ExtProcedure _glRasterPos3s_F = {"glRasterPos3s",glRasterPos3s,&_glRasterPos3s_1,NULL};

	VPL_Parameter _glRasterPos3iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glRasterPos3iv_F = {"glRasterPos3iv",glRasterPos3iv,&_glRasterPos3iv_1,NULL};

	VPL_Parameter _glRasterPos3i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos3i_2 = { kIntType,4,NULL,0,0,&_glRasterPos3i_3};
	VPL_Parameter _glRasterPos3i_1 = { kIntType,4,NULL,0,0,&_glRasterPos3i_2};
	VPL_ExtProcedure _glRasterPos3i_F = {"glRasterPos3i",glRasterPos3i,&_glRasterPos3i_1,NULL};

	VPL_Parameter _glRasterPos3fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glRasterPos3fv_F = {"glRasterPos3fv",glRasterPos3fv,&_glRasterPos3fv_1,NULL};

	VPL_Parameter _glRasterPos3f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos3f_2 = { kFloatType,4,NULL,0,0,&_glRasterPos3f_3};
	VPL_Parameter _glRasterPos3f_1 = { kFloatType,4,NULL,0,0,&_glRasterPos3f_2};
	VPL_ExtProcedure _glRasterPos3f_F = {"glRasterPos3f",glRasterPos3f,&_glRasterPos3f_1,NULL};

	VPL_Parameter _glRasterPos3dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glRasterPos3dv_F = {"glRasterPos3dv",glRasterPos3dv,&_glRasterPos3dv_1,NULL};

	VPL_Parameter _glRasterPos3d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos3d_2 = { kFloatType,8,NULL,0,0,&_glRasterPos3d_3};
	VPL_Parameter _glRasterPos3d_1 = { kFloatType,8,NULL,0,0,&_glRasterPos3d_2};
	VPL_ExtProcedure _glRasterPos3d_F = {"glRasterPos3d",glRasterPos3d,&_glRasterPos3d_1,NULL};

	VPL_Parameter _glRasterPos2sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glRasterPos2sv_F = {"glRasterPos2sv",glRasterPos2sv,&_glRasterPos2sv_1,NULL};

	VPL_Parameter _glRasterPos2s_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos2s_1 = { kIntType,2,NULL,0,0,&_glRasterPos2s_2};
	VPL_ExtProcedure _glRasterPos2s_F = {"glRasterPos2s",glRasterPos2s,&_glRasterPos2s_1,NULL};

	VPL_Parameter _glRasterPos2iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glRasterPos2iv_F = {"glRasterPos2iv",glRasterPos2iv,&_glRasterPos2iv_1,NULL};

	VPL_Parameter _glRasterPos2i_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos2i_1 = { kIntType,4,NULL,0,0,&_glRasterPos2i_2};
	VPL_ExtProcedure _glRasterPos2i_F = {"glRasterPos2i",glRasterPos2i,&_glRasterPos2i_1,NULL};

	VPL_Parameter _glRasterPos2fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glRasterPos2fv_F = {"glRasterPos2fv",glRasterPos2fv,&_glRasterPos2fv_1,NULL};

	VPL_Parameter _glRasterPos2f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos2f_1 = { kFloatType,4,NULL,0,0,&_glRasterPos2f_2};
	VPL_ExtProcedure _glRasterPos2f_F = {"glRasterPos2f",glRasterPos2f,&_glRasterPos2f_1,NULL};

	VPL_Parameter _glRasterPos2dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glRasterPos2dv_F = {"glRasterPos2dv",glRasterPos2dv,&_glRasterPos2dv_1,NULL};

	VPL_Parameter _glRasterPos2d_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glRasterPos2d_1 = { kFloatType,8,NULL,0,0,&_glRasterPos2d_2};
	VPL_ExtProcedure _glRasterPos2d_F = {"glRasterPos2d",glRasterPos2d,&_glRasterPos2d_1,NULL};

	VPL_Parameter _glPushName_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glPushName_F = {"glPushName",glPushName,&_glPushName_1,NULL};

	VPL_ExtProcedure _glPushMatrix_F = {"glPushMatrix",glPushMatrix,NULL,NULL};

	VPL_Parameter _glPushClientAttrib_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glPushClientAttrib_F = {"glPushClientAttrib",glPushClientAttrib,&_glPushClientAttrib_1,NULL};

	VPL_Parameter _glPushAttrib_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glPushAttrib_F = {"glPushAttrib",glPushAttrib,&_glPushAttrib_1,NULL};

	VPL_Parameter _glPrioritizeTextures_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glPrioritizeTextures_2 = { kPointerType,4,"unsigned long",1,1,&_glPrioritizeTextures_3};
	VPL_Parameter _glPrioritizeTextures_1 = { kIntType,4,NULL,0,0,&_glPrioritizeTextures_2};
	VPL_ExtProcedure _glPrioritizeTextures_F = {"glPrioritizeTextures",glPrioritizeTextures,&_glPrioritizeTextures_1,NULL};

	VPL_ExtProcedure _glPopName_F = {"glPopName",glPopName,NULL,NULL};

	VPL_ExtProcedure _glPopMatrix_F = {"glPopMatrix",glPopMatrix,NULL,NULL};

	VPL_ExtProcedure _glPopClientAttrib_F = {"glPopClientAttrib",glPopClientAttrib,NULL,NULL};

	VPL_ExtProcedure _glPopAttrib_F = {"glPopAttrib",glPopAttrib,NULL,NULL};

	VPL_Parameter _glPolygonStipple_1 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_ExtProcedure _glPolygonStipple_F = {"glPolygonStipple",glPolygonStipple,&_glPolygonStipple_1,NULL};

	VPL_Parameter _glPolygonOffset_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glPolygonOffset_1 = { kFloatType,4,NULL,0,0,&_glPolygonOffset_2};
	VPL_ExtProcedure _glPolygonOffset_F = {"glPolygonOffset",glPolygonOffset,&_glPolygonOffset_1,NULL};

	VPL_Parameter _glPolygonMode_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glPolygonMode_1 = { kUnsignedType,4,NULL,0,0,&_glPolygonMode_2};
	VPL_ExtProcedure _glPolygonMode_F = {"glPolygonMode",glPolygonMode,&_glPolygonMode_1,NULL};

	VPL_Parameter _glPointSize_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glPointSize_F = {"glPointSize",glPointSize,&_glPointSize_1,NULL};

	VPL_Parameter _glPixelZoom_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glPixelZoom_1 = { kFloatType,4,NULL,0,0,&_glPixelZoom_2};
	VPL_ExtProcedure _glPixelZoom_F = {"glPixelZoom",glPixelZoom,&_glPixelZoom_1,NULL};

	VPL_Parameter _glPixelTransferi_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glPixelTransferi_1 = { kUnsignedType,4,NULL,0,0,&_glPixelTransferi_2};
	VPL_ExtProcedure _glPixelTransferi_F = {"glPixelTransferi",glPixelTransferi,&_glPixelTransferi_1,NULL};

	VPL_Parameter _glPixelTransferf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glPixelTransferf_1 = { kUnsignedType,4,NULL,0,0,&_glPixelTransferf_2};
	VPL_ExtProcedure _glPixelTransferf_F = {"glPixelTransferf",glPixelTransferf,&_glPixelTransferf_1,NULL};

	VPL_Parameter _glPixelStorei_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glPixelStorei_1 = { kUnsignedType,4,NULL,0,0,&_glPixelStorei_2};
	VPL_ExtProcedure _glPixelStorei_F = {"glPixelStorei",glPixelStorei,&_glPixelStorei_1,NULL};

	VPL_Parameter _glPixelStoref_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glPixelStoref_1 = { kUnsignedType,4,NULL,0,0,&_glPixelStoref_2};
	VPL_ExtProcedure _glPixelStoref_F = {"glPixelStoref",glPixelStoref,&_glPixelStoref_1,NULL};

	VPL_Parameter _glPixelMapusv_3 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_Parameter _glPixelMapusv_2 = { kIntType,4,NULL,0,0,&_glPixelMapusv_3};
	VPL_Parameter _glPixelMapusv_1 = { kUnsignedType,4,NULL,0,0,&_glPixelMapusv_2};
	VPL_ExtProcedure _glPixelMapusv_F = {"glPixelMapusv",glPixelMapusv,&_glPixelMapusv_1,NULL};

	VPL_Parameter _glPixelMapuiv_3 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glPixelMapuiv_2 = { kIntType,4,NULL,0,0,&_glPixelMapuiv_3};
	VPL_Parameter _glPixelMapuiv_1 = { kUnsignedType,4,NULL,0,0,&_glPixelMapuiv_2};
	VPL_ExtProcedure _glPixelMapuiv_F = {"glPixelMapuiv",glPixelMapuiv,&_glPixelMapuiv_1,NULL};

	VPL_Parameter _glPixelMapfv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glPixelMapfv_2 = { kIntType,4,NULL,0,0,&_glPixelMapfv_3};
	VPL_Parameter _glPixelMapfv_1 = { kUnsignedType,4,NULL,0,0,&_glPixelMapfv_2};
	VPL_ExtProcedure _glPixelMapfv_F = {"glPixelMapfv",glPixelMapfv,&_glPixelMapfv_1,NULL};

	VPL_Parameter _glPassThrough_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glPassThrough_F = {"glPassThrough",glPassThrough,&_glPassThrough_1,NULL};

	VPL_Parameter _glOrtho_6 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glOrtho_5 = { kFloatType,8,NULL,0,0,&_glOrtho_6};
	VPL_Parameter _glOrtho_4 = { kFloatType,8,NULL,0,0,&_glOrtho_5};
	VPL_Parameter _glOrtho_3 = { kFloatType,8,NULL,0,0,&_glOrtho_4};
	VPL_Parameter _glOrtho_2 = { kFloatType,8,NULL,0,0,&_glOrtho_3};
	VPL_Parameter _glOrtho_1 = { kFloatType,8,NULL,0,0,&_glOrtho_2};
	VPL_ExtProcedure _glOrtho_F = {"glOrtho",glOrtho,&_glOrtho_1,NULL};

	VPL_Parameter _glNormalPointer_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glNormalPointer_2 = { kIntType,4,NULL,0,0,&_glNormalPointer_3};
	VPL_Parameter _glNormalPointer_1 = { kUnsignedType,4,NULL,0,0,&_glNormalPointer_2};
	VPL_ExtProcedure _glNormalPointer_F = {"glNormalPointer",glNormalPointer,&_glNormalPointer_1,NULL};

	VPL_Parameter _glNormal3sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glNormal3sv_F = {"glNormal3sv",glNormal3sv,&_glNormal3sv_1,NULL};

	VPL_Parameter _glNormal3s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glNormal3s_2 = { kIntType,2,NULL,0,0,&_glNormal3s_3};
	VPL_Parameter _glNormal3s_1 = { kIntType,2,NULL,0,0,&_glNormal3s_2};
	VPL_ExtProcedure _glNormal3s_F = {"glNormal3s",glNormal3s,&_glNormal3s_1,NULL};

	VPL_Parameter _glNormal3iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glNormal3iv_F = {"glNormal3iv",glNormal3iv,&_glNormal3iv_1,NULL};

	VPL_Parameter _glNormal3i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glNormal3i_2 = { kIntType,4,NULL,0,0,&_glNormal3i_3};
	VPL_Parameter _glNormal3i_1 = { kIntType,4,NULL,0,0,&_glNormal3i_2};
	VPL_ExtProcedure _glNormal3i_F = {"glNormal3i",glNormal3i,&_glNormal3i_1,NULL};

	VPL_Parameter _glNormal3fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glNormal3fv_F = {"glNormal3fv",glNormal3fv,&_glNormal3fv_1,NULL};

	VPL_Parameter _glNormal3f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glNormal3f_2 = { kFloatType,4,NULL,0,0,&_glNormal3f_3};
	VPL_Parameter _glNormal3f_1 = { kFloatType,4,NULL,0,0,&_glNormal3f_2};
	VPL_ExtProcedure _glNormal3f_F = {"glNormal3f",glNormal3f,&_glNormal3f_1,NULL};

	VPL_Parameter _glNormal3dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glNormal3dv_F = {"glNormal3dv",glNormal3dv,&_glNormal3dv_1,NULL};

	VPL_Parameter _glNormal3d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glNormal3d_2 = { kFloatType,8,NULL,0,0,&_glNormal3d_3};
	VPL_Parameter _glNormal3d_1 = { kFloatType,8,NULL,0,0,&_glNormal3d_2};
	VPL_ExtProcedure _glNormal3d_F = {"glNormal3d",glNormal3d,&_glNormal3d_1,NULL};

	VPL_Parameter _glNormal3bv_1 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_ExtProcedure _glNormal3bv_F = {"glNormal3bv",glNormal3bv,&_glNormal3bv_1,NULL};

	VPL_Parameter _glNormal3b_3 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _glNormal3b_2 = { kIntType,1,NULL,0,0,&_glNormal3b_3};
	VPL_Parameter _glNormal3b_1 = { kIntType,1,NULL,0,0,&_glNormal3b_2};
	VPL_ExtProcedure _glNormal3b_F = {"glNormal3b",glNormal3b,&_glNormal3b_1,NULL};

	VPL_Parameter _glNewList_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glNewList_1 = { kUnsignedType,4,NULL,0,0,&_glNewList_2};
	VPL_ExtProcedure _glNewList_F = {"glNewList",glNewList,&_glNewList_1,NULL};

	VPL_Parameter _glMultMatrixf_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glMultMatrixf_F = {"glMultMatrixf",glMultMatrixf,&_glMultMatrixf_1,NULL};

	VPL_Parameter _glMultMatrixd_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glMultMatrixd_F = {"glMultMatrixd",glMultMatrixd,&_glMultMatrixd_1,NULL};

	VPL_Parameter _glMinmax_3 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glMinmax_2 = { kUnsignedType,4,NULL,0,0,&_glMinmax_3};
	VPL_Parameter _glMinmax_1 = { kUnsignedType,4,NULL,0,0,&_glMinmax_2};
	VPL_ExtProcedure _glMinmax_F = {"glMinmax",glMinmax,&_glMinmax_1,NULL};

	VPL_Parameter _glMatrixMode_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glMatrixMode_F = {"glMatrixMode",glMatrixMode,&_glMatrixMode_1,NULL};

	VPL_Parameter _glMaterialiv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMaterialiv_2 = { kUnsignedType,4,NULL,0,0,&_glMaterialiv_3};
	VPL_Parameter _glMaterialiv_1 = { kUnsignedType,4,NULL,0,0,&_glMaterialiv_2};
	VPL_ExtProcedure _glMaterialiv_F = {"glMaterialiv",glMaterialiv,&_glMaterialiv_1,NULL};

	VPL_Parameter _glMateriali_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMateriali_2 = { kUnsignedType,4,NULL,0,0,&_glMateriali_3};
	VPL_Parameter _glMateriali_1 = { kUnsignedType,4,NULL,0,0,&_glMateriali_2};
	VPL_ExtProcedure _glMateriali_F = {"glMateriali",glMateriali,&_glMateriali_1,NULL};

	VPL_Parameter _glMaterialfv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMaterialfv_2 = { kUnsignedType,4,NULL,0,0,&_glMaterialfv_3};
	VPL_Parameter _glMaterialfv_1 = { kUnsignedType,4,NULL,0,0,&_glMaterialfv_2};
	VPL_ExtProcedure _glMaterialfv_F = {"glMaterialfv",glMaterialfv,&_glMaterialfv_1,NULL};

	VPL_Parameter _glMaterialf_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMaterialf_2 = { kUnsignedType,4,NULL,0,0,&_glMaterialf_3};
	VPL_Parameter _glMaterialf_1 = { kUnsignedType,4,NULL,0,0,&_glMaterialf_2};
	VPL_ExtProcedure _glMaterialf_F = {"glMaterialf",glMaterialf,&_glMaterialf_1,NULL};

	VPL_Parameter _glMapGrid2f_6 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMapGrid2f_5 = { kFloatType,4,NULL,0,0,&_glMapGrid2f_6};
	VPL_Parameter _glMapGrid2f_4 = { kIntType,4,NULL,0,0,&_glMapGrid2f_5};
	VPL_Parameter _glMapGrid2f_3 = { kFloatType,4,NULL,0,0,&_glMapGrid2f_4};
	VPL_Parameter _glMapGrid2f_2 = { kFloatType,4,NULL,0,0,&_glMapGrid2f_3};
	VPL_Parameter _glMapGrid2f_1 = { kIntType,4,NULL,0,0,&_glMapGrid2f_2};
	VPL_ExtProcedure _glMapGrid2f_F = {"glMapGrid2f",glMapGrid2f,&_glMapGrid2f_1,NULL};

	VPL_Parameter _glMapGrid2d_6 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMapGrid2d_5 = { kFloatType,8,NULL,0,0,&_glMapGrid2d_6};
	VPL_Parameter _glMapGrid2d_4 = { kIntType,4,NULL,0,0,&_glMapGrid2d_5};
	VPL_Parameter _glMapGrid2d_3 = { kFloatType,8,NULL,0,0,&_glMapGrid2d_4};
	VPL_Parameter _glMapGrid2d_2 = { kFloatType,8,NULL,0,0,&_glMapGrid2d_3};
	VPL_Parameter _glMapGrid2d_1 = { kIntType,4,NULL,0,0,&_glMapGrid2d_2};
	VPL_ExtProcedure _glMapGrid2d_F = {"glMapGrid2d",glMapGrid2d,&_glMapGrid2d_1,NULL};

	VPL_Parameter _glMapGrid1f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMapGrid1f_2 = { kFloatType,4,NULL,0,0,&_glMapGrid1f_3};
	VPL_Parameter _glMapGrid1f_1 = { kIntType,4,NULL,0,0,&_glMapGrid1f_2};
	VPL_ExtProcedure _glMapGrid1f_F = {"glMapGrid1f",glMapGrid1f,&_glMapGrid1f_1,NULL};

	VPL_Parameter _glMapGrid1d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMapGrid1d_2 = { kFloatType,8,NULL,0,0,&_glMapGrid1d_3};
	VPL_Parameter _glMapGrid1d_1 = { kIntType,4,NULL,0,0,&_glMapGrid1d_2};
	VPL_ExtProcedure _glMapGrid1d_F = {"glMapGrid1d",glMapGrid1d,&_glMapGrid1d_1,NULL};

	VPL_Parameter _glMap2f_10 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMap2f_9 = { kIntType,4,NULL,0,0,&_glMap2f_10};
	VPL_Parameter _glMap2f_8 = { kIntType,4,NULL,0,0,&_glMap2f_9};
	VPL_Parameter _glMap2f_7 = { kFloatType,4,NULL,0,0,&_glMap2f_8};
	VPL_Parameter _glMap2f_6 = { kFloatType,4,NULL,0,0,&_glMap2f_7};
	VPL_Parameter _glMap2f_5 = { kIntType,4,NULL,0,0,&_glMap2f_6};
	VPL_Parameter _glMap2f_4 = { kIntType,4,NULL,0,0,&_glMap2f_5};
	VPL_Parameter _glMap2f_3 = { kFloatType,4,NULL,0,0,&_glMap2f_4};
	VPL_Parameter _glMap2f_2 = { kFloatType,4,NULL,0,0,&_glMap2f_3};
	VPL_Parameter _glMap2f_1 = { kUnsignedType,4,NULL,0,0,&_glMap2f_2};
	VPL_ExtProcedure _glMap2f_F = {"glMap2f",glMap2f,&_glMap2f_1,NULL};

	VPL_Parameter _glMap2d_10 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMap2d_9 = { kIntType,4,NULL,0,0,&_glMap2d_10};
	VPL_Parameter _glMap2d_8 = { kIntType,4,NULL,0,0,&_glMap2d_9};
	VPL_Parameter _glMap2d_7 = { kFloatType,8,NULL,0,0,&_glMap2d_8};
	VPL_Parameter _glMap2d_6 = { kFloatType,8,NULL,0,0,&_glMap2d_7};
	VPL_Parameter _glMap2d_5 = { kIntType,4,NULL,0,0,&_glMap2d_6};
	VPL_Parameter _glMap2d_4 = { kIntType,4,NULL,0,0,&_glMap2d_5};
	VPL_Parameter _glMap2d_3 = { kFloatType,8,NULL,0,0,&_glMap2d_4};
	VPL_Parameter _glMap2d_2 = { kFloatType,8,NULL,0,0,&_glMap2d_3};
	VPL_Parameter _glMap2d_1 = { kUnsignedType,4,NULL,0,0,&_glMap2d_2};
	VPL_ExtProcedure _glMap2d_F = {"glMap2d",glMap2d,&_glMap2d_1,NULL};

	VPL_Parameter _glMap1f_6 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMap1f_5 = { kIntType,4,NULL,0,0,&_glMap1f_6};
	VPL_Parameter _glMap1f_4 = { kIntType,4,NULL,0,0,&_glMap1f_5};
	VPL_Parameter _glMap1f_3 = { kFloatType,4,NULL,0,0,&_glMap1f_4};
	VPL_Parameter _glMap1f_2 = { kFloatType,4,NULL,0,0,&_glMap1f_3};
	VPL_Parameter _glMap1f_1 = { kUnsignedType,4,NULL,0,0,&_glMap1f_2};
	VPL_ExtProcedure _glMap1f_F = {"glMap1f",glMap1f,&_glMap1f_1,NULL};

	VPL_Parameter _glMap1d_6 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMap1d_5 = { kIntType,4,NULL,0,0,&_glMap1d_6};
	VPL_Parameter _glMap1d_4 = { kIntType,4,NULL,0,0,&_glMap1d_5};
	VPL_Parameter _glMap1d_3 = { kFloatType,8,NULL,0,0,&_glMap1d_4};
	VPL_Parameter _glMap1d_2 = { kFloatType,8,NULL,0,0,&_glMap1d_3};
	VPL_Parameter _glMap1d_1 = { kUnsignedType,4,NULL,0,0,&_glMap1d_2};
	VPL_ExtProcedure _glMap1d_F = {"glMap1d",glMap1d,&_glMap1d_1,NULL};

	VPL_Parameter _glLogicOp_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glLogicOp_F = {"glLogicOp",glLogicOp,&_glLogicOp_1,NULL};

	VPL_Parameter _glLoadName_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glLoadName_F = {"glLoadName",glLoadName,&_glLoadName_1,NULL};

	VPL_Parameter _glLoadMatrixf_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glLoadMatrixf_F = {"glLoadMatrixf",glLoadMatrixf,&_glLoadMatrixf_1,NULL};

	VPL_Parameter _glLoadMatrixd_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glLoadMatrixd_F = {"glLoadMatrixd",glLoadMatrixd,&_glLoadMatrixd_1,NULL};

	VPL_ExtProcedure _glLoadIdentity_F = {"glLoadIdentity",glLoadIdentity,NULL,NULL};

	VPL_Parameter _glListBase_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glListBase_F = {"glListBase",glListBase,&_glListBase_1,NULL};

	VPL_Parameter _glLineWidth_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glLineWidth_F = {"glLineWidth",glLineWidth,&_glLineWidth_1,NULL};

	VPL_Parameter _glLineStipple_2 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _glLineStipple_1 = { kIntType,4,NULL,0,0,&_glLineStipple_2};
	VPL_ExtProcedure _glLineStipple_F = {"glLineStipple",glLineStipple,&_glLineStipple_1,NULL};

	VPL_Parameter _glLightiv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glLightiv_2 = { kUnsignedType,4,NULL,0,0,&_glLightiv_3};
	VPL_Parameter _glLightiv_1 = { kUnsignedType,4,NULL,0,0,&_glLightiv_2};
	VPL_ExtProcedure _glLightiv_F = {"glLightiv",glLightiv,&_glLightiv_1,NULL};

	VPL_Parameter _glLighti_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glLighti_2 = { kUnsignedType,4,NULL,0,0,&_glLighti_3};
	VPL_Parameter _glLighti_1 = { kUnsignedType,4,NULL,0,0,&_glLighti_2};
	VPL_ExtProcedure _glLighti_F = {"glLighti",glLighti,&_glLighti_1,NULL};

	VPL_Parameter _glLightfv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glLightfv_2 = { kUnsignedType,4,NULL,0,0,&_glLightfv_3};
	VPL_Parameter _glLightfv_1 = { kUnsignedType,4,NULL,0,0,&_glLightfv_2};
	VPL_ExtProcedure _glLightfv_F = {"glLightfv",glLightfv,&_glLightfv_1,NULL};

	VPL_Parameter _glLightf_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glLightf_2 = { kUnsignedType,4,NULL,0,0,&_glLightf_3};
	VPL_Parameter _glLightf_1 = { kUnsignedType,4,NULL,0,0,&_glLightf_2};
	VPL_ExtProcedure _glLightf_F = {"glLightf",glLightf,&_glLightf_1,NULL};

	VPL_Parameter _glLightModeliv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glLightModeliv_1 = { kUnsignedType,4,NULL,0,0,&_glLightModeliv_2};
	VPL_ExtProcedure _glLightModeliv_F = {"glLightModeliv",glLightModeliv,&_glLightModeliv_1,NULL};

	VPL_Parameter _glLightModeli_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glLightModeli_1 = { kUnsignedType,4,NULL,0,0,&_glLightModeli_2};
	VPL_ExtProcedure _glLightModeli_F = {"glLightModeli",glLightModeli,&_glLightModeli_1,NULL};

	VPL_Parameter _glLightModelfv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glLightModelfv_1 = { kUnsignedType,4,NULL,0,0,&_glLightModelfv_2};
	VPL_ExtProcedure _glLightModelfv_F = {"glLightModelfv",glLightModelfv,&_glLightModelfv_1,NULL};

	VPL_Parameter _glLightModelf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glLightModelf_1 = { kUnsignedType,4,NULL,0,0,&_glLightModelf_2};
	VPL_ExtProcedure _glLightModelf_F = {"glLightModelf",glLightModelf,&_glLightModelf_1,NULL};

	VPL_Parameter _glIsTexture_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsTexture_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsTexture_F = {"glIsTexture",glIsTexture,&_glIsTexture_1,&_glIsTexture_R};

	VPL_Parameter _glIsList_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsList_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsList_F = {"glIsList",glIsList,&_glIsList_1,&_glIsList_R};

	VPL_Parameter _glIsEnabled_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsEnabled_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsEnabled_F = {"glIsEnabled",glIsEnabled,&_glIsEnabled_1,&_glIsEnabled_R};

	VPL_Parameter _glInterleavedArrays_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glInterleavedArrays_2 = { kIntType,4,NULL,0,0,&_glInterleavedArrays_3};
	VPL_Parameter _glInterleavedArrays_1 = { kUnsignedType,4,NULL,0,0,&_glInterleavedArrays_2};
	VPL_ExtProcedure _glInterleavedArrays_F = {"glInterleavedArrays",glInterleavedArrays,&_glInterleavedArrays_1,NULL};

	VPL_ExtProcedure _glInitNames_F = {"glInitNames",glInitNames,NULL,NULL};

	VPL_Parameter _glIndexubv_1 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_ExtProcedure _glIndexubv_F = {"glIndexubv",glIndexubv,&_glIndexubv_1,NULL};

	VPL_Parameter _glIndexub_1 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _glIndexub_F = {"glIndexub",glIndexub,&_glIndexub_1,NULL};

	VPL_Parameter _glIndexsv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glIndexsv_F = {"glIndexsv",glIndexsv,&_glIndexsv_1,NULL};

	VPL_Parameter _glIndexs_1 = { kIntType,2,NULL,0,0,NULL};
	VPL_ExtProcedure _glIndexs_F = {"glIndexs",glIndexs,&_glIndexs_1,NULL};

	VPL_Parameter _glIndexiv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glIndexiv_F = {"glIndexiv",glIndexiv,&_glIndexiv_1,NULL};

	VPL_Parameter _glIndexi_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIndexi_F = {"glIndexi",glIndexi,&_glIndexi_1,NULL};

	VPL_Parameter _glIndexfv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glIndexfv_F = {"glIndexfv",glIndexfv,&_glIndexfv_1,NULL};

	VPL_Parameter _glIndexf_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIndexf_F = {"glIndexf",glIndexf,&_glIndexf_1,NULL};

	VPL_Parameter _glIndexdv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glIndexdv_F = {"glIndexdv",glIndexdv,&_glIndexdv_1,NULL};

	VPL_Parameter _glIndexd_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glIndexd_F = {"glIndexd",glIndexd,&_glIndexd_1,NULL};

	VPL_Parameter _glIndexPointer_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glIndexPointer_2 = { kIntType,4,NULL,0,0,&_glIndexPointer_3};
	VPL_Parameter _glIndexPointer_1 = { kUnsignedType,4,NULL,0,0,&_glIndexPointer_2};
	VPL_ExtProcedure _glIndexPointer_F = {"glIndexPointer",glIndexPointer,&_glIndexPointer_1,NULL};

	VPL_Parameter _glIndexMask_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIndexMask_F = {"glIndexMask",glIndexMask,&_glIndexMask_1,NULL};

	VPL_Parameter _glHistogram_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glHistogram_3 = { kUnsignedType,4,NULL,0,0,&_glHistogram_4};
	VPL_Parameter _glHistogram_2 = { kIntType,4,NULL,0,0,&_glHistogram_3};
	VPL_Parameter _glHistogram_1 = { kUnsignedType,4,NULL,0,0,&_glHistogram_2};
	VPL_ExtProcedure _glHistogram_F = {"glHistogram",glHistogram,&_glHistogram_1,NULL};

	VPL_Parameter _glHint_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glHint_1 = { kUnsignedType,4,NULL,0,0,&_glHint_2};
	VPL_ExtProcedure _glHint_F = {"glHint",glHint,&_glHint_1,NULL};

	VPL_Parameter _glGetTexParameteriv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetTexParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameteriv_3};
	VPL_Parameter _glGetTexParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameteriv_2};
	VPL_ExtProcedure _glGetTexParameteriv_F = {"glGetTexParameteriv",glGetTexParameteriv,&_glGetTexParameteriv_1,NULL};

	VPL_Parameter _glGetTexParameterfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetTexParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterfv_3};
	VPL_Parameter _glGetTexParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterfv_2};
	VPL_ExtProcedure _glGetTexParameterfv_F = {"glGetTexParameterfv",glGetTexParameterfv,&_glGetTexParameterfv_1,NULL};

	VPL_Parameter _glGetTexLevelParameteriv_4 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetTexLevelParameteriv_3 = { kUnsignedType,4,NULL,0,0,&_glGetTexLevelParameteriv_4};
	VPL_Parameter _glGetTexLevelParameteriv_2 = { kIntType,4,NULL,0,0,&_glGetTexLevelParameteriv_3};
	VPL_Parameter _glGetTexLevelParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexLevelParameteriv_2};
	VPL_ExtProcedure _glGetTexLevelParameteriv_F = {"glGetTexLevelParameteriv",glGetTexLevelParameteriv,&_glGetTexLevelParameteriv_1,NULL};

	VPL_Parameter _glGetTexLevelParameterfv_4 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetTexLevelParameterfv_3 = { kUnsignedType,4,NULL,0,0,&_glGetTexLevelParameterfv_4};
	VPL_Parameter _glGetTexLevelParameterfv_2 = { kIntType,4,NULL,0,0,&_glGetTexLevelParameterfv_3};
	VPL_Parameter _glGetTexLevelParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexLevelParameterfv_2};
	VPL_ExtProcedure _glGetTexLevelParameterfv_F = {"glGetTexLevelParameterfv",glGetTexLevelParameterfv,&_glGetTexLevelParameterfv_1,NULL};

	VPL_Parameter _glGetTexImage_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetTexImage_4 = { kUnsignedType,4,NULL,0,0,&_glGetTexImage_5};
	VPL_Parameter _glGetTexImage_3 = { kUnsignedType,4,NULL,0,0,&_glGetTexImage_4};
	VPL_Parameter _glGetTexImage_2 = { kIntType,4,NULL,0,0,&_glGetTexImage_3};
	VPL_Parameter _glGetTexImage_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexImage_2};
	VPL_ExtProcedure _glGetTexImage_F = {"glGetTexImage",glGetTexImage,&_glGetTexImage_1,NULL};

	VPL_Parameter _glGetTexGeniv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetTexGeniv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexGeniv_3};
	VPL_Parameter _glGetTexGeniv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexGeniv_2};
	VPL_ExtProcedure _glGetTexGeniv_F = {"glGetTexGeniv",glGetTexGeniv,&_glGetTexGeniv_1,NULL};

	VPL_Parameter _glGetTexGenfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetTexGenfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexGenfv_3};
	VPL_Parameter _glGetTexGenfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexGenfv_2};
	VPL_ExtProcedure _glGetTexGenfv_F = {"glGetTexGenfv",glGetTexGenfv,&_glGetTexGenfv_1,NULL};

	VPL_Parameter _glGetTexGendv_3 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _glGetTexGendv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexGendv_3};
	VPL_Parameter _glGetTexGendv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexGendv_2};
	VPL_ExtProcedure _glGetTexGendv_F = {"glGetTexGendv",glGetTexGendv,&_glGetTexGendv_1,NULL};

	VPL_Parameter _glGetTexEnviv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetTexEnviv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexEnviv_3};
	VPL_Parameter _glGetTexEnviv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexEnviv_2};
	VPL_ExtProcedure _glGetTexEnviv_F = {"glGetTexEnviv",glGetTexEnviv,&_glGetTexEnviv_1,NULL};

	VPL_Parameter _glGetTexEnvfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetTexEnvfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexEnvfv_3};
	VPL_Parameter _glGetTexEnvfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexEnvfv_2};
	VPL_ExtProcedure _glGetTexEnvfv_F = {"glGetTexEnvfv",glGetTexEnvfv,&_glGetTexEnvfv_1,NULL};

	VPL_Parameter _glGetString_R = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _glGetString_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glGetString_F = {"glGetString",glGetString,&_glGetString_1,&_glGetString_R};

	VPL_Parameter _glGetSeparableFilter_6 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetSeparableFilter_5 = { kPointerType,0,"void",1,0,&_glGetSeparableFilter_6};
	VPL_Parameter _glGetSeparableFilter_4 = { kPointerType,0,"void",1,0,&_glGetSeparableFilter_5};
	VPL_Parameter _glGetSeparableFilter_3 = { kUnsignedType,4,NULL,0,0,&_glGetSeparableFilter_4};
	VPL_Parameter _glGetSeparableFilter_2 = { kUnsignedType,4,NULL,0,0,&_glGetSeparableFilter_3};
	VPL_Parameter _glGetSeparableFilter_1 = { kUnsignedType,4,NULL,0,0,&_glGetSeparableFilter_2};
	VPL_ExtProcedure _glGetSeparableFilter_F = {"glGetSeparableFilter",glGetSeparableFilter,&_glGetSeparableFilter_1,NULL};

	VPL_Parameter _glGetPolygonStipple_1 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_ExtProcedure _glGetPolygonStipple_F = {"glGetPolygonStipple",glGetPolygonStipple,&_glGetPolygonStipple_1,NULL};

	VPL_Parameter _glGetPointerv_2 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetPointerv_1 = { kUnsignedType,4,NULL,0,0,&_glGetPointerv_2};
	VPL_ExtProcedure _glGetPointerv_F = {"glGetPointerv",glGetPointerv,&_glGetPointerv_1,NULL};

	VPL_Parameter _glGetPixelMapusv_2 = { kPointerType,2,"unsigned short",1,0,NULL};
	VPL_Parameter _glGetPixelMapusv_1 = { kUnsignedType,4,NULL,0,0,&_glGetPixelMapusv_2};
	VPL_ExtProcedure _glGetPixelMapusv_F = {"glGetPixelMapusv",glGetPixelMapusv,&_glGetPixelMapusv_1,NULL};

	VPL_Parameter _glGetPixelMapuiv_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGetPixelMapuiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetPixelMapuiv_2};
	VPL_ExtProcedure _glGetPixelMapuiv_F = {"glGetPixelMapuiv",glGetPixelMapuiv,&_glGetPixelMapuiv_1,NULL};

	VPL_Parameter _glGetPixelMapfv_2 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetPixelMapfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetPixelMapfv_2};
	VPL_ExtProcedure _glGetPixelMapfv_F = {"glGetPixelMapfv",glGetPixelMapfv,&_glGetPixelMapfv_1,NULL};

	VPL_Parameter _glGetMinmaxParameteriv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetMinmaxParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMinmaxParameteriv_3};
	VPL_Parameter _glGetMinmaxParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMinmaxParameteriv_2};
	VPL_ExtProcedure _glGetMinmaxParameteriv_F = {"glGetMinmaxParameteriv",glGetMinmaxParameteriv,&_glGetMinmaxParameteriv_1,NULL};

	VPL_Parameter _glGetMinmaxParameterfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetMinmaxParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMinmaxParameterfv_3};
	VPL_Parameter _glGetMinmaxParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMinmaxParameterfv_2};
	VPL_ExtProcedure _glGetMinmaxParameterfv_F = {"glGetMinmaxParameterfv",glGetMinmaxParameterfv,&_glGetMinmaxParameterfv_1,NULL};

	VPL_Parameter _glGetMinmax_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetMinmax_4 = { kUnsignedType,4,NULL,0,0,&_glGetMinmax_5};
	VPL_Parameter _glGetMinmax_3 = { kUnsignedType,4,NULL,0,0,&_glGetMinmax_4};
	VPL_Parameter _glGetMinmax_2 = { kUnsignedType,1,NULL,0,0,&_glGetMinmax_3};
	VPL_Parameter _glGetMinmax_1 = { kUnsignedType,4,NULL,0,0,&_glGetMinmax_2};
	VPL_ExtProcedure _glGetMinmax_F = {"glGetMinmax",glGetMinmax,&_glGetMinmax_1,NULL};

	VPL_Parameter _glGetMaterialiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetMaterialiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMaterialiv_3};
	VPL_Parameter _glGetMaterialiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMaterialiv_2};
	VPL_ExtProcedure _glGetMaterialiv_F = {"glGetMaterialiv",glGetMaterialiv,&_glGetMaterialiv_1,NULL};

	VPL_Parameter _glGetMaterialfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetMaterialfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMaterialfv_3};
	VPL_Parameter _glGetMaterialfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMaterialfv_2};
	VPL_ExtProcedure _glGetMaterialfv_F = {"glGetMaterialfv",glGetMaterialfv,&_glGetMaterialfv_1,NULL};

	VPL_Parameter _glGetMapiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetMapiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMapiv_3};
	VPL_Parameter _glGetMapiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMapiv_2};
	VPL_ExtProcedure _glGetMapiv_F = {"glGetMapiv",glGetMapiv,&_glGetMapiv_1,NULL};

	VPL_Parameter _glGetMapfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetMapfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMapfv_3};
	VPL_Parameter _glGetMapfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMapfv_2};
	VPL_ExtProcedure _glGetMapfv_F = {"glGetMapfv",glGetMapfv,&_glGetMapfv_1,NULL};

	VPL_Parameter _glGetMapdv_3 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _glGetMapdv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMapdv_3};
	VPL_Parameter _glGetMapdv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMapdv_2};
	VPL_ExtProcedure _glGetMapdv_F = {"glGetMapdv",glGetMapdv,&_glGetMapdv_1,NULL};

	VPL_Parameter _glGetLightiv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetLightiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetLightiv_3};
	VPL_Parameter _glGetLightiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetLightiv_2};
	VPL_ExtProcedure _glGetLightiv_F = {"glGetLightiv",glGetLightiv,&_glGetLightiv_1,NULL};

	VPL_Parameter _glGetLightfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetLightfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetLightfv_3};
	VPL_Parameter _glGetLightfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetLightfv_2};
	VPL_ExtProcedure _glGetLightfv_F = {"glGetLightfv",glGetLightfv,&_glGetLightfv_1,NULL};

	VPL_Parameter _glGetIntegerv_2 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetIntegerv_1 = { kUnsignedType,4,NULL,0,0,&_glGetIntegerv_2};
	VPL_ExtProcedure _glGetIntegerv_F = {"glGetIntegerv",glGetIntegerv,&_glGetIntegerv_1,NULL};

	VPL_Parameter _glGetHistogramParameteriv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetHistogramParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetHistogramParameteriv_3};
	VPL_Parameter _glGetHistogramParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetHistogramParameteriv_2};
	VPL_ExtProcedure _glGetHistogramParameteriv_F = {"glGetHistogramParameteriv",glGetHistogramParameteriv,&_glGetHistogramParameteriv_1,NULL};

	VPL_Parameter _glGetHistogramParameterfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetHistogramParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetHistogramParameterfv_3};
	VPL_Parameter _glGetHistogramParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetHistogramParameterfv_2};
	VPL_ExtProcedure _glGetHistogramParameterfv_F = {"glGetHistogramParameterfv",glGetHistogramParameterfv,&_glGetHistogramParameterfv_1,NULL};

	VPL_Parameter _glGetHistogram_5 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetHistogram_4 = { kUnsignedType,4,NULL,0,0,&_glGetHistogram_5};
	VPL_Parameter _glGetHistogram_3 = { kUnsignedType,4,NULL,0,0,&_glGetHistogram_4};
	VPL_Parameter _glGetHistogram_2 = { kUnsignedType,1,NULL,0,0,&_glGetHistogram_3};
	VPL_Parameter _glGetHistogram_1 = { kUnsignedType,4,NULL,0,0,&_glGetHistogram_2};
	VPL_ExtProcedure _glGetHistogram_F = {"glGetHistogram",glGetHistogram,&_glGetHistogram_1,NULL};

	VPL_Parameter _glGetFloatv_2 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetFloatv_1 = { kUnsignedType,4,NULL,0,0,&_glGetFloatv_2};
	VPL_ExtProcedure _glGetFloatv_F = {"glGetFloatv",glGetFloatv,&_glGetFloatv_1,NULL};

	VPL_Parameter _glGetError_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glGetError_F = {"glGetError",glGetError,NULL,&_glGetError_R};

	VPL_Parameter _glGetDoublev_2 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _glGetDoublev_1 = { kUnsignedType,4,NULL,0,0,&_glGetDoublev_2};
	VPL_ExtProcedure _glGetDoublev_F = {"glGetDoublev",glGetDoublev,&_glGetDoublev_1,NULL};

	VPL_Parameter _glGetConvolutionParameteriv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetConvolutionParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetConvolutionParameteriv_3};
	VPL_Parameter _glGetConvolutionParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetConvolutionParameteriv_2};
	VPL_ExtProcedure _glGetConvolutionParameteriv_F = {"glGetConvolutionParameteriv",glGetConvolutionParameteriv,&_glGetConvolutionParameteriv_1,NULL};

	VPL_Parameter _glGetConvolutionParameterfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetConvolutionParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetConvolutionParameterfv_3};
	VPL_Parameter _glGetConvolutionParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetConvolutionParameterfv_2};
	VPL_ExtProcedure _glGetConvolutionParameterfv_F = {"glGetConvolutionParameterfv",glGetConvolutionParameterfv,&_glGetConvolutionParameterfv_1,NULL};

	VPL_Parameter _glGetConvolutionFilter_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetConvolutionFilter_3 = { kUnsignedType,4,NULL,0,0,&_glGetConvolutionFilter_4};
	VPL_Parameter _glGetConvolutionFilter_2 = { kUnsignedType,4,NULL,0,0,&_glGetConvolutionFilter_3};
	VPL_Parameter _glGetConvolutionFilter_1 = { kUnsignedType,4,NULL,0,0,&_glGetConvolutionFilter_2};
	VPL_ExtProcedure _glGetConvolutionFilter_F = {"glGetConvolutionFilter",glGetConvolutionFilter,&_glGetConvolutionFilter_1,NULL};

	VPL_Parameter _glGetColorTableParameteriv_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetColorTableParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableParameteriv_3};
	VPL_Parameter _glGetColorTableParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableParameteriv_2};
	VPL_ExtProcedure _glGetColorTableParameteriv_F = {"glGetColorTableParameteriv",glGetColorTableParameteriv,&_glGetColorTableParameteriv_1,NULL};

	VPL_Parameter _glGetColorTableParameterfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetColorTableParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableParameterfv_3};
	VPL_Parameter _glGetColorTableParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableParameterfv_2};
	VPL_ExtProcedure _glGetColorTableParameterfv_F = {"glGetColorTableParameterfv",glGetColorTableParameterfv,&_glGetColorTableParameterfv_1,NULL};

	VPL_Parameter _glGetColorTable_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetColorTable_3 = { kUnsignedType,4,NULL,0,0,&_glGetColorTable_4};
	VPL_Parameter _glGetColorTable_2 = { kUnsignedType,4,NULL,0,0,&_glGetColorTable_3};
	VPL_Parameter _glGetColorTable_1 = { kUnsignedType,4,NULL,0,0,&_glGetColorTable_2};
	VPL_ExtProcedure _glGetColorTable_F = {"glGetColorTable",glGetColorTable,&_glGetColorTable_1,NULL};

	VPL_Parameter _glGetClipPlane_2 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _glGetClipPlane_1 = { kUnsignedType,4,NULL,0,0,&_glGetClipPlane_2};
	VPL_ExtProcedure _glGetClipPlane_F = {"glGetClipPlane",glGetClipPlane,&_glGetClipPlane_1,NULL};

	VPL_Parameter _glGetBooleanv_2 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _glGetBooleanv_1 = { kUnsignedType,4,NULL,0,0,&_glGetBooleanv_2};
	VPL_ExtProcedure _glGetBooleanv_F = {"glGetBooleanv",glGetBooleanv,&_glGetBooleanv_1,NULL};

	VPL_Parameter _glGenTextures_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenTextures_1 = { kIntType,4,NULL,0,0,&_glGenTextures_2};
	VPL_ExtProcedure _glGenTextures_F = {"glGenTextures",glGenTextures,&_glGenTextures_1,NULL};

	VPL_Parameter _glGenLists_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glGenLists_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glGenLists_F = {"glGenLists",glGenLists,&_glGenLists_1,&_glGenLists_R};

	VPL_Parameter _glFrustum_6 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glFrustum_5 = { kFloatType,8,NULL,0,0,&_glFrustum_6};
	VPL_Parameter _glFrustum_4 = { kFloatType,8,NULL,0,0,&_glFrustum_5};
	VPL_Parameter _glFrustum_3 = { kFloatType,8,NULL,0,0,&_glFrustum_4};
	VPL_Parameter _glFrustum_2 = { kFloatType,8,NULL,0,0,&_glFrustum_3};
	VPL_Parameter _glFrustum_1 = { kFloatType,8,NULL,0,0,&_glFrustum_2};
	VPL_ExtProcedure _glFrustum_F = {"glFrustum",glFrustum,&_glFrustum_1,NULL};

	VPL_Parameter _glFrontFace_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glFrontFace_F = {"glFrontFace",glFrontFace,&_glFrontFace_1,NULL};

	VPL_Parameter _glFogiv_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glFogiv_1 = { kUnsignedType,4,NULL,0,0,&_glFogiv_2};
	VPL_ExtProcedure _glFogiv_F = {"glFogiv",glFogiv,&_glFogiv_1,NULL};

	VPL_Parameter _glFogi_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFogi_1 = { kUnsignedType,4,NULL,0,0,&_glFogi_2};
	VPL_ExtProcedure _glFogi_F = {"glFogi",glFogi,&_glFogi_1,NULL};

	VPL_Parameter _glFogfv_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glFogfv_1 = { kUnsignedType,4,NULL,0,0,&_glFogfv_2};
	VPL_ExtProcedure _glFogfv_F = {"glFogfv",glFogfv,&_glFogfv_1,NULL};

	VPL_Parameter _glFogf_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glFogf_1 = { kUnsignedType,4,NULL,0,0,&_glFogf_2};
	VPL_ExtProcedure _glFogf_F = {"glFogf",glFogf,&_glFogf_1,NULL};

	VPL_ExtProcedure _glFlush_F = {"glFlush",glFlush,NULL,NULL};

	VPL_ExtProcedure _glFinish_F = {"glFinish",glFinish,NULL,NULL};

	VPL_Parameter _glFeedbackBuffer_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glFeedbackBuffer_2 = { kUnsignedType,4,NULL,0,0,&_glFeedbackBuffer_3};
	VPL_Parameter _glFeedbackBuffer_1 = { kIntType,4,NULL,0,0,&_glFeedbackBuffer_2};
	VPL_ExtProcedure _glFeedbackBuffer_F = {"glFeedbackBuffer",glFeedbackBuffer,&_glFeedbackBuffer_1,NULL};

	VPL_Parameter _glEvalPoint2_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glEvalPoint2_1 = { kIntType,4,NULL,0,0,&_glEvalPoint2_2};
	VPL_ExtProcedure _glEvalPoint2_F = {"glEvalPoint2",glEvalPoint2,&_glEvalPoint2_1,NULL};

	VPL_Parameter _glEvalPoint1_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glEvalPoint1_F = {"glEvalPoint1",glEvalPoint1,&_glEvalPoint1_1,NULL};

	VPL_Parameter _glEvalMesh2_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glEvalMesh2_4 = { kIntType,4,NULL,0,0,&_glEvalMesh2_5};
	VPL_Parameter _glEvalMesh2_3 = { kIntType,4,NULL,0,0,&_glEvalMesh2_4};
	VPL_Parameter _glEvalMesh2_2 = { kIntType,4,NULL,0,0,&_glEvalMesh2_3};
	VPL_Parameter _glEvalMesh2_1 = { kUnsignedType,4,NULL,0,0,&_glEvalMesh2_2};
	VPL_ExtProcedure _glEvalMesh2_F = {"glEvalMesh2",glEvalMesh2,&_glEvalMesh2_1,NULL};

	VPL_Parameter _glEvalMesh1_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glEvalMesh1_2 = { kIntType,4,NULL,0,0,&_glEvalMesh1_3};
	VPL_Parameter _glEvalMesh1_1 = { kUnsignedType,4,NULL,0,0,&_glEvalMesh1_2};
	VPL_ExtProcedure _glEvalMesh1_F = {"glEvalMesh1",glEvalMesh1,&_glEvalMesh1_1,NULL};

	VPL_Parameter _glEvalCoord2fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glEvalCoord2fv_F = {"glEvalCoord2fv",glEvalCoord2fv,&_glEvalCoord2fv_1,NULL};

	VPL_Parameter _glEvalCoord2f_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glEvalCoord2f_1 = { kFloatType,4,NULL,0,0,&_glEvalCoord2f_2};
	VPL_ExtProcedure _glEvalCoord2f_F = {"glEvalCoord2f",glEvalCoord2f,&_glEvalCoord2f_1,NULL};

	VPL_Parameter _glEvalCoord2dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glEvalCoord2dv_F = {"glEvalCoord2dv",glEvalCoord2dv,&_glEvalCoord2dv_1,NULL};

	VPL_Parameter _glEvalCoord2d_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glEvalCoord2d_1 = { kFloatType,8,NULL,0,0,&_glEvalCoord2d_2};
	VPL_ExtProcedure _glEvalCoord2d_F = {"glEvalCoord2d",glEvalCoord2d,&_glEvalCoord2d_1,NULL};

	VPL_Parameter _glEvalCoord1fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glEvalCoord1fv_F = {"glEvalCoord1fv",glEvalCoord1fv,&_glEvalCoord1fv_1,NULL};

	VPL_Parameter _glEvalCoord1f_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glEvalCoord1f_F = {"glEvalCoord1f",glEvalCoord1f,&_glEvalCoord1f_1,NULL};

	VPL_Parameter _glEvalCoord1dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glEvalCoord1dv_F = {"glEvalCoord1dv",glEvalCoord1dv,&_glEvalCoord1dv_1,NULL};

	VPL_Parameter _glEvalCoord1d_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glEvalCoord1d_F = {"glEvalCoord1d",glEvalCoord1d,&_glEvalCoord1d_1,NULL};

	VPL_ExtProcedure _glEndList_F = {"glEndList",glEndList,NULL,NULL};

	VPL_ExtProcedure _glEnd_F = {"glEnd",glEnd,NULL,NULL};

	VPL_Parameter _glEnableClientState_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glEnableClientState_F = {"glEnableClientState",glEnableClientState,&_glEnableClientState_1,NULL};

	VPL_Parameter _glEnable_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glEnable_F = {"glEnable",glEnable,&_glEnable_1,NULL};

	VPL_Parameter _glEdgeFlagv_1 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_ExtProcedure _glEdgeFlagv_F = {"glEdgeFlagv",glEdgeFlagv,&_glEdgeFlagv_1,NULL};

	VPL_Parameter _glEdgeFlagPointer_2 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glEdgeFlagPointer_1 = { kIntType,4,NULL,0,0,&_glEdgeFlagPointer_2};
	VPL_ExtProcedure _glEdgeFlagPointer_F = {"glEdgeFlagPointer",glEdgeFlagPointer,&_glEdgeFlagPointer_1,NULL};

	VPL_Parameter _glEdgeFlag_1 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _glEdgeFlag_F = {"glEdgeFlag",glEdgeFlag,&_glEdgeFlag_1,NULL};

	VPL_Parameter _glDrawRangeElements_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glDrawRangeElements_5 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElements_6};
	VPL_Parameter _glDrawRangeElements_4 = { kIntType,4,NULL,0,0,&_glDrawRangeElements_5};
	VPL_Parameter _glDrawRangeElements_3 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElements_4};
	VPL_Parameter _glDrawRangeElements_2 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElements_3};
	VPL_Parameter _glDrawRangeElements_1 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElements_2};
	VPL_ExtProcedure _glDrawRangeElements_F = {"glDrawRangeElements",glDrawRangeElements,&_glDrawRangeElements_1,NULL};

	VPL_Parameter _glDrawPixels_5 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glDrawPixels_4 = { kUnsignedType,4,NULL,0,0,&_glDrawPixels_5};
	VPL_Parameter _glDrawPixels_3 = { kUnsignedType,4,NULL,0,0,&_glDrawPixels_4};
	VPL_Parameter _glDrawPixels_2 = { kIntType,4,NULL,0,0,&_glDrawPixels_3};
	VPL_Parameter _glDrawPixels_1 = { kIntType,4,NULL,0,0,&_glDrawPixels_2};
	VPL_ExtProcedure _glDrawPixels_F = {"glDrawPixels",glDrawPixels,&_glDrawPixels_1,NULL};

	VPL_Parameter _glDrawElements_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glDrawElements_3 = { kUnsignedType,4,NULL,0,0,&_glDrawElements_4};
	VPL_Parameter _glDrawElements_2 = { kIntType,4,NULL,0,0,&_glDrawElements_3};
	VPL_Parameter _glDrawElements_1 = { kUnsignedType,4,NULL,0,0,&_glDrawElements_2};
	VPL_ExtProcedure _glDrawElements_F = {"glDrawElements",glDrawElements,&_glDrawElements_1,NULL};

	VPL_Parameter _glDrawBuffer_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glDrawBuffer_F = {"glDrawBuffer",glDrawBuffer,&_glDrawBuffer_1,NULL};

	VPL_Parameter _glDrawArrays_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glDrawArrays_2 = { kIntType,4,NULL,0,0,&_glDrawArrays_3};
	VPL_Parameter _glDrawArrays_1 = { kUnsignedType,4,NULL,0,0,&_glDrawArrays_2};
	VPL_ExtProcedure _glDrawArrays_F = {"glDrawArrays",glDrawArrays,&_glDrawArrays_1,NULL};

	VPL_Parameter _glDisableClientState_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glDisableClientState_F = {"glDisableClientState",glDisableClientState,&_glDisableClientState_1,NULL};

	VPL_Parameter _glDisable_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glDisable_F = {"glDisable",glDisable,&_glDisable_1,NULL};

	VPL_Parameter _glDepthRange_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glDepthRange_1 = { kFloatType,8,NULL,0,0,&_glDepthRange_2};
	VPL_ExtProcedure _glDepthRange_F = {"glDepthRange",glDepthRange,&_glDepthRange_1,NULL};

	VPL_Parameter _glDepthMask_1 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _glDepthMask_F = {"glDepthMask",glDepthMask,&_glDepthMask_1,NULL};

	VPL_Parameter _glDepthFunc_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glDepthFunc_F = {"glDepthFunc",glDepthFunc,&_glDepthFunc_1,NULL};

	VPL_Parameter _glDeleteTextures_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteTextures_1 = { kIntType,4,NULL,0,0,&_glDeleteTextures_2};
	VPL_ExtProcedure _glDeleteTextures_F = {"glDeleteTextures",glDeleteTextures,&_glDeleteTextures_1,NULL};

	VPL_Parameter _glDeleteLists_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glDeleteLists_1 = { kUnsignedType,4,NULL,0,0,&_glDeleteLists_2};
	VPL_ExtProcedure _glDeleteLists_F = {"glDeleteLists",glDeleteLists,&_glDeleteLists_1,NULL};

	VPL_Parameter _glCullFace_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glCullFace_F = {"glCullFace",glCullFace,&_glCullFace_1,NULL};

	VPL_Parameter _glCopyTexSubImage3D_9 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyTexSubImage3D_8 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage3D_9};
	VPL_Parameter _glCopyTexSubImage3D_7 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage3D_8};
	VPL_Parameter _glCopyTexSubImage3D_6 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage3D_7};
	VPL_Parameter _glCopyTexSubImage3D_5 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage3D_6};
	VPL_Parameter _glCopyTexSubImage3D_4 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage3D_5};
	VPL_Parameter _glCopyTexSubImage3D_3 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage3D_4};
	VPL_Parameter _glCopyTexSubImage3D_2 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage3D_3};
	VPL_Parameter _glCopyTexSubImage3D_1 = { kUnsignedType,4,NULL,0,0,&_glCopyTexSubImage3D_2};
	VPL_ExtProcedure _glCopyTexSubImage3D_F = {"glCopyTexSubImage3D",glCopyTexSubImage3D,&_glCopyTexSubImage3D_1,NULL};

	VPL_Parameter _glCopyTexSubImage2D_8 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyTexSubImage2D_7 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage2D_8};
	VPL_Parameter _glCopyTexSubImage2D_6 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage2D_7};
	VPL_Parameter _glCopyTexSubImage2D_5 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage2D_6};
	VPL_Parameter _glCopyTexSubImage2D_4 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage2D_5};
	VPL_Parameter _glCopyTexSubImage2D_3 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage2D_4};
	VPL_Parameter _glCopyTexSubImage2D_2 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage2D_3};
	VPL_Parameter _glCopyTexSubImage2D_1 = { kUnsignedType,4,NULL,0,0,&_glCopyTexSubImage2D_2};
	VPL_ExtProcedure _glCopyTexSubImage2D_F = {"glCopyTexSubImage2D",glCopyTexSubImage2D,&_glCopyTexSubImage2D_1,NULL};

	VPL_Parameter _glCopyTexSubImage1D_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyTexSubImage1D_5 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage1D_6};
	VPL_Parameter _glCopyTexSubImage1D_4 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage1D_5};
	VPL_Parameter _glCopyTexSubImage1D_3 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage1D_4};
	VPL_Parameter _glCopyTexSubImage1D_2 = { kIntType,4,NULL,0,0,&_glCopyTexSubImage1D_3};
	VPL_Parameter _glCopyTexSubImage1D_1 = { kUnsignedType,4,NULL,0,0,&_glCopyTexSubImage1D_2};
	VPL_ExtProcedure _glCopyTexSubImage1D_F = {"glCopyTexSubImage1D",glCopyTexSubImage1D,&_glCopyTexSubImage1D_1,NULL};

	VPL_Parameter _glCopyTexImage2D_8 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyTexImage2D_7 = { kIntType,4,NULL,0,0,&_glCopyTexImage2D_8};
	VPL_Parameter _glCopyTexImage2D_6 = { kIntType,4,NULL,0,0,&_glCopyTexImage2D_7};
	VPL_Parameter _glCopyTexImage2D_5 = { kIntType,4,NULL,0,0,&_glCopyTexImage2D_6};
	VPL_Parameter _glCopyTexImage2D_4 = { kIntType,4,NULL,0,0,&_glCopyTexImage2D_5};
	VPL_Parameter _glCopyTexImage2D_3 = { kUnsignedType,4,NULL,0,0,&_glCopyTexImage2D_4};
	VPL_Parameter _glCopyTexImage2D_2 = { kIntType,4,NULL,0,0,&_glCopyTexImage2D_3};
	VPL_Parameter _glCopyTexImage2D_1 = { kUnsignedType,4,NULL,0,0,&_glCopyTexImage2D_2};
	VPL_ExtProcedure _glCopyTexImage2D_F = {"glCopyTexImage2D",glCopyTexImage2D,&_glCopyTexImage2D_1,NULL};

	VPL_Parameter _glCopyTexImage1D_7 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyTexImage1D_6 = { kIntType,4,NULL,0,0,&_glCopyTexImage1D_7};
	VPL_Parameter _glCopyTexImage1D_5 = { kIntType,4,NULL,0,0,&_glCopyTexImage1D_6};
	VPL_Parameter _glCopyTexImage1D_4 = { kIntType,4,NULL,0,0,&_glCopyTexImage1D_5};
	VPL_Parameter _glCopyTexImage1D_3 = { kUnsignedType,4,NULL,0,0,&_glCopyTexImage1D_4};
	VPL_Parameter _glCopyTexImage1D_2 = { kIntType,4,NULL,0,0,&_glCopyTexImage1D_3};
	VPL_Parameter _glCopyTexImage1D_1 = { kUnsignedType,4,NULL,0,0,&_glCopyTexImage1D_2};
	VPL_ExtProcedure _glCopyTexImage1D_F = {"glCopyTexImage1D",glCopyTexImage1D,&_glCopyTexImage1D_1,NULL};

	VPL_Parameter _glCopyPixels_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyPixels_4 = { kIntType,4,NULL,0,0,&_glCopyPixels_5};
	VPL_Parameter _glCopyPixels_3 = { kIntType,4,NULL,0,0,&_glCopyPixels_4};
	VPL_Parameter _glCopyPixels_2 = { kIntType,4,NULL,0,0,&_glCopyPixels_3};
	VPL_Parameter _glCopyPixels_1 = { kIntType,4,NULL,0,0,&_glCopyPixels_2};
	VPL_ExtProcedure _glCopyPixels_F = {"glCopyPixels",glCopyPixels,&_glCopyPixels_1,NULL};

	VPL_Parameter _glCopyConvolutionFilter2D_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyConvolutionFilter2D_5 = { kIntType,4,NULL,0,0,&_glCopyConvolutionFilter2D_6};
	VPL_Parameter _glCopyConvolutionFilter2D_4 = { kIntType,4,NULL,0,0,&_glCopyConvolutionFilter2D_5};
	VPL_Parameter _glCopyConvolutionFilter2D_3 = { kIntType,4,NULL,0,0,&_glCopyConvolutionFilter2D_4};
	VPL_Parameter _glCopyConvolutionFilter2D_2 = { kUnsignedType,4,NULL,0,0,&_glCopyConvolutionFilter2D_3};
	VPL_Parameter _glCopyConvolutionFilter2D_1 = { kUnsignedType,4,NULL,0,0,&_glCopyConvolutionFilter2D_2};
	VPL_ExtProcedure _glCopyConvolutionFilter2D_F = {"glCopyConvolutionFilter2D",glCopyConvolutionFilter2D,&_glCopyConvolutionFilter2D_1,NULL};

	VPL_Parameter _glCopyConvolutionFilter1D_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyConvolutionFilter1D_4 = { kIntType,4,NULL,0,0,&_glCopyConvolutionFilter1D_5};
	VPL_Parameter _glCopyConvolutionFilter1D_3 = { kIntType,4,NULL,0,0,&_glCopyConvolutionFilter1D_4};
	VPL_Parameter _glCopyConvolutionFilter1D_2 = { kUnsignedType,4,NULL,0,0,&_glCopyConvolutionFilter1D_3};
	VPL_Parameter _glCopyConvolutionFilter1D_1 = { kUnsignedType,4,NULL,0,0,&_glCopyConvolutionFilter1D_2};
	VPL_ExtProcedure _glCopyConvolutionFilter1D_F = {"glCopyConvolutionFilter1D",glCopyConvolutionFilter1D,&_glCopyConvolutionFilter1D_1,NULL};

	VPL_Parameter _glCopyColorTable_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyColorTable_4 = { kIntType,4,NULL,0,0,&_glCopyColorTable_5};
	VPL_Parameter _glCopyColorTable_3 = { kIntType,4,NULL,0,0,&_glCopyColorTable_4};
	VPL_Parameter _glCopyColorTable_2 = { kUnsignedType,4,NULL,0,0,&_glCopyColorTable_3};
	VPL_Parameter _glCopyColorTable_1 = { kUnsignedType,4,NULL,0,0,&_glCopyColorTable_2};
	VPL_ExtProcedure _glCopyColorTable_F = {"glCopyColorTable",glCopyColorTable,&_glCopyColorTable_1,NULL};

	VPL_Parameter _glCopyColorSubTable_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCopyColorSubTable_4 = { kIntType,4,NULL,0,0,&_glCopyColorSubTable_5};
	VPL_Parameter _glCopyColorSubTable_3 = { kIntType,4,NULL,0,0,&_glCopyColorSubTable_4};
	VPL_Parameter _glCopyColorSubTable_2 = { kIntType,4,NULL,0,0,&_glCopyColorSubTable_3};
	VPL_Parameter _glCopyColorSubTable_1 = { kUnsignedType,4,NULL,0,0,&_glCopyColorSubTable_2};
	VPL_ExtProcedure _glCopyColorSubTable_F = {"glCopyColorSubTable",glCopyColorSubTable,&_glCopyColorSubTable_1,NULL};

	VPL_Parameter _glConvolutionParameteriv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glConvolutionParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glConvolutionParameteriv_3};
	VPL_Parameter _glConvolutionParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glConvolutionParameteriv_2};
	VPL_ExtProcedure _glConvolutionParameteriv_F = {"glConvolutionParameteriv",glConvolutionParameteriv,&_glConvolutionParameteriv_1,NULL};

	VPL_Parameter _glConvolutionParameteri_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glConvolutionParameteri_2 = { kUnsignedType,4,NULL,0,0,&_glConvolutionParameteri_3};
	VPL_Parameter _glConvolutionParameteri_1 = { kUnsignedType,4,NULL,0,0,&_glConvolutionParameteri_2};
	VPL_ExtProcedure _glConvolutionParameteri_F = {"glConvolutionParameteri",glConvolutionParameteri,&_glConvolutionParameteri_1,NULL};

	VPL_Parameter _glConvolutionParameterfv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glConvolutionParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glConvolutionParameterfv_3};
	VPL_Parameter _glConvolutionParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glConvolutionParameterfv_2};
	VPL_ExtProcedure _glConvolutionParameterfv_F = {"glConvolutionParameterfv",glConvolutionParameterfv,&_glConvolutionParameterfv_1,NULL};

	VPL_Parameter _glConvolutionParameterf_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glConvolutionParameterf_2 = { kUnsignedType,4,NULL,0,0,&_glConvolutionParameterf_3};
	VPL_Parameter _glConvolutionParameterf_1 = { kUnsignedType,4,NULL,0,0,&_glConvolutionParameterf_2};
	VPL_ExtProcedure _glConvolutionParameterf_F = {"glConvolutionParameterf",glConvolutionParameterf,&_glConvolutionParameterf_1,NULL};

	VPL_Parameter _glConvolutionFilter2D_7 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glConvolutionFilter2D_6 = { kUnsignedType,4,NULL,0,0,&_glConvolutionFilter2D_7};
	VPL_Parameter _glConvolutionFilter2D_5 = { kUnsignedType,4,NULL,0,0,&_glConvolutionFilter2D_6};
	VPL_Parameter _glConvolutionFilter2D_4 = { kIntType,4,NULL,0,0,&_glConvolutionFilter2D_5};
	VPL_Parameter _glConvolutionFilter2D_3 = { kIntType,4,NULL,0,0,&_glConvolutionFilter2D_4};
	VPL_Parameter _glConvolutionFilter2D_2 = { kUnsignedType,4,NULL,0,0,&_glConvolutionFilter2D_3};
	VPL_Parameter _glConvolutionFilter2D_1 = { kUnsignedType,4,NULL,0,0,&_glConvolutionFilter2D_2};
	VPL_ExtProcedure _glConvolutionFilter2D_F = {"glConvolutionFilter2D",glConvolutionFilter2D,&_glConvolutionFilter2D_1,NULL};

	VPL_Parameter _glConvolutionFilter1D_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glConvolutionFilter1D_5 = { kUnsignedType,4,NULL,0,0,&_glConvolutionFilter1D_6};
	VPL_Parameter _glConvolutionFilter1D_4 = { kUnsignedType,4,NULL,0,0,&_glConvolutionFilter1D_5};
	VPL_Parameter _glConvolutionFilter1D_3 = { kIntType,4,NULL,0,0,&_glConvolutionFilter1D_4};
	VPL_Parameter _glConvolutionFilter1D_2 = { kUnsignedType,4,NULL,0,0,&_glConvolutionFilter1D_3};
	VPL_Parameter _glConvolutionFilter1D_1 = { kUnsignedType,4,NULL,0,0,&_glConvolutionFilter1D_2};
	VPL_ExtProcedure _glConvolutionFilter1D_F = {"glConvolutionFilter1D",glConvolutionFilter1D,&_glConvolutionFilter1D_1,NULL};

	VPL_Parameter _glColorTableParameteriv_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glColorTableParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glColorTableParameteriv_3};
	VPL_Parameter _glColorTableParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glColorTableParameteriv_2};
	VPL_ExtProcedure _glColorTableParameteriv_F = {"glColorTableParameteriv",glColorTableParameteriv,&_glColorTableParameteriv_1,NULL};

	VPL_Parameter _glColorTableParameterfv_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glColorTableParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glColorTableParameterfv_3};
	VPL_Parameter _glColorTableParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glColorTableParameterfv_2};
	VPL_ExtProcedure _glColorTableParameterfv_F = {"glColorTableParameterfv",glColorTableParameterfv,&_glColorTableParameterfv_1,NULL};

	VPL_Parameter _glColorTable_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glColorTable_5 = { kUnsignedType,4,NULL,0,0,&_glColorTable_6};
	VPL_Parameter _glColorTable_4 = { kUnsignedType,4,NULL,0,0,&_glColorTable_5};
	VPL_Parameter _glColorTable_3 = { kIntType,4,NULL,0,0,&_glColorTable_4};
	VPL_Parameter _glColorTable_2 = { kUnsignedType,4,NULL,0,0,&_glColorTable_3};
	VPL_Parameter _glColorTable_1 = { kUnsignedType,4,NULL,0,0,&_glColorTable_2};
	VPL_ExtProcedure _glColorTable_F = {"glColorTable",glColorTable,&_glColorTable_1,NULL};

	VPL_Parameter _glColorSubTable_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glColorSubTable_5 = { kUnsignedType,4,NULL,0,0,&_glColorSubTable_6};
	VPL_Parameter _glColorSubTable_4 = { kUnsignedType,4,NULL,0,0,&_glColorSubTable_5};
	VPL_Parameter _glColorSubTable_3 = { kIntType,4,NULL,0,0,&_glColorSubTable_4};
	VPL_Parameter _glColorSubTable_2 = { kIntType,4,NULL,0,0,&_glColorSubTable_3};
	VPL_Parameter _glColorSubTable_1 = { kUnsignedType,4,NULL,0,0,&_glColorSubTable_2};
	VPL_ExtProcedure _glColorSubTable_F = {"glColorSubTable",glColorSubTable,&_glColorSubTable_1,NULL};

	VPL_Parameter _glColorPointer_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glColorPointer_3 = { kIntType,4,NULL,0,0,&_glColorPointer_4};
	VPL_Parameter _glColorPointer_2 = { kUnsignedType,4,NULL,0,0,&_glColorPointer_3};
	VPL_Parameter _glColorPointer_1 = { kIntType,4,NULL,0,0,&_glColorPointer_2};
	VPL_ExtProcedure _glColorPointer_F = {"glColorPointer",glColorPointer,&_glColorPointer_1,NULL};

	VPL_Parameter _glColorMaterial_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glColorMaterial_1 = { kUnsignedType,4,NULL,0,0,&_glColorMaterial_2};
	VPL_ExtProcedure _glColorMaterial_F = {"glColorMaterial",glColorMaterial,&_glColorMaterial_1,NULL};

	VPL_Parameter _glColorMask_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glColorMask_3 = { kUnsignedType,1,NULL,0,0,&_glColorMask_4};
	VPL_Parameter _glColorMask_2 = { kUnsignedType,1,NULL,0,0,&_glColorMask_3};
	VPL_Parameter _glColorMask_1 = { kUnsignedType,1,NULL,0,0,&_glColorMask_2};
	VPL_ExtProcedure _glColorMask_F = {"glColorMask",glColorMask,&_glColorMask_1,NULL};

	VPL_Parameter _glColor4usv_1 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_ExtProcedure _glColor4usv_F = {"glColor4usv",glColor4usv,&_glColor4usv_1,NULL};

	VPL_Parameter _glColor4us_4 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _glColor4us_3 = { kUnsignedType,2,NULL,0,0,&_glColor4us_4};
	VPL_Parameter _glColor4us_2 = { kUnsignedType,2,NULL,0,0,&_glColor4us_3};
	VPL_Parameter _glColor4us_1 = { kUnsignedType,2,NULL,0,0,&_glColor4us_2};
	VPL_ExtProcedure _glColor4us_F = {"glColor4us",glColor4us,&_glColor4us_1,NULL};

	VPL_Parameter _glColor4uiv_1 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_ExtProcedure _glColor4uiv_F = {"glColor4uiv",glColor4uiv,&_glColor4uiv_1,NULL};

	VPL_Parameter _glColor4ui_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glColor4ui_3 = { kUnsignedType,4,NULL,0,0,&_glColor4ui_4};
	VPL_Parameter _glColor4ui_2 = { kUnsignedType,4,NULL,0,0,&_glColor4ui_3};
	VPL_Parameter _glColor4ui_1 = { kUnsignedType,4,NULL,0,0,&_glColor4ui_2};
	VPL_ExtProcedure _glColor4ui_F = {"glColor4ui",glColor4ui,&_glColor4ui_1,NULL};

	VPL_Parameter _glColor4ubv_1 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_ExtProcedure _glColor4ubv_F = {"glColor4ubv",glColor4ubv,&_glColor4ubv_1,NULL};

	VPL_Parameter _glColor4ub_4 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glColor4ub_3 = { kUnsignedType,1,NULL,0,0,&_glColor4ub_4};
	VPL_Parameter _glColor4ub_2 = { kUnsignedType,1,NULL,0,0,&_glColor4ub_3};
	VPL_Parameter _glColor4ub_1 = { kUnsignedType,1,NULL,0,0,&_glColor4ub_2};
	VPL_ExtProcedure _glColor4ub_F = {"glColor4ub",glColor4ub,&_glColor4ub_1,NULL};

	VPL_Parameter _glColor4sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glColor4sv_F = {"glColor4sv",glColor4sv,&_glColor4sv_1,NULL};

	VPL_Parameter _glColor4s_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glColor4s_3 = { kIntType,2,NULL,0,0,&_glColor4s_4};
	VPL_Parameter _glColor4s_2 = { kIntType,2,NULL,0,0,&_glColor4s_3};
	VPL_Parameter _glColor4s_1 = { kIntType,2,NULL,0,0,&_glColor4s_2};
	VPL_ExtProcedure _glColor4s_F = {"glColor4s",glColor4s,&_glColor4s_1,NULL};

	VPL_Parameter _glColor4iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glColor4iv_F = {"glColor4iv",glColor4iv,&_glColor4iv_1,NULL};

	VPL_Parameter _glColor4i_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glColor4i_3 = { kIntType,4,NULL,0,0,&_glColor4i_4};
	VPL_Parameter _glColor4i_2 = { kIntType,4,NULL,0,0,&_glColor4i_3};
	VPL_Parameter _glColor4i_1 = { kIntType,4,NULL,0,0,&_glColor4i_2};
	VPL_ExtProcedure _glColor4i_F = {"glColor4i",glColor4i,&_glColor4i_1,NULL};

	VPL_Parameter _glColor4fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glColor4fv_F = {"glColor4fv",glColor4fv,&_glColor4fv_1,NULL};

	VPL_Parameter _glColor4f_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glColor4f_3 = { kFloatType,4,NULL,0,0,&_glColor4f_4};
	VPL_Parameter _glColor4f_2 = { kFloatType,4,NULL,0,0,&_glColor4f_3};
	VPL_Parameter _glColor4f_1 = { kFloatType,4,NULL,0,0,&_glColor4f_2};
	VPL_ExtProcedure _glColor4f_F = {"glColor4f",glColor4f,&_glColor4f_1,NULL};

	VPL_Parameter _glColor4dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glColor4dv_F = {"glColor4dv",glColor4dv,&_glColor4dv_1,NULL};

	VPL_Parameter _glColor4d_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glColor4d_3 = { kFloatType,8,NULL,0,0,&_glColor4d_4};
	VPL_Parameter _glColor4d_2 = { kFloatType,8,NULL,0,0,&_glColor4d_3};
	VPL_Parameter _glColor4d_1 = { kFloatType,8,NULL,0,0,&_glColor4d_2};
	VPL_ExtProcedure _glColor4d_F = {"glColor4d",glColor4d,&_glColor4d_1,NULL};

	VPL_Parameter _glColor4bv_1 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_ExtProcedure _glColor4bv_F = {"glColor4bv",glColor4bv,&_glColor4bv_1,NULL};

	VPL_Parameter _glColor4b_4 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _glColor4b_3 = { kIntType,1,NULL,0,0,&_glColor4b_4};
	VPL_Parameter _glColor4b_2 = { kIntType,1,NULL,0,0,&_glColor4b_3};
	VPL_Parameter _glColor4b_1 = { kIntType,1,NULL,0,0,&_glColor4b_2};
	VPL_ExtProcedure _glColor4b_F = {"glColor4b",glColor4b,&_glColor4b_1,NULL};

	VPL_Parameter _glColor3usv_1 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_ExtProcedure _glColor3usv_F = {"glColor3usv",glColor3usv,&_glColor3usv_1,NULL};

	VPL_Parameter _glColor3us_3 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _glColor3us_2 = { kUnsignedType,2,NULL,0,0,&_glColor3us_3};
	VPL_Parameter _glColor3us_1 = { kUnsignedType,2,NULL,0,0,&_glColor3us_2};
	VPL_ExtProcedure _glColor3us_F = {"glColor3us",glColor3us,&_glColor3us_1,NULL};

	VPL_Parameter _glColor3uiv_1 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_ExtProcedure _glColor3uiv_F = {"glColor3uiv",glColor3uiv,&_glColor3uiv_1,NULL};

	VPL_Parameter _glColor3ui_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glColor3ui_2 = { kUnsignedType,4,NULL,0,0,&_glColor3ui_3};
	VPL_Parameter _glColor3ui_1 = { kUnsignedType,4,NULL,0,0,&_glColor3ui_2};
	VPL_ExtProcedure _glColor3ui_F = {"glColor3ui",glColor3ui,&_glColor3ui_1,NULL};

	VPL_Parameter _glColor3ubv_1 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_ExtProcedure _glColor3ubv_F = {"glColor3ubv",glColor3ubv,&_glColor3ubv_1,NULL};

	VPL_Parameter _glColor3ub_3 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glColor3ub_2 = { kUnsignedType,1,NULL,0,0,&_glColor3ub_3};
	VPL_Parameter _glColor3ub_1 = { kUnsignedType,1,NULL,0,0,&_glColor3ub_2};
	VPL_ExtProcedure _glColor3ub_F = {"glColor3ub",glColor3ub,&_glColor3ub_1,NULL};

	VPL_Parameter _glColor3sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glColor3sv_F = {"glColor3sv",glColor3sv,&_glColor3sv_1,NULL};

	VPL_Parameter _glColor3s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glColor3s_2 = { kIntType,2,NULL,0,0,&_glColor3s_3};
	VPL_Parameter _glColor3s_1 = { kIntType,2,NULL,0,0,&_glColor3s_2};
	VPL_ExtProcedure _glColor3s_F = {"glColor3s",glColor3s,&_glColor3s_1,NULL};

	VPL_Parameter _glColor3iv_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glColor3iv_F = {"glColor3iv",glColor3iv,&_glColor3iv_1,NULL};

	VPL_Parameter _glColor3i_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glColor3i_2 = { kIntType,4,NULL,0,0,&_glColor3i_3};
	VPL_Parameter _glColor3i_1 = { kIntType,4,NULL,0,0,&_glColor3i_2};
	VPL_ExtProcedure _glColor3i_F = {"glColor3i",glColor3i,&_glColor3i_1,NULL};

	VPL_Parameter _glColor3fv_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glColor3fv_F = {"glColor3fv",glColor3fv,&_glColor3fv_1,NULL};

	VPL_Parameter _glColor3f_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glColor3f_2 = { kFloatType,4,NULL,0,0,&_glColor3f_3};
	VPL_Parameter _glColor3f_1 = { kFloatType,4,NULL,0,0,&_glColor3f_2};
	VPL_ExtProcedure _glColor3f_F = {"glColor3f",glColor3f,&_glColor3f_1,NULL};

	VPL_Parameter _glColor3dv_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glColor3dv_F = {"glColor3dv",glColor3dv,&_glColor3dv_1,NULL};

	VPL_Parameter _glColor3d_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glColor3d_2 = { kFloatType,8,NULL,0,0,&_glColor3d_3};
	VPL_Parameter _glColor3d_1 = { kFloatType,8,NULL,0,0,&_glColor3d_2};
	VPL_ExtProcedure _glColor3d_F = {"glColor3d",glColor3d,&_glColor3d_1,NULL};

	VPL_Parameter _glColor3bv_1 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_ExtProcedure _glColor3bv_F = {"glColor3bv",glColor3bv,&_glColor3bv_1,NULL};

	VPL_Parameter _glColor3b_3 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _glColor3b_2 = { kIntType,1,NULL,0,0,&_glColor3b_3};
	VPL_Parameter _glColor3b_1 = { kIntType,1,NULL,0,0,&_glColor3b_2};
	VPL_ExtProcedure _glColor3b_F = {"glColor3b",glColor3b,&_glColor3b_1,NULL};

	VPL_Parameter _glClipPlane_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glClipPlane_1 = { kUnsignedType,4,NULL,0,0,&_glClipPlane_2};
	VPL_ExtProcedure _glClipPlane_F = {"glClipPlane",glClipPlane,&_glClipPlane_1,NULL};

	VPL_Parameter _glClearStencil_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glClearStencil_F = {"glClearStencil",glClearStencil,&_glClearStencil_1,NULL};

	VPL_Parameter _glClearIndex_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glClearIndex_F = {"glClearIndex",glClearIndex,&_glClearIndex_1,NULL};

	VPL_Parameter _glClearDepth_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glClearDepth_F = {"glClearDepth",glClearDepth,&_glClearDepth_1,NULL};

	VPL_Parameter _glClearColor_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glClearColor_3 = { kFloatType,4,NULL,0,0,&_glClearColor_4};
	VPL_Parameter _glClearColor_2 = { kFloatType,4,NULL,0,0,&_glClearColor_3};
	VPL_Parameter _glClearColor_1 = { kFloatType,4,NULL,0,0,&_glClearColor_2};
	VPL_ExtProcedure _glClearColor_F = {"glClearColor",glClearColor,&_glClearColor_1,NULL};

	VPL_Parameter _glClearAccum_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glClearAccum_3 = { kFloatType,4,NULL,0,0,&_glClearAccum_4};
	VPL_Parameter _glClearAccum_2 = { kFloatType,4,NULL,0,0,&_glClearAccum_3};
	VPL_Parameter _glClearAccum_1 = { kFloatType,4,NULL,0,0,&_glClearAccum_2};
	VPL_ExtProcedure _glClearAccum_F = {"glClearAccum",glClearAccum,&_glClearAccum_1,NULL};

	VPL_Parameter _glClear_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glClear_F = {"glClear",glClear,&_glClear_1,NULL};

	VPL_Parameter _glCallLists_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCallLists_2 = { kUnsignedType,4,NULL,0,0,&_glCallLists_3};
	VPL_Parameter _glCallLists_1 = { kIntType,4,NULL,0,0,&_glCallLists_2};
	VPL_ExtProcedure _glCallLists_F = {"glCallLists",glCallLists,&_glCallLists_1,NULL};

	VPL_Parameter _glCallList_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glCallList_F = {"glCallList",glCallList,&_glCallList_1,NULL};

	VPL_Parameter _glBlendFunc_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendFunc_1 = { kUnsignedType,4,NULL,0,0,&_glBlendFunc_2};
	VPL_ExtProcedure _glBlendFunc_F = {"glBlendFunc",glBlendFunc,&_glBlendFunc_1,NULL};

	VPL_Parameter _glBlendEquationSeparate_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendEquationSeparate_1 = { kUnsignedType,4,NULL,0,0,&_glBlendEquationSeparate_2};
	VPL_ExtProcedure _glBlendEquationSeparate_F = {"glBlendEquationSeparate",glBlendEquationSeparate,&_glBlendEquationSeparate_1,NULL};

	VPL_Parameter _glBlendEquation_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glBlendEquation_F = {"glBlendEquation",glBlendEquation,&_glBlendEquation_1,NULL};

	VPL_Parameter _glBlendColor_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendColor_3 = { kFloatType,4,NULL,0,0,&_glBlendColor_4};
	VPL_Parameter _glBlendColor_2 = { kFloatType,4,NULL,0,0,&_glBlendColor_3};
	VPL_Parameter _glBlendColor_1 = { kFloatType,4,NULL,0,0,&_glBlendColor_2};
	VPL_ExtProcedure _glBlendColor_F = {"glBlendColor",glBlendColor,&_glBlendColor_1,NULL};

	VPL_Parameter _glBitmap_7 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glBitmap_6 = { kFloatType,4,NULL,0,0,&_glBitmap_7};
	VPL_Parameter _glBitmap_5 = { kFloatType,4,NULL,0,0,&_glBitmap_6};
	VPL_Parameter _glBitmap_4 = { kFloatType,4,NULL,0,0,&_glBitmap_5};
	VPL_Parameter _glBitmap_3 = { kFloatType,4,NULL,0,0,&_glBitmap_4};
	VPL_Parameter _glBitmap_2 = { kIntType,4,NULL,0,0,&_glBitmap_3};
	VPL_Parameter _glBitmap_1 = { kIntType,4,NULL,0,0,&_glBitmap_2};
	VPL_ExtProcedure _glBitmap_F = {"glBitmap",glBitmap,&_glBitmap_1,NULL};

	VPL_Parameter _glBindTexture_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindTexture_1 = { kUnsignedType,4,NULL,0,0,&_glBindTexture_2};
	VPL_ExtProcedure _glBindTexture_F = {"glBindTexture",glBindTexture,&_glBindTexture_1,NULL};

	VPL_Parameter _glBegin_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glBegin_F = {"glBegin",glBegin,&_glBegin_1,NULL};

	VPL_Parameter _glArrayElement_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glArrayElement_F = {"glArrayElement",glArrayElement,&_glArrayElement_1,NULL};

	VPL_Parameter _glAreTexturesResident_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glAreTexturesResident_3 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _glAreTexturesResident_2 = { kPointerType,4,"unsigned long",1,1,&_glAreTexturesResident_3};
	VPL_Parameter _glAreTexturesResident_1 = { kIntType,4,NULL,0,0,&_glAreTexturesResident_2};
	VPL_ExtProcedure _glAreTexturesResident_F = {"glAreTexturesResident",glAreTexturesResident,&_glAreTexturesResident_1,&_glAreTexturesResident_R};

	VPL_Parameter _glAlphaFunc_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glAlphaFunc_1 = { kUnsignedType,4,NULL,0,0,&_glAlphaFunc_2};
	VPL_ExtProcedure _glAlphaFunc_F = {"glAlphaFunc",glAlphaFunc,&_glAlphaFunc_1,NULL};

	VPL_Parameter _glAccum_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glAccum_1 = { kUnsignedType,4,NULL,0,0,&_glAccum_2};
	VPL_ExtProcedure _glAccum_F = {"glAccum",glAccum,&_glAccum_1,NULL};

	VPL_Parameter _glPointParameterivNV_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glPointParameterivNV_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameterivNV_2};
	VPL_ExtProcedure _glPointParameterivNV_F = {"glPointParameterivNV",glPointParameterivNV,&_glPointParameterivNV_1,NULL};

	VPL_Parameter _glPointParameteriNV_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glPointParameteriNV_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameteriNV_2};
	VPL_ExtProcedure _glPointParameteriNV_F = {"glPointParameteriNV",glPointParameteriNV,&_glPointParameteriNV_1,NULL};

	VPL_Parameter _glGetCombinerStageParameterfvNV_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetCombinerStageParameterfvNV_2 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerStageParameterfvNV_3};
	VPL_Parameter _glGetCombinerStageParameterfvNV_1 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerStageParameterfvNV_2};
	VPL_ExtProcedure _glGetCombinerStageParameterfvNV_F = {"glGetCombinerStageParameterfvNV",glGetCombinerStageParameterfvNV,&_glGetCombinerStageParameterfvNV_1,NULL};

	VPL_Parameter _glCombinerStageParameterfvNV_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glCombinerStageParameterfvNV_2 = { kUnsignedType,4,NULL,0,0,&_glCombinerStageParameterfvNV_3};
	VPL_Parameter _glCombinerStageParameterfvNV_1 = { kUnsignedType,4,NULL,0,0,&_glCombinerStageParameterfvNV_2};
	VPL_ExtProcedure _glCombinerStageParameterfvNV_F = {"glCombinerStageParameterfvNV",glCombinerStageParameterfvNV,&_glCombinerStageParameterfvNV_1,NULL};

	VPL_Parameter _glGetFinalCombinerInputParameterivNV_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetFinalCombinerInputParameterivNV_2 = { kUnsignedType,4,NULL,0,0,&_glGetFinalCombinerInputParameterivNV_3};
	VPL_Parameter _glGetFinalCombinerInputParameterivNV_1 = { kUnsignedType,4,NULL,0,0,&_glGetFinalCombinerInputParameterivNV_2};
	VPL_ExtProcedure _glGetFinalCombinerInputParameterivNV_F = {"glGetFinalCombinerInputParameterivNV",glGetFinalCombinerInputParameterivNV,&_glGetFinalCombinerInputParameterivNV_1,NULL};

	VPL_Parameter _glGetFinalCombinerInputParameterfvNV_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetFinalCombinerInputParameterfvNV_2 = { kUnsignedType,4,NULL,0,0,&_glGetFinalCombinerInputParameterfvNV_3};
	VPL_Parameter _glGetFinalCombinerInputParameterfvNV_1 = { kUnsignedType,4,NULL,0,0,&_glGetFinalCombinerInputParameterfvNV_2};
	VPL_ExtProcedure _glGetFinalCombinerInputParameterfvNV_F = {"glGetFinalCombinerInputParameterfvNV",glGetFinalCombinerInputParameterfvNV,&_glGetFinalCombinerInputParameterfvNV_1,NULL};

	VPL_Parameter _glGetCombinerOutputParameterivNV_4 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetCombinerOutputParameterivNV_3 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerOutputParameterivNV_4};
	VPL_Parameter _glGetCombinerOutputParameterivNV_2 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerOutputParameterivNV_3};
	VPL_Parameter _glGetCombinerOutputParameterivNV_1 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerOutputParameterivNV_2};
	VPL_ExtProcedure _glGetCombinerOutputParameterivNV_F = {"glGetCombinerOutputParameterivNV",glGetCombinerOutputParameterivNV,&_glGetCombinerOutputParameterivNV_1,NULL};

	VPL_Parameter _glGetCombinerOutputParameterfvNV_4 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetCombinerOutputParameterfvNV_3 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerOutputParameterfvNV_4};
	VPL_Parameter _glGetCombinerOutputParameterfvNV_2 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerOutputParameterfvNV_3};
	VPL_Parameter _glGetCombinerOutputParameterfvNV_1 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerOutputParameterfvNV_2};
	VPL_ExtProcedure _glGetCombinerOutputParameterfvNV_F = {"glGetCombinerOutputParameterfvNV",glGetCombinerOutputParameterfvNV,&_glGetCombinerOutputParameterfvNV_1,NULL};

	VPL_Parameter _glGetCombinerInputParameterivNV_5 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetCombinerInputParameterivNV_4 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerInputParameterivNV_5};
	VPL_Parameter _glGetCombinerInputParameterivNV_3 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerInputParameterivNV_4};
	VPL_Parameter _glGetCombinerInputParameterivNV_2 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerInputParameterivNV_3};
	VPL_Parameter _glGetCombinerInputParameterivNV_1 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerInputParameterivNV_2};
	VPL_ExtProcedure _glGetCombinerInputParameterivNV_F = {"glGetCombinerInputParameterivNV",glGetCombinerInputParameterivNV,&_glGetCombinerInputParameterivNV_1,NULL};

	VPL_Parameter _glGetCombinerInputParameterfvNV_5 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetCombinerInputParameterfvNV_4 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerInputParameterfvNV_5};
	VPL_Parameter _glGetCombinerInputParameterfvNV_3 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerInputParameterfvNV_4};
	VPL_Parameter _glGetCombinerInputParameterfvNV_2 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerInputParameterfvNV_3};
	VPL_Parameter _glGetCombinerInputParameterfvNV_1 = { kUnsignedType,4,NULL,0,0,&_glGetCombinerInputParameterfvNV_2};
	VPL_ExtProcedure _glGetCombinerInputParameterfvNV_F = {"glGetCombinerInputParameterfvNV",glGetCombinerInputParameterfvNV,&_glGetCombinerInputParameterfvNV_1,NULL};

	VPL_Parameter _glFinalCombinerInputNV_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glFinalCombinerInputNV_3 = { kUnsignedType,4,NULL,0,0,&_glFinalCombinerInputNV_4};
	VPL_Parameter _glFinalCombinerInputNV_2 = { kUnsignedType,4,NULL,0,0,&_glFinalCombinerInputNV_3};
	VPL_Parameter _glFinalCombinerInputNV_1 = { kUnsignedType,4,NULL,0,0,&_glFinalCombinerInputNV_2};
	VPL_ExtProcedure _glFinalCombinerInputNV_F = {"glFinalCombinerInputNV",glFinalCombinerInputNV,&_glFinalCombinerInputNV_1,NULL};

	VPL_Parameter _glCombinerOutputNV_10 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glCombinerOutputNV_9 = { kUnsignedType,1,NULL,0,0,&_glCombinerOutputNV_10};
	VPL_Parameter _glCombinerOutputNV_8 = { kUnsignedType,1,NULL,0,0,&_glCombinerOutputNV_9};
	VPL_Parameter _glCombinerOutputNV_7 = { kUnsignedType,4,NULL,0,0,&_glCombinerOutputNV_8};
	VPL_Parameter _glCombinerOutputNV_6 = { kUnsignedType,4,NULL,0,0,&_glCombinerOutputNV_7};
	VPL_Parameter _glCombinerOutputNV_5 = { kUnsignedType,4,NULL,0,0,&_glCombinerOutputNV_6};
	VPL_Parameter _glCombinerOutputNV_4 = { kUnsignedType,4,NULL,0,0,&_glCombinerOutputNV_5};
	VPL_Parameter _glCombinerOutputNV_3 = { kUnsignedType,4,NULL,0,0,&_glCombinerOutputNV_4};
	VPL_Parameter _glCombinerOutputNV_2 = { kUnsignedType,4,NULL,0,0,&_glCombinerOutputNV_3};
	VPL_Parameter _glCombinerOutputNV_1 = { kUnsignedType,4,NULL,0,0,&_glCombinerOutputNV_2};
	VPL_ExtProcedure _glCombinerOutputNV_F = {"glCombinerOutputNV",glCombinerOutputNV,&_glCombinerOutputNV_1,NULL};

	VPL_Parameter _glCombinerInputNV_6 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glCombinerInputNV_5 = { kUnsignedType,4,NULL,0,0,&_glCombinerInputNV_6};
	VPL_Parameter _glCombinerInputNV_4 = { kUnsignedType,4,NULL,0,0,&_glCombinerInputNV_5};
	VPL_Parameter _glCombinerInputNV_3 = { kUnsignedType,4,NULL,0,0,&_glCombinerInputNV_4};
	VPL_Parameter _glCombinerInputNV_2 = { kUnsignedType,4,NULL,0,0,&_glCombinerInputNV_3};
	VPL_Parameter _glCombinerInputNV_1 = { kUnsignedType,4,NULL,0,0,&_glCombinerInputNV_2};
	VPL_ExtProcedure _glCombinerInputNV_F = {"glCombinerInputNV",glCombinerInputNV,&_glCombinerInputNV_1,NULL};

	VPL_Parameter _glCombinerParameteriNV_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glCombinerParameteriNV_1 = { kUnsignedType,4,NULL,0,0,&_glCombinerParameteriNV_2};
	VPL_ExtProcedure _glCombinerParameteriNV_F = {"glCombinerParameteriNV",glCombinerParameteriNV,&_glCombinerParameteriNV_1,NULL};

	VPL_Parameter _glCombinerParameterivNV_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glCombinerParameterivNV_1 = { kUnsignedType,4,NULL,0,0,&_glCombinerParameterivNV_2};
	VPL_ExtProcedure _glCombinerParameterivNV_F = {"glCombinerParameterivNV",glCombinerParameterivNV,&_glCombinerParameterivNV_1,NULL};

	VPL_Parameter _glCombinerParameterfNV_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glCombinerParameterfNV_1 = { kUnsignedType,4,NULL,0,0,&_glCombinerParameterfNV_2};
	VPL_ExtProcedure _glCombinerParameterfNV_F = {"glCombinerParameterfNV",glCombinerParameterfNV,&_glCombinerParameterfNV_1,NULL};

	VPL_Parameter _glCombinerParameterfvNV_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glCombinerParameterfvNV_1 = { kUnsignedType,4,NULL,0,0,&_glCombinerParameterfvNV_2};
	VPL_ExtProcedure _glCombinerParameterfvNV_F = {"glCombinerParameterfvNV",glCombinerParameterfvNV,&_glCombinerParameterfvNV_1,NULL};

	VPL_Parameter _glPNTrianglesfATIX_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glPNTrianglesfATIX_1 = { kUnsignedType,4,NULL,0,0,&_glPNTrianglesfATIX_2};
	VPL_ExtProcedure _glPNTrianglesfATIX_F = {"glPNTrianglesfATIX",glPNTrianglesfATIX,&_glPNTrianglesfATIX_1,NULL};

	VPL_Parameter _glPNTrianglesiATIX_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glPNTrianglesiATIX_1 = { kUnsignedType,4,NULL,0,0,&_glPNTrianglesiATIX_2};
	VPL_ExtProcedure _glPNTrianglesiATIX_F = {"glPNTrianglesiATIX",glPNTrianglesiATIX,&_glPNTrianglesiATIX_1,NULL};

	VPL_Parameter _glStencilFuncSeparateATI_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glStencilFuncSeparateATI_3 = { kIntType,4,NULL,0,0,&_glStencilFuncSeparateATI_4};
	VPL_Parameter _glStencilFuncSeparateATI_2 = { kUnsignedType,4,NULL,0,0,&_glStencilFuncSeparateATI_3};
	VPL_Parameter _glStencilFuncSeparateATI_1 = { kUnsignedType,4,NULL,0,0,&_glStencilFuncSeparateATI_2};
	VPL_ExtProcedure _glStencilFuncSeparateATI_F = {"glStencilFuncSeparateATI",glStencilFuncSeparateATI,&_glStencilFuncSeparateATI_1,NULL};

	VPL_Parameter _glStencilOpSeparateATI_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glStencilOpSeparateATI_3 = { kUnsignedType,4,NULL,0,0,&_glStencilOpSeparateATI_4};
	VPL_Parameter _glStencilOpSeparateATI_2 = { kUnsignedType,4,NULL,0,0,&_glStencilOpSeparateATI_3};
	VPL_Parameter _glStencilOpSeparateATI_1 = { kUnsignedType,4,NULL,0,0,&_glStencilOpSeparateATI_2};
	VPL_ExtProcedure _glStencilOpSeparateATI_F = {"glStencilOpSeparateATI",glStencilOpSeparateATI,&_glStencilOpSeparateATI_1,NULL};

	VPL_Parameter _glBlendEquationSeparateATI_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendEquationSeparateATI_1 = { kUnsignedType,4,NULL,0,0,&_glBlendEquationSeparateATI_2};
	VPL_ExtProcedure _glBlendEquationSeparateATI_F = {"glBlendEquationSeparateATI",glBlendEquationSeparateATI,&_glBlendEquationSeparateATI_1,NULL};

	VPL_Parameter _glPNTrianglesfATI_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glPNTrianglesfATI_1 = { kUnsignedType,4,NULL,0,0,&_glPNTrianglesfATI_2};
	VPL_ExtProcedure _glPNTrianglesfATI_F = {"glPNTrianglesfATI",glPNTrianglesfATI,&_glPNTrianglesfATI_1,NULL};

	VPL_Parameter _glPNTrianglesiATI_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glPNTrianglesiATI_1 = { kUnsignedType,4,NULL,0,0,&_glPNTrianglesiATI_2};
	VPL_ExtProcedure _glPNTrianglesiATI_F = {"glPNTrianglesiATI",glPNTrianglesiATI,&_glPNTrianglesiATI_1,NULL};

	VPL_Parameter _glMapVertexAttrib2fAPPLE_11 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_10 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_11};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_9 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_10};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_8 = { kFloatType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_9};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_7 = { kFloatType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_8};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_6 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_7};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_5 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_6};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_4 = { kFloatType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_5};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_3 = { kFloatType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_4};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_3};
	VPL_Parameter _glMapVertexAttrib2fAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glMapVertexAttrib2fAPPLE_2};
	VPL_ExtProcedure _glMapVertexAttrib2fAPPLE_F = {"glMapVertexAttrib2fAPPLE",glMapVertexAttrib2fAPPLE,&_glMapVertexAttrib2fAPPLE_1,NULL};

	VPL_Parameter _glMapVertexAttrib2dAPPLE_11 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_10 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib2dAPPLE_11};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_9 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib2dAPPLE_10};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_8 = { kFloatType,8,NULL,0,0,&_glMapVertexAttrib2dAPPLE_9};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_7 = { kFloatType,8,NULL,0,0,&_glMapVertexAttrib2dAPPLE_8};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_6 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib2dAPPLE_7};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_5 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib2dAPPLE_6};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_4 = { kFloatType,8,NULL,0,0,&_glMapVertexAttrib2dAPPLE_5};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_3 = { kFloatType,8,NULL,0,0,&_glMapVertexAttrib2dAPPLE_4};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glMapVertexAttrib2dAPPLE_3};
	VPL_Parameter _glMapVertexAttrib2dAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glMapVertexAttrib2dAPPLE_2};
	VPL_ExtProcedure _glMapVertexAttrib2dAPPLE_F = {"glMapVertexAttrib2dAPPLE",glMapVertexAttrib2dAPPLE,&_glMapVertexAttrib2dAPPLE_1,NULL};

	VPL_Parameter _glMapVertexAttrib1fAPPLE_7 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMapVertexAttrib1fAPPLE_6 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib1fAPPLE_7};
	VPL_Parameter _glMapVertexAttrib1fAPPLE_5 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib1fAPPLE_6};
	VPL_Parameter _glMapVertexAttrib1fAPPLE_4 = { kFloatType,4,NULL,0,0,&_glMapVertexAttrib1fAPPLE_5};
	VPL_Parameter _glMapVertexAttrib1fAPPLE_3 = { kFloatType,4,NULL,0,0,&_glMapVertexAttrib1fAPPLE_4};
	VPL_Parameter _glMapVertexAttrib1fAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glMapVertexAttrib1fAPPLE_3};
	VPL_Parameter _glMapVertexAttrib1fAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glMapVertexAttrib1fAPPLE_2};
	VPL_ExtProcedure _glMapVertexAttrib1fAPPLE_F = {"glMapVertexAttrib1fAPPLE",glMapVertexAttrib1fAPPLE,&_glMapVertexAttrib1fAPPLE_1,NULL};

	VPL_Parameter _glMapVertexAttrib1dAPPLE_7 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMapVertexAttrib1dAPPLE_6 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib1dAPPLE_7};
	VPL_Parameter _glMapVertexAttrib1dAPPLE_5 = { kIntType,4,NULL,0,0,&_glMapVertexAttrib1dAPPLE_6};
	VPL_Parameter _glMapVertexAttrib1dAPPLE_4 = { kFloatType,8,NULL,0,0,&_glMapVertexAttrib1dAPPLE_5};
	VPL_Parameter _glMapVertexAttrib1dAPPLE_3 = { kFloatType,8,NULL,0,0,&_glMapVertexAttrib1dAPPLE_4};
	VPL_Parameter _glMapVertexAttrib1dAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glMapVertexAttrib1dAPPLE_3};
	VPL_Parameter _glMapVertexAttrib1dAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glMapVertexAttrib1dAPPLE_2};
	VPL_ExtProcedure _glMapVertexAttrib1dAPPLE_F = {"glMapVertexAttrib1dAPPLE",glMapVertexAttrib1dAPPLE,&_glMapVertexAttrib1dAPPLE_1,NULL};

	VPL_Parameter _glIsVertexAttribEnabledAPPLE_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsVertexAttribEnabledAPPLE_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glIsVertexAttribEnabledAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glIsVertexAttribEnabledAPPLE_2};
	VPL_ExtProcedure _glIsVertexAttribEnabledAPPLE_F = {"glIsVertexAttribEnabledAPPLE",glIsVertexAttribEnabledAPPLE,&_glIsVertexAttribEnabledAPPLE_1,&_glIsVertexAttribEnabledAPPLE_R};

	VPL_Parameter _glDisableVertexAttribAPPLE_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glDisableVertexAttribAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glDisableVertexAttribAPPLE_2};
	VPL_ExtProcedure _glDisableVertexAttribAPPLE_F = {"glDisableVertexAttribAPPLE",glDisableVertexAttribAPPLE,&_glDisableVertexAttribAPPLE_1,NULL};

	VPL_Parameter _glEnableVertexAttribAPPLE_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glEnableVertexAttribAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glEnableVertexAttribAPPLE_2};
	VPL_ExtProcedure _glEnableVertexAttribAPPLE_F = {"glEnableVertexAttribAPPLE",glEnableVertexAttribAPPLE,&_glEnableVertexAttribAPPLE_1,NULL};

	VPL_ExtProcedure _glSwapAPPLE_F = {"glSwapAPPLE",glSwapAPPLE,NULL,NULL};

	VPL_ExtProcedure _glFinishRenderAPPLE_F = {"glFinishRenderAPPLE",glFinishRenderAPPLE,NULL,NULL};

	VPL_ExtProcedure _glFlushRenderAPPLE_F = {"glFlushRenderAPPLE",glFlushRenderAPPLE,NULL,NULL};

	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_5 = { kPointerType,4,"long int",1,1,&_glMultiDrawRangeElementArrayAPPLE_6};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_4 = { kPointerType,4,"long int",1,1,&_glMultiDrawRangeElementArrayAPPLE_5};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_3 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawRangeElementArrayAPPLE_4};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawRangeElementArrayAPPLE_3};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawRangeElementArrayAPPLE_2};
	VPL_ExtProcedure _glMultiDrawRangeElementArrayAPPLE_F = {"glMultiDrawRangeElementArrayAPPLE",glMultiDrawRangeElementArrayAPPLE,&_glMultiDrawRangeElementArrayAPPLE_1,NULL};

	VPL_Parameter _glMultiDrawElementArrayAPPLE_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawElementArrayAPPLE_3 = { kPointerType,4,"long int",1,1,&_glMultiDrawElementArrayAPPLE_4};
	VPL_Parameter _glMultiDrawElementArrayAPPLE_2 = { kPointerType,4,"long int",1,1,&_glMultiDrawElementArrayAPPLE_3};
	VPL_Parameter _glMultiDrawElementArrayAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawElementArrayAPPLE_2};
	VPL_ExtProcedure _glMultiDrawElementArrayAPPLE_F = {"glMultiDrawElementArrayAPPLE",glMultiDrawElementArrayAPPLE,&_glMultiDrawElementArrayAPPLE_1,NULL};

	VPL_Parameter _glDrawRangeElementArrayAPPLE_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glDrawRangeElementArrayAPPLE_4 = { kIntType,4,NULL,0,0,&_glDrawRangeElementArrayAPPLE_5};
	VPL_Parameter _glDrawRangeElementArrayAPPLE_3 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElementArrayAPPLE_4};
	VPL_Parameter _glDrawRangeElementArrayAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElementArrayAPPLE_3};
	VPL_Parameter _glDrawRangeElementArrayAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElementArrayAPPLE_2};
	VPL_ExtProcedure _glDrawRangeElementArrayAPPLE_F = {"glDrawRangeElementArrayAPPLE",glDrawRangeElementArrayAPPLE,&_glDrawRangeElementArrayAPPLE_1,NULL};

	VPL_Parameter _glDrawElementArrayAPPLE_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glDrawElementArrayAPPLE_2 = { kIntType,4,NULL,0,0,&_glDrawElementArrayAPPLE_3};
	VPL_Parameter _glDrawElementArrayAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glDrawElementArrayAPPLE_2};
	VPL_ExtProcedure _glDrawElementArrayAPPLE_F = {"glDrawElementArrayAPPLE",glDrawElementArrayAPPLE,&_glDrawElementArrayAPPLE_1,NULL};

	VPL_Parameter _glElementPointerAPPLE_2 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glElementPointerAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glElementPointerAPPLE_2};
	VPL_ExtProcedure _glElementPointerAPPLE_F = {"glElementPointerAPPLE",glElementPointerAPPLE,&_glElementPointerAPPLE_1,NULL};

	VPL_Parameter _glFinishObjectAPPLE_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glFinishObjectAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glFinishObjectAPPLE_2};
	VPL_ExtProcedure _glFinishObjectAPPLE_F = {"glFinishObjectAPPLE",glFinishObjectAPPLE,&_glFinishObjectAPPLE_1,NULL};

	VPL_Parameter _glTestObjectAPPLE_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glTestObjectAPPLE_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glTestObjectAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glTestObjectAPPLE_2};
	VPL_ExtProcedure _glTestObjectAPPLE_F = {"glTestObjectAPPLE",glTestObjectAPPLE,&_glTestObjectAPPLE_1,&_glTestObjectAPPLE_R};

	VPL_Parameter _glFinishFenceAPPLE_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glFinishFenceAPPLE_F = {"glFinishFenceAPPLE",glFinishFenceAPPLE,&_glFinishFenceAPPLE_1,NULL};

	VPL_Parameter _glTestFenceAPPLE_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glTestFenceAPPLE_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glTestFenceAPPLE_F = {"glTestFenceAPPLE",glTestFenceAPPLE,&_glTestFenceAPPLE_1,&_glTestFenceAPPLE_R};

	VPL_Parameter _glIsFenceAPPLE_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsFenceAPPLE_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsFenceAPPLE_F = {"glIsFenceAPPLE",glIsFenceAPPLE,&_glIsFenceAPPLE_1,&_glIsFenceAPPLE_R};

	VPL_Parameter _glSetFenceAPPLE_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glSetFenceAPPLE_F = {"glSetFenceAPPLE",glSetFenceAPPLE,&_glSetFenceAPPLE_1,NULL};

	VPL_Parameter _glDeleteFencesAPPLE_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteFencesAPPLE_1 = { kIntType,4,NULL,0,0,&_glDeleteFencesAPPLE_2};
	VPL_ExtProcedure _glDeleteFencesAPPLE_F = {"glDeleteFencesAPPLE",glDeleteFencesAPPLE,&_glDeleteFencesAPPLE_1,NULL};

	VPL_Parameter _glGenFencesAPPLE_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenFencesAPPLE_1 = { kIntType,4,NULL,0,0,&_glGenFencesAPPLE_2};
	VPL_ExtProcedure _glGenFencesAPPLE_F = {"glGenFencesAPPLE",glGenFencesAPPLE,&_glGenFencesAPPLE_1,NULL};

	VPL_Parameter _glIsVertexArrayAPPLE_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsVertexArrayAPPLE_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsVertexArrayAPPLE_F = {"glIsVertexArrayAPPLE",glIsVertexArrayAPPLE,&_glIsVertexArrayAPPLE_1,&_glIsVertexArrayAPPLE_R};

	VPL_Parameter _glGenVertexArraysAPPLE_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenVertexArraysAPPLE_1 = { kIntType,4,NULL,0,0,&_glGenVertexArraysAPPLE_2};
	VPL_ExtProcedure _glGenVertexArraysAPPLE_F = {"glGenVertexArraysAPPLE",glGenVertexArraysAPPLE,&_glGenVertexArraysAPPLE_1,NULL};

	VPL_Parameter _glDeleteVertexArraysAPPLE_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteVertexArraysAPPLE_1 = { kIntType,4,NULL,0,0,&_glDeleteVertexArraysAPPLE_2};
	VPL_ExtProcedure _glDeleteVertexArraysAPPLE_F = {"glDeleteVertexArraysAPPLE",glDeleteVertexArraysAPPLE,&_glDeleteVertexArraysAPPLE_1,NULL};

	VPL_Parameter _glBindVertexArrayAPPLE_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glBindVertexArrayAPPLE_F = {"glBindVertexArrayAPPLE",glBindVertexArrayAPPLE,&_glBindVertexArrayAPPLE_1,NULL};

	VPL_Parameter _glVertexArrayParameteriAPPLE_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexArrayParameteriAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glVertexArrayParameteriAPPLE_2};
	VPL_ExtProcedure _glVertexArrayParameteriAPPLE_F = {"glVertexArrayParameteriAPPLE",glVertexArrayParameteriAPPLE,&_glVertexArrayParameteriAPPLE_1,NULL};

	VPL_Parameter _glFlushVertexArrayRangeAPPLE_2 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glFlushVertexArrayRangeAPPLE_1 = { kIntType,4,NULL,0,0,&_glFlushVertexArrayRangeAPPLE_2};
	VPL_ExtProcedure _glFlushVertexArrayRangeAPPLE_F = {"glFlushVertexArrayRangeAPPLE",glFlushVertexArrayRangeAPPLE,&_glFlushVertexArrayRangeAPPLE_1,NULL};

	VPL_Parameter _glVertexArrayRangeAPPLE_2 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glVertexArrayRangeAPPLE_1 = { kIntType,4,NULL,0,0,&_glVertexArrayRangeAPPLE_2};
	VPL_ExtProcedure _glVertexArrayRangeAPPLE_F = {"glVertexArrayRangeAPPLE",glVertexArrayRangeAPPLE,&_glVertexArrayRangeAPPLE_1,NULL};

	VPL_Parameter _glGetTexParameterPointervAPPLE_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetTexParameterPointervAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterPointervAPPLE_3};
	VPL_Parameter _glGetTexParameterPointervAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterPointervAPPLE_2};
	VPL_ExtProcedure _glGetTexParameterPointervAPPLE_F = {"glGetTexParameterPointervAPPLE",glGetTexParameterPointervAPPLE,&_glGetTexParameterPointervAPPLE_1,NULL};

	VPL_Parameter _glTextureRangeAPPLE_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glTextureRangeAPPLE_2 = { kIntType,4,NULL,0,0,&_glTextureRangeAPPLE_3};
	VPL_Parameter _glTextureRangeAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glTextureRangeAPPLE_2};
	VPL_ExtProcedure _glTextureRangeAPPLE_F = {"glTextureRangeAPPLE",glTextureRangeAPPLE,&_glTextureRangeAPPLE_1,NULL};

	VPL_Parameter _glGenerateMipmapEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glGenerateMipmapEXT_F = {"glGenerateMipmapEXT",glGenerateMipmapEXT,&_glGenerateMipmapEXT_1,NULL};

	VPL_Parameter _glGetFramebufferAttachmentParameterivEXT_4 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetFramebufferAttachmentParameterivEXT_3 = { kUnsignedType,4,NULL,0,0,&_glGetFramebufferAttachmentParameterivEXT_4};
	VPL_Parameter _glGetFramebufferAttachmentParameterivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetFramebufferAttachmentParameterivEXT_3};
	VPL_Parameter _glGetFramebufferAttachmentParameterivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetFramebufferAttachmentParameterivEXT_2};
	VPL_ExtProcedure _glGetFramebufferAttachmentParameterivEXT_F = {"glGetFramebufferAttachmentParameterivEXT",glGetFramebufferAttachmentParameterivEXT,&_glGetFramebufferAttachmentParameterivEXT_1,NULL};

	VPL_Parameter _glFramebufferRenderbufferEXT_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferRenderbufferEXT_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferRenderbufferEXT_4};
	VPL_Parameter _glFramebufferRenderbufferEXT_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferRenderbufferEXT_3};
	VPL_Parameter _glFramebufferRenderbufferEXT_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferRenderbufferEXT_2};
	VPL_ExtProcedure _glFramebufferRenderbufferEXT_F = {"glFramebufferRenderbufferEXT",glFramebufferRenderbufferEXT,&_glFramebufferRenderbufferEXT_1,NULL};

	VPL_Parameter _glFramebufferTexture3DEXT_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTexture3DEXT_5 = { kIntType,4,NULL,0,0,&_glFramebufferTexture3DEXT_6};
	VPL_Parameter _glFramebufferTexture3DEXT_4 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture3DEXT_5};
	VPL_Parameter _glFramebufferTexture3DEXT_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture3DEXT_4};
	VPL_Parameter _glFramebufferTexture3DEXT_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture3DEXT_3};
	VPL_Parameter _glFramebufferTexture3DEXT_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture3DEXT_2};
	VPL_ExtProcedure _glFramebufferTexture3DEXT_F = {"glFramebufferTexture3DEXT",glFramebufferTexture3DEXT,&_glFramebufferTexture3DEXT_1,NULL};

	VPL_Parameter _glFramebufferTexture2DEXT_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTexture2DEXT_4 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture2DEXT_5};
	VPL_Parameter _glFramebufferTexture2DEXT_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture2DEXT_4};
	VPL_Parameter _glFramebufferTexture2DEXT_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture2DEXT_3};
	VPL_Parameter _glFramebufferTexture2DEXT_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture2DEXT_2};
	VPL_ExtProcedure _glFramebufferTexture2DEXT_F = {"glFramebufferTexture2DEXT",glFramebufferTexture2DEXT,&_glFramebufferTexture2DEXT_1,NULL};

	VPL_Parameter _glFramebufferTexture1DEXT_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTexture1DEXT_4 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture1DEXT_5};
	VPL_Parameter _glFramebufferTexture1DEXT_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture1DEXT_4};
	VPL_Parameter _glFramebufferTexture1DEXT_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture1DEXT_3};
	VPL_Parameter _glFramebufferTexture1DEXT_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture1DEXT_2};
	VPL_ExtProcedure _glFramebufferTexture1DEXT_F = {"glFramebufferTexture1DEXT",glFramebufferTexture1DEXT,&_glFramebufferTexture1DEXT_1,NULL};

	VPL_Parameter _glCheckFramebufferStatusEXT_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glCheckFramebufferStatusEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glCheckFramebufferStatusEXT_F = {"glCheckFramebufferStatusEXT",glCheckFramebufferStatusEXT,&_glCheckFramebufferStatusEXT_1,&_glCheckFramebufferStatusEXT_R};

	VPL_Parameter _glGenFramebuffersEXT_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenFramebuffersEXT_1 = { kIntType,4,NULL,0,0,&_glGenFramebuffersEXT_2};
	VPL_ExtProcedure _glGenFramebuffersEXT_F = {"glGenFramebuffersEXT",glGenFramebuffersEXT,&_glGenFramebuffersEXT_1,NULL};

	VPL_Parameter _glDeleteFramebuffersEXT_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteFramebuffersEXT_1 = { kIntType,4,NULL,0,0,&_glDeleteFramebuffersEXT_2};
	VPL_ExtProcedure _glDeleteFramebuffersEXT_F = {"glDeleteFramebuffersEXT",glDeleteFramebuffersEXT,&_glDeleteFramebuffersEXT_1,NULL};

	VPL_Parameter _glBindFramebufferEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindFramebufferEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBindFramebufferEXT_2};
	VPL_ExtProcedure _glBindFramebufferEXT_F = {"glBindFramebufferEXT",glBindFramebufferEXT,&_glBindFramebufferEXT_1,NULL};

	VPL_Parameter _glIsFramebufferEXT_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsFramebufferEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsFramebufferEXT_F = {"glIsFramebufferEXT",glIsFramebufferEXT,&_glIsFramebufferEXT_1,&_glIsFramebufferEXT_R};

	VPL_Parameter _glGetRenderbufferParameterivEXT_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetRenderbufferParameterivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetRenderbufferParameterivEXT_3};
	VPL_Parameter _glGetRenderbufferParameterivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetRenderbufferParameterivEXT_2};
	VPL_ExtProcedure _glGetRenderbufferParameterivEXT_F = {"glGetRenderbufferParameterivEXT",glGetRenderbufferParameterivEXT,&_glGetRenderbufferParameterivEXT_1,NULL};

	VPL_Parameter _glRenderbufferStorageEXT_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRenderbufferStorageEXT_3 = { kIntType,4,NULL,0,0,&_glRenderbufferStorageEXT_4};
	VPL_Parameter _glRenderbufferStorageEXT_2 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorageEXT_3};
	VPL_Parameter _glRenderbufferStorageEXT_1 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorageEXT_2};
	VPL_ExtProcedure _glRenderbufferStorageEXT_F = {"glRenderbufferStorageEXT",glRenderbufferStorageEXT,&_glRenderbufferStorageEXT_1,NULL};

	VPL_Parameter _glGenRenderbuffersEXT_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenRenderbuffersEXT_1 = { kIntType,4,NULL,0,0,&_glGenRenderbuffersEXT_2};
	VPL_ExtProcedure _glGenRenderbuffersEXT_F = {"glGenRenderbuffersEXT",glGenRenderbuffersEXT,&_glGenRenderbuffersEXT_1,NULL};

	VPL_Parameter _glDeleteRenderbuffersEXT_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteRenderbuffersEXT_1 = { kIntType,4,NULL,0,0,&_glDeleteRenderbuffersEXT_2};
	VPL_ExtProcedure _glDeleteRenderbuffersEXT_F = {"glDeleteRenderbuffersEXT",glDeleteRenderbuffersEXT,&_glDeleteRenderbuffersEXT_1,NULL};

	VPL_Parameter _glBindRenderbufferEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindRenderbufferEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBindRenderbufferEXT_2};
	VPL_ExtProcedure _glBindRenderbufferEXT_F = {"glBindRenderbufferEXT",glBindRenderbufferEXT,&_glBindRenderbufferEXT_1,NULL};

	VPL_Parameter _glIsRenderbufferEXT_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsRenderbufferEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsRenderbufferEXT_F = {"glIsRenderbufferEXT",glIsRenderbufferEXT,&_glIsRenderbufferEXT_1,&_glIsRenderbufferEXT_R};

	VPL_Parameter _glBlendEquationSeparateEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendEquationSeparateEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBlendEquationSeparateEXT_2};
	VPL_ExtProcedure _glBlendEquationSeparateEXT_F = {"glBlendEquationSeparateEXT",glBlendEquationSeparateEXT,&_glBlendEquationSeparateEXT_1,NULL};

	VPL_Parameter _glDepthBoundsEXT_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glDepthBoundsEXT_1 = { kFloatType,8,NULL,0,0,&_glDepthBoundsEXT_2};
	VPL_ExtProcedure _glDepthBoundsEXT_F = {"glDepthBoundsEXT",glDepthBoundsEXT,&_glDepthBoundsEXT_1,NULL};

	VPL_Parameter _glActiveStencilFaceEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glActiveStencilFaceEXT_F = {"glActiveStencilFaceEXT",glActiveStencilFaceEXT,&_glActiveStencilFaceEXT_1,NULL};

	VPL_Parameter _glBlendFuncSeparateEXT_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendFuncSeparateEXT_3 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparateEXT_4};
	VPL_Parameter _glBlendFuncSeparateEXT_2 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparateEXT_3};
	VPL_Parameter _glBlendFuncSeparateEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparateEXT_2};
	VPL_ExtProcedure _glBlendFuncSeparateEXT_F = {"glBlendFuncSeparateEXT",glBlendFuncSeparateEXT,&_glBlendFuncSeparateEXT_1,NULL};

	VPL_Parameter _glFogCoordPointerEXT_3 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glFogCoordPointerEXT_2 = { kIntType,4,NULL,0,0,&_glFogCoordPointerEXT_3};
	VPL_Parameter _glFogCoordPointerEXT_1 = { kUnsignedType,4,NULL,0,0,&_glFogCoordPointerEXT_2};
	VPL_ExtProcedure _glFogCoordPointerEXT_F = {"glFogCoordPointerEXT",glFogCoordPointerEXT,&_glFogCoordPointerEXT_1,NULL};

	VPL_Parameter _glFogCoorddvEXT_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glFogCoorddvEXT_F = {"glFogCoorddvEXT",glFogCoorddvEXT,&_glFogCoorddvEXT_1,NULL};

	VPL_Parameter _glFogCoorddEXT_1 = { kFloatType,8,NULL,0,0,NULL};
	VPL_ExtProcedure _glFogCoorddEXT_F = {"glFogCoorddEXT",glFogCoorddEXT,&_glFogCoorddEXT_1,NULL};

	VPL_Parameter _glFogCoordfvEXT_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glFogCoordfvEXT_F = {"glFogCoordfvEXT",glFogCoordfvEXT,&_glFogCoordfvEXT_1,NULL};

	VPL_Parameter _glFogCoordfEXT_1 = { kFloatType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glFogCoordfEXT_F = {"glFogCoordfEXT",glFogCoordfEXT,&_glFogCoordfEXT_1,NULL};

	VPL_Parameter _glMultiDrawElementsEXT_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawElementsEXT_4 = { kPointerType,0,"void",2,0,&_glMultiDrawElementsEXT_5};
	VPL_Parameter _glMultiDrawElementsEXT_3 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawElementsEXT_4};
	VPL_Parameter _glMultiDrawElementsEXT_2 = { kPointerType,4,"long int",1,1,&_glMultiDrawElementsEXT_3};
	VPL_Parameter _glMultiDrawElementsEXT_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawElementsEXT_2};
	VPL_ExtProcedure _glMultiDrawElementsEXT_F = {"glMultiDrawElementsEXT",glMultiDrawElementsEXT,&_glMultiDrawElementsEXT_1,NULL};

	VPL_Parameter _glMultiDrawArraysEXT_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawArraysEXT_3 = { kPointerType,4,"long int",1,1,&_glMultiDrawArraysEXT_4};
	VPL_Parameter _glMultiDrawArraysEXT_2 = { kPointerType,4,"long int",1,1,&_glMultiDrawArraysEXT_3};
	VPL_Parameter _glMultiDrawArraysEXT_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawArraysEXT_2};
	VPL_ExtProcedure _glMultiDrawArraysEXT_F = {"glMultiDrawArraysEXT",glMultiDrawArraysEXT,&_glMultiDrawArraysEXT_1,NULL};

	VPL_Parameter _glSecondaryColorPointerEXT_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glSecondaryColorPointerEXT_3 = { kIntType,4,NULL,0,0,&_glSecondaryColorPointerEXT_4};
	VPL_Parameter _glSecondaryColorPointerEXT_2 = { kUnsignedType,4,NULL,0,0,&_glSecondaryColorPointerEXT_3};
	VPL_Parameter _glSecondaryColorPointerEXT_1 = { kIntType,4,NULL,0,0,&_glSecondaryColorPointerEXT_2};
	VPL_ExtProcedure _glSecondaryColorPointerEXT_F = {"glSecondaryColorPointerEXT",glSecondaryColorPointerEXT,&_glSecondaryColorPointerEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3usvEXT_1 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3usvEXT_F = {"glSecondaryColor3usvEXT",glSecondaryColor3usvEXT,&_glSecondaryColor3usvEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3usEXT_3 = { kUnsignedType,2,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3usEXT_2 = { kUnsignedType,2,NULL,0,0,&_glSecondaryColor3usEXT_3};
	VPL_Parameter _glSecondaryColor3usEXT_1 = { kUnsignedType,2,NULL,0,0,&_glSecondaryColor3usEXT_2};
	VPL_ExtProcedure _glSecondaryColor3usEXT_F = {"glSecondaryColor3usEXT",glSecondaryColor3usEXT,&_glSecondaryColor3usEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3uivEXT_1 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3uivEXT_F = {"glSecondaryColor3uivEXT",glSecondaryColor3uivEXT,&_glSecondaryColor3uivEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3uiEXT_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3uiEXT_2 = { kUnsignedType,4,NULL,0,0,&_glSecondaryColor3uiEXT_3};
	VPL_Parameter _glSecondaryColor3uiEXT_1 = { kUnsignedType,4,NULL,0,0,&_glSecondaryColor3uiEXT_2};
	VPL_ExtProcedure _glSecondaryColor3uiEXT_F = {"glSecondaryColor3uiEXT",glSecondaryColor3uiEXT,&_glSecondaryColor3uiEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3ubvEXT_1 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3ubvEXT_F = {"glSecondaryColor3ubvEXT",glSecondaryColor3ubvEXT,&_glSecondaryColor3ubvEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3ubEXT_3 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3ubEXT_2 = { kUnsignedType,1,NULL,0,0,&_glSecondaryColor3ubEXT_3};
	VPL_Parameter _glSecondaryColor3ubEXT_1 = { kUnsignedType,1,NULL,0,0,&_glSecondaryColor3ubEXT_2};
	VPL_ExtProcedure _glSecondaryColor3ubEXT_F = {"glSecondaryColor3ubEXT",glSecondaryColor3ubEXT,&_glSecondaryColor3ubEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3svEXT_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3svEXT_F = {"glSecondaryColor3svEXT",glSecondaryColor3svEXT,&_glSecondaryColor3svEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3sEXT_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3sEXT_2 = { kIntType,2,NULL,0,0,&_glSecondaryColor3sEXT_3};
	VPL_Parameter _glSecondaryColor3sEXT_1 = { kIntType,2,NULL,0,0,&_glSecondaryColor3sEXT_2};
	VPL_ExtProcedure _glSecondaryColor3sEXT_F = {"glSecondaryColor3sEXT",glSecondaryColor3sEXT,&_glSecondaryColor3sEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3ivEXT_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3ivEXT_F = {"glSecondaryColor3ivEXT",glSecondaryColor3ivEXT,&_glSecondaryColor3ivEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3iEXT_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3iEXT_2 = { kIntType,4,NULL,0,0,&_glSecondaryColor3iEXT_3};
	VPL_Parameter _glSecondaryColor3iEXT_1 = { kIntType,4,NULL,0,0,&_glSecondaryColor3iEXT_2};
	VPL_ExtProcedure _glSecondaryColor3iEXT_F = {"glSecondaryColor3iEXT",glSecondaryColor3iEXT,&_glSecondaryColor3iEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3fvEXT_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3fvEXT_F = {"glSecondaryColor3fvEXT",glSecondaryColor3fvEXT,&_glSecondaryColor3fvEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3fEXT_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3fEXT_2 = { kFloatType,4,NULL,0,0,&_glSecondaryColor3fEXT_3};
	VPL_Parameter _glSecondaryColor3fEXT_1 = { kFloatType,4,NULL,0,0,&_glSecondaryColor3fEXT_2};
	VPL_ExtProcedure _glSecondaryColor3fEXT_F = {"glSecondaryColor3fEXT",glSecondaryColor3fEXT,&_glSecondaryColor3fEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3dvEXT_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3dvEXT_F = {"glSecondaryColor3dvEXT",glSecondaryColor3dvEXT,&_glSecondaryColor3dvEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3dEXT_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3dEXT_2 = { kFloatType,8,NULL,0,0,&_glSecondaryColor3dEXT_3};
	VPL_Parameter _glSecondaryColor3dEXT_1 = { kFloatType,8,NULL,0,0,&_glSecondaryColor3dEXT_2};
	VPL_ExtProcedure _glSecondaryColor3dEXT_F = {"glSecondaryColor3dEXT",glSecondaryColor3dEXT,&_glSecondaryColor3dEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3bvEXT_1 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_ExtProcedure _glSecondaryColor3bvEXT_F = {"glSecondaryColor3bvEXT",glSecondaryColor3bvEXT,&_glSecondaryColor3bvEXT_1,NULL};

	VPL_Parameter _glSecondaryColor3bEXT_3 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _glSecondaryColor3bEXT_2 = { kIntType,1,NULL,0,0,&_glSecondaryColor3bEXT_3};
	VPL_Parameter _glSecondaryColor3bEXT_1 = { kIntType,1,NULL,0,0,&_glSecondaryColor3bEXT_2};
	VPL_ExtProcedure _glSecondaryColor3bEXT_F = {"glSecondaryColor3bEXT",glSecondaryColor3bEXT,&_glSecondaryColor3bEXT_1,NULL};

	VPL_Parameter _glDrawRangeElementsEXT_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glDrawRangeElementsEXT_5 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElementsEXT_6};
	VPL_Parameter _glDrawRangeElementsEXT_4 = { kIntType,4,NULL,0,0,&_glDrawRangeElementsEXT_5};
	VPL_Parameter _glDrawRangeElementsEXT_3 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElementsEXT_4};
	VPL_Parameter _glDrawRangeElementsEXT_2 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElementsEXT_3};
	VPL_Parameter _glDrawRangeElementsEXT_1 = { kUnsignedType,4,NULL,0,0,&_glDrawRangeElementsEXT_2};
	VPL_ExtProcedure _glDrawRangeElementsEXT_F = {"glDrawRangeElementsEXT",glDrawRangeElementsEXT,&_glDrawRangeElementsEXT_1,NULL};

	VPL_ExtProcedure _glUnlockArraysEXT_F = {"glUnlockArraysEXT",glUnlockArraysEXT,NULL,NULL};

	VPL_Parameter _glLockArraysEXT_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glLockArraysEXT_1 = { kIntType,4,NULL,0,0,&_glLockArraysEXT_2};
	VPL_ExtProcedure _glLockArraysEXT_F = {"glLockArraysEXT",glLockArraysEXT,&_glLockArraysEXT_1,NULL};

	VPL_Parameter _glGetColorTableParameterfvEXT_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetColorTableParameterfvEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableParameterfvEXT_3};
	VPL_Parameter _glGetColorTableParameterfvEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableParameterfvEXT_2};
	VPL_ExtProcedure _glGetColorTableParameterfvEXT_F = {"glGetColorTableParameterfvEXT",glGetColorTableParameterfvEXT,&_glGetColorTableParameterfvEXT_1,NULL};

	VPL_Parameter _glGetColorTableParameterivEXT_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetColorTableParameterivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableParameterivEXT_3};
	VPL_Parameter _glGetColorTableParameterivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableParameterivEXT_2};
	VPL_ExtProcedure _glGetColorTableParameterivEXT_F = {"glGetColorTableParameterivEXT",glGetColorTableParameterivEXT,&_glGetColorTableParameterivEXT_1,NULL};

	VPL_Parameter _glGetColorTableEXT_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetColorTableEXT_3 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableEXT_4};
	VPL_Parameter _glGetColorTableEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableEXT_3};
	VPL_Parameter _glGetColorTableEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetColorTableEXT_2};
	VPL_ExtProcedure _glGetColorTableEXT_F = {"glGetColorTableEXT",glGetColorTableEXT,&_glGetColorTableEXT_1,NULL};

	VPL_Parameter _glColorSubTableEXT_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glColorSubTableEXT_5 = { kUnsignedType,4,NULL,0,0,&_glColorSubTableEXT_6};
	VPL_Parameter _glColorSubTableEXT_4 = { kUnsignedType,4,NULL,0,0,&_glColorSubTableEXT_5};
	VPL_Parameter _glColorSubTableEXT_3 = { kIntType,4,NULL,0,0,&_glColorSubTableEXT_4};
	VPL_Parameter _glColorSubTableEXT_2 = { kIntType,4,NULL,0,0,&_glColorSubTableEXT_3};
	VPL_Parameter _glColorSubTableEXT_1 = { kUnsignedType,4,NULL,0,0,&_glColorSubTableEXT_2};
	VPL_ExtProcedure _glColorSubTableEXT_F = {"glColorSubTableEXT",glColorSubTableEXT,&_glColorSubTableEXT_1,NULL};

	VPL_Parameter _glColorTableEXT_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glColorTableEXT_5 = { kUnsignedType,4,NULL,0,0,&_glColorTableEXT_6};
	VPL_Parameter _glColorTableEXT_4 = { kUnsignedType,4,NULL,0,0,&_glColorTableEXT_5};
	VPL_Parameter _glColorTableEXT_3 = { kIntType,4,NULL,0,0,&_glColorTableEXT_4};
	VPL_Parameter _glColorTableEXT_2 = { kUnsignedType,4,NULL,0,0,&_glColorTableEXT_3};
	VPL_Parameter _glColorTableEXT_1 = { kUnsignedType,4,NULL,0,0,&_glColorTableEXT_2};
	VPL_ExtProcedure _glColorTableEXT_F = {"glColorTableEXT",glColorTableEXT,&_glColorTableEXT_1,NULL};

	VPL_Parameter _glBlendEquationEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glBlendEquationEXT_F = {"glBlendEquationEXT",glBlendEquationEXT,&_glBlendEquationEXT_1,NULL};

	VPL_Parameter _glBlendColorEXT_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendColorEXT_3 = { kFloatType,4,NULL,0,0,&_glBlendColorEXT_4};
	VPL_Parameter _glBlendColorEXT_2 = { kFloatType,4,NULL,0,0,&_glBlendColorEXT_3};
	VPL_Parameter _glBlendColorEXT_1 = { kFloatType,4,NULL,0,0,&_glBlendColorEXT_2};
	VPL_ExtProcedure _glBlendColorEXT_F = {"glBlendColorEXT",glBlendColorEXT,&_glBlendColorEXT_1,NULL};

	VPL_Parameter _glDrawBuffersARB_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDrawBuffersARB_1 = { kIntType,4,NULL,0,0,&_glDrawBuffersARB_2};
	VPL_ExtProcedure _glDrawBuffersARB_F = {"glDrawBuffersARB",glDrawBuffersARB,&_glDrawBuffersARB_1,NULL};

	VPL_Parameter _glGetBufferPointervARB_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetBufferPointervARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetBufferPointervARB_3};
	VPL_Parameter _glGetBufferPointervARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetBufferPointervARB_2};
	VPL_ExtProcedure _glGetBufferPointervARB_F = {"glGetBufferPointervARB",glGetBufferPointervARB,&_glGetBufferPointervARB_1,NULL};

	VPL_Parameter _glGetBufferParameterivARB_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetBufferParameterivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetBufferParameterivARB_3};
	VPL_Parameter _glGetBufferParameterivARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetBufferParameterivARB_2};
	VPL_ExtProcedure _glGetBufferParameterivARB_F = {"glGetBufferParameterivARB",glGetBufferParameterivARB,&_glGetBufferParameterivARB_1,NULL};

	VPL_Parameter _glUnmapBufferARB_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glUnmapBufferARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glUnmapBufferARB_F = {"glUnmapBufferARB",glUnmapBufferARB,&_glUnmapBufferARB_1,&_glUnmapBufferARB_R};

	VPL_Parameter _glMapBufferARB_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glMapBufferARB_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glMapBufferARB_1 = { kUnsignedType,4,NULL,0,0,&_glMapBufferARB_2};
	VPL_ExtProcedure _glMapBufferARB_F = {"glMapBufferARB",glMapBufferARB,&_glMapBufferARB_1,&_glMapBufferARB_R};

	VPL_Parameter _glGetBufferSubDataARB_4 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetBufferSubDataARB_3 = { kIntType,4,NULL,0,0,&_glGetBufferSubDataARB_4};
	VPL_Parameter _glGetBufferSubDataARB_2 = { kIntType,4,NULL,0,0,&_glGetBufferSubDataARB_3};
	VPL_Parameter _glGetBufferSubDataARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetBufferSubDataARB_2};
	VPL_ExtProcedure _glGetBufferSubDataARB_F = {"glGetBufferSubDataARB",glGetBufferSubDataARB,&_glGetBufferSubDataARB_1,NULL};

	VPL_Parameter _glBufferSubDataARB_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glBufferSubDataARB_3 = { kIntType,4,NULL,0,0,&_glBufferSubDataARB_4};
	VPL_Parameter _glBufferSubDataARB_2 = { kIntType,4,NULL,0,0,&_glBufferSubDataARB_3};
	VPL_Parameter _glBufferSubDataARB_1 = { kUnsignedType,4,NULL,0,0,&_glBufferSubDataARB_2};
	VPL_ExtProcedure _glBufferSubDataARB_F = {"glBufferSubDataARB",glBufferSubDataARB,&_glBufferSubDataARB_1,NULL};

	VPL_Parameter _glBufferDataARB_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBufferDataARB_3 = { kPointerType,0,"void",1,1,&_glBufferDataARB_4};
	VPL_Parameter _glBufferDataARB_2 = { kIntType,4,NULL,0,0,&_glBufferDataARB_3};
	VPL_Parameter _glBufferDataARB_1 = { kUnsignedType,4,NULL,0,0,&_glBufferDataARB_2};
	VPL_ExtProcedure _glBufferDataARB_F = {"glBufferDataARB",glBufferDataARB,&_glBufferDataARB_1,NULL};

	VPL_Parameter _glIsBufferARB_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsBufferARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsBufferARB_F = {"glIsBufferARB",glIsBufferARB,&_glIsBufferARB_1,&_glIsBufferARB_R};

	VPL_Parameter _glGenBuffersARB_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenBuffersARB_1 = { kIntType,4,NULL,0,0,&_glGenBuffersARB_2};
	VPL_ExtProcedure _glGenBuffersARB_F = {"glGenBuffersARB",glGenBuffersARB,&_glGenBuffersARB_1,NULL};

	VPL_Parameter _glDeleteBuffersARB_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteBuffersARB_1 = { kIntType,4,NULL,0,0,&_glDeleteBuffersARB_2};
	VPL_ExtProcedure _glDeleteBuffersARB_F = {"glDeleteBuffersARB",glDeleteBuffersARB,&_glDeleteBuffersARB_1,NULL};

	VPL_Parameter _glBindBufferARB_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindBufferARB_1 = { kUnsignedType,4,NULL,0,0,&_glBindBufferARB_2};
	VPL_ExtProcedure _glBindBufferARB_F = {"glBindBufferARB",glBindBufferARB,&_glBindBufferARB_1,NULL};

	VPL_Parameter _glGetAttribLocationARB_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetAttribLocationARB_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glGetAttribLocationARB_1 = { kPointerType,0,"void",1,0,&_glGetAttribLocationARB_2};
	VPL_ExtProcedure _glGetAttribLocationARB_F = {"glGetAttribLocationARB",glGetAttribLocationARB,&_glGetAttribLocationARB_1,&_glGetAttribLocationARB_R};

	VPL_Parameter _glGetActiveAttribARB_7 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetActiveAttribARB_6 = { kPointerType,4,"unsigned long",1,0,&_glGetActiveAttribARB_7};
	VPL_Parameter _glGetActiveAttribARB_5 = { kPointerType,4,"long int",1,0,&_glGetActiveAttribARB_6};
	VPL_Parameter _glGetActiveAttribARB_4 = { kPointerType,4,"long int",1,0,&_glGetActiveAttribARB_5};
	VPL_Parameter _glGetActiveAttribARB_3 = { kIntType,4,NULL,0,0,&_glGetActiveAttribARB_4};
	VPL_Parameter _glGetActiveAttribARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveAttribARB_3};
	VPL_Parameter _glGetActiveAttribARB_1 = { kPointerType,0,"void",1,0,&_glGetActiveAttribARB_2};
	VPL_ExtProcedure _glGetActiveAttribARB_F = {"glGetActiveAttribARB",glGetActiveAttribARB,&_glGetActiveAttribARB_1,NULL};

	VPL_Parameter _glBindAttribLocationARB_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glBindAttribLocationARB_2 = { kUnsignedType,4,NULL,0,0,&_glBindAttribLocationARB_3};
	VPL_Parameter _glBindAttribLocationARB_1 = { kPointerType,0,"void",1,0,&_glBindAttribLocationARB_2};
	VPL_ExtProcedure _glBindAttribLocationARB_F = {"glBindAttribLocationARB",glBindAttribLocationARB,&_glBindAttribLocationARB_1,NULL};

	VPL_Parameter _glGetShaderSourceARB_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetShaderSourceARB_3 = { kPointerType,4,"long int",1,0,&_glGetShaderSourceARB_4};
	VPL_Parameter _glGetShaderSourceARB_2 = { kIntType,4,NULL,0,0,&_glGetShaderSourceARB_3};
	VPL_Parameter _glGetShaderSourceARB_1 = { kPointerType,0,"void",1,0,&_glGetShaderSourceARB_2};
	VPL_ExtProcedure _glGetShaderSourceARB_F = {"glGetShaderSourceARB",glGetShaderSourceARB,&_glGetShaderSourceARB_1,NULL};

	VPL_Parameter _glGetUniformivARB_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetUniformivARB_2 = { kIntType,4,NULL,0,0,&_glGetUniformivARB_3};
	VPL_Parameter _glGetUniformivARB_1 = { kPointerType,0,"void",1,0,&_glGetUniformivARB_2};
	VPL_ExtProcedure _glGetUniformivARB_F = {"glGetUniformivARB",glGetUniformivARB,&_glGetUniformivARB_1,NULL};

	VPL_Parameter _glGetUniformfvARB_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetUniformfvARB_2 = { kIntType,4,NULL,0,0,&_glGetUniformfvARB_3};
	VPL_Parameter _glGetUniformfvARB_1 = { kPointerType,0,"void",1,0,&_glGetUniformfvARB_2};
	VPL_ExtProcedure _glGetUniformfvARB_F = {"glGetUniformfvARB",glGetUniformfvARB,&_glGetUniformfvARB_1,NULL};

	VPL_Parameter _glGetActiveUniformARB_7 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetActiveUniformARB_6 = { kPointerType,4,"unsigned long",1,0,&_glGetActiveUniformARB_7};
	VPL_Parameter _glGetActiveUniformARB_5 = { kPointerType,4,"long int",1,0,&_glGetActiveUniformARB_6};
	VPL_Parameter _glGetActiveUniformARB_4 = { kPointerType,4,"long int",1,0,&_glGetActiveUniformARB_5};
	VPL_Parameter _glGetActiveUniformARB_3 = { kIntType,4,NULL,0,0,&_glGetActiveUniformARB_4};
	VPL_Parameter _glGetActiveUniformARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformARB_3};
	VPL_Parameter _glGetActiveUniformARB_1 = { kPointerType,0,"void",1,0,&_glGetActiveUniformARB_2};
	VPL_ExtProcedure _glGetActiveUniformARB_F = {"glGetActiveUniformARB",glGetActiveUniformARB,&_glGetActiveUniformARB_1,NULL};

	VPL_Parameter _glGetUniformLocationARB_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformLocationARB_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glGetUniformLocationARB_1 = { kPointerType,0,"void",1,0,&_glGetUniformLocationARB_2};
	VPL_ExtProcedure _glGetUniformLocationARB_F = {"glGetUniformLocationARB",glGetUniformLocationARB,&_glGetUniformLocationARB_1,&_glGetUniformLocationARB_R};

	VPL_Parameter _glGetAttachedObjectsARB_4 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetAttachedObjectsARB_3 = { kPointerType,4,"long int",1,0,&_glGetAttachedObjectsARB_4};
	VPL_Parameter _glGetAttachedObjectsARB_2 = { kIntType,4,NULL,0,0,&_glGetAttachedObjectsARB_3};
	VPL_Parameter _glGetAttachedObjectsARB_1 = { kPointerType,0,"void",1,0,&_glGetAttachedObjectsARB_2};
	VPL_ExtProcedure _glGetAttachedObjectsARB_F = {"glGetAttachedObjectsARB",glGetAttachedObjectsARB,&_glGetAttachedObjectsARB_1,NULL};

	VPL_Parameter _glGetInfoLogARB_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetInfoLogARB_3 = { kPointerType,4,"long int",1,0,&_glGetInfoLogARB_4};
	VPL_Parameter _glGetInfoLogARB_2 = { kIntType,4,NULL,0,0,&_glGetInfoLogARB_3};
	VPL_Parameter _glGetInfoLogARB_1 = { kPointerType,0,"void",1,0,&_glGetInfoLogARB_2};
	VPL_ExtProcedure _glGetInfoLogARB_F = {"glGetInfoLogARB",glGetInfoLogARB,&_glGetInfoLogARB_1,NULL};

	VPL_Parameter _glGetObjectParameterivARB_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetObjectParameterivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetObjectParameterivARB_3};
	VPL_Parameter _glGetObjectParameterivARB_1 = { kPointerType,0,"void",1,0,&_glGetObjectParameterivARB_2};
	VPL_ExtProcedure _glGetObjectParameterivARB_F = {"glGetObjectParameterivARB",glGetObjectParameterivARB,&_glGetObjectParameterivARB_1,NULL};

	VPL_Parameter _glGetObjectParameterfvARB_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetObjectParameterfvARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetObjectParameterfvARB_3};
	VPL_Parameter _glGetObjectParameterfvARB_1 = { kPointerType,0,"void",1,0,&_glGetObjectParameterfvARB_2};
	VPL_ExtProcedure _glGetObjectParameterfvARB_F = {"glGetObjectParameterfvARB",glGetObjectParameterfvARB,&_glGetObjectParameterfvARB_1,NULL};

	VPL_Parameter _glUniformMatrix4fvARB_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix4fvARB_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix4fvARB_4};
	VPL_Parameter _glUniformMatrix4fvARB_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix4fvARB_3};
	VPL_Parameter _glUniformMatrix4fvARB_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix4fvARB_2};
	VPL_ExtProcedure _glUniformMatrix4fvARB_F = {"glUniformMatrix4fvARB",glUniformMatrix4fvARB,&_glUniformMatrix4fvARB_1,NULL};

	VPL_Parameter _glUniformMatrix3fvARB_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix3fvARB_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix3fvARB_4};
	VPL_Parameter _glUniformMatrix3fvARB_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix3fvARB_3};
	VPL_Parameter _glUniformMatrix3fvARB_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix3fvARB_2};
	VPL_ExtProcedure _glUniformMatrix3fvARB_F = {"glUniformMatrix3fvARB",glUniformMatrix3fvARB,&_glUniformMatrix3fvARB_1,NULL};

	VPL_Parameter _glUniformMatrix2fvARB_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix2fvARB_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix2fvARB_4};
	VPL_Parameter _glUniformMatrix2fvARB_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix2fvARB_3};
	VPL_Parameter _glUniformMatrix2fvARB_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix2fvARB_2};
	VPL_ExtProcedure _glUniformMatrix2fvARB_F = {"glUniformMatrix2fvARB",glUniformMatrix2fvARB,&_glUniformMatrix2fvARB_1,NULL};

	VPL_Parameter _glUniform4ivARB_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glUniform4ivARB_2 = { kIntType,4,NULL,0,0,&_glUniform4ivARB_3};
	VPL_Parameter _glUniform4ivARB_1 = { kIntType,4,NULL,0,0,&_glUniform4ivARB_2};
	VPL_ExtProcedure _glUniform4ivARB_F = {"glUniform4ivARB",glUniform4ivARB,&_glUniform4ivARB_1,NULL};

	VPL_Parameter _glUniform3ivARB_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glUniform3ivARB_2 = { kIntType,4,NULL,0,0,&_glUniform3ivARB_3};
	VPL_Parameter _glUniform3ivARB_1 = { kIntType,4,NULL,0,0,&_glUniform3ivARB_2};
	VPL_ExtProcedure _glUniform3ivARB_F = {"glUniform3ivARB",glUniform3ivARB,&_glUniform3ivARB_1,NULL};

	VPL_Parameter _glUniform2ivARB_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glUniform2ivARB_2 = { kIntType,4,NULL,0,0,&_glUniform2ivARB_3};
	VPL_Parameter _glUniform2ivARB_1 = { kIntType,4,NULL,0,0,&_glUniform2ivARB_2};
	VPL_ExtProcedure _glUniform2ivARB_F = {"glUniform2ivARB",glUniform2ivARB,&_glUniform2ivARB_1,NULL};

	VPL_Parameter _glUniform1ivARB_3 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glUniform1ivARB_2 = { kIntType,4,NULL,0,0,&_glUniform1ivARB_3};
	VPL_Parameter _glUniform1ivARB_1 = { kIntType,4,NULL,0,0,&_glUniform1ivARB_2};
	VPL_ExtProcedure _glUniform1ivARB_F = {"glUniform1ivARB",glUniform1ivARB,&_glUniform1ivARB_1,NULL};

	VPL_Parameter _glUniform4fvARB_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniform4fvARB_2 = { kIntType,4,NULL,0,0,&_glUniform4fvARB_3};
	VPL_Parameter _glUniform4fvARB_1 = { kIntType,4,NULL,0,0,&_glUniform4fvARB_2};
	VPL_ExtProcedure _glUniform4fvARB_F = {"glUniform4fvARB",glUniform4fvARB,&_glUniform4fvARB_1,NULL};

	VPL_Parameter _glUniform3fvARB_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniform3fvARB_2 = { kIntType,4,NULL,0,0,&_glUniform3fvARB_3};
	VPL_Parameter _glUniform3fvARB_1 = { kIntType,4,NULL,0,0,&_glUniform3fvARB_2};
	VPL_ExtProcedure _glUniform3fvARB_F = {"glUniform3fvARB",glUniform3fvARB,&_glUniform3fvARB_1,NULL};

	VPL_Parameter _glUniform2fvARB_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniform2fvARB_2 = { kIntType,4,NULL,0,0,&_glUniform2fvARB_3};
	VPL_Parameter _glUniform2fvARB_1 = { kIntType,4,NULL,0,0,&_glUniform2fvARB_2};
	VPL_ExtProcedure _glUniform2fvARB_F = {"glUniform2fvARB",glUniform2fvARB,&_glUniform2fvARB_1,NULL};

	VPL_Parameter _glUniform1fvARB_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniform1fvARB_2 = { kIntType,4,NULL,0,0,&_glUniform1fvARB_3};
	VPL_Parameter _glUniform1fvARB_1 = { kIntType,4,NULL,0,0,&_glUniform1fvARB_2};
	VPL_ExtProcedure _glUniform1fvARB_F = {"glUniform1fvARB",glUniform1fvARB,&_glUniform1fvARB_1,NULL};

	VPL_Parameter _glUniform4iARB_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform4iARB_4 = { kIntType,4,NULL,0,0,&_glUniform4iARB_5};
	VPL_Parameter _glUniform4iARB_3 = { kIntType,4,NULL,0,0,&_glUniform4iARB_4};
	VPL_Parameter _glUniform4iARB_2 = { kIntType,4,NULL,0,0,&_glUniform4iARB_3};
	VPL_Parameter _glUniform4iARB_1 = { kIntType,4,NULL,0,0,&_glUniform4iARB_2};
	VPL_ExtProcedure _glUniform4iARB_F = {"glUniform4iARB",glUniform4iARB,&_glUniform4iARB_1,NULL};

	VPL_Parameter _glUniform3iARB_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform3iARB_3 = { kIntType,4,NULL,0,0,&_glUniform3iARB_4};
	VPL_Parameter _glUniform3iARB_2 = { kIntType,4,NULL,0,0,&_glUniform3iARB_3};
	VPL_Parameter _glUniform3iARB_1 = { kIntType,4,NULL,0,0,&_glUniform3iARB_2};
	VPL_ExtProcedure _glUniform3iARB_F = {"glUniform3iARB",glUniform3iARB,&_glUniform3iARB_1,NULL};

	VPL_Parameter _glUniform2iARB_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform2iARB_2 = { kIntType,4,NULL,0,0,&_glUniform2iARB_3};
	VPL_Parameter _glUniform2iARB_1 = { kIntType,4,NULL,0,0,&_glUniform2iARB_2};
	VPL_ExtProcedure _glUniform2iARB_F = {"glUniform2iARB",glUniform2iARB,&_glUniform2iARB_1,NULL};

	VPL_Parameter _glUniform1iARB_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform1iARB_1 = { kIntType,4,NULL,0,0,&_glUniform1iARB_2};
	VPL_ExtProcedure _glUniform1iARB_F = {"glUniform1iARB",glUniform1iARB,&_glUniform1iARB_1,NULL};

	VPL_Parameter _glUniform4fARB_5 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform4fARB_4 = { kFloatType,4,NULL,0,0,&_glUniform4fARB_5};
	VPL_Parameter _glUniform4fARB_3 = { kFloatType,4,NULL,0,0,&_glUniform4fARB_4};
	VPL_Parameter _glUniform4fARB_2 = { kFloatType,4,NULL,0,0,&_glUniform4fARB_3};
	VPL_Parameter _glUniform4fARB_1 = { kIntType,4,NULL,0,0,&_glUniform4fARB_2};
	VPL_ExtProcedure _glUniform4fARB_F = {"glUniform4fARB",glUniform4fARB,&_glUniform4fARB_1,NULL};

	VPL_Parameter _glUniform3fARB_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform3fARB_3 = { kFloatType,4,NULL,0,0,&_glUniform3fARB_4};
	VPL_Parameter _glUniform3fARB_2 = { kFloatType,4,NULL,0,0,&_glUniform3fARB_3};
	VPL_Parameter _glUniform3fARB_1 = { kIntType,4,NULL,0,0,&_glUniform3fARB_2};
	VPL_ExtProcedure _glUniform3fARB_F = {"glUniform3fARB",glUniform3fARB,&_glUniform3fARB_1,NULL};

	VPL_Parameter _glUniform2fARB_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform2fARB_2 = { kFloatType,4,NULL,0,0,&_glUniform2fARB_3};
	VPL_Parameter _glUniform2fARB_1 = { kIntType,4,NULL,0,0,&_glUniform2fARB_2};
	VPL_ExtProcedure _glUniform2fARB_F = {"glUniform2fARB",glUniform2fARB,&_glUniform2fARB_1,NULL};

	VPL_Parameter _glUniform1fARB_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform1fARB_1 = { kIntType,4,NULL,0,0,&_glUniform1fARB_2};
	VPL_ExtProcedure _glUniform1fARB_F = {"glUniform1fARB",glUniform1fARB,&_glUniform1fARB_1,NULL};

	VPL_Parameter _glValidateProgramARB_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glValidateProgramARB_F = {"glValidateProgramARB",glValidateProgramARB,&_glValidateProgramARB_1,NULL};

	VPL_Parameter _glUseProgramObjectARB_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glUseProgramObjectARB_F = {"glUseProgramObjectARB",glUseProgramObjectARB,&_glUseProgramObjectARB_1,NULL};

	VPL_Parameter _glLinkProgramARB_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glLinkProgramARB_F = {"glLinkProgramARB",glLinkProgramARB,&_glLinkProgramARB_1,NULL};

	VPL_Parameter _glAttachObjectARB_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glAttachObjectARB_1 = { kPointerType,0,"void",1,0,&_glAttachObjectARB_2};
	VPL_ExtProcedure _glAttachObjectARB_F = {"glAttachObjectARB",glAttachObjectARB,&_glAttachObjectARB_1,NULL};

	VPL_Parameter _glCreateProgramObjectARB_R = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glCreateProgramObjectARB_F = {"glCreateProgramObjectARB",glCreateProgramObjectARB,NULL,&_glCreateProgramObjectARB_R};

	VPL_Parameter _glCompileShaderARB_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glCompileShaderARB_F = {"glCompileShaderARB",glCompileShaderARB,&_glCompileShaderARB_1,NULL};

	VPL_Parameter _glShaderSourceARB_4 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glShaderSourceARB_3 = { kPointerType,1,"char",2,0,&_glShaderSourceARB_4};
	VPL_Parameter _glShaderSourceARB_2 = { kIntType,4,NULL,0,0,&_glShaderSourceARB_3};
	VPL_Parameter _glShaderSourceARB_1 = { kPointerType,0,"void",1,0,&_glShaderSourceARB_2};
	VPL_ExtProcedure _glShaderSourceARB_F = {"glShaderSourceARB",glShaderSourceARB,&_glShaderSourceARB_1,NULL};

	VPL_Parameter _glCreateShaderObjectARB_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glCreateShaderObjectARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glCreateShaderObjectARB_F = {"glCreateShaderObjectARB",glCreateShaderObjectARB,&_glCreateShaderObjectARB_1,&_glCreateShaderObjectARB_R};

	VPL_Parameter _glDetachObjectARB_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glDetachObjectARB_1 = { kPointerType,0,"void",1,0,&_glDetachObjectARB_2};
	VPL_ExtProcedure _glDetachObjectARB_F = {"glDetachObjectARB",glDetachObjectARB,&_glDetachObjectARB_1,NULL};

	VPL_Parameter _glGetHandleARB_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetHandleARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glGetHandleARB_F = {"glGetHandleARB",glGetHandleARB,&_glGetHandleARB_1,&_glGetHandleARB_R};

	VPL_Parameter _glDeleteObjectARB_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _glDeleteObjectARB_F = {"glDeleteObjectARB",glDeleteObjectARB,&_glDeleteObjectARB_1,NULL};

	VPL_Parameter _glGetVertexAttribivARB_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetVertexAttribivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribivARB_3};
	VPL_Parameter _glGetVertexAttribivARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribivARB_2};
	VPL_ExtProcedure _glGetVertexAttribivARB_F = {"glGetVertexAttribivARB",glGetVertexAttribivARB,&_glGetVertexAttribivARB_1,NULL};

	VPL_Parameter _glGetVertexAttribfvARB_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetVertexAttribfvARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribfvARB_3};
	VPL_Parameter _glGetVertexAttribfvARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribfvARB_2};
	VPL_ExtProcedure _glGetVertexAttribfvARB_F = {"glGetVertexAttribfvARB",glGetVertexAttribfvARB,&_glGetVertexAttribfvARB_1,NULL};

	VPL_Parameter _glGetVertexAttribdvARB_3 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _glGetVertexAttribdvARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribdvARB_3};
	VPL_Parameter _glGetVertexAttribdvARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribdvARB_2};
	VPL_ExtProcedure _glGetVertexAttribdvARB_F = {"glGetVertexAttribdvARB",glGetVertexAttribdvARB,&_glGetVertexAttribdvARB_1,NULL};

	VPL_Parameter _glGetVertexAttribPointervARB_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetVertexAttribPointervARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribPointervARB_3};
	VPL_Parameter _glGetVertexAttribPointervARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribPointervARB_2};
	VPL_ExtProcedure _glGetVertexAttribPointervARB_F = {"glGetVertexAttribPointervARB",glGetVertexAttribPointervARB,&_glGetVertexAttribPointervARB_1,NULL};

	VPL_Parameter _glEnableVertexAttribArrayARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glEnableVertexAttribArrayARB_F = {"glEnableVertexAttribArrayARB",glEnableVertexAttribArrayARB,&_glEnableVertexAttribArrayARB_1,NULL};

	VPL_Parameter _glDisableVertexAttribArrayARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glDisableVertexAttribArrayARB_F = {"glDisableVertexAttribArrayARB",glDisableVertexAttribArrayARB,&_glDisableVertexAttribArrayARB_1,NULL};

	VPL_Parameter _glVertexAttribPointerARB_6 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glVertexAttribPointerARB_5 = { kIntType,4,NULL,0,0,&_glVertexAttribPointerARB_6};
	VPL_Parameter _glVertexAttribPointerARB_4 = { kUnsignedType,1,NULL,0,0,&_glVertexAttribPointerARB_5};
	VPL_Parameter _glVertexAttribPointerARB_3 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribPointerARB_4};
	VPL_Parameter _glVertexAttribPointerARB_2 = { kIntType,4,NULL,0,0,&_glVertexAttribPointerARB_3};
	VPL_Parameter _glVertexAttribPointerARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribPointerARB_2};
	VPL_ExtProcedure _glVertexAttribPointerARB_F = {"glVertexAttribPointerARB",glVertexAttribPointerARB,&_glVertexAttribPointerARB_1,NULL};

	VPL_Parameter _glVertexAttrib4usvARB_2 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_Parameter _glVertexAttrib4usvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4usvARB_2};
	VPL_ExtProcedure _glVertexAttrib4usvARB_F = {"glVertexAttrib4usvARB",glVertexAttrib4usvARB,&_glVertexAttrib4usvARB_1,NULL};

	VPL_Parameter _glVertexAttrib4uivARB_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glVertexAttrib4uivARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4uivARB_2};
	VPL_ExtProcedure _glVertexAttrib4uivARB_F = {"glVertexAttrib4uivARB",glVertexAttrib4uivARB,&_glVertexAttrib4uivARB_1,NULL};

	VPL_Parameter _glVertexAttrib4ubvARB_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glVertexAttrib4ubvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4ubvARB_2};
	VPL_ExtProcedure _glVertexAttrib4ubvARB_F = {"glVertexAttrib4ubvARB",glVertexAttrib4ubvARB,&_glVertexAttrib4ubvARB_1,NULL};

	VPL_Parameter _glVertexAttrib4svARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib4svARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4svARB_2};
	VPL_ExtProcedure _glVertexAttrib4svARB_F = {"glVertexAttrib4svARB",glVertexAttrib4svARB,&_glVertexAttrib4svARB_1,NULL};

	VPL_Parameter _glVertexAttrib4sARB_5 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib4sARB_4 = { kIntType,2,NULL,0,0,&_glVertexAttrib4sARB_5};
	VPL_Parameter _glVertexAttrib4sARB_3 = { kIntType,2,NULL,0,0,&_glVertexAttrib4sARB_4};
	VPL_Parameter _glVertexAttrib4sARB_2 = { kIntType,2,NULL,0,0,&_glVertexAttrib4sARB_3};
	VPL_Parameter _glVertexAttrib4sARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4sARB_2};
	VPL_ExtProcedure _glVertexAttrib4sARB_F = {"glVertexAttrib4sARB",glVertexAttrib4sARB,&_glVertexAttrib4sARB_1,NULL};

	VPL_Parameter _glVertexAttrib4ivARB_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glVertexAttrib4ivARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4ivARB_2};
	VPL_ExtProcedure _glVertexAttrib4ivARB_F = {"glVertexAttrib4ivARB",glVertexAttrib4ivARB,&_glVertexAttrib4ivARB_1,NULL};

	VPL_Parameter _glVertexAttrib4fvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glVertexAttrib4fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4fvARB_2};
	VPL_ExtProcedure _glVertexAttrib4fvARB_F = {"glVertexAttrib4fvARB",glVertexAttrib4fvARB,&_glVertexAttrib4fvARB_1,NULL};

	VPL_Parameter _glVertexAttrib4fARB_5 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib4fARB_4 = { kFloatType,4,NULL,0,0,&_glVertexAttrib4fARB_5};
	VPL_Parameter _glVertexAttrib4fARB_3 = { kFloatType,4,NULL,0,0,&_glVertexAttrib4fARB_4};
	VPL_Parameter _glVertexAttrib4fARB_2 = { kFloatType,4,NULL,0,0,&_glVertexAttrib4fARB_3};
	VPL_Parameter _glVertexAttrib4fARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4fARB_2};
	VPL_ExtProcedure _glVertexAttrib4fARB_F = {"glVertexAttrib4fARB",glVertexAttrib4fARB,&_glVertexAttrib4fARB_1,NULL};

	VPL_Parameter _glVertexAttrib4dvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glVertexAttrib4dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4dvARB_2};
	VPL_ExtProcedure _glVertexAttrib4dvARB_F = {"glVertexAttrib4dvARB",glVertexAttrib4dvARB,&_glVertexAttrib4dvARB_1,NULL};

	VPL_Parameter _glVertexAttrib4dARB_5 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib4dARB_4 = { kFloatType,8,NULL,0,0,&_glVertexAttrib4dARB_5};
	VPL_Parameter _glVertexAttrib4dARB_3 = { kFloatType,8,NULL,0,0,&_glVertexAttrib4dARB_4};
	VPL_Parameter _glVertexAttrib4dARB_2 = { kFloatType,8,NULL,0,0,&_glVertexAttrib4dARB_3};
	VPL_Parameter _glVertexAttrib4dARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4dARB_2};
	VPL_ExtProcedure _glVertexAttrib4dARB_F = {"glVertexAttrib4dARB",glVertexAttrib4dARB,&_glVertexAttrib4dARB_1,NULL};

	VPL_Parameter _glVertexAttrib4bvARB_2 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_Parameter _glVertexAttrib4bvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4bvARB_2};
	VPL_ExtProcedure _glVertexAttrib4bvARB_F = {"glVertexAttrib4bvARB",glVertexAttrib4bvARB,&_glVertexAttrib4bvARB_1,NULL};

	VPL_Parameter _glVertexAttrib4NusvARB_2 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_Parameter _glVertexAttrib4NusvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4NusvARB_2};
	VPL_ExtProcedure _glVertexAttrib4NusvARB_F = {"glVertexAttrib4NusvARB",glVertexAttrib4NusvARB,&_glVertexAttrib4NusvARB_1,NULL};

	VPL_Parameter _glVertexAttrib4NuivARB_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glVertexAttrib4NuivARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4NuivARB_2};
	VPL_ExtProcedure _glVertexAttrib4NuivARB_F = {"glVertexAttrib4NuivARB",glVertexAttrib4NuivARB,&_glVertexAttrib4NuivARB_1,NULL};

	VPL_Parameter _glVertexAttrib4NubvARB_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glVertexAttrib4NubvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4NubvARB_2};
	VPL_ExtProcedure _glVertexAttrib4NubvARB_F = {"glVertexAttrib4NubvARB",glVertexAttrib4NubvARB,&_glVertexAttrib4NubvARB_1,NULL};

	VPL_Parameter _glVertexAttrib4NubARB_5 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib4NubARB_4 = { kUnsignedType,1,NULL,0,0,&_glVertexAttrib4NubARB_5};
	VPL_Parameter _glVertexAttrib4NubARB_3 = { kUnsignedType,1,NULL,0,0,&_glVertexAttrib4NubARB_4};
	VPL_Parameter _glVertexAttrib4NubARB_2 = { kUnsignedType,1,NULL,0,0,&_glVertexAttrib4NubARB_3};
	VPL_Parameter _glVertexAttrib4NubARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4NubARB_2};
	VPL_ExtProcedure _glVertexAttrib4NubARB_F = {"glVertexAttrib4NubARB",glVertexAttrib4NubARB,&_glVertexAttrib4NubARB_1,NULL};

	VPL_Parameter _glVertexAttrib4NsvARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib4NsvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4NsvARB_2};
	VPL_ExtProcedure _glVertexAttrib4NsvARB_F = {"glVertexAttrib4NsvARB",glVertexAttrib4NsvARB,&_glVertexAttrib4NsvARB_1,NULL};

	VPL_Parameter _glVertexAttrib4NivARB_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glVertexAttrib4NivARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4NivARB_2};
	VPL_ExtProcedure _glVertexAttrib4NivARB_F = {"glVertexAttrib4NivARB",glVertexAttrib4NivARB,&_glVertexAttrib4NivARB_1,NULL};

	VPL_Parameter _glVertexAttrib4NbvARB_2 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_Parameter _glVertexAttrib4NbvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib4NbvARB_2};
	VPL_ExtProcedure _glVertexAttrib4NbvARB_F = {"glVertexAttrib4NbvARB",glVertexAttrib4NbvARB,&_glVertexAttrib4NbvARB_1,NULL};

	VPL_Parameter _glVertexAttrib3svARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib3svARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3svARB_2};
	VPL_ExtProcedure _glVertexAttrib3svARB_F = {"glVertexAttrib3svARB",glVertexAttrib3svARB,&_glVertexAttrib3svARB_1,NULL};

	VPL_Parameter _glVertexAttrib3sARB_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib3sARB_3 = { kIntType,2,NULL,0,0,&_glVertexAttrib3sARB_4};
	VPL_Parameter _glVertexAttrib3sARB_2 = { kIntType,2,NULL,0,0,&_glVertexAttrib3sARB_3};
	VPL_Parameter _glVertexAttrib3sARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3sARB_2};
	VPL_ExtProcedure _glVertexAttrib3sARB_F = {"glVertexAttrib3sARB",glVertexAttrib3sARB,&_glVertexAttrib3sARB_1,NULL};

	VPL_Parameter _glVertexAttrib3fvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glVertexAttrib3fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3fvARB_2};
	VPL_ExtProcedure _glVertexAttrib3fvARB_F = {"glVertexAttrib3fvARB",glVertexAttrib3fvARB,&_glVertexAttrib3fvARB_1,NULL};

	VPL_Parameter _glVertexAttrib3fARB_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib3fARB_3 = { kFloatType,4,NULL,0,0,&_glVertexAttrib3fARB_4};
	VPL_Parameter _glVertexAttrib3fARB_2 = { kFloatType,4,NULL,0,0,&_glVertexAttrib3fARB_3};
	VPL_Parameter _glVertexAttrib3fARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3fARB_2};
	VPL_ExtProcedure _glVertexAttrib3fARB_F = {"glVertexAttrib3fARB",glVertexAttrib3fARB,&_glVertexAttrib3fARB_1,NULL};

	VPL_Parameter _glVertexAttrib3dvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glVertexAttrib3dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3dvARB_2};
	VPL_ExtProcedure _glVertexAttrib3dvARB_F = {"glVertexAttrib3dvARB",glVertexAttrib3dvARB,&_glVertexAttrib3dvARB_1,NULL};

	VPL_Parameter _glVertexAttrib3dARB_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib3dARB_3 = { kFloatType,8,NULL,0,0,&_glVertexAttrib3dARB_4};
	VPL_Parameter _glVertexAttrib3dARB_2 = { kFloatType,8,NULL,0,0,&_glVertexAttrib3dARB_3};
	VPL_Parameter _glVertexAttrib3dARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib3dARB_2};
	VPL_ExtProcedure _glVertexAttrib3dARB_F = {"glVertexAttrib3dARB",glVertexAttrib3dARB,&_glVertexAttrib3dARB_1,NULL};

	VPL_Parameter _glVertexAttrib2svARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib2svARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2svARB_2};
	VPL_ExtProcedure _glVertexAttrib2svARB_F = {"glVertexAttrib2svARB",glVertexAttrib2svARB,&_glVertexAttrib2svARB_1,NULL};

	VPL_Parameter _glVertexAttrib2sARB_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib2sARB_2 = { kIntType,2,NULL,0,0,&_glVertexAttrib2sARB_3};
	VPL_Parameter _glVertexAttrib2sARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2sARB_2};
	VPL_ExtProcedure _glVertexAttrib2sARB_F = {"glVertexAttrib2sARB",glVertexAttrib2sARB,&_glVertexAttrib2sARB_1,NULL};

	VPL_Parameter _glVertexAttrib2fvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glVertexAttrib2fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2fvARB_2};
	VPL_ExtProcedure _glVertexAttrib2fvARB_F = {"glVertexAttrib2fvARB",glVertexAttrib2fvARB,&_glVertexAttrib2fvARB_1,NULL};

	VPL_Parameter _glVertexAttrib2fARB_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib2fARB_2 = { kFloatType,4,NULL,0,0,&_glVertexAttrib2fARB_3};
	VPL_Parameter _glVertexAttrib2fARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2fARB_2};
	VPL_ExtProcedure _glVertexAttrib2fARB_F = {"glVertexAttrib2fARB",glVertexAttrib2fARB,&_glVertexAttrib2fARB_1,NULL};

	VPL_Parameter _glVertexAttrib2dvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glVertexAttrib2dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2dvARB_2};
	VPL_ExtProcedure _glVertexAttrib2dvARB_F = {"glVertexAttrib2dvARB",glVertexAttrib2dvARB,&_glVertexAttrib2dvARB_1,NULL};

	VPL_Parameter _glVertexAttrib2dARB_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib2dARB_2 = { kFloatType,8,NULL,0,0,&_glVertexAttrib2dARB_3};
	VPL_Parameter _glVertexAttrib2dARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib2dARB_2};
	VPL_ExtProcedure _glVertexAttrib2dARB_F = {"glVertexAttrib2dARB",glVertexAttrib2dARB,&_glVertexAttrib2dARB_1,NULL};

	VPL_Parameter _glVertexAttrib1svARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttrib1svARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1svARB_2};
	VPL_ExtProcedure _glVertexAttrib1svARB_F = {"glVertexAttrib1svARB",glVertexAttrib1svARB,&_glVertexAttrib1svARB_1,NULL};

	VPL_Parameter _glVertexAttrib1sARB_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib1sARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1sARB_2};
	VPL_ExtProcedure _glVertexAttrib1sARB_F = {"glVertexAttrib1sARB",glVertexAttrib1sARB,&_glVertexAttrib1sARB_1,NULL};

	VPL_Parameter _glVertexAttrib1fvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glVertexAttrib1fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1fvARB_2};
	VPL_ExtProcedure _glVertexAttrib1fvARB_F = {"glVertexAttrib1fvARB",glVertexAttrib1fvARB,&_glVertexAttrib1fvARB_1,NULL};

	VPL_Parameter _glVertexAttrib1fARB_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib1fARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1fARB_2};
	VPL_ExtProcedure _glVertexAttrib1fARB_F = {"glVertexAttrib1fARB",glVertexAttrib1fARB,&_glVertexAttrib1fARB_1,NULL};

	VPL_Parameter _glVertexAttrib1dvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glVertexAttrib1dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1dvARB_2};
	VPL_ExtProcedure _glVertexAttrib1dvARB_F = {"glVertexAttrib1dvARB",glVertexAttrib1dvARB,&_glVertexAttrib1dvARB_1,NULL};

	VPL_Parameter _glVertexAttrib1dARB_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttrib1dARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttrib1dARB_2};
	VPL_ExtProcedure _glVertexAttrib1dARB_F = {"glVertexAttrib1dARB",glVertexAttrib1dARB,&_glVertexAttrib1dARB_1,NULL};

	VPL_Parameter _glGetProgramivARB_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetProgramivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetProgramivARB_3};
	VPL_Parameter _glGetProgramivARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramivARB_2};
	VPL_ExtProcedure _glGetProgramivARB_F = {"glGetProgramivARB",glGetProgramivARB,&_glGetProgramivARB_1,NULL};

	VPL_Parameter _glGetProgramStringARB_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetProgramStringARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetProgramStringARB_3};
	VPL_Parameter _glGetProgramStringARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramStringARB_2};
	VPL_ExtProcedure _glGetProgramStringARB_F = {"glGetProgramStringARB",glGetProgramStringARB,&_glGetProgramStringARB_1,NULL};

	VPL_Parameter _glProgramStringARB_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glProgramStringARB_3 = { kIntType,4,NULL,0,0,&_glProgramStringARB_4};
	VPL_Parameter _glProgramStringARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramStringARB_3};
	VPL_Parameter _glProgramStringARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramStringARB_2};
	VPL_ExtProcedure _glProgramStringARB_F = {"glProgramStringARB",glProgramStringARB,&_glProgramStringARB_1,NULL};

	VPL_Parameter _glGetProgramLocalParameterfvARB_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetProgramLocalParameterfvARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetProgramLocalParameterfvARB_3};
	VPL_Parameter _glGetProgramLocalParameterfvARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramLocalParameterfvARB_2};
	VPL_ExtProcedure _glGetProgramLocalParameterfvARB_F = {"glGetProgramLocalParameterfvARB",glGetProgramLocalParameterfvARB,&_glGetProgramLocalParameterfvARB_1,NULL};

	VPL_Parameter _glGetProgramLocalParameterdvARB_3 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _glGetProgramLocalParameterdvARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetProgramLocalParameterdvARB_3};
	VPL_Parameter _glGetProgramLocalParameterdvARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramLocalParameterdvARB_2};
	VPL_ExtProcedure _glGetProgramLocalParameterdvARB_F = {"glGetProgramLocalParameterdvARB",glGetProgramLocalParameterdvARB,&_glGetProgramLocalParameterdvARB_1,NULL};

	VPL_Parameter _glGetProgramEnvParameterfvARB_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetProgramEnvParameterfvARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetProgramEnvParameterfvARB_3};
	VPL_Parameter _glGetProgramEnvParameterfvARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramEnvParameterfvARB_2};
	VPL_ExtProcedure _glGetProgramEnvParameterfvARB_F = {"glGetProgramEnvParameterfvARB",glGetProgramEnvParameterfvARB,&_glGetProgramEnvParameterfvARB_1,NULL};

	VPL_Parameter _glGetProgramEnvParameterdvARB_3 = { kPointerType,8,"double",1,0,NULL};
	VPL_Parameter _glGetProgramEnvParameterdvARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetProgramEnvParameterdvARB_3};
	VPL_Parameter _glGetProgramEnvParameterdvARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramEnvParameterdvARB_2};
	VPL_ExtProcedure _glGetProgramEnvParameterdvARB_F = {"glGetProgramEnvParameterdvARB",glGetProgramEnvParameterdvARB,&_glGetProgramEnvParameterdvARB_1,NULL};

	VPL_Parameter _glProgramLocalParameter4fvARB_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glProgramLocalParameter4fvARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameter4fvARB_3};
	VPL_Parameter _glProgramLocalParameter4fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameter4fvARB_2};
	VPL_ExtProcedure _glProgramLocalParameter4fvARB_F = {"glProgramLocalParameter4fvARB",glProgramLocalParameter4fvARB,&_glProgramLocalParameter4fvARB_1,NULL};

	VPL_Parameter _glProgramLocalParameter4fARB_6 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glProgramLocalParameter4fARB_5 = { kFloatType,4,NULL,0,0,&_glProgramLocalParameter4fARB_6};
	VPL_Parameter _glProgramLocalParameter4fARB_4 = { kFloatType,4,NULL,0,0,&_glProgramLocalParameter4fARB_5};
	VPL_Parameter _glProgramLocalParameter4fARB_3 = { kFloatType,4,NULL,0,0,&_glProgramLocalParameter4fARB_4};
	VPL_Parameter _glProgramLocalParameter4fARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameter4fARB_3};
	VPL_Parameter _glProgramLocalParameter4fARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameter4fARB_2};
	VPL_ExtProcedure _glProgramLocalParameter4fARB_F = {"glProgramLocalParameter4fARB",glProgramLocalParameter4fARB,&_glProgramLocalParameter4fARB_1,NULL};

	VPL_Parameter _glProgramLocalParameter4dvARB_3 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glProgramLocalParameter4dvARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameter4dvARB_3};
	VPL_Parameter _glProgramLocalParameter4dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameter4dvARB_2};
	VPL_ExtProcedure _glProgramLocalParameter4dvARB_F = {"glProgramLocalParameter4dvARB",glProgramLocalParameter4dvARB,&_glProgramLocalParameter4dvARB_1,NULL};

	VPL_Parameter _glProgramLocalParameter4dARB_6 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glProgramLocalParameter4dARB_5 = { kFloatType,8,NULL,0,0,&_glProgramLocalParameter4dARB_6};
	VPL_Parameter _glProgramLocalParameter4dARB_4 = { kFloatType,8,NULL,0,0,&_glProgramLocalParameter4dARB_5};
	VPL_Parameter _glProgramLocalParameter4dARB_3 = { kFloatType,8,NULL,0,0,&_glProgramLocalParameter4dARB_4};
	VPL_Parameter _glProgramLocalParameter4dARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameter4dARB_3};
	VPL_Parameter _glProgramLocalParameter4dARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameter4dARB_2};
	VPL_ExtProcedure _glProgramLocalParameter4dARB_F = {"glProgramLocalParameter4dARB",glProgramLocalParameter4dARB,&_glProgramLocalParameter4dARB_1,NULL};

	VPL_Parameter _glProgramEnvParameter4fvARB_3 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glProgramEnvParameter4fvARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameter4fvARB_3};
	VPL_Parameter _glProgramEnvParameter4fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameter4fvARB_2};
	VPL_ExtProcedure _glProgramEnvParameter4fvARB_F = {"glProgramEnvParameter4fvARB",glProgramEnvParameter4fvARB,&_glProgramEnvParameter4fvARB_1,NULL};

	VPL_Parameter _glProgramEnvParameter4fARB_6 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glProgramEnvParameter4fARB_5 = { kFloatType,4,NULL,0,0,&_glProgramEnvParameter4fARB_6};
	VPL_Parameter _glProgramEnvParameter4fARB_4 = { kFloatType,4,NULL,0,0,&_glProgramEnvParameter4fARB_5};
	VPL_Parameter _glProgramEnvParameter4fARB_3 = { kFloatType,4,NULL,0,0,&_glProgramEnvParameter4fARB_4};
	VPL_Parameter _glProgramEnvParameter4fARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameter4fARB_3};
	VPL_Parameter _glProgramEnvParameter4fARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameter4fARB_2};
	VPL_ExtProcedure _glProgramEnvParameter4fARB_F = {"glProgramEnvParameter4fARB",glProgramEnvParameter4fARB,&_glProgramEnvParameter4fARB_1,NULL};

	VPL_Parameter _glProgramEnvParameter4dvARB_3 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glProgramEnvParameter4dvARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameter4dvARB_3};
	VPL_Parameter _glProgramEnvParameter4dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameter4dvARB_2};
	VPL_ExtProcedure _glProgramEnvParameter4dvARB_F = {"glProgramEnvParameter4dvARB",glProgramEnvParameter4dvARB,&_glProgramEnvParameter4dvARB_1,NULL};

	VPL_Parameter _glProgramEnvParameter4dARB_6 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glProgramEnvParameter4dARB_5 = { kFloatType,8,NULL,0,0,&_glProgramEnvParameter4dARB_6};
	VPL_Parameter _glProgramEnvParameter4dARB_4 = { kFloatType,8,NULL,0,0,&_glProgramEnvParameter4dARB_5};
	VPL_Parameter _glProgramEnvParameter4dARB_3 = { kFloatType,8,NULL,0,0,&_glProgramEnvParameter4dARB_4};
	VPL_Parameter _glProgramEnvParameter4dARB_2 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameter4dARB_3};
	VPL_Parameter _glProgramEnvParameter4dARB_1 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameter4dARB_2};
	VPL_ExtProcedure _glProgramEnvParameter4dARB_F = {"glProgramEnvParameter4dARB",glProgramEnvParameter4dARB,&_glProgramEnvParameter4dARB_1,NULL};

	VPL_Parameter _glIsProgramARB_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsProgramARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsProgramARB_F = {"glIsProgramARB",glIsProgramARB,&_glIsProgramARB_1,&_glIsProgramARB_R};

	VPL_Parameter _glGenProgramsARB_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenProgramsARB_1 = { kIntType,4,NULL,0,0,&_glGenProgramsARB_2};
	VPL_ExtProcedure _glGenProgramsARB_F = {"glGenProgramsARB",glGenProgramsARB,&_glGenProgramsARB_1,NULL};

	VPL_Parameter _glDeleteProgramsARB_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteProgramsARB_1 = { kIntType,4,NULL,0,0,&_glDeleteProgramsARB_2};
	VPL_ExtProcedure _glDeleteProgramsARB_F = {"glDeleteProgramsARB",glDeleteProgramsARB,&_glDeleteProgramsARB_1,NULL};

	VPL_Parameter _glBindProgramARB_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindProgramARB_1 = { kUnsignedType,4,NULL,0,0,&_glBindProgramARB_2};
	VPL_ExtProcedure _glBindProgramARB_F = {"glBindProgramARB",glBindProgramARB,&_glBindProgramARB_1,NULL};

	VPL_Parameter _glPointParameterfvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glPointParameterfvARB_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameterfvARB_2};
	VPL_ExtProcedure _glPointParameterfvARB_F = {"glPointParameterfvARB",glPointParameterfvARB,&_glPointParameterfvARB_1,NULL};

	VPL_Parameter _glPointParameterfARB_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glPointParameterfARB_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameterfARB_2};
	VPL_ExtProcedure _glPointParameterfARB_F = {"glPointParameterfARB",glPointParameterfARB,&_glPointParameterfARB_1,NULL};

	VPL_Parameter _glGetQueryObjectuivARB_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGetQueryObjectuivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectuivARB_3};
	VPL_Parameter _glGetQueryObjectuivARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectuivARB_2};
	VPL_ExtProcedure _glGetQueryObjectuivARB_F = {"glGetQueryObjectuivARB",glGetQueryObjectuivARB,&_glGetQueryObjectuivARB_1,NULL};

	VPL_Parameter _glGetQueryObjectivARB_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetQueryObjectivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectivARB_3};
	VPL_Parameter _glGetQueryObjectivARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectivARB_2};
	VPL_ExtProcedure _glGetQueryObjectivARB_F = {"glGetQueryObjectivARB",glGetQueryObjectivARB,&_glGetQueryObjectivARB_1,NULL};

	VPL_Parameter _glGetQueryivARB_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _glGetQueryivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryivARB_3};
	VPL_Parameter _glGetQueryivARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryivARB_2};
	VPL_ExtProcedure _glGetQueryivARB_F = {"glGetQueryivARB",glGetQueryivARB,&_glGetQueryivARB_1,NULL};

	VPL_Parameter _glEndQueryARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glEndQueryARB_F = {"glEndQueryARB",glEndQueryARB,&_glEndQueryARB_1,NULL};

	VPL_Parameter _glBeginQueryARB_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBeginQueryARB_1 = { kUnsignedType,4,NULL,0,0,&_glBeginQueryARB_2};
	VPL_ExtProcedure _glBeginQueryARB_F = {"glBeginQueryARB",glBeginQueryARB,&_glBeginQueryARB_1,NULL};

	VPL_Parameter _glIsQueryARB_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsQueryARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsQueryARB_F = {"glIsQueryARB",glIsQueryARB,&_glIsQueryARB_1,&_glIsQueryARB_R};

	VPL_Parameter _glDeleteQueriesARB_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glDeleteQueriesARB_1 = { kIntType,4,NULL,0,0,&_glDeleteQueriesARB_2};
	VPL_ExtProcedure _glDeleteQueriesARB_F = {"glDeleteQueriesARB",glDeleteQueriesARB,&_glDeleteQueriesARB_1,NULL};

	VPL_Parameter _glGenQueriesARB_2 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _glGenQueriesARB_1 = { kIntType,4,NULL,0,0,&_glGenQueriesARB_2};
	VPL_ExtProcedure _glGenQueriesARB_F = {"glGenQueriesARB",glGenQueriesARB,&_glGenQueriesARB_1,NULL};

	VPL_Parameter _glWindowPos3svARB_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3svARB_F = {"glWindowPos3svARB",glWindowPos3svARB,&_glWindowPos3svARB_1,NULL};

	VPL_Parameter _glWindowPos3sARB_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3sARB_2 = { kIntType,2,NULL,0,0,&_glWindowPos3sARB_3};
	VPL_Parameter _glWindowPos3sARB_1 = { kIntType,2,NULL,0,0,&_glWindowPos3sARB_2};
	VPL_ExtProcedure _glWindowPos3sARB_F = {"glWindowPos3sARB",glWindowPos3sARB,&_glWindowPos3sARB_1,NULL};

	VPL_Parameter _glWindowPos3ivARB_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3ivARB_F = {"glWindowPos3ivARB",glWindowPos3ivARB,&_glWindowPos3ivARB_1,NULL};

	VPL_Parameter _glWindowPos3iARB_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3iARB_2 = { kIntType,4,NULL,0,0,&_glWindowPos3iARB_3};
	VPL_Parameter _glWindowPos3iARB_1 = { kIntType,4,NULL,0,0,&_glWindowPos3iARB_2};
	VPL_ExtProcedure _glWindowPos3iARB_F = {"glWindowPos3iARB",glWindowPos3iARB,&_glWindowPos3iARB_1,NULL};

	VPL_Parameter _glWindowPos3fvARB_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3fvARB_F = {"glWindowPos3fvARB",glWindowPos3fvARB,&_glWindowPos3fvARB_1,NULL};

	VPL_Parameter _glWindowPos3fARB_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3fARB_2 = { kFloatType,4,NULL,0,0,&_glWindowPos3fARB_3};
	VPL_Parameter _glWindowPos3fARB_1 = { kFloatType,4,NULL,0,0,&_glWindowPos3fARB_2};
	VPL_ExtProcedure _glWindowPos3fARB_F = {"glWindowPos3fARB",glWindowPos3fARB,&_glWindowPos3fARB_1,NULL};

	VPL_Parameter _glWindowPos3dvARB_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3dvARB_F = {"glWindowPos3dvARB",glWindowPos3dvARB,&_glWindowPos3dvARB_1,NULL};

	VPL_Parameter _glWindowPos3dARB_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3dARB_2 = { kFloatType,8,NULL,0,0,&_glWindowPos3dARB_3};
	VPL_Parameter _glWindowPos3dARB_1 = { kFloatType,8,NULL,0,0,&_glWindowPos3dARB_2};
	VPL_ExtProcedure _glWindowPos3dARB_F = {"glWindowPos3dARB",glWindowPos3dARB,&_glWindowPos3dARB_1,NULL};

	VPL_Parameter _glWindowPos2svARB_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glWindowPos2svARB_F = {"glWindowPos2svARB",glWindowPos2svARB,&_glWindowPos2svARB_1,NULL};

	VPL_Parameter _glWindowPos2sARB_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos2sARB_1 = { kIntType,2,NULL,0,0,&_glWindowPos2sARB_2};
	VPL_ExtProcedure _glWindowPos2sARB_F = {"glWindowPos2sARB",glWindowPos2sARB,&_glWindowPos2sARB_1,NULL};

	VPL_Parameter _glWindowPos2ivARB_1 = { kPointerType,4,"long int",1,1,NULL};
	VPL_ExtProcedure _glWindowPos2ivARB_F = {"glWindowPos2ivARB",glWindowPos2ivARB,&_glWindowPos2ivARB_1,NULL};

	VPL_Parameter _glWindowPos2iARB_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos2iARB_1 = { kIntType,4,NULL,0,0,&_glWindowPos2iARB_2};
	VPL_ExtProcedure _glWindowPos2iARB_F = {"glWindowPos2iARB",glWindowPos2iARB,&_glWindowPos2iARB_1,NULL};

	VPL_Parameter _glWindowPos2fvARB_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glWindowPos2fvARB_F = {"glWindowPos2fvARB",glWindowPos2fvARB,&_glWindowPos2fvARB_1,NULL};

	VPL_Parameter _glWindowPos2fARB_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos2fARB_1 = { kFloatType,4,NULL,0,0,&_glWindowPos2fARB_2};
	VPL_ExtProcedure _glWindowPos2fARB_F = {"glWindowPos2fARB",glWindowPos2fARB,&_glWindowPos2fARB_1,NULL};

	VPL_Parameter _glWindowPos2dvARB_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glWindowPos2dvARB_F = {"glWindowPos2dvARB",glWindowPos2dvARB,&_glWindowPos2dvARB_1,NULL};

	VPL_Parameter _glWindowPos2dARB_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos2dARB_1 = { kFloatType,8,NULL,0,0,&_glWindowPos2dARB_2};
	VPL_ExtProcedure _glWindowPos2dARB_F = {"glWindowPos2dARB",glWindowPos2dARB,&_glWindowPos2dARB_1,NULL};

	VPL_Parameter _glVertexBlendARB_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glVertexBlendARB_F = {"glVertexBlendARB",glVertexBlendARB,&_glVertexBlendARB_1,NULL};

	VPL_Parameter _glWeightPointerARB_4 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glWeightPointerARB_3 = { kIntType,4,NULL,0,0,&_glWeightPointerARB_4};
	VPL_Parameter _glWeightPointerARB_2 = { kUnsignedType,4,NULL,0,0,&_glWeightPointerARB_3};
	VPL_Parameter _glWeightPointerARB_1 = { kIntType,4,NULL,0,0,&_glWeightPointerARB_2};
	VPL_ExtProcedure _glWeightPointerARB_F = {"glWeightPointerARB",glWeightPointerARB,&_glWeightPointerARB_1,NULL};

	VPL_Parameter _glWeightuivARB_2 = { kPointerType,4,"unsigned long",1,1,NULL};
	VPL_Parameter _glWeightuivARB_1 = { kIntType,4,NULL,0,0,&_glWeightuivARB_2};
	VPL_ExtProcedure _glWeightuivARB_F = {"glWeightuivARB",glWeightuivARB,&_glWeightuivARB_1,NULL};

	VPL_Parameter _glWeightusvARB_2 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_Parameter _glWeightusvARB_1 = { kIntType,4,NULL,0,0,&_glWeightusvARB_2};
	VPL_ExtProcedure _glWeightusvARB_F = {"glWeightusvARB",glWeightusvARB,&_glWeightusvARB_1,NULL};

	VPL_Parameter _glWeightubvARB_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glWeightubvARB_1 = { kIntType,4,NULL,0,0,&_glWeightubvARB_2};
	VPL_ExtProcedure _glWeightubvARB_F = {"glWeightubvARB",glWeightubvARB,&_glWeightubvARB_1,NULL};

	VPL_Parameter _glWeightdvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glWeightdvARB_1 = { kIntType,4,NULL,0,0,&_glWeightdvARB_2};
	VPL_ExtProcedure _glWeightdvARB_F = {"glWeightdvARB",glWeightdvARB,&_glWeightdvARB_1,NULL};

	VPL_Parameter _glWeightfvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glWeightfvARB_1 = { kIntType,4,NULL,0,0,&_glWeightfvARB_2};
	VPL_ExtProcedure _glWeightfvARB_F = {"glWeightfvARB",glWeightfvARB,&_glWeightfvARB_1,NULL};

	VPL_Parameter _glWeightivARB_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glWeightivARB_1 = { kIntType,4,NULL,0,0,&_glWeightivARB_2};
	VPL_ExtProcedure _glWeightivARB_F = {"glWeightivARB",glWeightivARB,&_glWeightivARB_1,NULL};

	VPL_Parameter _glWeightsvARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glWeightsvARB_1 = { kIntType,4,NULL,0,0,&_glWeightsvARB_2};
	VPL_ExtProcedure _glWeightsvARB_F = {"glWeightsvARB",glWeightsvARB,&_glWeightsvARB_1,NULL};

	VPL_Parameter _glWeightbvARB_2 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_Parameter _glWeightbvARB_1 = { kIntType,4,NULL,0,0,&_glWeightbvARB_2};
	VPL_ExtProcedure _glWeightbvARB_F = {"glWeightbvARB",glWeightbvARB,&_glWeightbvARB_1,NULL};

	VPL_Parameter _glGetCompressedTexImageARB_3 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _glGetCompressedTexImageARB_2 = { kIntType,4,NULL,0,0,&_glGetCompressedTexImageARB_3};
	VPL_Parameter _glGetCompressedTexImageARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetCompressedTexImageARB_2};
	VPL_ExtProcedure _glGetCompressedTexImageARB_F = {"glGetCompressedTexImageARB",glGetCompressedTexImageARB,&_glGetCompressedTexImageARB_1,NULL};

	VPL_Parameter _glCompressedTexSubImage1DARB_7 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexSubImage1DARB_6 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage1DARB_7};
	VPL_Parameter _glCompressedTexSubImage1DARB_5 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage1DARB_6};
	VPL_Parameter _glCompressedTexSubImage1DARB_4 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage1DARB_5};
	VPL_Parameter _glCompressedTexSubImage1DARB_3 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage1DARB_4};
	VPL_Parameter _glCompressedTexSubImage1DARB_2 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage1DARB_3};
	VPL_Parameter _glCompressedTexSubImage1DARB_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage1DARB_2};
	VPL_ExtProcedure _glCompressedTexSubImage1DARB_F = {"glCompressedTexSubImage1DARB",glCompressedTexSubImage1DARB,&_glCompressedTexSubImage1DARB_1,NULL};

	VPL_Parameter _glCompressedTexSubImage2DARB_9 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexSubImage2DARB_8 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2DARB_9};
	VPL_Parameter _glCompressedTexSubImage2DARB_7 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage2DARB_8};
	VPL_Parameter _glCompressedTexSubImage2DARB_6 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2DARB_7};
	VPL_Parameter _glCompressedTexSubImage2DARB_5 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2DARB_6};
	VPL_Parameter _glCompressedTexSubImage2DARB_4 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2DARB_5};
	VPL_Parameter _glCompressedTexSubImage2DARB_3 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2DARB_4};
	VPL_Parameter _glCompressedTexSubImage2DARB_2 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage2DARB_3};
	VPL_Parameter _glCompressedTexSubImage2DARB_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage2DARB_2};
	VPL_ExtProcedure _glCompressedTexSubImage2DARB_F = {"glCompressedTexSubImage2DARB",glCompressedTexSubImage2DARB,&_glCompressedTexSubImage2DARB_1,NULL};

	VPL_Parameter _glCompressedTexSubImage3DARB_11 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexSubImage3DARB_10 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_11};
	VPL_Parameter _glCompressedTexSubImage3DARB_9 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_10};
	VPL_Parameter _glCompressedTexSubImage3DARB_8 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_9};
	VPL_Parameter _glCompressedTexSubImage3DARB_7 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_8};
	VPL_Parameter _glCompressedTexSubImage3DARB_6 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_7};
	VPL_Parameter _glCompressedTexSubImage3DARB_5 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_6};
	VPL_Parameter _glCompressedTexSubImage3DARB_4 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_5};
	VPL_Parameter _glCompressedTexSubImage3DARB_3 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_4};
	VPL_Parameter _glCompressedTexSubImage3DARB_2 = { kIntType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_3};
	VPL_Parameter _glCompressedTexSubImage3DARB_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexSubImage3DARB_2};
	VPL_ExtProcedure _glCompressedTexSubImage3DARB_F = {"glCompressedTexSubImage3DARB",glCompressedTexSubImage3DARB,&_glCompressedTexSubImage3DARB_1,NULL};

	VPL_Parameter _glCompressedTexImage1DARB_7 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexImage1DARB_6 = { kIntType,4,NULL,0,0,&_glCompressedTexImage1DARB_7};
	VPL_Parameter _glCompressedTexImage1DARB_5 = { kIntType,4,NULL,0,0,&_glCompressedTexImage1DARB_6};
	VPL_Parameter _glCompressedTexImage1DARB_4 = { kIntType,4,NULL,0,0,&_glCompressedTexImage1DARB_5};
	VPL_Parameter _glCompressedTexImage1DARB_3 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage1DARB_4};
	VPL_Parameter _glCompressedTexImage1DARB_2 = { kIntType,4,NULL,0,0,&_glCompressedTexImage1DARB_3};
	VPL_Parameter _glCompressedTexImage1DARB_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage1DARB_2};
	VPL_ExtProcedure _glCompressedTexImage1DARB_F = {"glCompressedTexImage1DARB",glCompressedTexImage1DARB,&_glCompressedTexImage1DARB_1,NULL};

	VPL_Parameter _glCompressedTexImage2DARB_8 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexImage2DARB_7 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2DARB_8};
	VPL_Parameter _glCompressedTexImage2DARB_6 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2DARB_7};
	VPL_Parameter _glCompressedTexImage2DARB_5 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2DARB_6};
	VPL_Parameter _glCompressedTexImage2DARB_4 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2DARB_5};
	VPL_Parameter _glCompressedTexImage2DARB_3 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage2DARB_4};
	VPL_Parameter _glCompressedTexImage2DARB_2 = { kIntType,4,NULL,0,0,&_glCompressedTexImage2DARB_3};
	VPL_Parameter _glCompressedTexImage2DARB_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage2DARB_2};
	VPL_ExtProcedure _glCompressedTexImage2DARB_F = {"glCompressedTexImage2DARB",glCompressedTexImage2DARB,&_glCompressedTexImage2DARB_1,NULL};

	VPL_Parameter _glCompressedTexImage3DARB_9 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glCompressedTexImage3DARB_8 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3DARB_9};
	VPL_Parameter _glCompressedTexImage3DARB_7 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3DARB_8};
	VPL_Parameter _glCompressedTexImage3DARB_6 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3DARB_7};
	VPL_Parameter _glCompressedTexImage3DARB_5 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3DARB_6};
	VPL_Parameter _glCompressedTexImage3DARB_4 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3DARB_5};
	VPL_Parameter _glCompressedTexImage3DARB_3 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage3DARB_4};
	VPL_Parameter _glCompressedTexImage3DARB_2 = { kIntType,4,NULL,0,0,&_glCompressedTexImage3DARB_3};
	VPL_Parameter _glCompressedTexImage3DARB_1 = { kUnsignedType,4,NULL,0,0,&_glCompressedTexImage3DARB_2};
	VPL_ExtProcedure _glCompressedTexImage3DARB_F = {"glCompressedTexImage3DARB",glCompressedTexImage3DARB,&_glCompressedTexImage3DARB_1,NULL};

	VPL_Parameter _glSamplePassARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glSamplePassARB_F = {"glSamplePassARB",glSamplePassARB,&_glSamplePassARB_1,NULL};

	VPL_Parameter _glSampleCoverageARB_2 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glSampleCoverageARB_1 = { kFloatType,4,NULL,0,0,&_glSampleCoverageARB_2};
	VPL_ExtProcedure _glSampleCoverageARB_F = {"glSampleCoverageARB",glSampleCoverageARB,&_glSampleCoverageARB_1,NULL};

	VPL_Parameter _glMultTransposeMatrixdARB_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glMultTransposeMatrixdARB_F = {"glMultTransposeMatrixdARB",glMultTransposeMatrixdARB,&_glMultTransposeMatrixdARB_1,NULL};

	VPL_Parameter _glMultTransposeMatrixfARB_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glMultTransposeMatrixfARB_F = {"glMultTransposeMatrixfARB",glMultTransposeMatrixfARB,&_glMultTransposeMatrixfARB_1,NULL};

	VPL_Parameter _glLoadTransposeMatrixdARB_1 = { kPointerType,8,"double",1,1,NULL};
	VPL_ExtProcedure _glLoadTransposeMatrixdARB_F = {"glLoadTransposeMatrixdARB",glLoadTransposeMatrixdARB,&_glLoadTransposeMatrixdARB_1,NULL};

	VPL_Parameter _glLoadTransposeMatrixfARB_1 = { kPointerType,4,"float",1,1,NULL};
	VPL_ExtProcedure _glLoadTransposeMatrixfARB_F = {"glLoadTransposeMatrixfARB",glLoadTransposeMatrixfARB,&_glLoadTransposeMatrixfARB_1,NULL};

	VPL_Parameter _glMultiTexCoord4svARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glMultiTexCoord4svARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4svARB_2};
	VPL_ExtProcedure _glMultiTexCoord4svARB_F = {"glMultiTexCoord4svARB",glMultiTexCoord4svARB,&_glMultiTexCoord4svARB_1,NULL};

	VPL_Parameter _glMultiTexCoord4sARB_5 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord4sARB_4 = { kIntType,2,NULL,0,0,&_glMultiTexCoord4sARB_5};
	VPL_Parameter _glMultiTexCoord4sARB_3 = { kIntType,2,NULL,0,0,&_glMultiTexCoord4sARB_4};
	VPL_Parameter _glMultiTexCoord4sARB_2 = { kIntType,2,NULL,0,0,&_glMultiTexCoord4sARB_3};
	VPL_Parameter _glMultiTexCoord4sARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4sARB_2};
	VPL_ExtProcedure _glMultiTexCoord4sARB_F = {"glMultiTexCoord4sARB",glMultiTexCoord4sARB,&_glMultiTexCoord4sARB_1,NULL};

	VPL_Parameter _glMultiTexCoord4ivARB_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMultiTexCoord4ivARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4ivARB_2};
	VPL_ExtProcedure _glMultiTexCoord4ivARB_F = {"glMultiTexCoord4ivARB",glMultiTexCoord4ivARB,&_glMultiTexCoord4ivARB_1,NULL};

	VPL_Parameter _glMultiTexCoord4iARB_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord4iARB_4 = { kIntType,4,NULL,0,0,&_glMultiTexCoord4iARB_5};
	VPL_Parameter _glMultiTexCoord4iARB_3 = { kIntType,4,NULL,0,0,&_glMultiTexCoord4iARB_4};
	VPL_Parameter _glMultiTexCoord4iARB_2 = { kIntType,4,NULL,0,0,&_glMultiTexCoord4iARB_3};
	VPL_Parameter _glMultiTexCoord4iARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4iARB_2};
	VPL_ExtProcedure _glMultiTexCoord4iARB_F = {"glMultiTexCoord4iARB",glMultiTexCoord4iARB,&_glMultiTexCoord4iARB_1,NULL};

	VPL_Parameter _glMultiTexCoord4fvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMultiTexCoord4fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4fvARB_2};
	VPL_ExtProcedure _glMultiTexCoord4fvARB_F = {"glMultiTexCoord4fvARB",glMultiTexCoord4fvARB,&_glMultiTexCoord4fvARB_1,NULL};

	VPL_Parameter _glMultiTexCoord4fARB_5 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord4fARB_4 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord4fARB_5};
	VPL_Parameter _glMultiTexCoord4fARB_3 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord4fARB_4};
	VPL_Parameter _glMultiTexCoord4fARB_2 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord4fARB_3};
	VPL_Parameter _glMultiTexCoord4fARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4fARB_2};
	VPL_ExtProcedure _glMultiTexCoord4fARB_F = {"glMultiTexCoord4fARB",glMultiTexCoord4fARB,&_glMultiTexCoord4fARB_1,NULL};

	VPL_Parameter _glMultiTexCoord4dvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMultiTexCoord4dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4dvARB_2};
	VPL_ExtProcedure _glMultiTexCoord4dvARB_F = {"glMultiTexCoord4dvARB",glMultiTexCoord4dvARB,&_glMultiTexCoord4dvARB_1,NULL};

	VPL_Parameter _glMultiTexCoord4dARB_5 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord4dARB_4 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord4dARB_5};
	VPL_Parameter _glMultiTexCoord4dARB_3 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord4dARB_4};
	VPL_Parameter _glMultiTexCoord4dARB_2 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord4dARB_3};
	VPL_Parameter _glMultiTexCoord4dARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord4dARB_2};
	VPL_ExtProcedure _glMultiTexCoord4dARB_F = {"glMultiTexCoord4dARB",glMultiTexCoord4dARB,&_glMultiTexCoord4dARB_1,NULL};

	VPL_Parameter _glMultiTexCoord3svARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glMultiTexCoord3svARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3svARB_2};
	VPL_ExtProcedure _glMultiTexCoord3svARB_F = {"glMultiTexCoord3svARB",glMultiTexCoord3svARB,&_glMultiTexCoord3svARB_1,NULL};

	VPL_Parameter _glMultiTexCoord3sARB_4 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord3sARB_3 = { kIntType,2,NULL,0,0,&_glMultiTexCoord3sARB_4};
	VPL_Parameter _glMultiTexCoord3sARB_2 = { kIntType,2,NULL,0,0,&_glMultiTexCoord3sARB_3};
	VPL_Parameter _glMultiTexCoord3sARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3sARB_2};
	VPL_ExtProcedure _glMultiTexCoord3sARB_F = {"glMultiTexCoord3sARB",glMultiTexCoord3sARB,&_glMultiTexCoord3sARB_1,NULL};

	VPL_Parameter _glMultiTexCoord3ivARB_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMultiTexCoord3ivARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3ivARB_2};
	VPL_ExtProcedure _glMultiTexCoord3ivARB_F = {"glMultiTexCoord3ivARB",glMultiTexCoord3ivARB,&_glMultiTexCoord3ivARB_1,NULL};

	VPL_Parameter _glMultiTexCoord3iARB_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord3iARB_3 = { kIntType,4,NULL,0,0,&_glMultiTexCoord3iARB_4};
	VPL_Parameter _glMultiTexCoord3iARB_2 = { kIntType,4,NULL,0,0,&_glMultiTexCoord3iARB_3};
	VPL_Parameter _glMultiTexCoord3iARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3iARB_2};
	VPL_ExtProcedure _glMultiTexCoord3iARB_F = {"glMultiTexCoord3iARB",glMultiTexCoord3iARB,&_glMultiTexCoord3iARB_1,NULL};

	VPL_Parameter _glMultiTexCoord3fvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMultiTexCoord3fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3fvARB_2};
	VPL_ExtProcedure _glMultiTexCoord3fvARB_F = {"glMultiTexCoord3fvARB",glMultiTexCoord3fvARB,&_glMultiTexCoord3fvARB_1,NULL};

	VPL_Parameter _glMultiTexCoord3fARB_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord3fARB_3 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord3fARB_4};
	VPL_Parameter _glMultiTexCoord3fARB_2 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord3fARB_3};
	VPL_Parameter _glMultiTexCoord3fARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3fARB_2};
	VPL_ExtProcedure _glMultiTexCoord3fARB_F = {"glMultiTexCoord3fARB",glMultiTexCoord3fARB,&_glMultiTexCoord3fARB_1,NULL};

	VPL_Parameter _glMultiTexCoord3dvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMultiTexCoord3dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3dvARB_2};
	VPL_ExtProcedure _glMultiTexCoord3dvARB_F = {"glMultiTexCoord3dvARB",glMultiTexCoord3dvARB,&_glMultiTexCoord3dvARB_1,NULL};

	VPL_Parameter _glMultiTexCoord3dARB_4 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord3dARB_3 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord3dARB_4};
	VPL_Parameter _glMultiTexCoord3dARB_2 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord3dARB_3};
	VPL_Parameter _glMultiTexCoord3dARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord3dARB_2};
	VPL_ExtProcedure _glMultiTexCoord3dARB_F = {"glMultiTexCoord3dARB",glMultiTexCoord3dARB,&_glMultiTexCoord3dARB_1,NULL};

	VPL_Parameter _glMultiTexCoord2svARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glMultiTexCoord2svARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2svARB_2};
	VPL_ExtProcedure _glMultiTexCoord2svARB_F = {"glMultiTexCoord2svARB",glMultiTexCoord2svARB,&_glMultiTexCoord2svARB_1,NULL};

	VPL_Parameter _glMultiTexCoord2sARB_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord2sARB_2 = { kIntType,2,NULL,0,0,&_glMultiTexCoord2sARB_3};
	VPL_Parameter _glMultiTexCoord2sARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2sARB_2};
	VPL_ExtProcedure _glMultiTexCoord2sARB_F = {"glMultiTexCoord2sARB",glMultiTexCoord2sARB,&_glMultiTexCoord2sARB_1,NULL};

	VPL_Parameter _glMultiTexCoord2ivARB_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMultiTexCoord2ivARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2ivARB_2};
	VPL_ExtProcedure _glMultiTexCoord2ivARB_F = {"glMultiTexCoord2ivARB",glMultiTexCoord2ivARB,&_glMultiTexCoord2ivARB_1,NULL};

	VPL_Parameter _glMultiTexCoord2iARB_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord2iARB_2 = { kIntType,4,NULL,0,0,&_glMultiTexCoord2iARB_3};
	VPL_Parameter _glMultiTexCoord2iARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2iARB_2};
	VPL_ExtProcedure _glMultiTexCoord2iARB_F = {"glMultiTexCoord2iARB",glMultiTexCoord2iARB,&_glMultiTexCoord2iARB_1,NULL};

	VPL_Parameter _glMultiTexCoord2fvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMultiTexCoord2fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2fvARB_2};
	VPL_ExtProcedure _glMultiTexCoord2fvARB_F = {"glMultiTexCoord2fvARB",glMultiTexCoord2fvARB,&_glMultiTexCoord2fvARB_1,NULL};

	VPL_Parameter _glMultiTexCoord2fARB_3 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord2fARB_2 = { kFloatType,4,NULL,0,0,&_glMultiTexCoord2fARB_3};
	VPL_Parameter _glMultiTexCoord2fARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2fARB_2};
	VPL_ExtProcedure _glMultiTexCoord2fARB_F = {"glMultiTexCoord2fARB",glMultiTexCoord2fARB,&_glMultiTexCoord2fARB_1,NULL};

	VPL_Parameter _glMultiTexCoord2dvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMultiTexCoord2dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2dvARB_2};
	VPL_ExtProcedure _glMultiTexCoord2dvARB_F = {"glMultiTexCoord2dvARB",glMultiTexCoord2dvARB,&_glMultiTexCoord2dvARB_1,NULL};

	VPL_Parameter _glMultiTexCoord2dARB_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord2dARB_2 = { kFloatType,8,NULL,0,0,&_glMultiTexCoord2dARB_3};
	VPL_Parameter _glMultiTexCoord2dARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord2dARB_2};
	VPL_ExtProcedure _glMultiTexCoord2dARB_F = {"glMultiTexCoord2dARB",glMultiTexCoord2dARB,&_glMultiTexCoord2dARB_1,NULL};

	VPL_Parameter _glMultiTexCoord1svARB_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glMultiTexCoord1svARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1svARB_2};
	VPL_ExtProcedure _glMultiTexCoord1svARB_F = {"glMultiTexCoord1svARB",glMultiTexCoord1svARB,&_glMultiTexCoord1svARB_1,NULL};

	VPL_Parameter _glMultiTexCoord1sARB_2 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord1sARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1sARB_2};
	VPL_ExtProcedure _glMultiTexCoord1sARB_F = {"glMultiTexCoord1sARB",glMultiTexCoord1sARB,&_glMultiTexCoord1sARB_1,NULL};

	VPL_Parameter _glMultiTexCoord1ivARB_2 = { kPointerType,4,"long int",1,1,NULL};
	VPL_Parameter _glMultiTexCoord1ivARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1ivARB_2};
	VPL_ExtProcedure _glMultiTexCoord1ivARB_F = {"glMultiTexCoord1ivARB",glMultiTexCoord1ivARB,&_glMultiTexCoord1ivARB_1,NULL};

	VPL_Parameter _glMultiTexCoord1iARB_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord1iARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1iARB_2};
	VPL_ExtProcedure _glMultiTexCoord1iARB_F = {"glMultiTexCoord1iARB",glMultiTexCoord1iARB,&_glMultiTexCoord1iARB_1,NULL};

	VPL_Parameter _glMultiTexCoord1fvARB_2 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glMultiTexCoord1fvARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1fvARB_2};
	VPL_ExtProcedure _glMultiTexCoord1fvARB_F = {"glMultiTexCoord1fvARB",glMultiTexCoord1fvARB,&_glMultiTexCoord1fvARB_1,NULL};

	VPL_Parameter _glMultiTexCoord1fARB_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord1fARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1fARB_2};
	VPL_ExtProcedure _glMultiTexCoord1fARB_F = {"glMultiTexCoord1fARB",glMultiTexCoord1fARB,&_glMultiTexCoord1fARB_1,NULL};

	VPL_Parameter _glMultiTexCoord1dvARB_2 = { kPointerType,8,"double",1,1,NULL};
	VPL_Parameter _glMultiTexCoord1dvARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1dvARB_2};
	VPL_ExtProcedure _glMultiTexCoord1dvARB_F = {"glMultiTexCoord1dvARB",glMultiTexCoord1dvARB,&_glMultiTexCoord1dvARB_1,NULL};

	VPL_Parameter _glMultiTexCoord1dARB_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _glMultiTexCoord1dARB_1 = { kUnsignedType,4,NULL,0,0,&_glMultiTexCoord1dARB_2};
	VPL_ExtProcedure _glMultiTexCoord1dARB_F = {"glMultiTexCoord1dARB",glMultiTexCoord1dARB,&_glMultiTexCoord1dARB_1,NULL};

	VPL_Parameter _glClientActiveTextureARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glClientActiveTextureARB_F = {"glClientActiveTextureARB",glClientActiveTextureARB,&_glClientActiveTextureARB_1,NULL};

	VPL_Parameter _glActiveTextureARB_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glActiveTextureARB_F = {"glActiveTextureARB",glActiveTextureARB,&_glActiveTextureARB_1,NULL};



/*
VPL_DictionaryNode VPX_OpenGL_Constants[] =	{
};
*/

VPL_DictionaryNode VPX_OpenGL_Structures[] =	{
	{"__AGLPBufferRec",&_VPXStruct___AGLPBufferRec_S},
	{"__AGLContextRec",&_VPXStruct___AGLContextRec_S},
	{"__AGLPixelFormatRec",&_VPXStruct___AGLPixelFormatRec_S},
	{"__AGLRendererInfoRec",&_VPXStruct___AGLRendererInfoRec_S},
	{"OpaqueGrafPtr",&_VPXStruct_OpaqueGrafPtr_S},
	{"GDevice",&_VPXStruct_GDevice_S},
	{"GLUtesselator",&_VPXStruct_GLUtesselator_S},
	{"GLUquadric",&_VPXStruct_GLUquadric_S},
	{"GLUnurbs",&_VPXStruct_GLUnurbs_S},
};

VPL_DictionaryNode VPX_OpenGL_Procedures[] =	{
	{"glutGameModeGet",&_glutGameModeGet_F},
	{"glutLeaveGameMode",&_glutLeaveGameMode_F},
	{"glutEnterGameMode",&_glutEnterGameMode_F},
	{"glutGameModeString",&_glutGameModeString_F},
	{"glutForceJoystickFunc",&_glutForceJoystickFunc_F},
	{"glutSetKeyRepeat",&_glutSetKeyRepeat_F},
	{"glutIgnoreKeyRepeat",&_glutIgnoreKeyRepeat_F},
	{"glutReportErrors",&_glutReportErrors_F},
	{"glutVideoPan",&_glutVideoPan_F},
	{"glutVideoResize",&_glutVideoResize_F},
	{"glutStopVideoResizing",&_glutStopVideoResizing_F},
	{"glutSetupVideoResizing",&_glutSetupVideoResizing_F},
	{"glutVideoResizeGet",&_glutVideoResizeGet_F},
	{"glutSolidIcosahedron",&_glutSolidIcosahedron_F},
	{"glutWireIcosahedron",&_glutWireIcosahedron_F},
	{"glutSolidTetrahedron",&_glutSolidTetrahedron_F},
	{"glutWireTetrahedron",&_glutWireTetrahedron_F},
	{"glutSolidOctahedron",&_glutSolidOctahedron_F},
	{"glutWireOctahedron",&_glutWireOctahedron_F},
	{"glutSolidTeapot",&_glutSolidTeapot_F},
	{"glutWireTeapot",&_glutWireTeapot_F},
	{"glutSolidDodecahedron",&_glutSolidDodecahedron_F},
	{"glutWireDodecahedron",&_glutWireDodecahedron_F},
	{"glutSolidTorus",&_glutSolidTorus_F},
	{"glutWireTorus",&_glutWireTorus_F},
	{"glutSolidCube",&_glutSolidCube_F},
	{"glutWireCube",&_glutWireCube_F},
	{"glutSolidCone",&_glutSolidCone_F},
	{"glutWireCone",&_glutWireCone_F},
	{"glutSolidSphere",&_glutSolidSphere_F},
	{"glutWireSphere",&_glutWireSphere_F},
	{"glutStrokeLength",&_glutStrokeLength_F},
	{"glutBitmapLength",&_glutBitmapLength_F},
	{"glutStrokeWidth",&_glutStrokeWidth_F},
	{"glutStrokeCharacter",&_glutStrokeCharacter_F},
	{"glutBitmapWidth",&_glutBitmapWidth_F},
	{"glutBitmapCharacter",&_glutBitmapCharacter_F},
	{"glutGetProcAddress",&_glutGetProcAddress_F},
	{"glutLayerGet",&_glutLayerGet_F},
	{"glutGetModifiers",&_glutGetModifiers_F},
	{"glutExtensionSupported",&_glutExtensionSupported_F},
	{"glutDeviceGet",&_glutDeviceGet_F},
	{"glutGet",&_glutGet_F},
	{"glutCopyColormap",&_glutCopyColormap_F},
	{"glutGetColor",&_glutGetColor_F},
	{"glutSetColor",&_glutSetColor_F},
	{"glutJoystickFunc",&_glutJoystickFunc_F},
	{"glutSpecialUpFunc",&_glutSpecialUpFunc_F},
	{"glutKeyboardUpFunc",&_glutKeyboardUpFunc_F},
	{"glutWindowStatusFunc",&_glutWindowStatusFunc_F},
	{"glutOverlayDisplayFunc",&_glutOverlayDisplayFunc_F},
	{"glutMenuStatusFunc",&_glutMenuStatusFunc_F},
	{"glutTabletButtonFunc",&_glutTabletButtonFunc_F},
	{"glutTabletMotionFunc",&_glutTabletMotionFunc_F},
	{"glutDialsFunc",&_glutDialsFunc_F},
	{"glutButtonBoxFunc",&_glutButtonBoxFunc_F},
	{"glutSpaceballButtonFunc",&_glutSpaceballButtonFunc_F},
	{"glutSpaceballRotateFunc",&_glutSpaceballRotateFunc_F},
	{"glutSpaceballMotionFunc",&_glutSpaceballMotionFunc_F},
	{"glutSpecialFunc",&_glutSpecialFunc_F},
	{"glutMenuStateFunc",&_glutMenuStateFunc_F},
	{"glutIdleFunc",&_glutIdleFunc_F},
	{"glutVisibilityFunc",&_glutVisibilityFunc_F},
	{"glutEntryFunc",&_glutEntryFunc_F},
	{"glutPassiveMotionFunc",&_glutPassiveMotionFunc_F},
	{"glutMotionFunc",&_glutMotionFunc_F},
	{"glutMouseFunc",&_glutMouseFunc_F},
	{"glutKeyboardFunc",&_glutKeyboardFunc_F},
	{"glutReshapeFunc",&_glutReshapeFunc_F},
	{"glutDisplayFunc",&_glutDisplayFunc_F},
	{"glutJoystickFuncProcPtr",&_glutJoystickFuncProcPtr_F},
	{"glutSpecialUpFuncProcPtr",&_glutSpecialUpFuncProcPtr_F},
	{"glutKeyboardUpFuncProcPtr",&_glutKeyboardUpFuncProcPtr_F},
	{"glutWindowStatusFuncProcPtr",&_glutWindowStatusFuncProcPtr_F},
	{"glutOverlayDisplayFuncProcPtr",&_glutOverlayDisplayFuncProcPtr_F},
	{"glutMenuStatusFuncProcPtr",&_glutMenuStatusFuncProcPtr_F},
	{"glutTabletButtonFuncProcPtr",&_glutTabletButtonFuncProcPtr_F},
	{"glutTabletMotionFuncProcPtr",&_glutTabletMotionFuncProcPtr_F},
	{"glutDialsFuncProcPtr",&_glutDialsFuncProcPtr_F},
	{"glutButtonBoxFuncProcPtr",&_glutButtonBoxFuncProcPtr_F},
	{"glutSpaceballButtonFuncProcPtr",&_glutSpaceballButtonFuncProcPtr_F},
	{"glutSpaceballRotateFuncProcPtr",&_glutSpaceballRotateFuncProcPtr_F},
	{"glutSpaceballMotionFuncProcPtr",&_glutSpaceballMotionFuncProcPtr_F},
	{"glutSpecialFuncProcPtr",&_glutSpecialFuncProcPtr_F},
	{"glutMenuStateFuncProcPtr",&_glutMenuStateFuncProcPtr_F},
	{"glutTimerFunc",&_glutTimerFunc_F},
	{"glutIdleFuncProcPtr",&_glutIdleFuncProcPtr_F},
	{"glutVisibilityFuncProcPtr",&_glutVisibilityFuncProcPtr_F},
	{"glutEntryFuncProcPtr",&_glutEntryFuncProcPtr_F},
	{"glutPassiveMotionFuncProcPtr",&_glutPassiveMotionFuncProcPtr_F},
	{"glutMotionFuncProcPtr",&_glutMotionFuncProcPtr_F},
	{"glutMouseFuncProcPtr",&_glutMouseFuncProcPtr_F},
	{"glutKeyboardFuncProcPtr",&_glutKeyboardFuncProcPtr_F},
	{"glutReshapeFuncProcPtr",&_glutReshapeFuncProcPtr_F},
	{"glutDisplayFuncProcPtr",&_glutDisplayFuncProcPtr_F},
	{"glutDetachMenu",&_glutDetachMenu_F},
	{"glutAttachMenu",&_glutAttachMenu_F},
	{"glutRemoveMenuItem",&_glutRemoveMenuItem_F},
	{"glutChangeToSubMenu",&_glutChangeToSubMenu_F},
	{"glutChangeToMenuEntry",&_glutChangeToMenuEntry_F},
	{"glutAddSubMenu",&_glutAddSubMenu_F},
	{"glutAddMenuEntry",&_glutAddMenuEntry_F},
	{"glutSetMenu",&_glutSetMenu_F},
	{"glutGetMenu",&_glutGetMenu_F},
	{"glutDestroyMenu",&_glutDestroyMenu_F},
	{"glutCreateMenu",&_glutCreateMenu_F},
	{"glutHideOverlay",&_glutHideOverlay_F},
	{"glutShowOverlay",&_glutShowOverlay_F},
	{"glutPostWindowOverlayRedisplay",&_glutPostWindowOverlayRedisplay_F},
	{"glutPostOverlayRedisplay",&_glutPostOverlayRedisplay_F},
	{"glutUseLayer",&_glutUseLayer_F},
	{"glutRemoveOverlay",&_glutRemoveOverlay_F},
	{"glutEstablishOverlay",&_glutEstablishOverlay_F},
	{"glutCheckLoop",&_glutCheckLoop_F},
	{"glutWMCloseFunc",&_glutWMCloseFunc_F},
	{"glutWMCloseFuncProcPtr",&_glutWMCloseFuncProcPtr_F},
	{"glutSurfaceTexture",&_glutSurfaceTexture_F},
	{"glutWarpPointer",&_glutWarpPointer_F},
	{"glutSetCursor",&_glutSetCursor_F},
	{"glutFullScreen",&_glutFullScreen_F},
	{"glutHideWindow",&_glutHideWindow_F},
	{"glutShowWindow",&_glutShowWindow_F},
	{"glutIconifyWindow",&_glutIconifyWindow_F},
	{"glutPushWindow",&_glutPushWindow_F},
	{"glutPopWindow",&_glutPopWindow_F},
	{"glutReshapeWindow",&_glutReshapeWindow_F},
	{"glutPositionWindow",&_glutPositionWindow_F},
	{"glutSetIconTitle",&_glutSetIconTitle_F},
	{"glutSetWindowTitle",&_glutSetWindowTitle_F},
	{"glutSetWindow",&_glutSetWindow_F},
	{"glutGetWindow",&_glutGetWindow_F},
	{"glutSwapBuffers",&_glutSwapBuffers_F},
	{"glutPostWindowRedisplay",&_glutPostWindowRedisplay_F},
	{"glutPostRedisplay",&_glutPostRedisplay_F},
	{"glutDestroyWindow",&_glutDestroyWindow_F},
	{"glutCreateSubWindow",&_glutCreateSubWindow_F},
	{"glutCreateWindow",&_glutCreateWindow_F},
	{"glutMainLoop",&_glutMainLoop_F},
	{"glutInitWindowSize",&_glutInitWindowSize_F},
	{"glutInitWindowPosition",&_glutInitWindowPosition_F},
	{"glutInitDisplayString",&_glutInitDisplayString_F},
	{"glutInitDisplayMode",&_glutInitDisplayMode_F},
	{"glutInit",&_glutInit_F},
	{"aglGetCGLPixelFormat",&_aglGetCGLPixelFormat_F},
	{"aglGetCGLContext",&_aglGetCGLContext_F},
	{"aglGetPBuffer",&_aglGetPBuffer_F},
	{"aglSetPBuffer",&_aglSetPBuffer_F},
	{"aglTexImagePBuffer",&_aglTexImagePBuffer_F},
	{"aglDescribePBuffer",&_aglDescribePBuffer_F},
	{"aglDestroyPBuffer",&_aglDestroyPBuffer_F},
	{"aglCreatePBuffer",&_aglCreatePBuffer_F},
	{"aglSurfaceTexture",&_aglSurfaceTexture_F},
	{"aglResetLibrary",&_aglResetLibrary_F},
	{"aglErrorString",&_aglErrorString_F},
	{"aglGetError",&_aglGetError_F},
	{"aglUseFont",&_aglUseFont_F},
	{"aglGetInteger",&_aglGetInteger_F},
	{"aglSetInteger",&_aglSetInteger_F},
	{"aglIsEnabled",&_aglIsEnabled_F},
	{"aglDisable",&_aglDisable_F},
	{"aglEnable",&_aglEnable_F},
	{"aglSwapBuffers",&_aglSwapBuffers_F},
	{"aglConfigure",&_aglConfigure_F},
	{"aglGetVersion",&_aglGetVersion_F},
	{"aglGetVirtualScreen",&_aglGetVirtualScreen_F},
	{"aglSetVirtualScreen",&_aglSetVirtualScreen_F},
	{"aglGetDrawable",&_aglGetDrawable_F},
	{"aglSetFullScreen",&_aglSetFullScreen_F},
	{"aglSetOffScreen",&_aglSetOffScreen_F},
	{"aglSetDrawable",&_aglSetDrawable_F},
	{"aglGetCurrentContext",&_aglGetCurrentContext_F},
	{"aglSetCurrentContext",&_aglSetCurrentContext_F},
	{"aglUpdateContext",&_aglUpdateContext_F},
	{"aglCopyContext",&_aglCopyContext_F},
	{"aglDestroyContext",&_aglDestroyContext_F},
	{"aglCreateContext",&_aglCreateContext_F},
	{"aglDescribeRenderer",&_aglDescribeRenderer_F},
	{"aglNextRendererInfo",&_aglNextRendererInfo_F},
	{"aglDestroyRendererInfo",&_aglDestroyRendererInfo_F},
	{"aglQueryRendererInfo",&_aglQueryRendererInfo_F},
	{"aglDevicesOfPixelFormat",&_aglDevicesOfPixelFormat_F},
	{"aglDescribePixelFormat",&_aglDescribePixelFormat_F},
	{"aglNextPixelFormat",&_aglNextPixelFormat_F},
	{"aglDestroyPixelFormat",&_aglDestroyPixelFormat_F},
	{"aglChoosePixelFormat",&_aglChoosePixelFormat_F},
	{"gluUnProject4",&_gluUnProject4_F},
	{"gluUnProject",&_gluUnProject_F},
	{"gluTessVertex",&_gluTessVertex_F},
	{"gluTessProperty",&_gluTessProperty_F},
	{"gluTessNormal",&_gluTessNormal_F},
	{"gluTessEndPolygon",&_gluTessEndPolygon_F},
	{"gluTessEndContour",&_gluTessEndContour_F},
	{"gluTessCallback",&_gluTessCallback_F},
	{"gluTessBeginPolygon",&_gluTessBeginPolygon_F},
	{"gluTessBeginContour",&_gluTessBeginContour_F},
	{"gluSphere",&_gluSphere_F},
	{"gluScaleImage",&_gluScaleImage_F},
	{"gluQuadricTexture",&_gluQuadricTexture_F},
	{"gluQuadricOrientation",&_gluQuadricOrientation_F},
	{"gluQuadricNormals",&_gluQuadricNormals_F},
	{"gluQuadricDrawStyle",&_gluQuadricDrawStyle_F},
	{"gluQuadricCallback",&_gluQuadricCallback_F},
	{"gluPwlCurve",&_gluPwlCurve_F},
	{"gluProject",&_gluProject_F},
	{"gluPickMatrix",&_gluPickMatrix_F},
	{"gluPerspective",&_gluPerspective_F},
	{"gluPartialDisk",&_gluPartialDisk_F},
	{"gluOrtho2D",&_gluOrtho2D_F},
	{"gluNurbsSurface",&_gluNurbsSurface_F},
	{"gluNurbsProperty",&_gluNurbsProperty_F},
	{"gluNurbsCurve",&_gluNurbsCurve_F},
	{"gluNurbsCallbackDataEXT",&_gluNurbsCallbackDataEXT_F},
	{"gluNurbsCallbackData",&_gluNurbsCallbackData_F},
	{"gluNurbsCallback",&_gluNurbsCallback_F},
	{"gluNextContour",&_gluNextContour_F},
	{"gluNewTess",&_gluNewTess_F},
	{"gluNewQuadric",&_gluNewQuadric_F},
	{"gluNewNurbsRenderer",&_gluNewNurbsRenderer_F},
	{"gluLookAt",&_gluLookAt_F},
	{"gluLoadSamplingMatrices",&_gluLoadSamplingMatrices_F},
	{"gluGetTessProperty",&_gluGetTessProperty_F},
	{"gluGetString",&_gluGetString_F},
	{"gluGetNurbsProperty",&_gluGetNurbsProperty_F},
	{"gluErrorString",&_gluErrorString_F},
	{"gluEndTrim",&_gluEndTrim_F},
	{"gluEndSurface",&_gluEndSurface_F},
	{"gluEndPolygon",&_gluEndPolygon_F},
	{"gluEndCurve",&_gluEndCurve_F},
	{"gluDisk",&_gluDisk_F},
	{"gluDeleteTess",&_gluDeleteTess_F},
	{"gluDeleteQuadric",&_gluDeleteQuadric_F},
	{"gluDeleteNurbsRenderer",&_gluDeleteNurbsRenderer_F},
	{"gluCylinder",&_gluCylinder_F},
	{"gluCheckExtension",&_gluCheckExtension_F},
	{"gluBuild3DMipmaps",&_gluBuild3DMipmaps_F},
	{"gluBuild3DMipmapLevels",&_gluBuild3DMipmapLevels_F},
	{"gluBuild2DMipmaps",&_gluBuild2DMipmaps_F},
	{"gluBuild2DMipmapLevels",&_gluBuild2DMipmapLevels_F},
	{"gluBuild1DMipmaps",&_gluBuild1DMipmaps_F},
	{"gluBuild1DMipmapLevels",&_gluBuild1DMipmapLevels_F},
	{"gluBeginTrim",&_gluBeginTrim_F},
	{"gluBeginSurface",&_gluBeginSurface_F},
	{"gluBeginPolygon",&_gluBeginPolygon_F},
	{"gluBeginCurve",&_gluBeginCurve_F},
	{"glStencilMaskSeparate",&_glStencilMaskSeparate_F},
	{"glStencilOpSeparate",&_glStencilOpSeparate_F},
	{"glStencilFuncSeparate",&_glStencilFuncSeparate_F},
	{"glGetAttribLocation",&_glGetAttribLocation_F},
	{"glGetActiveAttrib",&_glGetActiveAttrib_F},
	{"glBindAttribLocation",&_glBindAttribLocation_F},
	{"glGetShaderSource",&_glGetShaderSource_F},
	{"glGetUniformiv",&_glGetUniformiv_F},
	{"glGetUniformfv",&_glGetUniformfv_F},
	{"glGetActiveUniform",&_glGetActiveUniform_F},
	{"glGetUniformLocation",&_glGetUniformLocation_F},
	{"glGetProgramInfoLog",&_glGetProgramInfoLog_F},
	{"glGetShaderInfoLog",&_glGetShaderInfoLog_F},
	{"glGetAttachedShaders",&_glGetAttachedShaders_F},
	{"glGetProgramiv",&_glGetProgramiv_F},
	{"glGetShaderiv",&_glGetShaderiv_F},
	{"glIsProgram",&_glIsProgram_F},
	{"glIsShader",&_glIsShader_F},
	{"glUniformMatrix4fv",&_glUniformMatrix4fv_F},
	{"glUniformMatrix3fv",&_glUniformMatrix3fv_F},
	{"glUniformMatrix2fv",&_glUniformMatrix2fv_F},
	{"glUniform4iv",&_glUniform4iv_F},
	{"glUniform3iv",&_glUniform3iv_F},
	{"glUniform2iv",&_glUniform2iv_F},
	{"glUniform1iv",&_glUniform1iv_F},
	{"glUniform4fv",&_glUniform4fv_F},
	{"glUniform3fv",&_glUniform3fv_F},
	{"glUniform2fv",&_glUniform2fv_F},
	{"glUniform1fv",&_glUniform1fv_F},
	{"glUniform4i",&_glUniform4i_F},
	{"glUniform3i",&_glUniform3i_F},
	{"glUniform2i",&_glUniform2i_F},
	{"glUniform1i",&_glUniform1i_F},
	{"glUniform4f",&_glUniform4f_F},
	{"glUniform3f",&_glUniform3f_F},
	{"glUniform2f",&_glUniform2f_F},
	{"glUniform1f",&_glUniform1f_F},
	{"glValidateProgram",&_glValidateProgram_F},
	{"glDeleteProgram",&_glDeleteProgram_F},
	{"glUseProgram",&_glUseProgram_F},
	{"glLinkProgram",&_glLinkProgram_F},
	{"glAttachShader",&_glAttachShader_F},
	{"glCreateProgram",&_glCreateProgram_F},
	{"glCompileShader",&_glCompileShader_F},
	{"glShaderSource",&_glShaderSource_F},
	{"glCreateShader",&_glCreateShader_F},
	{"glDetachShader",&_glDetachShader_F},
	{"glDeleteShader",&_glDeleteShader_F},
	{"glGetVertexAttribPointerv",&_glGetVertexAttribPointerv_F},
	{"glGetVertexAttribiv",&_glGetVertexAttribiv_F},
	{"glGetVertexAttribfv",&_glGetVertexAttribfv_F},
	{"glGetVertexAttribdv",&_glGetVertexAttribdv_F},
	{"glDisableVertexAttribArray",&_glDisableVertexAttribArray_F},
	{"glEnableVertexAttribArray",&_glEnableVertexAttribArray_F},
	{"glVertexAttribPointer",&_glVertexAttribPointer_F},
	{"glVertexAttrib4usv",&_glVertexAttrib4usv_F},
	{"glVertexAttrib4uiv",&_glVertexAttrib4uiv_F},
	{"glVertexAttrib4ubv",&_glVertexAttrib4ubv_F},
	{"glVertexAttrib4sv",&_glVertexAttrib4sv_F},
	{"glVertexAttrib4s",&_glVertexAttrib4s_F},
	{"glVertexAttrib4iv",&_glVertexAttrib4iv_F},
	{"glVertexAttrib4fv",&_glVertexAttrib4fv_F},
	{"glVertexAttrib4f",&_glVertexAttrib4f_F},
	{"glVertexAttrib4dv",&_glVertexAttrib4dv_F},
	{"glVertexAttrib4d",&_glVertexAttrib4d_F},
	{"glVertexAttrib4bv",&_glVertexAttrib4bv_F},
	{"glVertexAttrib4Nusv",&_glVertexAttrib4Nusv_F},
	{"glVertexAttrib4Nuiv",&_glVertexAttrib4Nuiv_F},
	{"glVertexAttrib4Nubv",&_glVertexAttrib4Nubv_F},
	{"glVertexAttrib4Nub",&_glVertexAttrib4Nub_F},
	{"glVertexAttrib4Nsv",&_glVertexAttrib4Nsv_F},
	{"glVertexAttrib4Niv",&_glVertexAttrib4Niv_F},
	{"glVertexAttrib4Nbv",&_glVertexAttrib4Nbv_F},
	{"glVertexAttrib3sv",&_glVertexAttrib3sv_F},
	{"glVertexAttrib3s",&_glVertexAttrib3s_F},
	{"glVertexAttrib3fv",&_glVertexAttrib3fv_F},
	{"glVertexAttrib3f",&_glVertexAttrib3f_F},
	{"glVertexAttrib3dv",&_glVertexAttrib3dv_F},
	{"glVertexAttrib3d",&_glVertexAttrib3d_F},
	{"glVertexAttrib2sv",&_glVertexAttrib2sv_F},
	{"glVertexAttrib2s",&_glVertexAttrib2s_F},
	{"glVertexAttrib2fv",&_glVertexAttrib2fv_F},
	{"glVertexAttrib2f",&_glVertexAttrib2f_F},
	{"glVertexAttrib2dv",&_glVertexAttrib2dv_F},
	{"glVertexAttrib2d",&_glVertexAttrib2d_F},
	{"glVertexAttrib1sv",&_glVertexAttrib1sv_F},
	{"glVertexAttrib1s",&_glVertexAttrib1s_F},
	{"glVertexAttrib1fv",&_glVertexAttrib1fv_F},
	{"glVertexAttrib1f",&_glVertexAttrib1f_F},
	{"glVertexAttrib1dv",&_glVertexAttrib1dv_F},
	{"glVertexAttrib1d",&_glVertexAttrib1d_F},
	{"glDrawBuffers",&_glDrawBuffers_F},
	{"glGetBufferPointerv",&_glGetBufferPointerv_F},
	{"glGetBufferParameteriv",&_glGetBufferParameteriv_F},
	{"glUnmapBuffer",&_glUnmapBuffer_F},
	{"glMapBuffer",&_glMapBuffer_F},
	{"glGetBufferSubData",&_glGetBufferSubData_F},
	{"glBufferSubData",&_glBufferSubData_F},
	{"glBufferData",&_glBufferData_F},
	{"glIsBuffer",&_glIsBuffer_F},
	{"glGenBuffers",&_glGenBuffers_F},
	{"glDeleteBuffers",&_glDeleteBuffers_F},
	{"glBindBuffer",&_glBindBuffer_F},
	{"glGetQueryObjectuiv",&_glGetQueryObjectuiv_F},
	{"glGetQueryObjectiv",&_glGetQueryObjectiv_F},
	{"glGetQueryiv",&_glGetQueryiv_F},
	{"glEndQuery",&_glEndQuery_F},
	{"glBeginQuery",&_glBeginQuery_F},
	{"glIsQuery",&_glIsQuery_F},
	{"glDeleteQueries",&_glDeleteQueries_F},
	{"glGenQueries",&_glGenQueries_F},
	{"glWindowPos3sv",&_glWindowPos3sv_F},
	{"glWindowPos3s",&_glWindowPos3s_F},
	{"glWindowPos3iv",&_glWindowPos3iv_F},
	{"glWindowPos3i",&_glWindowPos3i_F},
	{"glWindowPos3fv",&_glWindowPos3fv_F},
	{"glWindowPos3f",&_glWindowPos3f_F},
	{"glWindowPos3dv",&_glWindowPos3dv_F},
	{"glWindowPos3d",&_glWindowPos3d_F},
	{"glWindowPos2sv",&_glWindowPos2sv_F},
	{"glWindowPos2s",&_glWindowPos2s_F},
	{"glWindowPos2iv",&_glWindowPos2iv_F},
	{"glWindowPos2i",&_glWindowPos2i_F},
	{"glWindowPos2fv",&_glWindowPos2fv_F},
	{"glWindowPos2f",&_glWindowPos2f_F},
	{"glWindowPos2dv",&_glWindowPos2dv_F},
	{"glWindowPos2d",&_glWindowPos2d_F},
	{"glMultiDrawElements",&_glMultiDrawElements_F},
	{"glMultiDrawArrays",&_glMultiDrawArrays_F},
	{"glBlendFuncSeparate",&_glBlendFuncSeparate_F},
	{"glPointParameteriv",&_glPointParameteriv_F},
	{"glPointParameteri",&_glPointParameteri_F},
	{"glPointParameterfv",&_glPointParameterfv_F},
	{"glPointParameterf",&_glPointParameterf_F},
	{"glSecondaryColorPointer",&_glSecondaryColorPointer_F},
	{"glSecondaryColor3usv",&_glSecondaryColor3usv_F},
	{"glSecondaryColor3us",&_glSecondaryColor3us_F},
	{"glSecondaryColor3uiv",&_glSecondaryColor3uiv_F},
	{"glSecondaryColor3ui",&_glSecondaryColor3ui_F},
	{"glSecondaryColor3ubv",&_glSecondaryColor3ubv_F},
	{"glSecondaryColor3ub",&_glSecondaryColor3ub_F},
	{"glSecondaryColor3sv",&_glSecondaryColor3sv_F},
	{"glSecondaryColor3s",&_glSecondaryColor3s_F},
	{"glSecondaryColor3iv",&_glSecondaryColor3iv_F},
	{"glSecondaryColor3i",&_glSecondaryColor3i_F},
	{"glSecondaryColor3fv",&_glSecondaryColor3fv_F},
	{"glSecondaryColor3f",&_glSecondaryColor3f_F},
	{"glSecondaryColor3dv",&_glSecondaryColor3dv_F},
	{"glSecondaryColor3d",&_glSecondaryColor3d_F},
	{"glSecondaryColor3bv",&_glSecondaryColor3bv_F},
	{"glSecondaryColor3b",&_glSecondaryColor3b_F},
	{"glFogCoordPointer",&_glFogCoordPointer_F},
	{"glFogCoorddv",&_glFogCoorddv_F},
	{"glFogCoordd",&_glFogCoordd_F},
	{"glFogCoordfv",&_glFogCoordfv_F},
	{"glFogCoordf",&_glFogCoordf_F},
	{"glMultiTexCoord4sv",&_glMultiTexCoord4sv_F},
	{"glMultiTexCoord4s",&_glMultiTexCoord4s_F},
	{"glMultiTexCoord4iv",&_glMultiTexCoord4iv_F},
	{"glMultiTexCoord4i",&_glMultiTexCoord4i_F},
	{"glMultiTexCoord4fv",&_glMultiTexCoord4fv_F},
	{"glMultiTexCoord4f",&_glMultiTexCoord4f_F},
	{"glMultiTexCoord4dv",&_glMultiTexCoord4dv_F},
	{"glMultiTexCoord4d",&_glMultiTexCoord4d_F},
	{"glMultiTexCoord3sv",&_glMultiTexCoord3sv_F},
	{"glMultiTexCoord3s",&_glMultiTexCoord3s_F},
	{"glMultiTexCoord3iv",&_glMultiTexCoord3iv_F},
	{"glMultiTexCoord3i",&_glMultiTexCoord3i_F},
	{"glMultiTexCoord3fv",&_glMultiTexCoord3fv_F},
	{"glMultiTexCoord3f",&_glMultiTexCoord3f_F},
	{"glMultiTexCoord3dv",&_glMultiTexCoord3dv_F},
	{"glMultiTexCoord3d",&_glMultiTexCoord3d_F},
	{"glMultiTexCoord2sv",&_glMultiTexCoord2sv_F},
	{"glMultiTexCoord2s",&_glMultiTexCoord2s_F},
	{"glMultiTexCoord2iv",&_glMultiTexCoord2iv_F},
	{"glMultiTexCoord2i",&_glMultiTexCoord2i_F},
	{"glMultiTexCoord2fv",&_glMultiTexCoord2fv_F},
	{"glMultiTexCoord2f",&_glMultiTexCoord2f_F},
	{"glMultiTexCoord2dv",&_glMultiTexCoord2dv_F},
	{"glMultiTexCoord2d",&_glMultiTexCoord2d_F},
	{"glMultiTexCoord1sv",&_glMultiTexCoord1sv_F},
	{"glMultiTexCoord1s",&_glMultiTexCoord1s_F},
	{"glMultiTexCoord1iv",&_glMultiTexCoord1iv_F},
	{"glMultiTexCoord1i",&_glMultiTexCoord1i_F},
	{"glMultiTexCoord1fv",&_glMultiTexCoord1fv_F},
	{"glMultiTexCoord1f",&_glMultiTexCoord1f_F},
	{"glMultiTexCoord1dv",&_glMultiTexCoord1dv_F},
	{"glMultiTexCoord1d",&_glMultiTexCoord1d_F},
	{"glClientActiveTexture",&_glClientActiveTexture_F},
	{"glActiveTexture",&_glActiveTexture_F},
	{"glGetCompressedTexImage",&_glGetCompressedTexImage_F},
	{"glCompressedTexSubImage1D",&_glCompressedTexSubImage1D_F},
	{"glCompressedTexSubImage2D",&_glCompressedTexSubImage2D_F},
	{"glCompressedTexSubImage3D",&_glCompressedTexSubImage3D_F},
	{"glCompressedTexImage1D",&_glCompressedTexImage1D_F},
	{"glCompressedTexImage2D",&_glCompressedTexImage2D_F},
	{"glCompressedTexImage3D",&_glCompressedTexImage3D_F},
	{"glMultTransposeMatrixd",&_glMultTransposeMatrixd_F},
	{"glMultTransposeMatrixf",&_glMultTransposeMatrixf_F},
	{"glLoadTransposeMatrixd",&_glLoadTransposeMatrixd_F},
	{"glLoadTransposeMatrixf",&_glLoadTransposeMatrixf_F},
	{"glSamplePass",&_glSamplePass_F},
	{"glSampleCoverage",&_glSampleCoverage_F},
	{"glViewport",&_glViewport_F},
	{"glVertexPointer",&_glVertexPointer_F},
	{"glVertex4sv",&_glVertex4sv_F},
	{"glVertex4s",&_glVertex4s_F},
	{"glVertex4iv",&_glVertex4iv_F},
	{"glVertex4i",&_glVertex4i_F},
	{"glVertex4fv",&_glVertex4fv_F},
	{"glVertex4f",&_glVertex4f_F},
	{"glVertex4dv",&_glVertex4dv_F},
	{"glVertex4d",&_glVertex4d_F},
	{"glVertex3sv",&_glVertex3sv_F},
	{"glVertex3s",&_glVertex3s_F},
	{"glVertex3iv",&_glVertex3iv_F},
	{"glVertex3i",&_glVertex3i_F},
	{"glVertex3fv",&_glVertex3fv_F},
	{"glVertex3f",&_glVertex3f_F},
	{"glVertex3dv",&_glVertex3dv_F},
	{"glVertex3d",&_glVertex3d_F},
	{"glVertex2sv",&_glVertex2sv_F},
	{"glVertex2s",&_glVertex2s_F},
	{"glVertex2iv",&_glVertex2iv_F},
	{"glVertex2i",&_glVertex2i_F},
	{"glVertex2fv",&_glVertex2fv_F},
	{"glVertex2f",&_glVertex2f_F},
	{"glVertex2dv",&_glVertex2dv_F},
	{"glVertex2d",&_glVertex2d_F},
	{"glTranslatef",&_glTranslatef_F},
	{"glTranslated",&_glTranslated_F},
	{"glTexSubImage3D",&_glTexSubImage3D_F},
	{"glTexSubImage2D",&_glTexSubImage2D_F},
	{"glTexSubImage1D",&_glTexSubImage1D_F},
	{"glTexParameteriv",&_glTexParameteriv_F},
	{"glTexParameteri",&_glTexParameteri_F},
	{"glTexParameterfv",&_glTexParameterfv_F},
	{"glTexParameterf",&_glTexParameterf_F},
	{"glTexImage3D",&_glTexImage3D_F},
	{"glTexImage2D",&_glTexImage2D_F},
	{"glTexImage1D",&_glTexImage1D_F},
	{"glTexGeniv",&_glTexGeniv_F},
	{"glTexGeni",&_glTexGeni_F},
	{"glTexGenfv",&_glTexGenfv_F},
	{"glTexGenf",&_glTexGenf_F},
	{"glTexGendv",&_glTexGendv_F},
	{"glTexGend",&_glTexGend_F},
	{"glTexEnviv",&_glTexEnviv_F},
	{"glTexEnvi",&_glTexEnvi_F},
	{"glTexEnvfv",&_glTexEnvfv_F},
	{"glTexEnvf",&_glTexEnvf_F},
	{"glTexCoordPointer",&_glTexCoordPointer_F},
	{"glTexCoord4sv",&_glTexCoord4sv_F},
	{"glTexCoord4s",&_glTexCoord4s_F},
	{"glTexCoord4iv",&_glTexCoord4iv_F},
	{"glTexCoord4i",&_glTexCoord4i_F},
	{"glTexCoord4fv",&_glTexCoord4fv_F},
	{"glTexCoord4f",&_glTexCoord4f_F},
	{"glTexCoord4dv",&_glTexCoord4dv_F},
	{"glTexCoord4d",&_glTexCoord4d_F},
	{"glTexCoord3sv",&_glTexCoord3sv_F},
	{"glTexCoord3s",&_glTexCoord3s_F},
	{"glTexCoord3iv",&_glTexCoord3iv_F},
	{"glTexCoord3i",&_glTexCoord3i_F},
	{"glTexCoord3fv",&_glTexCoord3fv_F},
	{"glTexCoord3f",&_glTexCoord3f_F},
	{"glTexCoord3dv",&_glTexCoord3dv_F},
	{"glTexCoord3d",&_glTexCoord3d_F},
	{"glTexCoord2sv",&_glTexCoord2sv_F},
	{"glTexCoord2s",&_glTexCoord2s_F},
	{"glTexCoord2iv",&_glTexCoord2iv_F},
	{"glTexCoord2i",&_glTexCoord2i_F},
	{"glTexCoord2fv",&_glTexCoord2fv_F},
	{"glTexCoord2f",&_glTexCoord2f_F},
	{"glTexCoord2dv",&_glTexCoord2dv_F},
	{"glTexCoord2d",&_glTexCoord2d_F},
	{"glTexCoord1sv",&_glTexCoord1sv_F},
	{"glTexCoord1s",&_glTexCoord1s_F},
	{"glTexCoord1iv",&_glTexCoord1iv_F},
	{"glTexCoord1i",&_glTexCoord1i_F},
	{"glTexCoord1fv",&_glTexCoord1fv_F},
	{"glTexCoord1f",&_glTexCoord1f_F},
	{"glTexCoord1dv",&_glTexCoord1dv_F},
	{"glTexCoord1d",&_glTexCoord1d_F},
	{"glStencilOp",&_glStencilOp_F},
	{"glStencilMask",&_glStencilMask_F},
	{"glStencilFunc",&_glStencilFunc_F},
	{"glShadeModel",&_glShadeModel_F},
	{"glSeparableFilter2D",&_glSeparableFilter2D_F},
	{"glSelectBuffer",&_glSelectBuffer_F},
	{"glScissor",&_glScissor_F},
	{"glScalef",&_glScalef_F},
	{"glScaled",&_glScaled_F},
	{"glRotatef",&_glRotatef_F},
	{"glRotated",&_glRotated_F},
	{"glResetMinmax",&_glResetMinmax_F},
	{"glResetHistogram",&_glResetHistogram_F},
	{"glRenderMode",&_glRenderMode_F},
	{"glRectsv",&_glRectsv_F},
	{"glRects",&_glRects_F},
	{"glRectiv",&_glRectiv_F},
	{"glRecti",&_glRecti_F},
	{"glRectfv",&_glRectfv_F},
	{"glRectf",&_glRectf_F},
	{"glRectdv",&_glRectdv_F},
	{"glRectd",&_glRectd_F},
	{"glReadPixels",&_glReadPixels_F},
	{"glReadBuffer",&_glReadBuffer_F},
	{"glRasterPos4sv",&_glRasterPos4sv_F},
	{"glRasterPos4s",&_glRasterPos4s_F},
	{"glRasterPos4iv",&_glRasterPos4iv_F},
	{"glRasterPos4i",&_glRasterPos4i_F},
	{"glRasterPos4fv",&_glRasterPos4fv_F},
	{"glRasterPos4f",&_glRasterPos4f_F},
	{"glRasterPos4dv",&_glRasterPos4dv_F},
	{"glRasterPos4d",&_glRasterPos4d_F},
	{"glRasterPos3sv",&_glRasterPos3sv_F},
	{"glRasterPos3s",&_glRasterPos3s_F},
	{"glRasterPos3iv",&_glRasterPos3iv_F},
	{"glRasterPos3i",&_glRasterPos3i_F},
	{"glRasterPos3fv",&_glRasterPos3fv_F},
	{"glRasterPos3f",&_glRasterPos3f_F},
	{"glRasterPos3dv",&_glRasterPos3dv_F},
	{"glRasterPos3d",&_glRasterPos3d_F},
	{"glRasterPos2sv",&_glRasterPos2sv_F},
	{"glRasterPos2s",&_glRasterPos2s_F},
	{"glRasterPos2iv",&_glRasterPos2iv_F},
	{"glRasterPos2i",&_glRasterPos2i_F},
	{"glRasterPos2fv",&_glRasterPos2fv_F},
	{"glRasterPos2f",&_glRasterPos2f_F},
	{"glRasterPos2dv",&_glRasterPos2dv_F},
	{"glRasterPos2d",&_glRasterPos2d_F},
	{"glPushName",&_glPushName_F},
	{"glPushMatrix",&_glPushMatrix_F},
	{"glPushClientAttrib",&_glPushClientAttrib_F},
	{"glPushAttrib",&_glPushAttrib_F},
	{"glPrioritizeTextures",&_glPrioritizeTextures_F},
	{"glPopName",&_glPopName_F},
	{"glPopMatrix",&_glPopMatrix_F},
	{"glPopClientAttrib",&_glPopClientAttrib_F},
	{"glPopAttrib",&_glPopAttrib_F},
	{"glPolygonStipple",&_glPolygonStipple_F},
	{"glPolygonOffset",&_glPolygonOffset_F},
	{"glPolygonMode",&_glPolygonMode_F},
	{"glPointSize",&_glPointSize_F},
	{"glPixelZoom",&_glPixelZoom_F},
	{"glPixelTransferi",&_glPixelTransferi_F},
	{"glPixelTransferf",&_glPixelTransferf_F},
	{"glPixelStorei",&_glPixelStorei_F},
	{"glPixelStoref",&_glPixelStoref_F},
	{"glPixelMapusv",&_glPixelMapusv_F},
	{"glPixelMapuiv",&_glPixelMapuiv_F},
	{"glPixelMapfv",&_glPixelMapfv_F},
	{"glPassThrough",&_glPassThrough_F},
	{"glOrtho",&_glOrtho_F},
	{"glNormalPointer",&_glNormalPointer_F},
	{"glNormal3sv",&_glNormal3sv_F},
	{"glNormal3s",&_glNormal3s_F},
	{"glNormal3iv",&_glNormal3iv_F},
	{"glNormal3i",&_glNormal3i_F},
	{"glNormal3fv",&_glNormal3fv_F},
	{"glNormal3f",&_glNormal3f_F},
	{"glNormal3dv",&_glNormal3dv_F},
	{"glNormal3d",&_glNormal3d_F},
	{"glNormal3bv",&_glNormal3bv_F},
	{"glNormal3b",&_glNormal3b_F},
	{"glNewList",&_glNewList_F},
	{"glMultMatrixf",&_glMultMatrixf_F},
	{"glMultMatrixd",&_glMultMatrixd_F},
	{"glMinmax",&_glMinmax_F},
	{"glMatrixMode",&_glMatrixMode_F},
	{"glMaterialiv",&_glMaterialiv_F},
	{"glMateriali",&_glMateriali_F},
	{"glMaterialfv",&_glMaterialfv_F},
	{"glMaterialf",&_glMaterialf_F},
	{"glMapGrid2f",&_glMapGrid2f_F},
	{"glMapGrid2d",&_glMapGrid2d_F},
	{"glMapGrid1f",&_glMapGrid1f_F},
	{"glMapGrid1d",&_glMapGrid1d_F},
	{"glMap2f",&_glMap2f_F},
	{"glMap2d",&_glMap2d_F},
	{"glMap1f",&_glMap1f_F},
	{"glMap1d",&_glMap1d_F},
	{"glLogicOp",&_glLogicOp_F},
	{"glLoadName",&_glLoadName_F},
	{"glLoadMatrixf",&_glLoadMatrixf_F},
	{"glLoadMatrixd",&_glLoadMatrixd_F},
	{"glLoadIdentity",&_glLoadIdentity_F},
	{"glListBase",&_glListBase_F},
	{"glLineWidth",&_glLineWidth_F},
	{"glLineStipple",&_glLineStipple_F},
	{"glLightiv",&_glLightiv_F},
	{"glLighti",&_glLighti_F},
	{"glLightfv",&_glLightfv_F},
	{"glLightf",&_glLightf_F},
	{"glLightModeliv",&_glLightModeliv_F},
	{"glLightModeli",&_glLightModeli_F},
	{"glLightModelfv",&_glLightModelfv_F},
	{"glLightModelf",&_glLightModelf_F},
	{"glIsTexture",&_glIsTexture_F},
	{"glIsList",&_glIsList_F},
	{"glIsEnabled",&_glIsEnabled_F},
	{"glInterleavedArrays",&_glInterleavedArrays_F},
	{"glInitNames",&_glInitNames_F},
	{"glIndexubv",&_glIndexubv_F},
	{"glIndexub",&_glIndexub_F},
	{"glIndexsv",&_glIndexsv_F},
	{"glIndexs",&_glIndexs_F},
	{"glIndexiv",&_glIndexiv_F},
	{"glIndexi",&_glIndexi_F},
	{"glIndexfv",&_glIndexfv_F},
	{"glIndexf",&_glIndexf_F},
	{"glIndexdv",&_glIndexdv_F},
	{"glIndexd",&_glIndexd_F},
	{"glIndexPointer",&_glIndexPointer_F},
	{"glIndexMask",&_glIndexMask_F},
	{"glHistogram",&_glHistogram_F},
	{"glHint",&_glHint_F},
	{"glGetTexParameteriv",&_glGetTexParameteriv_F},
	{"glGetTexParameterfv",&_glGetTexParameterfv_F},
	{"glGetTexLevelParameteriv",&_glGetTexLevelParameteriv_F},
	{"glGetTexLevelParameterfv",&_glGetTexLevelParameterfv_F},
	{"glGetTexImage",&_glGetTexImage_F},
	{"glGetTexGeniv",&_glGetTexGeniv_F},
	{"glGetTexGenfv",&_glGetTexGenfv_F},
	{"glGetTexGendv",&_glGetTexGendv_F},
	{"glGetTexEnviv",&_glGetTexEnviv_F},
	{"glGetTexEnvfv",&_glGetTexEnvfv_F},
	{"glGetString",&_glGetString_F},
	{"glGetSeparableFilter",&_glGetSeparableFilter_F},
	{"glGetPolygonStipple",&_glGetPolygonStipple_F},
	{"glGetPointerv",&_glGetPointerv_F},
	{"glGetPixelMapusv",&_glGetPixelMapusv_F},
	{"glGetPixelMapuiv",&_glGetPixelMapuiv_F},
	{"glGetPixelMapfv",&_glGetPixelMapfv_F},
	{"glGetMinmaxParameteriv",&_glGetMinmaxParameteriv_F},
	{"glGetMinmaxParameterfv",&_glGetMinmaxParameterfv_F},
	{"glGetMinmax",&_glGetMinmax_F},
	{"glGetMaterialiv",&_glGetMaterialiv_F},
	{"glGetMaterialfv",&_glGetMaterialfv_F},
	{"glGetMapiv",&_glGetMapiv_F},
	{"glGetMapfv",&_glGetMapfv_F},
	{"glGetMapdv",&_glGetMapdv_F},
	{"glGetLightiv",&_glGetLightiv_F},
	{"glGetLightfv",&_glGetLightfv_F},
	{"glGetIntegerv",&_glGetIntegerv_F},
	{"glGetHistogramParameteriv",&_glGetHistogramParameteriv_F},
	{"glGetHistogramParameterfv",&_glGetHistogramParameterfv_F},
	{"glGetHistogram",&_glGetHistogram_F},
	{"glGetFloatv",&_glGetFloatv_F},
	{"glGetError",&_glGetError_F},
	{"glGetDoublev",&_glGetDoublev_F},
	{"glGetConvolutionParameteriv",&_glGetConvolutionParameteriv_F},
	{"glGetConvolutionParameterfv",&_glGetConvolutionParameterfv_F},
	{"glGetConvolutionFilter",&_glGetConvolutionFilter_F},
	{"glGetColorTableParameteriv",&_glGetColorTableParameteriv_F},
	{"glGetColorTableParameterfv",&_glGetColorTableParameterfv_F},
	{"glGetColorTable",&_glGetColorTable_F},
	{"glGetClipPlane",&_glGetClipPlane_F},
	{"glGetBooleanv",&_glGetBooleanv_F},
	{"glGenTextures",&_glGenTextures_F},
	{"glGenLists",&_glGenLists_F},
	{"glFrustum",&_glFrustum_F},
	{"glFrontFace",&_glFrontFace_F},
	{"glFogiv",&_glFogiv_F},
	{"glFogi",&_glFogi_F},
	{"glFogfv",&_glFogfv_F},
	{"glFogf",&_glFogf_F},
	{"glFlush",&_glFlush_F},
	{"glFinish",&_glFinish_F},
	{"glFeedbackBuffer",&_glFeedbackBuffer_F},
	{"glEvalPoint2",&_glEvalPoint2_F},
	{"glEvalPoint1",&_glEvalPoint1_F},
	{"glEvalMesh2",&_glEvalMesh2_F},
	{"glEvalMesh1",&_glEvalMesh1_F},
	{"glEvalCoord2fv",&_glEvalCoord2fv_F},
	{"glEvalCoord2f",&_glEvalCoord2f_F},
	{"glEvalCoord2dv",&_glEvalCoord2dv_F},
	{"glEvalCoord2d",&_glEvalCoord2d_F},
	{"glEvalCoord1fv",&_glEvalCoord1fv_F},
	{"glEvalCoord1f",&_glEvalCoord1f_F},
	{"glEvalCoord1dv",&_glEvalCoord1dv_F},
	{"glEvalCoord1d",&_glEvalCoord1d_F},
	{"glEndList",&_glEndList_F},
	{"glEnd",&_glEnd_F},
	{"glEnableClientState",&_glEnableClientState_F},
	{"glEnable",&_glEnable_F},
	{"glEdgeFlagv",&_glEdgeFlagv_F},
	{"glEdgeFlagPointer",&_glEdgeFlagPointer_F},
	{"glEdgeFlag",&_glEdgeFlag_F},
	{"glDrawRangeElements",&_glDrawRangeElements_F},
	{"glDrawPixels",&_glDrawPixels_F},
	{"glDrawElements",&_glDrawElements_F},
	{"glDrawBuffer",&_glDrawBuffer_F},
	{"glDrawArrays",&_glDrawArrays_F},
	{"glDisableClientState",&_glDisableClientState_F},
	{"glDisable",&_glDisable_F},
	{"glDepthRange",&_glDepthRange_F},
	{"glDepthMask",&_glDepthMask_F},
	{"glDepthFunc",&_glDepthFunc_F},
	{"glDeleteTextures",&_glDeleteTextures_F},
	{"glDeleteLists",&_glDeleteLists_F},
	{"glCullFace",&_glCullFace_F},
	{"glCopyTexSubImage3D",&_glCopyTexSubImage3D_F},
	{"glCopyTexSubImage2D",&_glCopyTexSubImage2D_F},
	{"glCopyTexSubImage1D",&_glCopyTexSubImage1D_F},
	{"glCopyTexImage2D",&_glCopyTexImage2D_F},
	{"glCopyTexImage1D",&_glCopyTexImage1D_F},
	{"glCopyPixels",&_glCopyPixels_F},
	{"glCopyConvolutionFilter2D",&_glCopyConvolutionFilter2D_F},
	{"glCopyConvolutionFilter1D",&_glCopyConvolutionFilter1D_F},
	{"glCopyColorTable",&_glCopyColorTable_F},
	{"glCopyColorSubTable",&_glCopyColorSubTable_F},
	{"glConvolutionParameteriv",&_glConvolutionParameteriv_F},
	{"glConvolutionParameteri",&_glConvolutionParameteri_F},
	{"glConvolutionParameterfv",&_glConvolutionParameterfv_F},
	{"glConvolutionParameterf",&_glConvolutionParameterf_F},
	{"glConvolutionFilter2D",&_glConvolutionFilter2D_F},
	{"glConvolutionFilter1D",&_glConvolutionFilter1D_F},
	{"glColorTableParameteriv",&_glColorTableParameteriv_F},
	{"glColorTableParameterfv",&_glColorTableParameterfv_F},
	{"glColorTable",&_glColorTable_F},
	{"glColorSubTable",&_glColorSubTable_F},
	{"glColorPointer",&_glColorPointer_F},
	{"glColorMaterial",&_glColorMaterial_F},
	{"glColorMask",&_glColorMask_F},
	{"glColor4usv",&_glColor4usv_F},
	{"glColor4us",&_glColor4us_F},
	{"glColor4uiv",&_glColor4uiv_F},
	{"glColor4ui",&_glColor4ui_F},
	{"glColor4ubv",&_glColor4ubv_F},
	{"glColor4ub",&_glColor4ub_F},
	{"glColor4sv",&_glColor4sv_F},
	{"glColor4s",&_glColor4s_F},
	{"glColor4iv",&_glColor4iv_F},
	{"glColor4i",&_glColor4i_F},
	{"glColor4fv",&_glColor4fv_F},
	{"glColor4f",&_glColor4f_F},
	{"glColor4dv",&_glColor4dv_F},
	{"glColor4d",&_glColor4d_F},
	{"glColor4bv",&_glColor4bv_F},
	{"glColor4b",&_glColor4b_F},
	{"glColor3usv",&_glColor3usv_F},
	{"glColor3us",&_glColor3us_F},
	{"glColor3uiv",&_glColor3uiv_F},
	{"glColor3ui",&_glColor3ui_F},
	{"glColor3ubv",&_glColor3ubv_F},
	{"glColor3ub",&_glColor3ub_F},
	{"glColor3sv",&_glColor3sv_F},
	{"glColor3s",&_glColor3s_F},
	{"glColor3iv",&_glColor3iv_F},
	{"glColor3i",&_glColor3i_F},
	{"glColor3fv",&_glColor3fv_F},
	{"glColor3f",&_glColor3f_F},
	{"glColor3dv",&_glColor3dv_F},
	{"glColor3d",&_glColor3d_F},
	{"glColor3bv",&_glColor3bv_F},
	{"glColor3b",&_glColor3b_F},
	{"glClipPlane",&_glClipPlane_F},
	{"glClearStencil",&_glClearStencil_F},
	{"glClearIndex",&_glClearIndex_F},
	{"glClearDepth",&_glClearDepth_F},
	{"glClearColor",&_glClearColor_F},
	{"glClearAccum",&_glClearAccum_F},
	{"glClear",&_glClear_F},
	{"glCallLists",&_glCallLists_F},
	{"glCallList",&_glCallList_F},
	{"glBlendFunc",&_glBlendFunc_F},
	{"glBlendEquationSeparate",&_glBlendEquationSeparate_F},
	{"glBlendEquation",&_glBlendEquation_F},
	{"glBlendColor",&_glBlendColor_F},
	{"glBitmap",&_glBitmap_F},
	{"glBindTexture",&_glBindTexture_F},
	{"glBegin",&_glBegin_F},
	{"glArrayElement",&_glArrayElement_F},
	{"glAreTexturesResident",&_glAreTexturesResident_F},
	{"glAlphaFunc",&_glAlphaFunc_F},
	{"glAccum",&_glAccum_F},
	{"glPointParameterivNV",&_glPointParameterivNV_F},
	{"glPointParameteriNV",&_glPointParameteriNV_F},
	{"glGetCombinerStageParameterfvNV",&_glGetCombinerStageParameterfvNV_F},
	{"glCombinerStageParameterfvNV",&_glCombinerStageParameterfvNV_F},
	{"glGetFinalCombinerInputParameterivNV",&_glGetFinalCombinerInputParameterivNV_F},
	{"glGetFinalCombinerInputParameterfvNV",&_glGetFinalCombinerInputParameterfvNV_F},
	{"glGetCombinerOutputParameterivNV",&_glGetCombinerOutputParameterivNV_F},
	{"glGetCombinerOutputParameterfvNV",&_glGetCombinerOutputParameterfvNV_F},
	{"glGetCombinerInputParameterivNV",&_glGetCombinerInputParameterivNV_F},
	{"glGetCombinerInputParameterfvNV",&_glGetCombinerInputParameterfvNV_F},
	{"glFinalCombinerInputNV",&_glFinalCombinerInputNV_F},
	{"glCombinerOutputNV",&_glCombinerOutputNV_F},
	{"glCombinerInputNV",&_glCombinerInputNV_F},
	{"glCombinerParameteriNV",&_glCombinerParameteriNV_F},
	{"glCombinerParameterivNV",&_glCombinerParameterivNV_F},
	{"glCombinerParameterfNV",&_glCombinerParameterfNV_F},
	{"glCombinerParameterfvNV",&_glCombinerParameterfvNV_F},
	{"glPNTrianglesfATIX",&_glPNTrianglesfATIX_F},
	{"glPNTrianglesiATIX",&_glPNTrianglesiATIX_F},
	{"glStencilFuncSeparateATI",&_glStencilFuncSeparateATI_F},
	{"glStencilOpSeparateATI",&_glStencilOpSeparateATI_F},
	{"glBlendEquationSeparateATI",&_glBlendEquationSeparateATI_F},
	{"glPNTrianglesfATI",&_glPNTrianglesfATI_F},
	{"glPNTrianglesiATI",&_glPNTrianglesiATI_F},
	{"glMapVertexAttrib2fAPPLE",&_glMapVertexAttrib2fAPPLE_F},
	{"glMapVertexAttrib2dAPPLE",&_glMapVertexAttrib2dAPPLE_F},
	{"glMapVertexAttrib1fAPPLE",&_glMapVertexAttrib1fAPPLE_F},
	{"glMapVertexAttrib1dAPPLE",&_glMapVertexAttrib1dAPPLE_F},
	{"glIsVertexAttribEnabledAPPLE",&_glIsVertexAttribEnabledAPPLE_F},
	{"glDisableVertexAttribAPPLE",&_glDisableVertexAttribAPPLE_F},
	{"glEnableVertexAttribAPPLE",&_glEnableVertexAttribAPPLE_F},
	{"glSwapAPPLE",&_glSwapAPPLE_F},
	{"glFinishRenderAPPLE",&_glFinishRenderAPPLE_F},
	{"glFlushRenderAPPLE",&_glFlushRenderAPPLE_F},
	{"glMultiDrawRangeElementArrayAPPLE",&_glMultiDrawRangeElementArrayAPPLE_F},
	{"glMultiDrawElementArrayAPPLE",&_glMultiDrawElementArrayAPPLE_F},
	{"glDrawRangeElementArrayAPPLE",&_glDrawRangeElementArrayAPPLE_F},
	{"glDrawElementArrayAPPLE",&_glDrawElementArrayAPPLE_F},
	{"glElementPointerAPPLE",&_glElementPointerAPPLE_F},
	{"glFinishObjectAPPLE",&_glFinishObjectAPPLE_F},
	{"glTestObjectAPPLE",&_glTestObjectAPPLE_F},
	{"glFinishFenceAPPLE",&_glFinishFenceAPPLE_F},
	{"glTestFenceAPPLE",&_glTestFenceAPPLE_F},
	{"glIsFenceAPPLE",&_glIsFenceAPPLE_F},
	{"glSetFenceAPPLE",&_glSetFenceAPPLE_F},
	{"glDeleteFencesAPPLE",&_glDeleteFencesAPPLE_F},
	{"glGenFencesAPPLE",&_glGenFencesAPPLE_F},
	{"glIsVertexArrayAPPLE",&_glIsVertexArrayAPPLE_F},
	{"glGenVertexArraysAPPLE",&_glGenVertexArraysAPPLE_F},
	{"glDeleteVertexArraysAPPLE",&_glDeleteVertexArraysAPPLE_F},
	{"glBindVertexArrayAPPLE",&_glBindVertexArrayAPPLE_F},
	{"glVertexArrayParameteriAPPLE",&_glVertexArrayParameteriAPPLE_F},
	{"glFlushVertexArrayRangeAPPLE",&_glFlushVertexArrayRangeAPPLE_F},
	{"glVertexArrayRangeAPPLE",&_glVertexArrayRangeAPPLE_F},
	{"glGetTexParameterPointervAPPLE",&_glGetTexParameterPointervAPPLE_F},
	{"glTextureRangeAPPLE",&_glTextureRangeAPPLE_F},
	{"glGenerateMipmapEXT",&_glGenerateMipmapEXT_F},
	{"glGetFramebufferAttachmentParameterivEXT",&_glGetFramebufferAttachmentParameterivEXT_F},
	{"glFramebufferRenderbufferEXT",&_glFramebufferRenderbufferEXT_F},
	{"glFramebufferTexture3DEXT",&_glFramebufferTexture3DEXT_F},
	{"glFramebufferTexture2DEXT",&_glFramebufferTexture2DEXT_F},
	{"glFramebufferTexture1DEXT",&_glFramebufferTexture1DEXT_F},
	{"glCheckFramebufferStatusEXT",&_glCheckFramebufferStatusEXT_F},
	{"glGenFramebuffersEXT",&_glGenFramebuffersEXT_F},
	{"glDeleteFramebuffersEXT",&_glDeleteFramebuffersEXT_F},
	{"glBindFramebufferEXT",&_glBindFramebufferEXT_F},
	{"glIsFramebufferEXT",&_glIsFramebufferEXT_F},
	{"glGetRenderbufferParameterivEXT",&_glGetRenderbufferParameterivEXT_F},
	{"glRenderbufferStorageEXT",&_glRenderbufferStorageEXT_F},
	{"glGenRenderbuffersEXT",&_glGenRenderbuffersEXT_F},
	{"glDeleteRenderbuffersEXT",&_glDeleteRenderbuffersEXT_F},
	{"glBindRenderbufferEXT",&_glBindRenderbufferEXT_F},
	{"glIsRenderbufferEXT",&_glIsRenderbufferEXT_F},
	{"glBlendEquationSeparateEXT",&_glBlendEquationSeparateEXT_F},
	{"glDepthBoundsEXT",&_glDepthBoundsEXT_F},
	{"glActiveStencilFaceEXT",&_glActiveStencilFaceEXT_F},
	{"glBlendFuncSeparateEXT",&_glBlendFuncSeparateEXT_F},
	{"glFogCoordPointerEXT",&_glFogCoordPointerEXT_F},
	{"glFogCoorddvEXT",&_glFogCoorddvEXT_F},
	{"glFogCoorddEXT",&_glFogCoorddEXT_F},
	{"glFogCoordfvEXT",&_glFogCoordfvEXT_F},
	{"glFogCoordfEXT",&_glFogCoordfEXT_F},
	{"glMultiDrawElementsEXT",&_glMultiDrawElementsEXT_F},
	{"glMultiDrawArraysEXT",&_glMultiDrawArraysEXT_F},
	{"glSecondaryColorPointerEXT",&_glSecondaryColorPointerEXT_F},
	{"glSecondaryColor3usvEXT",&_glSecondaryColor3usvEXT_F},
	{"glSecondaryColor3usEXT",&_glSecondaryColor3usEXT_F},
	{"glSecondaryColor3uivEXT",&_glSecondaryColor3uivEXT_F},
	{"glSecondaryColor3uiEXT",&_glSecondaryColor3uiEXT_F},
	{"glSecondaryColor3ubvEXT",&_glSecondaryColor3ubvEXT_F},
	{"glSecondaryColor3ubEXT",&_glSecondaryColor3ubEXT_F},
	{"glSecondaryColor3svEXT",&_glSecondaryColor3svEXT_F},
	{"glSecondaryColor3sEXT",&_glSecondaryColor3sEXT_F},
	{"glSecondaryColor3ivEXT",&_glSecondaryColor3ivEXT_F},
	{"glSecondaryColor3iEXT",&_glSecondaryColor3iEXT_F},
	{"glSecondaryColor3fvEXT",&_glSecondaryColor3fvEXT_F},
	{"glSecondaryColor3fEXT",&_glSecondaryColor3fEXT_F},
	{"glSecondaryColor3dvEXT",&_glSecondaryColor3dvEXT_F},
	{"glSecondaryColor3dEXT",&_glSecondaryColor3dEXT_F},
	{"glSecondaryColor3bvEXT",&_glSecondaryColor3bvEXT_F},
	{"glSecondaryColor3bEXT",&_glSecondaryColor3bEXT_F},
	{"glDrawRangeElementsEXT",&_glDrawRangeElementsEXT_F},
	{"glUnlockArraysEXT",&_glUnlockArraysEXT_F},
	{"glLockArraysEXT",&_glLockArraysEXT_F},
	{"glGetColorTableParameterfvEXT",&_glGetColorTableParameterfvEXT_F},
	{"glGetColorTableParameterivEXT",&_glGetColorTableParameterivEXT_F},
	{"glGetColorTableEXT",&_glGetColorTableEXT_F},
	{"glColorSubTableEXT",&_glColorSubTableEXT_F},
	{"glColorTableEXT",&_glColorTableEXT_F},
	{"glBlendEquationEXT",&_glBlendEquationEXT_F},
	{"glBlendColorEXT",&_glBlendColorEXT_F},
	{"glDrawBuffersARB",&_glDrawBuffersARB_F},
	{"glGetBufferPointervARB",&_glGetBufferPointervARB_F},
	{"glGetBufferParameterivARB",&_glGetBufferParameterivARB_F},
	{"glUnmapBufferARB",&_glUnmapBufferARB_F},
	{"glMapBufferARB",&_glMapBufferARB_F},
	{"glGetBufferSubDataARB",&_glGetBufferSubDataARB_F},
	{"glBufferSubDataARB",&_glBufferSubDataARB_F},
	{"glBufferDataARB",&_glBufferDataARB_F},
	{"glIsBufferARB",&_glIsBufferARB_F},
	{"glGenBuffersARB",&_glGenBuffersARB_F},
	{"glDeleteBuffersARB",&_glDeleteBuffersARB_F},
	{"glBindBufferARB",&_glBindBufferARB_F},
	{"glGetAttribLocationARB",&_glGetAttribLocationARB_F},
	{"glGetActiveAttribARB",&_glGetActiveAttribARB_F},
	{"glBindAttribLocationARB",&_glBindAttribLocationARB_F},
	{"glGetShaderSourceARB",&_glGetShaderSourceARB_F},
	{"glGetUniformivARB",&_glGetUniformivARB_F},
	{"glGetUniformfvARB",&_glGetUniformfvARB_F},
	{"glGetActiveUniformARB",&_glGetActiveUniformARB_F},
	{"glGetUniformLocationARB",&_glGetUniformLocationARB_F},
	{"glGetAttachedObjectsARB",&_glGetAttachedObjectsARB_F},
	{"glGetInfoLogARB",&_glGetInfoLogARB_F},
	{"glGetObjectParameterivARB",&_glGetObjectParameterivARB_F},
	{"glGetObjectParameterfvARB",&_glGetObjectParameterfvARB_F},
	{"glUniformMatrix4fvARB",&_glUniformMatrix4fvARB_F},
	{"glUniformMatrix3fvARB",&_glUniformMatrix3fvARB_F},
	{"glUniformMatrix2fvARB",&_glUniformMatrix2fvARB_F},
	{"glUniform4ivARB",&_glUniform4ivARB_F},
	{"glUniform3ivARB",&_glUniform3ivARB_F},
	{"glUniform2ivARB",&_glUniform2ivARB_F},
	{"glUniform1ivARB",&_glUniform1ivARB_F},
	{"glUniform4fvARB",&_glUniform4fvARB_F},
	{"glUniform3fvARB",&_glUniform3fvARB_F},
	{"glUniform2fvARB",&_glUniform2fvARB_F},
	{"glUniform1fvARB",&_glUniform1fvARB_F},
	{"glUniform4iARB",&_glUniform4iARB_F},
	{"glUniform3iARB",&_glUniform3iARB_F},
	{"glUniform2iARB",&_glUniform2iARB_F},
	{"glUniform1iARB",&_glUniform1iARB_F},
	{"glUniform4fARB",&_glUniform4fARB_F},
	{"glUniform3fARB",&_glUniform3fARB_F},
	{"glUniform2fARB",&_glUniform2fARB_F},
	{"glUniform1fARB",&_glUniform1fARB_F},
	{"glValidateProgramARB",&_glValidateProgramARB_F},
	{"glUseProgramObjectARB",&_glUseProgramObjectARB_F},
	{"glLinkProgramARB",&_glLinkProgramARB_F},
	{"glAttachObjectARB",&_glAttachObjectARB_F},
	{"glCreateProgramObjectARB",&_glCreateProgramObjectARB_F},
	{"glCompileShaderARB",&_glCompileShaderARB_F},
	{"glShaderSourceARB",&_glShaderSourceARB_F},
	{"glCreateShaderObjectARB",&_glCreateShaderObjectARB_F},
	{"glDetachObjectARB",&_glDetachObjectARB_F},
	{"glGetHandleARB",&_glGetHandleARB_F},
	{"glDeleteObjectARB",&_glDeleteObjectARB_F},
	{"glGetVertexAttribivARB",&_glGetVertexAttribivARB_F},
	{"glGetVertexAttribfvARB",&_glGetVertexAttribfvARB_F},
	{"glGetVertexAttribdvARB",&_glGetVertexAttribdvARB_F},
	{"glGetVertexAttribPointervARB",&_glGetVertexAttribPointervARB_F},
	{"glEnableVertexAttribArrayARB",&_glEnableVertexAttribArrayARB_F},
	{"glDisableVertexAttribArrayARB",&_glDisableVertexAttribArrayARB_F},
	{"glVertexAttribPointerARB",&_glVertexAttribPointerARB_F},
	{"glVertexAttrib4usvARB",&_glVertexAttrib4usvARB_F},
	{"glVertexAttrib4uivARB",&_glVertexAttrib4uivARB_F},
	{"glVertexAttrib4ubvARB",&_glVertexAttrib4ubvARB_F},
	{"glVertexAttrib4svARB",&_glVertexAttrib4svARB_F},
	{"glVertexAttrib4sARB",&_glVertexAttrib4sARB_F},
	{"glVertexAttrib4ivARB",&_glVertexAttrib4ivARB_F},
	{"glVertexAttrib4fvARB",&_glVertexAttrib4fvARB_F},
	{"glVertexAttrib4fARB",&_glVertexAttrib4fARB_F},
	{"glVertexAttrib4dvARB",&_glVertexAttrib4dvARB_F},
	{"glVertexAttrib4dARB",&_glVertexAttrib4dARB_F},
	{"glVertexAttrib4bvARB",&_glVertexAttrib4bvARB_F},
	{"glVertexAttrib4NusvARB",&_glVertexAttrib4NusvARB_F},
	{"glVertexAttrib4NuivARB",&_glVertexAttrib4NuivARB_F},
	{"glVertexAttrib4NubvARB",&_glVertexAttrib4NubvARB_F},
	{"glVertexAttrib4NubARB",&_glVertexAttrib4NubARB_F},
	{"glVertexAttrib4NsvARB",&_glVertexAttrib4NsvARB_F},
	{"glVertexAttrib4NivARB",&_glVertexAttrib4NivARB_F},
	{"glVertexAttrib4NbvARB",&_glVertexAttrib4NbvARB_F},
	{"glVertexAttrib3svARB",&_glVertexAttrib3svARB_F},
	{"glVertexAttrib3sARB",&_glVertexAttrib3sARB_F},
	{"glVertexAttrib3fvARB",&_glVertexAttrib3fvARB_F},
	{"glVertexAttrib3fARB",&_glVertexAttrib3fARB_F},
	{"glVertexAttrib3dvARB",&_glVertexAttrib3dvARB_F},
	{"glVertexAttrib3dARB",&_glVertexAttrib3dARB_F},
	{"glVertexAttrib2svARB",&_glVertexAttrib2svARB_F},
	{"glVertexAttrib2sARB",&_glVertexAttrib2sARB_F},
	{"glVertexAttrib2fvARB",&_glVertexAttrib2fvARB_F},
	{"glVertexAttrib2fARB",&_glVertexAttrib2fARB_F},
	{"glVertexAttrib2dvARB",&_glVertexAttrib2dvARB_F},
	{"glVertexAttrib2dARB",&_glVertexAttrib2dARB_F},
	{"glVertexAttrib1svARB",&_glVertexAttrib1svARB_F},
	{"glVertexAttrib1sARB",&_glVertexAttrib1sARB_F},
	{"glVertexAttrib1fvARB",&_glVertexAttrib1fvARB_F},
	{"glVertexAttrib1fARB",&_glVertexAttrib1fARB_F},
	{"glVertexAttrib1dvARB",&_glVertexAttrib1dvARB_F},
	{"glVertexAttrib1dARB",&_glVertexAttrib1dARB_F},
	{"glGetProgramivARB",&_glGetProgramivARB_F},
	{"glGetProgramStringARB",&_glGetProgramStringARB_F},
	{"glProgramStringARB",&_glProgramStringARB_F},
	{"glGetProgramLocalParameterfvARB",&_glGetProgramLocalParameterfvARB_F},
	{"glGetProgramLocalParameterdvARB",&_glGetProgramLocalParameterdvARB_F},
	{"glGetProgramEnvParameterfvARB",&_glGetProgramEnvParameterfvARB_F},
	{"glGetProgramEnvParameterdvARB",&_glGetProgramEnvParameterdvARB_F},
	{"glProgramLocalParameter4fvARB",&_glProgramLocalParameter4fvARB_F},
	{"glProgramLocalParameter4fARB",&_glProgramLocalParameter4fARB_F},
	{"glProgramLocalParameter4dvARB",&_glProgramLocalParameter4dvARB_F},
	{"glProgramLocalParameter4dARB",&_glProgramLocalParameter4dARB_F},
	{"glProgramEnvParameter4fvARB",&_glProgramEnvParameter4fvARB_F},
	{"glProgramEnvParameter4fARB",&_glProgramEnvParameter4fARB_F},
	{"glProgramEnvParameter4dvARB",&_glProgramEnvParameter4dvARB_F},
	{"glProgramEnvParameter4dARB",&_glProgramEnvParameter4dARB_F},
	{"glIsProgramARB",&_glIsProgramARB_F},
	{"glGenProgramsARB",&_glGenProgramsARB_F},
	{"glDeleteProgramsARB",&_glDeleteProgramsARB_F},
	{"glBindProgramARB",&_glBindProgramARB_F},
	{"glPointParameterfvARB",&_glPointParameterfvARB_F},
	{"glPointParameterfARB",&_glPointParameterfARB_F},
	{"glGetQueryObjectuivARB",&_glGetQueryObjectuivARB_F},
	{"glGetQueryObjectivARB",&_glGetQueryObjectivARB_F},
	{"glGetQueryivARB",&_glGetQueryivARB_F},
	{"glEndQueryARB",&_glEndQueryARB_F},
	{"glBeginQueryARB",&_glBeginQueryARB_F},
	{"glIsQueryARB",&_glIsQueryARB_F},
	{"glDeleteQueriesARB",&_glDeleteQueriesARB_F},
	{"glGenQueriesARB",&_glGenQueriesARB_F},
	{"glWindowPos3svARB",&_glWindowPos3svARB_F},
	{"glWindowPos3sARB",&_glWindowPos3sARB_F},
	{"glWindowPos3ivARB",&_glWindowPos3ivARB_F},
	{"glWindowPos3iARB",&_glWindowPos3iARB_F},
	{"glWindowPos3fvARB",&_glWindowPos3fvARB_F},
	{"glWindowPos3fARB",&_glWindowPos3fARB_F},
	{"glWindowPos3dvARB",&_glWindowPos3dvARB_F},
	{"glWindowPos3dARB",&_glWindowPos3dARB_F},
	{"glWindowPos2svARB",&_glWindowPos2svARB_F},
	{"glWindowPos2sARB",&_glWindowPos2sARB_F},
	{"glWindowPos2ivARB",&_glWindowPos2ivARB_F},
	{"glWindowPos2iARB",&_glWindowPos2iARB_F},
	{"glWindowPos2fvARB",&_glWindowPos2fvARB_F},
	{"glWindowPos2fARB",&_glWindowPos2fARB_F},
	{"glWindowPos2dvARB",&_glWindowPos2dvARB_F},
	{"glWindowPos2dARB",&_glWindowPos2dARB_F},
	{"glVertexBlendARB",&_glVertexBlendARB_F},
	{"glWeightPointerARB",&_glWeightPointerARB_F},
	{"glWeightuivARB",&_glWeightuivARB_F},
	{"glWeightusvARB",&_glWeightusvARB_F},
	{"glWeightubvARB",&_glWeightubvARB_F},
	{"glWeightdvARB",&_glWeightdvARB_F},
	{"glWeightfvARB",&_glWeightfvARB_F},
	{"glWeightivARB",&_glWeightivARB_F},
	{"glWeightsvARB",&_glWeightsvARB_F},
	{"glWeightbvARB",&_glWeightbvARB_F},
	{"glGetCompressedTexImageARB",&_glGetCompressedTexImageARB_F},
	{"glCompressedTexSubImage1DARB",&_glCompressedTexSubImage1DARB_F},
	{"glCompressedTexSubImage2DARB",&_glCompressedTexSubImage2DARB_F},
	{"glCompressedTexSubImage3DARB",&_glCompressedTexSubImage3DARB_F},
	{"glCompressedTexImage1DARB",&_glCompressedTexImage1DARB_F},
	{"glCompressedTexImage2DARB",&_glCompressedTexImage2DARB_F},
	{"glCompressedTexImage3DARB",&_glCompressedTexImage3DARB_F},
	{"glSamplePassARB",&_glSamplePassARB_F},
	{"glSampleCoverageARB",&_glSampleCoverageARB_F},
	{"glMultTransposeMatrixdARB",&_glMultTransposeMatrixdARB_F},
	{"glMultTransposeMatrixfARB",&_glMultTransposeMatrixfARB_F},
	{"glLoadTransposeMatrixdARB",&_glLoadTransposeMatrixdARB_F},
	{"glLoadTransposeMatrixfARB",&_glLoadTransposeMatrixfARB_F},
	{"glMultiTexCoord4svARB",&_glMultiTexCoord4svARB_F},
	{"glMultiTexCoord4sARB",&_glMultiTexCoord4sARB_F},
	{"glMultiTexCoord4ivARB",&_glMultiTexCoord4ivARB_F},
	{"glMultiTexCoord4iARB",&_glMultiTexCoord4iARB_F},
	{"glMultiTexCoord4fvARB",&_glMultiTexCoord4fvARB_F},
	{"glMultiTexCoord4fARB",&_glMultiTexCoord4fARB_F},
	{"glMultiTexCoord4dvARB",&_glMultiTexCoord4dvARB_F},
	{"glMultiTexCoord4dARB",&_glMultiTexCoord4dARB_F},
	{"glMultiTexCoord3svARB",&_glMultiTexCoord3svARB_F},
	{"glMultiTexCoord3sARB",&_glMultiTexCoord3sARB_F},
	{"glMultiTexCoord3ivARB",&_glMultiTexCoord3ivARB_F},
	{"glMultiTexCoord3iARB",&_glMultiTexCoord3iARB_F},
	{"glMultiTexCoord3fvARB",&_glMultiTexCoord3fvARB_F},
	{"glMultiTexCoord3fARB",&_glMultiTexCoord3fARB_F},
	{"glMultiTexCoord3dvARB",&_glMultiTexCoord3dvARB_F},
	{"glMultiTexCoord3dARB",&_glMultiTexCoord3dARB_F},
	{"glMultiTexCoord2svARB",&_glMultiTexCoord2svARB_F},
	{"glMultiTexCoord2sARB",&_glMultiTexCoord2sARB_F},
	{"glMultiTexCoord2ivARB",&_glMultiTexCoord2ivARB_F},
	{"glMultiTexCoord2iARB",&_glMultiTexCoord2iARB_F},
	{"glMultiTexCoord2fvARB",&_glMultiTexCoord2fvARB_F},
	{"glMultiTexCoord2fARB",&_glMultiTexCoord2fARB_F},
	{"glMultiTexCoord2dvARB",&_glMultiTexCoord2dvARB_F},
	{"glMultiTexCoord2dARB",&_glMultiTexCoord2dARB_F},
	{"glMultiTexCoord1svARB",&_glMultiTexCoord1svARB_F},
	{"glMultiTexCoord1sARB",&_glMultiTexCoord1sARB_F},
	{"glMultiTexCoord1ivARB",&_glMultiTexCoord1ivARB_F},
	{"glMultiTexCoord1iARB",&_glMultiTexCoord1iARB_F},
	{"glMultiTexCoord1fvARB",&_glMultiTexCoord1fvARB_F},
	{"glMultiTexCoord1fARB",&_glMultiTexCoord1fARB_F},
	{"glMultiTexCoord1dvARB",&_glMultiTexCoord1dvARB_F},
	{"glMultiTexCoord1dARB",&_glMultiTexCoord1dARB_F},
	{"glClientActiveTextureARB",&_glClientActiveTextureARB_F},
	{"glActiveTextureARB",&_glActiveTextureARB_F},
};

//Nat4	VPX_OpenGL_Constants_Number = 0;
Nat4	VPX_OpenGL_Structures_Number = 9;
Nat4	VPX_OpenGL_Procedures_Number = 1132;

#pragma export on

/*
Nat4	load_MacOSX_OpenGL_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_OpenGL_Constants(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_OpenGL_Constants_Number,VPX_OpenGL_Constants);
		
		return result;
}
*/

Nat4	load_MacOSX_OpenGL_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_OpenGL_Structures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_OpenGL_Structures_Number,VPX_OpenGL_Structures);
		
		return result;
}

Nat4	load_MacOSX_OpenGL_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_OpenGL_Procedures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_OpenGL_Procedures_Number,VPX_OpenGL_Procedures);
		
		return result;
}

#pragma export off
