#pragma once


enum class EAttenuationDistanceModel:unsigned char
{
	Linear = 0x0,
	Logarithmic = 0x1,
	Inverse = 0x2,
	LogReverse = 0x3,
	NaturalSound = 0x4,
	Custom = 0x5
};