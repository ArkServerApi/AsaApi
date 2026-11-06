#pragma once


enum class EGranularSynthEnvelopeType:unsigned char
{
	Rectangular = 0x0,
	Triangle = 0x1,
	DownwardTriangle = 0x2,
	UpwardTriangle = 0x3,
	ExponentialDecay = 0x4,
	ExponentialIncrease = 0x5,
	Gaussian = 0x6,
	Hanning = 0x7,
	Lanczos = 0x8,
	Cosine = 0x9,
	CosineSquared = 0xA,
	Welch = 0xB,
	Blackman = 0xC,
	BlackmanHarris = 0xD,
	Count = 0xE
};