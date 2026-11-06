#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

class UBodySetupCore : public UObject
{
public:
	UBodySetupCore() = delete;
	~UBodySetupCore() = delete;
	UBodySetupCore(const UBodySetupCore&) = delete;
	UBodySetupCore& operator=(const UBodySetupCore&) = delete;
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "UBodySetupCore.StaticClass()"); }
	static UClass* GetPrivateStaticClass() { return StaticClass(); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "UBodySetupCore.BoneName"); }
	BitFieldValue<bool, unsigned __int32> bReallyUseTriangleMeshCollisions() { return { this, "UBodySetupCore.bReallyUseTriangleMeshCollisions"}; }
	BitFieldValue<bool, unsigned __int32> bUseLastLODInsteadOfFirstForCollisionMesh() { return { this, "UBodySetupCore.bUseLastLODInsteadOfFirstForCollisionMesh"}; }
	BitFieldValue<bool, unsigned __int32> bUseSecondToLastLODInsteadOfFirstForCollisionMesh() { return { this, "UBodySetupCore.bUseSecondToLastLODInsteadOfFirstForCollisionMesh"}; }
	BitFieldValue<bool, unsigned __int32> bUsesSkelCustomIgnore() { return { this, "UBodySetupCore.bUsesSkelCustomIgnore"}; }
	BitFieldValue<bool, unsigned __int32> bOneWayCollision() { return { this, "UBodySetupCore.bOneWayCollision"}; }
};
