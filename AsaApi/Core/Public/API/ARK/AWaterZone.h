#pragma once
#include "BulkForward.h"
#include <API/UE/Math/Box2D.h>
#include "AActor.h"

struct AWaterZone : public AActor
{
public:
	AWaterZone() = delete;
	~AWaterZone() = delete;
	AWaterZone(const AWaterZone&) = delete;
	AWaterZone& operator=(const AWaterZone&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterZone"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterZone"); }

	int& WaterInfoTextureArrayNumSlicesField() { return *GetNativePointerField<int*>(this, "AWaterZone.WaterInfoTextureArrayNumSlices"); }
	UE::Math::TVector2<double>& ZoneExtentField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "AWaterZone.ZoneExtent"); }
	float& CaptureZOffsetField() { return *GetNativePointerField<float*>(this, "AWaterZone.CaptureZOffset"); }
	bool& bHalfPrecisionTextureField() { return *GetNativePointerField<bool*>(this, "AWaterZone.bHalfPrecisionTexture"); }
	int& VelocityBlurRadiusField() { return *GetNativePointerField<int*>(this, "AWaterZone.VelocityBlurRadius"); }
	int& OverlapPriorityField() { return *GetNativePointerField<int*>(this, "AWaterZone.OverlapPriority"); }
	bool& bEnableLocalOnlyTessellationField() { return *GetNativePointerField<bool*>(this, "AWaterZone.bEnableLocalOnlyTessellation"); }
	UE::Math::TVector<double>& LocalTessellationExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "AWaterZone.LocalTessellationExtent"); }
	bool& bAutoIncludeLandscapesAsTerrainField() { return *GetNativePointerField<bool*>(this, "AWaterZone.bAutoIncludeLandscapesAsTerrain"); }
	bool& bNeedsWaterInfoRebuildField() { return *GetNativePointerField<bool*>(this, "AWaterZone.bNeedsWaterInfoRebuild"); }
	UE::Math::TVector2<float>& WaterHeightExtentsField() { return *GetNativePointerField<UE::Math::TVector2<float>*>(this, "AWaterZone.WaterHeightExtents"); }
	float& GroundZMinField() { return *GetNativePointerField<float*>(this, "AWaterZone.GroundZMin"); }
	int& WaterZoneIndexField() { return *GetNativePointerField<int*>(this, "AWaterZone.WaterZoneIndex"); }
	FOnWaterInfoTextureArrayCreated& OnWaterInfoTextureArrayCreatedField() { return *GetNativePointerField<FOnWaterInfoTextureArrayCreated*>(this, "AWaterZone.OnWaterInfoTextureArrayCreated"); }
	void AddWaterBodyComponent(UWaterBodyComponent* WaterBodyComponent) { NativeCall<void, UWaterBodyComponent*>(this, "AWaterZone.AddWaterBodyComponent(UWaterBodyComponent*)", WaterBodyComponent); }
	void OnLevelChanged(ULevel* InLevel, UWorld* InWorld) { NativeCall<void, ULevel*, UWorld*>(this, "AWaterZone.OnLevelChanged(ULevel*,UWorld*)", InLevel, InWorld); }
	void RemoveWaterBodyComponent(UWaterBodyComponent* WaterBodyComponent) { NativeCall<void, UWaterBodyComponent*>(this, "AWaterZone.RemoveWaterBodyComponent(UWaterBodyComponent*)", WaterBodyComponent); }
	void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) { NativeCall<void, ULevel*, UWorld*>(this, "AWaterZone.OnLevelRemovedFromWorld(ULevel*,UWorld*)", InLevel, InWorld); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AWaterZone.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	UE::Math::TVector<double>* GetDynamicWaterInfoExtent(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "AWaterZone.GetDynamicWaterInfoExtent()", result); }
	void OnLevelAddedToWorld(ULevel* InLevel, UWorld* InWorld) { NativeCall<void, ULevel*, UWorld*>(this, "AWaterZone.OnLevelAddedToWorld(ULevel*,UWorld*)", InLevel, InWorld); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AWaterZone.PostUnregisterAllComponents()"); }
	void PostLoad() { NativeCall<void>(this, "AWaterZone.PostLoad()"); }
	void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph*>(this, "AWaterZone.PostLoadSubobjects(FObjectInstancingGraph*)", OuterInstanceGraph); }
	void OnExtentChanged() { NativeCall<void>(this, "AWaterZone.OnExtentChanged()"); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "AWaterZone.PostRegisterAllComponents()"); }
	void BeginPlay() { NativeCall<void>(this, "AWaterZone.BeginPlay()"); }
	void Update() { NativeCall<void>(this, "AWaterZone.Update()"); }
	UE::Math::TBox2<double>* GetZoneBounds2D(UE::Math::TBox2<double>* result) { return NativeCall<UE::Math::TBox2<double>*, UE::Math::TBox2<double>*>(this, "AWaterZone.GetZoneBounds2D()", result); }
};
