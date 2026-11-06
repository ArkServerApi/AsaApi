#pragma once


namespace EPrimalStatsValueTypes
{
	enum Type:int
	{
		TotalShots = 0x0,
		Misses = 0x1,
		HitsStructure = 0x2,
		HitsDinoBody = 0x3,
		HitsDinoCritical = 0x4,
		HitsPlayerBody = 0x5,
		HitsPlayerCritical = 0x6,
		MAX = 0x7
	};
}