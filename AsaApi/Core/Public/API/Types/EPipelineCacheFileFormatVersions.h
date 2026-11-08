#pragma once


enum class EPipelineCacheFileFormatVersions:unsigned int
{
	FirstWorking = 0x7,
	LibraryID = 0x9,
	ShaderMetaData = 0xA,
	SortedVertexDesc = 0xB,
	TOCMagicGuard = 0xC,
	PSOUsageMask = 0xD,
	PSOBindCount = 0xE,
	EOFMarker = 0xF,
	EngineFlags = 0x10,
	Subpass = 0x11,
	PatchSizeReduction_NoDuplicatedGuid = 0x12,
	AlphaToCoverage = 0x13,
	AddingMeshShaders = 0x14,
	RemovingTessellationShaders = 0x15,
	LastUsedTime = 0x16,
	MoreRenderTargetFlags = 0x17,
	FragmentDensityAttachment = 0x18,
	AddingDepthClipMode = 0x19
};