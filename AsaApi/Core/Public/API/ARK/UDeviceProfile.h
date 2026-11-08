#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UTextureLODSettings.h"

class UDeviceProfile : public UTextureLODSettings
{
public:
	UDeviceProfile() = delete;
	~UDeviceProfile() = delete;
	UDeviceProfile(const UDeviceProfile&) = delete;
	UDeviceProfile& operator=(const UDeviceProfile&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDeviceProfile"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDeviceProfile"); }
	FString& DeviceTypeField() { return *GetNativePointerField<FString*>(this, "UDeviceProfile.DeviceType"); }
	FString& BaseProfileNameField() { return *GetNativePointerField<FString*>(this, "UDeviceProfile.BaseProfileName"); }
	bool& bVisibleField() { return *GetNativePointerField<bool*>(this, "UDeviceProfile.bVisible"); }
	FString& ConfigPlatformField() { return *GetNativePointerField<FString*>(this, "UDeviceProfile.ConfigPlatform"); }
	TArray<FString, TSizedDefaultAllocator<32> >& FragmentIncludesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UDeviceProfile.FragmentIncludes"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CVarsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UDeviceProfile.CVars"); }
	BitFieldValue<bool, unsigned __int32> bIsVisibleForAssets() { return { this, "UDeviceProfile.bIsVisibleForAssets"}; }
	void BeginDestroy() { NativeCall<void>(this, "UDeviceProfile.BeginDestroy()"); }
	UDeviceProfile* GetParentProfile(bool bIncludeDefaultObject) { return NativeCall<UDeviceProfile*, bool>(this, "UDeviceProfile.GetParentProfile(bool)", bIncludeDefaultObject); }
	const FRenderTargetScalabilityRule* GetRenderTargetScalabilityRule(int InSizeX) { return NativeCall<const FRenderTargetScalabilityRule*, int>(this, "UDeviceProfile.GetRenderTargetScalabilityRule(int)", InSizeX); }
	UTextureLODSettings* GetTextureLODSettings() { return NativeCall<UTextureLODSettings*>(this, "UDeviceProfile.GetTextureLODSettings()"); }
	void ValidateTextureLODGroups() { NativeCall<void>(this, "UDeviceProfile.ValidateTextureLODGroups()"); }
	const FRenderTargetScalabilityRule* GetRenderTargetScalabilityRule(int InSizeX, int InSizeY) { return NativeCall<const FRenderTargetScalabilityRule*, int, int>(this, "UDeviceProfile.GetRenderTargetScalabilityRule(int,int)", InSizeX, InSizeY); }
	const FRenderTargetScalabilityRule* GetRenderTargetScalabilityRule(int InSizeX, int InSizeY, int InSizeZ) { return NativeCall<const FRenderTargetScalabilityRule*, int, int, int>(this, "UDeviceProfile.GetRenderTargetScalabilityRule(int,int,int)", InSizeX, InSizeY, InSizeZ); }
	const wchar_t* GetConfigOverridePlatform() { return NativeCall<const wchar_t*>(this, "UDeviceProfile.GetConfigOverridePlatform()"); }
	void PostReloadConfig(FProperty* PropertyThatWasLoaded) { NativeCall<void, FProperty*>(this, "UDeviceProfile.PostReloadConfig(FProperty*)", PropertyThatWasLoaded); }
};
