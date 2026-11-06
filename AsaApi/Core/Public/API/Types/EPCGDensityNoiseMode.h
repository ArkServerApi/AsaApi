#pragma once


enum class EPCGDensityNoiseMode:unsigned char
{
	Set = 0x0,
	Minimum = 0x1,
	Maximum = 0x2,
	Add = 0x3,
	Multiply = 0x4
};