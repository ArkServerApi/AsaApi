#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalItem.h"

struct UPrimalItem_Radio : UPrimalItem
{
public:
	UPrimalItem_Radio() = delete;
	~UPrimalItem_Radio() = delete;
	UPrimalItem_Radio(const UPrimalItem_Radio&) = delete;
	UPrimalItem_Radio& operator=(const UPrimalItem_Radio&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItem_Radio"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItem_Radio"); }



	float GetMiscInfoFontScale() { return NativeCall<float>(this, "UPrimalItem_Radio.GetMiscInfoFontScale()"); }
	void LocalUse(AShooterPlayerController* ForPC) { NativeCall<void, AShooterPlayerController*>(this, "UPrimalItem_Radio.LocalUse(AShooterPlayerController*)", ForPC); }
	void InitializeItem(bool bForceReinit, UWorld* OptionalInitWorld) { NativeCall<void, bool, UWorld*>(this, "UPrimalItem_Radio.InitializeItem(bool,UWorld*)", bForceReinit, OptionalInitWorld); }
	bool IsRadioActive() { return NativeCall<bool>(this, "UPrimalItem_Radio.IsRadioActive()"); }

	BitFieldValue<bool, unsigned __int32> bAllowVoice() { return { this, "UPrimalItem_Radio.bAllowVoice"}; }

	USoundBase*& SetFrequencySoundField() { return *GetNativePointerField<USoundBase**>(this, "UPrimalItem_Radio.SetFrequencySound"); }

	bool ProcessEditText(AShooterPlayerController* ForPC, const FString& TextToUse, bool checkedBox) { return NativeCall<bool, AShooterPlayerController*, const FString&, bool>(this, "UPrimalItem_Radio.ProcessEditText(AShooterPlayerController*,FString&,bool)", ForPC, TextToUse, checkedBox); }
	FString* GetMiscInfoString(FString* result) { return NativeCall<FString*, FString*>(this, "UPrimalItem_Radio.GetMiscInfoString()", result); }
};
