#pragma once


enum class EAudioPlugin:unsigned char
{
	SPATIALIZATION = 0x0,
	REVERB = 0x1,
	OCCLUSION = 0x2,
	MODULATION = 0x3,
	SOURCEDATAOVERRIDE = 0x4,
	COUNT = 0x5
};