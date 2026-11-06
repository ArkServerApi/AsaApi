#pragma once
#include "BulkForward.h"
#include "AWaterBody.h"

struct AWaterBodyLake : public AWaterBody
{
public:
	AWaterBodyLake() = delete;
	~AWaterBodyLake() = delete;
	AWaterBodyLake(const AWaterBodyLake&) = delete;
	AWaterBodyLake& operator=(const AWaterBodyLake&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterBodyLake"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterBodyLake"); }

	void PostLoad() { NativeCall<void>(this, "AWaterBodyLake.PostLoad()"); }
};
