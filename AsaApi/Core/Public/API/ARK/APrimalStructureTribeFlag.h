#pragma once


struct APrimalStructureTribeFlag : APrimalStructure
{
    // Fields

    unsigned int& TribeIDField() { return *GetNativePointerField<unsigned int*>(this, "APrimalStructureTribeFlag.TribeID"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: dependent class factory unavailable
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureTribeFlag"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureTribeFlag"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    bool AllowColoringBy(APlayerController* ForPC, UObject* anItem) { return NativeCall<bool, APlayerController*, UObject*>(this, "APrimalStructureTribeFlag.AllowColoringBy(APlayerController*,UObject*)", ForPC, anItem); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTribeFlag.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
};