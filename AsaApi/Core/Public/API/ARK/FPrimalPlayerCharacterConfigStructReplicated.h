#pragma once
struct __declspec(align(8)) FPrimalPlayerCharacterConfigStructReplicated
{
	unsigned __int8 bIsFemale : 1;
	FLinearColor BodyColors[4];
	FString PlayerCharacterName;
	unsigned __int8 FacialHairIndex;
	unsigned __int8 HeadHairIndex;
	unsigned __int8 EyebrowIndex;
	__int64 FacialHairCustomCosmeticModID;
	__int64 HeadHairCustomCosmeticModID;
	__int64 EyebrowCustomCosmeticModID;
	float PercentOfFullHeadHairGrowth;
	float PercentOfFullFacialHairGrowth;
	float RawBoneModifiers[26];
	int PlayerSpawnRegionIndex;
	unsigned __int8 OverrideHeadHairColor[2];
	unsigned __int8 OverrideFacialHairColor[2];
	unsigned __int8 DynamicMaterialBytes[50];
	int PlayerVoiceCollectionIndex;
	unsigned __int8 bUsingCustomPlayerVoiceCollection : 1;
	unsigned __int8 DynamicFaceMaterialBytes[21];
	unsigned __int8 DynamicFaceIndex[3];

	// Fields

	FieldArray<FLinearColor, 4>& BodyColorsField() { return *GetNativePointerField<FieldArray<FLinearColor, 4>*>(this, "FPrimalPlayerCharacterConfigStructReplicated.BodyColors"); }
	FString& PlayerCharacterNameField() { return *GetNativePointerField<FString*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PlayerCharacterName"); }
	unsigned char& FacialHairIndexField() { return *GetNativePointerField<unsigned char*>(this, "FPrimalPlayerCharacterConfigStructReplicated.FacialHairIndex"); }
	unsigned char& HeadHairIndexField() { return *GetNativePointerField<unsigned char*>(this, "FPrimalPlayerCharacterConfigStructReplicated.HeadHairIndex"); }
	unsigned char& EyebrowIndexField() { return *GetNativePointerField<unsigned char*>(this, "FPrimalPlayerCharacterConfigStructReplicated.EyebrowIndex"); }
	long& FacialHairCustomCosmeticModIDField() { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStructReplicated.FacialHairCustomCosmeticModID"); }
	long& HeadHairCustomCosmeticModIDField() { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStructReplicated.HeadHairCustomCosmeticModID"); }
	long& EyebrowCustomCosmeticModIDField() { return *GetNativePointerField<long*>(this, "FPrimalPlayerCharacterConfigStructReplicated.EyebrowCustomCosmeticModID"); }
	float& PercentOfFullHeadHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PercentOfFullHeadHairGrowth"); }
	float& PercentOfFullFacialHairGrowthField() { return *GetNativePointerField<float*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PercentOfFullFacialHairGrowth"); }
	FieldArray<float, 26>& RawBoneModifiersField() { return *GetNativePointerField<FieldArray<float, 26>*>(this, "FPrimalPlayerCharacterConfigStructReplicated.RawBoneModifiers"); }
	int& PlayerSpawnRegionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PlayerSpawnRegionIndex"); }
	FieldArray<unsigned char, 2>& OverrideHeadHairColorField() { return *GetNativePointerField<FieldArray<unsigned char, 2>*>(this, "FPrimalPlayerCharacterConfigStructReplicated.OverrideHeadHairColor"); }
	FieldArray<unsigned char, 2>& OverrideFacialHairColorField() { return *GetNativePointerField<FieldArray<unsigned char, 2>*>(this, "FPrimalPlayerCharacterConfigStructReplicated.OverrideFacialHairColor"); }
	FieldArray<unsigned char, 50>& DynamicMaterialBytesField() { return *GetNativePointerField<FieldArray<unsigned char, 50>*>(this, "FPrimalPlayerCharacterConfigStructReplicated.DynamicMaterialBytes"); }
	int& PlayerVoiceCollectionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalPlayerCharacterConfigStructReplicated.PlayerVoiceCollectionIndex"); }
	FieldArray<unsigned char, 21>& DynamicFaceMaterialBytesField() { return *GetNativePointerField<FieldArray<unsigned char, 21>*>(this, "FPrimalPlayerCharacterConfigStructReplicated.DynamicFaceMaterialBytes"); }
	FieldArray<unsigned char, 3>& DynamicFaceIndexField() { return *GetNativePointerField<FieldArray<unsigned char, 3>*>(this, "FPrimalPlayerCharacterConfigStructReplicated.DynamicFaceIndex"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bIsFemaleField() { return { this, "FPrimalPlayerCharacterConfigStructReplicated.bIsFemale" }; }
	BitFieldValue<bool, unsigned __int32> bUsingCustomPlayerVoiceCollectionField() { return { this, "FPrimalPlayerCharacterConfigStructReplicated.bUsingCustomPlayerVoiceCollection" }; }

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalPlayerCharacterConfigStructReplicated>(); }
	FPrimalPlayerCharacterConfigStruct* GetPlayerCharacterConfig(FPrimalPlayerCharacterConfigStruct* result) { return NativeCall<FPrimalPlayerCharacterConfigStruct*, FPrimalPlayerCharacterConfigStruct*>(this, "FPrimalPlayerCharacterConfigStructReplicated.GetPlayerCharacterConfig()", result); }
	FPrimalPlayerCharacterConfigStructReplicated& operator=(struct FPrimalPlayerCharacterConfigStructReplicated* __that) { return NativeCall<FPrimalPlayerCharacterConfigStructReplicated&, struct FPrimalPlayerCharacterConfigStructReplicated*>(this, "FPrimalPlayerCharacterConfigStructReplicated.operator=(FPrimalPlayerCharacterConfigStructReplicated&&)", __that); }
	FPrimalPlayerCharacterConfigStructReplicated& operator=(const struct FPrimalPlayerCharacterConfigStructReplicated* __that) { return NativeCall<FPrimalPlayerCharacterConfigStructReplicated&, const struct FPrimalPlayerCharacterConfigStructReplicated*>(this, "FPrimalPlayerCharacterConfigStructReplicated.operator=(FPrimalPlayerCharacterConfigStructReplicated&)", __that); }
};
