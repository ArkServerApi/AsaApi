#pragma once
#include "BulkForward.h"
#include "ULandscapeHeightfieldCollisionComponent.h"

struct ULandscapeMeshCollisionComponent_DEPRECATED : public ULandscapeHeightfieldCollisionComponent
{
public:
	ULandscapeMeshCollisionComponent_DEPRECATED() = delete;
	~ULandscapeMeshCollisionComponent_DEPRECATED() = delete;
	ULandscapeMeshCollisionComponent_DEPRECATED(const ULandscapeMeshCollisionComponent_DEPRECATED&) = delete;
	ULandscapeMeshCollisionComponent_DEPRECATED& operator=(const ULandscapeMeshCollisionComponent_DEPRECATED&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	FGuid& MeshGuidField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeMeshCollisionComponent_DEPRECATED.MeshGuid"); }
};
