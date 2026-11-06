#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataAsset.h"

class UNetworkPhysicsSettingsDataAsset : public UDataAsset
{
public:
	UNetworkPhysicsSettingsDataAsset() = delete;
	~UNetworkPhysicsSettingsDataAsset() = delete;
	UNetworkPhysicsSettingsDataAsset(const UNetworkPhysicsSettingsDataAsset&) = delete;
	UNetworkPhysicsSettingsDataAsset& operator=(const UNetworkPhysicsSettingsDataAsset&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNetworkPhysicsSettingsDataAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNetworkPhysicsSettingsDataAsset"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "UNetworkPhysicsSettingsDataAsset.bInitialized"); }
	FNetworkPhysicsSettingsData& SettingsField() { return *GetNativePointerField<FNetworkPhysicsSettingsData*>(this, "UNetworkPhysicsSettingsDataAsset.Settings"); }
	void PostInitProperties() { NativeCall<void>(this, "UNetworkPhysicsSettingsDataAsset.PostInitProperties()"); }
};
