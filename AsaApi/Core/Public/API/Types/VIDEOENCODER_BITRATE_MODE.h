#pragma once


enum class VIDEOENCODER_BITRATE_MODE:int
{
	ConstantBitRate = 0x0,
	VariableBitRateAverage = 0x1,
	VariableBitRatePeak = 0x2
};