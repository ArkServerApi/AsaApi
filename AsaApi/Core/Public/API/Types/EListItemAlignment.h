#pragma once


enum class EListItemAlignment:unsigned char
{
	EvenlyDistributed = 0x0,
	EvenlySize = 0x1,
	EvenlyWide = 0x2,
	LeftAligned = 0x3,
	RightAligned = 0x4,
	CenterAligned = 0x5,
	Fill = 0x6
};