#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADatasmithSceneActor : public AActor
{
public:
	ADatasmithSceneActor() = delete;
	~ADatasmithSceneActor() = delete;
	ADatasmithSceneActor(const ADatasmithSceneActor&) = delete;
	ADatasmithSceneActor& operator=(const ADatasmithSceneActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void BeginDestroy() { NativeCall<void>(this, "ADatasmithSceneActor.BeginDestroy()"); }
};
