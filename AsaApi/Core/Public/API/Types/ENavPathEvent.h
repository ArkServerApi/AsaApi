#pragma once


namespace ENavPathEvent
{
	enum Type:int
	{
		Cleared = 0x0,
		NewPath = 0x1,
		UpdatedDueToGoalMoved = 0x2,
		UpdatedDueToNavigationChanged = 0x3,
		Invalidated = 0x4,
		RePathFailed = 0x5,
		MetaPathUpdate = 0x6,
		Custom = 0x7
	};
}