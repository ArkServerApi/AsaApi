#pragma once


namespace EMovieScenePlayerStatus
{
	enum Type:int
	{
		Stopped = 0x0,
		Playing = 0x1,
		Scrubbing = 0x2,
		Jumping = 0x3,
		Stepping = 0x4,
		Paused = 0x5,
		MAX = 0x6
	};
}