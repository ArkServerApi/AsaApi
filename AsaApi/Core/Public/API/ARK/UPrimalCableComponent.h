#pragma once
#include "BulkForward.h"
#include "UProceduralMeshComponent.h"

struct UPrimalCableComponent : public UProceduralMeshComponent
{
public:
	UPrimalCableComponent() = delete;
	~UPrimalCableComponent() = delete;
	UPrimalCableComponent(const UPrimalCableComponent&) = delete;
	UPrimalCableComponent& operator=(const UPrimalCableComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalCableComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalCableComponent"); }

	FComponentReference& AttachEndToField() { return *GetNativePointerField<FComponentReference*>(this, "UPrimalCableComponent.AttachEndTo"); }
	UE::Math::TVector<double>& EndLocationField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UPrimalCableComponent.EndLocation"); }
	float& CableLengthField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.CableLength"); }
	int& NumSegmentsField() { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.NumSegments"); }
	float& SubstepTimeField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.SubstepTime"); }
	int& SolverIterationsField() { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.SolverIterations"); }
	float& MaxParticleSpeedField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.MaxParticleSpeed"); }
	float& CableWidthField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.CableWidth"); }
	int& NumSidesField() { return *GetNativePointerField<int*>(this, "UPrimalCableComponent.NumSides"); }
	float& TileMaterialField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.TileMaterial"); }
	bool& bRenderFirstHalfOnlyField() { return *GetNativePointerField<bool*>(this, "UPrimalCableComponent.bRenderFirstHalfOnly"); }
	float& TimeRemainderField() { return *GetNativePointerField<float*>(this, "UPrimalCableComponent.TimeRemainder"); }
	BitFieldValue<bool, unsigned char> bEndPointIsInWorldSpace() { return { this, "UPrimalCableComponent.bEndPointIsInWorldSpace"}; }
	USceneComponent* GetAttachEndOverrideComponent() { return NativeCall<USceneComponent*>(this, "UPrimalCableComponent.GetAttachEndOverrideComponent()"); }
	void OnRegister() { NativeCall<void>(this, "UPrimalCableComponent.OnRegister()"); }
	void SetAttachEndOverrideComponent(USceneComponent* component) { NativeCall<void, USceneComponent*>(this, "UPrimalCableComponent.SetAttachEndOverrideComponent(USceneComponent*)", component); }
	void UpdateProceduralMesh(const TArray<UE::Math::TVector<float>, TSizedDefaultAllocator<32> >& InPoints) { NativeCall<void, const TArray<UE::Math::TVector<float>, TSizedDefaultAllocator<32> >&>(this, "UPrimalCableComponent.UpdateProceduralMesh(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>>&)", InPoints); }
	int GetNumMaterials() { return NativeCall<int>(this, "UPrimalCableComponent.GetNumMaterials()"); }
	void UpdateProceduralMesh() { NativeCall<void>(this, "UPrimalCableComponent.UpdateProceduralMesh()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UPrimalCableComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UPrimalCableComponent.CreateSceneProxy()"); }
	void SolveConstraints() { NativeCall<void>(this, "UPrimalCableComponent.SolveConstraints()"); }
	void MarkRenderDynamicDataDirtyBP() { NativeCall<void>(this, "UPrimalCableComponent.MarkRenderDynamicDataDirtyBP()"); }
	UE::Math::TVector<double>* GetCableMidPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimalCableComponent.GetCableMidPoint()", result); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UPrimalCableComponent.SendRenderDynamicData_Concurrent()"); }
	void GetEndPositions(UE::Math::TVector<double>& OutStartPosition, UE::Math::TVector<double>& OutEndPosition) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TVector<double>&>(this, "UPrimalCableComponent.GetEndPositions(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", OutStartPosition, OutEndPosition); }
	void SpreadOutParticles(const UE::Math::TVector<double>& StartPosition, const UE::Math::TVector<double>& EndPosition) { NativeCall<void, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "UPrimalCableComponent.SpreadOutParticles(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", StartPosition, EndPosition); }
};
