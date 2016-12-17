/*
	
	Cocoa_Procedures.c
	Copyright 2011 Andescotia LLC, All Rights Reserved.
	
*/
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif

#include <objc/runtime.h>

enum objcEncodingType{
	kLongLongType = kVoidType + 1,
	kUnsignedCharType,
	kUnsignedIntType,
	kUnsignedShortType,
	kUnsignedLongType,
	kUnsignedLongLongType,
	kBoolType,
	kCharStringType,
	kObjectType,
	kClassType,
	kSelectorType,
	kArrayType,
	kUnionType,
	kUnknownObjcType,
};


extern V_ExtProcedure get_extProcedure( V_Dictionary ptrT, Int1 *name );
extern V_ExtProcedure extProcedure_new(Int1 *name,V_Dictionary dictionary,void *functionPtr);
extern V_ExtProcedure extProcedure_add_parameter(V_ExtProcedure procedure,Nat4 type,Nat4 size,Int1 *name,Nat4 indirection,Nat4 constantFlag);
extern V_ExtProcedure extProcedure_add_return(V_ExtProcedure procedure,Nat4 type,Nat4 size,Int1 *name,Nat4 indirection);
extern Int1 *new_cat_string( Int1 *firstString, Int1 *secondString , V_Environment environment );

//VPL_Parameter _NSNSDocument_alloc_R = { kPointerType,4,"objc_object",1,0,NULL};
//VPL_ExtProcedure _NSNSDocument_alloc_F = {"NSDocument\\alloc",NULL,NULL,&_NSNSDocument_alloc_R};



#pragma mark ---------- Procedures Inits ----------

VPL_Parameter _NSSizeToCGSize_R = { kStructureType,16,"CGSize",0,0,NULL};
VPL_Parameter _NSSizeToCGSize_1 = { kStructureType,16,"CGSize",0,0,NULL};
VPL_ExtProcedure _NSSizeToCGSize_F = {"NSSizeToCGSize",NSSizeToCGSize,&_NSSizeToCGSize_1,&_NSSizeToCGSize_R};

VPL_Parameter _NSSizeFromCGSize_R = { kStructureType,16,"CGSize",0,0,NULL};
VPL_Parameter _NSSizeFromCGSize_1 = { kStructureType,16,"CGSize",0,0,NULL};
VPL_ExtProcedure _NSSizeFromCGSize_F = {"NSSizeFromCGSize",NSSizeFromCGSize,&_NSSizeFromCGSize_1,&_NSSizeFromCGSize_R};

VPL_Parameter _NSPointToCGPoint_R = { kStructureType,16,"CGPoint",0,0,NULL};
VPL_Parameter _NSPointToCGPoint_1 = { kStructureType,16,"CGPoint",0,0,NULL};
VPL_ExtProcedure _NSPointToCGPoint_F = {"NSPointToCGPoint",NSPointToCGPoint,&_NSPointToCGPoint_1,&_NSPointToCGPoint_R};

VPL_Parameter _NSPointFromCGPoint_R = { kStructureType,16,"CGPoint",0,0,NULL};
VPL_Parameter _NSPointFromCGPoint_1 = { kStructureType,16,"CGPoint",0,0,NULL};
VPL_ExtProcedure _NSPointFromCGPoint_F = {"NSPointFromCGPoint",NSPointFromCGPoint,&_NSPointFromCGPoint_1,&_NSPointFromCGPoint_R};

VPL_Parameter _NSRectToCGRect_R = { kStructureType,32,"CGRect",0,0,NULL};
VPL_Parameter _NSRectToCGRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSRectToCGRect_F = {"NSRectToCGRect",NSRectToCGRect,&_NSRectToCGRect_1,&_NSRectToCGRect_R};

VPL_Parameter _NSRectFromCGRect_R = { kStructureType,32,"CGRect",0,0,NULL};
VPL_Parameter _NSRectFromCGRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSRectFromCGRect_F = {"NSRectFromCGRect",NSRectFromCGRect,&_NSRectFromCGRect_1,&_NSRectFromCGRect_R};

VPL_Parameter _NSHeight_R = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSHeight_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSHeight_F = {"NSHeight",NSHeight,&_NSHeight_1,&_NSHeight_R};

VPL_Parameter _NSWidth_R = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSWidth_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSWidth_F = {"NSWidth",NSWidth,&_NSWidth_1,&_NSWidth_R};

VPL_Parameter _NSMinY_R = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMinY_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSMinY_F = {"NSMinY",NSMinY,&_NSMinY_1,&_NSMinY_R};

VPL_Parameter _NSMinX_R = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMinX_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSMinX_F = {"NSMinX",NSMinX,&_NSMinX_1,&_NSMinX_R};

VPL_Parameter _NSMidY_R = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMidY_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSMidY_F = {"NSMidY",NSMidY,&_NSMidY_1,&_NSMidY_R};

VPL_Parameter _NSMidX_R = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMidX_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSMidX_F = {"NSMidX",NSMidX,&_NSMidX_1,&_NSMidX_R};

VPL_Parameter _NSMaxY_R = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMaxY_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSMaxY_F = {"NSMaxY",NSMaxY,&_NSMaxY_1,&_NSMaxY_R};

VPL_Parameter _NSMaxX_R = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMaxX_1 = { kStructureType,32,"CGRect",0,0,NULL};
VPL_ExtProcedure _NSMaxX_F = {"NSMaxX",NSMaxX,&_NSMaxX_1,&_NSMaxX_R};

VPL_Parameter _NSMakeRect_R = { kStructureType,32,"CGRect",0,0,NULL};
VPL_Parameter _NSMakeRect_4 = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMakeRect_3 = { kFloatType,8,NULL,0,0,&_NSMakeRect_4};
VPL_Parameter _NSMakeRect_2 = { kFloatType,8,NULL,0,0,&_NSMakeRect_3};
VPL_Parameter _NSMakeRect_1 = { kFloatType,8,NULL,0,0,&_NSMakeRect_2};
VPL_ExtProcedure _NSMakeRect_F = {"NSMakeRect",NSMakeRect,&_NSMakeRect_1,&_NSMakeRect_R};

VPL_Parameter _NSMakeSize_R = { kStructureType,16,"CGSize",0,0,NULL};
VPL_Parameter _NSMakeSize_2 = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMakeSize_1 = { kFloatType,8,NULL,0,0,&_NSMakeSize_2};
VPL_ExtProcedure _NSMakeSize_F = {"NSMakeSize",NSMakeSize,&_NSMakeSize_1,&_NSMakeSize_R};

