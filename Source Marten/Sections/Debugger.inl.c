/* A VPL Section File */
/*

Debugger.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_Debug_20_Window_2F_Name[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X18000000, 0X556E7469, 0X746C6564, 0X20446F63,
0X756D656E, 0X74205769, 0X6E646F77, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Window_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X000008C0, 0X000001A4, 0X00000064, 0X00000014, 0X00000A30, 0X00000A2C, 0X00000A24,
0X000004CC, 0X000009DC, 0X000009D8, 0X000009D0, 0X000004C8, 0X00000988, 0X00000984, 0X0000097C,
0X000004C4, 0X00000934, 0X00000930, 0X00000928, 0X000004C0, 0X000008E0, 0X000008DC, 0X000008D4,
0X000004BC, 0X0000088C, 0X00000888, 0X00000880, 0X000004B8, 0X00000838, 0X00000834, 0X0000082C,
0X000004B4, 0X000007E4, 0X000007E0, 0X000007D8, 0X000004B0, 0X00000790, 0X0000078C, 0X00000784,
0X000004AC, 0X0000073C, 0X00000738, 0X00000730, 0X000004A8, 0X000006E8, 0X000006E4, 0X000006DC,
0X000004A4, 0X00000694, 0X00000690, 0X00000688, 0X000004A0, 0X00000640, 0X0000063C, 0X00000634,
0X0000049C, 0X000005EC, 0X000005E8, 0X000005E0, 0X00000498, 0X00000598, 0X00000594, 0X0000058C,
0X00000494, 0X00000544, 0X00000540, 0X00000538, 0X00000490, 0X000004F0, 0X000004EC, 0X000004E4,
0X0000048C, 0X00000484, 0X00000210, 0X0000020C, 0X0000043C, 0X000001F8, 0X00000410, 0X000001F4,
0X000003E4, 0X000003CC, 0X000003A4, 0X000003AC, 0X0000038C, 0X00000384, 0X000001EC, 0X0000035C,
0X00000344, 0X0000031C, 0X00000324, 0X000002A0, 0X000002F8, 0X000002E0, 0X000002B8, 0X000002C0,
0X0000029C, 0X00000294, 0X000001E8, 0X00000264, 0X000001E4, 0X00000234, 0X000001DC, 0X000001B8,
0X000001C0, 0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X00000011,
0X000001C4, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000220,
0000000000, 0X00000250, 0X00000280, 0X00000370, 0000000000, 0X000003FC, 0X00000428, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000458, 0X00000470, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000023C, 0X11000000, 0X6B457665,
0X6E745769, 0X6E646F77, 0X436C6173, 0X73000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000026C, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000029C, 0X00000002, 0X000002A4,
0X00000308, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X000002E4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000300, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000344,
0X00000001, 0X00000328, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000348, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000364,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000038C, 0X00000001, 0X00000390, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003CC, 0X00000001, 0X000003B0, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X000003D0, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003EC, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000418, 0X0F000000, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000444,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000048C, 0X00000011, 0X000004D0, 0X00000524, 0X00000578, 0X000005CC, 0X00000620,
0X00000674, 0X000006C8, 0X0000071C, 0X00000770, 0X000007C4, 0X00000818, 0X0000086C, 0X000008C0,
0X00000914, 0X00000968, 0X000009BC, 0X00000A10, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000004EC, 0X00000002, 0X000004F4, 0X0000050C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000540, 0X00000002,
0X00000548, 0X00000560, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636D6473,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000594, 0X00000002, 0X0000059C, 0X000005B4, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000048, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000005E8, 0X00000002, 0X000005F0, 0X00000608, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000004A,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000063C, 0X00000002, 0X00000644,
0X0000065C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000690, 0X00000002, 0X00000698, 0X000006B0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000006, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000006E4,
0X00000002, 0X000006EC, 0X00000704, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000738, 0X00000002, 0X00000740, 0X00000758,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000001B, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000078C, 0X00000002, 0X00000794, 0X000007AC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000050, 0X02910007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000007E0, 0X00000002,
0X000007E8, 0X00000800, 0X02960004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64,
0X02950004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000025, 0X06160007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000834, 0X00000002, 0X0000083C, 0X00000854, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6B657962, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000888, 0X00000002, 0X00000890, 0X000008A8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X6B657962, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002,
0X03520007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000008DC, 0X00000002, 0X000008E4,
0X000008FC, 0X03560004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D6F7573, 0X03500004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000930, 0X00000002, 0X00000938, 0X00000950, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X6D6F7573, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000000A, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000984,
0X00000002, 0X0000098C, 0X000009A4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000001D, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000009D8, 0X00000002, 0X000009E0, 0X000009F8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000001F, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000A2C, 0X00000002, 0X00000A34, 0X00000A4C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000004F
	};
	Nat4 tempAttribute_Debug_20_Window_2F_Drawers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Window_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000032, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000032, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C8, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000258
	};
	Nat4 tempAttribute_Debug_20_Window_2F_Window_20_Pasteboard_20_Handler[] = {
0000000000, 0X00000084, 0X00000024, 0X00000004, 0X00000014, 0X00000068, 0X00000064, 0X00000038,
0X00000040, 0X3F000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000060, 0X00000004,
0X00000044, 0X57696E64, 0X6F772050, 0X61737465, 0X626F6172, 0X64204861, 0X6E646C65, 0X72000000,
0000000000, 0X00000070, 0X0000008C, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Window_2F_Editors[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X07D60007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_View_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000096, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000226
	};
	Nat4 tempAttribute_Debug_20_View_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_View_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_View_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_View_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_View_2F_Window_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_View_2F_Viewport_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_View_2F_Select_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_View_2F_Canvas_20_Limits[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000010, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000064
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Window_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Viewport_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Canvas_20_Limits[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Item_2F_Current_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_IO_20_Item_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_IO_20_Item_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_IO_20_Item_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_IO_20_Item_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_Control_20_Item_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Control_20_Item_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_Control_20_Item_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_Comment_20_Item_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X039A0007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X02DA0004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X039A0004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X02DA0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000012, 0X03970004,
0000000000, 0000000000, 0000000000, 0000000000, 0X0000012C
	};
	Nat4 tempAttribute_Debug_20_Comment_20_Item_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Comment_20_Item_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_Comment_20_Item_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Debug_20_Comment_20_Item_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Comment_20_Item_2F_Window_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Comment_20_Item_2F_Viewport_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Debug_20_Comment_20_Item_2F_Canvas_20_Limits[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Debug_20_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Debug_20_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 443 603 }{ 294 422 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Debug_20_Window_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_Debug_20_Window_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Drawers",tempClass,tempAttribute_Debug_20_Window_2F_Drawers,environment);
	tempAttribute = attribute_add("View",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Debug_20_Window_2F_Frame,environment);
	tempAttribute = attribute_add("Target",tempClass,NULL,environment);
	tempAttribute = attribute_add("Title",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Pasteboard Handler",tempClass,tempAttribute_Debug_20_Window_2F_Window_20_Pasteboard_20_Handler,environment);
	tempAttribute = attribute_add("Window Printing Handler",tempClass,NULL,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Editors",tempClass,tempAttribute_Debug_20_Window_2F_Editors,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"List Window");
	return kNOERROR;
}

/* Start Universals: { 70 937 }{ 779 365 } */
enum opTrigger vpx_method_Debug_20_Window_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Editor,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Data,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Debug_20_Window_2F_Close_case_1_local_5(PARAMETERS,TERMINAL(3));

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Window,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Close_20_Self_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_Window_2F_Close_20_Self_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Rollback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Rollback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Data,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_method_VPLCEWindow_2F_Close(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Rollback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Rollback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Rollback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Rollback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_Window_2F_Rollback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_Item,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_constant(PARAMETERS,"4",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(1),TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(2),TERMINAL(7),ROOT(10));

result = vpx_constant(PARAMETERS,"16",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(9),TERMINAL(11),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(9),TERMINAL(10),TERMINAL(13),TERMINAL(12),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Breakpoint,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Breakpoint",ROOT(6));

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_Control_20_Item,1,1,NONE,ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(4),ROOT(8),ROOT(9));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_1_local_8(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(7),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(7),TERMINAL(10));

result = vpx_set(PARAMETERS,kVPXValue_Operation,TERMINAL(7),TERMINAL(2),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(7),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"list",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_IO_20_Item,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_3_local_2(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"list",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_IO_20_Item,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_3_local_2(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"-4",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(1),ROOT(4));

result = vpx_method_Offset_20_Rectangle(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"2",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(1),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(8),TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(6),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(1),TERMINAL(11),TERMINAL(3),TERMINAL(6),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Repeat,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_Control_20_Item,1,1,NONE,ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1_local_7(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_constant(PARAMETERS,"Repeat",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(7),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(7),TERMINAL(10));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(7),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Operation,TERMINAL(7),TERMINAL(2),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERWITHNONE(14)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(4),TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(1),TERMINAL(7),TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(18)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Control,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Control_20_Action,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(8),TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_match(PARAMETERS,"Continue/TRUE",TERMINAL(11));
NEXTCASEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_Control_20_Item,1,1,NONE,ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(13),ROOT(14));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_1_local_11(PARAMETERS,TERMINAL(14),ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(12),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(12),TERMINAL(15));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(12),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_Operation,TERMINAL(12),TERMINAL(2),ROOT(17));

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTERWITHNONE(18)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(3),TERMINAL(2),TERMINAL(6),TERMINAL(4),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Inject,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Inject",ROOT(7));

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_Control_20_Item,1,1,NONE,ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_1_local_8(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(8),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(8),TERMINAL(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Operation,TERMINAL(8),TERMINAL(2),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERWITHNONE(14)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_constant(PARAMETERS,"4",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(1),TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(4),TERMINAL(7),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(10),TERMINAL(7),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(9),TERMINAL(7),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(9),TERMINAL(11),TERMINAL(12),TERMINAL(10),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Call_20_Super,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Super",ROOT(7));

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_Control_20_Item,1,1,NONE,ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(5),ROOT(9),ROOT(10));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_1_local_8(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(8),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(8),TERMINAL(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Operation,TERMINAL(8),TERMINAL(2),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERWITHNONE(14)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(19)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(4),TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_6(PARAMETERS,NONE,TERMINAL(0),TERMINAL(4),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(9),TERMINAL(4),ROOT(10));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_8(PARAMETERS,TERMINAL(10),TERMINAL(8),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(7),ROOT(12),ROOT(13));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_10(PARAMETERS,TERMINAL(11),TERMINAL(13),ROOT(14));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_11(PARAMETERS,TERMINAL(14),TERMINAL(0),TERMINAL(4),ROOT(15));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_12(PARAMETERS,TERMINAL(15),TERMINAL(0),TERMINAL(4),ROOT(16));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_13(PARAMETERS,TERMINAL(16),TERMINAL(0),TERMINAL(4),ROOT(17));

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12_case_1_local_14(PARAMETERS,TERMINAL(17),TERMINAL(0),TERMINAL(4),ROOT(18));

result = kSuccess;

OUTPUT(0,TERMINAL(18))
OUTPUT(1,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(19)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Debug Control Item",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_19(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_19(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(1),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(28)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Editor,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));
TERMINATEONFAILURE

result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_8(PARAMETERS,TERMINAL(4),TERMINAL(3),TERMINAL(5),TERMINAL(8));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_constant(PARAMETERS,"0",ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(4),ROOT(12),ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,11,15)
result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_12(PARAMETERS,LIST(10),LOOP(0),TERMINAL(11),TERMINAL(11),ROOT(14),ROOT(15));
LISTROOT(14,0)
REPEATFINISH
LISTROOTFINISH(14,0)
LISTROOTEND
} else {
ROOTEMPTY(14)
ROOTNULL(15,TERMINAL(11))
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(14),ROOT(16));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(16))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_14(PARAMETERS,LIST(16),ROOT(17),ROOT(18));
LISTROOT(17,0)
LISTROOT(18,1)
REPEATFINISH
LISTROOTFINISH(17,0)
LISTROOTFINISH(18,1)
LISTROOTEND
} else {
ROOTEMPTY(17)
ROOTEMPTY(18)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Comment_20_Items,2,1,TERMINAL(4),TERMINAL(1),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(17),TERMINAL(18),TERMINAL(19),ROOT(20));

result = vpx_constant(PARAMETERS,"Operation#",ROOT(21));

result = vpx_constant(PARAMETERS,"1",ROOT(22));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(20))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,22,23)
result = vpx_method_Debug_20_Window_2F_Install_20_Data_case_1_local_19(PARAMETERS,TERMINAL(21),LIST(20),LOOP(0),ROOT(23));
REPEATFINISH
} else {
ROOTNULL(23,TERMINAL(22))
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Content,2,0,TERMINAL(13),TERMINAL(20));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Title,1,1,TERMINAL(1),ROOT(24));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Title,2,0,TERMINAL(4),TERMINAL(24));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show_20_Current_20_Operation,2,0,TERMINAL(13),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(6),ROOT(25));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(25),ROOT(26),ROOT(27));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(27),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(28)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Extract_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXrs\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EXab\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EXsp\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EXov\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EXin\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EXot\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EXbp\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EDrc\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXcd\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

