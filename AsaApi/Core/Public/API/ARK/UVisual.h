#pragma once
#include "BulkForward.h"
#include "UObject.h"

struct UVisual : public UObject
{
public:
	UVisual() = delete;
	~UVisual() = delete;
	UVisual(const UVisual&) = delete;
	UVisual& operator=(const UVisual&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UVisual"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UVisual"); }

};
