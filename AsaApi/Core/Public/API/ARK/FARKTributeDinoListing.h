#pragma once


struct FARKTributeDinoListing
{
	// Fields

	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKTributeDinoListing.DinoName"); }
	FieldArray<FString, 12> DinoStatsField() { return { this, "FARKTributeDinoListing.DinoStats" }; }
	float& DinoExperiencePointsField() { return *GetNativePointerField<float*>(this, "FARKTributeDinoListing.DinoExperiencePoints"); }
	UClass*& DinoClassField() { return *GetNativePointerField<UClass**>(this, "FARKTributeDinoListing.DinoClass"); }
	unsigned int& DinoID1Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.DinoID1"); }
	unsigned int& DinoID2Field() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.DinoID2"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FARKTributeDinoListing.ExpirationTimeUTC"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FARKTributeDinoListing>(); }
};