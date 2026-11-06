#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AServerStatReplicator : public AInfo
{
public:
	AServerStatReplicator() = delete;
	~AServerStatReplicator() = delete;
	AServerStatReplicator(const AServerStatReplicator&) = delete;
	AServerStatReplicator& operator=(const AServerStatReplicator&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AServerStatReplicator"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AServerStatReplicator"); }

	bool& bUpdateStatNetField() { return *GetNativePointerField<bool*>(this, "AServerStatReplicator.bUpdateStatNet"); }
	bool& bOverwriteClientStatsField() { return *GetNativePointerField<bool*>(this, "AServerStatReplicator.bOverwriteClientStats"); }
	unsigned int& ChannelsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.Channels"); }
	unsigned int& InRateField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InRate"); }
	unsigned int& OutRateField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutRate"); }
	unsigned int& MaxPacketOverheadField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.MaxPacketOverhead"); }
	unsigned int& InRateClientMaxField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InRateClientMax"); }
	unsigned int& InRateClientMinField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InRateClientMin"); }
	unsigned int& InRateClientAvgField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InRateClientAvg"); }
	unsigned int& InPacketsClientMaxField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InPacketsClientMax"); }
	unsigned int& InPacketsClientMinField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InPacketsClientMin"); }
	unsigned int& InPacketsClientAvgField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InPacketsClientAvg"); }
	unsigned int& OutRateClientMaxField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutRateClientMax"); }
	unsigned int& OutRateClientMinField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutRateClientMin"); }
	unsigned int& OutRateClientAvgField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutRateClientAvg"); }
	unsigned int& OutPacketsClientMaxField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutPacketsClientMax"); }
	unsigned int& OutPacketsClientMinField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutPacketsClientMin"); }
	unsigned int& OutPacketsClientAvgField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutPacketsClientAvg"); }
	unsigned int& NetNumClientsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NetNumClients"); }
	unsigned int& InPacketsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InPackets"); }
	unsigned int& OutPacketsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutPackets"); }
	unsigned int& InBunchesField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InBunches"); }
	unsigned int& OutBunchesField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutBunches"); }
	unsigned int& OutLossField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.OutLoss"); }
	unsigned int& InLossField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.InLoss"); }
	unsigned int& VoiceBytesSentField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.VoiceBytesSent"); }
	unsigned int& VoiceBytesRecvField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.VoiceBytesRecv"); }
	unsigned int& VoicePacketsSentField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.VoicePacketsSent"); }
	unsigned int& VoicePacketsRecvField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.VoicePacketsRecv"); }
	unsigned int& PercentInVoiceField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.PercentInVoice"); }
	unsigned int& PercentOutVoiceField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.PercentOutVoice"); }
	unsigned int& NumActorChannelsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumActorChannels"); }
	unsigned int& NumConsideredActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumConsideredActors"); }
	unsigned int& PrioritizedActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.PrioritizedActors"); }
	unsigned int& NumRelevantActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumRelevantActors"); }
	unsigned int& NumRelevantDeletedActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumRelevantDeletedActors"); }
	unsigned int& NumReplicatedActorAttemptsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumReplicatedActorAttempts"); }
	unsigned int& NumReplicatedActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumReplicatedActors"); }
	unsigned int& NumActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumActors"); }
	unsigned int& NumNetActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumNetActors"); }
	unsigned int& NumDormantActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumDormantActors"); }
	unsigned int& NumInitiallyDormantActorsField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumInitiallyDormantActors"); }
	unsigned int& NumNetGUIDsAckdField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumNetGUIDsAckd"); }
	unsigned int& NumNetGUIDsPendingField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumNetGUIDsPending"); }
	unsigned int& NumNetGUIDsUnAckdField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NumNetGUIDsUnAckd"); }
	unsigned int& ObjPathBytesField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.ObjPathBytes"); }
	unsigned int& NetGUIDOutRateField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NetGUIDOutRate"); }
	unsigned int& NetGUIDInRateField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NetGUIDInRate"); }
	unsigned int& NetSaturatedField() { return *GetNativePointerField<unsigned int*>(this, "AServerStatReplicator.NetSaturated"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "AServerStatReplicator.Tick(float)", DeltaSeconds); }
	void BeginPlay() { NativeCall<void>(this, "AServerStatReplicator.BeginPlay()"); }
	void Destroyed() { NativeCall<void>(this, "AServerStatReplicator.Destroyed()"); }
};
