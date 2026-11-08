#pragma once


namespace ETranslucencyPass
{
	enum Type:int
	{
		TPT_TranslucencyStandard = 0x0,
		TPT_TranslucencyStandardModulate = 0x1,
		TPT_TranslucencyAfterDOF = 0x2,
		TPT_TranslucencyAfterDOFModulate = 0x3,
		TPT_TranslucencyAfterMotionBlur = 0x4,
		TPT_AllTranslucency = 0x5,
		TPT_MAX = 0x6
	};
}