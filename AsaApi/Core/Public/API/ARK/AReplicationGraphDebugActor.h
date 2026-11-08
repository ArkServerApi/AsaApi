#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AReplicationGraphDebugActor : public AActor
{
public:
	AReplicationGraphDebugActor() = delete;
	~AReplicationGraphDebugActor() = delete;
	AReplicationGraphDebugActor(const AReplicationGraphDebugActor&) = delete;
	AReplicationGraphDebugActor& operator=(const AReplicationGraphDebugActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AReplicationGraphDebugActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AReplicationGraphDebugActor"); }

	bool IsReplayRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>& SrcLocation, float CullDistanceSquared) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>&, float>(this, "AReplicationGraphDebugActor.IsReplayRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&,float)", RealViewer, ViewTarget, SrcLocation, CullDistanceSquared); }
	void ServerPrintCullDistances_Implementation() { NativeCall<void>(this, "AReplicationGraphDebugActor.ServerPrintCullDistances_Implementation()"); }
	void ClientCellInfo_Implementation(UE::Math::TVector<double>* CellLocation, UE::Math::TVector<double>* CellExtent, const TArray<AActor*, TSizedDefaultAllocator<32> >& Actors) { if (!CellLocation) throw std::invalid_argument("Null native value parameter"); if (!CellExtent) throw std::invalid_argument("Null native value parameter"); return NativeCall<void, UE :: Math :: TVector < double >, UE :: Math :: TVector < double >, const TArray < AActor * , TSizedDefaultAllocator < 32 > > &>(this, "AReplicationGraphDebugActor.ClientCellInfo_Implementation(UE::Math::TVector<double>,UE::Math::TVector<double>,TArray<AActor*,TSizedDefaultAllocator<32>>&)", *CellLocation, *CellExtent, Actors); }
	UNetConnection* GetNetConnection() { return NativeCall<UNetConnection*>(this, "AReplicationGraphDebugActor.GetNetConnection()"); }
	void ServerStopDebugging_Implementation() { NativeCall<void>(this, "AReplicationGraphDebugActor.ServerStopDebugging_Implementation()"); }
	void ServerCellInfo_Implementation() { NativeCall<void>(this, "AReplicationGraphDebugActor.ServerCellInfo_Implementation()"); }
	void ServerSetConditionalActorBreakpoint_Implementation(AActor* Actor) { NativeCall<void, AActor*>(this, "AReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint_Implementation(AActor*)", Actor); }
	void ServerPrintAllActorInfo_Implementation(const FString& Str) { NativeCall<void, const FString&>(this, "AReplicationGraphDebugActor.ServerPrintAllActorInfo_Implementation(FString&)", Str); }
	void ServerSetPeriodFrameForClass_Implementation(UClass* Class, int PeriodFrame) { NativeCall<void, UClass*, int>(this, "AReplicationGraphDebugActor.ServerSetPeriodFrameForClass_Implementation(UClass*,int)", Class, PeriodFrame); }
	void ServerSetCullDistanceForClass_Implementation(UClass* Class, float CullDistance) { NativeCall<void, UClass*, float>(this, "AReplicationGraphDebugActor.ServerSetCullDistanceForClass_Implementation(UClass*,float)", Class, CullDistance); }
	void ServerStartDebugging_Implementation() { NativeCall<void>(this, "AReplicationGraphDebugActor.ServerStartDebugging_Implementation()"); }
	bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const UE::Math::TVector<double>& SrcLocation) { return NativeCall<bool, const AActor*, const AActor*, const UE::Math::TVector<double>&>(this, "AReplicationGraphDebugActor.IsNetRelevantFor(AActor*,AActor*,UE::Math::TVector<double>&)", RealViewer, ViewTarget, SrcLocation); }
};
