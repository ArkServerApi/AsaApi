#pragma once


struct UDamageType : UObject
{
	// Fields

	float& DamageImpulseField() { return *GetNativePointerField<float*>(this, "UDamageType.DamageImpulse"); }
	float& DestructibleImpulseField() { return *GetNativePointerField<float*>(this, "UDamageType.DestructibleImpulse"); }
	float& DestructibleDamageSpreadScaleField() { return *GetNativePointerField<float*>(this, "UDamageType.DestructibleDamageSpreadScale"); }
	float& DamageFalloffField() { return *GetNativePointerField<float*>(this, "UDamageType.DamageFalloff"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsPassiveDamage() { return { this, "UDamageType.bIsPassiveDamage" }; }
	BitFieldValue<bool, unsigned __int32> bCausedByWorld() { return { this, "UDamageType.bCausedByWorld" }; }
	BitFieldValue<bool, unsigned __int32> bScaleMomentumByMass() { return { this, "UDamageType.bScaleMomentumByMass" }; }
	BitFieldValue<bool, unsigned __int32> bRadialDamageVelChange() { return { this, "UDamageType.bRadialDamageVelChange" }; }

	// Functions

	static UClass* StaticClass() { return GetPrivateStaticClass(); }
	static UClass* GetPrivateStaticClass() { return NativeCall<UClass*>(nullptr, "UDamageType.StaticClass()"); }
	//void UDamageType(const FObjectInitializer* ObjectInitializer) { NativeCall<void, const FObjectInitializer*>(this, "UDamageType.UDamageType(FObjectInitializer&)", ObjectInitializer); }
};