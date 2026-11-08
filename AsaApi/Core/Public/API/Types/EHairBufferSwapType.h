#pragma once


enum class EHairBufferSwapType:int
{
	BeginOfFrame = 0x0,
	EndOfFrame = 0x1,
	Tick = 0x2,
	RenderFrame = 0x3
};