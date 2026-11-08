#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "USoundSubmixBase.h"

class USoundSubmixWithParentBase : public USoundSubmixBase
{
public:
	USoundSubmixWithParentBase() = delete;
	~USoundSubmixWithParentBase() = delete;
	USoundSubmixWithParentBase(const USoundSubmixWithParentBase&) = delete;
	USoundSubmixWithParentBase& operator=(const USoundSubmixWithParentBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundSubmixWithParentBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundSubmixWithParentBase"); }
	BitFieldValue<bool, unsigned char> bIsDynamic() { return { this, "USoundSubmixWithParentBase.bIsDynamic"}; }
	bool IsDynamic(bool bIncludeAncestors) { return NativeCall<bool, bool>(this, "USoundSubmixWithParentBase.IsDynamic(bool)", bIncludeAncestors); }
	USoundSubmixBase* FindDynamicAncestor() { return NativeCall<USoundSubmixBase*>(this, "USoundSubmixWithParentBase.FindDynamicAncestor()"); }
	void SetParentSubmix(USoundSubmixBase* InParentSubmix, bool bModifyAssets) { NativeCall<void, USoundSubmixBase*, bool>(this, "USoundSubmixWithParentBase.SetParentSubmix(USoundSubmixBase*,bool)", InParentSubmix, bModifyAssets); }
	bool DynamicConnect(const UObject* WorldContextObject, USoundSubmixBase* InParent) { return NativeCall<bool, const UObject*, USoundSubmixBase*>(this, "USoundSubmixWithParentBase.DynamicConnect(UObject*,USoundSubmixBase*)", WorldContextObject, InParent); }
	bool DynamicDisconnect(const UObject* WorldContextObject) { return NativeCall<bool, const UObject*>(this, "USoundSubmixWithParentBase.DynamicDisconnect(UObject*)", WorldContextObject); }
};
