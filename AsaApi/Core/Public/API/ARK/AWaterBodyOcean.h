#pragma once
#include "BulkForward.h"
#include "AWaterBody.h"

struct AWaterBodyOcean : public AWaterBody
{
public:
	AWaterBodyOcean() = delete;
	~AWaterBodyOcean() = delete;
	AWaterBodyOcean(const AWaterBodyOcean&) = delete;
	AWaterBodyOcean& operator=(const AWaterBodyOcean&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterBodyOcean"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterBodyOcean"); }

	void PostLoad() { NativeCall<void>(this, "AWaterBodyOcean.PostLoad()"); }
};
