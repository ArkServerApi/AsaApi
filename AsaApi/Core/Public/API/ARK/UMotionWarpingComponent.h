#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UMotionWarpingComponent : public UActorComponent
{
public:
	UMotionWarpingComponent() = delete;
	~UMotionWarpingComponent() = delete;
	UMotionWarpingComponent(const UMotionWarpingComponent&) = delete;
	UMotionWarpingComponent& operator=(const UMotionWarpingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMotionWarpingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMotionWarpingComponent"); }

	bool& bSearchForWindowsInAnimsWithinMontagesField() { return *GetNativePointerField<bool*>(this, "UMotionWarpingComponent.bSearchForWindowsInAnimsWithinMontages"); }
	FMotionWarpingPreUpdate& OnPreUpdateField() { return *GetNativePointerField<FMotionWarpingPreUpdate*>(this, "UMotionWarpingComponent.OnPreUpdate"); }
	bool& bPredictingTrajectoryField() { return *GetNativePointerField<bool*>(this, "UMotionWarpingComponent.bPredictingTrajectory"); }
	void EndTrajectoryPredictions() { NativeCall<void>(this, "UMotionWarpingComponent.EndTrajectoryPredictions()"); }
	void UpdateSwitchOffConditions() { NativeCall<void>(this, "UMotionWarpingComponent.UpdateSwitchOffConditions()"); }
	int RemoveWarpTarget(FName WarpTargetName) { return NativeCall<int, FName>(this, "UMotionWarpingComponent.RemoveWarpTarget(FName)", WarpTargetName); }
	bool ContainsModifier(const UAnimSequenceBase* Animation, float StartTime, float EndTime) { return NativeCall<bool, const UAnimSequenceBase*, float, float>(this, "UMotionWarpingComponent.ContainsModifier(UAnimSequenceBase*,float,float)", Animation, StartTime, EndTime); }
	void AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget) { NativeCall<void, const FMotionWarpingTarget&>(this, "UMotionWarpingComponent.AddOrUpdateWarpTarget(FMotionWarpingTarget&)", WarpTarget); }
	FSwitchOffConditionData* FindSwitchOffConditionData(FName WarpTargetName) { return NativeCall<FSwitchOffConditionData*, FName>(this, "UMotionWarpingComponent.FindSwitchOffConditionData(FName)", WarpTargetName); }
	void RemoveSwitchOffConditions(FName WarpTargetName) { NativeCall<void, FName>(this, "UMotionWarpingComponent.RemoveSwitchOffConditions(FName)", WarpTargetName); }
	void UpdateWithContext(const FMotionWarpingUpdateContext& Context, float DeltaSeconds) { NativeCall<void, const FMotionWarpingUpdateContext&, float>(this, "UMotionWarpingComponent.UpdateWithContext(FMotionWarpingUpdateContext&,float)", Context, DeltaSeconds); }
	void InitializeComponent() { NativeCall<void>(this, "UMotionWarpingComponent.InitializeComponent()"); }
	void BeginTrajectoryPredictions(const FAnimMontageInstance* MontageInstance) { NativeCall<void, const FAnimMontageInstance*>(this, "UMotionWarpingComponent.BeginTrajectoryPredictions(FAnimMontageInstance*)", MontageInstance); }
	bool IsPredictingTrajectory() { return NativeCall<bool>(this, "UMotionWarpingComponent.IsPredictingTrajectory()"); }
};
