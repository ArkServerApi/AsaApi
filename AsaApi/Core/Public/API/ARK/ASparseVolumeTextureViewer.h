#pragma once
#include "BulkForward.h"
#include "AInfo.h"

struct ASparseVolumeTextureViewer : public AInfo
{
public:
	ASparseVolumeTextureViewer() = delete;
	~ASparseVolumeTextureViewer() = delete;
	ASparseVolumeTextureViewer(const ASparseVolumeTextureViewer&) = delete;
	ASparseVolumeTextureViewer& operator=(const ASparseVolumeTextureViewer&) = delete;
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;

};
