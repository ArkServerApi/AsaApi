#pragma once


struct FPrimalItemDefinition
{
	// Fields

	UTexture2D*& ItemTypeIconField() { return *GetNativePointerField<UTexture2D**>(this, "FPrimalItemDefinition.ItemTypeIcon"); }
	FString& ItemTypeNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemDefinition.ItemTypeName"); }
	FColor& ItemTypeColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalItemDefinition.ItemTypeColor"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalItemDefinition>(); }
};