#pragma once


enum class InterleavingMode:int
{
	INTERLEAVE_NONE = 0x0,
	INTERLEAVE_CAPTURE = 0x1,
	INTERLEAVE_FULL = 0x2,
	INTERLEAVE_NONE_BUFFERED = 0x3
};