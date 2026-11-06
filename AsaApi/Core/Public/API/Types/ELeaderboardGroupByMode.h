#pragma once


namespace ELeaderboardGroupByMode
{
	enum Type:int
	{
		None = 0x0,
		First = 0x1,
		Min = 0x2,
		Max = 0x3,
		Sum = 0x4,
		Count = 0x5,
		Average = 0x6
	};
}