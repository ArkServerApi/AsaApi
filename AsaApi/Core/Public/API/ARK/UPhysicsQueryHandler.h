#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UPhysicsQueryHandler : public UObject
{
public:
	UPhysicsQueryHandler() = delete;
	~UPhysicsQueryHandler() = delete;
	UPhysicsQueryHandler(const UPhysicsQueryHandler&) = delete;
	UPhysicsQueryHandler& operator=(const UPhysicsQueryHandler&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsQueryHandler"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsQueryHandler"); }
	bool AreAsyncRequestsAdded() { return NativeCall<bool>(this, "UPhysicsQueryHandler.AreAsyncRequestsAdded()"); }
	void VerifyAsyncRequestsAreCompletedOrAbort() { NativeCall<void>(this, "UPhysicsQueryHandler.VerifyAsyncRequestsAreCompletedOrAbort()"); }
};
