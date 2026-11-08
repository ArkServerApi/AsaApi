#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AWindBooster : public AActor
{
public:
	AWindBooster() = delete;
	~AWindBooster() = delete;
	AWindBooster(const AWindBooster&) = delete;
	AWindBooster& operator=(const AWindBooster&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWindBooster"); }

	USceneComponent*& RootSceneComponentField() { return *GetNativePointerField<USceneComponent**>(this, "AWindBooster.RootSceneComponent"); }
	UBoxComponent*& DetectionPlaneField() { return *GetNativePointerField<UBoxComponent**>(this, "AWindBooster.DetectionPlane"); }
	UMeshComponent*& MeshField() { return *GetNativePointerField<UMeshComponent**>(this, "AWindBooster.Mesh"); }
	bool& bAutoAdjustComponentsField() { return *GetNativePointerField<bool*>(this, "AWindBooster.bAutoAdjustComponents"); }
	float& DetectionSizeField() { return *GetNativePointerField<float*>(this, "AWindBooster.DetectionSize"); }
	float& BoostDurationField() { return *GetNativePointerField<float*>(this, "AWindBooster.BoostDuration"); }
	float& StaminaRecoveryBoostAmountField() { return *GetNativePointerField<float*>(this, "AWindBooster.StaminaRecoveryBoostAmount"); }
	float& EntryAngleThresholdField() { return *GetNativePointerField<float*>(this, "AWindBooster.EntryAngleThreshold"); }
	bool& bShowDebugVisualsField() { return *GetNativePointerField<bool*>(this, "AWindBooster.bShowDebugVisuals"); }
	UPlayerActivatableComponent*& PlayerActivatableField() { return *GetNativePointerField<UPlayerActivatableComponent**>(this, "AWindBooster.PlayerActivatable"); }
	AActor*& ActivatorReferenceField() { return *GetNativePointerField<AActor**>(this, "AWindBooster.ActivatorReference"); }
	FGuid& UuidField() { return *GetNativePointerField<FGuid*>(this, "AWindBooster.Uuid"); }
	float& CosThresholdField() { return *GetNativePointerField<float*>(this, "AWindBooster.CosThreshold"); }
	FGuid* GetStableGUID_Implementation(FGuid* result) { return NativeCall<FGuid*, FGuid*>(this, "AWindBooster.GetStableGUID_Implementation()", result); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWindBooster"); }
	void OnActivated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "AWindBooster.OnActivated(AShooterPlayerController*)", PC); }
	void ApplyBoostToDragonBP(APrimalDinoCharacter* Dragon) { NativeCall<void, APrimalDinoCharacter*>(this, "AWindBooster.ApplyBoostToDragonBP(APrimalDinoCharacter*)", Dragon); }
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "AWindBooster.OnEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "AWindBooster._getUObject()"); }
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult&>(this, "AWindBooster.OnBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void RegisterBuff(APrimalDinoCharacter* Dragon, APrimalBuff* InBuff) { NativeCall<void, APrimalDinoCharacter*, APrimalBuff*>(this, "AWindBooster.RegisterBuff(APrimalDinoCharacter*,APrimalBuff*)", Dragon, InBuff); }
	void RefreshActivator() { NativeCall<void>(this, "AWindBooster.RefreshActivator()"); }
	void BeginPlay() { NativeCall<void>(this, "AWindBooster.BeginPlay()"); }
	void OnDeactivated(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "AWindBooster.OnDeactivated(AShooterPlayerController*)", PC); }
	APrimalDinoCharacter* ResolveDragonFromOverlapActor(AActor* OtherActor) { return NativeCall<APrimalDinoCharacter*, AActor*>(this, "AWindBooster.ResolveDragonFromOverlapActor(AActor*)", OtherActor); }
	bool GetStaticMinimapData_Implementation(FMinimapMarkerStaticData& OutData) { return NativeCall<bool, FMinimapMarkerStaticData&>(this, "AWindBooster.GetStaticMinimapData_Implementation(FMinimapMarkerStaticData&)", OutData); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AWindBooster.Tick(float)", DeltaSeconds); }
	FGuid* GetGUID(FGuid* result) { return NativeCall<FGuid*, FGuid*>(this, "AWindBooster.GetGUID()", result); }
	void ApplyBoostToDragon(APrimalDinoCharacter* Dragon) { NativeCall<void, APrimalDinoCharacter*>(this, "AWindBooster.ApplyBoostToDragon(APrimalDinoCharacter*)", Dragon); }
	void RemoveBoostFromDragon(APrimalDinoCharacter* Dragon) { NativeCall<void, APrimalDinoCharacter*>(this, "AWindBooster.RemoveBoostFromDragon(APrimalDinoCharacter*)", Dragon); }
};
