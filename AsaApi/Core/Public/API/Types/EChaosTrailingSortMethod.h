#pragma once


enum class EChaosTrailingSortMethod:unsigned char
{
	SortNone = 0x0,
	SortByHighestMass = 0x1,
	SortByHighestSpeed = 0x2,
	SortByNearestFirst = 0x3,
	Count = 0x4
};