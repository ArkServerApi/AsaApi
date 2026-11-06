#pragma once
#include "BulkForward.h"
#include "UWaterBodyMeshComponent.h"

struct UWaterBodyInfoMeshComponent : public UWaterBodyMeshComponent
{
public:
	UWaterBodyInfoMeshComponent() = delete;
	~UWaterBodyInfoMeshComponent() = delete;
	UWaterBodyInfoMeshComponent(const UWaterBodyInfoMeshComponent&) = delete;
	UWaterBodyInfoMeshComponent& operator=(const UWaterBodyInfoMeshComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bIsDilatedMeshField() { return *GetNativePointerField<bool*>(this, "UWaterBodyInfoMeshComponent.bIsDilatedMesh"); }
	bool& bIsConservativeRasterCompatibleField() { return *GetNativePointerField<bool*>(this, "UWaterBodyInfoMeshComponent.bIsConservativeRasterCompatible"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UWaterBodyInfoMeshComponent.IsHLODRelevant()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UWaterBodyInfoMeshComponent.CreateSceneProxy()"); }
	bool UsePSOPrecacheRenderProxyDelay() { return NativeCall<bool>(this, "UWaterBodyInfoMeshComponent.UsePSOPrecacheRenderProxyDelay()"); }
};
