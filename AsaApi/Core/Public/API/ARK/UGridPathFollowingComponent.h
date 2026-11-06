#pragma once
#include "BulkForward.h"
#include "UPathFollowingComponent.h"

struct UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	UGridPathFollowingComponent() = delete;
	~UGridPathFollowingComponent() = delete;
	UGridPathFollowingComponent(const UGridPathFollowingComponent&) = delete;
	UGridPathFollowingComponent& operator=(const UGridPathFollowingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGridPathFollowingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGridPathFollowingComponent"); }

	int& ActiveGridIdxField() { return *GetNativePointerField<int*>(this, "UGridPathFollowingComponent.ActiveGridIdx"); }
	int& ActiveGridIdField() { return *GetNativePointerField<int*>(this, "UGridPathFollowingComponent.ActiveGridId"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& GridPathPointsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "UGridPathFollowingComponent.GridPathPoints"); }
	int& GridMoveSegmentEndIndexField() { return *GetNativePointerField<int*>(this, "UGridPathFollowingComponent.GridMoveSegmentEndIndex"); }
	int& MoveSegmentStartIndexOffGridField() { return *GetNativePointerField<int*>(this, "UGridPathFollowingComponent.MoveSegmentStartIndexOffGrid"); }
	BitFieldValue<bool, unsigned __int32> bIsPathEndInsideGrid() { return { this, "UGridPathFollowingComponent.bIsPathEndInsideGrid"}; }
	BitFieldValue<bool, unsigned __int32> bHasGridPath() { return { this, "UGridPathFollowingComponent.bHasGridPath"}; }
	void UpdateActiveGrid(const UE::Math::TVector<double>& CurrentLocation) { NativeCall<void, const UE::Math::TVector<double>&>(this, "UGridPathFollowingComponent.UpdateActiveGrid(UE::Math::TVector<double>&)", CurrentLocation); }
	void Initialize() { NativeCall<void>(this, "UGridPathFollowingComponent.Initialize()"); }
	void Reset() { NativeCall<void>(this, "UGridPathFollowingComponent.Reset()"); }
	void OnPathUpdated() { NativeCall<void>(this, "UGridPathFollowingComponent.OnPathUpdated()"); }
	void UpdatePathSegment() { NativeCall<void>(this, "UGridPathFollowingComponent.UpdatePathSegment()"); }
};