VPL_Parameter _NSMakePoint_R = { kStructureType,16,"CGPoint",0,0,NULL};
VPL_Parameter _NSMakePoint_2 = { kFloatType,8,NULL,0,0,NULL};
VPL_Parameter _NSMakePoint_1 = { kFloatType,8,NULL,0,0,&_NSMakePoint_2};
VPL_ExtProcedure _NSMakePoint_F = {"NSMakePoint",NSMakePoint,&_NSMakePoint_1,&_NSMakePoint_R};
	
	VPL_Parameter _NSIsControllerMarker_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSIsControllerMarker_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSIsControllerMarker_F = {"NSIsControllerMarker",NSIsControllerMarker,&_NSIsControllerMarker_1,&_NSIsControllerMarker_R};

	VPL_Parameter _NSOpenGLGetVersion_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _NSOpenGLGetVersion_1 = { kPointerType,4,"int",1,0,&_NSOpenGLGetVersion_2};
	VPL_ExtProcedure _NSOpenGLGetVersion_F = {"NSOpenGLGetVersion",NSOpenGLGetVersion,&_NSOpenGLGetVersion_1,NULL};

	VPL_Parameter _NSOpenGLGetOption_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _NSOpenGLGetOption_1 = { kEnumType,4,"2589",0,0,&_NSOpenGLGetOption_2};
	VPL_ExtProcedure _NSOpenGLGetOption_F = {"NSOpenGLGetOption",NSOpenGLGetOption,&_NSOpenGLGetOption_1,NULL};

	VPL_Parameter _NSOpenGLSetOption_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSOpenGLSetOption_1 = { kEnumType,4,"2589",0,0,&_NSOpenGLSetOption_2};
	VPL_ExtProcedure _NSOpenGLSetOption_F = {"NSOpenGLSetOption",NSOpenGLSetOption,&_NSOpenGLSetOption_1,NULL};

	VPL_Parameter _glUniformMatrix4x3fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix4x3fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix4x3fv_4};
	VPL_Parameter _glUniformMatrix4x3fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix4x3fv_3};
	VPL_Parameter _glUniformMatrix4x3fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix4x3fv_2};
	VPL_ExtProcedure _glUniformMatrix4x3fv_F = {"glUniformMatrix4x3fv",glUniformMatrix4x3fv,&_glUniformMatrix4x3fv_1,NULL};

	VPL_Parameter _glUniformMatrix3x4fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix3x4fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix3x4fv_4};
	VPL_Parameter _glUniformMatrix3x4fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix3x4fv_3};
	VPL_Parameter _glUniformMatrix3x4fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix3x4fv_2};
	VPL_ExtProcedure _glUniformMatrix3x4fv_F = {"glUniformMatrix3x4fv",glUniformMatrix3x4fv,&_glUniformMatrix3x4fv_1,NULL};

	VPL_Parameter _glUniformMatrix4x2fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix4x2fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix4x2fv_4};
	VPL_Parameter _glUniformMatrix4x2fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix4x2fv_3};
	VPL_Parameter _glUniformMatrix4x2fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix4x2fv_2};
	VPL_ExtProcedure _glUniformMatrix4x2fv_F = {"glUniformMatrix4x2fv",glUniformMatrix4x2fv,&_glUniformMatrix4x2fv_1,NULL};

	VPL_Parameter _glUniformMatrix2x4fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix2x4fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix2x4fv_4};
	VPL_Parameter _glUniformMatrix2x4fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix2x4fv_3};
	VPL_Parameter _glUniformMatrix2x4fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix2x4fv_2};
	VPL_ExtProcedure _glUniformMatrix2x4fv_F = {"glUniformMatrix2x4fv",glUniformMatrix2x4fv,&_glUniformMatrix2x4fv_1,NULL};

	VPL_Parameter _glUniformMatrix3x2fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix3x2fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix3x2fv_4};
	VPL_Parameter _glUniformMatrix3x2fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix3x2fv_3};
	VPL_Parameter _glUniformMatrix3x2fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix3x2fv_2};
	VPL_ExtProcedure _glUniformMatrix3x2fv_F = {"glUniformMatrix3x2fv",glUniformMatrix3x2fv,&_glUniformMatrix3x2fv_1,NULL};

	VPL_Parameter _glUniformMatrix2x3fv_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glUniformMatrix2x3fv_3 = { kUnsignedType,1,NULL,0,0,&_glUniformMatrix2x3fv_4};
	VPL_Parameter _glUniformMatrix2x3fv_2 = { kIntType,4,NULL,0,0,&_glUniformMatrix2x3fv_3};
	VPL_Parameter _glUniformMatrix2x3fv_1 = { kIntType,4,NULL,0,0,&_glUniformMatrix2x3fv_2};
	VPL_ExtProcedure _glUniformMatrix2x3fv_F = {"glUniformMatrix2x3fv",glUniformMatrix2x3fv,&_glUniformMatrix2x3fv_1,NULL};

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
	VPL_Parameter _glGetActiveAttrib_6 = { kPointerType,4,"unsigned int",1,0,&_glGetActiveAttrib_7};
	VPL_Parameter _glGetActiveAttrib_5 = { kPointerType,4,"int",1,0,&_glGetActiveAttrib_6};
	VPL_Parameter _glGetActiveAttrib_4 = { kPointerType,4,"int",1,0,&_glGetActiveAttrib_5};
	VPL_Parameter _glGetActiveAttrib_3 = { kIntType,4,NULL,0,0,&_glGetActiveAttrib_4};
	VPL_Parameter _glGetActiveAttrib_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveAttrib_3};
	VPL_Parameter _glGetActiveAttrib_1 = { kUnsignedType,4,NULL,0,0,&_glGetActiveAttrib_2};
	VPL_ExtProcedure _glGetActiveAttrib_F = {"glGetActiveAttrib",glGetActiveAttrib,&_glGetActiveAttrib_1,NULL};

	VPL_Parameter _glBindAttribLocation_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glBindAttribLocation_2 = { kUnsignedType,4,NULL,0,0,&_glBindAttribLocation_3};
	VPL_Parameter _glBindAttribLocation_1 = { kUnsignedType,4,NULL,0,0,&_glBindAttribLocation_2};
	VPL_ExtProcedure _glBindAttribLocation_F = {"glBindAttribLocation",glBindAttribLocation,&_glBindAttribLocation_1,NULL};

	VPL_Parameter _glGetShaderSource_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetShaderSource_3 = { kPointerType,4,"int",1,0,&_glGetShaderSource_4};
	VPL_Parameter _glGetShaderSource_2 = { kIntType,4,NULL,0,0,&_glGetShaderSource_3};
	VPL_Parameter _glGetShaderSource_1 = { kUnsignedType,4,NULL,0,0,&_glGetShaderSource_2};
	VPL_ExtProcedure _glGetShaderSource_F = {"glGetShaderSource",glGetShaderSource,&_glGetShaderSource_1,NULL};

	VPL_Parameter _glGetUniformiv_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetUniformiv_2 = { kIntType,4,NULL,0,0,&_glGetUniformiv_3};
	VPL_Parameter _glGetUniformiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformiv_2};
	VPL_ExtProcedure _glGetUniformiv_F = {"glGetUniformiv",glGetUniformiv,&_glGetUniformiv_1,NULL};

	VPL_Parameter _glGetUniformfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetUniformfv_2 = { kIntType,4,NULL,0,0,&_glGetUniformfv_3};
	VPL_Parameter _glGetUniformfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformfv_2};
	VPL_ExtProcedure _glGetUniformfv_F = {"glGetUniformfv",glGetUniformfv,&_glGetUniformfv_1,NULL};

	VPL_Parameter _glGetActiveUniform_7 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetActiveUniform_6 = { kPointerType,4,"unsigned int",1,0,&_glGetActiveUniform_7};
	VPL_Parameter _glGetActiveUniform_5 = { kPointerType,4,"int",1,0,&_glGetActiveUniform_6};
	VPL_Parameter _glGetActiveUniform_4 = { kPointerType,4,"int",1,0,&_glGetActiveUniform_5};
	VPL_Parameter _glGetActiveUniform_3 = { kIntType,4,NULL,0,0,&_glGetActiveUniform_4};
	VPL_Parameter _glGetActiveUniform_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniform_3};
	VPL_Parameter _glGetActiveUniform_1 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniform_2};
	VPL_ExtProcedure _glGetActiveUniform_F = {"glGetActiveUniform",glGetActiveUniform,&_glGetActiveUniform_1,NULL};

	VPL_Parameter _glGetUniformLocation_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformLocation_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glGetUniformLocation_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformLocation_2};
	VPL_ExtProcedure _glGetUniformLocation_F = {"glGetUniformLocation",glGetUniformLocation,&_glGetUniformLocation_1,&_glGetUniformLocation_R};

	VPL_Parameter _glGetProgramInfoLog_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetProgramInfoLog_3 = { kPointerType,4,"int",1,0,&_glGetProgramInfoLog_4};
	VPL_Parameter _glGetProgramInfoLog_2 = { kIntType,4,NULL,0,0,&_glGetProgramInfoLog_3};
	VPL_Parameter _glGetProgramInfoLog_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramInfoLog_2};
	VPL_ExtProcedure _glGetProgramInfoLog_F = {"glGetProgramInfoLog",glGetProgramInfoLog,&_glGetProgramInfoLog_1,NULL};

	VPL_Parameter _glGetShaderInfoLog_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetShaderInfoLog_3 = { kPointerType,4,"int",1,0,&_glGetShaderInfoLog_4};
	VPL_Parameter _glGetShaderInfoLog_2 = { kIntType,4,NULL,0,0,&_glGetShaderInfoLog_3};
	VPL_Parameter _glGetShaderInfoLog_1 = { kUnsignedType,4,NULL,0,0,&_glGetShaderInfoLog_2};
	VPL_ExtProcedure _glGetShaderInfoLog_F = {"glGetShaderInfoLog",glGetShaderInfoLog,&_glGetShaderInfoLog_1,NULL};

	VPL_Parameter _glGetAttachedShaders_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGetAttachedShaders_3 = { kPointerType,4,"int",1,0,&_glGetAttachedShaders_4};
	VPL_Parameter _glGetAttachedShaders_2 = { kIntType,4,NULL,0,0,&_glGetAttachedShaders_3};
	VPL_Parameter _glGetAttachedShaders_1 = { kUnsignedType,4,NULL,0,0,&_glGetAttachedShaders_2};
	VPL_ExtProcedure _glGetAttachedShaders_F = {"glGetAttachedShaders",glGetAttachedShaders,&_glGetAttachedShaders_1,NULL};

	VPL_Parameter _glGetProgramiv_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetProgramiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetProgramiv_3};
	VPL_Parameter _glGetProgramiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetProgramiv_2};
	VPL_ExtProcedure _glGetProgramiv_F = {"glGetProgramiv",glGetProgramiv,&_glGetProgramiv_1,NULL};

	VPL_Parameter _glGetShaderiv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glUniform4iv_3 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glUniform4iv_2 = { kIntType,4,NULL,0,0,&_glUniform4iv_3};
	VPL_Parameter _glUniform4iv_1 = { kIntType,4,NULL,0,0,&_glUniform4iv_2};
	VPL_ExtProcedure _glUniform4iv_F = {"glUniform4iv",glUniform4iv,&_glUniform4iv_1,NULL};

	VPL_Parameter _glUniform3iv_3 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glUniform3iv_2 = { kIntType,4,NULL,0,0,&_glUniform3iv_3};
	VPL_Parameter _glUniform3iv_1 = { kIntType,4,NULL,0,0,&_glUniform3iv_2};
	VPL_ExtProcedure _glUniform3iv_F = {"glUniform3iv",glUniform3iv,&_glUniform3iv_1,NULL};

	VPL_Parameter _glUniform2iv_3 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glUniform2iv_2 = { kIntType,4,NULL,0,0,&_glUniform2iv_3};
	VPL_Parameter _glUniform2iv_1 = { kIntType,4,NULL,0,0,&_glUniform2iv_2};
	VPL_ExtProcedure _glUniform2iv_F = {"glUniform2iv",glUniform2iv,&_glUniform2iv_1,NULL};

	VPL_Parameter _glUniform1iv_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glShaderSource_4 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glGetVertexAttribiv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glVertexAttrib4uiv_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glVertexAttrib4iv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glVertexAttrib4Nuiv_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glVertexAttrib4Niv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glDrawBuffers_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDrawBuffers_1 = { kIntType,4,NULL,0,0,&_glDrawBuffers_2};
	VPL_ExtProcedure _glDrawBuffers_F = {"glDrawBuffers",glDrawBuffers,&_glDrawBuffers_1,NULL};

	VPL_Parameter _glGetBufferPointerv_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetBufferPointerv_2 = { kUnsignedType,4,NULL,0,0,&_glGetBufferPointerv_3};
	VPL_Parameter _glGetBufferPointerv_1 = { kUnsignedType,4,NULL,0,0,&_glGetBufferPointerv_2};
	VPL_ExtProcedure _glGetBufferPointerv_F = {"glGetBufferPointerv",glGetBufferPointerv,&_glGetBufferPointerv_1,NULL};

	VPL_Parameter _glGetBufferParameteriv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGenBuffers_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenBuffers_1 = { kIntType,4,NULL,0,0,&_glGenBuffers_2};
	VPL_ExtProcedure _glGenBuffers_F = {"glGenBuffers",glGenBuffers,&_glGenBuffers_1,NULL};

	VPL_Parameter _glDeleteBuffers_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDeleteBuffers_1 = { kIntType,4,NULL,0,0,&_glDeleteBuffers_2};
	VPL_ExtProcedure _glDeleteBuffers_F = {"glDeleteBuffers",glDeleteBuffers,&_glDeleteBuffers_1,NULL};

	VPL_Parameter _glBindBuffer_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindBuffer_1 = { kUnsignedType,4,NULL,0,0,&_glBindBuffer_2};
	VPL_ExtProcedure _glBindBuffer_F = {"glBindBuffer",glBindBuffer,&_glBindBuffer_1,NULL};

	VPL_Parameter _glGetQueryObjectuiv_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGetQueryObjectuiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectuiv_3};
	VPL_Parameter _glGetQueryObjectuiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectuiv_2};
	VPL_ExtProcedure _glGetQueryObjectuiv_F = {"glGetQueryObjectuiv",glGetQueryObjectuiv,&_glGetQueryObjectuiv_1,NULL};

	VPL_Parameter _glGetQueryObjectiv_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetQueryObjectiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectiv_3};
	VPL_Parameter _glGetQueryObjectiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectiv_2};
	VPL_ExtProcedure _glGetQueryObjectiv_F = {"glGetQueryObjectiv",glGetQueryObjectiv,&_glGetQueryObjectiv_1,NULL};

	VPL_Parameter _glGetQueryiv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glDeleteQueries_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDeleteQueries_1 = { kIntType,4,NULL,0,0,&_glDeleteQueries_2};
	VPL_ExtProcedure _glDeleteQueries_F = {"glDeleteQueries",glDeleteQueries,&_glDeleteQueries_1,NULL};

	VPL_Parameter _glGenQueries_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenQueries_1 = { kIntType,4,NULL,0,0,&_glGenQueries_2};
	VPL_ExtProcedure _glGenQueries_F = {"glGenQueries",glGenQueries,&_glGenQueries_1,NULL};

	VPL_Parameter _glWindowPos3sv_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3sv_F = {"glWindowPos3sv",glWindowPos3sv,&_glWindowPos3sv_1,NULL};

	VPL_Parameter _glWindowPos3s_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3s_2 = { kIntType,2,NULL,0,0,&_glWindowPos3s_3};
	VPL_Parameter _glWindowPos3s_1 = { kIntType,2,NULL,0,0,&_glWindowPos3s_2};
	VPL_ExtProcedure _glWindowPos3s_F = {"glWindowPos3s",glWindowPos3s,&_glWindowPos3s_1,NULL};

	VPL_Parameter _glWindowPos3iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glWindowPos2iv_1 = { kPointerType,4,"int",1,1,NULL};
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
	VPL_Parameter _glMultiDrawElements_2 = { kPointerType,4,"int",1,1,&_glMultiDrawElements_3};
	VPL_Parameter _glMultiDrawElements_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawElements_2};
	VPL_ExtProcedure _glMultiDrawElements_F = {"glMultiDrawElements",glMultiDrawElements,&_glMultiDrawElements_1,NULL};

	VPL_Parameter _glMultiDrawArrays_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawArrays_3 = { kPointerType,4,"int",1,1,&_glMultiDrawArrays_4};
	VPL_Parameter _glMultiDrawArrays_2 = { kPointerType,4,"int",1,1,&_glMultiDrawArrays_3};
	VPL_Parameter _glMultiDrawArrays_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawArrays_2};
	VPL_ExtProcedure _glMultiDrawArrays_F = {"glMultiDrawArrays",glMultiDrawArrays,&_glMultiDrawArrays_1,NULL};

	VPL_Parameter _glBlendFuncSeparate_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendFuncSeparate_3 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparate_4};
	VPL_Parameter _glBlendFuncSeparate_2 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparate_3};
	VPL_Parameter _glBlendFuncSeparate_1 = { kUnsignedType,4,NULL,0,0,&_glBlendFuncSeparate_2};
	VPL_ExtProcedure _glBlendFuncSeparate_F = {"glBlendFuncSeparate",glBlendFuncSeparate,&_glBlendFuncSeparate_1,NULL};

	VPL_Parameter _glPointParameteriv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glSecondaryColor3uiv_1 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glSecondaryColor3iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMultiTexCoord4iv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMultiTexCoord3iv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMultiTexCoord2iv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMultiTexCoord1iv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glVertex4iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glVertex3iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glVertex2iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glTexParameteriv_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glTexGeniv_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glTexEnviv_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glTexCoord4iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glTexCoord3iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glTexCoord2iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glTexCoord1iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glSelectBuffer_2 = { kPointerType,4,"unsigned int",1,0,NULL};
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

	VPL_Parameter _glRectiv_2 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glRectiv_1 = { kPointerType,4,"int",1,1,&_glRectiv_2};
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

	VPL_Parameter _glRasterPos4iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glRasterPos3iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glRasterPos2iv_1 = { kPointerType,4,"int",1,1,NULL};
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
	VPL_Parameter _glPrioritizeTextures_2 = { kPointerType,4,"unsigned int",1,1,&_glPrioritizeTextures_3};
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

	VPL_Parameter _glPixelMapuiv_3 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glNormal3iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMaterialiv_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glLightiv_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glLightModeliv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glIndexiv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glGetTexParameteriv_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetTexParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameteriv_3};
	VPL_Parameter _glGetTexParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameteriv_2};
	VPL_ExtProcedure _glGetTexParameteriv_F = {"glGetTexParameteriv",glGetTexParameteriv,&_glGetTexParameteriv_1,NULL};

	VPL_Parameter _glGetTexParameterfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetTexParameterfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterfv_3};
	VPL_Parameter _glGetTexParameterfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterfv_2};
	VPL_ExtProcedure _glGetTexParameterfv_F = {"glGetTexParameterfv",glGetTexParameterfv,&_glGetTexParameterfv_1,NULL};

	VPL_Parameter _glGetTexLevelParameteriv_4 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGetTexGeniv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGetTexEnviv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGetPixelMapuiv_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGetPixelMapuiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetPixelMapuiv_2};
	VPL_ExtProcedure _glGetPixelMapuiv_F = {"glGetPixelMapuiv",glGetPixelMapuiv,&_glGetPixelMapuiv_1,NULL};

	VPL_Parameter _glGetPixelMapfv_2 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetPixelMapfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetPixelMapfv_2};
	VPL_ExtProcedure _glGetPixelMapfv_F = {"glGetPixelMapfv",glGetPixelMapfv,&_glGetPixelMapfv_1,NULL};

	VPL_Parameter _glGetMinmaxParameteriv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGetMaterialiv_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetMaterialiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMaterialiv_3};
	VPL_Parameter _glGetMaterialiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMaterialiv_2};
	VPL_ExtProcedure _glGetMaterialiv_F = {"glGetMaterialiv",glGetMaterialiv,&_glGetMaterialiv_1,NULL};

	VPL_Parameter _glGetMaterialfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetMaterialfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetMaterialfv_3};
	VPL_Parameter _glGetMaterialfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetMaterialfv_2};
	VPL_ExtProcedure _glGetMaterialfv_F = {"glGetMaterialfv",glGetMaterialfv,&_glGetMaterialfv_1,NULL};

	VPL_Parameter _glGetMapiv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGetLightiv_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetLightiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetLightiv_3};
	VPL_Parameter _glGetLightiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetLightiv_2};
	VPL_ExtProcedure _glGetLightiv_F = {"glGetLightiv",glGetLightiv,&_glGetLightiv_1,NULL};

	VPL_Parameter _glGetLightfv_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetLightfv_2 = { kUnsignedType,4,NULL,0,0,&_glGetLightfv_3};
	VPL_Parameter _glGetLightfv_1 = { kUnsignedType,4,NULL,0,0,&_glGetLightfv_2};
	VPL_ExtProcedure _glGetLightfv_F = {"glGetLightfv",glGetLightfv,&_glGetLightfv_1,NULL};

	VPL_Parameter _glGetIntegerv_2 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetIntegerv_1 = { kUnsignedType,4,NULL,0,0,&_glGetIntegerv_2};
	VPL_ExtProcedure _glGetIntegerv_F = {"glGetIntegerv",glGetIntegerv,&_glGetIntegerv_1,NULL};

	VPL_Parameter _glGetHistogramParameteriv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGetConvolutionParameteriv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGetColorTableParameteriv_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGenTextures_2 = { kPointerType,4,"unsigned int",1,0,NULL};
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

	VPL_Parameter _glFogiv_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glDeleteTextures_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glConvolutionParameteriv_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glColorTableParameteriv_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glColor4uiv_1 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glColor4iv_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glColor3uiv_1 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glColor3iv_1 = { kPointerType,4,"int",1,1,NULL};
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
	VPL_Parameter _glAreTexturesResident_2 = { kPointerType,4,"unsigned int",1,1,&_glAreTexturesResident_3};
	VPL_Parameter _glAreTexturesResident_1 = { kIntType,4,NULL,0,0,&_glAreTexturesResident_2};
	VPL_ExtProcedure _glAreTexturesResident_F = {"glAreTexturesResident",glAreTexturesResident,&_glAreTexturesResident_1,&_glAreTexturesResident_R};

	VPL_Parameter _glAlphaFunc_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glAlphaFunc_1 = { kUnsignedType,4,NULL,0,0,&_glAlphaFunc_2};
	VPL_ExtProcedure _glAlphaFunc_F = {"glAlphaFunc",glAlphaFunc,&_glAlphaFunc_1,NULL};

	VPL_Parameter _glAccum_2 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glAccum_1 = { kUnsignedType,4,NULL,0,0,&_glAccum_2};
	VPL_ExtProcedure _glAccum_F = {"glAccum",glAccum,&_glAccum_1,NULL};

	VPL_ExtProcedure _glEndConditionalRenderNV_F = {"glEndConditionalRenderNV",glEndConditionalRenderNV,NULL,NULL};

	VPL_Parameter _glBeginConditionalRenderNV_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBeginConditionalRenderNV_1 = { kUnsignedType,4,NULL,0,0,&_glBeginConditionalRenderNV_2};
	VPL_ExtProcedure _glBeginConditionalRenderNV_F = {"glBeginConditionalRenderNV",glBeginConditionalRenderNV,&_glBeginConditionalRenderNV_1,NULL};

	VPL_Parameter _glPointParameterivNV_2 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glPointParameterivNV_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameterivNV_2};
	VPL_ExtProcedure _glPointParameterivNV_F = {"glPointParameterivNV",glPointParameterivNV,&_glPointParameterivNV_1,NULL};

	VPL_Parameter _glPointParameteriNV_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glPointParameteriNV_1 = { kUnsignedType,4,NULL,0,0,&_glPointParameteriNV_2};
	VPL_ExtProcedure _glPointParameteriNV_F = {"glPointParameteriNV",glPointParameteriNV,&_glPointParameteriNV_1,NULL};

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

	VPL_Parameter _glGetObjectParameterivAPPLE_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetObjectParameterivAPPLE_3 = { kUnsignedType,4,NULL,0,0,&_glGetObjectParameterivAPPLE_4};
	VPL_Parameter _glGetObjectParameterivAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glGetObjectParameterivAPPLE_3};
	VPL_Parameter _glGetObjectParameterivAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glGetObjectParameterivAPPLE_2};
	VPL_ExtProcedure _glGetObjectParameterivAPPLE_F = {"glGetObjectParameterivAPPLE",glGetObjectParameterivAPPLE,&_glGetObjectParameterivAPPLE_1,NULL};

	VPL_Parameter _glObjectUnpurgeableAPPLE_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glObjectUnpurgeableAPPLE_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glObjectUnpurgeableAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glObjectUnpurgeableAPPLE_3};
	VPL_Parameter _glObjectUnpurgeableAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glObjectUnpurgeableAPPLE_2};
	VPL_ExtProcedure _glObjectUnpurgeableAPPLE_F = {"glObjectUnpurgeableAPPLE",glObjectUnpurgeableAPPLE,&_glObjectUnpurgeableAPPLE_1,&_glObjectUnpurgeableAPPLE_R};

	VPL_Parameter _glObjectPurgeableAPPLE_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glObjectPurgeableAPPLE_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glObjectPurgeableAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glObjectPurgeableAPPLE_3};
	VPL_Parameter _glObjectPurgeableAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glObjectPurgeableAPPLE_2};
	VPL_ExtProcedure _glObjectPurgeableAPPLE_F = {"glObjectPurgeableAPPLE",glObjectPurgeableAPPLE,&_glObjectPurgeableAPPLE_1,&_glObjectPurgeableAPPLE_R};

	VPL_Parameter _glFlushMappedBufferRangeAPPLE_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFlushMappedBufferRangeAPPLE_2 = { kIntType,4,NULL,0,0,&_glFlushMappedBufferRangeAPPLE_3};
	VPL_Parameter _glFlushMappedBufferRangeAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glFlushMappedBufferRangeAPPLE_2};
	VPL_ExtProcedure _glFlushMappedBufferRangeAPPLE_F = {"glFlushMappedBufferRangeAPPLE",glFlushMappedBufferRangeAPPLE,&_glFlushMappedBufferRangeAPPLE_1,NULL};

	VPL_Parameter _glBufferParameteriAPPLE_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glBufferParameteriAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glBufferParameteriAPPLE_3};
	VPL_Parameter _glBufferParameteriAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glBufferParameteriAPPLE_2};
	VPL_ExtProcedure _glBufferParameteriAPPLE_F = {"glBufferParameteriAPPLE",glBufferParameteriAPPLE,&_glBufferParameteriAPPLE_1,NULL};

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
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_5 = { kPointerType,4,"int",1,1,&_glMultiDrawRangeElementArrayAPPLE_6};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_4 = { kPointerType,4,"int",1,1,&_glMultiDrawRangeElementArrayAPPLE_5};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_3 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawRangeElementArrayAPPLE_4};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_2 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawRangeElementArrayAPPLE_3};
	VPL_Parameter _glMultiDrawRangeElementArrayAPPLE_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawRangeElementArrayAPPLE_2};
	VPL_ExtProcedure _glMultiDrawRangeElementArrayAPPLE_F = {"glMultiDrawRangeElementArrayAPPLE",glMultiDrawRangeElementArrayAPPLE,&_glMultiDrawRangeElementArrayAPPLE_1,NULL};

	VPL_Parameter _glMultiDrawElementArrayAPPLE_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawElementArrayAPPLE_3 = { kPointerType,4,"int",1,1,&_glMultiDrawElementArrayAPPLE_4};
	VPL_Parameter _glMultiDrawElementArrayAPPLE_2 = { kPointerType,4,"int",1,1,&_glMultiDrawElementArrayAPPLE_3};
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

	VPL_Parameter _glDeleteFencesAPPLE_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDeleteFencesAPPLE_1 = { kIntType,4,NULL,0,0,&_glDeleteFencesAPPLE_2};
	VPL_ExtProcedure _glDeleteFencesAPPLE_F = {"glDeleteFencesAPPLE",glDeleteFencesAPPLE,&_glDeleteFencesAPPLE_1,NULL};

	VPL_Parameter _glGenFencesAPPLE_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenFencesAPPLE_1 = { kIntType,4,NULL,0,0,&_glGenFencesAPPLE_2};
	VPL_ExtProcedure _glGenFencesAPPLE_F = {"glGenFencesAPPLE",glGenFencesAPPLE,&_glGenFencesAPPLE_1,NULL};

	VPL_Parameter _glIsVertexArrayAPPLE_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsVertexArrayAPPLE_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsVertexArrayAPPLE_F = {"glIsVertexArrayAPPLE",glIsVertexArrayAPPLE,&_glIsVertexArrayAPPLE_1,&_glIsVertexArrayAPPLE_R};

	VPL_Parameter _glGenVertexArraysAPPLE_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenVertexArraysAPPLE_1 = { kIntType,4,NULL,0,0,&_glGenVertexArraysAPPLE_2};
	VPL_ExtProcedure _glGenVertexArraysAPPLE_F = {"glGenVertexArraysAPPLE",glGenVertexArraysAPPLE,&_glGenVertexArraysAPPLE_1,NULL};

	VPL_Parameter _glDeleteVertexArraysAPPLE_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glProvokingVertexEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glProvokingVertexEXT_F = {"glProvokingVertexEXT",glProvokingVertexEXT,&_glProvokingVertexEXT_1,NULL};

	VPL_Parameter _glIsEnabledIndexedEXT_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsEnabledIndexedEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glIsEnabledIndexedEXT_1 = { kUnsignedType,4,NULL,0,0,&_glIsEnabledIndexedEXT_2};
	VPL_ExtProcedure _glIsEnabledIndexedEXT_F = {"glIsEnabledIndexedEXT",glIsEnabledIndexedEXT,&_glIsEnabledIndexedEXT_1,&_glIsEnabledIndexedEXT_R};

	VPL_Parameter _glDisableIndexedEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glDisableIndexedEXT_1 = { kUnsignedType,4,NULL,0,0,&_glDisableIndexedEXT_2};
	VPL_ExtProcedure _glDisableIndexedEXT_F = {"glDisableIndexedEXT",glDisableIndexedEXT,&_glDisableIndexedEXT_1,NULL};

	VPL_Parameter _glEnableIndexedEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glEnableIndexedEXT_1 = { kUnsignedType,4,NULL,0,0,&_glEnableIndexedEXT_2};
	VPL_ExtProcedure _glEnableIndexedEXT_F = {"glEnableIndexedEXT",glEnableIndexedEXT,&_glEnableIndexedEXT_1,NULL};

	VPL_Parameter _glColorMaskIndexedEXT_5 = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glColorMaskIndexedEXT_4 = { kUnsignedType,1,NULL,0,0,&_glColorMaskIndexedEXT_5};
	VPL_Parameter _glColorMaskIndexedEXT_3 = { kUnsignedType,1,NULL,0,0,&_glColorMaskIndexedEXT_4};
	VPL_Parameter _glColorMaskIndexedEXT_2 = { kUnsignedType,1,NULL,0,0,&_glColorMaskIndexedEXT_3};
	VPL_Parameter _glColorMaskIndexedEXT_1 = { kUnsignedType,4,NULL,0,0,&_glColorMaskIndexedEXT_2};
	VPL_ExtProcedure _glColorMaskIndexedEXT_F = {"glColorMaskIndexedEXT",glColorMaskIndexedEXT,&_glColorMaskIndexedEXT_1,NULL};

	VPL_Parameter _glGetFragDataLocationEXT_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetFragDataLocationEXT_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glGetFragDataLocationEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetFragDataLocationEXT_2};
	VPL_ExtProcedure _glGetFragDataLocationEXT_F = {"glGetFragDataLocationEXT",glGetFragDataLocationEXT,&_glGetFragDataLocationEXT_1,&_glGetFragDataLocationEXT_R};

	VPL_Parameter _glBindFragDataLocationEXT_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glBindFragDataLocationEXT_2 = { kUnsignedType,4,NULL,0,0,&_glBindFragDataLocationEXT_3};
	VPL_Parameter _glBindFragDataLocationEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBindFragDataLocationEXT_2};
	VPL_ExtProcedure _glBindFragDataLocationEXT_F = {"glBindFragDataLocationEXT",glBindFragDataLocationEXT,&_glBindFragDataLocationEXT_1,NULL};

	VPL_Parameter _glGetUniformuivEXT_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGetUniformuivEXT_2 = { kIntType,4,NULL,0,0,&_glGetUniformuivEXT_3};
	VPL_Parameter _glGetUniformuivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformuivEXT_2};
	VPL_ExtProcedure _glGetUniformuivEXT_F = {"glGetUniformuivEXT",glGetUniformuivEXT,&_glGetUniformuivEXT_1,NULL};

	VPL_Parameter _glUniform4uivEXT_3 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glUniform4uivEXT_2 = { kIntType,4,NULL,0,0,&_glUniform4uivEXT_3};
	VPL_Parameter _glUniform4uivEXT_1 = { kIntType,4,NULL,0,0,&_glUniform4uivEXT_2};
	VPL_ExtProcedure _glUniform4uivEXT_F = {"glUniform4uivEXT",glUniform4uivEXT,&_glUniform4uivEXT_1,NULL};

	VPL_Parameter _glUniform3uivEXT_3 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glUniform3uivEXT_2 = { kIntType,4,NULL,0,0,&_glUniform3uivEXT_3};
	VPL_Parameter _glUniform3uivEXT_1 = { kIntType,4,NULL,0,0,&_glUniform3uivEXT_2};
	VPL_ExtProcedure _glUniform3uivEXT_F = {"glUniform3uivEXT",glUniform3uivEXT,&_glUniform3uivEXT_1,NULL};

	VPL_Parameter _glUniform2uivEXT_3 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glUniform2uivEXT_2 = { kIntType,4,NULL,0,0,&_glUniform2uivEXT_3};
	VPL_Parameter _glUniform2uivEXT_1 = { kIntType,4,NULL,0,0,&_glUniform2uivEXT_2};
	VPL_ExtProcedure _glUniform2uivEXT_F = {"glUniform2uivEXT",glUniform2uivEXT,&_glUniform2uivEXT_1,NULL};

	VPL_Parameter _glUniform1uivEXT_3 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glUniform1uivEXT_2 = { kIntType,4,NULL,0,0,&_glUniform1uivEXT_3};
	VPL_Parameter _glUniform1uivEXT_1 = { kIntType,4,NULL,0,0,&_glUniform1uivEXT_2};
	VPL_ExtProcedure _glUniform1uivEXT_F = {"glUniform1uivEXT",glUniform1uivEXT,&_glUniform1uivEXT_1,NULL};

	VPL_Parameter _glUniform4uiEXT_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform4uiEXT_4 = { kUnsignedType,4,NULL,0,0,&_glUniform4uiEXT_5};
	VPL_Parameter _glUniform4uiEXT_3 = { kUnsignedType,4,NULL,0,0,&_glUniform4uiEXT_4};
	VPL_Parameter _glUniform4uiEXT_2 = { kUnsignedType,4,NULL,0,0,&_glUniform4uiEXT_3};
	VPL_Parameter _glUniform4uiEXT_1 = { kIntType,4,NULL,0,0,&_glUniform4uiEXT_2};
	VPL_ExtProcedure _glUniform4uiEXT_F = {"glUniform4uiEXT",glUniform4uiEXT,&_glUniform4uiEXT_1,NULL};

	VPL_Parameter _glUniform3uiEXT_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform3uiEXT_3 = { kUnsignedType,4,NULL,0,0,&_glUniform3uiEXT_4};
	VPL_Parameter _glUniform3uiEXT_2 = { kUnsignedType,4,NULL,0,0,&_glUniform3uiEXT_3};
	VPL_Parameter _glUniform3uiEXT_1 = { kIntType,4,NULL,0,0,&_glUniform3uiEXT_2};
	VPL_ExtProcedure _glUniform3uiEXT_F = {"glUniform3uiEXT",glUniform3uiEXT,&_glUniform3uiEXT_1,NULL};

	VPL_Parameter _glUniform2uiEXT_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform2uiEXT_2 = { kUnsignedType,4,NULL,0,0,&_glUniform2uiEXT_3};
	VPL_Parameter _glUniform2uiEXT_1 = { kIntType,4,NULL,0,0,&_glUniform2uiEXT_2};
	VPL_ExtProcedure _glUniform2uiEXT_F = {"glUniform2uiEXT",glUniform2uiEXT,&_glUniform2uiEXT_1,NULL};

	VPL_Parameter _glUniform1uiEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniform1uiEXT_1 = { kIntType,4,NULL,0,0,&_glUniform1uiEXT_2};
	VPL_ExtProcedure _glUniform1uiEXT_F = {"glUniform1uiEXT",glUniform1uiEXT,&_glUniform1uiEXT_1,NULL};

	VPL_Parameter _glGetVertexAttribIuivEXT_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGetVertexAttribIuivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribIuivEXT_3};
	VPL_Parameter _glGetVertexAttribIuivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribIuivEXT_2};
	VPL_ExtProcedure _glGetVertexAttribIuivEXT_F = {"glGetVertexAttribIuivEXT",glGetVertexAttribIuivEXT,&_glGetVertexAttribIuivEXT_1,NULL};

	VPL_Parameter _glGetVertexAttribIivEXT_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetVertexAttribIivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribIivEXT_3};
	VPL_Parameter _glGetVertexAttribIivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetVertexAttribIivEXT_2};
	VPL_ExtProcedure _glGetVertexAttribIivEXT_F = {"glGetVertexAttribIivEXT",glGetVertexAttribIivEXT,&_glGetVertexAttribIivEXT_1,NULL};

	VPL_Parameter _glVertexAttribIPointerEXT_5 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _glVertexAttribIPointerEXT_4 = { kIntType,4,NULL,0,0,&_glVertexAttribIPointerEXT_5};
	VPL_Parameter _glVertexAttribIPointerEXT_3 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribIPointerEXT_4};
	VPL_Parameter _glVertexAttribIPointerEXT_2 = { kIntType,4,NULL,0,0,&_glVertexAttribIPointerEXT_3};
	VPL_Parameter _glVertexAttribIPointerEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribIPointerEXT_2};
	VPL_ExtProcedure _glVertexAttribIPointerEXT_F = {"glVertexAttribIPointerEXT",glVertexAttribIPointerEXT,&_glVertexAttribIPointerEXT_1,NULL};

	VPL_Parameter _glVertexAttribI4usvEXT_2 = { kPointerType,2,"unsigned short",1,1,NULL};
	VPL_Parameter _glVertexAttribI4usvEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4usvEXT_2};
	VPL_ExtProcedure _glVertexAttribI4usvEXT_F = {"glVertexAttribI4usvEXT",glVertexAttribI4usvEXT,&_glVertexAttribI4usvEXT_1,NULL};

	VPL_Parameter _glVertexAttribI4ubvEXT_2 = { kPointerType,1,"unsigned char",1,1,NULL};
	VPL_Parameter _glVertexAttribI4ubvEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4ubvEXT_2};
	VPL_ExtProcedure _glVertexAttribI4ubvEXT_F = {"glVertexAttribI4ubvEXT",glVertexAttribI4ubvEXT,&_glVertexAttribI4ubvEXT_1,NULL};

	VPL_Parameter _glVertexAttribI4svEXT_2 = { kPointerType,2,"short",1,1,NULL};
	VPL_Parameter _glVertexAttribI4svEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4svEXT_2};
	VPL_ExtProcedure _glVertexAttribI4svEXT_F = {"glVertexAttribI4svEXT",glVertexAttribI4svEXT,&_glVertexAttribI4svEXT_1,NULL};

	VPL_Parameter _glVertexAttribI4bvEXT_2 = { kPointerType,1,"signed char",1,1,NULL};
	VPL_Parameter _glVertexAttribI4bvEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4bvEXT_2};
	VPL_ExtProcedure _glVertexAttribI4bvEXT_F = {"glVertexAttribI4bvEXT",glVertexAttribI4bvEXT,&_glVertexAttribI4bvEXT_1,NULL};

	VPL_Parameter _glVertexAttribI4uivEXT_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glVertexAttribI4uivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4uivEXT_2};
	VPL_ExtProcedure _glVertexAttribI4uivEXT_F = {"glVertexAttribI4uivEXT",glVertexAttribI4uivEXT,&_glVertexAttribI4uivEXT_1,NULL};

	VPL_Parameter _glVertexAttribI3uivEXT_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glVertexAttribI3uivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI3uivEXT_2};
	VPL_ExtProcedure _glVertexAttribI3uivEXT_F = {"glVertexAttribI3uivEXT",glVertexAttribI3uivEXT,&_glVertexAttribI3uivEXT_1,NULL};

	VPL_Parameter _glVertexAttribI2uivEXT_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glVertexAttribI2uivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI2uivEXT_2};
	VPL_ExtProcedure _glVertexAttribI2uivEXT_F = {"glVertexAttribI2uivEXT",glVertexAttribI2uivEXT,&_glVertexAttribI2uivEXT_1,NULL};

	VPL_Parameter _glVertexAttribI1uivEXT_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glVertexAttribI1uivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI1uivEXT_2};
	VPL_ExtProcedure _glVertexAttribI1uivEXT_F = {"glVertexAttribI1uivEXT",glVertexAttribI1uivEXT,&_glVertexAttribI1uivEXT_1,NULL};

	VPL_Parameter _glVertexAttribI4ivEXT_2 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glVertexAttribI4ivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4ivEXT_2};
	VPL_ExtProcedure _glVertexAttribI4ivEXT_F = {"glVertexAttribI4ivEXT",glVertexAttribI4ivEXT,&_glVertexAttribI4ivEXT_1,NULL};

	VPL_Parameter _glVertexAttribI3ivEXT_2 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glVertexAttribI3ivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI3ivEXT_2};
	VPL_ExtProcedure _glVertexAttribI3ivEXT_F = {"glVertexAttribI3ivEXT",glVertexAttribI3ivEXT,&_glVertexAttribI3ivEXT_1,NULL};

	VPL_Parameter _glVertexAttribI2ivEXT_2 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glVertexAttribI2ivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI2ivEXT_2};
	VPL_ExtProcedure _glVertexAttribI2ivEXT_F = {"glVertexAttribI2ivEXT",glVertexAttribI2ivEXT,&_glVertexAttribI2ivEXT_1,NULL};

	VPL_Parameter _glVertexAttribI1ivEXT_2 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glVertexAttribI1ivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI1ivEXT_2};
	VPL_ExtProcedure _glVertexAttribI1ivEXT_F = {"glVertexAttribI1ivEXT",glVertexAttribI1ivEXT,&_glVertexAttribI1ivEXT_1,NULL};

	VPL_Parameter _glVertexAttribI4uiEXT_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribI4uiEXT_4 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4uiEXT_5};
	VPL_Parameter _glVertexAttribI4uiEXT_3 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4uiEXT_4};
	VPL_Parameter _glVertexAttribI4uiEXT_2 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4uiEXT_3};
	VPL_Parameter _glVertexAttribI4uiEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4uiEXT_2};
	VPL_ExtProcedure _glVertexAttribI4uiEXT_F = {"glVertexAttribI4uiEXT",glVertexAttribI4uiEXT,&_glVertexAttribI4uiEXT_1,NULL};

	VPL_Parameter _glVertexAttribI3uiEXT_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribI3uiEXT_3 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI3uiEXT_4};
	VPL_Parameter _glVertexAttribI3uiEXT_2 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI3uiEXT_3};
	VPL_Parameter _glVertexAttribI3uiEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI3uiEXT_2};
	VPL_ExtProcedure _glVertexAttribI3uiEXT_F = {"glVertexAttribI3uiEXT",glVertexAttribI3uiEXT,&_glVertexAttribI3uiEXT_1,NULL};

	VPL_Parameter _glVertexAttribI2uiEXT_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribI2uiEXT_2 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI2uiEXT_3};
	VPL_Parameter _glVertexAttribI2uiEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI2uiEXT_2};
	VPL_ExtProcedure _glVertexAttribI2uiEXT_F = {"glVertexAttribI2uiEXT",glVertexAttribI2uiEXT,&_glVertexAttribI2uiEXT_1,NULL};

	VPL_Parameter _glVertexAttribI1uiEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribI1uiEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI1uiEXT_2};
	VPL_ExtProcedure _glVertexAttribI1uiEXT_F = {"glVertexAttribI1uiEXT",glVertexAttribI1uiEXT,&_glVertexAttribI1uiEXT_1,NULL};

	VPL_Parameter _glVertexAttribI4iEXT_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribI4iEXT_4 = { kIntType,4,NULL,0,0,&_glVertexAttribI4iEXT_5};
	VPL_Parameter _glVertexAttribI4iEXT_3 = { kIntType,4,NULL,0,0,&_glVertexAttribI4iEXT_4};
	VPL_Parameter _glVertexAttribI4iEXT_2 = { kIntType,4,NULL,0,0,&_glVertexAttribI4iEXT_3};
	VPL_Parameter _glVertexAttribI4iEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI4iEXT_2};
	VPL_ExtProcedure _glVertexAttribI4iEXT_F = {"glVertexAttribI4iEXT",glVertexAttribI4iEXT,&_glVertexAttribI4iEXT_1,NULL};

	VPL_Parameter _glVertexAttribI3iEXT_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribI3iEXT_3 = { kIntType,4,NULL,0,0,&_glVertexAttribI3iEXT_4};
	VPL_Parameter _glVertexAttribI3iEXT_2 = { kIntType,4,NULL,0,0,&_glVertexAttribI3iEXT_3};
	VPL_Parameter _glVertexAttribI3iEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI3iEXT_2};
	VPL_ExtProcedure _glVertexAttribI3iEXT_F = {"glVertexAttribI3iEXT",glVertexAttribI3iEXT,&_glVertexAttribI3iEXT_1,NULL};

	VPL_Parameter _glVertexAttribI2iEXT_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribI2iEXT_2 = { kIntType,4,NULL,0,0,&_glVertexAttribI2iEXT_3};
	VPL_Parameter _glVertexAttribI2iEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI2iEXT_2};
	VPL_ExtProcedure _glVertexAttribI2iEXT_F = {"glVertexAttribI2iEXT",glVertexAttribI2iEXT,&_glVertexAttribI2iEXT_1,NULL};

	VPL_Parameter _glVertexAttribI1iEXT_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribI1iEXT_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribI1iEXT_2};
	VPL_ExtProcedure _glVertexAttribI1iEXT_F = {"glVertexAttribI1iEXT",glVertexAttribI1iEXT,&_glVertexAttribI1iEXT_1,NULL};

	VPL_Parameter _glGetTexParameterIuivEXT_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGetTexParameterIuivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterIuivEXT_3};
	VPL_Parameter _glGetTexParameterIuivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterIuivEXT_2};
	VPL_ExtProcedure _glGetTexParameterIuivEXT_F = {"glGetTexParameterIuivEXT",glGetTexParameterIuivEXT,&_glGetTexParameterIuivEXT_1,NULL};

	VPL_Parameter _glGetTexParameterIivEXT_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetTexParameterIivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterIivEXT_3};
	VPL_Parameter _glGetTexParameterIivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetTexParameterIivEXT_2};
	VPL_ExtProcedure _glGetTexParameterIivEXT_F = {"glGetTexParameterIivEXT",glGetTexParameterIivEXT,&_glGetTexParameterIivEXT_1,NULL};

	VPL_Parameter _glTexParameterIuivEXT_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glTexParameterIuivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glTexParameterIuivEXT_3};
	VPL_Parameter _glTexParameterIuivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glTexParameterIuivEXT_2};
	VPL_ExtProcedure _glTexParameterIuivEXT_F = {"glTexParameterIuivEXT",glTexParameterIuivEXT,&_glTexParameterIuivEXT_1,NULL};

	VPL_Parameter _glTexParameterIivEXT_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glTexParameterIivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glTexParameterIivEXT_3};
	VPL_Parameter _glTexParameterIivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glTexParameterIivEXT_2};
	VPL_ExtProcedure _glTexParameterIivEXT_F = {"glTexParameterIivEXT",glTexParameterIivEXT,&_glTexParameterIivEXT_1,NULL};

	VPL_Parameter _glClearColorIuiEXT_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glClearColorIuiEXT_3 = { kUnsignedType,4,NULL,0,0,&_glClearColorIuiEXT_4};
	VPL_Parameter _glClearColorIuiEXT_2 = { kUnsignedType,4,NULL,0,0,&_glClearColorIuiEXT_3};
	VPL_Parameter _glClearColorIuiEXT_1 = { kUnsignedType,4,NULL,0,0,&_glClearColorIuiEXT_2};
	VPL_ExtProcedure _glClearColorIuiEXT_F = {"glClearColorIuiEXT",glClearColorIuiEXT,&_glClearColorIuiEXT_1,NULL};

	VPL_Parameter _glClearColorIiEXT_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glClearColorIiEXT_3 = { kIntType,4,NULL,0,0,&_glClearColorIiEXT_4};
	VPL_Parameter _glClearColorIiEXT_2 = { kIntType,4,NULL,0,0,&_glClearColorIiEXT_3};
	VPL_Parameter _glClearColorIiEXT_1 = { kIntType,4,NULL,0,0,&_glClearColorIiEXT_2};
	VPL_ExtProcedure _glClearColorIiEXT_F = {"glClearColorIiEXT",glClearColorIiEXT,&_glClearColorIiEXT_1,NULL};

	VPL_Parameter _glGetUniformOffsetEXT_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformOffsetEXT_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformOffsetEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformOffsetEXT_2};
	VPL_ExtProcedure _glGetUniformOffsetEXT_F = {"glGetUniformOffsetEXT",glGetUniformOffsetEXT,&_glGetUniformOffsetEXT_1,&_glGetUniformOffsetEXT_R};

	VPL_Parameter _glGetUniformBufferSizeEXT_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformBufferSizeEXT_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformBufferSizeEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformBufferSizeEXT_2};
	VPL_ExtProcedure _glGetUniformBufferSizeEXT_F = {"glGetUniformBufferSizeEXT",glGetUniformBufferSizeEXT,&_glGetUniformBufferSizeEXT_1,&_glGetUniformBufferSizeEXT_R};

	VPL_Parameter _glUniformBufferEXT_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniformBufferEXT_2 = { kIntType,4,NULL,0,0,&_glUniformBufferEXT_3};
	VPL_Parameter _glUniformBufferEXT_1 = { kUnsignedType,4,NULL,0,0,&_glUniformBufferEXT_2};
	VPL_ExtProcedure _glUniformBufferEXT_F = {"glUniformBufferEXT",glUniformBufferEXT,&_glUniformBufferEXT_1,NULL};

	VPL_Parameter _glGetBooleanIndexedvEXT_3 = { kPointerType,1,"unsigned char",1,0,NULL};
	VPL_Parameter _glGetBooleanIndexedvEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetBooleanIndexedvEXT_3};
	VPL_Parameter _glGetBooleanIndexedvEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetBooleanIndexedvEXT_2};
	VPL_ExtProcedure _glGetBooleanIndexedvEXT_F = {"glGetBooleanIndexedvEXT",glGetBooleanIndexedvEXT,&_glGetBooleanIndexedvEXT_1,NULL};

	VPL_Parameter _glGetIntegerIndexedvEXT_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetIntegerIndexedvEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetIntegerIndexedvEXT_3};
	VPL_Parameter _glGetIntegerIndexedvEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetIntegerIndexedvEXT_2};
	VPL_ExtProcedure _glGetIntegerIndexedvEXT_F = {"glGetIntegerIndexedvEXT",glGetIntegerIndexedvEXT,&_glGetIntegerIndexedvEXT_1,NULL};

	VPL_Parameter _glGetTransformFeedbackVaryingEXT_7 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetTransformFeedbackVaryingEXT_6 = { kPointerType,4,"unsigned int",1,0,&_glGetTransformFeedbackVaryingEXT_7};
	VPL_Parameter _glGetTransformFeedbackVaryingEXT_5 = { kPointerType,4,"int",1,0,&_glGetTransformFeedbackVaryingEXT_6};
	VPL_Parameter _glGetTransformFeedbackVaryingEXT_4 = { kPointerType,4,"int",1,0,&_glGetTransformFeedbackVaryingEXT_5};
	VPL_Parameter _glGetTransformFeedbackVaryingEXT_3 = { kIntType,4,NULL,0,0,&_glGetTransformFeedbackVaryingEXT_4};
	VPL_Parameter _glGetTransformFeedbackVaryingEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetTransformFeedbackVaryingEXT_3};
	VPL_Parameter _glGetTransformFeedbackVaryingEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetTransformFeedbackVaryingEXT_2};
	VPL_ExtProcedure _glGetTransformFeedbackVaryingEXT_F = {"glGetTransformFeedbackVaryingEXT",glGetTransformFeedbackVaryingEXT,&_glGetTransformFeedbackVaryingEXT_1,NULL};

	VPL_Parameter _glTransformFeedbackVaryingsEXT_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glTransformFeedbackVaryingsEXT_3 = { kPointerType,1,"char",2,0,&_glTransformFeedbackVaryingsEXT_4};
	VPL_Parameter _glTransformFeedbackVaryingsEXT_2 = { kIntType,4,NULL,0,0,&_glTransformFeedbackVaryingsEXT_3};
	VPL_Parameter _glTransformFeedbackVaryingsEXT_1 = { kUnsignedType,4,NULL,0,0,&_glTransformFeedbackVaryingsEXT_2};
	VPL_ExtProcedure _glTransformFeedbackVaryingsEXT_F = {"glTransformFeedbackVaryingsEXT",glTransformFeedbackVaryingsEXT,&_glTransformFeedbackVaryingsEXT_1,NULL};

	VPL_ExtProcedure _glEndTransformFeedbackEXT_F = {"glEndTransformFeedbackEXT",glEndTransformFeedbackEXT,NULL,NULL};

	VPL_Parameter _glBeginTransformFeedbackEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glBeginTransformFeedbackEXT_F = {"glBeginTransformFeedbackEXT",glBeginTransformFeedbackEXT,&_glBeginTransformFeedbackEXT_1,NULL};

	VPL_Parameter _glBindBufferBaseEXT_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindBufferBaseEXT_2 = { kUnsignedType,4,NULL,0,0,&_glBindBufferBaseEXT_3};
	VPL_Parameter _glBindBufferBaseEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBindBufferBaseEXT_2};
	VPL_ExtProcedure _glBindBufferBaseEXT_F = {"glBindBufferBaseEXT",glBindBufferBaseEXT,&_glBindBufferBaseEXT_1,NULL};

	VPL_Parameter _glBindBufferOffsetEXT_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindBufferOffsetEXT_3 = { kUnsignedType,4,NULL,0,0,&_glBindBufferOffsetEXT_4};
	VPL_Parameter _glBindBufferOffsetEXT_2 = { kUnsignedType,4,NULL,0,0,&_glBindBufferOffsetEXT_3};
	VPL_Parameter _glBindBufferOffsetEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBindBufferOffsetEXT_2};
	VPL_ExtProcedure _glBindBufferOffsetEXT_F = {"glBindBufferOffsetEXT",glBindBufferOffsetEXT,&_glBindBufferOffsetEXT_1,NULL};

	VPL_Parameter _glBindBufferRangeEXT_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindBufferRangeEXT_4 = { kIntType,4,NULL,0,0,&_glBindBufferRangeEXT_5};
	VPL_Parameter _glBindBufferRangeEXT_3 = { kUnsignedType,4,NULL,0,0,&_glBindBufferRangeEXT_4};
	VPL_Parameter _glBindBufferRangeEXT_2 = { kUnsignedType,4,NULL,0,0,&_glBindBufferRangeEXT_3};
	VPL_Parameter _glBindBufferRangeEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBindBufferRangeEXT_2};
	VPL_ExtProcedure _glBindBufferRangeEXT_F = {"glBindBufferRangeEXT",glBindBufferRangeEXT,&_glBindBufferRangeEXT_1,NULL};

	VPL_Parameter _glFramebufferTextureLayer_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTextureLayer_4 = { kIntType,4,NULL,0,0,&_glFramebufferTextureLayer_5};
	VPL_Parameter _glFramebufferTextureLayer_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureLayer_4};
	VPL_Parameter _glFramebufferTextureLayer_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureLayer_3};
	VPL_Parameter _glFramebufferTextureLayer_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureLayer_2};
	VPL_ExtProcedure _glFramebufferTextureLayer_F = {"glFramebufferTextureLayer",glFramebufferTextureLayer,&_glFramebufferTextureLayer_1,NULL};

	VPL_Parameter _glRenderbufferStorageMultisample_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRenderbufferStorageMultisample_4 = { kIntType,4,NULL,0,0,&_glRenderbufferStorageMultisample_5};
	VPL_Parameter _glRenderbufferStorageMultisample_3 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorageMultisample_4};
	VPL_Parameter _glRenderbufferStorageMultisample_2 = { kIntType,4,NULL,0,0,&_glRenderbufferStorageMultisample_3};
	VPL_Parameter _glRenderbufferStorageMultisample_1 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorageMultisample_2};
	VPL_ExtProcedure _glRenderbufferStorageMultisample_F = {"glRenderbufferStorageMultisample",glRenderbufferStorageMultisample,&_glRenderbufferStorageMultisample_1,NULL};

	VPL_Parameter _glBlitFramebuffer_10 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlitFramebuffer_9 = { kUnsignedType,4,NULL,0,0,&_glBlitFramebuffer_10};
	VPL_Parameter _glBlitFramebuffer_8 = { kIntType,4,NULL,0,0,&_glBlitFramebuffer_9};
	VPL_Parameter _glBlitFramebuffer_7 = { kIntType,4,NULL,0,0,&_glBlitFramebuffer_8};
	VPL_Parameter _glBlitFramebuffer_6 = { kIntType,4,NULL,0,0,&_glBlitFramebuffer_7};
	VPL_Parameter _glBlitFramebuffer_5 = { kIntType,4,NULL,0,0,&_glBlitFramebuffer_6};
	VPL_Parameter _glBlitFramebuffer_4 = { kIntType,4,NULL,0,0,&_glBlitFramebuffer_5};
	VPL_Parameter _glBlitFramebuffer_3 = { kIntType,4,NULL,0,0,&_glBlitFramebuffer_4};
	VPL_Parameter _glBlitFramebuffer_2 = { kIntType,4,NULL,0,0,&_glBlitFramebuffer_3};
	VPL_Parameter _glBlitFramebuffer_1 = { kIntType,4,NULL,0,0,&_glBlitFramebuffer_2};
	VPL_ExtProcedure _glBlitFramebuffer_F = {"glBlitFramebuffer",glBlitFramebuffer,&_glBlitFramebuffer_1,NULL};

	VPL_Parameter _glGenerateMipmap_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glGenerateMipmap_F = {"glGenerateMipmap",glGenerateMipmap,&_glGenerateMipmap_1,NULL};

	VPL_Parameter _glGetFramebufferAttachmentParameteriv_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetFramebufferAttachmentParameteriv_3 = { kUnsignedType,4,NULL,0,0,&_glGetFramebufferAttachmentParameteriv_4};
	VPL_Parameter _glGetFramebufferAttachmentParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetFramebufferAttachmentParameteriv_3};
	VPL_Parameter _glGetFramebufferAttachmentParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetFramebufferAttachmentParameteriv_2};
	VPL_ExtProcedure _glGetFramebufferAttachmentParameteriv_F = {"glGetFramebufferAttachmentParameteriv",glGetFramebufferAttachmentParameteriv,&_glGetFramebufferAttachmentParameteriv_1,NULL};

	VPL_Parameter _glFramebufferRenderbuffer_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferRenderbuffer_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferRenderbuffer_4};
	VPL_Parameter _glFramebufferRenderbuffer_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferRenderbuffer_3};
	VPL_Parameter _glFramebufferRenderbuffer_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferRenderbuffer_2};
	VPL_ExtProcedure _glFramebufferRenderbuffer_F = {"glFramebufferRenderbuffer",glFramebufferRenderbuffer,&_glFramebufferRenderbuffer_1,NULL};

	VPL_Parameter _glFramebufferTexture3D_6 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTexture3D_5 = { kIntType,4,NULL,0,0,&_glFramebufferTexture3D_6};
	VPL_Parameter _glFramebufferTexture3D_4 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture3D_5};
	VPL_Parameter _glFramebufferTexture3D_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture3D_4};
	VPL_Parameter _glFramebufferTexture3D_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture3D_3};
	VPL_Parameter _glFramebufferTexture3D_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture3D_2};
	VPL_ExtProcedure _glFramebufferTexture3D_F = {"glFramebufferTexture3D",glFramebufferTexture3D,&_glFramebufferTexture3D_1,NULL};

	VPL_Parameter _glFramebufferTexture2D_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTexture2D_4 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture2D_5};
	VPL_Parameter _glFramebufferTexture2D_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture2D_4};
	VPL_Parameter _glFramebufferTexture2D_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture2D_3};
	VPL_Parameter _glFramebufferTexture2D_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture2D_2};
	VPL_ExtProcedure _glFramebufferTexture2D_F = {"glFramebufferTexture2D",glFramebufferTexture2D,&_glFramebufferTexture2D_1,NULL};

	VPL_Parameter _glFramebufferTexture1D_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTexture1D_4 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture1D_5};
	VPL_Parameter _glFramebufferTexture1D_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture1D_4};
	VPL_Parameter _glFramebufferTexture1D_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture1D_3};
	VPL_Parameter _glFramebufferTexture1D_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTexture1D_2};
	VPL_ExtProcedure _glFramebufferTexture1D_F = {"glFramebufferTexture1D",glFramebufferTexture1D,&_glFramebufferTexture1D_1,NULL};

	VPL_Parameter _glCheckFramebufferStatus_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glCheckFramebufferStatus_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glCheckFramebufferStatus_F = {"glCheckFramebufferStatus",glCheckFramebufferStatus,&_glCheckFramebufferStatus_1,&_glCheckFramebufferStatus_R};

	VPL_Parameter _glGenFramebuffers_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenFramebuffers_1 = { kIntType,4,NULL,0,0,&_glGenFramebuffers_2};
	VPL_ExtProcedure _glGenFramebuffers_F = {"glGenFramebuffers",glGenFramebuffers,&_glGenFramebuffers_1,NULL};

	VPL_Parameter _glDeleteFramebuffers_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDeleteFramebuffers_1 = { kIntType,4,NULL,0,0,&_glDeleteFramebuffers_2};
	VPL_ExtProcedure _glDeleteFramebuffers_F = {"glDeleteFramebuffers",glDeleteFramebuffers,&_glDeleteFramebuffers_1,NULL};

	VPL_Parameter _glBindFramebuffer_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindFramebuffer_1 = { kUnsignedType,4,NULL,0,0,&_glBindFramebuffer_2};
	VPL_ExtProcedure _glBindFramebuffer_F = {"glBindFramebuffer",glBindFramebuffer,&_glBindFramebuffer_1,NULL};

	VPL_Parameter _glIsFramebuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsFramebuffer_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsFramebuffer_F = {"glIsFramebuffer",glIsFramebuffer,&_glIsFramebuffer_1,&_glIsFramebuffer_R};

	VPL_Parameter _glGetRenderbufferParameteriv_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetRenderbufferParameteriv_2 = { kUnsignedType,4,NULL,0,0,&_glGetRenderbufferParameteriv_3};
	VPL_Parameter _glGetRenderbufferParameteriv_1 = { kUnsignedType,4,NULL,0,0,&_glGetRenderbufferParameteriv_2};
	VPL_ExtProcedure _glGetRenderbufferParameteriv_F = {"glGetRenderbufferParameteriv",glGetRenderbufferParameteriv,&_glGetRenderbufferParameteriv_1,NULL};

	VPL_Parameter _glRenderbufferStorage_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRenderbufferStorage_3 = { kIntType,4,NULL,0,0,&_glRenderbufferStorage_4};
	VPL_Parameter _glRenderbufferStorage_2 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorage_3};
	VPL_Parameter _glRenderbufferStorage_1 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorage_2};
	VPL_ExtProcedure _glRenderbufferStorage_F = {"glRenderbufferStorage",glRenderbufferStorage,&_glRenderbufferStorage_1,NULL};

	VPL_Parameter _glGenRenderbuffers_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenRenderbuffers_1 = { kIntType,4,NULL,0,0,&_glGenRenderbuffers_2};
	VPL_ExtProcedure _glGenRenderbuffers_F = {"glGenRenderbuffers",glGenRenderbuffers,&_glGenRenderbuffers_1,NULL};

	VPL_Parameter _glDeleteRenderbuffers_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDeleteRenderbuffers_1 = { kIntType,4,NULL,0,0,&_glDeleteRenderbuffers_2};
	VPL_ExtProcedure _glDeleteRenderbuffers_F = {"glDeleteRenderbuffers",glDeleteRenderbuffers,&_glDeleteRenderbuffers_1,NULL};

	VPL_Parameter _glBindRenderbuffer_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindRenderbuffer_1 = { kUnsignedType,4,NULL,0,0,&_glBindRenderbuffer_2};
	VPL_ExtProcedure _glBindRenderbuffer_F = {"glBindRenderbuffer",glBindRenderbuffer,&_glBindRenderbuffer_1,NULL};

	VPL_Parameter _glIsRenderbuffer_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsRenderbuffer_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsRenderbuffer_F = {"glIsRenderbuffer",glIsRenderbuffer,&_glIsRenderbuffer_1,&_glIsRenderbuffer_R};

	VPL_Parameter _glFramebufferTextureLayerEXT_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTextureLayerEXT_4 = { kIntType,4,NULL,0,0,&_glFramebufferTextureLayerEXT_5};
	VPL_Parameter _glFramebufferTextureLayerEXT_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureLayerEXT_4};
	VPL_Parameter _glFramebufferTextureLayerEXT_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureLayerEXT_3};
	VPL_Parameter _glFramebufferTextureLayerEXT_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureLayerEXT_2};
	VPL_ExtProcedure _glFramebufferTextureLayerEXT_F = {"glFramebufferTextureLayerEXT",glFramebufferTextureLayerEXT,&_glFramebufferTextureLayerEXT_1,NULL};

	VPL_Parameter _glFramebufferTextureFaceEXT_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTextureFaceEXT_4 = { kIntType,4,NULL,0,0,&_glFramebufferTextureFaceEXT_5};
	VPL_Parameter _glFramebufferTextureFaceEXT_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureFaceEXT_4};
	VPL_Parameter _glFramebufferTextureFaceEXT_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureFaceEXT_3};
	VPL_Parameter _glFramebufferTextureFaceEXT_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureFaceEXT_2};
	VPL_ExtProcedure _glFramebufferTextureFaceEXT_F = {"glFramebufferTextureFaceEXT",glFramebufferTextureFaceEXT,&_glFramebufferTextureFaceEXT_1,NULL};

	VPL_Parameter _glFramebufferTextureEXT_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glFramebufferTextureEXT_3 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureEXT_4};
	VPL_Parameter _glFramebufferTextureEXT_2 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureEXT_3};
	VPL_Parameter _glFramebufferTextureEXT_1 = { kUnsignedType,4,NULL,0,0,&_glFramebufferTextureEXT_2};
	VPL_ExtProcedure _glFramebufferTextureEXT_F = {"glFramebufferTextureEXT",glFramebufferTextureEXT,&_glFramebufferTextureEXT_1,NULL};

	VPL_Parameter _glProgramParameteriEXT_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glProgramParameteriEXT_2 = { kUnsignedType,4,NULL,0,0,&_glProgramParameteriEXT_3};
	VPL_Parameter _glProgramParameteriEXT_1 = { kUnsignedType,4,NULL,0,0,&_glProgramParameteriEXT_2};
	VPL_ExtProcedure _glProgramParameteriEXT_F = {"glProgramParameteriEXT",glProgramParameteriEXT,&_glProgramParameteriEXT_1,NULL};

	VPL_Parameter _glRenderbufferStorageMultisampleEXT_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRenderbufferStorageMultisampleEXT_4 = { kIntType,4,NULL,0,0,&_glRenderbufferStorageMultisampleEXT_5};
	VPL_Parameter _glRenderbufferStorageMultisampleEXT_3 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorageMultisampleEXT_4};
	VPL_Parameter _glRenderbufferStorageMultisampleEXT_2 = { kIntType,4,NULL,0,0,&_glRenderbufferStorageMultisampleEXT_3};
	VPL_Parameter _glRenderbufferStorageMultisampleEXT_1 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorageMultisampleEXT_2};
	VPL_ExtProcedure _glRenderbufferStorageMultisampleEXT_F = {"glRenderbufferStorageMultisampleEXT",glRenderbufferStorageMultisampleEXT,&_glRenderbufferStorageMultisampleEXT_1,NULL};

	VPL_Parameter _glBlitFramebufferEXT_10 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlitFramebufferEXT_9 = { kUnsignedType,4,NULL,0,0,&_glBlitFramebufferEXT_10};
	VPL_Parameter _glBlitFramebufferEXT_8 = { kIntType,4,NULL,0,0,&_glBlitFramebufferEXT_9};
	VPL_Parameter _glBlitFramebufferEXT_7 = { kIntType,4,NULL,0,0,&_glBlitFramebufferEXT_8};
	VPL_Parameter _glBlitFramebufferEXT_6 = { kIntType,4,NULL,0,0,&_glBlitFramebufferEXT_7};
	VPL_Parameter _glBlitFramebufferEXT_5 = { kIntType,4,NULL,0,0,&_glBlitFramebufferEXT_6};
	VPL_Parameter _glBlitFramebufferEXT_4 = { kIntType,4,NULL,0,0,&_glBlitFramebufferEXT_5};
	VPL_Parameter _glBlitFramebufferEXT_3 = { kIntType,4,NULL,0,0,&_glBlitFramebufferEXT_4};
	VPL_Parameter _glBlitFramebufferEXT_2 = { kIntType,4,NULL,0,0,&_glBlitFramebufferEXT_3};
	VPL_Parameter _glBlitFramebufferEXT_1 = { kIntType,4,NULL,0,0,&_glBlitFramebufferEXT_2};
	VPL_ExtProcedure _glBlitFramebufferEXT_F = {"glBlitFramebufferEXT",glBlitFramebufferEXT,&_glBlitFramebufferEXT_1,NULL};

	VPL_Parameter _glGenerateMipmapEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glGenerateMipmapEXT_F = {"glGenerateMipmapEXT",glGenerateMipmapEXT,&_glGenerateMipmapEXT_1,NULL};

	VPL_Parameter _glGetFramebufferAttachmentParameterivEXT_4 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGenFramebuffersEXT_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenFramebuffersEXT_1 = { kIntType,4,NULL,0,0,&_glGenFramebuffersEXT_2};
	VPL_ExtProcedure _glGenFramebuffersEXT_F = {"glGenFramebuffersEXT",glGenFramebuffersEXT,&_glGenFramebuffersEXT_1,NULL};

	VPL_Parameter _glDeleteFramebuffersEXT_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDeleteFramebuffersEXT_1 = { kIntType,4,NULL,0,0,&_glDeleteFramebuffersEXT_2};
	VPL_ExtProcedure _glDeleteFramebuffersEXT_F = {"glDeleteFramebuffersEXT",glDeleteFramebuffersEXT,&_glDeleteFramebuffersEXT_1,NULL};

	VPL_Parameter _glBindFramebufferEXT_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindFramebufferEXT_1 = { kUnsignedType,4,NULL,0,0,&_glBindFramebufferEXT_2};
	VPL_ExtProcedure _glBindFramebufferEXT_F = {"glBindFramebufferEXT",glBindFramebufferEXT,&_glBindFramebufferEXT_1,NULL};

	VPL_Parameter _glIsFramebufferEXT_R = { kUnsignedType,1,NULL,0,0,NULL};
	VPL_Parameter _glIsFramebufferEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glIsFramebufferEXT_F = {"glIsFramebufferEXT",glIsFramebufferEXT,&_glIsFramebufferEXT_1,&_glIsFramebufferEXT_R};

	VPL_Parameter _glGetRenderbufferParameterivEXT_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetRenderbufferParameterivEXT_2 = { kUnsignedType,4,NULL,0,0,&_glGetRenderbufferParameterivEXT_3};
	VPL_Parameter _glGetRenderbufferParameterivEXT_1 = { kUnsignedType,4,NULL,0,0,&_glGetRenderbufferParameterivEXT_2};
	VPL_ExtProcedure _glGetRenderbufferParameterivEXT_F = {"glGetRenderbufferParameterivEXT",glGetRenderbufferParameterivEXT,&_glGetRenderbufferParameterivEXT_1,NULL};

	VPL_Parameter _glRenderbufferStorageEXT_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glRenderbufferStorageEXT_3 = { kIntType,4,NULL,0,0,&_glRenderbufferStorageEXT_4};
	VPL_Parameter _glRenderbufferStorageEXT_2 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorageEXT_3};
	VPL_Parameter _glRenderbufferStorageEXT_1 = { kUnsignedType,4,NULL,0,0,&_glRenderbufferStorageEXT_2};
	VPL_ExtProcedure _glRenderbufferStorageEXT_F = {"glRenderbufferStorageEXT",glRenderbufferStorageEXT,&_glRenderbufferStorageEXT_1,NULL};

	VPL_Parameter _glGenRenderbuffersEXT_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenRenderbuffersEXT_1 = { kIntType,4,NULL,0,0,&_glGenRenderbuffersEXT_2};
	VPL_ExtProcedure _glGenRenderbuffersEXT_F = {"glGenRenderbuffersEXT",glGenRenderbuffersEXT,&_glGenRenderbuffersEXT_1,NULL};

	VPL_Parameter _glDeleteRenderbuffersEXT_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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
	VPL_Parameter _glMultiDrawElementsEXT_2 = { kPointerType,4,"int",1,1,&_glMultiDrawElementsEXT_3};
	VPL_Parameter _glMultiDrawElementsEXT_1 = { kUnsignedType,4,NULL,0,0,&_glMultiDrawElementsEXT_2};
	VPL_ExtProcedure _glMultiDrawElementsEXT_F = {"glMultiDrawElementsEXT",glMultiDrawElementsEXT,&_glMultiDrawElementsEXT_1,NULL};

	VPL_Parameter _glMultiDrawArraysEXT_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glMultiDrawArraysEXT_3 = { kPointerType,4,"int",1,1,&_glMultiDrawArraysEXT_4};
	VPL_Parameter _glMultiDrawArraysEXT_2 = { kPointerType,4,"int",1,1,&_glMultiDrawArraysEXT_3};
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

	VPL_Parameter _glSecondaryColor3uivEXT_1 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glSecondaryColor3ivEXT_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glBlendEquationEXT_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _glBlendEquationEXT_F = {"glBlendEquationEXT",glBlendEquationEXT,&_glBlendEquationEXT_1,NULL};

	VPL_Parameter _glBlendColorEXT_4 = { kFloatType,4,NULL,0,0,NULL};
	VPL_Parameter _glBlendColorEXT_3 = { kFloatType,4,NULL,0,0,&_glBlendColorEXT_4};
	VPL_Parameter _glBlendColorEXT_2 = { kFloatType,4,NULL,0,0,&_glBlendColorEXT_3};
	VPL_Parameter _glBlendColorEXT_1 = { kFloatType,4,NULL,0,0,&_glBlendColorEXT_2};
	VPL_ExtProcedure _glBlendColorEXT_F = {"glBlendColorEXT",glBlendColorEXT,&_glBlendColorEXT_1,NULL};

	VPL_Parameter _glUniformBlockBinding_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glUniformBlockBinding_2 = { kUnsignedType,4,NULL,0,0,&_glUniformBlockBinding_3};
	VPL_Parameter _glUniformBlockBinding_1 = { kUnsignedType,4,NULL,0,0,&_glUniformBlockBinding_2};
	VPL_ExtProcedure _glUniformBlockBinding_F = {"glUniformBlockBinding",glUniformBlockBinding,&_glUniformBlockBinding_1,NULL};

	VPL_Parameter _glGetIntegeri_v_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetIntegeri_v_2 = { kUnsignedType,4,NULL,0,0,&_glGetIntegeri_v_3};
	VPL_Parameter _glGetIntegeri_v_1 = { kUnsignedType,4,NULL,0,0,&_glGetIntegeri_v_2};
	VPL_ExtProcedure _glGetIntegeri_v_F = {"glGetIntegeri_v",glGetIntegeri_v,&_glGetIntegeri_v_1,NULL};

	VPL_Parameter _glBindBufferBase_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindBufferBase_2 = { kUnsignedType,4,NULL,0,0,&_glBindBufferBase_3};
	VPL_Parameter _glBindBufferBase_1 = { kUnsignedType,4,NULL,0,0,&_glBindBufferBase_2};
	VPL_ExtProcedure _glBindBufferBase_F = {"glBindBufferBase",glBindBufferBase,&_glBindBufferBase_1,NULL};

	VPL_Parameter _glBindBufferRange_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glBindBufferRange_4 = { kIntType,4,NULL,0,0,&_glBindBufferRange_5};
	VPL_Parameter _glBindBufferRange_3 = { kUnsignedType,4,NULL,0,0,&_glBindBufferRange_4};
	VPL_Parameter _glBindBufferRange_2 = { kUnsignedType,4,NULL,0,0,&_glBindBufferRange_3};
	VPL_Parameter _glBindBufferRange_1 = { kUnsignedType,4,NULL,0,0,&_glBindBufferRange_2};
	VPL_ExtProcedure _glBindBufferRange_F = {"glBindBufferRange",glBindBufferRange,&_glBindBufferRange_1,NULL};

	VPL_Parameter _glGetActiveUniformBlockName_5 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetActiveUniformBlockName_4 = { kPointerType,4,"int",1,0,&_glGetActiveUniformBlockName_5};
	VPL_Parameter _glGetActiveUniformBlockName_3 = { kIntType,4,NULL,0,0,&_glGetActiveUniformBlockName_4};
	VPL_Parameter _glGetActiveUniformBlockName_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformBlockName_3};
	VPL_Parameter _glGetActiveUniformBlockName_1 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformBlockName_2};
	VPL_ExtProcedure _glGetActiveUniformBlockName_F = {"glGetActiveUniformBlockName",glGetActiveUniformBlockName,&_glGetActiveUniformBlockName_1,NULL};

	VPL_Parameter _glGetActiveUniformBlockiv_4 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetActiveUniformBlockiv_3 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformBlockiv_4};
	VPL_Parameter _glGetActiveUniformBlockiv_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformBlockiv_3};
	VPL_Parameter _glGetActiveUniformBlockiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformBlockiv_2};
	VPL_ExtProcedure _glGetActiveUniformBlockiv_F = {"glGetActiveUniformBlockiv",glGetActiveUniformBlockiv,&_glGetActiveUniformBlockiv_1,NULL};

	VPL_Parameter _glGetUniformBlockIndex_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformBlockIndex_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glGetUniformBlockIndex_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformBlockIndex_2};
	VPL_ExtProcedure _glGetUniformBlockIndex_F = {"glGetUniformBlockIndex",glGetUniformBlockIndex,&_glGetUniformBlockIndex_1,&_glGetUniformBlockIndex_R};

	VPL_Parameter _glGetActiveUniformName_5 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetActiveUniformName_4 = { kPointerType,4,"int",1,0,&_glGetActiveUniformName_5};
	VPL_Parameter _glGetActiveUniformName_3 = { kIntType,4,NULL,0,0,&_glGetActiveUniformName_4};
	VPL_Parameter _glGetActiveUniformName_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformName_3};
	VPL_Parameter _glGetActiveUniformName_1 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformName_2};
	VPL_ExtProcedure _glGetActiveUniformName_F = {"glGetActiveUniformName",glGetActiveUniformName,&_glGetActiveUniformName_1,NULL};

	VPL_Parameter _glGetActiveUniformsiv_5 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetActiveUniformsiv_4 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformsiv_5};
	VPL_Parameter _glGetActiveUniformsiv_3 = { kPointerType,4,"unsigned int",1,1,&_glGetActiveUniformsiv_4};
	VPL_Parameter _glGetActiveUniformsiv_2 = { kIntType,4,NULL,0,0,&_glGetActiveUniformsiv_3};
	VPL_Parameter _glGetActiveUniformsiv_1 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformsiv_2};
	VPL_ExtProcedure _glGetActiveUniformsiv_F = {"glGetActiveUniformsiv",glGetActiveUniformsiv,&_glGetActiveUniformsiv_1,NULL};

	VPL_Parameter _glGetUniformIndices_4 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGetUniformIndices_3 = { kPointerType,1,"char",2,0,&_glGetUniformIndices_4};
	VPL_Parameter _glGetUniformIndices_2 = { kIntType,4,NULL,0,0,&_glGetUniformIndices_3};
	VPL_Parameter _glGetUniformIndices_1 = { kUnsignedType,4,NULL,0,0,&_glGetUniformIndices_2};
	VPL_ExtProcedure _glGetUniformIndices_F = {"glGetUniformIndices",glGetUniformIndices,&_glGetUniformIndices_1,NULL};

	VPL_Parameter _glVertexAttribDivisorARB_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glVertexAttribDivisorARB_1 = { kUnsignedType,4,NULL,0,0,&_glVertexAttribDivisorARB_2};
	VPL_ExtProcedure _glVertexAttribDivisorARB_F = {"glVertexAttribDivisorARB",glVertexAttribDivisorARB,&_glVertexAttribDivisorARB_1,NULL};

	VPL_Parameter _glDrawElementsInstancedARB_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glDrawElementsInstancedARB_4 = { kPointerType,0,"void",1,1,&_glDrawElementsInstancedARB_5};
	VPL_Parameter _glDrawElementsInstancedARB_3 = { kUnsignedType,4,NULL,0,0,&_glDrawElementsInstancedARB_4};
	VPL_Parameter _glDrawElementsInstancedARB_2 = { kIntType,4,NULL,0,0,&_glDrawElementsInstancedARB_3};
	VPL_Parameter _glDrawElementsInstancedARB_1 = { kUnsignedType,4,NULL,0,0,&_glDrawElementsInstancedARB_2};
	VPL_ExtProcedure _glDrawElementsInstancedARB_F = {"glDrawElementsInstancedARB",glDrawElementsInstancedARB,&_glDrawElementsInstancedARB_1,NULL};

	VPL_Parameter _glDrawArraysInstancedARB_4 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glDrawArraysInstancedARB_3 = { kIntType,4,NULL,0,0,&_glDrawArraysInstancedARB_4};
	VPL_Parameter _glDrawArraysInstancedARB_2 = { kIntType,4,NULL,0,0,&_glDrawArraysInstancedARB_3};
	VPL_Parameter _glDrawArraysInstancedARB_1 = { kUnsignedType,4,NULL,0,0,&_glDrawArraysInstancedARB_2};
	VPL_ExtProcedure _glDrawArraysInstancedARB_F = {"glDrawArraysInstancedARB",glDrawArraysInstancedARB,&_glDrawArraysInstancedARB_1,NULL};

	VPL_Parameter _glClampColorARB_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _glClampColorARB_1 = { kUnsignedType,4,NULL,0,0,&_glClampColorARB_2};
	VPL_ExtProcedure _glClampColorARB_F = {"glClampColorARB",glClampColorARB,&_glClampColorARB_1,NULL};

	VPL_Parameter _glDrawBuffersARB_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDrawBuffersARB_1 = { kIntType,4,NULL,0,0,&_glDrawBuffersARB_2};
	VPL_ExtProcedure _glDrawBuffersARB_F = {"glDrawBuffersARB",glDrawBuffersARB,&_glDrawBuffersARB_1,NULL};

	VPL_Parameter _glGetBufferPointervARB_3 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetBufferPointervARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetBufferPointervARB_3};
	VPL_Parameter _glGetBufferPointervARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetBufferPointervARB_2};
	VPL_ExtProcedure _glGetBufferPointervARB_F = {"glGetBufferPointervARB",glGetBufferPointervARB,&_glGetBufferPointervARB_1,NULL};

	VPL_Parameter _glGetBufferParameterivARB_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glGenBuffersARB_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenBuffersARB_1 = { kIntType,4,NULL,0,0,&_glGenBuffersARB_2};
	VPL_ExtProcedure _glGenBuffersARB_F = {"glGenBuffersARB",glGenBuffersARB,&_glGenBuffersARB_1,NULL};

	VPL_Parameter _glDeleteBuffersARB_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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
	VPL_Parameter _glGetActiveAttribARB_6 = { kPointerType,4,"unsigned int",1,0,&_glGetActiveAttribARB_7};
	VPL_Parameter _glGetActiveAttribARB_5 = { kPointerType,4,"int",1,0,&_glGetActiveAttribARB_6};
	VPL_Parameter _glGetActiveAttribARB_4 = { kPointerType,4,"int",1,0,&_glGetActiveAttribARB_5};
	VPL_Parameter _glGetActiveAttribARB_3 = { kIntType,4,NULL,0,0,&_glGetActiveAttribARB_4};
	VPL_Parameter _glGetActiveAttribARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveAttribARB_3};
	VPL_Parameter _glGetActiveAttribARB_1 = { kPointerType,0,"void",1,0,&_glGetActiveAttribARB_2};
	VPL_ExtProcedure _glGetActiveAttribARB_F = {"glGetActiveAttribARB",glGetActiveAttribARB,&_glGetActiveAttribARB_1,NULL};

	VPL_Parameter _glBindAttribLocationARB_3 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glBindAttribLocationARB_2 = { kUnsignedType,4,NULL,0,0,&_glBindAttribLocationARB_3};
	VPL_Parameter _glBindAttribLocationARB_1 = { kPointerType,0,"void",1,0,&_glBindAttribLocationARB_2};
	VPL_ExtProcedure _glBindAttribLocationARB_F = {"glBindAttribLocationARB",glBindAttribLocationARB,&_glBindAttribLocationARB_1,NULL};

	VPL_Parameter _glGetShaderSourceARB_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetShaderSourceARB_3 = { kPointerType,4,"int",1,0,&_glGetShaderSourceARB_4};
	VPL_Parameter _glGetShaderSourceARB_2 = { kIntType,4,NULL,0,0,&_glGetShaderSourceARB_3};
	VPL_Parameter _glGetShaderSourceARB_1 = { kPointerType,0,"void",1,0,&_glGetShaderSourceARB_2};
	VPL_ExtProcedure _glGetShaderSourceARB_F = {"glGetShaderSourceARB",glGetShaderSourceARB,&_glGetShaderSourceARB_1,NULL};

	VPL_Parameter _glGetUniformivARB_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetUniformivARB_2 = { kIntType,4,NULL,0,0,&_glGetUniformivARB_3};
	VPL_Parameter _glGetUniformivARB_1 = { kPointerType,0,"void",1,0,&_glGetUniformivARB_2};
	VPL_ExtProcedure _glGetUniformivARB_F = {"glGetUniformivARB",glGetUniformivARB,&_glGetUniformivARB_1,NULL};

	VPL_Parameter _glGetUniformfvARB_3 = { kPointerType,4,"float",1,0,NULL};
	VPL_Parameter _glGetUniformfvARB_2 = { kIntType,4,NULL,0,0,&_glGetUniformfvARB_3};
	VPL_Parameter _glGetUniformfvARB_1 = { kPointerType,0,"void",1,0,&_glGetUniformfvARB_2};
	VPL_ExtProcedure _glGetUniformfvARB_F = {"glGetUniformfvARB",glGetUniformfvARB,&_glGetUniformfvARB_1,NULL};

	VPL_Parameter _glGetActiveUniformARB_7 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetActiveUniformARB_6 = { kPointerType,4,"unsigned int",1,0,&_glGetActiveUniformARB_7};
	VPL_Parameter _glGetActiveUniformARB_5 = { kPointerType,4,"int",1,0,&_glGetActiveUniformARB_6};
	VPL_Parameter _glGetActiveUniformARB_4 = { kPointerType,4,"int",1,0,&_glGetActiveUniformARB_5};
	VPL_Parameter _glGetActiveUniformARB_3 = { kIntType,4,NULL,0,0,&_glGetActiveUniformARB_4};
	VPL_Parameter _glGetActiveUniformARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetActiveUniformARB_3};
	VPL_Parameter _glGetActiveUniformARB_1 = { kPointerType,0,"void",1,0,&_glGetActiveUniformARB_2};
	VPL_ExtProcedure _glGetActiveUniformARB_F = {"glGetActiveUniformARB",glGetActiveUniformARB,&_glGetActiveUniformARB_1,NULL};

	VPL_Parameter _glGetUniformLocationARB_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _glGetUniformLocationARB_2 = { kPointerType,1,"char",1,1,NULL};
	VPL_Parameter _glGetUniformLocationARB_1 = { kPointerType,0,"void",1,0,&_glGetUniformLocationARB_2};
	VPL_ExtProcedure _glGetUniformLocationARB_F = {"glGetUniformLocationARB",glGetUniformLocationARB,&_glGetUniformLocationARB_1,&_glGetUniformLocationARB_R};

	VPL_Parameter _glGetAttachedObjectsARB_4 = { kPointerType,0,"void",2,0,NULL};
	VPL_Parameter _glGetAttachedObjectsARB_3 = { kPointerType,4,"int",1,0,&_glGetAttachedObjectsARB_4};
	VPL_Parameter _glGetAttachedObjectsARB_2 = { kIntType,4,NULL,0,0,&_glGetAttachedObjectsARB_3};
	VPL_Parameter _glGetAttachedObjectsARB_1 = { kPointerType,0,"void",1,0,&_glGetAttachedObjectsARB_2};
	VPL_ExtProcedure _glGetAttachedObjectsARB_F = {"glGetAttachedObjectsARB",glGetAttachedObjectsARB,&_glGetAttachedObjectsARB_1,NULL};

	VPL_Parameter _glGetInfoLogARB_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _glGetInfoLogARB_3 = { kPointerType,4,"int",1,0,&_glGetInfoLogARB_4};
	VPL_Parameter _glGetInfoLogARB_2 = { kIntType,4,NULL,0,0,&_glGetInfoLogARB_3};
	VPL_Parameter _glGetInfoLogARB_1 = { kPointerType,0,"void",1,0,&_glGetInfoLogARB_2};
	VPL_ExtProcedure _glGetInfoLogARB_F = {"glGetInfoLogARB",glGetInfoLogARB,&_glGetInfoLogARB_1,NULL};

	VPL_Parameter _glGetObjectParameterivARB_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glUniform4ivARB_3 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glUniform4ivARB_2 = { kIntType,4,NULL,0,0,&_glUniform4ivARB_3};
	VPL_Parameter _glUniform4ivARB_1 = { kIntType,4,NULL,0,0,&_glUniform4ivARB_2};
	VPL_ExtProcedure _glUniform4ivARB_F = {"glUniform4ivARB",glUniform4ivARB,&_glUniform4ivARB_1,NULL};

	VPL_Parameter _glUniform3ivARB_3 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glUniform3ivARB_2 = { kIntType,4,NULL,0,0,&_glUniform3ivARB_3};
	VPL_Parameter _glUniform3ivARB_1 = { kIntType,4,NULL,0,0,&_glUniform3ivARB_2};
	VPL_ExtProcedure _glUniform3ivARB_F = {"glUniform3ivARB",glUniform3ivARB,&_glUniform3ivARB_1,NULL};

	VPL_Parameter _glUniform2ivARB_3 = { kPointerType,4,"int",1,1,NULL};
	VPL_Parameter _glUniform2ivARB_2 = { kIntType,4,NULL,0,0,&_glUniform2ivARB_3};
	VPL_Parameter _glUniform2ivARB_1 = { kIntType,4,NULL,0,0,&_glUniform2ivARB_2};
	VPL_ExtProcedure _glUniform2ivARB_F = {"glUniform2ivARB",glUniform2ivARB,&_glUniform2ivARB_1,NULL};

	VPL_Parameter _glUniform1ivARB_3 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glShaderSourceARB_4 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glGetVertexAttribivARB_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glVertexAttrib4uivARB_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glVertexAttrib4ivARB_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glVertexAttrib4NuivARB_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glVertexAttrib4NivARB_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glGetProgramivARB_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glProgramLocalParameters4fvEXT_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glProgramLocalParameters4fvEXT_3 = { kIntType,4,NULL,0,0,&_glProgramLocalParameters4fvEXT_4};
	VPL_Parameter _glProgramLocalParameters4fvEXT_2 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameters4fvEXT_3};
	VPL_Parameter _glProgramLocalParameters4fvEXT_1 = { kUnsignedType,4,NULL,0,0,&_glProgramLocalParameters4fvEXT_2};
	VPL_ExtProcedure _glProgramLocalParameters4fvEXT_F = {"glProgramLocalParameters4fvEXT",glProgramLocalParameters4fvEXT,&_glProgramLocalParameters4fvEXT_1,NULL};

	VPL_Parameter _glProgramEnvParameters4fvEXT_4 = { kPointerType,4,"float",1,1,NULL};
	VPL_Parameter _glProgramEnvParameters4fvEXT_3 = { kIntType,4,NULL,0,0,&_glProgramEnvParameters4fvEXT_4};
	VPL_Parameter _glProgramEnvParameters4fvEXT_2 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameters4fvEXT_3};
	VPL_Parameter _glProgramEnvParameters4fvEXT_1 = { kUnsignedType,4,NULL,0,0,&_glProgramEnvParameters4fvEXT_2};
	VPL_ExtProcedure _glProgramEnvParameters4fvEXT_F = {"glProgramEnvParameters4fvEXT",glProgramEnvParameters4fvEXT,&_glProgramEnvParameters4fvEXT_1,NULL};

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

	VPL_Parameter _glGenProgramsARB_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenProgramsARB_1 = { kIntType,4,NULL,0,0,&_glGenProgramsARB_2};
	VPL_ExtProcedure _glGenProgramsARB_F = {"glGenProgramsARB",glGenProgramsARB,&_glGenProgramsARB_1,NULL};

	VPL_Parameter _glDeleteProgramsARB_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glGetQueryObjectuivARB_3 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGetQueryObjectuivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectuivARB_3};
	VPL_Parameter _glGetQueryObjectuivARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectuivARB_2};
	VPL_ExtProcedure _glGetQueryObjectuivARB_F = {"glGetQueryObjectuivARB",glGetQueryObjectuivARB,&_glGetQueryObjectuivARB_1,NULL};

	VPL_Parameter _glGetQueryObjectivARB_3 = { kPointerType,4,"int",1,0,NULL};
	VPL_Parameter _glGetQueryObjectivARB_2 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectivARB_3};
	VPL_Parameter _glGetQueryObjectivARB_1 = { kUnsignedType,4,NULL,0,0,&_glGetQueryObjectivARB_2};
	VPL_ExtProcedure _glGetQueryObjectivARB_F = {"glGetQueryObjectivARB",glGetQueryObjectivARB,&_glGetQueryObjectivARB_1,NULL};

	VPL_Parameter _glGetQueryivARB_3 = { kPointerType,4,"int",1,0,NULL};
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

	VPL_Parameter _glDeleteQueriesARB_2 = { kPointerType,4,"unsigned int",1,1,NULL};
	VPL_Parameter _glDeleteQueriesARB_1 = { kIntType,4,NULL,0,0,&_glDeleteQueriesARB_2};
	VPL_ExtProcedure _glDeleteQueriesARB_F = {"glDeleteQueriesARB",glDeleteQueriesARB,&_glDeleteQueriesARB_1,NULL};

	VPL_Parameter _glGenQueriesARB_2 = { kPointerType,4,"unsigned int",1,0,NULL};
	VPL_Parameter _glGenQueriesARB_1 = { kIntType,4,NULL,0,0,&_glGenQueriesARB_2};
	VPL_ExtProcedure _glGenQueriesARB_F = {"glGenQueriesARB",glGenQueriesARB,&_glGenQueriesARB_1,NULL};

	VPL_Parameter _glWindowPos3svARB_1 = { kPointerType,2,"short",1,1,NULL};
	VPL_ExtProcedure _glWindowPos3svARB_F = {"glWindowPos3svARB",glWindowPos3svARB,&_glWindowPos3svARB_1,NULL};

	VPL_Parameter _glWindowPos3sARB_3 = { kIntType,2,NULL,0,0,NULL};
	VPL_Parameter _glWindowPos3sARB_2 = { kIntType,2,NULL,0,0,&_glWindowPos3sARB_3};
	VPL_Parameter _glWindowPos3sARB_1 = { kIntType,2,NULL,0,0,&_glWindowPos3sARB_2};
	VPL_ExtProcedure _glWindowPos3sARB_F = {"glWindowPos3sARB",glWindowPos3sARB,&_glWindowPos3sARB_1,NULL};

	VPL_Parameter _glWindowPos3ivARB_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glWindowPos2ivARB_1 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glWeightuivARB_2 = { kPointerType,4,"unsigned int",1,1,NULL};
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

	VPL_Parameter _glWeightivARB_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMultiTexCoord4ivARB_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMultiTexCoord3ivARB_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMultiTexCoord2ivARB_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _glMultiTexCoord1ivARB_2 = { kPointerType,4,"int",1,1,NULL};
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

	VPL_Parameter _NSInterfaceStyleForKey_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSInterfaceStyleForKey_2 = { kPointerType,0,"object_objc",1,0,NULL};
	VPL_Parameter _NSInterfaceStyleForKey_1 = { kPointerType,4,"objc_object",1,0,&_NSInterfaceStyleForKey_2};
	VPL_ExtProcedure _NSInterfaceStyleForKey_F = {"NSInterfaceStyleForKey",NSInterfaceStyleForKey,&_NSInterfaceStyleForKey_1,&_NSInterfaceStyleForKey_R};

	VPL_Parameter _NSGetFileTypes_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSGetFileTypes_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSGetFileTypes_F = {"NSGetFileTypes",NSGetFileTypes,&_NSGetFileTypes_1,&_NSGetFileTypes_R};

	VPL_Parameter _NSGetFileType_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSGetFileType_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSGetFileType_F = {"NSGetFileType",NSGetFileType,&_NSGetFileType_1,&_NSGetFileType_R};

	VPL_Parameter _NSCreateFileContentsPboardType_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSCreateFileContentsPboardType_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSCreateFileContentsPboardType_F = {"NSCreateFileContentsPboardType",NSCreateFileContentsPboardType,&_NSCreateFileContentsPboardType_1,&_NSCreateFileContentsPboardType_R};

	VPL_Parameter _NSCreateFilenamePboardType_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSCreateFilenamePboardType_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSCreateFilenamePboardType_F = {"NSCreateFilenamePboardType",NSCreateFilenamePboardType,&_NSCreateFilenamePboardType_1,&_NSCreateFilenamePboardType_R};

	VPL_Parameter _NSReleaseAlertPanel_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSReleaseAlertPanel_F = {"NSReleaseAlertPanel",NSReleaseAlertPanel,&_NSReleaseAlertPanel_1,NULL};

	VPL_Parameter _NSGetCriticalAlertPanel_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSGetCriticalAlertPanel_6 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSGetCriticalAlertPanel_5 = { kPointerType,4,"objc_object",1,0,&_NSGetCriticalAlertPanel_6};
	VPL_Parameter _NSGetCriticalAlertPanel_4 = { kPointerType,4,"objc_object",1,0,&_NSGetCriticalAlertPanel_5};
	VPL_Parameter _NSGetCriticalAlertPanel_3 = { kPointerType,4,"objc_object",1,0,&_NSGetCriticalAlertPanel_4};
	VPL_Parameter _NSGetCriticalAlertPanel_2 = { kPointerType,4,"objc_object",1,0,&_NSGetCriticalAlertPanel_3};
	VPL_Parameter _NSGetCriticalAlertPanel_1 = { kPointerType,4,"objc_object",1,0,&_NSGetCriticalAlertPanel_2};
	VPL_ExtProcedure _NSGetCriticalAlertPanel_F = {"NSGetCriticalAlertPanel",NSGetCriticalAlertPanel,&_NSGetCriticalAlertPanel_1,&_NSGetCriticalAlertPanel_R};

	VPL_Parameter _NSGetInformationalAlertPanel_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSGetInformationalAlertPanel_6 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSGetInformationalAlertPanel_5 = { kPointerType,4,"objc_object",1,0,&_NSGetInformationalAlertPanel_6};
	VPL_Parameter _NSGetInformationalAlertPanel_4 = { kPointerType,4,"objc_object",1,0,&_NSGetInformationalAlertPanel_5};
	VPL_Parameter _NSGetInformationalAlertPanel_3 = { kPointerType,4,"objc_object",1,0,&_NSGetInformationalAlertPanel_4};
	VPL_Parameter _NSGetInformationalAlertPanel_2 = { kPointerType,4,"objc_object",1,0,&_NSGetInformationalAlertPanel_3};
	VPL_Parameter _NSGetInformationalAlertPanel_1 = { kPointerType,4,"objc_object",1,0,&_NSGetInformationalAlertPanel_2};
	VPL_ExtProcedure _NSGetInformationalAlertPanel_F = {"NSGetInformationalAlertPanel",NSGetInformationalAlertPanel,&_NSGetInformationalAlertPanel_1,&_NSGetInformationalAlertPanel_R};

	VPL_Parameter _NSGetAlertPanel_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSGetAlertPanel_6 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSGetAlertPanel_5 = { kPointerType,4,"objc_object",1,0,&_NSGetAlertPanel_6};
	VPL_Parameter _NSGetAlertPanel_4 = { kPointerType,4,"objc_object",1,0,&_NSGetAlertPanel_5};
	VPL_Parameter _NSGetAlertPanel_3 = { kPointerType,4,"objc_object",1,0,&_NSGetAlertPanel_4};
	VPL_Parameter _NSGetAlertPanel_2 = { kPointerType,4,"objc_object",1,0,&_NSGetAlertPanel_3};
	VPL_Parameter _NSGetAlertPanel_1 = { kPointerType,4,"objc_object",1,0,&_NSGetAlertPanel_2};
	VPL_ExtProcedure _NSGetAlertPanel_F = {"NSGetAlertPanel",NSGetAlertPanel,&_NSGetAlertPanel_1,&_NSGetAlertPanel_R};

	VPL_Parameter _NSBeginCriticalAlertSheet_11 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSBeginCriticalAlertSheet_10 = { kPointerType,4,"objc_object",1,0,&_NSBeginCriticalAlertSheet_11};
	VPL_Parameter _NSBeginCriticalAlertSheet_9 = { kPointerType,0,"void",1,0,&_NSBeginCriticalAlertSheet_10};
	VPL_Parameter _NSBeginCriticalAlertSheet_8 = { kPointerType,0,"objc_selector",1,0,&_NSBeginCriticalAlertSheet_9};
	VPL_Parameter _NSBeginCriticalAlertSheet_7 = { kPointerType,0,"objc_selector",1,0,&_NSBeginCriticalAlertSheet_8};
	VPL_Parameter _NSBeginCriticalAlertSheet_6 = { kPointerType,4,"objc_object",1,0,&_NSBeginCriticalAlertSheet_7};
	VPL_Parameter _NSBeginCriticalAlertSheet_5 = { kPointerType,4,"objc_object",1,0,&_NSBeginCriticalAlertSheet_6};
	VPL_Parameter _NSBeginCriticalAlertSheet_4 = { kPointerType,4,"objc_object",1,0,&_NSBeginCriticalAlertSheet_5};
	VPL_Parameter _NSBeginCriticalAlertSheet_3 = { kPointerType,4,"objc_object",1,0,&_NSBeginCriticalAlertSheet_4};
	VPL_Parameter _NSBeginCriticalAlertSheet_2 = { kPointerType,4,"objc_object",1,0,&_NSBeginCriticalAlertSheet_3};
	VPL_Parameter _NSBeginCriticalAlertSheet_1 = { kPointerType,4,"objc_object",1,0,&_NSBeginCriticalAlertSheet_2};
	VPL_ExtProcedure _NSBeginCriticalAlertSheet_F = {"NSBeginCriticalAlertSheet",NSBeginCriticalAlertSheet,&_NSBeginCriticalAlertSheet_1,NULL};

	VPL_Parameter _NSBeginInformationalAlertSheet_11 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSBeginInformationalAlertSheet_10 = { kPointerType,4,"objc_object",1,0,&_NSBeginInformationalAlertSheet_11};
	VPL_Parameter _NSBeginInformationalAlertSheet_9 = { kPointerType,0,"void",1,0,&_NSBeginInformationalAlertSheet_10};
	VPL_Parameter _NSBeginInformationalAlertSheet_8 = { kPointerType,0,"objc_selector",1,0,&_NSBeginInformationalAlertSheet_9};
	VPL_Parameter _NSBeginInformationalAlertSheet_7 = { kPointerType,0,"objc_selector",1,0,&_NSBeginInformationalAlertSheet_8};
	VPL_Parameter _NSBeginInformationalAlertSheet_6 = { kPointerType,4,"objc_object",1,0,&_NSBeginInformationalAlertSheet_7};
	VPL_Parameter _NSBeginInformationalAlertSheet_5 = { kPointerType,4,"objc_object",1,0,&_NSBeginInformationalAlertSheet_6};
	VPL_Parameter _NSBeginInformationalAlertSheet_4 = { kPointerType,4,"objc_object",1,0,&_NSBeginInformationalAlertSheet_5};
	VPL_Parameter _NSBeginInformationalAlertSheet_3 = { kPointerType,4,"objc_object",1,0,&_NSBeginInformationalAlertSheet_4};
	VPL_Parameter _NSBeginInformationalAlertSheet_2 = { kPointerType,4,"objc_object",1,0,&_NSBeginInformationalAlertSheet_3};
	VPL_Parameter _NSBeginInformationalAlertSheet_1 = { kPointerType,4,"objc_object",1,0,&_NSBeginInformationalAlertSheet_2};
	VPL_ExtProcedure _NSBeginInformationalAlertSheet_F = {"NSBeginInformationalAlertSheet",NSBeginInformationalAlertSheet,&_NSBeginInformationalAlertSheet_1,NULL};

	VPL_Parameter _NSBeginAlertSheet_11 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSBeginAlertSheet_10 = { kPointerType,4,"objc_object",1,0,&_NSBeginAlertSheet_11};
	VPL_Parameter _NSBeginAlertSheet_9 = { kPointerType,0,"void",1,0,&_NSBeginAlertSheet_10};
	VPL_Parameter _NSBeginAlertSheet_8 = { kPointerType,0,"objc_selector",1,0,&_NSBeginAlertSheet_9};
	VPL_Parameter _NSBeginAlertSheet_7 = { kPointerType,0,"objc_selector",1,0,&_NSBeginAlertSheet_8};
	VPL_Parameter _NSBeginAlertSheet_6 = { kPointerType,4,"objc_object",1,0,&_NSBeginAlertSheet_7};
	VPL_Parameter _NSBeginAlertSheet_5 = { kPointerType,4,"objc_object",1,0,&_NSBeginAlertSheet_6};
	VPL_Parameter _NSBeginAlertSheet_4 = { kPointerType,4,"objc_object",1,0,&_NSBeginAlertSheet_5};
	VPL_Parameter _NSBeginAlertSheet_3 = { kPointerType,4,"objc_object",1,0,&_NSBeginAlertSheet_4};
	VPL_Parameter _NSBeginAlertSheet_2 = { kPointerType,4,"objc_object",1,0,&_NSBeginAlertSheet_3};
	VPL_Parameter _NSBeginAlertSheet_1 = { kPointerType,4,"objc_object",1,0,&_NSBeginAlertSheet_2};
	VPL_ExtProcedure _NSBeginAlertSheet_F = {"NSBeginAlertSheet",NSBeginAlertSheet,&_NSBeginAlertSheet_1,NULL};

	VPL_Parameter _NSRunCriticalAlertPanelRelativeToWindow_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRunCriticalAlertPanelRelativeToWindow_7 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSRunCriticalAlertPanelRelativeToWindow_6 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanelRelativeToWindow_7};
	VPL_Parameter _NSRunCriticalAlertPanelRelativeToWindow_5 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanelRelativeToWindow_6};
	VPL_Parameter _NSRunCriticalAlertPanelRelativeToWindow_4 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanelRelativeToWindow_5};
	VPL_Parameter _NSRunCriticalAlertPanelRelativeToWindow_3 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanelRelativeToWindow_4};
	VPL_Parameter _NSRunCriticalAlertPanelRelativeToWindow_2 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanelRelativeToWindow_3};
	VPL_Parameter _NSRunCriticalAlertPanelRelativeToWindow_1 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanelRelativeToWindow_2};
	VPL_ExtProcedure _NSRunCriticalAlertPanelRelativeToWindow_F = {"NSRunCriticalAlertPanelRelativeToWindow",NSRunCriticalAlertPanelRelativeToWindow,&_NSRunCriticalAlertPanelRelativeToWindow_1,&_NSRunCriticalAlertPanelRelativeToWindow_R};

	VPL_Parameter _NSRunInformationalAlertPanelRelativeToWindow_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRunInformationalAlertPanelRelativeToWindow_7 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSRunInformationalAlertPanelRelativeToWindow_6 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanelRelativeToWindow_7};
	VPL_Parameter _NSRunInformationalAlertPanelRelativeToWindow_5 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanelRelativeToWindow_6};
	VPL_Parameter _NSRunInformationalAlertPanelRelativeToWindow_4 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanelRelativeToWindow_5};
	VPL_Parameter _NSRunInformationalAlertPanelRelativeToWindow_3 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanelRelativeToWindow_4};
	VPL_Parameter _NSRunInformationalAlertPanelRelativeToWindow_2 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanelRelativeToWindow_3};
	VPL_Parameter _NSRunInformationalAlertPanelRelativeToWindow_1 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanelRelativeToWindow_2};
	VPL_ExtProcedure _NSRunInformationalAlertPanelRelativeToWindow_F = {"NSRunInformationalAlertPanelRelativeToWindow",NSRunInformationalAlertPanelRelativeToWindow,&_NSRunInformationalAlertPanelRelativeToWindow_1,&_NSRunInformationalAlertPanelRelativeToWindow_R};

	VPL_Parameter _NSRunAlertPanelRelativeToWindow_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRunAlertPanelRelativeToWindow_7 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSRunAlertPanelRelativeToWindow_6 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanelRelativeToWindow_7};
	VPL_Parameter _NSRunAlertPanelRelativeToWindow_5 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanelRelativeToWindow_6};
	VPL_Parameter _NSRunAlertPanelRelativeToWindow_4 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanelRelativeToWindow_5};
	VPL_Parameter _NSRunAlertPanelRelativeToWindow_3 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanelRelativeToWindow_4};
	VPL_Parameter _NSRunAlertPanelRelativeToWindow_2 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanelRelativeToWindow_3};
	VPL_Parameter _NSRunAlertPanelRelativeToWindow_1 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanelRelativeToWindow_2};
	VPL_ExtProcedure _NSRunAlertPanelRelativeToWindow_F = {"NSRunAlertPanelRelativeToWindow",NSRunAlertPanelRelativeToWindow,&_NSRunAlertPanelRelativeToWindow_1,&_NSRunAlertPanelRelativeToWindow_R};

	VPL_Parameter _NSRunCriticalAlertPanel_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRunCriticalAlertPanel_6 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSRunCriticalAlertPanel_5 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanel_6};
	VPL_Parameter _NSRunCriticalAlertPanel_4 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanel_5};
	VPL_Parameter _NSRunCriticalAlertPanel_3 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanel_4};
	VPL_Parameter _NSRunCriticalAlertPanel_2 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanel_3};
	VPL_Parameter _NSRunCriticalAlertPanel_1 = { kPointerType,4,"objc_object",1,0,&_NSRunCriticalAlertPanel_2};
	VPL_ExtProcedure _NSRunCriticalAlertPanel_F = {"NSRunCriticalAlertPanel",NSRunCriticalAlertPanel,&_NSRunCriticalAlertPanel_1,&_NSRunCriticalAlertPanel_R};

	VPL_Parameter _NSRunInformationalAlertPanel_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRunInformationalAlertPanel_6 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSRunInformationalAlertPanel_5 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanel_6};
	VPL_Parameter _NSRunInformationalAlertPanel_4 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanel_5};
	VPL_Parameter _NSRunInformationalAlertPanel_3 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanel_4};
	VPL_Parameter _NSRunInformationalAlertPanel_2 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanel_3};
	VPL_Parameter _NSRunInformationalAlertPanel_1 = { kPointerType,4,"objc_object",1,0,&_NSRunInformationalAlertPanel_2};
	VPL_ExtProcedure _NSRunInformationalAlertPanel_F = {"NSRunInformationalAlertPanel",NSRunInformationalAlertPanel,&_NSRunInformationalAlertPanel_1,&_NSRunInformationalAlertPanel_R};

	VPL_Parameter _NSRunAlertPanel_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRunAlertPanel_6 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSRunAlertPanel_5 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanel_6};
	VPL_Parameter _NSRunAlertPanel_4 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanel_5};
	VPL_Parameter _NSRunAlertPanel_3 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanel_4};
	VPL_Parameter _NSRunAlertPanel_2 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanel_3};
	VPL_Parameter _NSRunAlertPanel_1 = { kPointerType,4,"objc_object",1,0,&_NSRunAlertPanel_2};
	VPL_ExtProcedure _NSRunAlertPanel_F = {"NSRunAlertPanel",NSRunAlertPanel,&_NSRunAlertPanel_1,&_NSRunAlertPanel_R};

	VPL_Parameter _NSConvertGlyphsToPackedGlyphs_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSConvertGlyphsToPackedGlyphs_4 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _NSConvertGlyphsToPackedGlyphs_3 = { kUnsignedType,4,NULL,0,0,&_NSConvertGlyphsToPackedGlyphs_4};
	VPL_Parameter _NSConvertGlyphsToPackedGlyphs_2 = { kIntType,4,NULL,0,0,&_NSConvertGlyphsToPackedGlyphs_3};
	VPL_Parameter _NSConvertGlyphsToPackedGlyphs_1 = { kPointerType,4,"unsigned int",1,0,&_NSConvertGlyphsToPackedGlyphs_2};
	VPL_ExtProcedure _NSConvertGlyphsToPackedGlyphs_F = {"NSConvertGlyphsToPackedGlyphs",NSConvertGlyphsToPackedGlyphs,&_NSConvertGlyphsToPackedGlyphs_1,&_NSConvertGlyphsToPackedGlyphs_R};

	VPL_Parameter _NSDrawNinePartImage_13 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSDrawNinePartImage_12 = { kFloatType,8,NULL,0,0,&_NSDrawNinePartImage_13};
	VPL_Parameter _NSDrawNinePartImage_11 = { kUnsignedType,4,NULL,0,0,&_NSDrawNinePartImage_12};
	VPL_Parameter _NSDrawNinePartImage_10 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_11};
	VPL_Parameter _NSDrawNinePartImage_9 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_10};
	VPL_Parameter _NSDrawNinePartImage_8 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_9};
	VPL_Parameter _NSDrawNinePartImage_7 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_8};
	VPL_Parameter _NSDrawNinePartImage_6 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_7};
	VPL_Parameter _NSDrawNinePartImage_5 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_6};
	VPL_Parameter _NSDrawNinePartImage_4 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_5};
	VPL_Parameter _NSDrawNinePartImage_3 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_4};
	VPL_Parameter _NSDrawNinePartImage_2 = { kPointerType,4,"objc_object",1,0,&_NSDrawNinePartImage_3};
	VPL_Parameter _NSDrawNinePartImage_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawNinePartImage_2};
	VPL_ExtProcedure _NSDrawNinePartImage_F = {"NSDrawNinePartImage",NSDrawNinePartImage,&_NSDrawNinePartImage_1,NULL};

	VPL_Parameter _NSDrawThreePartImage_8 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSDrawThreePartImage_7 = { kFloatType,8,NULL,0,0,&_NSDrawThreePartImage_8};
	VPL_Parameter _NSDrawThreePartImage_6 = { kUnsignedType,4,NULL,0,0,&_NSDrawThreePartImage_7};
	VPL_Parameter _NSDrawThreePartImage_5 = { kIntType,1,NULL,0,0,&_NSDrawThreePartImage_6};
	VPL_Parameter _NSDrawThreePartImage_4 = { kPointerType,4,"objc_object",1,0,&_NSDrawThreePartImage_5};
	VPL_Parameter _NSDrawThreePartImage_3 = { kPointerType,4,"objc_object",1,0,&_NSDrawThreePartImage_4};
	VPL_Parameter _NSDrawThreePartImage_2 = { kPointerType,4,"objc_object",1,0,&_NSDrawThreePartImage_3};
	VPL_Parameter _NSDrawThreePartImage_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawThreePartImage_2};
	VPL_ExtProcedure _NSDrawThreePartImage_F = {"NSDrawThreePartImage",NSDrawThreePartImage,&_NSDrawThreePartImage_1,NULL};

	VPL_Parameter _NSUnregisterServicesProvider_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSUnregisterServicesProvider_F = {"NSUnregisterServicesProvider",NSUnregisterServicesProvider,&_NSUnregisterServicesProvider_1,NULL};

	VPL_Parameter _NSRegisterServicesProvider_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSRegisterServicesProvider_1 = { kPointerType,4,"objc_object",1,0,&_NSRegisterServicesProvider_2};
	VPL_ExtProcedure _NSRegisterServicesProvider_F = {"NSRegisterServicesProvider",NSRegisterServicesProvider,&_NSRegisterServicesProvider_1,NULL};

	VPL_Parameter _NSPerformService_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSPerformService_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSPerformService_1 = { kPointerType,4,"objc_object",1,0,&_NSPerformService_2};
	VPL_ExtProcedure _NSPerformService_F = {"NSPerformService",NSPerformService,&_NSPerformService_1,&_NSPerformService_R};

	VPL_ExtProcedure _NSUpdateDynamicServices_F = {"NSUpdateDynamicServices",NSUpdateDynamicServices,NULL,NULL};

	VPL_Parameter _NSSetShowsServicesMenuItem_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSSetShowsServicesMenuItem_2 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSSetShowsServicesMenuItem_1 = { kPointerType,4,"objc_object",1,0,&_NSSetShowsServicesMenuItem_2};
	VPL_ExtProcedure _NSSetShowsServicesMenuItem_F = {"NSSetShowsServicesMenuItem",NSSetShowsServicesMenuItem,&_NSSetShowsServicesMenuItem_1,&_NSSetShowsServicesMenuItem_R};

	VPL_Parameter _NSShowsServicesMenuItem_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSShowsServicesMenuItem_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSShowsServicesMenuItem_F = {"NSShowsServicesMenuItem",NSShowsServicesMenuItem,&_NSShowsServicesMenuItem_1,&_NSShowsServicesMenuItem_R};

	VPL_Parameter _NSApplicationLoad_R = { kIntType,1,NULL,0,0,NULL};
	VPL_ExtProcedure _NSApplicationLoad_F = {"NSApplicationLoad",NSApplicationLoad,NULL,&_NSApplicationLoad_R};

	VPL_Parameter _NSWindowListForContext_3 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _NSWindowListForContext_2 = { kIntType,4,NULL,0,0,&_NSWindowListForContext_3};
	VPL_Parameter _NSWindowListForContext_1 = { kIntType,4,NULL,0,0,&_NSWindowListForContext_2};
	VPL_ExtProcedure _NSWindowListForContext_F = {"NSWindowListForContext",NSWindowListForContext,&_NSWindowListForContext_1,NULL};

	VPL_Parameter _NSCountWindowsForContext_2 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _NSCountWindowsForContext_1 = { kIntType,4,NULL,0,0,&_NSCountWindowsForContext_2};
	VPL_ExtProcedure _NSCountWindowsForContext_F = {"NSCountWindowsForContext",NSCountWindowsForContext,&_NSCountWindowsForContext_1,NULL};

	VPL_Parameter _NSWindowList_2 = { kPointerType,4,"long int",1,0,NULL};
	VPL_Parameter _NSWindowList_1 = { kIntType,4,NULL,0,0,&_NSWindowList_2};
	VPL_ExtProcedure _NSWindowList_F = {"NSWindowList",NSWindowList,&_NSWindowList_1,NULL};

	VPL_Parameter _NSCountWindows_1 = { kPointerType,4,"long int",1,0,NULL};
	VPL_ExtProcedure _NSCountWindows_F = {"NSCountWindows",NSCountWindows,&_NSCountWindows_1,NULL};

	VPL_Parameter _NSShowAnimationEffect_6 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _NSShowAnimationEffect_5 = { kPointerType,0,"objc_selector",1,0,&_NSShowAnimationEffect_6};
	VPL_Parameter _NSShowAnimationEffect_4 = { kPointerType,4,"objc_object",1,0,&_NSShowAnimationEffect_5};
	VPL_Parameter _NSShowAnimationEffect_3 = { kStructureType,16,"CGSize",0,0,&_NSShowAnimationEffect_4};
	VPL_Parameter _NSShowAnimationEffect_2 = { kStructureType,16,"CGPoint",0,0,&_NSShowAnimationEffect_3};
	VPL_Parameter _NSShowAnimationEffect_1 = { kUnsignedType,4,NULL,0,0,&_NSShowAnimationEffect_2};
	VPL_ExtProcedure _NSShowAnimationEffect_F = {"NSShowAnimationEffect",NSShowAnimationEffect,&_NSShowAnimationEffect_1,NULL};

	VPL_ExtProcedure _NSEnableScreenUpdates_F = {"NSEnableScreenUpdates",NSEnableScreenUpdates,NULL,NULL};

	VPL_ExtProcedure _NSDisableScreenUpdates_F = {"NSDisableScreenUpdates",NSDisableScreenUpdates,NULL,NULL};

	VPL_Parameter _NSSetFocusRingStyle_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSSetFocusRingStyle_F = {"NSSetFocusRingStyle",NSSetFocusRingStyle,&_NSSetFocusRingStyle_1,NULL};

	VPL_Parameter _NSDrawWindowBackground_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSDrawWindowBackground_F = {"NSDrawWindowBackground",NSDrawWindowBackground,&_NSDrawWindowBackground_1,NULL};

	VPL_Parameter _NSDottedFrameRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSDottedFrameRect_F = {"NSDottedFrameRect",NSDottedFrameRect,&_NSDottedFrameRect_1,NULL};

	VPL_Parameter _NSDrawLightBezel_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSDrawLightBezel_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawLightBezel_2};
	VPL_ExtProcedure _NSDrawLightBezel_F = {"NSDrawLightBezel",NSDrawLightBezel,&_NSDrawLightBezel_1,NULL};

	VPL_Parameter _NSDrawDarkBezel_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSDrawDarkBezel_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawDarkBezel_2};
	VPL_ExtProcedure _NSDrawDarkBezel_F = {"NSDrawDarkBezel",NSDrawDarkBezel,&_NSDrawDarkBezel_1,NULL};

	VPL_Parameter _NSDrawColorTiledRects_R = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSDrawColorTiledRects_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDrawColorTiledRects_4 = { kPointerType,4,"objc_object",2,0,&_NSDrawColorTiledRects_5};
	VPL_Parameter _NSDrawColorTiledRects_3 = { kPointerType,4,"unsigned long",1,1,&_NSDrawColorTiledRects_4};
	VPL_Parameter _NSDrawColorTiledRects_2 = { kStructureType,32,"CGRect",0,0,&_NSDrawColorTiledRects_3};
	VPL_Parameter _NSDrawColorTiledRects_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawColorTiledRects_2};
	VPL_ExtProcedure _NSDrawColorTiledRects_F = {"NSDrawColorTiledRects",NSDrawColorTiledRects,&_NSDrawColorTiledRects_1,&_NSDrawColorTiledRects_R};

	VPL_Parameter _NSGetWindowServerMemory_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSGetWindowServerMemory_4 = { kPointerType,4,"objc_object",2,0,NULL};
	VPL_Parameter _NSGetWindowServerMemory_3 = { kPointerType,4,"long int",1,0,&_NSGetWindowServerMemory_4};
	VPL_Parameter _NSGetWindowServerMemory_2 = { kPointerType,4,"long int",1,0,&_NSGetWindowServerMemory_3};
	VPL_Parameter _NSGetWindowServerMemory_1 = { kIntType,4,NULL,0,0,&_NSGetWindowServerMemory_2};
	VPL_ExtProcedure _NSGetWindowServerMemory_F = {"NSGetWindowServerMemory",NSGetWindowServerMemory,&_NSGetWindowServerMemory_1,&_NSGetWindowServerMemory_R};

	VPL_ExtProcedure _NSBeep_F = {"NSBeep",NSBeep,NULL,NULL};

	VPL_Parameter _NSHighlightRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSHighlightRect_F = {"NSHighlightRect",NSHighlightRect,&_NSHighlightRect_1,NULL};

	VPL_Parameter _NSCopyBits_3 = { kStructureType,16,"CGPoint",0,0,NULL};
	VPL_Parameter _NSCopyBits_2 = { kStructureType,32,"CGRect",0,0,&_NSCopyBits_3};
	VPL_Parameter _NSCopyBits_1 = { kIntType,4,NULL,0,0,&_NSCopyBits_2};
	VPL_ExtProcedure _NSCopyBits_F = {"NSCopyBits",NSCopyBits,&_NSCopyBits_1,NULL};

	VPL_Parameter _NSDrawBitmap_11 = { kPointerType,1,"unsigned char",2,1,NULL};
	VPL_Parameter _NSDrawBitmap_10 = { kPointerType,4,"objc_object",1,0,&_NSDrawBitmap_11};
	VPL_Parameter _NSDrawBitmap_9 = { kIntType,1,NULL,0,0,&_NSDrawBitmap_10};
	VPL_Parameter _NSDrawBitmap_8 = { kIntType,1,NULL,0,0,&_NSDrawBitmap_9};
	VPL_Parameter _NSDrawBitmap_7 = { kIntType,4,NULL,0,0,&_NSDrawBitmap_8};
	VPL_Parameter _NSDrawBitmap_6 = { kIntType,4,NULL,0,0,&_NSDrawBitmap_7};
	VPL_Parameter _NSDrawBitmap_5 = { kIntType,4,NULL,0,0,&_NSDrawBitmap_6};
	VPL_Parameter _NSDrawBitmap_4 = { kIntType,4,NULL,0,0,&_NSDrawBitmap_5};
	VPL_Parameter _NSDrawBitmap_3 = { kIntType,4,NULL,0,0,&_NSDrawBitmap_4};
	VPL_Parameter _NSDrawBitmap_2 = { kIntType,4,NULL,0,0,&_NSDrawBitmap_3};
	VPL_Parameter _NSDrawBitmap_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawBitmap_2};
	VPL_ExtProcedure _NSDrawBitmap_F = {"NSDrawBitmap",NSDrawBitmap,&_NSDrawBitmap_1,NULL};

	VPL_Parameter _NSReadPixel_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSReadPixel_1 = { kStructureType,16,"CGPoint",0,0,NULL};
	VPL_ExtProcedure _NSReadPixel_F = {"NSReadPixel",NSReadPixel,&_NSReadPixel_1,&_NSReadPixel_R};

	VPL_Parameter _NSEraseRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSEraseRect_F = {"NSEraseRect",NSEraseRect,&_NSEraseRect_1,NULL};

	VPL_Parameter _NSDrawButton_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSDrawButton_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawButton_2};
	VPL_ExtProcedure _NSDrawButton_F = {"NSDrawButton",NSDrawButton,&_NSDrawButton_1,NULL};

	VPL_Parameter _NSDrawWhiteBezel_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSDrawWhiteBezel_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawWhiteBezel_2};
	VPL_ExtProcedure _NSDrawWhiteBezel_F = {"NSDrawWhiteBezel",NSDrawWhiteBezel,&_NSDrawWhiteBezel_1,NULL};

	VPL_Parameter _NSDrawGroove_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSDrawGroove_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawGroove_2};
	VPL_ExtProcedure _NSDrawGroove_F = {"NSDrawGroove",NSDrawGroove,&_NSDrawGroove_1,NULL};

	VPL_Parameter _NSDrawGrayBezel_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSDrawGrayBezel_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawGrayBezel_2};
	VPL_ExtProcedure _NSDrawGrayBezel_F = {"NSDrawGrayBezel",NSDrawGrayBezel,&_NSDrawGrayBezel_1,NULL};

	VPL_Parameter _NSDrawTiledRects_R = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSDrawTiledRects_5 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDrawTiledRects_4 = { kPointerType,8,"double",1,1,&_NSDrawTiledRects_5};
	VPL_Parameter _NSDrawTiledRects_3 = { kPointerType,4,"unsigned long",1,1,&_NSDrawTiledRects_4};
	VPL_Parameter _NSDrawTiledRects_2 = { kStructureType,32,"CGRect",0,0,&_NSDrawTiledRects_3};
	VPL_Parameter _NSDrawTiledRects_1 = { kStructureType,32,"CGRect",0,0,&_NSDrawTiledRects_2};
	VPL_ExtProcedure _NSDrawTiledRects_F = {"NSDrawTiledRects",NSDrawTiledRects,&_NSDrawTiledRects_1,&_NSDrawTiledRects_R};

	VPL_Parameter _NSRectClipList_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRectClipList_1 = { kPointerType,32,"CGRect",1,1,&_NSRectClipList_2};
	VPL_ExtProcedure _NSRectClipList_F = {"NSRectClipList",NSRectClipList,&_NSRectClipList_1,NULL};

	VPL_Parameter _NSRectClip_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSRectClip_F = {"NSRectClip",NSRectClip,&_NSRectClip_1,NULL};

	VPL_Parameter _NSFrameRectWithWidthUsingOperation_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSFrameRectWithWidthUsingOperation_2 = { kFloatType,8,NULL,0,0,&_NSFrameRectWithWidthUsingOperation_3};
	VPL_Parameter _NSFrameRectWithWidthUsingOperation_1 = { kStructureType,32,"CGRect",0,0,&_NSFrameRectWithWidthUsingOperation_2};
	VPL_ExtProcedure _NSFrameRectWithWidthUsingOperation_F = {"NSFrameRectWithWidthUsingOperation",NSFrameRectWithWidthUsingOperation,&_NSFrameRectWithWidthUsingOperation_1,NULL};

	VPL_Parameter _NSFrameRectWithWidth_2 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _NSFrameRectWithWidth_1 = { kStructureType,32,"CGRect",0,0,&_NSFrameRectWithWidth_2};
	VPL_ExtProcedure _NSFrameRectWithWidth_F = {"NSFrameRectWithWidth",NSFrameRectWithWidth,&_NSFrameRectWithWidth_1,NULL};

	VPL_Parameter _NSFrameRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSFrameRect_F = {"NSFrameRect",NSFrameRect,&_NSFrameRect_1,NULL};

	VPL_Parameter _NSRectFillListWithColorsUsingOperation_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRectFillListWithColorsUsingOperation_3 = { kIntType,4,NULL,0,0,&_NSRectFillListWithColorsUsingOperation_4};
	VPL_Parameter _NSRectFillListWithColorsUsingOperation_2 = { kPointerType,4,"objc_object",2,0,&_NSRectFillListWithColorsUsingOperation_3};
	VPL_Parameter _NSRectFillListWithColorsUsingOperation_1 = { kPointerType,32,"CGRect",1,1,&_NSRectFillListWithColorsUsingOperation_2};
	VPL_ExtProcedure _NSRectFillListWithColorsUsingOperation_F = {"NSRectFillListWithColorsUsingOperation",NSRectFillListWithColorsUsingOperation,&_NSRectFillListWithColorsUsingOperation_1,NULL};

	VPL_Parameter _NSRectFillListUsingOperation_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRectFillListUsingOperation_2 = { kIntType,4,NULL,0,0,&_NSRectFillListUsingOperation_3};
	VPL_Parameter _NSRectFillListUsingOperation_1 = { kPointerType,32,"CGRect",1,1,&_NSRectFillListUsingOperation_2};
	VPL_ExtProcedure _NSRectFillListUsingOperation_F = {"NSRectFillListUsingOperation",NSRectFillListUsingOperation,&_NSRectFillListUsingOperation_1,NULL};

	VPL_Parameter _NSRectFillUsingOperation_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRectFillUsingOperation_1 = { kStructureType,32,"CGRect",0,0,&_NSRectFillUsingOperation_2};
	VPL_ExtProcedure _NSRectFillUsingOperation_F = {"NSRectFillUsingOperation",NSRectFillUsingOperation,&_NSRectFillUsingOperation_1,NULL};

	VPL_Parameter _NSRectFillListWithColors_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRectFillListWithColors_2 = { kPointerType,4,"objc_object",2,0,&_NSRectFillListWithColors_3};
	VPL_Parameter _NSRectFillListWithColors_1 = { kPointerType,32,"CGRect",1,1,&_NSRectFillListWithColors_2};
	VPL_ExtProcedure _NSRectFillListWithColors_F = {"NSRectFillListWithColors",NSRectFillListWithColors,&_NSRectFillListWithColors_1,NULL};

	VPL_Parameter _NSRectFillListWithGrays_3 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRectFillListWithGrays_2 = { kPointerType,8,"double",1,1,&_NSRectFillListWithGrays_3};
	VPL_Parameter _NSRectFillListWithGrays_1 = { kPointerType,32,"CGRect",1,1,&_NSRectFillListWithGrays_2};
	VPL_ExtProcedure _NSRectFillListWithGrays_F = {"NSRectFillListWithGrays",NSRectFillListWithGrays,&_NSRectFillListWithGrays_1,NULL};

	VPL_Parameter _NSRectFillList_2 = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRectFillList_1 = { kPointerType,32,"CGRect",1,1,&_NSRectFillList_2};
	VPL_ExtProcedure _NSRectFillList_F = {"NSRectFillList",NSRectFillList,&_NSRectFillList_1,NULL};

	VPL_Parameter _NSRectFill_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSRectFill_F = {"NSRectFill",NSRectFill,&_NSRectFill_1,NULL};

	VPL_Parameter _NSAvailableWindowDepths_R = { kPointerType,4,"int",1,0,NULL};
	VPL_ExtProcedure _NSAvailableWindowDepths_F = {"NSAvailableWindowDepths",NSAvailableWindowDepths,NULL,&_NSAvailableWindowDepths_R};

	VPL_Parameter _NSNumberOfColorComponents_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSNumberOfColorComponents_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSNumberOfColorComponents_F = {"NSNumberOfColorComponents",NSNumberOfColorComponents,&_NSNumberOfColorComponents_1,&_NSNumberOfColorComponents_R};

	VPL_Parameter _NSBitsPerPixelFromDepth_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSBitsPerPixelFromDepth_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSBitsPerPixelFromDepth_F = {"NSBitsPerPixelFromDepth",NSBitsPerPixelFromDepth,&_NSBitsPerPixelFromDepth_1,&_NSBitsPerPixelFromDepth_R};

	VPL_Parameter _NSBitsPerSampleFromDepth_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSBitsPerSampleFromDepth_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSBitsPerSampleFromDepth_F = {"NSBitsPerSampleFromDepth",NSBitsPerSampleFromDepth,&_NSBitsPerSampleFromDepth_1,&_NSBitsPerSampleFromDepth_R};

	VPL_Parameter _NSColorSpaceFromDepth_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSColorSpaceFromDepth_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSColorSpaceFromDepth_F = {"NSColorSpaceFromDepth",NSColorSpaceFromDepth,&_NSColorSpaceFromDepth_1,&_NSColorSpaceFromDepth_R};

	VPL_Parameter _NSPlanarFromDepth_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSPlanarFromDepth_1 = { kIntType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSPlanarFromDepth_F = {"NSPlanarFromDepth",NSPlanarFromDepth,&_NSPlanarFromDepth_1,&_NSPlanarFromDepth_R};

	VPL_Parameter _NSBestDepth_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSBestDepth_5 = { kPointerType,1,"signed char",1,0,NULL};
	VPL_Parameter _NSBestDepth_4 = { kIntType,1,NULL,0,0,&_NSBestDepth_5};
	VPL_Parameter _NSBestDepth_3 = { kIntType,4,NULL,0,0,&_NSBestDepth_4};
	VPL_Parameter _NSBestDepth_2 = { kIntType,4,NULL,0,0,&_NSBestDepth_3};
	VPL_Parameter _NSBestDepth_1 = { kPointerType,4,"objc_object",1,0,&_NSBestDepth_2};
	VPL_ExtProcedure _NSBestDepth_F = {"NSBestDepth",NSBestDepth,&_NSBestDepth_1,&_NSBestDepth_R};

	VPL_Parameter _NSRectFromString_R = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSRectFromString_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSRectFromString_F = {"NSRectFromString",NSRectFromString,&_NSRectFromString_1,&_NSRectFromString_R};

	VPL_Parameter _NSSizeFromString_R = { kStructureType,16,"CGSize",0,0,NULL};
	VPL_Parameter _NSSizeFromString_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSSizeFromString_F = {"NSSizeFromString",NSSizeFromString,&_NSSizeFromString_1,&_NSSizeFromString_R};

	VPL_Parameter _NSPointFromString_R = { kStructureType,16,"CGPoint",0,0,NULL};
	VPL_Parameter _NSPointFromString_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSPointFromString_F = {"NSPointFromString",NSPointFromString,&_NSPointFromString_1,&_NSPointFromString_R};

	VPL_Parameter _NSStringFromRect_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSStringFromRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSStringFromRect_F = {"NSStringFromRect",NSStringFromRect,&_NSStringFromRect_1,&_NSStringFromRect_R};

	VPL_Parameter _NSStringFromSize_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSStringFromSize_1 = { kStructureType,16,"CGSize",0,0,NULL};
	VPL_ExtProcedure _NSStringFromSize_F = {"NSStringFromSize",NSStringFromSize,&_NSStringFromSize_1,&_NSStringFromSize_R};

	VPL_Parameter _NSStringFromPoint_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSStringFromPoint_1 = { kStructureType,16,"CGPoint",0,0,NULL};
	VPL_ExtProcedure _NSStringFromPoint_F = {"NSStringFromPoint",NSStringFromPoint,&_NSStringFromPoint_1,&_NSStringFromPoint_R};

	VPL_Parameter _NSIntersectsRect_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSIntersectsRect_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSIntersectsRect_1 = { kStructureType,32,"CGRect",0,0,&_NSIntersectsRect_2};
	VPL_ExtProcedure _NSIntersectsRect_F = {"NSIntersectsRect",NSIntersectsRect,&_NSIntersectsRect_1,&_NSIntersectsRect_R};

	VPL_Parameter _NSContainsRect_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSContainsRect_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSContainsRect_1 = { kStructureType,32,"CGRect",0,0,&_NSContainsRect_2};
	VPL_ExtProcedure _NSContainsRect_F = {"NSContainsRect",NSContainsRect,&_NSContainsRect_1,&_NSContainsRect_R};

	VPL_Parameter _NSMouseInRect_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSMouseInRect_3 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSMouseInRect_2 = { kStructureType,32,"CGRect",0,0,&_NSMouseInRect_3};
	VPL_Parameter _NSMouseInRect_1 = { kStructureType,16,"CGPoint",0,0,&_NSMouseInRect_2};
	VPL_ExtProcedure _NSMouseInRect_F = {"NSMouseInRect",NSMouseInRect,&_NSMouseInRect_1,&_NSMouseInRect_R};

	VPL_Parameter _NSPointInRect_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSPointInRect_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSPointInRect_1 = { kStructureType,16,"CGPoint",0,0,&_NSPointInRect_2};
	VPL_ExtProcedure _NSPointInRect_F = {"NSPointInRect",NSPointInRect,&_NSPointInRect_1,&_NSPointInRect_R};

	VPL_Parameter _NSDivideRect_5 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDivideRect_4 = { kFloatType,8,NULL,0,0,&_NSDivideRect_5};
	VPL_Parameter _NSDivideRect_3 = { kPointerType,32,"CGRect",1,0,&_NSDivideRect_4};
	VPL_Parameter _NSDivideRect_2 = { kPointerType,32,"CGRect",1,0,&_NSDivideRect_3};
	VPL_Parameter _NSDivideRect_1 = { kStructureType,32,"CGRect",0,0,&_NSDivideRect_2};
	VPL_ExtProcedure _NSDivideRect_F = {"NSDivideRect",NSDivideRect,&_NSDivideRect_1,NULL};

	VPL_Parameter _NSOffsetRect_R = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSOffsetRect_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _NSOffsetRect_2 = { kFloatType,8,NULL,0,0,&_NSOffsetRect_3};
	VPL_Parameter _NSOffsetRect_1 = { kStructureType,32,"CGRect",0,0,&_NSOffsetRect_2};
	VPL_ExtProcedure _NSOffsetRect_F = {"NSOffsetRect",NSOffsetRect,&_NSOffsetRect_1,&_NSOffsetRect_R};

	VPL_Parameter _NSIntersectionRect_R = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSIntersectionRect_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSIntersectionRect_1 = { kStructureType,32,"CGRect",0,0,&_NSIntersectionRect_2};
	VPL_ExtProcedure _NSIntersectionRect_F = {"NSIntersectionRect",NSIntersectionRect,&_NSIntersectionRect_1,&_NSIntersectionRect_R};

	VPL_Parameter _NSUnionRect_R = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSUnionRect_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSUnionRect_1 = { kStructureType,32,"CGRect",0,0,&_NSUnionRect_2};
	VPL_ExtProcedure _NSUnionRect_F = {"NSUnionRect",NSUnionRect,&_NSUnionRect_1,&_NSUnionRect_R};

	VPL_Parameter _NSIntegralRect_R = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSIntegralRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSIntegralRect_F = {"NSIntegralRect",NSIntegralRect,&_NSIntegralRect_1,&_NSIntegralRect_R};

	VPL_Parameter _NSInsetRect_R = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSInsetRect_3 = { kFloatType,8,NULL,0,0,NULL};
	VPL_Parameter _NSInsetRect_2 = { kFloatType,8,NULL,0,0,&_NSInsetRect_3};
	VPL_Parameter _NSInsetRect_1 = { kStructureType,32,"CGRect",0,0,&_NSInsetRect_2};
	VPL_ExtProcedure _NSInsetRect_F = {"NSInsetRect",NSInsetRect,&_NSInsetRect_1,&_NSInsetRect_R};

	VPL_Parameter _NSIsEmptyRect_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSIsEmptyRect_1 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_ExtProcedure _NSIsEmptyRect_F = {"NSIsEmptyRect",NSIsEmptyRect,&_NSIsEmptyRect_1,&_NSIsEmptyRect_R};

	VPL_Parameter _NSEqualRects_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSEqualRects_2 = { kStructureType,32,"CGRect",0,0,NULL};
	VPL_Parameter _NSEqualRects_1 = { kStructureType,32,"CGRect",0,0,&_NSEqualRects_2};
	VPL_ExtProcedure _NSEqualRects_F = {"NSEqualRects",NSEqualRects,&_NSEqualRects_1,&_NSEqualRects_R};

	VPL_Parameter _NSEqualSizes_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSEqualSizes_2 = { kStructureType,16,"CGSize",0,0,NULL};
	VPL_Parameter _NSEqualSizes_1 = { kStructureType,16,"CGSize",0,0,&_NSEqualSizes_2};
	VPL_ExtProcedure _NSEqualSizes_F = {"NSEqualSizes",NSEqualSizes,&_NSEqualSizes_1,&_NSEqualSizes_R};

	VPL_Parameter _NSEqualPoints_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSEqualPoints_2 = { kStructureType,16,"CGPoint",0,0,NULL};
	VPL_Parameter _NSEqualPoints_1 = { kStructureType,16,"CGPoint",0,0,&_NSEqualPoints_2};
	VPL_ExtProcedure _NSEqualPoints_F = {"NSEqualPoints",NSEqualPoints,&_NSEqualPoints_1,&_NSEqualPoints_R};

	VPL_Parameter _NSSearchPathForDirectoriesInDomains_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSSearchPathForDirectoriesInDomains_3 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSSearchPathForDirectoriesInDomains_2 = { kUnsignedType,4,NULL,0,0,&_NSSearchPathForDirectoriesInDomains_3};
	VPL_Parameter _NSSearchPathForDirectoriesInDomains_1 = { kUnsignedType,4,NULL,0,0,&_NSSearchPathForDirectoriesInDomains_2};
	VPL_ExtProcedure _NSSearchPathForDirectoriesInDomains_F = {"NSSearchPathForDirectoriesInDomains",NSSearchPathForDirectoriesInDomains,&_NSSearchPathForDirectoriesInDomains_1,&_NSSearchPathForDirectoriesInDomains_R};

	VPL_Parameter _NSOpenStepRootDirectory_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSOpenStepRootDirectory_F = {"NSOpenStepRootDirectory",NSOpenStepRootDirectory,NULL,&_NSOpenStepRootDirectory_R};

	VPL_Parameter _NSTemporaryDirectory_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSTemporaryDirectory_F = {"NSTemporaryDirectory",NSTemporaryDirectory,NULL,&_NSTemporaryDirectory_R};

	VPL_Parameter _NSHomeDirectoryForUser_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSHomeDirectoryForUser_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSHomeDirectoryForUser_F = {"NSHomeDirectoryForUser",NSHomeDirectoryForUser,&_NSHomeDirectoryForUser_1,&_NSHomeDirectoryForUser_R};

	VPL_Parameter _NSHomeDirectory_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSHomeDirectory_F = {"NSHomeDirectory",NSHomeDirectory,NULL,&_NSHomeDirectory_R};

	VPL_Parameter _NSFullUserName_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSFullUserName_F = {"NSFullUserName",NSFullUserName,NULL,&_NSFullUserName_R};

	VPL_Parameter _NSUserName_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSUserName_F = {"NSUserName",NSUserName,NULL,&_NSUserName_R};

	VPL_Parameter _NSDecimalString_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSDecimalString_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSDecimalString_1 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalString_2};
	VPL_ExtProcedure _NSDecimalString_F = {"NSDecimalString",NSDecimalString,&_NSDecimalString_1,&_NSDecimalString_R};

	VPL_Parameter _NSDecimalMultiplyByPowerOf10_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalMultiplyByPowerOf10_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalMultiplyByPowerOf10_3 = { kIntType,2,NULL,0,0,&_NSDecimalMultiplyByPowerOf10_4};
	VPL_Parameter _NSDecimalMultiplyByPowerOf10_2 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalMultiplyByPowerOf10_3};
	VPL_Parameter _NSDecimalMultiplyByPowerOf10_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalMultiplyByPowerOf10_2};
	VPL_ExtProcedure _NSDecimalMultiplyByPowerOf10_F = {"NSDecimalMultiplyByPowerOf10",NSDecimalMultiplyByPowerOf10,&_NSDecimalMultiplyByPowerOf10_1,&_NSDecimalMultiplyByPowerOf10_R};

	VPL_Parameter _NSDecimalPower_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalPower_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalPower_3 = { kUnsignedType,4,NULL,0,0,&_NSDecimalPower_4};
	VPL_Parameter _NSDecimalPower_2 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalPower_3};
	VPL_Parameter _NSDecimalPower_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalPower_2};
	VPL_ExtProcedure _NSDecimalPower_F = {"NSDecimalPower",NSDecimalPower,&_NSDecimalPower_1,&_NSDecimalPower_R};

	VPL_Parameter _NSDecimalDivide_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalDivide_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalDivide_3 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalDivide_4};
	VPL_Parameter _NSDecimalDivide_2 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalDivide_3};
	VPL_Parameter _NSDecimalDivide_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalDivide_2};
	VPL_ExtProcedure _NSDecimalDivide_F = {"NSDecimalDivide",NSDecimalDivide,&_NSDecimalDivide_1,&_NSDecimalDivide_R};

	VPL_Parameter _NSDecimalMultiply_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalMultiply_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalMultiply_3 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalMultiply_4};
	VPL_Parameter _NSDecimalMultiply_2 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalMultiply_3};
	VPL_Parameter _NSDecimalMultiply_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalMultiply_2};
	VPL_ExtProcedure _NSDecimalMultiply_F = {"NSDecimalMultiply",NSDecimalMultiply,&_NSDecimalMultiply_1,&_NSDecimalMultiply_R};

	VPL_Parameter _NSDecimalSubtract_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalSubtract_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalSubtract_3 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalSubtract_4};
	VPL_Parameter _NSDecimalSubtract_2 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalSubtract_3};
	VPL_Parameter _NSDecimalSubtract_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalSubtract_2};
	VPL_ExtProcedure _NSDecimalSubtract_F = {"NSDecimalSubtract",NSDecimalSubtract,&_NSDecimalSubtract_1,&_NSDecimalSubtract_R};

	VPL_Parameter _NSDecimalAdd_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalAdd_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalAdd_3 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalAdd_4};
	VPL_Parameter _NSDecimalAdd_2 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalAdd_3};
	VPL_Parameter _NSDecimalAdd_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalAdd_2};
	VPL_ExtProcedure _NSDecimalAdd_F = {"NSDecimalAdd",NSDecimalAdd,&_NSDecimalAdd_1,&_NSDecimalAdd_R};

	VPL_Parameter _NSDecimalNormalize_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalNormalize_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalNormalize_2 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalNormalize_3};
	VPL_Parameter _NSDecimalNormalize_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalNormalize_2};
	VPL_ExtProcedure _NSDecimalNormalize_F = {"NSDecimalNormalize",NSDecimalNormalize,&_NSDecimalNormalize_1,&_NSDecimalNormalize_R};

	VPL_Parameter _NSDecimalRound_4 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalRound_3 = { kIntType,4,NULL,0,0,&_NSDecimalRound_4};
	VPL_Parameter _NSDecimalRound_2 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalRound_3};
	VPL_Parameter _NSDecimalRound_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalRound_2};
	VPL_ExtProcedure _NSDecimalRound_F = {"NSDecimalRound",NSDecimalRound,&_NSDecimalRound_1,NULL};

	VPL_Parameter _NSDecimalCompare_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDecimalCompare_2 = { kPointerType,20,"NSDecimal",1,1,NULL};
	VPL_Parameter _NSDecimalCompare_1 = { kPointerType,20,"NSDecimal",1,1,&_NSDecimalCompare_2};
	VPL_ExtProcedure _NSDecimalCompare_F = {"NSDecimalCompare",NSDecimalCompare,&_NSDecimalCompare_1,&_NSDecimalCompare_R};

	VPL_Parameter _NSDecimalCompact_1 = { kPointerType,20,"NSDecimal",1,0,NULL};
	VPL_ExtProcedure _NSDecimalCompact_F = {"NSDecimalCompact",NSDecimalCompact,&_NSDecimalCompact_1,NULL};

	VPL_Parameter _NSDecimalCopy_2 = { kPointerType,20,"NSDecimal",1,1,NULL};
	VPL_Parameter _NSDecimalCopy_1 = { kPointerType,20,"NSDecimal",1,0,&_NSDecimalCopy_2};
	VPL_ExtProcedure _NSDecimalCopy_F = {"NSDecimalCopy",NSDecimalCopy,&_NSDecimalCopy_1,NULL};

	VPL_Parameter _NSRangeFromString_R = { kStructureType,8,"_NSRange",0,0,NULL};
	VPL_Parameter _NSRangeFromString_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSRangeFromString_F = {"NSRangeFromString",NSRangeFromString,&_NSRangeFromString_1,&_NSRangeFromString_R};

	VPL_Parameter _NSStringFromRange_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSStringFromRange_1 = { kStructureType,8,"_NSRange",0,0,NULL};
	VPL_ExtProcedure _NSStringFromRange_F = {"NSStringFromRange",NSStringFromRange,&_NSStringFromRange_1,&_NSStringFromRange_R};

	VPL_Parameter _NSIntersectionRange_R = { kStructureType,8,"_NSRange",0,0,NULL};
	VPL_Parameter _NSIntersectionRange_2 = { kStructureType,8,"_NSRange",0,0,NULL};
	VPL_Parameter _NSIntersectionRange_1 = { kStructureType,8,"_NSRange",0,0,&_NSIntersectionRange_2};
	VPL_ExtProcedure _NSIntersectionRange_F = {"NSIntersectionRange",NSIntersectionRange,&_NSIntersectionRange_1,&_NSIntersectionRange_R};

	VPL_Parameter _NSUnionRange_R = { kStructureType,8,"_NSRange",0,0,NULL};
	VPL_Parameter _NSUnionRange_2 = { kStructureType,8,"_NSRange",0,0,NULL};
	VPL_Parameter _NSUnionRange_1 = { kStructureType,8,"_NSRange",0,0,&_NSUnionRange_2};
	VPL_ExtProcedure _NSUnionRange_F = {"NSUnionRange",NSUnionRange,&_NSUnionRange_1,&_NSUnionRange_R};

	VPL_Parameter _NSExtraRefCount_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSExtraRefCount_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSExtraRefCount_F = {"NSExtraRefCount",NSExtraRefCount,&_NSExtraRefCount_1,&_NSExtraRefCount_R};

	VPL_Parameter _NSDecrementExtraRefCountWasZero_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSDecrementExtraRefCountWasZero_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSDecrementExtraRefCountWasZero_F = {"NSDecrementExtraRefCountWasZero",NSDecrementExtraRefCountWasZero,&_NSDecrementExtraRefCountWasZero_1,&_NSDecrementExtraRefCountWasZero_R};

	VPL_Parameter _NSIncrementExtraRefCount_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSIncrementExtraRefCount_F = {"NSIncrementExtraRefCount",NSIncrementExtraRefCount,&_NSIncrementExtraRefCount_1,NULL};

	VPL_Parameter _NSShouldRetainWithZone_R = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSShouldRetainWithZone_2 = { kPointerType,0,"_NSZone",1,0,NULL};
	VPL_Parameter _NSShouldRetainWithZone_1 = { kPointerType,4,"objc_object",1,0,&_NSShouldRetainWithZone_2};
	VPL_ExtProcedure _NSShouldRetainWithZone_F = {"NSShouldRetainWithZone",NSShouldRetainWithZone,&_NSShouldRetainWithZone_1,&_NSShouldRetainWithZone_R};

	VPL_Parameter _NSCopyObject_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSCopyObject_3 = { kPointerType,0,"_NSZone",1,0,NULL};
	VPL_Parameter _NSCopyObject_2 = { kUnsignedType,4,NULL,0,0,&_NSCopyObject_3};
	VPL_Parameter _NSCopyObject_1 = { kPointerType,4,"objc_object",1,0,&_NSCopyObject_2};
	VPL_ExtProcedure _NSCopyObject_F = {"NSCopyObject",NSCopyObject,&_NSCopyObject_1,&_NSCopyObject_R};

	VPL_Parameter _NSDeallocateObject_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSDeallocateObject_F = {"NSDeallocateObject",NSDeallocateObject,&_NSDeallocateObject_1,NULL};

	VPL_Parameter _NSAllocateObject_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSAllocateObject_3 = { kPointerType,0,"_NSZone",1,0,NULL};
	VPL_Parameter _NSAllocateObject_2 = { kUnsignedType,4,NULL,0,0,&_NSAllocateObject_3};
	VPL_Parameter _NSAllocateObject_1 = { kPointerType,0,"objc_class",1,0,&_NSAllocateObject_2};
	VPL_ExtProcedure _NSAllocateObject_F = {"NSAllocateObject",NSAllocateObject,&_NSAllocateObject_1,&_NSAllocateObject_R};

	VPL_Parameter _NSRealMemoryAvailable_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSRealMemoryAvailable_F = {"NSRealMemoryAvailable",NSRealMemoryAvailable,NULL,&_NSRealMemoryAvailable_R};

	VPL_Parameter _NSCopyMemoryPages_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSCopyMemoryPages_2 = { kPointerType,0,"void",1,0,&_NSCopyMemoryPages_3};
	VPL_Parameter _NSCopyMemoryPages_1 = { kPointerType,0,"void",1,1,&_NSCopyMemoryPages_2};
	VPL_ExtProcedure _NSCopyMemoryPages_F = {"NSCopyMemoryPages",NSCopyMemoryPages,&_NSCopyMemoryPages_1,NULL};

	VPL_Parameter _NSDeallocateMemoryPages_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSDeallocateMemoryPages_1 = { kPointerType,0,"void",1,0,&_NSDeallocateMemoryPages_2};
	VPL_ExtProcedure _NSDeallocateMemoryPages_F = {"NSDeallocateMemoryPages",NSDeallocateMemoryPages,&_NSDeallocateMemoryPages_1,NULL};

	VPL_Parameter _NSAllocateMemoryPages_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _NSAllocateMemoryPages_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSAllocateMemoryPages_F = {"NSAllocateMemoryPages",NSAllocateMemoryPages,&_NSAllocateMemoryPages_1,&_NSAllocateMemoryPages_R};

	VPL_Parameter _NSRoundDownToMultipleOfPageSize_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRoundDownToMultipleOfPageSize_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSRoundDownToMultipleOfPageSize_F = {"NSRoundDownToMultipleOfPageSize",NSRoundDownToMultipleOfPageSize,&_NSRoundDownToMultipleOfPageSize_1,&_NSRoundDownToMultipleOfPageSize_R};

	VPL_Parameter _NSRoundUpToMultipleOfPageSize_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSRoundUpToMultipleOfPageSize_1 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSRoundUpToMultipleOfPageSize_F = {"NSRoundUpToMultipleOfPageSize",NSRoundUpToMultipleOfPageSize,&_NSRoundUpToMultipleOfPageSize_1,&_NSRoundUpToMultipleOfPageSize_R};

	VPL_Parameter _NSLogPageSize_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSLogPageSize_F = {"NSLogPageSize",NSLogPageSize,NULL,&_NSLogPageSize_R};

	VPL_Parameter _NSPageSize_R = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _NSPageSize_F = {"NSPageSize",NSPageSize,NULL,&_NSPageSize_R};

	VPL_Parameter _NSReallocateCollectable_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _NSReallocateCollectable_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSReallocateCollectable_2 = { kUnsignedType,4,NULL,0,0,&_NSReallocateCollectable_3};
	VPL_Parameter _NSReallocateCollectable_1 = { kPointerType,0,"void",1,0,&_NSReallocateCollectable_2};
	VPL_ExtProcedure _NSReallocateCollectable_F = {"NSReallocateCollectable",NSReallocateCollectable,&_NSReallocateCollectable_1,&_NSReallocateCollectable_R};

	VPL_Parameter _NSAllocateCollectable_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _NSAllocateCollectable_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSAllocateCollectable_1 = { kUnsignedType,4,NULL,0,0,&_NSAllocateCollectable_2};
	VPL_ExtProcedure _NSAllocateCollectable_F = {"NSAllocateCollectable",NSAllocateCollectable,&_NSAllocateCollectable_1,&_NSAllocateCollectable_R};

	VPL_Parameter _NSZoneFree_2 = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _NSZoneFree_1 = { kPointerType,0,"_NSZone",1,0,&_NSZoneFree_2};
	VPL_ExtProcedure _NSZoneFree_F = {"NSZoneFree",NSZoneFree,&_NSZoneFree_1,NULL};

	VPL_Parameter _NSZoneRealloc_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _NSZoneRealloc_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSZoneRealloc_2 = { kPointerType,0,"void",1,0,&_NSZoneRealloc_3};
	VPL_Parameter _NSZoneRealloc_1 = { kPointerType,0,"_NSZone",1,0,&_NSZoneRealloc_2};
	VPL_ExtProcedure _NSZoneRealloc_F = {"NSZoneRealloc",NSZoneRealloc,&_NSZoneRealloc_1,&_NSZoneRealloc_R};

	VPL_Parameter _NSZoneCalloc_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _NSZoneCalloc_3 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSZoneCalloc_2 = { kUnsignedType,4,NULL,0,0,&_NSZoneCalloc_3};
	VPL_Parameter _NSZoneCalloc_1 = { kPointerType,0,"_NSZone",1,0,&_NSZoneCalloc_2};
	VPL_ExtProcedure _NSZoneCalloc_F = {"NSZoneCalloc",NSZoneCalloc,&_NSZoneCalloc_1,&_NSZoneCalloc_R};

	VPL_Parameter _NSZoneMalloc_R = { kPointerType,0,"void",1,0,NULL};
	VPL_Parameter _NSZoneMalloc_2 = { kUnsignedType,4,NULL,0,0,NULL};
	VPL_Parameter _NSZoneMalloc_1 = { kPointerType,0,"_NSZone",1,0,&_NSZoneMalloc_2};
	VPL_ExtProcedure _NSZoneMalloc_F = {"NSZoneMalloc",NSZoneMalloc,&_NSZoneMalloc_1,&_NSZoneMalloc_R};

	VPL_Parameter _NSZoneFromPointer_R = { kPointerType,0,"_NSZone",1,0,NULL};
	VPL_Parameter _NSZoneFromPointer_1 = { kPointerType,0,"void",1,0,NULL};
	VPL_ExtProcedure _NSZoneFromPointer_F = {"NSZoneFromPointer",NSZoneFromPointer,&_NSZoneFromPointer_1,&_NSZoneFromPointer_R};

	VPL_Parameter _NSZoneName_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSZoneName_1 = { kPointerType,0,"_NSZone",1,0,NULL};
	VPL_ExtProcedure _NSZoneName_F = {"NSZoneName",NSZoneName,&_NSZoneName_1,&_NSZoneName_R};

	VPL_Parameter _NSSetZoneName_2 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSSetZoneName_1 = { kPointerType,0,"_NSZone",1,0,&_NSSetZoneName_2};
	VPL_ExtProcedure _NSSetZoneName_F = {"NSSetZoneName",NSSetZoneName,&_NSSetZoneName_1,NULL};

	VPL_Parameter _NSRecycleZone_1 = { kPointerType,0,"_NSZone",1,0,NULL};
	VPL_ExtProcedure _NSRecycleZone_F = {"NSRecycleZone",NSRecycleZone,&_NSRecycleZone_1,NULL};

	VPL_Parameter _NSCreateZone_R = { kPointerType,0,"_NSZone",1,0,NULL};
	VPL_Parameter _NSCreateZone_3 = { kIntType,1,NULL,0,0,NULL};
	VPL_Parameter _NSCreateZone_2 = { kUnsignedType,4,NULL,0,0,&_NSCreateZone_3};
	VPL_Parameter _NSCreateZone_1 = { kUnsignedType,4,NULL,0,0,&_NSCreateZone_2};
	VPL_ExtProcedure _NSCreateZone_F = {"NSCreateZone",NSCreateZone,&_NSCreateZone_1,&_NSCreateZone_R};

	VPL_Parameter _NSDefaultMallocZone_R = { kPointerType,0,"_NSZone",1,0,NULL};
	VPL_ExtProcedure _NSDefaultMallocZone_F = {"NSDefaultMallocZone",NSDefaultMallocZone,NULL,&_NSDefaultMallocZone_R};

	VPL_Parameter _NSLogv_2 = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _NSLogv_1 = { kPointerType,4,"objc_object",1,0,&_NSLogv_2};
	VPL_ExtProcedure _NSLogv_F = {"NSLogv",NSLogv,&_NSLogv_1,NULL};

	VPL_Parameter _NSLog_2 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _NSLog_1 = { kPointerType,4,"objc_object",1,0,&_NSLog_2};
	VPL_ExtProcedure _NSLog_F = {"NSLog",NSLog,&_NSLog_1,NULL};

	VPL_Parameter _NSGetSizeAndAlignment_R = { kPointerType,1,"char",1,0,NULL};
	VPL_Parameter _NSGetSizeAndAlignment_3 = { kPointerType,4,"unsigned long",1,0,NULL};
	VPL_Parameter _NSGetSizeAndAlignment_2 = { kPointerType,4,"unsigned long",1,0,&_NSGetSizeAndAlignment_3};
	VPL_Parameter _NSGetSizeAndAlignment_1 = { kPointerType,1,"char",1,1,&_NSGetSizeAndAlignment_2};
	VPL_ExtProcedure _NSGetSizeAndAlignment_F = {"NSGetSizeAndAlignment",NSGetSizeAndAlignment,&_NSGetSizeAndAlignment_1,&_NSGetSizeAndAlignment_R};

	VPL_Parameter _NSProtocolFromString_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSProtocolFromString_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSProtocolFromString_F = {"NSProtocolFromString",NSProtocolFromString,&_NSProtocolFromString_1,&_NSProtocolFromString_R};

	VPL_Parameter _NSStringFromProtocol_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSStringFromProtocol_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSStringFromProtocol_F = {"NSStringFromProtocol",NSStringFromProtocol,&_NSStringFromProtocol_1,&_NSStringFromProtocol_R};

	VPL_Parameter _NSClassFromString_R = { kPointerType,0,"objc_class",1,0,NULL};
	VPL_Parameter _NSClassFromString_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSClassFromString_F = {"NSClassFromString",NSClassFromString,&_NSClassFromString_1,&_NSClassFromString_R};

	VPL_Parameter _NSStringFromClass_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSStringFromClass_1 = { kPointerType,0,"objc_class",1,0,NULL};
	VPL_ExtProcedure _NSStringFromClass_F = {"NSStringFromClass",NSStringFromClass,&_NSStringFromClass_1,&_NSStringFromClass_R};

	VPL_Parameter _NSSelectorFromString_R = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_Parameter _NSSelectorFromString_1 = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_ExtProcedure _NSSelectorFromString_F = {"NSSelectorFromString",NSSelectorFromString,&_NSSelectorFromString_1,&_NSSelectorFromString_R};

	VPL_Parameter _NSStringFromSelector_R = { kPointerType,4,"objc_object",1,0,NULL};
	VPL_Parameter _NSStringFromSelector_1 = { kPointerType,0,"objc_selector",1,0,NULL};
	VPL_ExtProcedure _NSStringFromSelector_F = {"NSStringFromSelector",NSStringFromSelector,&_NSStringFromSelector_1,&_NSStringFromSelector_R};



