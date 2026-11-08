#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UWaterBodyMeshComponent : public UStaticMeshComponent
{
public:
	UWaterBodyMeshComponent() = delete;
	~UWaterBodyMeshComponent() = delete;
	UWaterBodyMeshComponent(const UWaterBodyMeshComponent&) = delete;
	UWaterBodyMeshComponent& operator=(const UWaterBodyMeshComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaterBodyMeshComponent"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaterBodyMeshComponent"); }
	bool CanCreateSceneProxy() { return NativeCall<bool>(this, "UWaterBodyMeshComponent.CanCreateSceneProxy()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UWaterBodyMeshComponent.NeedsLoadForServer()"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UWaterBodyMeshComponent.IsHLODRelevant()"); }
};
