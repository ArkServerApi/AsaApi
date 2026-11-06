#pragma once


enum class EMouseCaptureMode:unsigned char
{
	NoCapture = 0x0,
	CapturePermanently = 0x1,
	CapturePermanently_IncludingInitialMouseDown = 0x2,
	CaptureDuringMouseDown = 0x3,
	CaptureDuringRightMouseDown = 0x4
};