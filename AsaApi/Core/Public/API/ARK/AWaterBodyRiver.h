#pragma once
#include "BulkForward.h"
#include "AWaterBody.h"

struct AWaterBodyRiver : public AWaterBody
{
public:
	AWaterBodyRiver() = delete;
	~AWaterBodyRiver() = delete;
	AWaterBodyRiver(const AWaterBodyRiver&) = delete;
	AWaterBodyRiver& operator=(const AWaterBodyRiver&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWaterBodyRiver"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWaterBodyRiver"); }

	void PostLoad() { NativeCall<void>(this, "AWaterBodyRiver.PostLoad()"); }
};
