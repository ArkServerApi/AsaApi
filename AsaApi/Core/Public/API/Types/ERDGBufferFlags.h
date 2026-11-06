#pragma once


enum class ERDGBufferFlags:unsigned char
{
	None = 0x0,
	MultiFrame = 0x1,
	SkipTracking = 0x2,
	ForceImmediateFirstBarrier = 0x4,
	ReadOnly = 0x0,
	ForceTracking = 0x0
};