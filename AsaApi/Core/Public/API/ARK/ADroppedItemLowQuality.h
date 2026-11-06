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
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ADroppedItemLowQuality.StaticClass()"); }
};
