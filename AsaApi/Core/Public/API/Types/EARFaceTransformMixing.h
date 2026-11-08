#pragma once


enum class EARFaceTransformMixing:unsigned char
{
	ComponentOnly = 0x0,
	ComponentLocationTrackedRotation = 0x1,
	ComponentWithTracked = 0x2,
	TrackingOnly = 0x3
};