EnableMenuCommand( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(4)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXrm\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

DisableMenuCommand( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(4)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_CE_20_HICommand_20_Update_20_Status,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXrs\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Resume,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXab\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Abort,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXsp\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Step,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXov\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Step_20_Over,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXin\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Step_20_In,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXot\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Step_20_Out,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXcd\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Clear_20_Breakpoints,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXbp\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Toggle_20_Breakpoint,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDrc\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9_local_4(PARAMETERS,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Previous_20_Case,1,0,TERMINAL(5));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_CE_20_HICommand_20_Process,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Resume(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Continue,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Abort(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Abort,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_Over(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Tab,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_In(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Into,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_Out(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Out,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clear_20_Breakpoints,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,TERMINAL(8),ROOT(9));

result = vpx_match(PARAMETERS,"( )",TERMINAL(9));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Change_20_Breakpoint,2,0,LIST(9),TERMINAL(10));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Operation,2,1,TERMINAL(10),TERMINAL(4),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(11),ROOT(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Breakpoint,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Breakpoint,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint_case_1_local_3(PARAMETERS,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeMouseWheelAxis,ROOT(2));

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(7),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamMouseWheelAxis,ROOT(1));

result = vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamMouseWheelDelta,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_SInt32,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamKeyModifiers,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_UInt32,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,shiftKey,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_test_2D_one_3F_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,1,TERMINAL(2),TERMINAL(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Tab,2,0,TERMINAL(7),TERMINAL(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Add_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Editors,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Editors,TERMINAL(4),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Find_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Editors,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_Find_20_Editor_case_1_local_3(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Remove_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Editors,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_Remove_20_Editor_case_1_local_3(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_set(PARAMETERS,kVPXValue_Editors,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Cancel_20_Editors_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Cancel_20_Editors_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Cancel_20_Editors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Editors,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_Cancel_20_Editors_case_1_local_3(PARAMETERS,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Data_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Data_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(7));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_View,2,0,TERMINAL(7),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_Close_20_Data_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel_20_Editors,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_Comment_20_Item,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1_local_7_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Comment Data",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(6),TERMINAL(2),ROOT(7));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(7),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1_local_7(PARAMETERS,LIST(9),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND
} else {
ROOTEMPTY(10)
}

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Close_20_All(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Show_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Window_2F_Show_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Show(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0.82",ROOT(1));

result = vpx_method_Debug_20_Window_2F_Show_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Proxy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Proxy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Get_20_Proxy_20_IconRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Proxy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Proxy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Stack Case",ROOT(1));

result = vpx_method_Find_20_Item_20_IconRef(PARAMETERS,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Set_20_Proxy_20_IconRef,2,0,TERMINAL(0),TERMINAL(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Install_20_Proxy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Install_20_Proxy_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_Window_2F_Install_20_Proxy_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowPathSelect,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Path_20_Select,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Event,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CountMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(2),TERMINAL(0))),1);
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(3));

PUTINTEGER(DeleteMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(0)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(1))),4);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2244",ROOT(1));

PUTPOINTER(OpaqueMenuRef,*,GetMenuHandle( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"2244",ROOT(2));

PUTINTEGER(CreateNewMenu( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kInsertHierarchicalMenu,ROOT(5));

InsertMenu( GETPOINTER(0,OpaqueMenuRef,*,ROOT(6),TERMINAL(4)),GETINTEGER(TERMINAL(5)));
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(7));

PUTINTEGER(SetMenuTitleWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(9),TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(7))),8);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_5_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_5_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Find_20_Item_20_IconRef(PARAMETERS,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(5));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(7),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(5)),GETPOINTER(1,char,**,ROOT(8),TERMINAL(4))),6);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(3));

result = vpx_constant(PARAMETERS,"\'EDp!\'",ROOT(4));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_extconstant(PARAMETERS,kHICommandClose,ROOT(6));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETPOINTER(2,unsigned short,*,ROOT(9),NONE)),7);
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(9),NONE,ROOT(10),ROOT(11));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_5_case_1_local_9(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_List,1,2,TERMINAL(0),ROOT(2),ROOT(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Item Path",ROOT(4));

result = vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_4(PARAMETERS,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(2),TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select_case_1_local_5(PARAMETERS,LIST(2),LIST(3),TERMINAL(5));
REPEATFINISH
} else {
}

result = vpx_extconstant(PARAMETERS,kEventParamMenuRef,ROOT(6));

result = vpx_extconstant(PARAMETERS,typeMenuRef,ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_typeRef,4,1,TERMINAL(1),TERMINAL(6),TERMINAL(7),TERMINAL(5),ROOT(8));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"/",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(0),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_Name,1,1,TERMINAL(2),ROOT(4));

result = vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(0))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(23)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(8),ROOT(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,LIST(10),ROOT(11),ROOT(12));
LISTROOT(12,0)
REPEATFINISH
LISTROOTFINISH(12,0)
LISTROOTEND
} else {
ROOTNULL(11,NULL)
ROOTEMPTY(12)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(12),TERMINAL(4),ROOT(13));

