#pragma once


struct FDinoAbilityInfo
{
	// Fields

	FName& InputActionField() { return *GetNativePointerField<FName*>(this, "FDinoAbilityInfo.InputAction"); }
	FString& AbilityNameField() { return *GetNativePointerField<FString*>(this, "FDinoAbilityInfo.AbilityName"); }
	FString& AbilityDescriptionField() { return *GetNativePointerField<FString*>(this, "FDinoAbilityInfo.AbilityDescription"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoAbilityInfo>(); }
};