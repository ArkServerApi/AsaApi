#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGameplayCameraActorBase : public AActor
{
public:
	AGameplayCameraActorBase() = delete;
	~AGameplayCameraActorBase() = delete;
	AGameplayCameraActorBase(const AGameplayCameraActorBase&) = delete;
	AGameplayCameraActorBase& operator=(const AGameplayCameraActorBase&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayCameraActorBase"); }

	UGameplayCameraComponentBase* GetCameraComponentBase() { return NativeCall<UGameplayCameraComponentBase*>(this, "AGameplayCameraActorBase.GetCameraComponentBase()"); }
	void CalcCamera(float DeltaTime, FMinimalViewInfo& OutResult) { NativeCall<void, float, FMinimalViewInfo&>(this, "AGameplayCameraActorBase.CalcCamera(float,FMinimalViewInfo&)", DeltaTime, OutResult); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayCameraActorBase"); }
};
