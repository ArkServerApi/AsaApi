#pragma once


enum class EMediaControl:int
{
	BlockOnFetch = 0x0,
	Pause = 0x1,
	Resume = 0x2,
	Scrub = 0x3,
	Seek = 0x4
};