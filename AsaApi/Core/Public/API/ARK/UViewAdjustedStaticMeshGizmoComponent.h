#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UViewAdjustedStaticMeshGizmoComponent : public UStaticMeshComponent
{
public:
	UViewAdjustedStaticMeshGizmoComponent() = delete;
	~UViewAdjustedStaticMeshGizmoComponent() = delete;
	UViewAdjustedStaticMeshGizmoComponent(const UViewAdjustedStaticMeshGizmoComponent&) = delete;
	UViewAdjustedStaticMeshGizmoComponent& operator=(const UViewAdjustedStaticMeshGizmoComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UViewAdjustedStaticMeshGizmoComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UViewAdjustedStaticMeshGizmoComponent"); }

	bool& bHoveredField() { return *GetNativePointerField<bool*>(this, "UViewAdjustedStaticMeshGizmoComponent.bHovered"); }
	bool& bInteractedField() { return *GetNativePointerField<bool*>(this, "UViewAdjustedStaticMeshGizmoComponent.bInteracted"); }
	void UpdateWorldLocalState(bool bWorldIn) { NativeCall<void, bool>(this, "UViewAdjustedStaticMeshGizmoComponent.UpdateWorldLocalState(bool)", bWorldIn); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UViewAdjustedStaticMeshGizmoComponent.NeedsLoadForServer()"); }
	void UpdateHoverState(bool bHoveringIn) { NativeCall<void, bool>(this, "UViewAdjustedStaticMeshGizmoComponent.UpdateHoverState(bool)", bHoveringIn); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UViewAdjustedStaticMeshGizmoComponent.IsHLODRelevant()"); }
	void UpdateInteractingState(bool bInteracting) { NativeCall<void, bool>(this, "UViewAdjustedStaticMeshGizmoComponent.UpdateInteractingState(bool)", bInteracting); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UViewAdjustedStaticMeshGizmoComponent._getUObject()"); }
	bool LineTraceComponent(FHitResult& OutHit, UE::Math::TVector<double>* Start, UE::Math::TVector<double>* End, const FCollisionQueryParams& Params) { if (!Start) throw std::invalid_argument("Null native value parameter"); if (!End) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, FHitResult &, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const FCollisionQueryParams &>(this, "UViewAdjustedStaticMeshGizmoComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, *Start, *End, Params); }
};
