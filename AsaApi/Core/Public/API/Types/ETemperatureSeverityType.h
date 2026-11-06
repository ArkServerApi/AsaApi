#pragma once


enum class ETemperatureSeverityType:unsigned char
{
	Unknown = 0x0,
	Good = 0x1,
	Bad = 0x2,
	Serious = 0x3,
	Critical = 0x4,
	NumSeverities = 0x5
};