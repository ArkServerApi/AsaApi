#pragma once


struct FPrimalPlayerCharacterConfigStruct
{
	// Fields

	FieldArray<FLinearColor, 4> BodyColorsField() { return { this, "FPrimalPlayerCharacterConfigStruct.BodyColors" }; }
	FieldArray<unsigned __int8, 2> OverrideHeadHairColorField() { return { this, "FPrimalPlayerCharacterConfigStruct.OverrideHeadHairColor" }; }
	FieldArray<unsigned __int8, 2> OverrideFacialHairColorField() { return { this, "FPrimalPlayerCharacterConfigStruct.OverrideFacialHairColor" }; }
	unsigned __int8& HeadHairIndexField() { return *GetNativePointerField<unsigned __int8*>(this, "FPrimalPlayerCharacterConfigStruct.HeadHairIndex"); }
	float& PercentOfFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStruct.PercentOfFullHeadHairGrowth"); }
	float& PercentOfFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStruct.PercentOfFullFacialHairGrowth"); }
	FString& PlayerCharacterNameField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerCharacterName"); }
	FieldArray<float, 26> RawBoneModifiersField() { return { this, "FPrimalPlayerCharacterConfigStruct.RawBoneModifiers" }; }
	FieldArray<unsigned __int8, 50> DynamicMaterialBytesField() { return { this, "FPrimalPlayerCharacterConfigStruct.DynamicMaterialBytes" }; }
	int& PlayerVoiceCollectionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerVoiceCollectionIndex"); }
	int& PlayerSpawnRegionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStruct.PlayerSpawnRegionIndex"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsFemale() { return { this, "FPrimalPlayerCharacterConfigStruct.bIsFemale" }; }
	BitFieldValue<bool, unsigned __int32> bUsingCustomPlayerVoiceCollection() { return { this, "FPrimalPlayerCharacterConfigStruct.bUsingCustomPlayerVoiceCollection" }; }

	// Functions

	//void FPrimalPlayerCharacterConfigStruct(const FPrimalPlayerCharacterConfigStruct* __that) { NativeCall<void, const FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStruct.FPrimalPlayerCharacterConfigStruct(FPrimalPlayerCharacterConfigStruct&)", __that); }
	FPrimalPlayerCharacterConfigStruct* operator=(const FPrimalPlayerCharacterConfigStruct* __that) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, const FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStruct.operator=(FPrimalPlayerCharacterConfigStruct&)", __that); }
	//void FPrimalPlayerCharacterConfigStruct() { NativeCall<void>(this, "FPrimalPlayerCharacterConfigStruct.FPrimalPlayerCharacterConfigStruct()"); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalPlayerCharacterConfigStruct>(); }
	//void FPrimalPlayerCharacterConfigStruct(FPrimalPlayerCharacterConfigStruct* __that) { NativeCall<void, FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStruct.FPrimalPlayerCharacterConfigStruct(FPrimalPlayerCharacterConfigStruct&)", __that); }
	FPrimalPlayerCharacterConfigStruct* operator=(FPrimalPlayerCharacterConfigStruct* __that) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStruct.operator=(FPrimalPlayerCharacterConfigStruct&)", __that); }
};