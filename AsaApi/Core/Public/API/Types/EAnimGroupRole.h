#pragma once


namespace EAnimGroupRole
{
	enum Type:int
	{
		CanBeLeader = 0x0,
		AlwaysFollower = 0x1,
		AlwaysLeader = 0x2,
		TransitionLeader = 0x3,
		TransitionFollower = 0x4
	};
}