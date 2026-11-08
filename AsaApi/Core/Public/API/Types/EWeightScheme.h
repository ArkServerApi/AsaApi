#pragma once


enum class EWeightScheme:int
{
	Uniform = 0x0,
	Umbrella = 0x1,
	Valence = 0x2,
	MeanValue = 0x3,
	Cotangent = 0x4,
	ClampedCotangent = 0x5,
	IDTCotangent = 0x6
};