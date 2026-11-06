#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ANavMeshBoundsVolume : public AVolume
{
public:
	ANavMeshBoundsVolume() = delete;
	~ANavMeshBoundsVolume() = delete;
	ANavMeshBoundsVolume(const ANavMeshBoundsVolume&) = delete;
	ANavMeshBoundsVolume& operator=(const ANavMeshBoundsVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ANavMeshBoundsVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ANavMeshBoundsVolume"); }

	FNavAgentSelector& SupportedAgentsField() { return *GetNativePointerField<FNavAgentSelector*>(this, "ANavMeshBoundsVolume.SupportedAgents"); }
	BitFieldValue<bool, unsigned char> bAllowPhysicsOverlap() { return { this, "ANavMeshBoundsVolume.bAllowPhysicsOverlap"}; }
	void PostRegisterAllComponents() { NativeCall<void>(this, "ANavMeshBoundsVolume.PostRegisterAllComponents()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "ANavMeshBoundsVolume.PostUnregisterAllComponents()"); }
};
