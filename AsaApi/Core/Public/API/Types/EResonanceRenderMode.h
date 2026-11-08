#pragma once


enum class EResonanceRenderMode:unsigned char
{
	StereoPanning = 0x0,
	BinauralLowQuality = 0x1,
	BinauralMediumQuality = 0x2,
	BinauralHighQuality = 0x3,
	RoomEffectsOnly = 0x4
};