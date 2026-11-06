#pragma once


enum class ERuntimeGenerationType:unsigned char
{
	Static = 0x0,
	DynamicModifiersOnly = 0x1,
	Dynamic = 0x2,
	LegacyGeneration = 0x3
};