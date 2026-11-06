#pragma once
#include "BulkForward.h"


struct APrimalStructureExplosive : APrimalStructure
{
    // Fields

    unsigned int& ConstructorPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureExplosive.ConstructorPlayerDataID"); }
    AShooterCharacter*& ConstructorPawnField() { return *GetNativePointerField<AShooterCharacter**>(this, "APrimalStructureExplosive.ConstructorPawn"); }
    int& ConstructorTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureExplosive.ConstructorTargetingTeam"); }
    UE::Math::TVector<double>& ExplosiveLocOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureExplosive.ExplosiveLocOffset"); }
    UE::Math::TRotator<double>& ExplosiveRotOffsetField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureExplosive.ExplosiveRotOffset"); }
    float& PlacementInitialSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementInitialSpeed"); }
    float& PlacementMaxSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementMaxSpeed"); }
    float& PlacementAccelField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementAccel"); }
    float& ExplosionDamageField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionDamage"); }
    float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionRadius"); }
    float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.ExplosionImpulse"); }
    TSubclassOf<UDamageType>& ExplosionDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureExplosive.ExplosionDamageType"); }
    TSubclassOf<UPrimalItem>& ExplosiveAmmoItemTemplateField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureExplosive.ExplosiveAmmoItemTemplate"); }
    float& AlertDinosRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.AlertDinosRange"); }
    TSubclassOf<UPrimalItem>& PickupItemClassField() { return *GetNativePointerField<TSubclassOf<UPrimalItem>*>(this, "APrimalStructureExplosive.PickupItemClass"); }
    int& PickUpQuantityField() { return *GetNativePointerField<int*>(this, "APrimalStructureExplosive.PickUpQuantity"); }
    UStaticMeshComponent*& AnimatedComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "APrimalStructureExplosive.AnimatedComponent"); }
    float& FluidSimSplashStrengthField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.FluidSimSplashStrength"); }
    UNiagaraSystem*& FluidSimSplashTemplateOverrideField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalStructureExplosive.FluidSimSplashTemplateOverride"); }
    float& AnimationTargetHeightField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.AnimationTargetHeight"); }
    float& PlacementInterpSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureExplosive.PlacementInterpSpeed"); }
    UE::Math::TVector<double>& OriginalRelativeLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureExplosive.OriginalRelativeLocation"); }
    UE::Math::TRotator<double>& OriginalRelativeRotationField() { return *GetNativePointerField<UE::Math::TRotator<double>*>(this, "APrimalStructureExplosive.OriginalRelativeRotation"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bDoNotUseAmmoOnNextPlace() { return { this, "APrimalStructureExplosive.bDoNotUseAmmoOnNextPlace" }; }
    BitFieldValue<bool, unsigned __int32> bAnimatePlacement() { return { this, "APrimalStructureExplosive.bAnimatePlacement" }; }
    BitFieldValue<bool, unsigned __int32> bAlertDinos() { return { this, "APrimalStructureExplosive.bAlertDinos" }; }
    BitFieldValue<bool, unsigned __int32> bWasJustPlaced() { return { this, "APrimalStructureExplosive.bWasJustPlaced" }; }

    // Functions

    static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureExplosive"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureExplosive();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureExplosive.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    //void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructureExplosive.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
    void PostSpawnInitialize() { NativeCall<void>(this, "APrimalStructureExplosive.PostSpawnInitialize()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureExplosive.Tick(float)", DeltaSeconds); }
    void SetPlayerConstructor(APlayerController* PC) { NativeCall<void, APlayerController*>(this, "APrimalStructureExplosive.SetPlayerConstructor(APlayerController*)", PC); }
    bool CanDetonateMe(AShooterCharacter* Character, bool bUsingRemote) { return NativeCall<bool, AShooterCharacter*, bool>(this, "APrimalStructureExplosive.CanDetonateMe(AShooterCharacter*,bool)", Character, bUsingRemote); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureExplosive.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureExplosive.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void PrepareAsPlacementPreview() { NativeCall<void>(this, "APrimalStructureExplosive.PrepareAsPlacementPreview()"); }
    void ApplyPlacementPreview() { NativeCall<void>(this, "APrimalStructureExplosive.ApplyPlacementPreview()"); }
    void NetDoSpawnEffects_Implementation() { NativeCall<void>(this, "APrimalStructureExplosive.NetDoSpawnEffects_Implementation()"); }

	bool& bExplosiveReadyField() { return *GetNativePointerField<bool*>(this, "APrimalStructureExplosive.bExplosiveReady"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureExplosive"); }

	void ForceDetonateExplosive() { NativeCall<void>(this, "APrimalStructureExplosive.ForceDetonateExplosive()"); }
	void NetIgnoreDestructionEvents_Implementation() { NativeCall<void>(this, "APrimalStructureExplosive.NetIgnoreDestructionEvents_Implementation()"); }
	void OnDeserializedByGame(EOnDeserializationType::Type DeserializationType) { NativeCall<void, EOnDeserializationType::Type>(this, "APrimalStructureExplosive.OnDeserializedByGame(EOnDeserializationType::Type)", DeserializationType); }
};