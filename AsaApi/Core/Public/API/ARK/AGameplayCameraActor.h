#pragma once
#include "BulkForward.h"
#include "AGameplayCameraActorBase.h"

struct AGameplayCameraActor : public AGameplayCameraActorBase
{
public:
	AGameplayCameraActor() = delete;
	~AGameplayCameraActor() = delete;
	AGameplayCameraActor(const AGameplayCameraActor&) = delete;
	AGameplayCameraActor& operator=(const AGameplayCameraActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	USceneComponent* GetDefaultAttachComponent() { return NativeCall<USceneComponent*>(this, "AGameplayCameraActor.GetDefaultAttachComponent()"); }
	UGameplayCameraComponentBase* GetCameraComponentBase() { return NativeCall<UGameplayCameraComponentBase*>(this, "AGameplayCameraActor.GetCameraComponentBase()"); }
};
