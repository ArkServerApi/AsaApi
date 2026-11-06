#pragma once


enum class EMaterialTranslucencyPass:int
{
	MTP_BeforeDOF = 0x0,
	MTP_AfterDOF = 0x1,
	MTP_AfterMotionBlur = 0x2,
	MTP_MAX = 0x3
};