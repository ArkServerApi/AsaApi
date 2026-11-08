#pragma once


enum class ETextureMipValueMode:int
{
	TMVM_None = 0x0,
	TMVM_MipLevel = 0x1,
	TMVM_MipBias = 0x2,
	TMVM_Derivative = 0x3,
	TMVM_MAX = 0x4
};