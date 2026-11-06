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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
