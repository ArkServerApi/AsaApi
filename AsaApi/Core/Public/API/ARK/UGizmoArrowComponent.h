#pragma once
#include "BulkForward.h"
#include "UGizmoBaseComponent.h"

struct UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	UGizmoArrowComponent() = delete;
	~UGizmoArrowComponent() = delete;
	UGizmoArrowComponent(const UGizmoArrowComponent&) = delete;
	UGizmoArrowComponent& operator=(const UGizmoArrowComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGizmoArrowComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGizmoArrowComponent"); }

	UE::Math::TVector<double>& DirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGizmoArrowComponent.Direction"); }
	float& GapField() { return *GetNativePointerField<float*>(this, "UGizmoArrowComponent.Gap"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "UGizmoArrowComponent.Length"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "UGizmoArrowComponent.Thickness"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGizmoArrowComponent.CreateSceneProxy()"); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, const FCollisionQueryParams& Params) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const FCollisionQueryParams &>(this, "UGizmoArrowComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, *Start, *End, Params); }
};
