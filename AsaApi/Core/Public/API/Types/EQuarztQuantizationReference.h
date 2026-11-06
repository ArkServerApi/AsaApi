#pragma once


enum class EQuarztQuantizationReference:unsigned char
{
	BarRelative = 0x0,
	TransportRelative = 0x1,
	CurrentTimeRelative = 0x2,
	Count = 0x3
};