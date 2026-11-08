#pragma once
#include "BulkForward.h"
#include "UGameplayTasksComponent.h"

struct UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	UAbilitySystemComponent() = delete;
	~UAbilitySystemComponent() = delete;
	UAbilitySystemComponent(const UAbilitySystemComponent&) = delete;
	UAbilitySystemComponent& operator=(const UAbilitySystemComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UAbilitySystemComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UAbilitySystemComponent"); }

	FName& AffectedAnimInstanceTagField() { return *GetNativePointerField<FName*>(this, "UAbilitySystemComponent.AffectedAnimInstanceTag"); }
	FPredictionKey& ScopedPredictionKeyField() { return *GetNativePointerField<FPredictionKey*>(this, "UAbilitySystemComponent.ScopedPredictionKey"); }
	float& OutgoingDurationField() { return *GetNativePointerField<float*>(this, "UAbilitySystemComponent.OutgoingDuration"); }
	float& IncomingDurationField() { return *GetNativePointerField<float*>(this, "UAbilitySystemComponent.IncomingDuration"); }
	FGameplayTagContainer& InternalTryActivateAbilityFailureTagsField() { return *GetNativePointerField<FGameplayTagContainer*>(this, "UAbilitySystemComponent.InternalTryActivateAbilityFailureTags"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ClientDebugStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UAbilitySystemComponent.ClientDebugStrings"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ServerDebugStringsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UAbilitySystemComponent.ServerDebugStrings"); }
	bool& UserAbilityActivationInhibitedField() { return *GetNativePointerField<bool*>(this, "UAbilitySystemComponent.UserAbilityActivationInhibited"); }
	bool& ReplicationProxyEnabledField() { return *GetNativePointerField<bool*>(this, "UAbilitySystemComponent.ReplicationProxyEnabled"); }
	bool& bSuppressGrantAbilityField() { return *GetNativePointerField<bool*>(this, "UAbilitySystemComponent.bSuppressGrantAbility"); }
	bool& bSuppressGameplayCuesField() { return *GetNativePointerField<bool*>(this, "UAbilitySystemComponent.bSuppressGameplayCues"); }
	int& GenericConfirmInputIDField() { return *GetNativePointerField<int*>(this, "UAbilitySystemComponent.GenericConfirmInputID"); }
	int& GenericCancelInputIDField() { return *GetNativePointerField<int*>(this, "UAbilitySystemComponent.GenericCancelInputID"); }
	FGameplayAbilitySpecContainer& ActivatableAbilitiesField() { return *GetNativePointerField<FGameplayAbilitySpecContainer*>(this, "UAbilitySystemComponent.ActivatableAbilities"); }
	FGameplayAbilityReplicatedDataContainer& AbilityTargetDataMapField() { return *GetNativePointerField<FGameplayAbilityReplicatedDataContainer*>(this, "UAbilitySystemComponent.AbilityTargetDataMap"); }
	int& AbilityScopeLockCountField() { return *GetNativePointerField<int*>(this, "UAbilitySystemComponent.AbilityScopeLockCount"); }
	bool& bAbilityPendingClearAllField() { return *GetNativePointerField<bool*>(this, "UAbilitySystemComponent.bAbilityPendingClearAll"); }
	float& AbilityLastActivatedTimeField() { return *GetNativePointerField<float*>(this, "UAbilitySystemComponent.AbilityLastActivatedTime"); }
	int& ClientActivateAbilityFailedCountRecentField() { return *GetNativePointerField<int*>(this, "UAbilitySystemComponent.ClientActivateAbilityFailedCountRecent"); }
	float& ClientActivateAbilityFailedStartTimeField() { return *GetNativePointerField<float*>(this, "UAbilitySystemComponent.ClientActivateAbilityFailedStartTime"); }
	FGameplayAbilityRepAnimMontage& RepAnimMontageInfoField() { return *GetNativePointerField<FGameplayAbilityRepAnimMontage*>(this, "UAbilitySystemComponent.RepAnimMontageInfo"); }
	bool& bCachedIsNetSimulatedField() { return *GetNativePointerField<bool*>(this, "UAbilitySystemComponent.bCachedIsNetSimulated"); }
	bool& bPendingMontageRepField() { return *GetNativePointerField<bool*>(this, "UAbilitySystemComponent.bPendingMontageRep"); }
	FGameplayAbilityLocalAnimMontage& LocalAnimMontageInfoField() { return *GetNativePointerField<FGameplayAbilityLocalAnimMontage*>(this, "UAbilitySystemComponent.LocalAnimMontageInfo"); }
	FActiveGameplayEffectsContainer& ActiveGameplayEffectsField() { return *GetNativePointerField<FActiveGameplayEffectsContainer*>(this, "UAbilitySystemComponent.ActiveGameplayEffects"); }
	FActiveGameplayCueContainer& ActiveGameplayCuesField() { return *GetNativePointerField<FActiveGameplayCueContainer*>(this, "UAbilitySystemComponent.ActiveGameplayCues"); }
	FActiveGameplayCueContainer& MinimalReplicationGameplayCuesField() { return *GetNativePointerField<FActiveGameplayCueContainer*>(this, "UAbilitySystemComponent.MinimalReplicationGameplayCues"); }
	FGameplayTagCountContainer& BlockedAbilityTagsField() { return *GetNativePointerField<FGameplayTagCountContainer*>(this, "UAbilitySystemComponent.BlockedAbilityTags"); }
	FGameplayTagCountContainer& GameplayTagCountContainerField() { return *GetNativePointerField<FGameplayTagCountContainer*>(this, "UAbilitySystemComponent.GameplayTagCountContainer"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& BlockedAbilityBindingsField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UAbilitySystemComponent.BlockedAbilityBindings"); }
	FMinimalReplicationTagCountMap& MinimalReplicationTagsField() { return *GetNativePointerField<FMinimalReplicationTagCountMap*>(this, "UAbilitySystemComponent.MinimalReplicationTags"); }
	FDelegateHandle& MonitoredTagChangedDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UAbilitySystemComponent.MonitoredTagChangedDelegateHandle"); }
	FTimerHandle& OnRep_ActivateAbilitiesTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "UAbilitySystemComponent.OnRep_ActivateAbilitiesTimerHandle"); }
	FMinimalReplicationTagCountMap& ReplicatedLooseTagsField() { return *GetNativePointerField<FMinimalReplicationTagCountMap*>(this, "UAbilitySystemComponent.ReplicatedLooseTags"); }
	FReplicatedPredictionKeyMap& ReplicatedPredictionKeyMapField() { return *GetNativePointerField<FReplicatedPredictionKeyMap*>(this, "UAbilitySystemComponent.ReplicatedPredictionKeyMap"); }
	BitFieldValue<bool, unsigned char> bDestroyActiveStateInitiated() { return { this, "UAbilitySystemComponent.bDestroyActiveStateInitiated"}; }
	bool IsReadyForGameplayCues() { return NativeCall<bool>(this, "UAbilitySystemComponent.IsReadyForGameplayCues()"); }
	void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) { NativeCall<void, FGameplayAbilitySpec&>(this, "UAbilitySystemComponent.AbilitySpecInputReleased(FGameplayAbilitySpec&)", Spec); }
	static const FGameplayEffectAttributeCaptureDefinition& GetIncomingDurationCapture() { return NativeCall<const FGameplayEffectAttributeCaptureDefinition&>(nullptr, "UAbilitySystemComponent.GetIncomingDurationCapture()"); }
	void DestroyActiveState() { NativeCall<void>(this, "UAbilitySystemComponent.DestroyActiveState()"); }
	void OnUnregister() { NativeCall<void>(this, "UAbilitySystemComponent.OnUnregister()"); }
	IAbilitySystemReplicationProxyInterface* GetReplicationInterface() { return NativeCall<IAbilitySystemReplicationProxyInterface*>(this, "UAbilitySystemComponent.GetReplicationInterface()"); }
	void HandleChangeAbilityCanBeCanceled(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bCanBeCanceled) { NativeCall<void, const FGameplayTagContainer&, UGameplayAbility*, bool>(this, "UAbilitySystemComponent.HandleChangeAbilityCanBeCanceled(FGameplayTagContainer&,UGameplayAbility*,bool)", AbilityTags, RequestingAbility, bCanBeCanceled); }
	void ClearAllAbilitiesWithInputID(int InputID) { NativeCall<void, int>(this, "UAbilitySystemComponent.ClearAllAbilitiesWithInputID(int)", InputID); }
	bool ServerPrintDebug_RequestWithStrings_Validate(const TArray<FString, TSizedDefaultAllocator<32> >& Strings) { return NativeCall<bool, const TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UAbilitySystemComponent.ServerPrintDebug_RequestWithStrings_Validate(TArray<FString,TSizedDefaultAllocator<32>>&)", Strings); }
	UGameplayAbility* GetAnimatingAbility() { return NativeCall<UGameplayAbility*>(this, "UAbilitySystemComponent.GetAnimatingAbility()"); }
	bool IsOwnerActorAuthoritative() { return NativeCall<bool>(this, "UAbilitySystemComponent.IsOwnerActorAuthoritative()"); }
	void OnRegister() { NativeCall<void>(this, "UAbilitySystemComponent.OnRegister()"); }
	const FActiveGameplayEffectsContainer& GetActiveGameplayEffects() { return NativeCall<const FActiveGameplayEffectsContainer&>(this, "UAbilitySystemComponent.GetActiveGameplayEffects()"); }
	void SetNumericAttribute_Internal(const FGameplayAttribute& Attribute, float& NewFloatValue) { NativeCall<void, const FGameplayAttribute&, float&>(this, "UAbilitySystemComponent.SetNumericAttribute_Internal(FGameplayAttribute&,float&)", Attribute, NewFloatValue); }
	void ApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags) { NativeCall<void, const FGameplayTagContainer&, UGameplayAbility*, bool, const FGameplayTagContainer&, bool, const FGameplayTagContainer&>(this, "UAbilitySystemComponent.ApplyAbilityBlockAndCancelTags(FGameplayTagContainer&,UGameplayAbility*,bool,FGameplayTagContainer&,bool,FGameplayTagContainer&)", AbilityTags, RequestingAbility, bEnableBlockTags, BlockTags, bExecuteCancelTags, CancelTags); }
	void InputCancel() { NativeCall<void>(this, "UAbilitySystemComponent.InputCancel()"); }
	void PostNetReceive() { NativeCall<void>(this, "UAbilitySystemComponent.PostNetReceive()"); }
	void UninitializeComponent() { NativeCall<void>(this, "UAbilitySystemComponent.UninitializeComponent()"); }
	bool IsAbilityInputBlocked(int InputID) { return NativeCall<bool, int>(this, "UAbilitySystemComponent.IsAbilityInputBlocked(int)", InputID); }
	void ForceAvatarReplication() { NativeCall<void>(this, "UAbilitySystemComponent.ForceAvatarReplication()"); }
	void InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) { NativeCall<void, AActor*, AActor*>(this, "UAbilitySystemComponent.InitAbilityActorInfo(AActor*,AActor*)", InOwnerActor, InAvatarActor); }
	bool ShouldSendClientDebugStringsToServer() { return NativeCall<bool>(this, "UAbilitySystemComponent.ShouldSendClientDebugStringsToServer()"); }
	void CacheIsNetSimulated() { NativeCall<void>(this, "UAbilitySystemComponent.CacheIsNetSimulated()"); }
	void SetOwnerActor(AActor* NewOwnerActor) { NativeCall<void, AActor*>(this, "UAbilitySystemComponent.SetOwnerActor(AActor*)", NewOwnerActor); }
	void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) { NativeCall<void, UCanvas*, const FDebugDisplayInfo&, float&, float&>(this, "UAbilitySystemComponent.DisplayDebug(UCanvas*,FDebugDisplayInfo&,float&,float&)", Canvas, DebugDisplay, YL, YPos); }
	void PrePredictionActivation(const UGameplayAbility* Ability) { NativeCall<void, const UGameplayAbility*>(this, "UAbilitySystemComponent.PrePredictionActivation(UGameplayAbility*)", Ability); }
	bool IsAnimatingAbility(UGameplayAbility* InAbility) { return NativeCall<bool, UGameplayAbility*>(this, "UAbilitySystemComponent.IsAnimatingAbility(UGameplayAbility*)", InAbility); }
	void ServerCurrentMontageSetNextSectionName(UAnimSequenceBase* ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName) { NativeCall<void, UAnimSequenceBase*, float, FName, FName>(this, "UAbilitySystemComponent.ServerCurrentMontageSetNextSectionName(UAnimSequenceBase*,float,FName,FName)", ClientAnimation, ClientPosition, SectionName, NextSectionName); }
	void NotifyAbilityCommit(UGameplayAbility* Ability) { NativeCall<void, UGameplayAbility*>(this, "UAbilitySystemComponent.NotifyAbilityCommit(UGameplayAbility*)", Ability); }
	void CurrentMontageSetPlayRate(float InPlayRate) { NativeCall<void, float>(this, "UAbilitySystemComponent.CurrentMontageSetPlayRate(float)", InPlayRate); }
	bool ServerCurrentMontageJumpToSectionName_Validate(UAnimSequenceBase* ClientAnimation, FName SectionName) { return NativeCall<bool, UAnimSequenceBase*, FName>(this, "UAbilitySystemComponent.ServerCurrentMontageJumpToSectionName_Validate(UAnimSequenceBase*,FName)", ClientAnimation, SectionName); }
	void ForceCancelAbilityDueToReplication(UGameplayAbility* Instance) { NativeCall<void, UGameplayAbility*>(this, "UAbilitySystemComponent.ForceCancelAbilityDueToReplication(UGameplayAbility*)", Instance); }
	void DecrementAbilityListLock() { NativeCall<void>(this, "UAbilitySystemComponent.DecrementAbilityListLock()"); }
	void AbilityLocalInputReleased(int InputID) { NativeCall<void, int>(this, "UAbilitySystemComponent.AbilityLocalInputReleased(int)", InputID); }
	static const FGameplayEffectAttributeCaptureDefinition& GetOutgoingDurationCapture() { return NativeCall<const FGameplayEffectAttributeCaptureDefinition&>(nullptr, "UAbilitySystemComponent.GetOutgoingDurationCapture()"); }
	void OnServerPrintDebug_Request() { NativeCall<void>(this, "UAbilitySystemComponent.OnServerPrintDebug_Request()"); }
	UAnimMontage* PlaySlotAnimationAsDynamicMontage_WithFractionalLoopsSimulated(UAnimSequenceBase* AnimAsset, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, float PlayCount) { return NativeCall<UAnimMontage*, UAnimSequenceBase*, FName, float, float, float, float>(this, "UAbilitySystemComponent.PlaySlotAnimationAsDynamicMontage_WithFractionalLoopsSimulated(UAnimSequenceBase*,FName,float,float,float,float)", AnimAsset, SlotName, BlendInTime, BlendOutTime, InPlayRate, PlayCount); }
	void ServerPrintDebug_RequestWithStrings_Implementation(const TArray<FString, TSizedDefaultAllocator<32> >& Strings) { NativeCall<void, const TArray<FString, TSizedDefaultAllocator<32> >&>(this, "UAbilitySystemComponent.ServerPrintDebug_RequestWithStrings_Implementation(TArray<FString,TSizedDefaultAllocator<32>>&)", Strings); }
	void InputConfirm() { NativeCall<void>(this, "UAbilitySystemComponent.InputConfirm()"); }
	void NotifyTagMap_StackCountChange(const FGameplayTagContainer& Container) { NativeCall<void, const FGameplayTagContainer&>(this, "UAbilitySystemComponent.NotifyTagMap_StackCountChange(FGameplayTagContainer&)", Container); }
	void AddSpawnedAttribute(UAttributeSet* Attribute) { NativeCall<void, UAttributeSet*>(this, "UAbilitySystemComponent.AddSpawnedAttribute(UAttributeSet*)", Attribute); }
	bool ShouldDoServerAbilityRPCBatch() { return NativeCall<bool>(this, "UAbilitySystemComponent.ShouldDoServerAbilityRPCBatch()"); }
	void InitializeComponent() { NativeCall<void>(this, "UAbilitySystemComponent.InitializeComponent()"); }
	bool IsReadyForReplicatedMontage() { return NativeCall<bool>(this, "UAbilitySystemComponent.IsReadyForReplicatedMontage()"); }
	void OnGiveAbility(FGameplayAbilitySpec& Spec) { NativeCall<void, FGameplayAbilitySpec&>(this, "UAbilitySystemComponent.OnGiveAbility(FGameplayAbilitySpec&)", Spec); }
	void OnPredictiveMontageRejected(UAnimMontage* PredictiveMontage) { NativeCall<void, UAnimMontage*>(this, "UAbilitySystemComponent.OnPredictiveMontageRejected(UAnimMontage*)", PredictiveMontage); }
	void FindAllAbilitySpecsFromInputID(int InputID, TArray<FGameplayAbilitySpec const*, TSizedDefaultAllocator<32> >& OutAbilitySpecs) { NativeCall<void, int, TArray<FGameplayAbilitySpec const*, TSizedDefaultAllocator<32> >&>(this, "UAbilitySystemComponent.FindAllAbilitySpecsFromInputID(int,TArray<FGameplayAbilitySpec*,TSizedDefaultAllocator<32>>&)", InputID, OutAbilitySpecs); }
	bool ShouldRecordMontageReplication() { return NativeCall<bool>(this, "UAbilitySystemComponent.ShouldRecordMontageReplication()"); }
	UAnimMontage* GetCurrentMontage() { return NativeCall<UAnimMontage*>(this, "UAbilitySystemComponent.GetCurrentMontage()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UAbilitySystemComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void PrintDebug() { NativeCall<void>(this, "UAbilitySystemComponent.PrintDebug()"); }
	float GetNumericAttribute(const FGameplayAttribute& Attribute) { return NativeCall<float, const FGameplayAttribute&>(this, "UAbilitySystemComponent.GetNumericAttribute(FGameplayAttribute&)", Attribute); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UAbilitySystemComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void InitDefaultGameplayCueParameters(FGameplayCueParameters& Parameters) { NativeCall<void, FGameplayCueParameters&>(this, "UAbilitySystemComponent.InitDefaultGameplayCueParameters(FGameplayCueParameters&)", Parameters); }
	void StopMontageIfCurrent(const UAnimMontage& Montage, float OverrideBlendOutTime) { NativeCall<void, const UAnimMontage&, float>(this, "UAbilitySystemComponent.StopMontageIfCurrent(UAnimMontage&,float)", Montage, OverrideBlendOutTime); }
	void UnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags) { NativeCall<void, const FGameplayTagContainer&>(this, "UAbilitySystemComponent.UnBlockAbilitiesWithTags(FGameplayTagContainer&)", Tags); }
	void ClearActorInfo() { NativeCall<void>(this, "UAbilitySystemComponent.ClearActorInfo()"); }
	float PlayMontageSimulated(UAnimMontage* NewAnimMontage, float InPlayRate, FName StartSectionName) { return NativeCall<float, UAnimMontage*, float, FName>(this, "UAbilitySystemComponent.PlayMontageSimulated(UAnimMontage*,float,FName)", NewAnimMontage, InPlayRate, StartSectionName); }
	void ClearAnimatingAbility(UGameplayAbility* Ability) { NativeCall<void, UGameplayAbility*>(this, "UAbilitySystemComponent.ClearAnimatingAbility(UGameplayAbility*)", Ability); }
	void AddReplicatedInstancedAbility(UGameplayAbility* GameplayAbility) { NativeCall<void, UGameplayAbility*>(this, "UAbilitySystemComponent.AddReplicatedInstancedAbility(UGameplayAbility*)", GameplayAbility); }
	void OnRemoveAbility(FGameplayAbilitySpec& Spec) { NativeCall<void, FGameplayAbilitySpec&>(this, "UAbilitySystemComponent.OnRemoveAbility(FGameplayAbilitySpec&)", Spec); }
	void BeginPlay() { NativeCall<void>(this, "UAbilitySystemComponent.BeginPlay()"); }
	bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) { return NativeCall<bool, UActorChannel*, FOutBunch*, FReplicationFlags*>(this, "UAbilitySystemComponent.ReplicateSubobjects(UActorChannel*,FOutBunch*,FReplicationFlags*)", Channel, Bunch, RepFlags); }
	void AbilityLocalInputPressed(int InputID) { NativeCall<void, int>(this, "UAbilitySystemComponent.AbilityLocalInputPressed(int)", InputID); }
	void SetAvatarActor_Direct(AActor* NewAvatarActor) { NativeCall<void, AActor*>(this, "UAbilitySystemComponent.SetAvatarActor_Direct(AActor*)", NewAvatarActor); }
	void OnClientPrintDebug_Response(const TArray<FString, TSizedDefaultAllocator<32> >& Strings, int GameFlags) { NativeCall<void, const TArray<FString, TSizedDefaultAllocator<32> >&, int>(this, "UAbilitySystemComponent.OnClientPrintDebug_Response(TArray<FString,TSizedDefaultAllocator<32>>&,int)", Strings, GameFlags); }
	void AnimMontage_UpdateReplicatedData(FGameplayAbilityRepAnimMontage& OutRepAnimMontageInfo) { NativeCall<void, FGameplayAbilityRepAnimMontage&>(this, "UAbilitySystemComponent.AnimMontage_UpdateReplicatedData(FGameplayAbilityRepAnimMontage&)", OutRepAnimMontageInfo); }
	bool TryActivateAbilitiesByTag(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation) { return NativeCall<bool, const FGameplayTagContainer&, bool>(this, "UAbilitySystemComponent.TryActivateAbilitiesByTag(FGameplayTagContainer&,bool)", GameplayTagContainer, bAllowRemoteActivation); }
	void GetActivatableGameplayAbilitySpecsByAllMatchingTags(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayAbilitySpec*, TSizedDefaultAllocator<32> >& MatchingGameplayAbilities, bool bOnlyAbilitiesThatSatisfyTagRequirements) { NativeCall<void, const FGameplayTagContainer&, TArray<FGameplayAbilitySpec*, TSizedDefaultAllocator<32> >&, bool>(this, "UAbilitySystemComponent.GetActivatableGameplayAbilitySpecsByAllMatchingTags(FGameplayTagContainer&,TArray<FGameplayAbilitySpec*,TSizedDefaultAllocator<32>>&,bool)", GameplayTagContainer, MatchingGameplayAbilities, bOnlyAbilitiesThatSatisfyTagRequirements); }
	void CurrentMontageJumpToSection(FName SectionName) { NativeCall<void, FName>(this, "UAbilitySystemComponent.CurrentMontageJumpToSection(FName)", SectionName); }
	void ClientPrintDebug_Response_Implementation(const TArray<FString, TSizedDefaultAllocator<32> >& Strings, int GameFlags) { NativeCall<void, const TArray<FString, TSizedDefaultAllocator<32> >&, int>(this, "UAbilitySystemComponent.ClientPrintDebug_Response_Implementation(TArray<FString,TSizedDefaultAllocator<32>>&,int)", Strings, GameFlags); }
	void SetUserAbilityActivationInhibited(bool NewInhibit) { NativeCall<void, bool>(this, "UAbilitySystemComponent.SetUserAbilityActivationInhibited(bool)", NewInhibit); }
	void PressInputID(int InputID) { NativeCall<void, int>(this, "UAbilitySystemComponent.PressInputID(int)", InputID); }
	void CheckForClearedAbilities() { NativeCall<void>(this, "UAbilitySystemComponent.CheckForClearedAbilities()"); }
	UAnimMontage* PlaySlotAnimationAsDynamicMontageSimulated(UAnimSequenceBase* AnimAsset, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate) { return NativeCall<UAnimMontage*, UAnimSequenceBase*, FName, float, float, float>(this, "UAbilitySystemComponent.PlaySlotAnimationAsDynamicMontageSimulated(UAnimSequenceBase*,FName,float,float,float)", AnimAsset, SlotName, BlendInTime, BlendOutTime, InPlayRate); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& GetBlockedAbilityBindings_Mutable() { return NativeCall<TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "UAbilitySystemComponent.GetBlockedAbilityBindings_Mutable()"); }
	void ServerPrintDebug_Request_Implementation() { NativeCall<void>(this, "UAbilitySystemComponent.ServerPrintDebug_Request_Implementation()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UAbilitySystemComponent.Serialize(FArchive&)", Ar); }
	const FGameplayAbilityRepAnimMontage& GetRepAnimMontageInfo() { return NativeCall<const FGameplayAbilityRepAnimMontage&>(this, "UAbilitySystemComponent.GetRepAnimMontageInfo()"); }
	FGameplayAbilityRepAnimMontage& GetRepAnimMontageInfo_Mutable() { return NativeCall<FGameplayAbilityRepAnimMontage&>(this, "UAbilitySystemComponent.GetRepAnimMontageInfo_Mutable()"); }
	void ServerCurrentMontageSetPlayRate(UAnimSequenceBase* ClientAnimation, float InPlayRate) { NativeCall<void, UAnimSequenceBase*, float>(this, "UAbilitySystemComponent.ServerCurrentMontageSetPlayRate(UAnimSequenceBase*,float)", ClientAnimation, InPlayRate); }
	void OnPlayerControllerSet() { NativeCall<void>(this, "UAbilitySystemComponent.OnPlayerControllerSet()"); }
	void BlockAbilitiesWithTags(const FGameplayTagContainer& Tags) { NativeCall<void, const FGameplayTagContainer&>(this, "UAbilitySystemComponent.BlockAbilitiesWithTags(FGameplayTagContainer&)", Tags); }
	bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) { return NativeCall<bool, const FGameplayTagContainer&>(this, "UAbilitySystemComponent.HasAllMatchingGameplayTags(FGameplayTagContainer&)", TagContainer); }
	void LocalInputCancel() { NativeCall<void>(this, "UAbilitySystemComponent.LocalInputCancel()"); }
	int RemoveActiveEffects(const FGameplayEffectQuery& Query, int StacksToRemove) { return NativeCall<int, const FGameplayEffectQuery&, int>(this, "UAbilitySystemComponent.RemoveActiveEffects(FGameplayEffectQuery&,int)", Query, StacksToRemove); }
	void RemoveReplicatedInstancedAbility(UGameplayAbility* GameplayAbility) { NativeCall<void, UGameplayAbility*>(this, "UAbilitySystemComponent.RemoveReplicatedInstancedAbility(UGameplayAbility*)", GameplayAbility); }
	void CurrentMontageStop(float OverrideBlendOutTime) { NativeCall<void, float>(this, "UAbilitySystemComponent.CurrentMontageStop(float)", OverrideBlendOutTime); }
	bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) { return NativeCall<bool, const FGameplayTagContainer&>(this, "UAbilitySystemComponent.HasAnyMatchingGameplayTags(FGameplayTagContainer&)", TagContainer); }
	void ForceReplication() { NativeCall<void>(this, "UAbilitySystemComponent.ForceReplication()"); }
	void ServerCurrentMontageSetNextSectionName_Implementation(UAnimSequenceBase* ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName) { NativeCall<void, UAnimSequenceBase*, float, FName, FName>(this, "UAbilitySystemComponent.ServerCurrentMontageSetNextSectionName_Implementation(UAnimSequenceBase*,float,FName,FName)", ClientAnimation, ClientPosition, SectionName, NextSectionName); }
	void LocalInputConfirm() { NativeCall<void>(this, "UAbilitySystemComponent.LocalInputConfirm()"); }
	void OnGameplayEffectDurationChange(FActiveGameplayEffect& ActiveEffect) { NativeCall<void, FActiveGameplayEffect&>(this, "UAbilitySystemComponent.OnGameplayEffectDurationChange(FActiveGameplayEffect&)", ActiveEffect); }
	void CaptureAttributeForGameplayEffect(FGameplayEffectAttributeCaptureSpec& OutCaptureSpec) { NativeCall<void, FGameplayEffectAttributeCaptureSpec&>(this, "UAbilitySystemComponent.CaptureAttributeForGameplayEffect(FGameplayEffectAttributeCaptureSpec&)", OutCaptureSpec); }
	bool GetShouldTick() { return NativeCall<bool>(this, "UAbilitySystemComponent.GetShouldTick()"); }
	void OnRep_ActivateAbilities() { NativeCall<void>(this, "UAbilitySystemComponent.OnRep_ActivateAbilities()"); }
	void CancelAbilities(const FGameplayTagContainer* WithTags, const FGameplayTagContainer* WithoutTags, UGameplayAbility* Ignore) { NativeCall<void, const FGameplayTagContainer*, const FGameplayTagContainer*, UGameplayAbility*>(this, "UAbilitySystemComponent.CancelAbilities(FGameplayTagContainer*,FGameplayTagContainer*,UGameplayAbility*)", WithTags, WithoutTags, Ignore); }
	void OnRep_ClientDebugString() { NativeCall<void>(this, "UAbilitySystemComponent.OnRep_ClientDebugString()"); }
	void GetReplicatedCustomConditionState(FCustomPropertyConditionState& OutActiveState) { NativeCall<void, FCustomPropertyConditionState&>(this, "UAbilitySystemComponent.GetReplicatedCustomConditionState(FCustomPropertyConditionState&)", OutActiveState); }
	void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) { NativeCall<void, FGameplayTagContainer&>(this, "UAbilitySystemComponent.GetOwnedGameplayTags(FGameplayTagContainer&)", TagContainer); }
	AActor* GetGameplayTaskAvatar(const UGameplayTask* Task) { return NativeCall<AActor*, const UGameplayTask*>(this, "UAbilitySystemComponent.GetGameplayTaskAvatar(UGameplayTask*)", Task); }
	void ServerCurrentMontageSetPlayRate_Implementation(UAnimSequenceBase* ClientAnimation, float InPlayRate) { NativeCall<void, UAnimSequenceBase*, float>(this, "UAbilitySystemComponent.ServerCurrentMontageSetPlayRate_Implementation(UAnimSequenceBase*,float)", ClientAnimation, InPlayRate); }
	void ReleaseInputID(int InputID) { NativeCall<void, int>(this, "UAbilitySystemComponent.ReleaseInputID(int)", InputID); }
	void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) { NativeCall<void, FGameplayAbilitySpec&>(this, "UAbilitySystemComponent.AbilitySpecInputPressed(FGameplayAbilitySpec&)", Spec); }
	bool ServerCurrentMontageSetNextSectionName_Validate(UAnimSequenceBase* ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName) { return NativeCall<bool, UAnimSequenceBase*, float, FName, FName>(this, "UAbilitySystemComponent.ServerCurrentMontageSetNextSectionName_Validate(UAnimSequenceBase*,float,FName,FName)", ClientAnimation, ClientPosition, SectionName, NextSectionName); }
	const TArray<unsigned char, TSizedDefaultAllocator<32> >& GetBlockedAbilityBindings() { return NativeCall<const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "UAbilitySystemComponent.GetBlockedAbilityBindings()"); }
	void ReadyForReplication() { NativeCall<void>(this, "UAbilitySystemComponent.ReadyForReplication()"); }
	void TargetConfirm() { NativeCall<void>(this, "UAbilitySystemComponent.TargetConfirm()"); }
	void ClearAllAbilities() { NativeCall<void>(this, "UAbilitySystemComponent.ClearAllAbilities()"); }
	void OnRep_ServerDebugString() { NativeCall<void>(this, "UAbilitySystemComponent.OnRep_ServerDebugString()"); }
	float GetNumericAttributeBase(const FGameplayAttribute& Attribute) { return NativeCall<float, const FGameplayAttribute&>(this, "UAbilitySystemComponent.GetNumericAttributeBase(FGameplayAttribute&)", Attribute); }
	void OnTagUpdated(const FGameplayTag& Tag, bool TagExists) { NativeCall<void, const FGameplayTag&, bool>(this, "UAbilitySystemComponent.OnTagUpdated(FGameplayTag&,bool)", Tag, TagExists); }
	bool GetUserAbilityActivationInhibited() { return NativeCall<bool>(this, "UAbilitySystemComponent.GetUserAbilityActivationInhibited()"); }
	void TargetCancel() { NativeCall<void>(this, "UAbilitySystemComponent.TargetCancel()"); }
	void ServerCurrentMontageJumpToSectionName_Implementation(UAnimSequenceBase* ClientAnimation, FName SectionName) { NativeCall<void, UAnimSequenceBase*, FName>(this, "UAbilitySystemComponent.ServerCurrentMontageJumpToSectionName_Implementation(UAnimSequenceBase*,FName)", ClientAnimation, SectionName); }
	void SetSpawnedAttributesListDirty() { NativeCall<void>(this, "UAbilitySystemComponent.SetSpawnedAttributesListDirty()"); }
	void CurrentMontageSetNextSectionName(FName FromSectionName, FName ToSectionName) { NativeCall<void, FName, FName>(this, "UAbilitySystemComponent.CurrentMontageSetNextSectionName(FName,FName)", FromSectionName, ToSectionName); }
	void ServerCurrentMontageJumpToSectionName(UAnimSequenceBase* ClientAnimation, FName SectionName) { NativeCall<void, UAnimSequenceBase*, FName>(this, "UAbilitySystemComponent.ServerCurrentMontageJumpToSectionName(UAnimSequenceBase*,FName)", ClientAnimation, SectionName); }
	void MarkAbilitySpecDirty(FGameplayAbilitySpec& Spec, bool WasAddOrRemove) { NativeCall<void, FGameplayAbilitySpec&, bool>(this, "UAbilitySystemComponent.MarkAbilitySpecDirty(FGameplayAbilitySpec&,bool)", Spec, WasAddOrRemove); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UAbilitySystemComponent._getUObject()"); }
	void HandleDeferredGameplayCues(const FActiveGameplayEffectsContainer* GameplayEffectsContainer) { NativeCall<void, const FActiveGameplayEffectsContainer*>(this, "UAbilitySystemComponent.HandleDeferredGameplayCues(FActiveGameplayEffectsContainer*)", GameplayEffectsContainer); }
	void BindToInputComponent(UInputComponent* InputComponent) { NativeCall<void, UInputComponent*>(this, "UAbilitySystemComponent.BindToInputComponent(UInputComponent*)", InputComponent); }
	void CancelAbilitySpec(FGameplayAbilitySpec& Spec, UGameplayAbility* Ignore) { NativeCall<void, FGameplayAbilitySpec&, UGameplayAbility*>(this, "UAbilitySystemComponent.CancelAbilitySpec(FGameplayAbilitySpec&,UGameplayAbility*)", Spec, Ignore); }
	void ClearAbility(const FGameplayAbilitySpecHandle& Handle) { NativeCall<void, const FGameplayAbilitySpecHandle&>(this, "UAbilitySystemComponent.ClearAbility(FGameplayAbilitySpecHandle&)", Handle); }
	int GetAggregatedStackCount(const FGameplayEffectQuery& Query) { return NativeCall<int, const FGameplayEffectQuery&>(this, "UAbilitySystemComponent.GetAggregatedStackCount(FGameplayEffectQuery&)", Query); }
	void ServerAbilityRPCBatch_Internal(FServerAbilityRPCBatch& BatchInfo) { NativeCall<void, FServerAbilityRPCBatch&>(this, "UAbilitySystemComponent.ServerAbilityRPCBatch_Internal(FServerAbilityRPCBatch&)", BatchInfo); }
	void OnRep_OwningActor() { NativeCall<void>(this, "UAbilitySystemComponent.OnRep_OwningActor()"); }
	void RecomputeGameplayEffectStartTimes(float WorldTime, float ServerWorldTime) { NativeCall<void, float, float>(this, "UAbilitySystemComponent.RecomputeGameplayEffectStartTimes(float,float)", WorldTime, ServerWorldTime); }
	bool ServerCurrentMontageSetPlayRate_Validate(UAnimSequenceBase* ClientAnimation, float InPlayRate) { return NativeCall<bool, UAnimSequenceBase*, float>(this, "UAbilitySystemComponent.ServerCurrentMontageSetPlayRate_Validate(UAnimSequenceBase*,float)", ClientAnimation, InPlayRate); }
	void OnRep_SpawnedAttributes(const TArray<UAttributeSet*, TSizedDefaultAllocator<32> >& PreviousSpawnedAttributes) { NativeCall<void, const TArray<UAttributeSet*, TSizedDefaultAllocator<32> >&>(this, "UAbilitySystemComponent.OnRep_SpawnedAttributes(TArray<UAttributeSet*,TSizedDefaultAllocator<32>>&)", PreviousSpawnedAttributes); }
	void OnSpawnedAttributesEndPlayed(AActor* InActor, EEndPlayReason::Type EndPlayReason) { NativeCall<void, AActor*, EEndPlayReason::Type>(this, "UAbilitySystemComponent.OnSpawnedAttributesEndPlayed(AActor*,EEndPlayReason::Type)", InActor, EndPlayReason); }
	void SetRepAnimMontageInfo(const FGameplayAbilityRepAnimMontage& NewRepAnimMontageInfo) { NativeCall<void, const FGameplayAbilityRepAnimMontage&>(this, "UAbilitySystemComponent.SetRepAnimMontageInfo(FGameplayAbilityRepAnimMontage&)", NewRepAnimMontageInfo); }
	void OnRep_ReplicatedAnimMontage() { NativeCall<void>(this, "UAbilitySystemComponent.OnRep_ReplicatedAnimMontage()"); }
	bool HasNetworkAuthorityToActivateTriggeredAbility(const FGameplayAbilitySpec& Spec) { return NativeCall<bool, const FGameplayAbilitySpec&>(this, "UAbilitySystemComponent.HasNetworkAuthorityToActivateTriggeredAbility(FGameplayAbilitySpec&)", Spec); }
	void SetNumericAttributeBase(const FGameplayAttribute& Attribute, float NewFloatValue) { NativeCall<void, const FGameplayAttribute&, float>(this, "UAbilitySystemComponent.SetNumericAttributeBase(FGameplayAttribute&,float)", Attribute, NewFloatValue); }
	bool ServerPrintDebug_Request_Validate() { return NativeCall<bool>(this, "UAbilitySystemComponent.ServerPrintDebug_Request_Validate()"); }
	const TArray<UAttributeSet*, TSizedDefaultAllocator<32> >& GetSpawnedAttributes() { return NativeCall<const TArray<UAttributeSet*, TSizedDefaultAllocator<32> >&>(this, "UAbilitySystemComponent.GetSpawnedAttributes()"); }
	void PreNetReceive() { NativeCall<void>(this, "UAbilitySystemComponent.PreNetReceive()"); }
	UGameplayAbility* CreateNewInstanceOfAbility(FGameplayAbilitySpec& Spec, const UGameplayAbility* Ability) { return NativeCall<UGameplayAbility*, FGameplayAbilitySpec&, const UGameplayAbility*>(this, "UAbilitySystemComponent.CreateNewInstanceOfAbility(FGameplayAbilitySpec&,UGameplayAbility*)", Spec, Ability); }
	bool AreAbilityTagsBlocked(const FGameplayTagContainer& Tags) { return NativeCall<bool, const FGameplayTagContainer&>(this, "UAbilitySystemComponent.AreAbilityTagsBlocked(FGameplayTagContainer&)", Tags); }
};