result = vpx_match(PARAMETERS,"0",TERMINAL(13));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(10),TERMINAL(2),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(10),TERMINAL(13),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(15),ROOT(17));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(17))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1_local_13(PARAMETERS,LIST(17),ROOT(18),ROOT(19));
LISTROOT(18,0)
LISTROOT(19,1)
REPEATFINISH
LISTROOTFINISH(18,0)
LISTROOTFINISH(19,1)
LISTROOTEND
} else {
ROOTEMPTY(18)
ROOTEMPTY(19)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Title,1,1,TERMINAL(8),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(18),TERMINAL(20),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(19),TERMINAL(8),ROOT(22));

result = kSuccess;

OUTPUT(0,TERMINAL(21))
OUTPUT(1,TERMINAL(22))
FOOTER(23)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Debug_20_Window_2F_Get_20_Path_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Debug_20_Window_2F_Get_20_Path_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_List,1,2,TERMINAL(0),ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Debug_20_View_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Debug_20_View_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 321 364 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Debug_20_View_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_Debug_20_View_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_Debug_20_View_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_Debug_20_View_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_Debug_20_View_2F_Content,environment);
	tempAttribute = attribute_add("Window Origin",tempClass,tempAttribute_Debug_20_View_2F_Window_20_Origin,environment);
	tempAttribute = attribute_add("Viewport Origin",tempClass,tempAttribute_Debug_20_View_2F_Viewport_20_Origin,environment);
	tempAttribute = attribute_add("Select List",tempClass,tempAttribute_Debug_20_View_2F_Select_20_List,environment);
	tempAttribute = attribute_add("Vertical Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Horizontal Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Canvas Limits",tempClass,tempAttribute_Debug_20_View_2F_Canvas_20_Limits,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"List View");
	return kNOERROR;
}

/* Start Universals: { 395 331 }{ 390 384 } */
enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Local_20_Where,1,1,TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"( -4 -8 )",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_IO_20_Item_20_Near,3,1,TERMINAL(0),TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Mouse_20_Down,2,0,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Double_20_Down,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(10));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Dispatch_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_View_2F_Dispatch_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispatch_20_Click,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command_20_Key,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Process_20_Key_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Command_20_Key,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_extmatch(PARAMETERS,kReturnCharCode,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Process_20_Key_case_2_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_extmatch(PARAMETERS,kTabCharCode,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Process_20_Key_case_3_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Shift_20_Key,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Tab,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Option_20_Key,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_extmatch(PARAMETERS,kUpArrowCharCode,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Process_20_Key_case_5_local_6(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Previous_20_Case,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Process_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Process_20_Key_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Process_20_Key_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Process_20_Key_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Process_20_Key_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Process_20_Key_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Return_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Return_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(3),TERMINAL(7),TERMINAL(8));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Return_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Return_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Return_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Return_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(3),TERMINAL(4),TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(4),ROOT(8));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(3),TERMINAL(8),TERMINAL(9));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_View_2F_Return(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Return_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_View_2F_Return_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Return_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_extmatch(PARAMETERS,kReturnCharCode,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Command_20_Key_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Continue,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_extmatch(PARAMETERS,kDownArrowCharCode,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Command_20_Key_case_2_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Into,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_extmatch(PARAMETERS,kUpArrowCharCode,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Command_20_Key_case_3_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Out,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_extmatch(PARAMETERS,kRightArrowCharCode,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Command_20_Key_case_4_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_extmatch(PARAMETERS,kLeftArrowCharCode,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_View_2F_Command_20_Key_case_5_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Previous_20_Case,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Command_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Command_20_Key_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Command_20_Key_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Current_3F_,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(6),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1_local_2(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(6),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1_local_2(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Current_3F_,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(1),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_4(PARAMETERS,LIST(2));
REPEATFINISH
} else {
}

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Operation,2,1,TERMINAL(10),TERMINAL(4),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(11),ROOT(12),ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_10(PARAMETERS,TERMINAL(2),LIST(12));
REPEATFINISH
} else {
}

result = vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1_local_11(PARAMETERS,TERMINAL(2),TERMINAL(13));

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_2(PARAMETERS,LIST(0),TERMINAL(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(0),TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6_case_1_local_6(PARAMETERS,LIST(5),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Item,1,1,TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2_local_6(PARAMETERS,TERMINAL(4),TERMINAL(3),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(2),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Can\'t show current operation!",ROOT(2));

result = vpx_method_Debug(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Continue_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Continue_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Continue,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Continue_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Continue_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(3),TERMINAL(4),TERMINAL(7));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_View_2F_Continue(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Continue_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Continue_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Into,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Into,1,0,TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(3),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(3),TERMINAL(11),TERMINAL(12));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Into,1,0,TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(3),TERMINAL(4),TERMINAL(11));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(4),ROOT(12));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(3),TERMINAL(12),TERMINAL(13));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Into(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Step_20_Into_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_View_2F_Step_20_Into_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_View_2F_Step_20_Into_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Step_20_Into_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Out_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Out_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Out,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Out_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Out_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Out,2,0,TERMINAL(11),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Out_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Out_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Out,2,0,TERMINAL(12),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(3),TERMINAL(4),TERMINAL(13));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_Debug_20_View_2F_Step_20_Out(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Step_20_Out_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_View_2F_Step_20_Out_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Step_20_Out_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_constant(PARAMETERS,"-1",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Skip,2,0,TERMINAL(4),TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Tab_case_2_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_View_2F_Tab_case_2_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(4),ROOT(10));

result = vpx_method_Debug_20_View_2F_Tab_case_2_local_8(PARAMETERS,TERMINAL(10),TERMINAL(1),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(5),TERMINAL(11),TERMINAL(9));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Stack,TERMINAL(6),ROOT(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(12),ROOT(14),ROOT(15));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(15),ROOT(16),ROOT(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Operation,4,0,TERMINAL(17),TERMINAL(13),TERMINAL(8),TERMINAL(11));

result = kSuccess;

FOOTER(18)
}

enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"5",ROOT(2));

SysBeep( GETINTEGER(TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Tab_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(4),ROOT(10));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(5),TERMINAL(10),TERMINAL(11));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(10),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(5),TERMINAL(12),TERMINAL(9));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Stack,TERMINAL(6),ROOT(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(13),ROOT(15),ROOT(16));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(16),ROOT(17),ROOT(18));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Operation,4,0,TERMINAL(18),TERMINAL(14),TERMINAL(8),TERMINAL(12));

result = kSuccess;

FOOTER(19)
}

enum opTrigger vpx_method_Debug_20_View_2F_Tab(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Tab_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Tab_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_View_2F_Tab_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Tab_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(24)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Previous_20_Case,2,5,TERMINAL(11),TERMINAL(5),ROOT(12),ROOT(13),ROOT(14),ROOT(15),ROOT(16));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(13));
NEXTCASEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_State,1,1,NONE,ROOT(17));

result = vpx_set(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(17),TERMINAL(12),ROOT(18));

result = vpx_set(PARAMETERS,kVPXValue_Case,TERMINAL(18),TERMINAL(13),ROOT(19));

result = vpx_set(PARAMETERS,kVPXValue_Method,TERMINAL(19),TERMINAL(14),ROOT(20));

result = vpx_set(PARAMETERS,kVPXValue_Case_20_Index,TERMINAL(20),TERMINAL(15),ROOT(21));

result = vpx_set(PARAMETERS,kVPXValue_Total_20_Cases,TERMINAL(21),TERMINAL(16),ROOT(22));

result = vpx_set(PARAMETERS,kVPXValue_Thread,TERMINAL(22),TERMINAL(7),ROOT(23));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(23));

result = vpx_method_Debug_20_View_2F_Previous_20_Case_case_1_local_18(PARAMETERS,TERMINAL(23));

result = kSuccess;

FOOTERWITHNONE(24)
}

enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Top of stack reached!",ROOT(8));

result = vpx_method_Debug_20_View_2F_Previous_20_Case_case_2_local_7(PARAMETERS,TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Previous_20_Case(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Previous_20_Case_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_View_2F_Previous_20_Case_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Debug_20_Background,0,1,ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(6),ROOT(7),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchro_20_To_20_Operation,3,0,TERMINAL(3),LIST(8),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Draw_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug IO Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Terminal",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Connect_20_To_20_Root,3,0,TERMINAL(3),TERMINAL(7),TERMINAL(1));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Draw_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Rect,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(2),ROOT(3));

EraseRect( GETCONSTPOINTER(Rect,*,TERMINAL(3)));
result = kSuccess;

result = vpx_method_Debug_20_View_2F_Draw_case_1_local_6(PARAMETERS);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(3)));
result = kSuccess;

