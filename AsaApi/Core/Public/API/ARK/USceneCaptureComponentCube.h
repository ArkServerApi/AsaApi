#pragma once
#include "BulkForward.h"
#include "USceneCaptureComponent.h"

struct USceneCaptureComponentCube : public USceneCaptureComponent
{
public:
	USceneCaptureComponentCube() = delete;
	~USceneCaptureComponentCube() = delete;
	USceneCaptureComponentCube(const USceneCaptureComponentCube&) = delete;
	USceneCaptureComponentCube& operator=(const USceneCaptureComponentCube&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USceneCaptureComponentCube"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USceneCaptureComponentCube"); }

	bool& bCaptureRotationField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponentCube.bCaptureRotation"); }
	unsigned char& ReflectionTimeSliceFirstField() { return *GetNativePointerField<unsigned char*>(this, "USceneCaptureComponentCube.ReflectionTimeSliceFirst"); }
	unsigned char& ReflectionTimeSliceCountField() { return *GetNativePointerField<unsigned char*>(this, "USceneCaptureComponentCube.ReflectionTimeSliceCount"); }
	UReflectionCaptureComponent*& ReflectionComponentField() { return *GetNativePointerField<UReflectionCaptureComponent**>(this, "USceneCaptureComponentCube.ReflectionComponent"); }
	FPostProcessSettings& PostProcessSettingsField() { return *GetNativePointerField<FPostProcessSettings*>(this, "USceneCaptureComponentCube.PostProcessSettings"); }
	float& PostProcessBlendWeightField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponentCube.PostProcessBlendWeight"); }
	void CaptureSceneDeferred() { NativeCall<void>(this, "USceneCaptureComponentCube.CaptureSceneDeferred()"); }
	bool IsCube() { return NativeCall<bool>(this, "USceneCaptureComponentCube.IsCube()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USceneCaptureComponentCube.Serialize(FArchive&)", Ar); }
	void CaptureScene() { NativeCall<void>(this, "USceneCaptureComponentCube.CaptureScene()"); }
	void UpdateSceneCaptureContents(FSceneInterface* Scene, ISceneRenderBuilder& SceneRenderBuilder) { NativeCall<void, FSceneInterface*, ISceneRenderBuilder&>(this, "USceneCaptureComponentCube.UpdateSceneCaptureContents(FSceneInterface*,ISceneRenderBuilder&)", Scene, SceneRenderBuilder); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "USceneCaptureComponentCube.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "USceneCaptureComponentCube.SendRenderTransform_Concurrent()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "USceneCaptureComponentCube.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void OnRegister() { NativeCall<void>(this, "USceneCaptureComponentCube.OnRegister()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "USceneCaptureComponentCube.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
};
