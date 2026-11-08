#pragma once


enum class EUpdateClockSource:unsigned char
{
	Tick = 0x0,
	Platform = 0x1,
	Audio = 0x2,
	RelativeTimecode = 0x3,
	Timecode = 0x4,
	PlayEveryFrame = 0x5,
	Custom = 0x6
};