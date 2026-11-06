#pragma once


enum class ELinearConstraintMotion:int
{
	LCM_Free = 0x0,
	LCM_Limited = 0x1,
	LCM_Locked = 0x2,
	LCM_MAX = 0x3
};