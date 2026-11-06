#pragma once
#include "BulkForward.h"
#include "UZoneGraphAnnotationComponent.h"

struct UZoneGraphDisturbanceAnnotation : public UZoneGraphAnnotationComponent
{
public:
	UZoneGraphDisturbanceAnnotation() = delete;
	~UZoneGraphDisturbanceAnnotation() = delete;
	UZoneGraphDisturbanceAnnotation(const UZoneGraphDisturbanceAnnotation&) = delete;
	UZoneGraphDisturbanceAnnotation& operator=(const UZoneGraphDisturbanceAnnotation&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UZoneGraphDisturbanceAnnotation"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UZoneGraphDisturbanceAnnotation"); }

	FZoneGraphTag& DangerAnnotationTagField() { return *GetNativePointerField<FZoneGraphTag*>(this, "UZoneGraphDisturbanceAnnotation.DangerAnnotationTag"); }
	FZoneGraphTag& ObstacleAnnotationTagField() { return *GetNativePointerField<FZoneGraphTag*>(this, "UZoneGraphDisturbanceAnnotation.ObstacleAnnotationTag"); }
	FZoneGraphTagFilter& AffectedLaneTagsField() { return *GetNativePointerField<FZoneGraphTagFilter*>(this, "UZoneGraphDisturbanceAnnotation.AffectedLaneTags"); }
	FZoneGraphTagFilter& EscapeLaneTagsField() { return *GetNativePointerField<FZoneGraphTagFilter*>(this, "UZoneGraphDisturbanceAnnotation.EscapeLaneTags"); }
	float& IdealSpanLengthField() { return *GetNativePointerField<float*>(this, "UZoneGraphDisturbanceAnnotation.IdealSpanLength"); }
	bool& bDisturbancesChangedField() { return *GetNativePointerField<bool*>(this, "UZoneGraphDisturbanceAnnotation.bDisturbancesChanged"); }
	FZoneGraphTagMask& PreviouslyAppliedTagsField() { return *GetNativePointerField<FZoneGraphTagMask*>(this, "UZoneGraphDisturbanceAnnotation.PreviouslyAppliedTags"); }
	void PostZoneGraphDataAdded(const AZoneGraphData& ZoneGraphData) { NativeCall<void, const AZoneGraphData&>(this, "UZoneGraphDisturbanceAnnotation.PostZoneGraphDataAdded(AZoneGraphData&)", ZoneGraphData); }
	void PostSubsystemsInitialized() { NativeCall<void>(this, "UZoneGraphDisturbanceAnnotation.PostSubsystemsInitialized()"); }
	void TickAnnotation(float DeltaTime, FZoneGraphAnnotationTagContainer& AnnotationTagContainer) { NativeCall<void, float, FZoneGraphAnnotationTagContainer&>(this, "UZoneGraphDisturbanceAnnotation.TickAnnotation(float,FZoneGraphAnnotationTagContainer&)", DeltaTime, AnnotationTagContainer); }
	void UpdateAnnotationTags(FZoneGraphAnnotationTagContainer& AnnotationTagContainer) { NativeCall<void, FZoneGraphAnnotationTagContainer&>(this, "UZoneGraphDisturbanceAnnotation.UpdateAnnotationTags(FZoneGraphAnnotationTagContainer&)", AnnotationTagContainer); }
	void CalculateEscapeGraph(FZoneGraphDataEscapeGraph& EscapeGraph) { NativeCall<void, FZoneGraphDataEscapeGraph&>(this, "UZoneGraphDisturbanceAnnotation.CalculateEscapeGraph(FZoneGraphDataEscapeGraph&)", EscapeGraph); }
	void PreZoneGraphDataRemoved(const AZoneGraphData& ZoneGraphData) { NativeCall<void, const AZoneGraphData&>(this, "UZoneGraphDisturbanceAnnotation.PreZoneGraphDataRemoved(AZoneGraphData&)", ZoneGraphData); }
	void HandleEvents(const FInstancedStructContainer& Events) { NativeCall<void, const FInstancedStructContainer&>(this, "UZoneGraphDisturbanceAnnotation.HandleEvents(FInstancedStructContainer&)", Events); }
};
