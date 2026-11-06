#pragma once


enum class EDownsampleDepthFilter:int
{
	Point = 0x0,
	Max = 0x1,
	Checkerboard = 0x2,
	MinAndMaxDepth = 0x3
};