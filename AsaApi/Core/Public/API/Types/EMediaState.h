#pragma once


enum class EMediaState:int
{
	Closed = 0x0,
	Error = 0x1,
	Paused = 0x2,
	Playing = 0x3,
	Preparing = 0x4,
	Stopped = 0x5
};