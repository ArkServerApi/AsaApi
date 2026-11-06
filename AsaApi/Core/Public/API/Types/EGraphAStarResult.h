#pragma once


enum class EGraphAStarResult:int
{
	SearchFail = 0x0,
	SearchSuccess = 0x1,
	GoalUnreachable = 0x2,
	InfiniteLoop = 0x3
};