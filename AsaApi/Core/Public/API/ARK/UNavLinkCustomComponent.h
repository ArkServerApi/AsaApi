#pragma once
#include "BulkForward.h"
#include "UNavRelevantComponent.h"

struct UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	UNavLinkCustomComponent() = delete;
	~UNavLinkCustomComponent() = delete;
	UNavLinkCustomComponent(const UNavLinkCustomComponent&) = delete;
	UNavLinkCustomComponent& operator=(const UNavLinkCustomComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNavLinkCustomComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNavLinkCustomComponent"); }

	unsigned int& NavLinkUserIdField() { return *GetNativePointerField<unsigned int*>(this, "UNavLinkCustomComponent.NavLinkUserId"); }
	FNavLinkId& CustomLinkIdField() { return *GetNativePointerField<FNavLinkId*>(this, "UNavLinkCustomComponent.CustomLinkId"); }
	FNavLinkAuxiliaryId& AuxiliaryCustomLinkIdField() { return *GetNativePointerField<FNavLinkAuxiliaryId*>(this, "UNavLinkCustomComponent.AuxiliaryCustomLinkId"); }
	FNavAgentSelector& SupportedAgentsField() { return *GetNativePointerField<FNavAgentSelector*>(this, "UNavLinkCustomComponent.SupportedAgents"); }
	UE::Math::TVector<double>& LinkRelativeStartField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UNavLinkCustomComponent.LinkRelativeStart"); }
	UE::Math::TVector<double>& LinkRelativeEndField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UNavLinkCustomComponent.LinkRelativeEnd"); }
	TEnumAsByte<ENavLinkDirection::Type>& LinkDirectionField() { return *GetNativePointerField<TEnumAsByte<ENavLinkDirection::Type>*>(this, "UNavLinkCustomComponent.LinkDirection"); }
	UE::Math::TVector<double>& ObstacleOffsetField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UNavLinkCustomComponent.ObstacleOffset"); }
	UE::Math::TVector<double>& ObstacleExtentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "UNavLinkCustomComponent.ObstacleExtent"); }
	float& BroadcastRadiusField() { return *GetNativePointerField<float*>(this, "UNavLinkCustomComponent.BroadcastRadius"); }
	float& BroadcastIntervalField() { return *GetNativePointerField<float*>(this, "UNavLinkCustomComponent.BroadcastInterval"); }
	TArray<TWeakObjectPtr<UObject, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& MovingAgentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UObject, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UNavLinkCustomComponent.MovingAgents"); }
	FTimerHandle& TimerHandle_BroadcastStateChangeField() { return *GetNativePointerField<FTimerHandle*>(this, "UNavLinkCustomComponent.TimerHandle_BroadcastStateChange"); }
	BitFieldValue<bool, unsigned __int32> bLinkEnabled() { return { this, "UNavLinkCustomComponent.bLinkEnabled"}; }
	BitFieldValue<bool, unsigned __int32> bNotifyWhenEnabled() { return { this, "UNavLinkCustomComponent.bNotifyWhenEnabled"}; }
	BitFieldValue<bool, unsigned __int32> bNotifyWhenDisabled() { return { this, "UNavLinkCustomComponent.bNotifyWhenDisabled"}; }
	BitFieldValue<bool, unsigned __int32> bCreateBoxObstacle() { return { this, "UNavLinkCustomComponent.bCreateBoxObstacle"}; }
	void CalcAndCacheBounds() { NativeCall<void>(this, "UNavLinkCustomComponent.CalcAndCacheBounds()"); }
	UE::Math::TVector<double>* GetEndPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UNavLinkCustomComponent.GetEndPoint()", result); }
	bool IsLinkPathfindingAllowed(const UObject* Querier) { return NativeCall<bool, const UObject*>(this, "UNavLinkCustomComponent.IsLinkPathfindingAllowed(UObject*)", Querier); }
	bool OnLinkMoveStarted(UObject* PathComp, const UE::Math::TVector<double>& DestPoint) { return NativeCall<bool, UObject*, const UE::Math::TVector<double>&>(this, "UNavLinkCustomComponent.OnLinkMoveStarted(UObject*,UE::Math::TVector<double>&)", PathComp, DestPoint); }
	void GetSupportedAgents(FNavAgentSelector& OutSupportedAgents) { NativeCall<void, FNavAgentSelector&>(this, "UNavLinkCustomComponent.GetSupportedAgents(FNavAgentSelector&)", OutSupportedAgents); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UNavLinkCustomComponent.Serialize(FArchive&)", Ar); }
	UObject* _getUObject() { return NativeCall<UObject*>(this, "UNavLinkCustomComponent._getUObject()"); }
	void OnUnregister() { NativeCall<void>(this, "UNavLinkCustomComponent.OnUnregister()"); }
	void CollectNearbyAgents(TArray<UObject*, TSizedDefaultAllocator<32> >& NotifyList) { NativeCall<void, TArray<UObject*, TSizedDefaultAllocator<32> >&>(this, "UNavLinkCustomComponent.CollectNearbyAgents(TArray<UObject*,TSizedDefaultAllocator<32>>&)", NotifyList); }
	UE::Math::TVector<double>* GetStartPoint(UE::Math::TVector<double>* result) { return NativeCall<UE::Math::TVector<double>*, UE::Math::TVector<double>*>(this, "UNavLinkCustomComponent.GetStartPoint()", result); }
	bool HasMovingAgents() { return NativeCall<bool>(this, "UNavLinkCustomComponent.HasMovingAgents()"); }
	void BroadcastStateChange() { NativeCall<void>(this, "UNavLinkCustomComponent.BroadcastStateChange()"); }
	void SetEnabled(bool bNewEnabled) { NativeCall<void, bool>(this, "UNavLinkCustomComponent.SetEnabled(bool)", bNewEnabled); }
	void PostLoad() { NativeCall<void>(this, "UNavLinkCustomComponent.PostLoad()"); }
	void OnLinkMoveFinished(UObject* PathComp) { NativeCall<void, UObject*>(this, "UNavLinkCustomComponent.OnLinkMoveFinished(UObject*)", PathComp); }
	void GetNavigationData(FNavigationRelevantData& Data) { NativeCall<void, FNavigationRelevantData&>(this, "UNavLinkCustomComponent.GetNavigationData(FNavigationRelevantData&)", Data); }
	void OnRegister() { NativeCall<void>(this, "UNavLinkCustomComponent.OnRegister()"); }
	void GetLinkData(UE::Math::TVector<double>& LeftPt, UE::Math::TVector<double>& RightPt, ENavLinkDirection::Type& Direction) { NativeCall<void, UE::Math::TVector<double>&, UE::Math::TVector<double>&, ENavLinkDirection::Type&>(this, "UNavLinkCustomComponent.GetLinkData(UE::Math::TVector<double>&,UE::Math::TVector<double>&,ENavLinkDirection::Type&)", LeftPt, RightPt, Direction); }
};
