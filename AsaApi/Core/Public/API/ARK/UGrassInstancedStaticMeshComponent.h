#pragma once
#include "BulkForward.h"
#include "UHierarchicalInstancedStaticMeshComponent.h"

struct UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	UGrassInstancedStaticMeshComponent() = delete;
	~UGrassInstancedStaticMeshComponent() = delete;
	UGrassInstancedStaticMeshComponent(const UGrassInstancedStaticMeshComponent&) = delete;
	UGrassInstancedStaticMeshComponent& operator=(const UGrassInstancedStaticMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGrassInstancedStaticMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGrassInstancedStaticMeshComponent"); }

	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGrassInstancedStaticMeshComponent.CreateSceneProxy()"); }
	bool SupportsWorldPositionOffsetVelocity() { return NativeCall<bool>(this, "UGrassInstancedStaticMeshComponent.SupportsWorldPositionOffsetVelocity()"); }
	int GetNumRenderInstances() { return NativeCall<int>(this, "UGrassInstancedStaticMeshComponent.GetNumRenderInstances()"); }
	void BuildTreeAsync() { NativeCall<void>(this, "UGrassInstancedStaticMeshComponent.BuildTreeAsync()"); }
	void BuildComponentInstanceData(EShaderPlatform InShaderPlatform, FInstanceUpdateComponentDesc& OutData) { NativeCall<void, EShaderPlatform, FInstanceUpdateComponentDesc&>(this, "UGrassInstancedStaticMeshComponent.BuildComponentInstanceData(EShaderPlatform,FInstanceUpdateComponentDesc&)", InShaderPlatform, OutData); }
	void BuildComponentInstanceData(ERHIFeatureLevel::Type FeatureLevel, FInstanceUpdateComponentDesc& OutData) { NativeCall<void, ERHIFeatureLevel::Type, FInstanceUpdateComponentDesc&>(this, "UGrassInstancedStaticMeshComponent.BuildComponentInstanceData(ERHIFeatureLevel::Type,FInstanceUpdateComponentDesc&)", FeatureLevel, OutData); }
	void BuildTree() { NativeCall<void>(this, "UGrassInstancedStaticMeshComponent.BuildTree()"); }
};
