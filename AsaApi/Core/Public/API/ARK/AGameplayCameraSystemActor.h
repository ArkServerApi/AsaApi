#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGameplayCameraSystemActor : public AActor
{
public:
	AGameplayCameraSystemActor() = delete;
	~AGameplayCameraSystemActor() = delete;
	AGameplayCameraSystemActor(const AGameplayCameraSystemActor&) = delete;
	AGameplayCameraSystemActor& operator=(const AGameplayCameraSystemActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGameplayCameraSystemActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGameplayCameraSystemActor"); }

	void CalcCamera(float DeltaTime, FMinimalViewInfo& OutResult) { NativeCall<void, float, FMinimalViewInfo&>(this, "AGameplayCameraSystemActor.CalcCamera(float,FMinimalViewInfo&)", DeltaTime, OutResult); }
};
