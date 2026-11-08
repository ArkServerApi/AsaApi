#pragma once
#include "BulkForward.h"



struct APrimalStructureSeating : APrimalStructureItemContainer
{
    // Fields

    TWeakObjectPtr<AShooterCharacter>& SeatedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalStructureSeating.SeatedCharacter"); }
    TWeakObjectPtr<AShooterCharacter>& PrevSeatedCharacterField() { return *GetNativePointerField<TWeakObjectPtr<AShooterCharacter>*>(this, "APrimalStructureSeating.PrevSeatedCharacter"); }
    TWeakObjectPtr<AShooterPlayerController>& SeatedControllerField() { return *GetNativePointerField<TWeakObjectPtr<AShooterPlayerController>*>(this, "APrimalStructureSeating.SeatedController"); }
    TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >& CharacterPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.CharacterPerSeat"); }
    TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >& PrevCharacterPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AShooterCharacter>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.PrevCharacterPerSeat"); }
    int& NumSeatsField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating.NumSeats"); }
    UE::Math::TVector<double>& SeatedCharacterLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating.SeatedCharacterLocationOffset"); }
    UE::Math::TRotator<double>& SeatedCharacterRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureSeating.SeatedCharacterRotationOffset"); }
    //TArray<FSeatingSpot, TSizedDefaultAllocator<32> >& OtherSeatingSpotsField() { return *GetNativePointerField<TArray<FSeatingSpot, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.OtherSeatingSpots"); }
    float& TPVCameraYawRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.TPVCameraYawRange"); }
    UE::Math::TVector<double>& TPVCameraOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating.TPVCameraOffset"); }
    UE::Math::TVector<double>& TPVCameraOffsetMultiplierField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating.TPVCameraOffsetMultiplier"); }
    float& UnboardDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.UnboardDistance"); }
    FString& SeatingActionTextField() { return *GetNativePointerField<FString*>(this, "APrimalStructureSeating.SeatingActionText"); }
    TObjectPtr<UTexture2D>& SeatingActionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureSeating.SeatingActionIcon"); }
    USoundCue*& RideSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating.RideSound"); }
    USoundCue*& UnrideSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalStructureSeating.UnrideSound"); }
    UAnimSequence*& SeatingAnimOverrideField() { return *GetNativePointerField<UAnimSequence**>(this, "APrimalStructureSeating.SeatingAnimOverride"); }
    int& SeatingActionPriorityField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeating.SeatingActionPriority"); }
    long double& LastServerUpdateSentField() { return *GetNativePointerField<long double*>(this, "APrimalStructureSeating.LastServerUpdateSent"); }
    UE::Math::TVector<double>& ActorPrevRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeating.ActorPrevRelativeLocation"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bAdjustForLegLength() { return { this, "APrimalStructureSeating.bAdjustForLegLength" }; }
    BitFieldValue<bool, unsigned __int32> bRestrictTPVCameraYaw() { return { this, "APrimalStructureSeating.bRestrictTPVCameraYaw" }; }
    BitFieldValue<bool, unsigned __int32> bUsesPrimaryFire() { return { this, "APrimalStructureSeating.bUsesPrimaryFire" }; }
    BitFieldValue<bool, unsigned __int32> bUsesAltFire() { return { this, "APrimalStructureSeating.bUsesAltFire" }; }
    BitFieldValue<bool, unsigned __int32> bUsesItemSlotKeys() { return { this, "APrimalStructureSeating.bUsesItemSlotKeys" }; }
    BitFieldValue<bool, unsigned __int32> bPreventSeatingWhenHandcuffed() { return { this, "APrimalStructureSeating.bPreventSeatingWhenHandcuffed" }; }
    BitFieldValue<bool, unsigned __int32> bAllowSleepingPlayers() { return { this, "APrimalStructureSeating.bAllowSleepingPlayers" }; }
    BitFieldValue<bool, unsigned __int32> bReleaseFindsGroundPlacement() { return { this, "APrimalStructureSeating.bReleaseFindsGroundPlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAllowCrouchProneToSit() { return { this, "APrimalStructureSeating.bAllowCrouchProneToSit" }; }
    BitFieldValue<bool, unsigned __int32> bUsesTargeting() { return { this, "APrimalStructureSeating.bUsesTargeting" }; }
    BitFieldValue<bool, unsigned __int32> bHideLegacyStructureAmmoHUD() { return { this, "APrimalStructureSeating.bHideLegacyStructureAmmoHUD" }; }
    BitFieldValue<bool, unsigned __int32> bTraceToUnboardLocation() { return { this, "APrimalStructureSeating.bTraceToUnboardLocation" }; }
    BitFieldValue<bool, unsigned __int32> bAllowAnyTeamToSit() { return { this, "APrimalStructureSeating.bAllowAnyTeamToSit" }; }
    BitFieldValue<bool, unsigned __int32> bAllowOrbitCam() { return { this, "APrimalStructureSeating.bAllowOrbitCam" }; }
    BitFieldValue<bool, unsigned __int32> bPreventHandcuffLockedSeating() { return { this, "APrimalStructureSeating.bPreventHandcuffLockedSeating" }; }
    BitFieldValue<bool, unsigned __int32> bJumpOnDetach() { return { this, "APrimalStructureSeating.bJumpOnDetach" }; }

    // Functions

    int BPGetBestSeatNumber_Implementation(AShooterPlayerController* ForPC, int InBestSeatNumber) { return NativeCall<int, AShooterPlayerController*, int>(this, "APrimalStructureSeating.BPGetBestSeatNumber_Implementation(AShooterPlayerController*,int)", ForPC, InBestSeatNumber); }
    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureSeating"); }
    void BPSeatedPlayer(AShooterCharacter* SeatedChar, int AtSeatNumber) { NativeCall<void, AShooterCharacter*, int>(this, "APrimalStructureSeating.BPSeatedPlayer(AShooterCharacter*,int)", SeatedChar, AtSeatNumber); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureSeating();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void Control(AShooterCharacter* ShooterCharacter, int SeatNumber, bool bLockedToSeat) { NativeCall<void, AShooterCharacter*, int, bool>(this, "APrimalStructureSeating.Control(AShooterCharacter*,int,bool)", ShooterCharacter, SeatNumber, bLockedToSeat); }
    void Release(AShooterCharacter* ShooterCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureSeating.Release(AShooterCharacter*)", ShooterCharacter); }
    void GetNearestSitSpot(UE::Math::TVector<double>* CharacterLocation, UE::Math::TVector<double>* OutSitLocation, UE::Math::TRotator<double>* OutSitRotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureSeating.GetNearestSitSpot(UE::Math::TVector<double>,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", CharacterLocation, OutSitLocation, OutSitRotation); }
    void GetNearestSitSpot(UE::Math::TVector<double>* CharacterLocation, int SeatNumber, UE::Math::TVector<double>* OutSitLocation, UE::Math::TRotator<double>* OutSitRotation) { NativeCall<void, UE::Math::TVector<double>*, int, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureSeating.GetNearestSitSpot(UE::Math::TVector<double>,int,UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", CharacterLocation, SeatNumber, OutSitLocation, OutSitRotation); }
    __int64 GetNearestFreeSpot(AShooterPlayerController* ForPC, UE::Math::TVector<double>* CharacterLocation) { return NativeCall<__int64, AShooterPlayerController*, UE::Math::TVector<double>*>(this, "APrimalStructureSeating.GetNearestFreeSpot(AShooterPlayerController*,UE::Math::TVector<double>)", ForPC, CharacterLocation); }
    bool CanUse(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureSeating.CanUse(AShooterPlayerController*)", ForPC); }
    void OnRep_SeatedCharacter() { NativeCall<void>(this, "APrimalStructureSeating.OnRep_SeatedCharacter()"); }
    void OnRep_CharacterPerSeat() { NativeCall<void>(this, "APrimalStructureSeating.OnRep_CharacterPerSeat()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeating.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureSeating.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    bool CanSeat(AShooterPlayerController* ForPC, AShooterCharacter* ForCharacter, bool bForce) { return NativeCall<bool, AShooterPlayerController*, AShooterCharacter*, bool>(this, "APrimalStructureSeating.CanSeat(AShooterPlayerController*,AShooterCharacter*,bool)", ForPC, ForCharacter, bForce); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureSeating.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureSeating.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void Demolish(APlayerController* ForPC, AActor* DamageCauser) { NativeCall<void, APlayerController*, AActor*>(this, "APrimalStructureSeating.Demolish(APlayerController*,AActor*)", ForPC, DamageCauser); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureSeating.Destroyed()"); }
    void ClearSeats() { NativeCall<void>(this, "APrimalStructureSeating.ClearSeats()"); }
    void OnStartTargeting() { NativeCall<void>(this, "APrimalStructureSeating.OnStartTargeting()"); }
    void OnStopTargeting() { NativeCall<void>(this, "APrimalStructureSeating.OnStopTargeting()"); }

	float& SeatedCameraZoomStepSizeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.SeatedCameraZoomStepSize"); }
	float& SeatedCameraZoomMinLevelMultField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.SeatedCameraZoomMinLevelMult"); }
	float& SeatedCameraZoomMaxLevelMultField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.SeatedCameraZoomMaxLevelMult"); }
	float& SeatedCameraBaseArmLengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeating.SeatedCameraBaseArmLength"); }
	bool& bEnableSeatedFreeLookField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating.bEnableSeatedFreeLook"); }
	bool& bFreeLookActiveField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating.bFreeLookActive"); }
	bool& bEnableTraceOnCanSeatField() { return *GetNativePointerField<bool*>(this, "APrimalStructureSeating.bEnableTraceOnCanSeat"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureSeating"); }

	FName& LeftHandkdStaticMeshSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating.LeftHandkdStaticMeshSocketName"); }
	FName& LeftHandkdSkeletalMeshSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating.LeftHandkdSkeletalMeshSocketName"); }
	FName& RightHandkdStaticMeshSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating.RightHandkdStaticMeshSocketName"); }
	FName& RightHandkdSkeletalMeshSocketNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructureSeating.RightHandkdSkeletalMeshSocketName"); }
	BitFieldValue<bool, unsigned char> bAdjustForLegLengthStanding() { return { this, "APrimalStructureSeating.bAdjustForLegLengthStanding"}; }
	BitFieldValue<bool, unsigned char> bAllowFPV() { return { this, "APrimalStructureSeating.bAllowFPV"}; }
	BitFieldValue<bool, unsigned char> bHideCharacterInFPV() { return { this, "APrimalStructureSeating.bHideCharacterInFPV"}; }
	BitFieldValue<bool, unsigned char> bOverrideOrbitCamTargetLocation() { return { this, "APrimalStructureSeating.bOverrideOrbitCamTargetLocation"}; }
	BitFieldValue<bool, unsigned char> bAllowDinoCompanionAttachment() { return { this, "APrimalStructureSeating.bAllowDinoCompanionAttachment"}; }
	BitFieldValue<bool, unsigned __int32> bUseGetSeatingAnimOverrideBP() { return { this, "APrimalStructureSeating.bUseGetSeatingAnimOverrideBP"}; }
	BitFieldValue<bool, unsigned __int32> bSupportDynamicSeatingChanges() { return { this, "APrimalStructureSeating.bSupportDynamicSeatingChanges"}; }
	BitFieldValue<bool, unsigned char> bUseHandIk() { return { this, "APrimalStructureSeating.bUseHandIk"}; }
	BitFieldValue<bool, unsigned char> bBendForwardWithIK() { return { this, "APrimalStructureSeating.bBendForwardWithIK"}; }
	BitFieldValue<bool, unsigned char> bOnlyUseHandIKForFirstSeat() { return { this, "APrimalStructureSeating.bOnlyUseHandIKForFirstSeat"}; }
	BitFieldValue<bool, unsigned char> bPreventBotIdleFidgetAnimations() { return { this, "APrimalStructureSeating.bPreventBotIdleFidgetAnimations"}; }
	UAnimMontage* OverrideBotIdleFidgetAnimation_Implementation(UAnimMontage* FromMontage, int ForSeatNumber) { return NativeCall<UAnimMontage*, UAnimMontage*, int>(this, "APrimalStructureSeating.OverrideBotIdleFidgetAnimation_Implementation(UAnimMontage*,int)", FromMontage, ForSeatNumber); }
	void BPReleasedPlayer(AShooterCharacter* ReleasedChar, int AtSeatNumber) { NativeCall<void, AShooterCharacter*, int>(this, "APrimalStructureSeating.BPReleasedPlayer(AShooterCharacter*,int)", ReleasedChar, AtSeatNumber); }
	void OnFreeLookReleased() { NativeCall<void>(this, "APrimalStructureSeating.OnFreeLookReleased()"); }
	bool BPPreventReleaseSeatingStructure(AShooterCharacter* ForSitter) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalStructureSeating.BPPreventReleaseSeatingStructure(AShooterCharacter*)", ForSitter); }
	bool PreventBotReleaseSeatingStructure_Implementation(APrimalBotCharacter* ForBot) { return NativeCall<bool, APrimalBotCharacter*>(this, "APrimalStructureSeating.PreventBotReleaseSeatingStructure_Implementation(APrimalBotCharacter*)", ForBot); }
	bool AllowBotSeating(APrimalBotCharacter* ForBot) { return NativeCall<bool, APrimalBotCharacter*>(this, "APrimalStructureSeating.AllowBotSeating(APrimalBotCharacter*)", ForBot); }
	UAnimSequence* GetSeatingAnimOverrideBP(int ForSeatNumber) { return NativeCall<UAnimSequence*, int>(this, "APrimalStructureSeating.GetSeatingAnimOverrideBP(int)", ForSeatNumber); }
	void OnPrimaryFire() { NativeCall<void>(this, "APrimalStructureSeating.OnPrimaryFire()"); }
	void BPReleasedBot(APrimalBotCharacter* ReleasedBot, int AtSeatNumber) { NativeCall<void, APrimalBotCharacter*, int>(this, "APrimalStructureSeating.BPReleasedBot(APrimalBotCharacter*,int)", ReleasedBot, AtSeatNumber); }
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureSeating.PostInitializeComponents()"); }
	void OnUseKey(int Index) { NativeCall<void, int>(this, "APrimalStructureSeating.OnUseKey(int)", Index); }
	void GetOrbitCamZoomParams(float& OutCurrentZoom, float& OutMinZoom, float& OutMaxZoom, float& OutStepSize) { NativeCall<void, float&, float&, float&, float&>(this, "APrimalStructureSeating.GetOrbitCamZoomParams(float&,float&,float&,float&)", OutCurrentZoom, OutMinZoom, OutMaxZoom, OutStepSize); }
	int BPGetBestSeatNumberForBot_Implementation(APrimalBotCharacter* ForBot, int InBestSeatNumber) { return NativeCall<int, APrimalBotCharacter*, int>(this, "APrimalStructureSeating.BPGetBestSeatNumberForBot_Implementation(APrimalBotCharacter*,int)", ForBot, InBestSeatNumber); }
	void BPSeatedBot(APrimalBotCharacter* SeatedBot, int AtSeatNumber) { NativeCall<void, APrimalBotCharacter*, int>(this, "APrimalStructureSeating.BPSeatedBot(APrimalBotCharacter*,int)", SeatedBot, AtSeatNumber); }
	bool HasAvailableSeat() { return NativeCall<bool>(this, "APrimalStructureSeating.HasAvailableSeat()"); }
	bool BPAllowSeating(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureSeating.BPAllowSeating(AShooterPlayerController*)", ForPC); }
	bool IsSeatingSpotFreeForBot(APrimalBotCharacter* ForBot, int AtSeatNumber) { return NativeCall<bool, APrimalBotCharacter*, int>(this, "APrimalStructureSeating.IsSeatingSpotFreeForBot(APrimalBotCharacter*,int)", ForBot, AtSeatNumber); }
	UE::Math::TVector<double>* GetSittingSpotWorldLocation(UE::Math::TVector<double>* result, int SeatNumber) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, int>(this, "APrimalStructureSeating.GetSittingSpotWorldLocation(int)", result, SeatNumber); }
	bool IsSeatAvailable(int SeatNumber) { return NativeCall<bool, int>(this, "APrimalStructureSeating.IsSeatAvailable(int)", SeatNumber); }
	bool BPHandleSitterPoop_Implementation(AShooterCharacter* ForSitter) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalStructureSeating.BPHandleSitterPoop_Implementation(AShooterCharacter*)", ForSitter); }
	int BPGetBestSeatNumber(AShooterPlayerController* ForPC, int InBestSeatNumber) { return NativeCall<int, AShooterPlayerController*, int>(this, "APrimalStructureSeating.BPGetBestSeatNumber(AShooterPlayerController*,int)", ForPC, InBestSeatNumber); }
	bool PreventBotReleaseSeatingStructure(APrimalBotCharacter* ForBot) { return NativeCall<bool, APrimalBotCharacter*>(this, "APrimalStructureSeating.PreventBotReleaseSeatingStructure(APrimalBotCharacter*)", ForBot); }
	void ServerSeatingStructureAction(unsigned char ActionNumber) { NativeCall<void, unsigned char>(this, "APrimalStructureSeating.ServerSeatingStructureAction(unsignedchar)", ActionNumber); }
	void BPOnStopTargeting() { NativeCall<void>(this, "APrimalStructureSeating.BPOnStopTargeting()"); }
	void BotRelease(APrimalBotCharacter* ReleasedBot, int AtSeatNumber) { NativeCall<void, APrimalBotCharacter*, int>(this, "APrimalStructureSeating.BotRelease(APrimalBotCharacter*,int)", ReleasedBot, AtSeatNumber); }
	void BPOnStartTargeting() { NativeCall<void>(this, "APrimalStructureSeating.BPOnStartTargeting()"); }
	int GetNearestFreeSpotForBot(APrimalBotCharacter* ForBot) { return NativeCall<int, APrimalBotCharacter*>(this, "APrimalStructureSeating.GetNearestFreeSpotForBot(APrimalBotCharacter*)", ForBot); }
	int BPGetBestSeatNumberForBot(APrimalBotCharacter* ForBot, int InBestSeatNumber) { return NativeCall<int, APrimalBotCharacter*, int>(this, "APrimalStructureSeating.BPGetBestSeatNumberForBot(APrimalBotCharacter*,int)", ForBot, InBestSeatNumber); }
	void OnFreeLookPressed() { NativeCall<void>(this, "APrimalStructureSeating.OnFreeLookPressed()"); }
	bool IsSeatingStructure() { return NativeCall<bool>(this, "APrimalStructureSeating.IsSeatingStructure()"); }
	bool BPPreventReleaseSeatingStructure_Implementation(AShooterCharacter* ForSitter) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalStructureSeating.BPPreventReleaseSeatingStructure_Implementation(AShooterCharacter*)", ForSitter); }
	bool CanBotSeat(APrimalBotCharacter* ForBot) { return NativeCall<bool, APrimalBotCharacter*>(this, "APrimalStructureSeating.CanBotSeat(APrimalBotCharacter*)", ForBot); }
	float OverrideBotMaxControlDuration(APrimalBotCharacter* ForBot) { return NativeCall<float, APrimalBotCharacter*>(this, "APrimalStructureSeating.OverrideBotMaxControlDuration(APrimalBotCharacter*)", ForBot); }
	bool GetCameraPivotOverride(UE::Math::TVector<double>& OutPivot, float& OutArmLength, bool& bSkipCameraCollision) { return NativeCall<bool, UE::Math::TVector<double>&, float&, bool&>(this, "APrimalStructureSeating.GetCameraPivotOverride(UE::Math::TVector<double>&,float&,bool&)", OutPivot, OutArmLength, bSkipCameraCollision); }
	void BotControl(APrimalBotCharacter* SeatedBot, int AtSeatNumber) { NativeCall<void, APrimalBotCharacter*, int>(this, "APrimalStructureSeating.BotControl(APrimalBotCharacter*,int)", SeatedBot, AtSeatNumber); }
	UAnimMontage* OverrideBotIdleFidgetAnimation(UAnimMontage* FromMontage, int ForSeatNumber) { return NativeCall<UAnimMontage*, UAnimMontage*, int>(this, "APrimalStructureSeating.OverrideBotIdleFidgetAnimation(UAnimMontage*,int)", FromMontage, ForSeatNumber); }
	bool BPHandleSitterPoop(AShooterCharacter* ForSitter) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalStructureSeating.BPHandleSitterPoop(AShooterCharacter*)", ForSitter); }
	void GetHandIKEnabled(bool& bLeft, bool& bRight) { NativeCall<void, bool&, bool&>(this, "APrimalStructureSeating.GetHandIKEnabled(bool&,bool&)", bLeft, bRight); }
	UPrimalBotSeatingComponent* GetBotSeatingComponent() { return NativeCall<UPrimalBotSeatingComponent*>(this, "APrimalStructureSeating.GetBotSeatingComponent()"); }
	float OverrideBotMaxControlDuration_Implementation(APrimalBotCharacter* ForBot) { return NativeCall<float, APrimalBotCharacter*>(this, "APrimalStructureSeating.OverrideBotMaxControlDuration_Implementation(APrimalBotCharacter*)", ForBot); }
	bool AllowBotSeating_Implementation(APrimalBotCharacter* ForBot) { return NativeCall<bool, APrimalBotCharacter*>(this, "APrimalStructureSeating.AllowBotSeating_Implementation(APrimalBotCharacter*)", ForBot); }
	int GetNumTakenSeats() { return NativeCall<int>(this, "APrimalStructureSeating.GetNumTakenSeats()"); }
	void OnAltFire() { NativeCall<void>(this, "APrimalStructureSeating.OnAltFire()"); }
	bool BPAllowSeating_Implementation(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureSeating.BPAllowSeating_Implementation(AShooterPlayerController*)", ForPC); }
	UE::Math::TVector<double>* BPOverrideUnboardLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureSeating.BPOverrideUnboardLocation()", result); }
};