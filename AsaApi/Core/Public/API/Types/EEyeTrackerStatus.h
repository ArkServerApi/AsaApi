#pragma once


enum class EEyeTrackerStatus:unsigned char
{
	NotConnected = 0x0,
	NotTracking = 0x1,
	Tracking = 0x2
};