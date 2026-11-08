#pragma once


enum class EPcmBitDepthConversion:unsigned char
{
	SameAsSource = 0x0,
	Int16 = 0x1,
	Float32 = 0x2
};