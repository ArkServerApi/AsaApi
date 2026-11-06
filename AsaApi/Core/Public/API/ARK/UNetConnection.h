#pragma once


struct UNetConnection : UPlayer
{
	// Fields

	//TArray<TObjectPtr<UChildConnection>, TSizedDefaultAllocator<32> >& ChildrenField() { return *GetNativePointerField<TArray<TObjectPtr<UChildConnection>, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.Children"); }
	TObjectPtr<UNetDriver>& DriverField() { return *GetNativePointerField<TObjectPtr<UNetDriver>*>(this, "UNetConnection.Driver"); }
	TSubclassOf<UPackageMap>& PackageMapClassField() { return *GetNativePointerField<TSubclassOf<UPackageMap>*>(this, "UNetConnection.PackageMapClass"); }
	TObjectPtr<UPackageMap>& PackageMapField() { return *GetNativePointerField<TObjectPtr<UPackageMap>*>(this, "UNetConnection.PackageMap"); }
	TArray<TObjectPtr<UChannel>, TSizedDefaultAllocator<32> >& OpenChannelsField() { return *GetNativePointerField<TArray<TObjectPtr<UChannel>, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.OpenChannels"); }
	TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >& SentTemporariesField() { return *GetNativePointerField<TArray<TObjectPtr<AActor>, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.SentTemporaries"); }
	TObjectPtr<AActor>& ViewTargetField() { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "UNetConnection.ViewTarget"); }
	TObjectPtr<AActor>& OwningActorField() { return *GetNativePointerField<TObjectPtr<AActor>*>(this, "UNetConnection.OwningActor"); }
	int& MaxPacketField() { return *GetNativePointerField<int*>(this, "UNetConnection.MaxPacket"); }
	//FURL& URLField() { return *GetNativePointerField<FURL*>(this, "UNetConnection.URL"); }
	//TSharedPtr<FInternetAddr>& RemoteAddrField() { return *GetNativePointerField<TSharedPtr<FInternetAddr>*>(this, "UNetConnection.RemoteAddr"); }
	int& NumPacketIdBitsField() { return *GetNativePointerField<int*>(this, "UNetConnection.NumPacketIdBits"); }
	int& NumBunchBitsField() { return *GetNativePointerField<int*>(this, "UNetConnection.NumBunchBits"); }
	int& NumAckBitsField() { return *GetNativePointerField<int*>(this, "UNetConnection.NumAckBits"); }
	int& NumPaddingBitsField() { return *GetNativePointerField<int*>(this, "UNetConnection.NumPaddingBits"); }
	int& MaxPacketHandlerBitsField() { return *GetNativePointerField<int*>(this, "UNetConnection.MaxPacketHandlerBits"); }
	EConnectionState& StateField() { return *GetNativePointerField<EConnectionState*>(this, "UNetConnection.State"); }
	//TUniquePtr<PacketHandler, TDefaultDelete<PacketHandler> >& HandlerField() { return *GetNativePointerField<TUniquePtr<PacketHandler, TDefaultDelete<PacketHandler> >*>(this, "UNetConnection.Handler"); }
	//TWeakPtr<StatelessConnectHandlerComponent, 1>& StatelessConnectComponentField() { return *GetNativePointerField<TWeakPtr<StatelessConnectHandlerComponent, 1>*>(this, "UNetConnection.StatelessConnectComponent"); }
	FUniqueNetIdRepl& PlayerIdField() { return *GetNativePointerField<FUniqueNetIdRepl*>(this, "UNetConnection.PlayerId"); }
	int& PacketOverheadField() { return *GetNativePointerField<int*>(this, "UNetConnection.PacketOverhead"); }
	FString& ChallengeField() { return *GetNativePointerField<FString*>(this, "UNetConnection.Challenge"); }
	FString& ClientResponseField() { return *GetNativePointerField<FString*>(this, "UNetConnection.ClientResponse"); }
	int& ResponseIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.ResponseId"); }
	FString& RequestURLField() { return *GetNativePointerField<FString*>(this, "UNetConnection.RequestURL"); }
	EClientLoginState::Type& ClientLoginStateField() { return *GetNativePointerField<EClientLoginState::Type*>(this, "UNetConnection.ClientLoginState"); }
	long double& LastReceiveTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastReceiveTime"); }
	long double& LastReceiveRealtimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastReceiveRealtime"); }
	long double& LastGoodPacketRealtimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastGoodPacketRealtime"); }
	long double& LastSendTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastSendTime"); }
	long double& LastTickTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastTickTime"); }
	int& QueuedBitsField() { return *GetNativePointerField<int*>(this, "UNetConnection.QueuedBits"); }
	int& TickCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.TickCount"); }
	unsigned int& LastProcessedFrameField() { return *GetNativePointerField<unsigned int*>(this, "UNetConnection.LastProcessedFrame"); }
	long double& LastRecvAckTimestampField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastRecvAckTimestamp"); }
	long double& ConnectTimestampField() { return *GetNativePointerField<long double*>(this, "UNetConnection.ConnectTimestamp"); }
	//FPacketTimestamp& LastOSReceiveTimeField() { return *GetNativePointerField<FPacketTimestamp*>(this, "UNetConnection.LastOSReceiveTime"); }
	bool& bSendBufferHasDummyPacketInfoField() { return *GetNativePointerField<bool*>(this, "UNetConnection.bSendBufferHasDummyPacketInfo"); }
	//FBitWriterMark& HeaderMarkForPacketInfoField() { return *GetNativePointerField<FBitWriterMark*>(this, "UNetConnection.HeaderMarkForPacketInfo"); }
	int& PreviousJitterTimeDeltaField() { return *GetNativePointerField<int*>(this, "UNetConnection.PreviousJitterTimeDelta"); }
	long double& PreviousPacketSendTimeInSField() { return *GetNativePointerField<long double*>(this, "UNetConnection.PreviousPacketSendTimeInS"); }
	//FBitWriterMark& LastStartField() { return *GetNativePointerField<FBitWriterMark*>(this, "UNetConnection.LastStart"); }
	//FBitWriterMark& LastEndField() { return *GetNativePointerField<FBitWriterMark*>(this, "UNetConnection.LastEnd"); }
	bool& TimeSensitiveField() { return *GetNativePointerField<bool*>(this, "UNetConnection.TimeSensitive"); }
	FOutBunch*& LastOutBunchField() { return *GetNativePointerField<FOutBunch**>(this, "UNetConnection.LastOutBunch"); }
	FOutBunch& LastOutField() { return *GetNativePointerField<FOutBunch*>(this, "UNetConnection.LastOut"); }
	//FBitWriter& SendBunchHeaderField() { return *GetNativePointerField<FBitWriter*>(this, "UNetConnection.SendBunchHeader"); }
	long double& StatUpdateTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.StatUpdateTime"); }
	float& StatPeriodField() { return *GetNativePointerField<float*>(this, "UNetConnection.StatPeriod"); }
	float& AvgLagField() { return *GetNativePointerField<float*>(this, "UNetConnection.AvgLag"); }
	long double& LagAccField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LagAcc"); }
	int& LagCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.LagCount"); }
	long double& LastTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastTime"); }
	long double& FrameTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.FrameTime"); }
	long double& CumulativeTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.CumulativeTime"); }
	long double& AverageFrameTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.AverageFrameTime"); }
	int& CountedFramesField() { return *GetNativePointerField<int*>(this, "UNetConnection.CountedFrames"); }
	int& InBytesField() { return *GetNativePointerField<int*>(this, "UNetConnection.InBytes"); }
	int& OutBytesField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutBytes"); }
	int& InTotalBytesField() { return *GetNativePointerField<int*>(this, "UNetConnection.InTotalBytes"); }
	int& OutTotalBytesField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutTotalBytes"); }
	int& InPacketsField() { return *GetNativePointerField<int*>(this, "UNetConnection.InPackets"); }
	int& OutPacketsField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutPackets"); }
	int& InTotalPacketsField() { return *GetNativePointerField<int*>(this, "UNetConnection.InTotalPackets"); }
	int& OutTotalPacketsField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutTotalPackets"); }
	int& InBytesPerSecondField() { return *GetNativePointerField<int*>(this, "UNetConnection.InBytesPerSecond"); }
	int& OutBytesPerSecondField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutBytesPerSecond"); }
	int& InPacketsPerSecondField() { return *GetNativePointerField<int*>(this, "UNetConnection.InPacketsPerSecond"); }
	int& OutPacketsPerSecondField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutPacketsPerSecond"); }
	int& InPacketsLostField() { return *GetNativePointerField<int*>(this, "UNetConnection.InPacketsLost"); }
	int& OutPacketsLostField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutPacketsLost"); }
	int& InTotalPacketsLostField() { return *GetNativePointerField<int*>(this, "UNetConnection.InTotalPacketsLost"); }
	int& OutTotalPacketsLostField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutTotalPacketsLost"); }
	int& OutTotalAcksField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutTotalAcks"); }
	int& InTotalHandlerPacketsField() { return *GetNativePointerField<int*>(this, "UNetConnection.InTotalHandlerPackets"); }
	//TPacketLossData<3>& InPacketsLossPercentageField() { return *GetNativePointerField<TPacketLossData<3>*>(this, "UNetConnection.InPacketsLossPercentage"); }
	//TPacketLossData<3>& OutPacketsLossPercentageField() { return *GetNativePointerField<TPacketLossData<3>*>(this, "UNetConnection.OutPacketsLossPercentage"); }
	int& StatPeriodCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.StatPeriodCount"); }
	float& AverageJitterInMSField() { return *GetNativePointerField<float*>(this, "UNetConnection.AverageJitterInMS"); }
	//FNetConnAnalyticsVars& AnalyticsVarsField() { return *GetNativePointerField<FNetConnAnalyticsVars*>(this, "UNetConnection.AnalyticsVars"); }
	//TSharedPtr<FNetConnAnalyticsData, 1>& NetAnalyticsDataField() { return *GetNativePointerField<TSharedPtr<FNetConnAnalyticsData, 1>*>(this, "UNetConnection.NetAnalyticsData"); }
	//FBitWriter& SendBufferField() { return *GetNativePointerField<FBitWriter*>(this, "UNetConnection.SendBuffer"); }
	int& InPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.InPacketId"); }
	int& OutPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutPacketId"); }
	int& OutAckPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutAckPacketId"); }
	int& DefaultMaxChannelSizeField() { return *GetNativePointerField<int*>(this, "UNetConnection.DefaultMaxChannelSize"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& MaxChannelSizeField();
	TArray<UChannel*, TSizedDefaultAllocator<32> >& ChannelsField() { return *GetNativePointerField<TArray<UChannel*, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.Channels"); }
	TArray<int, TSizedDefaultAllocator<32> >& OutReliableField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.OutReliable"); }
	TArray<int, TSizedDefaultAllocator<32> >& InReliableField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.InReliable"); }
	TArray<int, TSizedDefaultAllocator<32> >& PendingOutRecField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.PendingOutRec"); }
	int& InitOutReliableField() { return *GetNativePointerField<int*>(this, "UNetConnection.InitOutReliable"); }
	int& InitInReliableField() { return *GetNativePointerField<int*>(this, "UNetConnection.InitInReliable"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// unsigned int& EngineNetworkProtocolVersionField();
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// unsigned int& GameNetworkProtocolVersionField();
	FCustomVersionContainer& NetworkCustomVersionsField() { return *GetNativePointerField<FCustomVersionContainer*>(this, "UNetConnection.NetworkCustomVersions"); }
	long double& LogCallLastTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LogCallLastTime"); }
	int& LogCallCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.LogCallCount"); }
	int& LogSustainedCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.LogSustainedCount"); }
	unsigned int& PerPacketTinyTokenToSendField() { return *GetNativePointerField<unsigned int*>(this, "UNetConnection.PerPacketTinyTokenToSend"); }
	unsigned int& RecentFullTinyTokenACKsField() { return *GetNativePointerField<unsigned int*>(this, "UNetConnection.RecentFullTinyTokenACKs"); }
	TArray<unsigned char, TSizedDefaultAllocator<32> >& CurrentFullTokenForServerACKField() { return *GetNativePointerField<TArray<unsigned char, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.CurrentFullTokenForServerACK"); }
	//TMap<TWeakObjectPtr<AActor>, UActorChannel*, FDefaultSetAllocator, TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor>, UActorChannel*, 0> >& ActorChannelsField() { return *GetNativePointerField<TMap<TWeakObjectPtr<AActor>, UActorChannel*, FDefaultSetAllocator, TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor>, UActorChannel*, 0> >*>(this, "UNetConnection.ActorChannels"); }
	//UReplicationConnectionDriver*& ReplicationConnectionDriverField() { return *GetNativePointerField<UReplicationConnectionDriver**>(this, "UNetConnection.ReplicationConnectionDriver"); }
	FPackageFileVersion& PackageVersionUEField() { return *GetNativePointerField<FPackageFileVersion*>(this, "UNetConnection.PackageVersionUE"); }
	int& PackageVersionLicenseeUEField() { return *GetNativePointerField<int*>(this, "UNetConnection.PackageVersionLicenseeUE"); }
	//FEngineVersion& EngineVersionField() { return *GetNativePointerField<FEngineVersion*>(this, "UNetConnection.EngineVersion"); }
	TSet<FNetworkGUID, DefaultKeyFuncs<FNetworkGUID, 0>, FDefaultSetAllocator>& DestroyedStartupOrDormantActorGUIDsField() { return *GetNativePointerField<TSet<FNetworkGUID, DefaultKeyFuncs<FNetworkGUID, 0>, FDefaultSetAllocator>*>(this, "UNetConnection.DestroyedStartupOrDormantActorGUIDs"); }
	TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>& ClientMakingVisibleLevelNamesField() { return *GetNativePointerField<TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>*>(this, "UNetConnection.ClientMakingVisibleLevelNames"); }
	TMap<FNetworkGUID, TArray<UActorChannel*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FNetworkGUID, TArray<UActorChannel*, TSizedDefaultAllocator<32> >, 0> >& KeepProcessingActorChannelBunchesMapField() { return *GetNativePointerField<TMap<FNetworkGUID, TArray<UActorChannel*, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FNetworkGUID, TArray<UActorChannel*, TSizedDefaultAllocator<32> >, 0> >*>(this, "UNetConnection.KeepProcessingActorChannelBunchesMap"); }
	//TMap<FObjectKey, TSharedRef<FObjectReplicator, 1>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FObjectKey, TSharedRef<FObjectReplicator, 1>, 0> >& DormantReplicatorMapField() { return *GetNativePointerField<TMap<FObjectKey, TSharedRef<FObjectReplicator, 1>, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FObjectKey, TSharedRef<FObjectReplicator, 1>, 0> >*>(this, "UNetConnection.DormantReplicatorMap"); }
	//UE::Net::Private::FDormantReplicatorHolder& DormantReplicatorSetField() { return *GetNativePointerField<UE::Net::Private::FDormantReplicatorHolder*>(this, "UNetConnection.DormantReplicatorSet"); }
	TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>& ClientVisibleLevelNamesField() { return *GetNativePointerField<TSet<FName, DefaultKeyFuncs<FName, 0>, FDefaultSetAllocator>*>(this, "UNetConnection.ClientVisibleLevelNames"); }
	TArray<TObjectPtr<UChannel>, TSizedDefaultAllocator<32> >& ChannelsToTickField() { return *GetNativePointerField<TArray<TObjectPtr<UChannel>, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.ChannelsToTick"); }
	//FHistogram& NetConnectionHistogramField() { return *GetNativePointerField<FHistogram*>(this, "UNetConnection.NetConnectionHistogram"); }
	FName& PlayerOnlinePlatformNameField() { return *GetNativePointerField<FName*>(this, "UNetConnection.PlayerOnlinePlatformName"); }
	TMap<FName, bool, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, bool, 0> >& ClientVisibleActorOutersField() { return *GetNativePointerField<TMap<FName, bool, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, bool, 0> >*>(this, "UNetConnection.ClientVisibleActorOuters"); }
	//TMap<FName, FUpdateLevelVisibilityLevelInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FUpdateLevelVisibilityLevelInfo, 0> >& PendingUpdateLevelVisibilityField() { return *GetNativePointerField<TMap<FName, FUpdateLevelVisibilityLevelInfo, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FUpdateLevelVisibilityLevelInfo, 0> >*>(this, "UNetConnection.PendingUpdateLevelVisibility"); }
	//TMap<FName, FNetLevelVisibilityTransactionId, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FNetLevelVisibilityTransactionId, 0> >& ClientPendingStreamingStatusRequestField() { return *GetNativePointerField<TMap<FName, FNetLevelVisibilityTransactionId, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FName, FNetLevelVisibilityTransactionId, 0> >*>(this, "UNetConnection.ClientPendingStreamingStatusRequest"); }
	FName& ClientWorldPackageNameField() { return *GetNativePointerField<FName*>(this, "UNetConnection.ClientWorldPackageName"); }
	TMap<FString, TArray<float, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<float, TSizedDefaultAllocator<32> >, 0> >& ActorsStarvedByClassTimeMapField() { return *GetNativePointerField<TMap<FString, TArray<float, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<float, TSizedDefaultAllocator<32> >, 0> >*>(this, "UNetConnection.ActorsStarvedByClassTimeMap"); }
	TMap<int, FNetworkGUID, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FNetworkGUID, 0> >& IgnoringChannelsField() { return *GetNativePointerField<TMap<int, FNetworkGUID, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FNetworkGUID, 0> >*>(this, "UNetConnection.IgnoringChannels"); }
	TMap<int, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, int, 0> >& ChannelIndexMapField() { return *GetNativePointerField<TMap<int, int, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, int, 0> >*>(this, "UNetConnection.ChannelIndexMap"); }
	TSet<FNetworkGUID, DefaultKeyFuncs<FNetworkGUID, 0>, FDefaultSetAllocator>& IgnoredBunchGuidsField() { return *GetNativePointerField<TSet<FNetworkGUID, DefaultKeyFuncs<FNetworkGUID, 0>, FDefaultSetAllocator>*>(this, "UNetConnection.IgnoredBunchGuids"); }
	TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>& IgnoredBunchChannelsField() { return *GetNativePointerField<TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>*>(this, "UNetConnection.IgnoredBunchChannels"); }
	TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>& ReservedChannelsField() { return *GetNativePointerField<TSet<int, DefaultKeyFuncs<int, 0>, FDefaultSetAllocator>*>(this, "UNetConnection.ReservedChannels"); }
	bool& bIgnoreReservedChannelsField() { return *GetNativePointerField<bool*>(this, "UNetConnection.bIgnoreReservedChannels"); }
	TArray<FOutBunch*, TSizedDefaultAllocator<32> >& OutgoingBunchesField() { return *GetNativePointerField<TArray<FOutBunch*, TSizedDefaultAllocator<32> >*>(this, "UNetConnection.OutgoingBunches"); }
	//FWrittenChannelsRecord& ChannelRecordField() { return *GetNativePointerField<FWrittenChannelsRecord*>(this, "UNetConnection.ChannelRecord"); }
	//FNetPacketNotify& PacketNotifyField() { return *GetNativePointerField<FNetPacketNotify*>(this, "UNetConnection.PacketNotify"); }
	int& LastNotifiedPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.LastNotifiedPacketId"); }
	unsigned int& OutTotalNotifiedPacketsField() { return *GetNativePointerField<unsigned int*>(this, "UNetConnection.OutTotalNotifiedPackets"); }
	unsigned int& HasDirtyAcksField() { return *GetNativePointerField<unsigned int*>(this, "UNetConnection.HasDirtyAcks"); }
	bool& bConnectionPendingCloseDueToSocketSendFailureField() { return *GetNativePointerField<bool*>(this, "UNetConnection.bConnectionPendingCloseDueToSocketSendFailure"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// int& TotalOutOfOrderPacketsField();
	int& TotalOutOfOrderPacketsLostField() { return *GetNativePointerField<int*>(this, "UNetConnection.TotalOutOfOrderPacketsLost"); }
	int& TotalOutOfOrderPacketsRecoveredField() { return *GetNativePointerField<int*>(this, "UNetConnection.TotalOutOfOrderPacketsRecovered"); }
	int& TotalOutOfOrderPacketsDuplicateField() { return *GetNativePointerField<int*>(this, "UNetConnection.TotalOutOfOrderPacketsDuplicate"); }
	//TOptional<TCircularBuffer<TUniquePtr<FBitReader, TDefaultDelete<FBitReader> > > >& PacketOrderCacheField() { return *GetNativePointerField<TOptional<TCircularBuffer<TUniquePtr<FBitReader, TDefaultDelete<FBitReader> > > >*>(this, "UNetConnection.PacketOrderCache"); }
	int& PacketOrderCacheStartIdxField() { return *GetNativePointerField<int*>(this, "UNetConnection.PacketOrderCacheStartIdx"); }
	int& PacketOrderCacheCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.PacketOrderCacheCount"); }
	//FNetConnectionSaturationAnalytics& SaturationAnalyticsField() { return *GetNativePointerField<FNetConnectionSaturationAnalytics*>(this, "UNetConnection.SaturationAnalytics"); }
	//FNetConnectionPacketAnalytics& PacketAnalyticsField() { return *GetNativePointerField<FNetConnectionPacketAnalytics*>(this, "UNetConnection.PacketAnalytics"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// unsigned int& ConnectionIdField();
	AActor*& RepContextActorField() { return *GetNativePointerField<AActor**>(this, "UNetConnection.RepContextActor"); }
	ULevel*& RepContextLevelField() { return *GetNativePointerField<ULevel**>(this, "UNetConnection.RepContextLevel"); }
	bool& bLoggedFlushNetQueuedBitsOverflowField() { return *GetNativePointerField<bool*>(this, "UNetConnection.bLoggedFlushNetQueuedBitsOverflow"); }
	//TUniquePtr<FRPCDoSDetection, TDefaultDelete<FRPCDoSDetection> >& RPCDoSField() { return *GetNativePointerField<TUniquePtr<FRPCDoSDetection, TDefaultDelete<FRPCDoSDetection> >*>(this, "UNetConnection.RPCDoS"); }
	//TUniquePtr<UE::Net::FNetConnectionFaultRecovery, TDefaultDelete<UE::Net::FNetConnectionFaultRecovery> >& FaultRecoveryField() { return *GetNativePointerField<TUniquePtr<UE::Net::FNetConnectionFaultRecovery, TDefaultDelete<UE::Net::FNetConnectionFaultRecovery> >*>(this, "UNetConnection.FaultRecovery"); }
	//TPimplPtr<UE::Net::FNetPing, 0>& NetPingField() { return *GetNativePointerField<TPimplPtr<UE::Net::FNetPing, 0>*>(this, "UNetConnection.NetPing"); }
	//TOptional<FNetworkCongestionControl>& NetworkCongestionControlField() { return *GetNativePointerField<TOptional<FNetworkCongestionControl>*>(this, "UNetConnection.NetworkCongestionControl"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> InternalAck() { return { this, "UNetConnection.InternalAck" }; }
	BitFieldValue<bool, unsigned __int32> bInternalAck() { return { this, "UNetConnection.bInternalAck" }; }
	BitFieldValue<bool, unsigned __int32> bReplay() { return { this, "UNetConnection.bReplay" }; }
	BitFieldValue<bool, unsigned __int32> bForceInitialDirty() { return { this, "UNetConnection.bForceInitialDirty" }; }
	BitFieldValue<bool, unsigned __int32> bUnlimitedBunchSizeAllowed() { return { this, "UNetConnection.bUnlimitedBunchSizeAllowed" }; }
	BitFieldValue<bool, unsigned __int32> bPendingDestroy() { return { this, "UNetConnection.bPendingDestroy" }; }
	BitFieldValue<bool, unsigned __int32> bHasArkLoginLock() { return { this, "UNetConnection.bHasArkLoginLock" }; }

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UActorChannel* FindActorChannelRef(const TWeakObjectPtr<AActor>* Actor);
	void Close() { NativeCall<void>(this, "UNetConnection.Close()"); }
	FString* RemoteAddressToString(FString* result) { return NativeCall<FString*, FString*>(this, "UNetConnection.RemoteAddressToString()", result); }
	int GetAddrPort() { return NativeCall<int>(this, "UNetConnection.GetAddrPort()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UNetConnection"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UNetConnection"); }
	void StartTickingChannel(UChannel* Channel) { NativeCall<void, UChannel*>(this, "UNetConnection.StartTickingChannel(UChannel*)", Channel); }
	FString* LowLevelGetRemoteAddress(FString* result, bool bAppendPort) { return NativeCall<FString*, FString*, bool>(this, "UNetConnection.LowLevelGetRemoteAddress(bool)", result, bAppendPort); }
	FString* LowLevelDescribe(FString* result) { return NativeCall<FString*, FString*>(this, "UNetConnection.LowLevelDescribe()", result); }
	//void LowLevelSend(void* Data, int CountBits, FOutPacketTraits* Traits) { NativeCall<void, void*, int, FOutPacketTraits*>(this, "UNetConnection.LowLevelSend(void*,int,FOutPacketTraits*)", Data, CountBits, Traits); }
	//void InitRemoteConnection(UNetDriver* InDriver, FSocket* InSocket, const struct FURL* InURL, const FInternetAddr* InRemoteAddr, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver*, FSocket*, const FURL*, const FInternetAddr*, EConnectionState, int, int>(this, "UNetConnection.InitRemoteConnection(UNetDriver*,FSocket*,FURL*,FInternetAddr*,EConnectionState,int,int)", InDriver, InSocket, InURL, InRemoteAddr, InState, InMaxPacket, InPacketOverhead); }
	//void InitLocalConnection(UNetDriver* InDriver, FSocket* InSocket, const struct FURL* InURL, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver*, FSocket*, const FURL*, EConnectionState, int, int>(this, "UNetConnection.InitLocalConnection(UNetDriver*,FSocket*,FURL*,EConnectionState,int,int)", InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead); }
	//void InitChannelData() { NativeCall<void>(this, "UNetConnection.InitChannelData()"); }
	//void InitBase(UNetDriver* InDriver, FSocket* InSocket, const FURL* InURL, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver*, FSocket*, const FURL*, EConnectionState, int, int>(this, "UNetConnection.InitBase(UNetDriver*,FSocket*,FURL*,EConnectionState,int,int)", InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead); }
	//void InitConnection(UNetDriver* InDriver, EConnectionState InState, const FURL* InURL, int InConnectionSpeed, int InMaxPacket) { NativeCall<void, UNetDriver*, EConnectionState, const FURL*, int, int>(this, "UNetConnection.InitConnection(UNetDriver*,EConnectionState,FURL*,int,int)", InDriver, InState, InURL, InConnectionSpeed, InMaxPacket); }
	//void InitHandler() { NativeCall<void>(this, "UNetConnection.InitHandler()"); }
	//void InitSequence(int IncomingSequence, int OutgoingSequence) { NativeCall<void, int, int>(this, "UNetConnection.InitSequence(int,int)", IncomingSequence, OutgoingSequence); }
	//void NotifyAnalyticsProvider() { NativeCall<void>(this, "UNetConnection.NotifyAnalyticsProvider()"); }
	//void EnableEncryption(const FEncryptionData* EncryptionData) { NativeCall<void, const FEncryptionData*>(this, "UNetConnection.EnableEncryption(FEncryptionData*)", EncryptionData); }
	//void EnableEncryptionServer(const FEncryptionData* EncryptionData) { NativeCall<void, const FEncryptionData*>(this, "UNetConnection.EnableEncryptionServer(FEncryptionData*)", EncryptionData); }
	//void SetEncryptionData(const FEncryptionData* EncryptionData) { NativeCall<void, const FEncryptionData*>(this, "UNetConnection.SetEncryptionData(FEncryptionData*)", EncryptionData); }
	bool IsEncryptionEnabled() { return NativeCall<bool>(this, "UNetConnection.IsEncryptionEnabled()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UNetConnection.Serialize(FStructuredArchiveRecord)", Ar); }
	void Close(struct FNetResult* CloseReason) { NativeCall<void, FNetResult*>(this, "UNetConnection.Close(UE::Net::FNetResult&&)", CloseReason); }
	void HandleNetResultOrClose(ENetCloseResult InResult) { NativeCall<void, ENetCloseResult>(this, "UNetConnection.HandleNetResultOrClose(ENetCloseResult)", InResult); }
	void SendCloseReason(FNetResult* CloseReason) { NativeCall<void, FNetResult*>(this, "UNetConnection.SendCloseReason(UE::Net::FNetResult&&)", CloseReason); }
	void HandleReceiveCloseReason(const FString* CloseReasonList) { NativeCall<void, const FString*>(this, "UNetConnection.HandleReceiveCloseReason(FString&)", CloseReasonList); }
	//void HandleReceiveNetUpgrade(unsigned int RemoteNetworkVersion, EEngineNetworkRuntimeFeatures RemoteNetworkFeatures, UE::Net::ENetUpgradeSource NetUpgradeSource) { NativeCall<void, unsigned int, EEngineNetworkRuntimeFeatures, UE::Net::ENetUpgradeSource>(this, "UNetConnection.HandleReceiveNetUpgrade(unsignedint,EEngineNetworkRuntimeFeatures,UE::Net::ENetUpgradeSource)", RemoteNetworkVersion, RemoteNetworkFeatures, NetUpgradeSource); }
	FString* Describe(FString* result) { return NativeCall<FString*, FString*>(this, "UNetConnection.Describe()", result); }
	void CleanUp() { NativeCall<void>(this, "UNetConnection.CleanUp()"); }
	void DestroyOwningActor() { NativeCall<void>(this, "UNetConnection.DestroyOwningActor()"); }
	void FinishDestroy() { NativeCall<void>(this, "UNetConnection.FinishDestroy()"); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UNetConnection.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	UWorld* GetWorld() { return NativeCall<UWorld*>(this, "UNetConnection.GetWorld()"); }
	bool Exec(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UNetConnection.Exec(UWorld*,wchar_t*,FOutputDevice&)", InWorld, Cmd, Ar); }
	//FNetLevelVisibilityTransactionId* UpdateLevelStreamStatusChangedTransactionId(FNetLevelVisibilityTransactionId* result, const ULevelStreaming* LevelObject, const FName PackageName, bool bShouldBeVisible) { return NativeCall<FNetLevelVisibilityTransactionId*, FNetLevelVisibilityTransactionId*, const ULevelStreaming*, const FName, bool>(this, "UNetConnection.UpdateLevelStreamStatusChangedTransactionId(FNetLevelVisibilityTransactionId*,ULevelStreaming*,FName,bool)", result, LevelObject, PackageName, bShouldBeVisible); }
	bool ClientHasInitializedLevelFor(const AActor* TestActor) { return NativeCall<bool, const AActor*>(this, "UNetConnection.ClientHasInitializedLevelFor(AActor*)", TestActor); }
	bool UpdateCachedLevelVisibility(const FName* PackageName) { return NativeCall<bool, const FName*>(this, "UNetConnection.UpdateCachedLevelVisibility(FName&)", PackageName); }
	void UpdateAllCachedLevelVisibility() { NativeCall<void>(this, "UNetConnection.UpdateAllCachedLevelVisibility()"); }
	//void UpdateLevelVisibility(const FUpdateLevelVisibilityLevelInfo* LevelVisibility) { NativeCall<void, const FUpdateLevelVisibilityLevelInfo*>(this, "UNetConnection.UpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo*)", LevelVisibility); }
	//void UpdateLevelVisibilityInternal(const FUpdateLevelVisibilityLevelInfo* LevelVisibility) { NativeCall<void, const FUpdateLevelVisibilityLevelInfo*>(this, "UNetConnection.UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo*)", LevelVisibility); }
	void ValidateSendBuffer() { NativeCall<void>(this, "UNetConnection.ValidateSendBuffer()"); }
	void InitSendBuffer() { NativeCall<void>(this, "UNetConnection.InitSendBuffer()"); }
	void ReceivedRawPacket(void* InData, int Count) { NativeCall<void, void*, int>(this, "UNetConnection.ReceivedRawPacket(void*,int)", InData, Count); }
	void PreTickDispatch() { NativeCall<void>(this, "UNetConnection.PreTickDispatch()"); }
	void PostTickDispatch() { NativeCall<void>(this, "UNetConnection.PostTickDispatch()"); }
	void FlushPacketOrderCache(bool bFlushWholeCache) { NativeCall<void, bool>(this, "UNetConnection.FlushPacketOrderCache(bool)", bFlushWholeCache); }
	void FlushNet(bool bIgnoreSimulation) { NativeCall<void, bool>(this, "UNetConnection.FlushNet(bool)", bIgnoreSimulation); }
	int IsNetReady(bool Saturate) { return NativeCall<int, bool>(this, "UNetConnection.IsNetReady(bool)", Saturate); }
	//void ReceivedAck(int AckPacketId, TArray<FChannelCloseInfo, TSizedInlineAllocator<8, 32, TSizedDefaultAllocator<32> > >* OutChannelsToClose) { NativeCall<void, int, TArray<FChannelCloseInfo, TSizedInlineAllocator<8, 32, TSizedDefaultAllocator<32> > >*>(this, "UNetConnection.ReceivedAck(int,TArray<FChannelCloseInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>>>*)", AckPacketId, OutChannelsToClose); }
	void ReceivedNak(int NakPacketId) { NativeCall<void, int>(this, "UNetConnection.ReceivedNak(int)", NakPacketId); }
	//void WritePacketHeader(FBitWriter* Writer) { NativeCall<void, FBitWriter*>(this, "UNetConnection.WritePacketHeader(FBitWriter*)", Writer); }
	//bool ReadPacketInfo(FBitReader* Reader, bool bHasPacketInfoPayload) { return NativeCall<bool, FBitReader*, bool>(this, "UNetConnection.ReadPacketInfo(FBitReader*,bool)", Reader, bHasPacketInfoPayload); }
	//FNetworkGUID* GetActorGUIDFromOpenBunch(FNetworkGUID* result, FInBunch* Bunch) { return NativeCall<FNetworkGUID*, FNetworkGUID*, FInBunch*>(this, "UNetConnection.GetActorGUIDFromOpenBunch(FNetworkGUID*,FInBunch*)", result, Bunch); }
	//void ReceivedPacket(FBitReader* Reader, bool bIsReinjectedPacket) { NativeCall<void, FBitReader*, bool>(this, "UNetConnection.ReceivedPacket(FBitReader*,bool)", Reader, bIsReinjectedPacket); }
	void RestoreRemappedChannel(const int ChIndex) { NativeCall<void, const int>(this, "UNetConnection.RestoreRemappedChannel(int)", ChIndex); }
	void SetAllowExistingChannelIndex(bool bAllow) { NativeCall<void, bool>(this, "UNetConnection.SetAllowExistingChannelIndex(bool)", bAllow); }
	void SetIgnoreReservedChannels(bool bInIgnoreReservedChannels) { NativeCall<void, bool>(this, "UNetConnection.SetIgnoreReservedChannels(bool)", bInIgnoreReservedChannels); }
	void PrepareWriteBitsToSendBuffer(const int SizeInBits, const int ExtraSizeInBits) { NativeCall<void, const int, const int>(this, "UNetConnection.PrepareWriteBitsToSendBuffer(int,int)", SizeInBits, ExtraSizeInBits); }
	//int WriteBitsToSendBufferInternal(const unsigned __int8* Bits, const int SizeInBits, const unsigned __int8* ExtraBits, const int ExtraSizeInBits, UNetConnection::EWriteBitsDataType DataType) { return NativeCall<int, const unsigned __int8*, const int, const unsigned __int8*, const int, UNetConnection::EWriteBitsDataType>(this, "UNetConnection.WriteBitsToSendBufferInternal(unsigned__int8*,int,unsigned__int8*,int,UNetConnection::EWriteBitsDataType)", Bits, SizeInBits, ExtraBits, ExtraSizeInBits, DataType); }
	//TSharedPtr<FObjectReplicator, 1>* CreateReplicatorForNewActorChannel(TSharedPtr<FObjectReplicator, 1>* result, UObject* Object) { return NativeCall<TSharedPtr<FObjectReplicator, 1> *, TSharedPtr<FObjectReplicator, 1>*, UObject*>(this, "UNetConnection.CreateReplicatorForNewActorChannel(TSharedPtr<FObjectReplicator,1>*,UObject*)", result, Object); }
	//int SendRawBunch(FOutBunch* Bunch, bool InAllowMerge, const FNetTraceCollector* BunchCollector) { return NativeCall<int, FOutBunch*, bool, const FNetTraceCollector*>(this, "UNetConnection.SendRawBunch(FOutBunch*,bool,FNetTraceCollector*)", Bunch, InAllowMerge, BunchCollector); }
	int GetFreeChannelIndex(const FName* ChName) { return NativeCall<int, const FName*>(this, "UNetConnection.GetFreeChannelIndex(FName&)", ChName); }
	UChannel* CreateChannelByName(const FName* ChName, EChannelCreateFlags CreateFlags, int ChIndex) { return NativeCall<UChannel*, const FName*, EChannelCreateFlags, int>(this, "UNetConnection.CreateChannelByName(FName&,EChannelCreateFlags,int)", ChName, CreateFlags, ChIndex); }
	//UVoiceChannel* GetVoiceChannel() { return NativeCall<UVoiceChannel*>(this, "UNetConnection.GetVoiceChannel()"); }
	//UBattlEyeChannel* GetBattlEyeChannel() { return NativeCall<UBattlEyeChannel*>(this, "UNetConnection.GetBattlEyeChannel()"); }
	float GetTimeoutValue() { return NativeCall<float>(this, "UNetConnection.GetTimeoutValue()"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UNetConnection.Tick(float)", DeltaSeconds); }
	void HandleConnectionTimeout(const FString* Error) { NativeCall<void, const FString*>(this, "UNetConnection.HandleConnectionTimeout(FString&)", Error); }
	void HandleClientPlayer(APlayerController* PC, UNetConnection* NetConnection) { NativeCall<void, APlayerController*, UNetConnection*>(this, "UNetConnection.HandleClientPlayer(APlayerController*,UNetConnection*)", PC, NetConnection); }
	bool ShouldReplicateVoicePacketFrom(const FUniqueNetId* Sender) { return NativeCall<bool, const FUniqueNetId*>(this, "UNetConnection.ShouldReplicateVoicePacketFrom(FUniqueNetId&)", Sender); }
	void ResetGameWorldState() { NativeCall<void>(this, "UNetConnection.ResetGameWorldState()"); }
	void ClearDormantReplicatorsReference() { NativeCall<void>(this, "UNetConnection.ClearDormantReplicatorsReference()"); }
	void FlushDormancy(AActor* Actor) { NativeCall<void, AActor*>(this, "UNetConnection.FlushDormancy(AActor*)", Actor); }
	void FlushDormancyForObject(AActor* DormantActor, UObject* ReplicatedObject) { NativeCall<void, AActor*, UObject*>(this, "UNetConnection.FlushDormancyForObject(AActor*,UObject*)", DormantActor, ReplicatedObject); }
	void DestroyIgnoredActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UNetConnection.DestroyIgnoredActor(AActor*)", Actor); }
	//     void CleanupDormantReplicatorsForActor(AActor* Actor) { NativeCall<void, AActor*>(this, "UNetConnection.CleanupDormantReplicatorsForActor(AActor*)", Actor); }
	// FUNCTION MISSING: UNetConnection.CleanupDormantReplicatorsForActor(AActor*)
	void SendChallengeControlMessage() { NativeCall<void>(this, "UNetConnection.SendChallengeControlMessage()"); }
	//void SendChallengeControlMessage(const FEncryptionKeyResponse* Response) { NativeCall<void, const FEncryptionKeyResponse*>(this, "UNetConnection.SendChallengeControlMessage(FEncryptionKeyResponse*)", Response); }
	void NotifyActorDestroyed(AActor* Actor, bool IsSeamlessTravel) { NativeCall<void, AActor*, bool>(this, "UNetConnection.NotifyActorDestroyed(AActor*,bool)", Actor, IsSeamlessTravel); }
	//void NotifyActorChannelCleanedUp(UActorChannel* Channel, EChannelCloseReason CloseReason) { NativeCall<void, UActorChannel*, EChannelCloseReason>(this, "UNetConnection.NotifyActorChannelCleanedUp(UActorChannel*,EChannelCloseReason)", Channel, CloseReason); }
	void SetNetVersionsOnArchive(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UNetConnection.SetNetVersionsOnArchive(FArchive&)", Ar); }
	//     void Primal_ReceivedNakRange(int StartingNakPacketId, int RangeLength) { NativeCall<void, int, int>(this, "UNetConnection.Primal_ReceivedNakRange(int,int)", StartingNakPacketId, RangeLength); }
	// FUNCTION MISSING: UNetConnection.Primal_ReceivedNakRange(int,int)
	bool CanMulticast(AActor* toActor, bool bCheckDormancy) { return NativeCall<bool, AActor*, bool>(this, "UNetConnection.CanMulticast(AActor*,bool)", toActor, bCheckDormancy); }
};