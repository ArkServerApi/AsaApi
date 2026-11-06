#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct ULandscapeNaniteComponent : public UStaticMeshComponent
{
public:
	ULandscapeNaniteComponent() = delete;
	~ULandscapeNaniteComponent() = delete;
	ULandscapeNaniteComponent(const ULandscapeNaniteComponent&) = delete;
	ULandscapeNaniteComponent& operator=(const ULandscapeNaniteComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeNaniteComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeNaniteComponent"); }

	FGuid& ProxyContentIdField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeNaniteComponent.ProxyContentId"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "ULandscapeNaniteComponent.bEnabled"); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeNaniteComponent.PostLoad()"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "ULandscapeNaniteComponent.IsHLODRelevant()"); }
	bool NeedsLoadForTargetPlatform(const ITargetPlatform* TargetPlatform) { return NativeCall<bool, const ITargetPlatform*>(this, "ULandscapeNaniteComponent.NeedsLoadForTargetPlatform(ITargetPlatform*)", TargetPlatform); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "ULandscapeNaniteComponent.NeedsLoadForServer()"); }
	bool AffectsGrassHeightMap() { return NativeCall<bool>(this, "ULandscapeNaniteComponent.AffectsGrassHeightMap()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "ULandscapeNaniteComponent.CreateSceneProxy()"); }
	void SetEnabled(bool bValue) { NativeCall<void, bool>(this, "ULandscapeNaniteComponent.SetEnabled(bool)", bValue); }
};
