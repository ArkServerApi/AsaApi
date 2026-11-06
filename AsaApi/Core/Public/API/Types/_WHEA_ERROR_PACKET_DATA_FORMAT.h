#pragma once


enum class _WHEA_ERROR_PACKET_DATA_FORMAT:int
{
	WheaDataFormatIPFSalRecord = 0x0,
	WheaDataFormatXPFMCA = 0x1,
	WheaDataFormatMemory = 0x2,
	WheaDataFormatPCIExpress = 0x3,
	WheaDataFormatNMIPort = 0x4,
	WheaDataFormatPCIXBus = 0x5,
	WheaDataFormatPCIXDevice = 0x6,
	WheaDataFormatGeneric = 0x7,
	WheaDataFormatMax = 0x8
};