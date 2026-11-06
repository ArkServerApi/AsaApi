#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UControllerGameplayCameraEvaluationComponent : public UActorComponent
{
public:
	UControllerGameplayCameraEvaluationComponent() = delete;
	~UControllerGameplayCameraEvaluationComponent() = delete;
	UControllerGameplayCameraEvaluationComponent(const UControllerGameplayCameraEvaluationComponent&) = delete;
	UControllerGameplayCameraEvaluationComponent& operator=(const UControllerGameplayCameraEvaluationComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UControllerGameplayCameraEvaluationComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UControllerGameplayCameraEvaluationComponent"); }

	void BeginPlay() { NativeCall<void>(this, "UControllerGameplayCameraEvaluationComponent.BeginPlay()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UControllerGameplayCameraEvaluationComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void ActivateCameraRigs() { NativeCall<void>(this, "UControllerGameplayCameraEvaluationComponent.ActivateCameraRigs()"); }
};
