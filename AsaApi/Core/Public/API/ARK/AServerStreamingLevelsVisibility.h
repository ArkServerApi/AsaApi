#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AServerStreamingLevelsVisibility : public AActor
{
public:
	AServerStreamingLevelsVisibility() = delete;
	~AServerStreamingLevelsVisibility() = delete;
	AServerStreamingLevelsVisibility(const AServerStreamingLevelsVisibility&) = delete;
	AServerStreamingLevelsVisibility& operator=(const AServerStreamingLevelsVisibility&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AServerStreamingLevelsVisibility"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AServerStreamingLevelsVisibility"); }

	void SetIsVisible(ULevelStreaming* InStreamingLevel, bool bInIsVisible) { NativeCall<void, ULevelStreaming*, bool>(this, "AServerStreamingLevelsVisibility.SetIsVisible(ULevelStreaming*,bool)", InStreamingLevel, bInIsVisible); }
	static AServerStreamingLevelsVisibility* SpawnServerActor(UWorld* InWorld) { return NativeCall<AServerStreamingLevelsVisibility*, UWorld*>(nullptr, "AServerStreamingLevelsVisibility.SpawnServerActor(UWorld*)", InWorld); }
	ULevelStreaming* GetVisibleStreamingLevel(const FName& InPackageName) { return NativeCall<ULevelStreaming*, const FName&>(this, "AServerStreamingLevelsVisibility.GetVisibleStreamingLevel(FName&)", InPackageName); }
};
