#pragma once


enum class EAudioChunkLoadResult:unsigned char
{
	Completed = 0x0,
	AlreadyLoaded = 0x1,
	Interrupted = 0x2,
	ChunkOutOfBounds = 0x3,
	CacheBlown = 0x4
};