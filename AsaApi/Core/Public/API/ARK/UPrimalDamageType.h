#pragma once
#include "GameplayForward.h"
#include "UDamageType.h"

struct UPrimalDamageType : UDamageType
{
public:
	UPrimalDamageType() = delete;
	~UPrimalDamageType() = delete;
	UPrimalDamageType(const UPrimalDamageType&) = delete;
	UPrimalDamageType& operator=(const UPrimalDamageType&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalDamageType"); }

	float& ImpulseMinimumZPercentField() { return *GetNativePointerField<float*>(this, "UPrimalDamageType.ImpulseMinimumZPercent"); }
	float& DestructibleImpulseScaleField() { return *GetNativePointerField<float*>(this, "UPrimalDamageType.DestructibleImpulseScale"); }
	float& ImpulseRagdollScaleField() { return *GetNativePointerField<float*>(this, "UPrimalDamageType.ImpulseRagdollScale"); }
	float& DefaultImpulseField() { return *GetNativePointerField<float*>(this, "UPrimalDamageType.DefaultImpulse"); }
	float& PointDamageArmorEffectivenessField() { return *GetNativePointerField<float*>(this, "UPrimalDamageType.PointDamageArmorEffectiveness"); }
	float& GeneralDamageArmorEffectivenessField() { return *GetNativePointerField<float*>(this, "UPrimalDamageType.GeneralDamageArmorEffectiveness"); }
	float& ArmorDurabilityDegradationMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalDamageType.ArmorDurabilityDegradationMultiplier"); }
	float& RadialPartiallyObstructedDamagePercentField() { return *GetNativePointerField<float*>(this, "UPrimalDamageType.RadialPartiallyObstructedDamagePercent"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalDamageType"); }

	BitFieldValue<bool, unsigned __int32> bIsPhysicalDamage() { return { this, "UPrimalDamageType.bIsPhysicalDamage"}; }
	BitFieldValue<bool, unsigned __int32> bAllowPerBoneDamageAdjustment() { return { this, "UPrimalDamageType.bAllowPerBoneDamageAdjustment"}; }
	BitFieldValue<bool, unsigned __int32> bImpulseAffectsLivePawns() { return { this, "UPrimalDamageType.bImpulseAffectsLivePawns"}; }
};
