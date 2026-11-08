#pragma once


enum class ESoundAssetCompressionType:unsigned char
{
	BinkAudio = 0x0,
	ADPCM = 0x1,
	PCM = 0x2,
	PlatformSpecific = 0x3,
	ProjectDefined = 0x4
};