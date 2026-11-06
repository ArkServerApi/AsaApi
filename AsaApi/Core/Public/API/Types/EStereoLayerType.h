#pragma once


enum class EStereoLayerType:int
{
	SLT_WorldLocked = 0x0,
	SLT_TrackerLocked = 0x1,
	SLT_FaceLocked = 0x2,
	SLT_MAX = 0x3
};