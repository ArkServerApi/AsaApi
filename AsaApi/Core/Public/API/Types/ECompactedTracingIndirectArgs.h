#pragma once


enum class ECompactedTracingIndirectArgs:int
{
	NumTracesDiv64 = 0x0,
	NumTracesDiv32 = 0xC,
	NumLightSampleTracesDiv64 = 0x18,
	NumLightSampleTracesDiv32 = 0x24,
	MAX = 0x4
};