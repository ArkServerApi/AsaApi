#pragma once


enum class EGeometryScriptSamplingWeightMode:unsigned char
{
	WeightToRadius = 0x0,
	FilledWeightToRadius = 0x1,
	WeightedRandom = 0x2
};