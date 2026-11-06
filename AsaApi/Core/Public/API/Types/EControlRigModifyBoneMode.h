#pragma once


enum class EControlRigModifyBoneMode:unsigned char
{
	OverrideLocal = 0x0,
	OverrideGlobal = 0x1,
	AdditiveLocal = 0x2,
	AdditiveGlobal = 0x3,
	Max = 0x4
};