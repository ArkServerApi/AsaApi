#pragma once
#include "BulkForward.h"
#include "ADestructibleActor.h"

struct ADestroyedMeshActor : public ADestructibleActor
{
public:
	ADestroyedMeshActor() = delete;
	~ADestroyedMeshActor() = delete;
	ADestroyedMeshActor(const ADestroyedMeshActor&) = delete;
	ADestroyedMeshActor& operator=(const ADestroyedMeshActor&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	float& TimeToSetNoCollisionField() { return *GetNativePointerField<float*>(this, "ADestroyedMeshActor.TimeToSetNoCollision"); }
	FName& NoCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "ADestroyedMeshActor.NoCollisionProfileName"); }
	FName& DefaultCollisionProfileNameField() { return *GetNativePointerField<FName*>(this, "ADestroyedMeshActor.DefaultCollisionProfileName"); }
	void BeginPlay() { NativeCall<void>(this, "ADestroyedMeshActor.BeginPlay()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ADestroyedMeshActor.StaticClass()"); }
	void SetNoCollisionProfile() { NativeCall<void>(this, "ADestroyedMeshActor.SetNoCollisionProfile()"); }
};
