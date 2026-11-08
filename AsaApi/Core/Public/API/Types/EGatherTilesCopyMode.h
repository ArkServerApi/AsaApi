#pragma once


enum class EGatherTilesCopyMode:int
{
	NoCopy = 0x0,
	CopyData = 0x1,
	CopyCacheData = 0x2,
	CopyDataAndCacheData = 0x3
};