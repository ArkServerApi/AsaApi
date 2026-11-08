#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct AMatineeActorManager : public AInfo
{
public:
	AMatineeActorManager() = delete;
	~AMatineeActorManager() = delete;
	AMatineeActorManager(const AMatineeActorManager&) = delete;
	AMatineeActorManager& operator=(const AMatineeActorManager&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMatineeActorManager"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMatineeActorManager"); }

	bool& bPriorityToFloatSetsField() { return *GetNativePointerField<bool*>(this, "AMatineeActorManager.bPriorityToFloatSets"); }
	bool& bPriorityToVectorSetsField() { return *GetNativePointerField<bool*>(this, "AMatineeActorManager.bPriorityToVectorSets"); }
	bool& bTickedOrderField() { return *GetNativePointerField<bool*>(this, "AMatineeActorManager.bTickedOrder"); }
	TArray<AShooterMatineeActor*, TSizedDefaultAllocator<32> >& MatineeActorListField() { return *GetNativePointerField<TArray<AShooterMatineeActor*, TSizedDefaultAllocator<32> >*>(this, "AMatineeActorManager.MatineeActorList"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AMatineeActorManager.PreInitializeComponents()"); }
	void PostLoad() { NativeCall<void>(this, "AMatineeActorManager.PostLoad()"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "AMatineeActorManager.Tick(float)", DeltaTime); }
};
