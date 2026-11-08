#pragma once


enum class EVisibilityTrackCondition:int
{
	EVTC_Always = 0x0,
	EVTC_GoreEnabled = 0x1,
	EVTC_GoreDisabled = 0x2,
	EVTC_MAX = 0x3
};