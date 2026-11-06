#pragma once


struct FDamageTypeAdjuster
{
	// Fields

	TSoftClassPtr<UDamageType>& DamageTypeClassField() { return *GetNativePointerField<TSoftClassPtr<UDamageType>*>(this, "FDamageTypeAdjuster.DamageTypeClass"); }
	float& DamageMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageTypeAdjuster.DamageMultiplier"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIgnoreMultiplierIfWildDinoAttacker() { return { this, "FDamageTypeAdjuster.bIgnoreMultiplierIfWildDinoAttacker" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMultiplierIfTamedDinoAttacker() { return { this, "FDamageTypeAdjuster.bIgnoreMultiplierIfTamedDinoAttacker" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseMultiplierIfWildDinoAttacker() { return { this, "FDamageTypeAdjuster.bOnlyUseMultiplierIfWildDinoAttacker" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseMultiplierIfTamedDinoAttacker() { return { this, "FDamageTypeAdjuster.bOnlyUseMultiplierIfTamedDinoAttacker" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyUseMultiplierIfTamed() { return { this, "FDamageTypeAdjuster.bOnlyUseMultiplierIfTamed" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDamageTypeAdjuster>(); }
};