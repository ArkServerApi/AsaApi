#pragma once


enum class ERigTransformStackEntryType:int
{
	TransformPose = 0x0,
	ControlOffset = 0x1,
	ControlShape = 0x2,
	CurveValue = 0x3
};