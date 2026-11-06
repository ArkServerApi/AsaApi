#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UPrimalItem.h"

struct UPrimalItem_HotbarSkill : UPrimalItem
{
public:
	UPrimalItem_HotbarSkill() = delete;
	~UPrimalItem_HotbarSkill() = delete;
	UPrimalItem_HotbarSkill(const UPrimalItem_HotbarSkill&) = delete;
	UPrimalItem_HotbarSkill& operator=(const UPrimalItem_HotbarSkill&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalItem_HotbarSkill"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalItem_HotbarSkill"); }



	void InitializeItem(bool bForceReinit, UWorld* OptionalInitWorld) { NativeCall<void, bool, UWorld*>(this, "UPrimalItem_HotbarSkill.InitializeItem(bool,UWorld*)", bForceReinit, OptionalInitWorld); }
	float GetCooldownDuration() { return NativeCall<float>(this, "UPrimalItem_HotbarSkill.GetCooldownDuration()"); }
	void RemoveFromSlot(bool bForce, bool bFastInventory) { NativeCall<void, bool, bool>(this, "UPrimalItem_HotbarSkill.RemoveFromSlot(bool,bool)", bForce, bFastInventory); }
	void Used(UPrimalItem* DestinationItem, int AdditionalData) { NativeCall<void, UPrimalItem*, int>(this, "UPrimalItem_HotbarSkill.Used(UPrimalItem*,int)", DestinationItem, AdditionalData); }
	float GetRemainingCooldownTime() { return NativeCall<float>(this, "UPrimalItem_HotbarSkill.GetRemainingCooldownTime()"); }
	void AddToSlot(int theSlotIndex, bool bForce, bool bFastInventory) { NativeCall<void, int, bool, bool>(this, "UPrimalItem_HotbarSkill.AddToSlot(int,bool,bool)", theSlotIndex, bForce, bFastInventory); }

	BitFieldValue<bool, unsigned char> bSwappingSlots() { return { this, "UPrimalItem_HotbarSkill.bSwappingSlots"}; }

	FName& MySkillNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItem_HotbarSkill.MySkillName"); }
	void InitFromNetInfo(const FItemNetInfo& theInfo, const UWorld* InWorld) { NativeCall<void, const FItemNetInfo&, const UWorld*>(this, "UPrimalItem_HotbarSkill.InitFromNetInfo(FItemNetInfo&,UWorld*)", theInfo, InWorld); }
};
