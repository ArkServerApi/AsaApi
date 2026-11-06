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
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALandscapeGizmoActor"); }

	static UClass* StaticClass() { return AsaApi::ResolveClass("ALandscapeGizmoActor"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ALandscapeGizmoActor.IsLevelBoundsRelevant()"); }
};
