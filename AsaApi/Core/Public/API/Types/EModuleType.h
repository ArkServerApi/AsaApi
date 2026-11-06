#pragma once


enum class EModuleType:int
{
	EPMT_General = 0x0,
	EPMT_TypeData = 0x1,
	EPMT_Beam = 0x2,
	EPMT_Trail = 0x3,
	EPMT_Spawn = 0x4,
	EPMT_Required = 0x5,
	EPMT_Event = 0x6,
	EPMT_Light = 0x7,
	EPMT_SubUV = 0x8,
	EPMT_MAX = 0x9
};