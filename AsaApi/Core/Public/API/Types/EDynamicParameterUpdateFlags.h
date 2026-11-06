#pragma once


enum class EDynamicParameterUpdateFlags:int
{
	EDPU_UPDATE_NONE = 0x0,
	EDPU_UPDATE_0 = 0x1,
	EDPU_UPDATE_1 = 0x2,
	EDPU_UPDATE_2 = 0x4,
	EDPU_UPDATE_3 = 0x8,
	EDPU_UPDATE_01 = 0x3,
	EDPU_UPDATE_012 = 0x7,
	EDPU_UPDATE_ALL = 0xF
};