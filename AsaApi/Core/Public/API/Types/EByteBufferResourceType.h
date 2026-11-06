#pragma once


enum class EByteBufferResourceType:int
{
	Float4_Buffer = 0x0,
	Float4_StructuredBuffer = 0x1,
	Uint_Buffer = 0x2,
	Uint4Aligned_Buffer = 0x3,
	Float4_Texture = 0x4,
	Count = 0x5
};