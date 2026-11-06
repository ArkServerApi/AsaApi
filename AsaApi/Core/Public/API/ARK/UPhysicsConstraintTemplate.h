#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UPhysicsConstraintTemplate : public UObject
{
public:
	UPhysicsConstraintTemplate() = delete;
	~UPhysicsConstraintTemplate() = delete;
	UPhysicsConstraintTemplate(const UPhysicsConstraintTemplate&) = delete;
	UPhysicsConstraintTemplate& operator=(const UPhysicsConstraintTemplate&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPhysicsConstraintTemplate"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPhysicsConstraintTemplate"); }
	FConstraintInstance& DefaultInstanceField() { return *GetNativePointerField<FConstraintInstance*>(this, "UPhysicsConstraintTemplate.DefaultInstance"); }
	FConstraintProfileProperties& DefaultProfileField() { return *GetNativePointerField<FConstraintProfileProperties*>(this, "UPhysicsConstraintTemplate.DefaultProfile"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "UPhysicsConstraintTemplate.Serialize(FArchive&)", Ar); }
};
