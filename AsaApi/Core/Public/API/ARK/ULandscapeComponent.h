#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct ULandscapeComponent : public UPrimitiveComponent
{
public:
	ULandscapeComponent() = delete;
	~ULandscapeComponent() = delete;
	ULandscapeComponent(const ULandscapeComponent&) = delete;
	ULandscapeComponent& operator=(const ULandscapeComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeComponent"); }

	int& SectionBaseXField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.SectionBaseX"); }
	int& SectionBaseYField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.SectionBaseY"); }
	int& ComponentSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.ComponentSizeQuads"); }
	int& SubsectionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.SubsectionSizeQuads"); }
	int& NumSubsectionsField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.NumSubsections"); }
	TArray<signed char, TSizedDefaultAllocator<32> >& LODIndexToMaterialIndexField() { return *GetNativePointerField<TArray<signed char, TSizedDefaultAllocator<32> >*>(this, "ULandscapeComponent.LODIndexToMaterialIndex"); }
	float& WeightmapSubsectionOffsetField() { return *GetNativePointerField<float*>(this, "ULandscapeComponent.WeightmapSubsectionOffset"); }
	TArray<double, TSizedDefaultAllocator<32> >& MipToMipMaxDeltasField() { return *GetNativePointerField<TArray<double, TSizedDefaultAllocator<32> >*>(this, "ULandscapeComponent.MipToMipMaxDeltas"); }
	bool& bUserTriggeredChangeRequestedField() { return *GetNativePointerField<bool*>(this, "ULandscapeComponent.bUserTriggeredChangeRequested"); }
	bool& bNaniteActiveField() { return *GetNativePointerField<bool*>(this, "ULandscapeComponent.bNaniteActive"); }
	float& GrassMapZScaleField() { return *GetNativePointerField<float*>(this, "ULandscapeComponent.GrassMapZScale"); }
	FGuid& MapBuildDataIdField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeComponent.MapBuildDataId"); }
	int& CollisionMipLevelField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.CollisionMipLevel"); }
	int& SimpleCollisionMipLevelField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.SimpleCollisionMipLevel"); }
	float& NegativeZBoundsExtensionField() { return *GetNativePointerField<float*>(this, "ULandscapeComponent.NegativeZBoundsExtension"); }
	float& PositiveZBoundsExtensionField() { return *GetNativePointerField<float*>(this, "ULandscapeComponent.PositiveZBoundsExtension"); }
	float& StaticLightingResolutionField() { return *GetNativePointerField<float*>(this, "ULandscapeComponent.StaticLightingResolution"); }
	int& ForcedLODField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.ForcedLOD"); }
	int& LODBiasField() { return *GetNativePointerField<int*>(this, "ULandscapeComponent.LODBias"); }
	FLandscapeGroup*& RegisteredLandscapeGroupField() { return *GetNativePointerField<FLandscapeGroup**>(this, "ULandscapeComponent.RegisteredLandscapeGroup"); }
	unsigned int& ChangeTagField() { return *GetNativePointerField<unsigned int*>(this, "ULandscapeComponent.ChangeTag"); }
	ERuntimeVirtualTextureMainPassType GetVirtualTextureRenderPassType() { return NativeCall<ERuntimeVirtualTextureMainPassType>(this, "ULandscapeComponent.GetVirtualTextureRenderPassType()"); }
	const TArray<URuntimeVirtualTexture*, TSizedDefaultAllocator<32> >& GetRuntimeVirtualTextures() { return NativeCall<const TArray<URuntimeVirtualTexture*, TSizedDefaultAllocator<32> >&>(this, "ULandscapeComponent.GetRuntimeVirtualTextures()"); }
	void BeginDestroy() { NativeCall<void>(this, "ULandscapeComponent.BeginDestroy()"); }
	bool SupportsStaticLighting() { return NativeCall<bool>(this, "ULandscapeComponent.SupportsStaticLighting()"); }
	int GetNumRelevantMips() { return NativeCall<int>(this, "ULandscapeComponent.GetNumRelevantMips()"); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeComponent.PostLoad()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULandscapeComponent.Serialize(FArchive&)", Ar); }
	ALandscape* GetLandscapeActor() { return NativeCall<ALandscape*>(this, "ULandscapeComponent.GetLandscapeActor()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "ULandscapeComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	ALandscapeProxy* GetLandscapeProxy() { return NativeCall<ALandscapeProxy*>(this, "ULandscapeComponent.GetLandscapeProxy()"); }
	UTexture2D* GetHeightmap(bool InReturnEditingHeightmap) { return NativeCall<UTexture2D*, bool>(this, "ULandscapeComponent.GetHeightmap(bool)", InReturnEditingHeightmap); }
	ELightMapInteractionType GetStaticLightingType() { return NativeCall<ELightMapInteractionType>(this, "ULandscapeComponent.GetStaticLightingType()"); }
	void OnRegister() { NativeCall<void>(this, "ULandscapeComponent.OnRegister()"); }
	void DestroyComponent(bool bPromoteChildren) { NativeCall<void, bool>(this, "ULandscapeComponent.DestroyComponent(bool)", bPromoteChildren); }
	UMaterialInstance* GetMaterialInstance(int InIndex, bool InDynamic) { return NativeCall<UMaterialInstance*, int, bool>(this, "ULandscapeComponent.GetMaterialInstance(int,bool)", InIndex, InDynamic); }
	void SetLODBias(int InLODBias) { NativeCall<void, int>(this, "ULandscapeComponent.SetLODBias(int)", InLODBias); }
	void SetForcedLOD(int InForcedLOD) { NativeCall<void, int>(this, "ULandscapeComponent.SetForcedLOD(int)", InForcedLOD); }
	bool IsShown(const FEngineShowFlags& ShowFlags) { return NativeCall<bool, const FEngineShowFlags&>(this, "ULandscapeComponent.IsShown(FEngineShowFlags&)", ShowFlags); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "ULandscapeComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	const FMeshMapBuildData* GetMeshMapBuildData() { return NativeCall<const FMeshMapBuildData*>(this, "ULandscapeComponent.GetMeshMapBuildData()"); }
	ULandscapeInfo* GetLandscapeInfo() { return NativeCall<ULandscapeInfo*>(this, "ULandscapeComponent.GetLandscapeInfo()"); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "ULandscapeComponent.CreateSceneProxy()"); }
	void PostInitProperties() { NativeCall<void>(this, "ULandscapeComponent.PostInitProperties()"); }
	UMaterialInterface* GetCurrentRuntimeMaterialInterface(int InIndex) { return NativeCall<UMaterialInterface*, int>(this, "ULandscapeComponent.GetCurrentRuntimeMaterialInterface(int)", InIndex); }
	void RemoveGrassMap() { NativeCall<void>(this, "ULandscapeComponent.RemoveGrassMap()"); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "ULandscapeComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	void PropagateLightingScenarioChange() { NativeCall<void>(this, "ULandscapeComponent.PropagateLightingScenarioChange()"); }
	bool IsPrecomputedLightingValid() { return NativeCall<bool>(this, "ULandscapeComponent.IsPrecomputedLightingValid()"); }
	int GetCurrentRuntimeMaterialInstanceCount() { return NativeCall<int>(this, "ULandscapeComponent.GetCurrentRuntimeMaterialInstanceCount()"); }
	void OnUnregister() { NativeCall<void>(this, "ULandscapeComponent.OnUnregister()"); }
	UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex) { return NativeCall<UMaterialInstanceDynamic*, int>(this, "ULandscapeComponent.GetMaterialInstanceDynamic(int)", InIndex); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "ULandscapeComponent.IsHLODRelevant()"); }
	bool CanRenderGrassMap() { return NativeCall<bool>(this, "ULandscapeComponent.CanRenderGrassMap()"); }
	ULandscapeHeightmapTextureEdgeFixup* InstallOrUpdateTextureUserDatas(bool bUseEdgeFixup, bool bUseCompression, bool bUpdateSnapshotNow, int HeightmapCompressionMipThreshold) { return NativeCall<ULandscapeHeightmapTextureEdgeFixup*, bool, bool, bool, int>(this, "ULandscapeComponent.InstallOrUpdateTextureUserDatas(bool,bool,bool,int)", bUseEdgeFixup, bUseCompression, bUpdateSnapshotNow, HeightmapCompressionMipThreshold); }
};
