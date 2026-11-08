#pragma once


namespace EStretch
{
	enum Type:int
	{
		None = 0x0,
		Fill = 0x1,
		ScaleToFit = 0x2,
		ScaleToFitX = 0x3,
		ScaleToFitY = 0x4,
		ScaleToFill = 0x5,
		ScaleBySafeZone = 0x6,
		UserSpecified = 0x7,
		UserSpecifiedWithClipping = 0x8
	};
}