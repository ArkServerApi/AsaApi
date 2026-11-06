#pragma once


enum class _WHEA_ERROR_SOURCE_TYPE:int
{
	WheaErrSrcTypeMCE = 0x0,
	WheaErrSrcTypeCMC = 0x1,
	WheaErrSrcTypeCPE = 0x2,
	WheaErrSrcTypeNMI = 0x3,
	WheaErrSrcTypePCIe = 0x4,
	WheaErrSrcTypeGeneric = 0x5,
	WheaErrSrcTypeINIT = 0x6,
	WheaErrSrcTypeBOOT = 0x7,
	WheaErrSrcTypeSCIGeneric = 0x8,
	WheaErrSrcTypeIPFMCA = 0x9,
	WheaErrSrcTypeIPFCMC = 0xA,
	WheaErrSrcTypeIPFCPE = 0xB,
	WheaErrSrcTypeGenericV2 = 0xC,
	WheaErrSrcTypeSCIGenericV2 = 0xD,
	WheaErrSrcTypeBMC = 0xE,
	WheaErrSrcTypePMEM = 0xF,
	WheaErrSrcTypeDeviceDriver = 0x10,
	WheaErrSrcTypeMax = 0x11
};