#pragma once


namespace ECompanionState
{
	enum Type:int
	{
		IDLE = 0x0,
		FOCUSED = 0x1,
		EVENT = 0x2,
		MONOLOGUE = 0x3,
		ASLEEP = 0x4,
		CUSTOM = 0x5
	};
}