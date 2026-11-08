#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UPCGProceduralISMComponent : public UStaticMeshComponent
{
public:
	UPCGProceduralISMComponent() = delete;
	~UPCGProceduralISMComponent() = delete;
	UPCGProceduralISMComponent(const UPCGProceduralISMComponent&) = delete;
	UPCGProceduralISMComponent& operator=(const UPCGProceduralISMComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPCGProceduralISMComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPCGProceduralISMComponent"); }

	int& NumInstancesField() { return *GetNativePointerField<int*>(this, "UPCGProceduralISMComponent.NumInstances"); }
	int& NumCustomDataFloatsField() { return *GetNativePointerField<int*>(this, "UPCGProceduralISMComponent.NumCustomDataFloats"); }
	int& InstanceMinDrawDistanceField() { return *GetNativePointerField<int*>(this, "UPCGProceduralISMComponent.InstanceMinDrawDistance"); }
	int& InstanceStartCullDistanceField() { return *GetNativePointerField<int*>(this, "UPCGProceduralISMComponent.InstanceStartCullDistance"); }
	int& InstanceEndCullDistanceField() { return *GetNativePointerField<int*>(this, "UPCGProceduralISMComponent.InstanceEndCullDistance"); }
	void PostLoad() { NativeCall<void>(this, "UPCGProceduralISMComponent.PostLoad()"); }
	bool SupportsStaticLighting() { return NativeCall<bool>(this, "UPCGProceduralISMComponent.SupportsStaticLighting()"); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UPCGProceduralISMComponent.IsNavigationRelevant()"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UPCGProceduralISMComponent.ShouldCreatePhysicsState()"); }
	bool GetMaterialStreamingData(int MaterialIndex, FPrimitiveMaterialInfo& MaterialData) { return NativeCall<bool, int, FPrimitiveMaterialInfo&>(this, "UPCGProceduralISMComponent.GetMaterialStreamingData(int,FPrimitiveMaterialInfo&)", MaterialIndex, MaterialData); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UPCGProceduralISMComponent.IsHLODRelevant()"); }
	void GetSceneProxyDesc(FInstancedStaticMeshSceneProxyDesc& OutSceneProxyDesc) { NativeCall<void, FInstancedStaticMeshSceneProxyDesc&>(this, "UPCGProceduralISMComponent.GetSceneProxyDesc(FInstancedStaticMeshSceneProxyDesc&)", OutSceneProxyDesc); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UPCGProceduralISMComponent.CreateSceneProxy()"); }
	void InitFromDescriptor(const FPCGProceduralISMComponentDescriptor& InDescriptor) { NativeCall<void, const FPCGProceduralISMComponentDescriptor&>(this, "UPCGProceduralISMComponent.InitFromDescriptor(FPCGProceduralISMComponentDescriptor&)", InDescriptor); }
	void SetCullDistances(int InStartCullDistance, int InEndCullDistance) { NativeCall<void, int, int>(this, "UPCGProceduralISMComponent.SetCullDistances(int,int)", InStartCullDistance, InEndCullDistance); }
	void ValidateComponentSetup() { NativeCall<void>(this, "UPCGProceduralISMComponent.ValidateComponentSetup()"); }
};
