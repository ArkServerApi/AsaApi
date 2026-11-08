#pragma once


enum class ERDGTextureFlags:unsigned char
{
	None = 0x0,
	MultiFrame = 0x1,
	SkipTracking = 0x2,
	ForceImmediateFirstBarrier = 0x4,
	MaintainCompression = 0x8,
	ReadOnly = 0x0,
	ForceTracking = 0x0
};