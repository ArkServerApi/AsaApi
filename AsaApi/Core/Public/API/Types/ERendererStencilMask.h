#pragma once


enum class ERendererStencilMask:unsigned char
{
	ERSM_Default = 0x0,
	ERSM_255 = 0x1,
	ERSM_1 = 0x2,
	ERSM_2 = 0x3,
	ERSM_4 = 0x4,
	ERSM_8 = 0x5,
	ERSM_16 = 0x6,
	ERSM_32 = 0x7,
	ERSM_64 = 0x8,
	ERSM_128 = 0x9
};