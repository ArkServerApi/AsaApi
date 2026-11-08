#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWaterBodyIsland : public AActor
{
public:
	AWaterBodyIsland() = delete;
	~AWaterBodyIsland() = delete;
	AWaterBodyIsland(const AWaterBodyIsland&) = delete;
	AWaterBodyIsland& operator=(const AWaterBodyIsland&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterBodyIsland"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterBodyIsland"); }

	FWaterCurveSettings& WaterCurveSettingsField() { return *GetNativePointerField<FWaterCurveSettings*>(this, "AWaterBodyIsland.WaterCurveSettings"); }
	FWaterBodyHeightmapSettings& WaterHeightmapSettingsField() { return *GetNativePointerField<FWaterBodyHeightmapSettings*>(this, "AWaterBodyIsland.WaterHeightmapSettings"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AWaterBodyIsland._getUObject()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AWaterBodyIsland.Serialize(FArchive&)", Ar); }
	bool CanEverAffectWaterMesh() { return NativeCall<bool>(this, "AWaterBodyIsland.CanEverAffectWaterMesh()"); }
	bool AffectsWaterMesh() { return NativeCall<bool>(this, "AWaterBodyIsland.AffectsWaterMesh()"); }
	void Destroyed() { NativeCall<void>(this, "AWaterBodyIsland.Destroyed()"); }
	bool CanEverAffectWaterInfo() { return NativeCall<bool>(this, "AWaterBodyIsland.CanEverAffectWaterInfo()"); }
	void PostLoad() { NativeCall<void>(this, "AWaterBodyIsland.PostLoad()"); }
	bool AffectsLandscape() { return NativeCall<bool>(this, "AWaterBodyIsland.AffectsLandscape()"); }
};
