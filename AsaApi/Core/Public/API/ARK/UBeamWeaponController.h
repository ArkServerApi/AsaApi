#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UBeamWeaponController : public UActorComponent
{
public:
	UBeamWeaponController() = delete;
	~UBeamWeaponController() = delete;
	UBeamWeaponController(const UBeamWeaponController&) = delete;
	UBeamWeaponController& operator=(const UBeamWeaponController&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UBeamWeaponController"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UBeamWeaponController"); }

	FBeamStoppedFiringEvent& BeamStoppedFiringEventField() { return *GetNativePointerField<FBeamStoppedFiringEvent*>(this, "UBeamWeaponController.BeamStoppedFiringEvent"); }
	FBeamsStoppedFiringEvent& BeamsStoppedFiringEventField() { return *GetNativePointerField<FBeamsStoppedFiringEvent*>(this, "UBeamWeaponController.BeamsStoppedFiringEvent"); }
	bool StartChargingBeam_Implementation() { return NativeCall<bool>(this, "UBeamWeaponController.StartChargingBeam_Implementation()"); }
	void OnBeamStoppedFiringHandler(UBeamWeaponComponent* BeamWeaponComp) { NativeCall<void, UBeamWeaponComponent*>(this, "UBeamWeaponController.OnBeamStoppedFiringHandler(UBeamWeaponComponent*)", BeamWeaponComp); }
	bool FireBeams_Implementation() { return NativeCall<bool>(this, "UBeamWeaponController.FireBeams_Implementation()"); }
	TArray<UBeamWeaponComponent*, TSizedDefaultAllocator<32> >* GetBeamWeaponComponents(TArray<UBeamWeaponComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UBeamWeaponComponent*, TSizedDefaultAllocator<32> >*, TArray<UBeamWeaponComponent*, TSizedDefaultAllocator<32> >*>(this, "UBeamWeaponController.GetBeamWeaponComponents()", result); }
	void StopFiringBeams_Implementation() { NativeCall<void>(this, "UBeamWeaponController.StopFiringBeams_Implementation()"); }
	void InitializeComponent() { NativeCall<void>(this, "UBeamWeaponController.InitializeComponent()"); }
	bool StartChargingBeams_Implementation() { return NativeCall<bool>(this, "UBeamWeaponController.StartChargingBeams_Implementation()"); }
	bool FireBeam_Implementation() { return NativeCall<bool>(this, "UBeamWeaponController.FireBeam_Implementation()"); }
};
