#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ASceneCapture : public AActor
{
public:
	ASceneCapture() = delete;
	~ASceneCapture() = delete;
	ASceneCapture(const ASceneCapture&) = delete;
	ASceneCapture& operator=(const ASceneCapture&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	void PostLoad() { NativeCall<void>(this, "ASceneCapture.PostLoad()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ASceneCapture.StaticClass()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ASceneCapture.Serialize(FArchive&)", Ar); }
};
