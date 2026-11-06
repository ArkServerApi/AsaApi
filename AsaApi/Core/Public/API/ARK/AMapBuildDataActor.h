#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AMapBuildDataActor : public AActor
{
public:
	AMapBuildDataActor() = delete;
	~AMapBuildDataActor() = delete;
	AMapBuildDataActor(const AMapBuildDataActor&) = delete;
	AMapBuildDataActor& operator=(const AMapBuildDataActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AMapBuildDataActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AMapBuildDataActor"); }

	FName& CellPackageField() { return *GetNativePointerField<FName*>(this, "AMapBuildDataActor.CellPackage"); }
	FGuid& LevelBuildDataIdField() { return *GetNativePointerField<FGuid*>(this, "AMapBuildDataActor.LevelBuildDataId"); }
	bool& bAddedToWorldField() { return *GetNativePointerField<bool*>(this, "AMapBuildDataActor.bAddedToWorld"); }
	void GetActorBounds(bool bOnlyCollidingComponents, UE::Math::TVector<double>& OutOrigin, UE::Math::TVector<double>& OutBoxExtent, bool bIncludeFromChildActors) { NativeCall<void, bool, UE::Math::TVector<double>&, UE::Math::TVector<double>&, bool>(this, "AMapBuildDataActor.GetActorBounds(bool,UE::Math::TVector<double>&,UE::Math::TVector<double>&,bool)", bOnlyCollidingComponents, OutOrigin, OutBoxExtent, bIncludeFromChildActors); }
	void BeginDestroy() { NativeCall<void>(this, "AMapBuildDataActor.BeginDestroy()"); }
	void PostLoad() { NativeCall<void>(this, "AMapBuildDataActor.PostLoad()"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "AMapBuildDataActor.PostUnregisterAllComponents()"); }
	void PreRegisterAllComponents() { NativeCall<void>(this, "AMapBuildDataActor.PreRegisterAllComponents()"); }
};
