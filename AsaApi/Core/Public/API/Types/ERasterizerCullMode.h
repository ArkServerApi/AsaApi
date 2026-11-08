#pragma once


enum class ERasterizerCullMode:int
{
	CM_None = 0x0,
	CM_CW = 0x1,
	CM_CCW = 0x2,
	ERasterizerCullMode_Num = 0x3,
	ERasterizerCullMode_NumBits = 0x2
};