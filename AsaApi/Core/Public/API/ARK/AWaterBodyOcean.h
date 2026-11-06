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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostLoad() { NativeCall<void>(this, "AWaterBodyOcean.PostLoad()"); }
};
