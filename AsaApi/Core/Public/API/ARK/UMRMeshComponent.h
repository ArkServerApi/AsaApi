#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UMRMeshComponent : public UPrimitiveComponent
{
public:
	UMRMeshComponent() = delete;
	~UMRMeshComponent() = delete;
	UMRMeshComponent(const UMRMeshComponent&) = delete;
	UMRMeshComponent& operator=(const UMRMeshComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMRMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMRMeshComponent"); }

	bool& bCreateMeshProxySectionsField() { return *GetNativePointerField<bool*>(this, "UMRMeshComponent.bCreateMeshProxySections"); }
	bool& bUpdateNavMeshOnMeshUpdateField() { return *GetNativePointerField<bool*>(this, "UMRMeshComponent.bUpdateNavMeshOnMeshUpdate"); }
	bool& bNavMeshUpdateSuggestedField() { return *GetNativePointerField<bool*>(this, "UMRMeshComponent.bNavMeshUpdateSuggested"); }
	bool& bNeverCreateCollisionMeshField() { return *GetNativePointerField<bool*>(this, "UMRMeshComponent.bNeverCreateCollisionMesh"); }
	bool& bUseAsyncCookingField() { return *GetNativePointerField<bool*>(this, "UMRMeshComponent.bUseAsyncCooking"); }
	bool& bConnectedField() { return *GetNativePointerField<bool*>(this, "UMRMeshComponent.bConnected"); }
	bool& bEnableOcclusionField() { return *GetNativePointerField<bool*>(this, "UMRMeshComponent.bEnableOcclusion"); }
	bool& bUseWireframeField() { return *GetNativePointerField<bool*>(this, "UMRMeshComponent.bUseWireframe"); }
	FLinearColor& WireframeColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMRMeshComponent.WireframeColor"); }
	TArray<unsigned __int64, TSizedDefaultAllocator<32> >& BodyIdsField() { return *GetNativePointerField<TArray<unsigned __int64, TSizedDefaultAllocator<32> >*>(this, "UMRMeshComponent.BodyIds"); }
	void SuggestNavMeshUpdate() { NativeCall<void>(this, "UMRMeshComponent.SuggestNavMeshUpdate()"); }
	void ClearAllBrickData_Internal() { NativeCall<void>(this, "UMRMeshComponent.ClearAllBrickData_Internal()"); }
	void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps) { NativeCall<void, FName, bool>(this, "UMRMeshComponent.SetCollisionProfileName(FName,bool)", InCollisionProfileName, bUpdateOverlaps); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UMRMeshComponent.CreateSceneProxy()"); }
	void BeginPlay() { NativeCall<void>(this, "UMRMeshComponent.BeginPlay()"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UMRMeshComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UMRMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	void SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse) { NativeCall<void, ECollisionChannel, ECollisionResponse>(this, "UMRMeshComponent.SetCollisionResponseToChannel(ECollisionChannel,ECollisionResponse)", Channel, NewResponse); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "UMRMeshComponent.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void SetMaterial(int ElementIndex, UMaterialInterface* InMaterial) { NativeCall<void, int, UMaterialInterface*>(this, "UMRMeshComponent.SetMaterial(int,UMaterialInterface*)", ElementIndex, InMaterial); }
	bool IsConnected() { return NativeCall<bool>(this, "UMRMeshComponent.IsConnected()"); }
	void SetCollisionResponseToAllChannels(ECollisionResponse NewResponse) { NativeCall<void, ECollisionResponse>(this, "UMRMeshComponent.SetCollisionResponseToAllChannels(ECollisionResponse)", NewResponse); }
	void SetWireframeMaterial(UMaterialInterface* InMaterial) { NativeCall<void, UMaterialInterface*>(this, "UMRMeshComponent.SetWireframeMaterial(UMaterialInterface*)", InMaterial); }
	void SetCollisionObjectType(ECollisionChannel Channel) { NativeCall<void, ECollisionChannel>(this, "UMRMeshComponent.SetCollisionObjectType(ECollisionChannel)", Channel); }
	void UpdatePhysicsToRBChannels() { NativeCall<void>(this, "UMRMeshComponent.UpdatePhysicsToRBChannels()"); }
	void SetCollisionEnabled(ECollisionEnabled::Type NewType) { NativeCall<void, ECollisionEnabled::Type>(this, "UMRMeshComponent.SetCollisionEnabled(ECollisionEnabled::Type)", NewType); }
	void Clear() { NativeCall<void>(this, "UMRMeshComponent.Clear()"); }
	void SetCollisionResponseToChannels(const FCollisionResponseContainer& NewResponses) { NativeCall<void, const FCollisionResponseContainer&>(this, "UMRMeshComponent.SetCollisionResponseToChannels(FCollisionResponseContainer&)", NewResponses); }
	void SetConnected(bool value) { NativeCall<void, bool>(this, "UMRMeshComponent.SetConnected(bool)", value); }
	UMaterialInterface* GetMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "UMRMeshComponent.GetMaterial(int)", ElementIndex); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UMRMeshComponent.SendRenderDynamicData_Concurrent()"); }
	void SetWireframeColor(const FLinearColor& InColor) { NativeCall<void, const FLinearColor&>(this, "UMRMeshComponent.SetWireframeColor(FLinearColor&)", InColor); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UMRMeshComponent.ShouldCreatePhysicsState()"); }
	void OnActorEnableCollisionChanged() { NativeCall<void>(this, "UMRMeshComponent.OnActorEnableCollisionChanged()"); }
	void SetWalkableSlopeOverride(const FWalkableSlopeOverride& NewOverride) { NativeCall<void, const FWalkableSlopeOverride&>(this, "UMRMeshComponent.SetWalkableSlopeOverride(FWalkableSlopeOverride&)", NewOverride); }
	void RemoveBodyInstance(int BodyIndex) { NativeCall<void, int>(this, "UMRMeshComponent.RemoveBodyInstance(int)", BodyIndex); }
	void ClearAllBrickData() { NativeCall<void>(this, "UMRMeshComponent.ClearAllBrickData()"); }
};
