#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct ULocalMessage : public UObject
{
public:
	ULocalMessage() = delete;
	~ULocalMessage() = delete;
	ULocalMessage(const ULocalMessage&) = delete;
	ULocalMessage& operator=(const ULocalMessage&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULocalMessage"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULocalMessage"); }
	void ClientReceive(const FClientReceiveData& ClientData) { NativeCall<void, const FClientReceiveData&>(this, "ULocalMessage.ClientReceive(FClientReceiveData&)", ClientData); }
};
