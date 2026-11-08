#pragma once


enum class EBlueprintType:int
{
	BPTYPE_Normal = 0x0,
	BPTYPE_Const = 0x1,
	BPTYPE_MacroLibrary = 0x2,
	BPTYPE_Interface = 0x3,
	BPTYPE_LevelScript = 0x4,
	BPTYPE_FunctionLibrary = 0x5,
	BPTYPE_MAX = 0x6
};