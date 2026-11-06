#pragma once


enum class EFFTWindowType:unsigned char
{
	None = 0x0,
	Hamming = 0x1,
	Hann = 0x2,
	Blackman = 0x3
};