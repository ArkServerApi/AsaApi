#pragma once


namespace EComponentMarkedForEndOfFrameUpdateState
{
	enum Type:int
	{
		Unmarked = 0x0,
		Marked = 0x1,
		MarkedForGameThread = 0x2
	};
}