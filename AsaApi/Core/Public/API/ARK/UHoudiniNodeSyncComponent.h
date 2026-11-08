#pragma once
#include "BulkForward.h"
#include "UHoudiniAssetComponent.h"

struct UHoudiniNodeSyncComponent : public UHoudiniAssetComponent
{
public:
	UHoudiniNodeSyncComponent() = delete;
	~UHoudiniNodeSyncComponent() = delete;
	UHoudiniNodeSyncComponent(const UHoudiniNodeSyncComponent&) = delete;
	UHoudiniNodeSyncComponent& operator=(const UHoudiniNodeSyncComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoudiniNodeSyncComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoudiniNodeSyncComponent"); }

	FString& FetchMessageField() { return *GetNativePointerField<FString*>(this, "UHoudiniNodeSyncComponent.FetchMessage"); }
	FString& FetchNodePathField() { return *GetNativePointerField<FString*>(this, "UHoudiniNodeSyncComponent.FetchNodePath"); }
	bool& bLiveSyncEnabledField() { return *GetNativePointerField<bool*>(this, "UHoudiniNodeSyncComponent.bLiveSyncEnabled"); }
	bool CanDeleteHoudiniNodes() { return NativeCall<bool>(this, "UHoudiniNodeSyncComponent.CanDeleteHoudiniNodes()"); }
	FString* GetHoudiniAssetName(FString* result) { return NativeCall<FString*, FString*>(this, "UHoudiniNodeSyncComponent.GetHoudiniAssetName()", result); }
	bool IsValidComponent() { return NativeCall<bool>(this, "UHoudiniNodeSyncComponent.IsValidComponent()"); }
};
