#pragma once


struct FPrimalItemQuality
{
	// Fields

	FLinearColor& QualityColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimalItemQuality.QualityColor"); }
	FString& QualityNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemQuality.QualityName"); }
	float& QualityRandomMultiplierThresholdField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.QualityRandomMultiplierThreshold"); }
	float& CraftingXPMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.CraftingXPMultiplier"); }
	float& RepairingXPMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.RepairingXPMultiplier"); }
	float& CraftingResourceRequirementsMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimalItemQuality.CraftingResourceRequirementsMultiplier"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalItemQuality>(); }
};