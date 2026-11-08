#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	UHoudiniAssetComponent() = delete;
	~UHoudiniAssetComponent() = delete;
	UHoudiniAssetComponent(const UHoudiniAssetComponent&) = delete;
	UHoudiniAssetComponent& operator=(const UHoudiniAssetComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UHoudiniAssetComponent"); }

	bool& bCookOnParameterChange_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bCookOnParameterChange_DEPRECATED"); }
	bool& bUploadTransformsToHoudiniEngine_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bUploadTransformsToHoudiniEngine_DEPRECATED"); }
	bool& bCookOnTransformChange_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bCookOnTransformChange_DEPRECATED"); }
	bool& bCookOnAssetInputCook_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bCookOnAssetInputCook_DEPRECATED"); }
	bool& bOutputless_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bOutputless_DEPRECATED"); }
	bool& bOutputTemplateGeos_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bOutputTemplateGeos_DEPRECATED"); }
	bool& bUseOutputNodes_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bUseOutputNodes_DEPRECATED"); }
	FDirectoryPath& TemporaryCookFolder_DEPRECATEDField() { return *GetNativePointerField<FDirectoryPath*>(this, "UHoudiniAssetComponent.TemporaryCookFolder_DEPRECATED"); }
	FDirectoryPath& BakeFolder_DEPRECATEDField() { return *GetNativePointerField<FDirectoryPath*>(this, "UHoudiniAssetComponent.BakeFolder_DEPRECATED"); }
	bool& bSplitMeshSupport_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bSplitMeshSupport_DEPRECATED"); }
	FHoudiniStaticMeshGenerationProperties& StaticMeshGenerationProperties_DEPRECATEDField() { return *GetNativePointerField<FHoudiniStaticMeshGenerationProperties*>(this, "UHoudiniAssetComponent.StaticMeshGenerationProperties_DEPRECATED"); }
	FMeshBuildSettings& StaticMeshBuildSettings_DEPRECATEDField() { return *GetNativePointerField<FMeshBuildSettings*>(this, "UHoudiniAssetComponent.StaticMeshBuildSettings_DEPRECATED"); }
	bool& bOverrideGlobalProxyStaticMeshSettings_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bOverrideGlobalProxyStaticMeshSettings_DEPRECATED"); }
	bool& bEnableProxyStaticMeshOverride_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bEnableProxyStaticMeshOverride_DEPRECATED"); }
	bool& bEnableProxyStaticMeshRefinementByTimerOverride_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bEnableProxyStaticMeshRefinementByTimerOverride_DEPRECATED"); }
	float& ProxyMeshAutoRefineTimeoutSecondsOverride_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UHoudiniAssetComponent.ProxyMeshAutoRefineTimeoutSecondsOverride_DEPRECATED"); }
	bool& bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride_DEPRECATED"); }
	bool& bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride_DEPRECATED"); }
	int& AssetId_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "UHoudiniAssetComponent.AssetId_DEPRECATED"); }
	TArray<int, TSizedDefaultAllocator<32> >& NodeIdsToCook_DEPRECATEDField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UHoudiniAssetComponent.NodeIdsToCook_DEPRECATED"); }
	FGuid& ComponentGUID_DEPRECATEDField() { return *GetNativePointerField<FGuid*>(this, "UHoudiniAssetComponent.ComponentGUID_DEPRECATED"); }
	FGuid& HapiGUID_DEPRECATEDField() { return *GetNativePointerField<FGuid*>(this, "UHoudiniAssetComponent.HapiGUID_DEPRECATED"); }
	FString& HapiAssetName_DEPRECATEDField() { return *GetNativePointerField<FString*>(this, "UHoudiniAssetComponent.HapiAssetName_DEPRECATED"); }
	EHoudiniAssetState& AssetState_DEPRECATEDField() { return *GetNativePointerField<EHoudiniAssetState*>(this, "UHoudiniAssetComponent.AssetState_DEPRECATED"); }
	unsigned int& SubAssetIndex_DEPRECATEDField() { return *GetNativePointerField<unsigned int*>(this, "UHoudiniAssetComponent.SubAssetIndex_DEPRECATED"); }
	int& AssetCookCount_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "UHoudiniAssetComponent.AssetCookCount_DEPRECATED"); }
	bool& bHasBeenLoaded_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bHasBeenLoaded_DEPRECATED"); }
	bool& bHasBeenDuplicated_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bHasBeenDuplicated_DEPRECATED"); }
	bool& bPendingDelete_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bPendingDelete_DEPRECATED"); }
	bool& bRecookRequested_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bRecookRequested_DEPRECATED"); }
	bool& bRebuildRequested_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bRebuildRequested_DEPRECATED"); }
	bool& bEnableCooking_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bEnableCooking_DEPRECATED"); }
	bool& bForceNeedUpdate_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bForceNeedUpdate_DEPRECATED"); }
	bool& bLastCookSuccess_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bLastCookSuccess_DEPRECATED"); }
	bool& bParameterDefinitionUpdateNeeded_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bParameterDefinitionUpdateNeeded_DEPRECATED"); }
	bool& bBlueprintStructureModifiedField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bBlueprintStructureModified"); }
	bool& bBlueprintModifiedField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bBlueprintModified"); }
	TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& UntrackedOutputs_DEPRECATEDField() { return *GetNativePointerField<TArray<TWeakObjectPtr<AActor, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UHoudiniAssetComponent.UntrackedOutputs_DEPRECATED"); }
	bool& bHasComponentTransformChanged_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bHasComponentTransformChanged_DEPRECATED"); }
	bool& bFullyLoaded_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bFullyLoaded_DEPRECATED"); }
	bool& bIsPDGAssetLinkInitialized_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bIsPDGAssetLinkInitialized_DEPRECATED"); }
	FTimerHandle& RefineMeshesTimer_DEPRECATEDField() { return *GetNativePointerField<FTimerHandle*>(this, "UHoudiniAssetComponent.RefineMeshesTimer_DEPRECATED"); }
	bool& bNoProxyMeshNextCookRequested_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bNoProxyMeshNextCookRequested_DEPRECATED"); }
	bool& bCachedIsPreviewField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bCachedIsPreview"); }
	double& LastTickTime_DEPRECATEDField() { return *GetNativePointerField<double*>(this, "UHoudiniAssetComponent.LastTickTime_DEPRECATED"); }
	double& LastLiveSyncPingTime_DEPRECATEDField() { return *GetNativePointerField<double*>(this, "UHoudiniAssetComponent.LastLiveSyncPingTime_DEPRECATED"); }
	TArray<signed char, TSizedDefaultAllocator<32> >& ParameterPresetBuffer_DEPRECATEDField() { return *GetNativePointerField<TArray<signed char, TSizedDefaultAllocator<32> >*>(this, "UHoudiniAssetComponent.ParameterPresetBuffer_DEPRECATED"); }
	bool& bMigrateDataToCookableOnPostLoadField() { return *GetNativePointerField<bool*>(this, "UHoudiniAssetComponent.bMigrateDataToCookableOnPostLoad"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UHoudiniAssetComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SetHoudiniAsset(UHoudiniAsset* InHoudiniAsset) { NativeCall<void, UHoudiniAsset*>(this, "UHoudiniAssetComponent.SetHoudiniAsset(UHoudiniAsset*)", InHoudiniAsset); }
	void SetEnableProxyStaticMeshOverride(bool InEnable) { NativeCall<void, bool>(this, "UHoudiniAssetComponent.SetEnableProxyStaticMeshOverride(bool)", InEnable); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UHoudiniAssetComponent"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UHoudiniAssetComponent.CreateSceneProxy()"); }
	void NotifyHoudiniPostUnregister() { NativeCall<void>(this, "UHoudiniAssetComponent.NotifyHoudiniPostUnregister()"); }
	UWorld* GetHACWorld() { return NativeCall<UWorld*>(this, "UHoudiniAssetComponent.GetHACWorld()"); }
	void SetOverrideGlobalProxyStaticMeshSettings(bool InEnable) { NativeCall<void, bool>(this, "UHoudiniAssetComponent.SetOverrideGlobalProxyStaticMeshSettings(bool)", InEnable); }
	void OnTemplateParametersChanged() { NativeCall<void>(this, "UHoudiniAssetComponent.OnTemplateParametersChanged()"); }
	void HandleOnHoudiniAssetStateChange(UObject* InHoudiniAssetContext, EHoudiniAssetState InFromState, EHoudiniAssetState InToState) { NativeCall<void, UObject*, EHoudiniAssetState, EHoudiniAssetState>(this, "UHoudiniAssetComponent.HandleOnHoudiniAssetStateChange(UObject*,EHoudiniAssetState,EHoudiniAssetState)", InHoudiniAssetContext, InFromState, InToState); }
	void HoudiniEngineTick() { NativeCall<void>(this, "UHoudiniAssetComponent.HoudiniEngineTick()"); }
	FString* GetHoudiniAssetName(FString* result) { return NativeCall<FString*, FString*>(this, "UHoudiniAssetComponent.GetHoudiniAssetName()", result); }
	void MarkAsNeedInstantiation() { NativeCall<void>(this, "UHoudiniAssetComponent.MarkAsNeedInstantiation()"); }
	void SetEnableProxyStaticMeshRefinementOnPreSaveWorldOverride(bool InEnable) { NativeCall<void, bool>(this, "UHoudiniAssetComponent.SetEnableProxyStaticMeshRefinementOnPreSaveWorldOverride(bool)", InEnable); }
	UHoudiniAssetComponent* GetCachedTemplate() { return NativeCall<UHoudiniAssetComponent*>(this, "UHoudiniAssetComponent.GetCachedTemplate()"); }
	bool TransferDataToCookable(UHoudiniCookable* HC) { return NativeCall<bool, UHoudiniCookable*>(this, "UHoudiniAssetComponent.TransferDataToCookable(UHoudiniCookable*)", HC); }
	void OnPreOutputProcessing() { NativeCall<void>(this, "UHoudiniAssetComponent.OnPreOutputProcessing()"); }
	void OnPrePreInstantiation() { NativeCall<void>(this, "UHoudiniAssetComponent.OnPrePreInstantiation()"); }
	void OnBlueprintStructureModified() { NativeCall<void>(this, "UHoudiniAssetComponent.OnBlueprintStructureModified()"); }
	void RegisterHoudiniComponent(UHoudiniAssetComponent* InComponent) { NativeCall<void, UHoudiniAssetComponent*>(this, "UHoudiniAssetComponent.RegisterHoudiniComponent(UHoudiniAssetComponent*)", InComponent); }
	void OnBlueprintModified() { NativeCall<void>(this, "UHoudiniAssetComponent.OnBlueprintModified()"); }
	void SetAssetState(EHoudiniAssetState InNewState) { NativeCall<void, EHoudiniAssetState>(this, "UHoudiniAssetComponent.SetAssetState(EHoudiniAssetState)", InNewState); }
	bool IsComponentValid() { return NativeCall<bool>(this, "UHoudiniAssetComponent.IsComponentValid()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UHoudiniAssetComponent._getUObject()"); }
	void PostEditImport() { NativeCall<void>(this, "UHoudiniAssetComponent.PostEditImport()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UHoudiniAssetComponent.Serialize(FArchive&)", Ar); }
	void SetHasBeenLoaded(const bool& InLoaded) { NativeCall<void, const bool&>(this, "UHoudiniAssetComponent.SetHasBeenLoaded(bool&)", InLoaded); }
	void BeginDestroy() { NativeCall<void>(this, "UHoudiniAssetComponent.BeginDestroy()"); }
	void OnChildAttached(USceneComponent* ChildComponent) { NativeCall<void, USceneComponent*>(this, "UHoudiniAssetComponent.OnChildAttached(USceneComponent*)", ChildComponent); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UHoudiniAssetComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	bool IsInputTypeSupported(EHoudiniInputType InType) { return NativeCall<bool, EHoudiniInputType>(this, "UHoudiniAssetComponent.IsInputTypeSupported(EHoudiniInputType)", InType); }
	bool IsValidComponent() { return NativeCall<bool>(this, "UHoudiniAssetComponent.IsValidComponent()"); }
	void PostInitProperties() { NativeCall<void>(this, "UHoudiniAssetComponent.PostInitProperties()"); }
	void NotifyHoudiniPreUnregister() { NativeCall<void>(this, "UHoudiniAssetComponent.NotifyHoudiniPreUnregister()"); }
	void OnRegister() { NativeCall<void>(this, "UHoudiniAssetComponent.OnRegister()"); }
	void OnComponentCreated() { NativeCall<void>(this, "UHoudiniAssetComponent.OnComponentCreated()"); }
	bool CanDeleteHoudiniNodes() { return NativeCall<bool>(this, "UHoudiniAssetComponent.CanDeleteHoudiniNodes()"); }
	bool IsProxyStaticMeshEnabled() { return NativeCall<bool>(this, "UHoudiniAssetComponent.IsProxyStaticMeshEnabled()"); }
	void OnFullyLoaded() { NativeCall<void>(this, "UHoudiniAssetComponent.OnFullyLoaded()"); }
	void OnPrePreCook() { NativeCall<void>(this, "UHoudiniAssetComponent.OnPrePreCook()"); }
	void OnRefineMeshesTimerFired() { NativeCall<void>(this, "UHoudiniAssetComponent.OnRefineMeshesTimerFired()"); }
	void OnHoudiniAssetChanged() { NativeCall<void>(this, "UHoudiniAssetComponent.OnHoudiniAssetChanged()"); }
	void SetEnableProxyStaticMeshRefinementOnPreBeginPIEOverride(bool InEnable) { NativeCall<void, bool>(this, "UHoudiniAssetComponent.SetEnableProxyStaticMeshRefinementOnPreBeginPIEOverride(bool)", InEnable); }
	bool IsOutputTypeSupported(EHoudiniOutputType InType) { return NativeCall<bool, EHoudiniOutputType>(this, "UHoudiniAssetComponent.IsOutputTypeSupported(EHoudiniOutputType)", InType); }
	void SetEnableProxyStaticMeshRefinementByTimerOverride(bool InEnable) { NativeCall<void, bool>(this, "UHoudiniAssetComponent.SetEnableProxyStaticMeshRefinementByTimerOverride(bool)", InEnable); }
	UHoudiniCookable* GetCookable() { return NativeCall<UHoudiniCookable*>(this, "UHoudiniAssetComponent.GetCookable()"); }
	bool HasOpenEditor() { return NativeCall<bool>(this, "UHoudiniAssetComponent.HasOpenEditor()"); }
	void PostLoad() { NativeCall<void>(this, "UHoudiniAssetComponent.PostLoad()"); }
	void OnPostPreCook() { NativeCall<void>(this, "UHoudiniAssetComponent.OnPostPreCook()"); }
	void NotifyHoudiniRegisterCompleted() { NativeCall<void>(this, "UHoudiniAssetComponent.NotifyHoudiniRegisterCompleted()"); }
	void OnPostOutputProcessing() { NativeCall<void>(this, "UHoudiniAssetComponent.OnPostOutputProcessing()"); }
};
