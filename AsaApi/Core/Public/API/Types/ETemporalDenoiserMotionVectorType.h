#pragma once


enum class ETemporalDenoiserMotionVectorType:int
{
	NONE = 0xFF,
	BUILTIN = 0x0,
	PLUGIN = 0x1,
	MAX = 0x2
};