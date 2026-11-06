#pragma once


enum class EBinkMoviePlayerBinkBufferModes:int
{
	MP_Bink_Stream = 0x0,
	MP_Bink_PreloadAll = 0x1,
	MP_Bink_StreamUntilResident = 0x2,
	MP_Bink_MAX = 0x3
};