#pragma once


struct UGeneTrait : UObject
{
	// Fields


	// Bitfields


	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUGeneTrait();
	bool BPGetCustomBlueprintData(FName DataName, FFunctionParams_NoArrays* InData, FFunctionParams_NoArrays* OutData) { return NativeCall<bool, FName, FFunctionParams_NoArrays*, FFunctionParams_NoArrays*>(this, "UGeneTrait.BPGetCustomBlueprintData(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", DataName, InData, OutData); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGeneTrait"); }
	bool BPGetCustomBlueprintData_Implementation(FName DataName, FFunctionParams_NoArrays* InData, FFunctionParams_NoArrays* OutData) { return NativeCall<bool, FName, FFunctionParams_NoArrays*, FFunctionParams_NoArrays*>(this, "UGeneTrait.BPGetCustomBlueprintData_Implementation(FName,FFunctionParams_NoArrays,FFunctionParams_NoArrays&)", DataName, InData, OutData); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGeneTrait"); }

};