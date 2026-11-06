#pragma once


enum class EPhaserLFOType:unsigned char
{
	Sine = 0x0,
	UpSaw = 0x1,
	DownSaw = 0x2,
	Square = 0x3,
	Triangle = 0x4,
	Exponential = 0x5,
	RandomSampleHold = 0x6,
	Count = 0x7
};