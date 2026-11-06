#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalItem.h"

struct UPrimalItem_ItemTrait : UPrimalItem
{
public:
	UPrimalItem_ItemTrait() = delete;
	~UPrimalItem_ItemTrait() = delete;
	UPrimalItem_ItemTrait(const UPrimalItem_ItemTrait&) = delete;
	UPrimalItem_ItemTrait& operator=(const UPrimalItem_ItemTrait&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItem_ItemTrait"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItem_ItemTrait"); }



	bool BPSupportUseOntoItem_Implementation(UPrimalItem* DestinationItem) { return NativeCall<bool, UPrimalItem*>(this, "UPrimalItem_ItemTrait.BPSupportUseOntoItem_Implementation(UPrimalItem*)", DestinationItem); }
	void Used(UPrimalItem* DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalItem_ItemTrait.Used(UPrimalItem*,int)", DestinationItem, AdditionalData); }

	BitFieldValue<bool, unsigned char> bRequireActiveOwnerContainer() { return { this, "UPrimalItem_ItemTrait.bRequireActiveOwnerContainer"}; }

	void OnVersionChange(bool& doDestroy, UWorld* World, AShooterGameMode* gameMode, int versionOverride) { NativeCall<void, bool&, UWorld*, AShooterGameMode*, int>(this, "UPrimalItem_ItemTrait.OnVersionChange(bool&,UWorld*,AShooterGameMode*,int)", doDestroy, World, gameMode, versionOverride); }
};
