#pragma once
#include "BulkForward.h"
#include "ALight.h"

struct ADirectionalAmbientLight : public ALight
{
public:
	ADirectionalAmbientLight() = delete;
	~ADirectionalAmbientLight() = delete;
	ADirectionalAmbientLight(const ADirectionalAmbientLight&) = delete;
	ADirectionalAmbientLight& operator=(const ADirectionalAmbientLight&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void PostLoad() { NativeCall<void>(this, "ADirectionalAmbientLight.PostLoad()"); }
};
