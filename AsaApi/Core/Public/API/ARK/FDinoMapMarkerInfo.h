#pragma once


struct FDinoMapMarkerInfo
{
	// Fields

	APrimalDinoCharacter*& DinoField() { return *GetNativePointerField<APrimalDinoCharacter**>(this, "FDinoMapMarkerInfo.Dino"); }
	UStaticMeshComponent*& MarkerComponentField() { return *GetNativePointerField<UStaticMeshComponent**>(this, "FDinoMapMarkerInfo.MarkerComponent"); }
	UE::Math::TVector<double>& DinoLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FDinoMapMarkerInfo.DinoLocation"); }
	int& PreviousLatitudeNumberField() { return *GetNativePointerField<int*>(this, "FDinoMapMarkerInfo.PreviousLatitudeNumber"); }
	int& PreviousLongitudeNumberField() { return *GetNativePointerField<int*>(this, "FDinoMapMarkerInfo.PreviousLongitudeNumber"); }
	FColor& MarkerColorField() { return *GetNativePointerField<FColor*>(this, "FDinoMapMarkerInfo.MarkerColor"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoMapMarkerInfo>(); }
};