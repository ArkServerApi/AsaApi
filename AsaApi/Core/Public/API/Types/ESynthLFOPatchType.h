#pragma once


enum class ESynthLFOPatchType:unsigned char
{
	PatchToNone = 0x0,
	PatchToGain = 0x1,
	PatchToOscFreq = 0x2,
	PatchToFilterFreq = 0x3,
	PatchToFilterQ = 0x4,
	PatchToOscPulseWidth = 0x5,
	PatchToOscPan = 0x6,
	PatchLFO1ToLFO2Frequency = 0x7,
	PatchLFO1ToLFO2Gain = 0x8,
	Count = 0x9
};