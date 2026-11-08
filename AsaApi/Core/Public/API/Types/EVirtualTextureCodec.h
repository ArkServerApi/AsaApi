#pragma once


enum class EVirtualTextureCodec:unsigned char
{
	Black = 0x0,
	OpaqueBlack = 0x1,
	White = 0x2,
	Flat = 0x3,
	RawGPU = 0x4,
	ZippedGPU_DEPRECATED = 0x5,
	Crunch_DEPRECATED = 0x6,
	Max = 0x7
};