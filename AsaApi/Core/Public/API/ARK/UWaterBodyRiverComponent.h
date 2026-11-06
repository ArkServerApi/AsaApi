#pragma once
#include "BulkForward.h"
#include "UWaterBodyComponent.h"

struct UWaterBodyRiverComponent : public UWaterBodyComponent
{
public:
	UWaterBodyRiverComponent() = delete;
	~UWaterBodyRiverComponent() = delete;
	UWaterBodyRiverComponent(const UWaterBodyRiverComponent&) = delete;
	UWaterBodyRiverComponent& operator=(const UWaterBodyRiverComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaterBodyRiverComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaterBodyRiverComponent"); }

	void CreateOrUpdateOceanTransitionMID() { NativeCall<void>(this, "UWaterBodyRiverComponent.CreateOrUpdateOceanTransitionMID()"); }
	void CreateOrUpdateLakeTransitionMID() { NativeCall<void>(this, "UWaterBodyRiverComponent.CreateOrUpdateLakeTransitionMID()"); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetStandardRenderableComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*>(this, "UWaterBodyRiverComponent.GetStandardRenderableComponents()", result); }
	void UpdateMaterialInstances() { NativeCall<void>(this, "UWaterBodyRiverComponent.UpdateMaterialInstances()"); }
	void OnUpdateBody(bool bWithExclusionVolumes) { NativeCall<void, bool>(this, "UWaterBodyRiverComponent.OnUpdateBody(bool)", bWithExclusionVolumes); }
	UMaterialInterface* GetRiverToOceanTransitionMaterial() { return NativeCall<UMaterialInterface*>(this, "UWaterBodyRiverComponent.GetRiverToOceanTransitionMaterial()"); }
	void UpdateSplineMesh(USplineMeshComponent* MeshComp, int SplinePointIndex) { NativeCall<void, USplineMeshComponent*, int>(this, "UWaterBodyRiverComponent.UpdateSplineMesh(USplineMeshComponent*,int)", MeshComp, SplinePointIndex); }
	UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance() { return NativeCall<UMaterialInstanceDynamic*>(this, "UWaterBodyRiverComponent.GetRiverToOceanTransitionMaterialInstance()"); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetCollisionComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result, bool bInOnlyEnabledComponents) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, bool>(this, "UWaterBodyRiverComponent.GetCollisionComponents(bool)", result, bInOnlyEnabledComponents); }
	void Reset() { NativeCall<void>(this, "UWaterBodyRiverComponent.Reset()"); }
	UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance() { return NativeCall<UMaterialInstanceDynamic*>(this, "UWaterBodyRiverComponent.GetRiverToLakeTransitionMaterialInstance()"); }
	UMaterialInterface* GetRiverToLakeTransitionMaterial() { return NativeCall<UMaterialInterface*>(this, "UWaterBodyRiverComponent.GetRiverToLakeTransitionMaterial()"); }
	void GenerateMeshes() { NativeCall<void>(this, "UWaterBodyRiverComponent.GenerateMeshes()"); }
};
