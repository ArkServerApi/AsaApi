#pragma once


namespace EBTActiveNode
{
	enum Type:int
	{
		Composite = 0x0,
		ActiveTask = 0x1,
		AbortingTask = 0x2,
		InactiveTask = 0x3
	};
}