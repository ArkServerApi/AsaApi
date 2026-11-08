#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct USoundConcurrency : public UObject
{
public:
	USoundConcurrency() = delete;
	~USoundConcurrency() = delete;
	USoundConcurrency(const USoundConcurrency&) = delete;
	USoundConcurrency& operator=(const USoundConcurrency&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USoundConcurrency"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USoundConcurrency"); }
	FSoundConcurrencySettings& ConcurrencyField() { return *GetNativePointerField<FSoundConcurrencySettings*>(this, "USoundConcurrency.Concurrency"); }
};
