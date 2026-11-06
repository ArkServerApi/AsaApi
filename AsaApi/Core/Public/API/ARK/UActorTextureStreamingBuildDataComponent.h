#pragma once
#include "BulkForward.h"
#include "UActorComponent.h"

struct UActorTextureStreamingBuildDataComponent : public UActorComponent
{
public:
	UActorTextureStreamingBuildDataComponent() = delete;
	~UActorTextureStreamingBuildDataComponent() = delete;
	UActorTextureStreamingBuildDataComponent(const UActorTextureStreamingBuildDataComponent&) = delete;
	UActorTextureStreamingBuildDataComponent& operator=(const UActorTextureStreamingBuildDataComponent&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	bool IsEditorOnly() { return NativeCall<bool>(this, "UActorTextureStreamingBuildDataComponent.IsEditorOnly()"); }
};
