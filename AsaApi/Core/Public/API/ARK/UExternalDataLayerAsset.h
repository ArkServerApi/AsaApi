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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	FExternalDataLayerUID& UIDField() { return *GetNativePointerField<FExternalDataLayerUID*>(this, "UExternalDataLayerAsset.UID"); }
};
