#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AGroundClutterLayerActor : public AActor
{
public:
	AGroundClutterLayerActor() = delete;
	~AGroundClutterLayerActor() = delete;
	AGroundClutterLayerActor(const AGroundClutterLayerActor&) = delete;
	AGroundClutterLayerActor& operator=(const AGroundClutterLayerActor&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "AGroundClutterLayerActor.IsLevelBoundsRelevant()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "AGroundClutterLayerActor.StaticClass()"); }
};
