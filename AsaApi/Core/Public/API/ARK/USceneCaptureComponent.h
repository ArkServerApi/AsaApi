#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct USceneCaptureComponent : public USceneComponent
{
public:
	USceneCaptureComponent() = delete;
	~USceneCaptureComponent() = delete;
	USceneCaptureComponent(const USceneCaptureComponent&) = delete;
	USceneCaptureComponent& operator=(const USceneCaptureComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USceneCaptureComponent"); }

	ESceneCapturePrimitiveRenderMode& PrimitiveRenderModeField() { return *GetNativePointerField<ESceneCapturePrimitiveRenderMode*>(this, "USceneCaptureComponent.PrimitiveRenderMode"); }
	bool& bAlwaysPersistRenderingStateField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent.bAlwaysPersistRenderingState"); }
	TArray<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& HiddenComponentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "USceneCaptureComponent.HiddenComponents"); }
	TArray<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& ShowOnlyComponentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "USceneCaptureComponent.ShowOnlyComponents"); }
	float& LODDistanceFactorField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent.LODDistanceFactor"); }
	float& MaxViewDistanceOverrideField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent.MaxViewDistanceOverride"); }
	int& CaptureSortPriorityField() { return *GetNativePointerField<int*>(this, "USceneCaptureComponent.CaptureSortPriority"); }
	bool& bUseRayTracingIfEnabledField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent.bUseRayTracingIfEnabled"); }
	FName& CollectionTransformWorldToLocalField() { return *GetNativePointerField<FName*>(this, "USceneCaptureComponent.CollectionTransformWorldToLocal"); }
	FName& CollectionTransformProjectionField() { return *GetNativePointerField<FName*>(this, "USceneCaptureComponent.CollectionTransformProjection"); }
	FViewLightingChannels& ViewLightingChannelsField() { return *GetNativePointerField<FViewLightingChannels*>(this, "USceneCaptureComponent.ViewLightingChannels"); }
	FEngineShowFlags& ShowFlagsField() { return *GetNativePointerField<FEngineShowFlags*>(this, "USceneCaptureComponent.ShowFlags"); }
	FString& ProfilingEventNameField() { return *GetNativePointerField<FString*>(this, "USceneCaptureComponent.ProfilingEventName"); }
	FLinearColor& SkylightScaleField() { return *GetNativePointerField<FLinearColor*>(this, "USceneCaptureComponent.SkylightScale"); }
	unsigned int& CaptureCountField() { return *GetNativePointerField<unsigned int*>(this, "USceneCaptureComponent.CaptureCount"); }
	BitFieldValue<bool, unsigned char> bCaptureEveryFrame() { return { this, "USceneCaptureComponent.bCaptureEveryFrame"}; }
	BitFieldValue<bool, unsigned char> bCaptureOnMovement() { return { this, "USceneCaptureComponent.bCaptureOnMovement"}; }
	BitFieldValue<bool, unsigned char> bOverrideVirtualTextureThrottle() { return { this, "USceneCaptureComponent.bOverrideVirtualTextureThrottle"}; }
	BitFieldValue<bool, unsigned char> bCaptureGpuNextRender() { return { this, "USceneCaptureComponent.bCaptureGpuNextRender"}; }
	BitFieldValue<bool, unsigned char> bDumpGpuNextRender() { return { this, "USceneCaptureComponent.bDumpGpuNextRender"}; }
	BitFieldValue<bool, unsigned char> bSuppressGpuCaptureOrDump() { return { this, "USceneCaptureComponent.bSuppressGpuCaptureOrDump"}; }
	BitFieldValue<bool, unsigned char> bExcludeFromSceneTextureExtents() { return { this, "USceneCaptureComponent.bExcludeFromSceneTextureExtents"}; }
	BitFieldValue<bool, unsigned char> bFiniteFarPlane() { return { this, "USceneCaptureComponent.bFiniteFarPlane"}; }
	void PostLoad() { NativeCall<void>(this, "USceneCaptureComponent.PostLoad()"); }
	void OnUnregister() { NativeCall<void>(this, "USceneCaptureComponent.OnUnregister()"); }
	bool Is2D() { return NativeCall<bool>(this, "USceneCaptureComponent.Is2D()"); }
	void ReleaseGarbageReferences() { NativeCall<void>(this, "USceneCaptureComponent.ReleaseGarbageReferences()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "USceneCaptureComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "USceneCaptureComponent.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void OnRegister() { NativeCall<void>(this, "USceneCaptureComponent.OnRegister()"); }
	bool IsCube() { return NativeCall<bool>(this, "USceneCaptureComponent.IsCube()"); }
	void UpdateShowFlags() { NativeCall<void>(this, "USceneCaptureComponent.UpdateShowFlags()"); }
	void BeginDestroy() { NativeCall<void>(this, "USceneCaptureComponent.BeginDestroy()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USceneCaptureComponent.Serialize(FArchive&)", Ar); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("USceneCaptureComponent"); }
	const AActor* GetViewOwner() { return NativeCall<const AActor*>(this, "USceneCaptureComponent.GetViewOwner()"); }
	void RegisterDelegates() { NativeCall<void>(this, "USceneCaptureComponent.RegisterDelegates()"); }
	bool IsCulledByDetailMode() { return NativeCall<bool>(this, "USceneCaptureComponent.IsCulledByDetailMode()"); }
	void UpdateSceneCaptureContents(FSceneInterface* Scene) { NativeCall<void, FSceneInterface*>(this, "USceneCaptureComponent.UpdateSceneCaptureContents(FSceneInterface*)", Scene); }
	void UpdateSceneCaptureContents(FSceneInterface* Scene, ISceneRenderBuilder& SceneRenderBuilder) { NativeCall<void, FSceneInterface*, ISceneRenderBuilder&>(this, "USceneCaptureComponent.UpdateSceneCaptureContents(FSceneInterface*,ISceneRenderBuilder&)", Scene, SceneRenderBuilder); }
};
