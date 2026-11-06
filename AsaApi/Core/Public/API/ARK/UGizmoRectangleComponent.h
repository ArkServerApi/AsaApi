#pragma once
#include "BulkForward.h"
#include "UGizmoBaseComponent.h"

struct UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	UGizmoRectangleComponent() = delete;
	~UGizmoRectangleComponent() = delete;
	UGizmoRectangleComponent(const UGizmoRectangleComponent&) = delete;
	UGizmoRectangleComponent& operator=(const UGizmoRectangleComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGizmoRectangleComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGizmoRectangleComponent"); }

	UE::Math::TVector<double>& DirectionXField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGizmoRectangleComponent.DirectionX"); }
	UE::Math::TVector<double>& DirectionYField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGizmoRectangleComponent.DirectionY"); }
	bool& bOrientYAccordingToCameraField() { return *GetNativePointerField<bool*>(this, "UGizmoRectangleComponent.bOrientYAccordingToCamera"); }
	float& OffsetXField() { return *GetNativePointerField<float*>(this, "UGizmoRectangleComponent.OffsetX"); }
	float& OffsetYField() { return *GetNativePointerField<float*>(this, "UGizmoRectangleComponent.OffsetY"); }
	float& LengthXField() { return *GetNativePointerField<float*>(this, "UGizmoRectangleComponent.LengthX"); }
	float& LengthYField() { return *GetNativePointerField<float*>(this, "UGizmoRectangleComponent.LengthY"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "UGizmoRectangleComponent.Thickness"); }
	unsigned char& SegmentFlagsField() { return *GetNativePointerField<unsigned char*>(this, "UGizmoRectangleComponent.SegmentFlags"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UGizmoRectangleComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGizmoRectangleComponent.CreateSceneProxy()"); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, const FCollisionQueryParams& Params) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const FCollisionQueryParams &>(this, "UGizmoRectangleComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, *Start, *End, Params); }
};
