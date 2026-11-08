#pragma once
#include "BulkForward.h"
#include "AMatineeActor.h"

struct AShooterMatineeActor : public AMatineeActor
{
public:
	AShooterMatineeActor() = delete;
	~AShooterMatineeActor() = delete;
	AShooterMatineeActor(const AShooterMatineeActor&) = delete;
	AShooterMatineeActor& operator=(const AShooterMatineeActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AShooterMatineeActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AShooterMatineeActor"); }

	bool& bUseMatineeManagerField() { return *GetNativePointerField<bool*>(this, "AShooterMatineeActor.bUseMatineeManager"); }
	int& MatineeManagerPriorityField() { return *GetNativePointerField<int*>(this, "AShooterMatineeActor.MatineeManagerPriority"); }
	AMatineeActorManager*& MyMatineeManagerField() { return *GetNativePointerField<AMatineeActorManager**>(this, "AShooterMatineeActor.MyMatineeManager"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AShooterMatineeActor.PostInitializeComponents()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AShooterMatineeActor.Tick(float)", DeltaTime); }
};
