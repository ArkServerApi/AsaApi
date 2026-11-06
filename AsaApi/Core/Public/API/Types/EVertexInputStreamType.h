#pragma once


enum class EVertexInputStreamType:unsigned char
{
	Default = 0x0,
	PositionOnly = 0x1,
	PositionAndNormalOnly = 0x2,
	Count = 0x3
};