#pragma once


enum class EFrameNumberDisplayFormats:unsigned char
{
	NonDropFrameTimecode = 0x0,
	DropFrameTimecode = 0x1,
	Seconds = 0x2,
	Frames = 0x3,
	MAX_Count = 0x4
};