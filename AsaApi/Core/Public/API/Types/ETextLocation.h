#pragma once


enum class ETextLocation:int
{
	BeginningOfDocument = 0x0,
	EndOfDocument = 0x1,
	BeginningOfLine = 0x2,
	EndOfLine = 0x3,
	PreviousPage = 0x4,
	NextPage = 0x5
};