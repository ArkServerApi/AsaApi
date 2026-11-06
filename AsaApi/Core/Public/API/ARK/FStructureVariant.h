#pragma once


struct FStructureVariant
{
	// Fields

	FString& VariantNameField() { return *GetNativePointerField<FString*>(this, "FStructureVariant.VariantName"); }
	FName& VariantTagField() { return *GetNativePointerField<FName*>(this, "FStructureVariant.VariantTag"); }
	bool& bUseBPAllowSwitchToVariantField() { return *GetNativePointerField<bool*>(this, "FStructureVariant.bUseBPAllowSwitchToVariant"); }
	TSoftObjectPtr<UStaticMesh>& MeshField() { return *GetNativePointerField<TSoftObjectPtr<UStaticMesh>*>(this, "FStructureVariant.Mesh"); }
	bool& bUseMeshTransformField() { return *GetNativePointerField<bool*>(this, "FStructureVariant.bUseMeshTransform"); }
	UE::Math::TTransform<double>& MeshTransformField() { return *GetNativePointerField<UE::Math::TTransform<double>*>(this, "FStructureVariant.MeshTransform"); }
	TSoftObjectPtr<UGeometryCollection>& DestroyedMeshOverrideField() { return *GetNativePointerField<TSoftObjectPtr<UGeometryCollection>*>(this, "FStructureVariant.DestroyedMeshOverride"); }
	TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >& DestroyedMeshesOverrideField() { return *GetNativePointerField<TArray<FDestructionGeoCollectionInfo, TSizedDefaultAllocator<32> >*>(this, "FStructureVariant.DestroyedMeshesOverride"); }
	TSoftObjectPtr<UTexture2D>& VariantIconField() { return *GetNativePointerField<TSoftObjectPtr<UTexture2D>*>(this, "FStructureVariant.VariantIcon"); }

	// Bitfields

	// Functions

	FStructureVariant& operator=(FStructureVariant* __that) { return NativeCall<FStructureVariant&, FStructureVariant*>(this, "FStructureVariant.operator=(FStructureVariant&&)", __that); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FStructureVariant>(); }
};