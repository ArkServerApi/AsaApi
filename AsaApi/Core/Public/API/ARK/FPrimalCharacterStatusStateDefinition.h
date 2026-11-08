#pragma once


struct FPrimalCharacterStatusStateDefinition
{
	// Fields

	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& StatusValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FPrimalCharacterStatusStateDefinition.StatusValueType"); }
	int& StatusValueThresholdIndexField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusStateDefinition.StatusValueThresholdIndex"); }
	UTexture2D*& StatusStateIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalCharacterStatusStateDefinition.StatusStateIcon"); }
	FString& StatusStateNameField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateName"); }
	FString& StatusStateDescriptionField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateDescription"); }
	FColor& StatusStateNameColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateNameColor"); }
	bool& bDisplayHUDMessageField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusStateDefinition.bDisplayHUDMessage"); }
	FString& HUDMessageField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.HUDMessage"); }
	FColor& HUDMessageColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalCharacterStatusStateDefinition.HUDMessageColor"); }
	int& BuffTypeField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusStateDefinition.BuffType"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalCharacterStatusStateDefinition>(); }
};