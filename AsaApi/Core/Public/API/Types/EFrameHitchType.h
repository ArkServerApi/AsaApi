#pragma once


enum class EFrameHitchType:unsigned char
{
	NoHitch = 0x0,
	UnknownUnit = 0x1,
	GameThread = 0x2,
	RenderThread = 0x3,
	RHIThread = 0x4,
	GPU = 0x5
};