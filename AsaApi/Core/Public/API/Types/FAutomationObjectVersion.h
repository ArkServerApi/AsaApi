#pragma once


namespace FAutomationObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		DefaultToScreenshotCameraCutAndFixedTonemapping = 0x1,
		VersionPlusOne = 0x2,
		LatestVersion = 0x1
	};
}