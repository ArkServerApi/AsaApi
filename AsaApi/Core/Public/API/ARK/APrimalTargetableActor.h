#pragma once
#include "BulkForward.h"
#include "SparseForward.h"


struct APrimalTargetableActor : AActor
{
	// Fields

	UParticleSystem*& HurtFXField() { return *GetNativePointerField<UParticleSystem**>(this, "APrimalTargetableActor.HurtFX"); }
	TArray<FDamageTypeAdjuster, TSizedDefaultAllocator<32> >& DamageTypeAdjustersField() { return *GetNativePointerField<TArray<FDamageTypeAdjuster, TSizedDefaultAllocator<32> >*>(this, "APrimalTargetableActor.DamageTypeAdjusters"); }
	float& LowHealthPercentageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LowHealthPercentage"); }
	
	float& LifeSpanAfterDeathField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LifeSpanAfterDeath"); }
	USoundCue*& DeathSoundField() { return *GetNativePointerField<USoundCue**>(this, "APrimalTargetableActor.DeathSound"); }
	
	
	
	
	UE::Math::TVector<double>& DestructibleMeshLocationOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalTargetableActor.DestructibleMeshLocationOffset"); }
	UE::Math::TVector<double>& DestructibleMeshScaleOverrideField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalTargetableActor.DestructibleMeshScaleOverride"); }
	
	FString& DescriptiveNameField() { return *GetNativePointerField<FString*>(this, "APrimalTargetableActor.DescriptiveName"); }
	//TSubclassOf<APrimalDestructibleActor>& DestroyedMeshActorClassField() { return *GetNativePointerField<TSubclassOf<APrimalDestructibleActor>*>(this, "APrimalTargetableActor.DestroyedMeshActorClass"); }
	//TSoftObjectPtr<UGeometryCollection>& SoftDestructionGeoCollectionAssetField() { return *GetNativePointerField<TSoftObjectPtr<UGeometryCollection>*>(this, "APrimalTargetableActor.SoftDestructionGeoCollectionAsset"); }
	//TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >& MultiSoftDestructionGeoCollectionAssetsField() { return *GetNativePointerField<TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "APrimalTargetableActor.MultiSoftDestructionGeoCollectionAssets"); }
	float& ReplicatedHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.ReplicatedHealth"); }
	float& HealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.Health"); }
	float& MaxHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.MaxHealth"); }
	
	TArray<FBoneDamageAdjuster, TSizedDefaultAllocator<32> >& BoneDamageAdjustersField() { return *GetNativePointerField<TArray<FBoneDamageAdjuster, TSizedDefaultAllocator<32> >*>(this, "APrimalTargetableActor.BoneDamageAdjusters"); }
	float& LastReplicatedHealthValueField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastReplicatedHealthValue"); }
	
	
	
	UPrimalHarvestingComponent*& MyHarvestingComponentField() { return *GetNativePointerField<UPrimalHarvestingComponent**>(this, "APrimalTargetableActor.MyHarvestingComponent"); }
	TSharedPtr<FAttachedInstancedHarvestingElement>& MyHarvestingElementField() { return *GetNativePointerField<TSharedPtr<FAttachedInstancedHarvestingElement>*>(this, "APrimalTargetableActor.MyHarvestingElement"); }
	TSubclassOf<UPrimalStructureSettings>& StructureSettingsClassField() { return *GetNativePointerField<TSubclassOf<UPrimalStructureSettings>*>(this, "APrimalTargetableActor.StructureSettingsClass"); }
	UPrimalStructureSettings*& MyStructureSettingsCDOField() { return *GetNativePointerField<UPrimalStructureSettings**>(this, "APrimalTargetableActor.MyStructureSettingsCDO"); }
	float& LastHealthBeforeTakeDamageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastHealthBeforeTakeDamage"); }
	long double& NextAllowRepairTimeField() { return *GetNativePointerField<long double*>(this, "APrimalTargetableActor.NextAllowRepairTime"); }
	float& LastPreBlueprintAdjustmentActualDamageField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastPreBlueprintAdjustmentActualDamage"); }
	float& LastReplicatedHealthField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.LastReplicatedHealth"); }
	AActor*& MyDestructionActorField() { return *GetNativePointerField<AActor**>(this, "APrimalTargetableActor.MyDestructionActor"); }

	// Bitfields

	
	
	
	BitFieldValue<bool, unsigned __int32> bIsDead() { return { this, "APrimalTargetableActor.bIsDead" }; }
	
