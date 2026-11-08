#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct ULiveLinkComponent : public UActorComponent
{
public:
	ULiveLinkComponent() = delete;
	~ULiveLinkComponent() = delete;
	ULiveLinkComponent(const ULiveLinkComponent&) = delete;
	ULiveLinkComponent& operator=(const ULiveLinkComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULiveLinkComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULiveLinkComponent"); }

	FLiveLinkTickSignature& OnLiveLinkUpdatedField() { return *GetNativePointerField<FLiveLinkTickSignature*>(this, "ULiveLinkComponent.OnLiveLinkUpdated"); }
	bool& bIsDirtyField() { return *GetNativePointerField<bool*>(this, "ULiveLinkComponent.bIsDirty"); }
	ILiveLinkClient*& LiveLinkClientField() { return *GetNativePointerField<ILiveLinkClient**>(this, "ULiveLinkComponent.LiveLinkClient"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "ULiveLinkComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void OnRegister() { NativeCall<void>(this, "ULiveLinkComponent.OnRegister()"); }
};
