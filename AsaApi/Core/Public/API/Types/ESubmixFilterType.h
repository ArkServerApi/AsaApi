#pragma once


enum class ESubmixFilterType:unsigned char
{
	LowPass = 0x0,
	HighPass = 0x1,
	BandPass = 0x2,
	BandStop = 0x3,
	Count = 0x4
};