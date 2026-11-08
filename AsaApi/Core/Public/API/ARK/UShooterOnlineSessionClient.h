#pragma once
#include "BulkForward.h"
#include "UOnlineSessionClient.h"

struct UShooterOnlineSessionClient : public UOnlineSessionClient
{
public:
	UShooterOnlineSessionClient() = delete;
	~UShooterOnlineSessionClient() = delete;
	UShooterOnlineSessionClient(const UShooterOnlineSessionClient&) = delete;
	UShooterOnlineSessionClient& operator=(const UShooterOnlineSessionClient&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UShooterOnlineSessionClient"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UShooterOnlineSessionClient"); }

	bool ShouldAcceptInvite(int ControllerId, const FOnlineSessionSearchResult& SearchResult) { return NativeCall<bool, int, const FOnlineSessionSearchResult&>(this, "UShooterOnlineSessionClient.ShouldAcceptInvite(int,FOnlineSessionSearchResult&)", ControllerId, SearchResult); }
};
