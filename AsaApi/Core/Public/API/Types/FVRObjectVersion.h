#pragma once


namespace FVRObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		UseFNameInsteadOfEControllerHandForMotionSource = 0x1,
		UseBoolsForARSessionConfigPlaneDetectionConfiguration = 0x2,
		UseSubobjectForStereoLayerShapeProperties = 0x3,
		VersionPlusOne = 0x4,
		LatestVersion = 0x3
	};
}