#pragma once


enum class EChaosRemovalSortMethod:unsigned char
{
	SortNone = 0x0,
	SortByHighestMass = 0x1,
	SortByNearestFirst = 0x2,
	Count = 0x3
};