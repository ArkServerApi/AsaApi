#pragma once


enum class ERHIFeatureSupport:unsigned char
{
	Unsupported = 0x0,
	RuntimeDependent = 0x1,
	RuntimeGuaranteed = 0x2,
	Num = 0x3,
	NumBits = 0x2
};