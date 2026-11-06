#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALevelBounds : public AActor
{
public:
	ALevelBounds() = delete;
	~ALevelBounds() = delete;
	ALevelBounds(const ALevelBounds&) = delete;
	ALevelBounds& operator=(const ALevelBounds&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bAutoUpdateBoundsField() { return *GetNativePointerField<bool*>(this, "ALevelBounds.bAutoUpdateBounds"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "ALevelBounds.Tick(float)", DeltaTime); }
	void PostLoad() { NativeCall<void>(this, "ALevelBounds.PostLoad()"); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ALevelBounds.IsLevelBoundsRelevant()"); }
};
