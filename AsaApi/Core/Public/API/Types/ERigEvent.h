#pragma once


enum class ERigEvent:unsigned char
{
	None = 0x0,
	RequestAutoKey = 0x1,
	OpenUndoBracket = 0x2,
	CloseUndoBracket = 0x3,
	Max = 0x4
};