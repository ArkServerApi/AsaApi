#pragma once


enum class EReplayStreamerState:unsigned char
{
	Idle = 0x0,
	Recording = 0x1,
	Playback = 0x2
};