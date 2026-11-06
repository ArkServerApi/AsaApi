#pragma once


enum class _WHEA_ERROR_TYPE:int
{
	WheaErrTypeProcessor = 0x0,
	WheaErrTypeMemory = 0x1,
	WheaErrTypePCIExpress = 0x2,
	WheaErrTypeNMI = 0x3,
	WheaErrTypePCIXBus = 0x4,
	WheaErrTypePCIXDevice = 0x5,
	WheaErrTypeGeneric = 0x6,
	WheaErrTypePmem = 0x7
};