#pragma once


enum class EStringParserToken:unsigned char
{
	OpenTag = 0x0,
	CloseTag = 0x1,
	NewLine = 0x2,
	EndOfString = 0x3,
	RegularChar = 0x4,
	Tab = 0x5
};