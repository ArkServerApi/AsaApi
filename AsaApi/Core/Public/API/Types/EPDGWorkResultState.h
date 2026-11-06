#pragma once


enum class EPDGWorkResultState:unsigned char
{
	None = 0x0,
	ToLoad = 0x1,
	Loading = 0x2,
	Loaded = 0x3,
	ToDelete = 0x4,
	Deleting = 0x5,
	Deleted = 0x6,
	NotLoaded = 0x7
};