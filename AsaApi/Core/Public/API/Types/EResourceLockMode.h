#pragma once


enum class EResourceLockMode:int
{
	RLM_ReadOnly = 0x0,
	RLM_WriteOnly = 0x1,
	RLM_WriteOnly_NoOverwrite = 0x2,
	RLM_Num = 0x3
};