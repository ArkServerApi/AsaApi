#pragma once


enum class EARAltitudeSource:unsigned char
{
	Precise = 0x0,
	Coarse = 0x1,
	UserDefined = 0x2,
	Unknown = 0x3
};