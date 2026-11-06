#pragma once


enum class EOodleNetResult:unsigned char
{
	Unknown = 0x0,
	Success = 0x1,
	OodleDecodeFailed = 0x2,
	OodleSerializePayloadFail = 0x3,
	OodleBadDecompressedLength = 0x4,
	OodleNoDictionary = 0x5
};