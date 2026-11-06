#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ALevelVariantSetsActor : public AActor
{
public:
	ALevelVariantSetsActor() = delete;
	~ALevelVariantSetsActor() = delete;
	ALevelVariantSetsActor(const ALevelVariantSetsActor&) = delete;
	ALevelVariantSetsActor& operator=(const ALevelVariantSetsActor&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ALevelVariantSetsActor"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ALevelVariantSetsActor"); }

	FSoftObjectPath& LevelVariantSetsField() { return *GetNativePointerField<FSoftObjectPath*>(this, "ALevelVariantSetsActor.LevelVariantSets"); }
	ULevelVariantSets* GetLevelVariantSets(bool bLoad) { return NativeCall<ULevelVariantSets*, bool>(this, "ALevelVariantSetsActor.GetLevelVariantSets(bool)", bLoad); }
	void SetLevelVariantSets(ULevelVariantSets* InVariantSets) { NativeCall<void, ULevelVariantSets*>(this, "ALevelVariantSetsActor.SetLevelVariantSets(ULevelVariantSets*)", InVariantSets); }
};
