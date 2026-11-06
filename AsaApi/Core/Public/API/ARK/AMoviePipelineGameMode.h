#pragma once
#include "BulkForward.h"
#include "AGameModeBase.h"

struct AMoviePipelineGameMode : public AGameModeBase
{
public:
	AMoviePipelineGameMode() = delete;
	~AMoviePipelineGameMode() = delete;
	AMoviePipelineGameMode(const AMoviePipelineGameMode&) = delete;
	AMoviePipelineGameMode& operator=(const AMoviePipelineGameMode&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMoviePipelineGameMode"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMoviePipelineGameMode"); }

	void BeginPlay() { NativeCall<void>(this, "AMoviePipelineGameMode.BeginPlay()"); }
};
