#pragma once


struct FDamageHarvestingEntry
{
	// Fields

	float& DamageMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageMultiplier"); }
	float& HarvestQuantityMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.HarvestQuantityMultiplier"); }
	float& DamageHarvestAdditionalEffectivenessField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageHarvestAdditionalEffectiveness"); }
	float& DamageDurabilityConsumptionMultiplierField() { return *GetNativePointerField<float*>(this, "FDamageHarvestingEntry.DamageDurabilityConsumptionMultiplier"); }
	TSubclassOf<UDamageType>& DamageTypeParentField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamageHarvestingEntry.DamageTypeParent"); }
	TSubclassOf<AActor>& HarvestDamageFXOverrideField() { return *GetNativePointerField<TSubclassOf<AActor>*>(this, "FDamageHarvestingEntry.HarvestDamageFXOverride"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bAllowUnderwaterHarvesting() { return { this, "FDamageHarvestingEntry.bAllowUnderwaterHarvesting" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDamageHarvestingEntry>(); }
};