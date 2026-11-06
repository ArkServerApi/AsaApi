#pragma once


enum class EStandardGroupNameEnum:unsigned char
{
	Dataflow_EStandardGroupNameEnum_Transform = 0x0,
	Dataflow_EStandardGroupNameEnum_Geometry = 0x1,
	Dataflow_EStandardGroupNameEnum_Faces = 0x2,
	Dataflow_EStandardGroupNameEnum_Vertices = 0x3,
	Dataflow_EStandardGroupNameEnum_Material = 0x4,
	Dataflow_EStandardGroupNameEnum_Breaking = 0x5,
	Dataflow_EStandardGroupNameEnum_Custom = 0x6,
	Dataflow_Max = 0x7
};