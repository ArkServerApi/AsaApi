#pragma once
#include "BulkForward.h"
#include "ALandscapeGizmoActor.h"

struct ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	ALandscapeGizmoActiveActor() = delete;
	~ALandscapeGizmoActiveActor() = delete;
	ALandscapeGizmoActiveActor(const ALandscapeGizmoActiveActor&) = delete;
	ALandscapeGizmoActiveActor& operator=(const ALandscapeGizmoActiveActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
