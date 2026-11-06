#pragma once


enum class EAudioBusChannels:unsigned char
{
	Mono = 0x0,
	Stereo = 0x1,
	Quad = 0x3,
	FivePointOne = 0x5,
	SevenPointOne = 0x7
};