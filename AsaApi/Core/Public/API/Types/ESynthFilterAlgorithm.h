#pragma once


enum class ESynthFilterAlgorithm:unsigned char
{
	OnePole = 0x0,
	StateVariable = 0x1,
	Ladder = 0x2,
	Count = 0x3
};