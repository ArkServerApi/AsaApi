#pragma once


enum class ERayTracingAccelerationStructureFlags:int
{
	None = 0x0,
	AllowUpdate = 0x1,
	AllowCompaction = 0x2,
	FastTrace = 0x4,
	FastBuild = 0x8,
	MinimizeMemory = 0x10
};