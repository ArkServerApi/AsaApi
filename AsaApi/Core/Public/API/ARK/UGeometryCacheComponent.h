#pragma once
#include "BulkForward.h"
#include <API/UE/Math/BoxSphereBounds.h>
#include "UMeshComponent.h"

struct UGeometryCacheComponent : public UMeshComponent
{
public:
	UGeometryCacheComponent() = delete;
	~UGeometryCacheComponent() = delete;
	UGeometryCacheComponent(const UGeometryCacheComponent&) = delete;
	UGeometryCacheComponent& operator=(const UGeometryCacheComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGeometryCacheComponent"); }

	bool& bRunningField() { return *GetNativePointerField<bool*>(this, "UGeometryCacheComponent.bRunning"); }
	bool& bLoopingField() { return *GetNativePointerField<bool*>(this, "UGeometryCacheComponent.bLooping"); }
	bool& bInterpolateFramesField() { return *GetNativePointerField<bool*>(this, "UGeometryCacheComponent.bInterpolateFrames"); }
	bool& bExtrapolateFramesField() { return *GetNativePointerField<bool*>(this, "UGeometryCacheComponent.bExtrapolateFrames"); }
	float& StartTimeOffsetField() { return *GetNativePointerField<float*>(this, "UGeometryCacheComponent.StartTimeOffset"); }
	float& PlaybackSpeedField() { return *GetNativePointerField<float*>(this, "UGeometryCacheComponent.PlaybackSpeed"); }
	float& MotionVectorScaleField() { return *GetNativePointerField<float*>(this, "UGeometryCacheComponent.MotionVectorScale"); }
	int& NumTracksField() { return *GetNativePointerField<int*>(this, "UGeometryCacheComponent.NumTracks"); }
	float& ElapsedTimeField() { return *GetNativePointerField<float*>(this, "UGeometryCacheComponent.ElapsedTime"); }
	UE::Math::TBoxSphereBounds<double, double>& LocalBoundsField() { return *GetNativePointerField<UE::Math::TBoxSphereBounds<double, double>*>(this, "UGeometryCacheComponent.LocalBounds"); }
	float& PlayDirectionField() { return *GetNativePointerField<float*>(this, "UGeometryCacheComponent.PlayDirection"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "UGeometryCacheComponent.Duration"); }
	bool& bManualTickField() { return *GetNativePointerField<bool*>(this, "UGeometryCacheComponent.bManualTick"); }
	bool& bOverrideWireframeColorField() { return *GetNativePointerField<bool*>(this, "UGeometryCacheComponent.bOverrideWireframeColor"); }
	FLinearColor& WireframeOverrideColorField() { return *GetNativePointerField<FLinearColor*>(this, "UGeometryCacheComponent.WireframeOverrideColor"); }
	float GetDuration() { return NativeCall<float>(this, "UGeometryCacheComponent.GetDuration()"); }
	TArray<FName, TSizedDefaultAllocator<32> >* GetMaterialSlotNames(TArray<FName, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<FName, TSizedDefaultAllocator<32> >*, TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UGeometryCacheComponent.GetMaterialSlotNames()", result); }
	int GetMaterialIndex(FName MaterialSlotName) { return NativeCall<int, FName>(this, "UGeometryCacheComponent.GetMaterialIndex(FName)", MaterialSlotName); }
	void SetupTrackData() { NativeCall<void>(this, "UGeometryCacheComponent.SetupTrackData()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UGeometryCacheComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	FPrimitiveSceneProxy* CreateSceneProxy() { return NativeCall<FPrimitiveSceneProxy*>(this, "UGeometryCacheComponent.CreateSceneProxy()"); }
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping) { NativeCall<void, float, bool, bool, bool>(this, "UGeometryCacheComponent.TickAtThisTime(float,bool,bool,bool)", Time, bInIsRunning, bInBackwards, bInIsLooping); }
	UMaterialInterface* GetMaterial(int MaterialIndex) { return NativeCall<UMaterialInterface*, int>(this, "UGeometryCacheComponent.GetMaterial(int)", MaterialIndex); }
	bool SetGeometryCache(UGeometryCache* NewGeomCache) { return NativeCall<bool, UGeometryCache*>(this, "UGeometryCacheComponent.SetGeometryCache(UGeometryCache*)", NewGeomCache); }
	void PostLoad() { NativeCall<void>(this, "UGeometryCacheComponent.PostLoad()"); }
	void BeginDestroy() { NativeCall<void>(this, "UGeometryCacheComponent.BeginDestroy()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UGeometryCacheComponent.GetNumMaterials()"); }
	bool IsPlayingReversed() { return NativeCall<bool>(this, "UGeometryCacheComponent.IsPlayingReversed()"); }
	UGeometryCache* GetGeometryCache() { return NativeCall<UGeometryCache*>(this, "UGeometryCacheComponent.GetGeometryCache()"); }
	void OnRegister() { NativeCall<void>(this, "UGeometryCacheComponent.OnRegister()"); }
	void FinishDestroy() { NativeCall<void>(this, "UGeometryCacheComponent.FinishDestroy()"); }
	bool IsMaterialSlotNameValid(FName MaterialSlotName) { return NativeCall<bool, FName>(this, "UGeometryCacheComponent.IsMaterialSlotNameValid(FName)", MaterialSlotName); }
	bool UpdateTrackSection(int TrackIndex, float Time) { return NativeCall<bool, int, float>(this, "UGeometryCacheComponent.UpdateTrackSection(int,float)", TrackIndex, Time); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGeometryCacheComponent"); }
	bool GetManualTick() { return NativeCall<bool>(this, "UGeometryCacheComponent.GetManualTick()"); }
	void OnUnregister() { NativeCall<void>(this, "UGeometryCacheComponent.OnUnregister()"); }
	void SetManualTick(bool bInManualTick) { NativeCall<void, bool>(this, "UGeometryCacheComponent.SetManualTick(bool)", bInManualTick); }
	float GetAnimationTime() { return NativeCall<float>(this, "UGeometryCacheComponent.GetAnimationTime()"); }
	void JumpAnimationToTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping) { NativeCall<void, float, bool, bool, bool>(this, "UGeometryCacheComponent.JumpAnimationToTime(float,bool,bool,bool)", Time, bInIsRunning, bInBackwards, bInIsLooping); }
	void ReleaseResources() { NativeCall<void>(this, "UGeometryCacheComponent.ReleaseResources()"); }
	void UpdateLocalBounds() { NativeCall<void>(this, "UGeometryCacheComponent.UpdateLocalBounds()"); }
	bool IsLooping() { return NativeCall<bool>(this, "UGeometryCacheComponent.IsLooping()"); }
	void ResetAnimationTime() { NativeCall<void>(this, "UGeometryCacheComponent.ResetAnimationTime()"); }
};
