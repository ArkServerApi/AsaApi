#pragma once


enum class AudioPlayback_Status:int
{
	AudioPlayback_Undefined = 0x0,
	AudioPlayback_Playing = 0x1,
	AudioPlayback_Paused = 0x2,
	AudioPlayback_Idle = 0x3
};