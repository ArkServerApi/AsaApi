#pragma once


enum class ELevelStreamingState:unsigned char
{
	Removed = 0x0,
	Unloaded = 0x1,
	FailedToLoad = 0x2,
	Loading = 0x3,
	LoadedNotVisible = 0x4,
	MakingVisible = 0x5,
	LoadedVisible = 0x6,
	MakingInvisible = 0x7
};