#pragma once
#include "BulkForward.h"


struct APrimalStructureLadder : APrimalStructure
{
    // Fields

    float& LadderTopPointField() { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.LadderTopPoint"); }
    float& LadderBottomPointField() { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.LadderBottomPoint"); }
    UE::Math::TRotator<double>& LadderClimbRotationOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureLadder.LadderClimbRotationOffset"); }
    USoundBase*& LadderRetractionSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureLadder.LadderRetractionSound"); }
    USoundBase*& LadderUnretractionSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureLadder.LadderUnretractionSound"); }
    TObjectPtr<UTexture2D>& ClimbUpIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ClimbUpIcon"); }
    TObjectPtr<UTexture2D>& ClimbDownIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ClimbDownIcon"); }
    TObjectPtr<UTexture2D>& JumpIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.JumpIcon"); }
    TObjectPtr<UTexture2D>& ExtendLadderIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.ExtendLadderIcon"); }
    TObjectPtr<UTexture2D>& RetractLadderIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.RetractLadderIcon"); }
    TObjectPtr<UTexture2D>& EnablePublicRetractionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.EnablePublicRetractionIcon"); }
    TObjectPtr<UTexture2D>& DisablePublicRetractionIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureLadder.DisablePublicRetractionIcon"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bWasRetracted() { return { this, "APrimalStructureLadder.bWasRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bWasLowerLaddersRetracted() { return { this, "APrimalStructureLadder.bWasLowerLaddersRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bPostSpawnInitialized() { return { this, "APrimalStructureLadder.bPostSpawnInitialized" }; }
    BitFieldValue<bool, unsigned __int32> bCanRetract() { return { this, "APrimalStructureLadder.bCanRetract" }; }
    BitFieldValue<bool, unsigned __int32> bCanRetractFromBottom() { return { this, "APrimalStructureLadder.bCanRetractFromBottom" }; }
    BitFieldValue<bool, unsigned __int32> bIsRetracted() { return { this, "APrimalStructureLadder.bIsRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bHasLowerLaddersRetracted() { return { this, "APrimalStructureLadder.bHasLowerLaddersRetracted" }; }
    BitFieldValue<bool, unsigned __int32> bAllowPublicRetraction() { return { this, "APrimalStructureLadder.bAllowPublicRetraction" }; }

    // Functions

    static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureLadder"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureLadder();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureLadder.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureLadder.PostSpawnInitialize()"); }
    bool IsValidForSnappingFrom_Implementation(APrimalStructure* OtherStructure) { return NativeCall<bool, APrimalStructure*>(this, "APrimalStructureLadder.IsValidForSnappingFrom_Implementation(APrimalStructure*)", OtherStructure); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureLadder.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureLadder.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureLadder.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureLadder.Destroyed()"); }
    bool IsLocationClearForCharacter(AShooterCharacter* ForCharacter, const UE::Math::TVector<double>* MountLoc) { return NativeCall<bool, AShooterCharacter*, const UE::Math::TVector<double>*>(this, "APrimalStructureLadder.IsLocationClearForCharacter(AShooterCharacter*,UE::Math::TVector<double>&)", ForCharacter, MountLoc); }
    bool IsNearTopOfLadder(AShooterCharacter* theCharacter) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalStructureLadder.IsNearTopOfLadder(AShooterCharacter*)", theCharacter); }
    APrimalStructureLadder* GetTopLadder() { return NativeCall<APrimalStructureLadder*>(this, "APrimalStructureLadder.GetTopLadder()"); }
//     APrimalStructureLadder* GetBottomLadder() { return NativeCall<APrimalStructureLadder*>(this, "APrimalStructureLadder.GetBottomLadder()"); }
// FUNCTION MISSING: APrimalStructureLadder.GetBottomLadder()
    APrimalStructureLadder* GetNextLadder(bool Up) { return NativeCall<APrimalStructureLadder*, bool>(this, "APrimalStructureLadder.GetNextLadder(bool)", Up); }
    void StartClimbingLadder(AShooterCharacter* theCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureLadder.StartClimbingLadder(AShooterCharacter*)", theCharacter); }
    void CheckForEndClimbing(AShooterCharacter* theCharacter) { NativeCall<void, AShooterCharacter*>(this, "APrimalStructureLadder.CheckForEndClimbing(AShooterCharacter*)", theCharacter); }
    static void EndClimbingLadder(AShooterCharacter* theCharacter, bool bServerClimbOver, const UE::Math::TVector<double>* ServerClimbOverLoc, bool bIsFromJump) { NativeCall<void, AShooterCharacter*, bool, const UE::Math::TVector<double>*, bool>(nullptr, "APrimalStructureLadder.EndClimbingLadder(AShooterCharacter*,bool,UE::Math::TVector<double>&,bool)", theCharacter, bServerClimbOver, ServerClimbOverLoc, bIsFromJump); }
    static void ServerEndClimbing(AShooterCharacter* theCharacter, bool bIsClimbOver, UE::Math::TVector<double>* ClimbOverLoc, UE::Math::TVector<double>* JumpDir) { NativeCall<void, AShooterCharacter*, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(nullptr, "APrimalStructureLadder.ServerEndClimbing(AShooterCharacter*,bool,UE::Math::TVector<double>,UE::Math::TVector<double>)", theCharacter, bIsClimbOver, ClimbOverLoc, JumpDir); }
    void SetLaddersRetracted(bool bRetract, TArray<APrimalStructureLadder*, TSizedDefaultAllocator<32> >* TestedLadders) { NativeCall<void, bool, TArray<APrimalStructureLadder*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureLadder.SetLaddersRetracted(bool,TArray<APrimalStructureLadder*,TSizedDefaultAllocator<32>>&)", bRetract, TestedLadders); }
    void UpdateRetraction() { NativeCall<void>(this, "APrimalStructureLadder.UpdateRetraction()"); }

	float& IsAboveTopLadderOffsetField() { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.IsAboveTopLadderOffset"); }
	float& RetractMultiuseDelayField() { return *GetNativePointerField<float*>(this, "APrimalStructureLadder.RetractMultiuseDelay"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureLadder"); }

	FString& RetractLadderStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureLadder.RetractLadderString"); }
	FString& ExtendLadderStringField() { return *GetNativePointerField<FString*>(this, "APrimalStructureLadder.ExtendLadderString"); }
	BitFieldValue<bool, unsigned __int32> bUseBPUpdateRetraction() { return { this, "APrimalStructureLadder.bUseBPUpdateRetraction"}; }
	BitFieldValue<bool, unsigned __int32> bUseBPAdjustLadderMountLocation() { return { this, "APrimalStructureLadder.bUseBPAdjustLadderMountLocation"}; }
	UE::Math::TVector<double>* GetLadderJumpVelocity(UE::Math::TVector<double>* result, AShooterCharacter* theCharacter) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, AShooterCharacter*>(this, "APrimalStructureLadder.GetLadderJumpVelocity(AShooterCharacter*)", result, theCharacter); }
	void BPUpdateRetraction() { NativeCall<void>(this, "APrimalStructureLadder.BPUpdateRetraction()"); }
	void OnCharacterStartClimbingLadder(APrimalCharacter* TheChar) { NativeCall<void, APrimalCharacter*>(this, "APrimalStructureLadder.OnCharacterStartClimbingLadder(APrimalCharacter*)", TheChar); }
	void BP_SetLaddersRetracted(bool bRetract) { NativeCall<void, bool>(this, "APrimalStructureLadder.BP_SetLaddersRetracted(bool)", bRetract); }
	UE::Math::TRotator<double>* GetLadderClimbRotation(UE::Math::TRotator<double>* result, AShooterCharacter* ForCharacter) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, AShooterCharacter*>(this, "APrimalStructureLadder.GetLadderClimbRotation(AShooterCharacter*)", result, ForCharacter); }
	void OnCharacterEndClimbingLadder(APrimalCharacter* TheChar) { NativeCall<void, APrimalCharacter*>(this, "APrimalStructureLadder.OnCharacterEndClimbingLadder(APrimalCharacter*)", TheChar); }
	UE::Math::TVector<double>* BPAdjustLadderMountLocation(UE::Math::TVector<double>* result, const UE::Math::TVector<double>& CurrentMountLocation) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, const UE::Math::TVector<double>&>(this, "APrimalStructureLadder.BPAdjustLadderMountLocation(UE::Math::TVector<double>&)", result, CurrentMountLocation); }
	bool IsAboveTopLadder(AShooterCharacter* theCharacter) { return NativeCall<bool, AShooterCharacter*>(this, "APrimalStructureLadder.IsAboveTopLadder(AShooterCharacter*)", theCharacter); }
	UE::Math::TVector<double>* GetLadderMountLocation(UE::Math::TVector<double>* result, AShooterCharacter* theCharacter) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, AShooterCharacter*>(this, "APrimalStructureLadder.GetLadderMountLocation(AShooterCharacter*)", result, theCharacter); }
};