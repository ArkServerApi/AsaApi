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
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMissionDispatcherPoint"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMissionDispatcherPoint"); }

	TArray<FName, TSizedDefaultAllocator<32> >& MissionTagsField() { return *GetNativePointerField<TArray<FName, TSizedDefaultAllocator<32> >*>(this, "AMissionDispatcherPoint.MissionTags"); }
	void Destroyed() { NativeCall<void>(this, "AMissionDispatcherPoint.Destroyed()"); }
	void BeginPlay() { NativeCall<void>(this, "AMissionDispatcherPoint.BeginPlay()"); }
};
