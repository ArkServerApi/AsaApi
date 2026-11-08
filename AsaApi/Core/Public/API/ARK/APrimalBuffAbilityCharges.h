#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalBuff.h"

struct APrimalBuffAbilityCharges : APrimalBuff
{
public:
	APrimalBuffAbilityCharges() = delete;
	~APrimalBuffAbilityCharges() = delete;
	APrimalBuffAbilityCharges(const APrimalBuffAbilityCharges&) = delete;
	APrimalBuffAbilityCharges& operator=(const APrimalBuffAbilityCharges&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuffAbilityCharges"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuffAbilityCharges"); }



	void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalBuffAbilityCharges.Tick(float)", DeltaTime); }

	FOnChargeSystemStateChanged& OnChargeSystemStateChangedDelegateField() { return *GetNativePointerField<FOnChargeSystemStateChanged*>(this, "APrimalBuffAbilityCharges.OnChargeSystemStateChangedDelegate"); }
	FOnChargeSystemDepleted& OnChargeSystemDepletedDelegateField() { return *GetNativePointerField<FOnChargeSystemDepleted*>(this, "APrimalBuffAbilityCharges.OnChargeSystemDepletedDelegate"); }
	FOnChargeSystemFullyCharged& OnChargeSystemFullyChargedDelegateField() { return *GetNativePointerField<FOnChargeSystemFullyCharged*>(this, "APrimalBuffAbilityCharges.OnChargeSystemFullyChargedDelegate"); }
	FOnChargeSystemDecrementThreshold& OnChargeSystemDecrementThresholdDelegateField() { return *GetNativePointerField<FOnChargeSystemDecrementThreshold*>(this, "APrimalBuffAbilityCharges.OnChargeSystemDecrementThresholdDelegate"); }
	FReplicatedChargeSystemData& ReplicatedDataField() { return *GetNativePointerField<FReplicatedChargeSystemData*>(this, "APrimalBuffAbilityCharges.ReplicatedData"); }
	void MulticastUpdateChargeSystemState_Implementation(FName ChargeName, bool bIsActive, float NewChargeAmount) { NativeCall<void, FName, bool, float>(this, "APrimalBuffAbilityCharges.MulticastUpdateChargeSystemState_Implementation(FName,bool,float)", ChargeName, bIsActive, NewChargeAmount); }
	bool CanRegenerate(FName ChargeName) { return NativeCall<bool, FName>(this, "APrimalBuffAbilityCharges.CanRegenerate(FName)", ChargeName); }
	void UpdateChargeSystemResource_Implementation(FName ChargeName, float DeltaTime) { NativeCall<void, FName, float>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemResource_Implementation(FName,float)", ChargeName, DeltaTime); }
	void OnChargeSystemDecrementThreshold_Implementation(FName ChargeName, int ThresholdCount) { NativeCall<void, FName, int>(this, "APrimalBuffAbilityCharges.OnChargeSystemDecrementThreshold_Implementation(FName,int)", ChargeName, ThresholdCount); }
	void OnChargeSystemStateChanged(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.OnChargeSystemStateChanged(FName)", ChargeName); }
	bool CanDeactivateChargeSystem_Implementation(FName ChargeName, FName& FailReason) { return NativeCall<bool, FName, FName&>(this, "APrimalBuffAbilityCharges.CanDeactivateChargeSystem_Implementation(FName,FName&)", ChargeName, FailReason); }
	void UpdateChargeSystemState(FName ChargeName, bool bIsActive, float NewChargeAmount) { NativeCall<void, FName, bool, float>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemState(FName,bool,float)", ChargeName, bIsActive, NewChargeAmount); }
	float GetChargePercentage_Implementation(FName ChargeName) { return NativeCall<float, FName>(this, "APrimalBuffAbilityCharges.GetChargePercentage_Implementation(FName)", ChargeName); }
	bool CanActivateChargeSystem(FName ChargeName, FName& FailReason) { return NativeCall<bool, FName, FName&>(this, "APrimalBuffAbilityCharges.CanActivateChargeSystem(FName,FName&)", ChargeName, FailReason); }
	void ResumeRegen_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.ResumeRegen_Implementation(FName)", ChargeName); }
	void UpdateChargeSystemConfig_Implementation(FName ChargeName, const FChargeSystemConfig& NewConfig) { NativeCall<void, FName, const FChargeSystemConfig&>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemConfig_Implementation(FName,FChargeSystemConfig&)", ChargeName, NewConfig); }
	bool SetChargeValue(FName ChargeName, float NewChargeAmount, FName& FailReason, float& ChargeAfterAdjustment) { return NativeCall<bool, FName, float, FName&, float&>(this, "APrimalBuffAbilityCharges.SetChargeValue(FName,float,FName&,float&)", ChargeName, NewChargeAmount, FailReason, ChargeAfterAdjustment); }
	void PauseRegen_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.PauseRegen_Implementation(FName)", ChargeName); }
	void AddOrUpdateReplicatedEntry(FName ChargeName, const FChargeSystemState& State) { NativeCall<void, FName, const FChargeSystemState&>(this, "APrimalBuffAbilityCharges.AddOrUpdateReplicatedEntry(FName,FChargeSystemState&)", ChargeName, State); }
	bool StartUsingChargeSystem_Implementation(FName ChargeName, FName& FailReason) { return NativeCall<bool, FName, FName&>(this, "APrimalBuffAbilityCharges.StartUsingChargeSystem_Implementation(FName,FName&)", ChargeName, FailReason); }
	bool AdjustCharge_Implementation(FName ChargeName, float AdjustmentAmount, FName& FailReason, float& ChargeAfterAdjustment) { return NativeCall<bool, FName, float, FName&, float&>(this, "APrimalBuffAbilityCharges.AdjustCharge_Implementation(FName,float,FName&,float&)", ChargeName, AdjustmentAmount, FailReason, ChargeAfterAdjustment); }
	void UnregisterChargeSystem_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.UnregisterChargeSystem_Implementation(FName)", ChargeName); }
	static void GetReplicatedData_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuffAbilityCharges.GetReplicatedData_WrapperImpl(void*,void*)", Object, OutValue); }
	void RemoveReplicatedEntry(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.RemoveReplicatedEntry(FName)", ChargeName); }
	bool IsRegenPaused_Implementation(FName ChargeName) { return NativeCall<bool, FName>(this, "APrimalBuffAbilityCharges.IsRegenPaused_Implementation(FName)", ChargeName); }
	bool IsChargeSystemActive_Implementation(FName ChargeName) { return NativeCall<bool, FName>(this, "APrimalBuffAbilityCharges.IsChargeSystemActive_Implementation(FName)", ChargeName); }
	bool CanActivateChargeSystem_Implementation(FName ChargeName, FName& FailReason) { return NativeCall<bool, FName, FName&>(this, "APrimalBuffAbilityCharges.CanActivateChargeSystem_Implementation(FName,FName&)", ChargeName, FailReason); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetAllChargeSystemNames_Implementation(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalBuffAbilityCharges.GetAllChargeSystemNames_Implementation()", result); }
	void RemoveReplicatedEntry_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.RemoveReplicatedEntry_Implementation(FName)", ChargeName); }
	bool StopUsingChargeSystem(FName ChargeName, FName& FailReason) { return NativeCall<bool, FName, FName&>(this, "APrimalBuffAbilityCharges.StopUsingChargeSystem(FName,FName&)", ChargeName, FailReason); }
	void RegisterChargeSystem_Implementation(FName ChargeName, const FChargeSystemConfig& Config) { NativeCall<void, FName, const FChargeSystemConfig&>(this, "APrimalBuffAbilityCharges.RegisterChargeSystem_Implementation(FName,FChargeSystemConfig&)", ChargeName, Config); }
	void OnChargeSystemDecrementThreshold(FName ChargeName, int ThresholdCount) { NativeCall<void, FName, int>(this, "APrimalBuffAbilityCharges.OnChargeSystemDecrementThreshold(FName,int)", ChargeName, ThresholdCount); }
	static void SetReplicatedData_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuffAbilityCharges.SetReplicatedData_WrapperImpl(void*,void*)", Object, InValue); }
	void MulticastUpdateChargeSystemState(FName ChargeName, bool bIsActive, float NewChargeAmount) { NativeCall<void, FName, bool, float>(this, "APrimalBuffAbilityCharges.MulticastUpdateChargeSystemState(FName,bool,float)", ChargeName, bIsActive, NewChargeAmount); }
	void OnChargeSystemDepleted(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.OnChargeSystemDepleted(FName)", ChargeName); }
	void OnChargeSystemFullyCharged(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.OnChargeSystemFullyCharged(FName)", ChargeName); }
	void UpdateChargeSystemResource(FName ChargeName, float DeltaTime) { NativeCall<void, FName, float>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemResource(FName,float)", ChargeName, DeltaTime); }
	void OnChargeSystemStateChanged_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.OnChargeSystemStateChanged_Implementation(FName)", ChargeName); }
	void ProcessChargeDecrement_Implementation(FName ChargeName, float DecrementAmount) { NativeCall<void, FName, float>(this, "APrimalBuffAbilityCharges.ProcessChargeDecrement_Implementation(FName,float)", ChargeName, DecrementAmount); }
	void ClearRegenDelay(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.ClearRegenDelay(FName)", ChargeName); }
	void AddOrUpdateReplicatedEntry_Implementation(FName ChargeName, const FChargeSystemState& State) { NativeCall<void, FName, const FChargeSystemState&>(this, "APrimalBuffAbilityCharges.AddOrUpdateReplicatedEntry_Implementation(FName,FChargeSystemState&)", ChargeName, State); }
	const FReplicatedChargeSystemEntry* FindReplicatedEntry(FName ChargeName) { return NativeCall<const FReplicatedChargeSystemEntry*, FName>(this, "APrimalBuffAbilityCharges.FindReplicatedEntry(FName)", ChargeName); }
	bool SetChargeValue_Implementation(FName ChargeName, float NewChargeAmount, FName& FailReason, float& ChargeAfterAdjustment) { return NativeCall<bool, FName, float, FName&, float&>(this, "APrimalBuffAbilityCharges.SetChargeValue_Implementation(FName,float,FName&,float&)", ChargeName, NewChargeAmount, FailReason, ChargeAfterAdjustment); }
	void StartRegenDelay(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.StartRegenDelay(FName)", ChargeName); }
	float GetCurrentCharge_Implementation(FName ChargeName) { return NativeCall<float, FName>(this, "APrimalBuffAbilityCharges.GetCurrentCharge_Implementation(FName)", ChargeName); }
	void ProcessChargeDecrement(FName ChargeName, float DecrementAmount) { NativeCall<void, FName, float>(this, "APrimalBuffAbilityCharges.ProcessChargeDecrement(FName,float)", ChargeName, DecrementAmount); }
	bool IsRegenPaused(FName ChargeName) { return NativeCall<bool, FName>(this, "APrimalBuffAbilityCharges.IsRegenPaused(FName)", ChargeName); }
	bool IsWaitingForRegenDelay_Implementation(FName ChargeName) { return NativeCall<bool, FName>(this, "APrimalBuffAbilityCharges.IsWaitingForRegenDelay_Implementation(FName)", ChargeName); }
	bool StopUsingChargeSystem_Implementation(FName ChargeName, FName& FailReason) { return NativeCall<bool, FName, FName&>(this, "APrimalBuffAbilityCharges.StopUsingChargeSystem_Implementation(FName,FName&)", ChargeName, FailReason); }
	void UpdateChargeSystemState_Implementation(FName ChargeName, bool bIsActive, float NewChargeAmount) { NativeCall<void, FName, bool, float>(this, "APrimalBuffAbilityCharges.UpdateChargeSystemState_Implementation(FName,bool,float)", ChargeName, bIsActive, NewChargeAmount); }
	bool CanRegenerate_Implementation(FName ChargeName) { return NativeCall<bool, FName>(this, "APrimalBuffAbilityCharges.CanRegenerate_Implementation(FName)", ChargeName); }
	void ClearRegenDelay_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.ClearRegenDelay_Implementation(FName)", ChargeName); }
	void StartRegenDelay_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.StartRegenDelay_Implementation(FName)", ChargeName); }
	bool HasChargeSystem_Implementation(FName ChargeName) { return NativeCall<bool, FName>(this, "APrimalBuffAbilityCharges.HasChargeSystem_Implementation(FName)", ChargeName); }
	bool CanDeactivateChargeSystem(FName ChargeName, FName& FailReason) { return NativeCall<bool, FName, FName&>(this, "APrimalBuffAbilityCharges.CanDeactivateChargeSystem(FName,FName&)", ChargeName, FailReason); }
	void OnChargeSystemDepleted_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.OnChargeSystemDepleted_Implementation(FName)", ChargeName); }
	void OnChargeSystemFullyCharged_Implementation(FName ChargeName) { NativeCall<void, FName>(this, "APrimalBuffAbilityCharges.OnChargeSystemFullyCharged_Implementation(FName)", ChargeName); }
};
