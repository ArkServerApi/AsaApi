#pragma once
#include "BulkForward.h"
#include "AGameplayCameraActorBase.h"

struct AGameplayCameraRigActor : public AGameplayCameraActorBase
{
public:
	AGameplayCameraRigActor() = delete;
	~AGameplayCameraRigActor() = delete;
	AGameplayCameraRigActor(const AGameplayCameraRigActor&) = delete;
	AGameplayCameraRigActor& operator=(const AGameplayCameraRigActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	UGameplayCameraComponentBase* GetCameraComponentBase() { return NativeCall<UGameplayCameraComponentBase*>(this, "AGameplayCameraRigActor.GetCameraComponentBase()"); }
	USceneComponent* GetDefaultAttachComponent() { return NativeCall<USceneComponent*>(this, "AGameplayCameraRigActor.GetDefaultAttachComponent()"); }
};
