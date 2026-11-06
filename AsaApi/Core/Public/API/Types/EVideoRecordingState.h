#pragma once


enum class EVideoRecordingState:int
{
	None = 0x0,
	Starting = 0x1,
	Recording = 0x2,
	Pausing = 0x3,
	Paused = 0x4,
	Finalizing = 0x5,
	Error = 0x6
};