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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	int GetNumMaterials() { return NativeCall<int>(this, "UCustomMeshComponent.GetNumMaterials()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UCustomMeshComponent.CreateSceneProxy()"); }
};
