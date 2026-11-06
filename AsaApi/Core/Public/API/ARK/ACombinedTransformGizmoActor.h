#pragma once
#include "BulkForward.h"
#include "AGizmoActor.h"

struct ACombinedTransformGizmoActor : public AGizmoActor
{
public:
	ACombinedTransformGizmoActor() = delete;
	~ACombinedTransformGizmoActor() = delete;
	ACombinedTransformGizmoActor(const ACombinedTransformGizmoActor&) = delete;
	ACombinedTransformGizmoActor& operator=(const ACombinedTransformGizmoActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ACombinedTransformGizmoActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ACombinedTransformGizmoActor"); }

};
