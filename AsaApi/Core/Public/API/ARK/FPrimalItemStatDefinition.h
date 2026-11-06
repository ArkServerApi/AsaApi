#pragma once


struct FPrimalItemStatDefinition
{
	// Fields

	UTexture2D*& ItemStatIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalItemStatDefinition.ItemStatIcon"); }
	FString& ItemStatNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemStatDefinition.ItemStatName"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalItemStatDefinition>(); }
};