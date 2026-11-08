#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	UControlPointMeshComponent() = delete;
	~UControlPointMeshComponent() = delete;
	UControlPointMeshComponent(const UControlPointMeshComponent&) = delete;
	UControlPointMeshComponent& operator=(const UControlPointMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UControlPointMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UControlPointMeshComponent"); }

	float& VirtualTextureMainPassMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UControlPointMeshComponent.VirtualTextureMainPassMaxDrawDistance"); }
	float GetVirtualTextureMainPassMaxDrawDistance() { return NativeCall<float>(this, "UControlPointMeshComponent.GetVirtualTextureMainPassMaxDrawDistance()"); }
};
