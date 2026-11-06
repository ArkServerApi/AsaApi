#pragma once
#include "BulkForward.h"
#include "APhysicsVolume.h"

struct AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	AWaterBodyExclusionVolume() = delete;
	~AWaterBodyExclusionVolume() = delete;
	AWaterBodyExclusionVolume(const AWaterBodyExclusionVolume&) = delete;
	AWaterBodyExclusionVolume& operator=(const AWaterBodyExclusionVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterBodyExclusionVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterBodyExclusionVolume"); }

	void PostLoad() { NativeCall<void>(this, "AWaterBodyExclusionVolume.PostLoad()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AWaterBodyExclusionVolume.PostRegisterAllComponents()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AWaterBodyExclusionVolume.Serialize(FArchive&)", Ar); }
	void Destroyed() { NativeCall<void>(this, "AWaterBodyExclusionVolume.Destroyed()"); }
	void UpdateOverlappingWaterBodies(const FWaterExclusionVolumeChangedParams& Params) { NativeCall<void, const FWaterExclusionVolumeChangedParams&>(this, "AWaterBodyExclusionVolume.UpdateOverlappingWaterBodies(FWaterExclusionVolumeChangedParams&)", Params); }
};
