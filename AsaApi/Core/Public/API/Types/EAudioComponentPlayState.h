#pragma once


enum class EAudioComponentPlayState:unsigned char
{
	Playing = 0x0,
	Stopped = 0x1,
	Paused = 0x2,
	FadingIn = 0x3,
	FadingOut = 0x4,
	Count = 0x5
};