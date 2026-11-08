#pragma once
#include "BulkForward.h"


struct APrimalStructurePlacer : AInfo
{
    // Fields

    bool& bNoFadeInField() { return *GetNativePointerField<bool*>(this, "APrimalStructurePlacer.bNoFadeIn"); }
    float& FadeTimerField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.FadeTimer"); }
    UE::Math::TRotator<double>& InitialPlacerActorChooseRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructurePlacer.InitialPlacerActorChooseRotation"); }
    UE::Math::TRotator<double>& LastSetViewRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructurePlacer.LastSetViewRotation"); }
    UE::Math::TRotator<double>& LastHitRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructurePlacer.LastHitRotation"); }
    FTimerHandle& OnUseHeldTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePlacer.OnUseHeldTimerHandle"); }
    FTimerHandle& OnSnapCycleHeldTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePlacer.OnSnapCycleHeldTimerHandle"); }
    int& CurrentPlacingStructureIndexField() { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.CurrentPlacingStructureIndex"); }
    APrimalStructure*& CurrentPlacingStructureField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructurePlacer.CurrentPlacingStructure"); }
    APrimalStructure*& CurrentSnapTargetField() { return *GetNativePointerField<APrimalStructure**>(this, "APrimalStructurePlacer.CurrentSnapTarget"); }
    TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >& PlaceableStructuresField() { return *GetNativePointerField<TArray<TSoftClassPtr<APrimalStructure>, TSizedDefaultAllocator<32> >*>(this, "APrimalStructurePlacer.PlaceableStructures"); }
    int& PlacingAlignmentModeField() { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.PlacingAlignmentMode"); }
    int& PlacingRotationModeField() { return *GetNativePointerField<int*>(this, "APrimalStructurePlacer.PlacingRotationMode"); }
    FName& RotationAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.RotationAxisName"); }
    float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationSpeed"); }
    FName& AltRotationAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.AltRotationAxisName"); }
    float& AltRotationSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.AltRotationSpeed"); }
    //FCanvasIcon& RotationIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "APrimalStructurePlacer.RotationIcon"); }
    float& RotationIconSizeField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationIconSize"); }
    float& RotationIconScaleField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.RotationIconScale"); }
    FName& PitchAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.PitchAxisName"); }
    float& PitchSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.PitchSpeed"); }
    FName& AltPitchAxisNameField() { return *GetNativePointerField<FName*>(this, "APrimalStructurePlacer.AltPitchAxisName"); }
    float& AltPitchSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.AltPitchSpeed"); }
    float& YawOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.YawOffset"); }
    float& YawOffsetIncrementField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.YawOffsetIncrement"); }
    //UCurveFloat*& PreviewMaterialLuminanceCurveField() { return *GetNativePointerField<UCurveFloat**>(this, "APrimalStructurePlacer.PreviewMaterialLuminanceCurve"); }
    FString& PressUseStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.PressUseString"); }
    FString& HoldUseStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.HoldUseString"); }
    FString& KeyUseStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyUseString"); }
    UTexture2D*& GamepadButtonUseField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadButtonUse"); }
    FString& PressGiveDefaultWeaponStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.PressGiveDefaultWeaponString"); }
    FString& HoldGiveDefaultWeaponStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.HoldGiveDefaultWeaponString"); }
    FString& KeyGiveDefaultWeaponStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyGiveDefaultWeaponString"); }
    UTexture2D*& GamepadButtonGiveDefaultWeaponField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadButtonGiveDefaultWeapon"); }
    FString& KeyReloadStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.KeyReloadString"); }
    UTexture2D*& GamepadReloadField() { return *GetNativePointerField<UTexture2D**>(this, "APrimalStructurePlacer.GamepadReload"); }
    FString& NumVariantsStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructurePlacer.NumVariantsString"); }
    float& PlacementAdjustHeightAmtField() { return *GetNativePointerField<float*>(this, "APrimalStructurePlacer.PlacementAdjustHeightAmt"); }
    FItemNetID& PlaceUsingItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "APrimalStructurePlacer.PlaceUsingItemID"); }
    UE::Math::TVector<double>& LastHitLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructurePlacer.LastHitLoc"); }
    TWeakObjectPtr<UPrimalItem>& CurrentlyPlacingWithItemField() { return *GetNativePointerField<TWeakObjectPtr<UPrimalItem>*>(this, "APrimalStructurePlacer.CurrentlyPlacingWithItem"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDebugStructures() { return { this, "APrimalStructurePlacer.bDebugStructures" }; }
    BitFieldValue<bool, unsigned __int32> bForceDisplayMissionAreaStructureNoBuildZones() { return { this, "APrimalStructurePlacer.bForceDisplayMissionAreaStructureNoBuildZones" }; }
    BitFieldValue<bool, unsigned __int32> bIsCheating() { return { this, "APrimalStructurePlacer.bIsCheating" }; }
    BitFieldValue<bool, unsigned __int32> bLastPlacementWasSnapped() { return { this, "APrimalStructurePlacer.bLastPlacementWasSnapped" }; }
    BitFieldValue<bool, unsigned __int32> bLastPlacementOnSaddle() { return { this, "APrimalStructurePlacer.bLastPlacementOnSaddle" }; }
    BitFieldValue<bool, unsigned __int32> bIsPlacementFlipped() { return { this, "APrimalStructurePlacer.bIsPlacementFlipped" }; }
    BitFieldValue<bool, unsigned __int32> bLockCameraDuringChooseRotation() { return { this, "APrimalStructurePlacer.bLockCameraDuringChooseRotation" }; }
    BitFieldValue<bool, unsigned __int32> bIgnoreOptionalSnaps() { return { this, "APrimalStructurePlacer.bIgnoreOptionalSnaps" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructurePlacer"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructurePlacer();
    void BeginPlay() { NativeCall<void>(this, "APrimalStructurePlacer.BeginPlay()"); }
    bool CanStartPlacingStructure() { return NativeCall<bool>(this, "APrimalStructurePlacer.CanStartPlacingStructure()"); }
    void Tick(float DeltaTime) { NativeCall<void, float>(this, "APrimalStructurePlacer.Tick(float)", DeltaTime); }
    void BeginState(EPrimalStructurePlacerState PreviousState) { NativeCall<void, EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.BeginState(EPrimalStructurePlacerState)", PreviousState); }
    void SetForceDisplayMissionAreaStructureNoBuildZones(bool bForceDisplay) { NativeCall<void, bool>(this, "APrimalStructurePlacer.SetForceDisplayMissionAreaStructureNoBuildZones(bool)", bForceDisplay); }
    void EndState(EPrimalStructurePlacerState NewState) { NativeCall<void, EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.EndState(EPrimalStructurePlacerState)", NewState); }
    void StartPlacingStructure(TSubclassOf<APrimalStructure> StructureClass, const FItemNetID* ForItemID, bool bSkipCheatCheck) { NativeCall<void, TSubclassOf<APrimalStructure>, const FItemNetID*, bool>(this, "APrimalStructurePlacer.StartPlacingStructure(TSubclassOf<APrimalStructure>,FItemNetID&,bool)", StructureClass, ForItemID, bSkipCheatCheck); }
    void StartPlacingStructure(int StructureIndex, const FItemNetID* ForItemID, bool bIsCheat, bool bSkipCheatCheck) { NativeCall<void, int, const FItemNetID*, bool, bool>(this, "APrimalStructurePlacer.StartPlacingStructure(int,FItemNetID&,bool,bool)", StructureIndex, ForItemID, bIsCheat, bSkipCheatCheck); }
    bool ConfirmPlacingStructure(bool bDontAdjustForMaxRange) { return NativeCall<bool, bool>(this, "APrimalStructurePlacer.ConfirmPlacingStructure(bool)", bDontAdjustForMaxRange); }
    void CancelPlacingStructure(EPrimalStructurePlacerState a2) { NativeCall<void, EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.CancelPlacingStructure(bool)", a2); }
    bool TestStructurePlacement(TSubclassOf<APrimalStructure> StructureClass, bool bDontAdjustForMaxRange, bool ForceMessageDisplay) { return NativeCall<bool, TSubclassOf<APrimalStructure>, bool, bool>(this, "APrimalStructurePlacer.TestStructurePlacement(TSubclassOf<APrimalStructure>,bool,bool)", StructureClass, bDontAdjustForMaxRange, ForceMessageDisplay); }
    bool IsPlacingActive() { return NativeCall<bool>(this, "APrimalStructurePlacer.IsPlacingActive()"); }
    void FinalStructurePlacement(APlayerController* PC, int StructureIndex, UE::Math::TVector<double>* TestBuildLocation, UE::Math::TRotator<double>* TestBuildRotation, UE::Math::TRotator<double>* PlayerViewRotation, FItemNetID FinalPlacementItemID, FPlacementData* PlacementData, bool bIsCheat, bool bIsFlipped, int SnapPointCycle) { NativeCall<void, APlayerController*, int, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, FItemNetID, FPlacementData*, bool, bool, int>(this, "APrimalStructurePlacer.FinalStructurePlacement(APlayerController*,int,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,FItemNetID,FPlacementData,FBPNetExecParams,bool,bool,int)", PC, StructureIndex, TestBuildLocation, TestBuildRotation, PlayerViewRotation, FinalPlacementItemID, PlacementData, bIsCheat, bIsFlipped, SnapPointCycle); }
    void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructurePlacer.DrawHUD(AShooterHUD*)", HUD); }
    void DrawStructurePreviewHUD(AShooterHUD* HUD, APrimalStructure* PlacingStructure) { NativeCall<void, AShooterHUD*, APrimalStructure*>(this, "APrimalStructurePlacer.DrawStructurePreviewHUD(AShooterHUD*,APrimalStructure*)", HUD, PlacingStructure); }
    void CycleNextStructureToPlace(__int16 a2) { NativeCall<void, __int16>(this, "APrimalStructurePlacer.CycleNextStructureToPlace()", a2); }
    bool HandleSnapCycleAction(bool WasPressed, bool GoBack) { return NativeCall<bool, bool, bool>(this, "APrimalStructurePlacer.HandleSnapCycleAction(bool,bool)", WasPressed, GoBack); }
    void HandleSnapCycleActionTimer() { NativeCall<void>(this, "APrimalStructurePlacer.HandleSnapCycleActionTimer()"); }
    bool HandleOnUseAction(bool WasPressed) { return NativeCall<bool, bool>(this, "APrimalStructurePlacer.HandleOnUseAction(bool)", WasPressed); }
    void HandleOnUseActionTimer() { NativeCall<void>(this, "APrimalStructurePlacer.HandleOnUseActionTimer()"); }

	bool& bChoosingRotationField() { return *GetNativePointerField<bool*>(this, "APrimalStructurePlacer.bChoosingRotation"); }
	double& LastExtendedRangeRequestTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructurePlacer.LastExtendedRangeRequestTime"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructurePlacer"); }

	FTimerHandle& OnToggleGhostHeldTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePlacer.OnToggleGhostHeldTimerHandle"); }
	FTimerHandle& OnToggleCancelHeldTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructurePlacer.OnToggleCancelHeldTimerHandle"); }
	EPrimalStructurePlacerState& CurrentStateField() { return *GetNativePointerField<EPrimalStructurePlacerState*>(this, "APrimalStructurePlacer.CurrentState"); }
	FCanvasIcon& RotationIconField() { return *GetNativePointerField<FCanvasIcon*>(this, "APrimalStructurePlacer.RotationIcon"); }
	UCurveFloat*& PreviewMaterialLuminanceCurveField() { return *GetNativePointerField<UCurveFloat**>(this, "APrimalStructurePlacer.PreviewMaterialLuminanceCurve"); }
	BitFieldValue<bool, unsigned __int32> bIsPlacingGhostStructures() { return { this, "APrimalStructurePlacer.bIsPlacingGhostStructures"}; }
	void GetLastPlacementProperties(UE::Math::TVector<double>& OutLastHitLoc, UE::Math::TRotator<double>& OutLastHitRot, UE::Math::TRotator<double>& OutLastViewRot) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TRotator<double>&, UE::Math::TRotator<double>&>(this, "APrimalStructurePlacer.GetLastPlacementProperties(UE::Math::TVector<double>&,UE::Math::TRotator<double>&,UE::Math::TRotator<double>&)", OutLastHitLoc, OutLastHitRot, OutLastViewRot); }
	void HandleToggleCancelActionTimer() { NativeCall<void>(this, "APrimalStructurePlacer.HandleToggleCancelActionTimer()"); }
	void GotoState(EPrimalStructurePlacerState NewState) { NativeCall<void, EPrimalStructurePlacerState>(this, "APrimalStructurePlacer.GotoState(EPrimalStructurePlacerState)", NewState); }
	void CycleSnapPoint(bool Back) { NativeCall<void, bool>(this, "APrimalStructurePlacer.CycleSnapPoint(bool)", Back); }
	bool CanDrawBuildingUI() { return NativeCall<bool>(this, "APrimalStructurePlacer.CanDrawBuildingUI()"); }
	void ToggleExtendedRange(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructurePlacer.ToggleExtendedRange(AShooterPlayerController*)", PC); }
	bool HandleToggleCancelAction(bool WasPressed) { return NativeCall<bool, bool>(this, "APrimalStructurePlacer.HandleToggleCancelAction(bool)", WasPressed); }
	void CycleYawIncrement() { NativeCall<void>(this, "APrimalStructurePlacer.CycleYawIncrement()"); }
	void ToggleDebugStructures() { NativeCall<void>(this, "APrimalStructurePlacer.ToggleDebugStructures()"); }
	bool HandleToggleGhostAction(bool WasPressed) { return NativeCall<bool, bool>(this, "APrimalStructurePlacer.HandleToggleGhostAction(bool)", WasPressed); }
	void HandleToggleGhostActionTimer() { NativeCall<void>(this, "APrimalStructurePlacer.HandleToggleGhostActionTimer()"); }
	void SetChoosingRotation(bool bNewChoosingRotation) { NativeCall<void, bool>(this, "APrimalStructurePlacer.SetChoosingRotation(bool)", bNewChoosingRotation); }
	void CyclePlacingRotationMode() { NativeCall<void>(this, "APrimalStructurePlacer.CyclePlacingRotationMode()"); }
	bool TryStartPlacingTargetStructure() { return NativeCall<bool>(this, "APrimalStructurePlacer.TryStartPlacingTargetStructure()"); }
};