#pragma once
#include "BulkForward.h"
#include "APrimalBuff.h"

struct APrimalBuff_DragonHorn : public APrimalBuff
{
public:
	APrimalBuff_DragonHorn() = delete;
	~APrimalBuff_DragonHorn() = delete;
	APrimalBuff_DragonHorn(const APrimalBuff_DragonHorn&) = delete;
	APrimalBuff_DragonHorn& operator=(const APrimalBuff_DragonHorn&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_DragonHorn"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_DragonHorn"); }

	UE::Math::TVector2<double>& BuffStatusBarSizeField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff_DragonHorn.BuffStatusBarSize"); }
	UE::Math::TVector2<double>& BuffStatusBarOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "APrimalBuff_DragonHorn.BuffStatusBarOffset"); }
	FLinearColor& BuffStatusBorderColorField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalBuff_DragonHorn.BuffStatusBorderColor"); }
	float& BuffStatusBorderThicknessField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffStatusBorderThickness"); }
	FLinearColor& BuffStatusHealthColorHighField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalBuff_DragonHorn.BuffStatusHealthColorHigh"); }
	FLinearColor& BuffStatusHealthColorLowField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalBuff_DragonHorn.BuffStatusHealthColorLow"); }
	FString& BuffStatusStoredTextField() { return *GetNativePointerField<FString*>(this, "APrimalBuff_DragonHorn.BuffStatusStoredText"); }
	FLinearColor& BuffStatusStoredTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalBuff_DragonHorn.BuffStatusStoredTextColor"); }
	float& BuffStatusStoredTextScaleField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.BuffStatusStoredTextScale"); }
	FString& BuffStatusFarTextField() { return *GetNativePointerField<FString*>(this, "APrimalBuff_DragonHorn.BuffStatusFarText"); }
	FLinearColor& BuffStatusFarTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalBuff_DragonHorn.BuffStatusFarTextColor"); }
	FLinearColor& BuffStatusStoredBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalBuff_DragonHorn.BuffStatusStoredBackgroundColor"); }
	UFont*& BuffStatusFontField() { return *GetNativePointerField<UFont**>(this, "APrimalBuff_DragonHorn.BuffStatusFont"); }
	float& OperationCooldownSecondsField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.OperationCooldownSeconds"); }
	float& LinkDragonCooldownSecondsField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.LinkDragonCooldownSeconds"); }
	float& FlyAwayCooldownSecondsField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.FlyAwayCooldownSeconds"); }
	float& ComeHereCooldownSecondsField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.ComeHereCooldownSeconds"); }
	float& GetMeCooldownSecondsField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.GetMeCooldownSeconds"); }
	FName& LinkUnlockSkillNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.LinkUnlockSkillName"); }
	FName& GetMeUnlockSkillNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.GetMeUnlockSkillName"); }
	FName& FlyAwayComeHereUnlockSkillNameField() { return *GetNativePointerField<FName*>(this, "APrimalBuff_DragonHorn.FlyAwayComeHereUnlockSkillName"); }
	FSkillModifierRef& GetMeDistanceModifierField() { return *GetNativePointerField<FSkillModifierRef*>(this, "APrimalBuff_DragonHorn.GetMeDistanceModifier"); }
	FSkillModifierRef& GetMeCooldownModifierField() { return *GetNativePointerField<FSkillModifierRef*>(this, "APrimalBuff_DragonHorn.GetMeCooldownModifier"); }
	FSkillModifierRef& FlyAwayComeHereCooldownModifierField() { return *GetNativePointerField<FSkillModifierRef*>(this, "APrimalBuff_DragonHorn.FlyAwayComeHereCooldownModifier"); }
	float& SpawnHeightOffsetField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SpawnHeightOffset"); }
	float& SpawnForwardOffsetField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SpawnForwardOffset"); }
	float& SkyDashStartHeightField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashStartHeight"); }
	float& SkyDashMaxDirectDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashMaxDirectDistance"); }
	float& GetMeMaxDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.GetMeMaxDistance"); }
	float& SkyDashSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashSpeed"); }
	float& SkyDashExitSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashExitSpeed"); }
	float& SkyDashGetMeExitSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashGetMeExitSpeed"); }
	float& SkyDashGetMeTargetHeightOffsetField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashGetMeTargetHeightOffset"); }
	float& SkyDashMountRadiusField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashMountRadius"); }
	float& SkyDashMonitorIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashMonitorInterval"); }
	float& SkyDashTimeoutSecondsField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashTimeoutSeconds"); }
	float& SkyDashSpawnReplicationDelayField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashSpawnReplicationDelay"); }
	float& SkyDashRetargetIntervalField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashRetargetInterval"); }
	float& SkyDashRetargetDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.SkyDashRetargetDistance"); }
	float& FlyAwayDashHorizontalDistanceField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.FlyAwayDashHorizontalDistance"); }
	float& FlyAwaySkyDashSpeedField() { return *GetNativePointerField<float*>(this, "APrimalBuff_DragonHorn.FlyAwaySkyDashSpeed"); }
	UTexture2D*& FlyAwayIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalBuff_DragonHorn.FlyAwayIcon"); }
	UTexture2D*& ComeHereIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalBuff_DragonHorn.ComeHereIcon"); }
	UTexture2D*& GetMeIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalBuff_DragonHorn.GetMeIcon"); }
	UTexture2D*& UnlinkIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalBuff_DragonHorn.UnlinkIcon"); }
	UTexture2D*& QuickActionIconField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalBuff_DragonHorn.QuickActionIcon"); }
	unsigned int& ReplicatedDinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalBuff_DragonHorn.ReplicatedDinoID1"); }
	unsigned int& ReplicatedDinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "APrimalBuff_DragonHorn.ReplicatedDinoID2"); }
	FString& ReplicatedDinoNameField() { return *GetNativePointerField<FString*>(this, "APrimalBuff_DragonHorn.ReplicatedDinoName"); }
	double& ReplicatedNextLinkDragonTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ReplicatedNextLinkDragonTime"); }
	double& ReplicatedNextFlyAwayTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ReplicatedNextFlyAwayTime"); }
	double& ReplicatedNextComeHereTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ReplicatedNextComeHereTime"); }
	double& ReplicatedNextGetMeTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.ReplicatedNextGetMeTime"); }
	int& ReplicatedQuickActionUseIndexField() { return *GetNativePointerField<int*>(this, "APrimalBuff_DragonHorn.ReplicatedQuickActionUseIndex"); }
	TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>& LinkedLiveDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.LinkedLiveDino"); }
	double& LastOperationTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastOperationTime"); }
	TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>& PendingSkyDashDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.PendingSkyDashDino"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& PendingSkyDashRiderField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.PendingSkyDashRider"); }
	TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>& PendingSkyDashControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.PendingSkyDashController"); }
	UE::Math::TVector<double>& PendingSkyDashTargetLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalBuff_DragonHorn.PendingSkyDashTargetLocation"); }
	FTimerHandle& SkyDashMonitorTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_DragonHorn.SkyDashMonitorTimerHandle"); }
	FTimerHandle& SkyDashStartDelayTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_DragonHorn.SkyDashStartDelayTimerHandle"); }
	double& SkyDashStartedTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.SkyDashStartedTime"); }
	double& SkyDashExpireTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.SkyDashExpireTime"); }
	double& LastSkyDashRetargetTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.LastSkyDashRetargetTime"); }
	TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>& PendingFlyAwayDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.PendingFlyAwayDino"); }
	TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>& PendingFlyAwayControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.PendingFlyAwayController"); }
	FTimerHandle& FlyAwayMonitorTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_DragonHorn.FlyAwayMonitorTimerHandle"); }
	double& FlyAwayExpireTimeField() { return *GetNativePointerField<double*>(this, "APrimalBuff_DragonHorn.FlyAwayExpireTime"); }
	TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>& PendingTeleportDinoField() { return *GetNativePointerField<TWeakObjectPtr<APrimalDinoCharacter, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.PendingTeleportDino"); }
	TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>& PendingTeleportControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.PendingTeleportController"); }
	TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>& PendingTeleportRiderField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter, FWeakObjectPtr>*>(this, "APrimalBuff_DragonHorn.PendingTeleportRider"); }
	FTimerHandle& TeleportMontageTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_DragonHorn.TeleportMontageTimerHandle"); }
	BitFieldValue<bool, unsigned char> bRespectCryoRestrictionsForFlyAway() { return { this, "APrimalBuff_DragonHorn.bRespectCryoRestrictionsForFlyAway"}; }
	BitFieldValue<bool, unsigned char> bSkipFlyAwayCargoConfirm() { return { this, "APrimalBuff_DragonHorn.bSkipFlyAwayCargoConfirm"}; }
	BitFieldValue<bool, unsigned char> bReplicatedHasStoredDinoData() { return { this, "APrimalBuff_DragonHorn.bReplicatedHasStoredDinoData"}; }
	BitFieldValue<bool, unsigned char> bSkyDashInProgress() { return { this, "APrimalBuff_DragonHorn.bSkyDashInProgress"}; }
	BitFieldValue<bool, unsigned char> bSkyDashShouldMountOnArrival() { return { this, "APrimalBuff_DragonHorn.bSkyDashShouldMountOnArrival"}; }
	BitFieldValue<bool, unsigned char> bPendingSkyDashIsStoredRecall() { return { this, "APrimalBuff_DragonHorn.bPendingSkyDashIsStoredRecall"}; }
	BitFieldValue<bool, unsigned char> bFlyAwayInProgress() { return { this, "APrimalBuff_DragonHorn.bFlyAwayInProgress"}; }
	BitFieldValue<bool, unsigned char> bGetMeTeleportMontageInProgress() { return { this, "APrimalBuff_DragonHorn.bGetMeTeleportMontageInProgress"}; }
	static void SetbReplicatedHasStoredDinoData_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetbReplicatedHasStoredDinoData_WrapperImpl(void*,void*)", Object, InValue); }
	void UpdateBuffPersistentData_Implementation(bool bFromInstigatorDeath, bool bInstigatorDisconnected) { NativeCall<void, bool, bool>(this, "APrimalBuff_DragonHorn.UpdateBuffPersistentData_Implementation(bool,bool)", bFromInstigatorDeath, bInstigatorDisconnected); }
	static void GetbReplicatedHasStoredDinoData_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetbReplicatedHasStoredDinoData_WrapperImpl(void*,void*)", Object, OutValue); }
	UPrimalItem_DragonHorn* GetDesiredHornItem(UPrimalInventoryComponent* Inventory) { return NativeCall<UPrimalItem_DragonHorn*, UPrimalInventoryComponent*>(this, "APrimalBuff_DragonHorn.GetDesiredHornItem(UPrimalInventoryComponent*)", Inventory); }
	bool EnsureHornItem() { return NativeCall<bool>(this, "APrimalBuff_DragonHorn.EnsureHornItem()"); }
	AShooterCharacter* GetShooterInstigator() { return NativeCall<AShooterCharacter*>(this, "APrimalBuff_DragonHorn.GetShooterInstigator()"); }
	static void SetReplicatedDinoID2_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedDinoID2_WrapperImpl(void*,void*)", Object, InValue); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_DragonHorn.SetupForInstigator()"); }
	const UPrimalBuffPersistentData_DragonHorn* GetDragonHornData() { return NativeCall<const UPrimalBuffPersistentData_DragonHorn*>(this, "APrimalBuff_DragonHorn.GetDragonHornData()"); }
	bool EnforceCaptureStoredDragon(AShooterPlayerController* ForPC, bool bSaveProfile) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "APrimalBuff_DragonHorn.EnforceCaptureStoredDragon(AShooterPlayerController*,bool)", ForPC, bSaveProfile); }
	bool StartFlyAway(AShooterPlayerController* ForPC, bool bSkipCargoConfirm) { return NativeCall<bool, AShooterPlayerController*, bool>(this, "APrimalBuff_DragonHorn.StartFlyAway(AShooterPlayerController*,bool)", ForPC, bSkipCargoConfirm); }
	bool DropCargoBeforeStoringDino(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBuff_DragonHorn.DropCargoBeforeStoringDino(APrimalDinoCharacter*)", Dino); }
	void SetReplicatedQuickActionUseIndex(const int& InValue) { NativeCall<void, const int&>(this, "APrimalBuff_DragonHorn.SetReplicatedQuickActionUseIndex(int&)", InValue); }
	void SetReplicatedNextComeHereTime(const double& InValue) { NativeCall<void, const double&>(this, "APrimalBuff_DragonHorn.SetReplicatedNextComeHereTime(double&)", InValue); }
	void ServerUseQuickAction() { NativeCall<void>(this, "APrimalBuff_DragonHorn.ServerUseQuickAction()"); }
	void CommitRecalledDragonLive(APrimalDinoCharacter* Dino) { NativeCall<void, APrimalDinoCharacter*>(this, "APrimalBuff_DragonHorn.CommitRecalledDragonLive(APrimalDinoCharacter*)", Dino); }
	static void GetReplicatedDinoID2_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedDinoID2_WrapperImpl(void*,void*)", Object, OutValue); }
	FString* FormatCooldownRemaining(FString* result, double RemainingSeconds) { return NativeCall<FString*, FString*, double>(this, "APrimalBuff_DragonHorn.FormatCooldownRemaining(double)", result, RemainingSeconds); }
	bool TryMountPendingSkyDashRider() { return NativeCall<bool>(this, "APrimalBuff_DragonHorn.TryMountPendingSkyDashRider()"); }
	void SetReplicatedDinoName(const FString& InValue) { NativeCall<void, const FString&>(this, "APrimalBuff_DragonHorn.SetReplicatedDinoName(FString&)", InValue); }
	void SetQuickActionUseIndex(AShooterPlayerController* ForPC, int ActionUseIndex) { NativeCall<void, AShooterPlayerController*, int>(this, "APrimalBuff_DragonHorn.SetQuickActionUseIndex(AShooterPlayerController*,int)", ForPC, ActionUseIndex); }
	bool StartDragonSkyDash(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC, AShooterCharacter* PlayerCharacter, const UE::Math::TVector<double>& TargetLocation, bool bMountOnArrival) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*, AShooterCharacter*, const UE::Math::TVector<double>&, bool>(this, "APrimalBuff_DragonHorn.StartDragonSkyDash(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,bool)", Dino, ForPC, PlayerCharacter, TargetLocation, bMountOnArrival); }
	bool CanStartOperation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.CanStartOperation(AShooterPlayerController*)", ForPC); }
	static void SetReplicatedNextGetMeTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedNextGetMeTime_WrapperImpl(void*,void*)", Object, InValue); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalBuff_DragonHorn.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	static void GetReplicatedNextLinkDragonTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedNextLinkDragonTime_WrapperImpl(void*,void*)", Object, OutValue); }
	void ServerFlyAwayCargoConfirmResult(bool bAccept) { NativeCall<void, bool>(this, "APrimalBuff_DragonHorn.ServerFlyAwayCargoConfirmResult(bool)", bAccept); }
	bool GetLinkCooldownDisabledReason(FString& OutReason) { return NativeCall<bool, FString&>(this, "APrimalBuff_DragonHorn.GetLinkCooldownDisabledReason(FString&)", OutReason); }
	void FinishFlyAwayAndStore() { NativeCall<void>(this, "APrimalBuff_DragonHorn.FinishFlyAwayAndStore()"); }
	AShooterPlayerController* GetShooterController() { return NativeCall<AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.GetShooterController()"); }
	bool BindLinkedDinoDeathDelegate(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBuff_DragonHorn.BindLinkedDinoDeathDelegate(APrimalDinoCharacter*)", Dino); }
	void OnFlyAwayCargoConfirmClosed(bool bAccept) { NativeCall<void, bool>(this, "APrimalBuff_DragonHorn.OnFlyAwayCargoConfirmClosed(bool)", bAccept); }
	void BindLinkedDinoAfterSetup() { NativeCall<void>(this, "APrimalBuff_DragonHorn.BindLinkedDinoAfterSetup()"); }
	void OnGetMeTeleportMontageFinished() { NativeCall<void>(this, "APrimalBuff_DragonHorn.OnGetMeTeleportMontageFinished()"); }
	void ClearGetMeTeleportMontage() { NativeCall<void>(this, "APrimalBuff_DragonHorn.ClearGetMeTeleportMontage()"); }
	bool QueueDragonSkyDash(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC, AShooterCharacter* PlayerCharacter, const UE::Math::TVector<double>& TargetLocation, bool bMountOnArrival, float StartDelaySeconds, bool bStartedFromStored) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*, AShooterCharacter*, const UE::Math::TVector<double>&, bool, float, bool>(this, "APrimalBuff_DragonHorn.QueueDragonSkyDash(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,bool,float,bool)", Dino, ForPC, PlayerCharacter, TargetLocation, bMountOnArrival, StartDelaySeconds, bStartedFromStored); }
	static void SetReplicatedNextLinkDragonTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedNextLinkDragonTime_WrapperImpl(void*,void*)", Object, InValue); }
	bool ClearDragonHornLink(AShooterPlayerController* ForPC, const FString& NotificationMessage, const FLinearColor& NotificationColor) { return NativeCall<bool, AShooterPlayerController*, const FString&, const FLinearColor&>(this, "APrimalBuff_DragonHorn.ClearDragonHornLink(AShooterPlayerController*,FString&,FLinearColor&)", ForPC, NotificationMessage, NotificationColor); }
	static void SetReplicatedNextFlyAwayTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedNextFlyAwayTime_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetReplicatedDinoID1_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedDinoID1_WrapperImpl(void*,void*)", Object, OutValue); }
	void ForceDinoFlying(APrimalDinoCharacter* Dino, bool bKeepFlight) { NativeCall<void, APrimalDinoCharacter*, bool>(this, "APrimalBuff_DragonHorn.ForceDinoFlying(APrimalDinoCharacter*,bool)", Dino, bKeepFlight); }
	static void SetReplicatedDinoID1_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedDinoID1_WrapperImpl(void*,void*)", Object, InValue); }
	void SetReplicatedNextFlyAwayTime(const double& InValue) { NativeCall<void, const double&>(this, "APrimalBuff_DragonHorn.SetReplicatedNextFlyAwayTime(double&)", InValue); }
	bool PrepareLiveDragonForSkyDash(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC, AShooterCharacter* PlayerCharacter, const UE::Math::TVector<double>& TargetLocation, bool& bOutNeedsTeleport, FString& OutReason) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*, AShooterCharacter*, const UE::Math::TVector<double>&, bool&, FString&>(this, "APrimalBuff_DragonHorn.PrepareLiveDragonForSkyDash(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,bool&,FString&)", Dino, ForPC, PlayerCharacter, TargetLocation, bOutNeedsTeleport, OutReason); }
	bool TeleportDinoToSkyDashStart(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC, AShooterCharacter* PlayerCharacter, const UE::Math::TVector<double>& TargetLocation, FString& OutReason) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*, AShooterCharacter*, const UE::Math::TVector<double>&, FString&>(this, "APrimalBuff_DragonHorn.TeleportDinoToSkyDashStart(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,FString&)", Dino, ForPC, PlayerCharacter, TargetLocation, OutReason); }
	static bool ValidateLinkCandidate(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC, FString& OutReason, bool bForNewLink) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*, FString&, bool>(nullptr, "APrimalBuff_DragonHorn.ValidateLinkCandidate(APrimalDinoCharacter*,AShooterPlayerController*,FString&,bool)", Dino, ForPC, OutReason, bForNewLink); }
	void ClientShowFlyAwayCargoConfirm_Implementation() { NativeCall<void>(this, "APrimalBuff_DragonHorn.ClientShowFlyAwayCargoConfirm_Implementation()"); }
	void ServerFlyAwayCargoConfirmResult_Implementation(bool bAccept) { NativeCall<void, bool>(this, "APrimalBuff_DragonHorn.ServerFlyAwayCargoConfirmResult_Implementation(bool)", bAccept); }
	float GetSkillAdjustedGetMeMaxDistance() { return NativeCall<float>(this, "APrimalBuff_DragonHorn.GetSkillAdjustedGetMeMaxDistance()"); }
	void DrawDragonHornBuffStatusHUD(AShooterHUD* HUD, float XPos, float YPos, float ScaleMult) { NativeCall<void, AShooterHUD*, float, float, float>(this, "APrimalBuff_DragonHorn.DrawDragonHornBuffStatusHUD(AShooterHUD*,float,float,float)", HUD, XPos, YPos, ScaleMult); }
	static APrimalBuff_DragonHorn* FindForCharacter(AShooterCharacter* Character) { return NativeCall<APrimalBuff_DragonHorn*, AShooterCharacter*>(nullptr, "APrimalBuff_DragonHorn.FindForCharacter(AShooterCharacter*)", Character); }
	FString* GetQuickActionDisplayName(FString* result, int ActionUseIndex) { return NativeCall<FString*, FString*, int>(this, "APrimalBuff_DragonHorn.GetQuickActionDisplayName(int)", result, ActionUseIndex); }
	bool ValidatePlayerOwner(AShooterPlayerController* ForPC, FString& OutReason) { return NativeCall<bool, AShooterPlayerController*, FString&>(this, "APrimalBuff_DragonHorn.ValidatePlayerOwner(AShooterPlayerController*,FString&)", ForPC, OutReason); }
	bool ApplySkillCooldown(UPrimalBuffPersistentData_DragonHorn* HornData, int UseIndex) { return NativeCall<bool, UPrimalBuffPersistentData_DragonHorn*, int>(this, "APrimalBuff_DragonHorn.ApplySkillCooldown(UPrimalBuffPersistentData_DragonHorn*,int)", HornData, UseIndex); }
	static void GetReplicatedLinkState_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedLinkState_WrapperImpl(void*,void*)", Object, OutValue); }
	bool GetCooldownDisabledReason(int UseIndex, FString& OutReason) { return NativeCall<bool, int, FString&>(this, "APrimalBuff_DragonHorn.GetCooldownDisabledReason(int,FString&)", UseIndex, OutReason); }
	bool OpenHornRadial(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.OpenHornRadial(AShooterPlayerController*)", ForPC); }
	static void SetReplicatedLinkState_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedLinkState_WrapperImpl(void*,void*)", Object, InValue); }
	void OnLinkedDinoDied(APrimalCharacter* DiedCharacter) { NativeCall<void, APrimalCharacter*>(this, "APrimalBuff_DragonHorn.OnLinkedDinoDied(APrimalCharacter*)", DiedCharacter); }
	static void GetReplicatedNextGetMeTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedNextGetMeTime_WrapperImpl(void*,void*)", Object, OutValue); }
	static bool IsPersonallyBondedToDino(APrimalDinoCharacter* Dino, AShooterCharacter* PlayerCharacter) { return NativeCall<bool, APrimalDinoCharacter*, AShooterCharacter*>(nullptr, "APrimalBuff_DragonHorn.IsPersonallyBondedToDino(APrimalDinoCharacter*,AShooterCharacter*)", Dino, PlayerCharacter); }
	static bool IsLinkSkillUnlockedForDino(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*>(nullptr, "APrimalBuff_DragonHorn.IsLinkSkillUnlockedForDino(APrimalDinoCharacter*,AShooterPlayerController*)", Dino, ForPC); }
	void RefreshAfterInstigatorSetup() { NativeCall<void>(this, "APrimalBuff_DragonHorn.RefreshAfterInstigatorSetup()"); }
	FString* GetCooldownSkillName(FString* result, int UseIndex) { return NativeCall<FString*, FString*, int>(this, "APrimalBuff_DragonHorn.GetCooldownSkillName(int)", result, UseIndex); }
	bool ExecuteGetMeTeleportAndDash(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC, AShooterCharacter* PlayerCharacter, const UE::Math::TVector<double>& TargetLocation) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*, AShooterCharacter*, const UE::Math::TVector<double>&>(this, "APrimalBuff_DragonHorn.ExecuteGetMeTeleportAndDash(APrimalDinoCharacter*,AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&)", Dino, ForPC, PlayerCharacter, TargetLocation); }
	APrimalDinoCharacter* SpawnStoredDragonFromHorn(AShooterPlayerController* ForPC, const UE::Math::TVector<double>& SpawnLocation, const UE::Math::TRotator<double>& SpawnRotation) { return NativeCall<APrimalDinoCharacter*, AShooterPlayerController*, const UE::Math::TVector<double>&, const UE::Math::TRotator<double>&>(this, "APrimalBuff_DragonHorn.SpawnStoredDragonFromHorn(AShooterPlayerController*,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", ForPC, SpawnLocation, SpawnRotation); }
	void PushReplicatedStateFromPersistentData() { NativeCall<void>(this, "APrimalBuff_DragonHorn.PushReplicatedStateFromPersistentData()"); }
	void SetReplicatedNextLinkDragonTime(const double& InValue) { NativeCall<void, const double&>(this, "APrimalBuff_DragonHorn.SetReplicatedNextLinkDragonTime(double&)", InValue); }
	bool GetFlyAwayTarget(APrimalDinoCharacter* Dino, AShooterCharacter* PlayerCharacter, UE::Math::TVector<double>& OutTargetLocation, FString& OutReason) { return NativeCall<bool, APrimalDinoCharacter*, AShooterCharacter*, UE::Math::TVector<double>&, FString&>(this, "APrimalBuff_DragonHorn.GetFlyAwayTarget(APrimalDinoCharacter*,AShooterCharacter*,UE::Math::TVector<double>&,FString&)", Dino, PlayerCharacter, OutTargetLocation, OutReason); }
	UPrimalBuffPersistentData_DragonHorn* GetDragonHornData(bool bCreateIfMissing) { return NativeCall<UPrimalBuffPersistentData_DragonHorn*, bool>(this, "APrimalBuff_DragonHorn.GetDragonHornData(bool)", bCreateIfMissing); }
	void StartQueuedSkyDash() { NativeCall<void>(this, "APrimalBuff_DragonHorn.StartQueuedSkyDash()"); }
	bool CanUseSkillAfterCooldown(AShooterPlayerController* ForPC, int UseIndex) { return NativeCall<bool, AShooterPlayerController*, int>(this, "APrimalBuff_DragonHorn.CanUseSkillAfterCooldown(AShooterPlayerController*,int)", ForPC, UseIndex); }
	bool HideBuffFromHUD_Implementation() { return NativeCall<bool>(this, "APrimalBuff_DragonHorn.HideBuffFromHUD_Implementation()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalBuff_DragonHorn.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool StartStoredDragonSkyDash(AShooterPlayerController* ForPC, AShooterCharacter* PlayerCharacter, const UE::Math::TVector<double>& TargetLocation, bool bMountOnArrival) { return NativeCall<bool, AShooterPlayerController*, AShooterCharacter*, const UE::Math::TVector<double>&, bool>(this, "APrimalBuff_DragonHorn.StartStoredDragonSkyDash(AShooterPlayerController*,AShooterCharacter*,UE::Math::TVector<double>&,bool)", ForPC, PlayerCharacter, TargetLocation, bMountOnArrival); }
	static void SetReplicatedQuickActionUseIndex_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedQuickActionUseIndex_WrapperImpl(void*,void*)", Object, InValue); }
	static void GetReplicatedQuickActionUseIndex_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedQuickActionUseIndex_WrapperImpl(void*,void*)", Object, OutValue); }
	APrimalDinoCharacter* BP_LoadDino(const FCustomItemData& SavedData, UE::Math::TVector<double>* SpawnLocation, UE::Math::TRotator<double>* SpawnRotation, AShooterPlayerController* ForPC) { if (!SpawnLocation) throw std::invalid_argument("Null native value parameter"); if (!SpawnRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<APrimalDinoCharacter *, const FCustomItemData &, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, AShooterPlayerController *>(this, "APrimalBuff_DragonHorn.BP_LoadDino(FCustomItemData&,UE::Math::TVector<double>,UE::Math::TRotator<double>,AShooterPlayerController*)", SavedData, *SpawnLocation, *SpawnRotation, ForPC); }
	void MarkOperationAttempt() { NativeCall<void>(this, "APrimalBuff_DragonHorn.MarkOperationAttempt()"); }
	UPrimalItem_DragonHorn* EnsureHornItemPresence(bool bShouldHaveHornItem) { return NativeCall<UPrimalItem_DragonHorn*, bool>(this, "APrimalBuff_DragonHorn.EnsureHornItemPresence(bool)", bShouldHaveHornItem); }
	bool BindToDino(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.BindToDino(APrimalDinoCharacter*,AShooterPlayerController*)", Dino, ForPC); }
	void ClearSkyDashMonitor() { NativeCall<void>(this, "APrimalBuff_DragonHorn.ClearSkyDashMonitor()"); }
	UPrimalPlayerData* GetInstigatorPlayerData() { return NativeCall<UPrimalPlayerData*>(this, "APrimalBuff_DragonHorn.GetInstigatorPlayerData()"); }
	void SetReplicatedNextGetMeTime(const double& InValue) { NativeCall<void, const double&>(this, "APrimalBuff_DragonHorn.SetReplicatedNextGetMeTime(double&)", InValue); }
	bool StartFaceTargetDash(APrimalDinoCharacter* Dino, const UE::Math::TVector<double>& TargetLocation, float DashSpeed, float ExitSpeed, bool bKeepFlight, UDracoFlightMovementComponent*& OutFlightComponent) { return NativeCall<bool, APrimalDinoCharacter*, const UE::Math::TVector<double>&, float, float, bool, UDracoFlightMovementComponent*&>(this, "APrimalBuff_DragonHorn.StartFaceTargetDash(APrimalDinoCharacter*,UE::Math::TVector<double>&,float,float,bool,UDracoFlightMovementComponent*&)", Dino, TargetLocation, DashSpeed, ExitSpeed, bKeepFlight, OutFlightComponent); }
	bool ShouldHaveHornItem() { return NativeCall<bool>(this, "APrimalBuff_DragonHorn.ShouldHaveHornItem()"); }
	void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalBuff_DragonHorn.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void SaveOwnerProfile(bool bSkipBuffRefresh) { NativeCall<void, bool>(this, "APrimalBuff_DragonHorn.SaveOwnerProfile(bool)", bSkipBuffRefresh); }
	void MonitorFlyAway() { NativeCall<void>(this, "APrimalBuff_DragonHorn.MonitorFlyAway()"); }
	static void GetReplicatedNextFlyAwayTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedNextFlyAwayTime_WrapperImpl(void*,void*)", Object, OutValue); }
	void ClearFlyAwayMonitor(bool bCancelDash) { NativeCall<void, bool>(this, "APrimalBuff_DragonHorn.ClearFlyAwayMonitor(bool)", bCancelDash); }
	void PruneSavedDragonHornPersistentData() { NativeCall<void>(this, "APrimalBuff_DragonHorn.PruneSavedDragonHornPersistentData()"); }
	bool HasInventoryCargo(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBuff_DragonHorn.HasInventoryCargo(APrimalDinoCharacter*)", Dino); }
	APrimalDinoCharacter* GetLinkedDino() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalBuff_DragonHorn.GetLinkedDino()"); }
	void SetReplicatedDinoID2(const unsigned int& InValue) { NativeCall<void, const unsigned int&>(this, "APrimalBuff_DragonHorn.SetReplicatedDinoID2(unsignedint&)", InValue); }
	bool UnlinkIfLinkedDinoCryopodded(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBuff_DragonHorn.UnlinkIfLinkedDinoCryopodded(APrimalDinoCharacter*)", Dino); }
	void ClientShowFlyAwayCargoConfirm() { NativeCall<void>(this, "APrimalBuff_DragonHorn.ClientShowFlyAwayCargoConfirm()"); }
	bool TryStartPendingFlyAwayDash() { return NativeCall<bool>(this, "APrimalBuff_DragonHorn.TryStartPendingFlyAwayDash()"); }
	bool ExecuteComeHere(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.ExecuteComeHere(AShooterPlayerController*)", ForPC); }
	bool BP_CanLinkDino(APrimalDinoCharacter* Dino, AShooterPlayerController* ForPC) { return NativeCall<bool, APrimalDinoCharacter*, AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.BP_CanLinkDino(APrimalDinoCharacter*,AShooterPlayerController*)", Dino, ForPC); }
	static void SetReplicatedDinoName_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedDinoName_WrapperImpl(void*,void*)", Object, InValue); }
	void EnsureHornItemAfterSetup() { NativeCall<void>(this, "APrimalBuff_DragonHorn.EnsureHornItemAfterSetup()"); }
	static void GetReplicatedDinoName_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedDinoName_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsDragonHornSkillUnlocked(FName SkillName) { return NativeCall<bool, FName>(this, "APrimalBuff_DragonHorn.IsDragonHornSkillUnlocked(FName)", SkillName); }
	void StartSkillCooldown(int UseIndex) { NativeCall<void, int>(this, "APrimalBuff_DragonHorn.StartSkillCooldown(int)", UseIndex); }
	float GetDragonHornSkillMultiplier(const FSkillModifierRef& SkillModifier) { return NativeCall<float, const FSkillModifierRef&>(this, "APrimalBuff_DragonHorn.GetDragonHornSkillMultiplier(FSkillModifierRef&)", SkillModifier); }
	void SetReplicatedDinoID1(const unsigned int& InValue) { NativeCall<void, const unsigned int&>(this, "APrimalBuff_DragonHorn.SetReplicatedDinoID1(unsignedint&)", InValue); }
	bool StoreLinkedDinoInHorn(AShooterPlayerController* ForPC, bool bSkipFlyAwayValidation, bool bSaveProfile, bool bNotifyFlyAway) { return NativeCall<bool, AShooterPlayerController*, bool, bool, bool>(this, "APrimalBuff_DragonHorn.StoreLinkedDinoInHorn(AShooterPlayerController*,bool,bool,bool)", ForPC, bSkipFlyAwayValidation, bSaveProfile, bNotifyFlyAway); }
	bool IsLinkedToLiveDino(APrimalDinoCharacter* Dino) { return NativeCall<bool, APrimalDinoCharacter*>(this, "APrimalBuff_DragonHorn.IsLinkedToLiveDino(APrimalDinoCharacter*)", Dino); }
	void ClearAllCooldowns() { NativeCall<void>(this, "APrimalBuff_DragonHorn.ClearAllCooldowns()"); }
	static void GetReplicatedNextComeHereTime_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_DragonHorn.GetReplicatedNextComeHereTime_WrapperImpl(void*,void*)", Object, OutValue); }
	APrimalDinoCharacter* FindLinkedLiveDino() { return NativeCall<APrimalDinoCharacter*>(this, "APrimalBuff_DragonHorn.FindLinkedLiveDino()"); }
	static void SetReplicatedNextComeHereTime_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_DragonHorn.SetReplicatedNextComeHereTime_WrapperImpl(void*,void*)", Object, InValue); }
	void ServerUseQuickAction_Implementation() { NativeCall<void>(this, "APrimalBuff_DragonHorn.ServerUseQuickAction_Implementation()"); }
	bool ExecuteGetMe(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.ExecuteGetMe(AShooterPlayerController*)", ForPC); }
	void AbortQueuedSkyDash(AShooterPlayerController* ForPC, const FString& Message) { NativeCall<void, AShooterPlayerController*, const FString&>(this, "APrimalBuff_DragonHorn.AbortQueuedSkyDash(AShooterPlayerController*,FString&)", ForPC, Message); }
	bool ExecuteUnlink(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalBuff_DragonHorn.ExecuteUnlink(AShooterPlayerController*)", ForPC); }
	void MonitorSkyDash() { NativeCall<void>(this, "APrimalBuff_DragonHorn.MonitorSkyDash()"); }
	void UnbindLinkedDinoDeathDelegate() { NativeCall<void>(this, "APrimalBuff_DragonHorn.UnbindLinkedDinoDeathDelegate()"); }
};
