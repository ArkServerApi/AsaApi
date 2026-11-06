#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AZoneGraphData : public AActor
{
public:
	AZoneGraphData() = delete;
	~AZoneGraphData() = delete;
	AZoneGraphData(const AZoneGraphData&) = delete;
	AZoneGraphData& operator=(const AZoneGraphData&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AZoneGraphData"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AZoneGraphData"); }

	bool& bRegisteredField() { return *GetNativePointerField<bool*>(this, "AZoneGraphData.bRegistered"); }
	bool& bEnableDrawingField() { return *GetNativePointerField<bool*>(this, "AZoneGraphData.bEnableDrawing"); }
	FZoneGraphStorage& ZoneStorageField() { return *GetNativePointerField<FZoneGraphStorage*>(this, "AZoneGraphData.ZoneStorage"); }
	unsigned int& CombinedShapeHashField() { return *GetNativePointerField<unsigned int*>(this, "AZoneGraphData.CombinedShapeHash"); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "AZoneGraphData.PreRegisterAllComponents()"); }
	bool UnregisterWithSubsystem() { return NativeCall<bool>(this, "AZoneGraphData.UnregisterWithSubsystem()"); }
	void PostActorCreated() { NativeCall<void>(this, "AZoneGraphData.PostActorCreated()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AZoneGraphData.PostUnregisterAllComponents()"); }
	void Destroyed() { NativeCall<void>(this, "AZoneGraphData.Destroyed()"); }
	void PostLoad() { NativeCall<void>(this, "AZoneGraphData.PostLoad()"); }
	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "AZoneGraphData.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	bool RegisterWithSubsystem() { return NativeCall<bool>(this, "AZoneGraphData.RegisterWithSubsystem()"); }
};
