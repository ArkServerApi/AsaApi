#pragma once


enum class EDecompressionType:int
{
	DTYPE_Setup = 0x0,
	DTYPE_Invalid = 0x1,
	DTYPE_Preview = 0x2,
	DTYPE_Native = 0x3,
	DTYPE_RealTime = 0x4,
	DTYPE_Procedural = 0x5,
	DTYPE_Xenon = 0x6,
	DTYPE_Streaming = 0x7,
	DTYPE_MAX = 0x8
};