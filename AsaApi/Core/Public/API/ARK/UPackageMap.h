#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UPackageMap : public UObject
{
public:
	UPackageMap() = delete;
	~UPackageMap() = delete;
	UPackageMap(const UPackageMap&) = delete;
	UPackageMap& operator=(const UPackageMap&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPackageMap"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPackageMap"); }
	bool& bShouldTrackUnmappedGuidsField() { return *GetNativePointerField<bool*>(this, "UPackageMap.bShouldTrackUnmappedGuids"); }
	FString& DebugContextStringField() { return *GetNativePointerField<FString*>(this, "UPackageMap.DebugContextString"); }
	bool PrintExportBatch() { return NativeCall<bool>(this, "UPackageMap.PrintExportBatch()"); }
	void ResetTrackedSyncLoadedGuids() { NativeCall<void>(this, "UPackageMap.ResetTrackedSyncLoadedGuids()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPackageMap.Serialize(FArchive&)", Ar); }
	void ReceivedNak(int NakPacketId) { NativeCall<void, int>(this, "UPackageMap.ReceivedNak(int)", NakPacketId); }
	void NotifyStreamingLevelUnload(UObject* UnloadedLevel) { NativeCall<void, UObject*>(this, "UPackageMap.NotifyStreamingLevelUnload(UObject*)", UnloadedLevel); }
	bool IsUsingRemoteObjectReferences() { return NativeCall<bool>(this, "UPackageMap.IsUsingRemoteObjectReferences()"); }
	void ReportSyncLoadsForProperty(const FProperty* Property, const UObject* Object) { NativeCall<void, const FProperty*, const UObject*>(this, "UPackageMap.ReportSyncLoadsForProperty(FProperty*,UObject*)", Property, Object); }
	void NotifyBunchCommit(int OutPacketId, const FOutBunch* OutBunch) { NativeCall<void, int, const FOutBunch*>(this, "UPackageMap.NotifyBunchCommit(int,FOutBunch*)", OutPacketId, OutBunch); }
	bool SerializeName(FArchive& Ar, FName& InName) { return NativeCall<bool, FArchive&, FName&>(this, "UPackageMap.SerializeName(FArchive&,FName&)", Ar, InName); }
	void ResetTrackedGuids(bool bShouldTrack) { NativeCall<void, bool>(this, "UPackageMap.ResetTrackedGuids(bool)", bShouldTrack); }
	bool IsGUIDBroken(const FNetworkGUID& NetGUID, bool bMustBeRegistered) { return NativeCall<bool, const FNetworkGUID&, bool>(this, "UPackageMap.IsGUIDBroken(FNetworkGUID&,bool)", NetGUID, bMustBeRegistered); }
	UObject* ResolvePathAndAssignNetGUID(const FNetworkGUID& NetGUID, const FString& PathName) { return NativeCall<UObject*, const FNetworkGUID&, const FString&>(this, "UPackageMap.ResolvePathAndAssignNetGUID(FNetworkGUID&,FString&)", NetGUID, PathName); }
	static bool StaticSerializeName(FArchive& Ar, FName& InName) { return NativeCall<bool, FArchive&, FName&>(nullptr, "UPackageMap.StaticSerializeName(FArchive&,FName&)", Ar, InName); }
	void GetNetGUIDStats(int& AckCount, int& UnAckCount, int& PendingCount) { NativeCall<void, int&, int&, int&>(this, "UPackageMap.GetNetGUIDStats(int&,int&,int&)", AckCount, UnAckCount, PendingCount); }
	bool SerializeNewActor(FArchive& Ar, UActorChannel* Channel, AActor*& Actor) { return NativeCall<bool, FArchive&, UActorChannel*, AActor*&>(this, "UPackageMap.SerializeNewActor(FArchive&,UActorChannel*,AActor*&)", Ar, Channel, Actor); }
	UObject* GetObjectFromNetGUID(const FNetworkGUID& NetGUID, bool bIgnoreMustBeMapped) { return NativeCall<UObject*, const FNetworkGUID&, bool>(this, "UPackageMap.GetObjectFromNetGUID(FNetworkGUID&,bool)", NetGUID, bIgnoreMustBeMapped); }
	void Primal_ReceivedNakRange(int StartingNakPacketId, int RangeLength) { NativeCall<void, int, int>(this, "UPackageMap.Primal_ReceivedNakRange(int,int)", StartingNakPacketId, RangeLength); }
	bool SerializeObject(FArchive& Ar, UClass* InClass, UObject*& Obj, FNetworkGUID* OutNetGUID, bool bForceSyncLoad) { return NativeCall<bool, FArchive&, UClass*, UObject*&, FNetworkGUID*, bool>(this, "UPackageMap.SerializeObject(FArchive&,UClass*,UObject*&,FNetworkGUID*,bool)", Ar, InClass, Obj, OutNetGUID, bForceSyncLoad); }
	void LogDebugInfo(FOutputDevice& Ar) { NativeCall<void, FOutputDevice&>(this, "UPackageMap.LogDebugInfo(FOutputDevice&)", Ar); }
	void ReceivedAck(int AckPacketId) { NativeCall<void, int>(this, "UPackageMap.ReceivedAck(int)", AckPacketId); }
};
