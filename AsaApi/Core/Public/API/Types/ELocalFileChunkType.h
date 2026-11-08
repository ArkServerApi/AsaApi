#pragma once


enum class ELocalFileChunkType:unsigned int
{
	Header = 0x0,
	ReplayData = 0x1,
	Checkpoint = 0x2,
	Event = 0x3,
	Unknown = 0xFFFFFFFF
};