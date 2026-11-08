#pragma once
#include "BulkForward.h"
#include "UScriptViewportClient.h"

struct UGameViewportClient : public UScriptViewportClient
{
public:
	UGameViewportClient() = delete;
	~UGameViewportClient() = delete;
	UGameViewportClient(const UGameViewportClient&) = delete;
	UGameViewportClient& operator=(const UGameViewportClient&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UGameViewportClient"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UGameViewportClient"); }

};
