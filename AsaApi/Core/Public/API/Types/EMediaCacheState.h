#pragma once


enum class EMediaCacheState:int
{
	Cached = 0x0,
	Loaded = 0x1,
	Loading = 0x2,
	Pending = 0x3
};