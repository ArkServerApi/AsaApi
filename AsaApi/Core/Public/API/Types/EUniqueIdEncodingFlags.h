#pragma once


enum class EUniqueIdEncodingFlags:unsigned char
{
	NotEncoded = 0x0,
	IsEncoded = 0x1,
	IsEmpty = 0x2,
	IsPadded = 0x4,
	Reserved1 = 0x8,
	Reserved2 = 0x10,
	Reserved3 = 0x20,
	Reserved4 = 0x40,
	Reserved5 = 0x80,
	FlagsMask = 0x7,
	TypeMask = 0xF8
};