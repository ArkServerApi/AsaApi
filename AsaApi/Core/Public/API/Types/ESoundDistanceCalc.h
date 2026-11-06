#pragma once


enum class ESoundDistanceCalc:int
{
	SOUNDDISTANCE_Normal = 0x0,
	SOUNDDISTANCE_InfiniteXYPlane = 0x1,
	SOUNDDISTANCE_InfiniteXZPlane = 0x2,
	SOUNDDISTANCE_InfiniteYZPlane = 0x3,
	SOUNDDISTANCE_MAX = 0x4
};