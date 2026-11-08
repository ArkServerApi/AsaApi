#pragma once


enum class ETimelineSigType:int
{
	ETS_EventSignature = 0x0,
	ETS_FloatSignature = 0x1,
	ETS_VectorSignature = 0x2,
	ETS_LinearColorSignature = 0x3,
	ETS_InvalidSignature = 0x4,
	ETS_MAX = 0x5
};