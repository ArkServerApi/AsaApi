#pragma once


enum class EModulationDestination:unsigned char
{
	Volume = 0x0,
	Pitch = 0x1,
	Lowpass = 0x2,
	Highpass = 0x3,
	Count = 0x4
};