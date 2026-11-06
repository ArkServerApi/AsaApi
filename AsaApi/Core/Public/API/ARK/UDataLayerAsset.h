#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UDataAsset.h"

struct UDataLayerAsset : public UDataAsset
{
public:
	UDataLayerAsset() = delete;
	~UDataLayerAsset() = delete;
	UDataLayerAsset(const UDataLayerAsset&) = delete;
	UDataLayerAsset& operator=(const UDataLayerAsset&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UDataLayerAsset.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	bool& bSupportsActorFiltersField() { return *GetNativePointerField<bool*>(this, "UDataLayerAsset.bSupportsActorFilters"); }
	FColor& DebugColorField() { return *GetNativePointerField<FColor*>(this, "UDataLayerAsset.DebugColor"); }
};
