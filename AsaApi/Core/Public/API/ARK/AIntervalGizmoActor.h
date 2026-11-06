#pragma once
#include "BulkForward.h"
#include "AGizmoActor.h"

struct AIntervalGizmoActor : public AGizmoActor
{
public:
	AIntervalGizmoActor() = delete;
	~AIntervalGizmoActor() = delete;
	AIntervalGizmoActor(const AIntervalGizmoActor&) = delete;
	AIntervalGizmoActor& operator=(const AIntervalGizmoActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	static AIntervalGizmoActor* ConstructDefaultIntervalGizmo(UWorld* World, UGizmoViewContext* GizmoViewContext) { return NativeCall<AIntervalGizmoActor*, UWorld*, UGizmoViewContext*>(nullptr, "AIntervalGizmoActor.ConstructDefaultIntervalGizmo(UWorld*,UGizmoViewContext*)", World, GizmoViewContext); }
};
