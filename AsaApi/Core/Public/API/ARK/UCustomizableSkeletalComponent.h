#pragma once
#include "BulkForward.h"
#include "USceneComponent.h"

struct UCustomizableSkeletalComponent : public USceneComponent
{
public:
	UCustomizableSkeletalComponent() = delete;
	~UCustomizableSkeletalComponent() = delete;
	UCustomizableSkeletalComponent(const UCustomizableSkeletalComponent&) = delete;
	UCustomizableSkeletalComponent& operator=(const UCustomizableSkeletalComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	int& ComponentIndexField() { return *GetNativePointerField<int*>(this, "UCustomizableSkeletalComponent.ComponentIndex"); }
	FName& ComponentNameField() { return *GetNativePointerField<FName*>(this, "UCustomizableSkeletalComponent.ComponentName"); }
	bool& bSkipSetReferenceSkeletalMeshField() { return *GetNativePointerField<bool*>(this, "UCustomizableSkeletalComponent.bSkipSetReferenceSkeletalMesh"); }
	bool& bSkipSetSkeletalMeshOnAttachField() { return *GetNativePointerField<bool*>(this, "UCustomizableSkeletalComponent.bSkipSetSkeletalMeshOnAttach"); }
	void OnAttachmentChanged() { NativeCall<void>(this, "UCustomizableSkeletalComponent.OnAttachmentChanged()"); }
};
