#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UPhysicalMaterial : public UObject
{
public:
	UPhysicalMaterial() = delete;
	~UPhysicalMaterial() = delete;
	UPhysicalMaterial(const UPhysicalMaterial&) = delete;
	UPhysicalMaterial& operator=(const UPhysicalMaterial&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicalMaterial"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicalMaterial"); }
	float& FrictionField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.Friction"); }
	float& StaticFrictionField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.StaticFriction"); }
	bool& bOverrideFrictionCombineModeField() { return *GetNativePointerField<bool*>(this, "UPhysicalMaterial.bOverrideFrictionCombineMode"); }
	float& RestitutionField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.Restitution"); }
	bool& bOverrideRestitutionCombineModeField() { return *GetNativePointerField<bool*>(this, "UPhysicalMaterial.bOverrideRestitutionCombineMode"); }
	float& DensityField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.Density"); }
	float& SleepLinearVelocityThresholdField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.SleepLinearVelocityThreshold"); }
	float& SleepAngularVelocityThresholdField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.SleepAngularVelocityThreshold"); }
	int& SleepCounterThresholdField() { return *GetNativePointerField<int*>(this, "UPhysicalMaterial.SleepCounterThreshold"); }
	float& RaiseMassToPowerField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.RaiseMassToPower"); }
	float& DestructibleDamageThresholdScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.DestructibleDamageThresholdScale_DEPRECATED"); }
	FPhysicalMaterialStrength& StrengthField() { return *GetNativePointerField<FPhysicalMaterialStrength*>(this, "UPhysicalMaterial.Strength"); }
	FPhysicalMaterialDamageModifier& DamageModifierField() { return *GetNativePointerField<FPhysicalMaterialDamageModifier*>(this, "UPhysicalMaterial.DamageModifier"); }
	FLinearColor& DebugColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPhysicalMaterial.DebugColor"); }
	bool& bShowExperimentalPropertiesField() { return *GetNativePointerField<bool*>(this, "UPhysicalMaterial.bShowExperimentalProperties"); }
	float& SoftCollisionThicknessField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.SoftCollisionThickness"); }
	float& BaseFrictionImpulseField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.BaseFrictionImpulse"); }
	FChaosUserData& UserDataField() { return *GetNativePointerField<FChaosUserData*>(this, "UPhysicalMaterial.UserData"); }
	bool& bCanDigForWaterField() { return *GetNativePointerField<bool*>(this, "UPhysicalMaterial.bCanDigForWater"); }
	float& WaterRichnessField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.WaterRichness"); }
	void EnsurePhysicsMaterialCreated() { NativeCall<void>(this, "UPhysicalMaterial.EnsurePhysicsMaterialCreated()"); }
	static void SetEngineDefaultDestructiblePhysMaterial(UPhysicalMaterial* Material) { NativeCall<void, UPhysicalMaterial*>(nullptr, "UPhysicalMaterial.SetEngineDefaultDestructiblePhysMaterial(UPhysicalMaterial*)", Material); }
	void PostLoad() { NativeCall<void>(this, "UPhysicalMaterial.PostLoad()"); }
	static void SetEngineDefaultPhysMaterial(UPhysicalMaterial* Material) { NativeCall<void, UPhysicalMaterial*>(nullptr, "UPhysicalMaterial.SetEngineDefaultPhysMaterial(UPhysicalMaterial*)", Material); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPhysicalMaterial.Serialize(FArchive&)", Ar); }
	void FinishDestroy() { NativeCall<void>(this, "UPhysicalMaterial.FinishDestroy()"); }
	static EPhysicalSurface DetermineSurfaceType(const UPhysicalMaterial* PhysicalMaterial) { return NativeCall<EPhysicalSurface, const UPhysicalMaterial*>(nullptr, "UPhysicalMaterial.DetermineSurfaceType(UPhysicalMaterial*)", PhysicalMaterial); }
};
