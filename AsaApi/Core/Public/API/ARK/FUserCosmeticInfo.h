#pragma once


struct FUserCosmeticInfo
{
	// Fields

	FString& TribeFlagFileField() { return *GetNativePointerField<FString*>(this, "FUserCosmeticInfo.TribeFlagFile"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FUserCosmeticInfo>(); }
};