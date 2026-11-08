#pragma once


struct FDamagePrimalCharacterStatusValueModifier
{
	// Fields

	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& ValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FDamagePrimalCharacterStatusValueModifier.ValueType"); }
	float& LimitExistingModifierDescriptionToMaxAmountField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.LimitExistingModifierDescriptionToMaxAmount"); }
	int& UseAbsoluteDamageAmountField() { return *GetNativePointerField<int*>(this, "FDamagePrimalCharacterStatusValueModifier.UseAbsoluteDamageAmount"); }
	float& DamageMultiplierAmountToAddField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.DamageMultiplierAmountToAdd"); }
	float& SpeedToAddField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.SpeedToAdd"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FDamagePrimalCharacterStatusValueModifier.StatusValueModifierDescriptionIndex"); }
	float& PercentualDamageField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.PercentualDamage"); }
	TSubclassOf<UDamageType>& ScaleValueByCharacterDamageTypeField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamagePrimalCharacterStatusValueModifier.ScaleValueByCharacterDamageType"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bSpeedToAddInSeconds() { return { this, "FDamagePrimalCharacterStatusValueModifier.bSpeedToAddInSeconds" }; }
	BitFieldValue<bool, unsigned __int32> bContinueOnUnchangedValue() { return { this, "FDamagePrimalCharacterStatusValueModifier.bContinueOnUnchangedValue" }; }
	BitFieldValue<bool, unsigned __int32> bIgnorePawnDamageAdjusters() { return { this, "FDamagePrimalCharacterStatusValueModifier.bIgnorePawnDamageAdjusters" }; }
	BitFieldValue<bool, unsigned __int32> bResetExistingModifierDescriptionIndex() { return { this, "FDamagePrimalCharacterStatusValueModifier.bResetExistingModifierDescriptionIndex" }; }
	BitFieldValue<bool, unsigned __int32> bSetValue() { return { this, "FDamagePrimalCharacterStatusValueModifier.bSetValue" }; }
	BitFieldValue<bool, unsigned __int32> bSetAdditionalValue() { return { this, "FDamagePrimalCharacterStatusValueModifier.bSetAdditionalValue" }; }
	BitFieldValue<bool, unsigned __int32> bUsePercentualDamage() { return { this, "FDamagePrimalCharacterStatusValueModifier.bUsePercentualDamage" }; }
	BitFieldValue<bool, unsigned __int32> bMakeUntameable() { return { this, "FDamagePrimalCharacterStatusValueModifier.bMakeUntameable" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDamagePrimalCharacterStatusValueModifier>(); }
};