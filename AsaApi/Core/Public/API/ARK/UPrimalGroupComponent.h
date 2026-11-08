#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UActorComponent.h"

struct UPrimalGroupComponent : UActorComponent
{
public:
	UPrimalGroupComponent() = delete;
	~UPrimalGroupComponent() = delete;
	UPrimalGroupComponent(const UPrimalGroupComponent&) = delete;
	UPrimalGroupComponent& operator=(const UPrimalGroupComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalGroupComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalGroupComponent"); }

	int& MaxGroupSizeField() { return *GetNativePointerField<int*>(this, "UPrimalGroupComponent.MaxGroupSize"); }
	float& GroupSearchRadiusField() { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.GroupSearchRadius"); }
	float& UpdateGroupIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.UpdateGroupInterval"); }
	float& MaxWanderDistanceField() { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.MaxWanderDistance"); }
	float& UpdateHighPriorityActorIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.UpdateHighPriorityActorInterval"); }
	int& MaxAttackersPerTargetField() { return *GetNativePointerField<int*>(this, "UPrimalGroupComponent.MaxAttackersPerTarget"); }
	float& UpdateAttackPrioritiesIntervalField() { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.UpdateAttackPrioritiesInterval"); }
	float& LastUpdatedGroupTimeField() { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.LastUpdatedGroupTime"); }
	float& LastUpdatedHighPriorityActorTimeField() { return *GetNativePointerField<float*>(this, "UPrimalGroupComponent.LastUpdatedHighPriorityActorTime"); }

	void UpdateGroup() { NativeCall<void>(this, "UPrimalGroupComponent.UpdateGroup()"); }
	void OnHighPriorityActorDestroyed_Implementation(AActor* DestroyedActor) { NativeCall<void, AActor*>(this, "UPrimalGroupComponent.OnHighPriorityActorDestroyed_Implementation(AActor*)", DestroyedActor); }
	bool IsGroupFull() { return NativeCall<bool>(this, "UPrimalGroupComponent.IsGroupFull()"); }
	void UpdateHighPriorityActor() { NativeCall<void>(this, "UPrimalGroupComponent.UpdateHighPriorityActor()"); }
	float CalculateAttackerPriorityWeight(APrimalDinoAIController* Attacker) { return NativeCall<float, APrimalDinoAIController*>(this, "UPrimalGroupComponent.CalculateAttackerPriorityWeight(APrimalDinoAIController*)", Attacker); }
	void HandleUnstasis() { NativeCall<void>(this, "UPrimalGroupComponent.HandleUnstasis()"); }
	bool BPIsTeamAllowedToJoinGroup(int TargetingTeam) { return NativeCall<bool, int>(this, "UPrimalGroupComponent.BPIsTeamAllowedToJoinGroup(int)", TargetingTeam); }
	void OnHighPriorityCharacterDied_Implementation(APrimalCharacter* DiedCharacter) { NativeCall<void, APrimalCharacter*>(this, "UPrimalGroupComponent.OnHighPriorityCharacterDied_Implementation(APrimalCharacter*)", DiedCharacter); }
	void StartUpdateHighPriorityActorTimer() { NativeCall<void>(this, "UPrimalGroupComponent.StartUpdateHighPriorityActorTimer()"); }
	bool IsBetterLeader(UPrimalGroupComponent* CurrentLeader, UPrimalGroupComponent* CompToTest) { return NativeCall<bool, UPrimalGroupComponent*, UPrimalGroupComponent*>(this, "UPrimalGroupComponent.IsBetterLeader(UPrimalGroupComponent*,UPrimalGroupComponent*)", CurrentLeader, CompToTest); }
	void BPOnGrantedLeadership(UPrimalGroupComponent* OldLeader) { NativeCall<void, UPrimalGroupComponent*>(this, "UPrimalGroupComponent.BPOnGrantedLeadership(UPrimalGroupComponent*)", OldLeader); }
	APrimalCharacter* GetOwningPrimalCharacter() { return NativeCall<APrimalCharacter*>(this, "UPrimalGroupComponent.GetOwningPrimalCharacter()"); }
	float CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController* Attacker) { return NativeCall<float, APrimalDinoAIController*>(this, "UPrimalGroupComponent.CalculateAttackerPriorityWeight_Implementation(APrimalDinoAIController*)", Attacker); }
	void StartUpdateGroupTimer() { NativeCall<void>(this, "UPrimalGroupComponent.StartUpdateGroupTimer()"); }
	void AddToGroup(UPrimalGroupComponent* NewGroupLeader) { NativeCall<void, UPrimalGroupComponent*>(this, "UPrimalGroupComponent.AddToGroup(UPrimalGroupComponent*)", NewGroupLeader); }
	void StopUpdateHighPriorityActorTimer() { NativeCall<void>(this, "UPrimalGroupComponent.StopUpdateHighPriorityActorTimer()"); }
	bool IsGroupLeader() { return NativeCall<bool>(this, "UPrimalGroupComponent.IsGroupLeader()"); }
	void VerifyGroup() { NativeCall<void>(this, "UPrimalGroupComponent.VerifyGroup()"); }
	void BeginPlay() { NativeCall<void>(this, "UPrimalGroupComponent.BeginPlay()"); }
	bool IsGroupFull_Implementation() { return NativeCall<bool>(this, "UPrimalGroupComponent.IsGroupFull_Implementation()"); }
	void BPSetHighPriorityActor(AActor* OldActor, AActor* NewActor) { NativeCall<void, AActor*, AActor*>(this, "UPrimalGroupComponent.BPSetHighPriorityActor(AActor*,AActor*)", OldActor, NewActor); }
	UPrimalGroupComponent* GetBestGroupLeader() { return NativeCall<UPrimalGroupComponent*>(this, "UPrimalGroupComponent.GetBestGroupLeader()"); }
	void BPUpdateHighPriorityActor() { NativeCall<void>(this, "UPrimalGroupComponent.BPUpdateHighPriorityActor()"); }
	bool IsAllowedToJoinGroup(UPrimalGroupComponent* OtherGroupComponent) { return NativeCall<bool, UPrimalGroupComponent*>(this, "UPrimalGroupComponent.IsAllowedToJoinGroup(UPrimalGroupComponent*)", OtherGroupComponent); }
	void OnHighPriorityActorTakeAnyDamage_Implementation(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) { NativeCall<void, AActor*, float, const UDamageType*, AController*, AActor*>(this, "UPrimalGroupComponent.OnHighPriorityActorTakeAnyDamage_Implementation(AActor*,float,UDamageType*,AController*,AActor*)", DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser); }
	void UpdateAttackPriorities() { NativeCall<void>(this, "UPrimalGroupComponent.UpdateAttackPriorities()"); }
	void StopUpdateGroupTimer() { NativeCall<void>(this, "UPrimalGroupComponent.StopUpdateGroupTimer()"); }
	int GetGroupSize() { return NativeCall<int>(this, "UPrimalGroupComponent.GetGroupSize()"); }
	bool HasGroup_Implementation() { return NativeCall<bool>(this, "UPrimalGroupComponent.HasGroup_Implementation()"); }
	AActor* GetHighPriorityActor() { return NativeCall<AActor*>(this, "UPrimalGroupComponent.GetHighPriorityActor()"); }
	void SetGroupLeader(UPrimalGroupComponent* NewGroupLeader) { NativeCall<void, UPrimalGroupComponent*>(this, "UPrimalGroupComponent.SetGroupLeader(UPrimalGroupComponent*)", NewGroupLeader); }
	bool IsWhitelisted(UPrimalGroupComponent* OtherComponent) { return NativeCall<bool, UPrimalGroupComponent*>(this, "UPrimalGroupComponent.IsWhitelisted(UPrimalGroupComponent*)", OtherComponent); }
	int GetNumAttackersForTarget(const AActor* Target) { return NativeCall<int, const AActor*>(this, "UPrimalGroupComponent.GetNumAttackersForTarget(AActor*)", Target); }
	void RemoveFromGroup() { NativeCall<void>(this, "UPrimalGroupComponent.RemoveFromGroup()"); }
	void StopUpdateAttackPrioritiesTimer() { NativeCall<void>(this, "UPrimalGroupComponent.StopUpdateAttackPrioritiesTimer()"); }
	bool IsBetterLeader_Implementation(UPrimalGroupComponent* CurrentLeader, UPrimalGroupComponent* CompToTest) { return NativeCall<bool, UPrimalGroupComponent*, UPrimalGroupComponent*>(this, "UPrimalGroupComponent.IsBetterLeader_Implementation(UPrimalGroupComponent*,UPrimalGroupComponent*)", CurrentLeader, CompToTest); }
	void SetHighPriorityActor(AActor* NewActor) { NativeCall<void, AActor*>(this, "UPrimalGroupComponent.SetHighPriorityActor(AActor*)", NewActor); }
	int GetNumAttackersWithPriorityForTarget(const AActor* Target) { return NativeCall<int, const AActor*>(this, "UPrimalGroupComponent.GetNumAttackersWithPriorityForTarget(AActor*)", Target); }
	void OnOwnerDied_Implementation(APrimalCharacter* DiedCharacter) { NativeCall<void, APrimalCharacter*>(this, "UPrimalGroupComponent.OnOwnerDied_Implementation(APrimalCharacter*)", DiedCharacter); }
	bool IsGroupLeader_Implementation() { return NativeCall<bool>(this, "UPrimalGroupComponent.IsGroupLeader_Implementation()"); }
	bool IsAllowedToJoinGroup_Implementation(UPrimalGroupComponent* OtherGroupComponent) { return NativeCall<bool, UPrimalGroupComponent*>(this, "UPrimalGroupComponent.IsAllowedToJoinGroup_Implementation(UPrimalGroupComponent*)", OtherGroupComponent); }
	int GetGroupSize_Implementation() { return NativeCall<int>(this, "UPrimalGroupComponent.GetGroupSize_Implementation()"); }
	bool HasGroup() { return NativeCall<bool>(this, "UPrimalGroupComponent.HasGroup()"); }
	void StartUpdateAttackPrioritiesTimer() { NativeCall<void>(this, "UPrimalGroupComponent.StartUpdateAttackPrioritiesTimer()"); }

	BitFieldValue<bool, unsigned char> bAutoRefillGroup() { return { this, "UPrimalGroupComponent.bAutoRefillGroup"}; }
	BitFieldValue<bool, unsigned char> bUseGroupLeaderPriotizeMemberType() { return { this, "UPrimalGroupComponent.bUseGroupLeaderPriotizeMemberType"}; }
	BitFieldValue<bool, unsigned char> bGroupUsesHighPriorityActor() { return { this, "UPrimalGroupComponent.bGroupUsesHighPriorityActor"}; }
	BitFieldValue<bool, unsigned char> bUseBPIsTeamAllowedToJoinGroup() { return { this, "UPrimalGroupComponent.bUseBPIsTeamAllowedToJoinGroup"}; }

	UPrimalGroupComponent*& GroupLeaderField() { return *GetNativePointerField<UPrimalGroupComponent**>(this, "UPrimalGroupComponent.GroupLeader"); }
	APrimalCharacter*& OwningPrimalCharacterField() { return *GetNativePointerField<APrimalCharacter**>(this, "UPrimalGroupComponent.OwningPrimalCharacter"); }

	FName& GroupTypeNameField() { return *GetNativePointerField<FName*>(this, "UPrimalGroupComponent.GroupTypeName"); }
	TArray<FName, TSizedDefaultAllocator<32> >& ActorTagWhitelistField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimalGroupComponent.ActorTagWhitelist"); }
	TWeakObjectPtr<AActor, FWeakObjectPtr>& HighPriorityActorField() { return *GetNativePointerField<TWeakObjectPtr<AActor, FWeakObjectPtr>*>(this, "UPrimalGroupComponent.HighPriorityActor"); }
	FTimerHandle& UpdateGroupTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalGroupComponent.UpdateGroupTimerHandle"); }
	FTimerHandle& UpdateHighPriorityActorTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalGroupComponent.UpdateHighPriorityActorTimerHandle"); }
	FTimerHandle& UpdateAttackPrioritiesTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UPrimalGroupComponent.UpdateAttackPrioritiesTimerHandle"); }
	void UpdateAttackGroup(TArray<APrimalDinoAIController*, TSizedDefaultAllocator<32> >& AttackGroup) { NativeCall<void, TArray<APrimalDinoAIController*, TSizedDefaultAllocator<32> >&>(this, "UPrimalGroupComponent.UpdateAttackGroup(TArray<APrimalDinoAIController*,TSizedDefaultAllocator<32>>&)", AttackGroup); }
	void OverrideGroupMemberRandomWanderLocation_Implementation(const UE::Math::TVector<double>& originalDestination, UE::Math::TVector<double>& inVec) { NativeCall<void, const UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "UPrimalGroupComponent.OverrideGroupMemberRandomWanderLocation_Implementation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", originalDestination, inVec); }
	void SendGroupEvent_Implementation(const FName& EventName, const FBPNetExecParams& Params) { NativeCall<void, const FName&, const FBPNetExecParams&>(this, "UPrimalGroupComponent.SendGroupEvent_Implementation(FName&,FBPNetExecParams&)", EventName, Params); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UPrimalGroupComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void OverrideGroupMemberRandomWanderLocation(const UE::Math::TVector<double>& originalDestination, UE::Math::TVector<double>& inVec) { NativeCall<void, const UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "UPrimalGroupComponent.OverrideGroupMemberRandomWanderLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", originalDestination, inVec); }
	void UpdateAttackGroup_Implementation(TArray<APrimalDinoAIController*, TSizedDefaultAllocator<32> >& AttackGroup) { NativeCall<void, TArray<APrimalDinoAIController*, TSizedDefaultAllocator<32> >&>(this, "UPrimalGroupComponent.UpdateAttackGroup_Implementation(TArray<APrimalDinoAIController*,TSizedDefaultAllocator<32>>&)", AttackGroup); }
	void ReceiveGroupEvent(const FName& EventName, UPrimalGroupComponent* EventInstigatorComp, const FBPNetExecParams& Params) { NativeCall<void, const FName&, UPrimalGroupComponent*, const FBPNetExecParams&>(this, "UPrimalGroupComponent.ReceiveGroupEvent(FName&,UPrimalGroupComponent*,FBPNetExecParams&)", EventName, EventInstigatorComp, Params); }
	void ReceiveGroupEvent_Implementation(const FName& EventName, UPrimalGroupComponent* EventInstigatorComp, const FBPNetExecParams& Params) { NativeCall<void, const FName&, UPrimalGroupComponent*, const FBPNetExecParams&>(this, "UPrimalGroupComponent.ReceiveGroupEvent_Implementation(FName&,UPrimalGroupComponent*,FBPNetExecParams&)", EventName, EventInstigatorComp, Params); }
};
