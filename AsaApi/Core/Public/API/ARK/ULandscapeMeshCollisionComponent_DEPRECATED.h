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
	static UClass* StaticClass() { return AsaApi::ResolveClass("ULandscapeMeshCollisionComponent_DEPRECATED"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ULandscapeMeshCollisionComponent_DEPRECATED"); }

	FGuid& MeshGuidField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeMeshCollisionComponent_DEPRECATED.MeshGuid"); }
};
