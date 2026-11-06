#pragma once


enum class ERotationOrderEnum:unsigned char
{
	Dataflow_RotationOrder_XYZ = 0x0,
	Dataflow_RotationOrder_YZX = 0x1,
	Dataflow_RotationOrder_ZXY = 0x2,
	Dataflow_RotationOrder_XZY = 0x3,
	Dataflow_RotationOrder_YXZ = 0x4,
	Dataflow_RotationOrder_ZYX = 0x5,
	Dataflow_Max = 0x6
};