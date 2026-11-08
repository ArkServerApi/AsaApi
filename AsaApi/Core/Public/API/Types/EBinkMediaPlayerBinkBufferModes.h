#pragma once


enum class EBinkMediaPlayerBinkBufferModes:int
{
	BMASM_Bink_Stream = 0x0,
	BMASM_Bink_PreloadAll = 0x1,
	BMASM_Bink_StreamUntilResident = 0x2,
	BMASM_Bink_MAX = 0x3
};