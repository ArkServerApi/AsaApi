#pragma once


enum class EHoudiniProxyRefineResult:unsigned char
{
	Invalid = 0x0,
	Failed = 0x1,
	Success = 0x2,
	Skipped = 0x3
};