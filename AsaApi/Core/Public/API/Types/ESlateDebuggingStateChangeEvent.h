#pragma once


enum class ESlateDebuggingStateChangeEvent:unsigned char
{
	MouseCaptureGained = 0x0,
	MouseCaptureLost = 0x1
};