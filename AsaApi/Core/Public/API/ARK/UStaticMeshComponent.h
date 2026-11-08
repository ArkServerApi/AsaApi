#pragma once
#include "BulkForward.h"
#include <API/UE/Math/Box2D.h>
#include "NaniteMaterialAuditForward.h"


struct UStaticMeshComponent : UMeshComponent
{
	// Fields

	int& ForcedLodModelField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.ForcedLodModel"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& PreviousLODLevel_DEPRECATEDField();
	int& MinLODField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.MinLOD"); }
	int& SubDivisionStepSizeField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.SubDivisionStepSize"); }
	TObjectPtr<UStaticMesh>& StaticMeshField() { return *GetNativePointerField<TObjectPtr<UStaticMesh>*>(this, "UStaticMeshComponent.StaticMesh"); }
	FColor& WireframeColorOverrideField() { return *GetNativePointerField<FColor*>(this, "UStaticMeshComponent.WireframeColorOverride"); }
	int& WorldPositionOffsetDisableDistanceField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.WorldPositionOffsetDisableDistance"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& CustomDataOutDisableDistanceField();
	int& OverriddenLightMapResField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.OverriddenLightMapRes"); }
	float& DistanceFieldIndirectShadowMinVisibilityField() { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.DistanceFieldIndirectShadowMinVisibility"); }
	float& DistanceFieldSelfShadowBiasField() { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.DistanceFieldSelfShadowBias"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.StreamingDistanceMultiplier"); }
	//TArray<FStaticMeshComponentLODInfo, TSizedDefaultAllocator<32> >& LODDataField() { return *GetNativePointerField<TArray<FStaticMeshComponentLODInfo, TSizedDefaultAllocator<32> >*>(this, "UStaticMeshComponent.LODData"); }
	//TArray<FStreamingTextureBuildInfo, TSizedDefaultAllocator<32> >& StreamingTextureDataField() { return *GetNativePointerField<TArray<FStreamingTextureBuildInfo, TSizedDefaultAllocator<32> >*>(this, "UStaticMeshComponent.StreamingTextureData"); }
	//FLightmassPrimitiveSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPrimitiveSettings*>(this, "UStaticMeshComponent.LightmassSettings"); }
	//TDelegate<Nanite::FResources const* __cdecl(void), FDefaultDelegateUserPolicy>& OnGetNaniteResourcesEventField() { return *GetNativePointerField<TDelegate<Nanite::FResources const* __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "UStaticMeshComponent.OnGetNaniteResourcesEvent"); }
	float& DirectionalShadowDistanceLimitField() { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.DirectionalShadowDistanceLimit"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bDisallowNanite() { return { this, "UStaticMeshComponent.bDisallowNanite" }; }
	BitFieldValue<bool, unsigned __int32> bForceDisableNanite() { return { this, "UStaticMeshComponent.bForceDisableNanite" }; }
	BitFieldValue<bool, unsigned __int32> bEvaluateWorldPositionOffset() { return { this, "UStaticMeshComponent.bEvaluateWorldPositionOffset" }; }
	BitFieldValue<bool, unsigned __int32> bEvaluateWorldPositionOffsetInRayTracing() { return { this, "UStaticMeshComponent.bEvaluateWorldPositionOffsetInRayTracing" }; }
	BitFieldValue<bool, unsigned __int32> bInitialEvaluateWorldPositionOffset() { return { this, "UStaticMeshComponent.bInitialEvaluateWorldPositionOffset" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideWireframeColor() { return { this, "UStaticMeshComponent.bOverrideWireframeColor" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideMinLOD() { return { this, "UStaticMeshComponent.bOverrideMinLOD" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideNavigationExport() { return { this, "UStaticMeshComponent.bOverrideNavigationExport" }; }
	BitFieldValue<bool, unsigned __int32> bForceNavigationObstacle() { return { this, "UStaticMeshComponent.bForceNavigationObstacle" }; }
	BitFieldValue<bool, unsigned __int32> bDisallowMeshPaintPerInstance() { return { this, "UStaticMeshComponent.bDisallowMeshPaintPerInstance" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreInstanceForTextureStreaming() { return { this, "UStaticMeshComponent.bIgnoreInstanceForTextureStreaming" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideLightMapRes() { return { this, "UStaticMeshComponent.bOverrideLightMapRes" }; }
	BitFieldValue<bool, unsigned __int32> bCastDistanceFieldIndirectShadow() { return { this, "UStaticMeshComponent.bCastDistanceFieldIndirectShadow" }; }
	BitFieldValue<bool, unsigned __int32> bOverrideDistanceFieldSelfShadowBias() { return { this, "UStaticMeshComponent.bOverrideDistanceFieldSelfShadowBias" }; }
	BitFieldValue<bool, unsigned __int32> bUseSubDivisions() { return { this, "UStaticMeshComponent.bUseSubDivisions" }; }
	BitFieldValue<bool, unsigned __int32> bUseDefaultCollision() { return { this, "UStaticMeshComponent.bUseDefaultCollision" }; }
	BitFieldValue<bool, unsigned __int32> bSortTriangles() { return { this, "UStaticMeshComponent.bSortTriangles" }; }
	BitFieldValue<bool, unsigned __int32> bReverseCulling() { return { this, "UStaticMeshComponent.bReverseCulling" }; }
	BitFieldValue<bool, unsigned __int32> bUseDirectionalShadowDistanceLimit() { return { this, "UStaticMeshComponent.bUseDirectionalShadowDistanceLimit" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("UStaticMeshComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStaticMeshComponent"); }
	bool GetShadowIndirectOnly() { return NativeCall<bool>(this, "UStaticMeshComponent.GetShadowIndirectOnly()"); }
	void PropagateLightingScenarioChange() { NativeCall<void>(this, "UStaticMeshComponent.PropagateLightingScenarioChange()"); }
	bool BuildTextureStreamingDataImpl(ETextureStreamingBuildType BuildType, EMaterialQualityLevel::Type QualityLevel, ERHIFeatureLevel::Type FeatureLevel, TSet<FGuid, DefaultKeyFuncs<FGuid, 0>, FDefaultSetAllocator>* DependentResources, bool* bOutSupportsBuildTextureStreamingData) { return NativeCall<bool, ETextureStreamingBuildType, EMaterialQualityLevel::Type, ERHIFeatureLevel::Type, TSet<FGuid, DefaultKeyFuncs<FGuid, 0>, FDefaultSetAllocator>*, bool*>(this, "UStaticMeshComponent.BuildTextureStreamingDataImpl(ETextureStreamingBuildType,EMaterialQualityLevel::Type,ERHIFeatureLevel::Type,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>&,bool&)", BuildType, QualityLevel, FeatureLevel, DependentResources, bOutSupportsBuildTextureStreamingData); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUStaticMeshComponent();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ValidateGeneratedRepEnums(const TArray<FRepRecord, TSizedDefaultAllocator<32> >* ClassReps);
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UStaticMeshComponent.Serialize(FStructuredArchiveRecord)", Record); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >* OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty, TSizedDefaultAllocator<32> >*>(this, "UStaticMeshComponent.GetLifetimeReplicatedProps(TArray<FLifetimeProperty,TSizedDefaultAllocator<32>>&)", OutLifetimeProps); }
	bool HasAnySockets() { return NativeCall<bool>(this, "UStaticMeshComponent.HasAnySockets()"); }
	//void QuerySupportedSockets(TArray<FComponentSocketDescription, TSizedDefaultAllocator<32> >* OutSockets) { NativeCall<void, TArray<FComponentSocketDescription, TSizedDefaultAllocator<32> >*>(this, "UStaticMeshComponent.QuerySupportedSockets(TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>>&)", OutSockets); }
	FString* GetDetailedInfoInternal(FString* result) { return NativeCall<FString*, FString*>(this, "UStaticMeshComponent.GetDetailedInfoInternal()", result); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UStaticMeshComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UStaticMeshComponent.Serialize(FArchive&)", Ar); }
	void PostInitProperties() { NativeCall<void>(this, "UStaticMeshComponent.PostInitProperties()"); }
	bool AreNativePropertiesIdenticalTo(UObject* Other) { return NativeCall<bool, UObject*>(this, "UStaticMeshComponent.AreNativePropertiesIdenticalTo(UObject*)", Other); }
	//const FMeshMapBuildData* GetMeshMapBuildData(const FStaticMeshComponentLODInfo* LODInfo, bool bCheckForResourceCluster) { return NativeCall<const FMeshMapBuildData*, const FStaticMeshComponentLODInfo*, bool>(this, "UStaticMeshComponent.GetMeshMapBuildData(FStaticMeshComponentLODInfo&,bool)", LODInfo, bCheckForResourceCluster); }
	void BeginPlay() { NativeCall<void>(this, "UStaticMeshComponent.BeginPlay()"); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UStaticMeshComponent.OnCreatePhysicsState()"); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UStaticMeshComponent.OnDestroyPhysicsState()"); }
	//bool GetMaterialStreamingData(int MaterialIndex, FPrimitiveMaterialInfo* MaterialData) { return NativeCall<bool, int, FPrimitiveMaterialInfo*>(this, "UStaticMeshComponent.GetMaterialStreamingData(int,FPrimitiveMaterialInfo&)", MaterialIndex, MaterialData); }
	//void GetStreamingRenderAssetInfo(FStreamingTextureLevelContext* LevelContext, TArray<FStreamingRenderAssetPrimitiveInfo, TSizedDefaultAllocator<32> >* OutStreamingRenderAssets) { NativeCall<void, FStreamingTextureLevelContext*, TArray<FStreamingRenderAssetPrimitiveInfo, TSizedDefaultAllocator<32> >*>(this, "UStaticMeshComponent.GetStreamingRenderAssetInfo(FStreamingTextureLevelContext&,TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>>&)", LevelContext, OutStreamingRenderAssets); }
	//UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UStaticMeshComponent.GetBodySetup()"); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "UStaticMeshComponent.CanEditSimulatePhysics()"); }
	bool DoesSocketExist(FName InSocketName) { return NativeCall<bool, FName>(this, "UStaticMeshComponent.DoesSocketExist(FName)", InSocketName); }
	const UStaticMeshSocket* GetSocketByName(FName InSocketName) { return NativeCall<const UStaticMeshSocket*, FName>(this, "UStaticMeshComponent.GetSocketByName(FName)", InSocketName); }
	void RemoveInstanceVertexColorsFromLOD(int LODToRemoveColorsFrom) { NativeCall<void, int>(this, "UStaticMeshComponent.RemoveInstanceVertexColorsFromLOD(int)", LODToRemoveColorsFrom); }
	// void CollectPSOPrecacheData(const FPSOPrecacheParams* BasePrecachePSOParams, TArray<UPrimitiveComponent::FComponentPSOPrecacheParams, TSizedInlineAllocator<2, 32, TSizedDefaultAllocator<32> > >* OutParams) { NativeCall<void, const FPSOPrecacheParams*, TArray<UPrimitiveComponent::FComponentPSOPrecacheParams, TSizedInlineAllocator<2, 32, TSizedDefaultAllocator<32> > >*>(this, "UStaticMeshComponent.CollectPSOPrecacheData(FPSOPrecacheParams&,TArray<UPrimitiveComponent::FComponentPSOPrecacheParams,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>>>&)", BasePrecachePSOParams, OutParams); }
	bool ShouldCreateNaniteProxy() { return NativeCall<bool, Nanite::FMaterialAudit*>(this, "UStaticMeshComponent.ShouldCreateNaniteProxy(Nanite::FMaterialAudit*)", nullptr); }
	void BeginDestroy() { NativeCall<void>(this, "UStaticMeshComponent.BeginDestroy()"); }
	void ExportCustomProperties(FOutputDevice* Out, unsigned int Indent) { NativeCall<void, FOutputDevice*, unsigned int>(this, "UStaticMeshComponent.ExportCustomProperties(FOutputDevice&,unsignedint)", Out, Indent); }
	void ImportCustomProperties(const wchar_t* SourceText, FFeedbackContext* Warn) { NativeCall<void, const wchar_t*, FFeedbackContext*>(this, "UStaticMeshComponent.ImportCustomProperties(wchar_t*,FFeedbackContext*)", SourceText, Warn); }
	bool SupportsDefaultCollision() { return NativeCall<bool>(this, "UStaticMeshComponent.SupportsDefaultCollision()"); }
	bool SupportsDitheredLODTransitions(ERHIFeatureLevel::Type FeatureLevel) { return NativeCall<bool, ERHIFeatureLevel::Type>(this, "UStaticMeshComponent.SupportsDitheredLODTransitions(ERHIFeatureLevel::Type)", FeatureLevel); }
	void UpdateCollisionFromStaticMesh() { NativeCall<void>(this, "UStaticMeshComponent.UpdateCollisionFromStaticMesh()"); }
	void PostLoad() { NativeCall<void>(this, "UStaticMeshComponent.PostLoad()"); }
	bool ShouldCreateRenderState() { return NativeCall<bool>(this, "UStaticMeshComponent.ShouldCreateRenderState()"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UStaticMeshComponent.ShouldCreatePhysicsState()"); }
	bool SetStaticMesh(UStaticMesh* NewMesh) { return NativeCall<bool, UStaticMesh*>(this, "UStaticMeshComponent.SetStaticMesh(UStaticMesh*)", NewMesh); }
	bool HasValidNaniteData() { return NativeCall<bool>(this, "UStaticMeshComponent.HasValidNaniteData()"); }
	bool UseNaniteOverrideMaterials() { return NativeCall<bool>(this, "UStaticMeshComponent.UseNaniteOverrideMaterials()"); }
	float GetWorldPositionOffsetDisableDistance() { return NativeCall<float>(this, "UStaticMeshComponent.GetWorldPositionOffsetDisableDistance()"); }
	//     float GetCustomDataOutDisableDistance() { return NativeCall<float>(this, "UStaticMeshComponent.GetCustomDataOutDisableDistance()"); }
	// FUNCTION MISSING: UStaticMeshComponent.GetCustomDataOutDisableDistance()
	void GetLocalBounds(UE::Math::TVector<double>* Min, UE::Math::TVector<double>* Max) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UStaticMeshComponent.GetLocalBounds(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Min, Max); }
	void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps) { NativeCall<void, FName, bool>(this, "UStaticMeshComponent.SetCollisionProfileName(FName,bool)", InCollisionProfileName, bUpdateOverlaps); }
	bool UsesOnlyUnlitMaterials() { return NativeCall<bool>(this, "UStaticMeshComponent.UsesOnlyUnlitMaterials()"); }
	bool GetLightMapResolution(int* Width, int* Height) { return NativeCall<bool, int*, int*>(this, "UStaticMeshComponent.GetLightMapResolution(int&,int&)", Width, Height); }
	void GetEstimatedLightMapResolution(int* Width, int* Height) { NativeCall<void, int*, int*>(this, "UStaticMeshComponent.GetEstimatedLightMapResolution(int&,int&)", Width, Height); }
	bool HasValidSettingsForStaticLighting(bool bOverlookInvalidComponents) { return NativeCall<bool, bool>(this, "UStaticMeshComponent.HasValidSettingsForStaticLighting(bool)", bOverlookInvalidComponents); }
	bool UsesTextureLightmaps(int InWidth, int InHeight) { return NativeCall<bool, int, int>(this, "UStaticMeshComponent.UsesTextureLightmaps(int,int)", InWidth, InHeight); }
	bool HasLightmapTextureCoordinates() { return NativeCall<bool>(this, "UStaticMeshComponent.HasLightmapTextureCoordinates()"); }
	void GetTextureLightAndShadowMapMemoryUsage(int InWidth, int InHeight, int* OutLightMapMemoryUsage, int* OutShadowMapMemoryUsage) { NativeCall<void, int, int, int*, int*>(this, "UStaticMeshComponent.GetTextureLightAndShadowMapMemoryUsage(int,int,int&,int&)", InWidth, InHeight, OutLightMapMemoryUsage, OutShadowMapMemoryUsage); }
	void GetLightAndShadowMapMemoryUsage(int* LightMapMemoryUsage, int* ShadowMapMemoryUsage) { NativeCall<void, int*, int*>(this, "UStaticMeshComponent.GetLightAndShadowMapMemoryUsage(int&,int&)", LightMapMemoryUsage, ShadowMapMemoryUsage); }
	bool GetEstimatedLightAndShadowMapMemoryUsage(int* TextureLightMapMemoryUsage, int* TextureShadowMapMemoryUsage, int* VertexLightMapMemoryUsage, int* VertexShadowMapMemoryUsage, int* StaticLightingResolution, bool* bIsUsingTextureMapping, bool* bHasLightmapTexCoords) { return NativeCall<bool, int*, int*, int*, int*, int*, bool*, bool*>(this, "UStaticMeshComponent.GetEstimatedLightAndShadowMapMemoryUsage(int&,int&,int&,int&,int&,bool&,bool&)", TextureLightMapMemoryUsage, TextureShadowMapMemoryUsage, VertexLightMapMemoryUsage, VertexShadowMapMemoryUsage, StaticLightingResolution, bIsUsingTextureMapping, bHasLightmapTexCoords); }
	int GetNumMaterials() { return NativeCall<int>(this, "UStaticMeshComponent.GetNumMaterials()"); }
	int GetMaterialIndex(FName MaterialSlotName) { return NativeCall<int, FName>(this, "UStaticMeshComponent.GetMaterialIndex(FName)", MaterialSlotName); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetMaterialSlotNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UStaticMeshComponent.GetMaterialSlotNames()", result); }
	UMaterialInterface* GetMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UStaticMeshComponent.GetMaterial(int)", MaterialIndex); }
	//     UMaterialInterface* GetEditorMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UStaticMeshComponent.GetEditorMaterial(int)", MaterialIndex); }
	// FUNCTION MISSING: UStaticMeshComponent.GetEditorMaterial(int)
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >* OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >*, bool>(this, "UStaticMeshComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	//TStructOnScope<FActorComponentInstanceData, UScriptStruct*>* GetComponentInstanceData(TStructOnScope<FActorComponentInstanceData, UScriptStruct*>* result) { return NativeCall<TStructOnScope<FActorComponentInstanceData, UScriptStruct*>*, TStructOnScope<FActorComponentInstanceData, UScriptStruct*>*>(this, "UStaticMeshComponent.GetComponentInstanceData()", result); }
	//void ApplyComponentInstanceData(FStaticMeshComponentInstanceData* StaticMeshInstanceData) { NativeCall<void, FStaticMeshComponentInstanceData*>(this, "UStaticMeshComponent.ApplyComponentInstanceData(FStaticMeshComponentInstanceData*)", StaticMeshInstanceData); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UStaticMeshComponent.IsHLODRelevant()"); }
	//bool DoCustomNavigableGeometryExport(FNavigableGeometryExport* GeomExport) { return NativeCall<bool, FNavigableGeometryExport*>(this, "UStaticMeshComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	UMaterialInterface* GetMaterialFromCollisionFaceIndex(int FaceIndex, int* SectionIndex) { return NativeCall<UMaterialInterface*, int, int*>(this, "UStaticMeshComponent.GetMaterialFromCollisionFaceIndex(int,int&)", FaceIndex, SectionIndex); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UStaticMeshComponent.IsNavigationRelevant()"); }
	//void GetNavigationData(FNavigationRelevantData* Data) { NativeCall<void, FNavigationRelevantData*>(this, "UStaticMeshComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	//bool IsShown(const FEngineShowFlags* ShowFlags) { return NativeCall<bool, const FEngineShowFlags*>(this, "UStaticMeshComponent.IsShown(FEngineShowFlags&)", ShowFlags); }
	bool CopyPerInstanceDynamicCustomData(const UStaticMeshComponent* SrcComponent, int SrcInstanceIndex, int DstInstanceIndex, int NumInstances) { return NativeCall<bool, const UStaticMeshComponent*, int, int, int>(this, "UStaticMeshComponent.CopyPerInstanceDynamicCustomData(UStaticMeshComponent*,int,int,int)", SrcComponent, SrcInstanceIndex, DstInstanceIndex, NumInstances); }
	ELightMapInteractionType GetStaticLightingType() { return NativeCall<ELightMapInteractionType>(this, "UStaticMeshComponent.GetStaticLightingType()"); }
	bool IsPrecomputedLightingValid() { return NativeCall<bool>(this, "UStaticMeshComponent.IsPrecomputedLightingValid()"); }
	float GetEmissiveBoost(int ElementIndex) { return NativeCall<float, int>(this, "UStaticMeshComponent.GetEmissiveBoost(int)", ElementIndex); }
	float GetDiffuseBoost(int ElementIndex) { return NativeCall<float, int>(this, "UStaticMeshComponent.GetDiffuseBoost(int)", ElementIndex); }
	//FStaticMeshStaticLightingMesh* AllocateStaticLightingMesh(int LODIndex, const TArray<ULightComponent*, TSizedDefaultAllocator<32> >* InRelevantLights) { return NativeCall<FStaticMeshStaticLightingMesh*, int, const TArray<ULightComponent*, TSizedDefaultAllocator<32> >*>(this, "UStaticMeshComponent.AllocateStaticLightingMesh(int,TArray<ULightComponent*,TSizedDefaultAllocator<32>>&)", LODIndex, InRelevantLights); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UStaticMeshComponent.InvalidateLightingCacheDetailed(bool,bool)", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	const UObject* AdditionalStatObject() { return NativeCall<const UObject*>(this, "UStaticMeshComponent.AdditionalStatObject()"); }
	bool SetStaticLightingMapping(bool bTextureMapping, int ResolutionToUse) { return NativeCall<bool, bool, int>(this, "UStaticMeshComponent.SetStaticLightingMapping(bool,int)", bTextureMapping, ResolutionToUse); }
	bool SetLODDataCount(const unsigned int MinSize, const unsigned int MaxSize) { return NativeCall<bool, const unsigned int, const unsigned int>(this, "UStaticMeshComponent.SetLODDataCount(unsignedint,unsignedint)", MinSize, MaxSize); }
	//FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UStaticMeshComponent.CreateSceneProxy()"); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "UStaticMeshComponent.ShouldRecreateProxyOnUpdateTransform()"); }

	FActorStaticMeshComponentInterface& StaticMeshComponentInterfaceField() { return *GetNativePointerField<FActorStaticMeshComponentInterface*>(this, "UStaticMeshComponent.StaticMeshComponentInterface"); }
	int& PerInstanceDynamicCustomDataOutDisableDistanceField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.PerInstanceDynamicCustomDataOutDisableDistance"); }
	int& OverriddenMeshPaintTextureCoordinateIndexField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.OverriddenMeshPaintTextureCoordinateIndex"); }
	int& OverriddenMeshPaintTextureResolutionField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.OverriddenMeshPaintTextureResolution"); }
	UE::Math::TBox2<float>& MaterialCacheUVRegionField() { return *GetNativePointerField<UE::Math::TBox2<float>*>(this, "UStaticMeshComponent.MaterialCacheUVRegion"); }
	int& MaterialCacheUVCoordinateIndexField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.MaterialCacheUVCoordinateIndex"); }
	float& NanitePixelProgrammableDistanceField() { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.NanitePixelProgrammableDistance"); }
	FLightmassPrimitiveSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPrimitiveSettings*>(this, "UStaticMeshComponent.LightmassSettings"); }
	unsigned char& GrassSliceIndexField() { return *GetNativePointerField<unsigned char*>(this, "UStaticMeshComponent.GrassSliceIndex"); }
	BitFieldValue<bool, unsigned char> bForceDisablePerInstanceDynamicCustomDataOut() { return { this, "UStaticMeshComponent.bForceDisablePerInstanceDynamicCustomDataOut"}; }
	BitFieldValue<bool, unsigned char> bForceNaniteForMasked() { return { this, "UStaticMeshComponent.bForceNaniteForMasked"}; }
	BitFieldValue<bool, unsigned char> bWorldPositionOffsetWritesVelocity() { return { this, "UStaticMeshComponent.bWorldPositionOffsetWritesVelocity"}; }
	BitFieldValue<bool, unsigned char> GDFLightPortal() { return { this, "UStaticMeshComponent.GDFLightPortal"}; }
	BitFieldValue<bool, unsigned char> bUsePrimitiveDataForCustomFlags() { return { this, "UStaticMeshComponent.bUsePrimitiveDataForCustomFlags"}; }
	BitFieldValue<bool, unsigned char> bMipLevelCallbackRegistered() { return { this, "UStaticMeshComponent.bMipLevelCallbackRegistered"}; }
	BitFieldValue<bool, unsigned char> bSupportMeshPainting() { return { this, "UStaticMeshComponent.bSupportMeshPainting"}; }
	BitFieldValue<bool, unsigned char> bDisallowMeshPaintPerInstance_DEPRECATED() { return { this, "UStaticMeshComponent.bDisallowMeshPaintPerInstance_DEPRECATED"}; }
	BitFieldValue<bool, unsigned char> bEnableVertexColorMeshPainting() { return { this, "UStaticMeshComponent.bEnableVertexColorMeshPainting"}; }
	BitFieldValue<bool, unsigned char> bEnableTextureColorMeshPainting() { return { this, "UStaticMeshComponent.bEnableTextureColorMeshPainting"}; }
	BitFieldValue<bool, unsigned char> bWritesToMaterialCache() { return { this, "UStaticMeshComponent.bWritesToMaterialCache"}; }
	BitFieldValue<bool, unsigned char> bOverrideMeshPaintTextureCoordinateIndex() { return { this, "UStaticMeshComponent.bOverrideMeshPaintTextureCoordinateIndex"}; }
	BitFieldValue<bool, unsigned char> bOverrideMeshPaintTextureResolution() { return { this, "UStaticMeshComponent.bOverrideMeshPaintTextureResolution"}; }
	BitFieldValue<bool, unsigned __int32> bProjectLandscapeGrass() { return { this, "UStaticMeshComponent.bProjectLandscapeGrass"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreMaterialGrassOutput() { return { this, "UStaticMeshComponent.bIgnoreMaterialGrassOutput"}; }
	BitFieldValue<bool, unsigned __int32> bIncludeWPOInGrassHeight() { return { this, "UStaticMeshComponent.bIncludeWPOInGrassHeight"}; }
	void UpdateMapBuildDataId() { NativeCall<void>(this, "UStaticMeshComponent.UpdateMapBuildDataId()"); }
	bool GetMaterialStreamingData(int MaterialIndex, FPrimitiveMaterialInfo& MaterialData) { return NativeCall<bool, int, FPrimitiveMaterialInfo&>(this, "UStaticMeshComponent.GetMaterialStreamingData(int,FPrimitiveMaterialInfo&)", MaterialIndex, MaterialData); }
	void OnUnregister() { NativeCall<void>(this, "UStaticMeshComponent.OnUnregister()"); }
	UMaterialInterface* GetNaniteAuditMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UStaticMeshComponent.GetNaniteAuditMaterial(int)", MaterialIndex); }
	bool SupportsWorldPositionOffsetVelocity() { return NativeCall<bool>(this, "UStaticMeshComponent.SupportsWorldPositionOffsetVelocity()"); }
	bool ShouldIncrementalPreRegister(UWorld* WorldContext) { return NativeCall<bool, UWorld*>(this, "UStaticMeshComponent.ShouldIncrementalPreRegister(UWorld*)", WorldContext); }
	void ApplyComponentInstanceData(FStaticMeshComponentInstanceData* StaticMeshInstanceData) { NativeCall<void, FStaticMeshComponentInstanceData*>(this, "UStaticMeshComponent.ApplyComponentInstanceData(FStaticMeshComponentInstanceData*)", StaticMeshInstanceData); }
	FColor GetWireframeColor() { using AsaReturnType = FColor; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UStaticMeshComponent.GetWireframeColor()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	float GetPerInstanceDynamicCustomDataOutDisableDistance() { return NativeCall<float>(this, "UStaticMeshComponent.GetPerInstanceDynamicCustomDataOutDisableDistance()"); }
	float GetTextureStreamingTransformScale() { return NativeCall<float>(this, "UStaticMeshComponent.GetTextureStreamingTransformScale()"); }
	bool PrestreamMeshLODs(float Seconds) { return NativeCall<bool, float>(this, "UStaticMeshComponent.PrestreamMeshLODs(float)", Seconds); }
	void SetMeshPaintTextureOverride(UTexture* OverrideTexture) { NativeCall<void, UTexture*>(this, "UStaticMeshComponent.SetMeshPaintTextureOverride(UTexture*)", OverrideTexture); }
	bool AllowsAsyncPhysicsStateCreation() { return NativeCall<bool>(this, "UStaticMeshComponent.AllowsAsyncPhysicsStateCreation()"); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "UStaticMeshComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	bool IsMaterialSlotNameValid(FName MaterialSlotName) { return NativeCall<bool, FName>(this, "UStaticMeshComponent.IsMaterialSlotNameValid(FName)", MaterialSlotName); }
	bool ShouldCollideWhenPlacing() { return NativeCall<bool>(this, "UStaticMeshComponent.ShouldCollideWhenPlacing()"); }
	bool IsPostLoadThreadSafe() { return NativeCall<bool>(this, "UStaticMeshComponent.IsPostLoadThreadSafe()"); }
	const FMeshMapBuildData* GetMeshMapBuildData(const FStaticMeshComponentLODInfo& LODInfo, bool bCheckForResourceCluster) { return NativeCall<const FMeshMapBuildData*, const FStaticMeshComponentLODInfo&, bool>(this, "UStaticMeshComponent.GetMeshMapBuildData(FStaticMeshComponentLODInfo&,bool)", LODInfo, bCheckForResourceCluster); }
	void GetPrimitiveStats(FPrimitiveStats& PrimitiveStats) { NativeCall<void, FPrimitiveStats&>(this, "UStaticMeshComponent.GetPrimitiveStats(FPrimitiveStats&)", PrimitiveStats); }
	bool RequiresGameThreadEndOfFrameRecreate() { return NativeCall<bool>(this, "UStaticMeshComponent.RequiresGameThreadEndOfFrameRecreate()"); }
	bool IsShown(const FEngineShowFlags& ShowFlags) { return NativeCall<bool, const FEngineShowFlags&>(this, "UStaticMeshComponent.IsShown(FEngineShowFlags&)", ShowFlags); }
	int GetRenderIndexForDynamicCustomData(int InstanceIndex) { return NativeCall<int, int>(this, "UStaticMeshComponent.GetRenderIndexForDynamicCustomData(int)", InstanceIndex); }
	void GetUsedTextures(TArray<UTexture*, TSizedDefaultAllocator<32> >& OutTextures, EMaterialQualityLevel::Type QualityLevel) { NativeCall<void, TArray<UTexture*, TSizedDefaultAllocator<32> >&, EMaterialQualityLevel::Type>(this, "UStaticMeshComponent.GetUsedTextures(TArray<UTexture*,TSizedDefaultAllocator<32>>&,EMaterialQualityLevel::Type)", OutTextures, QualityLevel); }
	float GetStreamingScale() { return NativeCall<float>(this, "UStaticMeshComponent.GetStreamingScale()"); }
	void PostReinitProperties() { NativeCall<void>(this, "UStaticMeshComponent.PostReinitProperties()"); }
	bool AllowsAsyncPhysicsStateDestruction() { return NativeCall<bool>(this, "UStaticMeshComponent.AllowsAsyncPhysicsStateDestruction()"); }
	bool ShouldExportAsObstacle(const UNavCollisionBase& InNavCollision) { return NativeCall<bool, const UNavCollisionBase&>(this, "UStaticMeshComponent.ShouldExportAsObstacle(UNavCollisionBase&)", InNavCollision); }
	void PostApplyToComponent() { NativeCall<void>(this, "UStaticMeshComponent.PostApplyToComponent()"); }
	UStreamableRenderAsset* GetStreamableNaniteAsset() { return NativeCall<UStreamableRenderAsset*>(this, "UStaticMeshComponent.GetStreamableNaniteAsset()"); }
	int GetMeshPaintTextureCoordinateIndex() { return NativeCall<int>(this, "UStaticMeshComponent.GetMeshPaintTextureCoordinateIndex()"); }
	bool SupportsStaticLighting() { return NativeCall<bool>(this, "UStaticMeshComponent.SupportsStaticLighting()"); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UStaticMeshComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void UpdateMaterialCacheTextures() { NativeCall<void>(this, "UStaticMeshComponent.UpdateMaterialCacheTextures()"); }
	bool ShouldCreatePerInstanceRenderData() { return NativeCall<bool>(this, "UStaticMeshComponent.ShouldCreatePerInstanceRenderData()"); }
	void OnAsyncDestroyPhysicsStateEnd_GameThread() { NativeCall<void>(this, "UStaticMeshComponent.OnAsyncDestroyPhysicsStateEnd_GameThread()"); }
	void PrecachePSOs() { NativeCall<void>(this, "UStaticMeshComponent.PrecachePSOs()"); }
	bool AffectsGrassHeightMap() { return NativeCall<bool>(this, "UStaticMeshComponent.AffectsGrassHeightMap()"); }
	int GetStaticLightMapResolution() { return NativeCall<int>(this, "UStaticMeshComponent.GetStaticLightMapResolution()"); }
	void SetMeshPaintTexture(UTexture* InTexture) { NativeCall<void, UTexture*>(this, "UStaticMeshComponent.SetMeshPaintTexture(UTexture*)", InTexture); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UStaticMeshComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	FStaticMeshStaticLightingMesh* AllocateStaticLightingMesh(int LODIndex, const TArray<ULightComponent*, TSizedDefaultAllocator<32> >& InRelevantLights) { return NativeCall<FStaticMeshStaticLightingMesh*, int, const TArray<ULightComponent*, TSizedDefaultAllocator<32> >&>(this, "UStaticMeshComponent.AllocateStaticLightingMesh(int,TArray<ULightComponent*,TSizedDefaultAllocator<32>>&)", LODIndex, InRelevantLights); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UStaticMeshComponent.CreateSceneProxy()"); }
	UTexture* GetMeshPaintTexture() { return NativeCall<UTexture*>(this, "UStaticMeshComponent.GetMeshPaintTexture()"); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UStaticMeshComponent.GetBodySetup()"); }
	void OnRegister() { NativeCall<void>(this, "UStaticMeshComponent.OnRegister()"); }
	UE::Math::TTransform<double>* GetSocketTransform(UE::Math::TTransform<double>* result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName, ERelativeTransformSpace>(this, "UStaticMeshComponent.GetSocketTransform(FName,ERelativeTransformSpace)", result, InSocketName, TransformSpace); }
};