#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UDeviceProfileManager : public UObject
{
public:
	UDeviceProfileManager() = delete;
	~UDeviceProfileManager() = delete;
	UDeviceProfileManager(const UDeviceProfileManager&) = delete;
	UDeviceProfileManager& operator=(const UDeviceProfileManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UDeviceProfileManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UDeviceProfileManager"); }
	UDeviceProfile*& ActiveDeviceProfileField() { return *GetNativePointerField<UDeviceProfile**>(this, "UDeviceProfileManager.ActiveDeviceProfile"); }
	UDeviceProfile*& BaseDeviceProfileField() { return *GetNativePointerField<UDeviceProfile**>(this, "UDeviceProfileManager.BaseDeviceProfile"); }
	UDeviceProfile*& PreviewDeviceProfileField() { return *GetNativePointerField<UDeviceProfile**>(this, "UDeviceProfileManager.PreviewDeviceProfile"); }
	static UDeviceProfileManager& Get(bool bFromPostCDOContruct) { return NativeCall<UDeviceProfileManager&, bool>(nullptr, "UDeviceProfileManager.Get(bool)", bFromPostCDOContruct); }
	void SetActiveDeviceProfile(UDeviceProfile* DeviceProfile) { NativeCall<void, UDeviceProfile*>(this, "UDeviceProfileManager.SetActiveDeviceProfile(UDeviceProfile*)", DeviceProfile); }
	static void InitializeCVarsForActiveDeviceProfile(bool bPushSettings, bool bIsDeviceProfilePreview, bool bForceReload) { NativeCall<void, bool, bool, bool>(nullptr, "UDeviceProfileManager.InitializeCVarsForActiveDeviceProfile(bool,bool,bool)", bPushSettings, bIsDeviceProfilePreview, bForceReload); }
	void HandleDeviceProfileOverrideChange() { NativeCall<void>(this, "UDeviceProfileManager.HandleDeviceProfileOverrideChange()"); }
	void SetOverrideDeviceProfile(UDeviceProfile* DeviceProfile) { NativeCall<void, UDeviceProfile*>(this, "UDeviceProfileManager.SetOverrideDeviceProfile(UDeviceProfile*)", DeviceProfile); }
	UDeviceProfile* GetPreviewDeviceProfile() { return NativeCall<UDeviceProfile*>(this, "UDeviceProfileManager.GetPreviewDeviceProfile()"); }
	UDeviceProfile* FindProfile(const FString& ProfileName, bool bCreateProfileOnFail, FName OptionalPlatformName) { return NativeCall<UDeviceProfile*, const FString&, bool, FName>(this, "UDeviceProfileManager.FindProfile(FString&,bool,FName)", ProfileName, bCreateProfileOnFail, OptionalPlatformName); }
	UDeviceProfile* CreateProfile(const FString& ProfileName, const FString& ProfileType, const FString& InSpecifyParentName, const wchar_t* ConfigPlatform) { return NativeCall<UDeviceProfile*, const FString&, const FString&, const FString&, const wchar_t*>(this, "UDeviceProfileManager.CreateProfile(FString&,FString&,FString&,wchar_t*)", ProfileName, ProfileType, InSpecifyParentName, ConfigPlatform); }
	static FString* GetPlatformDeviceProfileName(FString* result) { return NativeCall<FString*, FString*>(nullptr, "UDeviceProfileManager.GetPlatformDeviceProfileName()", result); }
	UDeviceProfile* GetActiveProfile() { return NativeCall<UDeviceProfile*>(this, "UDeviceProfileManager.GetActiveProfile()"); }
	void LoadProfiles() { NativeCall<void>(this, "UDeviceProfileManager.LoadProfiles()"); }
	void PostCDOContruct() { NativeCall<void>(this, "UDeviceProfileManager.PostCDOContruct()"); }
	static IDeviceProfileSelectorModule* GetDeviceProfileSelectorModule() { return NativeCall<IDeviceProfileSelectorModule*>(nullptr, "UDeviceProfileManager.GetDeviceProfileSelectorModule()"); }
	FString* GetActiveDeviceProfileName(FString* result) { return NativeCall<FString*, FString*>(this, "UDeviceProfileManager.GetActiveDeviceProfileName()", result); }
	static void SetDeviceProfileCVars(const FString& DeviceProfileName) { NativeCall<void, const FString&>(nullptr, "UDeviceProfileManager.SetDeviceProfileCVars(FString&)", DeviceProfileName); }
};
