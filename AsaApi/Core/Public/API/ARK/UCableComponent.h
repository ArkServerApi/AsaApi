#pragma once
#include "BulkForward.h"
#include "UMeshComponent.h"

struct UCableComponent : public UMeshComponent
{
public:
	UCableComponent() = delete;
	~UCableComponent() = delete;
	UCableComponent(const UCableComponent&) = delete;
	UCableComponent& operator=(const UCableComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UCableComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UCableComponent"); }

	bool& bAttachStartField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bAttachStart"); }
	bool& bAttachEndField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bAttachEnd"); }
	FComponentReference& AttachEndToField() { return *GetNativePointerField<FComponentReference*>(this, "UCableComponent.AttachEndTo"); }
	FName& AttachEndToSocketNameField() { return *GetNativePointerField<FName*>(this, "UCableComponent.AttachEndToSocketName"); }
	UE::Math::TVector<double>& EndLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UCableComponent.EndLocation"); }
	float& CableLengthField() { return *GetNativePointerField<float*>(this, "UCableComponent.CableLength"); }
	int& NumSegmentsField() { return *GetNativePointerField<int*>(this, "UCableComponent.NumSegments"); }
	float& SubstepTimeField() { return *GetNativePointerField<float*>(this, "UCableComponent.SubstepTime"); }
	int& SolverIterationsField() { return *GetNativePointerField<int*>(this, "UCableComponent.SolverIterations"); }
	bool& bEnableStiffnessField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bEnableStiffness"); }
	bool& bUseSubsteppingField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bUseSubstepping"); }
	bool& bSkipCableUpdateWhenNotVisibleField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bSkipCableUpdateWhenNotVisible"); }
	bool& bSkipCableUpdateWhenNotOwnerRecentlyRenderedField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bSkipCableUpdateWhenNotOwnerRecentlyRendered"); }
	bool& bEnableCollisionField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bEnableCollision"); }
	float& CollisionFrictionField() { return *GetNativePointerField<float*>(this, "UCableComponent.CollisionFriction"); }
	UE::Math::TVector<double>& CableForceField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UCableComponent.CableForce"); }
	float& CableGravityScaleField() { return *GetNativePointerField<float*>(this, "UCableComponent.CableGravityScale"); }
	float& CableWidthField() { return *GetNativePointerField<float*>(this, "UCableComponent.CableWidth"); }
	int& NumSidesField() { return *GetNativePointerField<int*>(this, "UCableComponent.NumSides"); }
	float& TileMaterialField() { return *GetNativePointerField<float*>(this, "UCableComponent.TileMaterial"); }
	bool& bResetAfterTeleportField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bResetAfterTeleport"); }
	float& TeleportDistanceThresholdField() { return *GetNativePointerField<float*>(this, "UCableComponent.TeleportDistanceThreshold"); }
	float& TeleportRotationThresholdField() { return *GetNativePointerField<float*>(this, "UCableComponent.TeleportRotationThreshold"); }
	bool& bTeleportAfterReattachField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bTeleportAfterReattach"); }
	float& TimeRemainderField() { return *GetNativePointerField<float*>(this, "UCableComponent.TimeRemainder"); }
	UE::Math::TVector<double>& LastEndPointField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UCableComponent.LastEndPoint"); }
	UE::Math::TVector<double>& LastEndLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UCableComponent.LastEndLocation"); }
	UE::Math::TVector<double>& LastStartPointField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UCableComponent.LastStartPoint"); }
	bool& bLastStartAttachedField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bLastStartAttached"); }
	bool& bLastEndAttachedField() { return *GetNativePointerField<bool*>(this, "UCableComponent.bLastEndAttached"); }
	void ApplyWorldOffset(const UE::Math::TVector<double>& InOffset, bool bWorldShift) { NativeCall<void, const UE::Math::TVector<double>&, bool>(this, "UCableComponent.ApplyWorldOffset(UE::Math::TVector<double>&,bool)", InOffset, bWorldShift); }
	void PerformCableCollision() { NativeCall<void>(this, "UCableComponent.PerformCableCollision()"); }
	void GetEndPositions(UE::Math::TVector<double>& OutStartPosition, UE::Math::TVector<double>& OutEndPosition) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "UCableComponent.GetEndPositions(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", OutStartPosition, OutEndPosition); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UCableComponent.SendRenderDynamicData_Concurrent()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UCableComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void PostLoad() { NativeCall<void>(this, "UCableComponent.PostLoad()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UCableComponent.CreateSceneProxy()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UCableComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	int GetNumMaterials() { return NativeCall<int>(this, "UCableComponent.GetNumMaterials()"); }
	void VerletIntegrate(float InSubstepTime, const UE::Math::TVector<double>& Gravity) { NativeCall<void, float, const UE::Math::TVector<double>&>(this, "UCableComponent.VerletIntegrate(float,UE::Math::TVector<double>&)", InSubstepTime, Gravity); }
	UE::Math::TTransform<double>* GetSocketTransform(UE::Math::TTransform<double>* result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, ERelativeTransformSpace>(this, "UCableComponent.GetSocketTransform(FName,ERelativeTransformSpace)", result, InSocketName, TransformSpace); }
	void OnRegister() { NativeCall<void>(this, "UCableComponent.OnRegister()"); }
	bool DoesSocketExist(FName InSocketName) { return NativeCall<bool, FName>(this, "UCableComponent.DoesSocketExist(FName)", InSocketName); }
	void DoTeleportCorrections(const UE::Math::TVector<double>& StartPosition, const UE::Math::TVector<double>& EndPosition) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UCableComponent.DoTeleportCorrections(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", StartPosition, EndPosition); }
	void SolveConstraints() { NativeCall<void>(this, "UCableComponent.SolveConstraints()"); }
	void OnVisibilityChanged() { NativeCall<void>(this, "UCableComponent.OnVisibilityChanged()"); }
	bool HasAnySockets() { return NativeCall<bool>(this, "UCableComponent.HasAnySockets()"); }
};
