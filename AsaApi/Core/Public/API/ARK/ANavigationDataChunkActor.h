#pragma once
#include "BulkForward.h"
#include "APartitionActor.h"

struct ANavigationDataChunkActor : public APartitionActor
{
public:
	ANavigationDataChunkActor() = delete;
	~ANavigationDataChunkActor() = delete;
	ANavigationDataChunkActor(const ANavigationDataChunkActor&) = delete;
	ANavigationDataChunkActor& operator=(const ANavigationDataChunkActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANavigationDataChunkActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANavigationDataChunkActor"); }

	void EndPlay(EEndPlayReason::Type EndPlayReason) { NativeCall<void, EEndPlayReason::Type>(this, "ANavigationDataChunkActor.EndPlay(EEndPlayReason::Type)", EndPlayReason); }
	void BeginPlay() { NativeCall<void>(this, "ANavigationDataChunkActor.BeginPlay()"); }
	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>& OutOrigin, UE::Math::TVector<double>& OutBoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>&, UE::Math::TVector<double>&, bool>(this, "ANavigationDataChunkActor.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, OutOrigin, OutBoxExtent, bIncludeFromChildActors); }
};
