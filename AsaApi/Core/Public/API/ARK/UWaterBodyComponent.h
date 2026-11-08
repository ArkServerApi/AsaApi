#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UWaterBodyComponent : public UPrimitiveComponent
{
public:
	UWaterBodyComponent() = delete;
	~UWaterBodyComponent() = delete;
	UWaterBodyComponent(const UWaterBodyComponent&) = delete;
	UWaterBodyComponent& operator=(const UWaterBodyComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UWaterBodyComponent"); }

	float& TargetWaveMaskDepthField() { return *GetNativePointerField<float*>(this, "UWaterBodyComponent.TargetWaveMaskDepth"); }
	float& MaxWaveHeightOffsetField() { return *GetNativePointerField<float*>(this, "UWaterBodyComponent.MaxWaveHeightOffset"); }
	FUnderwaterPostProcessSettings& UnderwaterPostProcessSettingsField() { return *GetNativePointerField<FUnderwaterPostProcessSettings*>(this, "UWaterBodyComponent.UnderwaterPostProcessSettings"); }
	FWaterCurveSettings& CurveSettingsField() { return *GetNativePointerField<FWaterCurveSettings*>(this, "UWaterBodyComponent.CurveSettings"); }
	FWaterBodyHeightmapSettings& WaterHeightmapSettingsField() { return *GetNativePointerField<FWaterBodyHeightmapSettings*>(this, "UWaterBodyComponent.WaterHeightmapSettings"); }
	float& ShapeDilationField() { return *GetNativePointerField<float*>(this, "UWaterBodyComponent.ShapeDilation"); }
	float& CollisionHeightOffsetField() { return *GetNativePointerField<float*>(this, "UWaterBodyComponent.CollisionHeightOffset"); }
	bool& bAffectsLandscapeField() { return *GetNativePointerField<bool*>(this, "UWaterBodyComponent.bAffectsLandscape"); }
	FWaterBodyStaticMeshSettings& StaticMeshSettingsField() { return *GetNativePointerField<FWaterBodyStaticMeshSettings*>(this, "UWaterBodyComponent.StaticMeshSettings"); }
	int& WaterBodyIndexField() { return *GetNativePointerField<int*>(this, "UWaterBodyComponent.WaterBodyIndex"); }
	bool& bAlwaysGenerateWaterMeshTilesField() { return *GetNativePointerField<bool*>(this, "UWaterBodyComponent.bAlwaysGenerateWaterMeshTiles"); }
	int& OverlapMaterialPriorityField() { return *GetNativePointerField<int*>(this, "UWaterBodyComponent.OverlapMaterialPriority"); }
	TWeakObjectPtr<ALandscapeProxy, FWeakObjectPtr>& LandscapeField() { return *GetNativePointerField<TWeakObjectPtr<ALandscapeProxy, FWeakObjectPtr>*>(this, "UWaterBodyComponent.Landscape"); }
	FPostProcessSettings& CurrentPostProcessSettingsField() { return *GetNativePointerField<FPostProcessSettings*>(this, "UWaterBodyComponent.CurrentPostProcessSettings"); }
	double& FixedWaterDepthField() { return *GetNativePointerField<double*>(this, "UWaterBodyComponent.FixedWaterDepth"); }
	TWeakObjectPtr<UBakedShallowWaterSimulationComponent, FWeakObjectPtr>& BakedShallowWaterSimField() { return *GetNativePointerField<TWeakObjectPtr<UBakedShallowWaterSimulationComponent, FWeakObjectPtr>*>(this, "UWaterBodyComponent.BakedShallowWaterSim"); }
	bool& bUseBakedSimForQueriesAndPhysicsField() { return *GetNativePointerField<bool*>(this, "UWaterBodyComponent.bUseBakedSimForQueriesAndPhysics"); }
	bool& bIsRenderedByWaterMeshAndVisibleField() { return *GetNativePointerField<bool*>(this, "UWaterBodyComponent.bIsRenderedByWaterMeshAndVisible"); }
	TArray<AWaterBodyIsland*, TSizedDefaultAllocator<32> >* GetIslands(TArray<AWaterBodyIsland*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<AWaterBodyIsland*, TSizedDefaultAllocator<32> >*, TArray<AWaterBodyIsland*, TSizedDefaultAllocator<32> >*>(this, "UWaterBodyComponent.GetIslands()", result); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "UWaterBodyComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	void UpdateWaterZones(bool bAllowChangesDuringCook) { NativeCall<void, bool>(this, "UWaterBodyComponent.UpdateWaterZones(bool)", bAllowChangesDuringCook); }
	bool AffectsWaterMesh() { return NativeCall<bool>(this, "UWaterBodyComponent.AffectsWaterMesh()"); }
	float GetWaveReferenceTime() { return NativeCall<float>(this, "UWaterBodyComponent.GetWaveReferenceTime()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UWaterBodyComponent.Serialize(FArchive&)", Ar); }
	bool AffectsWaterInfo() { return NativeCall<bool>(this, "UWaterBodyComponent.AffectsWaterInfo()"); }
	void OnComponentDestroyed(bool bDestroyingHierarchy) { NativeCall<void, bool>(this, "UWaterBodyComponent.OnComponentDestroyed(bool)", bDestroyingHierarchy); }
	bool HasWaves() { return NativeCall<bool>(this, "UWaterBodyComponent.HasWaves()"); }
	void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) { NativeCall<void, FResourceSizeEx&>(this, "UWaterBodyComponent.GetResourceSizeEx(FResourceSizeEx&)", CumulativeResourceSize); }
	void OnHiddenInGameChanged() { NativeCall<void>(this, "UWaterBodyComponent.OnHiddenInGameChanged()"); }
	void OnWaterBodyChanged(const FOnWaterBodyChangedParams& InParams) { NativeCall<void, const FOnWaterBodyChangedParams&>(this, "UWaterBodyComponent.OnWaterBodyChanged(FOnWaterBodyChangedParams&)", InParams); }
	void CreateOrUpdateWaterStaticMeshMID() { NativeCall<void>(this, "UWaterBodyComponent.CreateOrUpdateWaterStaticMeshMID()"); }
	bool CanEverAffectWaterInfo() { return NativeCall<bool>(this, "UWaterBodyComponent.CanEverAffectWaterInfo()"); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetCollisionComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result, bool bInOnlyEnabledComponents) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, bool>(this, "UWaterBodyComponent.GetCollisionComponents(bool)", result, bInOnlyEnabledComponents); }
	void PostDuplicate(bool bDuplicateForPie) { NativeCall<void, bool>(this, "UWaterBodyComponent.PostDuplicate(bool)", bDuplicateForPie); }
	void Reset() { NativeCall<void>(this, "UWaterBodyComponent.Reset()"); }
	void OnUpdateBody(bool bWithExclusionVolumes) { NativeCall<void, bool>(this, "UWaterBodyComponent.OnUpdateBody(bool)", bWithExclusionVolumes); }
	void BeginUpdateWaterBody() { NativeCall<void>(this, "UWaterBodyComponent.BeginUpdateWaterBody()"); }
	bool CanEverAffectWaterMesh() { return NativeCall<bool>(this, "UWaterBodyComponent.CanEverAffectWaterMesh()"); }
	void OnRegister() { NativeCall<void>(this, "UWaterBodyComponent.OnRegister()"); }
	void AddExclusionVolume(AWaterBodyExclusionVolume* InExclusionVolume) { NativeCall<void, AWaterBodyExclusionVolume*>(this, "UWaterBodyComponent.AddExclusionVolume(AWaterBodyExclusionVolume*)", InExclusionVolume); }
	float GetAudioIntensityAtSplineInputKey(float InKey) { return NativeCall<float, float>(this, "UWaterBodyComponent.GetAudioIntensityAtSplineInputKey(float)", InKey); }
	void OnPostActorCreated() { NativeCall<void>(this, "UWaterBodyComponent.OnPostActorCreated()"); }
	void GetSurfaceMinMaxZ(float& OutMinZ, float& OutMaxZ) { NativeCall<void, float&, float&>(this, "UWaterBodyComponent.GetSurfaceMinMaxZ(float&,float&)", OutMinZ, OutMaxZ); }
	UWaterWavesBase* GetWaterWaves() { return NativeCall<UWaterWavesBase*>(this, "UWaterBodyComponent.GetWaterWaves()"); }
	static void GetWaterMeshOverride_WrapperImpl(const void* Object, void* OutValue) { NativeCall<void, const void*, void*>(nullptr, "UWaterBodyComponent.GetWaterMeshOverride_WrapperImpl(void*,void*)", Object, OutValue); }
	float GetConstantSurfaceZ() { return NativeCall<float>(this, "UWaterBodyComponent.GetConstantSurfaceZ()"); }
	bool SetDynamicParametersOnUnderwaterPostProcessMID(UMaterialInstanceDynamic* InMID) { return NativeCall<bool, UMaterialInstanceDynamic*>(this, "UWaterBodyComponent.SetDynamicParametersOnUnderwaterPostProcessMID(UMaterialInstanceDynamic*)", InMID); }
	void CopySharedNavigationSettingsToComponent(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UWaterBodyComponent.CopySharedNavigationSettingsToComponent(UPrimitiveComponent*)", InComponent); }
	UWaterSplineComponent* GetWaterSpline() { return NativeCall<UWaterSplineComponent*>(this, "UWaterBodyComponent.GetWaterSpline()"); }
	bool SetDynamicParametersOnWaterInfoMID(UMaterialInstanceDynamic* InMID) { return NativeCall<bool, UMaterialInstanceDynamic*>(this, "UWaterBodyComponent.SetDynamicParametersOnWaterInfoMID(UMaterialInstanceDynamic*)", InMID); }
	void PostLoad() { NativeCall<void>(this, "UWaterBodyComponent.PostLoad()"); }
	void UpdateAll(const FOnWaterBodyChangedParams& InParams) { NativeCall<void, const FOnWaterBodyChangedParams&>(this, "UWaterBodyComponent.UpdateAll(FOnWaterBodyChangedParams&)", InParams); }
	UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance() { return NativeCall<UMaterialInstanceDynamic*>(this, "UWaterBodyComponent.GetRiverToOceanTransitionMaterialInstance()"); }
	UMaterialInterface* GetRiverToOceanTransitionMaterial() { return NativeCall<UMaterialInterface*>(this, "UWaterBodyComponent.GetRiverToOceanTransitionMaterial()"); }
	TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* GetStandardRenderableComponents(TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*, TArray<UPrimitiveComponent*, TSizedDefaultAllocator<32> >*>(this, "UWaterBodyComponent.GetStandardRenderableComponents()", result); }
	UWaterBodyInfoMeshComponent* GetDilatedWaterInfoMeshComponent() { return NativeCall<UWaterBodyInfoMeshComponent*>(this, "UWaterBodyComponent.GetDilatedWaterInfoMeshComponent()"); }
	void RemoveExclusionVolume(AWaterBodyExclusionVolume* InExclusionVolume) { NativeCall<void, AWaterBodyExclusionVolume*>(this, "UWaterBodyComponent.RemoveExclusionVolume(AWaterBodyExclusionVolume*)", InExclusionVolume); }
	float GetWaveHeightAtPosition(const UE::Math::TVector<double>& InPosition, float InWaterDepth, float InTime, UE::Math::TVector<double>& OutNormal) { return NativeCall<float, const UE::Math::TVector<double>&, float, float, UE::Math::TVector<double>&>(this, "UWaterBodyComponent.GetWaveHeightAtPosition(UE::Math::TVector<double>&,float,float,UE::Math::TVector<double>&)", InPosition, InWaterDepth, InTime, OutNormal); }
	bool SetDynamicParametersOnMID(UMaterialInstanceDynamic* InMID) { return NativeCall<bool, UMaterialInstanceDynamic*>(this, "UWaterBodyComponent.SetDynamicParametersOnMID(UMaterialInstanceDynamic*)", InMID); }
	void OnVisibilityChanged() { NativeCall<void>(this, "UWaterBodyComponent.OnVisibilityChanged()"); }
	UE::Math::TVector<double>* GetCollisionExtents(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UWaterBodyComponent.GetCollisionExtents()", result); }
	float GetMaxWaveHeight() { return NativeCall<float>(this, "UWaterBodyComponent.GetMaxWaveHeight()"); }
	UMaterialInterface* GetRiverToLakeTransitionMaterial() { return NativeCall<UMaterialInterface*>(this, "UWaterBodyComponent.GetRiverToLakeTransitionMaterial()"); }
	float GetConstantDepth() { return NativeCall<float>(this, "UWaterBodyComponent.GetConstantDepth()"); }
	void SetWaterMeshOverride(UStaticMesh* InMesh) { NativeCall<void, UStaticMesh*>(this, "UWaterBodyComponent.SetWaterMeshOverride(UStaticMesh*)", InMesh); }
	AWaterZone* GetWaterZone() { return NativeCall<AWaterZone*>(this, "UWaterBodyComponent.GetWaterZone()"); }
	void CreateOrUpdateWaterMID() { NativeCall<void>(this, "UWaterBodyComponent.CreateOrUpdateWaterMID()"); }
	void UpdateVisibility() { NativeCall<void>(this, "UWaterBodyComponent.UpdateVisibility()"); }
	void UpdateExclusionVolumes() { NativeCall<void>(this, "UWaterBodyComponent.UpdateExclusionVolumes()"); }
	UE::Math::TVector<double>* GetConstantVelocity(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UWaterBodyComponent.GetConstantVelocity()", result); }
	UWaterBodyInfoMeshComponent* GetWaterInfoMeshComponent() { return NativeCall<UWaterBodyInfoMeshComponent*>(this, "UWaterBodyComponent.GetWaterInfoMeshComponent()"); }
	float FindInputKeyClosestToWorldLocation(const UE::Math::TVector<double>& WorldLocation) { return NativeCall<float, const UE::Math::TVector<double>&>(this, "UWaterBodyComponent.FindInputKeyClosestToWorldLocation(UE::Math::TVector<double>&)", WorldLocation); }
	void OnPostRegisterAllComponents() { NativeCall<void>(this, "UWaterBodyComponent.OnPostRegisterAllComponents()"); }
	bool IsWaveSupported() { return NativeCall<bool>(this, "UWaterBodyComponent.IsWaveSupported()"); }
	void UpdateMaterialInstances() { NativeCall<void>(this, "UWaterBodyComponent.UpdateMaterialInstances()"); }
	ALandscapeProxy* FindLandscape() { return NativeCall<ALandscapeProxy*>(this, "UWaterBodyComponent.FindLandscape()"); }
	float GetHeightOffset() { return NativeCall<float>(this, "UWaterBodyComponent.GetHeightOffset()"); }
	void CreateOrUpdateUnderwaterPostProcessMID() { NativeCall<void>(this, "UWaterBodyComponent.CreateOrUpdateUnderwaterPostProcessMID()"); }
	TArray<AWaterBodyExclusionVolume*, TSizedDefaultAllocator<32> >* GetExclusionVolumes(TArray<AWaterBodyExclusionVolume*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<AWaterBodyExclusionVolume*, TSizedDefaultAllocator<32> >*, TArray<AWaterBodyExclusionVolume*, TSizedDefaultAllocator<32> >*>(this, "UWaterBodyComponent.GetExclusionVolumes()", result); }
	void OnGenerateOverlapEventsChanged() { NativeCall<void>(this, "UWaterBodyComponent.OnGenerateOverlapEventsChanged()"); }
	void ApplyCollisionSettings() { NativeCall<void>(this, "UWaterBodyComponent.ApplyCollisionSettings()"); }
	void OnUnregister() { NativeCall<void>(this, "UWaterBodyComponent.OnUnregister()"); }
	void CreateOrUpdateWaterInfoMID() { NativeCall<void>(this, "UWaterBodyComponent.CreateOrUpdateWaterInfoMID()"); }
	UE::Math::TVector<double>* GetWaterVelocityVectorAtSplineInputKey(UE::Math::TVector<double>* result, float InKey) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*, float>(this, "UWaterBodyComponent.GetWaterVelocityVectorAtSplineInputKey(float)", result, InKey); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "UWaterBodyComponent.IsNavigationRelevant()"); }
	UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance() { return NativeCall<UMaterialInstanceDynamic*>(this, "UWaterBodyComponent.GetRiverToLakeTransitionMaterialInstance()"); }
	float GetWaveAttenuationFactor(const UE::Math::TVector<double>& InPosition, float InWaterDepth) { return NativeCall<float, const UE::Math::TVector<double>&, float>(this, "UWaterBodyComponent.GetWaveAttenuationFactor(UE::Math::TVector<double>&,float)", InPosition, InWaterDepth); }
	static void SetWaterMeshOverride_WrapperImpl(void* Object, const void* InValue) { NativeCall<void, void*, const void*>(nullptr, "UWaterBodyComponent.SetWaterMeshOverride_WrapperImpl(void*,void*)", Object, InValue); }
	void UpdateWaterBody(bool bWithExclusionVolumes) { NativeCall<void, bool>(this, "UWaterBodyComponent.UpdateWaterBody(bool)", bWithExclusionVolumes); }
	void SetHeightOffset(float InHeightOffset) { NativeCall<void, float>(this, "UWaterBodyComponent.SetHeightOffset(float)", InHeightOffset); }
	float GetSimpleWaveHeightAtPosition(const UE::Math::TVector<double>& InPosition, float InWaterDepth, float InTime) { return NativeCall<float, const UE::Math::TVector<double>&, float, float>(this, "UWaterBodyComponent.GetSimpleWaveHeightAtPosition(UE::Math::TVector<double>&,float,float)", InPosition, InWaterDepth, InTime); }
	bool IsFlatSurface() { return NativeCall<bool>(this, "UWaterBodyComponent.IsFlatSurface()"); }
	bool IsBodyDynamic() { return NativeCall<bool>(this, "UWaterBodyComponent.IsBodyDynamic()"); }
	bool IsHeightOffsetSupported() { return NativeCall<bool>(this, "UWaterBodyComponent.IsHeightOffsetSupported()"); }
	void OnComponentCollisionSettingsChanged(bool bUpdateOverlaps) { NativeCall<void, bool>(this, "UWaterBodyComponent.OnComponentCollisionSettingsChanged(bool)", bUpdateOverlaps); }
	bool IsWaterSplineClosedLoop() { return NativeCall<bool>(this, "UWaterBodyComponent.IsWaterSplineClosedLoop()"); }
	bool IsHLODRelevant() { return NativeCall<bool>(this, "UWaterBodyComponent.IsHLODRelevant()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UWaterBodyComponent"); }
	void CopySharedCollisionSettingsToComponent(UPrimitiveComponent* InComponent) { NativeCall<void, UPrimitiveComponent*>(this, "UWaterBodyComponent.CopySharedCollisionSettingsToComponent(UPrimitiveComponent*)", InComponent); }
	bool AffectsLandscape() { return NativeCall<bool>(this, "UWaterBodyComponent.AffectsLandscape()"); }
	float GetWaterVelocityAtSplineInputKey(float InKey) { return NativeCall<float, float>(this, "UWaterBodyComponent.GetWaterVelocityAtSplineInputKey(float)", InKey); }
};
