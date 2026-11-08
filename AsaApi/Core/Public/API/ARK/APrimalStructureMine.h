#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructure.h"

struct APrimalStructureMine : APrimalStructure
{
public:
	APrimalStructureMine() = delete;
	~APrimalStructureMine() = delete;
	APrimalStructureMine(const APrimalStructureMine&) = delete;
	APrimalStructureMine& operator=(const APrimalStructureMine&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureMine"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureMine"); }

	float& MineSpeedField() { return *GetNativePointerField<float*>(this, "APrimalStructureMine.MineSpeed"); }
	float& MineExplodeTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureMine.MineExplodeTime"); }
	float& ExplosionDamageField() { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ExplosionDamage"); }
	float& ExplosionRadiusField() { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ExplosionRadius"); }
	float& ExplosionImpulseField() { return *GetNativePointerField<float*>(this, "APrimalStructureMine.ExplosionImpulse"); }
	int& OwnerTargetingTeamField() { return *GetNativePointerField<int*>(this, "APrimalStructureMine.OwnerTargetingTeam"); }

	void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "APrimalStructureMine.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, Other, OtherComp, OtherBodyIndex); }
	void Explode() { NativeCall<void>(this, "APrimalStructureMine.Explode()"); }
	void OnRep_MineTarget() { NativeCall<void>(this, "APrimalStructureMine.OnRep_MineTarget()"); }
	void RefreshMineTarget() { NativeCall<void>(this, "APrimalStructureMine.RefreshMineTarget()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureMine.Tick(float)", DeltaSeconds); }
	void ActivateMine() { NativeCall<void>(this, "APrimalStructureMine.ActivateMine()"); }
	void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureMine.PlacedStructure(AShooterPlayerController*)", PC); }
	void ManuallyPlacedStructureLogic() { NativeCall<void>(this, "APrimalStructureMine.ManuallyPlacedStructureLogic()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureMine.BeginPlay()"); }

	BitFieldValue<bool, unsigned char> bCanActivateUnderwater() { return { this, "APrimalStructureMine.bCanActivateUnderwater"}; }
	BitFieldValue<bool, unsigned char> bCanActivateAboveWater() { return { this, "APrimalStructureMine.bCanActivateAboveWater"}; }
	BitFieldValue<bool, unsigned char> bActivatedMine() { return { this, "APrimalStructureMine.bActivatedMine"}; }
	BitFieldValue<bool, unsigned char> bDisableExplosion() { return { this, "APrimalStructureMine.bDisableExplosion"}; }

	USphereComponent*& TriggerComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureMine.TriggerComponent"); }
	USphereComponent*& ExplodingTriggerComponentField() { return *GetNativePointerField<USphereComponent**>(this, "APrimalStructureMine.ExplodingTriggerComponent"); }
	UParticleSystem*& ActivatedMineParticleSystemField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalStructureMine.ActivatedMineParticleSystem"); }
	USoundBase*& ActivatedSoundField() { return *GetNativePointerField<USoundBase**>(this, "APrimalStructureMine.ActivatedSound"); }
	APrimalCharacter*& MineTargetField() { return *GetNativePointerField<APrimalCharacter**>(this, "APrimalStructureMine.MineTarget"); }

	UE::Math::TVector<double>& ActivatedMineParticleSystemOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureMine.ActivatedMineParticleSystemOffset"); }
	TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& ActivateMaterialsField() { return *GetNativePointerField<TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureMine.ActivateMaterials"); }
	TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >& TriggerOverlappingCharactersField() { return *GetNativePointerField<TArray<APrimalCharacter*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureMine.TriggerOverlappingCharacters"); }
	UE::Math::TVector<double>& LastKnownTargetLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureMine.LastKnownTargetLocation"); }
	FTimerHandle& RefreshMineTargetTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureMine.RefreshMineTargetTimerHandle"); }
	void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "APrimalStructureMine.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	bool FinalStructurePlacement(APlayerController* PC, UE::Math::TVector<double>* AtLocation, UE::Math::TRotator<double>* AtRotation, UE::Math::TRotator<double>* PlayerViewRotation, APawn* AttachToPawn, FName BoneName, bool bWithFlipped, FPlacementData& PlacementData) { if (!AtLocation) throw std::invalid_argument("Null native value parameter"); if (!AtRotation) throw std::invalid_argument("Null native value parameter"); if (!PlayerViewRotation) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, APlayerController *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, UE :: Math :: TRotator < double >, APawn *, FName, bool, FPlacementData &>(this, "APrimalStructureMine.FinalStructurePlacement(APlayerController*,UE::Math::TVector<double>,UE::Math::TRotator<double>,UE::Math::TRotator<double>,APawn*,FName,bool,FPlacementData&)", PC, *AtLocation, *AtRotation, *PlayerViewRotation, AttachToPawn, BoneName, bWithFlipped, PlacementData); }
	void PlayDying(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalStructureMine.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void OnExplodingTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "APrimalStructureMine.OnExplodingTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnHit(AActor* SelfActor, AActor* Other, UE::Math::TVector<double>* NormalImpulse, const FHitResult& Hit) { if (!NormalImpulse) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, AActor *, AActor *, UE :: Math :: TVector < double >, const FHitResult &>(this, "APrimalStructureMine.OnHit(AActor*,AActor*,UE::Math::TVector<double>,FHitResult&)", SelfActor, Other, *NormalImpulse, Hit); }
};
