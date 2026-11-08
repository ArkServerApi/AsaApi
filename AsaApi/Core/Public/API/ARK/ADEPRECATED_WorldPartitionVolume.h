#pragma once
#include "BulkForward.h"
#include "AVolume.h"

struct ADEPRECATED_WorldPartitionVolume : public AVolume
{
public:
	ADEPRECATED_WorldPartitionVolume() = delete;
	~ADEPRECATED_WorldPartitionVolume() = delete;
	ADEPRECATED_WorldPartitionVolume(const ADEPRECATED_WorldPartitionVolume&) = delete;
	ADEPRECATED_WorldPartitionVolume& operator=(const ADEPRECATED_WorldPartitionVolume&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ADEPRECATED_WorldPartitionVolume"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ADEPRECATED_WorldPartitionVolume"); }

	bool IsEditorOnly() { return NativeCall<bool>(this, "ADEPRECATED_WorldPartitionVolume.IsEditorOnly()"); }
};
