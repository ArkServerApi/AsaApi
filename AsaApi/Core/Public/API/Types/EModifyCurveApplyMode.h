#pragma once


enum class EModifyCurveApplyMode:unsigned char
{
	Add = 0x0,
	Scale = 0x1,
	Blend = 0x2,
	WeightedMovingAverage = 0x3,
	RemapCurve = 0x4
};