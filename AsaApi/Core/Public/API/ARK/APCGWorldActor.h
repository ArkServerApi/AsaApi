#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct APCGWorldActor : public AActor
{
public:
	APCGWorldActor() = delete;
	~APCGWorldActor() = delete;
	APCGWorldActor(const APCGWorldActor&) = delete;
	APCGWorldActor& operator=(const APCGWorldActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APCGWorldActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APCGWorldActor"); }

	unsigned int& PartitionGridSizeField() { return *GetNativePointerField<unsigned int*>(this, "APCGWorldActor.PartitionGridSize"); }
	bool& bTreatPlayerControllersAsGenerationSourcesField() { return *GetNativePointerField<bool*>(this, "APCGWorldActor.bTreatPlayerControllersAsGenerationSources"); }
	bool& bEnableWorldPartitionGenerationSourcesField() { return *GetNativePointerField<bool*>(this, "APCGWorldActor.bEnableWorldPartitionGenerationSources"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "APCGWorldActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void PostInitProperties() { NativeCall<void>(this, "APCGWorldActor.PostInitProperties()"); }
	void BeginDestroy() { NativeCall<void>(this, "APCGWorldActor.BeginDestroy()"); }
	void BeginPlay() { NativeCall<void>(this, "APCGWorldActor.BeginPlay()"); }
	void Serialize(FArchive& Archive) { NativeCall<void, FArchive&>(this, "APCGWorldActor.Serialize(FArchive&)", Archive); }
};
