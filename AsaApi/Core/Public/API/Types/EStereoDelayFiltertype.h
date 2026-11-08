#pragma once


enum class EStereoDelayFiltertype:unsigned char
{
	Lowpass = 0x0,
	Highpass = 0x1,
	Bandpass = 0x2,
	Notch = 0x3,
	Count = 0x4
};