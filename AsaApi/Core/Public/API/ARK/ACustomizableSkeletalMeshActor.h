#pragma once
#include "BulkForward.h"
#include "ASkeletalMeshActor.h"

struct ACustomizableSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	ACustomizableSkeletalMeshActor() = delete;
	~ACustomizableSkeletalMeshActor() = delete;
	ACustomizableSkeletalMeshActor(const ACustomizableSkeletalMeshActor&) = delete;
	ACustomizableSkeletalMeshActor& operator=(const ACustomizableSkeletalMeshActor&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool& bDebugMaterialEnabledField() { return *GetNativePointerField<bool*>(this, "ACustomizableSkeletalMeshActor.bDebugMaterialEnabled"); }
	bool& bRemoveDebugMaterialField() { return *GetNativePointerField<bool*>(this, "ACustomizableSkeletalMeshActor.bRemoveDebugMaterial"); }
	void SwitchComponentsMaterials(UCustomizableObjectInstance* Instance) { NativeCall<void, UCustomizableObjectInstance*>(this, "ACustomizableSkeletalMeshActor.SwitchComponentsMaterials(UCustomizableObjectInstance*)", Instance); }
};
