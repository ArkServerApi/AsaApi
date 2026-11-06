#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UNavRelevantComponent : public UActorComponent
{
public:
	UNavRelevantComponent() = delete;
	~UNavRelevantComponent() = delete;
	UNavRelevantComponent(const UNavRelevantComponent&) = delete;
	UNavRelevantComponent& operator=(const UNavRelevantComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavRelevantComponent"); }

	BitFieldValue<bool, unsigned __int32> bAttachToOwnersRoot() { return { this, "UNavRelevantComponent.bAttachToOwnersRoot"}; }
	BitFieldValue<bool, unsigned __int32> bBoundsInitialized() { return { this, "UNavRelevantComponent.bBoundsInitialized"}; }
	BitFieldValue<bool, unsigned __int32> bNavParentCacheInitialized() { return { this, "UNavRelevantComponent.bNavParentCacheInitialized"}; }
	void SetNavigationRelevancy(bool bRelevant) { NativeCall<void, bool>(this, "UNavRelevantComponent.SetNavigationRelevancy(bool)", bRelevant); }
	void CalcAndCacheBounds() { NativeCall<void>(this, "UNavRelevantComponent.CalcAndCacheBounds()"); }
	void OnRegister() { NativeCall<void>(this, "UNavRelevantComponent.OnRegister()"); }
	UObject* GetNavigationParent() { return NativeCall<UObject*>(this, "UNavRelevantComponent.GetNavigationParent()"); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UNavRelevantComponent.IsNavigationRelevant()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UNavRelevantComponent._getUObject()"); }
	void UpdateNavigationBounds() { NativeCall<void>(this, "UNavRelevantComponent.UpdateNavigationBounds()"); }
	void RefreshNavigationModifiers() { NativeCall<void>(this, "UNavRelevantComponent.RefreshNavigationModifiers()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavRelevantComponent"); }
	void OnUnregister() { NativeCall<void>(this, "UNavRelevantComponent.OnUnregister()"); }
};
