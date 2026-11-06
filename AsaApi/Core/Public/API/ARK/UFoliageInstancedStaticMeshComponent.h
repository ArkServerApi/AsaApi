#pragma once
#include "BulkForward.h"
#include "UHierarchicalInstancedStaticMeshComponent.h"

struct UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	UFoliageInstancedStaticMeshComponent() = delete;
	~UFoliageInstancedStaticMeshComponent() = delete;
	UFoliageInstancedStaticMeshComponent(const UFoliageInstancedStaticMeshComponent&) = delete;
	UFoliageInstancedStaticMeshComponent& operator=(const UFoliageInstancedStaticMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFoliageInstancedStaticMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFoliageInstancedStaticMeshComponent"); }

	FInstancePointDamageSignature& OnInstanceTakePointDamageField() { return *GetNativePointerField<FInstancePointDamageSignature*>(this, "UFoliageInstancedStaticMeshComponent.OnInstanceTakePointDamage"); }
	FInstanceRadialDamageSignature& OnInstanceTakeRadialDamageField() { return *GetNativePointerField<FInstanceRadialDamageSignature*>(this, "UFoliageInstancedStaticMeshComponent.OnInstanceTakeRadialDamage"); }
	bool& bEnableDiscardOnLoadField() { return *GetNativePointerField<bool*>(this, "UFoliageInstancedStaticMeshComponent.bEnableDiscardOnLoad"); }
	FGuid& GenerationGuidField() { return *GetNativePointerField<FGuid*>(this, "UFoliageInstancedStaticMeshComponent.GenerationGuid"); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UFoliageInstancedStaticMeshComponent.OnDestroyPhysicsState()"); }
	bool RequiresCPUAccess() { return NativeCall<bool>(this, "UFoliageInstancedStaticMeshComponent.RequiresCPUAccess()"); }
	void ReceiveComponentDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, AController*, AActor*>(this, "UFoliageInstancedStaticMeshComponent.ReceiveComponentDamage(float,FDamageEvent&,AController*,AActor*)", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
};
