#pragma once


enum class EMovieSceneTrackEasingSupportFlags:int
{
	None = 0x0,
	AutomaticEaseIn = 0x1,
	AutomaticEaseOut = 0x2,
	ManualEaseIn = 0x4,
	ManualEaseOut = 0x8,
	AutomaticEasing = 0x3,
	ManualEasing = 0xC,
	All = 0xF
};