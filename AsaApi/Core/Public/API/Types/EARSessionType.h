#pragma once


enum class EARSessionType:unsigned char
{
	None = 0x0,
	Orientation = 0x1,
	World = 0x2,
	Face = 0x3,
	Image = 0x4,
	ObjectScanning = 0x5,
	PoseTracking = 0x6,
	GeoTracking = 0x7
};