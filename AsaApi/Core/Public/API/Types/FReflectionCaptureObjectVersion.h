#pragma once


namespace FReflectionCaptureObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		MoveReflectionCaptureDataToMapBuildData = 0x1,
		VersionPlusOne = 0x2,
		LatestVersion = 0x1
	};
}