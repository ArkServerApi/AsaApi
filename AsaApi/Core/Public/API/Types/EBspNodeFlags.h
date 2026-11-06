#pragma once


enum class EBspNodeFlags:int
{
	NF_NotCsg = 0x1,
	NF_NotVisBlocking = 0x4,
	NF_BrightCorners = 0x10,
	NF_IsNew = 0x20,
	NF_IsFront = 0x40,
	NF_IsBack = 0x80
};