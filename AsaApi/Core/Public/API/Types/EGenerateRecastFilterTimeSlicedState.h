#pragma once


enum class EGenerateRecastFilterTimeSlicedState:unsigned char
{
	FilterLowHangingWalkableObstacles = 0x0,
	FilterLedgeSpans = 0x1,
	FilterWalkableLowHeightSpans = 0x2
};