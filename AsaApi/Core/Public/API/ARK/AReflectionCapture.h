#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AReflectionCapture : public AActor
{
public:
	AReflectionCapture() = delete;
	~AReflectionCapture() = delete;
	AReflectionCapture(const AReflectionCapture&) = delete;
	AReflectionCapture& operator=(const AReflectionCapture&) = delete;
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AReflectionCapture"); }

	void PostLoad() { NativeCall<void>(this, "AReflectionCapture.PostLoad()"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AReflectionCapture.IsLevelBoundsRelevant()"); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("AReflectionCapture"); }
};
