#pragma once


enum class EMediaWebcamCaptureDeviceFilter:unsigned char
{
	None = 0x0,
	DepthSensor = 0x1,
	Front = 0x2,
	Rear = 0x4,
	Unknown = 0x8
};