#pragma mark ---------- Procedures Array ----------

VPL_DictionaryNode VPX_Cocoa_Procedures[] =	{
	{"NSIsControllerMarker",&_NSIsControllerMarker_F},
	{"NSOpenGLGetVersion",&_NSOpenGLGetVersion_F},
	{"NSOpenGLGetOption",&_NSOpenGLGetOption_F},
	{"NSOpenGLSetOption",&_NSOpenGLSetOption_F},
	{"glUniformMatrix4x3fv",&_glUniformMatrix4x3fv_F},
	{"glUniformMatrix3x4fv",&_glUniformMatrix3x4fv_F},
	{"glUniformMatrix4x2fv",&_glUniformMatrix4x2fv_F},
	{"glUniformMatrix2x4fv",&_glUniformMatrix2x4fv_F},
	{"glUniformMatrix3x2fv",&_glUniformMatrix3x2fv_F},
	{"glUniformMatrix2x3fv",&_glUniformMatrix2x3fv_F},
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
	{"glEndConditionalRenderNV",&_glEndConditionalRenderNV_F},
	{"glBeginConditionalRenderNV",&_glBeginConditionalRenderNV_F},
	{"glPointParameterivNV",&_glPointParameterivNV_F},
	{"glPointParameteriNV",&_glPointParameteriNV_F},
	{"glPNTrianglesfATIX",&_glPNTrianglesfATIX_F},
	{"glPNTrianglesiATIX",&_glPNTrianglesiATIX_F},
	{"glStencilFuncSeparateATI",&_glStencilFuncSeparateATI_F},
	{"glStencilOpSeparateATI",&_glStencilOpSeparateATI_F},
	{"glBlendEquationSeparateATI",&_glBlendEquationSeparateATI_F},
	{"glPNTrianglesfATI",&_glPNTrianglesfATI_F},
	{"glPNTrianglesiATI",&_glPNTrianglesiATI_F},
	{"glGetObjectParameterivAPPLE",&_glGetObjectParameterivAPPLE_F},
	{"glObjectUnpurgeableAPPLE",&_glObjectUnpurgeableAPPLE_F},
	{"glObjectPurgeableAPPLE",&_glObjectPurgeableAPPLE_F},
	{"glFlushMappedBufferRangeAPPLE",&_glFlushMappedBufferRangeAPPLE_F},
	{"glBufferParameteriAPPLE",&_glBufferParameteriAPPLE_F},
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
	{"glProvokingVertexEXT",&_glProvokingVertexEXT_F},
	{"glIsEnabledIndexedEXT",&_glIsEnabledIndexedEXT_F},
	{"glDisableIndexedEXT",&_glDisableIndexedEXT_F},
	{"glEnableIndexedEXT",&_glEnableIndexedEXT_F},
	{"glColorMaskIndexedEXT",&_glColorMaskIndexedEXT_F},
	{"glGetFragDataLocationEXT",&_glGetFragDataLocationEXT_F},
	{"glBindFragDataLocationEXT",&_glBindFragDataLocationEXT_F},
	{"glGetUniformuivEXT",&_glGetUniformuivEXT_F},
	{"glUniform4uivEXT",&_glUniform4uivEXT_F},
	{"glUniform3uivEXT",&_glUniform3uivEXT_F},
	{"glUniform2uivEXT",&_glUniform2uivEXT_F},
	{"glUniform1uivEXT",&_glUniform1uivEXT_F},
	{"glUniform4uiEXT",&_glUniform4uiEXT_F},
	{"glUniform3uiEXT",&_glUniform3uiEXT_F},
	{"glUniform2uiEXT",&_glUniform2uiEXT_F},
	{"glUniform1uiEXT",&_glUniform1uiEXT_F},
	{"glGetVertexAttribIuivEXT",&_glGetVertexAttribIuivEXT_F},
	{"glGetVertexAttribIivEXT",&_glGetVertexAttribIivEXT_F},
	{"glVertexAttribIPointerEXT",&_glVertexAttribIPointerEXT_F},
	{"glVertexAttribI4usvEXT",&_glVertexAttribI4usvEXT_F},
	{"glVertexAttribI4ubvEXT",&_glVertexAttribI4ubvEXT_F},
	{"glVertexAttribI4svEXT",&_glVertexAttribI4svEXT_F},
	{"glVertexAttribI4bvEXT",&_glVertexAttribI4bvEXT_F},
	{"glVertexAttribI4uivEXT",&_glVertexAttribI4uivEXT_F},
	{"glVertexAttribI3uivEXT",&_glVertexAttribI3uivEXT_F},
	{"glVertexAttribI2uivEXT",&_glVertexAttribI2uivEXT_F},
	{"glVertexAttribI1uivEXT",&_glVertexAttribI1uivEXT_F},
	{"glVertexAttribI4ivEXT",&_glVertexAttribI4ivEXT_F},
	{"glVertexAttribI3ivEXT",&_glVertexAttribI3ivEXT_F},
	{"glVertexAttribI2ivEXT",&_glVertexAttribI2ivEXT_F},
	{"glVertexAttribI1ivEXT",&_glVertexAttribI1ivEXT_F},
	{"glVertexAttribI4uiEXT",&_glVertexAttribI4uiEXT_F},
	{"glVertexAttribI3uiEXT",&_glVertexAttribI3uiEXT_F},
	{"glVertexAttribI2uiEXT",&_glVertexAttribI2uiEXT_F},
	{"glVertexAttribI1uiEXT",&_glVertexAttribI1uiEXT_F},
	{"glVertexAttribI4iEXT",&_glVertexAttribI4iEXT_F},
	{"glVertexAttribI3iEXT",&_glVertexAttribI3iEXT_F},
	{"glVertexAttribI2iEXT",&_glVertexAttribI2iEXT_F},
	{"glVertexAttribI1iEXT",&_glVertexAttribI1iEXT_F},
	{"glGetTexParameterIuivEXT",&_glGetTexParameterIuivEXT_F},
	{"glGetTexParameterIivEXT",&_glGetTexParameterIivEXT_F},
	{"glTexParameterIuivEXT",&_glTexParameterIuivEXT_F},
	{"glTexParameterIivEXT",&_glTexParameterIivEXT_F},
	{"glClearColorIuiEXT",&_glClearColorIuiEXT_F},
	{"glClearColorIiEXT",&_glClearColorIiEXT_F},
	{"glGetUniformOffsetEXT",&_glGetUniformOffsetEXT_F},
	{"glGetUniformBufferSizeEXT",&_glGetUniformBufferSizeEXT_F},
	{"glUniformBufferEXT",&_glUniformBufferEXT_F},
	{"glGetBooleanIndexedvEXT",&_glGetBooleanIndexedvEXT_F},
	{"glGetIntegerIndexedvEXT",&_glGetIntegerIndexedvEXT_F},
	{"glGetTransformFeedbackVaryingEXT",&_glGetTransformFeedbackVaryingEXT_F},
	{"glTransformFeedbackVaryingsEXT",&_glTransformFeedbackVaryingsEXT_F},
	{"glEndTransformFeedbackEXT",&_glEndTransformFeedbackEXT_F},
	{"glBeginTransformFeedbackEXT",&_glBeginTransformFeedbackEXT_F},
	{"glBindBufferBaseEXT",&_glBindBufferBaseEXT_F},
	{"glBindBufferOffsetEXT",&_glBindBufferOffsetEXT_F},
	{"glBindBufferRangeEXT",&_glBindBufferRangeEXT_F},
	{"glFramebufferTextureLayer",&_glFramebufferTextureLayer_F},
	{"glRenderbufferStorageMultisample",&_glRenderbufferStorageMultisample_F},
	{"glBlitFramebuffer",&_glBlitFramebuffer_F},
	{"glGenerateMipmap",&_glGenerateMipmap_F},
	{"glGetFramebufferAttachmentParameteriv",&_glGetFramebufferAttachmentParameteriv_F},
	{"glFramebufferRenderbuffer",&_glFramebufferRenderbuffer_F},
	{"glFramebufferTexture3D",&_glFramebufferTexture3D_F},
	{"glFramebufferTexture2D",&_glFramebufferTexture2D_F},
	{"glFramebufferTexture1D",&_glFramebufferTexture1D_F},
	{"glCheckFramebufferStatus",&_glCheckFramebufferStatus_F},
	{"glGenFramebuffers",&_glGenFramebuffers_F},
	{"glDeleteFramebuffers",&_glDeleteFramebuffers_F},
	{"glBindFramebuffer",&_glBindFramebuffer_F},
	{"glIsFramebuffer",&_glIsFramebuffer_F},
	{"glGetRenderbufferParameteriv",&_glGetRenderbufferParameteriv_F},
	{"glRenderbufferStorage",&_glRenderbufferStorage_F},
	{"glGenRenderbuffers",&_glGenRenderbuffers_F},
	{"glDeleteRenderbuffers",&_glDeleteRenderbuffers_F},
	{"glBindRenderbuffer",&_glBindRenderbuffer_F},
	{"glIsRenderbuffer",&_glIsRenderbuffer_F},
	{"glFramebufferTextureLayerEXT",&_glFramebufferTextureLayerEXT_F},
	{"glFramebufferTextureFaceEXT",&_glFramebufferTextureFaceEXT_F},
	{"glFramebufferTextureEXT",&_glFramebufferTextureEXT_F},
	{"glProgramParameteriEXT",&_glProgramParameteriEXT_F},
	{"glRenderbufferStorageMultisampleEXT",&_glRenderbufferStorageMultisampleEXT_F},
	{"glBlitFramebufferEXT",&_glBlitFramebufferEXT_F},
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
	{"glBlendEquationEXT",&_glBlendEquationEXT_F},
	{"glBlendColorEXT",&_glBlendColorEXT_F},
	{"glUniformBlockBinding",&_glUniformBlockBinding_F},
	{"glGetIntegeri_v",&_glGetIntegeri_v_F},
	{"glBindBufferBase",&_glBindBufferBase_F},
	{"glBindBufferRange",&_glBindBufferRange_F},
	{"glGetActiveUniformBlockName",&_glGetActiveUniformBlockName_F},
	{"glGetActiveUniformBlockiv",&_glGetActiveUniformBlockiv_F},
	{"glGetUniformBlockIndex",&_glGetUniformBlockIndex_F},
	{"glGetActiveUniformName",&_glGetActiveUniformName_F},
	{"glGetActiveUniformsiv",&_glGetActiveUniformsiv_F},
	{"glGetUniformIndices",&_glGetUniformIndices_F},
	{"glVertexAttribDivisorARB",&_glVertexAttribDivisorARB_F},
	{"glDrawElementsInstancedARB",&_glDrawElementsInstancedARB_F},
	{"glDrawArraysInstancedARB",&_glDrawArraysInstancedARB_F},
	{"glClampColorARB",&_glClampColorARB_F},
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
	{"glProgramLocalParameters4fvEXT",&_glProgramLocalParameters4fvEXT_F},
	{"glProgramEnvParameters4fvEXT",&_glProgramEnvParameters4fvEXT_F},
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
	{"NSInterfaceStyleForKey",&_NSInterfaceStyleForKey_F},
	{"NSGetFileTypes",&_NSGetFileTypes_F},
	{"NSGetFileType",&_NSGetFileType_F},
	{"NSCreateFileContentsPboardType",&_NSCreateFileContentsPboardType_F},
	{"NSCreateFilenamePboardType",&_NSCreateFilenamePboardType_F},
	{"NSReleaseAlertPanel",&_NSReleaseAlertPanel_F},
	{"NSGetCriticalAlertPanel",&_NSGetCriticalAlertPanel_F},
	{"NSGetInformationalAlertPanel",&_NSGetInformationalAlertPanel_F},
	{"NSGetAlertPanel",&_NSGetAlertPanel_F},
	{"NSBeginCriticalAlertSheet",&_NSBeginCriticalAlertSheet_F},
	{"NSBeginInformationalAlertSheet",&_NSBeginInformationalAlertSheet_F},
	{"NSBeginAlertSheet",&_NSBeginAlertSheet_F},
	{"NSRunCriticalAlertPanelRelativeToWindow",&_NSRunCriticalAlertPanelRelativeToWindow_F},
	{"NSRunInformationalAlertPanelRelativeToWindow",&_NSRunInformationalAlertPanelRelativeToWindow_F},
	{"NSRunAlertPanelRelativeToWindow",&_NSRunAlertPanelRelativeToWindow_F},
	{"NSRunCriticalAlertPanel",&_NSRunCriticalAlertPanel_F},
	{"NSRunInformationalAlertPanel",&_NSRunInformationalAlertPanel_F},
	{"NSRunAlertPanel",&_NSRunAlertPanel_F},
	{"NSConvertGlyphsToPackedGlyphs",&_NSConvertGlyphsToPackedGlyphs_F},
	{"NSDrawNinePartImage",&_NSDrawNinePartImage_F},
	{"NSDrawThreePartImage",&_NSDrawThreePartImage_F},
	{"NSUnregisterServicesProvider",&_NSUnregisterServicesProvider_F},
	{"NSRegisterServicesProvider",&_NSRegisterServicesProvider_F},
	{"NSPerformService",&_NSPerformService_F},
	{"NSUpdateDynamicServices",&_NSUpdateDynamicServices_F},
	{"NSSetShowsServicesMenuItem",&_NSSetShowsServicesMenuItem_F},
	{"NSShowsServicesMenuItem",&_NSShowsServicesMenuItem_F},
	{"NSApplicationLoad",&_NSApplicationLoad_F},
	{"NSWindowListForContext",&_NSWindowListForContext_F},
	{"NSCountWindowsForContext",&_NSCountWindowsForContext_F},
	{"NSWindowList",&_NSWindowList_F},
	{"NSCountWindows",&_NSCountWindows_F},
	{"NSShowAnimationEffect",&_NSShowAnimationEffect_F},
	{"NSEnableScreenUpdates",&_NSEnableScreenUpdates_F},
	{"NSDisableScreenUpdates",&_NSDisableScreenUpdates_F},
	{"NSSetFocusRingStyle",&_NSSetFocusRingStyle_F},
	{"NSDrawWindowBackground",&_NSDrawWindowBackground_F},
	{"NSDottedFrameRect",&_NSDottedFrameRect_F},
	{"NSDrawLightBezel",&_NSDrawLightBezel_F},
	{"NSDrawDarkBezel",&_NSDrawDarkBezel_F},
	{"NSDrawColorTiledRects",&_NSDrawColorTiledRects_F},
	{"NSGetWindowServerMemory",&_NSGetWindowServerMemory_F},
	{"NSBeep",&_NSBeep_F},
	{"NSHighlightRect",&_NSHighlightRect_F},
	{"NSCopyBits",&_NSCopyBits_F},
	{"NSDrawBitmap",&_NSDrawBitmap_F},
	{"NSReadPixel",&_NSReadPixel_F},
	{"NSEraseRect",&_NSEraseRect_F},
	{"NSDrawButton",&_NSDrawButton_F},
	{"NSDrawWhiteBezel",&_NSDrawWhiteBezel_F},
	{"NSDrawGroove",&_NSDrawGroove_F},
	{"NSDrawGrayBezel",&_NSDrawGrayBezel_F},
	{"NSDrawTiledRects",&_NSDrawTiledRects_F},
	{"NSRectClipList",&_NSRectClipList_F},
	{"NSRectClip",&_NSRectClip_F},
	{"NSFrameRectWithWidthUsingOperation",&_NSFrameRectWithWidthUsingOperation_F},
	{"NSFrameRectWithWidth",&_NSFrameRectWithWidth_F},
	{"NSFrameRect",&_NSFrameRect_F},
	{"NSRectFillListWithColorsUsingOperation",&_NSRectFillListWithColorsUsingOperation_F},
	{"NSRectFillListUsingOperation",&_NSRectFillListUsingOperation_F},
	{"NSRectFillUsingOperation",&_NSRectFillUsingOperation_F},
	{"NSRectFillListWithColors",&_NSRectFillListWithColors_F},
	{"NSRectFillListWithGrays",&_NSRectFillListWithGrays_F},
	{"NSRectFillList",&_NSRectFillList_F},
	{"NSRectFill",&_NSRectFill_F},
	{"NSAvailableWindowDepths",&_NSAvailableWindowDepths_F},
	{"NSNumberOfColorComponents",&_NSNumberOfColorComponents_F},
	{"NSBitsPerPixelFromDepth",&_NSBitsPerPixelFromDepth_F},
	{"NSBitsPerSampleFromDepth",&_NSBitsPerSampleFromDepth_F},
	{"NSColorSpaceFromDepth",&_NSColorSpaceFromDepth_F},
	{"NSPlanarFromDepth",&_NSPlanarFromDepth_F},
	{"NSBestDepth",&_NSBestDepth_F},
	{"NSRectFromString",&_NSRectFromString_F},
	{"NSSizeFromString",&_NSSizeFromString_F},
	{"NSPointFromString",&_NSPointFromString_F},
	{"NSStringFromRect",&_NSStringFromRect_F},
	{"NSStringFromSize",&_NSStringFromSize_F},
	{"NSStringFromPoint",&_NSStringFromPoint_F},
	{"NSIntersectsRect",&_NSIntersectsRect_F},
	{"NSContainsRect",&_NSContainsRect_F},
	{"NSMouseInRect",&_NSMouseInRect_F},
	{"NSPointInRect",&_NSPointInRect_F},
	{"NSDivideRect",&_NSDivideRect_F},
	{"NSOffsetRect",&_NSOffsetRect_F},
	{"NSIntersectionRect",&_NSIntersectionRect_F},
	{"NSUnionRect",&_NSUnionRect_F},
	{"NSIntegralRect",&_NSIntegralRect_F},
	{"NSInsetRect",&_NSInsetRect_F},
	{"NSIsEmptyRect",&_NSIsEmptyRect_F},
	{"NSEqualRects",&_NSEqualRects_F},
	{"NSEqualSizes",&_NSEqualSizes_F},
	{"NSEqualPoints",&_NSEqualPoints_F},
	{"NSSearchPathForDirectoriesInDomains",&_NSSearchPathForDirectoriesInDomains_F},
	{"NSOpenStepRootDirectory",&_NSOpenStepRootDirectory_F},
	{"NSTemporaryDirectory",&_NSTemporaryDirectory_F},
	{"NSHomeDirectoryForUser",&_NSHomeDirectoryForUser_F},
	{"NSHomeDirectory",&_NSHomeDirectory_F},
	{"NSFullUserName",&_NSFullUserName_F},
	{"NSUserName",&_NSUserName_F},
	{"NSDecimalString",&_NSDecimalString_F},
	{"NSDecimalMultiplyByPowerOf10",&_NSDecimalMultiplyByPowerOf10_F},
	{"NSDecimalPower",&_NSDecimalPower_F},
	{"NSDecimalDivide",&_NSDecimalDivide_F},
	{"NSDecimalMultiply",&_NSDecimalMultiply_F},
	{"NSDecimalSubtract",&_NSDecimalSubtract_F},
	{"NSDecimalAdd",&_NSDecimalAdd_F},
	{"NSDecimalNormalize",&_NSDecimalNormalize_F},
	{"NSDecimalRound",&_NSDecimalRound_F},
	{"NSDecimalCompare",&_NSDecimalCompare_F},
	{"NSDecimalCompact",&_NSDecimalCompact_F},
	{"NSDecimalCopy",&_NSDecimalCopy_F},
	{"NSRangeFromString",&_NSRangeFromString_F},
	{"NSStringFromRange",&_NSStringFromRange_F},
	{"NSIntersectionRange",&_NSIntersectionRange_F},
	{"NSUnionRange",&_NSUnionRange_F},
	{"NSExtraRefCount",&_NSExtraRefCount_F},
	{"NSDecrementExtraRefCountWasZero",&_NSDecrementExtraRefCountWasZero_F},
	{"NSIncrementExtraRefCount",&_NSIncrementExtraRefCount_F},
	{"NSShouldRetainWithZone",&_NSShouldRetainWithZone_F},
	{"NSCopyObject",&_NSCopyObject_F},
	{"NSDeallocateObject",&_NSDeallocateObject_F},
	{"NSAllocateObject",&_NSAllocateObject_F},
	{"NSRealMemoryAvailable",&_NSRealMemoryAvailable_F},
	{"NSCopyMemoryPages",&_NSCopyMemoryPages_F},
	{"NSDeallocateMemoryPages",&_NSDeallocateMemoryPages_F},
	{"NSAllocateMemoryPages",&_NSAllocateMemoryPages_F},
	{"NSRoundDownToMultipleOfPageSize",&_NSRoundDownToMultipleOfPageSize_F},
	{"NSRoundUpToMultipleOfPageSize",&_NSRoundUpToMultipleOfPageSize_F},
	{"NSLogPageSize",&_NSLogPageSize_F},
	{"NSPageSize",&_NSPageSize_F},
	{"NSReallocateCollectable",&_NSReallocateCollectable_F},
	{"NSAllocateCollectable",&_NSAllocateCollectable_F},
	{"NSZoneFree",&_NSZoneFree_F},
	{"NSZoneRealloc",&_NSZoneRealloc_F},
	{"NSZoneCalloc",&_NSZoneCalloc_F},
	{"NSZoneMalloc",&_NSZoneMalloc_F},
	{"NSZoneFromPointer",&_NSZoneFromPointer_F},
	{"NSZoneName",&_NSZoneName_F},
	{"NSSetZoneName",&_NSSetZoneName_F},
	{"NSRecycleZone",&_NSRecycleZone_F},
	{"NSCreateZone",&_NSCreateZone_F},
	{"NSDefaultMallocZone",&_NSDefaultMallocZone_F},
	{"NSLogv",&_NSLogv_F},
	{"NSLog",&_NSLog_F},
	{"NSGetSizeAndAlignment",&_NSGetSizeAndAlignment_F},
	{"NSProtocolFromString",&_NSProtocolFromString_F},
	{"NSStringFromProtocol",&_NSStringFromProtocol_F},
	{"NSClassFromString",&_NSClassFromString_F},
	{"NSStringFromClass",&_NSStringFromClass_F},
	{"NSSelectorFromString",&_NSSelectorFromString_F},
	{"NSStringFromSelector",&_NSStringFromSelector_F},

	{"NSSizeToCGSize",&_NSSizeToCGSize_F},
	{"NSSizeFromCGSize",&_NSSizeFromCGSize_F},
	{"NSPointToCGPoint",&_NSPointToCGPoint_F},
	{"NSPointFromCGPoint",&_NSPointFromCGPoint_F},
	{"NSRectToCGRect",&_NSRectToCGRect_F},
	{"NSRectFromCGRect",&_NSRectFromCGRect_F},
	{"NSHeight",&_NSHeight_F},
	{"NSWidth",&_NSWidth_F},
	{"NSMinY",&_NSMinY_F},
	{"NSMinX",&_NSMinX_F},
	{"NSMidY",&_NSMidY_F},
	{"NSMidX",&_NSMidX_F},
	{"NSMaxY",&_NSMaxY_F},
	{"NSMaxX",&_NSMaxX_F},
	{"NSMakeRect",&_NSMakeRect_F},
	{"NSMakeSize",&_NSMakeSize_F},
	{"NSMakePoint",&_NSMakePoint_F},
	
//	{"NSDocument\\alloc",&_NSNSDocument_alloc_F},

};

