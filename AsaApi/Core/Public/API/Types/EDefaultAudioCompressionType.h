#pragma once


enum class EDefaultAudioCompressionType:unsigned char
{
	BinkAudio = 0x0,
	ADPCM = 0x1,
	PCM = 0x2,
	PlatformSpecific = 0x3
};