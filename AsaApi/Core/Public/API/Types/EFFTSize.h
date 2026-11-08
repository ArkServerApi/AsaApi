#pragma once


enum class EFFTSize:unsigned char
{
	DefaultSize = 0x0,
	Min = 0x1,
	Small = 0x2,
	Medium = 0x3,
	Large = 0x4,
	VeryLarge = 0x5,
	Max = 0x6
};