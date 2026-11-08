#pragma once
#include "BulkForward.h"
#include "USkeletalMeshComponent.h"

struct USkeletalMeshComponentWithSoftRef : public USkeletalMeshComponent
{
public:
	USkeletalMeshComponentWithSoftRef() = delete;
	~USkeletalMeshComponentWithSoftRef() = delete;
	USkeletalMeshComponentWithSoftRef(const USkeletalMeshComponentWithSoftRef&) = delete;
	USkeletalMeshComponentWithSoftRef& operator=(const USkeletalMeshComponentWithSoftRef&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("USkeletalMeshComponentWithSoftRef"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("USkeletalMeshComponentWithSoftRef"); }

	int& SoftRefMaterialCountField() { return *GetNativePointerField<int*>(this, "USkeletalMeshComponentWithSoftRef.SoftRefMaterialCount"); }
	BitFieldValue<bool, unsigned char> bAllowHardRef() { return { this, "USkeletalMeshComponentWithSoftRef.bAllowHardRef"}; }
	void ResolveSynchronous() { NativeCall<void>(this, "USkeletalMeshComponentWithSoftRef.ResolveSynchronous()"); }
	int GetNumMaterials() { return NativeCall<int>(this, "USkeletalMeshComponentWithSoftRef.GetNumMaterials()"); }
};