result = vpx_method_Debug_20_View_2F_Draw_case_1_local_8(PARAMETERS);

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Draw_case_1_local_10(PARAMETERS,LIST(5),TERMINAL(5));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Draw_case_1_local_11(PARAMETERS,LIST(5),TERMINAL(5));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,LIST(6),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(7),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchro_20_To_20_Operation_20_CG,4,0,TERMINAL(4),LIST(9),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_5(PARAMETERS,LIST(4),TERMINAL(4),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"synchro stroke",ROOT(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4_case_1_local_9(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(5),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"Debug IO Item",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"Terminal",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Connect_20_To_20_Root_20_CG,4,0,TERMINAL(4),TERMINAL(8),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_5(PARAMETERS,LIST(4),TERMINAL(4),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"dataflow stroke",ROOT(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5_case_1_local_9(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(5),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Control Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Debug IO Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(10),TERMINAL(8));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Control Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Repeat Graphic",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_method__28_Detach_20_Item_29_(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(7),TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),LIST(1),ROOT(3),ROOT(4));
NEXTCASEONFAILURE
LISTROOT(3,0)
LISTROOT(4,1)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTFINISH(4,1)
LISTROOTEND
} else {
ROOTEMPTY(3)
ROOTEMPTY(4)
}

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(3),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1_local_6(PARAMETERS,LIST(5),LOOP(0),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(5))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(4))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Event_20_CG,3,0,LIST(0),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,7)
result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_4(PARAMETERS,LIST(5),LOOP(0),ROOT(6),ROOT(7));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
ROOTNULL(7,TERMINAL(5))
}

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(6),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1_local_6(PARAMETERS,LIST(8),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Event_20_CG,3,0,LIST(7),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Event_20_CG,3,0,LIST(5),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Erase_20_View_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(7),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchro_20_To_20_Operation_20_CG,4,0,TERMINAL(4),LIST(9),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"Debug IO Item",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"Terminal",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Connect_20_To_20_Root_20_CG,4,0,TERMINAL(4),TERMINAL(8),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Erase_20_View_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_5(PARAMETERS,LIST(4),TERMINAL(4),TERMINAL(2));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Draw_20_CG_case_2_local_6(PARAMETERS,LIST(4),TERMINAL(4),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_CG,3,0,LIST(5),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_View_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Draw_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_View_2F_Draw_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"65535",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,LIST(0),TERMINAL(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_List_20_View_20_Row_20_Colors_3F_,0,1,ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Rect,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"1.0",ROOT(5));

result = vpx_persistent(PARAMETERS,kVPXValue_Debug_20_Background,0,1,ROOT(6));

result = vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_1_local_8(PARAMETERS,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(1),TERMINAL(4));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_12_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_12_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"65535",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,LIST(0),TERMINAL(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1.0",ROOT(2));

result = vpx_persistent(PARAMETERS,kVPXValue_Debug_20_Background,0,1,ROOT(3));

result = vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_12_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(2));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(0),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(1),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( -2 0 )",ROOT(3));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_12_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_12_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"0.4",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.929 0.953 0.996 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_12_case_1_local_2(PARAMETERS,TERMINAL(2),TERMINAL(0));
TERMINATEONFAILURE

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6,V_Object *root0,V_Object *root1)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
INPUT(6,6)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__3C3D_,2,0,TERMINAL(7),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(2),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,3,1,TERMINAL(7),TERMINAL(3),TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(10),TERMINAL(8),ROOT(11));

result = vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(9),TERMINAL(4),ROOT(12));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(0),TERMINAL(9),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(12),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(4),ROOT(15));

result = vpx_method_Odd_3F_(PARAMETERS,TERMINAL(4),ROOT(16));

result = vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13_case_1_local_12(PARAMETERS,TERMINAL(5),TERMINAL(14),TERMINAL(16));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(15))
FOOTERSINGLECASE(17)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Rect,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"42",ROOT(3));

result = vpx_method_Rectangle_20_Size(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"24",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(10),TERMINAL(8),ROOT(11));

result = vpx_constant(PARAMETERS,"1",ROOT(12));

result = vpx_constant(PARAMETERS,"0",ROOT(13));

result = vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_12(PARAMETERS,TERMINAL(2),TERMINAL(1));

REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,11,14)
LOOPTERMINAL(1,12,15)
result = vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2_local_13(PARAMETERS,LOOP(0),TERMINAL(5),TERMINAL(6),TERMINAL(3),LOOP(1),TERMINAL(1),TERMINAL(13),ROOT(14),ROOT(15));
REPEATFINISH

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Debug_20_View_2F_Erase_20_View_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Erase_20_View_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60000 60000 60000 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(6),ROOT(7),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchro_20_To_20_Operation,3,0,TERMINAL(3),LIST(8),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Debug IO Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Terminal",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Connect_20_To_20_Root,3,0,TERMINAL(3),TERMINAL(7),TERMINAL(1));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Old_20_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing,1,0,TERMINAL(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(1),ROOT(2));

EraseRect( GETCONSTPOINTER(Rect,*,TERMINAL(2)));
result = kSuccess;

result = vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_5(PARAMETERS);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(2)));
result = kSuccess;

result = vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_7(PARAMETERS);

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_9(PARAMETERS,LIST(4),TERMINAL(4));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Old_20_Draw_case_1_local_10(PARAMETERS,LIST(4),TERMINAL(4));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,LIST(5),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_View_2F_Resize_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_View_2F_Resize_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_View_2F_Resize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(7),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(6),TERMINAL(8),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(4),TERMINAL(5),TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(0),TERMINAL(12));

result = vpx_method_Debug_20_View_2F_Resize_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"Debug IO Item",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_method_Point_20_In_20_Rect(PARAMETERS,TERMINAL(1),TERMINAL(8),ROOT(9));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(9));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(0),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near_case_1_local_3(PARAMETERS,LIST(3),TERMINAL(1),TERMINAL(2),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

/* Stop Universals */



Nat4 VPLC_Debug_20_Item_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Debug_20_Item_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 259 379 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Debug_20_Item_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_Debug_20_Item_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_Debug_20_Item_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_Debug_20_Item_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_Debug_20_Item_2F_Content,environment);
	tempAttribute = attribute_add("Window Origin",tempClass,tempAttribute_Debug_20_Item_2F_Window_20_Origin,environment);
	tempAttribute = attribute_add("Viewport Origin",tempClass,tempAttribute_Debug_20_Item_2F_Viewport_20_Origin,environment);
	tempAttribute = attribute_add("Select List",tempClass,NULL,environment);
	tempAttribute = attribute_add("Vertical Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Horizontal Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Canvas Limits",tempClass,tempAttribute_Debug_20_Item_2F_Canvas_20_Limits,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Current?",tempClass,tempAttribute_Debug_20_Item_2F_Current_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"List Item");
	return kNOERROR;
}

/* Start Universals: { 382 895 }{ 420 378 } */
enum opTrigger vpx_method_Debug_20_Item_2F_Click_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Click_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(2),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_In_20_Current_20_Stack,1,0,TERMINAL(11));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Operation,2,0,TERMINAL(11),TERMINAL(8));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Click_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Click_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Can\'t roll forward or backward!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Click_20_Item_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Click_20_Item_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(22)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(2),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(12),ROOT(14),ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(15));

result = vpx_get(PARAMETERS,kVPXValue_Stack,TERMINAL(15),ROOT(16),ROOT(17));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(16),ROOT(18),ROOT(19));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(19),ROOT(20),ROOT(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Operation,4,0,TERMINAL(21),TERMINAL(17),TERMINAL(13),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Into,1,0,TERMINAL(21));

result = kSuccess;

