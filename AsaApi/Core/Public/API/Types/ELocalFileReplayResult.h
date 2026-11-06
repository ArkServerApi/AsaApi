#pragma once


enum class ELocalFileReplayResult:unsigned int
{
	Success = 0x0,
	InvalidReplayInfo = 0x1,
	StreamChunkIndexMismatch = 0x2,
	DecompressBuffer = 0x3,
	CompressionNotSupported = 0x4,
	DecryptBuffer = 0x5,
	EncryptionNotSupported = 0x6,
	Unknown = 0x7
};