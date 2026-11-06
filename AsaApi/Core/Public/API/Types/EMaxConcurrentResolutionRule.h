#pragma once


namespace EMaxConcurrentResolutionRule
{
	enum Type:int
	{
		PreventNew = 0x0,
		StopOldest = 0x1,
		StopFarthestThenPreventNew = 0x2,
		StopFarthestThenOldest = 0x3,
		StopLowestPriority = 0x4,
		StopQuietest = 0x5,
		StopLowestPriorityThenPreventNew = 0x6,
		Count = 0x7
	};
}