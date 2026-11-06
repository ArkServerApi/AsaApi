#pragma once
#include "BulkForward.h"
#include "UZoneGraphAnnotationComponent.h"

struct USmartObjectZoneAnnotations : public UZoneGraphAnnotationComponent
{
public:
	USmartObjectZoneAnnotations() = delete;
	~USmartObjectZoneAnnotations() = delete;
	USmartObjectZoneAnnotations(const USmartObjectZoneAnnotations&) = delete;
	USmartObjectZoneAnnotations& operator=(const USmartObjectZoneAnnotations&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USmartObjectZoneAnnotations"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USmartObjectZoneAnnotations"); }

	FZoneGraphTagFilter& AffectedLaneTagsField() { return *GetNativePointerField<FZoneGraphTagFilter*>(this, "USmartObjectZoneAnnotations.AffectedLaneTags"); }
	FZoneGraphTag& BehaviorTagField() { return *GetNativePointerField<FZoneGraphTag*>(this, "USmartObjectZoneAnnotations.BehaviorTag"); }
	void PostZoneGraphDataAdded(const AZoneGraphData& ZoneGraphData) { NativeCall<void, const AZoneGraphData&>(this, "USmartObjectZoneAnnotations.PostZoneGraphDataAdded(AZoneGraphData&)", ZoneGraphData); }
	void PostSubsystemsInitialized() { NativeCall<void>(this, "USmartObjectZoneAnnotations.PostSubsystemsInitialized()"); }
	void TickAnnotation(float DeltaTime, FZoneGraphAnnotationTagContainer& BehaviorTagContainer) { NativeCall<void, float, FZoneGraphAnnotationTagContainer&>(this, "USmartObjectZoneAnnotations.TickAnnotation(float,FZoneGraphAnnotationTagContainer&)", DeltaTime, BehaviorTagContainer); }
	void PreZoneGraphDataRemoved(const AZoneGraphData& ZoneGraphData) { NativeCall<void, const AZoneGraphData&>(this, "USmartObjectZoneAnnotations.PreZoneGraphDataRemoved(AZoneGraphData&)", ZoneGraphData); }
};
