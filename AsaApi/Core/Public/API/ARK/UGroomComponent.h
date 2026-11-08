#pragma once
#include "BulkForward.h"
#include "UMeshComponent.h"

struct UGroomComponent : public UMeshComponent
{
public:
	UGroomComponent() = delete;
	~UGroomComponent() = delete;
	UGroomComponent(const UGroomComponent&) = delete;
	UGroomComponent& operator=(const UGroomComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGroomComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGroomComponent"); }

	TArray<TWeakObjectPtr<USkeletalMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& CollisionComponentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<USkeletalMeshComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UGroomComponent.CollisionComponents"); }
	FHairSimulationSettings& SimulationSettingsField() { return *GetNativePointerField<FHairSimulationSettings*>(this, "UGroomComponent.SimulationSettings"); }
	FString& AttachmentNameField() { return *GetNativePointerField<FString*>(this, "UGroomComponent.AttachmentName"); }
	bool& bResetSimulationField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bResetSimulation"); }
	bool& bInitSimulationField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bInitSimulation"); }
	bool& bWasHiddenLastTickField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bWasHiddenLastTick"); }
	bool& bUseCardsField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bUseCards"); }
	bool& bRunningField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bRunning"); }
	bool& bLoopingField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bLooping"); }
	bool& bManualTickField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bManualTick"); }
	float& ElapsedTimeField() { return *GetNativePointerField<float*>(this, "UGroomComponent.ElapsedTime"); }
	void*& InitializedResourcesField() { return *GetNativePointerField<void**>(this, "UGroomComponent.InitializedResources"); }
	bool& bIsGroomAssetCallbackRegisteredField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bIsGroomAssetCallbackRegistered"); }
	bool& bIsGroomBindingAssetCallbackRegisteredField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bIsGroomBindingAssetCallbackRegistered"); }
	bool& bValidationEnableField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bValidationEnable"); }
	bool& bPreviewModeField() { return *GetNativePointerField<bool*>(this, "UGroomComponent.bPreviewMode"); }
	EHairLODSelectionType& LODSelectionTypeField() { return *GetNativePointerField<EHairLODSelectionType*>(this, "UGroomComponent.LODSelectionType"); }
	float& LODPredictedIndexField() { return *GetNativePointerField<float*>(this, "UGroomComponent.LODPredictedIndex"); }
	float& LODForcedIndexField() { return *GetNativePointerField<float*>(this, "UGroomComponent.LODForcedIndex"); }
	EHairGeometryType GetMaterialGeometryType(int ElementIndex) { return NativeCall<EHairGeometryType, int>(this, "UGroomComponent.GetMaterialGeometryType(int)", ElementIndex); }
	void ReleaseResources() { NativeCall<void>(this, "UGroomComponent.ReleaseResources()"); }
	void ReleaseHairSimulation(int GroupIndex) { NativeCall<void, int>(this, "UGroomComponent.ReleaseHairSimulation(int)", GroupIndex); }
	void ResetAnimationTime() { NativeCall<void>(this, "UGroomComponent.ResetAnimationTime()"); }
	void SetGroomAsset(UGroomAsset* Asset) { NativeCall<void, UGroomAsset*>(this, "UGroomComponent.SetGroomAsset(UGroomAsset*)", Asset); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UGroomComponent._getUObject()"); }
	void SetGroomAsset(UGroomAsset* Asset, UGroomBindingAsset* InBinding, bool bUpdateSimulation) { NativeCall<void, UGroomAsset*, UGroomBindingAsset*, bool>(this, "UGroomComponent.SetGroomAsset(UGroomAsset*,UGroomBindingAsset*,bool)", Asset, InBinding, bUpdateSimulation); }
	void SendRenderDynamicData_Concurrent() { NativeCall<void>(this, "UGroomComponent.SendRenderDynamicData_Concurrent()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UGroomComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	int GetMaterialIndex(FName MaterialSlotName) { return NativeCall<int, FName>(this, "UGroomComponent.GetMaterialIndex(FName)", MaterialSlotName); }
	bool IsCompiling() { return NativeCall<bool>(this, "UGroomComponent.IsCompiling()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetMaterialSlotNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UGroomComponent.GetMaterialSlotNames()", result); }
	void SetGroomCache(UGroomCache* InGroomCache) { NativeCall<void, UGroomCache*>(this, "UGroomComponent.SetGroomCache(UGroomCache*)", InGroomCache); }
	void UpdateHairSimulation() { NativeCall<void>(this, "UGroomComponent.UpdateHairSimulation()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UGroomComponent.DestroyRenderState_Concurrent()"); }
	int GetNumSyncLODs() { return NativeCall<int>(this, "UGroomComponent.GetNumSyncLODs()"); }
	int GetForceStreamedLOD() { return NativeCall<int>(this, "UGroomComponent.GetForceStreamedLOD()"); }
	void SetManualTick(bool bInManualTick) { NativeCall<void, bool>(this, "UGroomComponent.SetManualTick(bool)", bInManualTick); }
	bool IsSimulationEnable(int GroupIndex, int LODIndex) { return NativeCall<bool, int, int>(this, "UGroomComponent.IsSimulationEnable(int,int)", GroupIndex, LODIndex); }
	void SwitchSimulationLOD(int PreviousLOD, int CurrentLOD, EHairLODSelectionType InLODSelectionType) { NativeCall<void, int, int, EHairLODSelectionType>(this, "UGroomComponent.SwitchSimulationLOD(int,int,EHairLODSelectionType)", PreviousLOD, CurrentLOD, InLODSelectionType); }
	void SetForceRenderedLOD(int InLODIndex) { NativeCall<void, int>(this, "UGroomComponent.SetForceRenderedLOD(int)", InLODIndex); }
	void CreateHairSimulation(int GroupIndex, int LODIndex) { NativeCall<void, int, int>(this, "UGroomComponent.CreateHairSimulation(int,int)", GroupIndex, LODIndex); }
	void UpdateHairGroupsDesc() { NativeCall<void>(this, "UGroomComponent.UpdateHairGroupsDesc()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UGroomComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	float GetGroomCacheDuration() { return NativeCall<float>(this, "UGroomComponent.GetGroomCacheDuration()"); }
	void DetachFromComponent(const FDetachmentTransformRules& In) { NativeCall<void, const FDetachmentTransformRules&>(this, "UGroomComponent.DetachFromComponent(FDetachmentTransformRules&)", In); }
	UMaterialInterface* GetMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "UGroomComponent.GetMaterial(int)", ElementIndex); }
	bool RequiresGameThreadEndOfFrameRecreate() { return NativeCall<bool>(this, "UGroomComponent.RequiresGameThreadEndOfFrameRecreate()"); }
	void OnUnregister() { NativeCall<void>(this, "UGroomComponent.OnUnregister()"); }
	void SetBindingAsset(UGroomBindingAsset* InBinding) { NativeCall<void, UGroomBindingAsset*>(this, "UGroomComponent.SetBindingAsset(UGroomBindingAsset*)", InBinding); }
	int GetBestAvailableLOD() { return NativeCall<int>(this, "UGroomComponent.GetBestAvailableLOD()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UGroomComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	int GetDesiredSyncLOD() { return NativeCall<int>(this, "UGroomComponent.GetDesiredSyncLOD()"); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UGroomComponent.OnAttachmentChanged()"); }
	UMaterialInterface* GetMaterial(int ElementIndex, EHairGeometryType GeometryType, bool bUseDefaultIfIncompatible) { return NativeCall<UMaterialInterface*, int, EHairGeometryType, bool>(this, "UGroomComponent.GetMaterial(int,EHairGeometryType,bool)", ElementIndex, GeometryType, bUseDefaultIfIncompatible); }
	bool IsMaterialSlotNameValid(FName MaterialSlotName) { return NativeCall<bool, FName>(this, "UGroomComponent.IsMaterialSlotNameValid(FName)", MaterialSlotName); }
	void PostCompilation() { NativeCall<void>(this, "UGroomComponent.PostCompilation()"); }
	bool GetManualTick() { return NativeCall<bool>(this, "UGroomComponent.GetManualTick()"); }
	int GetForceRenderedLOD() { return NativeCall<int>(this, "UGroomComponent.GetForceRenderedLOD()"); }
	const FHairGroupInstance* GetGroupInstance(int Index) { return NativeCall<const FHairGroupInstance*, int>(this, "UGroomComponent.GetGroupInstance(int)", Index); }
	void FinishDestroy() { NativeCall<void>(this, "UGroomComponent.FinishDestroy()"); }
	UMeshComponent* GetGroomSolver() { return NativeCall<UMeshComponent*>(this, "UGroomComponent.GetGroomSolver()"); }
	void OnRegister() { NativeCall<void>(this, "UGroomComponent.OnRegister()"); }
	void UpdateGroomCache(float Time) { NativeCall<void, float>(this, "UGroomComponent.UpdateGroomCache(float)", Time); }
	FHairStrandsRestResource* GetGuideStrandsRestResource(unsigned int GroupIndex) { return NativeCall<FHairStrandsRestResource*, unsigned int>(this, "UGroomComponent.GetGuideStrandsRestResource(unsignedint)", GroupIndex); }
	int GetNumMaterials() { return NativeCall<int>(this, "UGroomComponent.GetNumMaterials()"); }
	int GetForcedLOD() { return NativeCall<int>(this, "UGroomComponent.GetForcedLOD()"); }
	void InitIfDependenciesReady(bool bUpdateSimulation) { NativeCall<void, bool>(this, "UGroomComponent.InitIfDependenciesReady(bool)", bUpdateSimulation); }
	bool IsDeformationEnable(int GroupIndex) { return NativeCall<bool, int>(this, "UGroomComponent.IsDeformationEnable(int)", GroupIndex); }
	void BeginDestroy() { NativeCall<void>(this, "UGroomComponent.BeginDestroy()"); }
	void InitResources(bool bIsBindingReloading) { NativeCall<void, bool>(this, "UGroomComponent.InitResources(bool)", bIsBindingReloading); }
	void SetForceStreamedLOD(int LODIndex) { NativeCall<void, int>(this, "UGroomComponent.SetForceStreamedLOD(int)", LODIndex); }
	void SetForcedLOD(int CurrLODIndex) { NativeCall<void, int>(this, "UGroomComponent.SetForcedLOD(int)", CurrLODIndex); }
	void PostLoad() { NativeCall<void>(this, "UGroomComponent.PostLoad()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGroomComponent.CreateSceneProxy()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGroomComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UGroomComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping) { NativeCall<void, float, bool, bool, bool>(this, "UGroomComponent.TickAtThisTime(float,bool,bool,bool)", Time, bInIsRunning, bInBackwards, bInIsLooping); }
	void UpdateSimulatedGroups() { NativeCall<void>(this, "UGroomComponent.UpdateSimulatedGroups()"); }
};
