#pragma once


namespace EBTFlowAbortMode
{
	enum Type:int
	{
		None = 0x0,
		LowerPriority = 0x1,
		Self = 0x2,
		Both = 0x3
	};
}