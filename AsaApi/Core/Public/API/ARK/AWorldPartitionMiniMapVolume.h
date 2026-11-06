#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct AWorldPartitionMiniMapVolume : public AVolume
{
public:
	AWorldPartitionMiniMapVolume() = delete;
	~AWorldPartitionMiniMapVolume() = delete;
	AWorldPartitionMiniMapVolume(const AWorldPartitionMiniMapVolume&) = delete;
	AWorldPartitionMiniMapVolume& operator=(const AWorldPartitionMiniMapVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldPartitionMiniMapVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldPartitionMiniMapVolume"); }

	bool IsEditorOnly() { return NativeCall<bool>(this, "AWorldPartitionMiniMapVolume.IsEditorOnly()"); }
};
