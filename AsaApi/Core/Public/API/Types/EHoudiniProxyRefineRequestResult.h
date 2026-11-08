#pragma once


enum class EHoudiniProxyRefineRequestResult:unsigned char
{
	Invalid = 0x0,
	None = 0x1,
	PendingCooks = 0x2,
	Refined = 0x3
};