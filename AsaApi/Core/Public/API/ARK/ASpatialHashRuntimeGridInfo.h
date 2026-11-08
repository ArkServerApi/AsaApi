#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct ASpatialHashRuntimeGridInfo : public AInfo
{
public:
	ASpatialHashRuntimeGridInfo() = delete;
	~ASpatialHashRuntimeGridInfo() = delete;
	ASpatialHashRuntimeGridInfo(const ASpatialHashRuntimeGridInfo&) = delete;
	ASpatialHashRuntimeGridInfo& operator=(const ASpatialHashRuntimeGridInfo&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("ASpatialHashRuntimeGridInfo"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("ASpatialHashRuntimeGridInfo"); }

	FSpatialHashRuntimeGrid& GridSettingsField() { return *GetNativePointerField<FSpatialHashRuntimeGrid*>(this, "ASpatialHashRuntimeGridInfo.GridSettings"); }
	void Serialize(FArchive& Ar) { NativeCall<void, FArchive&>(this, "ASpatialHashRuntimeGridInfo.Serialize(FArchive&)", Ar); }
};
