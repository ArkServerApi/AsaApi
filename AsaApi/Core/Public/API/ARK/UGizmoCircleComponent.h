#pragma once
#include "BulkForward.h"
#include "UGizmoBaseComponent.h"

struct UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	UGizmoCircleComponent() = delete;
	~UGizmoCircleComponent() = delete;
	UGizmoCircleComponent(const UGizmoCircleComponent&) = delete;
	UGizmoCircleComponent& operator=(const UGizmoCircleComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGizmoCircleComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGizmoCircleComponent"); }

	UE::Math::TVector<double>& NormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGizmoCircleComponent.Normal"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "UGizmoCircleComponent.Radius"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "UGizmoCircleComponent.Thickness"); }
	int& NumSidesField() { return *GetNativePointerField<int*>(this, "UGizmoCircleComponent.NumSides"); }
	bool& bViewAlignedField() { return *GetNativePointerField<bool*>(this, "UGizmoCircleComponent.bViewAligned"); }
	bool& bDrawFullCircleField() { return *GetNativePointerField<bool*>(this, "UGizmoCircleComponent.bDrawFullCircle"); }
	bool& bOnlyAllowFrontFacingHitsField() { return *GetNativePointerField<bool*>(this, "UGizmoCircleComponent.bOnlyAllowFrontFacingHits"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGizmoCircleComponent.CreateSceneProxy()"); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, const FCollisionQueryParams& Params) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const FCollisionQueryParams &>(this, "UGizmoCircleComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, *Start, *End, Params); }
};