#pragma mark ---------- Procedures Number ----------

Nat4	VPX_Cocoa_Procedures_Number = 1135 + 17;

#pragma mark ---------- Procedures Load ----------

#define VPX_MacOSX_Procedures_Debug_MissingProcs 0

bool MacOSX_IsStringSuffix( vpl_StringPtr inString, vpl_StringPtr inSuffix );
bool MacOSX_IsStringSuffix( vpl_StringPtr inString, vpl_StringPtr inSuffix )
{
	Nat4			stringLen = strlen( inString );
	Nat4			suffixLen = strlen( inSuffix );
	vpl_StringPtr	subString = inString + (stringLen - suffixLen );
	
	if( strncmp(subString, inSuffix, suffixLen) == 0 ) return TRUE;
	
	return FALSE;	
}

bool MacOSX_IsFunctionNameCallback( vpl_StringPtr inFuncName );
bool MacOSX_IsFunctionNameCallback( vpl_StringPtr inFuncName )
{
	if( MacOSX_IsStringSuffix( inFuncName, "UPP" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "ProcPtr" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "Function" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "CallBack" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "Handler" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "_proc" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "Procedure" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "Ptr" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "TPP" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "Callback" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "Callback0" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "Callback1" ) ) return TRUE;
	if( MacOSX_IsStringSuffix( inFuncName, "Callback2" ) ) return TRUE;
	
	return FALSE;
}

