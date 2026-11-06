#pragma once


enum class EPinResolveResult:unsigned char
{
	FailedParse = 0x0,
	FailedSafely = 0x1,
	Deferred = 0x2,
	Suceeded = 0x3
};