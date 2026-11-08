#pragma once
#include "BulkForward.h"


struct APrimalStructureKeypad : APrimalStructureItemContainer
{
    // Fields

    float& DoorActivationRangeField() { return *GetNativePointerField<float*>(this, "APrimalStructureKeypad.DoorActivationRange"); }
    long double& LastPinToggleTimeField() { return *GetNativePointerField<long double*>(this, "APrimalStructureKeypad.LastPinToggleTime"); }

    // Bitfields


    // Functions

    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureKeypad"); }
    // Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesAPrimalStructureKeypad();
    void GetMultiUseEntries(APlayerController* ForPC, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >* MultiUseEntries, int hitBodyIndex) { NativeCall<void, APlayerController*, TArray<FMultiUseEntry, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureKeypad.GetMultiUseEntries(APlayerController*,TArray<FMultiUseEntry,TSizedDefaultAllocator<32>>&,int)", ForPC, MultiUseEntries, hitBodyIndex); }
    bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureKeypad.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    void ClientMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { NativeCall<void, APlayerController*, int, int>(this, "APrimalStructureKeypad.ClientMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
    bool ApplyPinCode(AShooterPlayerController* ForPC, int appledPinCode, bool bIsSetting, int TheCustomIndex) { return NativeCall<bool, AShooterPlayerController*, int, bool, int>(this, "APrimalStructureKeypad.ApplyPinCode(AShooterPlayerController*,int,bool,int)", ForPC, appledPinCode, bIsSetting, TheCustomIndex); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureKeypad"); }

	bool ActivateKeypad(AShooterPlayerController* ForPC, int PinCode, bool bEnable) { return NativeCall<bool, AShooterPlayerController*, int, bool>(this, "APrimalStructureKeypad.ActivateKeypad(AShooterPlayerController*,int,bool)", ForPC, PinCode, bEnable); }
	bool AllowSetPinCode() { return NativeCall<bool>(this, "APrimalStructureKeypad.AllowSetPinCode()"); }
};