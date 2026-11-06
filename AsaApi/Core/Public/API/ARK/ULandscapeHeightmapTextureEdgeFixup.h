#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UAssetUserData.h"

class ULandscapeHeightmapTextureEdgeFixup : public UAssetUserData
{
public:
	ULandscapeHeightmapTextureEdgeFixup() = delete;
	~ULandscapeHeightmapTextureEdgeFixup() = delete;
	ULandscapeHeightmapTextureEdgeFixup(const ULandscapeHeightmapTextureEdgeFixup&) = delete;
	ULandscapeHeightmapTextureEdgeFixup& operator=(const ULandscapeHeightmapTextureEdgeFixup&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeHeightmapTextureEdgeFixup"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeHeightmapTextureEdgeFixup"); }
	FLandscapeGroup*& ActiveGroupField() { return *GetNativePointerField<FLandscapeGroup**>(this, "ULandscapeHeightmapTextureEdgeFixup.ActiveGroup"); }
	bool& bMappedField() { return *GetNativePointerField<bool*>(this, "ULandscapeHeightmapTextureEdgeFixup.bMapped"); }
	bool& bForceUpdateSnapshotField() { return *GetNativePointerField<bool*>(this, "ULandscapeHeightmapTextureEdgeFixup.bForceUpdateSnapshot"); }
	void SetActiveComponent(ULandscapeComponent* InComponent, FLandscapeGroup* InGroup, bool bDisableCurrentActive) { NativeCall<void, ULandscapeComponent*, FLandscapeGroup*, bool>(this, "ULandscapeHeightmapTextureEdgeFixup.SetActiveComponent(ULandscapeComponent*,FLandscapeGroup*,bool)", InComponent, InGroup, bDisableCurrentActive); }
	int CheckAndPatchTextureEdgesFromEdgeSnapshots() { return NativeCall<int>(this, "ULandscapeHeightmapTextureEdgeFixup.CheckAndPatchTextureEdgesFromEdgeSnapshots()"); }
	static ULandscapeHeightmapTextureEdgeFixup* FindOrCreateFor(UTexture2D* InHeightmapTexture) { return NativeCall<ULandscapeHeightmapTextureEdgeFixup*, UTexture2D*>(nullptr, "ULandscapeHeightmapTextureEdgeFixup.FindOrCreateFor(UTexture2D*)", InHeightmapTexture); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULandscapeHeightmapTextureEdgeFixup.Serialize(FArchive&)", Ar); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "ULandscapeHeightmapTextureEdgeFixup.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
};
