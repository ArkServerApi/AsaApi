#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class USoundSubmixBase : public UObject
{
public:
	USoundSubmixBase() = delete;
	~USoundSubmixBase() = delete;
	USoundSubmixBase(const USoundSubmixBase&) = delete;
	USoundSubmixBase& operator=(const USoundSubmixBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundSubmixBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundSubmixBase"); }
	bool& bAutoDisableField() { return *GetNativePointerField<bool*>(this, "USoundSubmixBase.bAutoDisable"); }
	float& AutoDisableTimeField() { return *GetNativePointerField<float*>(this, "USoundSubmixBase.AutoDisableTime"); }
	void IncrementLoadRefCount() { NativeCall<void>(this, "USoundSubmixBase.IncrementLoadRefCount()"); }
	FString* GetDesc(FString* result) { return NativeCall<FString*, FString*>(this, "USoundSubmixBase.GetDesc()", result); }
	bool IsDynamic(bool bIncludeAncestors) { return NativeCall<bool, bool>(this, "USoundSubmixBase.IsDynamic(bool)", bIncludeAncestors); }
	USoundSubmixBase* FindDynamicAncestor() { return NativeCall<USoundSubmixBase*>(this, "USoundSubmixBase.FindDynamicAncestor()"); }
	void BeginDestroy() { NativeCall<void>(this, "USoundSubmixBase.BeginDestroy()"); }
	bool DynamicConnect(const UObject* WorldContextObject, USoundSubmixBase* InParent) { return NativeCall<bool, const UObject*, USoundSubmixBase*>(this, "USoundSubmixBase.DynamicConnect(UObject*,USoundSubmixBase*)", WorldContextObject, InParent); }
	bool DynamicDisconnect(const UObject* WorldContextObject) { return NativeCall<bool, const UObject*>(this, "USoundSubmixBase.DynamicDisconnect(UObject*)", WorldContextObject); }
	void PostLoad() { NativeCall<void>(this, "USoundSubmixBase.PostLoad()"); }
	void DecrementLoadRefCount() { NativeCall<void>(this, "USoundSubmixBase.DecrementLoadRefCount()"); }
};
