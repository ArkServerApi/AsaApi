#pragma once


enum class EQuartzCommandQuantization:unsigned char
{
	Bar = 0x0,
	Beat = 0x1,
	ThirtySecondNote = 0x2,
	SixteenthNote = 0x3,
	EighthNote = 0x4,
	QuarterNote = 0x5,
	HalfNote = 0x6,
	WholeNote = 0x7,
	DottedSixteenthNote = 0x8,
	DottedEighthNote = 0x9,
	DottedQuarterNote = 0xA,
	DottedHalfNote = 0xB,
	DottedWholeNote = 0xC,
	SixteenthNoteTriplet = 0xD,
	EighthNoteTriplet = 0xE,
	QuarterNoteTriplet = 0xF,
	HalfNoteTriplet = 0x10,
	Tick = 0x11,
	Count = 0x12,
	None = 0x13
};