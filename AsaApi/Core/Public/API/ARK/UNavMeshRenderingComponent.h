#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UNavMeshRenderingComponent : public UDebugDrawComponent
{
public:
	UNavMeshRenderingComponent() = delete;
	~UNavMeshRenderingComponent() = delete;
	UNavMeshRenderingComponent(const UNavMeshRenderingComponent&) = delete;
	UNavMeshRenderingComponent& operator=(const UNavMeshRenderingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavMeshRenderingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavMeshRenderingComponent"); }

	FTimerHandle& TimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UNavMeshRenderingComponent.TimerHandle"); }
	BitFieldValue<bool, unsigned __int32> bCollectNavigationData() { return { this, "UNavMeshRenderingComponent.bCollectNavigationData"}; }
	BitFieldValue<bool, unsigned __int32> bForceUpdate() { return { this, "UNavMeshRenderingComponent.bForceUpdate"}; }
	void OnRegister() { NativeCall<void>(this, "UNavMeshRenderingComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UNavMeshRenderingComponent.OnUnregister()"); }
	void GatherData(const ARecastNavMesh& NavMesh, FNavMeshSceneProxyData& OutProxyData) { NativeCall<void, const ARecastNavMesh&, FNavMeshSceneProxyData&>(this, "UNavMeshRenderingComponent.GatherData(ARecastNavMesh&,FNavMeshSceneProxyData&)", NavMesh, OutProxyData); }
};
