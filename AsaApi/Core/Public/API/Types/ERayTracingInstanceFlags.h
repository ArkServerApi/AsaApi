#pragma once


enum class ERayTracingInstanceFlags:unsigned char
{
	None = 0x0,
	TriangleCullDisable = 0x2,
	TriangleCullReverse = 0x4,
	ForceOpaque = 0x8,
	ForceNonOpaque = 0x10
};