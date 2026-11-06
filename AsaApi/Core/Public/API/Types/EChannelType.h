#pragma once


enum class EChannelType:int
{
	CHTYPE_None = 0x0,
	CHTYPE_Control = 0x1,
	CHTYPE_Actor = 0x2,
	CHTYPE_File = 0x3,
	CHTYPE_Voice = 0x4,
	CHTYPE_BattlEye = 0x5,
	CHTYPE_MAX = 0x8
};