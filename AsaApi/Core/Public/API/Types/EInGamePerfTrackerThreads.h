#pragma once


enum class EInGamePerfTrackerThreads:unsigned char
{
	GameThread = 0x0,
	RenderThread = 0x1,
	OtherThread = 0x2,
	Num = 0x3
};