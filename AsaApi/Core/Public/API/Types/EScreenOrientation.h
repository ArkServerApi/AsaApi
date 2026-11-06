#pragma once


namespace EScreenOrientation
{
	enum Type:int
	{
		Unknown = 0x0,
		Portrait = 0x1,
		PortraitUpsideDown = 0x2,
		LandscapeLeft = 0x3,
		LandscapeRight = 0x4,
		FaceUp = 0x5,
		FaceDown = 0x6,
		PortraitSensor = 0x7,
		LandscapeSensor = 0x8,
		FullSensor = 0x9
	};
}