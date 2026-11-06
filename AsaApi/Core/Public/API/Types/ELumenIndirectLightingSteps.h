#pragma once


enum class ELumenIndirectLightingSteps:int
{
	None = 0x0,
	ScreenProbeGather = 0x1,
	Reflections = 0x2,
	StoreDepthHistory = 0x4,
	Composite = 0x8,
	All = 0xF
};