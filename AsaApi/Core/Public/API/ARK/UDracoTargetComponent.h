#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UDracoTargetComponent : public UActorComponent
{
public:
	UDracoTargetComponent() = delete;
	~UDracoTargetComponent() = delete;
	UDracoTargetComponent(const UDracoTargetComponent&) = delete;
	UDracoTargetComponent& operator=(const UDracoTargetComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDracoTargetComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDracoTargetComponent"); }

	float& MinClientPushIntervalField() { return *GetNativePointerField<float*>(this, "UDracoTargetComponent.MinClientPushInterval"); }
	float& MinLocationDeltaField() { return *GetNativePointerField<float*>(this, "UDracoTargetComponent.MinLocationDelta"); }
	bool& bLocalEchoOnNonAuthField() { return *GetNativePointerField<bool*>(this, "UDracoTargetComponent.bLocalEchoOnNonAuth"); }
	bool& bSoftTargetPrimalCharactersField() { return *GetNativePointerField<bool*>(this, "UDracoTargetComponent.bSoftTargetPrimalCharacters"); }
	float& SoftTargetRadiusField() { return *GetNativePointerField<float*>(this, "UDracoTargetComponent.SoftTargetRadius"); }
	bool& bSoftTargetRequireLineOfSightField() { return *GetNativePointerField<bool*>(this, "UDracoTargetComponent.bSoftTargetRequireLineOfSight"); }
	float& MinSoftTargetDistanceField() { return *GetNativePointerField<float*>(this, "UDracoTargetComponent.MinSoftTargetDistance"); }
	bool& bDebugDrawField() { return *GetNativePointerField<bool*>(this, "UDracoTargetComponent.bDebugDraw"); }
	float& DebugDrawDurationField() { return *GetNativePointerField<float*>(this, "UDracoTargetComponent.DebugDrawDuration"); }
	bool& bIsReplicatingField() { return *GetNativePointerField<bool*>(this, "UDracoTargetComponent.bIsReplicating"); }
	FDracoTargetData& CurrentTargetField() { return *GetNativePointerField<FDracoTargetData*>(this, "UDracoTargetComponent.CurrentTarget"); }
	double& LastClientPushTimeField() { return *GetNativePointerField<double*>(this, "UDracoTargetComponent.LastClientPushTime"); }
	void StopReplicating() { NativeCall<void>(this, "UDracoTargetComponent.StopReplicating()"); }
	void SetTargetActor(AActor* NewTarget) { NativeCall<void, AActor*>(this, "UDracoTargetComponent.SetTargetActor(AActor*)", NewTarget); }
	bool IsValidSoftTargetCandidate(AActor* Candidate, FName SoftTargetContext) { return NativeCall<bool, AActor*, FName>(this, "UDracoTargetComponent.IsValidSoftTargetCandidate(AActor*,FName)", Candidate, SoftTargetContext); }
	UE::Math::TVector<double>* GetEffectiveTargetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UDracoTargetComponent.GetEffectiveTargetLocation()", result); }
	void ClearTarget() { NativeCall<void>(this, "UDracoTargetComponent.ClearTarget()"); }
	AActor* GetTargetActor() { return NativeCall<AActor*>(this, "UDracoTargetComponent.GetTargetActor()"); }
	void BPOnReplicationStopped() { NativeCall<void>(this, "UDracoTargetComponent.BPOnReplicationStopped()"); }
	UE::Math::TVector<double>* GetTargetLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UDracoTargetComponent.GetTargetLocation()", result); }
	bool ForceUpdateAimedCharactersForTrace(const UE::Math::TVector<double>& Start, const UE::Math::TVector<double>& End, bool bDebugDrawQuery, float DebugDrawQueryDuration) { return NativeCall<bool, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, bool, float>(this, "UDracoTargetComponent.ForceUpdateAimedCharactersForTrace(UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool,float)", Start, End, bDebugDrawQuery, DebugDrawQueryDuration); }
	bool HasValidTarget() { return NativeCall<bool>(this, "UDracoTargetComponent.HasValidTarget()"); }
	void BPOnReplicationStarted() { NativeCall<void>(this, "UDracoTargetComponent.BPOnReplicationStarted()"); }
	void PushTargetToOwningDino(AActor* NewTarget, const UE::Math::TVector<double>& NewLocation) { NativeCall<void, AActor*, const UE::Math::TVector<double>&>(this, "UDracoTargetComponent.PushTargetToOwningDino(AActor*,UE::Math::TVector<double>&)", NewTarget, NewLocation); }
	bool ResolveDinoAttackTarget(AActor* ViewSource, UE::Math::TVector<double>& OutHitLocation, AActor*& OutHitActor) { return NativeCall<bool, AActor*, UE::Math::TVector<double>&, AActor*&>(this, "UDracoTargetComponent.ResolveDinoAttackTarget(AActor*,UE::Math::TVector<double>&,AActor*&)", ViewSource, OutHitLocation, OutHitActor); }
	bool ConsumeThrottleWindow(double& LastTime) { return NativeCall<bool, double&>(this, "UDracoTargetComponent.ConsumeThrottleWindow(double&)", LastTime); }
	void BeginPlay() { NativeCall<void>(this, "UDracoTargetComponent.BeginPlay()"); }
	void SetTargetLocation(UE::Math::TVector<double>* NewLocation) { if (!NewLocation) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >>(this, "UDracoTargetComponent.SetTargetLocation(UE::Math::TVector<double>)", *NewLocation); }
	void BPOnTargetChanged() { NativeCall<void>(this, "UDracoTargetComponent.BPOnTargetChanged()"); }
	void StartReplicating() { NativeCall<void>(this, "UDracoTargetComponent.StartReplicating()"); }
	void QueryDinoAttackTarget(AActor* ViewSource, UE::Math::TVector<double>& OutHitLocation, AActor*& OutHitActor, bool& bOutHit) { NativeCall<void, AActor*, UE::Math::TVector<double>&, AActor*&, bool&>(this, "UDracoTargetComponent.QueryDinoAttackTarget(AActor*,UE::Math::TVector<double>&,AActor*&,bool&)", ViewSource, OutHitLocation, OutHitActor, bOutHit); }
};
