#pragma once


enum class UDLSSMode:unsigned char
{
	Off = 0x0,
	Auto = 0x1,
	DLAA = 0x2,
	UltraQuality = 0x3,
	Quality = 0x4,
	Balanced = 0x5,
	Performance = 0x6,
	UltraPerformance = 0x7
};