#pragma once


struct FPrimalMapMarkerEntryData
{
	// Fields

	int& coord1Field() { return *GetNativePointerField<int*>(this, "FPrimalMapMarkerEntryData.coord1"); }
	int& coord2Field() { return *GetNativePointerField<int*>(this, "FPrimalMapMarkerEntryData.coord2"); }
	FString& nameField() { return *GetNativePointerField<FString*>(this, "FPrimalMapMarkerEntryData.name"); }
	FColor& OverrideMarkerTextColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalMapMarkerEntryData.OverrideMarkerTextColor"); }
	float& coord1fField() { return *GetNativePointerField<float*>(this, "FPrimalMapMarkerEntryData.coord1f"); }
	float& coord2fField() { return *GetNativePointerField<float*>(this, "FPrimalMapMarkerEntryData.coord2f"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FPrimalMapMarkerEntryData>(); }
};