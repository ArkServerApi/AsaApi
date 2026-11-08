#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "APrimalStructure.h"

struct APrimalStructureTemplate : APrimalStructure
{
public:
	APrimalStructureTemplate() = delete;
	~APrimalStructureTemplate() = delete;
	APrimalStructureTemplate(const APrimalStructureTemplate&) = delete;
	APrimalStructureTemplate& operator=(const APrimalStructureTemplate&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalStructureTemplate"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalStructureTemplate"); }

	float& DecayAfterTimeField() { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.DecayAfterTime"); }
	float& MaxAutoBuildDistanceField() { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.MaxAutoBuildDistance"); }
	int& AutoBuildBatchSizeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.AutoBuildBatchSize"); }
	float& AutoBuildBatchDelayField() { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.AutoBuildBatchDelay"); }
	int& AutoSkinBatchSizeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.AutoSkinBatchSize"); }
	float& AutoSkinBatchDelayField() { return *GetNativePointerField<float*>(this, "APrimalStructureTemplate.AutoSkinBatchDelay"); }
	int& Setting_ModifyTypeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.Setting_ModifyType"); }
	int& Setting_BuildTypeField() { return *GetNativePointerField<int*>(this, "APrimalStructureTemplate.Setting_BuildType"); }
	double& DecayAtTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.DecayAtTime"); }
	double& LastItemUpdateTimeField() { return *GetNativePointerField<double*>(this, "APrimalStructureTemplate.LastItemUpdateTime"); }

	void CreateTemplateMaterials() { NativeCall<void>(this, "APrimalStructureTemplate.CreateTemplateMaterials()"); }
	void ResolveItems() { NativeCall<void>(this, "APrimalStructureTemplate.ResolveItems()"); }
	static APrimalStructureTemplate* GetPlacingTemplate(APlayerController* PC) { return NativeCall<APrimalStructureTemplate*, APlayerController*>(nullptr, "APrimalStructureTemplate.GetPlacingTemplate(APlayerController*)", PC); }
	void DestroyPreviewMeshComps() { NativeCall<void>(this, "APrimalStructureTemplate.DestroyPreviewMeshComps()"); }
	void StartItemResolver() { NativeCall<void>(this, "APrimalStructureTemplate.StartItemResolver()"); }
	bool RemoveFromInterimTemplate(APrimalStructure* TargetStructure, bool IncludeFurniture, bool IsExtent) { return NativeCall<bool, APrimalStructure*, bool, bool>(this, "APrimalStructureTemplate.RemoveFromInterimTemplate(APrimalStructure*,bool,bool)", TargetStructure, IncludeFurniture, IsExtent); }
	bool TryMultiUse(APlayerController* ForPC, int UseIndex, int hitBodyIndex) { return NativeCall<bool, APlayerController*, int, int>(this, "APrimalStructureTemplate.TryMultiUse(APlayerController*,int,int)", ForPC, UseIndex, hitBodyIndex); }
	void UpdateInterimTemplatePreview() { NativeCall<void>(this, "APrimalStructureTemplate.UpdateInterimTemplatePreview()"); }
	void OnRep_BinaryData() { NativeCall<void>(this, "APrimalStructureTemplate.OnRep_BinaryData()"); }
	static bool HasPlacedTemplate(APlayerController* PC) { return NativeCall<bool, APlayerController*>(nullptr, "APrimalStructureTemplate.HasPlacedTemplate(APlayerController*)", PC); }
	void SetTemplatePreviewVisibility(bool IsVisible) { NativeCall<void, bool>(this, "APrimalStructureTemplate.SetTemplatePreviewVisibility(bool)", IsVisible); }
	void MultiCastTemplateEntryDisabled_Implementation(int EntryIndex, bool IsDisable) { NativeCall<void, int, bool>(this, "APrimalStructureTemplate.MultiCastTemplateEntryDisabled_Implementation(int,bool)", EntryIndex, IsDisable); }
	bool CanToggleTemplateEntry(int EntryIndex, bool IsDisable) { return NativeCall<bool, int, bool>(this, "APrimalStructureTemplate.CanToggleTemplateEntry(int,bool)", EntryIndex, IsDisable); }
	UPrimalItem* CreateSavedTemplateItem(APlayerController* PC) { return NativeCall<UPrimalItem*, APlayerController*>(this, "APrimalStructureTemplate.CreateSavedTemplateItem(APlayerController*)", PC); }
	bool CanStartAutoBuilding(APlayerController* PC) { return NativeCall<bool, APlayerController*>(this, "APrimalStructureTemplate.CanStartAutoBuilding(APlayerController*)", PC); }
	void SetStructureCollisionChannels(bool bUpdateOverlaps) { NativeCall<void, bool>(this, "APrimalStructureTemplate.SetStructureCollisionChannels(bool)", bUpdateOverlaps); }
	void StopItemResolver() { NativeCall<void>(this, "APrimalStructureTemplate.StopItemResolver()"); }
	bool OverrideAttachToStaticMeshSocket_Implementation() { return NativeCall<bool>(this, "APrimalStructureTemplate.OverrideAttachToStaticMeshSocket_Implementation()"); }
	bool ToggleTemplateSnapOverride(APrimalStructure* TargetStructure, bool WasAdded) { return NativeCall<bool, APrimalStructure*, bool>(this, "APrimalStructureTemplate.ToggleTemplateSnapOverride(APrimalStructure*,bool)", TargetStructure, WasAdded); }
	bool OverrideSnapToWaterSurface_Implementation() { return NativeCall<bool>(this, "APrimalStructureTemplate.OverrideSnapToWaterSurface_Implementation()"); }
	void TryAutoSkinning() { NativeCall<void>(this, "APrimalStructureTemplate.TryAutoSkinning()"); }
	void PrepareTemplatePreviewSnaps() { NativeCall<void>(this, "APrimalStructureTemplate.PrepareTemplatePreviewSnaps()"); }
	bool AlignTemplateToSaddle() { return NativeCall<bool>(this, "APrimalStructureTemplate.AlignTemplateToSaddle()"); }
	void LoadPreviewAssets() { NativeCall<void>(this, "APrimalStructureTemplate.LoadPreviewAssets()"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalStructureTemplate.BeginPlay()"); }
	void UpdateItemQuantities(APlayerController* PC, bool ForceUpdate) { NativeCall<void, APlayerController*, bool>(this, "APrimalStructureTemplate.UpdateItemQuantities(APlayerController*,bool)", PC, ForceUpdate); }
	void PlacedStructure(AShooterPlayerController* PC) { NativeCall<void, AShooterPlayerController*>(this, "APrimalStructureTemplate.PlacedStructure(AShooterPlayerController*)", PC); }
	void TryCreatingPreview() { NativeCall<void>(this, "APrimalStructureTemplate.TryCreatingPreview()"); }
	bool AddToInterimTemplate(APrimalStructure* TargetStructure, bool IncludeFurniture, bool IsExtent) { return NativeCall<bool, APrimalStructure*, bool, bool>(this, "APrimalStructureTemplate.AddToInterimTemplate(APrimalStructure*,bool,bool)", TargetStructure, IncludeFurniture, IsExtent); }
	bool OverrideOnlyAllowPlacementInWater_Implementation() { return NativeCall<bool>(this, "APrimalStructureTemplate.OverrideOnlyAllowPlacementInWater_Implementation()"); }
	int GetTemplateFloorType() { return NativeCall<int>(this, "APrimalStructureTemplate.GetTemplateFloorType()"); }
	void StartCreatingPreview() { NativeCall<void>(this, "APrimalStructureTemplate.StartCreatingPreview()"); }
	bool CanToggleTemplateSnapOverride(APrimalStructure* TargetStructure, bool IsAdd) { return NativeCall<bool, APrimalStructure*, bool>(this, "APrimalStructureTemplate.CanToggleTemplateSnapOverride(APrimalStructure*,bool)", TargetStructure, IsAdd); }
	static bool CanTemplateStructure(APrimalStructure* TargetStructure, int ForTeam) { return NativeCall<bool, APrimalStructure*, int>(nullptr, "APrimalStructureTemplate.CanTemplateStructure(APrimalStructure*,int)", TargetStructure, ForTeam); }

	BitFieldValue<bool, unsigned char> bSetting_ModifyAdd() { return { this, "APrimalStructureTemplate.bSetting_ModifyAdd"}; }
	BitFieldValue<bool, unsigned char> bSetting_SelectAll() { return { this, "APrimalStructureTemplate.bSetting_SelectAll"}; }
	BitFieldValue<bool, unsigned char> bSetting_IncludeFurniture() { return { this, "APrimalStructureTemplate.bSetting_IncludeFurniture"}; }
	BitFieldValue<bool, unsigned char> bSetting_AutoBuildAll() { return { this, "APrimalStructureTemplate.bSetting_AutoBuildAll"}; }
	BitFieldValue<bool, unsigned char> bSetting_AutoBuildUsePaint() { return { this, "APrimalStructureTemplate.bSetting_AutoBuildUsePaint"}; }
	BitFieldValue<bool, unsigned char> bSetting_AutoBuildApplyVariant() { return { this, "APrimalStructureTemplate.bSetting_AutoBuildApplyVariant"}; }
	BitFieldValue<bool, unsigned char> bSetting_DisableBuildEntry() { return { this, "APrimalStructureTemplate.bSetting_DisableBuildEntry"}; }
	BitFieldValue<bool, unsigned char> bIsInterimTemplate() { return { this, "APrimalStructureTemplate.bIsInterimTemplate"}; }
	BitFieldValue<bool, unsigned char> bIsLoadingAssets() { return { this, "APrimalStructureTemplate.bIsLoadingAssets"}; }
	BitFieldValue<bool, unsigned char> bAreAssetsLoaded() { return { this, "APrimalStructureTemplate.bAreAssetsLoaded"}; }
	BitFieldValue<bool, unsigned char> bHasUnresolvedItemAssets() { return { this, "APrimalStructureTemplate.bHasUnresolvedItemAssets"}; }
	BitFieldValue<bool, unsigned char> bShouldResolveSkins() { return { this, "APrimalStructureTemplate.bShouldResolveSkins"}; }
	BitFieldValue<bool, unsigned char> bPlacementRequested() { return { this, "APrimalStructureTemplate.bPlacementRequested"}; }
	BitFieldValue<bool, unsigned char> bBuilderBuffRequested() { return { this, "APrimalStructureTemplate.bBuilderBuffRequested"}; }
	BitFieldValue<bool, unsigned char> bIsAutoBuilding() { return { this, "APrimalStructureTemplate.bIsAutoBuilding"}; }
	BitFieldValue<bool, unsigned char> bIsAutoSkinning() { return { this, "APrimalStructureTemplate.bIsAutoSkinning"}; }
	BitFieldValue<bool, unsigned char> bAllowTemplateRotation() { return { this, "APrimalStructureTemplate.bAllowTemplateRotation"}; }
	BitFieldValue<bool, unsigned char> bAllowTemplateRotationWhenSnapped() { return { this, "APrimalStructureTemplate.bAllowTemplateRotationWhenSnapped"}; }
	BitFieldValue<bool, unsigned char> bAllowPlacingTemplateWithoutSnapping() { return { this, "APrimalStructureTemplate.bAllowPlacingTemplateWithoutSnapping"}; }

	UMaterialInstanceDynamic*& TemplateMaterialField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalStructureTemplate.TemplateMaterial"); }
	UMaterialInstanceDynamic*& TemplateMaterialMaskedField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalStructureTemplate.TemplateMaterialMasked"); }
	UMaterialInstanceDynamic*& TemplateMaterialExtentField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalStructureTemplate.TemplateMaterialExtent"); }
	UMaterialInstanceDynamic*& TemplateMaterialExtentMaskedField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalStructureTemplate.TemplateMaterialExtentMasked"); }
	UMaterialInstanceDynamic*& TemplateMaterialSnapOverrideField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalStructureTemplate.TemplateMaterialSnapOverride"); }
	UMaterialInstanceDynamic*& TemplateMaterialSnapOverrideMaskedField() { return *GetNativePointerField<UMaterialInstanceDynamic**>(this, "APrimalStructureTemplate.TemplateMaterialSnapOverrideMasked"); }
	AShooterPlayerController*& SkinsAppliedByPCField() { return *GetNativePointerField<AShooterPlayerController**>(this, "APrimalStructureTemplate.SkinsAppliedByPC"); }
	APrimalStructureTemplate*& InterimTemplateRefField() { return *GetNativePointerField<APrimalStructureTemplate**>(this, "APrimalStructureTemplate.InterimTemplateRef"); }

	FTimerHandle& ItemResolverHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureTemplate.ItemResolverHandle"); }
	FTimerHandle& PreviewCreationHandleField() { return *GetNativePointerField<FTimerHandle*>(this, "APrimalStructureTemplate.PreviewCreationHandle"); }
	FLinearColor& PreviewColorField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalStructureTemplate.PreviewColor"); }
	FLinearColor& PreviewColorExtentField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalStructureTemplate.PreviewColorExtent"); }
	FLinearColor& PreviewColorSnapOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "APrimalStructureTemplate.PreviewColorSnapOverride"); }
	FString& PlacedByNetIDField() { return *GetNativePointerField<FString*>(this, "APrimalStructureTemplate.PlacedByNetID"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TemplateSnapFloorTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.TemplateSnapFloorTags"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TemplateSnapCeilingTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.TemplateSnapCeilingTags"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TemplateThinFloorTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.TemplateThinFloorTags"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TemplateThickFloorTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.TemplateThickFloorTags"); }
	TArray<FName, TSizedDefaultAllocator<32> >& TemplateSnapWallTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.TemplateSnapWallTags"); }
	FPrimalStructureTemplateData& TemplateDataField() { return *GetNativePointerField<FPrimalStructureTemplateData*>(this, "APrimalStructureTemplate.TemplateData"); }
	FInterimTemplateData& InterimTemplateDataField() { return *GetNativePointerField<FInterimTemplateData*>(this, "APrimalStructureTemplate.InterimTemplateData"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& TemplateBinaryDataField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.TemplateBinaryData"); }
	TArray<int, TSizedDefaultAllocator<32> >& DisabledIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.DisabledIndices"); }
	TArray<int, TSizedDefaultAllocator<32> >& BuiltIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.BuiltIndices"); }
	TArray<int, TSizedDefaultAllocator<32> >& SkinnedIndicesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.SkinnedIndices"); }
	UE::Math::TVector<double>* GetTemplateExtents(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTemplate.GetTemplateExtents()", result); }
	bool GetEntryBuildData(APlayerController* PC, int EntryIndex, bool ApplyPaint, bool ApplyVariant, bool IsServer, FTemplateBuildBatchEntry& BuildBatch) { return NativeCall<bool, APlayerController*, int, bool, bool, bool, FTemplateBuildBatchEntry&>(this, "APrimalStructureTemplate.GetEntryBuildData(APlayerController*,int,bool,bool,bool,FTemplateBuildBatchEntry&)", PC, EntryIndex, ApplyPaint, ApplyVariant, IsServer, BuildBatch); }
	bool CheckAdditionalStructureTag_Implementation(FName TagToCheck) { return NativeCall<bool, FName>(this, "APrimalStructureTemplate.CheckAdditionalStructureTag_Implementation(FName)", TagToCheck); }
	static TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* GetLinkedStructuresForTemplate(TArray<APrimalStructure*, TSizedDefaultAllocator<32> >* result, APrimalStructure* TargetStructure) { return NativeCall<TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, TArray<APrimalStructure*, TSizedDefaultAllocator<32> >*, APrimalStructure*>(nullptr, "APrimalStructureTemplate.GetLinkedStructuresForTemplate(APrimalStructure*)", result, TargetStructure); }
	void MulticastTemplateBuildUpdate_Implementation(const TArray<int, TSizedDefaultAllocator<32> >& IndicesBuilt) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureTemplate.MulticastTemplateBuildUpdate_Implementation(TArray<int,TSizedDefaultAllocator<32>>&)", IndicesBuilt); }
	void MulticastTemplateData_Implementation(const TArray<unsigned char, TSizedDefaultAllocator<32> >& TemplateBytes) { NativeCall<void, const TArray<unsigned char, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureTemplate.MulticastTemplateData_Implementation(TArray<unsignedchar,TSizedDefaultAllocator<32>>&)", TemplateBytes); }
	TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >* CreateTemplateEntryCollision(TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >* result, int EntryIndex) { return NativeCall<TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*, TArray<UStaticMeshComponent*, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureTemplate.CreateTemplateEntryCollision(int)", result, EntryIndex); }
	bool InterimTemplateContains(APrimalStructure* TargetStructure, bool& IsExtent, bool& IsSnapOverride) { return NativeCall<bool, APrimalStructure*, bool&, bool&>(this, "APrimalStructureTemplate.InterimTemplateContains(APrimalStructure*,bool&,bool&)", TargetStructure, IsExtent, IsSnapOverride); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >* GetTemplateUploadData(TArray<unsigned char, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<unsigned char, TSizedDefaultAllocator<32> >*, TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.GetTemplateUploadData()", result); }
	static bool ImportTemplateFromClipboard(FPrimalStructureTemplateData& ImportedData) { return NativeCall<bool, FPrimalStructureTemplateData&>(nullptr, "APrimalStructureTemplate.ImportTemplateFromClipboard(FPrimalStructureTemplateData&)", ImportedData); }
	void MulticastTemplateBuildUpdate(const TArray<int, TSizedDefaultAllocator<32> >& IndicesBuilt) { NativeCall<void, const TArray<int, TSizedDefaultAllocator<32> >&>(this, "APrimalStructureTemplate.MulticastTemplateBuildUpdate(TArray<int,TSizedDefaultAllocator<32>>&)", IndicesBuilt); }
	static bool GetSkinDataFromItem(UPrimalItem* TheItem, FTemplateSkinItemData& OutData) { return NativeCall<bool, UPrimalItem*, FTemplateSkinItemData&>(nullptr, "APrimalStructureTemplate.GetSkinDataFromItem(UPrimalItem*,FTemplateSkinItemData&)", TheItem, OutData); }
	FName OverrideAttachToStaticMeshSocketNameBase_Implementation() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "APrimalStructureTemplate.OverrideAttachToStaticMeshSocketNameBase_Implementation()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	TArray<UMeshComponent*, TSizedDefaultAllocator<32> >* CreateTemplateEntryPreview(TArray<UMeshComponent*, TSizedDefaultAllocator<32> >* result, int EntryIndex) { return NativeCall<TArray<UMeshComponent*, TSizedDefaultAllocator<32> >*, TArray<UMeshComponent*, TSizedDefaultAllocator<32> >*, int>(this, "APrimalStructureTemplate.CreateTemplateEntryPreview(int)", result, EntryIndex); }
	static FString* GetTemplateSaveDir(FString* result) { return NativeCall<FString*, FString*>(nullptr, "APrimalStructureTemplate.GetTemplateSaveDir()", result); }
	void TemplateHasUnownedDLCEntries(APlayerController* PC, int& UnownedStructureCount, int& UnownedSkinCount) { NativeCall<void, APlayerController*, int&, int&>(this, "APrimalStructureTemplate.TemplateHasUnownedDLCEntries(APlayerController*,int&,int&)", PC, UnownedStructureCount, UnownedSkinCount); }
	static bool IsStructureInRangeOfTemplateRoot(UE::Math::TVector<double>* TemplateLoc, UE::Math::TVector<double>* TargetLoc) { if (!TemplateLoc) throw std::invalid_argument("Null native value parameter"); if (!TargetLoc) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >>(nullptr, "APrimalStructureTemplate.IsStructureInRangeOfTemplateRoot(UE::Math::TVector<double>,UE::Math::TVector<double>)", *TemplateLoc, *TargetLoc); }
	bool CanBuildTemplateEntry(APlayerController* PC, int EntryIndex, bool CheckItemsQuick, bool UpdateItemQtys, bool IsServer, bool ShowErrorMsg, FPlacementData& OutPlacementData) { return NativeCall<bool, APlayerController*, int, bool, bool, bool, bool, FPlacementData&>(this, "APrimalStructureTemplate.CanBuildTemplateEntry(APlayerController*,int,bool,bool,bool,bool,FPlacementData&)", PC, EntryIndex, CheckItemsQuick, UpdateItemQtys, IsServer, ShowErrorMsg, OutPlacementData); }
	bool IsValidPlacementForTemplate(UE::Math::TVector<double>* Loc, UE::Math::TRotator<double>* Rot, int EntryIndex) { if (!Loc) throw std::invalid_argument("Null native value parameter"); if (!Rot) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TRotator < double >, int>(this, "APrimalStructureTemplate.IsValidPlacementForTemplate(UE::Math::TVector<double>,UE::Math::TRotator<double>,int)", *Loc, *Rot, EntryIndex); }
	UE::Math::TVector<double>* OverrideWaterVolumeCheckPointOffset_Implementation(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "APrimalStructureTemplate.OverrideWaterVolumeCheckPointOffset_Implementation()", result); }
	TArray<UPrimalStructureModTemplateData*, TSizedDefaultAllocator<32> >* GetAdditionalStructureTemplates(TArray<UPrimalStructureModTemplateData*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimalStructureModTemplateData*, TSizedDefaultAllocator<32> >*, TArray<UPrimalStructureModTemplateData*, TSizedDefaultAllocator<32> >*>(this, "APrimalStructureTemplate.GetAdditionalStructureTemplates()", result); }
};
