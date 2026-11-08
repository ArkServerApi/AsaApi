#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	UMockDataMeshTrackerComponent() = delete;
	~UMockDataMeshTrackerComponent() = delete;
	UMockDataMeshTrackerComponent(const UMockDataMeshTrackerComponent&) = delete;
	UMockDataMeshTrackerComponent& operator=(const UMockDataMeshTrackerComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMockDataMeshTrackerComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMockDataMeshTrackerComponent"); }

	bool& ScanWorldField() { return *GetNativePointerField<bool*>(this, "UMockDataMeshTrackerComponent.ScanWorld"); }
	bool& RequestNormalsField() { return *GetNativePointerField<bool*>(this, "UMockDataMeshTrackerComponent.RequestNormals"); }
	bool& RequestVertexConfidenceField() { return *GetNativePointerField<bool*>(this, "UMockDataMeshTrackerComponent.RequestVertexConfidence"); }
	EMeshTrackerVertexColorMode& VertexColorModeField() { return *GetNativePointerField<EMeshTrackerVertexColorMode*>(this, "UMockDataMeshTrackerComponent.VertexColorMode"); }
	TArray<FColor, TSizedDefaultAllocator<32> >& BlockVertexColorsField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "UMockDataMeshTrackerComponent.BlockVertexColors"); }
	FLinearColor& VertexColorFromConfidenceZeroField() { return *GetNativePointerField<FLinearColor*>(this, "UMockDataMeshTrackerComponent.VertexColorFromConfidenceZero"); }
	FLinearColor& VertexColorFromConfidenceOneField() { return *GetNativePointerField<FLinearColor*>(this, "UMockDataMeshTrackerComponent.VertexColorFromConfidenceOne"); }
	float& UpdateIntervalField() { return *GetNativePointerField<float*>(this, "UMockDataMeshTrackerComponent.UpdateInterval"); }
	FMockDataMeshTrackerImpl*& ImplField() { return *GetNativePointerField<FMockDataMeshTrackerImpl**>(this, "UMockDataMeshTrackerComponent.Impl"); }
	float& LastUpdateTimeField() { return *GetNativePointerField<float*>(this, "UMockDataMeshTrackerComponent.LastUpdateTime"); }
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "UMockDataMeshTrackerComponent.CurrentTime"); }
	int& UpdateCountField() { return *GetNativePointerField<int*>(this, "UMockDataMeshTrackerComponent.UpdateCount"); }
	int& NumBlocksField() { return *GetNativePointerField<int*>(this, "UMockDataMeshTrackerComponent.NumBlocks"); }
	void BeginDestroy() { NativeCall<void>(this, "UMockDataMeshTrackerComponent.BeginDestroy()"); }
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) { NativeCall<void, float, ELevelTick, FActorComponentTickFunction*>(this, "UMockDataMeshTrackerComponent.TickComponent(float,ELevelTick,FActorComponentTickFunction*)", DeltaTime, TickType, ThisTickFunction); }
	void UpdateBlock(int BlockIndex) { NativeCall<void, int>(this, "UMockDataMeshTrackerComponent.UpdateBlock(int)", BlockIndex); }
	void RemoveBlock(int BlockIndex) { NativeCall<void, int>(this, "UMockDataMeshTrackerComponent.RemoveBlock(int)", BlockIndex); }
	void FinishDestroy() { NativeCall<void>(this, "UMockDataMeshTrackerComponent.FinishDestroy()"); }
};
