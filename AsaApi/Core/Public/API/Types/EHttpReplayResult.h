#pragma once


enum class EHttpReplayResult:unsigned int
{
	Success = 0x0,
	FailedJsonParse = 0x1,
	DataUnavailable = 0x2,
	InvalidHttpResponse = 0x3,
	CompressionFailed = 0x4,
	DecompressionFailed = 0x5,
	InvalidPayload = 0x6,
	Unknown = 0x7
};