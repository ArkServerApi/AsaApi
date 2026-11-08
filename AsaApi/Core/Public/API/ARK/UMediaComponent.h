#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UMediaComponent : public UActorComponent
{
public:
	UMediaComponent() = delete;
	~UMediaComponent() = delete;
	UMediaComponent(const UMediaComponent&) = delete;
	UMediaComponent& operator=(const UMediaComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMediaComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMediaComponent"); }

	void OnRegister() { NativeCall<void>(this, "UMediaComponent.OnRegister()"); }
	UMediaPlayer* GetMediaPlayer() { return NativeCall<UMediaPlayer*>(this, "UMediaComponent.GetMediaPlayer()"); }
};
