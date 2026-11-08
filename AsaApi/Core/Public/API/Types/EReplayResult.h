#pragma once


enum class EReplayResult:unsigned int
{
	Success = 0x0,
	ReplayNotFound = 0x1,
	Corrupt = 0x2,
	UnsupportedCheckpoint = 0x3,
	GameSpecific = 0x4,
	InitConnect = 0x5,
	LoadMap = 0x6,
	Serialization = 0x7,
	StreamerError = 0x8,
	ConnectionClosed = 0x9,
	MissingArchive = 0xA,
	Unknown = 0xB
};