#pragma once


namespace EMassTeleportState
{
	enum Type:int
	{
		INITIATED = 0x0,
		TRIGGERED_SUCCESS = 0x1,
		TRIGGERED_FAILED = 0x2,
		COMPLETED = 0x3,
		CANCELLED = 0x4
	};
}