#pragma once


enum class EDLSSQualityMode:int
{
	MinValue = 0xFE,
	UltraPerformance = 0xFE,
	Performance = 0xFF,
	Balanced = 0x0,
	Quality = 0x1,
	UltraQuality = 0x2,
	DLAA = 0x3,
	MaxValue = 0x3,
	NumValues = 0x6
};