#pragma once


enum class EAudioDeviceChangedState:unsigned char
{
	Invalid = 0x0,
	Active = 0x1,
	Disabled = 0x2,
	NotPresent = 0x3,
	Unplugged = 0x4,
	Count = 0x5
};