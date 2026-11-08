#pragma once
#include "BulkForward.h"
#include "UGizmoBaseComponent.h"

struct UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	UGizmoBoxComponent() = delete;
	~UGizmoBoxComponent() = delete;
	UGizmoBoxComponent(const UGizmoBoxComponent&) = delete;
	UGizmoBoxComponent& operator=(const UGizmoBoxComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGizmoBoxComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGizmoBoxComponent"); }

	UE::Math::TVector<double>& OriginField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGizmoBoxComponent.Origin"); }
	UE::Math::TVector<double>& DimensionsField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGizmoBoxComponent.Dimensions"); }
	float& LineThicknessField() { return *GetNativePointerField<float*>(this, "UGizmoBoxComponent.LineThickness"); }
	bool& bRemoveHiddenLinesField() { return *GetNativePointerField<bool*>(this, "UGizmoBoxComponent.bRemoveHiddenLines"); }
	bool& bEnableAxisFlipField() { return *GetNativePointerField<bool*>(this, "UGizmoBoxComponent.bEnableAxisFlip"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGizmoBoxComponent.CreateSceneProxy()"); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, const FCollisionQueryParams& Params) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const FCollisionQueryParams &>(this, "UGizmoBoxComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, *Start, *End, Params); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UGizmoBoxComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
};
