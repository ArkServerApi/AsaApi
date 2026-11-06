#pragma once


enum class EParticleAllocationMode:unsigned char
{
	AutomaticEstimate = 0x0,
	ManualEstimate = 0x1,
	FixedCount = 0x2
};