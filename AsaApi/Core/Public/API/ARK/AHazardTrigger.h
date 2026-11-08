#pragma once
#include "BulkForward.h"


struct AHazardTrigger : ABaseBoxTrigger
{
	// Fields

	UE::Math::TVector<double>& BoundsField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AHazardTrigger.Bounds"); }
	long double& LastActivationTimeField() { return *GetNativePointerField<long double*>(this, "AHazardTrigger.LastActivationTime"); }

	// Bitfields

	// Functions

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AHazardTrigger"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAHazardTrigger();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "AHazardTrigger.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	void OnConstruction(const UE::Math::TTransform<double>* Transform) { NativeCall<void, const UE::Math::TTransform<double>*>(this, "AHazardTrigger.OnConstruction(UE::Math::TTransform<double>&)", Transform); }
	void Destroyed() { NativeCall<void>(this, "AHazardTrigger.Destroyed()"); }
	void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult* SweepResult) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int, bool, const FHitResult*>(this, "AHazardTrigger.OnTriggerBeginOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int,bool,FHitResult&)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult); }
	void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex) { NativeCall<void, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int>(this, "AHazardTrigger.OnTriggerEndOverlap(UPrimitiveComponent*,AActor*,UPrimitiveComponent*,int)", OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex); }
	//bool FindFloor(const UE::Math::TVector<double>* TestLocation, FFloorSlopeData* FloorSlope, float DepthOverride, bool UseActorNormal) { return NativeCall<bool, const UE::Math::TVector<double>*, FFloorSlopeData*, float, bool>(this, "AHazardTrigger.FindFloor(UE::Math::TVector<double>&,FFloorSlopeData&,float,bool)", TestLocation, FloorSlope, DepthOverride, UseActorNormal); }
	void Activate() { NativeCall<void>(this, "AHazardTrigger.Activate()"); }
	void Deactivate() { NativeCall<void>(this, "AHazardTrigger.Deactivate()"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("AHazardTrigger"); }

	bool& bIsActiveField() { return *GetNativePointerField<bool*>(this, "AHazardTrigger.bIsActive"); }
	bool& bConformToTerrainField() { return *GetNativePointerField<bool*>(this, "AHazardTrigger.bConformToTerrain"); }
	void BeginPlay() { NativeCall<void>(this, "AHazardTrigger.BeginPlay()"); }
	void OnCharacterExit_Implementation(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "AHazardTrigger.OnCharacterExit_Implementation(APrimalCharacter*)", Character); }
	void ClientActivation_Implementation(bool bActivate) { NativeCall<void, bool>(this, "AHazardTrigger.ClientActivation_Implementation(bool)", bActivate); }
	void OnDeactivated() { NativeCall<void>(this, "AHazardTrigger.OnDeactivated()"); }
	void OnCharacterEnter_Implementation(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "AHazardTrigger.OnCharacterEnter_Implementation(APrimalCharacter*)", Character); }
	bool FindFloor(const UE::Math::TVector<double>& TestLocation, FFloorSlopeData& FloorSlope, float DepthOverride, bool UseActorNormal) { return NativeCall<bool, const UE::Math::TVector<double>&, FFloorSlopeData&, float, bool>(this, "AHazardTrigger.FindFloor(UE::Math::TVector<double>&,FFloorSlopeData&,float,bool)", TestLocation, FloorSlope, DepthOverride, UseActorNormal); }
	bool CanActivate() { return NativeCall<bool>(this, "AHazardTrigger.CanActivate()"); }
	void ClientActivation(bool bActivate) { NativeCall<void, bool>(this, "AHazardTrigger.ClientActivation(bool)", bActivate); }
	void OnCharacterExit(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "AHazardTrigger.OnCharacterExit(APrimalCharacter*)", Character); }
	void OnActivated() { NativeCall<void>(this, "AHazardTrigger.OnActivated()"); }
	void OnCharacterEnter(APrimalCharacter* Character) { NativeCall<void, APrimalCharacter*>(this, "AHazardTrigger.OnCharacterEnter(APrimalCharacter*)", Character); }
};