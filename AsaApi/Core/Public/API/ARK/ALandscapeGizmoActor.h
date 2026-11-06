#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALandscapeGizmoActor : public AActor
{
public:
	ALandscapeGizmoActor() = delete;
	~ALandscapeGizmoActor() = delete;
	ALandscapeGizmoActor(const ALandscapeGizmoActor&) = delete;
	ALandscapeGizmoActor& operator=(const ALandscapeGizmoActor&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ALandscapeGizmoActor.StaticClass()"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ALandscapeGizmoActor.IsLevelBoundsRelevant()"); }
};
