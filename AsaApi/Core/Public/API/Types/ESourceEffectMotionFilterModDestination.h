#pragma once


enum class ESourceEffectMotionFilterModDestination:unsigned char
{
	FilterACutoffFrequency = 0x0,
	FilterAResonance = 0x1,
	FilterAOutputVolumeDB = 0x2,
	FilterBCutoffFrequency = 0x3,
	FilterBResonance = 0x4,
	FilterBOutputVolumeDB = 0x5,
	FilterMix = 0x6,
	Count = 0x7
};