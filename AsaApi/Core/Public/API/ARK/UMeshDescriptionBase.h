#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UMeshDescriptionBase : public UObject
{
public:
	UMeshDescriptionBase() = delete;
	~UMeshDescriptionBase() = delete;
	UMeshDescriptionBase(const UMeshDescriptionBase&) = delete;
	UMeshDescriptionBase& operator=(const UMeshDescriptionBase&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UMeshDescriptionBase"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UMeshDescriptionBase"); }
	FMeshDescription& OwnedMeshDescriptionField() { return *GetNativePointerField<FMeshDescription*>(this, "UMeshDescriptionBase.OwnedMeshDescription"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UMeshDescriptionBase.Serialize(FArchive&)", Ar); }
	void RegisterAttributes() { NativeCall<void>(this, "UMeshDescriptionBase.RegisterAttributes()"); }
};
