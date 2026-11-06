#pragma once
#include "BulkForward.h"
#include "UGizmoBaseComponent.h"

struct UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	UGizmoLineHandleComponent() = delete;
	~UGizmoLineHandleComponent() = delete;
	UGizmoLineHandleComponent(const UGizmoLineHandleComponent&) = delete;
	UGizmoLineHandleComponent& operator=(const UGizmoLineHandleComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGizmoLineHandleComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGizmoLineHandleComponent"); }

	UE::Math::TVector<double>& NormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGizmoLineHandleComponent.Normal"); }
	float& HandleSizeField() { return *GetNativePointerField<float*>(this, "UGizmoLineHandleComponent.HandleSize"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "UGizmoLineHandleComponent.Thickness"); }
	UE::Math::TVector<double>& DirectionField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UGizmoLineHandleComponent.Direction"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "UGizmoLineHandleComponent.Length"); }
	bool& bImageScaleField() { return *GetNativePointerField<bool*>(this, "UGizmoLineHandleComponent.bImageScale"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGizmoLineHandleComponent.CreateSceneProxy()"); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, const FCollisionQueryParams& Params) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const FCollisionQueryParams &>(this, "UGizmoLineHandleComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, *Start, *End, Params); }
};
