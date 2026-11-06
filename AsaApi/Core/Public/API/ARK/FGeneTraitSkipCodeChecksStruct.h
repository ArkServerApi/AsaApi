#pragma once


struct FGeneTraitSkipCodeChecksStruct
{
	// Fields

	FName& TraitNameField() { return *GetNativePointerField<FName*>(this, "FGeneTraitSkipCodeChecksStruct.TraitName"); }
	bool& ThisTraitWeConfirmedHasNoSpecialConditionsBeyondThrallCheckField() { return *GetNativePointerField<bool*>(this, "FGeneTraitSkipCodeChecksStruct.ThisTraitWeConfirmedHasNoSpecialConditionsBeyondThrallCheck"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FGeneTraitSkipCodeChecksStruct>(); }
};