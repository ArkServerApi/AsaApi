#pragma once


enum class ETrackingStatus:unsigned char
{
	NotTracked = 0x0,
	InertialOnly = 0x1,
	Tracked = 0x2
};