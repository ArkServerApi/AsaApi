#pragma once


enum class ESlateDebuggingFocusEvent:unsigned char
{
	FocusChanging = 0x0,
	FocusLost = 0x1,
	FocusReceived = 0x2,
	MAX = 0x3
};