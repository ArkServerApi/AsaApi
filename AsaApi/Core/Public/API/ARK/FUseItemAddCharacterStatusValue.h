#pragma once


struct FUseItemAddCharacterStatusValue
{
	// Fields

	float& BaseAmountToAddField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.BaseAmountToAdd"); }
	float& LimitExistingModifierDescriptionToMaxAmountField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.LimitExistingModifierDescriptionToMaxAmount"); }
	float& AddOverTimeSpeedField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.AddOverTimeSpeed"); }
	float& PercentAbsoluteMaxValueField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.PercentAbsoluteMaxValue"); }
	float& PercentAbsoluteMinValueField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.PercentAbsoluteMinValue"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FUseItemAddCharacterStatusValue.StatusValueModifierDescriptionIndex"); }
	float& ItemQualityAddValueMultiplierField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.ItemQualityAddValueMultiplier"); }
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& StopAtValueNearMaxField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FUseItemAddCharacterStatusValue.StopAtValueNearMax"); }
	TSoftClassPtr<UDamageType>& ScaleValueByCharacterDamageTypeField() { return *GetNativePointerField<TSoftClassPtr<UDamageType>*>(this, "FUseItemAddCharacterStatusValue.ScaleValueByCharacterDamageType"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bPercentOfMaxStatusValue() { return { this, "FUseItemAddCharacterStatusValue.bPercentOfMaxStatusValue" }; }
	BitFieldValue<bool, unsigned __int32> bPercentOfCurrentStatusValue() { return { this, "FUseItemAddCharacterStatusValue.bPercentOfCurrentStatusValue" }; }
	BitFieldValue<bool, unsigned __int32> bUseItemQuality() { return { this, "FUseItemAddCharacterStatusValue.bUseItemQuality" }; }
	BitFieldValue<bool, unsigned __int32> bDontRequireLessThanMaxToUse() { return { this, "FUseItemAddCharacterStatusValue.bDontRequireLessThanMaxToUse" }; }
	BitFieldValue<bool, unsigned __int32> bAddOverTime() { return { this, "FUseItemAddCharacterStatusValue.bAddOverTime" }; }
	BitFieldValue<bool, unsigned __int32> bAddOverTimeSpeedInSeconds() { return { this, "FUseItemAddCharacterStatusValue.bAddOverTimeSpeedInSeconds" }; }
	BitFieldValue<bool, unsigned __int32> bContinueOnUnchangedValue() { return { this, "FUseItemAddCharacterStatusValue.bContinueOnUnchangedValue" }; }
	BitFieldValue<bool, unsigned __int32> bSetValue() { return { this, "FUseItemAddCharacterStatusValue.bSetValue" }; }
	BitFieldValue<bool, unsigned __int32> bSetAdditionalValue() { return { this, "FUseItemAddCharacterStatusValue.bSetAdditionalValue" }; }
	BitFieldValue<bool, unsigned __int32> bResetExistingModifierDescriptionIndex() { return { this, "FUseItemAddCharacterStatusValue.bResetExistingModifierDescriptionIndex" }; }
	BitFieldValue<bool, unsigned __int32> bForceUseStatOnDinos() { return { this, "FUseItemAddCharacterStatusValue.bForceUseStatOnDinos" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FUseItemAddCharacterStatusValue>(); }
};