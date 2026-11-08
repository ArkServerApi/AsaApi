#pragma once


enum class EScreenProbeIndirectArgs:int
{
	GroupPerProbe = 0x0,
	ThreadPerProbe = 0x1,
	ThreadPerTrace = 0x2,
	ThreadPerGather = 0x3,
	ThreadPerGatherWithBorder = 0x4,
	ThreadPerLightSample = 0x5,
	Max = 0x6
};