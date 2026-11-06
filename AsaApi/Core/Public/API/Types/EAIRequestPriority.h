#pragma once


namespace EAIRequestPriority
{
	enum Type:int
	{
		SoftScript = 0x0,
		Logic = 0x1,
		HardScript = 0x2,
		Reaction = 0x3,
		Ultimate = 0x4,
		MAX = 0x5
	};
}