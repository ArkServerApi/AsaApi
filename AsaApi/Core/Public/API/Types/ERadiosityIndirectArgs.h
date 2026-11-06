#pragma once


enum class ERadiosityIndirectArgs:int
{
	NumTracesDiv64 = 0x0,
	NumTracesDiv32 = 0xC,
	ThreadPerProbe = 0x18,
	ThreadPerRadiosityTexel = 0x24,
	HardwareRayTracingThreadPerTrace = 0x30,
	MAX = 0x5
};