#pragma once


enum class EChaosCollisionSortMethod:unsigned char
{
	SortNone = 0x0,
	SortByHighestMass = 0x1,
	SortByHighestSpeed = 0x2,
	SortByHighestImpulse = 0x3,
	SortByNearestFirst = 0x4,
	Count = 0x5
};