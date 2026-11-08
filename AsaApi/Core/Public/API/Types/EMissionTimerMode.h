#pragma once


namespace EMissionTimerMode
{
	enum Type:int
	{
		HideTimer = 0x0,
		ShowTimeRemaining = 0x1,
		ShowTimeElapsed = 0x2,
		UseBPGetMissionTimerText = 0x3
	};
}