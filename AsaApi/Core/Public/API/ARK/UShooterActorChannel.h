#pragma once
#include "BulkForward.h"
#include "UActorChannel.h"

struct UShooterActorChannel : public UActorChannel
{
public:
	UShooterActorChannel() = delete;
	~UShooterActorChannel() = delete;
	UShooterActorChannel(const UShooterActorChannel&) = delete;
	UShooterActorChannel& operator=(const UShooterActorChannel&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterActorChannel"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterActorChannel"); }

	bool ReadyForDormancy(bool debug) { return NativeCall<bool, bool>(this, "UShooterActorChannel.ReadyForDormancy(bool)", debug); }
	int WriteContentBlockPayload(UObject* Obj, FNetBitWriter& Bunch, bool bHasRepLayout, FNetBitWriter& Payload) { return NativeCall<int, UObject*, FNetBitWriter&, bool, FNetBitWriter&>(this, "UShooterActorChannel.WriteContentBlockPayload(UObject*,FNetBitWriter&,bool,FNetBitWriter&)", Obj, Bunch, bHasRepLayout, Payload); }
};
