#pragma once


enum class EMediaVideoCaptureDeviceFilter:unsigned char
{
	None = 0x0,
	Card = 0x1,
	Software = 0x2,
	Unknown = 0x4,
	Webcam = 0x8
};