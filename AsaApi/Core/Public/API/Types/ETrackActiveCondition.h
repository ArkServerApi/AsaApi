#pragma once


enum class ETrackActiveCondition:int
{
	ETAC_Always = 0x0,
	ETAC_GoreEnabled = 0x1,
	ETAC_GoreDisabled = 0x2,
	ETAC_MAX = 0x3
};