#pragma once
#include "BulkForward.h"
#include "UPrimalItem.h"

struct UPrimalItem_DeathEssence : public UPrimalItem
{
public:
	UPrimalItem_DeathEssence() = delete;
	~UPrimalItem_DeathEssence() = delete;
	UPrimalItem_DeathEssence(const UPrimalItem_DeathEssence&) = delete;
	UPrimalItem_DeathEssence& operator=(const UPrimalItem_DeathEssence&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
