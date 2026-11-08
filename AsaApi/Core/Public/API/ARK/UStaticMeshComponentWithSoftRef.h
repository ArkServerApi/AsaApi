#pragma once
#include "BulkForward.h"
#include "UStaticMeshComponent.h"

struct UStaticMeshComponentWithSoftRef : public UStaticMeshComponent
{
public:
	UStaticMeshComponentWithSoftRef() = delete;
	~UStaticMeshComponentWithSoftRef() = delete;
	UStaticMeshComponentWithSoftRef(const UStaticMeshComponentWithSoftRef&) = delete;
	UStaticMeshComponentWithSoftRef& operator=(const UStaticMeshComponentWithSoftRef&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStaticMeshComponentWithSoftRef"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStaticMeshComponentWithSoftRef"); }

	int& SoftRefMaterialCountField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponentWithSoftRef.SoftRefMaterialCount"); }
	int GetNumMaterials() { return NativeCall<int>(this, "UStaticMeshComponentWithSoftRef.GetNumMaterials()"); }
	void ResolveSynchronous() { NativeCall<void>(this, "UStaticMeshComponentWithSoftRef.ResolveSynchronous()"); }
};
