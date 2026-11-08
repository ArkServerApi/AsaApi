#pragma once


struct FMapData
{
	// Fields

	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "FMapData.MapName"); }
	UTexture2D*& MapTextureField() { return *GetNativePointerField<UTexture2D**>(this, "FMapData.MapTexture"); }
	UE::Math::TVector<double>& OriginMaxField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FMapData.OriginMax"); }
	UE::Math::TVector<double>& OriginMinField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FMapData.OriginMin"); }
	UE::Math::TVector<double>& PlayableMaxField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FMapData.PlayableMax"); }
	UE::Math::TVector<double>& PlayableMinField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FMapData.PlayableMin"); }
	bool& PreventFogOfWarField() { return *GetNativePointerField<bool*>(this, "FMapData.PreventFogOfWar"); }

	// Bitfields


	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FMapData>(); }
};