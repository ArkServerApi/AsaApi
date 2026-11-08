#pragma once


enum class ESynth1OscType:unsigned char
{
	Sine = 0x0,
	Saw = 0x1,
	Triangle = 0x2,
	Square = 0x3,
	Noise = 0x4,
	Count = 0x5
};