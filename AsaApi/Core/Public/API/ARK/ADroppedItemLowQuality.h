#pragma once
#include "BulkForward.h"
#include "ADroppedItem.h"

struct ADroppedItemLowQuality : public ADroppedItem
{
public:
	ADroppedItemLowQuality() = delete;
	~ADroppedItemLowQuality() = delete;
	ADroppedItemLowQuality(const ADroppedItemLowQuality&) = delete;
	ADroppedItemLowQuality& operator=(const ADroppedItemLowQuality&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADroppedItemLowQuality"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ADroppedItemLowQuality"); }
};
