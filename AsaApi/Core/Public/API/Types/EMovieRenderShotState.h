#pragma once


enum class EMovieRenderShotState:unsigned char
{
	Uninitialized = 0x0,
	WarmingUp = 0x1,
	MotionBlur = 0x2,
	Rendering = 0x3,
	Finished = 0x4
};