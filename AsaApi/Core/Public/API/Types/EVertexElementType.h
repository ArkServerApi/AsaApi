#pragma once


enum class EVertexElementType:int
{
	VET_None = 0x0,
	VET_Float1 = 0x1,
	VET_Float2 = 0x2,
	VET_Float3 = 0x3,
	VET_Float4 = 0x4,
	VET_PackedNormal = 0x5,
	VET_UByte4 = 0x6,
	VET_UByte4N = 0x7,
	VET_Color = 0x8,
	VET_Short2 = 0x9,
	VET_Short4 = 0xA,
	VET_Short2N = 0xB,
	VET_Half2 = 0xC,
	VET_Half4 = 0xD,
	VET_Short4N = 0xE,
	VET_UShort2 = 0xF,
	VET_UShort4 = 0x10,
	VET_UShort2N = 0x11,
	VET_UShort4N = 0x12,
	VET_URGB10A2N = 0x13,
	VET_UInt = 0x14,
	VET_MAX = 0x15,
	VET_NumBits = 0x5
};