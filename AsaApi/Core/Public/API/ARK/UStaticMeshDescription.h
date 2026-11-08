#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UMeshDescriptionBase.h"

class UStaticMeshDescription : public UMeshDescriptionBase
{
public:
	UStaticMeshDescription() = delete;
	~UStaticMeshDescription() = delete;
	UStaticMeshDescription(const UStaticMeshDescription&) = delete;
	UStaticMeshDescription& operator=(const UStaticMeshDescription&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UStaticMeshDescription"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UStaticMeshDescription"); }
	void RegisterAttributes() { NativeCall<void>(this, "UStaticMeshDescription.RegisterAttributes()"); }
};
