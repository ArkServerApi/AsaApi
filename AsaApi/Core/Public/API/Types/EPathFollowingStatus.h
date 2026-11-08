#pragma once


namespace EPathFollowingStatus
{
	enum Type:int
	{
		Idle = 0x0,
		Waiting = 0x1,
		Paused = 0x2,
		Moving = 0x3
	};
}