#pragma once


struct UMinimapData : UObject
{
	// Fields

	TArray<FMapData>& MinimapDataField() { return *GetNativePointerField<TArray<FMapData, TSizedDefaultAllocator<32> >*>(this, "UMinimapData.MinimapData"); }
	FString& GeneralMapNameField() { return *GetNativePointerField<FString*>(this, "UMinimapData.GeneralMapName"); }

	// Bitfields


	// Functions

	// Unavailable in UE 5.8.3: dependent class factory unavailable
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMinimapData"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUMinimapData();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMinimapData"); }
};