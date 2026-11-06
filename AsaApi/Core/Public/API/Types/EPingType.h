#pragma once


enum class EPingType:unsigned int
{
	None = 0x0,
	RoundTrip = 0x1,
	RoundTripExclFrame = 0x2,
	ICMP = 0x4,
	UDPQoS = 0x8,
	Max = 0x8,
	Count = 0x4
};