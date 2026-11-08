#pragma once


enum class EResourceTransitionFlags:int
{
	None = 0x0,
	MaintainCompression = 0x1,
	Discard = 0x2,
	Clear = 0x4,
	Last = 0x4,
	Mask = 0x7
};