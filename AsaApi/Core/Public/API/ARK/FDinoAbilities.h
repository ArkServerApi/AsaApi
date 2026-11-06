#pragma once


struct FDinoAbilities
{
	// Fields

	FName& DinoTagField() { return *GetNativePointerField<FName*>(this, "FDinoAbilities.DinoTag"); }
	TArray<FDinoAbilityInfo, TSizedDefaultAllocator<32> >& AbilityInfosField() { return *GetNativePointerField<TArray<FDinoAbilityInfo, TSizedDefaultAllocator<32> >*>(this, "FDinoAbilities.AbilityInfos"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoAbilities>(); }
};