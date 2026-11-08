#pragma once
#include "BulkForward.h"


struct APrimalStructureBed : APrimalStructureSeating
{
    // Fields

    UE::Math::TVector<double>& PlayerSpawnLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureBed.PlayerSpawnLocOffset"); }
    UE::Math::TRotator<double>& PlayerSpawnRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureBed.PlayerSpawnRotOffset"); }
    unsigned int& LinkedPlayerIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureBed.LinkedPlayerID"); }
    FString& LinkedPlayerNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.LinkedPlayerName"); }
    FString& BedNameField() { return *GetNativePointerField<FString*>(this, "APrimalStructureBed.BedName"); }
    float& UseCooldownTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownTime"); }
    float& UseCooldownRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.UseCooldownRadius"); }
    float& AttachedToPlatformStructureEnemySpawnPreventionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureBed.AttachedToPlatformStructureEnemySpawnPreventionRadius"); }
    TObjectPtr<UTexture2D>& FastTravelIconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "APrimalStructureBed.FastTravelIcon"); }
    long double& NextAllowedUseTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.NextAllowedUseTime"); }
    long double& LastSignNamingTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureBed.LastSignNamingTime"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDestroyAfterRespawnUse() { return { this, "APrimalStructureBed.bDestroyAfterRespawnUse" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureBed"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureBed();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    bool AllowPickupForItem(AShooterPlayerController* ForPC) { return NativeCall<bool, AShooterPlayerController*>(this, "APrimalStructureBed.AllowPickupForItem(AShooterPlayerController*)", ForPC); }
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureBed.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureBed.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureBed.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureBed.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ProcessEditText(AShooterPlayerController* ForPC, const FString* TextToUse, bool __formal) { NativeCall<void, AShooterPlayerController*, const FString*, bool>(this, "APrimalStructureBed.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, __formal); }
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureBed.PlacedStructure(AShooterPlayerController*)", PC); }
    bool AllowSpawnForPlayer(AShooterPlayerController* PC, bool bCheckCooldownTime, APrimalStructure* FromStructure) { return NativeCall<bool, AShooterPlayerController*, bool, APrimalStructure*>(this, "APrimalStructureBed.AllowSpawnForPlayer(AShooterPlayerController*,bool,APrimalStructure*)", PC, bCheckCooldownTime, FromStructure); }
    bool AllowSpawnForDownloadedPlayer(unsigned __int64 PlayerDataID, unsigned __int64 TribeID, bool bCheckCooldownTime) { return NativeCall<bool, unsigned __int64, unsigned __int64, bool>(this, "APrimalStructureBed.AllowSpawnForDownloadedPlayer(unsigned__int64,unsigned__int64,bool)", PlayerDataID, TribeID, bCheckCooldownTime); }
    bool CheckStructureActivateTribeGroupPermission(unsigned __int64 PlayerDataID, unsigned __int64 TribeID) { return NativeCall<bool, unsigned __int64, unsigned __int64>(this, "APrimalStructureBed.CheckStructureActivateTribeGroupPermission(unsigned__int64,unsigned__int64)", PlayerDataID, TribeID); }
    void SpawnedPlayerFor_Implementation(AShooterPlayerController* PC, APawn* ForPawn) { NativeCall<void, AShooterPlayerController*, APawn*>(this, "APrimalStructureBed.SpawnedPlayerFor_Implementation(AShooterPlayerController*,APawn*)", PC, ForPawn); }
    void Destroyed() { NativeCall<void>(this, "APrimalStructureBed.Destroyed()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureBed.BeginPlay()"); }
    FSpawnPointInfo* GetSpawnPointInfo(FSpawnPointInfo* result) { return NativeCall<FSpawnPointInfo*, FSpawnPointInfo*>(this, "APrimalStructureBed.GetSpawnPointInfo()", result); }
    static AActor* FindBedWithID(UWorld* forWorld, int theBedID) { return NativeCall<AActor*, UWorld*, int>(nullptr, "APrimalStructureBed.FindBedWithID(UWorld*,int)", forWorld, theBedID); }
    void PostInitializeComponents() { NativeCall<void>(this, "APrimalStructureBed.PostInitializeComponents()"); }
    FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalStructureBed.GetDescriptiveName()", result); }
    //TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* GetTooltipStructureInfo(TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >* result, AShooterPlayerController* PlayerOwner) { return NativeCall<TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, TArray<FTooltipTextInfo, TSizedDefaultAllocator<32> >*, AShooterPlayerController*>(this, "APrimalStructureBed.GetTooltipStructureInfo(AShooterPlayerController*)", result, PlayerOwner); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureBed"); }

	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalStructureBed.DrawHUD(AShooterHUD*)", HUD); }
	int IsAllowedToBuild(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, FPlacementData& OutPlacementData, bool bDontAdjustForMaxRange, UE::Math::TRotator<double>* PlayerViewRotation, bool bFinalPlacement, bool bUseOriginalOutPlacementData, APawn* BuildingPawnOverride) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); if (!PlayerViewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<int, APlayerController *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, FPlacementData &, bool, UE :: Math :: TRotator < double >, bool, bool, APawn *>(this, "APrimalStructureBed.IsAllowedToBuild(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,FPlacementData&,bool,UE::Math::TRotator<double>,bool,bool,APawn*)", PC, *AtLocation, *AtRotation, OutPlacementData, bDontAdjustForMaxRange, *PlayerViewRotation, bFinalPlacement, bUseOriginalOutPlacementData, BuildingPawnOverride); }
	UE::Math::TVector<double>* GetPlayerSpawnLocation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureBed.GetPlayerSpawnLocation()", result); }
	void SpawnedPlayerFor(AShooterPlayerController* PC, APawn* ForPawn) { NativeCall<void, AShooterPlayerController*, APawn*>(this, "APrimalStructureBed.SpawnedPlayerFor(AShooterPlayerController*,APawn*)", PC, ForPawn); }
	UE::Math::TRotator<double>* GetPlayerSpawnRotation(UE::Math::TRotator<double>* result) { return NativeCall<UE::Math::TRotator<double>*, UE::Math::TRotator<double>*>(this, "APrimalStructureBed.GetPlayerSpawnRotation()", result); }
};