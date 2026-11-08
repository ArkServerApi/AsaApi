#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct UZoneGraphTestingComponent : public UPrimitiveComponent
{
public:
	UZoneGraphTestingComponent() = delete;
	~UZoneGraphTestingComponent() = delete;
	UZoneGraphTestingComponent(const UZoneGraphTestingComponent&) = delete;
	UZoneGraphTestingComponent& operator=(const UZoneGraphTestingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UZoneGraphTestingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UZoneGraphTestingComponent"); }

	FDelegateHandle& OnDataAddedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UZoneGraphTestingComponent.OnDataAddedHandle"); }
	FDelegateHandle& OnDataRemovedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UZoneGraphTestingComponent.OnDataRemovedHandle"); }
	FZoneGraphLaneLocation& LaneLocationField() { return *GetNativePointerField<FZoneGraphLaneLocation*>(this, "UZoneGraphTestingComponent.LaneLocation"); }
	FZoneGraphLaneLocation& NextLaneLocationField() { return *GetNativePointerField<FZoneGraphLaneLocation*>(this, "UZoneGraphTestingComponent.NextLaneLocation"); }
	FZoneGraphLaneLocation& NearestLaneLocationField() { return *GetNativePointerField<FZoneGraphLaneLocation*>(this, "UZoneGraphTestingComponent.NearestLaneLocation"); }
	UE::Math::TVector<double>& SearchExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UZoneGraphTestingComponent.SearchExtent"); }
	float& AdvanceDistanceField() { return *GetNativePointerField<float*>(this, "UZoneGraphTestingComponent.AdvanceDistance"); }
	UE::Math::TVector<double>& NearestTestOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UZoneGraphTestingComponent.NearestTestOffset"); }
	FZoneGraphTagFilter& QueryFilterField() { return *GetNativePointerField<FZoneGraphTagFilter*>(this, "UZoneGraphTestingComponent.QueryFilter"); }
	bool& bDrawLinkedLanesField() { return *GetNativePointerField<bool*>(this, "UZoneGraphTestingComponent.bDrawLinkedLanes"); }
	bool& bDrawLaneTangentVectorsField() { return *GetNativePointerField<bool*>(this, "UZoneGraphTestingComponent.bDrawLaneTangentVectors"); }
	bool& bDrawLaneSmoothingField() { return *GetNativePointerField<bool*>(this, "UZoneGraphTestingComponent.bDrawLaneSmoothing"); }
	bool& bDrawBVTreeQueryField() { return *GetNativePointerField<bool*>(this, "UZoneGraphTestingComponent.bDrawBVTreeQuery"); }
	bool& bDrawLanePathField() { return *GetNativePointerField<bool*>(this, "UZoneGraphTestingComponent.bDrawLanePath"); }
	FZoneGraphLanePath& LanePathField() { return *GetNativePointerField<FZoneGraphLanePath*>(this, "UZoneGraphTestingComponent.LanePath"); }
	bool& bCustomTestsDisabledField() { return *GetNativePointerField<bool*>(this, "UZoneGraphTestingComponent.bCustomTestsDisabled"); }
	void OnZoneGraphDataChanged(const AZoneGraphData* ZoneGraphData) { NativeCall<void, const AZoneGraphData*>(this, "UZoneGraphTestingComponent.OnZoneGraphDataChanged(AZoneGraphData*)", ZoneGraphData); }
	void DisableCustomTests() { NativeCall<void>(this, "UZoneGraphTestingComponent.DisableCustomTests()"); }
	void OnUnregister() { NativeCall<void>(this, "UZoneGraphTestingComponent.OnUnregister()"); }
	void UpdateTests() { NativeCall<void>(this, "UZoneGraphTestingComponent.UpdateTests()"); }
	void OnRegister() { NativeCall<void>(this, "UZoneGraphTestingComponent.OnRegister()"); }
	void EnableCustomTests() { NativeCall<void>(this, "UZoneGraphTestingComponent.EnableCustomTests()"); }
};
