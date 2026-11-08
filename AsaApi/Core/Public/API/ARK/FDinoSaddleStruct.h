#pragma once


struct FDinoSaddleStruct
{
	// Fields

	USkeletalMeshComponent*& SaddleField() { return *GetNativePointerField<USkeletalMeshComponent**>(this, "FDinoSaddleStruct.Saddle"); }
	USkeletalMesh*& SkeletalMeshField() { return *GetNativePointerField<USkeletalMesh**>(this, "FDinoSaddleStruct.SkeletalMesh"); }
	FItemNetID& itemIdField() { return *GetNativePointerField<FItemNetID*>(this, "FDinoSaddleStruct.itemId"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDinoSaddleStruct>(); }
};