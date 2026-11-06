#pragma once


struct APrimalStructureMovingContainer : APrimalStructureItemContainer
{
    // Fields

    UE::Math::TVector<double>& FinalLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureMovingContainer.FinalLocation"); }
    UE::Math::TVector<double>& ItemBalloonLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "APrimalStructureMovingContainer.ItemBalloonLocation"); }
    unsigned __int16& ItemLatitudeField() { return *GetNativePointerField<unsigned __int16*>(this, "APrimalStructureMovingContainer.ItemLatitude"); }
    unsigned __int16& ItemLongitudeField() { return *GetNativePointerField<unsigned __int16*>(this, "APrimalStructureMovingContainer.ItemLongitude"); }
    float& LocationNameField() { return *GetNativePointerField<float*>(this, "APrimalStructureMovingContainer.LocationName"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* StaticClass();
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureMovingContainer"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
    void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalStructureMovingContainer.Tick(float)", DeltaSeconds); }
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureMovingContainer.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
    bool NetExecCommand(FName CommandName, const FNetExecParams* ExecParams) { return NativeCall<bool, FName, const FNetExecParams*>(this, "APrimalStructureMovingContainer.NetExecCommand(FName,FNetExecParams&)", CommandName, ExecParams); }

	unsigned char& bHasSetLocationField() { return *GetNativePointerField<unsigned char*>(this, "APrimalStructureMovingContainer.bHasSetLocation"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureMovingContainer"); }
};