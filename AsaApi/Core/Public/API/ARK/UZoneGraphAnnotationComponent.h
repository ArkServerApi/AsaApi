#pragma once
#include "BulkForward.h"
#include "UDebugDrawComponent.h"

struct UZoneGraphAnnotationComponent : public UDebugDrawComponent
{
public:
	UZoneGraphAnnotationComponent() = delete;
	~UZoneGraphAnnotationComponent() = delete;
	UZoneGraphAnnotationComponent(const UZoneGraphAnnotationComponent&) = delete;
	UZoneGraphAnnotationComponent& operator=(const UZoneGraphAnnotationComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UZoneGraphAnnotationComponent"); }

	FDelegateHandle& OnPostZoneGraphDataAddedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UZoneGraphAnnotationComponent.OnPostZoneGraphDataAddedHandle"); }
	FDelegateHandle& OnPreZoneGraphDataRemovedHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UZoneGraphAnnotationComponent.OnPreZoneGraphDataRemovedHandle"); }
	FDelegateHandle& OnPostWorldInitDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UZoneGraphAnnotationComponent.OnPostWorldInitDelegateHandle"); }
	bool& bEnableDebugDrawingField() { return *GetNativePointerField<bool*>(this, "UZoneGraphAnnotationComponent.bEnableDebugDrawing"); }
	void OnPreZoneGraphDataRemoved(const AZoneGraphData* ZoneGraphData) { NativeCall<void, const AZoneGraphData*>(this, "UZoneGraphAnnotationComponent.OnPreZoneGraphDataRemoved(AZoneGraphData*)", ZoneGraphData); }
	void PostZoneGraphDataAdded(const AZoneGraphData& ZoneGraphData) { NativeCall<void, const AZoneGraphData&>(this, "UZoneGraphAnnotationComponent.PostZoneGraphDataAdded(AZoneGraphData&)", ZoneGraphData); }
	void TickAnnotation(float DeltaTime, FZoneGraphAnnotationTagContainer& AnnotationTagContainer) { NativeCall<void, float, FZoneGraphAnnotationTagContainer&>(this, "UZoneGraphAnnotationComponent.TickAnnotation(float,FZoneGraphAnnotationTagContainer&)", DeltaTime, AnnotationTagContainer); }
	void HandleEvents(const FInstancedStructContainer& Events) { NativeCall<void, const FInstancedStructContainer&>(this, "UZoneGraphAnnotationComponent.HandleEvents(FInstancedStructContainer&)", Events); }
	void OnRegister() { NativeCall<void>(this, "UZoneGraphAnnotationComponent.OnRegister()"); }
	void OnPostZoneGraphDataAdded(const AZoneGraphData* ZoneGraphData) { NativeCall<void, const AZoneGraphData*>(this, "UZoneGraphAnnotationComponent.OnPostZoneGraphDataAdded(AZoneGraphData*)", ZoneGraphData); }
	void PreZoneGraphDataRemoved(const AZoneGraphData& ZoneGraphData) { NativeCall<void, const AZoneGraphData&>(this, "UZoneGraphAnnotationComponent.PreZoneGraphDataRemoved(AZoneGraphData&)", ZoneGraphData); }
	void PostSubsystemsInitialized() { NativeCall<void>(this, "UZoneGraphAnnotationComponent.PostSubsystemsInitialized()"); }
	void OnUnregister() { NativeCall<void>(this, "UZoneGraphAnnotationComponent.OnUnregister()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UZoneGraphAnnotationComponent"); }
};
