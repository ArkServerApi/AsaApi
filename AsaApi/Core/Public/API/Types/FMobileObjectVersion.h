#pragma once


namespace FMobileObjectVersion
{
	enum Type:int
	{
		BeforeCustomVersionWasAdded = 0x0,
		InstancedStaticMeshLightmapSerialization = 0x1,
		LQVolumetricLightmapLayers = 0x2,
		StoreReflectionCaptureCompressedMobile = 0x3,
		VersionPlusOne = 0x4,
		LatestVersion = 0x3
	};
}