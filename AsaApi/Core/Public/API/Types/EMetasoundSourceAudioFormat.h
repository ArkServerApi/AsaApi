#pragma once


enum class EMetasoundSourceAudioFormat:unsigned char
{
	Mono = 0x0,
	Stereo = 0x1,
	Quad = 0x2,
	FiveDotOne = 0x3,
	SevenDotOne = 0x4,
	COUNT = 0x5
};