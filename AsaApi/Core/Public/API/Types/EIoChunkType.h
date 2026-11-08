#pragma once


enum class EIoChunkType:unsigned char
{
	Invalid = 0x0,
	ExportBundleData = 0x1,
	BulkData = 0x2,
	OptionalBulkData = 0x3,
	MemoryMappedBulkData = 0x4,
	ScriptObjects = 0x5,
	ContainerHeader = 0x6,
	ExternalFile = 0x7,
	ShaderCodeLibrary = 0x8,
	ShaderCode = 0x9,
	PackageStoreEntry = 0xA,
	DerivedData = 0xB,
	EditorDerivedData = 0xC,
	PackageResource = 0xD,
	MAX = 0xE
};