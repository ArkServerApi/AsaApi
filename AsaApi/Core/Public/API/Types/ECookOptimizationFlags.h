#pragma once


enum class ECookOptimizationFlags:int
{
	None = 0x0,
	RemoveTrack = 0x1,
	RemoveObject = 0x2,
	RemoveSection = 0x4
};