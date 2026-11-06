#pragma once


enum class EPropertyFlags:unsigned __int64
{
	CPF_None = 0x0,
	CPF_Edit = 0x1,
	CPF_ConstParm = 0x2,
	CPF_BlueprintVisible = 0x4,
	CPF_ExportObject = 0x8,
	CPF_BlueprintReadOnly = 0x10,
	CPF_Net = 0x20,
	CPF_EditFixedSize = 0x40,
	CPF_Parm = 0x80,
	CPF_OutParm = 0x100,
	CPF_ZeroConstructor = 0x200,
	CPF_ReturnParm = 0x400,
	CPF_DisableEditOnTemplate = 0x800,
	CPF_NonNullable = 0x1000,
	CPF_Transient = 0x2000,
	CPF_Config = 0x4000,
	CPF_RequiredParm = 0xFFFF8000,
	CPF_DisableEditOnInstance = 0x10000,
	CPF_EditConst = 0x20000,
	CPF_GlobalConfig = 0x40000,
	CPF_InstancedReference = 0x80000,
	CPF_DuplicateTransient = 0x200000,
	CPF_SaveGame = 0x1000000,
	CPF_NoClear = 0x2000000,
	CPF_ReferenceParm = 0x8000000,
	CPF_BlueprintAssignable = 0x10000000,
	CPF_Deprecated = 0x20000000,
	CPF_IsPlainOldData = 0x40000000,
	CPF_RepSkip = 0x80000000,

};