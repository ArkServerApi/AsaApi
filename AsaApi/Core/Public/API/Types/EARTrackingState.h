#pragma once


enum class EARTrackingState:unsigned char
{
	Unknown = 0x0,
	Tracking = 0x1,
	NotTracking = 0x2,
	StoppedTracking = 0x3
};