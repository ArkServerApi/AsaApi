#pragma once
#include "BulkForward.h"
#include "UMovementComponent.h"

struct UInterpToMovementComponent : public UMovementComponent
{
public:
	UInterpToMovementComponent() = delete;
	~UInterpToMovementComponent() = delete;
	UInterpToMovementComponent(const UInterpToMovementComponent&) = delete;
	UInterpToMovementComponent& operator=(const UInterpToMovementComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UInterpToMovementComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UInterpToMovementComponent"); }

	float& DurationField() { return *GetNativePointerField<float*>(this, "UInterpToMovementComponent.Duration"); }
	bool& bSweepField() { return *GetNativePointerField<bool*>(this, "UInterpToMovementComponent.bSweep"); }
	EInterpToBehaviourType& BehaviourTypeField() { return *GetNativePointerField<EInterpToBehaviourType*>(this, "UInterpToMovementComponent.BehaviourType"); }
	bool& bCheckIfStillInWorldField() { return *GetNativePointerField<bool*>(this, "UInterpToMovementComponent.bCheckIfStillInWorld"); }
	float& MaxSimulationTimeStepField() { return *GetNativePointerField<float*>(this, "UInterpToMovementComponent.MaxSimulationTimeStep"); }
	float& SpeedMultiplierField() { return *GetNativePointerField<float*>(this, "UInterpToMovementComponent.SpeedMultiplier"); }
	int& MaxSimulationIterationsField() { return *GetNativePointerField<int*>(this, "UInterpToMovementComponent.MaxSimulationIterations"); }
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "UInterpToMovementComponent.CurrentTime"); }
	float& TimeMultiplierField() { return *GetNativePointerField<float*>(this, "UInterpToMovementComponent.TimeMultiplier"); }
	float& CurrentDirectionField() { return *GetNativePointerField<float*>(this, "UInterpToMovementComponent.CurrentDirection"); }
	bool& bIsWaitingField() { return *GetNativePointerField<bool*>(this, "UInterpToMovementComponent.bIsWaiting"); }
	bool& bStoppedField() { return *GetNativePointerField<bool*>(this, "UInterpToMovementComponent.bStopped"); }
	bool& bContainsActorControlPointsField() { return *GetNativePointerField<bool*>(this, "UInterpToMovementComponent.bContainsActorControlPoints"); }
	float& TotalDistanceField() { return *GetNativePointerField<float*>(this, "UInterpToMovementComponent.TotalDistance"); }
	UE::Math::TVector<double>& StartLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UInterpToMovementComponent.StartLocation"); }
	bool& bPointsFinalizedField() { return *GetNativePointerField<bool*>(this, "UInterpToMovementComponent.bPointsFinalized"); }
	BitFieldValue<bool, unsigned __int32> bPauseOnImpact() { return { this, "UInterpToMovementComponent.bPauseOnImpact"}; }
	BitFieldValue<bool, unsigned __int32> bForceSubStepping() { return { this, "UInterpToMovementComponent.bForceSubStepping"}; }
	float CalculateNewTime(float TimeNow, float Delta, FHitResult& HitResult, bool InBroadcastEvent, bool& OutStopped, float& OutTimeRemainder) { return NativeCall<float, float, float, FHitResult&, bool, bool&, float&>(this, "UInterpToMovementComponent.CalculateNewTime(float,float,FHitResult&,bool,bool&,float&)", TimeNow, Delta, HitResult, InBroadcastEvent, OutStopped, OutTimeRemainder); }
	void BeginPlay() { NativeCall<void>(this, "UInterpToMovementComponent.BeginPlay()"); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "UInterpToMovementComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void StopSimulating(const FHitResult& HitResult) { NativeCall<void, const FHitResult&>(this, "UInterpToMovementComponent.StopSimulating(FHitResult&)", HitResult); }
	UE::Math::TVector<double>* ComputeMoveDelta(UE::Math::TVector<double>* result, float InTime) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "UInterpToMovementComponent.ComputeMoveDelta(float)", result, InTime); }
	void StopMovementImmediately() { NativeCall<void>(this, "UInterpToMovementComponent.StopMovementImmediately()"); }
	bool ShouldUseSubStepping() { return NativeCall<bool>(this, "UInterpToMovementComponent.ShouldUseSubStepping()"); }
	void UpdateControlPoints(bool InForceUpdate) { NativeCall<void, bool>(this, "UInterpToMovementComponent.UpdateControlPoints(bool)", InForceUpdate); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UInterpToMovementComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void AddControlPointPosition(UE::Math::TVector<double>* Pos, bool bPositionIsRelative) { if (!Pos) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, bool>(this, "UInterpToMovementComponent.AddControlPointPosition(UE::Math::TVector<double>,bool)", *Pos, bPositionIsRelative); }
	void FinaliseControlPoints() { NativeCall<void>(this, "UInterpToMovementComponent.FinaliseControlPoints()"); }
	bool CheckStillInWorld() { return NativeCall<bool>(this, "UInterpToMovementComponent.CheckStillInWorld()"); }
	void HandleImpact(const FHitResult& Hit, float Time, const UE::Math::TVector<double>& MoveDelta) { NativeCall<void, const FHitResult&, float, const UE::Math::TVector<double>&>(this, "UInterpToMovementComponent.HandleImpact(FHitResult&,float,UE::Math::TVector<double>&)", Hit, Time, MoveDelta); }
};
