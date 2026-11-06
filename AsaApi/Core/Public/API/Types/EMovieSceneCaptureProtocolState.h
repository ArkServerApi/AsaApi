#pragma once


enum class EMovieSceneCaptureProtocolState:unsigned char
{
	Idle = 0x0,
	Initialized = 0x1,
	Capturing = 0x2,
	Finalizing = 0x3
};