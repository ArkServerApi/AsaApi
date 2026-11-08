#pragma once


enum class EMovieRenderPipelineState:unsigned char
{
	Uninitialized = 0x0,
	ProducingFrames = 0x1,
	Finalize = 0x2,
	Export = 0x3,
	Finished = 0x4
};