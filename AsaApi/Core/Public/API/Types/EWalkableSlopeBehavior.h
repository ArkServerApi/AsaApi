#pragma once


enum class EWalkableSlopeBehavior:int
{
	WalkableSlope_Default = 0x0,
	WalkableSlope_Increase = 0x1,
	WalkableSlope_Decrease = 0x2,
	WalkableSlope_Unwalkable = 0x3,
	WalkableSlope_Max = 0x4
};