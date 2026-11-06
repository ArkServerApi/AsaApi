#pragma once


struct APrimalStructureItemContainer_HordeCrate : APrimalStructureItemContainer_SupplyCrate
{
    // Fields

    UMaterialInterface*& ElementPostProcessMaterialField() { return *GetNativePointerField<UMaterialInterface**>(this, "APrimalStructureItemContainer_HordeCrate.ElementPostProcessMaterial"); }
    UE::Math::TVector<double>& CrateLocField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureItemContainer_HordeCrate.CrateLoc"); }
    long double& LastGameplayRelevantTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureItemContainer_HordeCrate.LastGameplayRelevantTime"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer_HordeCrate"); }
    long double GetLastGameplayRelevantTime() { return NativeCall<long double>(this, "APrimalStructureItemContainer_HordeCrate.GetLastGameplayRelevantTime()"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureItemContainer_HordeCrate();
    void SpawnElementNodePostProcess() { NativeCall<void>(this, "APrimalStructureItemContainer_HordeCrate.SpawnElementNodePostProcess()"); }
    void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_HordeCrate.BeginPlay()"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureItemContainer_HordeCrate"); }
};