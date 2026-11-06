#pragma once


struct FPrimalCharacterStatusValueDefinition
{
	// Fields

	UTexture2D*& StatusValueIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalCharacterStatusValueDefinition.StatusValueIcon"); }
	FString& StatusValueNameField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusValueDefinition.StatusValueName"); }
	bool& bDisplayHideCurrentValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueDefinition.bDisplayHideCurrentValue"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalCharacterStatusValueDefinition>(); }
};