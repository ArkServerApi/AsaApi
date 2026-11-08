#pragma once


enum class EXRTrackedDeviceType:unsigned char
{
	HeadMountedDisplay = 0x0,
	Controller = 0x1,
	TrackingReference = 0x2,
	Tracker = 0x3,
	Other = 0x4,
	Invalid = 0xFE,
	Any = 0xFF
};