#pragma once
#include "BulkForward.h"
#include <API/UE/Math/Box2D.h>
#include "AInfo.h"

struct AWorldPartitionMiniMap : public AInfo
{
public:
	AWorldPartitionMiniMap() = delete;
	~AWorldPartitionMiniMap() = delete;
	AWorldPartitionMiniMap(const AWorldPartitionMiniMap&) = delete;
	AWorldPartitionMiniMap& operator=(const AWorldPartitionMiniMap&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AWorldPartitionMiniMap"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AWorldPartitionMiniMap"); }

	UE::Math::TBox2<double>& UVOffsetField() { return *GetNativePointerField<UE::Math::TBox2<double>*>(this, "AWorldPartitionMiniMap.UVOffset"); }
	int& WorldUnitsPerPixelField() { return *GetNativePointerField<int*>(this, "AWorldPartitionMiniMap.WorldUnitsPerPixel"); }
	int& BuilderCellSizeField() { return *GetNativePointerField<int*>(this, "AWorldPartitionMiniMap.BuilderCellSize"); }
	unsigned int& CaptureWarmupFramesField() { return *GetNativePointerField<unsigned int*>(this, "AWorldPartitionMiniMap.CaptureWarmupFrames"); }
	int& MiniMapTileSize_DEPRECATEDField() { return *GetNativePointerField<int*>(this, "AWorldPartitionMiniMap.MiniMapTileSize_DEPRECATED"); }
	void PostLoad() { NativeCall<void>(this, "AWorldPartitionMiniMap.PostLoad()"); }
	bool IsEditorOnly() { return NativeCall<bool>(this, "AWorldPartitionMiniMap.IsEditorOnly()"); }
};
