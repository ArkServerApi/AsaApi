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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FInt32Interval& AllowedMipLevelRangeField() { return *GetNativePointerField<FInt32Interval*>(this, "AVolumetricLightmapDensityVolume.AllowedMipLevelRange"); }
};
