#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AMissionDispatcherPoint : public AActor
{
public:
	AMissionDispatcherPoint() = delete;
	~AMissionDispatcherPoint() = delete;
	AMissionDispatcherPoint(const AMissionDispatcherPoint&) = delete;
	AMissionDispatcherPoint& operator=(const AMissionDispatcherPoint&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	TArray<FName, TSizedDefaultAllocator<32> >& MissionTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AMissionDispatcherPoint.MissionTags"); }
	void Destroyed() { NativeCall<void>(this, "AMissionDispatcherPoint.Destroyed()"); }
	void BeginPlay() { NativeCall<void>(this, "AMissionDispatcherPoint.BeginPlay()"); }
};
