#pragma once


enum class ETargetPlatformFeatures:int
{
	AudioStreaming = 0x0,
	DistanceFieldShadows = 0x1,
	DistanceFieldAO = 0x2,
	GrayscaleSRGB = 0x3,
	HighQualityLightmaps = 0x4,
	LowQualityLightmaps = 0x5,
	MultipleGameInstances = 0x6,
	Packaging = 0x7,
	SdkConnectDisconnect = 0x8,
	TextureStreaming = 0x9,
	MeshLODStreaming = 0xA,
	LandscapeMeshLODStreaming = 0xB,
	UserCredentials = 0xC,
	MobileRendering = 0xD,
	DeferredRendering = 0xE,
	ShouldSplitPaksIntoSmallerSizes = 0xF,
	HalfFloatVertexFormat = 0x10,
	DeviceOutputLog = 0x11,
	MemoryMappedFiles = 0x12,
	MemoryMappedAudio = 0x13,
	MemoryMappedAnimation = 0x14,
	SparseTextures = 0x15,
	VirtualTextureStreaming = 0x16,
	LumenGI = 0x17,
	HardwareLZDecompression = 0x18,
	CookFileRegionMetadata = 0x19,
	DirectDataExchange = 0x1A
};