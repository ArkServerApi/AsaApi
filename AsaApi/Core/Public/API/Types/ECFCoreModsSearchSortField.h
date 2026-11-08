#pragma once


enum class ECFCoreModsSearchSortField:unsigned char
{
	None = 0x0,
	Featured = 0x1,
	Popularity = 0x2,
	LastUpdated = 0x3,
	Name = 0x4,
	Author = 0x5,
	TotalDownloads = 0x6,
	Category = 0x7,
	GameVersion = 0x8,
	EarlyAccess = 0x9,
	FeaturedReleased = 0xA,
	ReleasedDate = 0xB
};