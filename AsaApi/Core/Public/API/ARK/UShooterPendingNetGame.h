#pragma once
#include "BulkForward.h"
#include "UPendingNetGame.h"

struct UShooterPendingNetGame : public UPendingNetGame
{
public:
	UShooterPendingNetGame() = delete;
	~UShooterPendingNetGame() = delete;
	UShooterPendingNetGame(const UShooterPendingNetGame&) = delete;
	UShooterPendingNetGame& operator=(const UShooterPendingNetGame&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterPendingNetGame"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterPendingNetGame"); }

	TArray<__int64, TSizedDefaultAllocator<32> >& ModIdsEnabledOnServerField() { return *GetNativePointerField<TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterPendingNetGame.ModIdsEnabledOnServer"); }
	TArray<__int64, TSizedDefaultAllocator<32> >& PassiveModIdsEnabledOnServerField() { return *GetNativePointerField<TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterPendingNetGame.PassiveModIdsEnabledOnServer"); }
	TArray<__int64, TSizedDefaultAllocator<32> >& FileIdsEnabledOnServerField() { return *GetNativePointerField<TArray<__int64, TSizedDefaultAllocator<32> >*>(this, "UShooterPendingNetGame.FileIdsEnabledOnServer"); }
	bool& bModsEnabledField() { return *GetNativePointerField<bool*>(this, "UShooterPendingNetGame.bModsEnabled"); }
	void InitNetDriver(UNetDriver* InNetDriver) { NativeCall<void, UNetDriver*>(this, "UShooterPendingNetGame.InitNetDriver(UNetDriver*)", InNetDriver); }
	void SendInitialJoin() { NativeCall<void>(this, "UShooterPendingNetGame.SendInitialJoin()"); }
	FString* GetPlatformAuthToken(FString* result) { return NativeCall<FString*, FString*>(this, "UShooterPendingNetGame.GetPlatformAuthToken()", result); }
	void NotifyControlMessage(UNetConnection* Connection, unsigned char MessageType, FInBunch& Bunch) { NativeCall<void, UNetConnection*, unsigned char, FInBunch&>(this, "UShooterPendingNetGame.NotifyControlMessage(UNetConnection*,unsignedchar,FInBunch&)", Connection, MessageType, Bunch); }
	bool IsUsingSharedAccount(const FUniqueNetIdRepl& UniqueNetId) { return NativeCall<bool, const FUniqueNetIdRepl&>(this, "UShooterPendingNetGame.IsUsingSharedAccount(FUniqueNetIdRepl&)", UniqueNetId); }
};
