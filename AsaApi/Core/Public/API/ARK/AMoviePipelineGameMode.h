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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void BeginPlay() { NativeCall<void>(this, "AMoviePipelineGameMode.BeginPlay()"); }
};
