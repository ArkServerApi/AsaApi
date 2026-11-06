#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AUsdStageActor : public AActor
{
public:
	AUsdStageActor() = delete;
	~AUsdStageActor() = delete;
	AUsdStageActor(const AUsdStageActor&) = delete;
	AUsdStageActor& operator=(const AUsdStageActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AUsdStageActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AUsdStageActor"); }

	FFilePath& RootLayerField() { return *GetNativePointerField<FFilePath*>(this, "AUsdStageActor.RootLayer"); }
	EUsdInitialLoadSet& InitialLoadSetField() { return *GetNativePointerField<EUsdInitialLoadSet*>(this, "AUsdStageActor.InitialLoadSet"); }
	EUsdInterpolationType& InterpolationTypeField() { return *GetNativePointerField<EUsdInterpolationType*>(this, "AUsdStageActor.InterpolationType"); }
	bool& bUsePrimKindsForCollapsingField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bUsePrimKindsForCollapsing"); }
	int& KindsToCollapseField() { return *GetNativePointerField<int*>(this, "AUsdStageActor.KindsToCollapse"); }
	bool& bMergeIdenticalMaterialSlotsField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bMergeIdenticalMaterialSlots"); }
	bool& bShareAssetsForIdenticalPrimsField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bShareAssetsForIdenticalPrims"); }
	bool& bReuseIdenticalAssets_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bReuseIdenticalAssets_DEPRECATED"); }
	bool& bCollapseTopLevelPointInstancers_DEPRECATEDField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bCollapseTopLevelPointInstancers_DEPRECATED"); }
	int& PurposesToLoadField() { return *GetNativePointerField<int*>(this, "AUsdStageActor.PurposesToLoad"); }
	int& NaniteTriangleThresholdField() { return *GetNativePointerField<int*>(this, "AUsdStageActor.NaniteTriangleThreshold"); }
	FName& RenderContextField() { return *GetNativePointerField<FName*>(this, "AUsdStageActor.RenderContext"); }
	FName& MaterialPurposeField() { return *GetNativePointerField<FName*>(this, "AUsdStageActor.MaterialPurpose"); }
	int& SubdivisionLevelField() { return *GetNativePointerField<int*>(this, "AUsdStageActor.SubdivisionLevel"); }
	FUsdMetadataImportOptions& MetadataOptionsField() { return *GetNativePointerField<FUsdMetadataImportOptions*>(this, "AUsdStageActor.MetadataOptions"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "AUsdStageActor.Time"); }
	bool& bLayerReloadedField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bLayerReloaded"); }
	FUsdListener& UsdListenerField() { return *GetNativePointerField<FUsdListener*>(this, "AUsdStageActor.UsdListener"); }
	FUsdLevelSequenceHelper& LevelSequenceHelperField() { return *GetNativePointerField<FUsdLevelSequenceHelper*>(this, "AUsdStageActor.LevelSequenceHelper"); }
	bool& bIsTransitioningIntoPIEField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bIsTransitioningIntoPIE"); }
	bool& bIsModifyingAPropertyField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bIsModifyingAProperty"); }
	bool& bIsUndoRedoingField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bIsUndoRedoing"); }
	bool& bIsAddingBindingField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bIsAddingBinding"); }
	bool& bIsPendingTransactorResetField() { return *GetNativePointerField<bool*>(this, "AUsdStageActor.bIsPendingTransactorReset"); }
	FDelegateHandle& OnRedoHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AUsdStageActor.OnRedoHandle"); }
	FDelegateHandle& OnSequencerCreatedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "AUsdStageActor.OnSequencerCreatedHandle"); }
	FThreadSafeCounter& IsBlockedFromUsdNoticesField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "AUsdStageActor.IsBlockedFromUsdNotices"); }
	FFilePath& OldRootLayerField() { return *GetNativePointerField<FFilePath*>(this, "AUsdStageActor.OldRootLayer"); }
	void LoadUsdStage(bool bOpenIfNeeded) { NativeCall<void, bool>(this, "AUsdStageActor.LoadUsdStage(bool)", bOpenIfNeeded); }
	void OpenUsdStage() { NativeCall<void>(this, "AUsdStageActor.OpenUsdStage()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AUsdStageActor.PostUnregisterAllComponents()"); }
	void Destroyed() { NativeCall<void>(this, "AUsdStageActor.Destroyed()"); }
	void PostActorCreated() { NativeCall<void>(this, "AUsdStageActor.PostActorCreated()"); }
	void UnregisterAllComponents(bool bForReregister) { NativeCall<void, bool>(this, "AUsdStageActor.UnregisterAllComponents(bool)", bForReregister); }
	void SetupAssetCacheIfNeeded() { NativeCall<void>(this, "AUsdStageActor.SetupAssetCacheIfNeeded()"); }
	void SetTime(float InTime) { NativeCall<void, float>(this, "AUsdStageActor.SetTime(float)", InTime); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "AUsdStageActor.PostDuplicate(bool)", bDuplicateForPIE); }
	void BeginDestroy() { NativeCall<void>(this, "AUsdStageActor.BeginDestroy()"); }
	void Reset() { NativeCall<void>(this, "AUsdStageActor.Reset()"); }
	void CloseUsdStage(bool bUnloadIfNeeded) { NativeCall<void, bool>(this, "AUsdStageActor.CloseUsdStage(bool)", bUnloadIfNeeded); }
	void SetRootLayer(const FString& RootFilePath) { NativeCall<void, const FString&>(this, "AUsdStageActor.SetRootLayer(FString&)", RootFilePath); }
	FString* GetIsolatedRootLayer(FString* result) { return NativeCall<FString*, FString*>(this, "AUsdStageActor.GetIsolatedRootLayer()", result); }
	void AnimatePrims() { NativeCall<void>(this, "AUsdStageActor.AnimatePrims()"); }
	USceneComponent* GetGeneratedComponent(const FString& PrimPath) { return NativeCall<USceneComponent*, const FString&>(this, "AUsdStageActor.GetGeneratedComponent(FString&)", PrimPath); }
	void PostInitProperties() { NativeCall<void>(this, "AUsdStageActor.PostInitProperties()"); }
	TArray<UObject*, TSizedDefaultAllocator<32> >* GetGeneratedAssets(TArray<UObject*, TSizedDefaultAllocator<32> >* result, const FString& PrimPath) { return NativeCall<TArray<UObject*, TSizedDefaultAllocator<32> >*, TArray<UObject*, TSizedDefaultAllocator<32> >*, const FString&>(this, "AUsdStageActor.GetGeneratedAssets(FString&)", result, PrimPath); }
	void UnloadUsdStage() { NativeCall<void>(this, "AUsdStageActor.UnloadUsdStage()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "AUsdStageActor.Serialize(FArchive&)", Ar); }
	void PostRename(UObject* OldOuter, FName OldName) { NativeCall<void, UObject*, FName>(this, "AUsdStageActor.PostRename(UObject*,FName)", OldOuter, OldName); }
	FString* GetSourcePrimPath(FString* result, const UObject* Object) { return NativeCall<FString*, FString*, const UObject*>(this, "AUsdStageActor.GetSourcePrimPath(UObject*)", result, Object); }
	bool RegenerateLevelSequence() { return NativeCall<bool>(this, "AUsdStageActor.RegenerateLevelSequence()"); }
	void SetBlockedPrefixFilters(const TArray<FString, TSizedDefaultAllocator<32> >& NewFilters) { NativeCall<void, const TArray<FString, TSizedDefaultAllocator<32> >&>(this, "AUsdStageActor.SetBlockedPrefixFilters(TArray<FString,TSizedDefaultAllocator<32>>&)", NewFilters); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AUsdStageActor.PostRegisterAllComponents()"); }
};