	BitFieldValue<bool, unsigned __int32> bSetWithinPreventionVolume() { return { this, "APrimalTargetableActor.bSetWithinPreventionVolume" }; }
	BitFieldValue<bool, unsigned __int32> bWithinPreventionVolume() { return { this, "APrimalTargetableActor.bWithinPreventionVolume" }; }
	
	
	BitFieldValue<bool, unsigned __int32> bForceZeroDamageProcessing() { return { this, "APrimalTargetableActor.bForceZeroDamageProcessing" }; }
	BitFieldValue<bool, unsigned __int32> bForceFloatingDamageNumbers() { return { this, "APrimalTargetableActor.bForceFloatingDamageNumbers" }; }
	
	BitFieldValue<bool, unsigned __int32> bIgnoreDestructionEffects() { return { this, "APrimalTargetableActor.bIgnoreDestructionEffects" }; }
	
	BitFieldValue<bool, unsigned __int32> bUseHarvestingComponent() { return { this, "APrimalTargetableActor.bUseHarvestingComponent" }; }
	
	BitFieldValue<bool, unsigned __int32> BPOverrideDestroyedMeshTextures() { return { this, "APrimalTargetableActor.BPOverrideDestroyedMeshTextures" }; }

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalTargetableActor"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalTargetableActor();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void PostInitializeComponents() { NativeCall<void>(this, "APrimalTargetableActor.PostInitializeComponents()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalTargetableActor.BeginPlay()"); }
	void FellOutOfWorld(const UDamageType* dmgType) { NativeCall<void, const UDamageType*>(this, "APrimalTargetableActor.FellOutOfWorld(UDamageType&)", dmgType); }
	bool IsDead() { bool bDead;  ProcessEvent(ClassField()->FindFunctionByName("IsDead", EIncludeSuperFlag::IncludeSuper), &bDead); return bDead; }
	void AdjustDamage(float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float*, const FDamageEvent*, AController*, AActor*>(this, "APrimalTargetableActor.AdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	void TestAdjustDamage(float* Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float*, const FDamageEvent*, AController*, AActor*>(this, "APrimalTargetableActor.TestAdjustDamage(float&,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	float TakeDamage(float Damage, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { return NativeCall<float, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalTargetableActor.TakeDamage(float,FDamageEvent&,AController*,AActor*)", Damage, DamageEvent, EventInstigator, DamageCauser); }
	bool Die(float KillingDamage, const FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent*, AController*, AActor*>(this, "APrimalTargetableActor.Die(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	void PlayDyingGeneric_Implementation(float KillingDamage, FPointDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FPointDamageEvent*, APawn*, AActor*>(this, "APrimalTargetableActor.PlayDyingGeneric_Implementation(float,FDamageEvent,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void PlayDyingRadial_Implementation(float KillingDamage, FRadialDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, FRadialDamageEvent*, APawn*, AActor*>(this, "APrimalTargetableActor.PlayDyingRadial_Implementation(float,FRadialDamageEvent,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void GetDestructionEffectTransform(UE::Math::TVector<double>* OutLocation, UE::Math::TRotator<double>* OutRotation) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalTargetableActor.GetDestructionEffectTransform(UE::Math::TVector<double>&,UE::Math::TRotator<double>&)", OutLocation, OutRotation); }
	//TSoftObjectPtr<UGeometryCollection>* GetDestroyedMesh(TSoftObjectPtr<UGeometryCollection>* result) { return NativeCall<TSoftObjectPtr<UGeometryCollection> *, TSoftObjectPtr<UGeometryCollection>*>(this, "APrimalTargetableActor.GetDestroyedMesh()", result); }
	//TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >* GetDestroyedMeshes(TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >*, TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "APrimalTargetableActor.GetDestroyedMeshes()", result); }
	void PlayDying(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalTargetableActor.PlayDying(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void SpawnDestroyedMesh(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*>(this, "APrimalTargetableActor.SpawnDestroyedMesh(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	//void CreateSingleDestroyedMesh(float KillingDamage, const FDamageEvent* DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser, TSoftObjectPtr<UGeometryCollection>* destroyedMeshAssetSoftPtr, UE::Math::TVector<double>* DestructibleMeshLocationOffset_Single, UE::Math::TVector<double>* DestructibleMeshScaleOverride_Single, UE::Math::TRotator<double>* DestructibleMeshRotationOffset_Single) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*, TSoftObjectPtr<UGeometryCollection>*, UE::Math::TVector<double>*, UE::Math::TVector<double>*, UE::Math::TRotator<double>*>(this, "APrimalTargetableActor.CreateSingleDestroyedMesh(float,FDamageEvent&,APawn*,AActor*,TSoftObjectPtr<UGeometryCollection>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TRotator<double>)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser, destroyedMeshAssetSoftPtr, DestructibleMeshLocationOffset_Single, DestructibleMeshScaleOverride_Single, DestructibleMeshRotationOffset_Single); }
	void PlayHitEffectPoint_Implementation(float DamageTaken, FPointDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FPointDamageEvent*, APawn*, AActor*>(this, "APrimalTargetableActor.PlayHitEffectPoint_Implementation(float,FPointDamageEvent,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffectRadial_Implementation(float DamageTaken, FRadialDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) { NativeCall<void, float, FRadialDamageEvent*, APawn*, AActor*>(this, "APrimalTargetableActor.PlayHitEffectRadial_Implementation(float,FRadialDamageEvent,APawn*,AActor*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser); }
	void PlayHitEffect(float DamageTaken, const FDamageEvent* DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath, bool bSuppressImpactSound) { NativeCall<void, float, const FDamageEvent*, APawn*, AActor*, bool, bool>(this, "APrimalTargetableActor.PlayHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,bool)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, bSuppressImpactSound); }
	void PreReplication(IRepChangedPropertyTracker* ChangedPropertyTracker) { NativeCall<void, IRepChangedPropertyTracker*>(this, "APrimalTargetableActor.PreReplication(IRepChangedPropertyTracker&)", ChangedPropertyTracker); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalTargetableActor.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	float GetMaxHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetMaxHealth()"); }
	bool IsAlive() { return NativeCall<bool>(this, "APrimalTargetableActor.IsAlive()"); }
	FString* GetDescriptiveName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalTargetableActor.GetDescriptiveName()", result); }
	FString* GetShortName(FString* result) { return NativeCall<FString*, FString*>(this, "APrimalTargetableActor.GetShortName()", result); }
	float GetHealth() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealth()"); }
	float GetHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetHealthPercentage()"); }
	float SetHealth(float newHealth) { return NativeCall<float, float>(this, "APrimalTargetableActor.SetHealth(float)", newHealth); }
	void SetMaxHealth(float newMaxHealth) { NativeCall<void, float>(this, "APrimalTargetableActor.SetMaxHealth(float)", newMaxHealth); }
	TSubclassOf<UToolTipWidget>* GetOverlayTooltipTemplate(TSubclassOf<UToolTipWidget>* result) { return NativeCall<TSubclassOf<UToolTipWidget> *, TSubclassOf<UToolTipWidget>*>(this, "APrimalTargetableActor.GetOverlayTooltipTemplate()", result); }
	bool IsOfTribe(int ID) { return NativeCall<bool, int>(this, "APrimalTargetableActor.IsOfTribe(int)", ID); }
	void NetUpdatedHealth_Implementation(int NewHealth) { NativeCall<void, int>(this, "APrimalTargetableActor.NetUpdatedHealth_Implementation(int)", NewHealth); }
	bool IsTargetableDead() { return NativeCall<bool>(this, "APrimalTargetableActor.IsTargetableDead()"); }
	void Suicide() { NativeCall<void>(this, "APrimalTargetableActor.Suicide()"); }
	bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalTargetableActor.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }
	void UpdatedHealth(bool bDoReplication) { NativeCall<void, bool>(this, "APrimalTargetableActor.UpdatedHealth(bool)", bDoReplication); }
	bool AllowRadialDamageWithoutVisiblityTrace(const FHitResult* Hit) { return NativeCall<bool, const FHitResult*>(this, "APrimalTargetableActor.AllowRadialDamageWithoutVisiblityTrace(FHitResult&)", Hit); }
	bool IsInvincible() { return NativeCall<bool>(this, "APrimalTargetableActor.IsInvincible()"); }
	void HarvestingDepleted(UPrimalHarvestingComponent* fromComponent) { NativeCall<void, UPrimalHarvestingComponent*>(this, "APrimalTargetableActor.HarvestingDepleted(UPrimalHarvestingComponent*)", fromComponent); }
	struct FPrimalTargetableActorSparseClassData* GetPrimalTargetableActorSparseClassData(EGetSparseClassDataMethod GetMethod)
	{
		return (FPrimalTargetableActorSparseClassData*)this->ClassPrivateField()->GetSparseClassData(GetMethod);
	}

	float& CachedPreventionVolumeDamageMultField() { return *GetNativePointerField<float*>(this, "APrimalTargetableActor.CachedPreventionVolumeDamageMult"); }

	FPrimalTargetableActorSparseClassData* GetMutablePrimalTargetableActorSparseClassData() { return const_cast<FPrimalTargetableActorSparseClassData*>(GetPrimalTargetableActorSparseClassData(EGetSparseClassDataMethod::CreateIfNull)); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalTargetableActor"); }

	UNiagaraSystem*& HurtFX_NiagaraField() { return *GetNativePointerField<UNiagaraSystem**>(this, "APrimalTargetableActor.HurtFX_Niagara"); }
	TEnumAsByte<EShooterPhysMaterialType::Type>& TargetableDamageFXDefaultPhysMaterialField() { return *GetNativePointerField<TEnumAsByte<EShooterPhysMaterialType::Type>*>(this, "APrimalTargetableActor.TargetableDamageFXDefaultPhysMaterial"); }
	BitFieldValue<bool, unsigned char> bIgnoreSpawnEffects() { return { this, "APrimalTargetableActor.bIgnoreSpawnEffects"}; }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APrimalTargetableActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void OnRep_ReplicatedHealth() { NativeCall<void>(this, "APrimalTargetableActor.OnRep_ReplicatedHealth()"); }
	bool BPSupressImpactEffects(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath, UPrimitiveComponent* HitComponent) { return NativeCall<bool, float, const FDamageEvent&, APawn*, AActor*, bool, UPrimitiveComponent*>(this, "APrimalTargetableActor.BPSupressImpactEffects(float,FDamageEvent&,APawn*,AActor*,bool,UPrimitiveComponent*)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent); }
	void BPDied(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, AController*, AActor*>(this, "APrimalTargetableActor.BPDied(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	EReplicationGraphBehavior GetRepGraphBehavior() { return NativeCall<EReplicationGraphBehavior>(this, "APrimalTargetableActor.GetRepGraphBehavior()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APrimalTargetableActor._getUObject()"); }
	void BPPlayDyingFXOnly(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalTargetableActor.BPPlayDyingFXOnly(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	bool IsTargetable() { return NativeCall<bool>(this, "APrimalTargetableActor.IsTargetable()"); }
	float GetLowHealthPercentage() { return NativeCall<float>(this, "APrimalTargetableActor.GetLowHealthPercentage()"); }
	void BPSpawnDestroyedMesh(float KillingDamage, const FDamageEvent& DamageEvent, APawn* InstigatingPawn, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent&, APawn*, AActor*>(this, "APrimalTargetableActor.BPSpawnDestroyedMesh(float,FDamageEvent&,APawn*,AActor*)", KillingDamage, DamageEvent, InstigatingPawn, DamageCauser); }
	void Destroyed() { NativeCall<void>(this, "APrimalTargetableActor.Destroyed()"); }
	void OverrideDestroyedMeshTextures(UMeshComponent* meshComp) { NativeCall<void, UMeshComponent*>(this, "APrimalTargetableActor.OverrideDestroyedMeshTextures(UMeshComponent*)", meshComp); }
	bool CanDie(float KillingDamage, const FDamageEvent& DamageEvent, AController* Killer, AActor* DamageCauser) { return NativeCall<bool, float, const FDamageEvent&, AController*, AActor*>(this, "APrimalTargetableActor.CanDie(float,FDamageEvent&,AController*,AActor*)", KillingDamage, DamageEvent, Killer, DamageCauser); }
	EShooterPhysMaterialType::Type GetTargetableDamageFXDefaultPhysMaterial() { return NativeCall<EShooterPhysMaterialType::Type>(this, "APrimalTargetableActor.GetTargetableDamageFXDefaultPhysMaterial()"); }
	void SetupDynamicMeshMaterials(UMeshComponent* meshComp) { NativeCall<void, UMeshComponent*>(this, "APrimalTargetableActor.SetupDynamicMeshMaterials(UMeshComponent*)", meshComp); }
	void DrawHUD(AShooterHUD* HUD) { NativeCall<void, AShooterHUD*>(this, "APrimalTargetableActor.DrawHUD(AShooterHUD*)", HUD); }
	void BPHitEffect(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser, bool bIsLocalPath, UPrimitiveComponent* HitComponent, UE::Math::TVector<double>* DamageLoc, UE::Math::TRotator<double>* HitNormal) { if (!DamageLoc) throw std::invalid_argument("Null native value parameter"); if (!HitNormal) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, float, const FDamageEvent &, APawn *, AActor *, bool, UPrimitiveComponent *, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >>(this, "APrimalTargetableActor.BPHitEffect(float,FDamageEvent&,APawn*,AActor*,bool,UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TRotator<double>)", DamageTaken, DamageEvent, PawnInstigator, DamageCauser, bIsLocalPath, HitComponent, *DamageLoc, *HitNormal); }
};