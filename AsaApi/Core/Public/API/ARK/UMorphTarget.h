#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UMorphTarget : public UObject
{
public:
	UMorphTarget() = delete;
	~UMorphTarget() = delete;
	UMorphTarget(const UMorphTarget&) = delete;
	UMorphTarget& operator=(const UMorphTarget&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMorphTarget"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMorphTarget"); }
	bool HasValidData() { return NativeCall<bool>(this, "UMorphTarget.HasValidData()"); }
	bool UsesBuiltinMorphTargetCompression() { return NativeCall<bool>(this, "UMorphTarget.UsesBuiltinMorphTargetCompression()"); }
	bool HasDataForLOD(int LODIndex) { return NativeCall<bool, int>(this, "UMorphTarget.HasDataForLOD(int)", LODIndex); }
	void PostLoad() { NativeCall<void>(this, "UMorphTarget.PostLoad()"); }
	bool IsGeneratedByEngine(int LODIndex) { return NativeCall<bool, int>(this, "UMorphTarget.IsGeneratedByEngine(int)", LODIndex); }
	void SerializeMemoryArchive(FMemoryArchive& Ar) { NativeCall<void, FMemoryArchive&>(this, "UMorphTarget.SerializeMemoryArchive(FMemoryArchive&)", Ar); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UMorphTarget.Serialize(FArchive&)", Ar); }
	const FString& GetCustomImportedSourceFilename(int LODIndex) { return NativeCall<const FString&, int>(this, "UMorphTarget.GetCustomImportedSourceFilename(int)", LODIndex); }
	int GetNumDeltasForLOD(int LODIndex) { return NativeCall<int, int>(this, "UMorphTarget.GetNumDeltasForLOD(int)", LODIndex); }
	bool HasDataForSection(int LODIndex, int SectionIndex) { return NativeCall<bool, int, int>(this, "UMorphTarget.HasDataForSection(int,int)", LODIndex, SectionIndex); }
	void SetCustomImportedSourceFilename(int LODIndex, const FString& InSourceFilename) { NativeCall<void, int, const FString&>(this, "UMorphTarget.SetCustomImportedSourceFilename(int,FString&)", LODIndex, InSourceFilename); }
	void EmptyMorphLODModels() { NativeCall<void>(this, "UMorphTarget.EmptyMorphLODModels()"); }
	bool IsCustomImported(int LODIndex) { return NativeCall<bool, int>(this, "UMorphTarget.IsCustomImported(int)", LODIndex); }
	void SetGeneratedByEngine(int LODIndex, bool bInGeneratedByEngine) { NativeCall<void, int, bool>(this, "UMorphTarget.SetGeneratedByEngine(int,bool)", LODIndex, bInGeneratedByEngine); }
};
