#pragma once


enum class EUdpMessageFormat:unsigned char
{
	None = 0x0,
	Json = 0x1,
	TaggedProperty = 0x2,
	CborPlatformEndianness = 0x3,
	CborStandardEndianness = 0x4
};