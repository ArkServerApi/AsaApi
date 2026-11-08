#pragma once


struct FPrimalCharacterStatusValueModifier
{
	// Fields

	TWeakObjectPtr<AActor>& InstigatorField() { return *GetNativePointerField<TWeakObjectPtr<AActor>*>(this, "FPrimalCharacterStatusValueModifier.Instigator"); }
	FieldArray<char, 4> ValueTypeField() { return { this, "FPrimalCharacterStatusValueModifier.ValueType" }; }
	FieldArray<char, 4> StopOnValueNearMaxField() { return { this, "FPrimalCharacterStatusValueModifier.StopOnValueNearMax" }; }
	float& AmountToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.AmountToAdd"); }
	float& BaseAmountToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.BaseAmountToAdd"); }
	float& SpeedToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.SpeedToAdd"); }
	bool& bSetValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bSetValue"); }
	bool& bMakeUntameableField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bMakeUntameable"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusValueModifier.StatusValueModifierDescriptionIndex"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalCharacterStatusValueModifier>(); }
};