void* MacOSX_FindFunctionPtrForName ( CFStringRef bundleIDCFString, vpl_StringPtr inName );
void* MacOSX_FindFunctionPtrForName ( CFStringRef bundleIDCFString, vpl_StringPtr inName )
{
	CFStringRef			inNameCFString = NULL;
	CFStringRef			systemBundleID = CFSTR("com.apple.System");
	CFStringRef			iokitBundleID = CFSTR("com.apple.framework.IOKit");
	void*				theFunction = NULL;
	
//	bundleIDCFString = CFStringCreateWithCString( kCFAllocatorDefault, inBundleID, kCFStringEncodingUTF8 );
	inNameCFString = CFStringCreateWithCString( kCFAllocatorDefault, inName, kCFStringEncodingUTF8 );

	if(( inNameCFString != NULL ) && ( bundleIDCFString != NULL ))
			theFunction = CFBundleGetFunctionPointerForName( CFBundleGetBundleWithIdentifier(bundleIDCFString), inNameCFString );
			
	if( theFunction == NULL )
			theFunction = CFBundleGetFunctionPointerForName( CFBundleGetBundleWithIdentifier(systemBundleID), inNameCFString );

	if( theFunction == NULL )
			theFunction = CFBundleGetFunctionPointerForName( CFBundleGetBundleWithIdentifier(iokitBundleID), inNameCFString );

	if( inNameCFString != NULL ) CFRelease( inNameCFString );
//	if( bundleIDCFString != NULL ) CFRelease( bundleIDCFString );

	if ( VPX_MacOSX_Procedures_Debug_MissingProcs ) 
		if(( theFunction == NULL ) && !(MacOSX_IsFunctionNameCallback(inName)) ) printf( "FindFunctionPtr in Carbon for %s: %s\n", inName, (theFunction!=NULL) ? "Yes" : "No" );

	return theFunction;
}

