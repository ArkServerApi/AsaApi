#pragma once
#include "BulkForward.h"
#include "ARecastNavMesh.h"

struct APrimalRecastNavMesh : public ARecastNavMesh
{
public:
	APrimalRecastNavMesh() = delete;
	~APrimalRecastNavMesh() = delete;
	APrimalRecastNavMesh(const APrimalRecastNavMesh&) = delete;
	APrimalRecastNavMesh& operator=(const APrimalRecastNavMesh&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("APrimalRecastNavMesh"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("APrimalRecastNavMesh"); }

	const UClass* GetNavAreaAtLocation(const UE::Math::TVector<double>& Location, const UE::Math::TVector<double>& Extent) { return NativeCall<const UClass*, const UE::Math::TVector<double>&, const UE::Math::TVector<double>&>(this, "APrimalRecastNavMesh.GetNavAreaAtLocation(UE::Math::TVector<double>&,UE::Math::TVector<double>&)", Location, Extent); }
	FRecastNavMeshGenerator* CreateGeneratorInstance() { return NativeCall<FRecastNavMeshGenerator*>(this, "APrimalRecastNavMesh.CreateGeneratorInstance()"); }
};
