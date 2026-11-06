#pragma once
#include "BulkForward.h"
#include "UDataAsset.h"

struct UPrimalWheeledVehicleDustType : public UDataAsset
{
public:
	UPrimalWheeledVehicleDustType() = delete;
	~UPrimalWheeledVehicleDustType() = delete;
	UPrimalWheeledVehicleDustType(const UPrimalWheeledVehicleDustType&) = delete;
	UPrimalWheeledVehicleDustType& operator=(const UPrimalWheeledVehicleDustType&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalWheeledVehicleDustType"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalWheeledVehicleDustType"); }

	UParticleSystem*& DefaultFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.DefaultFX"); }
	UParticleSystem*& ConcreteFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.ConcreteFX"); }
	UParticleSystem*& DirtFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.DirtFX"); }
	UParticleSystem*& WaterFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.WaterFX"); }
	UParticleSystem*& MetalFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.MetalFX"); }
	UParticleSystem*& WoodFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.WoodFX"); }
	UParticleSystem*& GrassFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.GrassFX"); }
	UParticleSystem*& FleshFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.FleshFX"); }
	UParticleSystem*& LeavesFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.LeavesFX"); }
	UParticleSystem*& RockFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.RockFX"); }
	UParticleSystem*& SandFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.SandFX"); }
	UParticleSystem*& SnowFXField() { return *GetNativePointerField<UParticleSystem**>(this, "UPrimalWheeledVehicleDustType.SnowFX"); }
	float& DefaultMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.DefaultMinSpeed"); }
	float& ConcreteMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.ConcreteMinSpeed"); }
	float& DirtMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.DirtMinSpeed"); }
	float& WaterMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.WaterMinSpeed"); }
	float& MetalMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.MetalMinSpeed"); }
	float& WoodMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.WoodMinSpeed"); }
	float& GrassMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.GrassMinSpeed"); }
	float& FleshMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.FleshMinSpeed"); }
	float& LeavesMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.LeavesMinSpeed"); }
	float& RockMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.RockMinSpeed"); }
	float& SandMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.SandMinSpeed"); }
	float& SnowMinSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalWheeledVehicleDustType.SnowMinSpeed"); }
	UParticleSystem* GetDustFX(UPhysicalMaterial* PhysMaterial, float CurrentSpeed) { return NativeCall<UParticleSystem*, UPhysicalMaterial*, float>(this, "UPrimalWheeledVehicleDustType.GetDustFX(UPhysicalMaterial*,float)", PhysMaterial, CurrentSpeed); }
};
