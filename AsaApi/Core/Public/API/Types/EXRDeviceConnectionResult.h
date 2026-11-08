#pragma once


namespace EXRDeviceConnectionResult
{
	enum Type:int
	{
		NoTrackingSystem = 0x0,
		FeatureNotSupported = 0x1,
		NoValidViewport = 0x2,
		MiscFailure = 0x3,
		Success = 0x4
	};
}