void	resolve_MacOSX_Procedures( Nat4 inProcNum, VPL_DictionaryNode* inProcArray );
void	resolve_MacOSX_Procedures( Nat4 inProcNum, VPL_DictionaryNode* inProcArray )
{
	Nat4				counter = 0;
	CFStringRef			theProcsBundle = CFSTR("com.apple.Cocoa");
	CFStringRef			systemBundlePath = CFSTR("/System/Library/Frameworks/System.framework");
	CFURLRef			systemBundleURL = CFURLCreateWithString( NULL, systemBundlePath, NULL );
	CFBundleRef			systemBundle = CFBundleCreate( NULL, systemBundleURL );
	VPL_ExtProcedure*	theProcRec;
		
	if( systemBundle ) CFBundleLoadExecutable( systemBundle );
		else printf( "No system bundle!\n");

	for( counter=0; counter<inProcNum; counter++ )
	{
		theProcRec = inProcArray[counter].object;
		if( theProcRec->functionPtr == NULL ) theProcRec->functionPtr = MacOSX_FindFunctionPtrForName( theProcsBundle, theProcRec->name );
	}
	
}


#pragma export on

Nat4	load_Cocoa_Procedures(V_Environment environment,char *bundleID);
Nat4	load_Cocoa_Procedures(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

	Nat4				result = 0;
	V_Dictionary		dictionary = NULL;
	V_DictionaryNode	tempNodes = NULL;
	V_ExtProcedure		tempProcedure = NULL;
	V_Parameter			tempParameter = NULL;
	Class				tempClass = NULL;
	Class				superClass = NULL;
	Method				*tempMethodList = NULL;
	unsigned int		count = 0;
	unsigned int		counter = 0;
	Int1				*backslash = "\\";
	const char			*tempMethodName;
	Int1				*tempName = NULL;
	Int1				*fullName = NULL;
	
	Nat4				parameterCounter = 0;
	Nat4				numberOfParameters = 0;
	
	Nat4				numClasses = 0;
	Class				*classes = NULL;
	Nat4				classCounter = 0;
	const char			*tempClassName;
	
	dictionary = environment->externalProceduresTable;
	result = add_nodes(dictionary,VPX_Cocoa_Procedures_Number,VPX_Cocoa_Procedures);

//		resolve_MacOSX_Procedures( VPX_Cocoa_Procedures_Number, VPX_Cocoa_Procedures );
	
	if(environment->compiled != kTRUE) {
	numClasses = objc_getClassList(NULL, 0);
	
	if (numClasses > 0 )
	{
		classes = malloc(sizeof(Class) * numClasses);
		numClasses = objc_getClassList(classes, numClasses);

//		fprintf(stderr,"The number of registered classes is %i\n",(int) numClasses);
		
		for(classCounter = 0; classCounter < numClasses; classCounter++){

//			tempClass = (Class) objc_getClass("NSDocument");
		
			tempClass = classes[classCounter];
			tempClassName = class_getName(tempClass);
			if(tempClassName[0] != '_') {

//				fprintf(stderr,"Full name of class is %s\n",tempClassName);

				tempMethodList = class_copyMethodList(object_getClass(tempClass), &count);
				for(counter = 0; counter < count; counter++){
					Method	tempMethod = tempMethodList[counter];

					tempMethodName = sel_getName(method_getName(tempMethod));
					if(tempMethodName[0] != '_') {
			
						tempName = new_cat_string((Int1 *) tempClassName,backslash , environment );
						fullName = new_cat_string( tempName, (Int1 *)tempMethodName , environment );
		
//		fprintf(stderr,"Full name of class method is %s\n",fullName);
		
						tempProcedure = extProcedure_new(fullName,dictionary,NULL);
						extProcedure_add_return(tempProcedure,kPointerType,4,"objc_object",1);
		
						numberOfParameters = method_getNumberOfArguments(tempMethod);
//		fprintf(stderr,"Number of parameters is %i\n",(int) numberOfParameters);
		
						for(parameterCounter = 0; parameterCounter < numberOfParameters; parameterCounter++){
							Nat4 size = 0;
							Int1 *name = NULL;
							Nat4 indirection = 0;
							Nat4 constantFlag = 0;
							Nat4 theParameterType = 0;
		
							char tempCode = 0;
							char *theCode = NULL;
			
							theCode = method_copyArgumentType(tempMethod,parameterCounter);
							tempCode = theCode[0];
							if(tempCode == 'r' || tempCode == 'R' || tempCode == 'n' || tempCode == 'N' || tempCode == 'o' || tempCode == 'O'
							   || tempCode == 'V') tempCode = theCode[1];
			
							if(tempCode == 'c') theParameterType = kCharType;
							else if(tempCode == 'i') theParameterType = kIntType;
							else if(tempCode == 's') theParameterType = kShortType;
							else if(tempCode == 'l') theParameterType = kLongType;
							else if(tempCode == 'q') theParameterType = kLongLongType;
							else if(tempCode == 'C') theParameterType = kUnsignedCharType;
							else if(tempCode == 'I') theParameterType = kUnsignedIntType;
							else if(tempCode == 'S') theParameterType = kUnsignedShortType;
							else if(tempCode == 'L') theParameterType = kUnsignedLongType;
							else if(tempCode == 'Q') theParameterType = kUnsignedLongLongType;
							else if(tempCode == 'f') theParameterType = kFloatType;
							else if(tempCode == 'd') theParameterType = kDoubleType;
							else if(tempCode == 'B') theParameterType = kBoolType;
							else if(tempCode == 'v') theParameterType = kVoidType;
							else if(tempCode == '*') theParameterType = kCharStringType;
							else if(tempCode == '@') theParameterType = kObjectType;
							else if(tempCode == '#') theParameterType = kClassType;
							else if(tempCode == ':') theParameterType = kSelectorType;
							else if(tempCode == '{') theParameterType = kStructureType;
							else if(tempCode == '^') theParameterType = kPointerType;
			
							free(theCode);
			
							if(parameterCounter > 1) extProcedure_add_parameter(tempProcedure,theParameterType,size,name,indirection,constantFlag);
		
						}
		
						free(tempName);
					}
				}
				if(tempMethodList) free(tempMethodList);

				superClass = class_getSuperclass(tempClass);
				while(superClass != NULL){
					tempMethodList = class_copyMethodList(object_getClass(superClass), &count);
					for(counter = 0; counter < count; counter++){
					Method	tempMethod = tempMethodList[counter];
					
					tempMethodName = sel_getName(method_getName(tempMethod));
					if(tempMethodName[0] != '_') {
						
						tempName = new_cat_string((Int1 *) tempClassName,backslash , environment );
						fullName = new_cat_string( tempName, (Int1 *)tempMethodName , environment );
						
						//		fprintf(stderr,"Full name of class method is %s\n",fullName);
						
						tempProcedure = extProcedure_new(fullName,dictionary,NULL);
						extProcedure_add_return(tempProcedure,kPointerType,4,"objc_object",1);
						
						numberOfParameters = method_getNumberOfArguments(tempMethod);
						//		fprintf(stderr,"Number of parameters is %i\n",(int) numberOfParameters);
						
						for(parameterCounter = 0; parameterCounter < numberOfParameters; parameterCounter++){
							Nat4 size = 0;
							Int1 *name = NULL;
							Nat4 indirection = 0;
							Nat4 constantFlag = 0;
							Nat4 theParameterType = 0;
							
							char tempCode = 0;
							char *theCode = NULL;
							
							theCode = method_copyArgumentType(tempMethod,parameterCounter);
							tempCode = theCode[0];
							if(tempCode == 'r' || tempCode == 'R' || tempCode == 'n' || tempCode == 'N' || tempCode == 'o' || tempCode == 'O'
							   || tempCode == 'V') tempCode = theCode[1];
							
							if(tempCode == 'c') theParameterType = kCharType;
							else if(tempCode == 'i') theParameterType = kIntType;
							else if(tempCode == 's') theParameterType = kShortType;
							else if(tempCode == 'l') theParameterType = kLongType;
							else if(tempCode == 'q') theParameterType = kLongLongType;
							else if(tempCode == 'C') theParameterType = kUnsignedCharType;
							else if(tempCode == 'I') theParameterType = kUnsignedIntType;
							else if(tempCode == 'S') theParameterType = kUnsignedShortType;
							else if(tempCode == 'L') theParameterType = kUnsignedLongType;
							else if(tempCode == 'Q') theParameterType = kUnsignedLongLongType;
							else if(tempCode == 'f') theParameterType = kFloatType;
							else if(tempCode == 'd') theParameterType = kDoubleType;
							else if(tempCode == 'B') theParameterType = kBoolType;
							else if(tempCode == 'v') theParameterType = kVoidType;
							else if(tempCode == '*') theParameterType = kCharStringType;
							else if(tempCode == '@') theParameterType = kObjectType;
							else if(tempCode == '#') theParameterType = kClassType;
							else if(tempCode == ':') theParameterType = kSelectorType;
							else if(tempCode == '{') theParameterType = kStructureType;
							else if(tempCode == '^') theParameterType = kPointerType;
							
							free(theCode);
							
							if(parameterCounter > 1) extProcedure_add_parameter(tempProcedure,theParameterType,size,name,indirection,constantFlag);
							
						}
						
						free(tempName);
					}
				}
					if(tempMethodList) free(tempMethodList);
					superClass = class_getSuperclass(superClass);
				}
				
				tempMethodList = class_copyMethodList(tempClass, &count);
				for(counter = 0; counter < count; counter++){
					Method	tempMethod = tempMethodList[counter];
					
					tempMethodName = sel_getName(method_getName(tempMethod));
					 
					if(tempMethodName[0] != '_'  && get_extProcedure(dictionary,(Int1 *)tempMethodName) == NULL) {
						tempProcedure = extProcedure_new((Int1 *)tempMethodName,dictionary,NULL);
						extProcedure_add_return(tempProcedure,kPointerType,4,"objc_object",1);
						
						numberOfParameters = method_getNumberOfArguments(tempMethod);
						
						for(parameterCounter = 0; parameterCounter < numberOfParameters; parameterCounter++){
							Nat4 size = 0;
							Int1 *name = NULL;
							Nat4 indirection = 0;
							Nat4 constantFlag = 0;
							Nat4 theParameterType = 0;
							
							char tempCode = 0;
							char *theCode = NULL;
							
							theCode = method_copyArgumentType(tempMethod,parameterCounter);
							tempCode = theCode[0];
							if(tempCode == 'r' || tempCode == 'R' || tempCode == 'n' || tempCode == 'N' || tempCode == 'o' || tempCode == 'O'
							   || tempCode == 'V') tempCode = theCode[1];
							
							if(tempCode == 'c') theParameterType = kCharType;
							else if(tempCode == 'i') theParameterType = kIntType;
							else if(tempCode == 's') theParameterType = kShortType;
							else if(tempCode == 'l') theParameterType = kLongType;
							else if(tempCode == 'q') theParameterType = kLongLongType;
							else if(tempCode == 'C') theParameterType = kUnsignedCharType;
							else if(tempCode == 'I') theParameterType = kUnsignedIntType;
							else if(tempCode == 'S') theParameterType = kUnsignedShortType;
							else if(tempCode == 'L') theParameterType = kUnsignedLongType;
							else if(tempCode == 'Q') theParameterType = kUnsignedLongLongType;
							else if(tempCode == 'f') theParameterType = kFloatType;
							else if(tempCode == 'd') theParameterType = kDoubleType;
							else if(tempCode == 'B') theParameterType = kBoolType;
							else if(tempCode == 'v') theParameterType = kVoidType;
							else if(tempCode == '*') theParameterType = kCharStringType;
							else if(tempCode == '@') theParameterType = kObjectType;
							else if(tempCode == '#') theParameterType = kClassType;
							else if(tempCode == ':') theParameterType = kSelectorType;
							else if(tempCode == '{') theParameterType = kStructureType;
							else if(tempCode == '^') theParameterType = kPointerType;
							
							free(theCode);
							
							if(parameterCounter > 0) extProcedure_add_parameter(tempProcedure,theParameterType,size,name,indirection,constantFlag);
							
						}
					}
 				}
 				if(tempMethodList) free(tempMethodList);
			}
		}
		free(classes);
	}
	
	}
	
	return result;
}

#pragma export off
