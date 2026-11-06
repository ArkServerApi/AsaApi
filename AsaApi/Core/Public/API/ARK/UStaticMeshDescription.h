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
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
	void RegisterAttributes() { NativeCall<void>(this, "UStaticMeshDescription.RegisterAttributes()"); }
};
