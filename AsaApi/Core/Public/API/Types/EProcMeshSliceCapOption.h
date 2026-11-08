#pragma once


enum class EProcMeshSliceCapOption:unsigned char
{
	NoCap = 0x0,
	CreateNewSectionForCap = 0x1,
	UseLastSectionForCap = 0x2
};