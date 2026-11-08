#pragma once


struct FARKTributeDino
{
	// Fields

	TSoftClassPtr<APrimalDinoCharacter>& DinoClassPtrField() { return *GetNativePointerField<TSoftClassPtr<APrimalDinoCharacter>*>(this, "FARKTributeDino.DinoClassPtr"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& DinoDataField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "FARKTributeDino.DinoData"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeDino.DinoName"); }
	FString& DinoNameInMapField() { return *GetNativePointerField<FString*>(this, "FARKTributeDino.DinoNameInMap"); }
	FieldArray<FString, 12> DinoStatsField() { return { this, "FARKTributeDino.DinoStats" }; }
	float& DinoExperiencePointsField() { return *GetNativePointerField<float*>(this, "FARKTributeDino.DinoExperiencePoints"); }
	float& VersionField() { return *GetNativePointerField<float*>(this, "FARKTributeDino.Version"); }
	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDino.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDino.DinoID2"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FARKTributeDino>(); }
	FARKTributeDino* operator=(const FARKTributeDino* __that) { return NativeCall<FARKTributeDino*, const FARKTributeDino*>(this, "FARKTributeDino.operator=(FARKTributeDino&)", __that); }
	FARKTributeDino* operator=(FARKTributeDino* __that) { return NativeCall<FARKTributeDino*, FARKTributeDino*>(this, "FARKTributeDino.operator=(FARKTributeDino&)", __that); }
};