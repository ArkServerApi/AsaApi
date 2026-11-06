#pragma once


enum class EMeshBooleanOperationEnum:unsigned char
{
	Dataflow_MeshBoolean_Union = 0x0,
	Dataflow_MeshBoolean_Intersect = 0x1,
	Dataflow_MeshBoolean_Difference = 0x2,
	Dataflow_Max = 0x3
};