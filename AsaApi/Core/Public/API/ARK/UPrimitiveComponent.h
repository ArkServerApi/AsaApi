#pragma once
#include "FTouchId.h"
#include "BulkForward.h"


struct UPrimitiveComponent : USceneComponent
{
	// Fields

	float& MinDrawDistanceField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.MinDrawDistance"); }
	float& LDMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.LDMaxDrawDistance"); }
	float& CachedMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.CachedMaxDrawDistance"); }
	TEnumAsByte<enum ESceneDepthPriorityGroup>& ViewOwnerDepthPriorityGroupField() { return *GetNativePointerField<TEnumAsByte<enum ESceneDepthPriorityGroup>*>(this, "UPrimitiveComponent.ViewOwnerDepthPriorityGroup"); }
	FieldArray<char, 1> LightmapTypeField() { return { this, "UPrimitiveComponent.LightmapType" }; }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// TArray<unsigned int, TSizedDefaultAllocator<32> >& MaterialPSOPrecacheRequestIDsField();
	//TRefCountPtr<FGraphEvent>& PSOPrecacheCompileEventField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "UPrimitiveComponent.PSOPrecacheCompileEvent"); }
	unsigned __int8& MoveIgnoreMaskField() { return *GetNativePointerField<unsigned __int8*>(this, "UPrimitiveComponent.MoveIgnoreMask"); }
	//FLightingChannels& LightingChannelsField() { return *GetNativePointerField<FLightingChannels*>(this, "UPrimitiveComponent.LightingChannels"); }
	int& RayTracingGroupIdField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.RayTracingGroupId"); }
	int& VisibilityIdField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.VisibilityId"); }
	int& CustomDepthStencilValueField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.CustomDepthStencilValue"); }
	//FCustomPrimitiveData& CustomPrimitiveDataField() { return *GetNativePointerField<FCustomPrimitiveData*>(this, "UPrimitiveComponent.CustomPrimitiveData"); }
	//FCustomPrimitiveData& CustomPrimitiveDataInternalField() { return *GetNativePointerField<FCustomPrimitiveData*>(this, "UPrimitiveComponent.CustomPrimitiveDataInternal"); }
	//FPhysScene_Chaos*& DeferredCreatePhysicsStateSceneField() { return *GetNativePointerField<FPhysScene_Chaos**>(this, "UPrimitiveComponent.DeferredCreatePhysicsStateScene"); }
	int& TranslucencySortPriorityField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.TranslucencySortPriority"); }
	float& TranslucencySortDistanceOffsetField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.TranslucencySortDistanceOffset"); }
	//TArray<TObjectPtr<URuntimeVirtualTexture>, TSizedDefaultAllocator<32> >& RuntimeVirtualTexturesField() { return *GetNativePointerField<TArray<TObjectPtr<URuntimeVirtualTexture>, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.RuntimeVirtualTextures"); }
	char& VirtualTextureCullMipsField() { return *GetNativePointerField<char*>(this, "UPrimitiveComponent.VirtualTextureCullMips"); }
	FieldArray<char, 1> VirtualTextureRenderPassTypeField() { return { this, "UPrimitiveComponent.VirtualTextureRenderPassType" }; }
	//FPrimitiveComponentId& ComponentIdField() { return *GetNativePointerField<FPrimitiveComponentId*>(this, "UPrimitiveComponent.ComponentId"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& RegistrationSerialNumberField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FThreadSafeCounter& AttachmentCounterField();
	float& LastCheckedAllCollideableDescendantsTimeField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.LastCheckedAllCollideableDescendantsTime"); }
	float& BoundsScaleField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.BoundsScale"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& LastSubmitTimeField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// long double& LastRenderTimeField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// long double& LastRenderTimeOnScreenField();
	float& OcclusionBoundsSlackField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.OcclusionBoundsSlack"); }
	TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >& MoveIgnoreActorsField() { return *GetNativePointerField<TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.MoveIgnoreActors"); }
	TArray<TObjectPtr<UPrimitiveComponent>, TSizedDefaultAllocator<32> >& MoveIgnoreComponentsField() { return *GetNativePointerField<TArray<TObjectPtr<UPrimitiveComponent>, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.MoveIgnoreComponents"); }
	TArray<FOverlapInfo, TSizedDefaultAllocator<32> >& OverlappingComponentsField() { return *GetNativePointerField<TArray<FOverlapInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.OverlappingComponents"); }
	TMap<TWeakObjectPtr<UPrimitiveComponent>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent>, int, 0> >& OverlappingPrimitiveComponentsField() { return *GetNativePointerField<TMap<TWeakObjectPtr<UPrimitiveComponent>, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent>, int, 0> >*>(this, "UPrimitiveComponent.OverlappingPrimitiveComponents"); }
	FBodyInstance& BodyInstanceField() { return *GetNativePointerField<FBodyInstance*>(this, "UPrimitiveComponent.BodyInstance"); }
	FComponentBeginOverlapSignature& OnComponentBeginOverlapField() { return *GetNativePointerField<FComponentBeginOverlapSignature*>(this, "UPrimitiveComponent.OnComponentBeginOverlap"); }
	//FComponentWakeSignature& OnComponentWakeField() { return *GetNativePointerField<FComponentWakeSignature*>(this, "UPrimitiveComponent.OnComponentWake"); }
	//FComponentCollisionSettingsChangedSignature& OnComponentCollisionSettingsChangedEventField() { return *GetNativePointerField<FComponentCollisionSettingsChangedSignature*>(this, "UPrimitiveComponent.OnComponentCollisionSettingsChangedEvent"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FComponentBeginCursorOverSignature& OnBeginCursorOverField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FComponentOnClickedSignature& OnClickedField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FComponentOnInputTouchBeginSignature& OnInputTouchBeginField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// FComponentBeginTouchOverSignature& OnInputTouchEnterField();
	ERayTracingGroupCullingPriority& RayTracingGroupCullingPriorityField() { return *GetNativePointerField<ERayTracingGroupCullingPriority*>(this, "UPrimitiveComponent.RayTracingGroupCullingPriority"); }
	//FPrimitiveSceneProxy*& SceneProxyField() { return *GetNativePointerField<FPrimitiveSceneProxy**>(this, "UPrimitiveComponent.SceneProxy"); }
	FRenderCommandFence& DetachFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UPrimitiveComponent.DetachFence"); }
	TObjectPtr<UPrimitiveComponent>& LODParentPrimitiveField() { return *GetNativePointerField<TObjectPtr<UPrimitiveComponent>*>(this, "UPrimitiveComponent.LODParentPrimitive"); }
	int& ObjectLayerField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.ObjectLayer"); }
	float& OverrideStepHeightField() { return *GetNativePointerField<float*>(this, "UPrimitiveComponent.OverrideStepHeight"); }
	//FOctreeElementId2& InternalOctreeIdField() { return *GetNativePointerField<FOctreeElementId2*>(this, "UPrimitiveComponent.InternalOctreeId"); }
	//FieldArray<FOctreeElementId2, 18> SpecializedInternalOctreeIdField() { return { this, "UPrimitiveComponent.SpecializedInternalOctreeId" }; }
	int& InternalOctreeMaskField() { return *GetNativePointerField<int*>(this, "UPrimitiveComponent.InternalOctreeMask"); }
	//TLazyObjectPtr<UPrimitiveComponent>& ReplacementPrimitiveField() { return *GetNativePointerField<TLazyObjectPtr<UPrimitiveComponent>*>(this, "UPrimitiveComponent.ReplacementPrimitive"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// unsigned int& ProxyMeshIDField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool& bHasActiveProxyMeshChildrenField();
	//TLinkedList<UPrimitiveComponent*>& ProxyMeshLinkField() { return *GetNativePointerField<TLinkedList<UPrimitiveComponent*>*>(this, "UPrimitiveComponent.ProxyMeshLink"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bEnableAutoLODGeneration() { return { this, "UPrimitiveComponent.bEnableAutoLODGeneration" }; }
	BitFieldValue<bool, unsigned __int32> bIsActorTextureStreamingBuiltData() { return { this, "UPrimitiveComponent.bIsActorTextureStreamingBuiltData" }; }
	BitFieldValue<bool, unsigned __int32> bIsValidTextureStreamingBuiltData() { return { this, "UPrimitiveComponent.bIsValidTextureStreamingBuiltData" }; }
	BitFieldValue<bool, unsigned __int32> bNeverDistanceCull() { return { this, "UPrimitiveComponent.bNeverDistanceCull" }; }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bAttachedToStreamingManagerAsStatic();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bAttachedToStreamingManagerAsDynamic();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bHandledByStreamingManagerAsDynamic();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bIgnoreStreamingManagerUpdate();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bAttachedToCoarseMeshStreamingManager();
	BitFieldValue<bool, unsigned __int32> bAlwaysCreatePhysicsState() { return { this, "UPrimitiveComponent.bAlwaysCreatePhysicsState" }; }
	BitFieldValue<bool, unsigned __int32> bGenerateOverlapEvents() { return { this, "UPrimitiveComponent.bGenerateOverlapEvents" }; }
	BitFieldValue<bool, unsigned __int32> bMultiBodyOverlap() { return { this, "UPrimitiveComponent.bMultiBodyOverlap" }; }
	BitFieldValue<bool, unsigned __int32> bTraceComplexOnMove() { return { this, "UPrimitiveComponent.bTraceComplexOnMove" }; }
	BitFieldValue<bool, unsigned __int32> bReturnMaterialOnMove() { return { this, "UPrimitiveComponent.bReturnMaterialOnMove" }; }
	BitFieldValue<bool, unsigned __int32> bUseViewOwnerDepthPriorityGroup() { return { this, "UPrimitiveComponent.bUseViewOwnerDepthPriorityGroup" }; }
	BitFieldValue<bool, unsigned __int32> bAllowCullDistanceVolume() { return { this, "UPrimitiveComponent.bAllowCullDistanceVolume" }; }
	BitFieldValue<bool, unsigned __int32> bVisibleInReflectionCaptures() { return { this, "UPrimitiveComponent.bVisibleInReflectionCaptures" }; }
	BitFieldValue<bool, unsigned __int32> bVisibleInRealTimeSkyCaptures() { return { this, "UPrimitiveComponent.bVisibleInRealTimeSkyCaptures" }; }
	BitFieldValue<bool, unsigned __int32> bVisibleInRayTracing() { return { this, "UPrimitiveComponent.bVisibleInRayTracing" }; }
	BitFieldValue<bool, unsigned __int32> bRenderInMainPass() { return { this, "UPrimitiveComponent.bRenderInMainPass" }; }
	BitFieldValue<bool, unsigned __int32> bRenderInDepthPass() { return { this, "UPrimitiveComponent.bRenderInDepthPass" }; }
	BitFieldValue<bool, unsigned __int32> bReceivesDecals() { return { this, "UPrimitiveComponent.bReceivesDecals" }; }
	BitFieldValue<bool, unsigned __int32> bHoldout() { return { this, "UPrimitiveComponent.bHoldout" }; }
	BitFieldValue<bool, unsigned __int32> bOwnerNoSee() { return { this, "UPrimitiveComponent.bOwnerNoSee" }; }
	BitFieldValue<bool, unsigned __int32> bOnlyOwnerSee() { return { this, "UPrimitiveComponent.bOnlyOwnerSee" }; }
	BitFieldValue<bool, unsigned __int32> bTreatAsBackgroundForOcclusion() { return { this, "UPrimitiveComponent.bTreatAsBackgroundForOcclusion" }; }
	BitFieldValue<bool, unsigned __int32> bUseAsOccluder() { return { this, "UPrimitiveComponent.bUseAsOccluder" }; }
	BitFieldValue<bool, unsigned __int32> bSelectable() { return { this, "UPrimitiveComponent.bSelectable" }; }
	BitFieldValue<bool, unsigned __int32> bForceMipStreaming() { return { this, "UPrimitiveComponent.bForceMipStreaming" }; }
	BitFieldValue<bool, unsigned __int32> bHasPerInstanceHitProxies() { return { this, "UPrimitiveComponent.bHasPerInstanceHitProxies" }; }
	BitFieldValue<bool, unsigned __int32> CastShadow() { return { this, "UPrimitiveComponent.CastShadow" }; }
	BitFieldValue<bool, unsigned __int32> bEmissiveLightSource() { return { this, "UPrimitiveComponent.bEmissiveLightSource" }; }
	BitFieldValue<bool, unsigned __int32> bAffectDynamicIndirectLighting() { return { this, "UPrimitiveComponent.bAffectDynamicIndirectLighting" }; }
	BitFieldValue<bool, unsigned __int32> bAffectIndirectLightingWhileHidden() { return { this, "UPrimitiveComponent.bAffectIndirectLightingWhileHidden" }; }
	BitFieldValue<bool, unsigned __int32> bAffectDistanceFieldLighting() { return { this, "UPrimitiveComponent.bAffectDistanceFieldLighting" }; }
	BitFieldValue<bool, unsigned __int32> bCastDynamicShadow() { return { this, "UPrimitiveComponent.bCastDynamicShadow" }; }
	BitFieldValue<bool, unsigned __int32> bCastStaticShadow() { return { this, "UPrimitiveComponent.bCastStaticShadow" }; }
	BitFieldValue<bool, unsigned __int32> bCastVolumetricTranslucentShadow() { return { this, "UPrimitiveComponent.bCastVolumetricTranslucentShadow" }; }
	BitFieldValue<bool, unsigned __int32> bCastContactShadow() { return { this, "UPrimitiveComponent.bCastContactShadow" }; }
	BitFieldValue<bool, unsigned __int32> bSelfShadowOnly() { return { this, "UPrimitiveComponent.bSelfShadowOnly" }; }
	BitFieldValue<bool, unsigned __int32> bCastFarShadow() { return { this, "UPrimitiveComponent.bCastFarShadow" }; }
	BitFieldValue<bool, unsigned __int32> bCastInsetShadow() { return { this, "UPrimitiveComponent.bCastInsetShadow" }; }
	BitFieldValue<bool, unsigned __int32> bCastCinematicShadow() { return { this, "UPrimitiveComponent.bCastCinematicShadow" }; }
	BitFieldValue<bool, unsigned __int32> bCastHiddenShadow() { return { this, "UPrimitiveComponent.bCastHiddenShadow" }; }
	BitFieldValue<bool, unsigned __int32> bCastShadowAsTwoSided() { return { this, "UPrimitiveComponent.bCastShadowAsTwoSided" }; }
	BitFieldValue<bool, unsigned __int32> bLightAsIfStatic_DEPRECATED() { return { this, "UPrimitiveComponent.bLightAsIfStatic_DEPRECATED" }; }
	BitFieldValue<bool, unsigned __int32> bLightAttachmentsAsGroup() { return { this, "UPrimitiveComponent.bLightAttachmentsAsGroup" }; }
	BitFieldValue<bool, unsigned __int32> bExcludeFromLightAttachmentGroup() { return { this, "UPrimitiveComponent.bExcludeFromLightAttachmentGroup" }; }
	BitFieldValue<bool, unsigned __int32> bReceiveMobileCSMShadows() { return { this, "UPrimitiveComponent.bReceiveMobileCSMShadows" }; }
	BitFieldValue<bool, unsigned __int32> bSingleSampleShadowFromStationaryLights() { return { this, "UPrimitiveComponent.bSingleSampleShadowFromStationaryLights" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreRadialImpulse() { return { this, "UPrimitiveComponent.bIgnoreRadialImpulse" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoreRadialForce() { return { this, "UPrimitiveComponent.bIgnoreRadialForce" }; }
	BitFieldValue<bool, unsigned __int32> bApplyImpulseOnDamage() { return { this, "UPrimitiveComponent.bApplyImpulseOnDamage" }; }
	BitFieldValue<bool, unsigned __int32> bReplicatePhysicsToAutonomousProxy() { return { this, "UPrimitiveComponent.bReplicatePhysicsToAutonomousProxy" }; }
	BitFieldValue<bool, unsigned __int32> bFillCollisionUnderneathForNavmesh() { return { this, "UPrimitiveComponent.bFillCollisionUnderneathForNavmesh" }; }
	BitFieldValue<bool, unsigned __int32> AlwaysLoadOnClient() { return { this, "UPrimitiveComponent.AlwaysLoadOnClient" }; }
	BitFieldValue<bool, unsigned __int32> AlwaysLoadOnServer() { return { this, "UPrimitiveComponent.AlwaysLoadOnServer" }; }
	BitFieldValue<bool, unsigned __int32> bUseEditorCompositing() { return { this, "UPrimitiveComponent.bUseEditorCompositing" }; }
	BitFieldValue<bool, unsigned __int32> bIsBeingMovedByEditor() { return { this, "UPrimitiveComponent.bIsBeingMovedByEditor" }; }
	BitFieldValue<bool, unsigned __int32> bRenderCustomDepth() { return { this, "UPrimitiveComponent.bRenderCustomDepth" }; }
	BitFieldValue<bool, unsigned __int32> bVisibleInSceneCaptureOnly() { return { this, "UPrimitiveComponent.bVisibleInSceneCaptureOnly" }; }
	BitFieldValue<bool, unsigned __int32> bHiddenInSceneCapture() { return { this, "UPrimitiveComponent.bHiddenInSceneCapture" }; }
	BitFieldValue<bool, unsigned __int32> bRayTracingFarField() { return { this, "UPrimitiveComponent.bRayTracingFarField" }; }
	BitFieldValue<bool, unsigned __int32> bCachedAllCollideableDescendantsRelative() { return { this, "UPrimitiveComponent.bCachedAllCollideableDescendantsRelative" }; }
	BitFieldValue<bool, unsigned __int32> bHasNoStreamableTextures() { return { this, "UPrimitiveComponent.bHasNoStreamableTextures" }; }
	BitFieldValue<bool, unsigned __int32> bStaticWhenNotMoveable() { return { this, "UPrimitiveComponent.bStaticWhenNotMoveable" }; }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bPSOPrecacheCalled();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bPSOPrecacheRequestBoosted();
	BitFieldValue<bool, unsigned __int32> bIgnoreUpdatingOwnersLastRenderTime() { return { this, "UPrimitiveComponent.bIgnoreUpdatingOwnersLastRenderTime" }; }
	BitFieldValue<bool, unsigned __int32> bForcePreventBlockingProjectiles() { return { this, "UPrimitiveComponent.bForcePreventBlockingProjectiles" }; }
	BitFieldValue<bool, unsigned __int32> bForceOverlapEvents() { return { this, "UPrimitiveComponent.bForceOverlapEvents" }; }
	BitFieldValue<bool, unsigned __int32> bIsInForeground() { return { this, "UPrimitiveComponent.bIsInForeground" }; }
	BitFieldValue<bool, unsigned __int32> bUseInternalOctree() { return { this, "UPrimitiveComponent.bUseInternalOctree" }; }
	BitFieldValue<bool, unsigned __int32> bUseInternalOctreeOnClient() { return { this, "UPrimitiveComponent.bUseInternalOctreeOnClient" }; }
	BitFieldValue<bool, unsigned __int32> bRegisteredInternalOctree() { return { this, "UPrimitiveComponent.bRegisteredInternalOctree" }; }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// BitFieldValue<bool, unsigned __int32> bForceDynamicPhysics();
	BitFieldValue<bool, unsigned __int32> bPreventCharacterBasing() { return { this, "UPrimitiveComponent.bPreventCharacterBasing" }; }
	BitFieldValue<bool, unsigned __int32> bAllowBasedCharacters() { return { this, "UPrimitiveComponent.bAllowBasedCharacters" }; }
	BitFieldValue<bool, unsigned __int32> bIsAbstractBasingComponent() { return { this, "UPrimitiveComponent.bIsAbstractBasingComponent" }; }
	BitFieldValue<bool, unsigned __int32> bClimbable() { return { this, "UPrimitiveComponent.bClimbable" }; }
	BitFieldValue<bool, unsigned __int32> bUseAbsoluteMaxDrawDisatance() { return { this, "UPrimitiveComponent.bUseAbsoluteMaxDrawDisatance" }; }
	BitFieldValue<bool, unsigned __int32> bMovableUseDynamicDrawDistance() { return { this, "UPrimitiveComponent.bMovableUseDynamicDrawDistance" }; }
	BitFieldValue<bool, unsigned __int32> bIncludeBoundsRadiusInDrawDistances() { return { this, "UPrimitiveComponent.bIncludeBoundsRadiusInDrawDistances" }; }
	BitFieldValue<bool, unsigned __int32> bExcludeFromLevelBounds() { return { this, "UPrimitiveComponent.bExcludeFromLevelBounds" }; }
	BitFieldValue<bool, unsigned __int32> bIgnoredByCharacterEncroachment() { return { this, "UPrimitiveComponent.bIgnoredByCharacterEncroachment" }; }
	BitFieldValue<bool, unsigned __int32> bPreventDamage() { return { this, "UPrimitiveComponent.bPreventDamage" }; }

	// Functions

	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimitiveComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimitiveComponent"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UPrimitiveComponent.Serialize(FStructuredArchiveRecord)", Record); }
	bool OverlapComponent(const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Rot, const struct FCollisionShape* CollisionShape) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, const FCollisionShape*>(this, "UPrimitiveComponent.OverlapComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionShape&)", Pos, Rot, CollisionShape); }
	bool AreSymmetricRotations(const UE::Math::TQuat<double>* A, const UE::Math::TQuat<double>* B, const UE::Math::TVector<double>* Scale3D) { return NativeCall<bool, const UE::Math::TQuat<double>*, const UE::Math::TQuat<double>*, const UE::Math::TVector<double>*>(this, "UPrimitiveComponent.AreSymmetricRotations(UE::Math::TQuat<double>&,UE::Math::TQuat<double>&,UE::Math::TVector<double>&)", A, B, Scale3D); }
	ESceneDepthPriorityGroup GetStaticDepthPriorityGroup() { return NativeCall<ESceneDepthPriorityGroup>(this, "UPrimitiveComponent.GetStaticDepthPriorityGroup()"); }
	bool HasValidSettingsForStaticLighting(bool bOverlookInvalidComponents) { return NativeCall<bool, bool>(this, "UPrimitiveComponent.HasValidSettingsForStaticLighting(bool)", bOverlookInvalidComponents); }
	//     UMaterialInterface* GetEditorMaterial(int ElementIndex) { return NativeCall<UMaterialInterface*, int>(this, "UPrimitiveComponent.GetEditorMaterial(int)", ElementIndex); }
	// FUNCTION MISSING: UPrimitiveComponent.GetEditorMaterial(int)
		//const FReferenceSkeleton* GetRuntimeVirtualTextures() { return NativeCall<const FReferenceSkeleton*>(this, "UPrimitiveComponent.GetRuntimeVirtualTextures()"); }
	//     void ResizeGrow(int OldNum) { NativeCall<void, int>(this, "UPrimitiveComponent.ResizeGrow(int)", OldNum); }
	// FUNCTION MISSING: UPrimitiveComponent.ResizeGrow(int)
	//     void SetPhysicsAngularVelocityInDegrees(UE::Math::TVector<double>* NewAngVel, __int64 bAddToCurrent, FName BoneName) { NativeCall<void, UE::Math::TVector<double>*, __int64, FName>(this, "UPrimitiveComponent.SetPhysicsAngularVelocityInDegrees(UE::Math::TVector<double>,bool,FName)", NewAngVel, bAddToCurrent, BoneName); }
	// FUNCTION MISSING: UPrimitiveComponent.SetPhysicsAngularVelocityInDegrees(UE::Math::TVector<double>,bool,FName)
	void GetLightAndShadowMapMemoryUsage(int* OutNum, int* OutMax) { NativeCall<void, int*, int*>(this, "UPrimitiveComponent.GetLightAndShadowMapMemoryUsage(int&,int&)", OutNum, OutMax); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// static void StaticRegisterNativesUPrimitiveComponent();
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UPrimitiveComponent.InvalidateLightingCacheDetailed(bool,bool)", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "UPrimitiveComponent.IsEditorOnly()"); }
	//void GetStreamingRenderAssetInfo(FStreamingTextureLevelContext* LevelContext, TArray<FStreamingRenderAssetPrimitiveInfo, TSizedDefaultAllocator<32> >* OutStreamingRenderAssets) { NativeCall<void, FStreamingTextureLevelContext*, TArray<FStreamingRenderAssetPrimitiveInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.GetStreamingRenderAssetInfo(FStreamingTextureLevelContext&,TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>>&)", LevelContext, OutStreamingRenderAssets); }
	//void GetStreamingRenderAssetInfoWithNULLRemoval(FStreamingTextureLevelContext* LevelContext, TArray<FStreamingRenderAssetPrimitiveInfo, TSizedDefaultAllocator<32> >* OutStreamingRenderAssets) { NativeCall<void, FStreamingTextureLevelContext*, TArray<FStreamingRenderAssetPrimitiveInfo, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.GetStreamingRenderAssetInfoWithNULLRemoval(FStreamingTextureLevelContext&,TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>>&)", LevelContext, OutStreamingRenderAssets); }
	void GetUsedTextures(TArray<UTexture*, TSizedDefaultAllocator<32> >* OutTextures, EMaterialQualityLevel::Type QualityLevel) { NativeCall<void, TArray<UTexture*, TSizedDefaultAllocator<32> >*, EMaterialQualityLevel::Type>(this, "UPrimitiveComponent.GetUsedTextures(TArray<UTexture*,TSizedDefaultAllocator<32>>&,EMaterialQualityLevel::Type)", OutTextures, QualityLevel); }
	void CreateRenderState_Concurrent(FRegisterComponentContext* Context) { NativeCall<void, FRegisterComponentContext*>(this, "UPrimitiveComponent.CreateRenderState_Concurrent(FRegisterComponentContext*)", Context); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UPrimitiveComponent.SendRenderTransform_Concurrent()"); }
	void OnRegister() { NativeCall<void>(this, "UPrimitiveComponent.OnRegister()"); }
	void OnUnregister() { NativeCall<void>(this, "UPrimitiveComponent.OnUnregister()"); }
	//TStructOnScope<FActorComponentInstanceData, UScriptStruct*>* GetComponentInstanceData(TStructOnScope<FActorComponentInstanceData, UScriptStruct*>* result) { return NativeCall<TStructOnScope<FActorComponentInstanceData, UScriptStruct*>*, TStructOnScope<FActorComponentInstanceData, UScriptStruct*>*>(this, "UPrimitiveComponent.GetComponentInstanceData()", result); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UPrimitiveComponent.OnAttachmentChanged()"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UPrimitiveComponent.DestroyRenderState_Concurrent()"); }
	void OnCreatePhysicsState() { NativeCall<void>(this, "UPrimitiveComponent.OnCreatePhysicsState()"); }
	void EnsurePhysicsStateCreated() { NativeCall<void>(this, "UPrimitiveComponent.EnsurePhysicsStateCreated()"); }
	void MarkChildPrimitiveComponentRenderStateDirty() { NativeCall<void>(this, "UPrimitiveComponent.MarkChildPrimitiveComponentRenderStateDirty()"); }
	//void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport) { NativeCall<void, EUpdateTransformFlags, ETeleportType>(this, "UPrimitiveComponent.OnUpdateTransform(EUpdateTransformFlags,ETeleportType)", UpdateTransformFlags, Teleport); }
	void OnDestroyPhysicsState() { NativeCall<void>(this, "UPrimitiveComponent.OnDestroyPhysicsState()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UPrimitiveComponent.Serialize(FArchive&)", Ar); }
	void ReceiveComponentDamage(float DamageAmount, const FDamageEvent* DamageEvent, AController* EventInstigator, AActor* DamageCauser) { NativeCall<void, float, const FDamageEvent*, AController*, AActor*>(this, "UPrimitiveComponent.ReceiveComponentDamage(float,FDamageEvent&,AController*,AActor*)", DamageAmount, DamageEvent, EventInstigator, DamageCauser); }
	void PostInitProperties() { NativeCall<void>(this, "UPrimitiveComponent.PostInitProperties()"); }
	void PostLoad() { NativeCall<void>(this, "UPrimitiveComponent.PostLoad()"); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UPrimitiveComponent.PostDuplicate(bool)", bDuplicateForPIE); }
	void BeginDestroy() { NativeCall<void>(this, "UPrimitiveComponent.BeginDestroy()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UPrimitiveComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UPrimitiveComponent.IsReadyForFinishDestroy()"); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UPrimitiveComponent.NeedsLoadForClient()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UPrimitiveComponent.NeedsLoadForServer()"); }
	void SetOwnerNoSee(bool bNewOwnerNoSee) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetOwnerNoSee(bool)", bNewOwnerNoSee); }
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetOnlyOwnerSee(bool)", bNewOnlyOwnerSee); }
	bool ShouldComponentAddToScene() { return NativeCall<bool>(this, "UPrimitiveComponent.ShouldComponentAddToScene()"); }
	bool ShouldCreatePhysicsState() { return NativeCall<bool>(this, "UPrimitiveComponent.ShouldCreatePhysicsState()"); }
	bool HasValidPhysicsState() { return NativeCall<bool>(this, "UPrimitiveComponent.HasValidPhysicsState()"); }
	bool ShouldRenderSelected() { return NativeCall<bool>(this, "UPrimitiveComponent.ShouldRenderSelected()"); }
	void SetCastHiddenShadow(bool NewCastHiddenShadow) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetCastHiddenShadow(bool)", NewCastHiddenShadow); }
	void PushSelectionToProxy() { NativeCall<void>(this, "UPrimitiveComponent.PushSelectionToProxy()"); }
	void SetCullDistance(float NewCullDistance) { NativeCall<void, float>(this, "UPrimitiveComponent.SetCullDistance(float)", NewCullDistance); }
	bool IsWorldGeometry() { return NativeCall<bool>(this, "UPrimitiveComponent.IsWorldGeometry()"); }
	ECollisionChannel GetCollisionObjectType() { return NativeCall<ECollisionChannel>(this, "UPrimitiveComponent.GetCollisionObjectType()"); }
	UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int ElementIndex) { return NativeCall<UMaterialInstanceDynamic*, int>(this, "UPrimitiveComponent.CreateAndSetMaterialInstanceDynamic(int)", ElementIndex); }
	UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, UMaterialInterface* Parent) { return NativeCall<UMaterialInstanceDynamic*, int, UMaterialInterface*>(this, "UPrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial(int,UMaterialInterface*)", ElementIndex, Parent); }
	UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName) { return NativeCall<UMaterialInstanceDynamic*, int, UMaterialInterface*, FName>(this, "UPrimitiveComponent.CreateDynamicMaterialInstance(int,UMaterialInterface*,FName)", ElementIndex, SourceMaterial, OptionalName); }
	int GetCustomPrimitiveDataIndexForScalarParameter(FName ParameterName) { return NativeCall<int, FName>(this, "UPrimitiveComponent.GetCustomPrimitiveDataIndexForScalarParameter(FName)", ParameterName); }
	int GetCustomPrimitiveDataIndexForVectorParameter(FName ParameterName) { return NativeCall<int, FName>(this, "UPrimitiveComponent.GetCustomPrimitiveDataIndexForVectorParameter(FName)", ParameterName); }
	void SetCustomPrimitiveDataFloat(int DataIndex, float Value) { NativeCall<void, int, float>(this, "UPrimitiveComponent.SetCustomPrimitiveDataFloat(int,float)", DataIndex, Value); }
	UMaterialInterface* GetMaterialFromCollisionFaceIndex(int FaceIndex, int* SectionIndex) { return NativeCall<UMaterialInterface*, int, int*>(this, "UPrimitiveComponent.GetMaterialFromCollisionFaceIndex(int,int&)", FaceIndex, SectionIndex); }
	void InitSweepCollisionParams(FCollisionQueryParams* OutParams, FCollisionResponseParams* OutResponseParam) { NativeCall<void, FCollisionQueryParams*, FCollisionResponseParams*>(this, "UPrimitiveComponent.InitSweepCollisionParams(FCollisionQueryParams&,FCollisionResponseParams&)", OutParams, OutResponseParam); }
	//FCollisionShape* GetCollisionShape(FCollisionShape* result, float Inflation) { return NativeCall<FCollisionShape*, FCollisionShape*, float>(this, "UPrimitiveComponent.GetCollisionShape(float)", result, Inflation); }
	//bool MoveComponentImpl(const UE::Math::TVector<double>* Delta, const UE::Math::TQuat<double>* NewRotationQuat, bool bSweep, FHitResult* OutHit, EMoveComponentFlags MoveFlags, ETeleportType Teleport) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, bool, FHitResult*, EMoveComponentFlags, ETeleportType>(this, "UPrimitiveComponent.MoveComponentImpl(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,bool,FHitResult*,EMoveComponentFlags,ETeleportType)", Delta, NewRotationQuat, bSweep, OutHit, MoveFlags, Teleport); }
	void DispatchBlockingHit(AActor* Owner, const FHitResult* BlockingHit) { NativeCall<void, AActor*, const FHitResult*>(this, "UPrimitiveComponent.DispatchBlockingHit(AActor&,FHitResult&)", Owner, BlockingHit); }
	void DispatchWakeEvents(ESleepEvent WakeEvent, FName BoneName) { NativeCall<void, ESleepEvent, FName>(this, "UPrimitiveComponent.DispatchWakeEvents(ESleepEvent,FName)", WakeEvent, BoneName); }
	//void GetNavigationData(FNavigationRelevantData* OutData) { NativeCall<void, FNavigationRelevantData*>(this, "UPrimitiveComponent.GetNavigationData(FNavigationRelevantData&)", OutData); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UPrimitiveComponent.IsNavigationRelevant()"); }
	bool LineTraceComponent(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const FCollisionQueryParams* Params) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const FCollisionQueryParams*>(this, "UPrimitiveComponent.LineTraceComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,FCollisionQueryParams&)", OutHit, Start, End, Params); }
	bool SweepComponent(FHitResult* OutHit, const UE::Math::TVector<double>* Start, const UE::Math::TVector<double>* End, const UE::Math::TQuat<double>* ShapeWorldRotation, const FCollisionShape* CollisionShape, bool bTraceComplex) { return NativeCall<bool, FHitResult*, const UE::Math::TVector<double>*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, const FCollisionShape*, bool>(this, "UPrimitiveComponent.SweepComponent(FHitResult&,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TQuat<double>&,FCollisionShape&,bool)", OutHit, Start, End, ShapeWorldRotation, CollisionShape, bTraceComplex); }
	char ComponentOverlapComponentImpl(UPrimitiveComponent* PrimComp, const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Quat) { return NativeCall<char, UPrimitiveComponent*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*>(this, "UPrimitiveComponent.ComponentOverlapComponentImpl(UPrimitiveComponent*,UE::Math::TVector<double>,UE::Math::TQuat<double>&,FCollisionQueryParams&)", PrimComp, Pos, Quat); }
	//bool OverlapComponent(const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Rot, const FCollisionShape* CollisionShape) { return NativeCall<bool, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, const FCollisionShape*>(this, "UPrimitiveComponent.OverlapComponent(UE::Math::TVector<double>&,UE::Math::TQuat<double>&,FCollisionShape&)", Pos, Rot, CollisionShape); }
	//bool ComputePenetration(FMTDResult* OutMTD, const FCollisionShape* CollisionShape, const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Rot) { return NativeCall<bool, FMTDResult*, const FCollisionShape*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*>(this, "UPrimitiveComponent.ComputePenetration(FMTDResult&,FCollisionShape&,UE::Math::TVector<double>&,UE::Math::TQuat<double>&)", OutMTD, CollisionShape, Pos, Rot); }
	bool IsOverlappingActor(const AActor* Other) { return NativeCall<bool, const AActor*>(this, "UPrimitiveComponent.IsOverlappingActor(AActor*)", Other); }
	void BeginComponentOverlap(const FOverlapInfo* OtherOverlap, bool bDoNotifies) { NativeCall<void, const FOverlapInfo*, bool>(this, "UPrimitiveComponent.BeginComponentOverlap(FOverlapInfo&,bool)", OtherOverlap, bDoNotifies); }
	void EndComponentOverlap(const FOverlapInfo* OtherOverlap, bool bDoNotifies, bool bSkipNotifySelf) { NativeCall<void, const FOverlapInfo*, bool, bool>(this, "UPrimitiveComponent.EndComponentOverlap(FOverlapInfo&,bool,bool)", OtherOverlap, bDoNotifies, bSkipNotifySelf); }
	void GetOverlappingActors(TArray<AActor*, TSizedDefaultAllocator<32> >* OutOverlappingActors, TSubclassOf<AActor> ClassFilter) { NativeCall<void, TArray<AActor*, TSizedDefaultAllocator<32> >*, TSubclassOf<AActor>*>(this, "UPrimitiveComponent.GetOverlappingActors(TArray<AActor*,TSizedDefaultAllocator<32>>&,TSubclassOf<AActor>)", OutOverlappingActors, &ClassFilter); }
	void GetOverlappingActors(TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>* OutOverlappingActors, TSubclassOf<AActor> ClassFilter) { NativeCall<void, TSet<AActor*, DefaultKeyFuncs<AActor*, 0>, FDefaultSetAllocator>*, TSubclassOf<AActor>>(this, "UPrimitiveComponent.GetOverlappingActors(TSet<AActor*,DefaultKeyFuncs<AActor*,0>,FDefaultSetAllocator>&,TSubclassOf<AActor>)", OutOverlappingActors, ClassFilter); }
	void GetOverlappingComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* OutOverlappingComponents) { NativeCall<void, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.GetOverlappingComponents(TArray<UPrimitiveComponent*,TSizedDefaultAllocator<32>>&)", OutOverlappingComponents); }
	void GetOverlappingComponents(TSet<UPrimitiveComponent*, DefaultKeyFuncs<UPrimitiveComponent*, 0>, FDefaultSetAllocator>* OutOverlappingComponents) { NativeCall<void, TSet<UPrimitiveComponent*, DefaultKeyFuncs<UPrimitiveComponent*, 0>, FDefaultSetAllocator>*>(this, "UPrimitiveComponent.GetOverlappingComponents(TSet<UPrimitiveComponent*,DefaultKeyFuncs<UPrimitiveComponent*,0>,FDefaultSetAllocator>&)", OutOverlappingComponents); }
	bool AreAllCollideableDescendantsRelative(bool bAllowCachedValue) { return NativeCall<bool, bool>(this, "UPrimitiveComponent.AreAllCollideableDescendantsRelative(bool)", bAllowCachedValue); }
	void BeginPlay() { NativeCall<void>(this, "UPrimitiveComponent.BeginPlay()"); }
	void IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore) { NativeCall<void, AActor*, bool>(this, "UPrimitiveComponent.IgnoreActorWhenMoving(AActor*,bool)", Actor, bShouldIgnore); }
	bool UpdateOverlapsImpl(const TArrayView<FOverlapInfo const, int>* NewPendingOverlaps, bool bDoNotifies, const TArrayView<FOverlapInfo const, int>* OverlapsAtEndLocation) { return NativeCall<bool, const TArrayView<FOverlapInfo const, int>*, bool, const TArrayView<FOverlapInfo const, int>*>(this, "UPrimitiveComponent.UpdateOverlapsImpl(TArrayView<FOverlapInfo,int>*,bool,TArrayView<FOverlapInfo,int>*)", NewPendingOverlaps, bDoNotifies, OverlapsAtEndLocation); }
	void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetGenerateOverlapEvents(bool)", bInGenerateOverlapEvents); }
	void OnGenerateOverlapEventsChanged() { NativeCall<void>(this, "UPrimitiveComponent.OnGenerateOverlapEventsChanged()"); }
	void ClearComponentOverlaps(bool bDoNotifies, bool bSkipNotifySelf) { NativeCall<void, bool, bool>(this, "UPrimitiveComponent.ClearComponentOverlaps(bool,bool)", bDoNotifies, bSkipNotifySelf); }
	//bool ComponentOverlapMultiImpl(TArray<FOverlapResult, TSizedDefaultAllocator<32> >* OutOverlaps, const UWorld* World, const UE::Math::TVector<double>* Pos, const UE::Math::TQuat<double>* Quat, ECollisionChannel TestChannel, const FComponentQueryParams* Params, const FCollisionObjectQueryParams* ObjectQueryParams) { return NativeCall<bool, TArray<FOverlapResult, TSizedDefaultAllocator<32> >*, const UWorld*, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*, ECollisionChannel, const FComponentQueryParams*, const FCollisionObjectQueryParams*>(this, "UPrimitiveComponent.ComponentOverlapMultiImpl(TArray<FOverlapResult,TSizedDefaultAllocator<32>>&,UWorld*,UE::Math::TVector<double>&,UE::Math::TQuat<double>&,ECollisionChannel,FComponentQueryParams&,FCollisionObjectQueryParams&)", OutOverlaps, World, Pos, Quat, TestChannel, Params, ObjectQueryParams); }
	void UpdatePhysicsVolume(bool bTriggerNotifiers) { NativeCall<void, bool>(this, "UPrimitiveComponent.UpdatePhysicsVolume(bool)", bTriggerNotifiers); }
	static void DispatchMouseOverEvents(UPrimitiveComponent* CurrentComponent, UPrimitiveComponent* NewComponent) { NativeCall<void, UPrimitiveComponent*, UPrimitiveComponent*>(nullptr, "UPrimitiveComponent.DispatchMouseOverEvents(UPrimitiveComponent*,UPrimitiveComponent*)", CurrentComponent, NewComponent); }
	static void DispatchTouchOverEvents(FTouchId TouchId, APlayerController* Controller, const FHitResult& HitResult, UPrimitiveComponent* CurrentComponent, UPrimitiveComponent* NewComponent) { NativeCall<void, FTouchId, APlayerController*, const FHitResult&, UPrimitiveComponent*, UPrimitiveComponent*>(nullptr, "UPrimitiveComponent.DispatchTouchOverEvents(FTouchId,APlayerController*const,FHitResult&,UPrimitiveComponent*const,UPrimitiveComponent*const)", TouchId, Controller, HitResult, CurrentComponent, NewComponent); }
	void DispatchOnClicked(FKey* ButtonPressed) { NativeCall<void, FKey*>(this, "UPrimitiveComponent.DispatchOnClicked(FKey)", ButtonPressed); }
	void DispatchOnReleased(FKey* ButtonReleased) { NativeCall<void, FKey*>(this, "UPrimitiveComponent.DispatchOnReleased(FKey)", ButtonReleased); }
	void GetResourceSizeEx(FResourceSizeEx* CumulativeResourceSize) { NativeCall<void, FResourceSizeEx*>(this, "UPrimitiveComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void SetCustomDepthStencilValue(int Value) { NativeCall<void, int>(this, "UPrimitiveComponent.SetCustomDepthStencilValue(int)", Value); }
	bool CanCharacterStepUp(APawn* Pawn) { return NativeCall<bool, APawn*>(this, "UPrimitiveComponent.CanCharacterStepUp(APawn*)", Pawn); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "UPrimitiveComponent.CanEditSimulatePhysics()"); }
	bool WasRecentlyRendered(float Tolerance) { return NativeCall<bool, float>(this, "UPrimitiveComponent.WasRecentlyRendered(float)", Tolerance); }
	//void SetupPrecachePSOParams(FPSOPrecacheParams* Params) { NativeCall<void, FPSOPrecacheParams*>(this, "UPrimitiveComponent.SetupPrecachePSOParams(FPSOPrecacheParams&)", Params); }
//     bool IsPSOPrecaching() { return NativeCall<bool>(this, "UPrimitiveComponent.IsPSOPrecaching()"); }
// FUNCTION MISSING: UPrimitiveComponent.IsPSOPrecaching()
	void GetCollisionResponseSet(FCollisionResponseSet* OutCollision) { NativeCall<void, FCollisionResponseSet*>(this, "UPrimitiveComponent.GetCollisionResponseSet(FCollisionResponseSet&)", OutCollision); }
	//bool ConvertRotationOverlapsToCurrentOverlaps<class TSizedInlineAllocator<3, 32, class TSizedDefaultAllocator<32>>>(TArray<FOverlapInfo, TSizedInlineAllocator<3, 32, TSizedDefaultAllocator<32> > >* OutOverlapsAtEndLocation, const TArrayView<FOverlapInfo const, int>* CurrentOverlaps) { return NativeCall<bool, TArray<FOverlapInfo, TSizedInlineAllocator<3, 32, TSizedDefaultAllocator<32> > >*, const TArrayView<FOverlapInfo const, int>*>(this, "UPrimitiveComponent.ConvertRotationOverlapsToCurrentOverlaps<class TSizedInlineAllocator<3,32,class TSizedDefaultAllocator<32>>>(TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>>>&,TArrayView<FOverlapInfo,int>&)", OutOverlapsAtEndLocation, CurrentOverlaps); }
	//bool ConvertSweptOverlapsToCurrentOverlaps<class TSizedInlineAllocator<3, 32, class TSizedDefaultAllocator<32>>>(TArray<FOverlapInfo, TSizedInlineAllocator<3, 32, TSizedDefaultAllocator<32> > >* OverlapsAtEndLocation, const TArrayView<FOverlapInfo const, int>* SweptOverlaps, int SweptOverlapsIndex, const UE::Math::TVector<double>* EndLocation, const UE::Math::TQuat<double>* EndRotationQuat) { return NativeCall<bool, TArray<FOverlapInfo, TSizedInlineAllocator<3, 32, TSizedDefaultAllocator<32> > >*, const TArrayView<FOverlapInfo const, int>*, int, const UE::Math::TVector<double>*, const UE::Math::TQuat<double>*>(this, "UPrimitiveComponent.ConvertSweptOverlapsToCurrentOverlaps<class TSizedInlineAllocator<3,32,class TSizedDefaultAllocator<32>>>(TArray<FOverlapInfo,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>>>&,TArrayView<FOverlapInfo,int>&,int,UE::Math::TVector<double>&,UE::Math::TQuat<double>&)", OverlapsAtEndLocation, SweptOverlaps, SweptOverlapsIndex, EndLocation, EndRotationQuat); }
	void SetWalkableSlopeOverride(const FWalkableSlopeOverride* NewOverride) { NativeCall<void, const FWalkableSlopeOverride*>(this, "UPrimitiveComponent.SetWalkableSlopeOverride(FWalkableSlopeOverride&)", NewOverride); }
	void SetSimulatePhysics(bool bSimulate) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetSimulatePhysics(bool)", bSimulate); }
	void SetConstraintMode(EDOFMode::Type ConstraintMode) { NativeCall<void, EDOFMode::Type>(this, "UPrimitiveComponent.SetConstraintMode(EDOFMode::Type)", ConstraintMode); }
	void AddImpulse(UE::Math::TVector<double>* Impulse, FName BoneName, bool bVelChange) { NativeCall<void, UE::Math::TVector<double>*, FName, bool>(this, "UPrimitiveComponent.AddImpulse(UE::Math::TVector<double>,FName,bool)", Impulse, BoneName, bVelChange); }
	void AddAngularImpulseInRadians(UE::Math::TVector<double>* Impulse, FName BoneName, bool bVelChange) { NativeCall<void, UE::Math::TVector<double>*, FName, bool>(this, "UPrimitiveComponent.AddAngularImpulseInRadians(UE::Math::TVector<double>,FName,bool)", Impulse, BoneName, bVelChange); }
	void AddImpulseAtLocation(UE::Math::TVector<double>* Impulse, UE::Math::TVector<double>* Location, FName BoneName) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.AddImpulseAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", Impulse, Location, BoneName); }
	void AddVelocityChangeImpulseAtLocation(UE::Math::TVector<double>* Impulse, UE::Math::TVector<double>* Location, FName BoneName) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.AddVelocityChangeImpulseAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", Impulse, Location, BoneName); }
	void AddRadialImpulse(UE::Math::TVector<double>* Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange) { NativeCall<void, UE::Math::TVector<double>*, float, float, ERadialImpulseFalloff, bool>(this, "UPrimitiveComponent.AddRadialImpulse(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,bool)", Origin, Radius, Strength, Falloff, bVelChange); }
	void AddForce(UE::Math::TVector<double>* Force, FName BoneName, bool bAccelChange) { NativeCall<void, UE::Math::TVector<double>*, FName, bool>(this, "UPrimitiveComponent.AddForce(UE::Math::TVector<double>,FName,bool)", Force, BoneName, bAccelChange); }
	void AddForceAtLocation(UE::Math::TVector<double>* Force, UE::Math::TVector<double>* Location, FName BoneName) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.AddForceAtLocation(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", Force, Location, BoneName); }
	void AddForceAtLocationLocal(UE::Math::TVector<double>* Force, UE::Math::TVector<double>* Location, FName BoneName) { NativeCall<void, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.AddForceAtLocationLocal(UE::Math::TVector<double>,UE::Math::TVector<double>,FName)", Force, Location, BoneName); }
	void AddRadialForce(UE::Math::TVector<double>* Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bAccelChange) { NativeCall<void, UE::Math::TVector<double>*, float, float, ERadialImpulseFalloff, bool>(this, "UPrimitiveComponent.AddRadialForce(UE::Math::TVector<double>,float,float,ERadialImpulseFalloff,bool)", Origin, Radius, Strength, Falloff, bAccelChange); }
	void AddTorqueInRadians(UE::Math::TVector<double>* Torque, FName BoneName, bool bAccelChange) { NativeCall<void, UE::Math::TVector<double>*, FName, bool>(this, "UPrimitiveComponent.AddTorqueInRadians(UE::Math::TVector<double>,FName,bool)", Torque, BoneName, bAccelChange); }
	void SetPhysicsLinearVelocity(UE::Math::TVector<double>* NewVel, __int64 bAddToCurrent, FName BoneName) { NativeCall<void, UE::Math::TVector<double>*, __int64, FName>(this, "UPrimitiveComponent.SetPhysicsLinearVelocity(UE::Math::TVector<double>,bool,FName)", NewVel, bAddToCurrent, BoneName); }
	void SetAllPhysicsLinearVelocity(UE::Math::TVector<double>* NewVel, __int64 bAddToCurrent) { NativeCall<void, UE::Math::TVector<double>*, __int64>(this, "UPrimitiveComponent.SetAllPhysicsLinearVelocity(UE::Math::TVector<double>,bool)", NewVel, bAddToCurrent); }
	void SetPhysicsAngularVelocityInRadians(UE::Math::TVector<double>* NewAngVel, __int64 bAddToCurrent, FName BoneName) { NativeCall<void, UE::Math::TVector<double>*, __int64, FName>(this, "UPrimitiveComponent.SetPhysicsAngularVelocityInRadians(UE::Math::TVector<double>,bool,FName)", NewAngVel, bAddToCurrent, BoneName); }
	void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName) { NativeCall<void, float, bool, FName>(this, "UPrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians(float,bool,FName)", NewMaxAngVel, bAddToCurrent, BoneName); }
	void SetAllPhysicsAngularVelocityInRadians(const UE::Math::TVector<double>* NewAngVel, bool bAddToCurrent) { NativeCall<void, const UE::Math::TVector<double>*, bool>(this, "UPrimitiveComponent.SetAllPhysicsAngularVelocityInRadians(UE::Math::TVector<double>&,bool)", NewAngVel, bAddToCurrent); }
	void SetAllPhysicsPosition(UE::Math::TVector<double>* NewPos) { NativeCall<void, UE::Math::TVector<double>*>(this, "UPrimitiveComponent.SetAllPhysicsPosition(UE::Math::TVector<double>)", NewPos); }
	void SetAllPhysicsRotation(UE::Math::TRotator<double>* NewRot) { NativeCall<void, UE::Math::TRotator<double>*>(this, "UPrimitiveComponent.SetAllPhysicsRotation(UE::Math::TRotator<double>)", NewRot); }
	void SetAllPhysicsRotation(const UE::Math::TQuat<double>* NewRot) { NativeCall<void, const UE::Math::TQuat<double>*>(this, "UPrimitiveComponent.SetAllPhysicsRotation(UE::Math::TQuat<double>&)", NewRot); }
	void WakeRigidBody(FName BoneName) { NativeCall<void, FName>(this, "UPrimitiveComponent.WakeRigidBody(FName)", BoneName); }
	void WakeAllRigidBodies() { NativeCall<void>(this, "UPrimitiveComponent.WakeAllRigidBodies()"); }
	void SetEnableGravity(bool bGravityEnabled) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetEnableGravity(bool)", bGravityEnabled); }
	bool IsGravityEnabled() { return NativeCall<bool>(this, "UPrimitiveComponent.IsGravityEnabled()"); }
	void SetLinearDamping(float InDamping) { NativeCall<void, float>(this, "UPrimitiveComponent.SetLinearDamping(float)", InDamping); }
	float GetLinearDamping() { return NativeCall<float>(this, "UPrimitiveComponent.GetLinearDamping()"); }
	void SetAngularDamping(float InDamping) { NativeCall<void, float>(this, "UPrimitiveComponent.SetAngularDamping(float)", InDamping); }
	float GetAngularDamping() { return NativeCall<float>(this, "UPrimitiveComponent.GetAngularDamping()"); }
	void SetMassScale(FName BoneName, float InMassScale) { NativeCall<void, FName, float>(this, "UPrimitiveComponent.SetMassScale(FName,float)", BoneName, InMassScale); }
	float GetMassScale(FName BoneName) { return NativeCall<float, FName>(this, "UPrimitiveComponent.GetMassScale(FName)", BoneName); }
	void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass) { NativeCall<void, FName, float, bool>(this, "UPrimitiveComponent.SetMassOverrideInKg(FName,float,bool)", BoneName, MassInKg, bOverrideMass); }
	float GetMass() { return NativeCall<float>(this, "UPrimitiveComponent.GetMass()"); }
	float CalculateMass(FName __formal) { return NativeCall<float, FName>(this, "UPrimitiveComponent.CalculateMass(FName)", __formal); }
	void SetUseCCD(bool bInUseCCD, FName BoneName) { NativeCall<void, bool, FName>(this, "UPrimitiveComponent.SetUseCCD(bool,FName)", bInUseCCD, BoneName); }
	void SetAllUseCCD(bool bInUseCCD) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetAllUseCCD(bool)", bInUseCCD); }
	void PutRigidBodyToSleep(FName BoneName) { NativeCall<void, FName>(this, "UPrimitiveComponent.PutRigidBodyToSleep(FName)", BoneName); }
	void PutAllRigidBodiesToSleep() { NativeCall<void>(this, "UPrimitiveComponent.PutAllRigidBodiesToSleep()"); }
	bool RigidBodyIsAwake(FName BoneName) { return NativeCall<bool, FName>(this, "UPrimitiveComponent.RigidBodyIsAwake(FName)", BoneName); }
	bool IsAnyRigidBodyAwake() { return NativeCall<bool>(this, "UPrimitiveComponent.IsAnyRigidBodyAwake()"); }
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetNotifyRigidBodyCollision(bool)", bNewNotifyRigidBodyCollision); }
	void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial) { NativeCall<void, UPhysicalMaterial*>(this, "UPrimitiveComponent.SetPhysMaterialOverride(UPhysicalMaterial*)", NewPhysMaterial); }
	void SyncComponentToRBPhysics() { NativeCall<void>(this, "UPrimitiveComponent.SyncComponentToRBPhysics()"); }
	void GetWeldedBodies(TArray<FBodyInstance*, TSizedDefaultAllocator<32> >* OutWeldedBodies, TArray<FName, TSizedDefaultAllocator<32> >* OutLabels, bool bIncludingAutoWeld) { NativeCall<void, TArray<FBodyInstance*, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*, bool>(this, "UPrimitiveComponent.GetWeldedBodies(TArray<FBodyInstance*,TSizedDefaultAllocator<32>>&,TArray<FName,TSizedDefaultAllocator<32>>&,bool)", OutWeldedBodies, OutLabels, bIncludingAutoWeld); }
	bool WeldToImplementation(USceneComponent* InParent, FName ParentSocketName, bool bWeldSimulatedChild) { return NativeCall<bool, USceneComponent*, FName, bool>(this, "UPrimitiveComponent.WeldToImplementation(USceneComponent*,FName,bool,bool)", InParent, ParentSocketName, bWeldSimulatedChild); }
	void WeldTo(USceneComponent* InParent, FName InSocketName) { NativeCall<void, USceneComponent*, FName>(this, "UPrimitiveComponent.WeldTo(USceneComponent*,FName,bool)", InParent, InSocketName); }
	void UnWeldFromParent() { NativeCall<void>(this, "UPrimitiveComponent.UnWeldFromParent()"); }
	void UnWeldChildren() { NativeCall<void>(this, "UPrimitiveComponent.UnWeldChildren()"); }
	FBodyInstance* GetBodyInstance(FName BoneName, bool bGetWelded, int Index) { return NativeCall<FBodyInstance*, FName, bool, int>(this, "UPrimitiveComponent.GetBodyInstance(FName,bool,int)", BoneName, bGetWelded, Index); }
	bool GetSquaredDistanceToCollision(const UE::Math::TVector<double>* Point, float* OutSquaredDistance, UE::Math::TVector<double>* OutClosestPointOnCollision) { return NativeCall<bool, const UE::Math::TVector<double>*, float*, UE::Math::TVector<double>*>(this, "UPrimitiveComponent.GetSquaredDistanceToCollision(UE::Math::TVector<double>&,float&,UE::Math::TVector<double>&)", Point, OutSquaredDistance, OutClosestPointOnCollision); }
	float GetClosestPointOnCollision(const UE::Math::TVector<double>* Point, UE::Math::TVector<double>* OutPointOnBody, FName BoneName) { return NativeCall<float, const UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.GetClosestPointOnCollision(UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName)", Point, OutPointOnBody, BoneName); }
	bool IsSimulatingPhysics(FName BoneName) { return NativeCall<bool, FName>(this, "UPrimitiveComponent.IsSimulatingPhysics(FName)", BoneName); }
	void SetCollisionObjectType(ECollisionChannel Channel) { NativeCall<void, ECollisionChannel>(this, "UPrimitiveComponent.SetCollisionObjectType(ECollisionChannel)", Channel); }
	void SetCollisionResponseToChannelEx(ECollisionChannel Channel, ECollisionResponse NewResponse, bool updateOverlaps) { NativeCall<void, ECollisionChannel, ECollisionResponse, bool>(this, "UPrimitiveComponent.SetCollisionResponseToChannelEx(ECollisionChannel,ECollisionResponse,bool)", Channel, NewResponse, updateOverlaps); }
	//void SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse) { NativeCall<void, ECollisionChannel, ECollisionResponse>(this, "UPrimitiveComponent.SetCollisionResponseToChannel(ECollisionChannel,ECollisionResponse)", Channel, NewResponse); }
	//void SetCollisionResponseToAllChannels(ECollisionResponse NewResponse) { NativeCall<void, ECollisionResponse>(this, "UPrimitiveComponent.SetCollisionResponseToAllChannels(ECollisionResponse)", NewResponse); }
	//void SetCollisionResponseToChannels(const FCollisionResponseContainer* NewReponses) { NativeCall<void, const FCollisionResponseContainer*>(this, "UPrimitiveComponent.SetCollisionResponseToChannels(FCollisionResponseContainer&)", NewReponses); }
	void SetCollisionEnabled(ECollisionEnabled::Type NewType) { NativeCall<void, ECollisionEnabled::Type>(this, "UPrimitiveComponent.SetCollisionEnabled(ECollisionEnabled::Type)", NewType); }
	void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps) { NativeCall<void, FName, bool>(this, "UPrimitiveComponent.SetCollisionProfileName(FName,bool)", InCollisionProfileName, bUpdateOverlaps); }
	void OnActorEnableCollisionChanged() { NativeCall<void>(this, "UPrimitiveComponent.OnActorEnableCollisionChanged()"); }
	void OnComponentCollisionSettingsChanged(bool bUpdateOverlaps) { NativeCall<void, bool>(this, "UPrimitiveComponent.OnComponentCollisionSettingsChanged(bool)", bUpdateOverlaps); }
	__int64 K2_LineTraceComponent(UE::Math::TVector<double>* TraceStart, UE::Math::TVector<double>* TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, UE::Math::TVector<double>* HitLocation, UE::Math::TVector<double>* HitNormal, FName* BoneName, FHitResult* OutHit) { return NativeCall<__int64, UE::Math::TVector<double>*, UE::Math::TVector<double>*, bool, bool, bool, UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName*, FHitResult*>(this, "UPrimitiveComponent.K2_LineTraceComponent(UE::Math::TVector<double>,UE::Math::TVector<double>,bool,bool,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName&,FHitResult&)", TraceStart, TraceEnd, bTraceComplex, bShowTrace, bPersistentShowTrace, HitLocation, HitNormal, BoneName, OutHit); }
	ECollisionResponse GetCollisionResponseToChannel(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "UPrimitiveComponent.GetCollisionResponseToChannel(ECollisionChannel)", Channel); }
	//const FCollisionResponseContainer* GetCollisionResponseToChannels() { return NativeCall<const FCollisionResponseContainer*>(this, "UPrimitiveComponent.GetCollisionResponseToChannels()"); }
	void UpdatePhysicsToRBChannels() { NativeCall<void>(this, "UPrimitiveComponent.UpdatePhysicsToRBChannels()"); }
	void SetInternalOctreeMask(int InOctreeMask, bool bReregisterWithTree, bool bForceReregisterWithTree) { NativeCall<void, int, bool, bool>(this, "UPrimitiveComponent.SetInternalOctreeMask(int,bool,bool)", InOctreeMask, bReregisterWithTree, bForceReregisterWithTree); }

	FActorPrimitiveComponentInterface& PrimitiveComponentInterfaceField() { return *GetNativePointerField<FActorPrimitiveComponentInterface*>(this, "UPrimitiveComponent.PrimitiveComponentInterface"); }
	EHLODBatchingPolicy& HLODBatchingPolicyField() { return *GetNativePointerField<EHLODBatchingPolicy*>(this, "UPrimitiveComponent.HLODBatchingPolicy"); }
	EShadowCacheInvalidationBehavior& ShadowCacheInvalidationBehaviorField() { return *GetNativePointerField<EShadowCacheInvalidationBehavior*>(this, "UPrimitiveComponent.ShadowCacheInvalidationBehavior"); }
	TEnumAsByte<EHasCustomNavigableGeometry::Type>& bHasCustomNavigableGeometryField() { return *GetNativePointerField<TEnumAsByte<EHasCustomNavigableGeometry::Type>*>(this, "UPrimitiveComponent.bHasCustomNavigableGeometry"); }
	FLightingChannels& LightingChannelsField() { return *GetNativePointerField<FLightingChannels*>(this, "UPrimitiveComponent.LightingChannels"); }
	ERendererStencilMask& CustomDepthStencilWriteMaskField() { return *GetNativePointerField<ERendererStencilMask*>(this, "UPrimitiveComponent.CustomDepthStencilWriteMask"); }
	unsigned char& ExcludeFromHLODLevelsField() { return *GetNativePointerField<unsigned char*>(this, "UPrimitiveComponent.ExcludeFromHLODLevels"); }
	FCustomPrimitiveData& CustomPrimitiveDataField() { return *GetNativePointerField<FCustomPrimitiveData*>(this, "UPrimitiveComponent.CustomPrimitiveData"); }
	FCustomPrimitiveData& CustomPrimitiveDataInternalField() { return *GetNativePointerField<FCustomPrimitiveData*>(this, "UPrimitiveComponent.CustomPrimitiveDataInternal"); }
	FPhysScene_Chaos*& DeferredCreatePhysicsStateSceneField() { return *GetNativePointerField<FPhysScene_Chaos**>(this, "UPrimitiveComponent.DeferredCreatePhysicsStateScene"); }
	FPSOPrecacheComponentData& PSOPrecacheComponentDataField() { return *GetNativePointerField<FPSOPrecacheComponentData*>(this, "UPrimitiveComponent.PSOPrecacheComponentData"); }
	FPrimitiveSceneInfoData& SceneDataField() { return *GetNativePointerField<FPrimitiveSceneInfoData*>(this, "UPrimitiveComponent.SceneData"); }
	FComponentHitSignature& OnComponentHitField() { return *GetNativePointerField<FComponentHitSignature*>(this, "UPrimitiveComponent.OnComponentHit"); }
	FComponentEndOverlapSignature& OnComponentEndOverlapField() { return *GetNativePointerField<FComponentEndOverlapSignature*>(this, "UPrimitiveComponent.OnComponentEndOverlap"); }
	FComponentWakeSignature& OnComponentWakeField() { return *GetNativePointerField<FComponentWakeSignature*>(this, "UPrimitiveComponent.OnComponentWake"); }
	FComponentSleepSignature& OnComponentSleepField() { return *GetNativePointerField<FComponentSleepSignature*>(this, "UPrimitiveComponent.OnComponentSleep"); }
	FComponentCollisionSettingsChangedSignature& OnComponentCollisionSettingsChangedEventField() { return *GetNativePointerField<FComponentCollisionSettingsChangedSignature*>(this, "UPrimitiveComponent.OnComponentCollisionSettingsChangedEvent"); }
	FComponentPhysicsStateChanged& OnComponentPhysicsStateChangedField() { return *GetNativePointerField<FComponentPhysicsStateChanged*>(this, "UPrimitiveComponent.OnComponentPhysicsStateChanged"); }
	FPrimalComponentPhysicsStatePreChange& OnPrimalComponentPhysicsStatePreChangeField() { return *GetNativePointerField<FPrimalComponentPhysicsStatePreChange*>(this, "UPrimitiveComponent.OnPrimalComponentPhysicsStatePreChange"); }
	FComponentOnTouchBeganSignature& OnTouchBeganField() { return *GetNativePointerField<FComponentOnTouchBeganSignature*>(this, "UPrimitiveComponent.OnTouchBegan"); }
	FComponentOnTouchEndedSignature& OnTouchEndedField() { return *GetNativePointerField<FComponentOnTouchEndedSignature*>(this, "UPrimitiveComponent.OnTouchEnded"); }
	FComponentOnTouchEnteredSignature& OnTouchEnteredField() { return *GetNativePointerField<FComponentOnTouchEnteredSignature*>(this, "UPrimitiveComponent.OnTouchEntered"); }
	FComponentOnTouchExitedSignature& OnTouchExitedField() { return *GetNativePointerField<FComponentOnTouchExitedSignature*>(this, "UPrimitiveComponent.OnTouchExited"); }
	FPrimitiveSceneProxy*& SceneProxyField() { return *GetNativePointerField<FPrimitiveSceneProxy**>(this, "UPrimitiveComponent.SceneProxy"); }
	FOctreeElementId2& InternalOctreeIdField() { return *GetNativePointerField<FOctreeElementId2*>(this, "UPrimitiveComponent.InternalOctreeId"); }
	BitFieldValue<bool, unsigned char> bBulkReregister() { return { this, "UPrimitiveComponent.bBulkReregister"}; }
	BitFieldValue<bool, unsigned char> bVisibleInReflections() { return { this, "UPrimitiveComponent.bVisibleInReflections"}; }
	BitFieldValue<bool, unsigned char> bWantsEditorEffects() { return { this, "UPrimitiveComponent.bWantsEditorEffects"}; }
	BitFieldValue<bool, unsigned char> bRasterizeAsFilledConvexVolume() { return { this, "UPrimitiveComponent.bRasterizeAsFilledConvexVolume"}; }
	BitFieldValue<bool, unsigned char> bLumenHeightfield() { return { this, "UPrimitiveComponent.bLumenHeightfield"}; }
	BitFieldValue<bool, unsigned char> bUseAsUnfogger() { return { this, "UPrimitiveComponent.bUseAsUnfogger"}; }
	BitFieldValue<bool, unsigned char> bIgnoreBoundsForEditorFocus() { return { this, "UPrimitiveComponent.bIgnoreBoundsForEditorFocus"}; }
	BitFieldValue<bool, unsigned __int32> bPlaceholderBool1() { return { this, "UPrimitiveComponent.bPlaceholderBool1"}; }
	BitFieldValue<bool, unsigned __int32> bRegisterWithMaterialGPUMessageQueue() { return { this, "UPrimitiveComponent.bRegisterWithMaterialGPUMessageQueue"}; }
	UMaterialInterface* GetMaterialByName(FName MaterialSlotName) { return NativeCall<UMaterialInterface*, FName>(this, "UPrimitiveComponent.GetMaterialByName(FName)", MaterialSlotName); }
	void ResetSceneVelocity() { NativeCall<void>(this, "UPrimitiveComponent.ResetSceneVelocity()"); }
	bool IsShown(const FEngineShowFlags& ShowFlags) { return NativeCall<bool, const FEngineShowFlags&>(this, "UPrimitiveComponent.IsShown(FEngineShowFlags&)", ShowFlags); }
	bool UsesOnlyUnlitMaterials() { return NativeCall<bool>(this, "UPrimitiveComponent.UsesOnlyUnlitMaterials()"); }
	UStreamableRenderAsset* GetStreamableNaniteAsset() { return NativeCall<UStreamableRenderAsset*>(this, "UPrimitiveComponent.GetStreamableNaniteAsset()"); }
	void OnAsyncDestroyPhysicsStateEnd_GameThread() { NativeCall<void>(this, "UPrimitiveComponent.OnAsyncDestroyPhysicsStateEnd_GameThread()"); }
	void SetAllUseMACD(bool bInUseMACD) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetAllUseMACD(bool)", bInUseMACD); }
	bool IsWelded() { return NativeCall<bool>(this, "UPrimitiveComponent.IsWelded()"); }
	UE::Math::TVector<double>* GetCenterOfMass(UE::Math::TVector<double>* result, FName BoneName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.GetCenterOfMass(FName)", result, BoneName); }
	void SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse) { NativeCall<void, ECollisionChannel, ECollisionResponse>(this, "UPrimitiveComponent.SetCollisionResponseToChannel(ECollisionChannel,ECollisionResponse)", Channel, NewResponse); }
	void SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material) { NativeCall<void, FName, UMaterialInterface*>(this, "UPrimitiveComponent.SetMaterialByName(FName,UMaterialInterface*)", MaterialSlotName, Material); }
	bool IsComponentIndividuallySelected() { return NativeCall<bool>(this, "UPrimitiveComponent.IsComponentIndividuallySelected()"); }
	void SetCastInsetShadow(bool bInCastInsetShadow) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetCastInsetShadow(bool)", bInCastInsetShadow); }
	void SetupDefaultCustomPrimitiveDataFromMaterials() { NativeCall<void>(this, "UPrimitiveComponent.SetupDefaultCustomPrimitiveDataFromMaterials()"); }
	bool CanSkipGetTextureStreamingRenderAssetInfo() { return NativeCall<bool>(this, "UPrimitiveComponent.CanSkipGetTextureStreamingRenderAssetInfo()"); }
	bool SupportsStaticLighting() { return NativeCall<bool>(this, "UPrimitiveComponent.SupportsStaticLighting()"); }
	void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetLightAttachmentsAsGroup(bool)", bInLightAttachmentsAsGroup); }
	void SetDefaultCustomPrimitiveDataFloat(int DataIndex, float Value) { NativeCall<void, int, float>(this, "UPrimitiveComponent.SetDefaultCustomPrimitiveDataFloat(int,float)", DataIndex, Value); }
	UE::Math::TTransform<double>* GetNavigableGeometryTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "UPrimitiveComponent.GetNavigableGeometryTransform()", result); }
	void GetUsedMaterials(TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >& OutMaterials, bool bGetDebugMaterials) { NativeCall<void, TArray<UMaterialInterface*, TSizedDefaultAllocator<32> >&, bool>(this, "UPrimitiveComponent.GetUsedMaterials(TArray<UMaterialInterface*,TSizedDefaultAllocator<32>>&,bool)", OutMaterials, bGetDebugMaterials); }
	int GetRayTracingGroupId() { return NativeCall<int>(this, "UPrimitiveComponent.GetRayTracingGroupId()"); }
	void SetRigidBodyReplicatedTarget(FRigidBodyState& UpdatedState, FName BoneName, int ServerFrame, int ServerHandle) { NativeCall<void, FRigidBodyState&, FName, int, int>(this, "UPrimitiveComponent.SetRigidBodyReplicatedTarget(FRigidBodyState&,FName,int,int)", UpdatedState, BoneName, ServerFrame, ServerHandle); }
	int GetMaterialIndex(FName MaterialSlotName) { return NativeCall<int, FName>(this, "UPrimitiveComponent.GetMaterialIndex(FName)", MaterialSlotName); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetMaterialSlotNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.GetMaterialSlotNames()", result); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) { return NativeCall<bool, FNavigableGeometryExport&>(this, "UPrimitiveComponent.DoCustomNavigableGeometryExport(FNavigableGeometryExport&)", GeomExport); }
	bool IsCompiling() { return NativeCall<bool>(this, "UPrimitiveComponent.IsCompiling()"); }
	UObject* GetSourceObject() { return NativeCall<UObject*>(this, "UPrimitiveComponent.GetSourceObject()"); }
	void RecreateInstanceBody(int InstanceBodyIndex) { NativeCall<void, int>(this, "UPrimitiveComponent.RecreateInstanceBody(int)", InstanceBodyIndex); }
	ERuntimeVirtualTextureMainPassType GetVirtualTextureRenderPassType() { return NativeCall<ERuntimeVirtualTextureMainPassType>(this, "UPrimitiveComponent.GetVirtualTextureRenderPassType()"); }
	UObject* GetPhysicsOwnerAttachmentRoot() { return NativeCall<UObject*>(this, "UPrimitiveComponent.GetPhysicsOwnerAttachmentRoot()"); }
	float GetDiffuseBoost(int ElementIndex) { return NativeCall<float, int>(this, "UPrimitiveComponent.GetDiffuseBoost(int)", ElementIndex); }
	void SetupPrecachePSOParams(FPSOPrecacheParams& Params) { NativeCall<void, FPSOPrecacheParams&>(this, "UPrimitiveComponent.SetupPrecachePSOParams(FPSOPrecacheParams&)", Params); }
	UPrimitiveComponent* GetLODParentPrimitive() { return NativeCall<UPrimitiveComponent*>(this, "UPrimitiveComponent.GetLODParentPrimitive()"); }
	bool GetGyroscopicTorqueEnabled() { return NativeCall<bool>(this, "UPrimitiveComponent.GetGyroscopicTorqueEnabled()"); }
	float GetStreamingScale() { return NativeCall<float>(this, "UPrimitiveComponent.GetStreamingScale()"); }
	bool HasStaticLighting() { return NativeCall<bool>(this, "UPrimitiveComponent.HasStaticLighting()"); }
	UE::Math::TVector<double>* GetPhysicsLinearVelocity(UE::Math::TVector<double>* result, FName BoneName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.GetPhysicsLinearVelocity(FName)", result, BoneName); }
	void SetUpdateKinematicFromSimulation(bool bUpdateKinematicFromSimulation) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetUpdateKinematicFromSimulation(bool)", bUpdateKinematicFromSimulation); }
	void UnregisterAsFocalPointInPhysicsReplicationLOD() { NativeCall<void>(this, "UPrimitiveComponent.UnregisterAsFocalPointInPhysicsReplicationLOD()"); }
	bool ShouldCheckOverlapFlagToQueueOverlaps(const UPrimitiveComponent& ThisComponent) { return NativeCall<bool, const UPrimitiveComponent&>(this, "UPrimitiveComponent.ShouldCheckOverlapFlagToQueueOverlaps(UPrimitiveComponent&)", ThisComponent); }
	void SetReceivesDecals(bool bNewReceivesDecals) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetReceivesDecals(bool)", bNewReceivesDecals); }
	UE::Math::TVector<double>* GetPhysicsOwnerVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimitiveComponent.GetPhysicsOwnerVelocity()", result); }
	bool IsZeroExtent() { return NativeCall<bool>(this, "UPrimitiveComponent.IsZeroExtent()"); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UPrimitiveComponent._getUObject()"); }
	UE::Math::TVector<double>* GetPhysicsAngularVelocityInRadians(UE::Math::TVector<double>* result, FName BoneName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.GetPhysicsAngularVelocityInRadians(FName)", result, BoneName); }
	const FWalkableSlopeOverride& GetWalkableSlopeOverride() { return NativeCall<const FWalkableSlopeOverride&>(this, "UPrimitiveComponent.GetWalkableSlopeOverride()"); }
	bool IsMultiBodyOverlap() { return NativeCall<bool>(this, "UPrimitiveComponent.IsMultiBodyOverlap()"); }
	void SetAllAllowPartialIslandSleep(bool bInAllowPartialIslandSleep) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetAllAllowPartialIslandSleep(bool)", bInAllowPartialIslandSleep); }
	void ConditionalNotifyStreamingPrimitiveUpdated_Concurrent() { NativeCall<void>(this, "UPrimitiveComponent.ConditionalNotifyStreamingPrimitiveUpdated_Concurrent()"); }
	void OnAsyncCreatePhysicsStateEnd_GameThread() { NativeCall<void>(this, "UPrimitiveComponent.OnAsyncCreatePhysicsStateEnd_GameThread()"); }
	void SetCenterOfMass(UE::Math::TVector<double>* CenterOfMassOffset, FName BoneName) { if (!CenterOfMassOffset) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, FName>(this, "UPrimitiveComponent.SetCenterOfMass(UE::Math::TVector<double>,FName)", *CenterOfMassOffset, BoneName); }
	void RegisterAsFocalPointInPhysicsReplicationLOD() { NativeCall<void>(this, "UPrimitiveComponent.RegisterAsFocalPointInPhysicsReplicationLOD()"); }
	void PostRename(UObject* OldOuter, FName OldName) { NativeCall<void, UObject*, FName>(this, "UPrimitiveComponent.PostRename(UObject*,FName)", OldOuter, OldName); }
	void GetPrimitiveStats(FPrimitiveStats& PrimitiveStats) { NativeCall<void, FPrimitiveStats&>(this, "UPrimitiveComponent.GetPrimitiveStats(FPrimitiveStats&)", PrimitiveStats); }
	bool GetLevelInstanceEditingState() { return NativeCall<bool>(this, "UPrimitiveComponent.GetLevelInstanceEditingState()"); }
	bool IsMaterialSlotNameValid(FName MaterialSlotName) { return NativeCall<bool, FName>(this, "UPrimitiveComponent.IsMaterialSlotNameValid(FName)", MaterialSlotName); }
	bool IsPrimitiveComponent() { return NativeCall<bool>(this, "UPrimitiveComponent.IsPrimitiveComponent()"); }
	bool IsPhysicsOwnerSimulatingPhysics() { return NativeCall<bool>(this, "UPrimitiveComponent.IsPhysicsOwnerSimulatingPhysics()"); }
	void SetMaterial(int Index, UMaterialInterface* InMaterial) { NativeCall<void, int, UMaterialInterface*>(this, "UPrimitiveComponent.SetMaterial(int,UMaterialInterface*)", Index, InMaterial); }
	UBodySetup* GetPhysicsBodySetup() { return NativeCall<UBodySetup*>(this, "UPrimitiveComponent.GetPhysicsBodySetup()"); }
	void SetCastShadow(bool NewCastShadow) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetCastShadow(bool)", NewCastShadow); }
	void IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore) { NativeCall<void, UPrimitiveComponent*, bool>(this, "UPrimitiveComponent.IgnoreComponentWhenMoving(UPrimitiveComponent*,bool)", Component, bShouldIgnore); }
	void SetRenderCustomDepth(bool bValue) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetRenderCustomDepth(bool)", bValue); }
	void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMask) { NativeCall<void, ERendererStencilMask>(this, "UPrimitiveComponent.SetCustomDepthStencilWriteMask(ERendererStencilMask)", WriteMask); }
	static void SetLightmapType_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UPrimitiveComponent.SetLightmapType_WrapperImpl(void*,void*)", Object, InValue); }
	bool DoesSocketExistOnPhysicsOwner(FName InSocketName) { return NativeCall<bool, FName>(this, "UPrimitiveComponent.DoesSocketExistOnPhysicsOwner(FName)", InSocketName); }
	void SetCustomNavigableGeometry(EHasCustomNavigableGeometry::Type InType) { NativeCall<void, EHasCustomNavigableGeometry::Type>(this, "UPrimitiveComponent.SetCustomNavigableGeometry(EHasCustomNavigableGeometry::Type)", InType); }
	void SetAffectIndirectLightingWhileHidden(bool bNewAffectIndirectLightingWhileHidden) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetAffectIndirectLightingWhileHidden(bool)", bNewAffectIndirectLightingWhileHidden); }
	bool ShouldComponentIgnoreHitResult(const FHitResult& TestHit, EMoveComponentFlags MoveFlags) { return NativeCall<bool, const FHitResult&, EMoveComponentFlags>(this, "UPrimitiveComponent.ShouldComponentIgnoreHitResult(FHitResult&,EMoveComponentFlags)", TestHit, MoveFlags); }
	bool GetShadowIndirectOnly() { return NativeCall<bool>(this, "UPrimitiveComponent.GetShadowIndirectOnly()"); }
	void HandlePostMigrationPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange) { NativeCall<void, UPrimitiveComponent*, EComponentPhysicsStateChange>(this, "UPrimitiveComponent.HandlePostMigrationPhysicsStateChanged(UPrimitiveComponent*,EComponentPhysicsStateChange)", ChangedComponent, StateChange); }
	bool IsStaticPhysics() { return NativeCall<bool>(this, "UPrimitiveComponent.IsStaticPhysics()"); }
	UE::Math::TTransform<double>* GetPhysicsOwnerTransform(UE::Math::TTransform<double>* result) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*>(this, "UPrimitiveComponent.GetPhysicsOwnerTransform()", result); }
	void SetAllMassScale(float InMassScale) { NativeCall<void, float>(this, "UPrimitiveComponent.SetAllMassScale(float)", InMassScale); }
	void SetVisibleInRayTracing(bool bNewVisibleInRayTracing) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetVisibleInRayTracing(bool)", bNewVisibleInRayTracing); }
	void SetLODParentPrimitive(UPrimitiveComponent* InLODParentPrimitive) { NativeCall<void, UPrimitiveComponent*>(this, "UPrimitiveComponent.SetLODParentPrimitive(UPrimitiveComponent*)", InLODParentPrimitive); }
	void SetGyroscopicTorqueEnabled(bool bEnable) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetGyroscopicTorqueEnabled(bool)", bEnable); }
	UObject* GetSourceObjectOwner() { return NativeCall<UObject*>(this, "UPrimitiveComponent.GetSourceObjectOwner()"); }
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) { NativeCall<void, bool, bool, bool>(this, "UPrimitiveComponent.SetLightingChannels(bool,bool,bool)", bChannel0, bChannel1, bChannel2); }
	void SetMaxDepenetrationVelocity(FName BoneName, float InMaxDepenetrationVelocity) { NativeCall<void, FName, float>(this, "UPrimitiveComponent.SetMaxDepenetrationVelocity(FName,float)", BoneName, InMaxDepenetrationVelocity); }
	bool GetUpdateKinematicFromSimulation() { return NativeCall<bool>(this, "UPrimitiveComponent.GetUpdateKinematicFromSimulation()"); }
	UE::Math::TVector<double>* GetInertiaTensor(UE::Math::TVector<double>* result, FName BoneName) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, FName>(this, "UPrimitiveComponent.GetInertiaTensor(FName)", result, BoneName); }
	UBodySetup* GetNavigableGeometryBodySetup() { return NativeCall<UBodySetup*>(this, "UPrimitiveComponent.GetNavigableGeometryBodySetup()"); }
	const TArray<URuntimeVirtualTexture*, TSizedDefaultAllocator<32> >& GetRuntimeVirtualTextures() { return NativeCall<const TArray<URuntimeVirtualTexture*, TSizedDefaultAllocator<32> >&>(this, "UPrimitiveComponent.GetRuntimeVirtualTextures()"); }
	bool GetRigidBodyState(FRigidBodyState& OutState, FName BoneName) { return NativeCall<bool, FRigidBodyState&, FName>(this, "UPrimitiveComponent.GetRigidBodyState(FRigidBodyState&,FName)", OutState, BoneName); }
	void SetCollisionResponseToAllChannels(ECollisionResponse NewResponse) { NativeCall<void, ECollisionResponse>(this, "UPrimitiveComponent.SetCollisionResponseToAllChannels(ECollisionResponse)", NewResponse); }
	bool ShouldDispatchWakeEvents(FName BoneName) { return NativeCall<bool, FName>(this, "UPrimitiveComponent.ShouldDispatchWakeEvents(FName)", BoneName); }
	void SetAllowPartialIslandSleep(bool bInAllowPartialIslandSleep, FName BoneName) { NativeCall<void, bool, FName>(this, "UPrimitiveComponent.SetAllowPartialIslandSleep(bool,FName)", bInAllowPartialIslandSleep, BoneName); }
	bool GetIgnoreBoundsForEditorFocus() { return NativeCall<bool>(this, "UPrimitiveComponent.GetIgnoreBoundsForEditorFocus()"); }
	float GetVirtualTextureMainPassMaxDrawDistance() { return NativeCall<float>(this, "UPrimitiveComponent.GetVirtualTextureMainPassMaxDrawDistance()"); }
	void SetScalarParameterForCustomPrimitiveData(FName ParameterName, float Value) { NativeCall<void, FName, float>(this, "UPrimitiveComponent.SetScalarParameterForCustomPrimitiveData(FName,float)", ParameterName, Value); }
	void SetAffectDynamicIndirectLighting(bool bNewAffectDynamicIndirectLighting) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetAffectDynamicIndirectLighting(bool)", bNewAffectDynamicIndirectLighting); }
	UPhysicalMaterial* GetPhysicsMaterialOverride() { return NativeCall<UPhysicalMaterial*>(this, "UPrimitiveComponent.GetPhysicsMaterialOverride()"); }
	bool GetLightMapResolution(int& Width, int& Height) { return NativeCall<bool, int&, int&>(this, "UPrimitiveComponent.GetLightMapResolution(int&,int&)", Width, Height); }
	void AssignSceneProxy(FPrimitiveSceneProxy* InSceneProxy) { NativeCall<void, FPrimitiveSceneProxy*>(this, "UPrimitiveComponent.AssignSceneProxy(FPrimitiveSceneProxy*)", InSceneProxy); }
	bool IsPhysicsOwnerMovable() { return NativeCall<bool>(this, "UPrimitiveComponent.IsPhysicsOwnerMovable()"); }
	void SetLastRenderTime(double InLastRenderTime) { NativeCall<void, double>(this, "UPrimitiveComponent.SetLastRenderTime(double)", InLastRenderTime); }
	bool K2_SphereTraceComponent(UE::Math::TVector<double>* TraceStart, UE::Math::TVector<double>* TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, UE::Math::TVector<double>& HitLocation, UE::Math::TVector<double>& HitNormal, FName& BoneName, FHitResult& OutHit) { if (!TraceStart) throw std::invalid_argument("Null native value parameter"); if (!TraceEnd) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, float, bool, bool, bool, UE :: Math :: TVector < double > &, UE :: Math :: TVector < double > &, FName &, FHitResult &>(this, "UPrimitiveComponent.K2_SphereTraceComponent(UE::Math::TVector<double>,UE::Math::TVector<double>,float,bool,bool,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName&,FHitResult&)", *TraceStart, *TraceEnd, SphereRadius, bTraceComplex, bShowTrace, bPersistentShowTrace, HitLocation, HitNormal, BoneName, OutHit); }
	UBodySetup* GetBodySetup() { return NativeCall<UBodySetup*>(this, "UPrimitiveComponent.GetBodySetup()"); }
	float GetEmissiveBoost(int ElementIndex) { return NativeCall<float, int>(this, "UPrimitiveComponent.GetEmissiveBoost(int)", ElementIndex); }
	void SetAffectDistanceFieldLighting(bool NewAffectDistanceFieldLighting) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetAffectDistanceFieldLighting(bool)", NewAffectDistanceFieldLighting); }
	int GetNumMaterials() { return NativeCall<int>(this, "UPrimitiveComponent.GetNumMaterials()"); }
	EHasCustomNavigableGeometry::Type HasCustomNavigableGeometry() { return NativeCall<EHasCustomNavigableGeometry::Type>(this, "UPrimitiveComponent.HasCustomNavigableGeometry()"); }
	static void GetLightmapType_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UPrimitiveComponent.GetLightmapType_WrapperImpl(void*,void*)", Object, OutValue); }
	bool IsPhysicsObjectWorldGeometry() { return NativeCall<bool>(this, "UPrimitiveComponent.IsPhysicsObjectWorldGeometry()"); }
	const FCollisionResponseContainer& GetCollisionResponseToChannels() { return NativeCall<const FCollisionResponseContainer&>(this, "UPrimitiveComponent.GetCollisionResponseToChannels()"); }
	bool CanBeUsedInPhysicsReplication(FName BoneName) { return NativeCall<bool, FName>(this, "UPrimitiveComponent.CanBeUsedInPhysicsReplication(FName)", BoneName); }
	int GetStaticLightMapResolution() { return NativeCall<int>(this, "UPrimitiveComponent.GetStaticLightMapResolution()"); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "UPrimitiveComponent.ShouldRecreateProxyOnUpdateTransform()"); }
	void FinishDestroy() { NativeCall<void>(this, "UPrimitiveComponent.FinishDestroy()"); }
	bool UsePSOPrecacheRenderProxyDelay() { return NativeCall<bool>(this, "UPrimitiveComponent.UsePSOPrecacheRenderProxyDelay()"); }
	ELightMapInteractionType GetStaticLightingType() { return NativeCall<ELightMapInteractionType>(this, "UPrimitiveComponent.GetStaticLightingType()"); }
	void GetNavigationData(FNavigationRelevantData& OutData) { NativeCall<void, FNavigationRelevantData&>(this, "UPrimitiveComponent.GetNavigationData(FNavigationRelevantData&)", OutData); }
	double GetLastRenderTimeOnScreen() { return NativeCall<double>(this, "UPrimitiveComponent.GetLastRenderTimeOnScreen()"); }
	UMaterialInterface* GetPhysicsMaterialBase() { return NativeCall<UMaterialInterface*>(this, "UPrimitiveComponent.GetPhysicsMaterialBase()"); }
	void SetDepthPriorityGroup(ESceneDepthPriorityGroup NewDepthPriorityGroup) { NativeCall<void, ESceneDepthPriorityGroup>(this, "UPrimitiveComponent.SetDepthPriorityGroup(ESceneDepthPriorityGroup)", NewDepthPriorityGroup); }
	UE::Math::TTransform<double>* GetComponentTransformFromBodyInstance(UE::Math::TTransform<double>* result, FBodyInstance* UseBI) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FBodyInstance*>(this, "UPrimitiveComponent.GetComponentTransformFromBodyInstance(FBodyInstance*)", result, UseBI); }
	bool K2_SphereOverlapComponent(UE::Math::TVector<double>* InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, UE::Math::TVector<double>& HitLocation, UE::Math::TVector<double>& HitNormal, FName& BoneName, FHitResult& OutHit) { if (!InSphereCentre) throw std::invalid_argument("Null native value parameter"); return NativeCall<bool, UE :: Math :: TVector < double >, float, bool, bool, bool, UE :: Math :: TVector < double > &, UE :: Math :: TVector < double > &, FName &, FHitResult &>(this, "UPrimitiveComponent.K2_SphereOverlapComponent(UE::Math::TVector<double>,float,bool,bool,bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,FName&,FHitResult&)", *InSphereCentre, InSphereRadius, bTraceComplex, bShowTrace, bPersistentShowTrace, HitLocation, HitNormal, BoneName, OutHit); }
	void SetUseMACD(bool bInUseMACD, FName BoneName) { NativeCall<void, bool, FName>(this, "UPrimitiveComponent.SetUseMACD(bool,FName)", bInUseMACD, BoneName); }
	UE::Math::TVector<double>* GetComponentVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UPrimitiveComponent.GetComponentVelocity()", result); }
	float GetMaxDepenetrationVelocity(FName BoneName) { return NativeCall<float, FName>(this, "UPrimitiveComponent.GetMaxDepenetrationVelocity(FName)", BoneName); }
	void PrecachePSOs() { NativeCall<void>(this, "UPrimitiveComponent.PrecachePSOs()"); }
	void SetCachedMaxDrawDistance(float NewCachedMaxDrawDistance) { NativeCall<void, float>(this, "UPrimitiveComponent.SetCachedMaxDrawDistance(float)", NewCachedMaxDrawDistance); }
	bool SupportsWorldPositionOffsetVelocity() { return NativeCall<bool>(this, "UPrimitiveComponent.SupportsWorldPositionOffsetVelocity()"); }
	double GetLastRenderTime() { return NativeCall<double>(this, "UPrimitiveComponent.GetLastRenderTime()"); }
	void OnRenderAssetFirstLodChange(const UStreamableRenderAsset* RenderAsset, int FirstLodIndex) { NativeCall<void, const UStreamableRenderAsset*, int>(this, "UPrimitiveComponent.OnRenderAssetFirstLodChange(UStreamableRenderAsset*,int)", RenderAsset, FirstLodIndex); }
	UMaterialInterface* GetMaterial(int Index) { return NativeCall<UMaterialInterface*, int>(this, "UPrimitiveComponent.GetMaterial(int)", Index); }
	TArray<int, TSizedDefaultAllocator<32> >* GetExcludeForSpecificHLODLevels(TArray<int, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<int, TSizedDefaultAllocator<32> >*, TArray<int, TSizedDefaultAllocator<32> >*>(this, "UPrimitiveComponent.GetExcludeForSpecificHLODLevels()", result); }
	void SetHoldout(bool bNewHoldout) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetHoldout(bool)", bNewHoldout); }
	void SetCollisionResponseToChannels(const FCollisionResponseContainer& NewReponses) { NativeCall<void, const FCollisionResponseContainer&>(this, "UPrimitiveComponent.SetCollisionResponseToChannels(FCollisionResponseContainer&)", NewReponses); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UPrimitiveComponent.CreateSceneProxy()"); }
	UE::Math::TTransform<double>* GetPhysicsOwnerSocketTransform(UE::Math::TTransform<double>* result, FName InSocketName) { return NativeCall<UE::Math::TTransform<double>*, UE::Math::TTransform<double>*, FName>(this, "UPrimitiveComponent.GetPhysicsOwnerSocketTransform(FName)", result, InSocketName); }
	void SetAbsoluteMaxDrawScale(bool bInValue) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetAbsoluteMaxDrawScale(bool)", bInValue); }
	void SetStaticWhenNotMoveable(bool bInStaticWhenNotMoveable) { NativeCall<void, bool>(this, "UPrimitiveComponent.SetStaticWhenNotMoveable(bool)", bInStaticWhenNotMoveable); }
	ECollisionEnabled::Type GetCollisionEnabled() { return NativeCall<ECollisionEnabled::Type>(this, "UPrimitiveComponent.GetCollisionEnabled()"); }
	FName GetCollisionProfileName() { using AsaReturnType = FName; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*>(this, "UPrimitiveComponent.GetCollisionProfileName()", AsaReturnPointer); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
};