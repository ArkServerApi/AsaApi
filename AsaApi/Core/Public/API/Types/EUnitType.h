#pragma once


enum class EUnitType:int
{
	Distance = 0x0,
	Angle = 0x1,
	Speed = 0x2,
	Temperature = 0x3,
	Mass = 0x4,
	Force = 0x5,
	Frequency = 0x6,
	DataSize = 0x7,
	LuminousFlux = 0x8,
	LuminousIntensity = 0x9,
	Illuminance = 0xA,
	Luminance = 0xB,
	Time = 0xC,
	PixelDensity = 0xD,
	Multipliers = 0xE,
	NumberOf = 0xF
};