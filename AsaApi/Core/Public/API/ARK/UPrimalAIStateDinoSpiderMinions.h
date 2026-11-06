#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalAIState.h"

struct UPrimalAIStateDinoSpiderMinions : UPrimalAIState
{
public:
	UPrimalAIStateDinoSpiderMinions() = delete;
	~UPrimalAIStateDinoSpiderMinions() = delete;
	UPrimalAIStateDinoSpiderMinions(const UPrimalAIStateDinoSpiderMinions&) = delete;
	UPrimalAIStateDinoSpiderMinions& operator=(const UPrimalAIStateDinoSpiderMinions&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoSpiderMinions"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalAIStateDinoSpiderMinions"); }

	unsigned char& MinionMaxCountField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalAIStateDinoSpiderMinions.MinionMaxCount"); }
	bool& bFirstBatchField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderMinions.bFirstBatch"); }
	bool& bPreventMinionTamingField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderMinions.bPreventMinionTaming"); }
	bool& bPreventMinionSavingField() { return *GetNativePointerField<bool*>(this, "UPrimalAIStateDinoSpiderMinions.bPreventMinionSaving"); }
	float& BatchMinionCoolDownField() { return *GetNativePointerField<float*>(this, "UPrimalAIStateDinoSpiderMinions.BatchMinionCoolDown"); }
	double& LastBatchTimeField() { return *GetNativePointerField<double*>(this, "UPrimalAIStateDinoSpiderMinions.LastBatchTime"); }
	unsigned char& BatchCountField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalAIStateDinoSpiderMinions.BatchCount"); }
	unsigned char& AbsoluteMaxMinionsField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalAIStateDinoSpiderMinions.AbsoluteMaxMinions"); }
	unsigned char& RemainingMinionBatchCountField() { return *GetNativePointerField<unsigned char*>(this, "UPrimalAIStateDinoSpiderMinions.RemainingMinionBatchCount"); }
	int& OverrideMinionBaseLevelField() { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderMinions.OverrideMinionBaseLevel"); }
	int& NumMinionsToSpawnField() { return *GetNativePointerField<int*>(this, "UPrimalAIStateDinoSpiderMinions.NumMinionsToSpawn"); }

	bool IsInAnimationStateActive() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderMinions.IsInAnimationStateActive()"); }
	bool IsAttacking() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderMinions.IsAttacking()"); }
	void OnEnd() { NativeCall<void>(this, "UPrimalAIStateDinoSpiderMinions.OnEnd()"); }
	void OnBegin(UPrimalAIState* InParentState) { NativeCall<void, UPrimalAIState*>(this, "UPrimalAIStateDinoSpiderMinions.OnBegin(UPrimalAIState*)", InParentState); }
	bool CanUseState() { return NativeCall<bool>(this, "UPrimalAIStateDinoSpiderMinions.CanUseState()"); }
	void OnTick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalAIStateDinoSpiderMinions.OnTick(float)", DeltaSeconds); }

	TArray<float, TSizedDefaultAllocator<32> >& MinionCharacterTypeClassesWeightsField() { return *GetNativePointerField<TArray<float, TSizedDefaultAllocator<32> >*>(this, "UPrimalAIStateDinoSpiderMinions.MinionCharacterTypeClassesWeights"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& SpawnedMinionsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UPrimalAIStateDinoSpiderMinions.SpawnedMinions"); }
	UE::Math::TVector<double>& SpawnRandomOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAIStateDinoSpiderMinions.SpawnRandomOffset"); }
	UE::Math::TVector<double>& SpawnFixedOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalAIStateDinoSpiderMinions.SpawnFixedOffset"); }
	FName& EggSocketField() { return *GetNativePointerField<FName*>(this, "UPrimalAIStateDinoSpiderMinions.EggSocket"); }
	void TickAnimationState(float DeltaTime, FName CustomEventName, ENetRole Role) { NativeCall<void, float, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderMinions.TickAnimationState(float,FName,ENetRole)", DeltaTime, CustomEventName, Role); }
	void EndAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderMinions.EndAnimationState(FName,ENetRole)", CustomEventName, Role); }
	void StartAnimationState(FName CustomEventName, ENetRole Role) { NativeCall<void, FName, ENetRole>(this, "UPrimalAIStateDinoSpiderMinions.StartAnimationState(FName,ENetRole)", CustomEventName, Role); }
};
