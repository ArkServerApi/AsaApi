#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalBuff.h"

struct APrimalBuff_HotbarReplacer : APrimalBuff
{
public:
	APrimalBuff_HotbarReplacer() = delete;
	~APrimalBuff_HotbarReplacer() = delete;
	APrimalBuff_HotbarReplacer(const APrimalBuff_HotbarReplacer&) = delete;
	APrimalBuff_HotbarReplacer& operator=(const APrimalBuff_HotbarReplacer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalBuff_HotbarReplacer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalBuff_HotbarReplacer"); }

	int& SlotCountField() { return *GetNativePointerField<int*>(this, "APrimalBuff_HotbarReplacer.SlotCount"); }
	bool& bDebugField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bDebug"); }
	bool& bAllowDefaultHotbarIfBuffItemNotValidField() { return *GetNativePointerField<bool*>(this, "APrimalBuff_HotbarReplacer.bAllowDefaultHotbarIfBuffItemNotValid"); }

	void ServerRequestItems_Implementation() { NativeCall<void>(this, "APrimalBuff_HotbarReplacer.ServerRequestItems_Implementation()"); }
	void SetupForInstigator() { NativeCall<void>(this, "APrimalBuff_HotbarReplacer.SetupForInstigator()"); }
	void ServerRequestItems() { NativeCall<void>(this, "APrimalBuff_HotbarReplacer.ServerRequestItems()"); }
	bool SetSkillProvider(UObject* NewSkillProvider) { return NativeCall<bool, UObject*>(this, "APrimalBuff_HotbarReplacer.SetSkillProvider(UObject*)", NewSkillProvider); }
	void GenerateItems() { NativeCall<void>(this, "APrimalBuff_HotbarReplacer.GenerateItems()"); }
	void ReplicateAndGenerateItems() { NativeCall<void>(this, "APrimalBuff_HotbarReplacer.ReplicateAndGenerateItems()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "APrimalBuff_HotbarReplacer._getUObject()"); }

	UObject*& SkillProviderObjectField() { return *GetNativePointerField<UObject**>(this, "APrimalBuff_HotbarReplacer.SkillProviderObject"); }

	TArray<UPrimalItem*, TSizedDefaultAllocator<32> >& HotbarItemsField() { return *GetNativePointerField<TArray<UPrimalItem*, TSizedDefaultAllocator<32> >*>(this, "APrimalBuff_HotbarReplacer.HotbarItems"); }
	FTimerHandle& GenerateItemsTimerHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalBuff_HotbarReplacer.GenerateItemsTimerHandle"); }
	bool GetEntryDefaultEnabled(IDataListEntryInterface* entryInterface) { return NativeCall<bool, IDataListEntryInterface*>(this, "APrimalBuff_HotbarReplacer.GetEntryDefaultEnabled(IDataListEntryInterface*)", entryInterface); }
	static void GetSkillProviderObject_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "APrimalBuff_HotbarReplacer.GetSkillProviderObject_WrapperImpl(void*,void*)", Object, OutValue); }
	static void SetSkillProviderObject_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "APrimalBuff_HotbarReplacer.SetSkillProviderObject_WrapperImpl(void*,void*)", Object, InValue); }
};
