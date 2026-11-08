#pragma once


enum class EARTrackingQuality:unsigned char
{
	NotTracking = 0x0,
	OrientationOnly = 0x1,
	OrientationAndPosition = 0x2
};