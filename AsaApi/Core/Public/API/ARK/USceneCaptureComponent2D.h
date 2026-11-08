#pragma once
#include "BulkForward.h"
#include "USceneCaptureComponent.h"

struct USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
	USceneCaptureComponent2D() = delete;
	~USceneCaptureComponent2D() = delete;
	USceneCaptureComponent2D(const USceneCaptureComponent2D&) = delete;
	USceneCaptureComponent2D& operator=(const USceneCaptureComponent2D&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USceneCaptureComponent2D"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USceneCaptureComponent2D"); }

	TEnumAsByte<ECameraProjectionMode::Type>& ProjectionTypeField() { return *GetNativePointerField<TEnumAsByte<ECameraProjectionMode::Type>*>(this, "USceneCaptureComponent2D.ProjectionType"); }
	float& FOVAngleField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.FOVAngle"); }
	float& FirstPersonFieldOfViewField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.FirstPersonFieldOfView"); }
	float& FirstPersonScaleField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.FirstPersonScale"); }
	float& OrthoWidthField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.OrthoWidth"); }
	bool& bAutoCalculateOrthoPlanesField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent2D.bAutoCalculateOrthoPlanes"); }
	float& AutoPlaneShiftField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.AutoPlaneShift"); }
	bool& bUpdateOrthoPlanesField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent2D.bUpdateOrthoPlanes"); }
	bool& bUseCameraHeightAsViewTargetField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent2D.bUseCameraHeightAsViewTarget"); }
	float& OverscanField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.Overscan"); }
	FPostProcessSettings& PostProcessSettingsField() { return *GetNativePointerField<FPostProcessSettings*>(this, "USceneCaptureComponent2D.PostProcessSettings"); }
	float& PostProcessBlendWeightField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.PostProcessBlendWeight"); }
	float& CustomNearClippingPlaneField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent2D.CustomNearClippingPlane"); }
	bool& bUseCustomProjectionMatrixField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent2D.bUseCustomProjectionMatrix"); }
	bool& bUseFauxOrthoViewPosField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent2D.bUseFauxOrthoViewPos"); }
	bool& bEnableOrthographicTilingField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent2D.bEnableOrthographicTiling"); }
	int& NumXTilesField() { return *GetNativePointerField<int*>(this, "USceneCaptureComponent2D.NumXTiles"); }
	int& NumYTilesField() { return *GetNativePointerField<int*>(this, "USceneCaptureComponent2D.NumYTiles"); }
	bool& bEnableClipPlaneField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent2D.bEnableClipPlane"); }
	UE::Math::TVector<double>& ClipPlaneBaseField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USceneCaptureComponent2D.ClipPlaneBase"); }
	UE::Math::TVector<double>& ClipPlaneNormalField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "USceneCaptureComponent2D.ClipPlaneNormal"); }
	bool& bRenderInMainRendererField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent2D.bRenderInMainRenderer"); }
	FName& UserSceneTextureBaseColorField() { return *GetNativePointerField<FName*>(this, "USceneCaptureComponent2D.UserSceneTextureBaseColor"); }
	FName& UserSceneTextureNormalField() { return *GetNativePointerField<FName*>(this, "USceneCaptureComponent2D.UserSceneTextureNormal"); }
	FName& UserSceneTextureSceneColorField() { return *GetNativePointerField<FName*>(this, "USceneCaptureComponent2D.UserSceneTextureSceneColor"); }
	int& TileIDField() { return *GetNativePointerField<int*>(this, "USceneCaptureComponent2D.TileID"); }
	const FSceneViewFamily*& MainViewFamilyField() { return *GetNativePointerField<const FSceneViewFamily**>(this, "USceneCaptureComponent2D.MainViewFamily"); }
	BitFieldValue<bool, unsigned __int32> bOverride_CustomNearClippingPlane() { return { this, "USceneCaptureComponent2D.bOverride_CustomNearClippingPlane"}; }
	BitFieldValue<bool, unsigned __int32> bCameraCutThisFrame() { return { this, "USceneCaptureComponent2D.bCameraCutThisFrame"}; }
	BitFieldValue<bool, unsigned __int32> bEnableFirstPersonFieldOfView() { return { this, "USceneCaptureComponent2D.bEnableFirstPersonFieldOfView"}; }
	BitFieldValue<bool, unsigned __int32> bEnableFirstPersonScale() { return { this, "USceneCaptureComponent2D.bEnableFirstPersonScale"}; }
	BitFieldValue<bool, unsigned __int32> bConsiderUnrenderedOpaquePixelAsFullyTranslucent() { return { this, "USceneCaptureComponent2D.bConsiderUnrenderedOpaquePixelAsFullyTranslucent"}; }
	BitFieldValue<bool, unsigned __int32> bMainViewFamily() { return { this, "USceneCaptureComponent2D.bMainViewFamily"}; }
	BitFieldValue<bool, unsigned __int32> bMainViewResolution() { return { this, "USceneCaptureComponent2D.bMainViewResolution"}; }
	BitFieldValue<bool, unsigned __int32> bMainViewCamera() { return { this, "USceneCaptureComponent2D.bMainViewCamera"}; }
	BitFieldValue<bool, unsigned __int32> bInheritMainViewCameraPostProcessSettings() { return { this, "USceneCaptureComponent2D.bInheritMainViewCameraPostProcessSettings"}; }
	BitFieldValue<bool, unsigned __int32> bIgnoreScreenPercentage() { return { this, "USceneCaptureComponent2D.bIgnoreScreenPercentage"}; }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector) { NativeCall<void, UObject*, FReferenceCollector&>(nullptr, "USceneCaptureComponent2D.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "USceneCaptureComponent2D.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void UpdateSceneCaptureContents(FSceneInterface* Scene, ISceneRenderBuilder& SceneRenderBuilder) { NativeCall<void, FSceneInterface*, ISceneRenderBuilder&>(this, "USceneCaptureComponent2D.UpdateSceneCaptureContents(FSceneInterface*,ISceneRenderBuilder&)", Scene, SceneRenderBuilder); }
	bool RequiresGameThreadEndOfFrameUpdates() { return NativeCall<bool>(this, "USceneCaptureComponent2D.RequiresGameThreadEndOfFrameUpdates()"); }
	void GetCameraView(float DeltaTime, FMinimalViewInfo& OutMinimalViewInfo) { NativeCall<void, float, FMinimalViewInfo&>(this, "USceneCaptureComponent2D.GetCameraView(float,FMinimalViewInfo&)", DeltaTime, OutMinimalViewInfo); }
	bool Is2D() { return NativeCall<bool>(this, "USceneCaptureComponent2D.Is2D()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "USceneCaptureComponent2D.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	void CaptureScene() { NativeCall<void>(this, "USceneCaptureComponent2D.CaptureScene()"); }
	void OnRegister() { NativeCall<void>(this, "USceneCaptureComponent2D.OnRegister()"); }
	void CaptureSceneDeferred() { NativeCall<void>(this, "USceneCaptureComponent2D.CaptureSceneDeferred()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "USceneCaptureComponent2D.Serialize(FArchive&)", Ar); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "USceneCaptureComponent2D.SendRenderTransform_Concurrent()"); }
};
