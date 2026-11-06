#pragma once
#include "BulkForward.h"
#include "AWaterBody.h"

struct AWaterBodyCustom : public AWaterBody
{
public:
	AWaterBodyCustom() = delete;
	~AWaterBodyCustom() = delete;
	AWaterBodyCustom(const AWaterBodyCustom&) = delete;
	AWaterBodyCustom& operator=(const AWaterBodyCustom&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostLoad() { NativeCall<void>(this, "AWaterBodyCustom.PostLoad()"); }
};
