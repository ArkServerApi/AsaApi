#pragma once


enum class EMemberExitedReason:unsigned char
{
	Unknown = 0x0,
	Left = 0x1,
	Removed = 0x2,
	Kicked = 0x3
};