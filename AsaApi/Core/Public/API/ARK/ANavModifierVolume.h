#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ANavModifierVolume : public AVolume
{
public:
	ANavModifierVolume() = delete;
	~ANavModifierVolume() = delete;
	ANavModifierVolume(const ANavModifierVolume&) = delete;
	ANavModifierVolume& operator=(const ANavModifierVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANavModifierVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANavModifierVolume"); }

	bool& bMaskFillCollisionUnderneathForNavmeshField() { return *GetNativePointerField<bool*>(this, "ANavModifierVolume.bMaskFillCollisionUnderneathForNavmesh"); }
	ENavigationDataResolution& NavMeshResolutionField() { return *GetNativePointerField<ENavigationDataResolution*>(this, "ANavModifierVolume.NavMeshResolution"); }
	void RebuildNavigationData() { NativeCall<void>(this, "ANavModifierVolume.RebuildNavigationData()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "ANavModifierVolume._getUObject()"); }
	void PostLoad() { NativeCall<void>(this, "ANavModifierVolume.PostLoad()"); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "ANavModifierVolume.GetNavigationData(FNavigationRelevantData&)", Data); }
	void BeginDestroy() { NativeCall<void>(this, "ANavModifierVolume.BeginDestroy()"); }
	void PostInitProperties() { NativeCall<void>(this, "ANavModifierVolume.PostInitProperties()"); }
};
