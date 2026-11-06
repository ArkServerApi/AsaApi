#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	ULandscapeMeshProxyComponent() = delete;
	~ULandscapeMeshProxyComponent() = delete;
	ULandscapeMeshProxyComponent(const ULandscapeMeshProxyComponent&) = delete;
	ULandscapeMeshProxyComponent& operator=(const ULandscapeMeshProxyComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeMeshProxyComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeMeshProxyComponent"); }

	FGuid& LandscapeGuidField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeMeshProxyComponent.LandscapeGuid"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& ProxyComponentCentersObjectSpaceField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "ULandscapeMeshProxyComponent.ProxyComponentCentersObjectSpace"); }
	UE::Math::TVector<double>& ComponentXVectorObjectSpaceField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ULandscapeMeshProxyComponent.ComponentXVectorObjectSpace"); }
	UE::Math::TVector<double>& ComponentYVectorObjectSpaceField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "ULandscapeMeshProxyComponent.ComponentYVectorObjectSpace"); }
	int& ComponentResolutionField() { return *GetNativePointerField<int*>(this, "ULandscapeMeshProxyComponent.ComponentResolution"); }
	unsigned int& LODGroupKeyField() { return *GetNativePointerField<unsigned int*>(this, "ULandscapeMeshProxyComponent.LODGroupKey"); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeMeshProxyComponent.PostLoad()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "ULandscapeMeshProxyComponent.CreateSceneProxy()"); }
};
