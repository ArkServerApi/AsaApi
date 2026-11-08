#pragma once


enum class ESubmixEffectDynamicsKeySource:unsigned char
{
	Default = 0x0,
	AudioBus = 0x1,
	Submix = 0x2,
	Count = 0x3
};