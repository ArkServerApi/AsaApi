#pragma once


enum class EAudioDeviceChangedRole:unsigned char
{
	Invalid = 0x0,
	Console = 0x1,
	Multimedia = 0x2,
	Communications = 0x3,
	Count = 0x4
};