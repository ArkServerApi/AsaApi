#pragma once


enum class ESynth1PatchSource:unsigned char
{
	LFO1 = 0x0,
	LFO2 = 0x1,
	Envelope = 0x2,
	BiasEnvelope = 0x3,
	Count = 0x4
};