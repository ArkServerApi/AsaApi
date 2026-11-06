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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void OnRegister() { NativeCall<void>(this, "UMediaComponent.OnRegister()"); }
	UMediaPlayer* GetMediaPlayer() { return NativeCall<UMediaPlayer*>(this, "UMediaComponent.GetMediaPlayer()"); }
};
