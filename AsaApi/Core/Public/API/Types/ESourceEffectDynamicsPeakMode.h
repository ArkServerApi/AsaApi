#pragma once


enum class ESourceEffectDynamicsPeakMode:unsigned char
{
	MeanSquared = 0x0,
	RootMeanSquared = 0x1,
	Peak = 0x2,
	Count = 0x3
};