#pragma once
#include "BulkForward.h"
#include "UInstancedStaticMeshComponent.h"

struct ULiveLinkMarkerVisualizer : public UInstancedStaticMeshComponent
{
public:
	ULiveLinkMarkerVisualizer() = delete;
	~ULiveLinkMarkerVisualizer() = delete;
	ULiveLinkMarkerVisualizer(const ULiveLinkMarkerVisualizer&) = delete;
	ULiveLinkMarkerVisualizer& operator=(const ULiveLinkMarkerVisualizer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULiveLinkMarkerVisualizer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULiveLinkMarkerVisualizer"); }

	FLiveLinkSubjectName& LiveLinkSubjectField() { return *GetNativePointerField<FLiveLinkSubjectName*>(this, "ULiveLinkMarkerVisualizer.LiveLinkSubject"); }
	bool& bEvaluateLiveLinkField() { return *GetNativePointerField<bool*>(this, "ULiveLinkMarkerVisualizer.bEvaluateLiveLink"); }
	bool& bDrawLabelsField() { return *GetNativePointerField<bool*>(this, "ULiveLinkMarkerVisualizer.bDrawLabels"); }
	TArray<FName, TSizedDefaultAllocator<32> >& MarkerLabelsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "ULiveLinkMarkerVisualizer.MarkerLabels"); }
	void OnRegister() { NativeCall<void>(this, "ULiveLinkMarkerVisualizer.OnRegister()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "ULiveLinkMarkerVisualizer.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void OnUnregister() { NativeCall<void>(this, "ULiveLinkMarkerVisualizer.OnUnregister()"); }
};
