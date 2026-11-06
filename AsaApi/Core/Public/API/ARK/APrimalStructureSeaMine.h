#pragma once
#include "BulkForward.h"


struct APrimalStructureSeaMine : APrimalStructure
{
    // Fields

    USphereComponent*& TriggerComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureSeaMine.TriggerComponent"); }
    USphereComponent*& ExplodingTriggerComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureSeaMine.ExplodingTriggerComponent"); }
    UParticleSystem*& ActivatedMineParticleSystemField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureSeaMine.ActivatedMineParticleSystem"); }
    UE::Math::TVector<double>& ActivatedMineParticleSystemOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeaMine.ActivatedMineParticleSystemOffset"); }
    TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& ActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeaMine.ActivateMaterials"); }
    USoundBase*& ActivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureSeaMine.ActivatedSound"); }
    float& SeaMineSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.SeaMineSpeed"); }
    float& SeaMineExplodeTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.SeaMineExplodeTime"); }
    float& ExplosionDamageField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionDamage"); }
    float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionRadius"); }
    float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureSeaMine.ExplosionImpulse"); }
    TSubclassOf<UDamageType>& ExplosionDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "APrimalStructureSeaMine.ExplosionDamageType"); }
    int& OwnerTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureSeaMine.OwnerTargetingTeam"); }
    TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >& TriggerOverlappingCharactersField() { return *GetNativePointerField<TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeaMine.TriggerOverlappingCharacters"); }
    UE::Math::TVector<double>& LastKnownTargetLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureSeaMine.LastKnownTargetLocation"); }
    APrimalCharacter*& SeaMineTargetField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalStructureSeaMine.SeaMineTarget"); }

    // Bitfields

    BitFieldValue<bool, unsigned __int32> bActivatedSeaMine() { return { this, "APrimalStructureSeaMine.bActivatedSeaMine" }; }
    BitFieldValue<bool, unsigned __int32> bDisableExplosion() { return { this, "APrimalStructureSeaMine.bDisableExplosion" }; }

    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureSeaMine"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureSeaMine();
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureSeaMine.PlacedStructure(AShooterPlayerController*)", PC); }
    bool FinalStructurePlacement(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, APawn* AttachToPawn, FName BoneName, bool bWithFlipped, FPlacementData* PlacementData) { return NativeCall<bool, APlayerController*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*, UE::Math::TRotator<double>*, APawn*, FName, bool, FPlacementData*>(this, "APrimalStructureSeaMine.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool,FPlacementData&)", PC, AtLocation, AtRotation, PlayerViewRotation, AttachToPawn, BoneName, bWithFlipped, PlacementData); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureSeaMine.BeginPlay()"); }
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureSeaMine.Tick(float)", DeltaSeconds); }
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "APrimalStructureSeaMine.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, Other, OtherComp, OtherBodyIndex); }
    void RefreshSeaMineTarget() { NativeCall<void>(this, "APrimalStructureSeaMine.RefreshSeaMineTarget()"); }
    void ActivateSeaMine() { NativeCall<void>(this, "APrimalStructureSeaMine.ActivateSeaMine()"); }
    void Explode() { NativeCall<void>(this, "APrimalStructureSeaMine.Explode()"); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureSeaMine.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalStructureSeaMine.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureSeaMine"); }

	void OnRep_SeaMineTarget() { NativeCall<void>(this, "APrimalStructureSeaMine.OnRep_SeaMineTarget()"); }
	void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "APrimalStructureSeaMine.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnHit(AActor* SelfActor, AActor* Other, UE::Math::TVector<double>* NormalImpulse, const FHitResult& Hit) { if (!NormalImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, AActor *, UE :: Math :: TVector < double >, const FHitResult &>(this, "APrimalStructureSeaMine.OnHit(AActor*,AActor*,UE::Math::TVector<double>,FHitResult&)", SelfActor, Other, *NormalImpulse, Hit); }
	void OnExplodingTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "APrimalStructureSeaMine.OnExplodingTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
};