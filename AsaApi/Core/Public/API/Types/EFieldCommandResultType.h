#pragma once


enum class EFieldCommandResultType:unsigned char
{
	FinalResult = 0x0,
	TransientResult = 0x1,
	NumResults = 0x2
};