#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ADecalActor : public AActor
{
public:
	ADecalActor() = delete;
	~ADecalActor() = delete;
	ADecalActor(const ADecalActor&) = delete;
	ADecalActor& operator=(const ADecalActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADecalActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADecalActor"); }

	void SetDecalMaterial(UMaterialInterface* NewDecalMaterial) { NativeCall<void, UMaterialInterface*>(this, "ADecalActor.SetDecalMaterial(UMaterialInterface*)", NewDecalMaterial); }
	void PostLoad() { NativeCall<void>(this, "ADecalActor.PostLoad()"); }
	UMaterialInstanceDynamic* CreateDynamicMaterialInstance() { return NativeCall<UMaterialInstanceDynamic*>(this, "ADecalActor.CreateDynamicMaterialInstance()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ADecalActor.Serialize(FArchive&)", Ar); }
};
