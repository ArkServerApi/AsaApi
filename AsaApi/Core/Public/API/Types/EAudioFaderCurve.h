#pragma once


enum class EAudioFaderCurve:unsigned char
{
	Linear = 0x0,
	Logarithmic = 0x1,
	SCurve = 0x2,
	Sin = 0x3,
	Count = 0x4
};