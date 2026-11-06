#pragma once


enum class EPreviousBoneTransformUpdateMode:int
{
	None = 0x0,
	UpdatePrevious = 0x1,
	DuplicateCurrentToPrevious = 0x2
};