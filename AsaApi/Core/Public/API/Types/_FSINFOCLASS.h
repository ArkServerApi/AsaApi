#pragma once


enum class _FSINFOCLASS:int
{
	FileFsVolumeInformation = 0x1,
	FileFsLabelInformation = 0x2,
	FileFsSizeInformation = 0x3,
	FileFsDeviceInformation = 0x4,
	FileFsAttributeInformation = 0x5,
	FileFsControlInformation = 0x6,
	FileFsFullSizeInformation = 0x7,
	FileFsObjectIdInformation = 0x8,
	FileFsDriverPathInformation = 0x9,
	FileFsVolumeFlagsInformation = 0xA,
	FileFsSectorSizeInformation = 0xB,
	FileFsDataCopyInformation = 0xC,
	FileFsMetadataSizeInformation = 0xD,
	FileFsFullSizeInformationEx = 0xE,
	FileFsMaximumInformation = 0xF
};