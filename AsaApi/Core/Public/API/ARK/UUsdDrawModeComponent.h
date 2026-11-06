#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UUsdDrawModeComponent : public UPrimitiveComponent
{
public:
	UUsdDrawModeComponent() = delete;
	~UUsdDrawModeComponent() = delete;
	UUsdDrawModeComponent(const UUsdDrawModeComponent&) = delete;
	UUsdDrawModeComponent& operator=(const UUsdDrawModeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UUsdDrawModeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UUsdDrawModeComponent"); }

	UE::Math::TVector<double>& BoundsMinField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UUsdDrawModeComponent.BoundsMin"); }
	UE::Math::TVector<double>& BoundsMaxField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UUsdDrawModeComponent.BoundsMax"); }
	FLinearColor& BoundsColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUsdDrawModeComponent.BoundsColor"); }
	int& AuthoredFacesField() { return *GetNativePointerField<int*>(this, "UUsdDrawModeComponent.AuthoredFaces"); }
	void RefreshMaterialInstances() { NativeCall<void>(this, "UUsdDrawModeComponent.RefreshMaterialInstances()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UUsdDrawModeComponent.CreateSceneProxy()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UUsdDrawModeComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
};
