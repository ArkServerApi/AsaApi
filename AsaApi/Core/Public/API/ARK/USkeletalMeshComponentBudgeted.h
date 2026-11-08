#pragma once
#include "BulkForward.h"
#include "USkeletalMeshComponent.h"

struct USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	USkeletalMeshComponentBudgeted() = delete;
	~USkeletalMeshComponentBudgeted() = delete;
	USkeletalMeshComponentBudgeted(const USkeletalMeshComponentBudgeted&) = delete;
	USkeletalMeshComponentBudgeted& operator=(const USkeletalMeshComponentBudgeted&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkeletalMeshComponentBudgeted"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkeletalMeshComponentBudgeted"); }

	IAnimationBudgetAllocator*& AnimationBudgetAllocatorField() { return *GetNativePointerField<IAnimationBudgetAllocator**>(this, "USkeletalMeshComponentBudgeted.AnimationBudgetAllocator"); }
	int& AnimationBudgetHandleField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponentBudgeted.AnimationBudgetHandle"); }
	float& AutoCalculatedSignificanceField() { return *GetNativePointerField<float*>(this, "USkeletalMeshComponentBudgeted.AutoCalculatedSignificance"); }
	BitFieldValue<bool, unsigned char> bAutoRegisterWithBudgetAllocator() { return { this, "USkeletalMeshComponentBudgeted.bAutoRegisterWithBudgetAllocator"}; }
	BitFieldValue<bool, unsigned char> bAutoCalculateSignificance() { return { this, "USkeletalMeshComponentBudgeted.bAutoCalculateSignificance"}; }
	BitFieldValue<bool, unsigned char> bShouldUseActorRenderedFlag() { return { this, "USkeletalMeshComponentBudgeted.bShouldUseActorRenderedFlag"}; }
	void BeginPlay() { NativeCall<void>(this, "USkeletalMeshComponentBudgeted.BeginPlay()"); }
	void SetComponentTickEnabled(bool bEnabled) { NativeCall<void, bool>(this, "USkeletalMeshComponentBudgeted.SetComponentTickEnabled(bool)", bEnabled); }
	void CompleteParallelAnimationEvaluation(bool bDoPostAnimEvaluation) { NativeCall<void, bool>(this, "USkeletalMeshComponentBudgeted.CompleteParallelAnimationEvaluation(bool)", bDoPostAnimEvaluation); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "USkeletalMeshComponentBudgeted.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "USkeletalMeshComponentBudgeted.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
};
