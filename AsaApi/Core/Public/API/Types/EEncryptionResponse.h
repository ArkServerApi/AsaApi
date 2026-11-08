#pragma once


enum class EEncryptionResponse:unsigned char
{
	Failure = 0x0,
	Success = 0x1,
	InvalidToken = 0x2,
	NoKey = 0x3,
	SessionIdMismatch = 0x4,
	InvalidParams = 0x5
};