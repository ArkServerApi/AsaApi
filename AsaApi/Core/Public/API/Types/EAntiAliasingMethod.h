#pragma once


enum class EAntiAliasingMethod:int
{
	AAM_None = 0x0,
	AAM_FXAA = 0x1,
	AAM_TemporalAA = 0x2,
	AAM_MSAA = 0x3,
	AAM_TSR = 0x4,
	AAM_MAX = 0x5
};