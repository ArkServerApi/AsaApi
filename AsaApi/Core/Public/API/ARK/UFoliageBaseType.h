#pragma once


struct UFoliageBaseType : UObject
{
	// Fields

	TSoftObjectPtr<UGeometryCollection>& SoftDestructionAssetField() { return *GetNativePointerField<TSoftObjectPtr<UGeometryCollection>*>(this, "UFoliageBaseType.SoftDestructionAsset"); }
	bool& bEmissiveLightSourceField() { return *GetNativePointerField<bool*>(this, "UFoliageBaseType.bEmissiveLightSource"); }
	float& LDMaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "UFoliageBaseType.LDMaxDrawDistance"); }

	// Bitfields

	// Functions

	TArray<TObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >* getOverrideMaterials(TArray<TObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<TObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >*, TArray<TObjectPtr<UMaterialInterface>, TSizedDefaultAllocator<32> >*>(this, "UFoliageBaseType.getOverrideMaterials()", result); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// UClass* GetPrivateStaticClass();
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UFoliageBaseType"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void StaticRegisterNativesUFoliageBaseType();
	static UClass* StaticClass() { return AsaApi::ResolveClass("UFoliageBaseType"); }
};