#pragma once


enum class EResendAllDataState:unsigned char
{
	None = 0x0,
	SinceOpen = 0x1,
	SinceCheckpoint = 0x2
};