FOOTER(22)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Click_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Click_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Item_2F_Click_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Item_2F_Click_20_Item_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Draw_20_Synchro(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_method_Rectangle_20_Center(PARAMETERS,TERMINAL(3),ROOT(6));

result = vpx_method_Rectangle_20_Center(PARAMETERS,TERMINAL(5),ROOT(7));

result = vpx_method_Synchro_20_Line(PARAMETERS,TERMINAL(6),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"NULL\"",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Geneva",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_font_2D_number,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_text_2D_font,1,0,TERMINAL(1));

result = vpx_extconstant(PARAMETERS,bold,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_text_2D_face,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"9",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_text_2D_size,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(22)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_13_case_1_local_5(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_width,1,1,TERMINAL(2),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(12),ROOT(13),ROOT(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(15),TERMINAL(13),ROOT(16));

result = vpx_constant(PARAMETERS,"1",ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(11),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(18),TERMINAL(16),ROOT(19));

result = vpx_match(PARAMETERS,"0",TERMINAL(19));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(10),TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(20),ROOT(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(5),TERMINAL(21));

result = kSuccess;

FOOTERSINGLECASE(22)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Terminal,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Root,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_constant(PARAMETERS,"Edit Text",ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,1,1,TERMINAL(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_10(PARAMETERS,TERMINAL(7),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(11),TERMINAL(12));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Text,2,0,TERMINAL(10),TERMINAL(12));

result = vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_13(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1_local_14(PARAMETERS,TERMINAL(10));

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Extract_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Extract_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Item_2F_Extract_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"instance",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Instance_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"get",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Get_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"set",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Set_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"input_bar",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_InputBar_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"output_bar",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_OutputBar_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"primitive",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Primitive_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"local",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Local_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"universal",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Universal_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"persistent",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Persistent_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"extset",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_External_20_Set_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"extget",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_External_20_Get_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"extprocedure",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Procedure_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_13_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_13_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"constant",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"match",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_13_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Constant_20_Match_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_14_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_14_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"extmatch",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"extconstant",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_14_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_External_20_CM_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"evaluate",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Evaluate_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Default_20_Graphic,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 0 16 100 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_13(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_14(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_15(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5_case_16(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"input_bar",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"output_bar",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Edit_20_Text,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"( 3 10 13 90 )",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"Edit Text\"",ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Editable_3F_,TERMINAL(8),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_method_Debug_20_Item_2F_Initialize_case_1_local_5(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_Debug_20_Item_2F_Initialize_case_1_local_6(PARAMETERS,TERMINAL(3),TERMINAL(7),ROOT(9));

result = vpx_constant(PARAMETERS,"\"Operation Graphic\"",ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(9),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Content,TERMINAL(2),TERMINAL(12),ROOT(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inject,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Edit Text\"",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Install_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(4),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(7),TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(10),ROOT(11));

result = vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_9(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_method_Debug_20_Item_2F_Install_20_Data_case_1_local_10(PARAMETERS,TERMINAL(9),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Move_20_Item_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Move_20_Item_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Offset_20_Rectangle(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Move_20_Item_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Move_20_Item_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Offset_20_Rectangle(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Move_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_method_Offset_20_Rectangle(PARAMETERS,TERMINAL(7),TERMINAL(1),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(4),TERMINAL(8),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(8),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(9),ROOT(12),ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(13))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Item_2F_Move_20_Item_case_1_local_10(PARAMETERS,LIST(13),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(9),ROOT(14),ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(15))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Item_2F_Move_20_Item_case_1_local_12(PARAMETERS,LIST(15),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_match(PARAMETERS,"constant",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_match(PARAMETERS,"match",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_match(PARAMETERS,"constant",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_match(PARAMETERS,"match",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_match(PARAMETERS,"extmatch",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_match(PARAMETERS,"extconstant",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"6",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Point_2D_to_2D_list,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Minimum_20_Size_20_Text,0,1,ROOT(4));

result = vpx_method_Measure_20_Text(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_Point_2D_to_2D_list,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(7),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(8),TERMINAL(10),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_method_Measure_20_Text(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1_local_7(PARAMETERS,TERMINAL(6),TERMINAL(4),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Measure_20_Text(PARAMETERS,TERMINAL(3),TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_extget(PARAMETERS,"h",1,2,TERMINAL(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_3(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_method_Half(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_round,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_Half(PARAMETERS,TERMINAL(1),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_round,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(10),TERMINAL(8),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(11),TERMINAL(6),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Operation Graphic\"",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_19(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_19(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Edit Text\"",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(27)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(7),TERMINAL(5),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(8),TERMINAL(6),ROOT(10));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_7(PARAMETERS,TERMINAL(3),ROOT(11));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_8(PARAMETERS,TERMINAL(11),TERMINAL(9),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"0",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(12),TERMINAL(14),TERMINAL(13),TERMINAL(10),ROOT(15));

result = vpx_constant(PARAMETERS,"2",ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(9),TERMINAL(16),ROOT(17));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(3),ROOT(18),ROOT(19));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(19),TERMINAL(1),ROOT(20));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(20),ROOT(21),ROOT(22));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_16(PARAMETERS,TERMINAL(22),TERMINAL(10),ROOT(23),ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(16),TERMINAL(23),TERMINAL(17),TERMINAL(24),ROOT(25));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_18(PARAMETERS,TERMINAL(4),TERMINAL(15));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1_local_19(PARAMETERS,TERMINAL(4),TERMINAL(25));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(22),TERMINAL(1),ROOT(26));

result = kSuccess;

FOOTER(27)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_match(PARAMETERS,"constant",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_match(PARAMETERS,"match",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_match(PARAMETERS,"constant",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_match(PARAMETERS,"match",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_match(PARAMETERS,"extmatch",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_match(PARAMETERS,"extconstant",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"10",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Operation Graphic\"",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Edit Text\"",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(27)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(7),TERMINAL(5),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(8),TERMINAL(6),ROOT(10));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_7(PARAMETERS,TERMINAL(3),ROOT(11));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_8(PARAMETERS,TERMINAL(11),TERMINAL(9),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"0",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(12),TERMINAL(14),TERMINAL(13),TERMINAL(10),ROOT(15));

result = vpx_constant(PARAMETERS,"2",ROOT(16));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_12(PARAMETERS,TERMINAL(11),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(10),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(9),TERMINAL(16),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(16),TERMINAL(17),TERMINAL(19),TERMINAL(18),ROOT(20));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_16(PARAMETERS,TERMINAL(4),TERMINAL(15));

result = vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2_local_17(PARAMETERS,TERMINAL(4),TERMINAL(20));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(3),ROOT(21),ROOT(22));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(22),TERMINAL(1),ROOT(23));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(23),ROOT(24),ROOT(25));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(25),TERMINAL(1),ROOT(26));

result = kSuccess;

FOOTER(27)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Set_20_Frame_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Item_2F_Set_20_Frame_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(7),TERMINAL(1),ROOT(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(6));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_case_1_local_3(PARAMETERS,TERMINAL(1),LIST(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Synchro,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"local",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_2_local_6(PARAMETERS,TERMINAL(5),ROOT(9));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Local_20_Where,1,1,TERMINAL(1),ROOT(4));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(6),TERMINAL(2),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_lte,2,0,TERMINAL(7),TERMINAL(10));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"instance",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(9),ROOT(10));

result = vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_7(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(11));

result = vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3_local_8(PARAMETERS,TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_constant(PARAMETERS,"Name",ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(6),ROOT(14),ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(14),ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(16),ROOT(17));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(17),TERMINAL(13),TERMINAL(15),ROOT(18),ROOT(19));

result = vpx_match(PARAMETERS,"0",TERMINAL(18));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(19),TERMINAL(12),ROOT(20));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(20));

result = kSuccess;

FOOTER(21)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"persistent",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Name",ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(6),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(10),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(12),ROOT(13));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(13),TERMINAL(9),TERMINAL(11),ROOT(14),ROOT(15));

result = vpx_match(PARAMETERS,"0",TERMINAL(14));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(15),ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(16));

result = kSuccess;

FOOTER(17)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Name",ROOT(6));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"get",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(9),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5_local_9(PARAMETERS,LIST(12),TERMINAL(10),ROOT(13));
LISTROOT(13,0)
REPEATFINISH
LISTROOTFINISH(13,0)
LISTROOTEND
} else {
ROOTEMPTY(13)
}

result = vpx_constant(PARAMETERS,"Class Data",ROOT(14));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLSelect_20_Window,1,1,NONE,ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Helper_20_List,4,0,TERMINAL(15),TERMINAL(14),TERMINAL(13),NONE);

result = kSuccess;

FOOTERWITHNONE(16)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Name",ROOT(6));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"set",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(9),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6_local_9(PARAMETERS,LIST(12),TERMINAL(10),ROOT(13));
LISTROOT(13,0)
REPEATFINISH
LISTROOTFINISH(13,0)
LISTROOTEND
} else {
ROOTEMPTY(13)
}

result = vpx_constant(PARAMETERS,"Class Data",ROOT(14));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLSelect_20_Window,1,1,NONE,ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Helper_20_List,4,0,TERMINAL(15),TERMINAL(14),TERMINAL(13),NONE);

result = kSuccess;

FOOTERWITHNONE(16)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Name",ROOT(6));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
NEXTCASEONSUCCESS

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(27)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"universal",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_constant(PARAMETERS,"\"//\"",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_match(PARAMETERS,"0",TERMINAL(12));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(9),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(14),ROOT(15));

result = vpx_get(PARAMETERS,kVPXValue_Call_20_Super,TERMINAL(9),ROOT(16),ROOT(17));

result = vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_14(PARAMETERS,TERMINAL(15),TERMINAL(17),ROOT(18));

result = vpx_constant(PARAMETERS,"2",ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(10),TERMINAL(19),ROOT(20),ROOT(21));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(18));
TERMINATEONSUCCESS

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,18,22)
result = vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7_local_18(PARAMETERS,LOOP(0),TERMINAL(21),ROOT(22),ROOT(23));
TERMINATEONFAILURE
REPEATFINISH

result = vpx_match(PARAMETERS,"NULL",TERMINAL(23));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(23),ROOT(24),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(25),ROOT(26));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(26));

result = kSuccess;

FOOTER(27)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Name",ROOT(6));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(22)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"universal",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_match(PARAMETERS,"0",TERMINAL(12));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(9),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(13),ROOT(14));

result = vpx_constant(PARAMETERS,"1",ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(10),TERMINAL(15),ROOT(16),ROOT(17));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8_local_14(PARAMETERS,LIST(14),TERMINAL(17),ROOT(18));
LISTROOT(18,0)
REPEATFINISH
LISTROOTFINISH(18,0)
LISTROOTEND
} else {
ROOTEMPTY(18)
}

result = vpx_constant(PARAMETERS,"Class Data",ROOT(19));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLSelect_20_Window,1,1,NONE,ROOT(20));

result = vpx_constant(PARAMETERS,"2",ROOT(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Helper_20_List,4,0,TERMINAL(20),TERMINAL(19),TERMINAL(18),TERMINAL(21));

result = kSuccess;

FOOTERWITHNONE(22)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"universal",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(9),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(11),ROOT(12));

result = vpx_constant(PARAMETERS,"Name",ROOT(13));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(12),TERMINAL(13),TERMINAL(10),ROOT(14),ROOT(15));

result = vpx_match(PARAMETERS,"0",TERMINAL(14));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(15),ROOT(16),ROOT(17));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(17),ROOT(18),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(19),ROOT(20));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(20));

result = kSuccess;

FOOTER(21)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Click,2,0,TERMINAL(4),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Item_2F_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing,1,0,TERMINAL(0));

result = vpx_method_Debug_20_Item_2F_Draw_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(6));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1_local_2(PARAMETERS,TERMINAL(1),LIST(2),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Synchro_20_CG,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Warning: Synchro operation not found!",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(4));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(10),TERMINAL(1),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(10),TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Synchros,TERMINAL(9),TERMINAL(12),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Draw_20_Synchro_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_method_Rectangle_20_Center(PARAMETERS,TERMINAL(4),ROOT(7));

result = vpx_method_Rectangle_20_Center(PARAMETERS,TERMINAL(6),ROOT(8));

result = vpx_method_Synchro_20_Line_20_CG(PARAMETERS,TERMINAL(7),TERMINAL(8),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Event_20_CG,3,0,LIST(5),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Double_20_Down,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Local_20_Where,1,1,TERMINAL(1),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Double_20_Click_20_Item,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command_20_Key,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Local_20_Where,1,1,TERMINAL(1),ROOT(5));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Click_20_Item,2,0,TERMINAL(3),TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(3),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(7));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispatch_20_Click,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Dispatch_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Dispatch_20_Click_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Process_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispatch_20_Click,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Current_20_Colors,0,1,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Skip",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Skip_20_Colors,0,1,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Debug",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Debug_20_Colors,0,1,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Normal_20_Colors,0,1,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Current_3F_,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Mode,1,1,TERMINAL(4),ROOT(7));

result = vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors_case_1_local_6(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(8),ROOT(9));

RGBForeColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(9)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(10),ROOT(11));

RGBBackColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(11)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(12)
}

/* Stop Universals */



Nat4 VPLC_Debug_20_IO_20_Item_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Debug_20_IO_20_Item_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Debug_20_IO_20_Item_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_Debug_20_IO_20_Item_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_Debug_20_IO_20_Item_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_Debug_20_IO_20_Item_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Graphic",tempClass,NULL,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Editor",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic Item");
	return kNOERROR;
}

/* Start Universals: { 268 675 }{ 359 391 } */
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Debug IO Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1_local_3(PARAMETERS,TERMINAL(1),LIST(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Connection,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Item_20_Center,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Item_20_Center,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(7),TERMINAL(6));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(5),TERMINAL(4));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Basic_20_IO_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Normal",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Basic_20_IO_20_Graphic,1,1,NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"List",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_IO_20_Graphic,1,1,NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Loop",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Loop_20_IO_20_Root_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"Root",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Loop",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Loop_20_IO_20_Terminal_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"Terminal",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Basic_20_IO_20_Graphic,1,1,NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(7),TERMINAL(4));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data_case_1_local_8(PARAMETERS,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(7),TERMINAL(10),ROOT(11));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Item_20_Center_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Item_20_Center_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(6),TERMINAL(7),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(10),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Item_20_Center(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Location,1,1,TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Debug_20_IO_20_Item_2F_Item_20_Center_case_1_local_5(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Move_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(7),ROOT(9));

result = vpx_method_Offset_20_Rectangle(PARAMETERS,TERMINAL(5),TERMINAL(9),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(4),TERMINAL(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(10),ROOT(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Double_20_Down,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor_20_Window,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(TickCount(),1);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3C3D_,2,0,TERMINAL(0),TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_method_Dispatch_20_Event(PARAMETERS);

PUTINTEGER(StillDown(),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"when",1,2,TERMINAL(2),ROOT(3),ROOT(4));

PUTINTEGER(GetDblTime(),5);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

REPEATBEGIN
result = vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1_local_4_case_1_local_7(PARAMETERS,TERMINAL(6));
FAILONFAILURE
REPEATFINISH

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(StillDown(),1);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FAILONFAILURE

result = vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1_local_4(PARAMETERS,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Contextual_20_Menu_20_Event_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Local_20_WhereQD,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

PUTINTEGER(WaitMouseMoved( GETSTRUCTURE(4,Point,TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show_20_CTM,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Root",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(2),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(4),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value_case_1_local_10(PARAMETERS,TERMINAL(5),ROOT(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_IO_20_Value,5,0,TERMINAL(16),TERMINAL(10),TERMINAL(6),TERMINAL(17),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(18)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Close_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Debug IO Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1_local_3(PARAMETERS,TERMINAL(1),LIST(2),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Connection_20_CG,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Item_20_Center,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Item_20_Center,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line,5,0,TERMINAL(2),TERMINAL(8),TERMINAL(7),TERMINAL(6),TERMINAL(5));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(0));

result = vpx_constant(PARAMETERS,"2240",ROOT(1));

PUTINTEGER(CreateNewMenu( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(0)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(3),NONE)),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Root",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(20)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(13),ROOT(14),ROOT(15));

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3_case_1_local_10(PARAMETERS,TERMINAL(4),ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_IO_20_Value,4,1,TERMINAL(15),TERMINAL(9),TERMINAL(5),TERMINAL(16),ROOT(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Text,2,1,TERMINAL(15),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(18),ROOT(19));

result = kSuccess;

OUTPUT(0,TERMINAL(19))
FOOTERSINGLECASE(20)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

PUTPOINTER(__CFString,*,CFStringCreateMutable( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = vpx_method_To_20_CString(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(6));

CFStringAppendCString( GETPOINTER(0,__CFString,*,ROOT(7),TERMINAL(4)),GETCONSTPOINTER(char,*,TERMINAL(5)),GETINTEGER(TERMINAL(6)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingMacRoman,ROOT(1));

result = vpx_method_Create_20_CFStringRef(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

PUTPOINTER(__CFString,*,CFStringCreateMutableCopy( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),5);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,truncMiddle,ROOT(2));

result = vpx_extconstant(PARAMETERS,kThemeSystemFont,ROOT(3));

result = vpx_extconstant(PARAMETERS,kThemeStateActive,ROOT(4));

PUTINTEGER(TruncateThemeText( GETPOINTER(0,__CFString,*,ROOT(6),TERMINAL(0)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(1,unsigned char,*,ROOT(7),NONE)),5);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"400",ROOT(2));

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Error: Unknown encoding\"",ROOT(1));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(3));

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(4));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(6),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(2)),GETPOINTER(2,unsigned short,*,ROOT(7),NONE)),5);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_2(PARAMETERS,ROOT(1));

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2_case_1_local_4(PARAMETERS,LIST(2),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

PUTINTEGER(StillDown(),0);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
INPUT(6,6)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(3),NONE,ROOT(7),ROOT(8));

result = vpx_method_Get_20_SInt16(PARAMETERS,TERMINAL(4),NONE,ROOT(9),ROOT(10));

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(5),NONE,ROOT(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_CTM,6,0,TERMINAL(0),TERMINAL(2),TERMINAL(8),TERMINAL(10),TERMINAL(12),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WhereQD,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3_case_1_local_3(PARAMETERS);
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_extconstant(PARAMETERS,kCMHelpItemRemoveHelp,ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

PUTINTEGER(ContextualMenuSelect( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(1)),GETSTRUCTURE(4,Point,TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETCONSTPOINTER(unsigned char,*,TERMINAL(6)),GETCONSTPOINTER(AEDesc,*,TERMINAL(6)),GETPOINTER(4,unsigned int,*,ROOT(9),NONE),GETPOINTER(2,short,*,ROOT(10),NONE),GETPOINTER(2,unsigned short,*,ROOT(11),NONE)),7);
result = kSuccess;

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3_case_1_local_8(PARAMETERS,TERMINAL(2),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10),TERMINAL(11),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(0));

DisposeMenu( GETPOINTER(0,OpaqueMenuRef,*,ROOT(3),TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"3",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCMMenuItemSelected,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(OpaqueMenuRef,*,GetMenuHandle( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"WARNING! Menu is NULL",ROOT(1));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

PUTINTEGER(CopyMenuItemTextAsCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(4),TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,__CFString,**,ROOT(5),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(5),ROOT(6));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor_20_Window,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_2(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_extmatch(PARAMETERS,kCMMenuItemSelected,TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(8));

result = vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_5(PARAMETERS,TERMINAL(8),TERMINAL(6),ROOT(9));

result = vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(6),TERMINAL(9));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Type:",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(4),ROOT(9));

result = vpx_constant(PARAMETERS,"\" Menu ID:\"",ROOT(10));

result = vpx_constant(PARAMETERS,"\" Menu Item:\"",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(6),TERMINAL(7),TERMINAL(10),TERMINAL(9),TERMINAL(11),TERMINAL(8),ROOT(12));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(12));

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,terminal5))
vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,terminal5);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Editor_20_Window,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Window,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Root",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(24)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(13),ROOT(14),ROOT(15));

result = vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2_local_10(PARAMETERS,TERMINAL(4),ROOT(16));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Value_20_Window,1,1,NONE,ROOT(17));

result = vpx_set(PARAMETERS,kVPXValue_Item,TERMINAL(17),TERMINAL(1),ROOT(18));

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(18),TERMINAL(14),ROOT(19));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_IO_20_Value,4,1,TERMINAL(15),TERMINAL(9),TERMINAL(5),TERMINAL(16),ROOT(20));

result = vpx_constant(PARAMETERS,"value",ROOT(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(15),TERMINAL(20),TERMINAL(21),ROOT(22));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(19),TERMINAL(22));

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(23));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Window,2,0,TERMINAL(23),TERMINAL(19));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(19),TERMINAL(23));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Editor_20_Window,2,0,TERMINAL(0),TERMINAL(18));

result = kSuccess;

FOOTERWITHNONE(24)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Editor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = vpx_method_Debug_20_IO_20_Item_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Editor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Editor,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Editor,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Editor,3,0,TERMINAL(2),TERMINAL(4),TERMINAL(1));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Editor,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Editor_20_Window,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Debug_20_Control_20_Item_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Debug_20_Control_20_Item_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 380 272 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Debug_20_Control_20_Item_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,NULL,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_Debug_20_Control_20_Item_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_Debug_20_Control_20_Item_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Graphic",tempClass,NULL,environment);
	tempAttribute = attribute_add("Operation",tempClass,NULL,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic Item");
	return kNOERROR;
}

/* Start Universals: { 799 977 }{ 175 321 } */
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Extract_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Repeat",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Repeat_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Next Case/TRUE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Next_20_Case_20_Success_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Next Case/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Next_20_Case_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Terminate/TRUE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Terminate_20_Success_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Terminate/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Terminate_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Finish/TRUE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Finish_20_Success_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Finish/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Finish_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Fail/TRUE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Fail_20_Success_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Fail/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Fail_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Continue/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Continue_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Inject",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Inject_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Super",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Super_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Breakpoint",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Breakpoint_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLOval,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_13(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Control_20_Item_2F_Initialize_case_14(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(7),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Window",ROOT(1));

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Type,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5_case_1_local_5(PARAMETERS,LIST(3),TERMINAL(0),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1_local_5(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,LIST(6));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command_20_Key,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Breakpoint Graphic",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(7));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(8));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Change_20_Breakpoint,2,0,TERMINAL(11),TERMINAL(9));

result = vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1_local_14(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Click,2,0,TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Operation,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Operation Item",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Current_3F_,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation current fill",ROOT(5));

result = vpx_constant(PARAMETERS,"operation current stroke",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Debug",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation debug fill",ROOT(3));

result = vpx_constant(PARAMETERS,"operation debug stroke",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Skip",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation skip fill",ROOT(3));

result = vpx_constant(PARAMETERS,"operation skip stroke",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
if(vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
if(vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Mode,1,1,TERMINAL(8),ROOT(9));

result = vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1_local_8(PARAMETERS,TERMINAL(9),TERMINAL(2),TERMINAL(4),ROOT(10),ROOT(11));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(1));

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Repeat",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Repeat_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Next Case/TRUE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Next_20_Case_20_Success_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Next Case/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Next_20_Case_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Terminate/TRUE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Terminate_20_Success_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Terminate/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Terminate_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Finish/TRUE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Finish_20_Success_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Finish/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Finish_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Fail/TRUE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Fail_20_Success_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Fail/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Fail_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Continue/FALSE\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Continue_20_Failure_20_Graphic,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Inject",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLOval,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Super",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLRectangle,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Breakpoint",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLOval,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLOval,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_13(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize_case_14(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Debug_20_Comment_20_Item_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Debug_20_Comment_20_Item_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Debug_20_Comment_20_Item_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_Debug_20_Comment_20_Item_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_Debug_20_Comment_20_Item_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_Debug_20_Comment_20_Item_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_Debug_20_Comment_20_Item_2F_Content,environment);
	tempAttribute = attribute_add("Window Origin",tempClass,tempAttribute_Debug_20_Comment_20_Item_2F_Window_20_Origin,environment);
	tempAttribute = attribute_add("Viewport Origin",tempClass,tempAttribute_Debug_20_Comment_20_Item_2F_Viewport_20_Origin,environment);
	tempAttribute = attribute_add("Select List",tempClass,NULL,environment);
	tempAttribute = attribute_add("Vertical Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Horizontal Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Canvas Limits",tempClass,tempAttribute_Debug_20_Comment_20_Item_2F_Canvas_20_Limits,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"List Item");
	return kNOERROR;
}

/* Start Universals: { 743 1083 }{ 200 300 } */
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(5)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Comment_20_Graphic,1,1,NONE,ROOT(0));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLGraphic_20_Item,1,1,NONE,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Graphic,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"( 2 2 18 180 )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Initialize_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Initialize_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Comment_20_Edit_20_Text,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"( 3 10 13 90 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\"Edit Text\"",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Editable_3F_,TERMINAL(7),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Debug_20_Comment_20_Item_2F_Initialize_case_1_local_3(PARAMETERS,ROOT(4));

result = vpx_method_Debug_20_Comment_20_Item_2F_Initialize_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_constant(PARAMETERS,"\"Comment Graphic\"",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Content,TERMINAL(2),TERMINAL(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resize,2,0,TERMINAL(9),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Install_20_Data_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Install_20_Data_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Edit Text\"",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Install_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(4),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(7),TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_method_Debug_20_Comment_20_Item_2F_Install_20_Data_case_1_local_10(PARAMETERS,TERMINAL(9),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"white",ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"0.5",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Rect,1,1,TERMINAL(0),ROOT(10));

result = vpx_constant(PARAMETERS,"-2",ROOT(11));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(10),TERMINAL(11),TERMINAL(11),ROOT(12));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(10),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(1),TERMINAL(13));

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Comment Graphic\"",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Edit Text\"",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Resize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(22)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(3),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(8),TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(9),TERMINAL(7),ROOT(11));

result = vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_7(PARAMETERS,TERMINAL(10),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"2",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(11),TERMINAL(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(12),TERMINAL(14),TERMINAL(13),TERMINAL(15),ROOT(16));

result = vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_11(PARAMETERS,ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(11),TERMINAL(17),ROOT(18));

result = vpx_constant(PARAMETERS,"4",ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(10),TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(19),TERMINAL(17),TERMINAL(20),TERMINAL(18),ROOT(21));

result = vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_16(PARAMETERS,TERMINAL(5),TERMINAL(16));

result = vpx_method_Debug_20_Comment_20_Item_2F_Resize_case_1_local_17(PARAMETERS,TERMINAL(5),TERMINAL(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reset_20_Cache,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(22)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Set_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resize,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Comment_20_Item_2F_Dispatch_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */






Nat4	loadClasses_Debugger(V_Environment environment);
Nat4	loadClasses_Debugger(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Debug Window",environment);
	if(result == NULL) return kERROR;
	VPLC_Debug_20_Window_class_load(result,environment);
	result = class_new("Debug View",environment);
	if(result == NULL) return kERROR;
	VPLC_Debug_20_View_class_load(result,environment);
	result = class_new("Debug Item",environment);
	if(result == NULL) return kERROR;
	VPLC_Debug_20_Item_class_load(result,environment);
	result = class_new("Debug IO Item",environment);
	if(result == NULL) return kERROR;
	VPLC_Debug_20_IO_20_Item_class_load(result,environment);
	result = class_new("Debug Control Item",environment);
	if(result == NULL) return kERROR;
	VPLC_Debug_20_Control_20_Item_class_load(result,environment);
	result = class_new("Debug Comment Item",environment);
	if(result == NULL) return kERROR;
	VPLC_Debug_20_Comment_20_Item_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Debugger(V_Environment environment);
Nat4	loadUniversals_Debugger(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Debug Window/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Close,NULL);

	result = method_new("Debug Window/Close Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Close_20_Self,NULL);

	result = method_new("Debug Window/Rollback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Rollback,NULL);

	result = method_new("Debug Window/Install Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Install_20_Data,NULL);

	result = method_new("Debug Window/Extract Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Extract_20_Data,NULL);

	result = method_new("Debug Window/CE HICommand Update Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Update_20_Status,NULL);

	result = method_new("Debug Window/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_CE_20_HICommand_20_Process,NULL);

	result = method_new("Debug Window/HIC Exec Resume",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Resume,NULL);

	result = method_new("Debug Window/HIC Exec Abort",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Abort,NULL);

	result = method_new("Debug Window/HIC Exec Step",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step,NULL);

	result = method_new("Debug Window/HIC Exec Step Over",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_Over,NULL);

	result = method_new("Debug Window/HIC Exec Step In",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_In,NULL);

	result = method_new("Debug Window/HIC Exec Step Out",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Exec_20_Step_20_Out,NULL);

	result = method_new("Debug Window/HIC Clear Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Clear_20_Breakpoints,NULL);

	result = method_new("Debug Window/HIC Toggle Breakpoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Toggle_20_Breakpoint,NULL);

	result = method_new("Debug Window/CE Mouse Wheel Moved",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved,NULL);

	result = method_new("Debug Window/Add Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Add_20_Editor,NULL);

	result = method_new("Debug Window/Find Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Find_20_Editor,NULL);

	result = method_new("Debug Window/Remove Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Remove_20_Editor,NULL);

	result = method_new("Debug Window/Cancel Editors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Cancel_20_Editors,NULL);

	result = method_new("Debug Window/Close Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Close_20_Data,NULL);

	result = method_new("Debug Window/Create Comment Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Create_20_Comment_20_Items,NULL);

	result = method_new("Debug Window/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Debug Window/Close All",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Close_20_All,NULL);

	result = method_new("Debug Window/Show",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Show,NULL);

	result = method_new("Debug Window/Install Proxy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Install_20_Proxy,NULL);

	result = method_new("Debug Window/CE Window Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_CE_20_Window_20_Event,NULL);

	result = method_new("Debug Window/CE Path Select",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_CE_20_Path_20_Select,NULL);

	result = method_new("Debug Window/Get Path List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_Get_20_Path_20_List,NULL);

	result = method_new("Debug Window/HIC Edit Reveal Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Window_2F_HIC_20_Edit_20_Reveal_20_Path,NULL);

	result = method_new("Debug View/Dispatch Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Dispatch_20_Click,NULL);

	result = method_new("Debug View/Process Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Process_20_Click,NULL);

	result = method_new("Debug View/Process Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Process_20_Key,NULL);

	result = method_new("Debug View/Return",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Return,NULL);

	result = method_new("Debug View/Command Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Command_20_Key,NULL);

	result = method_new("Debug View/Show Current Operation",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Show_20_Current_20_Operation,NULL);

	result = method_new("Debug View/Continue",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Continue,NULL);

	result = method_new("Debug View/Step Into",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Step_20_Into,NULL);

	result = method_new("Debug View/Step Out",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Step_20_Out,NULL);

	result = method_new("Debug View/Tab",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Tab,NULL);

	result = method_new("Debug View/Previous Case",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Previous_20_Case,NULL);

	result = method_new("Debug View/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Draw,NULL);

	result = method_new("Debug View/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Draw_20_CG,NULL);

	result = method_new("Debug View/Erase View CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Erase_20_View_20_CG,NULL);

	result = method_new("Debug View/Old Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Old_20_Draw,NULL);

	result = method_new("Debug View/Resize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Resize,NULL);

	result = method_new("Debug View/Find IO Item Near",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_View_2F_Find_20_IO_20_Item_20_Near,NULL);

	result = method_new("Debug Item/Click Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Click_20_Item,NULL);

	result = method_new("Debug Item/Draw Synchro",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Draw_20_Synchro,NULL);

	result = method_new("Debug Item/Extract Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Extract_20_Data,NULL);

	result = method_new("Debug Item/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Initialize,NULL);

	result = method_new("Debug Item/Install Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Install_20_Data,NULL);

	result = method_new("Debug Item/Move Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Move_20_Item,NULL);

	result = method_new("Debug Item/Set Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Set_20_Frame,NULL);

	result = method_new("Debug Item/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Set_20_Name,NULL);

	result = method_new("Debug Item/Synchro To Operation",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation,NULL);

	result = method_new("Debug Item/Double Click Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Double_20_Click_20_Item,NULL);

	result = method_new("Debug Item/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Draw,NULL);

	result = method_new("Debug Item/Synchro To Operation CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Synchro_20_To_20_Operation_20_CG,NULL);

	result = method_new("Debug Item/Draw Synchro CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Draw_20_Synchro_20_CG,NULL);

	result = method_new("Debug Item/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Draw_20_CG,NULL);

	result = method_new("Debug Item/Dispatch Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Dispatch_20_Click,NULL);

	result = method_new("Debug Item/Process Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Process_20_Click,NULL);

	result = method_new("Debug Item/Set Selected Colors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Item_2F_Set_20_Selected_20_Colors,NULL);

	result = method_new("Debug IO Item/Connect To Root",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root,NULL);

	result = method_new("Debug IO Item/Draw Connection",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection,NULL);

	result = method_new("Debug IO Item/Extract Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Extract_20_Data,NULL);

	result = method_new("Debug IO Item/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Initialize,NULL);

	result = method_new("Debug IO Item/Install Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Install_20_Data,NULL);

	result = method_new("Debug IO Item/Item Center",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Item_20_Center,NULL);

	result = method_new("Debug IO Item/Move Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Move_20_Item,NULL);

	result = method_new("Debug IO Item/Process Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Process_20_Click,NULL);

	result = method_new("Debug IO Item/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Set_20_Name,NULL);

	result = method_new("Debug IO Item/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Set_20_Value,NULL);

	result = method_new("Debug IO Item/Close Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Close_20_Value,NULL);

	result = method_new("Debug IO Item/Connect To Root CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Connect_20_To_20_Root_20_CG,NULL);

	result = method_new("Debug IO Item/Draw Connection CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Draw_20_Connection_20_CG,NULL);

	result = method_new("Debug IO Item/Show CTM",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Show_20_CTM,NULL);

	result = method_new("Debug IO Item/Select CTM",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Select_20_CTM,NULL);

	result = method_new("Debug IO Item/Open Editor Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Open_20_Editor_20_Window,NULL);

	result = method_new("Debug IO Item/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Close,NULL);

	result = method_new("Debug IO Item/Find Editor Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Find_20_Editor_20_Window,NULL);

	result = method_new("Debug IO Item/Set Editor Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Set_20_Editor_20_Window,NULL);

	result = method_new("Debug IO Item/Remove Editor Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_IO_20_Item_2F_Remove_20_Editor_20_Window,NULL);

	result = method_new("Debug Control Item/Extract Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Control_20_Item_2F_Extract_20_Data,NULL);

	result = method_new("Debug Control Item/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Control_20_Item_2F_Initialize,NULL);

	result = method_new("Debug Control Item/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Control_20_Item_2F_Set_20_Name,NULL);

	result = method_new("Debug Control Item/Process Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Control_20_Item_2F_Process_20_Click,NULL);

	result = method_new("Debug Control Item/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Control_20_Item_2F_Close,NULL);

	result = method_new("Debug Control Item/Get Color Names",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Control_20_Item_2F_Get_20_Color_20_Names,NULL);

	result = method_new("Debug Control Item/Old Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Control_20_Item_2F_Old_20_Initialize,NULL);

	result = method_new("Debug Comment Item/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Comment_20_Item_2F_Initialize,NULL);

	result = method_new("Debug Comment Item/Install Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Comment_20_Item_2F_Install_20_Data,NULL);

	result = method_new("Debug Comment Item/Erase View CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Comment_20_Item_2F_Erase_20_View_20_CG,NULL);

	result = method_new("Debug Comment Item/Resize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Comment_20_Item_2F_Resize,NULL);

	result = method_new("Debug Comment Item/Set Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Comment_20_Item_2F_Set_20_Frame,NULL);

	result = method_new("Debug Comment Item/Dispatch Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Comment_20_Item_2F_Dispatch_20_Click,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Debug_20_Background[] = {
0000000000, 0X00000070, 0X00000024, 0X00000004, 0X00000014, 0X00000048, 0X00000044, 0X00000040,
0X00000038, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000040, 0X00000003,
0X0000004C, 0X00000064, 0X0000007C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000D6D8, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000D6D8, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X0000D6D8
	};

Nat4	loadPersistents_Debugger(V_Environment environment);
Nat4	loadPersistents_Debugger(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Debug Background",tempPersistent_Debug_20_Background,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Debug Window/Toolbar",NULL,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_Debugger(V_Environment environment);
Nat4	load_Debugger(V_Environment environment)
{

	loadClasses_Debugger(environment);
	loadUniversals_Debugger(environment);
	loadPersistents_Debugger(environment);
	return kNOERROR;

}

