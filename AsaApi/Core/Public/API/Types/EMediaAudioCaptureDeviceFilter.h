#pragma once


enum class EMediaAudioCaptureDeviceFilter:unsigned char
{
	None = 0x0,
	Card = 0x1,
	Microphone = 0x2,
	Software = 0x4,
	Unknown = 0x8
};