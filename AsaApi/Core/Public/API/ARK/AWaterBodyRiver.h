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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostLoad() { NativeCall<void>(this, "AWaterBodyRiver.PostLoad()"); }
};
