#pragma once


enum class UNISMode:unsigned char
{
	Off = 0x0,
	UltraQuality = 0x1,
	Quality = 0x2,
	Balanced = 0x3,
	Performance = 0x4,
	Custom = 0x5
};