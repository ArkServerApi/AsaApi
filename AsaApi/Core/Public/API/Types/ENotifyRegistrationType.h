#pragma once


enum class ENotifyRegistrationType:int
{
	NRT_Class = 0x0,
	NRT_ClassCDO = 0x1,
	NRT_Struct = 0x2,
	NRT_Enum = 0x3,
	NRT_Package = 0x4,
	NRT_NoExportObject = 0x5
};