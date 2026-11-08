#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct AVolumetricLightmapDensityVolume : public AVolume
{
public:
	AVolumetricLightmapDensityVolume() = delete;
	~AVolumetricLightmapDensityVolume() = delete;
	AVolumetricLightmapDensityVolume(const AVolumetricLightmapDensityVolume&) = delete;
	AVolumetricLightmapDensityVolume& operator=(const AVolumetricLightmapDensityVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AVolumetricLightmapDensityVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AVolumetricLightmapDensityVolume"); }

	FInt32Interval& AllowedMipLevelRangeField() { return *GetNativePointerField<FInt32Interval*>(this, "AVolumetricLightmapDensityVolume.AllowedMipLevelRange"); }
};
