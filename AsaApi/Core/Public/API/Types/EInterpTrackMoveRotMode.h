#pragma once


enum class EInterpTrackMoveRotMode:int
{
	IMR_Keyframed = 0x0,
	IMR_LookAtGroup = 0x1,
	IMR_Ignore = 0x2,
	IMR_MAX = 0x3
};