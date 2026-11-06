#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct ARuntimeVirtualTextureVolume : public AActor
{
public:
	ARuntimeVirtualTextureVolume() = delete;
	~ARuntimeVirtualTextureVolume() = delete;
	ARuntimeVirtualTextureVolume(const ARuntimeVirtualTextureVolume&) = delete;
	ARuntimeVirtualTextureVolume& operator=(const ARuntimeVirtualTextureVolume&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ARuntimeVirtualTextureVolume.Serialize(FArchive&)", Ar); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ARuntimeVirtualTextureVolume.IsLevelBoundsRelevant()"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "ARuntimeVirtualTextureVolume.NeedsLoadForServer()"); }
};
