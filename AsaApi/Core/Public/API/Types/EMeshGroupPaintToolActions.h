#pragma once


enum class EMeshGroupPaintToolActions:int
{
	NoAction = 0x0,
	ClearFrozen = 0x1,
	FreezeCurrent = 0x2,
	FreezeOthers = 0x3,
	GrowCurrent = 0x4,
	ShrinkCurrent = 0x5,
	ClearCurrent = 0x6,
	FloodFillCurrent = 0x7,
	ClearAll = 0x8
};