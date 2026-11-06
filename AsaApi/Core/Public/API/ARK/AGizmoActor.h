#pragma once
#include "BulkForward.h"
#include "AInternalToolFrameworkActor.h"

struct AGizmoActor : public AInternalToolFrameworkActor
{
public:
	AGizmoActor() = delete;
	~AGizmoActor() = delete;
	AGizmoActor(const AGizmoActor&) = delete;
	AGizmoActor& operator=(const AGizmoActor&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AGizmoActor"); }

	static UGizmoRectangleComponent* AddDefaultRectangleComponent(UWorld* World, AActor* Actor, UGizmoViewContext* GizmoViewContext, const FLinearColor& Color, const UE::Math::TVector<double>& PlaneAxis1, const UE::Math::TVector<double>& PlaneAxisx2) { return NativeCall<UGizmoRectangleComponent*, UWorld*, AActor*, UGizmoViewContext*, const FLinearColor&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(nullptr, "AGizmoActor.AddDefaultRectangleComponent(UWorld*,AActor*,UGizmoViewContext*,FLinearColor&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", World, Actor, GizmoViewContext, Color, PlaneAxis1, PlaneAxisx2); }
	static UGizmoLineHandleComponent* AddDefaultLineHandleComponent(UWorld* World, AActor* Actor, UGizmoViewContext* GizmoViewContext, const FLinearColor& Color, const UE::Math::TVector<double>& HandleNormal, const UE::Math::TVector<double>& LocalDirection, float Length, bool bImageScale) { return NativeCall<UGizmoLineHandleComponent*, UWorld*, AActor*, UGizmoViewContext*, const FLinearColor&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&, float, bool>(nullptr, "AGizmoActor.AddDefaultLineHandleComponent(UWorld*,AActor*,UGizmoViewContext*,FLinearColor&,UE::Math::TVector<double>&,UE::Math::TVector<double>&,float,bool)", World, Actor, GizmoViewContext, Color, HandleNormal, LocalDirection, Length, bImageScale); }
	static UGizmoBoxComponent* AddDefaultBoxComponent(UWorld* World, AActor* Actor, UGizmoViewContext* GizmoViewContext, const FLinearColor& Color, const UE::Math::TVector<double>& Origin, const UE::Math::TVector<double>& Dimensions) { return NativeCall<UGizmoBoxComponent*, UWorld*, AActor*, UGizmoViewContext*, const FLinearColor&, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(nullptr, "AGizmoActor.AddDefaultBoxComponent(UWorld*,AActor*,UGizmoViewContext*,FLinearColor&,UE::Math::TVector<double>&,UE::Math::TVector<double>&)", World, Actor, GizmoViewContext, Color, Origin, Dimensions); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AGizmoActor"); }
};
