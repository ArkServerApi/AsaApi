#pragma once


enum class EInterpCurveMode:int
{
	CIM_Linear = 0x0,
	CIM_CurveAuto = 0x1,
	CIM_Constant = 0x2,
	CIM_CurveUser = 0x3,
	CIM_CurveBreak = 0x4,
	CIM_CurveAutoClamped = 0x5,
	CIM_Unknown = 0x6
};