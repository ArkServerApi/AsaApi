#pragma once
#include "BulkForward.h"
#include "UMeshComponent.h"

struct UCustomMeshComponent : public UMeshComponent
{
public:
	UCustomMeshComponent() = delete;
	~UCustomMeshComponent() = delete;
	UCustomMeshComponent(const UCustomMeshComponent&) = delete;
	UCustomMeshComponent& operator=(const UCustomMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCustomMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCustomMeshComponent"); }

	int GetNumMaterials() { return NativeCall<int>(this, "UCustomMeshComponent.GetNumMaterials()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UCustomMeshComponent.CreateSceneProxy()"); }
};
