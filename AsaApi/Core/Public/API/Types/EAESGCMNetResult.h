#pragma once


enum class EAESGCMNetResult:unsigned char
{
	Unknown = 0x0,
	Success = 0x1,
	AESMissingIV = 0x2,
	AESMissingAuthTag = 0x3,
	AESMissingPayload = 0x4,
	AESDecryptionFailed = 0x5,
	AESZeroLastByte = 0x6
};