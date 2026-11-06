#pragma once


enum class ERuntimeVirtualTextureMipValueMode:int
{
	RVTMVM_None = 0x0,
	RVTMVM_MipLevel = 0x1,
	RVTMVM_MipBias = 0x2,
	RVTMVM_RecalculateDerivatives = 0x3,
	RVTMVM_MAX = 0x4
};