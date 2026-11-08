#pragma once


enum class ESelectSubjectTypeEnum:unsigned char
{
	Dataflow_SelectSubjectType_Vertices = 0x0,
	Dataflow_SelectSubjectType_BoundingBox = 0x1,
	Dataflow_SelectSubjectType_Centroid = 0x2,
	Dataflow_Max = 0x3
};