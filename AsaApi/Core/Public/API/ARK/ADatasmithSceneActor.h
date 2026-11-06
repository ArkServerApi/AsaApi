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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADatasmithSceneActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADatasmithSceneActor"); }

	void BeginDestroy() { NativeCall<void>(this, "ADatasmithSceneActor.BeginDestroy()"); }
};
