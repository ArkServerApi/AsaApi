#pragma once


enum class EStreamingSourcePriority:unsigned char
{
	Highest = 0x0,
	High = 0x40,
	Normal = 0x80,
	Low = 0xC0,
	Lowest = 0xFF,
	Default = 0x80
};