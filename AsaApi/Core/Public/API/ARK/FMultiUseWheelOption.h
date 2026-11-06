#pragma once


struct FMultiUseWheelOption
{
	// Fields

	FString& ActionStringField() { return *GetNativePointerField<FString*>(this, "FMultiUseWheelOption.ActionString"); }
	TObjectPtr<UTexture2D>& IconField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "FMultiUseWheelOption.Icon"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FMultiUseWheelOption>(); }
};