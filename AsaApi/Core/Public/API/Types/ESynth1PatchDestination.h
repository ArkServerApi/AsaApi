#pragma once


enum class ESynth1PatchDestination:unsigned char
{
	Osc1Gain = 0x0,
	Osc1Frequency = 0x1,
	Osc1Pulsewidth = 0x2,
	Osc2Gain = 0x3,
	Osc2Frequency = 0x4,
	Osc2Pulsewidth = 0x5,
	FilterFrequency = 0x6,
	FilterQ = 0x7,
	Gain = 0x8,
	Pan = 0x9,
	LFO1Frequency = 0xA,
	LFO1Gain = 0xB,
	LFO2Frequency = 0xC,
	LFO2Gain = 0xD,
	Count = 0xE
};