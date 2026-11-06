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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void CalcCamera(float DeltaTime, FMinimalViewInfo& OutResult) { NativeCall<void, float, FMinimalViewInfo&>(this, "AGameplayCameraSystemActor.CalcCamera(float,FMinimalViewInfo&)", DeltaTime, OutResult); }
};
