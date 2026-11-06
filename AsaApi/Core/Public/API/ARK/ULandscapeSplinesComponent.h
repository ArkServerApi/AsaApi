#pragma once
#include "BulkForward.h"
#include "UPrimitiveComponent.h"

struct ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	ULandscapeSplinesComponent() = delete;
	~ULandscapeSplinesComponent() = delete;
	ULandscapeSplinesComponent(const ULandscapeSplinesComponent&) = delete;
	ULandscapeSplinesComponent& operator=(const ULandscapeSplinesComponent&) = delete;
	static UClass* GetPrivateStaticClass() { return StaticClass(); }

	void OnRegister() { NativeCall<void>(this, "ULandscapeSplinesComponent.OnRegister()"); }
	static UClass* StaticClass() { return NativeCall<UClass*>(nullptr, "ULandscapeSplinesComponent.StaticClass()"); }
	TArray<USplineMeshComponent*, TSizedDefaultAllocator<32> >* GetSplineMeshComponents(TArray<USplineMeshComponent*, TSizedDefaultAllocator<32> >* result) { return NativeCall<TArray<USplineMeshComponent*, TSizedDefaultAllocator<32> >*, TArray<USplineMeshComponent*, TSizedDefaultAllocator<32> >*>(this, "ULandscapeSplinesComponent.GetSplineMeshComponents()", result); }
	void CheckSplinesValid() { NativeCall<void>(this, "ULandscapeSplinesComponent.CheckSplinesValid()"); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeSplinesComponent.PostLoad()"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ULandscapeSplinesComponent.Serialize(FArchive&)", Ar); }
};
