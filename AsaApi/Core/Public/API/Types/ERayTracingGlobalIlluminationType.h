#pragma once


enum class ERayTracingGlobalIlluminationType:unsigned char
{
	Disabled = 0x0,
	BruteForce = 0x1,
	FinalGather = 0x2
};