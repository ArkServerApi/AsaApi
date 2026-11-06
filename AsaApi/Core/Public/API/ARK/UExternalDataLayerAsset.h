#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataLayerAsset.h"

class UExternalDataLayerAsset : public UDataLayerAsset
{
public:
	UExternalDataLayerAsset() = delete;
	~UExternalDataLayerAsset() = delete;
	UExternalDataLayerAsset(const UExternalDataLayerAsset&) = delete;
	UExternalDataLayerAsset& operator=(const UExternalDataLayerAsset&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UExternalDataLayerAsset"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UExternalDataLayerAsset"); }
	FExternalDataLayerUID& UIDField() { return *GetNativePointerField<FExternalDataLayerUID*>(this, "UExternalDataLayerAsset.UID"); }
};
