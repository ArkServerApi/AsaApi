#pragma once


enum class EGPUProfileSortMode:int
{
	EChronological = 0x0,
	ETimeElapsed = 0x1,
	ENumPrims = 0x2,
	ENumVerts = 0x3,
	EMax = 0x4
};