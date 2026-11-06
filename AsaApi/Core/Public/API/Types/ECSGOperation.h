#pragma once


enum class ECSGOperation:unsigned char
{
	DifferenceAB = 0x0,
	DifferenceBA = 0x1,
	Intersect = 0x2,
	Union = 0x3
};