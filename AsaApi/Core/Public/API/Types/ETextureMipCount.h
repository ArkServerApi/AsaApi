#pragma once


enum class ETextureMipCount:int
{
	TMC_ResidentMips = 0x0,
	TMC_AllMips = 0x1,
	TMC_AllMipsBiased = 0x2,
	TMC_MAX = 0x3
};