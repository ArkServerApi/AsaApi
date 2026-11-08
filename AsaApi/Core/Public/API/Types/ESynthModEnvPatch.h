#pragma once


enum class ESynthModEnvPatch:unsigned char
{
	PatchToNone = 0x0,
	PatchToOscFreq = 0x1,
	PatchToFilterFreq = 0x2,
	PatchToFilterQ = 0x3,
	PatchToLFO1Gain = 0x4,
	PatchToLFO2Gain = 0x5,
	PatchToLFO1Freq = 0x6,
	PatchToLFO2Freq = 0x7,
	Count = 0x8
};